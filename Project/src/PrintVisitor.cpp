#include "PrintVisitor.hpp"

PrintVisitor::PrintVisitor(const std::string& str = "output.txt") : fout(str) {}

void PrintVisitor::Print_tabs() {
  for (int i = 0; i < tabs; ++i) {
    fout << '\t';
  }
}

std::any PrintVisitor::visitVar_stmt(GrammarParser::Var_stmtContext *ctx) {
  fout << "VarStatement\n";
  ++tabs;
  ctx->var_declaration_stmt()->accept(this);
  --tabs;
  return 0;
}

std::any PrintVisitor::visitNumber(GrammarParser::NumberContext *ctx) {
  Print_tabs();
  fout << "NumberStatement: number " << ctx->NUM()->getText() << "\n";
  return 0;
}

std::any PrintVisitor::visitVariable(GrammarParser::VariableContext *ctx) {
  Print_tabs();
  fout << "IdStatement: variable " << ctx->ID()->getText() << "\n";
  return 0;
}

std::any PrintVisitor::visitIf_stmt(GrammarParser::If_stmtContext *ctx) {
  Print_tabs();
  fout << "IfStatement" << "\n";
  ++tabs;
  for (auto expr : ctx->sentence()) {
    expr->accept(this);
  }
  --tabs;
  return 0;
}

std::any PrintVisitor::visitWhile_stmt(GrammarParser::While_stmtContext *ctx) {
   Print_tabs();
  fout << "WhileStatement" << "\n";
  ++tabs;
  for (auto expr : ctx->sentence()) {
    expr->accept(this);
  }
  --tabs;
  return 0;
}

std::any PrintVisitor::visitAssign_stmt(GrammarParser::Assign_stmtContext *ctx) {
  Print_tabs();
  fout << "AssignStatement to " << ctx->ID()->getText() << "\n";
  ++tabs;
  ctx->ariphm_expr()->accept(this);
  --tabs;
  return 0;
}

std::any PrintVisitor::visitAriphm_stmt(GrammarParser::Ariphm_stmtContext *ctx) {
  Print_tabs();
  fout << "AriphmStatement \n";
  ++tabs;
  ctx->ariphm_expr()->accept(this);
  --tabs;
  return 0;
}

std::any PrintVisitor::visitPrint_stmt(GrammarParser::Print_stmtContext *ctx) {
  Print_tabs();
  fout << "PrintStatement \n";
  ++tabs;
  if (ctx->ariphm_expr() != nullptr) {
    ctx->ariphm_expr()->accept(this);
  } else {
    ctx->bool_expr()->accept(this);
  }
  --tabs;
  return 0;
}

std::any PrintVisitor::visitVar_decl_stmt(GrammarParser::Var_decl_stmtContext *ctx) {
  Print_tabs();
  fout << "VarDeclaration: declare " << ctx->ID()->getText() << "\n";
  return 0;
}

std::any PrintVisitor::visitVar_def_stmt(GrammarParser::Var_def_stmtContext *ctx) {
  Print_tabs();
  fout << "VarDefinition: define " << ctx->ID()->getText() << "\n"; 
  ++tabs;
  int value = std::any_cast<int>((ctx->ariphm_expr()->accept(this)));
  --tabs;
  return 0;
}

std::any PrintVisitor::visitPar_bool_stmt(GrammarParser::Par_bool_stmtContext *ctx) {
ctx->bool_expr()->accept(this);
  return 0;
}

std::any PrintVisitor::visitOne_bool_stmt(GrammarParser::One_bool_stmtContext *ctx) {
  Print_tabs();
  fout << "BoolStatement \n";
  ++tabs;
  ctx->children[0]->accept(this);
  ctx->children[2]->accept(this);
  --tabs;
  return 0;
}

std::any PrintVisitor::visitNot_stmt(GrammarParser::Not_stmtContext *ctx) {
  Print_tabs();
  fout << "NotBoolStatement \n";
  ++tabs;
  ctx->bool_expr()->accept(this);
  --tabs;
  return 0;
}

std::any PrintVisitor::visitAnd_stmt(GrammarParser::And_stmtContext *ctx) {
  Print_tabs();
  fout << "AndBoolStatement \n";
  ++tabs;
  ctx->children[0]->accept(this);
  ctx->children[2]->accept(this);
  --tabs;
  return 0;
}

std::any PrintVisitor::visitOr_stmt(GrammarParser::Or_stmtContext *ctx) {
  Print_tabs();
  fout << "OrBoolStatement \n";
  ++tabs;
  ctx->children[0]->accept(this);
  ctx->children[2]->accept(this);
  --tabs;
  return 0;
}

std::any PrintVisitor::visitAdd_sub_stmt(GrammarParser::Add_sub_stmtContext *ctx) {
  Print_tabs();
  if (ctx->op->getType() == GrammarParser::ADD) {
    fout << "AddStatement \n"; 
  } else {
    fout << "SubStatement \n";
  }
  ++tabs;
  ctx->children[0]->accept(this);
  ctx->children[2]->accept(this);
  --tabs;
  return 0;
}

std::any PrintVisitor::visitMul_div_stmt(GrammarParser::Mul_div_stmtContext *ctx) {
  Print_tabs();
  if (ctx->op->getType() == GrammarParser::MUL) {
    fout << "MulStatement \n"; 
  } else {
    fout << "DivStatement \n";
  }
  ++tabs;
  ctx->children[0]->accept(this);
  ctx->children[2]->accept(this);
  --tabs;
  return 0;
}

std::any PrintVisitor::visitPar_stmt(GrammarParser::Par_stmtContext *ctx) {
  ctx->ariphm_expr()->accept(this);
  return 0;
}

PrintVisitor::~PrintVisitor() { fout.close(); }