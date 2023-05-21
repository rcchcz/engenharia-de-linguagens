%{
  #include <stdio.h>
%}

%%

[ \t\n]                           ;

[0-9]+           	                {printf("INT_NUMBER(%s)\n", yytext);}
([0-9]+)(\.[0-9]+)?|\.?[0-9]+     {printf("FLOAT_NUMBER(%s)\n", yytext);}

"int"                             {printf("INT\n");}
"double"                          {printf("DOUBLE\n");}
"float"                           {printf("FLOAT\n");}
"char"                            {printf("CHAR\n");}
"string"                          {printf("STRING\n");}
"boolean"                         {printf("BOOLEAN\n");}
"NULL"                            {printf("NULL\n");}
"void"                            {printf("VOID\n");}
"struct"                          {printf("STRUCT\n");}
"enum"                            {printf("ENUM\n");}
"true"                            {printf("TRUE\n");}
"false"                           {printf("FALSE\n");}

"while"      			                {printf("WHILE\n");}
"do"      				                {printf("DO\n");}
"switch"                          {printf("SWITCH\n");}
"case"                            {printf("CASE\n");}
"if"      				                {printf("IF\n");}
"else"      			                {printf("ELSE\n");}
"else if"      			              {printf("ELSE_IF\n");}
"for"                             {printf("FOR\n");}
"continue"                        {printf("CONTINUE\n");}
"break"                           {printf("BREAK\n");}
"const"                           {printf("CONST\n");}
"static"                          {printf("STATIC\n");}
"return"                          {printf("RETURN\n");}
"import"                          {printf("IMPORT\n");}

"("                               {printf("OPEN_PAREN\n");}
")"                               {printf("CLOSE_PAREN\n");}
"["                               {printf("OPEN_BRACK\n");}
"]"                               {printf("CLOSE_BRACK\n");}
"{"      			                    {printf("BLOCK_BEGIN\n");}
"}"      				                  {printf("BLOCK_END\n");}
";"      				                  {printf("SEMI\n");}
":"                               {printf("COLON\n");}
"."                               {printf("DOT\n");}
","                               {printf("COMMA\n");}

"+"                               {printf("PLUS\n");}
"-"                               {printf("MINUS\n");}
"/"                               {printf("DIV\n");}
"*"                               {printf("MULT\n");}
"++"                              {printf("INCREMENT\n");}
"--"                              {printf("DECREMENT\n");}
"%"                               {printf("MODULE\n");}
"="					                      {printf("ASSIGN\n");}
"+="                              {printf("ADD_ASSIGN\n");}
"-="                              {printf("SUB_ASSIGN\n");}

"=="                              {printf("EQ\n");}
"!="                              {printf("LEQ\n");}
"<"                               {printf("LT\n");}
">"                               {printf("GT\n");}
"<="                              {printf("LE\n");}
">="                              {printf("GE\n");}

"&&"                              {printf("AND\n");}
"||"                              {printf("OR\n");}
"!"                               {printf("NOT\n");}


\"(\\.|[^"\\])*\"                 {printf("STRING_VALUE\n");}
[a-zA-Z][a-zA-Z0-9]*	            {printf("ID{%s}\n", yytext);}

.                                 {printf("invalid character\n");}

%%

#ifndef yywrap
  int yywrap (void) {return 1;}
#endif

int main (void){
  yylex();
  return 1;
}
