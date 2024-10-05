
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
      "program", "main", "sentence", "func_declaration_stmt", "func_definition_stmt", 
      "function_call_stmt", "var_declaration_stmt", "global_var_stmt", "bool_expr", 
      "ariphm_expr"
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
  	4,1,34,324,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,1,0,1,0,1,0,5,0,24,8,0,10,0,12,0,27,9,0,1,0,1,0,
  	1,0,1,0,1,0,5,0,34,8,0,10,0,12,0,37,9,0,1,0,1,0,1,1,1,1,1,1,5,1,44,8,
  	1,10,1,12,1,47,9,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,5,2,57,8,2,10,2,12,
  	2,60,9,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,69,8,2,10,2,12,2,72,9,2,1,2,
  	1,2,5,2,76,8,2,10,2,12,2,79,9,2,1,2,1,2,1,2,5,2,84,8,2,10,2,12,2,87,9,
  	2,1,2,3,2,90,8,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,98,8,2,10,2,12,2,101,9,2,
  	1,2,1,2,1,2,1,2,5,2,107,8,2,10,2,12,2,110,9,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	3,2,118,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,3,2,136,8,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,144,8,2,1,3,1,3,1,3,1,3,
  	1,3,1,3,5,3,152,8,3,10,3,12,3,155,9,3,1,3,1,3,3,3,159,8,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,5,3,169,8,3,10,3,12,3,172,9,3,1,3,1,3,3,3,176,8,3,
  	1,3,1,3,3,3,180,8,3,1,4,1,4,1,4,1,4,1,4,1,4,5,4,188,8,4,10,4,12,4,191,
  	9,4,1,4,1,4,3,4,195,8,4,1,4,1,4,1,4,5,4,200,8,4,10,4,12,4,203,9,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,5,4,212,8,4,10,4,12,4,215,9,4,1,4,1,4,3,4,219,
  	8,4,1,4,1,4,1,4,5,4,224,8,4,10,4,12,4,227,9,4,1,4,1,4,1,4,1,4,3,4,233,
  	8,4,1,4,1,4,1,4,3,4,238,8,4,1,5,1,5,1,5,1,5,1,5,5,5,245,8,5,10,5,12,5,
  	248,9,5,1,5,3,5,251,8,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,263,
  	8,6,3,6,265,8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,275,8,7,1,8,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,291,8,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,5,8,299,8,8,10,8,12,8,302,9,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	3,9,311,8,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,319,8,9,10,9,12,9,322,9,9,1,9,
  	0,2,16,18,10,0,2,4,6,8,10,12,14,16,18,0,2,1,0,18,19,1,0,16,17,368,0,25,
  	1,0,0,0,2,40,1,0,0,0,4,143,1,0,0,0,6,179,1,0,0,0,8,237,1,0,0,0,10,239,
  	1,0,0,0,12,264,1,0,0,0,14,274,1,0,0,0,16,290,1,0,0,0,18,310,1,0,0,0,20,
  	24,3,14,7,0,21,24,3,8,4,0,22,24,3,6,3,0,23,20,1,0,0,0,23,21,1,0,0,0,23,
  	22,1,0,0,0,24,27,1,0,0,0,25,23,1,0,0,0,25,26,1,0,0,0,26,28,1,0,0,0,27,
  	25,1,0,0,0,28,35,3,2,1,0,29,34,3,14,7,0,30,34,3,8,4,0,31,34,3,6,3,0,32,
  	34,3,14,7,0,33,29,1,0,0,0,33,30,1,0,0,0,33,31,1,0,0,0,33,32,1,0,0,0,34,
  	37,1,0,0,0,35,33,1,0,0,0,35,36,1,0,0,0,36,38,1,0,0,0,37,35,1,0,0,0,38,
  	39,5,0,0,1,39,1,1,0,0,0,40,41,5,1,0,0,41,45,5,2,0,0,42,44,3,4,2,0,43,
  	42,1,0,0,0,44,47,1,0,0,0,45,43,1,0,0,0,45,46,1,0,0,0,46,48,1,0,0,0,47,
  	45,1,0,0,0,48,49,5,3,0,0,49,3,1,0,0,0,50,51,5,12,0,0,51,52,5,4,0,0,52,
  	53,3,16,8,0,53,54,5,5,0,0,54,58,5,2,0,0,55,57,3,4,2,0,56,55,1,0,0,0,57,
  	60,1,0,0,0,58,56,1,0,0,0,58,59,1,0,0,0,59,61,1,0,0,0,60,58,1,0,0,0,61,
  	77,5,3,0,0,62,63,5,15,0,0,63,64,5,4,0,0,64,65,3,16,8,0,65,66,5,5,0,0,
  	66,70,5,2,0,0,67,69,3,4,2,0,68,67,1,0,0,0,69,72,1,0,0,0,70,68,1,0,0,0,
  	70,71,1,0,0,0,71,73,1,0,0,0,72,70,1,0,0,0,73,74,5,3,0,0,74,76,1,0,0,0,
  	75,62,1,0,0,0,76,79,1,0,0,0,77,75,1,0,0,0,77,78,1,0,0,0,78,89,1,0,0,0,
  	79,77,1,0,0,0,80,81,5,14,0,0,81,85,5,2,0,0,82,84,3,4,2,0,83,82,1,0,0,
  	0,84,87,1,0,0,0,85,83,1,0,0,0,85,86,1,0,0,0,86,88,1,0,0,0,87,85,1,0,0,
  	0,88,90,5,3,0,0,89,80,1,0,0,0,89,90,1,0,0,0,90,144,1,0,0,0,91,92,5,13,
  	0,0,92,93,5,4,0,0,93,94,3,16,8,0,94,95,5,5,0,0,95,99,5,2,0,0,96,98,3,
  	4,2,0,97,96,1,0,0,0,98,101,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,102,
  	1,0,0,0,101,99,1,0,0,0,102,103,5,3,0,0,103,144,1,0,0,0,104,108,5,2,0,
  	0,105,107,3,4,2,0,106,105,1,0,0,0,107,110,1,0,0,0,108,106,1,0,0,0,108,
  	109,1,0,0,0,109,111,1,0,0,0,110,108,1,0,0,0,111,144,5,3,0,0,112,113,5,
  	31,0,0,113,117,5,23,0,0,114,118,3,18,9,0,115,118,3,16,8,0,116,118,3,10,
  	5,0,117,114,1,0,0,0,117,115,1,0,0,0,117,116,1,0,0,0,118,119,1,0,0,0,119,
  	120,5,30,0,0,120,144,1,0,0,0,121,122,3,12,6,0,122,123,5,30,0,0,123,144,
  	1,0,0,0,124,125,3,18,9,0,125,126,5,30,0,0,126,144,1,0,0,0,127,128,3,16,
  	8,0,128,129,5,30,0,0,129,144,1,0,0,0,130,131,5,11,0,0,131,135,5,4,0,0,
  	132,136,3,18,9,0,133,136,3,16,8,0,134,136,3,10,5,0,135,132,1,0,0,0,135,
  	133,1,0,0,0,135,134,1,0,0,0,136,137,1,0,0,0,137,138,5,5,0,0,138,139,5,
  	30,0,0,139,144,1,0,0,0,140,141,3,10,5,0,141,142,5,30,0,0,142,144,1,0,
  	0,0,143,50,1,0,0,0,143,91,1,0,0,0,143,104,1,0,0,0,143,112,1,0,0,0,143,
  	121,1,0,0,0,143,124,1,0,0,0,143,127,1,0,0,0,143,130,1,0,0,0,143,140,1,
  	0,0,0,144,5,1,0,0,0,145,146,5,10,0,0,146,147,5,31,0,0,147,158,5,4,0,0,
  	148,149,5,8,0,0,149,150,5,31,0,0,150,152,5,6,0,0,151,148,1,0,0,0,152,
  	155,1,0,0,0,153,151,1,0,0,0,153,154,1,0,0,0,154,156,1,0,0,0,155,153,1,
  	0,0,0,156,157,5,8,0,0,157,159,5,31,0,0,158,153,1,0,0,0,158,159,1,0,0,
  	0,159,160,1,0,0,0,160,161,5,5,0,0,161,180,5,30,0,0,162,163,5,8,0,0,163,
  	164,5,31,0,0,164,175,5,4,0,0,165,166,5,8,0,0,166,167,5,31,0,0,167,169,
  	5,6,0,0,168,165,1,0,0,0,169,172,1,0,0,0,170,168,1,0,0,0,170,171,1,0,0,
  	0,171,173,1,0,0,0,172,170,1,0,0,0,173,174,5,8,0,0,174,176,5,31,0,0,175,
  	170,1,0,0,0,175,176,1,0,0,0,176,177,1,0,0,0,177,178,5,5,0,0,178,180,5,
  	30,0,0,179,145,1,0,0,0,179,162,1,0,0,0,180,7,1,0,0,0,181,182,5,10,0,0,
  	182,183,5,31,0,0,183,194,5,4,0,0,184,185,5,8,0,0,185,186,5,31,0,0,186,
  	188,5,6,0,0,187,184,1,0,0,0,188,191,1,0,0,0,189,187,1,0,0,0,189,190,1,
  	0,0,0,190,192,1,0,0,0,191,189,1,0,0,0,192,193,5,8,0,0,193,195,5,31,0,
  	0,194,189,1,0,0,0,194,195,1,0,0,0,195,196,1,0,0,0,196,197,5,5,0,0,197,
  	201,5,2,0,0,198,200,3,4,2,0,199,198,1,0,0,0,200,203,1,0,0,0,201,199,1,
  	0,0,0,201,202,1,0,0,0,202,204,1,0,0,0,203,201,1,0,0,0,204,238,5,3,0,0,
  	205,206,5,8,0,0,206,207,5,31,0,0,207,218,5,4,0,0,208,209,5,8,0,0,209,
  	210,5,31,0,0,210,212,5,6,0,0,211,208,1,0,0,0,212,215,1,0,0,0,213,211,
  	1,0,0,0,213,214,1,0,0,0,214,216,1,0,0,0,215,213,1,0,0,0,216,217,5,8,0,
  	0,217,219,5,31,0,0,218,213,1,0,0,0,218,219,1,0,0,0,219,220,1,0,0,0,220,
  	221,5,5,0,0,221,225,5,2,0,0,222,224,3,4,2,0,223,222,1,0,0,0,224,227,1,
  	0,0,0,225,223,1,0,0,0,225,226,1,0,0,0,226,228,1,0,0,0,227,225,1,0,0,0,
  	228,232,5,7,0,0,229,233,3,18,9,0,230,233,3,16,8,0,231,233,3,10,5,0,232,
  	229,1,0,0,0,232,230,1,0,0,0,232,231,1,0,0,0,233,234,1,0,0,0,234,235,5,
  	30,0,0,235,236,5,3,0,0,236,238,1,0,0,0,237,181,1,0,0,0,237,205,1,0,0,
  	0,238,9,1,0,0,0,239,240,5,31,0,0,240,250,5,4,0,0,241,242,3,18,9,0,242,
  	243,5,6,0,0,243,245,1,0,0,0,244,241,1,0,0,0,245,248,1,0,0,0,246,244,1,
  	0,0,0,246,247,1,0,0,0,247,249,1,0,0,0,248,246,1,0,0,0,249,251,3,18,9,
  	0,250,246,1,0,0,0,250,251,1,0,0,0,251,252,1,0,0,0,252,253,5,5,0,0,253,
  	11,1,0,0,0,254,255,5,8,0,0,255,265,5,31,0,0,256,257,5,8,0,0,257,258,5,
  	31,0,0,258,262,5,23,0,0,259,263,3,18,9,0,260,263,3,16,8,0,261,263,3,10,
  	5,0,262,259,1,0,0,0,262,260,1,0,0,0,262,261,1,0,0,0,263,265,1,0,0,0,264,
  	254,1,0,0,0,264,256,1,0,0,0,265,13,1,0,0,0,266,267,5,8,0,0,267,268,5,
  	31,0,0,268,275,5,30,0,0,269,270,5,8,0,0,270,271,5,31,0,0,271,272,5,23,
  	0,0,272,273,5,32,0,0,273,275,5,30,0,0,274,266,1,0,0,0,274,269,1,0,0,0,
  	275,15,1,0,0,0,276,277,6,8,-1,0,277,278,3,18,9,0,278,279,5,9,0,0,279,
  	280,3,18,9,0,280,291,1,0,0,0,281,282,5,22,0,0,282,283,5,4,0,0,283,284,
  	3,16,8,0,284,285,5,5,0,0,285,291,1,0,0,0,286,287,5,4,0,0,287,288,3,16,
  	8,0,288,289,5,5,0,0,289,291,1,0,0,0,290,276,1,0,0,0,290,281,1,0,0,0,290,
  	286,1,0,0,0,291,300,1,0,0,0,292,293,10,3,0,0,293,294,5,20,0,0,294,299,
  	3,16,8,4,295,296,10,2,0,0,296,297,5,21,0,0,297,299,3,16,8,3,298,292,1,
  	0,0,0,298,295,1,0,0,0,299,302,1,0,0,0,300,298,1,0,0,0,300,301,1,0,0,0,
  	301,17,1,0,0,0,302,300,1,0,0,0,303,304,6,9,-1,0,304,311,5,32,0,0,305,
  	311,5,31,0,0,306,307,5,4,0,0,307,308,3,18,9,0,308,309,5,5,0,0,309,311,
  	1,0,0,0,310,303,1,0,0,0,310,305,1,0,0,0,310,306,1,0,0,0,311,320,1,0,0,
  	0,312,313,10,5,0,0,313,314,7,0,0,0,314,319,3,18,9,6,315,316,10,4,0,0,
  	316,317,7,1,0,0,317,319,3,18,9,5,318,312,1,0,0,0,318,315,1,0,0,0,319,
  	322,1,0,0,0,320,318,1,0,0,0,320,321,1,0,0,0,321,19,1,0,0,0,322,320,1,
  	0,0,0,39,23,25,33,35,45,58,70,77,85,89,99,108,117,135,143,153,158,170,
  	175,179,189,194,201,213,218,225,232,237,246,250,262,264,274,290,298,300,
  	310,318,320
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

