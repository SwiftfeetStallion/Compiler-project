#include "IRVisitor.hpp"

IRVisitor::IRVisitor(const std::string& str = "output.ll")
    : filename(str), builder(context), module_("file", context) {
  int_type = llvm::Type::getInt32Ty(context);
  void_type = llvm::Type::getVoidTy(context);
  main_type = llvm::FunctionType::get(int_type, false);
  print_type = llvm::FunctionType::get(
    int_type,
    {llvm::Type::getInt8PtrTy(context)},
    true
  );
  DeclareMain();
  DeclarePrint();
}

bool IRVisitor::ContainsErrors() {
  return !semantic_errors.empty();
}

void IRVisitor::PrintErrors() {
  for (auto& str : semantic_errors) {
    std::cout << str << "\n";
  }
}

void IRVisitor::WriteToFile() {
  std::error_code error_code;
  llvm::raw_fd_ostream outLL(filename, error_code);
  module_.print(outLL, nullptr);
}

llvm::Value* IRVisitor::MakeInt(llvm::LLVMContext& context, int val) {
  return llvm::ConstantInt::get(context, llvm::APInt(32, val, true));
}

void IRVisitor::DeclareMain() {
  main_function = llvm::Function::Create(
    main_type, llvm::Function::ExternalLinkage,
    "main", module_
  );
}

void IRVisitor::DeclarePrint() {
  print_function = llvm::Function::Create(
    print_type, llvm::Function::ExternalLinkage,
    "printf", module_
  );
}

std::any IRVisitor::visitMain_body(GrammarParser::Main_bodyContext *ctx) {
  symbol_table.BeginScope("main_scope");
  Function* fn = new Function("int", main_function, 0, true);
  symbol_table.CreateInstance("main", fn);
  symbol_table.SetCurrentFunction(fn);
  auto entry = llvm::BasicBlock::Create(context, "entry", main_function);
  builder.SetInsertPoint(entry);
  for (auto child : ctx->sentence()) {
    child->accept(this);
  }
  builder.CreateRet(
    llvm::ConstantInt::get(context, llvm::APInt(32, 0, true))
  );
  symbol_table.EndScope();
  return 0;
}

std::any IRVisitor::visitNumber(GrammarParser::NumberContext *ctx) {
  int val = std::stoi(ctx->NUM()->getText());
  return MakeInt(context, val);
}

std::any IRVisitor::visitVariable(GrammarParser::VariableContext *ctx) {
  Instance* variable;
  try {
    variable = symbol_table.GetVariable(ctx->ID()->getText());
  } catch (...) {
    semantic_errors.push_back(ErrorTypes::UnknownVariable(ctx->ID()));
    return MakeInt(context, -1);
  }
  llvm::Value* value = builder.CreateLoad(int_type, dynamic_cast<Variable*>(variable)->GetPtr());
  return value;
}

std::any IRVisitor::visitPar_stmt(GrammarParser::Par_stmtContext *ctx) {
  return ctx->ariphm_expr()->accept(this);
}

std::any IRVisitor::visitAdd_sub_stmt(GrammarParser::Add_sub_stmtContext *ctx) {
  llvm::Value* left = std::any_cast<llvm::Value*>(ctx->children[0]->accept(this));
  llvm::Value* right = std::any_cast<llvm::Value*>(ctx->children[2]->accept(this));
  if (ctx->op->getType() == GrammarParser::ADD) {
    return builder.CreateAdd(left, right);
  }
  return builder.CreateSub(left, right);
}

std::any IRVisitor::visitMul_div_stmt(GrammarParser::Mul_div_stmtContext *ctx) {
  llvm::Value* left = std::any_cast<llvm::Value*>(ctx->children[0]->accept(this));
  llvm::Value* right = std::any_cast<llvm::Value*>(ctx->children[2]->accept(this));
  if (ctx->op->getType() == GrammarParser::MUL) {
    return builder.CreateMul(left, right);
  }
  return builder.CreateSDiv(left, right);
}

