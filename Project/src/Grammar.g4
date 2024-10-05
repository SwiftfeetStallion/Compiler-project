grammar Grammar;

program: 'int main()'
'{'
  sentence*
'}' 
EOF # start;

sentence: IF '(' bool_expr ')' '{'
(sentence)* 
'}' (ELIF '(' bool_expr ')' '{'
(sentence)*
'}')*
(ELSE '{'
(sentence)*
'}')?  # if_stmt
| WHILE '(' bool_expr ')' '{'
(sentence)*
'}' # while_stmt
|'{'
(sentence)*
'}'  # scope_stmt
| ID ASSIGN ariphm_expr SEMICOLON # assign_stmt
| var_declaration_stmt SEMICOLON # var_stmt
| ariphm_expr SEMICOLON # ariphm_stmt
| PRINT '(' (ariphm_expr | bool_expr) ')' SEMICOLON # print_stmt
;

var_declaration_stmt: TYPE ID  # var_decl_stmt
| TYPE ID ASSIGN ariphm_expr # var_def_stmt;

bool_expr: ariphm_expr EVALOP ariphm_expr # one_bool_stmt
| NOT '(' bool_expr ')' # not_stmt
| bool_expr AND bool_expr # and_stmt
| bool_expr OR bool_expr # or_stmt
| '(' bool_expr ')' # par_bool_stmt;

ariphm_expr: ariphm_expr op=(MUL | DIV) ariphm_expr # mul_div_stmt
| ariphm_expr op=(ADD | SUB) ariphm_expr # add_sub_stmt
| NUM # number
| ID # variable
| '(' ariphm_expr ')' # par_stmt;


EVALOP: EQUAL | NO_EQUAL | LESS | LESSEQ | GREATER | GREATEREQ;
TYPE : 'int';
VOID : 'void';
PRINT : 'print';
IF : 'if';
WHILE : 'while';
ELSE : 'else';
ELIF : 'else if';
ADD : '+';
SUB : '-';
MUL : '*';
DIV : '/';
AND : '&&';
OR : '||';
NOT : '!';
ASSIGN : '=';
EQUAL : '==';
NO_EQUAL : '!=';
LESS : '<';
LESSEQ: '<=';
GREATER : '>';
GREATEREQ: '>='; 
SEMICOLON : ';';
ID : [a-zA-Z_]+;
NUM : [0-9] | [1-9][0-9]*;
LINECOMMENT : '//' ~[\n\r]+ -> skip;
WS  :   [ \n\r\t]+ -> skip;