std::vector<GrammarParser::Global_var_stmtContext *> GrammarParser::StartContext::global_var_stmt() {
  return getRuleContexts<GrammarParser::Global_var_stmtContext>();
}

GrammarParser::Global_var_stmtContext* GrammarParser::StartContext::global_var_stmt(size_t i) {
  return getRuleContext<GrammarParser::Global_var_stmtContext>(i);
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
    setState(25);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::TYPE

    || _la == GrammarParser::VOID) {
      setState(23);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(20);
        global_var_stmt();
        break;
      }

      case 2: {
        setState(21);
        func_definition_stmt();
        break;
      }

      case 3: {
        setState(22);
        func_declaration_stmt();
        break;
      }

      default:
        break;
      }
      setState(27);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(28);
    main();
    setState(35);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::TYPE

    || _la == GrammarParser::VOID) {
      setState(33);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
      case 1: {
        setState(29);
        global_var_stmt();
        break;
      }

      case 2: {
        setState(30);
        func_definition_stmt();
        break;
      }

      case 3: {
        setState(31);
        func_declaration_stmt();
        break;
      }

      case 4: {
        setState(32);
        global_var_stmt();
        break;
      }

      default:
        break;
      }
      setState(37);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(38);
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
    setState(40);
    match(GrammarParser::T__0);
    setState(41);
    match(GrammarParser::T__1);
    setState(45);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6446659860) != 0)) {
      setState(42);
      sentence();
      setState(47);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(48);
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

GrammarParser::Function_call_stmtContext* GrammarParser::Print_stmtContext::function_call_stmt() {
  return getRuleContext<GrammarParser::Function_call_stmtContext>(0);
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

GrammarParser::Function_call_stmtContext* GrammarParser::Assign_stmtContext::function_call_stmt() {
  return getRuleContext<GrammarParser::Function_call_stmtContext>(0);
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
    setState(143);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<GrammarParser::If_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(50);
      match(GrammarParser::IF);
      setState(51);
      match(GrammarParser::T__3);
      setState(52);
      bool_expr(0);
      setState(53);
      match(GrammarParser::T__4);
      setState(54);
      match(GrammarParser::T__1);
      setState(58);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 6446659860) != 0)) {
        setState(55);
        sentence();
        setState(60);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(61);
      match(GrammarParser::T__2);
      setState(77);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GrammarParser::ELIF) {
        setState(62);
        match(GrammarParser::ELIF);
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
          ((1ULL << _la) & 6446659860) != 0)) {
          setState(67);
          sentence();
          setState(72);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(73);
        match(GrammarParser::T__2);
        setState(79);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(89);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GrammarParser::ELSE) {
        setState(80);
        match(GrammarParser::ELSE);
        setState(81);
        match(GrammarParser::T__1);
        setState(85);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 6446659860) != 0)) {
          setState(82);
          sentence();
          setState(87);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(88);
        match(GrammarParser::T__2);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GrammarParser::While_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(91);
      match(GrammarParser::WHILE);
      setState(92);
      match(GrammarParser::T__3);
      setState(93);
      bool_expr(0);
      setState(94);
      match(GrammarParser::T__4);
      setState(95);
      match(GrammarParser::T__1);
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 6446659860) != 0)) {
        setState(96);
        sentence();
        setState(101);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(102);
      match(GrammarParser::T__2);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<GrammarParser::Scope_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(104);
      match(GrammarParser::T__1);
      setState(108);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 6446659860) != 0)) {
        setState(105);
        sentence();
        setState(110);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(111);
      match(GrammarParser::T__2);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<GrammarParser::Assign_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(112);
      match(GrammarParser::ID);
      setState(113);
      match(GrammarParser::ASSIGN);
      setState(117);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
      case 1: {
        setState(114);
        ariphm_expr(0);
        break;
      }

      case 2: {
        setState(115);
        bool_expr(0);
        break;
      }

      case 3: {
        setState(116);
        function_call_stmt();
        break;
      }

      default:
        break;
      }
      setState(119);
      match(GrammarParser::SEMICOLON);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<GrammarParser::Var_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(121);
      var_declaration_stmt();
      setState(122);
      match(GrammarParser::SEMICOLON);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<GrammarParser::Ariphm_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(124);
      ariphm_expr(0);
      setState(125);
      match(GrammarParser::SEMICOLON);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<GrammarParser::Bool_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(127);
      bool_expr(0);
      setState(128);
      match(GrammarParser::SEMICOLON);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<GrammarParser::Print_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(130);
      match(GrammarParser::PRINT);
      setState(131);
      match(GrammarParser::T__3);
      setState(135);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(132);
        ariphm_expr(0);
        break;
      }

      case 2: {
        setState(133);
        bool_expr(0);
        break;
      }

      case 3: {
        setState(134);
        function_call_stmt();
        break;
      }

      default:
        break;
      }
      setState(137);
      match(GrammarParser::T__4);
      setState(138);
      match(GrammarParser::SEMICOLON);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<GrammarParser::Call_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(140);
      function_call_stmt();
      setState(141);
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
  enterRule(_localctx, 6, GrammarParser::RuleFunc_declaration_stmt);
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
    setState(179);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::VOID: {
        _localctx = _tracker.createInstance<GrammarParser::Proc_decl_stmtContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(145);
        match(GrammarParser::VOID);
        setState(146);
        match(GrammarParser::ID);
        setState(147);
        match(GrammarParser::T__3);
        setState(158);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == GrammarParser::TYPE) {
          setState(153);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(148);
              match(GrammarParser::TYPE);
              setState(149);
              match(GrammarParser::ID);
              setState(150);
              match(GrammarParser::T__5); 
            }
            setState(155);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
          }
          setState(156);
          match(GrammarParser::TYPE);
          setState(157);
          match(GrammarParser::ID);
        }
        setState(160);
        match(GrammarParser::T__4);
        setState(161);
        match(GrammarParser::SEMICOLON);
        break;
      }

      case GrammarParser::TYPE: {
        _localctx = _tracker.createInstance<GrammarParser::Func_decl_stmtContext>(_localctx);
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
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
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
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
          }
          setState(173);
          match(GrammarParser::TYPE);
          setState(174);
          match(GrammarParser::ID);
        }
        setState(177);
        match(GrammarParser::T__4);
        setState(178);
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

