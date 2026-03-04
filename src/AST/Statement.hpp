#ifndef AST_STATEMENT_H
#define AST_STATEMENT_H

#include "Base.hpp"

namespace LuaAST {

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
    GLOBAL,
    LOCAL
};

struct Block: public Node {
    std::vector< std::shared_ptr<Statement> > statements;

    Statement* parent;
    
    Block(): parent(nullptr) {}

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
        CONST,
    } kind;
    Attribute(const std::string& str) {
        if (str == "const") kind = Kind::CONST;
        else {
            throw std::runtime_error("Unexpected attribute: " + str);
        }
    }
};

struct FuncdefSt: public Statement {
    enum class Kind {
        DEFAULT,
        SCOPED,
    } kind;
    std::shared_ptr< FuncBody > body;

    Type type() const { return Type::FUNCDEF; }
};

struct DefaultFuncdefSt: public FuncdefSt {
    std::shared_ptr<FuncName> name;
    DefaultFuncdefSt() { kind = Kind::DEFAULT; }
};

struct ScopedFuncdefSt: public FuncdefSt {
    ScopeSpec scope;
    std::string name;
    ScopedFuncdefSt() { kind = Kind::SCOPED; }
};

struct FuncName: public Node {
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
    std::optional< std::shared_ptr<Block> > branch_else;

    Type type() const { return Type::IF; }
};

struct Num_forSt: public Statement {
    std::string var;
    std::shared_ptr<Expression> from;
    std::shared_ptr<Expression> to;
    std::shared_ptr<Expression> step;

    std::shared_ptr<Block> block;

    Type type() const { return Type::NUM_FOR; }
};

struct Gen_forSt: public Statement {
    std::vector<std::string> vars;
    std::vector< std::shared_ptr<Expression> > exps;

    std::shared_ptr<Block> block;

    Type type() const { return Type::GEN_FOR; }
};

struct GotoSt: public Statement {
    std::string label;

    Type type() const { return Type::GOTO; }
};

struct LabelSt: public Statement {
    std::string label;

    Type type() const { return Type::LABEL; }
};

struct BreakSt: public Statement {
    Type type() const { return Type::BREAK; }
};

struct FunccallSt: public Statement {
    std::shared_ptr< FuncCall > funccall;

    Type type() const { return Type::FUNCCALL; }
};

struct ReturnSt: public Statement {
    std::vector< std::shared_ptr<Expression> > values;
    Type type() const { return Type::RETURN; }
};

};

#endif // AST_STATEMENT_H