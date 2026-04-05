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

    static void insert_tabs(std::ostream &os, int tabs) {
        for (int t=0; t<tabs; t++) {
            os << "\t";
        }
    }
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

struct Statement: public Node {
    enum class Type {
        NONE,
        // doBlockStatement
        DO_BLOCK,        
        // assignmentStatement
        ASSIGN,        
        // declarationStatement
        DECLARE,        
        // globalAttribStatement
        ATTRIB,        
        // funcdefStatement
        FUNCDEF,        
        // whileStatement
        WHILE,        
        // repeatStatement
        REPEAT,        
        // ifStatement
        IF,        
        // numericForStatement
        NUM_FOR,        
        // genericForStatement
        GEN_FOR,        
        // gotoStatement
        GOTO,        
        // labelStatement
        LABEL,        
        // breakStatement
        BREAK,        
        // funcCallStatement
        FUNCCALL,
        // returnStatement
        RETURN,    
    };

    Block* parent;
    Statement* prev;
    Statement* next;

    Statement(): parent(nullptr), prev(nullptr), next(nullptr) {}
    virtual Type type() const = 0;
};

enum class ScopeSpec {
    GLOBAL,    LOCAL
};

struct Block: public Node {
    std::vector< std::shared_ptr<Statement> > statements;

    Statement* parent;
    
    Block(): parent(nullptr) {}
  
    virtual void print(std::ostream &os, int tabs = 0) const {
        for (auto &st: statements) {
            insert_tabs(os, tabs);
            st->print(os, tabs);
            os << std::endl;
        }
    };
};
}

#endif