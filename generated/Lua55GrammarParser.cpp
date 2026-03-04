
// Generated from C:/Users/s7k/Desktop/LuaProject/Lua55Grammar.g4 by ANTLR 4.13.2


#include "Lua55GrammarListener.h"

#include "Lua55GrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct Lua55GrammarParserStaticData final {
  Lua55GrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Lua55GrammarParserStaticData(const Lua55GrammarParserStaticData&) = delete;
  Lua55GrammarParserStaticData(Lua55GrammarParserStaticData&&) = delete;
  Lua55GrammarParserStaticData& operator=(const Lua55GrammarParserStaticData&) = delete;
  Lua55GrammarParserStaticData& operator=(Lua55GrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag lua55grammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<Lua55GrammarParserStaticData> lua55grammarParserStaticData = nullptr;

void lua55grammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (lua55grammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(lua55grammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Lua55GrammarParserStaticData>(
    std::vector<std::string>{
      "prog", "block", "statement", "emptyStatement", "doBlockStatement", 
      "assignmentStatement", "varlist", "explist", "declarationStatement", 
      "attnamelist", "globalAttribStatement", "scopeSpec", "funcdefStatement", 
      "defaultFuncdefStatement", "scopedFuncdefStatement", "funcname", "namespec", 
      "funcbody", "whileStatement", "repeatStatement", "ifStatement", "numericForStatement", 
      "genericForStatement", "gotoStatement", "labelStatement", "breakStatement", 
      "returnStatement", "funcCallStatement", "funcAnon", "tableConstructor", 
      "exp", "opExp", "orExp", "andExp", "compExp", "bitorExp", "bitxorExp", 
      "bitandExp", "shiftExp", "concatExp", "plusExp", "mulExp", "unaryExp", 
      "powExp", "opStartExp", "literal", "prefixexp", "funcCall", "funcCall_tail", 
      "var", "bracketExp", "var_tail", "name", "nameattr", "paramlist", 
      "vararg", "namelist", "args", "fieldlist", "field", "unop", "mulop", 
      "plusop", "shiftop", "compop"
    },
    std::vector<std::string>{
      "", "';'", "','", "':'", "'.'", "'('", "')'", "'::'", "'{'", "'}'", 
      "'|'", "'&'", "'..'", "'^'", "'['", "']'", "'...'", "", "", "'+'", 
      "'-'", "'~'", "'#'", "'*'", "'/'", "'//'", "'%'", "'<<'", "'>>'", 
      "'<='", "'>='", "'=='", "'~='", "'='", "'<'", "'>'", "", "'do'", "'end'", 
      "'and'", "'or'", "'not'", "'if'", "'elseif'", "'else'", "'then'", 
      "'while'", "'repeat'", "'until'", "'for'", "'in'", "'break'", "'goto'", 
      "'return'", "'function'", "'nil'", "'true'", "'false'", "'local'", 
      "'global'", "'const'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "ATTRIB", "FIELD_SEP", "PLUS_SIGN", "MINUS_SIGN", "TILDA_SIGN", "HASH_SIGN", 
      "ASTRIX_SIGN", "SLASH_SIGN", "DOUBLESLASH_SIGN", "PERCENT_SIGN", "SHLEFT_SIGN", 
      "SHRIGHT_SIGN", "LEQ_SIGN", "GEQ_SIGN", "DOUBLEEQ_SIGN", "NEQ_SIGN", 
      "EQ_SIGN", "TR_OPEN", "TR_CLOSE", "ATTRIBUTES_DEFINED", "DO", "END", 
      "AND", "OR", "NOT", "IF", "ELSEIF", "ELSE", "THEN", "WHILE", "REPEAT", 
      "UNTIL", "FOR", "IN", "BREAK", "GOTO", "RETURN", "FUNCTION", "NIL", 
      "TRUE", "FALSE", "LOCAL", "GLOBAL", "CONST", "NUMBER", "STRING", "UNTERMINATED_STRING", 
      "ID", "WS", "LINE_COMMENT", "BLOCK_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,67,552,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,7,
  	63,2,64,7,64,1,0,1,0,1,0,1,1,1,1,3,1,136,8,1,5,1,138,8,1,10,1,12,1,141,
  	9,1,1,1,1,1,3,1,145,8,1,3,1,147,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,164,8,2,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,
  	1,5,1,5,1,6,1,6,1,6,5,6,179,8,6,10,6,12,6,182,9,6,1,7,1,7,1,7,5,7,187,
  	8,7,10,7,12,7,190,9,7,1,8,1,8,1,8,1,8,3,8,196,8,8,1,9,1,9,1,9,5,9,201,
  	8,9,10,9,12,9,204,9,9,1,10,1,10,1,10,1,10,1,11,1,11,1,12,1,12,3,12,214,
  	8,12,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,3,15,
  	228,8,15,1,16,1,16,1,16,5,16,233,8,16,10,16,12,16,236,9,16,1,17,1,17,
  	3,17,240,8,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,19,
  	1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,5,20,
  	266,8,20,10,20,12,20,269,9,20,1,20,1,20,3,20,273,8,20,1,20,1,20,1,21,
  	1,21,1,21,1,21,1,21,1,21,1,21,1,21,3,21,285,8,21,1,21,1,21,1,21,1,21,
  	1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,24,1,24,1,24,
  	1,24,1,25,1,25,1,26,1,26,3,26,310,8,26,1,27,1,27,1,28,1,28,1,28,1,29,
  	1,29,1,29,1,29,1,29,1,29,3,29,323,8,29,1,30,1,30,1,30,1,30,1,30,3,30,
  	330,8,30,1,31,1,31,1,32,1,32,1,32,5,32,337,8,32,10,32,12,32,340,9,32,
  	1,33,1,33,1,33,5,33,345,8,33,10,33,12,33,348,9,33,1,34,1,34,1,34,1,34,
  	3,34,354,8,34,1,35,1,35,1,35,5,35,359,8,35,10,35,12,35,362,9,35,1,36,
  	1,36,1,36,5,36,367,8,36,10,36,12,36,370,9,36,1,37,1,37,1,37,5,37,375,
  	8,37,10,37,12,37,378,9,37,1,38,1,38,1,38,1,38,5,38,384,8,38,10,38,12,
  	38,387,9,38,1,39,1,39,1,39,5,39,392,8,39,10,39,12,39,395,9,39,1,40,1,
  	40,1,40,1,40,5,40,401,8,40,10,40,12,40,404,9,40,1,41,1,41,1,41,1,41,5,
  	41,410,8,41,10,41,12,41,413,9,41,1,42,1,42,1,42,1,42,3,42,419,8,42,1,
  	43,1,43,1,43,3,43,424,8,43,1,44,1,44,1,44,3,44,429,8,44,1,45,1,45,1,46,
  	1,46,1,46,3,46,436,8,46,1,47,1,47,4,47,440,8,47,11,47,12,47,441,1,47,
  	1,47,4,47,446,8,47,11,47,12,47,447,3,47,450,8,47,1,48,1,48,1,48,1,48,
  	1,48,3,48,457,8,48,1,49,1,49,5,49,461,8,49,10,49,12,49,464,9,49,1,49,
  	1,49,4,49,468,8,49,11,49,12,49,469,3,49,472,8,49,1,50,1,50,1,50,1,50,
  	1,51,1,51,1,51,1,51,1,51,1,51,3,51,484,8,51,1,52,1,52,1,53,1,53,3,53,
  	490,8,53,1,54,1,54,1,54,3,54,495,8,54,1,54,3,54,498,8,54,1,55,1,55,3,
  	55,502,8,55,1,56,1,56,1,56,5,56,507,8,56,10,56,12,56,510,9,56,1,57,1,
  	57,3,57,514,8,57,1,57,1,57,1,58,1,58,1,58,5,58,521,8,58,10,58,12,58,524,
  	9,58,1,58,3,58,527,8,58,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,
  	1,59,1,59,3,59,540,8,59,1,60,1,60,1,61,1,61,1,62,1,62,1,63,1,63,1,64,
  	1,64,1,64,0,0,65,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,
  	38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,
  	84,86,88,90,92,94,96,98,100,102,104,106,108,110,112,114,116,118,120,122,
  	124,126,128,0,7,1,0,58,59,2,0,55,57,61,62,2,0,20,22,41,41,1,0,23,26,1,
  	0,19,20,1,0,27,28,2,0,29,32,34,35,555,0,130,1,0,0,0,2,139,1,0,0,0,4,163,
  	1,0,0,0,6,165,1,0,0,0,8,167,1,0,0,0,10,171,1,0,0,0,12,175,1,0,0,0,14,
  	183,1,0,0,0,16,191,1,0,0,0,18,197,1,0,0,0,20,205,1,0,0,0,22,209,1,0,0,
  	0,24,213,1,0,0,0,26,215,1,0,0,0,28,219,1,0,0,0,30,224,1,0,0,0,32,229,
  	1,0,0,0,34,237,1,0,0,0,36,245,1,0,0,0,38,251,1,0,0,0,40,256,1,0,0,0,42,
  	276,1,0,0,0,44,290,1,0,0,0,46,298,1,0,0,0,48,301,1,0,0,0,50,305,1,0,0,
  	0,52,307,1,0,0,0,54,311,1,0,0,0,56,313,1,0,0,0,58,322,1,0,0,0,60,329,
  	1,0,0,0,62,331,1,0,0,0,64,333,1,0,0,0,66,341,1,0,0,0,68,349,1,0,0,0,70,
  	355,1,0,0,0,72,363,1,0,0,0,74,371,1,0,0,0,76,379,1,0,0,0,78,388,1,0,0,
  	0,80,396,1,0,0,0,82,405,1,0,0,0,84,418,1,0,0,0,86,420,1,0,0,0,88,428,
  	1,0,0,0,90,430,1,0,0,0,92,435,1,0,0,0,94,449,1,0,0,0,96,456,1,0,0,0,98,
  	471,1,0,0,0,100,473,1,0,0,0,102,483,1,0,0,0,104,485,1,0,0,0,106,487,1,
  	0,0,0,108,497,1,0,0,0,110,499,1,0,0,0,112,503,1,0,0,0,114,511,1,0,0,0,
  	116,517,1,0,0,0,118,539,1,0,0,0,120,541,1,0,0,0,122,543,1,0,0,0,124,545,
  	1,0,0,0,126,547,1,0,0,0,128,549,1,0,0,0,130,131,3,2,1,0,131,132,5,0,0,
  	1,132,1,1,0,0,0,133,135,3,4,2,0,134,136,5,1,0,0,135,134,1,0,0,0,135,136,
  	1,0,0,0,136,138,1,0,0,0,137,133,1,0,0,0,138,141,1,0,0,0,139,137,1,0,0,
  	0,139,140,1,0,0,0,140,146,1,0,0,0,141,139,1,0,0,0,142,144,3,52,26,0,143,
  	145,5,1,0,0,144,143,1,0,0,0,144,145,1,0,0,0,145,147,1,0,0,0,146,142,1,
  	0,0,0,146,147,1,0,0,0,147,3,1,0,0,0,148,164,3,6,3,0,149,164,3,8,4,0,150,
  	164,3,10,5,0,151,164,3,16,8,0,152,164,3,20,10,0,153,164,3,24,12,0,154,
  	164,3,36,18,0,155,164,3,38,19,0,156,164,3,40,20,0,157,164,3,42,21,0,158,
  	164,3,44,22,0,159,164,3,46,23,0,160,164,3,48,24,0,161,164,3,50,25,0,162,
  	164,3,54,27,0,163,148,1,0,0,0,163,149,1,0,0,0,163,150,1,0,0,0,163,151,
  	1,0,0,0,163,152,1,0,0,0,163,153,1,0,0,0,163,154,1,0,0,0,163,155,1,0,0,
  	0,163,156,1,0,0,0,163,157,1,0,0,0,163,158,1,0,0,0,163,159,1,0,0,0,163,
  	160,1,0,0,0,163,161,1,0,0,0,163,162,1,0,0,0,164,5,1,0,0,0,165,166,5,1,
  	0,0,166,7,1,0,0,0,167,168,5,37,0,0,168,169,3,2,1,0,169,170,5,38,0,0,170,
  	9,1,0,0,0,171,172,3,12,6,0,172,173,5,33,0,0,173,174,3,14,7,0,174,11,1,
  	0,0,0,175,180,3,98,49,0,176,177,5,2,0,0,177,179,3,98,49,0,178,176,1,0,
  	0,0,179,182,1,0,0,0,180,178,1,0,0,0,180,181,1,0,0,0,181,13,1,0,0,0,182,
  	180,1,0,0,0,183,188,3,60,30,0,184,185,5,2,0,0,185,187,3,60,30,0,186,184,
  	1,0,0,0,187,190,1,0,0,0,188,186,1,0,0,0,188,189,1,0,0,0,189,15,1,0,0,
  	0,190,188,1,0,0,0,191,192,3,22,11,0,192,195,3,18,9,0,193,194,5,33,0,0,
  	194,196,3,14,7,0,195,193,1,0,0,0,195,196,1,0,0,0,196,17,1,0,0,0,197,202,
  	3,106,53,0,198,199,5,2,0,0,199,201,3,106,53,0,200,198,1,0,0,0,201,204,
  	1,0,0,0,202,200,1,0,0,0,202,203,1,0,0,0,203,19,1,0,0,0,204,202,1,0,0,
  	0,205,206,5,59,0,0,206,207,5,17,0,0,207,208,5,23,0,0,208,21,1,0,0,0,209,
  	210,7,0,0,0,210,23,1,0,0,0,211,214,3,26,13,0,212,214,3,28,14,0,213,211,
  	1,0,0,0,213,212,1,0,0,0,214,25,1,0,0,0,215,216,5,54,0,0,216,217,3,30,
  	15,0,217,218,3,34,17,0,218,27,1,0,0,0,219,220,3,22,11,0,220,221,5,54,
  	0,0,221,222,3,104,52,0,222,223,3,34,17,0,223,29,1,0,0,0,224,227,3,32,
  	16,0,225,226,5,3,0,0,226,228,3,104,52,0,227,225,1,0,0,0,227,228,1,0,0,
  	0,228,31,1,0,0,0,229,234,3,104,52,0,230,231,5,4,0,0,231,233,3,104,52,
  	0,232,230,1,0,0,0,233,236,1,0,0,0,234,232,1,0,0,0,234,235,1,0,0,0,235,
  	33,1,0,0,0,236,234,1,0,0,0,237,239,5,5,0,0,238,240,3,108,54,0,239,238,
  	1,0,0,0,239,240,1,0,0,0,240,241,1,0,0,0,241,242,5,6,0,0,242,243,3,2,1,
  	0,243,244,5,38,0,0,244,35,1,0,0,0,245,246,5,46,0,0,246,247,3,60,30,0,
  	247,248,5,37,0,0,248,249,3,2,1,0,249,250,5,38,0,0,250,37,1,0,0,0,251,
  	252,5,47,0,0,252,253,3,2,1,0,253,254,5,48,0,0,254,255,3,60,30,0,255,39,
  	1,0,0,0,256,257,5,42,0,0,257,258,3,60,30,0,258,259,5,45,0,0,259,267,3,
  	2,1,0,260,261,5,43,0,0,261,262,3,60,30,0,262,263,5,45,0,0,263,264,3,2,
  	1,0,264,266,1,0,0,0,265,260,1,0,0,0,266,269,1,0,0,0,267,265,1,0,0,0,267,
  	268,1,0,0,0,268,272,1,0,0,0,269,267,1,0,0,0,270,271,5,44,0,0,271,273,
  	3,2,1,0,272,270,1,0,0,0,272,273,1,0,0,0,273,274,1,0,0,0,274,275,5,38,
  	0,0,275,41,1,0,0,0,276,277,5,49,0,0,277,278,3,104,52,0,278,279,5,33,0,
  	0,279,280,3,60,30,0,280,281,5,2,0,0,281,284,3,60,30,0,282,283,5,2,0,0,
  	283,285,3,60,30,0,284,282,1,0,0,0,284,285,1,0,0,0,285,286,1,0,0,0,286,
  	287,5,37,0,0,287,288,3,2,1,0,288,289,5,38,0,0,289,43,1,0,0,0,290,291,
  	5,49,0,0,291,292,3,112,56,0,292,293,5,50,0,0,293,294,3,14,7,0,294,295,
  	5,37,0,0,295,296,3,2,1,0,296,297,5,38,0,0,297,45,1,0,0,0,298,299,5,52,
  	0,0,299,300,3,104,52,0,300,47,1,0,0,0,301,302,5,7,0,0,302,303,3,104,52,
  	0,303,304,5,7,0,0,304,49,1,0,0,0,305,306,5,51,0,0,306,51,1,0,0,0,307,
  	309,5,53,0,0,308,310,3,14,7,0,309,308,1,0,0,0,309,310,1,0,0,0,310,53,
  	1,0,0,0,311,312,3,94,47,0,312,55,1,0,0,0,313,314,5,54,0,0,314,315,3,34,
  	17,0,315,57,1,0,0,0,316,317,5,8,0,0,317,318,3,116,58,0,318,319,5,9,0,
  	0,319,323,1,0,0,0,320,321,5,8,0,0,321,323,5,9,0,0,322,316,1,0,0,0,322,
  	320,1,0,0,0,323,59,1,0,0,0,324,330,3,90,45,0,325,330,3,56,28,0,326,330,
  	3,92,46,0,327,330,3,58,29,0,328,330,3,62,31,0,329,324,1,0,0,0,329,325,
  	1,0,0,0,329,326,1,0,0,0,329,327,1,0,0,0,329,328,1,0,0,0,330,61,1,0,0,
  	0,331,332,3,64,32,0,332,63,1,0,0,0,333,338,3,66,33,0,334,335,5,40,0,0,
  	335,337,3,66,33,0,336,334,1,0,0,0,337,340,1,0,0,0,338,336,1,0,0,0,338,
  	339,1,0,0,0,339,65,1,0,0,0,340,338,1,0,0,0,341,346,3,68,34,0,342,343,
  	5,39,0,0,343,345,3,68,34,0,344,342,1,0,0,0,345,348,1,0,0,0,346,344,1,
  	0,0,0,346,347,1,0,0,0,347,67,1,0,0,0,348,346,1,0,0,0,349,353,3,70,35,
  	0,350,351,3,128,64,0,351,352,3,70,35,0,352,354,1,0,0,0,353,350,1,0,0,
  	0,353,354,1,0,0,0,354,69,1,0,0,0,355,360,3,72,36,0,356,357,5,10,0,0,357,
  	359,3,72,36,0,358,356,1,0,0,0,359,362,1,0,0,0,360,358,1,0,0,0,360,361,
  	1,0,0,0,361,71,1,0,0,0,362,360,1,0,0,0,363,368,3,74,37,0,364,365,5,21,
  	0,0,365,367,3,74,37,0,366,364,1,0,0,0,367,370,1,0,0,0,368,366,1,0,0,0,
  	368,369,1,0,0,0,369,73,1,0,0,0,370,368,1,0,0,0,371,376,3,76,38,0,372,
  	373,5,11,0,0,373,375,3,76,38,0,374,372,1,0,0,0,375,378,1,0,0,0,376,374,
  	1,0,0,0,376,377,1,0,0,0,377,75,1,0,0,0,378,376,1,0,0,0,379,385,3,78,39,
  	0,380,381,3,126,63,0,381,382,3,78,39,0,382,384,1,0,0,0,383,380,1,0,0,
  	0,384,387,1,0,0,0,385,383,1,0,0,0,385,386,1,0,0,0,386,77,1,0,0,0,387,
  	385,1,0,0,0,388,393,3,80,40,0,389,390,5,12,0,0,390,392,3,80,40,0,391,
  	389,1,0,0,0,392,395,1,0,0,0,393,391,1,0,0,0,393,394,1,0,0,0,394,79,1,
  	0,0,0,395,393,1,0,0,0,396,402,3,82,41,0,397,398,3,124,62,0,398,399,3,
  	82,41,0,399,401,1,0,0,0,400,397,1,0,0,0,401,404,1,0,0,0,402,400,1,0,0,
  	0,402,403,1,0,0,0,403,81,1,0,0,0,404,402,1,0,0,0,405,411,3,84,42,0,406,
  	407,3,122,61,0,407,408,3,84,42,0,408,410,1,0,0,0,409,406,1,0,0,0,410,
  	413,1,0,0,0,411,409,1,0,0,0,411,412,1,0,0,0,412,83,1,0,0,0,413,411,1,
  	0,0,0,414,419,3,86,43,0,415,416,3,120,60,0,416,417,3,84,42,0,417,419,
  	1,0,0,0,418,414,1,0,0,0,418,415,1,0,0,0,419,85,1,0,0,0,420,423,3,88,44,
  	0,421,422,5,13,0,0,422,424,3,86,43,0,423,421,1,0,0,0,423,424,1,0,0,0,
  	424,87,1,0,0,0,425,429,3,92,46,0,426,429,3,90,45,0,427,429,3,58,29,0,
  	428,425,1,0,0,0,428,426,1,0,0,0,428,427,1,0,0,0,429,89,1,0,0,0,430,431,
  	7,1,0,0,431,91,1,0,0,0,432,436,3,98,49,0,433,436,3,100,50,0,434,436,3,
  	94,47,0,435,432,1,0,0,0,435,433,1,0,0,0,435,434,1,0,0,0,436,93,1,0,0,
  	0,437,439,3,98,49,0,438,440,3,96,48,0,439,438,1,0,0,0,440,441,1,0,0,0,
  	441,439,1,0,0,0,441,442,1,0,0,0,442,450,1,0,0,0,443,445,3,100,50,0,444,
  	446,3,96,48,0,445,444,1,0,0,0,446,447,1,0,0,0,447,445,1,0,0,0,447,448,
  	1,0,0,0,448,450,1,0,0,0,449,437,1,0,0,0,449,443,1,0,0,0,450,95,1,0,0,
  	0,451,457,3,114,57,0,452,453,5,3,0,0,453,454,3,104,52,0,454,455,3,114,
  	57,0,455,457,1,0,0,0,456,451,1,0,0,0,456,452,1,0,0,0,457,97,1,0,0,0,458,
  	462,3,104,52,0,459,461,3,102,51,0,460,459,1,0,0,0,461,464,1,0,0,0,462,
  	460,1,0,0,0,462,463,1,0,0,0,463,472,1,0,0,0,464,462,1,0,0,0,465,467,3,
  	100,50,0,466,468,3,102,51,0,467,466,1,0,0,0,468,469,1,0,0,0,469,467,1,
  	0,0,0,469,470,1,0,0,0,470,472,1,0,0,0,471,458,1,0,0,0,471,465,1,0,0,0,
  	472,99,1,0,0,0,473,474,5,5,0,0,474,475,3,60,30,0,475,476,5,6,0,0,476,
  	101,1,0,0,0,477,478,5,14,0,0,478,479,3,60,30,0,479,480,5,15,0,0,480,484,
  	1,0,0,0,481,482,5,4,0,0,482,484,3,104,52,0,483,477,1,0,0,0,483,481,1,
  	0,0,0,484,103,1,0,0,0,485,486,5,64,0,0,486,105,1,0,0,0,487,489,3,104,
  	52,0,488,490,5,17,0,0,489,488,1,0,0,0,489,490,1,0,0,0,490,107,1,0,0,0,
  	491,494,3,112,56,0,492,493,5,2,0,0,493,495,3,110,55,0,494,492,1,0,0,0,
  	494,495,1,0,0,0,495,498,1,0,0,0,496,498,3,110,55,0,497,491,1,0,0,0,497,
  	496,1,0,0,0,498,109,1,0,0,0,499,501,5,16,0,0,500,502,3,104,52,0,501,500,
  	1,0,0,0,501,502,1,0,0,0,502,111,1,0,0,0,503,508,3,104,52,0,504,505,5,
  	2,0,0,505,507,3,104,52,0,506,504,1,0,0,0,507,510,1,0,0,0,508,506,1,0,
  	0,0,508,509,1,0,0,0,509,113,1,0,0,0,510,508,1,0,0,0,511,513,5,5,0,0,512,
  	514,3,14,7,0,513,512,1,0,0,0,513,514,1,0,0,0,514,515,1,0,0,0,515,516,
  	5,6,0,0,516,115,1,0,0,0,517,522,3,118,59,0,518,519,5,18,0,0,519,521,3,
  	118,59,0,520,518,1,0,0,0,521,524,1,0,0,0,522,520,1,0,0,0,522,523,1,0,
  	0,0,523,526,1,0,0,0,524,522,1,0,0,0,525,527,5,18,0,0,526,525,1,0,0,0,
  	526,527,1,0,0,0,527,117,1,0,0,0,528,529,5,14,0,0,529,530,3,60,30,0,530,
  	531,5,15,0,0,531,532,5,33,0,0,532,533,3,60,30,0,533,540,1,0,0,0,534,535,
  	3,104,52,0,535,536,5,33,0,0,536,537,3,60,30,0,537,540,1,0,0,0,538,540,
  	3,60,30,0,539,528,1,0,0,0,539,534,1,0,0,0,539,538,1,0,0,0,540,119,1,0,
  	0,0,541,542,7,2,0,0,542,121,1,0,0,0,543,544,7,3,0,0,544,123,1,0,0,0,545,
  	546,7,4,0,0,546,125,1,0,0,0,547,548,7,5,0,0,548,127,1,0,0,0,549,550,7,
  	6,0,0,550,129,1,0,0,0,50,135,139,144,146,163,180,188,195,202,213,227,
  	234,239,267,272,284,309,322,329,338,346,353,360,368,376,385,393,402,411,
  	418,423,428,435,441,447,449,456,462,469,471,483,489,494,497,501,508,513,
  	522,526,539
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  lua55grammarParserStaticData = std::move(staticData);
}

}

Lua55GrammarParser::Lua55GrammarParser(TokenStream *input) : Lua55GrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

Lua55GrammarParser::Lua55GrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  Lua55GrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *lua55grammarParserStaticData->atn, lua55grammarParserStaticData->decisionToDFA, lua55grammarParserStaticData->sharedContextCache, options);
}

Lua55GrammarParser::~Lua55GrammarParser() {
  delete _interpreter;
}

const atn::ATN& Lua55GrammarParser::getATN() const {
  return *lua55grammarParserStaticData->atn;
}

std::string Lua55GrammarParser::getGrammarFileName() const {
  return "Lua55Grammar.g4";
}

const std::vector<std::string>& Lua55GrammarParser::getRuleNames() const {
  return lua55grammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& Lua55GrammarParser::getVocabulary() const {
  return lua55grammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView Lua55GrammarParser::getSerializedATN() const {
  return lua55grammarParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

Lua55GrammarParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::ProgContext::block() {
  return getRuleContext<Lua55GrammarParser::BlockContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::ProgContext::EOF() {
  return getToken(Lua55GrammarParser::EOF, 0);
}


size_t Lua55GrammarParser::ProgContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleProg;
}

void Lua55GrammarParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void Lua55GrammarParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

Lua55GrammarParser::ProgContext* Lua55GrammarParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, Lua55GrammarParser::RuleProg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    block();
    setState(131);
    match(Lua55GrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

Lua55GrammarParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::StatementContext *> Lua55GrammarParser::BlockContext::statement() {
  return getRuleContexts<Lua55GrammarParser::StatementContext>();
}

Lua55GrammarParser::StatementContext* Lua55GrammarParser::BlockContext::statement(size_t i) {
  return getRuleContext<Lua55GrammarParser::StatementContext>(i);
}

Lua55GrammarParser::ReturnStatementContext* Lua55GrammarParser::BlockContext::returnStatement() {
  return getRuleContext<Lua55GrammarParser::ReturnStatementContext>(0);
}


size_t Lua55GrammarParser::BlockContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleBlock;
}

void Lua55GrammarParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void Lua55GrammarParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, Lua55GrammarParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 1) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 1)) & -8778252277816229807) != 0)) {
      setState(133);
      statement();
      setState(135);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(134);
        match(Lua55GrammarParser::T__0);
        break;
      }

      default:
        break;
      }
      setState(141);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::RETURN) {
      setState(142);
      returnStatement();
      setState(144);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Lua55GrammarParser::T__0) {
        setState(143);
        match(Lua55GrammarParser::T__0);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

Lua55GrammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::EmptyStatementContext* Lua55GrammarParser::StatementContext::emptyStatement() {
  return getRuleContext<Lua55GrammarParser::EmptyStatementContext>(0);
}

Lua55GrammarParser::DoBlockStatementContext* Lua55GrammarParser::StatementContext::doBlockStatement() {
  return getRuleContext<Lua55GrammarParser::DoBlockStatementContext>(0);
}

Lua55GrammarParser::AssignmentStatementContext* Lua55GrammarParser::StatementContext::assignmentStatement() {
  return getRuleContext<Lua55GrammarParser::AssignmentStatementContext>(0);
}

Lua55GrammarParser::DeclarationStatementContext* Lua55GrammarParser::StatementContext::declarationStatement() {
  return getRuleContext<Lua55GrammarParser::DeclarationStatementContext>(0);
}

Lua55GrammarParser::GlobalAttribStatementContext* Lua55GrammarParser::StatementContext::globalAttribStatement() {
  return getRuleContext<Lua55GrammarParser::GlobalAttribStatementContext>(0);
}

Lua55GrammarParser::FuncdefStatementContext* Lua55GrammarParser::StatementContext::funcdefStatement() {
  return getRuleContext<Lua55GrammarParser::FuncdefStatementContext>(0);
}

Lua55GrammarParser::WhileStatementContext* Lua55GrammarParser::StatementContext::whileStatement() {
  return getRuleContext<Lua55GrammarParser::WhileStatementContext>(0);
}

Lua55GrammarParser::RepeatStatementContext* Lua55GrammarParser::StatementContext::repeatStatement() {
  return getRuleContext<Lua55GrammarParser::RepeatStatementContext>(0);
}

Lua55GrammarParser::IfStatementContext* Lua55GrammarParser::StatementContext::ifStatement() {
  return getRuleContext<Lua55GrammarParser::IfStatementContext>(0);
}

Lua55GrammarParser::NumericForStatementContext* Lua55GrammarParser::StatementContext::numericForStatement() {
  return getRuleContext<Lua55GrammarParser::NumericForStatementContext>(0);
}

Lua55GrammarParser::GenericForStatementContext* Lua55GrammarParser::StatementContext::genericForStatement() {
  return getRuleContext<Lua55GrammarParser::GenericForStatementContext>(0);
}

Lua55GrammarParser::GotoStatementContext* Lua55GrammarParser::StatementContext::gotoStatement() {
  return getRuleContext<Lua55GrammarParser::GotoStatementContext>(0);
}

Lua55GrammarParser::LabelStatementContext* Lua55GrammarParser::StatementContext::labelStatement() {
  return getRuleContext<Lua55GrammarParser::LabelStatementContext>(0);
}

Lua55GrammarParser::BreakStatementContext* Lua55GrammarParser::StatementContext::breakStatement() {
  return getRuleContext<Lua55GrammarParser::BreakStatementContext>(0);
}

Lua55GrammarParser::FuncCallStatementContext* Lua55GrammarParser::StatementContext::funcCallStatement() {
  return getRuleContext<Lua55GrammarParser::FuncCallStatementContext>(0);
}


size_t Lua55GrammarParser::StatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleStatement;
}

