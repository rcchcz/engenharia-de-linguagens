%{
  #include <stdio.h>
  #include "y.tab.h"
  
  extern int yyerror (char *msg);  
%}

%%

[ \t\n]                           ;

[0-9]+           	                { yylval.iValue = atoi(yytext); 
                                    return INT_NUMBER;}
([0-9]+)(\.[0-9]+)?|\.?[0-9]+     { yylval.fValue = atof(yytext);
                                    return FLOAT_NUMBER;}

"int"                             {return(INT);}
"double"                          {return(DOUBLE);}
"float"                           {return(FLOAT);}
"char"                            {return(CHAR);}
"string"                          {return(STRING);}
"boolean"                         {return(BOOLEAN);}
"NULL"                            {return(NULL_VALUE);}
"void"                            {return(VOID);}
"struct"                          {return(STRUCT);}
"enum"                            {return(ENUM);}
"true"                            {return(TRUE);}
"false"                           {return(FALSE);}

"while"      			                {return(WHILE);}
"do"      				                {return(DO);}
"switch"                          {return(SWITCH);}
"case"                            {return(CASE);}
"if"      				                {return(IF);}
"else"      			                {return(ELSE);}
"else if"      			              {return(ELSE_IF);}
"for"                             {return(FOR);}
"continue"                        {return(CONTINUE);}
"break"                           {return(BREAK);}
"const"                           {return(CONST);}
"static"                          {return(STATIC);}
"return"                          {return(RETURN);}
"import"                          {return(IMPORT);}

"("                               {return(OPEN_PAREN);}
")"                               {return(CLOSE_PAREN);}
"["                               {return(OPEN_BRACK);}
"]"                               {return(CLOSE_BRACK);}
"{"      			                    {return(BLOCK_BEGIN);}
"}"      				                  {return(BLOCK_END);}
";"      				                  {return(SEMI);}
":"                               {return(COLON);}
"."                               {return(DOT);}
","                               {return(COMMA);}

"+"                               {return(PLUS);}
"-"                               {return(MINUS);}
"/"                               {return(DIV);}
"*"                               {return(MULT);}
"++"                              {return(INCREMENT);}
"--"                              {return(DECREMENT);}
"%"                               {return(MODULE);}
"="					                      {return(ASSIGN);}
"+="                              {return(ADD_ASSIGN);}
"-="                              {return(SUB_ASSIGN);}

"=="                              {return(EQ);}
"!="                              {return(LEQ);}
"<"                               {return(LT);}
">"                               {return(GT);}
"<="                              {return(LE);}
">="                              {return(GE);}

"&&"                              {return(AND);}
"||"                              {return(OR);}
"!"                               {return(NOT);}


\"(\\.|[^"\\])*\"                 {yylval.sValue = strdup(yytext);
                                    return STRING_VALUE;}
[a-zA-Z][a-zA-Z0-9]*	            {yylval.sValue = strdup(yytext);
                                    return ID;}

.                                 {yyerror("invalid character");}

%%

#ifndef yywrap
  int yywrap (void) {return 1;}
#endif
