
// Generated from C:/Users/s7k/Desktop/LuaProject/Lua55Grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  Lua55GrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, ATTRIB = 17, FIELD_SEP = 18, PLUS_SIGN = 19, 
    MINUS_SIGN = 20, TILDA_SIGN = 21, HASH_SIGN = 22, ASTRIX_SIGN = 23, 
    SLASH_SIGN = 24, DOUBLESLASH_SIGN = 25, PERCENT_SIGN = 26, SHLEFT_SIGN = 27, 
    SHRIGHT_SIGN = 28, LEQ_SIGN = 29, GEQ_SIGN = 30, DOUBLEEQ_SIGN = 31, 
    NEQ_SIGN = 32, EQ_SIGN = 33, TR_OPEN = 34, TR_CLOSE = 35, ATTRIBUTES_DEFINED = 36, 
    DO = 37, END = 38, AND = 39, OR = 40, NOT = 41, IF = 42, ELSEIF = 43, 
    ELSE = 44, THEN = 45, WHILE = 46, REPEAT = 47, UNTIL = 48, FOR = 49, 
    IN = 50, BREAK = 51, GOTO = 52, RETURN = 53, FUNCTION = 54, NIL = 55, 
    TRUE = 56, FALSE = 57, LOCAL = 58, GLOBAL = 59, CONST = 60, NUMBER = 61, 
    STRING = 62, UNTERMINATED_STRING = 63, ID = 64, WS = 65, LINE_COMMENT = 66, 
    BLOCK_COMMENT = 67
  };

  enum {
    RuleProg = 0, RuleBlock = 1, RuleStatement = 2, RuleEmptyStatement = 3, 
    RuleDoBlockStatement = 4, RuleAssignmentStatement = 5, RuleVarlist = 6, 
    RuleExplist = 7, RuleDeclarationStatement = 8, RuleAttnamelist = 9, 
    RuleGlobalAttribStatement = 10, RuleScopeSpec = 11, RuleFuncdefStatement = 12, 
    RuleDefaultFuncdefStatement = 13, RuleScopedFuncdefStatement = 14, RuleFuncname = 15, 
    RuleNamespec = 16, RuleFuncbody = 17, RuleWhileStatement = 18, RuleRepeatStatement = 19, 
    RuleIfStatement = 20, RuleNumericForStatement = 21, RuleGenericForStatement = 22, 
    RuleGotoStatement = 23, RuleLabelStatement = 24, RuleBreakStatement = 25, 
    RuleReturnStatement = 26, RuleFuncCallStatement = 27, RuleFuncAnon = 28, 
    RuleTableConstructor = 29, RuleExp = 30, RuleOpExp = 31, RuleOrExp = 32, 
    RuleAndExp = 33, RuleCompExp = 34, RuleBitorExp = 35, RuleBitxorExp = 36, 
    RuleBitandExp = 37, RuleShiftExp = 38, RuleConcatExp = 39, RulePlusExp = 40, 
    RuleMulExp = 41, RuleUnaryExp = 42, RulePowExp = 43, RuleOpStartExp = 44, 
    RuleLiteral = 45, RulePrefixexp = 46, RuleFuncCall = 47, RuleFuncCall_tail = 48, 
    RuleVar = 49, RuleBracketExp = 50, RuleVar_tail = 51, RuleName = 52, 
    RuleNameattr = 53, RuleParamlist = 54, RuleVararg = 55, RuleNamelist = 56, 
    RuleArgs = 57, RuleFieldlist = 58, RuleField = 59, RuleUnop = 60, RuleMulop = 61, 
    RulePlusop = 62, RuleShiftop = 63, RuleCompop = 64
  };

  explicit Lua55GrammarParser(antlr4::TokenStream *input);

  Lua55GrammarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~Lua55GrammarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class BlockContext;
  class StatementContext;
  class EmptyStatementContext;
  class DoBlockStatementContext;
  class AssignmentStatementContext;
  class VarlistContext;
  class ExplistContext;
  class DeclarationStatementContext;
  class AttnamelistContext;
  class GlobalAttribStatementContext;
  class ScopeSpecContext;
  class FuncdefStatementContext;
  class DefaultFuncdefStatementContext;
  class ScopedFuncdefStatementContext;
  class FuncnameContext;
  class NamespecContext;
  class FuncbodyContext;
  class WhileStatementContext;
  class RepeatStatementContext;
  class IfStatementContext;
  class NumericForStatementContext;
  class GenericForStatementContext;
  class GotoStatementContext;
  class LabelStatementContext;
  class BreakStatementContext;
  class ReturnStatementContext;
  class FuncCallStatementContext;
  class FuncAnonContext;
  class TableConstructorContext;
  class ExpContext;
  class OpExpContext;
  class OrExpContext;
  class AndExpContext;
  class CompExpContext;
  class BitorExpContext;
  class BitxorExpContext;
  class BitandExpContext;
  class ShiftExpContext;
  class ConcatExpContext;
  class PlusExpContext;
  class MulExpContext;
  class UnaryExpContext;
  class PowExpContext;
  class OpStartExpContext;
  class LiteralContext;
  class PrefixexpContext;
  class FuncCallContext;
  class FuncCall_tailContext;
  class VarContext;
  class BracketExpContext;
  class Var_tailContext;
  class NameContext;
  class NameattrContext;
  class ParamlistContext;
  class VarargContext;
  class NamelistContext;
  class ArgsContext;
  class FieldlistContext;
  class FieldContext;
  class UnopContext;
  class MulopContext;
  class PlusopContext;
  class ShiftopContext;
  class CompopContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgContext* prog();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    ReturnStatementContext *returnStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EmptyStatementContext *emptyStatement();
    DoBlockStatementContext *doBlockStatement();
    AssignmentStatementContext *assignmentStatement();
    DeclarationStatementContext *declarationStatement();
    GlobalAttribStatementContext *globalAttribStatement();
    FuncdefStatementContext *funcdefStatement();
    WhileStatementContext *whileStatement();
    RepeatStatementContext *repeatStatement();
    IfStatementContext *ifStatement();
    NumericForStatementContext *numericForStatement();
    GenericForStatementContext *genericForStatement();
    GotoStatementContext *gotoStatement();
    LabelStatementContext *labelStatement();
    BreakStatementContext *breakStatement();
    FuncCallStatementContext *funcCallStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  EmptyStatementContext : public antlr4::ParserRuleContext {
  public:
    EmptyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EmptyStatementContext* emptyStatement();

  class  DoBlockStatementContext : public antlr4::ParserRuleContext {
  public:
    DoBlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    BlockContext *block();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoBlockStatementContext* doBlockStatement();

  class  AssignmentStatementContext : public antlr4::ParserRuleContext {
  public:
    AssignmentStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarlistContext *varlist();
    antlr4::tree::TerminalNode *EQ_SIGN();
    ExplistContext *explist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentStatementContext* assignmentStatement();

  class  VarlistContext : public antlr4::ParserRuleContext {
  public:
    VarlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VarContext *> var();
    VarContext* var(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarlistContext* varlist();

  class  ExplistContext : public antlr4::ParserRuleContext {
  public:
    ExplistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExplistContext* explist();

  class  DeclarationStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclarationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScopeSpecContext *scopeSpec();
    AttnamelistContext *attnamelist();
    antlr4::tree::TerminalNode *EQ_SIGN();
    ExplistContext *explist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationStatementContext* declarationStatement();

  class  AttnamelistContext : public antlr4::ParserRuleContext {
  public:
    AttnamelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameattrContext *> nameattr();
    NameattrContext* nameattr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttnamelistContext* attnamelist();

  class  GlobalAttribStatementContext : public antlr4::ParserRuleContext {
  public:
    GlobalAttribStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *ATTRIB();
    antlr4::tree::TerminalNode *ASTRIX_SIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GlobalAttribStatementContext* globalAttribStatement();

  class  ScopeSpecContext : public antlr4::ParserRuleContext {
  public:
    ScopeSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScopeSpecContext* scopeSpec();

  class  FuncdefStatementContext : public antlr4::ParserRuleContext {
  public:
    FuncdefStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefaultFuncdefStatementContext *defaultFuncdefStatement();
    ScopedFuncdefStatementContext *scopedFuncdefStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncdefStatementContext* funcdefStatement();

  class  DefaultFuncdefStatementContext : public antlr4::ParserRuleContext {
  public:
    DefaultFuncdefStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    FuncnameContext *funcname();
    FuncbodyContext *funcbody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefaultFuncdefStatementContext* defaultFuncdefStatement();

  class  ScopedFuncdefStatementContext : public antlr4::ParserRuleContext {
  public:
    ScopedFuncdefStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScopeSpecContext *scopeSpec();
    antlr4::tree::TerminalNode *FUNCTION();
    NameContext *name();
    FuncbodyContext *funcbody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScopedFuncdefStatementContext* scopedFuncdefStatement();

  class  FuncnameContext : public antlr4::ParserRuleContext {
  public:
    FuncnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamespecContext *namespec();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncnameContext* funcname();

  class  NamespecContext : public antlr4::ParserRuleContext {
  public:
    NamespecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamespecContext* namespec();

  class  FuncbodyContext : public antlr4::ParserRuleContext {
  public:
    FuncbodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    antlr4::tree::TerminalNode *END();
    ParamlistContext *paramlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncbodyContext* funcbody();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExpContext *exp();
    antlr4::tree::TerminalNode *DO();
    BlockContext *block();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileStatementContext* whileStatement();

  class  RepeatStatementContext : public antlr4::ParserRuleContext {
  public:
    RepeatStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    BlockContext *block();
    antlr4::tree::TerminalNode *UNTIL();
    ExpContext *exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RepeatStatementContext* repeatStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> ELSEIF();
    antlr4::tree::TerminalNode* ELSEIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStatementContext* ifStatement();

  class  NumericForStatementContext : public antlr4::ParserRuleContext {
  public:
    NumericForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    NameContext *name();
    antlr4::tree::TerminalNode *EQ_SIGN();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *DO();
    BlockContext *block();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericForStatementContext* numericForStatement();

  class  GenericForStatementContext : public antlr4::ParserRuleContext {
  public:
    GenericForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    NamelistContext *namelist();
    antlr4::tree::TerminalNode *IN();
    ExplistContext *explist();
    antlr4::tree::TerminalNode *DO();
    BlockContext *block();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericForStatementContext* genericForStatement();

  class  GotoStatementContext : public antlr4::ParserRuleContext {
  public:
    GotoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GotoStatementContext* gotoStatement();

  class  LabelStatementContext : public antlr4::ParserRuleContext {
  public:
    LabelStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelStatementContext* labelStatement();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BreakStatementContext* breakStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExplistContext *explist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  FuncCallStatementContext : public antlr4::ParserRuleContext {
  public:
    FuncCallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncCallContext *funcCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncCallStatementContext* funcCallStatement();

  class  FuncAnonContext : public antlr4::ParserRuleContext {
  public:
    FuncAnonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    FuncbodyContext *funcbody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncAnonContext* funcAnon();

  class  TableConstructorContext : public antlr4::ParserRuleContext {
  public:
    TableConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FieldlistContext *fieldlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TableConstructorContext* tableConstructor();

  class  ExpContext : public antlr4::ParserRuleContext {
  public:
    ExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    FuncAnonContext *funcAnon();
    PrefixexpContext *prefixexp();
    TableConstructorContext *tableConstructor();
    OpExpContext *opExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpContext* exp();

  class  OpExpContext : public antlr4::ParserRuleContext {
  public:
    OpExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrExpContext *orExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OpExpContext* opExp();

  class  OrExpContext : public antlr4::ParserRuleContext {
  public:
    OrExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AndExpContext *> andExp();
    AndExpContext* andExp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrExpContext* orExp();

  class  AndExpContext : public antlr4::ParserRuleContext {
  public:
    AndExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CompExpContext *> compExp();
    CompExpContext* compExp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndExpContext* andExp();

  class  CompExpContext : public antlr4::ParserRuleContext {
  public:
    CompExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BitorExpContext *> bitorExp();
    BitorExpContext* bitorExp(size_t i);
    CompopContext *compop();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompExpContext* compExp();

  class  BitorExpContext : public antlr4::ParserRuleContext {
  public:
    BitorExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BitxorExpContext *> bitxorExp();
    BitxorExpContext* bitxorExp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitorExpContext* bitorExp();

  class  BitxorExpContext : public antlr4::ParserRuleContext {
  public:
    BitxorExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BitandExpContext *> bitandExp();
    BitandExpContext* bitandExp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TILDA_SIGN();
    antlr4::tree::TerminalNode* TILDA_SIGN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitxorExpContext* bitxorExp();

  class  BitandExpContext : public antlr4::ParserRuleContext {
  public:
    BitandExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ShiftExpContext *> shiftExp();
    ShiftExpContext* shiftExp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitandExpContext* bitandExp();

  class  ShiftExpContext : public antlr4::ParserRuleContext {
  public:
    ShiftExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConcatExpContext *> concatExp();
    ConcatExpContext* concatExp(size_t i);
    std::vector<ShiftopContext *> shiftop();
    ShiftopContext* shiftop(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftExpContext* shiftExp();

  class  ConcatExpContext : public antlr4::ParserRuleContext {
  public:
    ConcatExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PlusExpContext *> plusExp();
    PlusExpContext* plusExp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConcatExpContext* concatExp();

  class  PlusExpContext : public antlr4::ParserRuleContext {
  public:
    PlusExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MulExpContext *> mulExp();
    MulExpContext* mulExp(size_t i);
    std::vector<PlusopContext *> plusop();
    PlusopContext* plusop(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PlusExpContext* plusExp();

  class  MulExpContext : public antlr4::ParserRuleContext {
  public:
    MulExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UnaryExpContext *> unaryExp();
    UnaryExpContext* unaryExp(size_t i);
    std::vector<MulopContext *> mulop();
    MulopContext* mulop(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MulExpContext* mulExp();

  class  UnaryExpContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PowExpContext *powExp();
    UnopContext *unop();
    UnaryExpContext *unaryExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryExpContext* unaryExp();

  class  PowExpContext : public antlr4::ParserRuleContext {
  public:
    PowExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OpStartExpContext *opStartExp();
    PowExpContext *powExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PowExpContext* powExp();

  class  OpStartExpContext : public antlr4::ParserRuleContext {
  public:
    OpStartExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrefixexpContext *prefixexp();
    LiteralContext *literal();
    TableConstructorContext *tableConstructor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OpStartExpContext* opStartExp();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NIL();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  PrefixexpContext : public antlr4::ParserRuleContext {
  public:
    PrefixexpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarContext *var();
    BracketExpContext *bracketExp();
    FuncCallContext *funcCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrefixexpContext* prefixexp();

  class  FuncCallContext : public antlr4::ParserRuleContext {
  public:
    FuncCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarContext *var();
    std::vector<FuncCall_tailContext *> funcCall_tail();
    FuncCall_tailContext* funcCall_tail(size_t i);
    BracketExpContext *bracketExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncCallContext* funcCall();

  class  FuncCall_tailContext : public antlr4::ParserRuleContext {
  public:
    FuncCall_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArgsContext *args();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncCall_tailContext* funcCall_tail();

  class  VarContext : public antlr4::ParserRuleContext {
  public:
    VarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    std::vector<Var_tailContext *> var_tail();
    Var_tailContext* var_tail(size_t i);
    BracketExpContext *bracketExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarContext* var();

  class  BracketExpContext : public antlr4::ParserRuleContext {
  public:
    BracketExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpContext *exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BracketExpContext* bracketExp();

  class  Var_tailContext : public antlr4::ParserRuleContext {
  public:
    Var_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpContext *exp();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Var_tailContext* var_tail();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameContext* name();

  class  NameattrContext : public antlr4::ParserRuleContext {
  public:
    NameattrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *ATTRIB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameattrContext* nameattr();

  class  ParamlistContext : public antlr4::ParserRuleContext {
  public:
    ParamlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamelistContext *namelist();
    VarargContext *vararg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamlistContext* paramlist();

  class  VarargContext : public antlr4::ParserRuleContext {
  public:
    VarargContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarargContext* vararg();

  class  NamelistContext : public antlr4::ParserRuleContext {
  public:
    NamelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamelistContext* namelist();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExplistContext *explist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgsContext* args();

  class  FieldlistContext : public antlr4::ParserRuleContext {
  public:
    FieldlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FieldContext *> field();
    FieldContext* field(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FIELD_SEP();
    antlr4::tree::TerminalNode* FIELD_SEP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldlistContext* fieldlist();

  class  FieldContext : public antlr4::ParserRuleContext {
  public:
    FieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *EQ_SIGN();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldContext* field();

  class  UnopContext : public antlr4::ParserRuleContext {
  public:
    UnopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *HASH_SIGN();
    antlr4::tree::TerminalNode *MINUS_SIGN();
    antlr4::tree::TerminalNode *TILDA_SIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnopContext* unop();

  class  MulopContext : public antlr4::ParserRuleContext {
  public:
    MulopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASTRIX_SIGN();
    antlr4::tree::TerminalNode *SLASH_SIGN();
    antlr4::tree::TerminalNode *DOUBLESLASH_SIGN();
    antlr4::tree::TerminalNode *PERCENT_SIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MulopContext* mulop();

  class  PlusopContext : public antlr4::ParserRuleContext {
  public:
    PlusopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS_SIGN();
    antlr4::tree::TerminalNode *MINUS_SIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PlusopContext* plusop();

  class  ShiftopContext : public antlr4::ParserRuleContext {
  public:
    ShiftopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHLEFT_SIGN();
    antlr4::tree::TerminalNode *SHRIGHT_SIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftopContext* shiftop();

  class  CompopContext : public antlr4::ParserRuleContext {
  public:
    CompopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TR_OPEN();
    antlr4::tree::TerminalNode *LEQ_SIGN();
    antlr4::tree::TerminalNode *TR_CLOSE();
    antlr4::tree::TerminalNode *GEQ_SIGN();
    antlr4::tree::TerminalNode *DOUBLEEQ_SIGN();
    antlr4::tree::TerminalNode *NEQ_SIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompopContext* compop();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