void Lua55GrammarParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void Lua55GrammarParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

Lua55GrammarParser::StatementContext* Lua55GrammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, Lua55GrammarParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(163);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(148);
      emptyStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(149);
      doBlockStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(150);
      assignmentStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(151);
      declarationStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(152);
      globalAttribStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(153);
      funcdefStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(154);
      whileStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(155);
      repeatStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(156);
      ifStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(157);
      numericForStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(158);
      genericForStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(159);
      gotoStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(160);
      labelStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(161);
      breakStatement();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(162);
      funcCallStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

Lua55GrammarParser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Lua55GrammarParser::EmptyStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleEmptyStatement;
}

void Lua55GrammarParser::EmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement(this);
}

void Lua55GrammarParser::EmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement(this);
}

Lua55GrammarParser::EmptyStatementContext* Lua55GrammarParser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, Lua55GrammarParser::RuleEmptyStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(Lua55GrammarParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoBlockStatementContext ------------------------------------------------------------------

Lua55GrammarParser::DoBlockStatementContext::DoBlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::DoBlockStatementContext::DO() {
  return getToken(Lua55GrammarParser::DO, 0);
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::DoBlockStatementContext::block() {
  return getRuleContext<Lua55GrammarParser::BlockContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::DoBlockStatementContext::END() {
  return getToken(Lua55GrammarParser::END, 0);
}


size_t Lua55GrammarParser::DoBlockStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleDoBlockStatement;
}

void Lua55GrammarParser::DoBlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoBlockStatement(this);
}

void Lua55GrammarParser::DoBlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoBlockStatement(this);
}

