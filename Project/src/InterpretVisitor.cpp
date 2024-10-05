#include "InterpretVisitor.hpp"

std::any InterpretVisitor::visitNumber(GrammarParser::NumberContext *ctx) {
  int value = std::stoi(ctx->NUM()->getText());
  return value;
}

std::any InterpretVisitor::visitVariable(GrammarParser::VariableContext *ctx) {
  if (variables.count(ctx->ID()->getText()) == 0) {
    int line = ctx->ID()->getSymbol()->getLine();
    int column = ctx->ID()->getSymbol()->getCharPositionInLine();
    semantic_errors.push_back("Error (line " + std::to_string(line)
                              + ", pos " + std::to_string(column)
                              + "): unknown variable "
                              + ctx->ID()->getText());
    return 1;
  }
  return variables[ctx->ID()->getText()];
}

std::any InterpretVisitor::visitAdd_sub_stmt(GrammarParser::Add_sub_stmtContext *ctx) {
  int left = std::any_cast<int>(ctx->children[0]->accept(this));
  int right = std::any_cast<int>(ctx->children[2]->accept(this));
  if (ctx->op->getType() == GrammarParser::ADD) {
    return left + right;
  }
  return left - right;
}

std::any InterpretVisitor::visitMul_div_stmt(GrammarParser::Mul_div_stmtContext *ctx) {
  int left = std::any_cast<int>(ctx->children[0]->accept(this));
  int right = std::any_cast<int>(ctx->children[2]->accept(this));
  if (ctx->op->getType() == GrammarParser::MUL){
    return left * right;
  }
  return left / right;
}

std::any InterpretVisitor::visitPar_stmt(GrammarParser::Par_stmtContext *ctx) {
  return std::any_cast<int>(ctx->ariphm_expr()->accept(this));
}

std::any InterpretVisitor::visitPrint_stmt(GrammarParser::Print_stmtContext *ctx) {
  std::any value;
  if (ctx->ariphm_expr() != nullptr) {
    value = std::any_cast<int>(ctx->ariphm_expr()->accept(this));
    print_sttmts.push_back(std::make_pair(value, true));
  } else {
    value = std::any_cast<bool>(ctx->bool_expr()->accept(this));
    print_sttmts.push_back(std::make_pair(value, false));
  }
  return 0;
}

std::any InterpretVisitor::visitVar_decl_stmt(GrammarParser::Var_decl_stmtContext *ctx) {
  variables[ctx->ID()->getText()] = 0;
  return 0;
}

std::any InterpretVisitor::visitVar_def_stmt(GrammarParser::Var_def_stmtContext *ctx) {
  if (variables.count(ctx->ID()->getText()) == 1) {
    int line = ctx->ID()->getSymbol()->getLine();
    int column = ctx->ID()->getSymbol()->getCharPositionInLine();
    semantic_errors.push_back("Error (line " + std::to_string(line)
                              + ", pos " + std::to_string(column)
                              + "): variable "
                              + ctx->ID()->getText()
                              + " is already declared");
    return 1;
  }
  int value = std::any_cast<int>((ctx->ariphm_expr()->accept(this)));
  variables[ctx->children[1]->getText()] = value;
  return value;
}

std::any InterpretVisitor::visitOne_bool_stmt(GrammarParser::One_bool_stmtContext *ctx) {
  int left = std::any_cast<int>(ctx->children[0]->accept(this));
  int right = std::any_cast<int>(ctx->children[2]->accept(this));
  if (ctx->EVALOP()->getSymbol()->getText() == "<=") {
    return left <= right;
  } if (ctx->EVALOP()->getSymbol()->getText() == "==") {
    return left == right;
  } if (ctx->EVALOP()->getSymbol()->getText() == ">=") {
    return left >= right;
  } if (ctx->EVALOP()->getSymbol()->getText() == ">") {
    return left > right;
  } if (ctx->EVALOP()->getSymbol()->getText() == "<") {
    return left < right;
  }
  return left != right;
}

