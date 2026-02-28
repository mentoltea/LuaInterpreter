grammar Lua51Grammar;

prog: block EOF ;

block: chunk;

chunk: (statement STATEMENT_SEPARATOR? )* ;

statement: 
    doBlockStatement        |
    assignmentStatement     |
    localDeclStatement      |
    whileStatement          |
    repeatUntilStatement    |
    ifStatement             |
    returnStatement         |
    breakStatement          |
    numericForStatement     |
    genericForStatement     |
    functionCallStatement   |
    functionDefStatement
;

doBlockStatement: DO block END ;

assignmentStatement: varList '=' expList ;

localDeclStatement: LOCAL nameList ('=' expList)? ;

whileStatement: WHILE exp DO block END ;
repeatUntilStatement: REPEAT block UNTIL exp ;
ifStatement: IF exp THEN block (ELSEIF exp THEN block)* (ELSE block)? END ;
returnStatement: RETURN expList? ;
breakStatement: BREAK ;

numericForStatement: FOR name '=' exp (',' exp )+ DO block END ;
genericForStatement: FOR nameList IN expList DO block END ;

functionCallStatement: functionCall ;

functionCall: 
    '(' exp ')' args          |
    '(' exp ')' ':' name args
;
args: '(' (expList)? ')' ;

functionDefStatement: 
    FUNCTION funcName funcBody        |
    LOCAL FUNCTION name funcBody
;

functionAnon: FUNCTION funcBody ;

funcName: name ('.' name)* (':' name)? ;
funcBody: '(' paramList? ')' block END ;


nameList: name (',' name)* ;
varList: var (',' var)* ; 
expList: exp (',' exp)* ;
paramList: nameList (',' '...')? | '...' ;


exp: 
    prefixExp
    | literal
    | functionAnon
    | tableConstructor
    | '...'
    | opExp
;

opExp: orExp;
orExp: andExp (OR andExp)* ;
andExp: compareExp (AND compareExp)* ;
compareExp: concatExp (compareOp concatExp)? ;
concatExp: plusMinusExp ('..' plusMinusExp)* ;
plusMinusExp: mulDivModExp ( plusMinusOp mulDivModExp)* ;
mulDivModExp: unaryExp ( mulDivModOp unaryExp)* ;
unaryExp: unop unaryExp | powerExp ;
powerExp: prefixExp ('^' powerExp)? ;


prefixExp: 
    var
    | functionCall
    | '(' exp ')'
;


tableConstructor: '{' fieldList? '}' ;
fieldList: field (fieldSep field)* fieldSep? ;
field: 
    '[' exp ']' '=' exp |
    name '=' exp        | 
    exp
;
fieldSep: ',' | ';' ;


var: name;

literal:
    STRING   |
    NUMBER   |
    NIL      |
    TRUE     |
    FALSE    
;

name: ID;

compareOp: '<' | '<=' | '>' | '>=' | '==' | '~=' ;
concatOp: '..' ;
plusMinusOp: '+' | '-' ;
mulDivModOp: '*' | '/' | '%' ;
unop: '-' | NOT | '#' ;

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
STATEMENT_SEPARATOR: ';';
NEWLINE: '\r'? '\n' -> skip;
WS: [ \t\r\n]+ -> skip;
LINE_COMMENT: '--' ~[\r\n]* -> skip;
BLOCK_COMMENT: '--[[' .*? ']]' -> skip;