Lua55GrammarParser::DoBlockStatementContext* Lua55GrammarParser::doBlockStatement() {
  DoBlockStatementContext *_localctx = _tracker.createInstance<DoBlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, Lua55GrammarParser::RuleDoBlockStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(Lua55GrammarParser::DO);
    setState(168);
    block();
    setState(169);
    match(Lua55GrammarParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStatementContext ------------------------------------------------------------------

Lua55GrammarParser::AssignmentStatementContext::AssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::VarlistContext* Lua55GrammarParser::AssignmentStatementContext::varlist() {
  return getRuleContext<Lua55GrammarParser::VarlistContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::AssignmentStatementContext::EQ_SIGN() {
  return getToken(Lua55GrammarParser::EQ_SIGN, 0);
}

Lua55GrammarParser::ExplistContext* Lua55GrammarParser::AssignmentStatementContext::explist() {
  return getRuleContext<Lua55GrammarParser::ExplistContext>(0);
}


size_t Lua55GrammarParser::AssignmentStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleAssignmentStatement;
}

void Lua55GrammarParser::AssignmentStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentStatement(this);
}

void Lua55GrammarParser::AssignmentStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentStatement(this);
}

Lua55GrammarParser::AssignmentStatementContext* Lua55GrammarParser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, Lua55GrammarParser::RuleAssignmentStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    varlist();
    setState(172);
    match(Lua55GrammarParser::EQ_SIGN);
    setState(173);
    explist();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarlistContext ------------------------------------------------------------------

Lua55GrammarParser::VarlistContext::VarlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::VarContext *> Lua55GrammarParser::VarlistContext::var() {
  return getRuleContexts<Lua55GrammarParser::VarContext>();
}

Lua55GrammarParser::VarContext* Lua55GrammarParser::VarlistContext::var(size_t i) {
  return getRuleContext<Lua55GrammarParser::VarContext>(i);
}


size_t Lua55GrammarParser::VarlistContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleVarlist;
}

void Lua55GrammarParser::VarlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarlist(this);
}

void Lua55GrammarParser::VarlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarlist(this);
}

Lua55GrammarParser::VarlistContext* Lua55GrammarParser::varlist() {
  VarlistContext *_localctx = _tracker.createInstance<VarlistContext>(_ctx, getState());
  enterRule(_localctx, 12, Lua55GrammarParser::RuleVarlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    var();
    setState(180);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__1) {
      setState(176);
      match(Lua55GrammarParser::T__1);
      setState(177);
      var();
      setState(182);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplistContext ------------------------------------------------------------------

Lua55GrammarParser::ExplistContext::ExplistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::ExpContext *> Lua55GrammarParser::ExplistContext::exp() {
  return getRuleContexts<Lua55GrammarParser::ExpContext>();
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::ExplistContext::exp(size_t i) {
  return getRuleContext<Lua55GrammarParser::ExpContext>(i);
}


size_t Lua55GrammarParser::ExplistContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleExplist;
}

void Lua55GrammarParser::ExplistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplist(this);
}

void Lua55GrammarParser::ExplistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplist(this);
}

Lua55GrammarParser::ExplistContext* Lua55GrammarParser::explist() {
  ExplistContext *_localctx = _tracker.createInstance<ExplistContext>(_ctx, getState());
  enterRule(_localctx, 14, Lua55GrammarParser::RuleExplist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    exp();
    setState(188);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__1) {
      setState(184);
      match(Lua55GrammarParser::T__1);
      setState(185);
      exp();
      setState(190);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationStatementContext ------------------------------------------------------------------

Lua55GrammarParser::DeclarationStatementContext::DeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::ScopeSpecContext* Lua55GrammarParser::DeclarationStatementContext::scopeSpec() {
  return getRuleContext<Lua55GrammarParser::ScopeSpecContext>(0);
}

Lua55GrammarParser::AttnamelistContext* Lua55GrammarParser::DeclarationStatementContext::attnamelist() {
  return getRuleContext<Lua55GrammarParser::AttnamelistContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::DeclarationStatementContext::EQ_SIGN() {
  return getToken(Lua55GrammarParser::EQ_SIGN, 0);
}

Lua55GrammarParser::ExplistContext* Lua55GrammarParser::DeclarationStatementContext::explist() {
  return getRuleContext<Lua55GrammarParser::ExplistContext>(0);
}


size_t Lua55GrammarParser::DeclarationStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleDeclarationStatement;
}

void Lua55GrammarParser::DeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationStatement(this);
}

void Lua55GrammarParser::DeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationStatement(this);
}

Lua55GrammarParser::DeclarationStatementContext* Lua55GrammarParser::declarationStatement() {
  DeclarationStatementContext *_localctx = _tracker.createInstance<DeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, Lua55GrammarParser::RuleDeclarationStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    scopeSpec();
    setState(192);
    attnamelist();
    setState(195);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::EQ_SIGN) {
      setState(193);
      match(Lua55GrammarParser::EQ_SIGN);
      setState(194);
      explist();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttnamelistContext ------------------------------------------------------------------

Lua55GrammarParser::AttnamelistContext::AttnamelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::NameattrContext *> Lua55GrammarParser::AttnamelistContext::nameattr() {
  return getRuleContexts<Lua55GrammarParser::NameattrContext>();
}

Lua55GrammarParser::NameattrContext* Lua55GrammarParser::AttnamelistContext::nameattr(size_t i) {
  return getRuleContext<Lua55GrammarParser::NameattrContext>(i);
}


size_t Lua55GrammarParser::AttnamelistContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleAttnamelist;
}

void Lua55GrammarParser::AttnamelistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttnamelist(this);
}

void Lua55GrammarParser::AttnamelistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttnamelist(this);
}

Lua55GrammarParser::AttnamelistContext* Lua55GrammarParser::attnamelist() {
  AttnamelistContext *_localctx = _tracker.createInstance<AttnamelistContext>(_ctx, getState());
  enterRule(_localctx, 18, Lua55GrammarParser::RuleAttnamelist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    nameattr();
    setState(202);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__1) {
      setState(198);
      match(Lua55GrammarParser::T__1);
      setState(199);
      nameattr();
      setState(204);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalAttribStatementContext ------------------------------------------------------------------

Lua55GrammarParser::GlobalAttribStatementContext::GlobalAttribStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::GlobalAttribStatementContext::GLOBAL() {
  return getToken(Lua55GrammarParser::GLOBAL, 0);
}

tree::TerminalNode* Lua55GrammarParser::GlobalAttribStatementContext::ATTRIB() {
  return getToken(Lua55GrammarParser::ATTRIB, 0);
}

tree::TerminalNode* Lua55GrammarParser::GlobalAttribStatementContext::ASTRIX_SIGN() {
  return getToken(Lua55GrammarParser::ASTRIX_SIGN, 0);
}


size_t Lua55GrammarParser::GlobalAttribStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleGlobalAttribStatement;
}

void Lua55GrammarParser::GlobalAttribStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobalAttribStatement(this);
}

