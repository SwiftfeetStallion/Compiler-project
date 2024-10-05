
// Generated from Grammar.g4 by ANTLR 4.13.1


#include "GrammarVisitor.h"

#include "GrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct GrammarParserStaticData final {
  GrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GrammarParserStaticData(const GrammarParserStaticData&) = delete;
  GrammarParserStaticData(GrammarParserStaticData&&) = delete;
  GrammarParserStaticData& operator=(const GrammarParserStaticData&) = delete;
  GrammarParserStaticData& operator=(GrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag grammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
GrammarParserStaticData *grammarParserStaticData = nullptr;

void grammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (grammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(grammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GrammarParserStaticData>(
    std::vector<std::string>{
      "program", "sentence", "var_declaration_stmt", "bool_expr", "ariphm_expr"
    },
    std::vector<std::string>{
      "", "'int main()'", "'{'", "'}'", "'('", "')'", "", "'int'", "'void'", 
      "'print'", "'if'", "'while'", "'else'", "'else if'", "'+'", "'-'", 
      "'*'", "'/'", "'&&'", "'||'", "'!'", "'='", "'=='", "'!='", "'<'", 
      "'<='", "'>'", "'>='", "';'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "EVALOP", "TYPE", "VOID", "PRINT", "IF", "WHILE", 
      "ELSE", "ELIF", "ADD", "SUB", "MUL", "DIV", "AND", "OR", "NOT", "ASSIGN", 
      "EQUAL", "NO_EQUAL", "LESS", "LESSEQ", "GREATER", "GREATEREQ", "SEMICOLON", 
      "ID", "NUM", "LINECOMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,32,161,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,1,0,5,0,14,
  	8,0,10,0,12,0,17,9,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,5,1,28,8,1,10,
  	1,12,1,31,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,40,8,1,10,1,12,1,43,9,1,
  	1,1,1,1,5,1,47,8,1,10,1,12,1,50,9,1,1,1,1,1,1,1,5,1,55,8,1,10,1,12,1,
  	58,9,1,1,1,3,1,61,8,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,69,8,1,10,1,12,1,72,
  	9,1,1,1,1,1,1,1,1,1,5,1,78,8,1,10,1,12,1,81,9,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,99,8,1,1,1,1,1,1,1,3,1,
  	104,8,1,1,2,1,2,1,2,1,2,1,2,1,2,3,2,112,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,128,8,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,
  	136,8,3,10,3,12,3,139,9,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,148,8,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,5,4,156,8,4,10,4,12,4,159,9,4,1,4,0,2,6,8,5,0,2,4,
  	6,8,0,2,1,0,16,17,1,0,14,15,179,0,10,1,0,0,0,2,103,1,0,0,0,4,111,1,0,
  	0,0,6,127,1,0,0,0,8,147,1,0,0,0,10,11,5,1,0,0,11,15,5,2,0,0,12,14,3,2,
  	1,0,13,12,1,0,0,0,14,17,1,0,0,0,15,13,1,0,0,0,15,16,1,0,0,0,16,18,1,0,
  	0,0,17,15,1,0,0,0,18,19,5,3,0,0,19,20,5,0,0,1,20,1,1,0,0,0,21,22,5,10,
  	0,0,22,23,5,4,0,0,23,24,3,6,3,0,24,25,5,5,0,0,25,29,5,2,0,0,26,28,3,2,
  	1,0,27,26,1,0,0,0,28,31,1,0,0,0,29,27,1,0,0,0,29,30,1,0,0,0,30,32,1,0,
  	0,0,31,29,1,0,0,0,32,48,5,3,0,0,33,34,5,13,0,0,34,35,5,4,0,0,35,36,3,
  	6,3,0,36,37,5,5,0,0,37,41,5,2,0,0,38,40,3,2,1,0,39,38,1,0,0,0,40,43,1,
  	0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,44,1,0,0,0,43,41,1,0,0,0,44,45,5,
  	3,0,0,45,47,1,0,0,0,46,33,1,0,0,0,47,50,1,0,0,0,48,46,1,0,0,0,48,49,1,
  	0,0,0,49,60,1,0,0,0,50,48,1,0,0,0,51,52,5,12,0,0,52,56,5,2,0,0,53,55,
  	3,2,1,0,54,53,1,0,0,0,55,58,1,0,0,0,56,54,1,0,0,0,56,57,1,0,0,0,57,59,
  	1,0,0,0,58,56,1,0,0,0,59,61,5,3,0,0,60,51,1,0,0,0,60,61,1,0,0,0,61,104,
  	1,0,0,0,62,63,5,11,0,0,63,64,5,4,0,0,64,65,3,6,3,0,65,66,5,5,0,0,66,70,
  	5,2,0,0,67,69,3,2,1,0,68,67,1,0,0,0,69,72,1,0,0,0,70,68,1,0,0,0,70,71,
  	1,0,0,0,71,73,1,0,0,0,72,70,1,0,0,0,73,74,5,3,0,0,74,104,1,0,0,0,75,79,
  	5,2,0,0,76,78,3,2,1,0,77,76,1,0,0,0,78,81,1,0,0,0,79,77,1,0,0,0,79,80,
  	1,0,0,0,80,82,1,0,0,0,81,79,1,0,0,0,82,104,5,3,0,0,83,84,5,29,0,0,84,
  	85,5,21,0,0,85,86,3,8,4,0,86,87,5,28,0,0,87,104,1,0,0,0,88,89,3,4,2,0,
  	89,90,5,28,0,0,90,104,1,0,0,0,91,92,3,8,4,0,92,93,5,28,0,0,93,104,1,0,
  	0,0,94,95,5,9,0,0,95,98,5,4,0,0,96,99,3,8,4,0,97,99,3,6,3,0,98,96,1,0,
  	0,0,98,97,1,0,0,0,99,100,1,0,0,0,100,101,5,5,0,0,101,102,5,28,0,0,102,
  	104,1,0,0,0,103,21,1,0,0,0,103,62,1,0,0,0,103,75,1,0,0,0,103,83,1,0,0,
  	0,103,88,1,0,0,0,103,91,1,0,0,0,103,94,1,0,0,0,104,3,1,0,0,0,105,106,
  	5,7,0,0,106,112,5,29,0,0,107,108,5,7,0,0,108,109,5,29,0,0,109,110,5,21,
  	0,0,110,112,3,8,4,0,111,105,1,0,0,0,111,107,1,0,0,0,112,5,1,0,0,0,113,
  	114,6,3,-1,0,114,115,3,8,4,0,115,116,5,6,0,0,116,117,3,8,4,0,117,128,
  	1,0,0,0,118,119,5,20,0,0,119,120,5,4,0,0,120,121,3,6,3,0,121,122,5,5,
  	0,0,122,128,1,0,0,0,123,124,5,4,0,0,124,125,3,6,3,0,125,126,5,5,0,0,126,
  	128,1,0,0,0,127,113,1,0,0,0,127,118,1,0,0,0,127,123,1,0,0,0,128,137,1,
  	0,0,0,129,130,10,3,0,0,130,131,5,18,0,0,131,136,3,6,3,4,132,133,10,2,
  	0,0,133,134,5,19,0,0,134,136,3,6,3,3,135,129,1,0,0,0,135,132,1,0,0,0,
  	136,139,1,0,0,0,137,135,1,0,0,0,137,138,1,0,0,0,138,7,1,0,0,0,139,137,
  	1,0,0,0,140,141,6,4,-1,0,141,148,5,30,0,0,142,148,5,29,0,0,143,144,5,
  	4,0,0,144,145,3,8,4,0,145,146,5,5,0,0,146,148,1,0,0,0,147,140,1,0,0,0,
  	147,142,1,0,0,0,147,143,1,0,0,0,148,157,1,0,0,0,149,150,10,5,0,0,150,
  	151,7,0,0,0,151,156,3,8,4,6,152,153,10,4,0,0,153,154,7,1,0,0,154,156,
  	3,8,4,5,155,149,1,0,0,0,155,152,1,0,0,0,156,159,1,0,0,0,157,155,1,0,0,
  	0,157,158,1,0,0,0,158,9,1,0,0,0,159,157,1,0,0,0,17,15,29,41,48,56,60,
  	70,79,98,103,111,127,135,137,147,155,157
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  grammarParserStaticData = staticData.release();
}

}

GrammarParser::GrammarParser(TokenStream *input) : GrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

GrammarParser::GrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  GrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *grammarParserStaticData->atn, grammarParserStaticData->decisionToDFA, grammarParserStaticData->sharedContextCache, options);
}

GrammarParser::~GrammarParser() {
  delete _interpreter;
}

const atn::ATN& GrammarParser::getATN() const {
  return *grammarParserStaticData->atn;
}

std::string GrammarParser::getGrammarFileName() const {
  return "Grammar.g4";
}

const std::vector<std::string>& GrammarParser::getRuleNames() const {
  return grammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& GrammarParser::getVocabulary() const {
  return grammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView GrammarParser::getSerializedATN() const {
  return grammarParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

GrammarParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::ProgramContext::getRuleIndex() const {
  return GrammarParser::RuleProgram;
}

void GrammarParser::ProgramContext::copyFrom(ProgramContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StartContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::StartContext::EOF() {
  return getToken(GrammarParser::EOF, 0);
}

std::vector<GrammarParser::SentenceContext *> GrammarParser::StartContext::sentence() {
  return getRuleContexts<GrammarParser::SentenceContext>();
}

GrammarParser::SentenceContext* GrammarParser::StartContext::sentence(size_t i) {
  return getRuleContext<GrammarParser::SentenceContext>(i);
}

GrammarParser::StartContext::StartContext(ProgramContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}
GrammarParser::ProgramContext* GrammarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, GrammarParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<GrammarParser::StartContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(10);
    match(GrammarParser::T__0);
    setState(11);
    match(GrammarParser::T__1);
    setState(15);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1610616468) != 0)) {
      setState(12);
      sentence();
      setState(17);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(18);
    match(GrammarParser::T__2);
    setState(19);
    match(GrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SentenceContext ------------------------------------------------------------------

GrammarParser::SentenceContext::SentenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::SentenceContext::getRuleIndex() const {
  return GrammarParser::RuleSentence;
}

void GrammarParser::SentenceContext::copyFrom(SentenceContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Var_stmtContext ------------------------------------------------------------------

GrammarParser::Var_declaration_stmtContext* GrammarParser::Var_stmtContext::var_declaration_stmt() {
  return getRuleContext<GrammarParser::Var_declaration_stmtContext>(0);
}

tree::TerminalNode* GrammarParser::Var_stmtContext::SEMICOLON() {
  return getToken(GrammarParser::SEMICOLON, 0);
}

GrammarParser::Var_stmtContext::Var_stmtContext(SentenceContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Var_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitVar_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Ariphm_stmtContext ------------------------------------------------------------------

GrammarParser::Ariphm_exprContext* GrammarParser::Ariphm_stmtContext::ariphm_expr() {
  return getRuleContext<GrammarParser::Ariphm_exprContext>(0);
}

tree::TerminalNode* GrammarParser::Ariphm_stmtContext::SEMICOLON() {
  return getToken(GrammarParser::SEMICOLON, 0);
}

GrammarParser::Ariphm_stmtContext::Ariphm_stmtContext(SentenceContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Ariphm_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitAriphm_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- While_stmtContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::While_stmtContext::WHILE() {
  return getToken(GrammarParser::WHILE, 0);
}

GrammarParser::Bool_exprContext* GrammarParser::While_stmtContext::bool_expr() {
  return getRuleContext<GrammarParser::Bool_exprContext>(0);
}

std::vector<GrammarParser::SentenceContext *> GrammarParser::While_stmtContext::sentence() {
  return getRuleContexts<GrammarParser::SentenceContext>();
}

GrammarParser::SentenceContext* GrammarParser::While_stmtContext::sentence(size_t i) {
  return getRuleContext<GrammarParser::SentenceContext>(i);
}

GrammarParser::While_stmtContext::While_stmtContext(SentenceContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::While_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitWhile_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- If_stmtContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::If_stmtContext::IF() {
  return getToken(GrammarParser::IF, 0);
}

std::vector<GrammarParser::Bool_exprContext *> GrammarParser::If_stmtContext::bool_expr() {
  return getRuleContexts<GrammarParser::Bool_exprContext>();
}

GrammarParser::Bool_exprContext* GrammarParser::If_stmtContext::bool_expr(size_t i) {
  return getRuleContext<GrammarParser::Bool_exprContext>(i);
}

std::vector<GrammarParser::SentenceContext *> GrammarParser::If_stmtContext::sentence() {
  return getRuleContexts<GrammarParser::SentenceContext>();
}

GrammarParser::SentenceContext* GrammarParser::If_stmtContext::sentence(size_t i) {
  return getRuleContext<GrammarParser::SentenceContext>(i);
}

std::vector<tree::TerminalNode *> GrammarParser::If_stmtContext::ELIF() {
  return getTokens(GrammarParser::ELIF);
}

tree::TerminalNode* GrammarParser::If_stmtContext::ELIF(size_t i) {
  return getToken(GrammarParser::ELIF, i);
}

tree::TerminalNode* GrammarParser::If_stmtContext::ELSE() {
  return getToken(GrammarParser::ELSE, 0);
}

GrammarParser::If_stmtContext::If_stmtContext(SentenceContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Scope_stmtContext ------------------------------------------------------------------

std::vector<GrammarParser::SentenceContext *> GrammarParser::Scope_stmtContext::sentence() {
  return getRuleContexts<GrammarParser::SentenceContext>();
}

GrammarParser::SentenceContext* GrammarParser::Scope_stmtContext::sentence(size_t i) {
  return getRuleContext<GrammarParser::SentenceContext>(i);
}

GrammarParser::Scope_stmtContext::Scope_stmtContext(SentenceContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Scope_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitScope_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Print_stmtContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::Print_stmtContext::PRINT() {
  return getToken(GrammarParser::PRINT, 0);
}

tree::TerminalNode* GrammarParser::Print_stmtContext::SEMICOLON() {
  return getToken(GrammarParser::SEMICOLON, 0);
}

GrammarParser::Ariphm_exprContext* GrammarParser::Print_stmtContext::ariphm_expr() {
  return getRuleContext<GrammarParser::Ariphm_exprContext>(0);
}

GrammarParser::Bool_exprContext* GrammarParser::Print_stmtContext::bool_expr() {
  return getRuleContext<GrammarParser::Bool_exprContext>(0);
}

GrammarParser::Print_stmtContext::Print_stmtContext(SentenceContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Print_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitPrint_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Assign_stmtContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::Assign_stmtContext::ID() {
  return getToken(GrammarParser::ID, 0);
}

tree::TerminalNode* GrammarParser::Assign_stmtContext::ASSIGN() {
  return getToken(GrammarParser::ASSIGN, 0);
}

GrammarParser::Ariphm_exprContext* GrammarParser::Assign_stmtContext::ariphm_expr() {
  return getRuleContext<GrammarParser::Ariphm_exprContext>(0);
}

tree::TerminalNode* GrammarParser::Assign_stmtContext::SEMICOLON() {
  return getToken(GrammarParser::SEMICOLON, 0);
}

GrammarParser::Assign_stmtContext::Assign_stmtContext(SentenceContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Assign_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitAssign_stmt(this);
  else
    return visitor->visitChildren(this);
}
GrammarParser::SentenceContext* GrammarParser::sentence() {
  SentenceContext *_localctx = _tracker.createInstance<SentenceContext>(_ctx, getState());
  enterRule(_localctx, 2, GrammarParser::RuleSentence);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(103);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<GrammarParser::If_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(21);
      match(GrammarParser::IF);
      setState(22);
      match(GrammarParser::T__3);
      setState(23);
      bool_expr(0);
      setState(24);
      match(GrammarParser::T__4);
      setState(25);
      match(GrammarParser::T__1);
      setState(29);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1610616468) != 0)) {
        setState(26);
        sentence();
        setState(31);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(32);
      match(GrammarParser::T__2);
      setState(48);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GrammarParser::ELIF) {
        setState(33);
        match(GrammarParser::ELIF);
        setState(34);
        match(GrammarParser::T__3);
        setState(35);
        bool_expr(0);
        setState(36);
        match(GrammarParser::T__4);
        setState(37);
        match(GrammarParser::T__1);
        setState(41);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 1610616468) != 0)) {
          setState(38);
          sentence();
          setState(43);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(44);
        match(GrammarParser::T__2);
        setState(50);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(60);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GrammarParser::ELSE) {
        setState(51);
        match(GrammarParser::ELSE);
        setState(52);
        match(GrammarParser::T__1);
        setState(56);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 1610616468) != 0)) {
          setState(53);
          sentence();
          setState(58);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(59);
        match(GrammarParser::T__2);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GrammarParser::While_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(62);
      match(GrammarParser::WHILE);
      setState(63);
      match(GrammarParser::T__3);
      setState(64);
      bool_expr(0);
      setState(65);
      match(GrammarParser::T__4);
      setState(66);
      match(GrammarParser::T__1);
      setState(70);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1610616468) != 0)) {
        setState(67);
        sentence();
        setState(72);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(73);
      match(GrammarParser::T__2);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<GrammarParser::Scope_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(75);
      match(GrammarParser::T__1);
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1610616468) != 0)) {
        setState(76);
        sentence();
        setState(81);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(82);
      match(GrammarParser::T__2);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<GrammarParser::Assign_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(83);
      match(GrammarParser::ID);
      setState(84);
      match(GrammarParser::ASSIGN);
      setState(85);
      ariphm_expr(0);
      setState(86);
      match(GrammarParser::SEMICOLON);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<GrammarParser::Var_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(88);
      var_declaration_stmt();
      setState(89);
      match(GrammarParser::SEMICOLON);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<GrammarParser::Ariphm_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(91);
      ariphm_expr(0);
      setState(92);
      match(GrammarParser::SEMICOLON);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<GrammarParser::Print_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(94);
      match(GrammarParser::PRINT);
      setState(95);
      match(GrammarParser::T__3);
      setState(98);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
      case 1: {
        setState(96);
        ariphm_expr(0);
        break;
      }

      case 2: {
        setState(97);
        bool_expr(0);
        break;
      }

      default:
        break;
      }
      setState(100);
      match(GrammarParser::T__4);
      setState(101);
      match(GrammarParser::SEMICOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declaration_stmtContext ------------------------------------------------------------------

GrammarParser::Var_declaration_stmtContext::Var_declaration_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::Var_declaration_stmtContext::getRuleIndex() const {
  return GrammarParser::RuleVar_declaration_stmt;
}

void GrammarParser::Var_declaration_stmtContext::copyFrom(Var_declaration_stmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Var_decl_stmtContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::Var_decl_stmtContext::TYPE() {
  return getToken(GrammarParser::TYPE, 0);
}

tree::TerminalNode* GrammarParser::Var_decl_stmtContext::ID() {
  return getToken(GrammarParser::ID, 0);
}

GrammarParser::Var_decl_stmtContext::Var_decl_stmtContext(Var_declaration_stmtContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Var_decl_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitVar_decl_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Var_def_stmtContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::Var_def_stmtContext::TYPE() {
  return getToken(GrammarParser::TYPE, 0);
}

tree::TerminalNode* GrammarParser::Var_def_stmtContext::ID() {
  return getToken(GrammarParser::ID, 0);
}

tree::TerminalNode* GrammarParser::Var_def_stmtContext::ASSIGN() {
  return getToken(GrammarParser::ASSIGN, 0);
}

GrammarParser::Ariphm_exprContext* GrammarParser::Var_def_stmtContext::ariphm_expr() {
  return getRuleContext<GrammarParser::Ariphm_exprContext>(0);
}

GrammarParser::Var_def_stmtContext::Var_def_stmtContext(Var_declaration_stmtContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Var_def_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitVar_def_stmt(this);
  else
    return visitor->visitChildren(this);
}
GrammarParser::Var_declaration_stmtContext* GrammarParser::var_declaration_stmt() {
  Var_declaration_stmtContext *_localctx = _tracker.createInstance<Var_declaration_stmtContext>(_ctx, getState());
  enterRule(_localctx, 4, GrammarParser::RuleVar_declaration_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(111);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<GrammarParser::Var_decl_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(105);
      match(GrammarParser::TYPE);
      setState(106);
      match(GrammarParser::ID);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GrammarParser::Var_def_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(107);
      match(GrammarParser::TYPE);
      setState(108);
      match(GrammarParser::ID);
      setState(109);
      match(GrammarParser::ASSIGN);
      setState(110);
      ariphm_expr(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bool_exprContext ------------------------------------------------------------------

GrammarParser::Bool_exprContext::Bool_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::Bool_exprContext::getRuleIndex() const {
  return GrammarParser::RuleBool_expr;
}

void GrammarParser::Bool_exprContext::copyFrom(Bool_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Par_bool_stmtContext ------------------------------------------------------------------

GrammarParser::Bool_exprContext* GrammarParser::Par_bool_stmtContext::bool_expr() {
  return getRuleContext<GrammarParser::Bool_exprContext>(0);
}

GrammarParser::Par_bool_stmtContext::Par_bool_stmtContext(Bool_exprContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Par_bool_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitPar_bool_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- One_bool_stmtContext ------------------------------------------------------------------

std::vector<GrammarParser::Ariphm_exprContext *> GrammarParser::One_bool_stmtContext::ariphm_expr() {
  return getRuleContexts<GrammarParser::Ariphm_exprContext>();
}

GrammarParser::Ariphm_exprContext* GrammarParser::One_bool_stmtContext::ariphm_expr(size_t i) {
  return getRuleContext<GrammarParser::Ariphm_exprContext>(i);
}

tree::TerminalNode* GrammarParser::One_bool_stmtContext::EVALOP() {
  return getToken(GrammarParser::EVALOP, 0);
}

GrammarParser::One_bool_stmtContext::One_bool_stmtContext(Bool_exprContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::One_bool_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitOne_bool_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Not_stmtContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::Not_stmtContext::NOT() {
  return getToken(GrammarParser::NOT, 0);
}

GrammarParser::Bool_exprContext* GrammarParser::Not_stmtContext::bool_expr() {
  return getRuleContext<GrammarParser::Bool_exprContext>(0);
}

GrammarParser::Not_stmtContext::Not_stmtContext(Bool_exprContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Not_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitNot_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- And_stmtContext ------------------------------------------------------------------

std::vector<GrammarParser::Bool_exprContext *> GrammarParser::And_stmtContext::bool_expr() {
  return getRuleContexts<GrammarParser::Bool_exprContext>();
}

GrammarParser::Bool_exprContext* GrammarParser::And_stmtContext::bool_expr(size_t i) {
  return getRuleContext<GrammarParser::Bool_exprContext>(i);
}

tree::TerminalNode* GrammarParser::And_stmtContext::AND() {
  return getToken(GrammarParser::AND, 0);
}

GrammarParser::And_stmtContext::And_stmtContext(Bool_exprContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::And_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitAnd_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Or_stmtContext ------------------------------------------------------------------

std::vector<GrammarParser::Bool_exprContext *> GrammarParser::Or_stmtContext::bool_expr() {
  return getRuleContexts<GrammarParser::Bool_exprContext>();
}

GrammarParser::Bool_exprContext* GrammarParser::Or_stmtContext::bool_expr(size_t i) {
  return getRuleContext<GrammarParser::Bool_exprContext>(i);
}

tree::TerminalNode* GrammarParser::Or_stmtContext::OR() {
  return getToken(GrammarParser::OR, 0);
}

GrammarParser::Or_stmtContext::Or_stmtContext(Bool_exprContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Or_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitOr_stmt(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Bool_exprContext* GrammarParser::bool_expr() {
   return bool_expr(0);
}

GrammarParser::Bool_exprContext* GrammarParser::bool_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GrammarParser::Bool_exprContext *_localctx = _tracker.createInstance<Bool_exprContext>(_ctx, parentState);
  GrammarParser::Bool_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, GrammarParser::RuleBool_expr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(127);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<One_bool_stmtContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(114);
      ariphm_expr(0);
      setState(115);
      match(GrammarParser::EVALOP);
      setState(116);
      ariphm_expr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Not_stmtContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(118);
      match(GrammarParser::NOT);
      setState(119);
      match(GrammarParser::T__3);
      setState(120);
      bool_expr(0);
      setState(121);
      match(GrammarParser::T__4);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Par_bool_stmtContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(123);
      match(GrammarParser::T__3);
      setState(124);
      bool_expr(0);
      setState(125);
      match(GrammarParser::T__4);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(137);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(135);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<And_stmtContext>(_tracker.createInstance<Bool_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBool_expr);
          setState(129);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(130);
          match(GrammarParser::AND);
          setState(131);
          bool_expr(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Or_stmtContext>(_tracker.createInstance<Bool_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBool_expr);
          setState(132);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(133);
          match(GrammarParser::OR);
          setState(134);
          bool_expr(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(139);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Ariphm_exprContext ------------------------------------------------------------------

GrammarParser::Ariphm_exprContext::Ariphm_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::Ariphm_exprContext::getRuleIndex() const {
  return GrammarParser::RuleAriphm_expr;
}

void GrammarParser::Ariphm_exprContext::copyFrom(Ariphm_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NumberContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::NumberContext::NUM() {
  return getToken(GrammarParser::NUM, 0);
}

GrammarParser::NumberContext::NumberContext(Ariphm_exprContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Add_sub_stmtContext ------------------------------------------------------------------

std::vector<GrammarParser::Ariphm_exprContext *> GrammarParser::Add_sub_stmtContext::ariphm_expr() {
  return getRuleContexts<GrammarParser::Ariphm_exprContext>();
}

GrammarParser::Ariphm_exprContext* GrammarParser::Add_sub_stmtContext::ariphm_expr(size_t i) {
  return getRuleContext<GrammarParser::Ariphm_exprContext>(i);
}

tree::TerminalNode* GrammarParser::Add_sub_stmtContext::ADD() {
  return getToken(GrammarParser::ADD, 0);
}

tree::TerminalNode* GrammarParser::Add_sub_stmtContext::SUB() {
  return getToken(GrammarParser::SUB, 0);
}

GrammarParser::Add_sub_stmtContext::Add_sub_stmtContext(Ariphm_exprContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Add_sub_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitAdd_sub_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::VariableContext::ID() {
  return getToken(GrammarParser::ID, 0);
}

GrammarParser::VariableContext::VariableContext(Ariphm_exprContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Mul_div_stmtContext ------------------------------------------------------------------

std::vector<GrammarParser::Ariphm_exprContext *> GrammarParser::Mul_div_stmtContext::ariphm_expr() {
  return getRuleContexts<GrammarParser::Ariphm_exprContext>();
}

GrammarParser::Ariphm_exprContext* GrammarParser::Mul_div_stmtContext::ariphm_expr(size_t i) {
  return getRuleContext<GrammarParser::Ariphm_exprContext>(i);
}

tree::TerminalNode* GrammarParser::Mul_div_stmtContext::MUL() {
  return getToken(GrammarParser::MUL, 0);
}

tree::TerminalNode* GrammarParser::Mul_div_stmtContext::DIV() {
  return getToken(GrammarParser::DIV, 0);
}

GrammarParser::Mul_div_stmtContext::Mul_div_stmtContext(Ariphm_exprContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Mul_div_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitMul_div_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Par_stmtContext ------------------------------------------------------------------

GrammarParser::Ariphm_exprContext* GrammarParser::Par_stmtContext::ariphm_expr() {
  return getRuleContext<GrammarParser::Ariphm_exprContext>(0);
}

GrammarParser::Par_stmtContext::Par_stmtContext(Ariphm_exprContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Par_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitPar_stmt(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Ariphm_exprContext* GrammarParser::ariphm_expr() {
   return ariphm_expr(0);
}

GrammarParser::Ariphm_exprContext* GrammarParser::ariphm_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GrammarParser::Ariphm_exprContext *_localctx = _tracker.createInstance<Ariphm_exprContext>(_ctx, parentState);
  GrammarParser::Ariphm_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, GrammarParser::RuleAriphm_expr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(147);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::NUM: {
        _localctx = _tracker.createInstance<NumberContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(141);
        match(GrammarParser::NUM);
        break;
      }

      case GrammarParser::ID: {
        _localctx = _tracker.createInstance<VariableContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(142);
        match(GrammarParser::ID);
        break;
      }

      case GrammarParser::T__3: {
        _localctx = _tracker.createInstance<Par_stmtContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(143);
        match(GrammarParser::T__3);
        setState(144);
        ariphm_expr(0);
        setState(145);
        match(GrammarParser::T__4);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(157);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(155);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Mul_div_stmtContext>(_tracker.createInstance<Ariphm_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleAriphm_expr);
          setState(149);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(150);
          antlrcpp::downCast<Mul_div_stmtContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == GrammarParser::MUL

          || _la == GrammarParser::DIV)) {
            antlrcpp::downCast<Mul_div_stmtContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(151);
          ariphm_expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Add_sub_stmtContext>(_tracker.createInstance<Ariphm_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleAriphm_expr);
          setState(152);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(153);
          antlrcpp::downCast<Add_sub_stmtContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == GrammarParser::ADD

          || _la == GrammarParser::SUB)) {
            antlrcpp::downCast<Add_sub_stmtContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(154);
          ariphm_expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(159);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool GrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return bool_exprSempred(antlrcpp::downCast<Bool_exprContext *>(context), predicateIndex);
    case 4: return ariphm_exprSempred(antlrcpp::downCast<Ariphm_exprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool GrammarParser::bool_exprSempred(Bool_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool GrammarParser::ariphm_exprSempred(Ariphm_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void GrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  grammarParserInitialize();
#else
  ::antlr4::internal::call_once(grammarParserOnceFlag, grammarParserInitialize);
#endif
}
