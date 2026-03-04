
// Generated from C:/Users/s7k/Desktop/LuaProject/Lua55Grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  Lua55GrammarLexer : public antlr4::Lexer {
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

