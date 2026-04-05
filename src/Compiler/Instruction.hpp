#ifndef COMPILER_INTRUCTION_H
#define COMPILER_INTRUCTION_H

#include <string>
#include <variant>
#include <fstream>
#include <stdfloat>

struct Instruction {
    enum class Type {
        NOP = 0,

        PUT_SCOPE,
        POP_SCOPE,

        PUT_STACK,
        POP_STACK,
        CLEAR_STACK,

        LOAD,
        STORE,
        SET_LOCAL,
        SET_GLOBAL,
        SET_ATTR,
        GLOBATTR,

        INDEX, DYN_INDEX,
        METAINDEX,

        METAASSIGN_WHAT_WHOM,

        ASSIGN_WHAT_WHOM,
        ASSIGN_WHOM_WHAT,
        ASSIGN_WHAT_WHOM_WHERE,
        ASSIGN_WHOM_WHERE_WHAT,
        
        BRANCH,
        GOTO,
        LABEL,

        CALL,
        REV_CALL,
        RET,

        PUT_NIL,
        PUT_TRUE,
        PUT_FALSE,
        PUT_STR,
        PUT_NUM,
        PUT_TABLE,
        PUT_FUNC,

        DISCARD,
        DUP,

        LE, LT,
        GE, GT,
        EQ, NEQ,
        CONCAT,
        ADD, SUB,
        MUL, MOD,
        DIV, TRUEDIV,
        SHLEFT, SHRIGHT,
        AND, OR,
        BITAND, BITOR, BITXOR,
        POW,

        // unary
        HASH, NEG, NOT, BITNOT
    } type;

    
    std::string name;

    std::string var;
    std::string attr;

    std::string field;
    std::string metafield;

    std::string label;

    // input size
    size_t N;

    // output size
    bool any_output = false;
    size_t M;

    std::string str;

    std::variant<std::int64_t, std::float64_t> num;
};