void Lua55GrammarParser::GlobalAttribStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobalAttribStatement(this);
}

Lua55GrammarParser::GlobalAttribStatementContext* Lua55GrammarParser::globalAttribStatement() {
  GlobalAttribStatementContext *_localctx = _tracker.createInstance<GlobalAttribStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, Lua55GrammarParser::RuleGlobalAttribStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    match(Lua55GrammarParser::GLOBAL);
    setState(206);
    match(Lua55GrammarParser::ATTRIB);
    setState(207);
    match(Lua55GrammarParser::ASTRIX_SIGN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeSpecContext ------------------------------------------------------------------

Lua55GrammarParser::ScopeSpecContext::ScopeSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::ScopeSpecContext::GLOBAL() {
  return getToken(Lua55GrammarParser::GLOBAL, 0);
}

tree::TerminalNode* Lua55GrammarParser::ScopeSpecContext::LOCAL() {
  return getToken(Lua55GrammarParser::LOCAL, 0);
}


size_t Lua55GrammarParser::ScopeSpecContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleScopeSpec;
}

void Lua55GrammarParser::ScopeSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScopeSpec(this);
}

void Lua55GrammarParser::ScopeSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScopeSpec(this);
}

Lua55GrammarParser::ScopeSpecContext* Lua55GrammarParser::scopeSpec() {
  ScopeSpecContext *_localctx = _tracker.createInstance<ScopeSpecContext>(_ctx, getState());
  enterRule(_localctx, 22, Lua55GrammarParser::RuleScopeSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    _la = _input->LA(1);
    if (!(_la == Lua55GrammarParser::LOCAL

    || _la == Lua55GrammarParser::GLOBAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncdefStatementContext ------------------------------------------------------------------

Lua55GrammarParser::FuncdefStatementContext::FuncdefStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::DefaultFuncdefStatementContext* Lua55GrammarParser::FuncdefStatementContext::defaultFuncdefStatement() {
  return getRuleContext<Lua55GrammarParser::DefaultFuncdefStatementContext>(0);
}

Lua55GrammarParser::ScopedFuncdefStatementContext* Lua55GrammarParser::FuncdefStatementContext::scopedFuncdefStatement() {
  return getRuleContext<Lua55GrammarParser::ScopedFuncdefStatementContext>(0);
}


size_t Lua55GrammarParser::FuncdefStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleFuncdefStatement;
}

void Lua55GrammarParser::FuncdefStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncdefStatement(this);
}

void Lua55GrammarParser::FuncdefStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncdefStatement(this);
}

Lua55GrammarParser::FuncdefStatementContext* Lua55GrammarParser::funcdefStatement() {
  FuncdefStatementContext *_localctx = _tracker.createInstance<FuncdefStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, Lua55GrammarParser::RuleFuncdefStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(213);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::FUNCTION: {
        enterOuterAlt(_localctx, 1);
        setState(211);
        defaultFuncdefStatement();
        break;
      }

      case Lua55GrammarParser::LOCAL:
      case Lua55GrammarParser::GLOBAL: {
        enterOuterAlt(_localctx, 2);
        setState(212);
        scopedFuncdefStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultFuncdefStatementContext ------------------------------------------------------------------

Lua55GrammarParser::DefaultFuncdefStatementContext::DefaultFuncdefStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::DefaultFuncdefStatementContext::FUNCTION() {
  return getToken(Lua55GrammarParser::FUNCTION, 0);
}

Lua55GrammarParser::FuncnameContext* Lua55GrammarParser::DefaultFuncdefStatementContext::funcname() {
  return getRuleContext<Lua55GrammarParser::FuncnameContext>(0);
}

Lua55GrammarParser::FuncbodyContext* Lua55GrammarParser::DefaultFuncdefStatementContext::funcbody() {
  return getRuleContext<Lua55GrammarParser::FuncbodyContext>(0);
}


size_t Lua55GrammarParser::DefaultFuncdefStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleDefaultFuncdefStatement;
}

void Lua55GrammarParser::DefaultFuncdefStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultFuncdefStatement(this);
}

void Lua55GrammarParser::DefaultFuncdefStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultFuncdefStatement(this);
}

Lua55GrammarParser::DefaultFuncdefStatementContext* Lua55GrammarParser::defaultFuncdefStatement() {
  DefaultFuncdefStatementContext *_localctx = _tracker.createInstance<DefaultFuncdefStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, Lua55GrammarParser::RuleDefaultFuncdefStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
    match(Lua55GrammarParser::FUNCTION);
    setState(216);
    funcname();
    setState(217);
    funcbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopedFuncdefStatementContext ------------------------------------------------------------------

Lua55GrammarParser::ScopedFuncdefStatementContext::ScopedFuncdefStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::ScopeSpecContext* Lua55GrammarParser::ScopedFuncdefStatementContext::scopeSpec() {
  return getRuleContext<Lua55GrammarParser::ScopeSpecContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::ScopedFuncdefStatementContext::FUNCTION() {
  return getToken(Lua55GrammarParser::FUNCTION, 0);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::ScopedFuncdefStatementContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}

Lua55GrammarParser::FuncbodyContext* Lua55GrammarParser::ScopedFuncdefStatementContext::funcbody() {
  return getRuleContext<Lua55GrammarParser::FuncbodyContext>(0);
}


size_t Lua55GrammarParser::ScopedFuncdefStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleScopedFuncdefStatement;
}

void Lua55GrammarParser::ScopedFuncdefStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScopedFuncdefStatement(this);
}

void Lua55GrammarParser::ScopedFuncdefStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScopedFuncdefStatement(this);
}

Lua55GrammarParser::ScopedFuncdefStatementContext* Lua55GrammarParser::scopedFuncdefStatement() {
  ScopedFuncdefStatementContext *_localctx = _tracker.createInstance<ScopedFuncdefStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, Lua55GrammarParser::RuleScopedFuncdefStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    scopeSpec();
    setState(220);
    match(Lua55GrammarParser::FUNCTION);
    setState(221);
    name();
    setState(222);
    funcbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncnameContext ------------------------------------------------------------------

Lua55GrammarParser::FuncnameContext::FuncnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::NamespecContext* Lua55GrammarParser::FuncnameContext::namespec() {
  return getRuleContext<Lua55GrammarParser::NamespecContext>(0);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::FuncnameContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}


size_t Lua55GrammarParser::FuncnameContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleFuncname;
}

void Lua55GrammarParser::FuncnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncname(this);
}

void Lua55GrammarParser::FuncnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncname(this);
}

Lua55GrammarParser::FuncnameContext* Lua55GrammarParser::funcname() {
  FuncnameContext *_localctx = _tracker.createInstance<FuncnameContext>(_ctx, getState());
  enterRule(_localctx, 30, Lua55GrammarParser::RuleFuncname);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(224);
    namespec();
    setState(227);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__2) {
      setState(225);
      match(Lua55GrammarParser::T__2);
      setState(226);
      name();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespecContext ------------------------------------------------------------------

Lua55GrammarParser::NamespecContext::NamespecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::NameContext *> Lua55GrammarParser::NamespecContext::name() {
  return getRuleContexts<Lua55GrammarParser::NameContext>();
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::NamespecContext::name(size_t i) {
  return getRuleContext<Lua55GrammarParser::NameContext>(i);
}


size_t Lua55GrammarParser::NamespecContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleNamespec;
}

void Lua55GrammarParser::NamespecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespec(this);
}

void Lua55GrammarParser::NamespecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespec(this);
}

Lua55GrammarParser::NamespecContext* Lua55GrammarParser::namespec() {
  NamespecContext *_localctx = _tracker.createInstance<NamespecContext>(_ctx, getState());
  enterRule(_localctx, 32, Lua55GrammarParser::RuleNamespec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    name();
    setState(234);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__3) {
      setState(230);
      match(Lua55GrammarParser::T__3);
      setState(231);
      name();
      setState(236);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncbodyContext ------------------------------------------------------------------

Lua55GrammarParser::FuncbodyContext::FuncbodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::FuncbodyContext::block() {
  return getRuleContext<Lua55GrammarParser::BlockContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::FuncbodyContext::END() {
  return getToken(Lua55GrammarParser::END, 0);
}

Lua55GrammarParser::ParamlistContext* Lua55GrammarParser::FuncbodyContext::paramlist() {
  return getRuleContext<Lua55GrammarParser::ParamlistContext>(0);
}


size_t Lua55GrammarParser::FuncbodyContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleFuncbody;
}

void Lua55GrammarParser::FuncbodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncbody(this);
}

void Lua55GrammarParser::FuncbodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncbody(this);
}

