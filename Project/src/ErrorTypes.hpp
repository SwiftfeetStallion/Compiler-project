#pragma once
#include <string>
#include <antlr4-runtime.h>


class ErrorTypes {
private:
  static std::pair<int, int> GetPosition(antlr4::tree::TerminalNode* node) {
    int line = node->getSymbol()->getLine();
    int column = node->getSymbol()->getCharPositionInLine();
    return std::make_pair(line, column);
  }
public:
  static std::string InstanceRedeclaration(antlr4::tree::TerminalNode* node) {
    auto [line, column] = GetPosition(node);
    return "Error (line " + std::to_string(line)
            + ", pos " + std::to_string(column)
            + "): instance "
            + node->getText()
            + " is already declared in this scope";
  }

  static std::string FunctionRedefinition(antlr4::tree::TerminalNode* node) {
    auto [line, column] = GetPosition(node);
    return "Error (line " + std::to_string(line)
            + ", pos " + std::to_string(column)
            + "): function " + node->getText() + " is already defined in this scope";
  }

  static std::string FuncTypeMismatch(antlr4::tree::TerminalNode* node, const std::string& ret_type) {
    auto [line, column] = GetPosition(node);
    return "Error (line " + std::to_string(line)
            + ", pos " + std::to_string(column)
            + "): function " + node->getText() + " has different type from " + ret_type;
  }

  static std::string SameFunctionArguments(antlr4::tree::TerminalNode* node) {
    auto [line, column] = GetPosition(node);
    return "Error (line " + std::to_string(line)
            + ", pos " + std::to_string(column)
            + "): function arguments must be different";
  }

  static std::string UnknownVariable(antlr4::tree::TerminalNode* node) {
    auto [line, column] = GetPosition(node);
    return "Error (line " + std::to_string(line)
            + ", pos " + std::to_string(column)
            + "): unknown variable: " + node->getText();
  }

  static std::string UnknownFunction(antlr4::tree::TerminalNode* node) {
    auto [line, column] = GetPosition(node);
    return "Error (line " + std::to_string(line)
            + ", pos " + std::to_string(column)
            + "): unknown function: " + node->getText();
  }

  static std::string ArgsNotMatch(antlr4::tree::TerminalNode* node) {
    auto [line, column] = GetPosition(node);
    return "Error (line " + std::to_string(line)
            + ", pos " + std::to_string(column)
            + "): functiom: " + node->getText() + " has different number of arguments";
  }
};