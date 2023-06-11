%{
#include <stdio.h>

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;

%}

%union {
	int    iValue; 	/* integer value */
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	float  fValue;  /* float value */
	double dvalue;  /* double value */ 
};

%token <sValue> ID
%token <iValue> INT_NUMBER
%token <fValue> FLOAT_NUMBER
%token <sValue> STRING_VALUE
%token INT DOUBLE FLOAT CHAR STRING BOOLEAN NULL_VALUE VOID STRUCT ENUM TRUE FALSE
%token WHILE DO SWITCH CASE DEFAULT IF ELSE ELSE_IF FOR CONTINUE BREAK CONST STATIC RETURN IMPORT MAIN
%token OPEN_PAREN CLOSE_PAREN OPEN_BRACK CLOSE_BRACK BLOCK_BEGIN BLOCK_END SEMI COLON DOT COMMA
%token PLUS MINUS DIV MULT INCREMENT DECREMENT MODULE ASSIGN ADD_ASSIGN SUB_ASSIGN
%token EQ NEQ LT GT LE GE
%token AND OR NOT

%start prog


%% /* Inicio da segunda seção, onde colocamos as regras BNF */

prog : decs_var subprograms principal{} 
	 ;

decs_var : 				
		 | dec_var decs_var
		 | assigns
		 ;

dec_var : type_modifiers type ids
        | type_modifiers type ID ASSIGN p_values SEMI
		| type_modifiers ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI
		;

type_modifiers : 
               | type_modifier
			   | type_modifier type_modifier
			   ;

type_modifier : CONST
              | STATIC
			  | ENUM
			  | STRUCT
			  ;

type : INT
     | DOUBLE
	 | FLOAT
	 | CHAR
	 | STRING
	 | VOID
	 ;

ids : atomo
    | atomo COMMA p_values
	;

atomo : ID
      | ID dims
	  ;

dims : OPEN_BRACK value CLOSE_BRACK
     | OPEN_BRACK value CLOSE_BRACK dims
	 ;

p_values : expr
		 | expr COMMA p_values
		 ;

expr : expr PLUS term
	 | expr MINUS term
	 | term
	 ;

term : term MULT factor
     | term DIV factor
	 | term MODULE factor
	 | factor
	 ;

factor : OPEN_PAREN expr CLOSE_PAREN
       | ID
	   | funcion_call
	   | value
	   ;

value : INT_NUMBER
      | FLOAT_NUMBER
	  | STRING_VALUE
	  ;

assigns : assign_def
        | assign_mat
		| assign_def SEMI assigns
		;

assign_def : ID ASSIGN expr SEMI
        ;

assign_mat : ID dims ASSIGN expr SEMI
           ;

subprograms : 
			| subprogram subprograms
			;

subprogram : proc
		   | function
		   ;

proc : VOID ID OPEN_PAREN decs_var CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  
	 ;
	
function : type ID OPEN_PAREN decs_var CLOSE_PAREN BLOCK_BEGIN stmts RETURN value BLOCK_END
         ;

stmts :
      | stmt stmts
	  ;

stmt : decs_var 
     | conditional_stmt
	 | iteration_stmt
	 ;

conditional_stmt : if_stmt
				 | switch_stmt
				 ;

if_stmt : IF logic_expr stmts
		| IF logic_expr stmts ELSE stmts
		;

logic_expr : logic_expr logic_op c_term
		   | c_term
		   ;

c_term : ID
	   | TRUE
	   | FALSE
	   | comp
	   ;

comp: expr comp_op expr
	;

comp_op : EQ
		| NEQ
		| GE
		| LE
		| GT
		| LT
		;

logic_op : AND
		 | OR
		 | NOT
		 ;

switch_stmt : SWITCH switch_cases DEFAULT COLON stmts
		    ;

switch_cases : 
			 | CASE value COLON stmts BREAK switch_cases
			 ;

iteration_stmt : while_stmt
			   | for_stmt
			   | dowhile_stmt
			   ;

while_stmt : WHILE OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END
		   ;

for_stmt : FOR OPEN_PAREN dec_var SEMI logic_expr SEMI expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END
		 ;

dowhile_stmt : DO BLOCK_BEGIN stmts BLOCK_END WHILE OPEN_PAREN logic_expr CLOSE_PAREN SEMI
             ;

funcion_call : ID OPEN_PAREN decs_var CLOSE_PAREN
			 ;

principal : MAIN OPEN_PAREN decs_var CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END
          ;

%% /* Fim da segunda seção */

int main (void) {
	return yyparse();
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}