Lua55GrammarParser::FuncbodyContext* Lua55GrammarParser::funcbody() {
  FuncbodyContext *_localctx = _tracker.createInstance<FuncbodyContext>(_ctx, getState());
  enterRule(_localctx, 34, Lua55GrammarParser::RuleFuncbody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    match(Lua55GrammarParser::T__4);
    setState(239);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__15

    || _la == Lua55GrammarParser::ID) {
      setState(238);
      paramlist();
    }
    setState(241);
    match(Lua55GrammarParser::T__5);
    setState(242);
    block();
    setState(243);
    match(Lua55GrammarParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

Lua55GrammarParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::WhileStatementContext::WHILE() {
  return getToken(Lua55GrammarParser::WHILE, 0);
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::WhileStatementContext::exp() {
  return getRuleContext<Lua55GrammarParser::ExpContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::WhileStatementContext::DO() {
  return getToken(Lua55GrammarParser::DO, 0);
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::WhileStatementContext::block() {
  return getRuleContext<Lua55GrammarParser::BlockContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::WhileStatementContext::END() {
  return getToken(Lua55GrammarParser::END, 0);
}


size_t Lua55GrammarParser::WhileStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleWhileStatement;
}

void Lua55GrammarParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void Lua55GrammarParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}

Lua55GrammarParser::WhileStatementContext* Lua55GrammarParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 36, Lua55GrammarParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(Lua55GrammarParser::WHILE);
    setState(246);
    exp();
    setState(247);
    match(Lua55GrammarParser::DO);
    setState(248);
    block();
    setState(249);
    match(Lua55GrammarParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepeatStatementContext ------------------------------------------------------------------

Lua55GrammarParser::RepeatStatementContext::RepeatStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::RepeatStatementContext::REPEAT() {
  return getToken(Lua55GrammarParser::REPEAT, 0);
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::RepeatStatementContext::block() {
  return getRuleContext<Lua55GrammarParser::BlockContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::RepeatStatementContext::UNTIL() {
  return getToken(Lua55GrammarParser::UNTIL, 0);
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::RepeatStatementContext::exp() {
  return getRuleContext<Lua55GrammarParser::ExpContext>(0);
}


size_t Lua55GrammarParser::RepeatStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleRepeatStatement;
}

void Lua55GrammarParser::RepeatStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeatStatement(this);
}

void Lua55GrammarParser::RepeatStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeatStatement(this);
}

Lua55GrammarParser::RepeatStatementContext* Lua55GrammarParser::repeatStatement() {
  RepeatStatementContext *_localctx = _tracker.createInstance<RepeatStatementContext>(_ctx, getState());
  enterRule(_localctx, 38, Lua55GrammarParser::RuleRepeatStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(251);
    match(Lua55GrammarParser::REPEAT);
    setState(252);
    block();
    setState(253);
    match(Lua55GrammarParser::UNTIL);
    setState(254);
    exp();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

Lua55GrammarParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::IfStatementContext::IF() {
  return getToken(Lua55GrammarParser::IF, 0);
}

std::vector<Lua55GrammarParser::ExpContext *> Lua55GrammarParser::IfStatementContext::exp() {
  return getRuleContexts<Lua55GrammarParser::ExpContext>();
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::IfStatementContext::exp(size_t i) {
  return getRuleContext<Lua55GrammarParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> Lua55GrammarParser::IfStatementContext::THEN() {
  return getTokens(Lua55GrammarParser::THEN);
}

tree::TerminalNode* Lua55GrammarParser::IfStatementContext::THEN(size_t i) {
  return getToken(Lua55GrammarParser::THEN, i);
}

std::vector<Lua55GrammarParser::BlockContext *> Lua55GrammarParser::IfStatementContext::block() {
  return getRuleContexts<Lua55GrammarParser::BlockContext>();
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::IfStatementContext::block(size_t i) {
  return getRuleContext<Lua55GrammarParser::BlockContext>(i);
}

tree::TerminalNode* Lua55GrammarParser::IfStatementContext::END() {
  return getToken(Lua55GrammarParser::END, 0);
}

std::vector<tree::TerminalNode *> Lua55GrammarParser::IfStatementContext::ELSEIF() {
  return getTokens(Lua55GrammarParser::ELSEIF);
}

tree::TerminalNode* Lua55GrammarParser::IfStatementContext::ELSEIF(size_t i) {
  return getToken(Lua55GrammarParser::ELSEIF, i);
}

tree::TerminalNode* Lua55GrammarParser::IfStatementContext::ELSE() {
  return getToken(Lua55GrammarParser::ELSE, 0);
}


size_t Lua55GrammarParser::IfStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleIfStatement;
}

void Lua55GrammarParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void Lua55GrammarParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

Lua55GrammarParser::IfStatementContext* Lua55GrammarParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 40, Lua55GrammarParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    match(Lua55GrammarParser::IF);
    setState(257);
    exp();
    setState(258);
    match(Lua55GrammarParser::THEN);
    setState(259);
    block();
    setState(267);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::ELSEIF) {
      setState(260);
      match(Lua55GrammarParser::ELSEIF);
      setState(261);
      exp();
      setState(262);
      match(Lua55GrammarParser::THEN);
      setState(263);
      block();
      setState(269);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(272);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::ELSE) {
      setState(270);
      match(Lua55GrammarParser::ELSE);
      setState(271);
      block();
    }
    setState(274);
    match(Lua55GrammarParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericForStatementContext ------------------------------------------------------------------

Lua55GrammarParser::NumericForStatementContext::NumericForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::NumericForStatementContext::FOR() {
  return getToken(Lua55GrammarParser::FOR, 0);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::NumericForStatementContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::NumericForStatementContext::EQ_SIGN() {
  return getToken(Lua55GrammarParser::EQ_SIGN, 0);
}

std::vector<Lua55GrammarParser::ExpContext *> Lua55GrammarParser::NumericForStatementContext::exp() {
  return getRuleContexts<Lua55GrammarParser::ExpContext>();
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::NumericForStatementContext::exp(size_t i) {
  return getRuleContext<Lua55GrammarParser::ExpContext>(i);
}

tree::TerminalNode* Lua55GrammarParser::NumericForStatementContext::DO() {
  return getToken(Lua55GrammarParser::DO, 0);
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::NumericForStatementContext::block() {
  return getRuleContext<Lua55GrammarParser::BlockContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::NumericForStatementContext::END() {
  return getToken(Lua55GrammarParser::END, 0);
}


size_t Lua55GrammarParser::NumericForStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleNumericForStatement;
}

void Lua55GrammarParser::NumericForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericForStatement(this);
}

void Lua55GrammarParser::NumericForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericForStatement(this);
}

Lua55GrammarParser::NumericForStatementContext* Lua55GrammarParser::numericForStatement() {
  NumericForStatementContext *_localctx = _tracker.createInstance<NumericForStatementContext>(_ctx, getState());
  enterRule(_localctx, 42, Lua55GrammarParser::RuleNumericForStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    match(Lua55GrammarParser::FOR);
    setState(277);
    name();
    setState(278);
    match(Lua55GrammarParser::EQ_SIGN);
    setState(279);
    exp();
    setState(280);
    match(Lua55GrammarParser::T__1);
    setState(281);
    exp();
    setState(284);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__1) {
      setState(282);
      match(Lua55GrammarParser::T__1);
      setState(283);
      exp();
    }
    setState(286);
    match(Lua55GrammarParser::DO);
    setState(287);
    block();
    setState(288);
    match(Lua55GrammarParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericForStatementContext ------------------------------------------------------------------

Lua55GrammarParser::GenericForStatementContext::GenericForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::GenericForStatementContext::FOR() {
  return getToken(Lua55GrammarParser::FOR, 0);
}

Lua55GrammarParser::NamelistContext* Lua55GrammarParser::GenericForStatementContext::namelist() {
  return getRuleContext<Lua55GrammarParser::NamelistContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::GenericForStatementContext::IN() {
  return getToken(Lua55GrammarParser::IN, 0);
}

Lua55GrammarParser::ExplistContext* Lua55GrammarParser::GenericForStatementContext::explist() {
  return getRuleContext<Lua55GrammarParser::ExplistContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::GenericForStatementContext::DO() {
  return getToken(Lua55GrammarParser::DO, 0);
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::GenericForStatementContext::block() {
  return getRuleContext<Lua55GrammarParser::BlockContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::GenericForStatementContext::END() {
  return getToken(Lua55GrammarParser::END, 0);
}


size_t Lua55GrammarParser::GenericForStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleGenericForStatement;
}

void Lua55GrammarParser::GenericForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericForStatement(this);
}

void Lua55GrammarParser::GenericForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericForStatement(this);
}

Lua55GrammarParser::GenericForStatementContext* Lua55GrammarParser::genericForStatement() {
  GenericForStatementContext *_localctx = _tracker.createInstance<GenericForStatementContext>(_ctx, getState());
  enterRule(_localctx, 44, Lua55GrammarParser::RuleGenericForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    match(Lua55GrammarParser::FOR);
    setState(291);
    namelist();
    setState(292);
    match(Lua55GrammarParser::IN);
    setState(293);
    explist();
    setState(294);
    match(Lua55GrammarParser::DO);
    setState(295);
    block();
    setState(296);
    match(Lua55GrammarParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoStatementContext ------------------------------------------------------------------

Lua55GrammarParser::GotoStatementContext::GotoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::GotoStatementContext::GOTO() {
  return getToken(Lua55GrammarParser::GOTO, 0);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::GotoStatementContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}


size_t Lua55GrammarParser::GotoStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleGotoStatement;
}

void Lua55GrammarParser::GotoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGotoStatement(this);
}

void Lua55GrammarParser::GotoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGotoStatement(this);
}

Lua55GrammarParser::GotoStatementContext* Lua55GrammarParser::gotoStatement() {
  GotoStatementContext *_localctx = _tracker.createInstance<GotoStatementContext>(_ctx, getState());
  enterRule(_localctx, 46, Lua55GrammarParser::RuleGotoStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    match(Lua55GrammarParser::GOTO);
    setState(299);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelStatementContext ------------------------------------------------------------------

Lua55GrammarParser::LabelStatementContext::LabelStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::LabelStatementContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}


size_t Lua55GrammarParser::LabelStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleLabelStatement;
}

void Lua55GrammarParser::LabelStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabelStatement(this);
}

void Lua55GrammarParser::LabelStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabelStatement(this);
}

Lua55GrammarParser::LabelStatementContext* Lua55GrammarParser::labelStatement() {
  LabelStatementContext *_localctx = _tracker.createInstance<LabelStatementContext>(_ctx, getState());
  enterRule(_localctx, 48, Lua55GrammarParser::RuleLabelStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(301);
    match(Lua55GrammarParser::T__6);
    setState(302);
    name();
    setState(303);
    match(Lua55GrammarParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

Lua55GrammarParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::BreakStatementContext::BREAK() {
  return getToken(Lua55GrammarParser::BREAK, 0);
}


size_t Lua55GrammarParser::BreakStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleBreakStatement;
}

void Lua55GrammarParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}

void Lua55GrammarParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}

Lua55GrammarParser::BreakStatementContext* Lua55GrammarParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 50, Lua55GrammarParser::RuleBreakStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    match(Lua55GrammarParser::BREAK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

Lua55GrammarParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::ReturnStatementContext::RETURN() {
  return getToken(Lua55GrammarParser::RETURN, 0);
}

Lua55GrammarParser::ExplistContext* Lua55GrammarParser::ReturnStatementContext::explist() {
  return getRuleContext<Lua55GrammarParser::ExplistContext>(0);
}


size_t Lua55GrammarParser::ReturnStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleReturnStatement;
}

void Lua55GrammarParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void Lua55GrammarParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}

Lua55GrammarParser::ReturnStatementContext* Lua55GrammarParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 52, Lua55GrammarParser::RuleReturnStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    match(Lua55GrammarParser::RETURN);
    setState(309);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 5) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 5)) & 801077852438233097) != 0)) {
      setState(308);
      explist();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncCallStatementContext ------------------------------------------------------------------

Lua55GrammarParser::FuncCallStatementContext::FuncCallStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::FuncCallContext* Lua55GrammarParser::FuncCallStatementContext::funcCall() {
  return getRuleContext<Lua55GrammarParser::FuncCallContext>(0);
}


size_t Lua55GrammarParser::FuncCallStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleFuncCallStatement;
}

void Lua55GrammarParser::FuncCallStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCallStatement(this);
}

void Lua55GrammarParser::FuncCallStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCallStatement(this);
}

Lua55GrammarParser::FuncCallStatementContext* Lua55GrammarParser::funcCallStatement() {
  FuncCallStatementContext *_localctx = _tracker.createInstance<FuncCallStatementContext>(_ctx, getState());
  enterRule(_localctx, 54, Lua55GrammarParser::RuleFuncCallStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    funcCall();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncAnonContext ------------------------------------------------------------------

Lua55GrammarParser::FuncAnonContext::FuncAnonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::FuncAnonContext::FUNCTION() {
  return getToken(Lua55GrammarParser::FUNCTION, 0);
}

Lua55GrammarParser::FuncbodyContext* Lua55GrammarParser::FuncAnonContext::funcbody() {
  return getRuleContext<Lua55GrammarParser::FuncbodyContext>(0);
}


size_t Lua55GrammarParser::FuncAnonContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleFuncAnon;
}

void Lua55GrammarParser::FuncAnonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncAnon(this);
}

void Lua55GrammarParser::FuncAnonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncAnon(this);
}

Lua55GrammarParser::FuncAnonContext* Lua55GrammarParser::funcAnon() {
  FuncAnonContext *_localctx = _tracker.createInstance<FuncAnonContext>(_ctx, getState());
  enterRule(_localctx, 56, Lua55GrammarParser::RuleFuncAnon);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    match(Lua55GrammarParser::FUNCTION);
    setState(314);
    funcbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableConstructorContext ------------------------------------------------------------------

Lua55GrammarParser::TableConstructorContext::TableConstructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::FieldlistContext* Lua55GrammarParser::TableConstructorContext::fieldlist() {
  return getRuleContext<Lua55GrammarParser::FieldlistContext>(0);
}


size_t Lua55GrammarParser::TableConstructorContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleTableConstructor;
}

void Lua55GrammarParser::TableConstructorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableConstructor(this);
}

void Lua55GrammarParser::TableConstructorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableConstructor(this);
}

Lua55GrammarParser::TableConstructorContext* Lua55GrammarParser::tableConstructor() {
  TableConstructorContext *_localctx = _tracker.createInstance<TableConstructorContext>(_ctx, getState());
  enterRule(_localctx, 58, Lua55GrammarParser::RuleTableConstructor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(322);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(316);
      match(Lua55GrammarParser::T__7);
      setState(317);
      fieldlist();
      setState(318);
      match(Lua55GrammarParser::T__8);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(320);
      match(Lua55GrammarParser::T__7);
      setState(321);
      match(Lua55GrammarParser::T__8);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

Lua55GrammarParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::LiteralContext* Lua55GrammarParser::ExpContext::literal() {
  return getRuleContext<Lua55GrammarParser::LiteralContext>(0);
}

Lua55GrammarParser::FuncAnonContext* Lua55GrammarParser::ExpContext::funcAnon() {
  return getRuleContext<Lua55GrammarParser::FuncAnonContext>(0);
}

Lua55GrammarParser::PrefixexpContext* Lua55GrammarParser::ExpContext::prefixexp() {
  return getRuleContext<Lua55GrammarParser::PrefixexpContext>(0);
}

Lua55GrammarParser::TableConstructorContext* Lua55GrammarParser::ExpContext::tableConstructor() {
  return getRuleContext<Lua55GrammarParser::TableConstructorContext>(0);
}

Lua55GrammarParser::OpExpContext* Lua55GrammarParser::ExpContext::opExp() {
  return getRuleContext<Lua55GrammarParser::OpExpContext>(0);
}


size_t Lua55GrammarParser::ExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleExp;
}

void Lua55GrammarParser::ExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp(this);
}

void Lua55GrammarParser::ExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp(this);
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::exp() {
  ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, getState());
  enterRule(_localctx, 60, Lua55GrammarParser::RuleExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(329);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(324);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(325);
      funcAnon();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(326);
      prefixexp();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(327);
      tableConstructor();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(328);
      opExp();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpExpContext ------------------------------------------------------------------

Lua55GrammarParser::OpExpContext::OpExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::OrExpContext* Lua55GrammarParser::OpExpContext::orExp() {
  return getRuleContext<Lua55GrammarParser::OrExpContext>(0);
}


size_t Lua55GrammarParser::OpExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleOpExp;
}

void Lua55GrammarParser::OpExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpExp(this);
}

void Lua55GrammarParser::OpExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpExp(this);
}

Lua55GrammarParser::OpExpContext* Lua55GrammarParser::opExp() {
  OpExpContext *_localctx = _tracker.createInstance<OpExpContext>(_ctx, getState());
  enterRule(_localctx, 62, Lua55GrammarParser::RuleOpExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    orExp();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrExpContext ------------------------------------------------------------------

Lua55GrammarParser::OrExpContext::OrExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::AndExpContext *> Lua55GrammarParser::OrExpContext::andExp() {
  return getRuleContexts<Lua55GrammarParser::AndExpContext>();
}

Lua55GrammarParser::AndExpContext* Lua55GrammarParser::OrExpContext::andExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::AndExpContext>(i);
}

std::vector<tree::TerminalNode *> Lua55GrammarParser::OrExpContext::OR() {
  return getTokens(Lua55GrammarParser::OR);
}

tree::TerminalNode* Lua55GrammarParser::OrExpContext::OR(size_t i) {
  return getToken(Lua55GrammarParser::OR, i);
}


size_t Lua55GrammarParser::OrExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleOrExp;
}

