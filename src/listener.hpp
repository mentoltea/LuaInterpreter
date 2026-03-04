#include "AST.hpp"
#include "generated/Lua55GrammarBaseListener.h"
#include <stack>

namespace {

using namespace LuaAST;
    
class Lua55Listener: public Lua55GrammarBaseListener {
    
    struct State {
        std::stack< Node* > stack;

        struct Frame {
            Block* parent;
            Statement* last;
            Frame(): parent(nullptr), last(nullptr) {}
        };
        std::stack< Frame > frames;
    } state;
    
    public:
    std::shared_ptr<Block> ast = nullptr;
    
    virtual void exitProg(Lua55GrammarParser::ProgContext * ctx) override {
        // std::cout << "exitProg" << std::endl;
        assert(state.stack.size() == 1);
        assert(state.frames.size() == 0);

        ast = std::shared_ptr<Block>((Block*)state.stack.top());
        state.stack.pop();
    }
    
    virtual void enterBlock(Lua55GrammarParser::BlockContext * ctx) override {
        // std::cout << "enterBlock" << std::endl; 
        Block* block = new Block;
        State::Frame frame;
        frame.parent = block;
        state.frames.push(frame);
    }
    virtual void exitBlock(Lua55GrammarParser::BlockContext * ctx) override {
        // std::cout << "exitBlock" << std::endl; 
        State::Frame frame = state.frames.top();
        state.frames.pop();
        Block* block = frame.parent;

        size_t n = ctx->statement().size();
        if (ctx->returnStatement()) n += 1;

        block->statements = std::vector< std::shared_ptr<Statement> >(n, nullptr);
        for (size_t i=0; i<n; i++) {
            block->statements[n-1-i] = std::shared_ptr<Statement>( (Statement*)state.stack.top() );
            state.stack.pop();
        }

        state.stack.push(block);
    }
    
    virtual void exitStatement(Lua55GrammarParser::StatementContext * ctx) override {
        // std::cout << "exitStatement" << std::endl; 
        Statement* st = (Statement*) state.stack.top();
        
        State::Frame& frame = state.frames.top();
        

        st->parent = frame.parent;
        if (frame.last) {
            frame.last->next = st;
        }
        
        st->prev = frame.last;
        frame.last = st;
    }
    
    virtual void exitDoBlockStatement(Lua55GrammarParser::DoBlockStatementContext * ctx) override {
        // std::cout << "exitDoBlockStatement" << std::endl; 
        DoBlockSt* st = new DoBlockSt;

        st->block = std::shared_ptr<Block>((Block*) state.stack.top());
        state.stack.pop();
        st->block->parent = st;

        state.stack.push(st);
    }
    
    virtual void exitAssignmentStatement(Lua55GrammarParser::AssignmentStatementContext * ctx) override {
        // std::cout << "exitAssignmentStatement" << std::endl; 
        size_t exp_n = ctx->explist()->exp().size();
        size_t var_n = ctx->varlist()->var().size();
        
        AssignSt* st = new AssignSt;

        st->rhs = std::vector< std::shared_ptr <Expression> >(exp_n, nullptr);
        for (size_t i=0; i<exp_n; i++) {
            st->rhs[exp_n-1-i] = std::shared_ptr<Expression>((Expression*) state.stack.top());
            state.stack.pop();
        }

        st->lhs = std::vector< std::shared_ptr <Var> >(var_n, nullptr);
        for (size_t i=0; i<var_n; i++) {
            st->lhs[var_n-1-i] = std::shared_ptr<Var>((Var*) state.stack.top());
            state.stack.pop();
        }

        state.stack.push(st);
    }
            
