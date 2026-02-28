grammar Lua55Grammar;

prog: block EOF ;

block: (statement ';'? )* (returnStatement ';'? )?;

statement: 
    doBlockStatement
    | assignmentStatement
    | declarationStatement
    | globalAttribStatement
    | funcdefStatement
    | whileStatement
    | repeatStatement
    | ifStatement
    | numericForStatement
    | genericForStatement
    | gotoStatement
    | labelStatement
    | breakStatement
    | funcCallStatement
;

doBlockStatement: DO block END ;

assignmentStatement: varlist '=' explist ;

varlist: var (',' var)* ;
explist: exp (',' exp)* ;

declarationStatement: scopeSpec attrib? attnamelist ('=' explist)? ;

globalAttribStatement: GLOBAL attrib '*' ; 

attnamelist: name attrib? (',' name attrib?)* ;
attrib: '<' attributes_defined '>' ;

scopeSpec: GLOBAL | LOCAL;

funcdefStatement: scopeSpec? funcname funcbody ;
funcname: name ('.' name)* (':' name)? ;
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
fieldlist: field (field_sep field)* field_sep? ;
field_sep: ',' | ';' ;
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
compExp: bitorExp (compop bitxorExp)? ;
bitorExp: bitxorExp ('|' bitxorExp)* ;
bitxorExp: bitandExp ('~' bitandExp)* ;
bitandExp: shiftExp ('&' shiftExp)* ;
shiftExp: concatExp (shiftop concatExp)* ;
concatExp: plusExp ('..' plusExp)* ;
plusExp: mulExp (plusop mulExp)* ;
mulExp: unaryExp (mulop unaryExp)* ;
unaryExp: powExp | unop unaryExp;
powExp: opStartExp ('^' powExp)? ;

opStartExp: 
    prefixexp
    | literal
    | tableConstructor
;

compop: '<' | '<=' | '>' | '>=' | '==' | '~=' ; 
shiftop: '<<' | '>>' ;
plusop: '+' | '-' ;
mulop: '*' | '/' | '//' | '%' ;
unop: NOT | '#' | '-' | '~' ; 

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
// (funcs[69]):new(1,2,3)
funcCall: 
    var funcCall_tail
    | '(' exp ')' funcCall_tail
;

funcCall_tail: 
    args funcCall_tail?
    | ':' name args funcCall_tail?
;

args: '(' explist? ')' ;

// x
// (obj1 + obj2).field
// (func())["result"]
var: 
    name var_tail?
    | '(' exp ')' var_tail
;

var_tail:
    '[' exp ']' var_tail?
    | '.' name var_tail?
;

name: ID;
attributes_defined: CONST;


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