void Lua55GrammarParser::OrExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrExp(this);
}

void Lua55GrammarParser::OrExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrExp(this);
}

Lua55GrammarParser::OrExpContext* Lua55GrammarParser::orExp() {
  OrExpContext *_localctx = _tracker.createInstance<OrExpContext>(_ctx, getState());
  enterRule(_localctx, 64, Lua55GrammarParser::RuleOrExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    andExp();
    setState(338);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::OR) {
      setState(334);
      match(Lua55GrammarParser::OR);
      setState(335);
      andExp();
      setState(340);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndExpContext ------------------------------------------------------------------

Lua55GrammarParser::AndExpContext::AndExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::CompExpContext *> Lua55GrammarParser::AndExpContext::compExp() {
  return getRuleContexts<Lua55GrammarParser::CompExpContext>();
}

Lua55GrammarParser::CompExpContext* Lua55GrammarParser::AndExpContext::compExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::CompExpContext>(i);
}

std::vector<tree::TerminalNode *> Lua55GrammarParser::AndExpContext::AND() {
  return getTokens(Lua55GrammarParser::AND);
}

tree::TerminalNode* Lua55GrammarParser::AndExpContext::AND(size_t i) {
  return getToken(Lua55GrammarParser::AND, i);
}


size_t Lua55GrammarParser::AndExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleAndExp;
}

void Lua55GrammarParser::AndExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndExp(this);
}

void Lua55GrammarParser::AndExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndExp(this);
}

Lua55GrammarParser::AndExpContext* Lua55GrammarParser::andExp() {
  AndExpContext *_localctx = _tracker.createInstance<AndExpContext>(_ctx, getState());
  enterRule(_localctx, 66, Lua55GrammarParser::RuleAndExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(341);
    compExp();
    setState(346);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::AND) {
      setState(342);
      match(Lua55GrammarParser::AND);
      setState(343);
      compExp();
      setState(348);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompExpContext ------------------------------------------------------------------

Lua55GrammarParser::CompExpContext::CompExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::BitorExpContext *> Lua55GrammarParser::CompExpContext::bitorExp() {
  return getRuleContexts<Lua55GrammarParser::BitorExpContext>();
}

Lua55GrammarParser::BitorExpContext* Lua55GrammarParser::CompExpContext::bitorExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::BitorExpContext>(i);
}

Lua55GrammarParser::CompopContext* Lua55GrammarParser::CompExpContext::compop() {
  return getRuleContext<Lua55GrammarParser::CompopContext>(0);
}


size_t Lua55GrammarParser::CompExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleCompExp;
}

void Lua55GrammarParser::CompExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompExp(this);
}

void Lua55GrammarParser::CompExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompExp(this);
}

Lua55GrammarParser::CompExpContext* Lua55GrammarParser::compExp() {
  CompExpContext *_localctx = _tracker.createInstance<CompExpContext>(_ctx, getState());
  enterRule(_localctx, 68, Lua55GrammarParser::RuleCompExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
    bitorExp();
    setState(353);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 59592671232) != 0)) {
      setState(350);
      compop();
      setState(351);
      bitorExp();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitorExpContext ------------------------------------------------------------------

Lua55GrammarParser::BitorExpContext::BitorExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::BitxorExpContext *> Lua55GrammarParser::BitorExpContext::bitxorExp() {
  return getRuleContexts<Lua55GrammarParser::BitxorExpContext>();
}

Lua55GrammarParser::BitxorExpContext* Lua55GrammarParser::BitorExpContext::bitxorExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::BitxorExpContext>(i);
}


size_t Lua55GrammarParser::BitorExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleBitorExp;
}

void Lua55GrammarParser::BitorExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitorExp(this);
}

void Lua55GrammarParser::BitorExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitorExp(this);
}

Lua55GrammarParser::BitorExpContext* Lua55GrammarParser::bitorExp() {
  BitorExpContext *_localctx = _tracker.createInstance<BitorExpContext>(_ctx, getState());
  enterRule(_localctx, 70, Lua55GrammarParser::RuleBitorExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(355);
    bitxorExp();
    setState(360);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__9) {
      setState(356);
      match(Lua55GrammarParser::T__9);
      setState(357);
      bitxorExp();
      setState(362);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitxorExpContext ------------------------------------------------------------------

Lua55GrammarParser::BitxorExpContext::BitxorExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::BitandExpContext *> Lua55GrammarParser::BitxorExpContext::bitandExp() {
  return getRuleContexts<Lua55GrammarParser::BitandExpContext>();
}

Lua55GrammarParser::BitandExpContext* Lua55GrammarParser::BitxorExpContext::bitandExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::BitandExpContext>(i);
}

std::vector<tree::TerminalNode *> Lua55GrammarParser::BitxorExpContext::TILDA_SIGN() {
  return getTokens(Lua55GrammarParser::TILDA_SIGN);
}

tree::TerminalNode* Lua55GrammarParser::BitxorExpContext::TILDA_SIGN(size_t i) {
  return getToken(Lua55GrammarParser::TILDA_SIGN, i);
}


size_t Lua55GrammarParser::BitxorExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleBitxorExp;
}

void Lua55GrammarParser::BitxorExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitxorExp(this);
}

void Lua55GrammarParser::BitxorExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitxorExp(this);
}

Lua55GrammarParser::BitxorExpContext* Lua55GrammarParser::bitxorExp() {
  BitxorExpContext *_localctx = _tracker.createInstance<BitxorExpContext>(_ctx, getState());
  enterRule(_localctx, 72, Lua55GrammarParser::RuleBitxorExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(363);
    bitandExp();
    setState(368);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::TILDA_SIGN) {
      setState(364);
      match(Lua55GrammarParser::TILDA_SIGN);
      setState(365);
      bitandExp();
      setState(370);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitandExpContext ------------------------------------------------------------------

Lua55GrammarParser::BitandExpContext::BitandExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::ShiftExpContext *> Lua55GrammarParser::BitandExpContext::shiftExp() {
  return getRuleContexts<Lua55GrammarParser::ShiftExpContext>();
}

Lua55GrammarParser::ShiftExpContext* Lua55GrammarParser::BitandExpContext::shiftExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::ShiftExpContext>(i);
}


size_t Lua55GrammarParser::BitandExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleBitandExp;
}

void Lua55GrammarParser::BitandExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitandExp(this);
}

void Lua55GrammarParser::BitandExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitandExp(this);
}

Lua55GrammarParser::BitandExpContext* Lua55GrammarParser::bitandExp() {
  BitandExpContext *_localctx = _tracker.createInstance<BitandExpContext>(_ctx, getState());
  enterRule(_localctx, 74, Lua55GrammarParser::RuleBitandExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(371);
    shiftExp();
    setState(376);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__10) {
      setState(372);
      match(Lua55GrammarParser::T__10);
      setState(373);
      shiftExp();
      setState(378);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftExpContext ------------------------------------------------------------------

Lua55GrammarParser::ShiftExpContext::ShiftExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::ConcatExpContext *> Lua55GrammarParser::ShiftExpContext::concatExp() {
  return getRuleContexts<Lua55GrammarParser::ConcatExpContext>();
}

Lua55GrammarParser::ConcatExpContext* Lua55GrammarParser::ShiftExpContext::concatExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::ConcatExpContext>(i);
}

std::vector<Lua55GrammarParser::ShiftopContext *> Lua55GrammarParser::ShiftExpContext::shiftop() {
  return getRuleContexts<Lua55GrammarParser::ShiftopContext>();
}

Lua55GrammarParser::ShiftopContext* Lua55GrammarParser::ShiftExpContext::shiftop(size_t i) {
  return getRuleContext<Lua55GrammarParser::ShiftopContext>(i);
}


size_t Lua55GrammarParser::ShiftExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleShiftExp;
}

void Lua55GrammarParser::ShiftExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftExp(this);
}

void Lua55GrammarParser::ShiftExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftExp(this);
}

Lua55GrammarParser::ShiftExpContext* Lua55GrammarParser::shiftExp() {
  ShiftExpContext *_localctx = _tracker.createInstance<ShiftExpContext>(_ctx, getState());
  enterRule(_localctx, 76, Lua55GrammarParser::RuleShiftExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(379);
    concatExp();
    setState(385);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::SHLEFT_SIGN

    || _la == Lua55GrammarParser::SHRIGHT_SIGN) {
      setState(380);
      shiftop();
      setState(381);
      concatExp();
      setState(387);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConcatExpContext ------------------------------------------------------------------

Lua55GrammarParser::ConcatExpContext::ConcatExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::PlusExpContext *> Lua55GrammarParser::ConcatExpContext::plusExp() {
  return getRuleContexts<Lua55GrammarParser::PlusExpContext>();
}

Lua55GrammarParser::PlusExpContext* Lua55GrammarParser::ConcatExpContext::plusExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::PlusExpContext>(i);
}


size_t Lua55GrammarParser::ConcatExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleConcatExp;
}

void Lua55GrammarParser::ConcatExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConcatExp(this);
}

void Lua55GrammarParser::ConcatExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConcatExp(this);
}

Lua55GrammarParser::ConcatExpContext* Lua55GrammarParser::concatExp() {
  ConcatExpContext *_localctx = _tracker.createInstance<ConcatExpContext>(_ctx, getState());
  enterRule(_localctx, 78, Lua55GrammarParser::RuleConcatExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    plusExp();
    setState(393);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__11) {
      setState(389);
      match(Lua55GrammarParser::T__11);
      setState(390);
      plusExp();
      setState(395);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlusExpContext ------------------------------------------------------------------

Lua55GrammarParser::PlusExpContext::PlusExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::MulExpContext *> Lua55GrammarParser::PlusExpContext::mulExp() {
  return getRuleContexts<Lua55GrammarParser::MulExpContext>();
}

Lua55GrammarParser::MulExpContext* Lua55GrammarParser::PlusExpContext::mulExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::MulExpContext>(i);
}

std::vector<Lua55GrammarParser::PlusopContext *> Lua55GrammarParser::PlusExpContext::plusop() {
  return getRuleContexts<Lua55GrammarParser::PlusopContext>();
}

Lua55GrammarParser::PlusopContext* Lua55GrammarParser::PlusExpContext::plusop(size_t i) {
  return getRuleContext<Lua55GrammarParser::PlusopContext>(i);
}


size_t Lua55GrammarParser::PlusExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RulePlusExp;
}

void Lua55GrammarParser::PlusExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusExp(this);
}

void Lua55GrammarParser::PlusExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusExp(this);
}

Lua55GrammarParser::PlusExpContext* Lua55GrammarParser::plusExp() {
  PlusExpContext *_localctx = _tracker.createInstance<PlusExpContext>(_ctx, getState());
  enterRule(_localctx, 80, Lua55GrammarParser::RulePlusExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(396);
    mulExp();
    setState(402);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::PLUS_SIGN

    || _la == Lua55GrammarParser::MINUS_SIGN) {
      setState(397);
      plusop();
      setState(398);
      mulExp();
      setState(404);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulExpContext ------------------------------------------------------------------

Lua55GrammarParser::MulExpContext::MulExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::UnaryExpContext *> Lua55GrammarParser::MulExpContext::unaryExp() {
  return getRuleContexts<Lua55GrammarParser::UnaryExpContext>();
}

Lua55GrammarParser::UnaryExpContext* Lua55GrammarParser::MulExpContext::unaryExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::UnaryExpContext>(i);
}

std::vector<Lua55GrammarParser::MulopContext *> Lua55GrammarParser::MulExpContext::mulop() {
  return getRuleContexts<Lua55GrammarParser::MulopContext>();
}

Lua55GrammarParser::MulopContext* Lua55GrammarParser::MulExpContext::mulop(size_t i) {
  return getRuleContext<Lua55GrammarParser::MulopContext>(i);
}


size_t Lua55GrammarParser::MulExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleMulExp;
}

void Lua55GrammarParser::MulExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulExp(this);
}

void Lua55GrammarParser::MulExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulExp(this);
}

Lua55GrammarParser::MulExpContext* Lua55GrammarParser::mulExp() {
  MulExpContext *_localctx = _tracker.createInstance<MulExpContext>(_ctx, getState());
  enterRule(_localctx, 82, Lua55GrammarParser::RuleMulExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    unaryExp();
    setState(411);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 125829120) != 0)) {
      setState(406);
      mulop();
      setState(407);
      unaryExp();
      setState(413);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpContext ------------------------------------------------------------------

Lua55GrammarParser::UnaryExpContext::UnaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::PowExpContext* Lua55GrammarParser::UnaryExpContext::powExp() {
  return getRuleContext<Lua55GrammarParser::PowExpContext>(0);
}

Lua55GrammarParser::UnopContext* Lua55GrammarParser::UnaryExpContext::unop() {
  return getRuleContext<Lua55GrammarParser::UnopContext>(0);
}

Lua55GrammarParser::UnaryExpContext* Lua55GrammarParser::UnaryExpContext::unaryExp() {
  return getRuleContext<Lua55GrammarParser::UnaryExpContext>(0);
}


size_t Lua55GrammarParser::UnaryExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleUnaryExp;
}

