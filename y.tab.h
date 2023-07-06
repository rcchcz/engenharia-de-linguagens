/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    INT_NUMBER = 259,              /* INT_NUMBER  */
    FLOAT_NUMBER = 260,            /* FLOAT_NUMBER  */
    STRING_VALUE = 261,            /* STRING_VALUE  */
    INT = 262,                     /* INT  */
    DOUBLE = 263,                  /* DOUBLE  */
    FLOAT = 264,                   /* FLOAT  */
    CHAR = 265,                    /* CHAR  */
    STRING = 266,                  /* STRING  */
    BOOLEAN = 267,                 /* BOOLEAN  */
    NULL_VALUE = 268,              /* NULL_VALUE  */
    VOID = 269,                    /* VOID  */
    STRUCT = 270,                  /* STRUCT  */
    ENUM = 271,                    /* ENUM  */
    TRUE = 272,                    /* TRUE  */
    FALSE = 273,                   /* FALSE  */
    WHILE = 274,                   /* WHILE  */
    DO = 275,                      /* DO  */
    SWITCH = 276,                  /* SWITCH  */
    CASE = 277,                    /* CASE  */
    DEFAULT = 278,                 /* DEFAULT  */
    IF = 279,                      /* IF  */
    ELSE = 280,                    /* ELSE  */
    ELSE_IF = 281,                 /* ELSE_IF  */
    FOR = 282,                     /* FOR  */
    CONTINUE = 283,                /* CONTINUE  */
    BREAK = 284,                   /* BREAK  */
    CONST = 285,                   /* CONST  */
    STATIC = 286,                  /* STATIC  */
    RETURN = 287,                  /* RETURN  */
    MAIN = 288,                    /* MAIN  */
    SCAN = 289,                    /* SCAN  */
    PRINT = 290,                   /* PRINT  */
    OPEN_PAREN = 291,              /* OPEN_PAREN  */
    CLOSE_PAREN = 292,             /* CLOSE_PAREN  */
    OPEN_BRACK = 293,              /* OPEN_BRACK  */
    CLOSE_BRACK = 294,             /* CLOSE_BRACK  */
    BLOCK_BEGIN = 295,             /* BLOCK_BEGIN  */
    BLOCK_END = 296,               /* BLOCK_END  */
    SEMI = 297,                    /* SEMI  */
    COLON = 298,                   /* COLON  */
    DOT = 299,                     /* DOT  */
    COMMA = 300,                   /* COMMA  */
    AMPERSAND = 301,               /* AMPERSAND  */
    PLUS = 302,                    /* PLUS  */
    MINUS = 303,                   /* MINUS  */
    DIV = 304,                     /* DIV  */
    MULT = 305,                    /* MULT  */
    INCREMENT = 306,               /* INCREMENT  */
    DECREMENT = 307,               /* DECREMENT  */
    MODULE = 308,                  /* MODULE  */
    ASSIGN = 309,                  /* ASSIGN  */
    ADD_ASSIGN = 310,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 311,              /* SUB_ASSIGN  */
    EQ = 312,                      /* EQ  */
    NEQ = 313,                     /* NEQ  */
    LT = 314,                      /* LT  */
    GT = 315,                      /* GT  */
    LE = 316,                      /* LE  */
    GE = 317,                      /* GE  */
    AND = 318,                     /* AND  */
    OR = 319,                      /* OR  */
    NOT = 320                      /* NOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define INT_NUMBER 259
#define FLOAT_NUMBER 260
#define STRING_VALUE 261
#define INT 262
#define DOUBLE 263
#define FLOAT 264
#define CHAR 265
#define STRING 266
#define BOOLEAN 267
#define NULL_VALUE 268
#define VOID 269
#define STRUCT 270
#define ENUM 271
#define TRUE 272
#define FALSE 273
#define WHILE 274
#define DO 275
#define SWITCH 276
#define CASE 277
#define DEFAULT 278
#define IF 279
#define ELSE 280
#define ELSE_IF 281
#define FOR 282
#define CONTINUE 283
#define BREAK 284
#define CONST 285
#define STATIC 286
#define RETURN 287
#define MAIN 288
#define SCAN 289
#define PRINT 290
#define OPEN_PAREN 291
#define CLOSE_PAREN 292
#define OPEN_BRACK 293
#define CLOSE_BRACK 294
#define BLOCK_BEGIN 295
#define BLOCK_END 296
#define SEMI 297
#define COLON 298
#define DOT 299
#define COMMA 300
#define AMPERSAND 301
#define PLUS 302
#define MINUS 303
#define DIV 304
#define MULT 305
#define INCREMENT 306
#define DECREMENT 307
#define MODULE 308
#define ASSIGN 309
#define ADD_ASSIGN 310
#define SUB_ASSIGN 311
#define EQ 312
#define NEQ 313
#define LT 314
#define GT 315
#define LE 316
#define GE 317
#define AND 318
#define OR 319
#define NOT 320

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 44 "parser.y"

	int    iValue; 	/* integer value */
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	float  fValue;  /* float value */
	double dvalue;  /* double value */ 
	struct record * rec;

#line 206 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
