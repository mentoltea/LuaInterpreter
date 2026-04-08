#ifndef AST_STATEMENT_H
#define AST_STATEMENT_H

#include "Base.h"
#include "Expression.h"

namespace LuaAST {

struct DoBlockSt: public Statement {
    std::shared_ptr< Block > block;
    Type type() const;

    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct AssignSt: public Statement {
    std::vector< std::shared_ptr <Var> > lhs;
    std::vector< std::shared_ptr <Expression> > rhs;

    Type type() const;

    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct Attribute: public Node {
    enum class Kind {
        CONST,
    } kind;
    Attribute(const std::string& str);

    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct DeclareSt: public Statement {
    ScopeSpec scope;
    std::shared_ptr< Attribute > common_attr;
    std::vector< 
        std::pair< std::string, std::shared_ptr<Attribute> > 
    > lhs;
    std::vector< std::shared_ptr <Expression> > rhs;

    Type type() const;

    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct AttribSt: public Statement {
    std::shared_ptr< Attribute > attr;

    Type type() const;

    virtual void print(std::ostream &os, int tabs = 0) const;
};


struct FuncdefSt: public Statement {
    enum class Kind {
        DEFAULT,
        SCOPED,
    } kind;
    std::shared_ptr< FuncBody > body;

    Type type() const;
};

struct DefaultFuncdefSt: public FuncdefSt {
    std::shared_ptr<FuncName> name;
    DefaultFuncdefSt();

    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct ScopedFuncdefSt: public FuncdefSt {
    ScopeSpec scope;
    std::string name;
    ScopedFuncdefSt();

    virtual void print(std::ostream &os, int tabs = 0) const;
};

        
struct WhileSt: public Statement {
    std::shared_ptr< Expression > cond;
    std::shared_ptr< Block > block;
    
    Type type() const;

    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct RepeatSt: public Statement {
    std::shared_ptr< Expression > un_cond;
    std::shared_ptr< Block > block;

    Type type() const;

    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct IfSt: public Statement {
    typedef std::pair< 
        std::shared_ptr<Expression>,
        std::shared_ptr<Block>
    > CondBlock;

    CondBlock branch_if;
    std::vector<CondBlock> branch_elseif;
    std::optional< std::shared_ptr<Block> > branch_else;

    Type type() const;

    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct Num_forSt: public Statement {
    std::string var;
    std::shared_ptr<Expression> from;
    std::shared_ptr<Expression> to;
    std::optional< std::shared_ptr<Expression> > step;

    std::shared_ptr<Block> block;

    Type type() const;

    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct Gen_forSt: public Statement {
    std::vector<std::string> vars;
    std::shared_ptr<Expression> exp;

    std::shared_ptr<Block> block;

    Type type() const;
    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct GotoSt: public Statement {
    std::string label;

    Type type() const;

    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct LabelSt: public Statement {
    std::string label;

    Type type() const;
    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct BreakSt: public Statement {
    Type type() const;
    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct FunccallSt: public Statement {
    std::shared_ptr< FuncCall > funccall;

    Type type() const;
    virtual void print(std::ostream &os, int tabs = 0) const;
};

struct ReturnSt: public Statement {
    std::vector< std::shared_ptr<Expression> > values;
    Type type() const;
    virtual void print(std::ostream &os, int tabs = 0) const;
};

};

#endif // AST_STATEMENT_H