std::any IRVisitor::visitPrint_stmt(GrammarParser::Print_stmtContext *ctx) {
  llvm::Value* value;
  if (ctx->ariphm_expr() != nullptr) {
    value = std::any_cast<llvm::Value*>(ctx->ariphm_expr()->accept(this));
  } else if (ctx->bool_expr() != nullptr) {
    llvm::Value* val = std::any_cast<llvm::Value*>(ctx->bool_expr()->accept(this));
    value = builder.CreateIntCast(val, int_type, false);
  } else {
    value = std::any_cast<llvm::Value*>(ctx->function_call_stmt()->accept(this));
  }
  std::string int_string = "%d\n";
  llvm::Constant* str = llvm::ConstantDataArray::getString(context, int_string);
  llvm::AllocaInst* alloc_str = builder.CreateAlloca(str->getType());
  builder.CreateStore(str, alloc_str);
  llvm::Value* formatted_str = builder.CreateBitCast(alloc_str, builder.getInt8PtrTy());
  return builder.CreateCall(print_function, {formatted_str, value});
}

std::any IRVisitor::visitOne_bool_stmt(GrammarParser::One_bool_stmtContext *ctx) {
  llvm::Value* left = std::any_cast<llvm::Value*>(ctx->children[0]->accept(this));
  llvm::Value* right = std::any_cast<llvm::Value*>(ctx->children[2]->accept(this));
  if (ctx->EVALOP()->getSymbol()->getText() == "<=") {
    return builder.CreateICmpSLE(left, right);
  } if (ctx->EVALOP()->getSymbol()->getText() == "==") {
    return builder.CreateICmpEQ(left, right);
  } if (ctx->EVALOP()->getSymbol()->getText() == ">=") {
    return builder.CreateICmpSGE(left, right);
  } if (ctx->EVALOP()->getSymbol()->getText() == ">") {
    return builder.CreateICmpSGT(left, right);
  } if (ctx->EVALOP()->getSymbol()->getText() == "<") {
    return builder.CreateICmpSLT(left, right);
  }
  return builder.CreateICmpNE(left, right);;
}

std::any IRVisitor::visitNot_stmt(GrammarParser::Not_stmtContext *ctx) {
  return builder.CreateNot(std::any_cast<llvm::Value*>(ctx->bool_expr()->accept(this)));
}

std::any IRVisitor::visitPar_bool_stmt(GrammarParser::Par_bool_stmtContext *ctx) {
  return std::any_cast<llvm::Value*>(ctx->bool_expr()->accept(this));
}

std::any IRVisitor::visitAnd_stmt(GrammarParser::And_stmtContext *ctx) {
  llvm::Value* left = std::any_cast<llvm::Value*>(ctx->children[0]->accept(this));
  llvm::Value* right = std::any_cast<llvm::Value*>(ctx->children[2]->accept(this));
  return builder.CreateLogicalAnd(left, right);
}

std::any IRVisitor::visitOr_stmt(GrammarParser::Or_stmtContext *ctx) {
  llvm::Value* left = std::any_cast<llvm::Value*>(ctx->children[0]->accept(this));
  llvm::Value* right = std::any_cast<llvm::Value*>(ctx->children[2]->accept(this));
  return builder.CreateLogicalOr(left, right);
}

std::any IRVisitor::visitVar_stmt(GrammarParser::Var_stmtContext *ctx) {
  return std::any_cast<llvm::Value*>(ctx->var_declaration_stmt()->accept(this));
}

std::any IRVisitor::visitVar_decl_stmt(GrammarParser::Var_decl_stmtContext *ctx) {
  if (!symbol_table.InCurrentScope(ctx->ID()->getText())) {
    llvm::AllocaInst* alloca = builder.CreateAlloca(int_type);
    builder.CreateStore(MakeInt(context, 0), alloca);
    symbol_table.CreateInstance(ctx->ID()->getText(), new Variable(MakeInt(context, 0), alloca));
    return MakeInt(context, 0);
  }
  semantic_errors.push_back(ErrorTypes::InstanceRedeclaration(ctx->ID()));
  return MakeInt(context, -1);
}