GrammarParser::Function_call_stmtContext* GrammarParser::Func_def_stmtContext::function_call_stmt() {
  return getRuleContext<GrammarParser::Function_call_stmtContext>(0);
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
  enterRule(_localctx, 8, GrammarParser::RuleFunc_definition_stmt);
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
    setState(237);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::VOID: {
        _localctx = _tracker.createInstance<GrammarParser::Proc_def_stmtContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(181);
        match(GrammarParser::VOID);
        setState(182);
        match(GrammarParser::ID);
        setState(183);
        match(GrammarParser::T__3);
        setState(194);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == GrammarParser::TYPE) {
          setState(189);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(184);
              match(GrammarParser::TYPE);
              setState(185);
              match(GrammarParser::ID);
              setState(186);
              match(GrammarParser::T__5); 
            }
            setState(191);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
          }
          setState(192);
          match(GrammarParser::TYPE);
          setState(193);
          match(GrammarParser::ID);
        }
        setState(196);
        match(GrammarParser::T__4);
        setState(197);
        match(GrammarParser::T__1);
        setState(201);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 6446659860) != 0)) {
          setState(198);
          sentence();
          setState(203);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(204);
        match(GrammarParser::T__2);
        break;
      }

      case GrammarParser::TYPE: {
        _localctx = _tracker.createInstance<GrammarParser::Func_def_stmtContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(205);
        match(GrammarParser::TYPE);
        setState(206);
        match(GrammarParser::ID);
        setState(207);
        match(GrammarParser::T__3);
        setState(218);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == GrammarParser::TYPE) {
          setState(213);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(208);
              match(GrammarParser::TYPE);
              setState(209);
              match(GrammarParser::ID);
              setState(210);
              match(GrammarParser::T__5); 
            }
            setState(215);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
          }
          setState(216);
          match(GrammarParser::TYPE);
          setState(217);
          match(GrammarParser::ID);
        }
        setState(220);
        match(GrammarParser::T__4);
        setState(221);
        match(GrammarParser::T__1);
        setState(225);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 6446659860) != 0)) {
          setState(222);
          sentence();
          setState(227);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(228);
        match(GrammarParser::T__6);
        setState(232);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
        case 1: {
          setState(229);
          ariphm_expr(0);
          break;
        }

        case 2: {
          setState(230);
          bool_expr(0);
          break;
        }

        case 3: {
          setState(231);
          function_call_stmt();
          break;
        }

        default:
          break;
        }
        setState(234);
        match(GrammarParser::SEMICOLON);
        setState(235);
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