std::any InterpretVisitor::visitNot_stmt(GrammarParser::Not_stmtContext *ctx) {
  return !std::any_cast<bool>(ctx->bool_expr()->accept(this));
}

std::any InterpretVisitor::visitPar_bool_stmt(GrammarParser::Par_bool_stmtContext *ctx) {
  return std::any_cast<bool>(ctx->bool_expr()->accept(this));
}

std::any InterpretVisitor::visitAnd_stmt(GrammarParser::And_stmtContext *ctx) {
  bool left = std::any_cast<bool>(ctx->children[0]->accept(this));
  bool right = std::any_cast<bool>(ctx->children[2]->accept(this));
  return left && right;
}

std::any InterpretVisitor::visitOr_stmt(GrammarParser::Or_stmtContext *ctx) {
  bool left = std::any_cast<bool>(ctx->children[0]->accept(this));
  bool right = std::any_cast<bool>(ctx->children[2]->accept(this));
  return left || right;
}

std::any InterpretVisitor::visitAssign_stmt(GrammarParser::Assign_stmtContext *ctx) {
  if (variables.count(ctx->ID()->getText()) == 0) {
    int line = ctx->ID()->getSymbol()->getLine();
    int column = ctx->ID()->getSymbol()->getCharPositionInLine();
    semantic_errors.push_back("Error (line " + std::to_string(line)
                              + ", pos " + std::to_string(column)
                              + "): unknown variable "
                              + ctx->ID()->getText());
    return 1;
  }
  std::string id = ctx->children[0]->getText();
  int value = std::any_cast<int>(ctx->ariphm_expr()->accept(this));
  variables[id] = value;
  return value;
}

std::any InterpretVisitor::visitVar_stmt(GrammarParser::Var_stmtContext *ctx) {
  return std::any_cast<int>(ctx->var_declaration_stmt()->accept(this));
}

std::any InterpretVisitor::visitAriphm_stmt(GrammarParser::Ariphm_stmtContext *ctx) {
  return ctx->ariphm_expr()->accept(this);
}

std::any InterpretVisitor::visitIf_stmt(GrammarParser::If_stmtContext *ctx) {
  int size = ctx->bool_expr().size();
  int ind = 0;
  for (auto expr : ctx->bool_expr()) {
    bool cond = std::any_cast<bool>(expr->accept(this));
    if (cond) { break; }
    ++ind;
  }
  if (ind < size) {
    int i = 0, j = 0;
    for (auto expr : ctx->children) {
      if (expr->getText() == "else if") { ++i; }
      if (i == ind) { break; }
      ++j;
    }
    j += 5;
    while (ctx->children[j]->getText() != "}") {
      ctx->children[j++]->accept(this);
    }
  } else if (ctx->ELSE() != nullptr) {
      int i = 0;
      while (ctx->children[i]->getText() != "else") { ++i; }
      i += 2;
      while (ctx->children[i]->getText() != "}") {
      ctx->children[i++]->accept(this);
    }
  }
  return 0;
}

std::any InterpretVisitor::visitWhile_stmt(GrammarParser::While_stmtContext *ctx) {
  bool cond = std::any_cast<bool>(ctx->bool_expr()->accept(this));
  while (cond) {
    for (auto expr : ctx->sentence()) {
      expr->accept(this);
    }
    cond = std::any_cast<bool>(ctx->bool_expr()->accept(this));
  }
  return 0;
}

bool InterpretVisitor::contains_errors() {
  return !semantic_errors.empty();
}

void InterpretVisitor::print_errors() {
  for (const auto& str : semantic_errors) {
    std::cout << str << "\n";
  }
}

void InterpretVisitor::print_statements() {
  for (auto num : print_sttmts) {
    if (num.second) {
      std::cout << std::any_cast<int>(num.first) << "\n";
    } else {
      std::cout << std::any_cast<bool>(num.first) << "\n";
    }
  }
}