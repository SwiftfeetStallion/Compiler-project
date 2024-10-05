
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
      "program", "main", "sentence", "func_definition_stmt", "func_declaration_stmt", 
      "function_call_stmt", "var_declaration_stmt", "bool_expr", "ariphm_expr"
    },
    std::vector<std::string>{
      "", "'int main()'", "'{'", "'}'", "'('", "')'", "','", "'return'", 
      "'int'", "", "'void'", "'print'", "'if'", "'while'", "'else'", "'else if'", 
      "'+'", "'-'", "'*'", "'/'", "'&&'", "'||'", "'!'", "'='", "'=='", 
      "'!='", "'<'", "'<='", "'>'", "'>='", "';'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "TYPE", "EVALOP", "VOID", "PRINT", 
      "IF", "WHILE", "ELSE", "ELIF", "ADD", "SUB", "MUL", "DIV", "AND", 
      "OR", "NOT", "ASSIGN", "EQUAL", "NO_EQUAL", "LESS", "LESSEQ", "GREATER", 
      "GREATEREQ", "SEMICOLON", "ID", "NUM", "LINECOMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,34,304,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,1,0,1,0,5,0,21,8,0,10,0,12,0,24,9,0,1,0,1,0,1,0,5,0,29,
  	8,0,10,0,12,0,32,9,0,1,0,1,0,1,1,1,1,1,1,5,1,39,8,1,10,1,12,1,42,9,1,
  	1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,5,2,52,8,2,10,2,12,2,55,9,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,5,2,64,8,2,10,2,12,2,67,9,2,1,2,1,2,5,2,71,8,2,10,2,
  	12,2,74,9,2,1,2,1,2,1,2,5,2,79,8,2,10,2,12,2,82,9,2,1,2,3,2,85,8,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,5,2,93,8,2,10,2,12,2,96,9,2,1,2,1,2,1,2,1,2,5,2,
  	102,8,2,10,2,12,2,105,9,2,1,2,1,2,1,2,1,2,1,2,3,2,112,8,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,129,8,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,3,2,137,8,2,1,3,1,3,1,3,1,3,1,3,1,3,5,3,145,8,3,10,3,12,
  	3,148,9,3,1,3,1,3,3,3,152,8,3,1,3,1,3,1,3,5,3,157,8,3,10,3,12,3,160,9,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,169,8,3,10,3,12,3,172,9,3,1,3,1,3,3,
  	3,176,8,3,1,3,1,3,1,3,5,3,181,8,3,10,3,12,3,184,9,3,1,3,1,3,1,3,3,3,189,
  	8,3,1,3,1,3,1,3,3,3,194,8,3,1,4,1,4,1,4,1,4,1,4,1,4,5,4,202,8,4,10,4,
  	12,4,205,9,4,1,4,1,4,3,4,209,8,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,
  	219,8,4,10,4,12,4,222,9,4,1,4,1,4,3,4,226,8,4,1,4,1,4,3,4,230,8,4,1,5,
  	1,5,1,5,1,5,5,5,236,8,5,10,5,12,5,239,9,5,1,5,3,5,242,8,5,1,5,1,5,1,6,
  	1,6,1,6,1,6,1,6,1,6,1,6,3,6,253,8,6,3,6,255,8,6,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,271,8,7,1,7,1,7,1,7,1,7,1,7,1,7,
  	5,7,279,8,7,10,7,12,7,282,9,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,291,8,8,
  	1,8,1,8,1,8,1,8,1,8,1,8,5,8,299,8,8,10,8,12,8,302,9,8,1,8,0,2,14,16,9,
  	0,2,4,6,8,10,12,14,16,0,3,1,0,31,32,1,0,18,19,1,0,16,17,341,0,22,1,0,
  	0,0,2,35,1,0,0,0,4,136,1,0,0,0,6,193,1,0,0,0,8,229,1,0,0,0,10,231,1,0,
  	0,0,12,254,1,0,0,0,14,270,1,0,0,0,16,290,1,0,0,0,18,21,3,6,3,0,19,21,
  	3,8,4,0,20,18,1,0,0,0,20,19,1,0,0,0,21,24,1,0,0,0,22,20,1,0,0,0,22,23,
  	1,0,0,0,23,25,1,0,0,0,24,22,1,0,0,0,25,30,3,2,1,0,26,29,3,6,3,0,27,29,
  	3,8,4,0,28,26,1,0,0,0,28,27,1,0,0,0,29,32,1,0,0,0,30,28,1,0,0,0,30,31,
  	1,0,0,0,31,33,1,0,0,0,32,30,1,0,0,0,33,34,5,0,0,1,34,1,1,0,0,0,35,36,
  	5,1,0,0,36,40,5,2,0,0,37,39,3,4,2,0,38,37,1,0,0,0,39,42,1,0,0,0,40,38,
  	1,0,0,0,40,41,1,0,0,0,41,43,1,0,0,0,42,40,1,0,0,0,43,44,5,3,0,0,44,3,
  	1,0,0,0,45,46,5,12,0,0,46,47,5,4,0,0,47,48,3,14,7,0,48,49,5,5,0,0,49,
  	53,5,2,0,0,50,52,3,4,2,0,51,50,1,0,0,0,52,55,1,0,0,0,53,51,1,0,0,0,53,
  	54,1,0,0,0,54,56,1,0,0,0,55,53,1,0,0,0,56,72,5,3,0,0,57,58,5,15,0,0,58,
  	59,5,4,0,0,59,60,3,14,7,0,60,61,5,5,0,0,61,65,5,2,0,0,62,64,3,4,2,0,63,
  	62,1,0,0,0,64,67,1,0,0,0,65,63,1,0,0,0,65,66,1,0,0,0,66,68,1,0,0,0,67,
  	65,1,0,0,0,68,69,5,3,0,0,69,71,1,0,0,0,70,57,1,0,0,0,71,74,1,0,0,0,72,
  	70,1,0,0,0,72,73,1,0,0,0,73,84,1,0,0,0,74,72,1,0,0,0,75,76,5,14,0,0,76,
  	80,5,2,0,0,77,79,3,4,2,0,78,77,1,0,0,0,79,82,1,0,0,0,80,78,1,0,0,0,80,
  	81,1,0,0,0,81,83,1,0,0,0,82,80,1,0,0,0,83,85,5,3,0,0,84,75,1,0,0,0,84,
  	85,1,0,0,0,85,137,1,0,0,0,86,87,5,13,0,0,87,88,5,4,0,0,88,89,3,14,7,0,
  	89,90,5,5,0,0,90,94,5,2,0,0,91,93,3,4,2,0,92,91,1,0,0,0,93,96,1,0,0,0,
  	94,92,1,0,0,0,94,95,1,0,0,0,95,97,1,0,0,0,96,94,1,0,0,0,97,98,5,3,0,0,
  	98,137,1,0,0,0,99,103,5,2,0,0,100,102,3,4,2,0,101,100,1,0,0,0,102,105,
  	1,0,0,0,103,101,1,0,0,0,103,104,1,0,0,0,104,106,1,0,0,0,105,103,1,0,0,
  	0,106,137,5,3,0,0,107,108,5,31,0,0,108,111,5,23,0,0,109,112,3,16,8,0,
  	110,112,3,14,7,0,111,109,1,0,0,0,111,110,1,0,0,0,112,113,1,0,0,0,113,
  	114,5,30,0,0,114,137,1,0,0,0,115,116,3,12,6,0,116,117,5,30,0,0,117,137,
  	1,0,0,0,118,119,3,16,8,0,119,120,5,30,0,0,120,137,1,0,0,0,121,122,3,14,
  	7,0,122,123,5,30,0,0,123,137,1,0,0,0,124,125,5,11,0,0,125,128,5,4,0,0,
  	126,129,3,16,8,0,127,129,3,14,7,0,128,126,1,0,0,0,128,127,1,0,0,0,129,
  	130,1,0,0,0,130,131,5,5,0,0,131,132,5,30,0,0,132,137,1,0,0,0,133,134,
  	3,10,5,0,134,135,5,30,0,0,135,137,1,0,0,0,136,45,1,0,0,0,136,86,1,0,0,
  	0,136,99,1,0,0,0,136,107,1,0,0,0,136,115,1,0,0,0,136,118,1,0,0,0,136,
  	121,1,0,0,0,136,124,1,0,0,0,136,133,1,0,0,0,137,5,1,0,0,0,138,139,5,10,
  	0,0,139,140,5,31,0,0,140,151,5,4,0,0,141,142,5,8,0,0,142,143,5,31,0,0,
  	143,145,5,6,0,0,144,141,1,0,0,0,145,148,1,0,0,0,146,144,1,0,0,0,146,147,
  	1,0,0,0,147,149,1,0,0,0,148,146,1,0,0,0,149,150,5,8,0,0,150,152,5,31,
  	0,0,151,146,1,0,0,0,151,152,1,0,0,0,152,153,1,0,0,0,153,154,5,5,0,0,154,
  	158,5,2,0,0,155,157,3,4,2,0,156,155,1,0,0,0,157,160,1,0,0,0,158,156,1,
  	0,0,0,158,159,1,0,0,0,159,161,1,0,0,0,160,158,1,0,0,0,161,194,5,3,0,0,
  	162,163,5,8,0,0,163,164,5,31,0,0,164,175,5,4,0,0,165,166,5,8,0,0,166,
  	167,5,31,0,0,167,169,5,6,0,0,168,165,1,0,0,0,169,172,1,0,0,0,170,168,
  	1,0,0,0,170,171,1,0,0,0,171,173,1,0,0,0,172,170,1,0,0,0,173,174,5,8,0,
  	0,174,176,5,31,0,0,175,170,1,0,0,0,175,176,1,0,0,0,176,177,1,0,0,0,177,
  	178,5,5,0,0,178,182,5,2,0,0,179,181,3,4,2,0,180,179,1,0,0,0,181,184,1,
  	0,0,0,182,180,1,0,0,0,182,183,1,0,0,0,183,185,1,0,0,0,184,182,1,0,0,0,
  	185,188,5,7,0,0,186,189,3,16,8,0,187,189,3,14,7,0,188,186,1,0,0,0,188,
  	187,1,0,0,0,189,190,1,0,0,0,190,191,5,30,0,0,191,192,5,3,0,0,192,194,
  	1,0,0,0,193,138,1,0,0,0,193,162,1,0,0,0,194,7,1,0,0,0,195,196,5,10,0,
  	0,196,197,5,31,0,0,197,208,5,4,0,0,198,199,5,8,0,0,199,200,5,31,0,0,200,
  	202,5,6,0,0,201,198,1,0,0,0,202,205,1,0,0,0,203,201,1,0,0,0,203,204,1,
  	0,0,0,204,206,1,0,0,0,205,203,1,0,0,0,206,207,5,8,0,0,207,209,5,31,0,
  	0,208,203,1,0,0,0,208,209,1,0,0,0,209,210,1,0,0,0,210,211,5,5,0,0,211,
  	230,5,30,0,0,212,213,5,8,0,0,213,214,5,31,0,0,214,225,5,4,0,0,215,216,
  	5,8,0,0,216,217,5,31,0,0,217,219,5,6,0,0,218,215,1,0,0,0,219,222,1,0,
  	0,0,220,218,1,0,0,0,220,221,1,0,0,0,221,223,1,0,0,0,222,220,1,0,0,0,223,
  	224,5,8,0,0,224,226,5,31,0,0,225,220,1,0,0,0,225,226,1,0,0,0,226,227,
  	1,0,0,0,227,228,5,5,0,0,228,230,5,30,0,0,229,195,1,0,0,0,229,212,1,0,
  	0,0,230,9,1,0,0,0,231,232,5,31,0,0,232,241,5,4,0,0,233,234,7,0,0,0,234,
  	236,5,6,0,0,235,233,1,0,0,0,236,239,1,0,0,0,237,235,1,0,0,0,237,238,1,
  	0,0,0,238,240,1,0,0,0,239,237,1,0,0,0,240,242,7,0,0,0,241,237,1,0,0,0,
  	241,242,1,0,0,0,242,243,1,0,0,0,243,244,5,5,0,0,244,11,1,0,0,0,245,246,
  	5,8,0,0,246,255,5,31,0,0,247,248,5,8,0,0,248,249,5,31,0,0,249,252,5,23,
  	0,0,250,253,3,16,8,0,251,253,3,14,7,0,252,250,1,0,0,0,252,251,1,0,0,0,
  	253,255,1,0,0,0,254,245,1,0,0,0,254,247,1,0,0,0,255,13,1,0,0,0,256,257,
  	6,7,-1,0,257,258,3,16,8,0,258,259,5,9,0,0,259,260,3,16,8,0,260,271,1,
  	0,0,0,261,262,5,22,0,0,262,263,5,4,0,0,263,264,3,14,7,0,264,265,5,5,0,
  	0,265,271,1,0,0,0,266,267,5,4,0,0,267,268,3,14,7,0,268,269,5,5,0,0,269,
  	271,1,0,0,0,270,256,1,0,0,0,270,261,1,0,0,0,270,266,1,0,0,0,271,280,1,
  	0,0,0,272,273,10,3,0,0,273,274,5,20,0,0,274,279,3,14,7,4,275,276,10,2,
  	0,0,276,277,5,21,0,0,277,279,3,14,7,3,278,272,1,0,0,0,278,275,1,0,0,0,
  	279,282,1,0,0,0,280,278,1,0,0,0,280,281,1,0,0,0,281,15,1,0,0,0,282,280,
  	1,0,0,0,283,284,6,8,-1,0,284,291,5,32,0,0,285,291,5,31,0,0,286,287,5,
  	4,0,0,287,288,3,16,8,0,288,289,5,5,0,0,289,291,1,0,0,0,290,283,1,0,0,
  	0,290,285,1,0,0,0,290,286,1,0,0,0,291,300,1,0,0,0,292,293,10,5,0,0,293,
  	294,7,1,0,0,294,299,3,16,8,6,295,296,10,4,0,0,296,297,7,2,0,0,297,299,
  	3,16,8,5,298,292,1,0,0,0,298,295,1,0,0,0,299,302,1,0,0,0,300,298,1,0,
  	0,0,300,301,1,0,0,0,301,17,1,0,0,0,302,300,1,0,0,0,38,20,22,28,30,40,
  	53,65,72,80,84,94,103,111,128,136,146,151,158,170,175,182,188,193,203,
  	208,220,225,229,237,241,252,254,270,278,280,290,298,300
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

GrammarParser::MainContext* GrammarParser::StartContext::main() {
  return getRuleContext<GrammarParser::MainContext>(0);
}

tree::TerminalNode* GrammarParser::StartContext::EOF() {
  return getToken(GrammarParser::EOF, 0);
}

std::vector<GrammarParser::Func_definition_stmtContext *> GrammarParser::StartContext::func_definition_stmt() {
  return getRuleContexts<GrammarParser::Func_definition_stmtContext>();
}

GrammarParser::Func_definition_stmtContext* GrammarParser::StartContext::func_definition_stmt(size_t i) {
  return getRuleContext<GrammarParser::Func_definition_stmtContext>(i);
}

std::vector<GrammarParser::Func_declaration_stmtContext *> GrammarParser::StartContext::func_declaration_stmt() {
  return getRuleContexts<GrammarParser::Func_declaration_stmtContext>();
}

GrammarParser::Func_declaration_stmtContext* GrammarParser::StartContext::func_declaration_stmt(size_t i) {
  return getRuleContext<GrammarParser::Func_declaration_stmtContext>(i);
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
    setState(22);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::TYPE

    || _la == GrammarParser::VOID) {
      setState(20);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(18);
        func_definition_stmt();
        break;
      }

      case 2: {
        setState(19);
        func_declaration_stmt();
        break;
      }

      default:
        break;
      }
      setState(24);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(25);
    main();
    setState(30);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::TYPE

    || _la == GrammarParser::VOID) {
      setState(28);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
      case 1: {
        setState(26);
        func_definition_stmt();
        break;
      }

      case 2: {
        setState(27);
        func_declaration_stmt();
        break;
      }

      default:
        break;
      }
      setState(32);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(33);
    match(GrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainContext ------------------------------------------------------------------

GrammarParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::MainContext::getRuleIndex() const {
  return GrammarParser::RuleMain;
}

void GrammarParser::MainContext::copyFrom(MainContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Main_bodyContext ------------------------------------------------------------------

std::vector<GrammarParser::SentenceContext *> GrammarParser::Main_bodyContext::sentence() {
  return getRuleContexts<GrammarParser::SentenceContext>();
}

GrammarParser::SentenceContext* GrammarParser::Main_bodyContext::sentence(size_t i) {
  return getRuleContext<GrammarParser::SentenceContext>(i);
}

GrammarParser::Main_bodyContext::Main_bodyContext(MainContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Main_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitMain_body(this);
  else
    return visitor->visitChildren(this);
}
GrammarParser::MainContext* GrammarParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 2, GrammarParser::RuleMain);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<GrammarParser::Main_bodyContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(35);
    match(GrammarParser::T__0);
    setState(36);
    match(GrammarParser::T__1);
    setState(40);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6446659860) != 0)) {
      setState(37);
      sentence();
      setState(42);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(43);
    match(GrammarParser::T__2);
   
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
//----------------- Bool_stmtContext ------------------------------------------------------------------

GrammarParser::Bool_exprContext* GrammarParser::Bool_stmtContext::bool_expr() {
  return getRuleContext<GrammarParser::Bool_exprContext>(0);
}

tree::TerminalNode* GrammarParser::Bool_stmtContext::SEMICOLON() {
  return getToken(GrammarParser::SEMICOLON, 0);
}

GrammarParser::Bool_stmtContext::Bool_stmtContext(SentenceContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Bool_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitBool_stmt(this);
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

tree::TerminalNode* GrammarParser::Assign_stmtContext::SEMICOLON() {
  return getToken(GrammarParser::SEMICOLON, 0);
}

GrammarParser::Ariphm_exprContext* GrammarParser::Assign_stmtContext::ariphm_expr() {
  return getRuleContext<GrammarParser::Ariphm_exprContext>(0);
}

GrammarParser::Bool_exprContext* GrammarParser::Assign_stmtContext::bool_expr() {
  return getRuleContext<GrammarParser::Bool_exprContext>(0);
}

GrammarParser::Assign_stmtContext::Assign_stmtContext(SentenceContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Assign_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitAssign_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Call_stmtContext ------------------------------------------------------------------

GrammarParser::Function_call_stmtContext* GrammarParser::Call_stmtContext::function_call_stmt() {
  return getRuleContext<GrammarParser::Function_call_stmtContext>(0);
}

tree::TerminalNode* GrammarParser::Call_stmtContext::SEMICOLON() {
  return getToken(GrammarParser::SEMICOLON, 0);
}

GrammarParser::Call_stmtContext::Call_stmtContext(SentenceContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Call_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitCall_stmt(this);
  else
    return visitor->visitChildren(this);
}
GrammarParser::SentenceContext* GrammarParser::sentence() {
  SentenceContext *_localctx = _tracker.createInstance<SentenceContext>(_ctx, getState());
  enterRule(_localctx, 4, GrammarParser::RuleSentence);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<GrammarParser::If_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(45);
      match(GrammarParser::IF);
      setState(46);
      match(GrammarParser::T__3);
      setState(47);
      bool_expr(0);
      setState(48);
      match(GrammarParser::T__4);
      setState(49);
      match(GrammarParser::T__1);
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 6446659860) != 0)) {
        setState(50);
        sentence();
        setState(55);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(56);
      match(GrammarParser::T__2);
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GrammarParser::ELIF) {
        setState(57);
        match(GrammarParser::ELIF);
        setState(58);
        match(GrammarParser::T__3);
        setState(59);
        bool_expr(0);
        setState(60);
        match(GrammarParser::T__4);
        setState(61);
        match(GrammarParser::T__1);
        setState(65);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 6446659860) != 0)) {
          setState(62);
          sentence();
          setState(67);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(68);
        match(GrammarParser::T__2);
        setState(74);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(84);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GrammarParser::ELSE) {
        setState(75);
        match(GrammarParser::ELSE);
        setState(76);
        match(GrammarParser::T__1);
        setState(80);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 6446659860) != 0)) {
          setState(77);
          sentence();
          setState(82);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(83);
        match(GrammarParser::T__2);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GrammarParser::While_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(86);
      match(GrammarParser::WHILE);
      setState(87);
      match(GrammarParser::T__3);
      setState(88);
      bool_expr(0);
      setState(89);
      match(GrammarParser::T__4);
      setState(90);
      match(GrammarParser::T__1);
      setState(94);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 6446659860) != 0)) {
        setState(91);
        sentence();
        setState(96);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(97);
      match(GrammarParser::T__2);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<GrammarParser::Scope_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(99);
      match(GrammarParser::T__1);
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 6446659860) != 0)) {
        setState(100);
        sentence();
        setState(105);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(106);
      match(GrammarParser::T__2);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<GrammarParser::Assign_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(107);
      match(GrammarParser::ID);
      setState(108);
      match(GrammarParser::ASSIGN);
      setState(111);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
      case 1: {
        setState(109);
        ariphm_expr(0);
        break;
      }

      case 2: {
        setState(110);
        bool_expr(0);
        break;
      }

      default:
        break;
      }
      setState(113);
      match(GrammarParser::SEMICOLON);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<GrammarParser::Var_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(115);
      var_declaration_stmt();
      setState(116);
      match(GrammarParser::SEMICOLON);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<GrammarParser::Ariphm_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(118);
      ariphm_expr(0);
      setState(119);
      match(GrammarParser::SEMICOLON);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<GrammarParser::Bool_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(121);
      bool_expr(0);
      setState(122);
      match(GrammarParser::SEMICOLON);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<GrammarParser::Print_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(124);
      match(GrammarParser::PRINT);
      setState(125);
      match(GrammarParser::T__3);
      setState(128);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(126);
        ariphm_expr(0);
        break;
      }

      case 2: {
        setState(127);
        bool_expr(0);
        break;
      }

      default:
        break;
      }
      setState(130);
      match(GrammarParser::T__4);
      setState(131);
      match(GrammarParser::SEMICOLON);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<GrammarParser::Call_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(133);
      function_call_stmt();
      setState(134);
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

