
// Generated from Grammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  GrammarLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, EVALOP = 6, TYPE = 7, 
    VOID = 8, PRINT = 9, IF = 10, WHILE = 11, ELSE = 12, ELIF = 13, ADD = 14, 
    SUB = 15, MUL = 16, DIV = 17, AND = 18, OR = 19, NOT = 20, ASSIGN = 21, 
    EQUAL = 22, NO_EQUAL = 23, LESS = 24, LESSEQ = 25, GREATER = 26, GREATEREQ = 27, 
    SEMICOLON = 28, ID = 29, NUM = 30, LINECOMMENT = 31, WS = 32
  };

  explicit GrammarLexer(antlr4::CharStream *input);

  ~GrammarLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

