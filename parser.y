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

prog : decs_var subprograms principal subprograms
	 | decs_var principal subprograms
	 | decs_var subprograms principal
	 | decs_var principal
	 ;

decs_var : 				
		 | dec_var decs_var
		 | assigns
		 ;

dec_var : type ids SEMI
		| type ID ASSIGN p_values SEMI
		| type ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI
		| type ID dims SEMI
		| type_modifiers type ids SEMI
        | type_modifiers type ID ASSIGN p_values SEMI
		| type_modifiers type ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI
		| type_modifiers type ID dims SEMI
		;

type_modifiers : type_modifier
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
	| ids COMMA atomo
    | atomo COMMA p_values
	;

atomo : ID
      | ID dims
	  ;

dims : OPEN_BRACK CLOSE_BRACK
	 | OPEN_BRACK CLOSE_BRACK dims
	 | OPEN_BRACK value CLOSE_BRACK
     | OPEN_BRACK value CLOSE_BRACK dims
	 | OPEN_BRACK expr CLOSE_BRACK
     | OPEN_BRACK expr CLOSE_BRACK dims
	 | OPEN_BRACK ID CLOSE_BRACK
     | OPEN_BRACK ID CLOSE_BRACK dims
	 ;

p_values : expr
		 | expr COMMA p_values
		 ;

expr : expr PLUS term
	 | expr MINUS term
	 | expr ADD_ASSIGN term
	 | expr SUB_ASSIGN term
	 | term
	 ;

term : term MULT factor
     | term DIV factor
	 | term MODULE factor
	 | factor
	 ;

factor : OPEN_PAREN expr CLOSE_PAREN
       | ID
	   | ID dims
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
		   | ID dims ASSIGN ID dims SEMI
           ;

subprograms : subprogram
			| subprogram subprograms
			;

subprogram : proc
		   | function
		   ;

proc : VOID ID OPEN_PAREN params CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  
	 | VOID ID OPEN_PAREN CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END 
	 ;
	
function : type ID OPEN_PAREN params CLOSE_PAREN BLOCK_BEGIN stmts RETURN value BLOCK_END
		 | type ID OPEN_PAREN CLOSE_PAREN BLOCK_BEGIN stmts RETURN value BLOCK_END
         ;

params : param
	   | param COMMA params
	   ;

param : type dims ID
	  | type ID
	  ;

stmts : stmt
      | stmt stmts
	  ;

stmt : dec_var
     | assigns
	 | funcion_call
     | conditional_stmt
	 | iteration_stmt
	 ;

conditional_stmt : if_stmt
				 | switch_stmt
				 ;

if_stmt : IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END
		| IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END ELSE BLOCK_BEGIN stmts BLOCK_END
		| IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END else_if_stmt ELSE BLOCK_BEGIN stmts BLOCK_END
		| IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END else_if_stmt
		;

else_if_stmt : ELSE_IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END
			 | else_if_stmt else_if_stmt
			 ;

logic_expr : logic_expr logic_op c_term
		   | c_term
		   ;

c_term : ID
	   | ID dims
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

for_stmt : FOR OPEN_PAREN dec_var logic_expr SEMI expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END
		 ;

dowhile_stmt : DO BLOCK_BEGIN stmts BLOCK_END WHILE OPEN_PAREN logic_expr CLOSE_PAREN SEMI
             ;

funcion_call : ID OPEN_PAREN args CLOSE_PAREN SEMI
             | ID OPEN_PAREN CLOSE_PAREN SEMI
			 ;

args : args arg
	 | arg
	 ;

arg : ids
	;

principal : MAIN OPEN_PAREN params CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END
		  | MAIN OPEN_PAREN CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END
          ;

%% /* Fim da segunda seção */

int main (void) {
	return yyparse();
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}
