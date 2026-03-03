#ifndef AST_BASE_H
#define AST_BASE_H

#include <memory>
#include <unordered_map>
#include <stdint.h>
#include <string>
#include <vector>
#include <optional>
#include <variant>

namespace LuaAST {

struct Node {
    virtual ~Node() = default;
    virtual void print(std::ostream &os, int tabs = 0) const {};
};

struct Block;

struct Statement;
struct LabelSt;

struct FuncBody;
struct FuncCall;

struct Var;
struct Expression;
struct Number;
struct FuncName;
struct Attribute;

struct Field;
}

#endif