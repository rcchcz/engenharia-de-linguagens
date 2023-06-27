
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     INT_NUMBER = 259,
     FLOAT_NUMBER = 260,
     STRING_VALUE = 261,
     INT = 262,
     DOUBLE = 263,
     FLOAT = 264,
     CHAR = 265,
     STRING = 266,
     BOOLEAN = 267,
     NULL_VALUE = 268,
     VOID = 269,
     STRUCT = 270,
     ENUM = 271,
     TRUE = 272,
     FALSE = 273,
     WHILE = 274,
     DO = 275,
     SWITCH = 276,
     CASE = 277,
     DEFAULT = 278,
     IF = 279,
     ELSE = 280,
     ELSE_IF = 281,
     FOR = 282,
     CONTINUE = 283,
     BREAK = 284,
     CONST = 285,
     STATIC = 286,
     RETURN = 287,
     IMPORT = 288,
     MAIN = 289,
     OPEN_PAREN = 290,
     CLOSE_PAREN = 291,
     OPEN_BRACK = 292,
     CLOSE_BRACK = 293,
     BLOCK_BEGIN = 294,
     BLOCK_END = 295,
     SEMI = 296,
     COLON = 297,
     DOT = 298,
     COMMA = 299,
     PLUS = 300,
     MINUS = 301,
     DIV = 302,
     MULT = 303,
     INCREMENT = 304,
     DECREMENT = 305,
     MODULE = 306,
     ASSIGN = 307,
     ADD_ASSIGN = 308,
     SUB_ASSIGN = 309,
     EQ = 310,
     NEQ = 311,
     LT = 312,
     GT = 313,
     LE = 314,
     GE = 315,
     AND = 316,
     OR = 317,
     NOT = 318
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 18 "parser.y"

	int    iValue; 	/* integer value */
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	float  fValue;  /* float value */
	double dvalue;  /* double value */ 
	struct record * rec;



/* Line 1676 of yacc.c  */
#line 126 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


