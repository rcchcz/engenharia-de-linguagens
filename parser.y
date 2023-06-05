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
%token WHILE DO SWITCH CASE IF ELSE ELSE_IF FOR CONTINUE BREAK CONST STATIC RETURN IMPORT
%token OPEN_PAREN CLOSE_PAREN OPEN_BRACK CLOSE_BRACK BLOCK_BEGIN BLOCK_END SEMI COLON DOT COMMA
%token PLUS MINUS DIV MULT INCREMENT DECREMENT MODULE ASSIGN ADD_ASSIGN SUB_ASSIGN
%token EQ LEQ LT GT LE GE
%token AND OR NOT

%start prog

%type <sValue> stm dec_var decs_var type_modifiers type_modifier type ids assign_def
%type <sValue> atomo dims p_values expr term factor value assigns assign_mat

%% /* Inicio da segunda seção, onde colocamos as regras BNF */

prog : decs_var {} 
	 ;

decs_var : 				
		 | dec_var
		 | dec_var decs_var
		 | assigns
		 ;

dec_var : type_modifiers type ids
        | type_modifiers type ID ASSIGN p_values SEMI
		| type_modifiers type ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI
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
	| expr
	| expr COMMA p_values
	;

atomo : ID
      | ID dims
	  ;

dims : OPEN_BRACK value CLOSE_BRACK
     | OPEN_BRACK value CLOSE_BRACK dims
	 ;

p_values : value
         | value COMMA p_values
		 | expr
		 | expr COMMA p_values
		 ;

expr : expr PLUS expr
	 | expr MINUS expr
	 | term
	 ;

term : term MULT term
     | term DIV term
	 | term MODULE term
	 | factor
	 ;

factor : OPEN_PAREN expr CLOSE_PAREN
       | ID
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

%% /* Fim da segunda seção */

int main (void) {
	return yyparse();
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}
