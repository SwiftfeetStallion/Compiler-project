
// Generated from Grammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  GrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, EVALOP = 6, TYPE = 7, 
    VOID = 8, PRINT = 9, IF = 10, WHILE = 11, ELSE = 12, ELIF = 13, ADD = 14, 
    SUB = 15, MUL = 16, DIV = 17, AND = 18, OR = 19, NOT = 20, ASSIGN = 21, 
    EQUAL = 22, NO_EQUAL = 23, LESS = 24, LESSEQ = 25, GREATER = 26, GREATEREQ = 27, 
    SEMICOLON = 28, ID = 29, NUM = 30, LINECOMMENT = 31, WS = 32
  };

  enum {
    RuleProgram = 0, RuleSentence = 1, RuleVar_declaration_stmt = 2, RuleBool_expr = 3, 
    RuleAriphm_expr = 4
  };

  explicit GrammarParser(antlr4::TokenStream *input);

  GrammarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~GrammarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class SentenceContext;
  class Var_declaration_stmtContext;
  class Bool_exprContext;
  class Ariphm_exprContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProgramContext() = default;
    void copyFrom(ProgramContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StartContext : public ProgramContext {
  public:
    StartContext(ProgramContext *ctx);

    antlr4::tree::TerminalNode *EOF();
    std::vector<SentenceContext *> sentence();
    SentenceContext* sentence(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProgramContext* program();

  class  SentenceContext : public antlr4::ParserRuleContext {
  public:
    SentenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SentenceContext() = default;
    void copyFrom(SentenceContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Var_stmtContext : public SentenceContext {
  public:
    Var_stmtContext(SentenceContext *ctx);

    Var_declaration_stmtContext *var_declaration_stmt();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Ariphm_stmtContext : public SentenceContext {
  public:
    Ariphm_stmtContext(SentenceContext *ctx);

    Ariphm_exprContext *ariphm_expr();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  While_stmtContext : public SentenceContext {
  public:
    While_stmtContext(SentenceContext *ctx);

    antlr4::tree::TerminalNode *WHILE();
    Bool_exprContext *bool_expr();
    std::vector<SentenceContext *> sentence();
    SentenceContext* sentence(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  If_stmtContext : public SentenceContext {
  public:
    If_stmtContext(SentenceContext *ctx);

    antlr4::tree::TerminalNode *IF();
    std::vector<Bool_exprContext *> bool_expr();
    Bool_exprContext* bool_expr(size_t i);
    std::vector<SentenceContext *> sentence();
    SentenceContext* sentence(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELIF();
    antlr4::tree::TerminalNode* ELIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Scope_stmtContext : public SentenceContext {
  public:
    Scope_stmtContext(SentenceContext *ctx);

    std::vector<SentenceContext *> sentence();
    SentenceContext* sentence(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Print_stmtContext : public SentenceContext {
  public:
    Print_stmtContext(SentenceContext *ctx);

    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *SEMICOLON();
    Ariphm_exprContext *ariphm_expr();
    Bool_exprContext *bool_expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Assign_stmtContext : public SentenceContext {
  public:
    Assign_stmtContext(SentenceContext *ctx);

    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGN();
    Ariphm_exprContext *ariphm_expr();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SentenceContext* sentence();

  class  Var_declaration_stmtContext : public antlr4::ParserRuleContext {
  public:
    Var_declaration_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Var_declaration_stmtContext() = default;
    void copyFrom(Var_declaration_stmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Var_decl_stmtContext : public Var_declaration_stmtContext {
  public:
    Var_decl_stmtContext(Var_declaration_stmtContext *ctx);

    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Var_def_stmtContext : public Var_declaration_stmtContext {
  public:
    Var_def_stmtContext(Var_declaration_stmtContext *ctx);

    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGN();
    Ariphm_exprContext *ariphm_expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Var_declaration_stmtContext* var_declaration_stmt();

  class  Bool_exprContext : public antlr4::ParserRuleContext {
  public:
    Bool_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Bool_exprContext() = default;
    void copyFrom(Bool_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Par_bool_stmtContext : public Bool_exprContext {
  public:
    Par_bool_stmtContext(Bool_exprContext *ctx);

    Bool_exprContext *bool_expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  One_bool_stmtContext : public Bool_exprContext {
  public:
    One_bool_stmtContext(Bool_exprContext *ctx);

    std::vector<Ariphm_exprContext *> ariphm_expr();
    Ariphm_exprContext* ariphm_expr(size_t i);
    antlr4::tree::TerminalNode *EVALOP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Not_stmtContext : public Bool_exprContext {
  public:
    Not_stmtContext(Bool_exprContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    Bool_exprContext *bool_expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  And_stmtContext : public Bool_exprContext {
  public:
    And_stmtContext(Bool_exprContext *ctx);

    std::vector<Bool_exprContext *> bool_expr();
    Bool_exprContext* bool_expr(size_t i);
    antlr4::tree::TerminalNode *AND();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Or_stmtContext : public Bool_exprContext {
  public:
    Or_stmtContext(Bool_exprContext *ctx);

    std::vector<Bool_exprContext *> bool_expr();
    Bool_exprContext* bool_expr(size_t i);
    antlr4::tree::TerminalNode *OR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Bool_exprContext* bool_expr();
  Bool_exprContext* bool_expr(int precedence);
  class  Ariphm_exprContext : public antlr4::ParserRuleContext {
  public:
    Ariphm_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Ariphm_exprContext() = default;
    void copyFrom(Ariphm_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NumberContext : public Ariphm_exprContext {
  public:
    NumberContext(Ariphm_exprContext *ctx);

    antlr4::tree::TerminalNode *NUM();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Add_sub_stmtContext : public Ariphm_exprContext {
  public:
    Add_sub_stmtContext(Ariphm_exprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<Ariphm_exprContext *> ariphm_expr();
    Ariphm_exprContext* ariphm_expr(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VariableContext : public Ariphm_exprContext {
  public:
    VariableContext(Ariphm_exprContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Mul_div_stmtContext : public Ariphm_exprContext {
  public:
    Mul_div_stmtContext(Ariphm_exprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<Ariphm_exprContext *> ariphm_expr();
    Ariphm_exprContext* ariphm_expr(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Par_stmtContext : public Ariphm_exprContext {
  public:
    Par_stmtContext(Ariphm_exprContext *ctx);

    Ariphm_exprContext *ariphm_expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Ariphm_exprContext* ariphm_expr();
  Ariphm_exprContext* ariphm_expr(int precedence);

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool bool_exprSempred(Bool_exprContext *_localctx, size_t predicateIndex);
  bool ariphm_exprSempred(Ariphm_exprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