void Lua55GrammarParser::UnaryExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExp(this);
}

void Lua55GrammarParser::UnaryExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExp(this);
}

Lua55GrammarParser::UnaryExpContext* Lua55GrammarParser::unaryExp() {
  UnaryExpContext *_localctx = _tracker.createInstance<UnaryExpContext>(_ctx, getState());
  enterRule(_localctx, 84, Lua55GrammarParser::RuleUnaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(418);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::T__4:
      case Lua55GrammarParser::T__7:
      case Lua55GrammarParser::NIL:
      case Lua55GrammarParser::TRUE:
      case Lua55GrammarParser::FALSE:
      case Lua55GrammarParser::NUMBER:
      case Lua55GrammarParser::STRING:
      case Lua55GrammarParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(414);
        powExp();
        break;
      }

      case Lua55GrammarParser::MINUS_SIGN:
      case Lua55GrammarParser::TILDA_SIGN:
      case Lua55GrammarParser::HASH_SIGN:
      case Lua55GrammarParser::NOT: {
        enterOuterAlt(_localctx, 2);
        setState(415);
        unop();
        setState(416);
        unaryExp();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PowExpContext ------------------------------------------------------------------

Lua55GrammarParser::PowExpContext::PowExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::OpStartExpContext* Lua55GrammarParser::PowExpContext::opStartExp() {
  return getRuleContext<Lua55GrammarParser::OpStartExpContext>(0);
}

Lua55GrammarParser::PowExpContext* Lua55GrammarParser::PowExpContext::powExp() {
  return getRuleContext<Lua55GrammarParser::PowExpContext>(0);
}


size_t Lua55GrammarParser::PowExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RulePowExp;
}

void Lua55GrammarParser::PowExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowExp(this);
}

void Lua55GrammarParser::PowExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowExp(this);
}

Lua55GrammarParser::PowExpContext* Lua55GrammarParser::powExp() {
  PowExpContext *_localctx = _tracker.createInstance<PowExpContext>(_ctx, getState());
  enterRule(_localctx, 86, Lua55GrammarParser::RulePowExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(420);
    opStartExp();
    setState(423);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__12) {
      setState(421);
      match(Lua55GrammarParser::T__12);
      setState(422);
      powExp();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpStartExpContext ------------------------------------------------------------------

Lua55GrammarParser::OpStartExpContext::OpStartExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::PrefixexpContext* Lua55GrammarParser::OpStartExpContext::prefixexp() {
  return getRuleContext<Lua55GrammarParser::PrefixexpContext>(0);
}

Lua55GrammarParser::LiteralContext* Lua55GrammarParser::OpStartExpContext::literal() {
  return getRuleContext<Lua55GrammarParser::LiteralContext>(0);
}

Lua55GrammarParser::TableConstructorContext* Lua55GrammarParser::OpStartExpContext::tableConstructor() {
  return getRuleContext<Lua55GrammarParser::TableConstructorContext>(0);
}


size_t Lua55GrammarParser::OpStartExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleOpStartExp;
}

void Lua55GrammarParser::OpStartExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpStartExp(this);
}

void Lua55GrammarParser::OpStartExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpStartExp(this);
}

Lua55GrammarParser::OpStartExpContext* Lua55GrammarParser::opStartExp() {
  OpStartExpContext *_localctx = _tracker.createInstance<OpStartExpContext>(_ctx, getState());
  enterRule(_localctx, 88, Lua55GrammarParser::RuleOpStartExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(428);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::T__4:
      case Lua55GrammarParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(425);
        prefixexp();
        break;
      }

      case Lua55GrammarParser::NIL:
      case Lua55GrammarParser::TRUE:
      case Lua55GrammarParser::FALSE:
      case Lua55GrammarParser::NUMBER:
      case Lua55GrammarParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(426);
        literal();
        break;
      }

      case Lua55GrammarParser::T__7: {
        enterOuterAlt(_localctx, 3);
        setState(427);
        tableConstructor();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

Lua55GrammarParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::LiteralContext::NIL() {
  return getToken(Lua55GrammarParser::NIL, 0);
}

tree::TerminalNode* Lua55GrammarParser::LiteralContext::TRUE() {
  return getToken(Lua55GrammarParser::TRUE, 0);
}

tree::TerminalNode* Lua55GrammarParser::LiteralContext::FALSE() {
  return getToken(Lua55GrammarParser::FALSE, 0);
}

tree::TerminalNode* Lua55GrammarParser::LiteralContext::NUMBER() {
  return getToken(Lua55GrammarParser::NUMBER, 0);
}

tree::TerminalNode* Lua55GrammarParser::LiteralContext::STRING() {
  return getToken(Lua55GrammarParser::STRING, 0);
}


size_t Lua55GrammarParser::LiteralContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleLiteral;
}

void Lua55GrammarParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void Lua55GrammarParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

Lua55GrammarParser::LiteralContext* Lua55GrammarParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 90, Lua55GrammarParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7169730606773829632) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixexpContext ------------------------------------------------------------------

Lua55GrammarParser::PrefixexpContext::PrefixexpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::VarContext* Lua55GrammarParser::PrefixexpContext::var() {
  return getRuleContext<Lua55GrammarParser::VarContext>(0);
}

Lua55GrammarParser::BracketExpContext* Lua55GrammarParser::PrefixexpContext::bracketExp() {
  return getRuleContext<Lua55GrammarParser::BracketExpContext>(0);
}

Lua55GrammarParser::FuncCallContext* Lua55GrammarParser::PrefixexpContext::funcCall() {
  return getRuleContext<Lua55GrammarParser::FuncCallContext>(0);
}


size_t Lua55GrammarParser::PrefixexpContext::getRuleIndex() const {
  return Lua55GrammarParser::RulePrefixexp;
}

void Lua55GrammarParser::PrefixexpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixexp(this);
}

void Lua55GrammarParser::PrefixexpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixexp(this);
}

Lua55GrammarParser::PrefixexpContext* Lua55GrammarParser::prefixexp() {
  PrefixexpContext *_localctx = _tracker.createInstance<PrefixexpContext>(_ctx, getState());
  enterRule(_localctx, 92, Lua55GrammarParser::RulePrefixexp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(435);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(432);
      var();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(433);
      bracketExp();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(434);
      funcCall();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncCallContext ------------------------------------------------------------------

Lua55GrammarParser::FuncCallContext::FuncCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::VarContext* Lua55GrammarParser::FuncCallContext::var() {
  return getRuleContext<Lua55GrammarParser::VarContext>(0);
}

std::vector<Lua55GrammarParser::FuncCall_tailContext *> Lua55GrammarParser::FuncCallContext::funcCall_tail() {
  return getRuleContexts<Lua55GrammarParser::FuncCall_tailContext>();
}

Lua55GrammarParser::FuncCall_tailContext* Lua55GrammarParser::FuncCallContext::funcCall_tail(size_t i) {
  return getRuleContext<Lua55GrammarParser::FuncCall_tailContext>(i);
}

Lua55GrammarParser::BracketExpContext* Lua55GrammarParser::FuncCallContext::bracketExp() {
  return getRuleContext<Lua55GrammarParser::BracketExpContext>(0);
}


size_t Lua55GrammarParser::FuncCallContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleFuncCall;
}

void Lua55GrammarParser::FuncCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCall(this);
}

void Lua55GrammarParser::FuncCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCall(this);
}

Lua55GrammarParser::FuncCallContext* Lua55GrammarParser::funcCall() {
  FuncCallContext *_localctx = _tracker.createInstance<FuncCallContext>(_ctx, getState());
  enterRule(_localctx, 94, Lua55GrammarParser::RuleFuncCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(449);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(437);
      var();
      setState(439); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(438);
                funcCall_tail();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(441); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(443);
      bracketExp();
      setState(445); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(444);
                funcCall_tail();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(447); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncCall_tailContext ------------------------------------------------------------------

Lua55GrammarParser::FuncCall_tailContext::FuncCall_tailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::ArgsContext* Lua55GrammarParser::FuncCall_tailContext::args() {
  return getRuleContext<Lua55GrammarParser::ArgsContext>(0);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::FuncCall_tailContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}


size_t Lua55GrammarParser::FuncCall_tailContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleFuncCall_tail;
}

void Lua55GrammarParser::FuncCall_tailContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCall_tail(this);
}

void Lua55GrammarParser::FuncCall_tailContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCall_tail(this);
}

Lua55GrammarParser::FuncCall_tailContext* Lua55GrammarParser::funcCall_tail() {
  FuncCall_tailContext *_localctx = _tracker.createInstance<FuncCall_tailContext>(_ctx, getState());
  enterRule(_localctx, 96, Lua55GrammarParser::RuleFuncCall_tail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(456);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(451);
        args();
        break;
      }

      case Lua55GrammarParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(452);
        match(Lua55GrammarParser::T__2);
        setState(453);
        name();
        setState(454);
        args();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarContext ------------------------------------------------------------------

Lua55GrammarParser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::VarContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}

std::vector<Lua55GrammarParser::Var_tailContext *> Lua55GrammarParser::VarContext::var_tail() {
  return getRuleContexts<Lua55GrammarParser::Var_tailContext>();
}

Lua55GrammarParser::Var_tailContext* Lua55GrammarParser::VarContext::var_tail(size_t i) {
  return getRuleContext<Lua55GrammarParser::Var_tailContext>(i);
}

Lua55GrammarParser::BracketExpContext* Lua55GrammarParser::VarContext::bracketExp() {
  return getRuleContext<Lua55GrammarParser::BracketExpContext>(0);
}


size_t Lua55GrammarParser::VarContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleVar;
}

void Lua55GrammarParser::VarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar(this);
}

void Lua55GrammarParser::VarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar(this);
}

Lua55GrammarParser::VarContext* Lua55GrammarParser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 98, Lua55GrammarParser::RuleVar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(471);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(458);
        name();
        setState(462);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Lua55GrammarParser::T__3

        || _la == Lua55GrammarParser::T__13) {
          setState(459);
          var_tail();
          setState(464);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case Lua55GrammarParser::T__4: {
        enterOuterAlt(_localctx, 2);
        setState(465);
        bracketExp();
        setState(467); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(466);
          var_tail();
          setState(469); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == Lua55GrammarParser::T__3

        || _la == Lua55GrammarParser::T__13);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BracketExpContext ------------------------------------------------------------------

Lua55GrammarParser::BracketExpContext::BracketExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::BracketExpContext::exp() {
  return getRuleContext<Lua55GrammarParser::ExpContext>(0);
}


size_t Lua55GrammarParser::BracketExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleBracketExp;
}

void Lua55GrammarParser::BracketExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBracketExp(this);
}

void Lua55GrammarParser::BracketExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBracketExp(this);
}

Lua55GrammarParser::BracketExpContext* Lua55GrammarParser::bracketExp() {
  BracketExpContext *_localctx = _tracker.createInstance<BracketExpContext>(_ctx, getState());
  enterRule(_localctx, 100, Lua55GrammarParser::RuleBracketExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(473);
    match(Lua55GrammarParser::T__4);
    setState(474);
    exp();
    setState(475);
    match(Lua55GrammarParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_tailContext ------------------------------------------------------------------

Lua55GrammarParser::Var_tailContext::Var_tailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::Var_tailContext::exp() {
  return getRuleContext<Lua55GrammarParser::ExpContext>(0);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::Var_tailContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}


size_t Lua55GrammarParser::Var_tailContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleVar_tail;
}

void Lua55GrammarParser::Var_tailContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_tail(this);
}

void Lua55GrammarParser::Var_tailContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_tail(this);
}

Lua55GrammarParser::Var_tailContext* Lua55GrammarParser::var_tail() {
  Var_tailContext *_localctx = _tracker.createInstance<Var_tailContext>(_ctx, getState());
  enterRule(_localctx, 102, Lua55GrammarParser::RuleVar_tail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(483);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::T__13: {
        enterOuterAlt(_localctx, 1);
        setState(477);
        match(Lua55GrammarParser::T__13);
        setState(478);
        exp();
        setState(479);
        match(Lua55GrammarParser::T__14);
        break;
      }

      case Lua55GrammarParser::T__3: {
        enterOuterAlt(_localctx, 2);
        setState(481);
        match(Lua55GrammarParser::T__3);
        setState(482);
        name();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

Lua55GrammarParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::NameContext::ID() {
  return getToken(Lua55GrammarParser::ID, 0);
}


size_t Lua55GrammarParser::NameContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleName;
}

void Lua55GrammarParser::NameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterName(this);
}

void Lua55GrammarParser::NameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitName(this);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 104, Lua55GrammarParser::RuleName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(485);
    match(Lua55GrammarParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameattrContext ------------------------------------------------------------------

Lua55GrammarParser::NameattrContext::NameattrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::NameattrContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::NameattrContext::ATTRIB() {
  return getToken(Lua55GrammarParser::ATTRIB, 0);
}


size_t Lua55GrammarParser::NameattrContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleNameattr;
}

void Lua55GrammarParser::NameattrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNameattr(this);
}

