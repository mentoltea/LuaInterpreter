#ifndef AST_STATEMENT_H
#define AST_STATEMENT_H

#include "Base.hpp"
#include "Expression.hpp"

namespace LuaAST {

struct DoBlockSt: public Statement {
    std::shared_ptr< Block > block;
    Type type() const { return Type::DO_BLOCK; }

    virtual void print(std::ostream &os, int tabs = 0) const {
        os << "do" << std::endl;
        block->print(os, tabs+1);
        os << "end" << std::endl;
    };
};

struct AssignSt: public Statement {
    std::vector< std::shared_ptr <Var> > lhs;
    std::vector< std::shared_ptr <Expression> > rhs;

    Type type() const { return Type::ASSIGN; }

    virtual void print(std::ostream &os, int tabs = 0) const {
        for (auto &var: lhs) {
            var->print(os, tabs);
            if (var != lhs.back()) os << ", ";
        }
        os << " = ";
        for (auto &exp: rhs) {
            exp->print(os, tabs);
            if (exp != rhs.back()) os << ", ";
        }
    };
};

struct Attribute: public Node {
    enum class Kind {
        CONST,
    } kind;
    Attribute(const std::string& str) {
        if (str == "const") kind = Kind::CONST;
        else {
            throw std::runtime_error("Unexpected attribute: " + str);
        }
    }

    virtual void print(std::ostream &os, int tabs = 0) const {
        os << "<";
        if (kind == Kind::CONST) os << "const"; 
        os << ">";
    }
};

struct DeclareSt: public Statement {
    ScopeSpec scope;
    std::shared_ptr< Attribute > common_attr;
    std::vector< 
        std::pair< std::string, std::shared_ptr<Attribute> > 
    > lhs;
    std::vector< std::shared_ptr <Expression> > rhs;

    Type type() const { return Type::DECLARE; }

    virtual void print(std::ostream &os, int tabs = 0) const {
        if (scope == ScopeSpec::GLOBAL) os << "global ";
        else os << "local ";
        if (common_attr != nullptr) common_attr->print(os, tabs);   
        os << " ";
        for (auto &left: lhs) {
            os << left.first << " ";
            if (left.second != nullptr) left.second->print(os, tabs);
            if (left != lhs.back()) os << ", ";
        }
        if (!rhs.empty()) {
            os << "= ";
            for (auto &right: rhs) {
                right->print(os, tabs);
                if (right != rhs.back()) os << ", ";
            }
        }
    }
};

struct AttribSt: public Statement {
    std::shared_ptr< Attribute > attr;

    Type type() const { return Type::ATTRIB; }

    virtual void print(std::ostream &os, int tabs = 0) const {
        os << "global ";
        attr->print(os, tabs);
        os << " '*'";
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

    virtual void print(std::ostream &os, int tabs = 0) const {
        os << "function ";
        name->print(os, tabs);
        os << " ";
        body->print(os, tabs);
    }
};

struct ScopedFuncdefSt: public FuncdefSt {
    ScopeSpec scope;
    std::string name;
    ScopedFuncdefSt() { kind = Kind::SCOPED; }

    virtual void print(std::ostream &os, int tabs = 0) const {
        if (scope == ScopeSpec::GLOBAL) os << "global ";
        else os << "local ";
        os << "function " << name;
        os << " ";
        body->print(os, tabs);
    }
};

        
struct WhileSt: public Statement {
    std::shared_ptr< Expression > cond;
    std::shared_ptr< Block > block;
    
    Type type() const { return Type::WHILE; }

    virtual void print(std::ostream &os, int tabs = 0) const {
        os << "while ";
        cond->print(os, tabs);
        os << " do" << std::endl;
        block->print(os, tabs+1);
        insert_tabs(os, tabs);
        os << "end"; 
    }
};

struct RepeatSt: public Statement {
    std::shared_ptr< Expression > un_cond;
    std::shared_ptr< Block > block;

    Type type() const { return Type::REPEAT; }

    virtual void print(std::ostream &os, int tabs = 0) const {
        os << "repeat ";
        block->print(os, tabs+1);
        insert_tabs(os, tabs);
        os << "until " << std::endl;
        un_cond->print(os, tabs);
        os << std::endl;
        insert_tabs(os, tabs);
        os << "end"; 
    }
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

    virtual void print(std::ostream &os, int tabs = 0) const {
        os << "if ";
        branch_if.first->print(os, tabs);
        os << " then" << std::endl;
        branch_if.second->print(os, tabs+1);
        insert_tabs(os, tabs);

        for (auto &br: branch_elseif) {
            os << "elseif ";
            br.first->print(os, tabs);
            os << " then" << std::endl;
            br.second->print(os, tabs+1);
            insert_tabs(os, tabs);
        }

        if (branch_else.has_value()) {
            os << "else" << std::endl;
            branch_else.value()->print(os, tabs+1);
            insert_tabs(os, tabs);
        }
        os << "end";
    }
};

struct Num_forSt: public Statement {
    std::string var;
    std::shared_ptr<Expression> from;
    std::shared_ptr<Expression> to;
    std::optional< std::shared_ptr<Expression> > step;

    std::shared_ptr<Block> block;

    Type type() const { return Type::NUM_FOR; }

    virtual void print(std::ostream &os, int tabs = 0) const {
        os << "for " << var << " = ";
        from->print(os, tabs); 
        os << ", ";
        to->print(os, tabs);
        if (step.has_value()) {
            os << ", ";
            step.value()->print(os, tabs);
        }
        os << " do" << std::endl;
        block->print(os, tabs+1);
        insert_tabs(os, tabs);
        os << "end";
    }
};

struct Gen_forSt: public Statement {
    std::vector<std::string> vars;
    std::vector< std::shared_ptr<Expression> > exps;

    std::shared_ptr<Block> block;

    Type type() const { return Type::GEN_FOR; }

    virtual void print(std::ostream &os, int tabs = 0) const {
        os << "for ";
        for (auto &var: vars) {
            os << var;
            if (var != vars.back()) os << ", ";
        }
        os << "in ";
        for (auto &exp: exps) {
            exp->print(os, tabs);
            if (exp != exps.back()) os << ", ";
        }
        os << " do" << std::endl;
        block->print(os, tabs+1);
        insert_tabs(os, tabs);
        os << "end";
    }
};

struct GotoSt: public Statement {
    std::string label;

    Type type() const { return Type::GOTO; }

    virtual void print(std::ostream &os, int tabs = 0) const {
        os << "goto " << label;
    }
};

struct LabelSt: public Statement {
    std::string label;

    Type type() const { return Type::LABEL; }
    virtual void print(std::ostream &os, int tabs = 0) const {
        os << "::" << label << "::";
    }
};

struct BreakSt: public Statement {
    Type type() const { return Type::BREAK; }
    virtual void print(std::ostream &os, int tabs = 0) const {
        os << "break";
    }
};

struct FunccallSt: public Statement {
    std::shared_ptr< FuncCall > funccall;

    Type type() const { return Type::FUNCCALL; }
    virtual void print(std::ostream &os, int tabs = 0) const {
        funccall->print(os, tabs);
    }
};

struct ReturnSt: public Statement {
    std::vector< std::shared_ptr<Expression> > values;
    Type type() const { return Type::RETURN; }
    virtual void print(std::ostream &os, int tabs = 0) const {
        os << "return ";
        for (auto &value: values) {
            value->print(os, tabs);
            if (value != values.back()) os << ", ";
        }
    }
};

};

#endif // AST_STATEMENT_H