    virtual void exitDeclarationStatement(Lua55GrammarParser::DeclarationStatementContext * ctx) override {
        // std::cout << "exitDeclarationStatement" << std::endl; 
        DeclareSt* st = new DeclareSt;

        if (ctx->scopeSpec()->GLOBAL()) st->scope = ScopeSpec::GLOBAL;
        else st->scope = ScopeSpec::LOCAL;

        if (ctx->attrib()) st->common_attr = std::shared_ptr<Attribute>(new Attribute(ctx->attrib()->ATTRIBUTES_DEFINED()->toString()));

        size_t attr_n = ctx->attnamelist()->nameattr().size();
        for (size_t i=0; i<attr_n; i++) {
            auto nameattr = ctx->attnamelist()->nameattr(i);
            std::string name = nameattr->name()->ID()->toString();
            Attribute* attr = nullptr;
            if (nameattr->attrib()) attr = new Attribute(nameattr->attrib()->ATTRIBUTES_DEFINED()->toString());
            st->lhs.push_back(
                {name, std::shared_ptr<Attribute>(attr)}
            );
        }

        size_t exp_n = ctx->explist() ? ctx->explist()->exp().size() : 0;
        st->rhs = std::vector< std::shared_ptr<Expression> > (exp_n, nullptr);
        for (size_t i=0; i<exp_n; i++) {
            st->rhs[exp_n-1-i] = std::shared_ptr<Expression>( (Expression*) state.stack.top() );
            state.stack.pop();
        }

        state.stack.push(st);
    }
    
    virtual void exitGlobalAttribStatement(Lua55GrammarParser::GlobalAttribStatementContext * ctx) override {
        // std::cout << "exitGlobalAttribStatement" << std::endl; 
        AttribSt* st = new AttribSt;
        st->attr = std::shared_ptr<Attribute>(new Attribute(ctx->attrib()->ATTRIBUTES_DEFINED()->toString()));
        state.stack.push(st);
    }


    
    virtual void exitFuncdefStatement(Lua55GrammarParser::FuncdefStatementContext * ctx) override {
        // std::cout << "exitFuncdefStatement" << std::endl;
     }

    virtual void exitDefaultFuncdefStatement(Lua55GrammarParser::DefaultFuncdefStatementContext * ctx) override {
        // std::cout << "exitDefaultFuncdefStatement" << std::endl; 
        DefaultFuncdefSt *st = new DefaultFuncdefSt;

        st->body = std::shared_ptr<FuncBody>((FuncBody*) state.stack.top());
        state.stack.pop();
        
        st->name = std::shared_ptr<FuncName>((FuncName*) state.stack.top());
        state.stack.pop();

        state.stack.push(st);
    }

    virtual void exitScopedFuncdefStatement(Lua55GrammarParser::ScopedFuncdefStatementContext * ctx) override {
        // std::cout << "exitScopedFuncdefStatement" << std::endl; 
        ScopedFuncdefSt *st = new ScopedFuncdefSt;

        st->body = std::shared_ptr<FuncBody>((FuncBody*) state.stack.top());
        state.stack.pop();

        if (ctx->scopeSpec()->GLOBAL()) st->scope = ScopeSpec::GLOBAL;
        else st->scope = ScopeSpec::LOCAL;

        st->name = ctx->name()->ID()->toString();

        state.stack.push(st);
    }
    
    virtual void exitFuncname(Lua55GrammarParser::FuncnameContext * ctx) override {
        // std::cout << "exitFuncname" << std::endl; 
        FuncName * name = new FuncName;
        
        name->base = ctx->namespec()->name(0)->ID()->toString();
        size_t n = ctx->namespec()->name().size();
        for (size_t i=1; i<n; i++) {
            name->specifications.push_back(
                ctx->namespec()->name(i)->ID()->toString()
            );
        }
        if (ctx->name()) name->kind = ctx->name()->ID()->toString();

        state.stack.push(name);
    }
    
    virtual void exitFuncbody(Lua55GrammarParser::FuncbodyContext * ctx) override {
        // std::cout << "exitFuncbody" << std::endl;
        FuncBody * body = new FuncBody;
        
        body->block = std::shared_ptr<Block>((Block*) state.stack.top());
        state.stack.pop();

        if (ctx->paramlist()) {
            if (ctx->paramlist()->vararg()) {
                body->variadic = true;
                if (ctx->paramlist()->vararg()->name()) body->variadic_param = ctx->paramlist()->vararg()->name()->ID()->toString();
            }

            if (ctx->paramlist()->namelist()) {
                for (auto& name_ctx: ctx->paramlist()->namelist()->name()) {
                    body->params.push_back(name_ctx->ID()->toString());
                }
            }
        }

        state.stack.push(body);
    }
    
