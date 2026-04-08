#include "Base.h"

using namespace LuaAST;


Node::~Node() = default;
void Node::print(std::ostream &os, int tabs) const {};

void Node::insert_tabs(std::ostream &os, int tabs) {
    for (int t=0; t<tabs; t++) {
        os << "\t";
    }
}


Statement::Statement(): parent(nullptr), prev(nullptr), next(nullptr) {}



Block::Block(): parent(nullptr) {}

void Block::print(std::ostream &os, int tabs) const {
    for (auto &st: statements) {
        insert_tabs(os, tabs);
        st->print(os, tabs);
        os << std::endl;
    }
};