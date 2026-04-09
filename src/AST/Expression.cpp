#include "Expression.h"

using namespace LuaAST;

using Type = Expression::Type;


Type Literal::type() const { return Type::LITERAL; }

void Literal::print(std::ostream &os, int tabs) const {
    // os << "LIT( ";
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
    // os << " )";
};


void FuncName::print(std::ostream &os, int tabs) const {
    os << base << " ";
    for (auto &spec: specifications) {
        os << "." << spec;
    }
    if (!kind.empty()) os << ":" << kind;
}

void FuncBody::print(std::ostream &os, int tabs) const {
    os << "(";
    for (auto &param: params) os << param << ", ";
    if (variadic) {
        os << "...";
        if (variadic_param.has_value()) os << variadic_param.value();
    }
    os << ")" << std::endl;
    block->print(os, tabs+1);
    insert_tabs(os, tabs);
    os << "end"; 
}


Type FuncAnon::type() const { return Type::FUNC_ANON; }

void FuncAnon::print(std::ostream &os, int tabs) const {
    body->print(os, tabs);
}




void Field::print(std::ostream &os, int tabs) const {
    switch (kind) {
    case Kind::INDEXED: {
        os << "[";
        lhs->print(os, tabs);
        os << "] = ";
        rhs->print(os, tabs);
    } break;
    case Kind::NAMED: {
        os << name << " = ";
        rhs->print(os, tabs);
    } break;
    case Kind::SINGLE: {
        rhs->print(os, tabs);
    } break;
    
    default:
        break;
    }
}


Type TableConstr::type() const { return Type::TABLE_CONSTR; }

void TableConstr::print(std::ostream &os, int tabs) const {
    os << "{" << std::endl;
    for (auto &field: fields) {
        insert_tabs(os, tabs+1);
        field->print(os, tabs+1);
        os << ";" << std::endl;
    }
    insert_tabs(os, tabs);
    os << "}";
}



    
Type Operation::type() const { return Type::OPERATION; }

void Operation::print(std::ostream &os, int tabs) const {
    os << "(";
    if (kind == Kind::UNOP) {
        os << operat;
        lhs->print(os, tabs);
    } else {
        lhs->print(os, tabs);
        os << " " << operat << " ";
        rhs->print(os, tabs);
    }
    os << ")";
}





VarPartName::VarPartName(std::string name): name(name) {}
void VarPartName::print_other(std::ostream &os, int tabs, bool first) const {
    if (!first) os << ".";
    os << name;
}


VarPartExp::VarPartExp(std::shared_ptr<Expression> exp): exp(exp) {}
void VarPartExp::print_other(std::ostream &os, int tabs, bool first) const {
    if (first) os << "(";
    else os << "[";
    
    exp->print(os, tabs);

    if (first) os << ")";
    else os << "]";
}


Type Var::type() const { return Type::VAR; }
void Var::print(std::ostream &os, int tabs) const {
    base->print_other(os, tabs, true);
    for (auto &spec: specifications) {
        spec->print_other(os, tabs, false);
    }
}




void FuncCallTail::print(std::ostream &os, int tabs) const {
    if (name.has_value()) {
        os << ":" << name.value();
    }
    os << "(";
    for (auto& arg: args) {
        arg->print(os, tabs);
        os << ",";
    }
    os << ")";
}


void FuncCall::print(std::ostream &os, int tabs) const {
    function->print(os, tabs);
    for (auto& tail: tails) {
        tail->print(os, tabs);
    }
}

Type FuncCall::type() const { return Type::FUNCCALL; }