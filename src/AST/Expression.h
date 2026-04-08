#ifndef AST_EXPRESSION_H
#define AST_EXPRESSION_H

#include "Base.h"
#include <set>

namespace LuaAST {
    
struct Expression: public Node {
    enum class Type {
        NONE,

        LITERAL,
        FUNC_ANON,
        TABLE_CONSTR,
        OPERATION,
        VAR,
        FUNCCALL,
    };
    virtual Type type() const = 0;
};


struct Number {
    enum class Kind {
        INT,
        FLOAT
    } kind;

    union {
        int64_t i;
        double f;
    };
};

struct Literal: public Expression {
    enum class Kind {
        NIL,
        BOOLEAN,
        NUMBER,
        STRING
    } kind;

    std::variant<std::monostate, bool, Number, std::string> value;

    Type type() const;
    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct FuncName: public Node {
    std::string base;
    // .x.y.z
    std::vector< std::string > specifications;
    // :new
    std::string kind;

    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct FuncBody: public Node {
    std::vector< std::string > params;
    bool variadic = false;
    std::optional<std::string> variadic_param;

    std::shared_ptr< Block > block;

    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct FuncAnon: public Expression {
    std::shared_ptr< FuncBody > body;

    std::set< std::string > captures;

    Type type() const;

    virtual void print(std::ostream &os, int tabs = 0) const;
};


struct Field: public Node {
    enum class Kind {
        INDEXED,
        NAMED,
        SINGLE,
    } kind;

    std::string name;

    std::shared_ptr<Expression> lhs;
    std::shared_ptr<Expression> rhs;

    virtual void print(std::ostream &os, int tabs = 0) const;
};
struct TableConstr: public Expression {
    std::vector< std::shared_ptr<Field> > fields;
    Type type() const;

    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct Operation: public Expression {
    enum class Kind {
        UNOP,
        BINOP,
    } kind;
    std::string operat;

    std::shared_ptr<Expression> lhs;
    std::shared_ptr<Expression> rhs;
    
    Type type() const;

    void print(std::ostream &os, int tabs = 0) const;
};



struct VarPart: public Node {
    enum class Kind {
        NAME,
        EXP
    } kind;
    virtual void print(std::ostream &os, int tabs, bool first) const = 0;
};
struct VarPartName: public VarPart {
    std::string name;
    VarPartName(std::string name);
    void print(std::ostream &os, int tabs, bool first) const;
};
struct VarPartExp: public VarPart {
    std::shared_ptr<Expression> exp;
    VarPartExp(std::shared_ptr<Expression> exp);
    void print(std::ostream &os, int tabs, bool first) const;
};

struct Var: public Expression {
    std::shared_ptr<VarPart> base;
    std::vector<
        std::shared_ptr<VarPart> 
    > specifications;

    Type type() const;
    void print(std::ostream &os, int tabs = 0) const;
};


struct FuncCallTail: public Node {
    std::optional<std::string> name;
    std::vector< std::shared_ptr<Expression> > args;

    void print(std::ostream &os, int tabs = 0) const;
};

struct FuncCall: public Expression {
    std::shared_ptr<Expression> function;
    std::vector< std::shared_ptr<FuncCallTail> > tails;

    void print(std::ostream &os, int tabs = 0) const;

    Type type() const;
};

};
#endif // AST_EXPRESSION_H