std::any IRVisitor::visitVar_def_stmt(GrammarParser::Var_def_stmtContext *ctx) {
  if (!symbol_table.InCurrentScope(ctx->ID()->getText())) {
    llvm::Value* value;
    llvm::AllocaInst* alloca = builder.CreateAlloca(int_type);
    if (ctx->ariphm_expr() != nullptr) {
      value = std::any_cast<llvm::Value*>((ctx->ariphm_expr()->accept(this)));
    } else if (ctx->bool_expr() != nullptr) {
      llvm::Value* val = std::any_cast<llvm::Value*>((ctx->bool_expr()->accept(this)));
      value = builder.CreateIntCast(val, int_type, false);
    } else {
      value = std::any_cast<llvm::Value*>(ctx->function_call_stmt()->accept(this));
    }
    builder.CreateStore(value, alloca);
    symbol_table.CreateInstance(ctx->ID()->getText(), new Variable(value, alloca));
    return value;
  }
  semantic_errors.push_back(ErrorTypes::InstanceRedeclaration(ctx->ID()));
  return MakeInt(context, -1); 
}

std::any IRVisitor::visitAriphm_stmt(GrammarParser::Ariphm_stmtContext *ctx) {
  return ctx->ariphm_expr()->accept(this);
}

std::any IRVisitor::visitAssign_stmt(GrammarParser::Assign_stmtContext *ctx) {
  Instance* variable;
  try {
    variable = symbol_table.GetVariable(ctx->ID()->getText());
  } catch (...) {
    semantic_errors.push_back(ErrorTypes::UnknownVariable(ctx->ID()));
    return MakeInt(context, -1);
  }
  llvm::Value* value;
  llvm::Value* alloca = dynamic_cast<Variable*>(variable)->GetPtr();
  if (ctx->ariphm_expr() != nullptr) {
    value = std::any_cast<llvm::Value*>((ctx->ariphm_expr()->accept(this)));
  } else if (ctx->bool_expr() != nullptr) {
    llvm::Value* val = std::any_cast<llvm::Value*>((ctx->bool_expr()->accept(this)));
    value = builder.CreateIntCast(val, int_type, false);
  } else {
    value = std::any_cast<llvm::Value*>(ctx->function_call_stmt()->accept(this));
  }
  builder.CreateStore(value, alloca);
  dynamic_cast<Variable*>(variable)->SetValue(value);
  return value;
}

std::any IRVisitor::visitWhile_stmt(GrammarParser::While_stmtContext *ctx) {
  llvm::Function* curr_function = dynamic_cast<Function*>(symbol_table.GetCurrentFunction())->GetPtr();
  auto check_block = llvm::BasicBlock::Create(
    context, "condition", curr_function
  );
  auto body = llvm::BasicBlock::Create(
    context, "loop", curr_function
  );
  auto end_block = llvm::BasicBlock::Create(
    context, "end", curr_function
  );
  builder.CreateBr(check_block);
  builder.SetInsertPoint(check_block);
  builder.CreateCondBr(
    std::any_cast<llvm::Value*>(ctx->bool_expr()->accept(this)),
    body, end_block);
  builder.SetInsertPoint(body);
  symbol_table.BeginScope("while");
  for (auto stmt : ctx->sentence()) {
    stmt->accept(this);
  }
  builder.CreateBr(check_block);
  builder.SetInsertPoint(end_block);
  symbol_table.EndScope();
  return 0;
}

