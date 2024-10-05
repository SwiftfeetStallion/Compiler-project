#pragma once
#include <string>
#include <vector>
#include <llvm/IR/Value.h>
#include <llvm/IR/Instructions.h>

class Instance {
public:
  virtual ~Instance() = default;
};

class Variable : public Instance {
private:
  llvm::Value* value;
  llvm::Value* ptr;

public:
  Variable(llvm::Value* value, llvm::Value* ptr)
      : value(value), ptr(ptr) {}
  llvm::Value* GetValue() {
    return value;
  }
  llvm::Value* GetPtr() {
    return ptr;
  }
  void SetValue(llvm::Value* val) {
    value = val;
  }
};

class Function : public Instance {
private:
  std::string ret_type;
  llvm::Function* function;
  int arg_size;
  bool defined;

public:
  Function(const std::string& ret_type, llvm::Function* function, int arg_size, bool defined)
      : ret_type(ret_type), function(function), arg_size(arg_size), defined(defined) {}
  bool IsDefined() { return defined; }
  std::string GetType() { return ret_type; }
  llvm::Function* GetPtr() { return function; }
  void SetDefined() { defined = true; }
  int GetArgSize() { return arg_size; }

};