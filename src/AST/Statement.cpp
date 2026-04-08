#include "Statement.h"

using namespace LuaAST;

using Type = Statement::Type;


Type DoBlockSt::type() const { return Type::DO_BLOCK; }

void DoBlockSt::print(std::ostream &os, int tabs) const {
    os << "do" << std::endl;
    block->print(os, tabs+1);
    os << "end" << std::endl;
};



Type AssignSt::type() const { return Type::ASSIGN; }

void AssignSt::print(std::ostream &os, int tabs) const {
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



Attribute::Attribute(const std::string& str) {
    if (str == "<const>") kind = Kind::CONST;
    else {
        throw std::runtime_error("Unexpected attribute: " + str);
    }
}

void Attribute::print(std::ostream &os, int tabs) const {
    os << "<";
    if (kind == Kind::CONST) os << "const"; 
    os << ">";
}



Type DeclareSt::type() const { return Type::DECLARE; }

void DeclareSt::print(std::ostream &os, int tabs) const {
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


Type AttribSt::type() const { return Type::ATTRIB; }

void AttribSt::print(std::ostream &os, int tabs) const {
    os << "global ";
    attr->print(os, tabs);
    os << " '*'";
}


Type FuncdefSt::type() const { return Type::FUNCDEF; }



DefaultFuncdefSt::DefaultFuncdefSt() { kind = Kind::DEFAULT; }

void DefaultFuncdefSt::print(std::ostream &os, int tabs) const {
    os << "function ";
    name->print(os, tabs);
    os << " ";
    body->print(os, tabs);
}


ScopedFuncdefSt::ScopedFuncdefSt() { kind = Kind::SCOPED; }

void ScopedFuncdefSt::print(std::ostream &os, int tabs) const {
    if (scope == ScopeSpec::GLOBAL) os << "global ";
    else os << "local ";
    os << "function " << name;
    os << " ";
    body->print(os, tabs);
}

    


Type WhileSt::type() const { return Type::WHILE; }

void WhileSt::print(std::ostream &os, int tabs) const {
    os << "while ";
    cond->print(os, tabs);
    os << " do" << std::endl;
    block->print(os, tabs+1);
    insert_tabs(os, tabs);
    os << "end"; 
}



Type RepeatSt::type() const { return Type::REPEAT; }

void RepeatSt::print(std::ostream &os, int tabs) const {
    os << "repeat ";
    block->print(os, tabs+1);
    insert_tabs(os, tabs);
    os << "until " << std::endl;
    un_cond->print(os, tabs);
    os << std::endl;
    insert_tabs(os, tabs);
    os << "end"; 
}



Type IfSt::type() const { return Type::IF; }

void IfSt::print(std::ostream &os, int tabs) const {
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



Type Num_forSt::type() const { return Type::NUM_FOR; }

void Num_forSt::print(std::ostream &os, int tabs) const {
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



Type Gen_forSt::type() const { return Type::GEN_FOR; }

void Gen_forSt::print(std::ostream &os, int tabs) const {
    os << "for ";
    for (auto &var: vars) {
        os << var;
        if (var != vars.back()) os << ", ";
    }
    os << "in ";
    exp->print(os, tabs);
    os << " do" << std::endl;
    block->print(os, tabs+1);
    insert_tabs(os, tabs);
    os << "end";
}



Type GotoSt::type() const { return Type::GOTO; }

void GotoSt::print(std::ostream &os, int tabs) const {
    os << "goto " << label;
}


Type LabelSt::type() const { return Type::LABEL; }
void LabelSt::print(std::ostream &os, int tabs) const {
    os << "::" << label << "::";
}


Type BreakSt::type() const { return Type::BREAK; }
void BreakSt::print(std::ostream &os, int tabs) const {
    os << "break";
}


Type FunccallSt::type() const { return Type::FUNCCALL; }
void FunccallSt::print(std::ostream &os, int tabs) const {
    funccall->print(os, tabs);
}


Type ReturnSt::type() const { return Type::RETURN; }
void ReturnSt::print(std::ostream &os, int tabs) const {
    os << "return ";
    for (auto &value: values) {
        value->print(os, tabs);
        if (value != values.back()) os << ", ";
    }
}