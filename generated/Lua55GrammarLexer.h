
// Generated from C:/Users/s7k/Desktop/LuaProject/Lua55Grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  Lua55GrammarLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, DO = 34, END = 35, AND = 36, OR = 37, NOT = 38, IF = 39, 
    ELSEIF = 40, ELSE = 41, THEN = 42, WHILE = 43, REPEAT = 44, UNTIL = 45, 
    FOR = 46, IN = 47, BREAK = 48, GOTO = 49, RETURN = 50, FUNCTION = 51, 
    NIL = 52, TRUE = 53, FALSE = 54, LOCAL = 55, GLOBAL = 56, CONST = 57, 
    NUMBER = 58, STRING = 59, UNTERMINATED_STRING = 60, ID = 61, WS = 62, 
    LINE_COMMENT = 63, BLOCK_COMMENT = 64
  };

  explicit Lua55GrammarLexer(antlr4::CharStream *input);

  ~Lua55GrammarLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.
  void UNTERMINATED_STRINGAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

};

