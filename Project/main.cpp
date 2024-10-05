#include <iostream>

#include "antlr4-runtime.h"
#include "src/GrammarVisitor.h"
#include "src/GrammarParser.h"
#include "src/GrammarLexer.h"
#include "src/ErrorListener.hpp"
#include "src/IRVisitor.hpp"
#include <fstream>


int GenerateIr() {
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
  IRVisitor ir_visitor("../output.ll");
  ir_visitor.visit(tree);
  if (ir_visitor.ContainsErrors()) {
    ir_visitor.PrintErrors();
    return 1;
  }
  ir_visitor.WriteToFile();
  return 0;
}

int main(int argc, char* argv[]) {
  if (GenerateIr() == 1) return 1;
  return 0;
}