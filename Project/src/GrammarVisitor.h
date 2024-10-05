
// Generated from Grammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "GrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by GrammarParser.
 */
class  GrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by GrammarParser.
   */
    virtual std::any visitStart(GrammarParser::StartContext *context) = 0;

    virtual std::any visitMain_body(GrammarParser::Main_bodyContext *context) = 0;

    virtual std::any visitIf_stmt(GrammarParser::If_stmtContext *context) = 0;

    virtual std::any visitWhile_stmt(GrammarParser::While_stmtContext *context) = 0;

    virtual std::any visitScope_stmt(GrammarParser::Scope_stmtContext *context) = 0;

    virtual std::any visitAssign_stmt(GrammarParser::Assign_stmtContext *context) = 0;

    virtual std::any visitVar_stmt(GrammarParser::Var_stmtContext *context) = 0;

    virtual std::any visitAriphm_stmt(GrammarParser::Ariphm_stmtContext *context) = 0;

    virtual std::any visitBool_stmt(GrammarParser::Bool_stmtContext *context) = 0;

    virtual std::any visitPrint_stmt(GrammarParser::Print_stmtContext *context) = 0;

    virtual std::any visitCall_stmt(GrammarParser::Call_stmtContext *context) = 0;

    virtual std::any visitProc_decl_stmt(GrammarParser::Proc_decl_stmtContext *context) = 0;

    virtual std::any visitFunc_decl_stmt(GrammarParser::Func_decl_stmtContext *context) = 0;

    virtual std::any visitProc_def_stmt(GrammarParser::Proc_def_stmtContext *context) = 0;

    virtual std::any visitFunc_def_stmt(GrammarParser::Func_def_stmtContext *context) = 0;

    virtual std::any visitFunc_call_stmt(GrammarParser::Func_call_stmtContext *context) = 0;

    virtual std::any visitVar_decl_stmt(GrammarParser::Var_decl_stmtContext *context) = 0;

    virtual std::any visitVar_def_stmt(GrammarParser::Var_def_stmtContext *context) = 0;

    virtual std::any visitGlobal_decl_stmt(GrammarParser::Global_decl_stmtContext *context) = 0;

    virtual std::any visitGlobal_def_stmt(GrammarParser::Global_def_stmtContext *context) = 0;

    virtual std::any visitPar_bool_stmt(GrammarParser::Par_bool_stmtContext *context) = 0;

    virtual std::any visitOne_bool_stmt(GrammarParser::One_bool_stmtContext *context) = 0;

    virtual std::any visitNot_stmt(GrammarParser::Not_stmtContext *context) = 0;

    virtual std::any visitAnd_stmt(GrammarParser::And_stmtContext *context) = 0;

    virtual std::any visitOr_stmt(GrammarParser::Or_stmtContext *context) = 0;

    virtual std::any visitNumber(GrammarParser::NumberContext *context) = 0;

    virtual std::any visitAdd_sub_stmt(GrammarParser::Add_sub_stmtContext *context) = 0;

    virtual std::any visitVariable(GrammarParser::VariableContext *context) = 0;

    virtual std::any visitMul_div_stmt(GrammarParser::Mul_div_stmtContext *context) = 0;

    virtual std::any visitPar_stmt(GrammarParser::Par_stmtContext *context) = 0;


};

