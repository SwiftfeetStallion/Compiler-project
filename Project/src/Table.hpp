#pragma once
#include "Entities.hpp"
#include <map>
#include <stack>
#include <unordered_set>

class Table {
private:
  std::map<std::string, std::vector<Instance*>> instances;
  std::stack<std::unordered_set<std::string>> scopes;
  std::map<std::string, Instance*> full_names;
  std::vector<std::string> scope_names;
  Instance* current_function = nullptr;

public:
  Table();
  void BeginScope(const std::string& name);
  void EndScope();
  void CreateInstance(const std::string& name, Instance* instance);
  Instance* GetVariable(const std::string& name);
  Instance* GetFunction(const std::string& name);
  bool InCurrentScope(const std::string& name);
  std::string GetDomName();
  Instance* GetByFullName(const std::string& name);
  void SetCurrentFunction(Instance* function);
  Instance* GetCurrentFunction();

};