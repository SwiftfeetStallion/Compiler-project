#pragma once
#include "GrammarBaseVisitor.h"
#include "GrammarParser.h"
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Instructions.h>
#include "Table.hpp"
#include "ErrorTypes.hpp"

class IRVisitor : public GrammarBaseVisitor {
private:
  std::vector<std::string> semantic_errors;
  Table symbol_table;
  std::string filename;
  llvm::LLVMContext context;
  llvm::IRBuilder<> builder;
  llvm::Module module_;
  llvm::FunctionType* main_type;
  llvm::FunctionType* print_type;
  llvm::Function* main_function;
  llvm::Function* print_function;
  llvm::IntegerType* int_type;
  llvm::Type* void_type;


public:
  IRVisitor(const std::string& str);
  void WriteToFile();
  llvm::Value* MakeInt(llvm::LLVMContext& context, int val);
  void DeclareMain();
  void DeclarePrint();
  bool ContainsErrors();
  void PrintErrors();
  bool CheckArgs(const std::vector<antlr4::tree::TerminalNode*>& args);
  void CreateFunction(const std::vector<antlr4::tree::TerminalNode*>& args, const std::string& ret_type);
  virtual std::any visitStart(GrammarParser::StartContext *ctx) override;
  virtual std::any visitMain_body(GrammarParser::Main_bodyContext *ctx) override;
  virtual std::any visitNumber(GrammarParser::NumberContext *ctx) override;
  virtual std::any visitVariable(GrammarParser::VariableContext *ctx) override;
  virtual std::any visitPar_stmt(GrammarParser::Par_stmtContext *ctx) override;
  virtual std::any visitAdd_sub_stmt(GrammarParser::Add_sub_stmtContext *ctx) override;
  virtual std::any visitMul_div_stmt(GrammarParser::Mul_div_stmtContext *ctx) override;
  virtual std::any visitPrint_stmt(GrammarParser::Print_stmtContext *ctx) override;
  virtual std::any visitPar_bool_stmt(GrammarParser::Par_bool_stmtContext *ctx) override;
  virtual std::any visitOne_bool_stmt(GrammarParser::One_bool_stmtContext *ctx) override;
  virtual std::any visitNot_stmt(GrammarParser::Not_stmtContext *ctx) override;
  virtual std::any visitAnd_stmt(GrammarParser::And_stmtContext *ctx) override;
  virtual std::any visitOr_stmt(GrammarParser::Or_stmtContext *ctx) override;
  virtual std::any visitVar_stmt(GrammarParser::Var_stmtContext *ctx) override;
  virtual std::any visitVar_decl_stmt(GrammarParser::Var_decl_stmtContext *ctx) override;
  virtual std::any visitVar_def_stmt(GrammarParser::Var_def_stmtContext *ctx) override;
  virtual std::any visitAriphm_stmt(GrammarParser::Ariphm_stmtContext *ctx) override;
  virtual std::any visitIf_stmt(GrammarParser::If_stmtContext *ctx) override;
  virtual std::any visitWhile_stmt(GrammarParser::While_stmtContext *ctx) override;
  virtual std::any visitAssign_stmt(GrammarParser::Assign_stmtContext *ctx) override;
  virtual std::any visitScope_stmt(GrammarParser::Scope_stmtContext *ctx) override;
  virtual std::any visitFunc_decl_stmt(GrammarParser::Func_decl_stmtContext *ctx) override;
  virtual std::any visitProc_decl_stmt(GrammarParser::Proc_decl_stmtContext *ctx) override;
  virtual std::any visitFunc_def_stmt(GrammarParser::Func_def_stmtContext *ctx) override;
  virtual std::any visitProc_def_stmt(GrammarParser::Proc_def_stmtContext *ctx) override;
  virtual std::any visitFunc_call_stmt(GrammarParser::Func_call_stmtContext *ctx) override;
  virtual std::any visitGlobal_decl_stmt(GrammarParser::Global_decl_stmtContext *ctx) override;
  virtual std::any visitGlobal_def_stmt(GrammarParser::Global_def_stmtContext *ctx) override;

  ~IRVisitor();
};