#pragma once
#include "BaseErrorListener.h"
#include "Parser.h"
#include <vector>

class ErrorListener : public antlr4::BaseErrorListener {
public:
  static bool isError;
  virtual void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token * offendingSymbol, size_t line, size_t charPositionInLine,
      const std::string &msg, std::exception_ptr e) override {
        isError = true;
        std::cout << "Syntax Error (line " << line << ", pos " << charPositionInLine << "): " << msg << "\n";
      }
};

bool ErrorListener::isError = false;