std::any IRVisitor::visitIf_stmt(GrammarParser::If_stmtContext *ctx) {
  std::vector<llvm::BasicBlock*> conds;
  std::vector<llvm::BasicBlock*> bodies;
  int size = ctx->bool_expr().size();
  llvm::Function* curr_function = dynamic_cast<Function*>(symbol_table.GetCurrentFunction())->GetPtr();
  for (int i = 0; i < size; ++i) {
    conds.push_back(llvm::BasicBlock::Create(
      context, "cond_" + std::to_string(i), curr_function
    ));
    bodies.push_back(llvm::BasicBlock::Create(
      context, "body_" + std::to_string(i), curr_function
    ));
  }
  auto else_block = llvm::BasicBlock::Create(
    context, "else", curr_function
  );
  auto end_block = llvm::BasicBlock::Create(
    context, "end", curr_function
  );

  builder.CreateBr(conds[0]);
  for (int i = 0; i < size; ++i) {
    builder.SetInsertPoint(conds[i]);
    llvm::Value* value = std::any_cast<llvm::Value*>(ctx->bool_expr()[i]->accept(this));
    if (i + 1 < size) {
      builder.CreateCondBr(value, bodies[i], conds[i + 1]);
    } else {
      builder.CreateCondBr(value, bodies[i], else_block);
    }
  }
  symbol_table.BeginScope("if");
  int i = 0, j = 0;
  while (i < size) {
    builder.SetInsertPoint(bodies[i]);
    auto expr = ctx->children[j++];
    if (expr == nullptr || expr->getText() == "else if" || expr->getText() == "else") { 
      ++i;
      symbol_table.EndScope();
      builder.CreateBr(end_block);
      symbol_table.BeginScope("else if");
    }
    if (dynamic_cast<GrammarParser::SentenceContext*>(expr) != nullptr) {
      expr->accept(this);
    }
  }
  symbol_table.EndScope();

  builder.SetInsertPoint(else_block);
  if (ctx->ELSE() != nullptr) {
    symbol_table.BeginScope("else");
    while (j < ctx->children.size()) {
      auto expr = ctx->children[j++];
      if (dynamic_cast<GrammarParser::SentenceContext*>(expr) != nullptr) {
        expr->accept(this);
      }
    }
    symbol_table.EndScope();
  }
  builder.CreateBr(end_block);
  builder.SetInsertPoint(end_block);
  return 0;
}

std::any IRVisitor::visitScope_stmt(GrammarParser::Scope_stmtContext *ctx) {
  symbol_table.BeginScope("scope");
  for (auto& stmts : ctx->sentence()) {
    stmts->accept(this);
  }
  symbol_table.EndScope();
  return 0;
}

std::any IRVisitor::visitStart(GrammarParser::StartContext *ctx) {
  symbol_table.BeginScope("global");
  visitChildren(ctx);
  symbol_table.EndScope();
  return 0;
}

bool IRVisitor::CheckArgs(const std::vector<antlr4::tree::TerminalNode*>& args) {
  std::unordered_set<std::string> arg_names;
  for (int i = 1; i < args.size(); ++i) {
    auto [elem, inserted] = arg_names.insert(args[i]->getText());
    if (!inserted) {
      return false;
    }
  }
  return true;
}

void IRVisitor::CreateFunction(const std::vector<antlr4::tree::TerminalNode*>& args, const std::string& ret_type) {
  std::vector<llvm::Type*> params(args.size() - 1, int_type);
  llvm::FunctionType* func_type;
  if (ret_type == "void") {
    func_type = llvm::FunctionType::get(void_type, params, false);
  } else {
    func_type = llvm::FunctionType::get(int_type, params, false);
  }
  auto function = llvm::Function::Create(
    func_type, llvm::Function::ExternalLinkage,
    symbol_table.GetDomName() + args[0]->getText(), module_
  );
  int i = 1;
  for (auto arg = function->arg_begin(); arg != function->arg_end(); ++arg) {
    arg->setName(args[i++]->getText());
  }
  function->setCallingConv(llvm::CallingConv::C);
  symbol_table.CreateInstance(args[0]->getText(), new Function(ret_type, function, args.size() - 1, false));
}

std::any IRVisitor::visitFunc_decl_stmt(GrammarParser::Func_decl_stmtContext *ctx) {
  auto args = ctx->ID();
  if (!CheckArgs(args)) {
    semantic_errors.push_back(ErrorTypes::SameFunctionArguments(args[0]));
    return MakeInt(context, -1);
  }
  if (!symbol_table.InCurrentScope(args[0]->getText())) {
    CreateFunction(args, "int");
    return MakeInt(context, 0);
  }
  semantic_errors.push_back(ErrorTypes::InstanceRedeclaration(args[0]));
  return MakeInt(context, -1);
}

