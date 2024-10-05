#include "Table.hpp"
#include <iostream>

Table::Table() = default;

void Table::BeginScope(const std::string& name) {
  scope_names.push_back(name);
  scopes.emplace();

}

void Table::EndScope() {
  auto scope = scopes.top();
  scopes.pop();
  for (const auto& elem : scope) {
    instances[elem].pop_back();
  }
  scope_names.pop_back();
}

void Table::CreateInstance(const std::string& name, Instance* instance) {
  scopes.top().insert(name);
  instances[name].push_back(instance);
  full_names[GetDomName() + name] = instance;
}

Instance* Table::GetVariable(const std::string& name) {
  if (!instances.contains(name)) {
    throw std::runtime_error("coudn't get variable");;
  }
  for (auto it = instances[name].rbegin(); it != instances[name].rend(); ++it) {
    if (dynamic_cast<Variable*>(*it) != nullptr) {
      return *it;
    }
  }
  throw std::runtime_error("coudn't get variable");
}

Instance* Table::GetFunction(const std::string& name) {
  if (!instances.contains(name)) {
    throw std::runtime_error("coudn't get function");
  }
  for (auto it = instances[name].rbegin(); it != instances[name].rend(); ++it) {
    if (dynamic_cast<Function*>(*it) != nullptr) {
      return *it;
    }
  }
  throw std::runtime_error("coudn't get function");
}

bool Table::InCurrentScope(const std::string& name) {
  return full_names.contains(GetDomName() + name);
}

std::string Table::GetDomName() {
  std::string res;
  for (const auto& scope : scope_names) {
    res += (scope + "##");
  }
  return res;
}

Instance* Table::GetByFullName(const std::string& name) {
  return full_names[GetDomName() + name];
}

void Table::SetCurrentFunction(Instance* function) {
  current_function = function;
}

Instance* Table::GetCurrentFunction() {
  return current_function;
}