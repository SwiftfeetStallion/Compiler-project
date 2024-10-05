#include <iostream>

#include "antlr4-runtime.h"
#include "src/GrammarVisitor.h"
#include "src/GrammarParser.h"
#include "src/InterpretVisitor.hpp"
#include "src/PrintVisitor.hpp"
#include "src/GrammarLexer.h"
#include "src/ErrorListener.hpp"
#include <fstream>

int Interpret() {
  std::ifstream fin;
  fin.open("../input.txt");
  std::string str = "";
  std::string line;
  while(getline(fin, line)) {
    str += (line + "\n");
    if (fin.eof()) break;
  }
  fin.close();
  antlr4::ANTLRInputStream input(str);
  GrammarLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  GrammarParser parser(&tokens);
  parser.removeErrorListeners();
  ErrorListener error_listener;
  parser.addErrorListener(&error_listener);
  auto* tree = parser.program();
  if (ErrorListener::isError) {
    return 1;
  } 
  InterpretVisitor interpreter;
  interpreter.visit(tree);
  if (interpreter.contains_errors()) {
    interpreter.print_errors();
    return 1;
  }
  interpreter.print_statements();
  return 0;
}

void Print() {
  std::ifstream fin;
  fin.open("../input.txt");
  std::string str = "";
  std::string line;
  while(getline(fin, line)) {
    str += (line + "\n");
    if (fin.eof()) break;
  }
  fin.close();
  antlr4::ANTLRInputStream input(str);
  GrammarLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  GrammarParser parser(&tokens);
  auto* tree = parser.program();
  
  PrintVisitor print_visitor("../output.txt");
  print_visitor.visit(tree);
}

int main(int argc, char* argv[]) {
  Print();
  if (Interpret() == 1) return 1;
  return 0;
}