//----------------- Func_definition_stmtContext ------------------------------------------------------------------

GrammarParser::Func_definition_stmtContext::Func_definition_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::Func_definition_stmtContext::getRuleIndex() const {
  return GrammarParser::RuleFunc_definition_stmt;
}

void GrammarParser::Func_definition_stmtContext::copyFrom(Func_definition_stmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Func_def_stmtContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> GrammarParser::Func_def_stmtContext::TYPE() {
  return getTokens(GrammarParser::TYPE);
}

tree::TerminalNode* GrammarParser::Func_def_stmtContext::TYPE(size_t i) {
  return getToken(GrammarParser::TYPE, i);
}

std::vector<tree::TerminalNode *> GrammarParser::Func_def_stmtContext::ID() {
  return getTokens(GrammarParser::ID);
}

tree::TerminalNode* GrammarParser::Func_def_stmtContext::ID(size_t i) {
  return getToken(GrammarParser::ID, i);
}

tree::TerminalNode* GrammarParser::Func_def_stmtContext::SEMICOLON() {
  return getToken(GrammarParser::SEMICOLON, 0);
}

GrammarParser::Ariphm_exprContext* GrammarParser::Func_def_stmtContext::ariphm_expr() {
  return getRuleContext<GrammarParser::Ariphm_exprContext>(0);
}

GrammarParser::Bool_exprContext* GrammarParser::Func_def_stmtContext::bool_expr() {
  return getRuleContext<GrammarParser::Bool_exprContext>(0);
}

std::vector<GrammarParser::SentenceContext *> GrammarParser::Func_def_stmtContext::sentence() {
  return getRuleContexts<GrammarParser::SentenceContext>();
}

GrammarParser::SentenceContext* GrammarParser::Func_def_stmtContext::sentence(size_t i) {
  return getRuleContext<GrammarParser::SentenceContext>(i);
}

GrammarParser::Func_def_stmtContext::Func_def_stmtContext(Func_definition_stmtContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Func_def_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitFunc_def_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Proc_def_stmtContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::Proc_def_stmtContext::VOID() {
  return getToken(GrammarParser::VOID, 0);
}

std::vector<tree::TerminalNode *> GrammarParser::Proc_def_stmtContext::ID() {
  return getTokens(GrammarParser::ID);
}

tree::TerminalNode* GrammarParser::Proc_def_stmtContext::ID(size_t i) {
  return getToken(GrammarParser::ID, i);
}

std::vector<tree::TerminalNode *> GrammarParser::Proc_def_stmtContext::TYPE() {
  return getTokens(GrammarParser::TYPE);
}

tree::TerminalNode* GrammarParser::Proc_def_stmtContext::TYPE(size_t i) {
  return getToken(GrammarParser::TYPE, i);
}

std::vector<GrammarParser::SentenceContext *> GrammarParser::Proc_def_stmtContext::sentence() {
  return getRuleContexts<GrammarParser::SentenceContext>();
}

GrammarParser::SentenceContext* GrammarParser::Proc_def_stmtContext::sentence(size_t i) {
  return getRuleContext<GrammarParser::SentenceContext>(i);
}

GrammarParser::Proc_def_stmtContext::Proc_def_stmtContext(Func_definition_stmtContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Proc_def_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitProc_def_stmt(this);
  else
    return visitor->visitChildren(this);
}
GrammarParser::Func_definition_stmtContext* GrammarParser::func_definition_stmt() {
  Func_definition_stmtContext *_localctx = _tracker.createInstance<Func_definition_stmtContext>(_ctx, getState());
  enterRule(_localctx, 6, GrammarParser::RuleFunc_definition_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(193);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::VOID: {
        _localctx = _tracker.createInstance<GrammarParser::Proc_def_stmtContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(138);
        match(GrammarParser::VOID);
        setState(139);
        match(GrammarParser::ID);
        setState(140);
        match(GrammarParser::T__3);
        setState(151);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == GrammarParser::TYPE) {
          setState(146);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(141);
              match(GrammarParser::TYPE);
              setState(142);
              match(GrammarParser::ID);
              setState(143);
              match(GrammarParser::T__5); 
            }
            setState(148);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
          }
          setState(149);
          match(GrammarParser::TYPE);
          setState(150);
          match(GrammarParser::ID);
        }
        setState(153);
        match(GrammarParser::T__4);
        setState(154);
        match(GrammarParser::T__1);
        setState(158);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 6446659860) != 0)) {
          setState(155);
          sentence();
          setState(160);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(161);
        match(GrammarParser::T__2);
        break;
      }

      case GrammarParser::TYPE: {
        _localctx = _tracker.createInstance<GrammarParser::Func_def_stmtContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(162);
        match(GrammarParser::TYPE);
        setState(163);
        match(GrammarParser::ID);
        setState(164);
        match(GrammarParser::T__3);
        setState(175);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == GrammarParser::TYPE) {
          setState(170);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(165);
              match(GrammarParser::TYPE);
              setState(166);
              match(GrammarParser::ID);
              setState(167);
              match(GrammarParser::T__5); 
            }
            setState(172);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
          }
          setState(173);
          match(GrammarParser::TYPE);
          setState(174);
          match(GrammarParser::ID);
        }
        setState(177);
        match(GrammarParser::T__4);
        setState(178);
        match(GrammarParser::T__1);
        setState(182);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 6446659860) != 0)) {
          setState(179);
          sentence();
          setState(184);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(185);
        match(GrammarParser::T__6);
        setState(188);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          setState(186);
          ariphm_expr(0);
          break;
        }

        case 2: {
          setState(187);
          bool_expr(0);
          break;
        }

        default:
          break;
        }
        setState(190);
        match(GrammarParser::SEMICOLON);
        setState(191);
        match(GrammarParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_declaration_stmtContext ------------------------------------------------------------------

GrammarParser::Func_declaration_stmtContext::Func_declaration_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::Func_declaration_stmtContext::getRuleIndex() const {
  return GrammarParser::RuleFunc_declaration_stmt;
}

void GrammarParser::Func_declaration_stmtContext::copyFrom(Func_declaration_stmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Proc_decl_stmtContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::Proc_decl_stmtContext::VOID() {
  return getToken(GrammarParser::VOID, 0);
}

std::vector<tree::TerminalNode *> GrammarParser::Proc_decl_stmtContext::ID() {
  return getTokens(GrammarParser::ID);
}

tree::TerminalNode* GrammarParser::Proc_decl_stmtContext::ID(size_t i) {
  return getToken(GrammarParser::ID, i);
}

tree::TerminalNode* GrammarParser::Proc_decl_stmtContext::SEMICOLON() {
  return getToken(GrammarParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> GrammarParser::Proc_decl_stmtContext::TYPE() {
  return getTokens(GrammarParser::TYPE);
}

tree::TerminalNode* GrammarParser::Proc_decl_stmtContext::TYPE(size_t i) {
  return getToken(GrammarParser::TYPE, i);
}

GrammarParser::Proc_decl_stmtContext::Proc_decl_stmtContext(Func_declaration_stmtContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Proc_decl_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitProc_decl_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Func_decl_stmtContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> GrammarParser::Func_decl_stmtContext::TYPE() {
  return getTokens(GrammarParser::TYPE);
}

tree::TerminalNode* GrammarParser::Func_decl_stmtContext::TYPE(size_t i) {
  return getToken(GrammarParser::TYPE, i);
}

std::vector<tree::TerminalNode *> GrammarParser::Func_decl_stmtContext::ID() {
  return getTokens(GrammarParser::ID);
}

tree::TerminalNode* GrammarParser::Func_decl_stmtContext::ID(size_t i) {
  return getToken(GrammarParser::ID, i);
}

tree::TerminalNode* GrammarParser::Func_decl_stmtContext::SEMICOLON() {
  return getToken(GrammarParser::SEMICOLON, 0);
}

GrammarParser::Func_decl_stmtContext::Func_decl_stmtContext(Func_declaration_stmtContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Func_decl_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitFunc_decl_stmt(this);
  else
    return visitor->visitChildren(this);
}
GrammarParser::Func_declaration_stmtContext* GrammarParser::func_declaration_stmt() {
  Func_declaration_stmtContext *_localctx = _tracker.createInstance<Func_declaration_stmtContext>(_ctx, getState());
  enterRule(_localctx, 8, GrammarParser::RuleFunc_declaration_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(229);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::VOID: {
        _localctx = _tracker.createInstance<GrammarParser::Proc_decl_stmtContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(195);
        match(GrammarParser::VOID);
        setState(196);
        match(GrammarParser::ID);
        setState(197);
        match(GrammarParser::T__3);
        setState(208);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == GrammarParser::TYPE) {
          setState(203);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(198);
              match(GrammarParser::TYPE);
              setState(199);
              match(GrammarParser::ID);
              setState(200);
              match(GrammarParser::T__5); 
            }
            setState(205);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
          }
          setState(206);
          match(GrammarParser::TYPE);
          setState(207);
          match(GrammarParser::ID);
        }
        setState(210);
        match(GrammarParser::T__4);
        setState(211);
        match(GrammarParser::SEMICOLON);
        break;
      }

      case GrammarParser::TYPE: {
        _localctx = _tracker.createInstance<GrammarParser::Func_decl_stmtContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(212);
        match(GrammarParser::TYPE);
        setState(213);
        match(GrammarParser::ID);
        setState(214);
        match(GrammarParser::T__3);
        setState(225);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == GrammarParser::TYPE) {
          setState(220);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(215);
              match(GrammarParser::TYPE);
              setState(216);
              match(GrammarParser::ID);
              setState(217);
              match(GrammarParser::T__5); 
            }
            setState(222);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
          }
          setState(223);
          match(GrammarParser::TYPE);
          setState(224);
          match(GrammarParser::ID);
        }
        setState(227);
        match(GrammarParser::T__4);
        setState(228);
        match(GrammarParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_call_stmtContext ------------------------------------------------------------------

GrammarParser::Function_call_stmtContext::Function_call_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::Function_call_stmtContext::getRuleIndex() const {
  return GrammarParser::RuleFunction_call_stmt;
}

void GrammarParser::Function_call_stmtContext::copyFrom(Function_call_stmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Func_call_stmtContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> GrammarParser::Func_call_stmtContext::ID() {
  return getTokens(GrammarParser::ID);
}

tree::TerminalNode* GrammarParser::Func_call_stmtContext::ID(size_t i) {
  return getToken(GrammarParser::ID, i);
}

std::vector<tree::TerminalNode *> GrammarParser::Func_call_stmtContext::NUM() {
  return getTokens(GrammarParser::NUM);
}

tree::TerminalNode* GrammarParser::Func_call_stmtContext::NUM(size_t i) {
  return getToken(GrammarParser::NUM, i);
}

GrammarParser::Func_call_stmtContext::Func_call_stmtContext(Function_call_stmtContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Func_call_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitFunc_call_stmt(this);
  else
    return visitor->visitChildren(this);
}
GrammarParser::Function_call_stmtContext* GrammarParser::function_call_stmt() {
  Function_call_stmtContext *_localctx = _tracker.createInstance<Function_call_stmtContext>(_ctx, getState());
  enterRule(_localctx, 10, GrammarParser::RuleFunction_call_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    _localctx = _tracker.createInstance<GrammarParser::Func_call_stmtContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(231);
    match(GrammarParser::ID);
    setState(232);
    match(GrammarParser::T__3);
    setState(241);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GrammarParser::ID

    || _la == GrammarParser::NUM) {
      setState(237);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(233);
          _la = _input->LA(1);
          if (!(_la == GrammarParser::ID

          || _la == GrammarParser::NUM)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(234);
          match(GrammarParser::T__5); 
        }
        setState(239);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
      }
      setState(240);
      _la = _input->LA(1);
      if (!(_la == GrammarParser::ID

      || _la == GrammarParser::NUM)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(243);
    match(GrammarParser::T__4);
   
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

GrammarParser::Bool_exprContext* GrammarParser::Var_def_stmtContext::bool_expr() {
  return getRuleContext<GrammarParser::Bool_exprContext>(0);
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
  enterRule(_localctx, 12, GrammarParser::RuleVar_declaration_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(254);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<GrammarParser::Var_decl_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(245);
      match(GrammarParser::TYPE);
      setState(246);
      match(GrammarParser::ID);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GrammarParser::Var_def_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(247);
      match(GrammarParser::TYPE);
      setState(248);
      match(GrammarParser::ID);
      setState(249);
      match(GrammarParser::ASSIGN);
      setState(252);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
      case 1: {
        setState(250);
        ariphm_expr(0);
        break;
      }

      case 2: {
        setState(251);
        bool_expr(0);
        break;
      }

      default:
        break;
      }
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
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, GrammarParser::RuleBool_expr, precedence);

    

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
    setState(270);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<One_bool_stmtContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(257);
      ariphm_expr(0);
      setState(258);
      match(GrammarParser::EVALOP);
      setState(259);
      ariphm_expr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Not_stmtContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(261);
      match(GrammarParser::NOT);
      setState(262);
      match(GrammarParser::T__3);
      setState(263);
      bool_expr(0);
      setState(264);
      match(GrammarParser::T__4);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Par_bool_stmtContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(266);
      match(GrammarParser::T__3);
      setState(267);
      bool_expr(0);
      setState(268);
      match(GrammarParser::T__4);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(280);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(278);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<And_stmtContext>(_tracker.createInstance<Bool_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBool_expr);
          setState(272);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(273);
          match(GrammarParser::AND);
          setState(274);
          bool_expr(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Or_stmtContext>(_tracker.createInstance<Bool_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBool_expr);
          setState(275);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(276);
          match(GrammarParser::OR);
          setState(277);
          bool_expr(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(282);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
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
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, GrammarParser::RuleAriphm_expr, precedence);

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
    setState(290);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::NUM: {
        _localctx = _tracker.createInstance<NumberContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(284);
        match(GrammarParser::NUM);
        break;
      }

      case GrammarParser::ID: {
        _localctx = _tracker.createInstance<VariableContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(285);
        match(GrammarParser::ID);
        break;
      }

      case GrammarParser::T__3: {
        _localctx = _tracker.createInstance<Par_stmtContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(286);
        match(GrammarParser::T__3);
        setState(287);
        ariphm_expr(0);
        setState(288);
        match(GrammarParser::T__4);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(300);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(298);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Mul_div_stmtContext>(_tracker.createInstance<Ariphm_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleAriphm_expr);
          setState(292);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(293);
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
          setState(294);
          ariphm_expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Add_sub_stmtContext>(_tracker.createInstance<Ariphm_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleAriphm_expr);
          setState(295);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(296);
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
          setState(297);
          ariphm_expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(302);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
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
    case 7: return bool_exprSempred(antlrcpp::downCast<Bool_exprContext *>(context), predicateIndex);
    case 8: return ariphm_exprSempred(antlrcpp::downCast<Ariphm_exprContext *>(context), predicateIndex);

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
