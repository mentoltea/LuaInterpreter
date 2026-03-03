#ifndef AST_EXPRESSION_H
#define AST_EXPRESSION_H

#include "Base.hpp"

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

    Type type() const { return Type::LITERAL; }

    virtual void print(std::ostream &os, int tabs = 0) const {
        os << "literal( ";
        switch (kind) {

        case Kind::NIL: { os << "nil"; } break;
        case Kind::BOOLEAN: { 
            if (std::get<bool>(value)) os << "true";
            else os << "false"; 
        } break;
        case Kind::STRING: {
            os << std::get<std::string>(value);
        } break;
        case Kind::NUMBER: {
            auto& num = std::get<Number>(value);
            if (num.kind == Number::Kind::INT) os << num.i; 
            else if (num.kind == Number::Kind::FLOAT) os << num.f; 
        } break;
        
        default:
            break;
        }    
        os << " )";
    };
};


struct FuncAnon: public Expression {
    std::shared_ptr< FuncBody > body;

    Type type() const { return Type::FUNC_ANON; }
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
};
struct TableConstr: public Expression {
    std::vector< std::shared_ptr<Field> > fields;
    Type type() const { return Type::TABLE_CONSTR; }
};

struct Operation: public Expression {
    enum class Kind {
        UNOP,
        BINOP,
    } kind;
    std::string operat;

    std::shared_ptr<Expression> lhs;
    std::shared_ptr<Expression> rhs;
    
    Type type() const { return Type::OPERATION; }

    void print(std::ostream &os, int tabs = 0) const {
        os << "(";
        if (kind == Kind::UNOP) {
            os << operat;
            lhs->print(os);
        } else {
            lhs->print(os);
            os << " " << operat << " ";
            rhs->print(os);
        }
        os << ")";
    }
};



struct VarPart: public Node {
    enum class Kind {
        NONE,

        NAME,
        EXP
    } kind;
};
struct VarPartName: public VarPart {
    std::string name;
    VarPartName(std::string name): name(name) {}
    void print(std::ostream &os, int tabs = 0) const {
        os << ".";
        os << name;
    }
};
struct VarPartExp: public VarPart {
    std::shared_ptr<Expression> exp;
    VarPartExp(std::shared_ptr<Expression> exp): exp(exp) {}
    void print(std::ostream &os, int tabs = 0) const {
        os << "[";
        exp->print(os, tabs);
        os << "]";
    }
};

struct Var: public Expression {
    std::shared_ptr<VarPart> base;
    std::vector<
        std::shared_ptr<VarPart> 
    > specifications;

    Type type() const { return Type::VAR; }
    void print(std::ostream &os, int tabs = 0) const {
        base->print(os, tabs);
        for (auto &spec: specifications) {
            spec->print(os, tabs);
        }
    }
};


struct FuncCallTail: public Node {
    std::optional<std::string> name;
    std::vector< std::shared_ptr<Expression> > args;

    void print(std::ostream &os, int tabs = 0) const {
        if (name.has_value()) {
            os << ":" << name.value();
        }
        os << "(";
        for (auto& arg: args) {
            arg->print(os);
            os << ",";
        }
        os << ")";
    }
};

struct FuncCall: public Expression {
    std::shared_ptr<Expression> function;
    std::vector< std::shared_ptr<FuncCallTail> > tails;

    void print(std::ostream &os, int tabs = 0) const {
        function->print(os);
        for (auto& tail: tails) {
            tail->print(os);
        }
    }

    Type type() const { return Type::FUNCCALL; }
};

};
#endif // AST_EXPRESSION_H