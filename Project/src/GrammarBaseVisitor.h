
// Generated from Grammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "GrammarVisitor.h"


/**
 * This class provides an empty implementation of GrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  GrammarBaseVisitor : public GrammarVisitor {
public:

  virtual std::any visitStart(GrammarParser::StartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_stmt(GrammarParser::If_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_stmt(GrammarParser::While_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScope_stmt(GrammarParser::Scope_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign_stmt(GrammarParser::Assign_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_stmt(GrammarParser::Var_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAriphm_stmt(GrammarParser::Ariphm_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_stmt(GrammarParser::Print_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_decl_stmt(GrammarParser::Var_decl_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_def_stmt(GrammarParser::Var_def_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPar_bool_stmt(GrammarParser::Par_bool_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOne_bool_stmt(GrammarParser::One_bool_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNot_stmt(GrammarParser::Not_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnd_stmt(GrammarParser::And_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOr_stmt(GrammarParser::Or_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(GrammarParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd_sub_stmt(GrammarParser::Add_sub_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(GrammarParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMul_div_stmt(GrammarParser::Mul_div_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPar_stmt(GrammarParser::Par_stmtContext *ctx) override {
    return visitChildren(ctx);
  }


};