    virtual void exitWhileStatement(Lua55GrammarParser::WhileStatementContext * ctx) override {
        // std::cout << "exitWhileStatement" << std::endl; 
        WhileSt * st = new WhileSt;

        st->block = std::shared_ptr<Block>((Block*) state.stack.top());
        state.stack.pop();
        st->block->parent = st;
        
        st->cond = std::shared_ptr<Expression>((Expression*) state.stack.top());
        state.stack.pop();

        state.stack.push(st);
    }
    
    virtual void exitRepeatStatement(Lua55GrammarParser::RepeatStatementContext * ctx) override {
        // std::cout << "exitRepeatStatement" << std::endl; 
        RepeatSt * st = new RepeatSt;

        st->un_cond = std::shared_ptr<Expression>((Expression*) state.stack.top());
        state.stack.pop();

        st->block = std::shared_ptr<Block>((Block*) state.stack.top());
        state.stack.pop();
        st->block->parent = st;

        state.stack.push(st);
    }
    
    virtual void exitIfStatement(Lua55GrammarParser::IfStatementContext * ctx) override {
        // std::cout << "exitIfStatement" << std::endl; 
        IfSt * st = new IfSt;

        size_t elif_n = ctx->ELSEIF().size();

        std::vector<Expression*> exps;
        std::vector<Block*> blocks;
        bool else_branch = false;

        if (ctx->ELSE()) {
            Block* block = (Block*) state.stack.top();
            state.stack.pop();
            block->parent = st;
            blocks.push_back(block);
            else_branch = true;
        }
        for (size_t i=0; i<elif_n+1; i++) {
            Block* block = (Block*) state.stack.top();
            state.stack.pop();
            block->parent = st;
            blocks.push_back(block);

            exps.push_back((Expression*) state.stack.top());
            state.stack.pop();
        }

        IfSt::CondBlock condblock;

        condblock.first = std::shared_ptr<Expression>( exps[elif_n] );
        condblock.second = std::shared_ptr<Block>( blocks[elif_n + else_branch] );
        st->branch_if = condblock;

        for (size_t i=0; i<elif_n; i++) {
            condblock.first = std::shared_ptr<Expression>( exps[elif_n - 1 - i] );
            condblock.second = std::shared_ptr<Block>( blocks[elif_n - 1 - i + else_branch] );
            st->branch_elseif.push_back(condblock);
        }

        if (else_branch) {
            st->branch_else = std::shared_ptr<Block>( blocks[0] );
        }

        state.stack.push(st);
    }
    
    virtual void exitNumericForStatement(Lua55GrammarParser::NumericForStatementContext * ctx) override {
        // std::cout << "exitNumericForStatement" << std::endl; 
        Num_forSt * st = new Num_forSt;

        st->block = std::shared_ptr<Block>((Block*) state.stack.top());
        state.stack.pop();
        st->block->parent = st;

        size_t exp_n = ctx->exp().size();
        std::vector<Expression*> exps(exp_n, nullptr);
        for (size_t i=0; i<exp_n; i++) {
            exps[exp_n-1-i] = (Expression*) state.stack.top();
            state.stack.pop();
        }

        st->from = std::shared_ptr<Expression>(exps[0]);
        st->to   = std::shared_ptr<Expression>(exps[1]);
        st->step = std::shared_ptr<Expression>(exps[2]);
    
        st->var = ctx->name()->ID()->toString();

        state.stack.push(st);
    }
    
    virtual void exitGenericForStatement(Lua55GrammarParser::GenericForStatementContext * ctx) override {
        // std::cout << "exitGenericForStatement" << std::endl; 
        Gen_forSt * st = new Gen_forSt;

        st->block = std::shared_ptr<Block>((Block*) state.stack.top());
        state.stack.pop();
        st->block->parent = st;

        size_t name_n = ctx->namelist()->name().size();
        size_t exp_n = ctx->explist()->exp().size();
        
        st->vars = std::vector< std::string > (name_n, "");
        st->exps = std::vector< std::shared_ptr<Expression> > (exp_n, nullptr);

        for (size_t i=0; i<exp_n; i++) {
            st->exps[exp_n - 1 - i] = std::shared_ptr<Expression>((Expression*) state.stack.top());
            state.stack.pop();
        }
        for (size_t i=0; i<name_n; i++) {
            st->vars[i] = ctx->namelist()->name(i)->ID()->toString();
        }

        state.stack.push(st);
    }
    