tree::TerminalNode* GrammarParser::Func_call_stmtContext::ID() {
  return getToken(GrammarParser::ID, 0);
}

std::vector<GrammarParser::Ariphm_exprContext *> GrammarParser::Func_call_stmtContext::ariphm_expr() {
  return getRuleContexts<GrammarParser::Ariphm_exprContext>();
}

GrammarParser::Ariphm_exprContext* GrammarParser::Func_call_stmtContext::ariphm_expr(size_t i) {
  return getRuleContext<GrammarParser::Ariphm_exprContext>(i);
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
    setState(239);
    match(GrammarParser::ID);
    setState(240);
    match(GrammarParser::T__3);
    setState(250);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6442450960) != 0)) {
      setState(246);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(241);
          ariphm_expr(0);
          setState(242);
          match(GrammarParser::T__5); 
        }
        setState(248);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
      }
      setState(249);
      ariphm_expr(0);
    }
    setState(252);
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

GrammarParser::Function_call_stmtContext* GrammarParser::Var_def_stmtContext::function_call_stmt() {
  return getRuleContext<GrammarParser::Function_call_stmtContext>(0);
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
    setState(264);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<GrammarParser::Var_decl_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(254);
      match(GrammarParser::TYPE);
      setState(255);
      match(GrammarParser::ID);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GrammarParser::Var_def_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(256);
      match(GrammarParser::TYPE);
      setState(257);
      match(GrammarParser::ID);
      setState(258);
      match(GrammarParser::ASSIGN);
      setState(262);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
      case 1: {
        setState(259);
        ariphm_expr(0);
        break;
      }

      case 2: {
        setState(260);
        bool_expr(0);
        break;
      }

      case 3: {
        setState(261);
        function_call_stmt();
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

//----------------- Global_var_stmtContext ------------------------------------------------------------------

GrammarParser::Global_var_stmtContext::Global_var_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::Global_var_stmtContext::getRuleIndex() const {
  return GrammarParser::RuleGlobal_var_stmt;
}

void GrammarParser::Global_var_stmtContext::copyFrom(Global_var_stmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Global_def_stmtContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::Global_def_stmtContext::TYPE() {
  return getToken(GrammarParser::TYPE, 0);
}

tree::TerminalNode* GrammarParser::Global_def_stmtContext::ID() {
  return getToken(GrammarParser::ID, 0);
}

tree::TerminalNode* GrammarParser::Global_def_stmtContext::ASSIGN() {
  return getToken(GrammarParser::ASSIGN, 0);
}

tree::TerminalNode* GrammarParser::Global_def_stmtContext::NUM() {
  return getToken(GrammarParser::NUM, 0);
}

tree::TerminalNode* GrammarParser::Global_def_stmtContext::SEMICOLON() {
  return getToken(GrammarParser::SEMICOLON, 0);
}

GrammarParser::Global_def_stmtContext::Global_def_stmtContext(Global_var_stmtContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Global_def_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitGlobal_def_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Global_decl_stmtContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::Global_decl_stmtContext::TYPE() {
  return getToken(GrammarParser::TYPE, 0);
}

tree::TerminalNode* GrammarParser::Global_decl_stmtContext::ID() {
  return getToken(GrammarParser::ID, 0);
}

tree::TerminalNode* GrammarParser::Global_decl_stmtContext::SEMICOLON() {
  return getToken(GrammarParser::SEMICOLON, 0);
}

GrammarParser::Global_decl_stmtContext::Global_decl_stmtContext(Global_var_stmtContext *ctx) { copyFrom(ctx); }


std::any GrammarParser::Global_decl_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitGlobal_decl_stmt(this);
  else
    return visitor->visitChildren(this);
}
GrammarParser::Global_var_stmtContext* GrammarParser::global_var_stmt() {
  Global_var_stmtContext *_localctx = _tracker.createInstance<Global_var_stmtContext>(_ctx, getState());
  enterRule(_localctx, 14, GrammarParser::RuleGlobal_var_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(274);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<GrammarParser::Global_decl_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(266);
      match(GrammarParser::TYPE);
      setState(267);
      match(GrammarParser::ID);
      setState(268);
      match(GrammarParser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GrammarParser::Global_def_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(269);
      match(GrammarParser::TYPE);
      setState(270);
      match(GrammarParser::ID);
      setState(271);
      match(GrammarParser::ASSIGN);
      setState(272);
      match(GrammarParser::NUM);
      setState(273);
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
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, GrammarParser::RuleBool_expr, precedence);

    

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<One_bool_stmtContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(277);
      ariphm_expr(0);
      setState(278);
      match(GrammarParser::EVALOP);
      setState(279);
      ariphm_expr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Not_stmtContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(281);
      match(GrammarParser::NOT);
      setState(282);
      match(GrammarParser::T__3);
      setState(283);
      bool_expr(0);
      setState(284);
      match(GrammarParser::T__4);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Par_bool_stmtContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(286);
      match(GrammarParser::T__3);
      setState(287);
      bool_expr(0);
      setState(288);
      match(GrammarParser::T__4);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(300);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(298);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<And_stmtContext>(_tracker.createInstance<Bool_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBool_expr);
          setState(292);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(293);
          match(GrammarParser::AND);
          setState(294);
          bool_expr(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Or_stmtContext>(_tracker.createInstance<Bool_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBool_expr);
          setState(295);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(296);
          match(GrammarParser::OR);
          setState(297);
          bool_expr(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(302);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
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
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, GrammarParser::RuleAriphm_expr, precedence);

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
    setState(310);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::NUM: {
        _localctx = _tracker.createInstance<NumberContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(304);
        match(GrammarParser::NUM);
        break;
      }

      case GrammarParser::ID: {
        _localctx = _tracker.createInstance<VariableContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(305);
        match(GrammarParser::ID);
        break;
      }

      case GrammarParser::T__3: {
        _localctx = _tracker.createInstance<Par_stmtContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(306);
        match(GrammarParser::T__3);
        setState(307);
        ariphm_expr(0);
        setState(308);
        match(GrammarParser::T__4);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(320);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(318);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Mul_div_stmtContext>(_tracker.createInstance<Ariphm_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleAriphm_expr);
          setState(312);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(313);
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
          setState(314);
          ariphm_expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Add_sub_stmtContext>(_tracker.createInstance<Ariphm_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleAriphm_expr);
          setState(315);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(316);
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
          setState(317);
          ariphm_expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(322);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
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
    case 8: return bool_exprSempred(antlrcpp::downCast<Bool_exprContext *>(context), predicateIndex);
    case 9: return ariphm_exprSempred(antlrcpp::downCast<Ariphm_exprContext *>(context), predicateIndex);

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