void Lua55GrammarParser::NameattrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNameattr(this);
}

Lua55GrammarParser::NameattrContext* Lua55GrammarParser::nameattr() {
  NameattrContext *_localctx = _tracker.createInstance<NameattrContext>(_ctx, getState());
  enterRule(_localctx, 106, Lua55GrammarParser::RuleNameattr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(487);
    name();
    setState(489);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::ATTRIB) {
      setState(488);
      match(Lua55GrammarParser::ATTRIB);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamlistContext ------------------------------------------------------------------

Lua55GrammarParser::ParamlistContext::ParamlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::NamelistContext* Lua55GrammarParser::ParamlistContext::namelist() {
  return getRuleContext<Lua55GrammarParser::NamelistContext>(0);
}

Lua55GrammarParser::VarargContext* Lua55GrammarParser::ParamlistContext::vararg() {
  return getRuleContext<Lua55GrammarParser::VarargContext>(0);
}


size_t Lua55GrammarParser::ParamlistContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleParamlist;
}

void Lua55GrammarParser::ParamlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamlist(this);
}

void Lua55GrammarParser::ParamlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamlist(this);
}

Lua55GrammarParser::ParamlistContext* Lua55GrammarParser::paramlist() {
  ParamlistContext *_localctx = _tracker.createInstance<ParamlistContext>(_ctx, getState());
  enterRule(_localctx, 108, Lua55GrammarParser::RuleParamlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(497);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(491);
        namelist();
        setState(494);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Lua55GrammarParser::T__1) {
          setState(492);
          match(Lua55GrammarParser::T__1);
          setState(493);
          vararg();
        }
        break;
      }

      case Lua55GrammarParser::T__15: {
        enterOuterAlt(_localctx, 2);
        setState(496);
        vararg();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarargContext ------------------------------------------------------------------

Lua55GrammarParser::VarargContext::VarargContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::VarargContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}


size_t Lua55GrammarParser::VarargContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleVararg;
}

void Lua55GrammarParser::VarargContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVararg(this);
}

void Lua55GrammarParser::VarargContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVararg(this);
}

Lua55GrammarParser::VarargContext* Lua55GrammarParser::vararg() {
  VarargContext *_localctx = _tracker.createInstance<VarargContext>(_ctx, getState());
  enterRule(_localctx, 110, Lua55GrammarParser::RuleVararg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(499);
    match(Lua55GrammarParser::T__15);
    setState(501);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::ID) {
      setState(500);
      name();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamelistContext ------------------------------------------------------------------

Lua55GrammarParser::NamelistContext::NamelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::NameContext *> Lua55GrammarParser::NamelistContext::name() {
  return getRuleContexts<Lua55GrammarParser::NameContext>();
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::NamelistContext::name(size_t i) {
  return getRuleContext<Lua55GrammarParser::NameContext>(i);
}


size_t Lua55GrammarParser::NamelistContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleNamelist;
}

void Lua55GrammarParser::NamelistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamelist(this);
}

void Lua55GrammarParser::NamelistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamelist(this);
}

Lua55GrammarParser::NamelistContext* Lua55GrammarParser::namelist() {
  NamelistContext *_localctx = _tracker.createInstance<NamelistContext>(_ctx, getState());
  enterRule(_localctx, 112, Lua55GrammarParser::RuleNamelist);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(503);
    name();
    setState(508);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(504);
        match(Lua55GrammarParser::T__1);
        setState(505);
        name(); 
      }
      setState(510);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

Lua55GrammarParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::ExplistContext* Lua55GrammarParser::ArgsContext::explist() {
  return getRuleContext<Lua55GrammarParser::ExplistContext>(0);
}


size_t Lua55GrammarParser::ArgsContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleArgs;
}

void Lua55GrammarParser::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void Lua55GrammarParser::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}

Lua55GrammarParser::ArgsContext* Lua55GrammarParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 114, Lua55GrammarParser::RuleArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(511);
    match(Lua55GrammarParser::T__4);
    setState(513);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 5) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 5)) & 801077852438233097) != 0)) {
      setState(512);
      explist();
    }
    setState(515);
    match(Lua55GrammarParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldlistContext ------------------------------------------------------------------

Lua55GrammarParser::FieldlistContext::FieldlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::FieldContext *> Lua55GrammarParser::FieldlistContext::field() {
  return getRuleContexts<Lua55GrammarParser::FieldContext>();
}

Lua55GrammarParser::FieldContext* Lua55GrammarParser::FieldlistContext::field(size_t i) {
  return getRuleContext<Lua55GrammarParser::FieldContext>(i);
}

std::vector<tree::TerminalNode *> Lua55GrammarParser::FieldlistContext::FIELD_SEP() {
  return getTokens(Lua55GrammarParser::FIELD_SEP);
}

tree::TerminalNode* Lua55GrammarParser::FieldlistContext::FIELD_SEP(size_t i) {
  return getToken(Lua55GrammarParser::FIELD_SEP, i);
}


size_t Lua55GrammarParser::FieldlistContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleFieldlist;
}

void Lua55GrammarParser::FieldlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldlist(this);
}

void Lua55GrammarParser::FieldlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldlist(this);
}

Lua55GrammarParser::FieldlistContext* Lua55GrammarParser::fieldlist() {
  FieldlistContext *_localctx = _tracker.createInstance<FieldlistContext>(_ctx, getState());
  enterRule(_localctx, 116, Lua55GrammarParser::RuleFieldlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(517);
    field();
    setState(522);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(518);
        match(Lua55GrammarParser::FIELD_SEP);
        setState(519);
        field(); 
      }
      setState(524);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    }
    setState(526);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::FIELD_SEP) {
      setState(525);
      match(Lua55GrammarParser::FIELD_SEP);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

Lua55GrammarParser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::ExpContext *> Lua55GrammarParser::FieldContext::exp() {
  return getRuleContexts<Lua55GrammarParser::ExpContext>();
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::FieldContext::exp(size_t i) {
  return getRuleContext<Lua55GrammarParser::ExpContext>(i);
}

tree::TerminalNode* Lua55GrammarParser::FieldContext::EQ_SIGN() {
  return getToken(Lua55GrammarParser::EQ_SIGN, 0);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::FieldContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}


size_t Lua55GrammarParser::FieldContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleField;
}

void Lua55GrammarParser::FieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField(this);
}

void Lua55GrammarParser::FieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField(this);
}

Lua55GrammarParser::FieldContext* Lua55GrammarParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 118, Lua55GrammarParser::RuleField);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(539);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(528);
      match(Lua55GrammarParser::T__13);
      setState(529);
      exp();
      setState(530);
      match(Lua55GrammarParser::T__14);
      setState(531);
      match(Lua55GrammarParser::EQ_SIGN);
      setState(532);
      exp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(534);
      name();
      setState(535);
      match(Lua55GrammarParser::EQ_SIGN);
      setState(536);
      exp();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(538);
      exp();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnopContext ------------------------------------------------------------------

Lua55GrammarParser::UnopContext::UnopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::UnopContext::NOT() {
  return getToken(Lua55GrammarParser::NOT, 0);
}

tree::TerminalNode* Lua55GrammarParser::UnopContext::HASH_SIGN() {
  return getToken(Lua55GrammarParser::HASH_SIGN, 0);
}

tree::TerminalNode* Lua55GrammarParser::UnopContext::MINUS_SIGN() {
  return getToken(Lua55GrammarParser::MINUS_SIGN, 0);
}

tree::TerminalNode* Lua55GrammarParser::UnopContext::TILDA_SIGN() {
  return getToken(Lua55GrammarParser::TILDA_SIGN, 0);
}


size_t Lua55GrammarParser::UnopContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleUnop;
}

void Lua55GrammarParser::UnopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnop(this);
}

void Lua55GrammarParser::UnopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnop(this);
}

Lua55GrammarParser::UnopContext* Lua55GrammarParser::unop() {
  UnopContext *_localctx = _tracker.createInstance<UnopContext>(_ctx, getState());
  enterRule(_localctx, 120, Lua55GrammarParser::RuleUnop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(541);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2199030595584) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulopContext ------------------------------------------------------------------

Lua55GrammarParser::MulopContext::MulopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::MulopContext::ASTRIX_SIGN() {
  return getToken(Lua55GrammarParser::ASTRIX_SIGN, 0);
}

tree::TerminalNode* Lua55GrammarParser::MulopContext::SLASH_SIGN() {
  return getToken(Lua55GrammarParser::SLASH_SIGN, 0);
}

tree::TerminalNode* Lua55GrammarParser::MulopContext::DOUBLESLASH_SIGN() {
  return getToken(Lua55GrammarParser::DOUBLESLASH_SIGN, 0);
}

tree::TerminalNode* Lua55GrammarParser::MulopContext::PERCENT_SIGN() {
  return getToken(Lua55GrammarParser::PERCENT_SIGN, 0);
}


size_t Lua55GrammarParser::MulopContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleMulop;
}

void Lua55GrammarParser::MulopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulop(this);
}

void Lua55GrammarParser::MulopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulop(this);
}

Lua55GrammarParser::MulopContext* Lua55GrammarParser::mulop() {
  MulopContext *_localctx = _tracker.createInstance<MulopContext>(_ctx, getState());
  enterRule(_localctx, 122, Lua55GrammarParser::RuleMulop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(543);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 125829120) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlusopContext ------------------------------------------------------------------

Lua55GrammarParser::PlusopContext::PlusopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::PlusopContext::PLUS_SIGN() {
  return getToken(Lua55GrammarParser::PLUS_SIGN, 0);
}

tree::TerminalNode* Lua55GrammarParser::PlusopContext::MINUS_SIGN() {
  return getToken(Lua55GrammarParser::MINUS_SIGN, 0);
}


size_t Lua55GrammarParser::PlusopContext::getRuleIndex() const {
  return Lua55GrammarParser::RulePlusop;
}

void Lua55GrammarParser::PlusopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusop(this);
}

void Lua55GrammarParser::PlusopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusop(this);
}

Lua55GrammarParser::PlusopContext* Lua55GrammarParser::plusop() {
  PlusopContext *_localctx = _tracker.createInstance<PlusopContext>(_ctx, getState());
  enterRule(_localctx, 124, Lua55GrammarParser::RulePlusop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(545);
    _la = _input->LA(1);
    if (!(_la == Lua55GrammarParser::PLUS_SIGN

    || _la == Lua55GrammarParser::MINUS_SIGN)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftopContext ------------------------------------------------------------------

Lua55GrammarParser::ShiftopContext::ShiftopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::ShiftopContext::SHLEFT_SIGN() {
  return getToken(Lua55GrammarParser::SHLEFT_SIGN, 0);
}

tree::TerminalNode* Lua55GrammarParser::ShiftopContext::SHRIGHT_SIGN() {
  return getToken(Lua55GrammarParser::SHRIGHT_SIGN, 0);
}


size_t Lua55GrammarParser::ShiftopContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleShiftop;
}

void Lua55GrammarParser::ShiftopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftop(this);
}

void Lua55GrammarParser::ShiftopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftop(this);
}

Lua55GrammarParser::ShiftopContext* Lua55GrammarParser::shiftop() {
  ShiftopContext *_localctx = _tracker.createInstance<ShiftopContext>(_ctx, getState());
  enterRule(_localctx, 126, Lua55GrammarParser::RuleShiftop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(547);
    _la = _input->LA(1);
    if (!(_la == Lua55GrammarParser::SHLEFT_SIGN

    || _la == Lua55GrammarParser::SHRIGHT_SIGN)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompopContext ------------------------------------------------------------------

Lua55GrammarParser::CompopContext::CompopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::CompopContext::TR_OPEN() {
  return getToken(Lua55GrammarParser::TR_OPEN, 0);
}

tree::TerminalNode* Lua55GrammarParser::CompopContext::LEQ_SIGN() {
  return getToken(Lua55GrammarParser::LEQ_SIGN, 0);
}

tree::TerminalNode* Lua55GrammarParser::CompopContext::TR_CLOSE() {
  return getToken(Lua55GrammarParser::TR_CLOSE, 0);
}

tree::TerminalNode* Lua55GrammarParser::CompopContext::GEQ_SIGN() {
  return getToken(Lua55GrammarParser::GEQ_SIGN, 0);
}

tree::TerminalNode* Lua55GrammarParser::CompopContext::DOUBLEEQ_SIGN() {
  return getToken(Lua55GrammarParser::DOUBLEEQ_SIGN, 0);
}

tree::TerminalNode* Lua55GrammarParser::CompopContext::NEQ_SIGN() {
  return getToken(Lua55GrammarParser::NEQ_SIGN, 0);
}


size_t Lua55GrammarParser::CompopContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleCompop;
}

void Lua55GrammarParser::CompopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompop(this);
}

void Lua55GrammarParser::CompopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompop(this);
}

Lua55GrammarParser::CompopContext* Lua55GrammarParser::compop() {
  CompopContext *_localctx = _tracker.createInstance<CompopContext>(_ctx, getState());
  enterRule(_localctx, 128, Lua55GrammarParser::RuleCompop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(549);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 59592671232) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void Lua55GrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  lua55grammarParserInitialize();
#else
  ::antlr4::internal::call_once(lua55grammarParserOnceFlag, lua55grammarParserInitialize);
#endif
}
