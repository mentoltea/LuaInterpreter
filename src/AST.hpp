#ifndef AST_H
#define AST_H

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

    std::weak_ptr<Block> parent;
    std::weak_ptr<Statement> prev;
    std::weak_ptr<Statement> next;

    virtual Type type() const = 0;
};

enum class ScopeSpec {
    GLOBAL,
    LOCAL
};

struct Block: public Node {
    std::vector< std::shared_ptr<Statement> > statements;

    std::weak_ptr<Statement> parent;
    
    virtual void print(std::ostream &os, int tabs = 0) const override {
        for (auto ptr: statements) {
            ptr->print(os, tabs+1);
        }
    }
};



struct DoBlockSt: public Statement {
    std::shared_ptr< Block > block;
    Type type() const { return Type::DO_BLOCK; }
};

struct AssignSt: public Statement {
    std::vector< std::shared_ptr <Var> > lhs;
    std::vector< std::shared_ptr <Expression> > rhs;

    Type type() const { return Type::ASSIGN; }
};

struct DeclareSt: public Statement {
    ScopeSpec scope;
    std::shared_ptr< Attribute > common_attr = nullptr;
    std::vector< 
        std::pair< std::string, std::shared_ptr<Attribute> > 
    > lhs;
    std::vector< std::shared_ptr <Expression> > rhs;

    Type type() const { return Type::DECLARE; }
};


struct AttribSt: public Statement {
    std::shared_ptr< Attribute > attr;

    Type type() const { return Type::ATTRIB; }
};

struct Attribute {
    enum class Kind {
        CONST
    } kind;
};

struct FuncdefSt: public Statement {
    ScopeSpec scope;
    std::shared_ptr< FuncName > name;
    std::shared_ptr< FuncBody > body;

    Type type() const { return Type::FUNCDEF; }
};

struct FuncName {
    std::string base;
    // .x.y.z
    std::vector< std::string > specifications;
    // :new
    std::string kind;
};

struct FuncBody: public Node {
    std::vector< std::string > params;
    bool variadic;
    std::optional<std::string> variadic_param;

    std::shared_ptr< Block > block;
};
        
struct WhileSt: public Statement {
    std::shared_ptr< Expression > cond;
    std::shared_ptr< Block > block;
    
    Type type() const { return Type::WHILE; }
};

struct RepeatSt: public Statement {
    std::shared_ptr< Expression > un_cond;
    std::shared_ptr< Block > block;

    Type type() const { return Type::REPEAT; }
};

struct IfSt: public Statement {
    typedef std::pair< 
        std::shared_ptr<Expression>,
        std::shared_ptr<Block>
    > CondBlock;

    CondBlock branch_if;
    std::vector<CondBlock> branch_elseif;
    std::optional<CondBlock> branch_else;

    Type type() const { return Type::IF; }
};

struct Num_forSt: public Statement {
    std::string var;
    std::shared_ptr<Number> from;
    std::shared_ptr<Number> to;
    std::shared_ptr<Number> step;

    std::shared_ptr<Block> block;

    Type type() const { return Type::NUM_FOR; }
};

struct Gen_forSt: public Statement {
    std::vector<std::string> vars;
    std::vector< std::shared_ptr<Expression> > list;

    std::shared_ptr<Block> block;

    Type type() const { return Type::GEN_FOR; }
};

struct GotoSt: public Statement {
    std::shared_ptr<LabelSt> label;

    Type type() const { return Type::GOTO; }
};

struct LabelSt: public Statement {
    Type type() const { return Type::LABEL; }
};

struct BreakSt: public Statement {
    Type type() const { return Type::BREAK; }
};

struct FunccallSt: public Statement {
    std::shared_ptr< FuncCall> funccall;

    Type type() const { return Type::FUNCCALL; }
};

struct ReturnSt: public Statement {
    std::vector< std::shared_ptr<Expression> > values;
    Type type() const { return Type::RETURN; }
};


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


struct TableConstr: public Expression {
    std::vector< Field > fields;
    Type type() const { return Type::TABLE_CONSTR; }
};
struct Field {
    enum class Type {
        INDEXED,
        NAMED,
    } type;

    std::shared_ptr<Expression> rhs;
    std::shared_ptr<Expression> lhs;
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



}
#endif // AST_H