std::any IRVisitor::visitProc_decl_stmt(GrammarParser::Proc_decl_stmtContext *ctx) {
  auto args = ctx->ID();
  if (!CheckArgs(args)) {
    semantic_errors.push_back(ErrorTypes::SameFunctionArguments(args[0]));
    return MakeInt(context, -1);
  }
  if (!symbol_table.InCurrentScope(args[0]->getText())) {
    CreateFunction(args, "void");
    return MakeInt(context, 0);
  }
  semantic_errors.push_back(ErrorTypes::InstanceRedeclaration(args[0]));
  return MakeInt(context, -1);
}

std::any IRVisitor::visitFunc_def_stmt(GrammarParser::Func_def_stmtContext *ctx) {
  auto args = ctx->ID();
  if (!CheckArgs(args)) {
    semantic_errors.push_back(ErrorTypes::SameFunctionArguments(args[0]));
    return MakeInt(context, -1);
  }
  if (!symbol_table.InCurrentScope(args[0]->getText())) {
    CreateFunction(args, "int");
  }
  Instance* instance = symbol_table.GetByFullName(args[0]->getText());
  if (dynamic_cast<Function*>(instance) == nullptr) {
    semantic_errors.push_back(ErrorTypes::InstanceRedeclaration(args[0]));
    return MakeInt(context, -1);
  }
  if (dynamic_cast<Function*>(instance)->GetType() == "void") {
    semantic_errors.push_back(ErrorTypes::FuncTypeMismatch(args[0], "int"));
    return MakeInt(context, -1);
  }
  if (dynamic_cast<Function*>(instance)->IsDefined()) {
    semantic_errors.push_back(ErrorTypes::FunctionRedefinition(args[0]));
    return MakeInt(context, -1);
  }
  llvm::Function* fn = dynamic_cast<Function*>(instance)->GetPtr();
  symbol_table.SetCurrentFunction(instance);
  symbol_table.BeginScope(args[0]->getText());
  auto entry = llvm::BasicBlock::Create(
    context, symbol_table.GetDomName() + "entry", fn);
  builder.SetInsertPoint(entry);
  for (auto arg = fn->arg_begin(); arg != fn->arg_end(); ++arg) {
    llvm::AllocaInst* alloca = builder.CreateAlloca(int_type);
    builder.CreateStore(arg, alloca);
    symbol_table.CreateInstance(std::string(arg->getName()), new Variable(arg, alloca));
  }
  for (auto child : ctx->sentence()) {
    child->accept(this);
  }
  llvm::Value* result;
  if (ctx->ariphm_expr() != nullptr) {
    result = std::any_cast<llvm::Value*>(ctx->ariphm_expr()->accept(this));
  } else if (ctx->bool_expr() != nullptr) {
    result = std::any_cast<llvm::Value*>(ctx->bool_expr()->accept(this));
  } else {
    result = std::any_cast<llvm::Value*>(ctx->function_call_stmt()->accept(this));
  }
  builder.CreateRet(result);
  symbol_table.EndScope();
  dynamic_cast<Function*>(instance)->SetDefined();
  return MakeInt(context, 0);
}

