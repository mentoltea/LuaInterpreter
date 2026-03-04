grammar Lua55Grammar;

prog: block EOF ;

// chunk ::= block
// block ::= {stat} [retstat]
block: (statement ';'? )* (returnStatement ';'? )?;

statement:
// stat ::=  ‘;’ | 
    emptyStatement
//         do block end | 
    | doBlockStatement
//         varlist ‘=’ explist | 
    | assignmentStatement
//         local attnamelist [‘=’ explist] | 
//         global attnamelist | 
    | declarationStatement
//         global [attrib] ‘*’ 
    | globalAttribStatement
//         function funcname funcbody | 
//         local function Name funcbody | 
//         global function Name funcbody | 
    | funcdefStatement
//         while exp do block end | 
    | whileStatement
//         repeat block until exp | 
    | repeatStatement
//         if exp then block {elseif exp then block} [else block] end | 
    | ifStatement
//         for Name ‘=’ exp ‘,’ exp [‘,’ exp] do block end | 
    | numericForStatement
//         for namelist in explist do block end | 
    | genericForStatement
//         goto Name | 
    | gotoStatement
//         label | 
    | labelStatement
//         break | 
    | breakStatement
//         functioncall | 
    | funcCallStatement
;

emptyStatement: ';';


// attnamelist ::=  [attrib] Name [attrib] {‘,’ Name [attrib]}

// attrib ::= ‘<’ Name ‘>’

// retstat ::= return [explist] [‘;’]

// label ::= ‘::’ Name ‘::’

// funcname ::= Name {‘.’ Name} [‘:’ Name]

// varlist ::= var {‘,’ var}

// var ::=  Name | prefixexp ‘[’ exp ‘]’ | prefixexp ‘.’ Name 

// namelist ::= Name {‘,’ Name}

// explist ::= exp {‘,’ exp}

// exp ::=  nil | false | true | Numeral | LiteralString | ‘...’ | functiondef | 
//         prefixexp | tableconstructor | exp binop exp | unop exp 

// prefixexp ::= var | functioncall | ‘(’ exp ‘)’

// functioncall ::=  prefixexp args | prefixexp ‘:’ Name args 

// args ::=  ‘(’ [explist] ‘)’ | tableconstructor | LiteralString 

// functiondef ::= function funcbody

// funcbody ::= ‘(’ [parlist] ‘)’ block end

// parlist ::= namelist [‘,’ varargparam] | varargparam

// varargparam ::= ‘...’ [Name]

// tableconstructor ::= ‘{’ [fieldlist] ‘}’

// fieldlist ::= field {fieldsep field} [fieldsep]

// field ::= ‘[’ exp ‘]’ ‘=’ exp | Name ‘=’ exp | exp

// fieldsep ::= ‘,’ | ‘;’

// binop ::=  ‘+’ | ‘-’ | ‘*’ | ‘/’ | ‘//’ | ‘^’ | ‘%’ | 
//         ‘&’ | ‘~’ | ‘|’ | ‘>>’ | ‘<<’ | ‘..’ | 
//         ‘<’ | ‘<=’ | ‘>’ | ‘>=’ | ‘==’ | ‘~=’ | 
//         and | or

// unop ::= ‘-’ | not | ‘#’ | ‘~’
doBlockStatement: DO block END ;

assignmentStatement: varlist '=' explist ;

varlist: var (',' var)* ;
explist: exp (',' exp)* ;

declarationStatement: scopeSpec attrib? attnamelist ('=' explist)? ;

globalAttribStatement: GLOBAL attrib '*' ; 

attnamelist: nameattr (',' nameattr)* ;
nameattr: name attrib? ;
attrib: '<' ATTRIBUTES_DEFINED '>' ;

scopeSpec: GLOBAL | LOCAL;

funcdefStatement: 
    defaultFuncdefStatement
    | scopedFuncdefStatement
;
defaultFuncdefStatement: FUNCTION funcname funcbody; 
scopedFuncdefStatement: scopeSpec FUNCTION name funcbody; 

funcname: namespec (':' name)? ;
namespec: name ('.' name)* ;
funcbody: '(' paramlist? ')' block END ;

