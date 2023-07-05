%{
  #include <stdio.h>
  #include <string.h>
  #include "y.tab.h"
  
  extern int yyerror (char *msg);  
  int countn = 1;
  int count_block = 0;
%}
%option yylineno

%%

[ \t]                           ;

[0-9]+           	                { yylval.sValue = strdup(yytext);
                                    return INT_NUMBER;}
([0-9]+)(\.[0-9]+)?|\.?[0-9]+     { yylval.sValue = strdup(yytext);
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
"default"                         {return(DEFAULT);}
"if"      				                {return(IF);}
"else"      			                {return(ELSE);}
"else if"      			              {return(ELSE_IF);}
"for"                             {return(FOR);}
"continue"                        {return(CONTINUE);}
"break"                           {return(BREAK);}
"const"                           {return(CONST);}
"static"                          {return(STATIC);}
"return"                          {return(RETURN);}
"main"                            {return(MAIN);}
"scan"                            {return(SCAN);}
"print"                           {return(PRINT);}

"("                               {return(OPEN_PAREN);}
")"                               {return(CLOSE_PAREN);}
"["                               {return(OPEN_BRACK);}
"]"                               {return(CLOSE_BRACK);}
"{"      			                    { count_block++;
                                    return(BLOCK_BEGIN);
                                  }
"}"      				                  { if(count_block!=0){
                                      count_block--;
                                    }
                                    return(BLOCK_END);
                                  }
";"      				                  {return(SEMI);}
":"                               {return(COLON);}
"."                               {return(DOT);}
","                               {return(COMMA);}
"&"                               {return(AMPERSAND);}

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
"!="                              {return(NEQ);}
"<"                               {return(LT);}
">"                               {return(GT);}
"<="                              {return(LE);}
">="                              {return(GE);}

"&&"                              {return(AND);}
"||"                              {return(OR);}
"!"                               {return(NOT);}

[\n]                              { countn++; }


\"(\\.|[^"\\])*\"                 {yylval.sValue = strdup(yytext);
                                    return STRING_VALUE;}
[a-zA-Z][a-zA-Z0-9]*	            {yylval.sValue = strdup(yytext);
                                    return ID;}

.                                 {yyerror("invalid character");}

%%

#ifndef yywrap
  int yywrap (void) {return 1;}
#endif