std::ostream& operator<<(std::ostream& os, Instruction& inst) {
    switch (inst.type) {
        case Instruction::Type::NOP:        { os << "NOP" ; } break;

        case Instruction::Type::PUT_SCOPE:  { os << "PUT_SCOPE" ; } break;
        case Instruction::Type::POP_SCOPE:  { os << "POP_SCOPE" ; } break;

        case Instruction::Type::PUT_STACK:  { os << "PUT_STACK" ; } break;
        case Instruction::Type::POP_STACK:  { os << "POP_STACK" ; } break;
        case Instruction::Type::CLEAR_STACK:  { os << "CLEAR_STACK" ; } break;
        
        case Instruction::Type::LOAD:       { os << "LOAD " << inst.name ; } break;
        case Instruction::Type::STORE:      { os << "STORE " << inst.name ; } break;
        case Instruction::Type::SET_LOCAL:  { os << "SET_LOCAL " << inst.name ; } break;
        case Instruction::Type::SET_GLOBAL: { os << "SET_GLOBAL " << inst.name ; } break;

        case Instruction::Type::SET_ATTR:   { os << "SET_ATTR " << inst.var << " " << inst.attr ; } break;
        case Instruction::Type::GLOBATTR:   { os << "GLOBATTR " << inst.attr ; } break;
        case Instruction::Type::INDEX:      { os << "INDEX " << inst.field ; } break; 
        case Instruction::Type::DYN_INDEX:  { os << "DYN_INDEX" ; } break; 
        case Instruction::Type::METAINDEX:  { os << "METAINDEX " << inst.field ; } break;
        
        case Instruction::Type::METAASSIGN_WHAT_WHOM:  { os << "METAASSIGN_WHAT_WHOM " << inst.field ; } break;

        case Instruction::Type::ASSIGN_WHAT_WHOM: { 
            os << "ASSIGN_WHAT_WHOM " << inst.field ; 
        } break;
        case Instruction::Type::ASSIGN_WHOM_WHAT: { 
            os << "ASSIGN_WHOM_WHAT " << inst.field ; 
        } break;
        case Instruction::Type::ASSIGN_WHAT_WHOM_WHERE: { 
            os << "ASSIGN_WHAT_WHOM_WHERE" ; 
        } break;
        case Instruction::Type::ASSIGN_WHOM_WHERE_WHAT: { 
            os << "ASSIGN_WHOM_WHERE_WHAT" ; 
        } break;

        case Instruction::Type::BRANCH:     { os << "BRANCH " << inst.label ; } break;
        case Instruction::Type::GOTO:       { os << "GOTO " << inst.label ; } break;
        case Instruction::Type::LABEL:      { os << "LABEL " << inst.label ; } break;

        case Instruction::Type::CALL:       { 
            os << "CALL " << inst.N << " " ;
            if (inst.any_output) os << "any";
            else os << inst.M;
        } break;
        case Instruction::Type::REV_CALL:       { 
            os << "REV_CALL " << inst.N << " " ;
            if (inst.any_output) os << "any";
            else os << inst.M;
        } break;
        case Instruction::Type::RET:        { os << "RET " << inst.N ; } break;

        case Instruction::Type::PUT_NIL:    { os << "PUT_NIL" ; } break;
        case Instruction::Type::PUT_TRUE:   { os << "PUT_TRUE" ; } break;
        case Instruction::Type::PUT_FALSE:  { os << "PUT_FALSE" ; } break;
        case Instruction::Type::PUT_STR:    { os << "PUT_STR " << inst.str ; } break;
        case Instruction::Type::PUT_NUM:    { 
            os << "PUT_NUM ";
            if (std::holds_alternative<int64_t> (inst.num)) os << std::get<int64_t>(inst.num); 
            else os << std::get<std::float64_t>(inst.num);
        } break;
        case Instruction::Type::PUT_TABLE:  { os << "PUT_TABLE" ; } break;
        case Instruction::Type::PUT_FUNC:  { 
            os << "PUT_FUNC " << inst.label << " " << inst.N << " " << inst.name; 
        } break;

        case Instruction::Type::DISCARD:  { 
            os << "DISCARD"; 
        } break;
        case Instruction::Type::DUP:  { 
            os << "DUP"; 
        } break;

        case Instruction::Type::LE:         { os << "LE" ; } break; 
        case Instruction::Type::LT:         { os << "LT" ; } break;
        case Instruction::Type::GE:         { os << "GE" ; } break; 
        case Instruction::Type::GT:         { os << "GT" ; } break;
        case Instruction::Type::EQ:         { os << "EQ" ; } break; 
        case Instruction::Type::NEQ:        { os << "NEQ" ; } break;
        case Instruction::Type::CONCAT:     { os << "CONCAT" ; } break;
        case Instruction::Type::ADD:        { os << "ADD" ; } break; 
        case Instruction::Type::SUB:        { os << "SUB" ; } break;
        case Instruction::Type::MUL:        { os << "MUL" ; } break; 
        case Instruction::Type::MOD:        { os << "MOD" ; } break;
        case Instruction::Type::DIV:        { os << "DIV" ; } break; 
        case Instruction::Type::TRUEDIV:    { os << "TRUEDIV" ; } break;
        case Instruction::Type::SHLEFT:     { os << "SHLEFT" ; } break; 
        case Instruction::Type::SHRIGHT:    { os << "SHRIGHT" ; } break;
        case Instruction::Type::AND:        { os << "AND" ; } break; 
        case Instruction::Type::OR:         { os << "OR" ; } break;
        case Instruction::Type::BITAND:     { os << "BITAND" ; } break; 
        case Instruction::Type::BITOR:      { os << "BITOR" ; } break; 
        case Instruction::Type::BITXOR:     { os << "BITXOR" ; } break;
        case Instruction::Type::POW:        { os << "POW" ; } break;
        case Instruction::Type::HASH:       { os << "HASH" ; } break; 
        case Instruction::Type::NEG:        { os << "NEG" ; } break; 
        case Instruction::Type::NOT:        { os << "NOT" ; } break;
        
        default: {
            throw std::runtime_error("Unknown instruction type: " + std::to_string((int)inst.type));
        }
    }

    return os;
}

#endif // COMPILER_INTRUCTION_H