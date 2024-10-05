#include "IRVisitor.hpp"

IRVisitor::IRVisitor(const std::string& str = "output.ll")
    : filename(str), builder(context), module_("file", context) {
  int_type = llvm::Type::getInt32Ty(context);
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
  auto entry = llvm::BasicBlock::Create(context, "entry", main_function);
  builder.SetInsertPoint(entry);
  for (auto child : ctx->children) {
    child->accept(this);
  }
  builder.CreateRet(
    llvm::ConstantInt::get(context, llvm::APInt(32, 0, true))
  );
  return 0;
}

std::any IRVisitor::visitNumber(GrammarParser::NumberContext *ctx) {
  int val = std::stoi(ctx->NUM()->getText());
  return MakeInt(context, val);
}

std::any IRVisitor::visitVariable(GrammarParser::VariableContext *ctx) {
  if (!variables.contains(ctx->ID()->getText())) {
    int line = ctx->ID()->getSymbol()->getLine();
    int column = ctx->ID()->getSymbol()->getCharPositionInLine();
    semantic_errors.push_back("Error (line " + std::to_string(line)
                              + ", pos " + std::to_string(column)
                              + "): unknown variable "
                              + ctx->ID()->getText());
    return MakeInt(context, -1);
  }
  llvm::Value* value = builder.CreateLoad(int_type, variables[ctx->ID()->getText()].ptr);
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
  } else {
    llvm::Value* val = std::any_cast<llvm::Value*>(ctx->bool_expr()->accept(this));
    value = builder.CreateIntCast(val, int_type, false);
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
  if (variables.contains(ctx->ID()->getText())) {
    int line = ctx->ID()->getSymbol()->getLine();
    int column = ctx->ID()->getSymbol()->getCharPositionInLine();
    semantic_errors.push_back("Error (line " + std::to_string(line)
                              + ", pos " + std::to_string(column)
                              + "): variable "
                              + ctx->ID()->getText()
                              + " is already declared");
    return MakeInt(context, -1);
  }
  llvm::AllocaInst* alloca = builder.CreateAlloca(int_type);
  builder.CreateStore(MakeInt(context, 0), alloca);
  variables[ctx->ID()->getText()] = Variable{MakeInt(context, 0), alloca};
  return MakeInt(context, 0);
}

std::any IRVisitor::visitVar_def_stmt(GrammarParser::Var_def_stmtContext *ctx) {
  if (variables.contains(ctx->ID()->getText())) {
    int line = ctx->ID()->getSymbol()->getLine();
    int column = ctx->ID()->getSymbol()->getCharPositionInLine();
    semantic_errors.push_back("Error (line " + std::to_string(line)
                              + ", pos " + std::to_string(column)
                              + "): variable "
                              + ctx->ID()->getText()
                              + " is already declared");
    return MakeInt(context, -1);
  }
  llvm::Value* value;
  llvm::AllocaInst* alloca = builder.CreateAlloca(int_type);
  if (ctx->ariphm_expr() != nullptr) {
    value = std::any_cast<llvm::Value*>((ctx->ariphm_expr()->accept(this)));
  } else {
    llvm::Value* val = std::any_cast<llvm::Value*>((ctx->bool_expr()->accept(this)));
    value = builder.CreateIntCast(val, int_type, false);
  }
  builder.CreateStore(value, alloca);
  variables[ctx->ID()->getText()] = {value, alloca};
  return value;
}

std::any IRVisitor::visitAriphm_stmt(GrammarParser::Ariphm_stmtContext *ctx) {
  return ctx->ariphm_expr()->accept(this);
}

std::any IRVisitor::visitAssign_stmt(GrammarParser::Assign_stmtContext *ctx) {
  if (!variables.contains(ctx->ID()->getText())) {
    int line = ctx->ID()->getSymbol()->getLine();
    int column = ctx->ID()->getSymbol()->getCharPositionInLine();
    semantic_errors.push_back("Error (line " + std::to_string(line)
                              + ", pos " + std::to_string(column)
                              + "): unknown variable "
                              + ctx->ID()->getText());
    return MakeInt(context, -1);
  }
  llvm::Value* value;
  llvm::AllocaInst* alloca = variables[ctx->ID()->getText()].ptr;
  if (ctx->ariphm_expr() != nullptr) {
    value = std::any_cast<llvm::Value*>((ctx->ariphm_expr()->accept(this)));
  } else {
    llvm::Value* val = std::any_cast<llvm::Value*>((ctx->bool_expr()->accept(this)));
    value = builder.CreateIntCast(val, int_type, false);
  }
  builder.CreateStore(value, alloca);
  variables[ctx->ID()->getText()].value = value;
  return value;
}

std::any IRVisitor::visitWhile_stmt(GrammarParser::While_stmtContext *ctx) {
  auto check_block = llvm::BasicBlock::Create(
    context, "condition", main_function
  );
  auto body = llvm::BasicBlock::Create(
    context, "loop", main_function
  );
  auto end_block = llvm::BasicBlock::Create(
    context, "end", main_function
  );
  builder.CreateBr(check_block);
  builder.SetInsertPoint(check_block);
  builder.CreateCondBr(
    std::any_cast<llvm::Value*>(ctx->bool_expr()->accept(this)),
    body, end_block);
  builder.SetInsertPoint(body);
  for (auto stmt : ctx->sentence()) {
    stmt->accept(this);
  }
  builder.CreateBr(check_block);
  builder.SetInsertPoint(end_block);
  return 0;
}

std::any IRVisitor::visitIf_stmt(GrammarParser::If_stmtContext *ctx) {
  std::vector<llvm::BasicBlock*> conds;
  std::vector<llvm::BasicBlock*> bodies;
  int size = ctx->bool_expr().size();
  for (int i = 0; i < size; ++i) {
    conds.push_back(llvm::BasicBlock::Create(
      context, "cond_" + std::to_string(i), main_function
    ));
    bodies.push_back(llvm::BasicBlock::Create(
      context, "body_" + std::to_string(i), main_function
    ));
  }
  auto else_block = llvm::BasicBlock::Create(
    context, "else", main_function
  );
  auto end_block = llvm::BasicBlock::Create(
    context, "end", main_function
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

  int i = 0, j = 0;
  while (i < size) {
    builder.SetInsertPoint(bodies[i]);
    auto expr = ctx->children[j++];
    if (expr == nullptr || expr->getText() == "else if" || expr->getText() == "else") { 
      ++i;
      builder.CreateBr(end_block);
    }
    if (dynamic_cast<GrammarParser::SentenceContext*>(expr) != nullptr) {
      expr->accept(this);
    }
  }

  builder.SetInsertPoint(else_block);
  if (ctx->ELSE() != nullptr) {
    while (j < ctx->children.size()) {
      auto expr = ctx->children[j++];
      if (dynamic_cast<GrammarParser::SentenceContext*>(expr) != nullptr) {
        expr->accept(this);
      }
    }
  }
  builder.CreateBr(end_block);
  builder.SetInsertPoint(end_block);
  return 0;
}


IRVisitor::~IRVisitor() = default;