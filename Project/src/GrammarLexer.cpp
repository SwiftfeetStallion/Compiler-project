
// Generated from Grammar.g4 by ANTLR 4.13.1


#include "GrammarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct GrammarLexerStaticData final {
  GrammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GrammarLexerStaticData(const GrammarLexerStaticData&) = delete;
  GrammarLexerStaticData(GrammarLexerStaticData&&) = delete;
  GrammarLexerStaticData& operator=(const GrammarLexerStaticData&) = delete;
  GrammarLexerStaticData& operator=(GrammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag grammarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
GrammarLexerStaticData *grammarlexerLexerStaticData = nullptr;

void grammarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (grammarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(grammarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GrammarLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "TYPE", "EVALOP", 
      "VOID", "PRINT", "IF", "WHILE", "ELSE", "ELIF", "ADD", "SUB", "MUL", 
      "DIV", "AND", "OR", "NOT", "ASSIGN", "EQUAL", "NO_EQUAL", "LESS", 
      "LESSEQ", "GREATER", "GREATEREQ", "SEMICOLON", "ID", "NUM", "LINECOMMENT", 
      "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,34,210,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,1,0,1,0,1,0,1,
  	0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,3,
  	8,108,8,8,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,
  	1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,
  	1,19,1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,23,1,24,
  	1,24,1,24,1,25,1,25,1,26,1,26,1,26,1,27,1,27,1,28,1,28,1,28,1,29,1,29,
  	1,30,4,30,180,8,30,11,30,12,30,181,1,31,1,31,1,31,5,31,187,8,31,10,31,
  	12,31,190,9,31,3,31,192,8,31,1,32,1,32,1,32,1,32,4,32,198,8,32,11,32,
  	12,32,199,1,32,1,32,1,33,4,33,205,8,33,11,33,12,33,206,1,33,1,33,0,0,
  	34,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,
  	14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,
  	51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,1,0,5,3,0,65,90,
  	95,95,97,122,1,0,48,57,1,0,49,57,2,0,10,10,13,13,3,0,9,10,13,13,32,32,
  	219,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,
  	1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,
  	0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,
  	0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,
  	1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,
  	0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,
  	0,65,1,0,0,0,0,67,1,0,0,0,1,69,1,0,0,0,3,80,1,0,0,0,5,82,1,0,0,0,7,84,
  	1,0,0,0,9,86,1,0,0,0,11,88,1,0,0,0,13,90,1,0,0,0,15,97,1,0,0,0,17,107,
  	1,0,0,0,19,109,1,0,0,0,21,114,1,0,0,0,23,120,1,0,0,0,25,123,1,0,0,0,27,
  	129,1,0,0,0,29,134,1,0,0,0,31,142,1,0,0,0,33,144,1,0,0,0,35,146,1,0,0,
  	0,37,148,1,0,0,0,39,150,1,0,0,0,41,153,1,0,0,0,43,156,1,0,0,0,45,158,
  	1,0,0,0,47,160,1,0,0,0,49,163,1,0,0,0,51,166,1,0,0,0,53,168,1,0,0,0,55,
  	171,1,0,0,0,57,173,1,0,0,0,59,176,1,0,0,0,61,179,1,0,0,0,63,191,1,0,0,
  	0,65,193,1,0,0,0,67,204,1,0,0,0,69,70,5,105,0,0,70,71,5,110,0,0,71,72,
  	5,116,0,0,72,73,5,32,0,0,73,74,5,109,0,0,74,75,5,97,0,0,75,76,5,105,0,
  	0,76,77,5,110,0,0,77,78,5,40,0,0,78,79,5,41,0,0,79,2,1,0,0,0,80,81,5,
  	123,0,0,81,4,1,0,0,0,82,83,5,125,0,0,83,6,1,0,0,0,84,85,5,40,0,0,85,8,
  	1,0,0,0,86,87,5,41,0,0,87,10,1,0,0,0,88,89,5,44,0,0,89,12,1,0,0,0,90,
  	91,5,114,0,0,91,92,5,101,0,0,92,93,5,116,0,0,93,94,5,117,0,0,94,95,5,
  	114,0,0,95,96,5,110,0,0,96,14,1,0,0,0,97,98,5,105,0,0,98,99,5,110,0,0,
  	99,100,5,116,0,0,100,16,1,0,0,0,101,108,3,47,23,0,102,108,3,49,24,0,103,
  	108,3,51,25,0,104,108,3,53,26,0,105,108,3,55,27,0,106,108,3,57,28,0,107,
  	101,1,0,0,0,107,102,1,0,0,0,107,103,1,0,0,0,107,104,1,0,0,0,107,105,1,
  	0,0,0,107,106,1,0,0,0,108,18,1,0,0,0,109,110,5,118,0,0,110,111,5,111,
  	0,0,111,112,5,105,0,0,112,113,5,100,0,0,113,20,1,0,0,0,114,115,5,112,
  	0,0,115,116,5,114,0,0,116,117,5,105,0,0,117,118,5,110,0,0,118,119,5,116,
  	0,0,119,22,1,0,0,0,120,121,5,105,0,0,121,122,5,102,0,0,122,24,1,0,0,0,
  	123,124,5,119,0,0,124,125,5,104,0,0,125,126,5,105,0,0,126,127,5,108,0,
  	0,127,128,5,101,0,0,128,26,1,0,0,0,129,130,5,101,0,0,130,131,5,108,0,
  	0,131,132,5,115,0,0,132,133,5,101,0,0,133,28,1,0,0,0,134,135,5,101,0,
  	0,135,136,5,108,0,0,136,137,5,115,0,0,137,138,5,101,0,0,138,139,5,32,
  	0,0,139,140,5,105,0,0,140,141,5,102,0,0,141,30,1,0,0,0,142,143,5,43,0,
  	0,143,32,1,0,0,0,144,145,5,45,0,0,145,34,1,0,0,0,146,147,5,42,0,0,147,
  	36,1,0,0,0,148,149,5,47,0,0,149,38,1,0,0,0,150,151,5,38,0,0,151,152,5,
  	38,0,0,152,40,1,0,0,0,153,154,5,124,0,0,154,155,5,124,0,0,155,42,1,0,
  	0,0,156,157,5,33,0,0,157,44,1,0,0,0,158,159,5,61,0,0,159,46,1,0,0,0,160,
  	161,5,61,0,0,161,162,5,61,0,0,162,48,1,0,0,0,163,164,5,33,0,0,164,165,
  	5,61,0,0,165,50,1,0,0,0,166,167,5,60,0,0,167,52,1,0,0,0,168,169,5,60,
  	0,0,169,170,5,61,0,0,170,54,1,0,0,0,171,172,5,62,0,0,172,56,1,0,0,0,173,
  	174,5,62,0,0,174,175,5,61,0,0,175,58,1,0,0,0,176,177,5,59,0,0,177,60,
  	1,0,0,0,178,180,7,0,0,0,179,178,1,0,0,0,180,181,1,0,0,0,181,179,1,0,0,
  	0,181,182,1,0,0,0,182,62,1,0,0,0,183,192,7,1,0,0,184,188,7,2,0,0,185,
  	187,7,1,0,0,186,185,1,0,0,0,187,190,1,0,0,0,188,186,1,0,0,0,188,189,1,
  	0,0,0,189,192,1,0,0,0,190,188,1,0,0,0,191,183,1,0,0,0,191,184,1,0,0,0,
  	192,64,1,0,0,0,193,194,5,47,0,0,194,195,5,47,0,0,195,197,1,0,0,0,196,
  	198,8,3,0,0,197,196,1,0,0,0,198,199,1,0,0,0,199,197,1,0,0,0,199,200,1,
  	0,0,0,200,201,1,0,0,0,201,202,6,32,0,0,202,66,1,0,0,0,203,205,7,4,0,0,
  	204,203,1,0,0,0,205,206,1,0,0,0,206,204,1,0,0,0,206,207,1,0,0,0,207,208,
  	1,0,0,0,208,209,6,33,0,0,209,68,1,0,0,0,7,0,107,181,188,191,199,206,1,
  	6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  grammarlexerLexerStaticData = staticData.release();
}

}

GrammarLexer::GrammarLexer(CharStream *input) : Lexer(input) {
  GrammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *grammarlexerLexerStaticData->atn, grammarlexerLexerStaticData->decisionToDFA, grammarlexerLexerStaticData->sharedContextCache);
}

GrammarLexer::~GrammarLexer() {
  delete _interpreter;
}

std::string GrammarLexer::getGrammarFileName() const {
  return "Grammar.g4";
}

const std::vector<std::string>& GrammarLexer::getRuleNames() const {
  return grammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& GrammarLexer::getChannelNames() const {
  return grammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& GrammarLexer::getModeNames() const {
  return grammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& GrammarLexer::getVocabulary() const {
  return grammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView GrammarLexer::getSerializedATN() const {
  return grammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& GrammarLexer::getATN() const {
  return *grammarlexerLexerStaticData->atn;
}




void GrammarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  grammarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(grammarlexerLexerOnceFlag, grammarlexerLexerInitialize);
#endif
}