    virtual void exitGotoStatement(Lua55GrammarParser::GotoStatementContext * ctx) override {
        // std::cout << "exitGotoStatement" << std::endl; 
        GotoSt * st = new GotoSt;
        st->label = ctx->name()->ID()->toString();
        state.stack.push(st);
    }
    
    virtual void exitLabelStatement(Lua55GrammarParser::LabelStatementContext * ctx) override {
        // std::cout << "exitLabelStatement" << std::endl; 
        LabelSt * st = new LabelSt;
        st->label = ctx->name()->ID()->toString();
        state.stack.push(st);
    }
    
    virtual void exitBreakStatement(Lua55GrammarParser::BreakStatementContext * ctx) override {
        // std::cout << "exitBreakStatement" << std::endl; 
        BreakSt * st = new BreakSt;
        state.stack.push(st);
    }
    
    virtual void exitReturnStatement(Lua55GrammarParser::ReturnStatementContext * ctx) override {
        // std::cout << "exitReturnStatement" << std::endl; 
        ReturnSt * st = new ReturnSt;

        size_t n = ctx->explist()->exp().size();
        st->values = std::vector< std::shared_ptr<Expression> >(n, nullptr);
        for (size_t i=0; i<n; i++) {
            st->values[n-1-i] = std::shared_ptr<Expression>( (Expression*) state.stack.top() );
            state.stack.pop();
        }

        state.stack.push(st);
    }

    virtual void exitFuncCallStatement(Lua55GrammarParser::FuncCallStatementContext * ctx) override {
        // std::cout << "exitFuncCallStatement" << std::endl; 
        FunccallSt *st = new FunccallSt;

        st->funccall = std::shared_ptr<FuncCall>((FuncCall*) state.stack.top());
        state.stack.pop();

        state.stack.push(st);
    }
    

    
    virtual void exitFuncAnon(Lua55GrammarParser::FuncAnonContext * ctx) override {
        // std::cout << "exitFuncAnon" << std::endl; 
        FuncAnon* func = new FuncAnon;
        
        func->body = std::shared_ptr<FuncBody>( (FuncBody*) state.stack.top() );
        state.stack.pop();

        state.stack.push(func);
    }
    
    virtual void exitTableConstructor(Lua55GrammarParser::TableConstructorContext * ctx) override {
        // std::cout << "exitTableConstructor" << std::endl; 
        TableConstr* table = new TableConstr;
        if (ctx->fieldlist()) {
            size_t n = ctx->fieldlist()->field().size();
            table->fields = std::vector< std::shared_ptr<Field> >(n, nullptr);
            for (size_t i=0; i<n; i++) {
                table->fields[n-1-i] = std::shared_ptr<Field>((Field*) state.stack.top());
                state.stack.pop();
            }
        }
        state.stack.push(table);
    }
            
    virtual void exitField(Lua55GrammarParser::FieldContext * ctx) override {
        // std::cout << "exitField" << std::endl;
        Field* field = new Field;
        if (ctx->exp().size() == 2) {
            // [exp] = exp
            field->kind = Field::Kind::INDEXED;
            
            field->rhs = std::shared_ptr<Expression>((Expression*) state.stack.top());
            state.stack.pop();
            
            field->lhs = std::shared_ptr<Expression>((Expression*) state.stack.top());
            state.stack.pop();
        } else if (ctx->name()) {
            // name = exp
            field->kind = Field::Kind::NAMED;
            field->name = ctx->name()->ID()->toString();
        } else {
            // exp
            field->kind = Field::Kind::SINGLE;
            
            field->lhs = std::shared_ptr<Expression>((Expression*) state.stack.top());
            state.stack.pop();
        }
        state.stack.push(field);
    }
    
    virtual void exitExp(Lua55GrammarParser::ExpContext * ctx) override {
        // std::cout << "exitExp" << std::endl; 
        
        // state.stack.top()->print(// std::cout);
        
    }
    
    virtual void exitOpExp(Lua55GrammarParser::OpExpContext * ctx) override { 
        
        // state.stack.top()->print(// std::cout);
        
    }
    
