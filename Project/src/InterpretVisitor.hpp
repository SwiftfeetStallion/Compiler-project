#pragma once
#include "GrammarBaseVisitor.h"
#include "GrammarParser.h"


class InterpretVisitor: public GrammarBaseVisitor {
private:
  std::map<std::string, int> variables; // declared variables
  std::vector<std::string> semantic_errors;
  std::vector<std::pair<std::any, bool>> print_sttmts; // value + isint

public:
  
  bool contains_errors();

  void print_errors();

  void print_statements();

  virtual std::any visitIf_stmt(GrammarParser::If_stmtContext *ctx) override;

  virtual std::any visitWhile_stmt(GrammarParser::While_stmtContext *ctx) override;

  virtual std::any visitAssign_stmt(GrammarParser::Assign_stmtContext *ctx) override;

  virtual std::any visitVar_stmt(GrammarParser::Var_stmtContext *ctx) override;

  virtual std::any visitAriphm_stmt(GrammarParser::Ariphm_stmtContext *ctx) override;

  virtual std::any visitPrint_stmt(GrammarParser::Print_stmtContext *ctx) override;

  virtual std::any visitVar_decl_stmt(GrammarParser::Var_decl_stmtContext *ctx) override;

  virtual std::any visitVar_def_stmt(GrammarParser::Var_def_stmtContext *ctx) override;

  virtual std::any visitPar_bool_stmt(GrammarParser::Par_bool_stmtContext *ctx) override;

  virtual std::any visitOne_bool_stmt(GrammarParser::One_bool_stmtContext *ctx) override;

  virtual std::any visitNot_stmt(GrammarParser::Not_stmtContext *ctx) override;

  virtual std::any visitAnd_stmt(GrammarParser::And_stmtContext *ctx) override;

  virtual std::any visitOr_stmt(GrammarParser::Or_stmtContext *ctx) override;

  virtual std::any visitNumber(GrammarParser::NumberContext *ctx) override;

  virtual std::any visitAdd_sub_stmt(GrammarParser::Add_sub_stmtContext *ctx) override;

  virtual std::any visitVariable(GrammarParser::VariableContext *ctx) override;

  virtual std::any visitMul_div_stmt(GrammarParser::Mul_div_stmtContext *ctx) override;

  virtual std::any visitPar_stmt(GrammarParser::Par_stmtContext *ctx) override;

};