paramlist: namelist (',' vararg)? | vararg ;
vararg: '...' name? ;
namelist: name (',' name)* ;

whileStatement: WHILE exp DO block END ;
repeatStatement: REPEAT block UNTIL exp ;
ifStatement: IF exp THEN block (ELSEIF exp THEN block)* (ELSE block)? END;
numericForStatement: FOR name '=' exp ',' exp (',' exp)? DO block END;
genericForStatement: FOR namelist IN explist DO block END ;
gotoStatement: GOTO name ;
labelStatement: '::' name '::';
breakStatement: BREAK;
returnStatement: RETURN explist?;

funcCallStatement: funcCall ;


funcAnon: FUNCTION funcbody;

tableConstructor: '{' fieldlist '}' | '{' '}';
fieldlist: field (FIELD_SEP field)* FIELD_SEP? ;
FIELD_SEP: ',' | ';' ;
field:
    '[' exp ']' '=' exp
    | name '=' exp
    | exp
;

exp: 
    literal
    | funcAnon
    | prefixexp
    | tableConstructor
    | opExp
;

opExp: orExp;
orExp: andExp (OR andExp)* ;
andExp: compExp (AND compExp)* ;
compExp: bitorExp (COMPOP bitorExp)? ;
bitorExp: bitxorExp ('|' bitxorExp)* ;
bitxorExp: bitandExp ('~' bitandExp)* ;
bitandExp: shiftExp ('&' shiftExp)* ;
shiftExp: concatExp (SHIFTOP concatExp)* ;
concatExp: plusExp ('..' plusExp)* ;
plusExp: mulExp (PLUSOP mulExp)* ;
mulExp: unaryExp (MULOP unaryExp)* ;
unaryExp: powExp | UNOP unaryExp;
powExp: opStartExp ('^' powExp)? ;

opStartExp: 
    prefixexp
    | literal
    | tableConstructor
;

COMPOP: '<' | '<=' | '>' | '>=' | '==' | '~=' ; 
SHIFTOP: '<<' | '>>' ;
PLUSOP: '+' | '-' ;
MULOP: '*' | '/' | '//' | '%' ;
UNOP: NOT | '#' | '-' | '~' ; 

literal: 
    NIL 
    | TRUE
    | FALSE
    | NUMBER
    | STRING
;

prefixexp: 
    var
    | '(' exp ')'
    | funcCall
;

// get_func()(1,2,3)()
// (objects[69]):new(1,2,3)
//
funcCall: 
    var (funcCall_tail)+
    | '(' exp ')' (funcCall_tail)+
;

funcCall_tail: 
    args
    | ':' name args
;

args: '(' explist? ')' ;

// x
// (obj1 + obj2).field
// (func())["result"]
var: 
    name (var_tail)*
    | '(' exp ')' (var_tail)+
;

var_tail:
    '[' exp ']'
    | '.' name
;

name: ID;
ATTRIBUTES_DEFINED: CONST;


// keywords
DO: 'do';        
END: 'end' ;

AND: 'and' ;      
OR: 'or';
NOT: 'not';       

IF: 'if';
ELSEIF: 'elseif';     
ELSE: 'else';      
THEN: 'then';      

WHILE: 'while';
REPEAT: 'repeat';    
UNTIL: 'until';     
FOR: 'for';       
IN: 'in';        
BREAK: 'break';    

GOTO: 'goto';

RETURN: 'return';    

FUNCTION: 'function';  

NIL: 'nil';       
TRUE: 'true';      
FALSE: 'false';     

LOCAL: 'local';     
GLOBAL: 'global' ;

CONST: 'const' ;

NUMBER: [0-9]+ ('.' [0-9]+)? ;
STRING: '"' ( '\\"' | ~["\r\n] )* '"' ;
UNTERMINATED_STRING: '"' ( '\\"' | ~["\r\n] )* 
    { 
        throw new RuntimeException("Syntax error: unterminated string at line " + getLine());
    }
;

ID: [a-zA-Z_][a-zA-Z0-9_]* ;
WS: [ \t\r\n]+ -> skip;
LINE_COMMENT: '--' ~[\r\n]* -> skip;
BLOCK_COMMENT: '--[[' .*? ']]' -> skip;