    virtual void exitOrExp(Lua55GrammarParser::OrExpContext * ctx) override { 
        if (ctx->andExp().size() > 1) {
            size_t n = ctx->andExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = ctx->OR(i)->toString();

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitAndExp(Lua55GrammarParser::AndExpContext * ctx) override { 
        if (ctx->compExp().size() > 1) {
            size_t n = ctx->compExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = ctx->AND(i)->toString();

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitCompExp(Lua55GrammarParser::CompExpContext * ctx) override { 
        if (ctx->COMPOP()) {
            Expression* rhs = (Expression*) state.stack.top();
            state.stack.pop();

            Expression* lhs = (Expression*) state.stack.top();
            state.stack.pop();

            Operation* opexp = new Operation;
            opexp->kind = Operation::Kind::BINOP;
            opexp->operat = ctx->COMPOP()->toString();
            opexp->lhs = std::shared_ptr<Expression>(lhs);
            opexp->rhs = std::shared_ptr<Expression>(rhs);

            state.stack.push(opexp);
        }
    }
    
    virtual void exitBitorExp(Lua55GrammarParser::BitorExpContext * ctx) override { 
        if (ctx->bitxorExp().size() > 1) {
            size_t n = ctx->bitxorExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = "|";

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitBitxorExp(Lua55GrammarParser::BitxorExpContext * ctx) override { 
        if (ctx->bitandExp().size() > 1) {
            size_t n = ctx->bitandExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = "~";

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitBitandExp(Lua55GrammarParser::BitandExpContext * ctx) override { 
        if (ctx->shiftExp().size() > 1) {
            size_t n = ctx->shiftExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = "&";

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitShiftExp(Lua55GrammarParser::ShiftExpContext * ctx) override { 
        if (ctx->SHIFTOP().size() > 0) {
            size_t n = ctx->concatExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = ctx->SHIFTOP(i)->toString();

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitConcatExp(Lua55GrammarParser::ConcatExpContext * ctx) override { 
        if (ctx->plusExp().size() > 1) {
            size_t n = ctx->plusExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = "..";

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitPlusExp(Lua55GrammarParser::PlusExpContext * ctx) override { 
        if (ctx->PLUSOP().size() > 0) {
            size_t n = ctx->mulExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = ctx->PLUSOP(i)->toString();

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitMulExp(Lua55GrammarParser::MulExpContext * ctx) override { 
        if (ctx->MULOP().size() > 0) {
            size_t n = ctx->unaryExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = ctx->MULOP(i)->toString();

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitUnaryExp(Lua55GrammarParser::UnaryExpContext * ctx) override { 
        if (ctx->UNOP()) {
            Expression* lhs = (Expression*) state.stack.top();
            state.stack.pop();

            Operation* opexp = new Operation;
            opexp->kind = Operation::Kind::UNOP;
            opexp->operat = ctx->UNOP()->toString();
            opexp->lhs = std::shared_ptr<Expression>(lhs);

            state.stack.push(opexp);
        }
    }
    
    virtual void exitPowExp(Lua55GrammarParser::PowExpContext * ctx) override {
        if (ctx->powExp()) {
            Expression* rhs = (Expression*) state.stack.top();
            state.stack.pop();

            Expression* lhs = (Expression*) state.stack.top();
            state.stack.pop();

            Operation* opexp = new Operation;
            opexp->kind = Operation::Kind::BINOP;
            opexp->operat = "^";
            opexp->lhs = std::shared_ptr<Expression>(lhs);
            opexp->rhs = std::shared_ptr<Expression>(rhs);

            state.stack.push(opexp);
        }
    }
    
    virtual void exitLiteral(Lua55GrammarParser::LiteralContext * ctx) override {
        // std::cout << "exitLiteral" << std::endl; 
        Literal* lit = new Literal;
        
        if (ctx->NIL()) {
            lit->kind = Literal::Kind::NIL;
        } else 

        if (ctx->FALSE()) {
            lit->kind = Literal::Kind::BOOLEAN;
            lit->value = false;
        } else 
        if (ctx->TRUE()) {
            lit->kind = Literal::Kind::BOOLEAN;
            lit->value = true;
        } else

        if (ctx->STRING()) {
            lit->kind = Literal::Kind::STRING;
            lit->value = ctx->STRING()->toString();
        } else

        if (ctx->NUMBER()) {
            lit->kind = Literal::Kind::NUMBER;
            std::string number = ctx->NUMBER()->toString();
            Number num;
            if (number.contains('.')) {
                // double
                num.kind = Number::Kind::FLOAT;
                num.f = std::stod(number);
            } else {
                // int
                num.kind = Number::Kind::INT;
                num.i = std::stoll(number);
            }
            lit->value = num;
        } else {
            std::cerr << "UNEXPECTED LITERAL:" << ctx->toString() << std::endl;
        }

        // lit->print(// std::cout);
        
        state.stack.push(lit);
    }
        
    virtual void exitFuncCall(Lua55GrammarParser::FuncCallContext * ctx) override {
        // std::cout << "exitFuncCall" << std::endl;
        FuncCall* funccall = new FuncCall;

        std::stack<FuncCallTail*> tails;
        size_t n = ctx->funcCall_tail().size();
        for (size_t i=0; i<n; i++) {
            tails.push((FuncCallTail*) state.stack.top());
            state.stack.pop();
        }
        for (size_t i=0; i<n; i++) {
            funccall->tails.push_back(
                std::shared_ptr<FuncCallTail>((FuncCallTail*) tails.top())
            );
            tails.pop();
        }
        
        // var inherits from expr
        funccall->function = std::shared_ptr<Expression>((Expression*) state.stack.top());
        state.stack.pop();

        
        // funccall->print(// std::cout);
        
        state.stack.push(funccall);
    }
    
    virtual void exitFuncCall_tail(Lua55GrammarParser::FuncCall_tailContext * ctx) override {
        // std::cout << "exitFuncCall_tail" << std::endl;
        FuncCallTail* tail = new FuncCallTail;
        if (ctx->name()){
            tail->name = ctx->name()->ID()->toString();
        }
        if (ctx->args()->explist()) {
            size_t n = ctx->args()->explist()->exp().size();
            std::stack<Expression*> temp;
            for (size_t i=0; i<n; i++) {
                temp.push((Expression*)state.stack.top());
                state.stack.pop();
            }
            for (size_t i=0; i<n; i++) {
                tail->args.push_back(
                    std::shared_ptr<Expression>((Expression*)temp.top())
                );
                temp.pop();
            }
        }
        
        state.stack.push(tail);
    }
     
    virtual void exitVar(Lua55GrammarParser::VarContext * ctx) override {
        // std::cout << "exitVar" << std::endl;
        Var* var = new Var;

        size_t n = ctx->var_tail().size();
        std::stack< VarPart* > parts;
        for (size_t i=0; i<n; i++) {
            parts.push( (VarPart*) state.stack.top() );
            state.stack.pop();
        }
        for (size_t i=0; i<n; i++) {
            var->specifications.push_back(
                std::shared_ptr<VarPart>(parts.top())
            );
            parts.pop();
        }
        
        if (ctx->name()) {
            var->base.reset(new VarPartName(ctx->name()->ID()->toString()));
            var->base->kind = VarPart::Kind::NAME;
        } else {
            std::shared_ptr<Expression> exp( (Expression*) state.stack.top() ); 
            state.stack.pop();

            var->base.reset(new VarPartExp(exp));
            var->base->kind = VarPart::Kind::EXP;
        }

        
        // var->print(// std::cout);
        
        state.stack.push(var);
    }
    
    virtual void exitVar_tail(Lua55GrammarParser::Var_tailContext * ctx) override {
        // std::cout << "exitVar_tail" << std::endl;
        VarPart* part;

        if (ctx->name()) {
            part = new VarPartName(ctx->name()->ID()->toString());
            
            part->kind = VarPart::Kind::NAME;
        } else {
            std::shared_ptr<Expression> exp( (Expression*) state.stack.top() ); 
            state.stack.pop();
            
            // exp->print(// std::cout);
            
            
            part = new VarPartExp(exp);
            part->kind = VarPart::Kind::EXP;
        }
        state.stack.push(part);
    }
    
    virtual void exitName(Lua55GrammarParser::NameContext * ctx) override { 
        // std::cout << "exitName(" << ctx->ID()->toString() << ")" << std::endl;
    }
};

}