std::any IRVisitor::visitProc_def_stmt(GrammarParser::Proc_def_stmtContext *ctx) {
  auto args = ctx->ID();
  if (!CheckArgs(args)) {
    semantic_errors.push_back(ErrorTypes::SameFunctionArguments(args[0]));
    return MakeInt(context, -1);
  }
  if (!symbol_table.InCurrentScope(args[0]->getText())) {
    CreateFunction(args, "void");
  }
  Instance* instance = symbol_table.GetByFullName(args[0]->getText());
  if (dynamic_cast<Function*>(instance) == nullptr) {
    semantic_errors.push_back(ErrorTypes::InstanceRedeclaration(args[0]));
    return MakeInt(context, -1);
  }
  if (dynamic_cast<Function*>(instance)->GetType() == "int") {
    semantic_errors.push_back(ErrorTypes::FuncTypeMismatch(args[0], "void"));
    return MakeInt(context, -1);
  }
  if (dynamic_cast<Function*>(instance)->IsDefined()) {
    semantic_errors.push_back(ErrorTypes::FunctionRedefinition(args[0]));
    return MakeInt(context, -1);
  }
  llvm::Function* fn = dynamic_cast<Function*>(instance)->GetPtr();
  symbol_table.SetCurrentFunction(instance);
  symbol_table.BeginScope(args[0]->getText());
  auto entry = llvm::BasicBlock::Create(
    context, symbol_table.GetDomName() + "entry", fn);
  builder.SetInsertPoint(entry);
  for (auto arg = fn->arg_begin(); arg != fn->arg_end(); ++arg) {
    llvm::AllocaInst* alloca = builder.CreateAlloca(int_type);
    builder.CreateStore(arg, alloca);
    symbol_table.CreateInstance(std::string(arg->getName()), new Variable(arg, alloca));
  }
  for (auto child : ctx->sentence()) {
    child->accept(this);
  }
  builder.CreateRet(nullptr);
  symbol_table.EndScope();
  dynamic_cast<Function*>(instance)->SetDefined();
  return MakeInt(context, 0);
}

std::any IRVisitor::visitFunc_call_stmt(GrammarParser::Func_call_stmtContext *ctx) {
  Instance* instance;
  try {
    instance = symbol_table.GetFunction(ctx->ID()->getText());
  } catch (...) {
    semantic_errors.push_back(ErrorTypes::UnknownFunction(ctx->ID()));
    return MakeInt(context, -1);
  }
  if (ctx->ariphm_expr().size() != dynamic_cast<Function*>(instance)->GetArgSize()) {
    semantic_errors.push_back(ErrorTypes::ArgsNotMatch(ctx->ID()));
    return MakeInt(context, -1);
  }
  llvm::Function* fn = dynamic_cast<Function*>(instance)->GetPtr();
  std::vector<llvm::Value*> args;
  for (auto& expr : ctx->ariphm_expr()) {
    args.push_back(std::any_cast<llvm::Value*>(expr->accept(this)));
  }
  llvm::Value* result = builder.CreateCall(fn, args);
  if (dynamic_cast<Function*>(instance)->GetType() == "void") {
    return MakeInt(context, 0);
  }
  return result;
}

std::any IRVisitor::visitGlobal_decl_stmt(GrammarParser::Global_decl_stmtContext *ctx) {
  if (!symbol_table.InCurrentScope(ctx->ID()->getText())) {
    llvm::Constant* val = llvm::ConstantInt::get(int_type, llvm::APInt(32, 0, true));
    llvm::GlobalVariable* var = new llvm::GlobalVariable(
    module_, int_type, false, llvm::GlobalValue::ExternalLinkage, val, ctx->ID()->getText());
    symbol_table.CreateInstance(ctx->ID()->getText(), new Variable(MakeInt(context, 0), var));
    return MakeInt(context, 0);
  }
  semantic_errors.push_back(ErrorTypes::InstanceRedeclaration(ctx->ID()));
  return MakeInt(context, -1);
}

std::any IRVisitor::visitGlobal_def_stmt(GrammarParser::Global_def_stmtContext *ctx) {
  if (!symbol_table.InCurrentScope(ctx->ID()->getText())) {
    int value = std::stoi(ctx->NUM()->getText());
    llvm::Constant* val = llvm::ConstantInt::get(int_type, llvm::APInt(32, value, true));
    llvm::GlobalVariable* var = new llvm::GlobalVariable(
    module_, int_type, false, llvm::GlobalValue::ExternalLinkage, val, ctx->ID()->getText());
    symbol_table.CreateInstance(ctx->ID()->getText(), new Variable(MakeInt(context, value), var));
    return MakeInt(context, value);
  }
  semantic_errors.push_back(ErrorTypes::InstanceRedeclaration(ctx->ID()));
  return MakeInt(context, -1);  
}


IRVisitor::~IRVisitor() = default;