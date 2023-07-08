/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <ctype.h>
	#include "./lib/record.h"

	int yylex(void);
	int yyerror(char *s);
	int yywrad();

	extern int yylineno;
	extern char * yytext;
	extern FILE * yyin, * yyout;

	char * cat(char *, char *, char *, char *, char *);

	void add(char symbol, char * id_name);
	void insert_type(char * type_text);
	int search(char *c);
	void insert_value(char * id, char * value);
	int verificar_valor_tipo_valido(char * valor, char * tipo);
	int isInteger(const char *str);
	int isFloat(const char *str);
	char * tipo_resultado_operacao(char * type1, char * type2);
	int verificar_calculo_numero_float_int(char * type1, char * type2);


	struct dataType {
		char * id_name;
		char * data_type;
		char * type;
		int line_no;
		int scope;
	} symbol_table[40];

	int count = 0;
	int q;
	char type[10];
	int count_label = 0;
	extern int countn;
	extern int count_block;

#line 115 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
#line 45 "parser.y"

	int    iValue; 	/* integer value */
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	float  fValue;  /* float value */
	double dvalue;  /* double value */ 
	struct record * rec;

#line 307 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INT_NUMBER = 4,                 /* INT_NUMBER  */
  YYSYMBOL_FLOAT_NUMBER = 5,               /* FLOAT_NUMBER  */
  YYSYMBOL_STRING_VALUE = 6,               /* STRING_VALUE  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_DOUBLE = 8,                     /* DOUBLE  */
  YYSYMBOL_FLOAT = 9,                      /* FLOAT  */
  YYSYMBOL_CHAR = 10,                      /* CHAR  */
  YYSYMBOL_STRING = 11,                    /* STRING  */
  YYSYMBOL_BOOLEAN = 12,                   /* BOOLEAN  */
  YYSYMBOL_NULL_VALUE = 13,                /* NULL_VALUE  */
  YYSYMBOL_VOID = 14,                      /* VOID  */
  YYSYMBOL_STRUCT = 15,                    /* STRUCT  */
  YYSYMBOL_ENUM = 16,                      /* ENUM  */
  YYSYMBOL_TRUE = 17,                      /* TRUE  */
  YYSYMBOL_FALSE = 18,                     /* FALSE  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_DO = 20,                        /* DO  */
  YYSYMBOL_SWITCH = 21,                    /* SWITCH  */
  YYSYMBOL_CASE = 22,                      /* CASE  */
  YYSYMBOL_DEFAULT = 23,                   /* DEFAULT  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_ELSE = 25,                      /* ELSE  */
  YYSYMBOL_ELSE_IF = 26,                   /* ELSE_IF  */
  YYSYMBOL_FOR = 27,                       /* FOR  */
  YYSYMBOL_CONTINUE = 28,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 29,                     /* BREAK  */
  YYSYMBOL_CONST = 30,                     /* CONST  */
  YYSYMBOL_STATIC = 31,                    /* STATIC  */
  YYSYMBOL_RETURN = 32,                    /* RETURN  */
  YYSYMBOL_MAIN = 33,                      /* MAIN  */
  YYSYMBOL_SCAN = 34,                      /* SCAN  */
  YYSYMBOL_PRINT = 35,                     /* PRINT  */
  YYSYMBOL_OPEN_PAREN = 36,                /* OPEN_PAREN  */
  YYSYMBOL_CLOSE_PAREN = 37,               /* CLOSE_PAREN  */
  YYSYMBOL_OPEN_BRACK = 38,                /* OPEN_BRACK  */
  YYSYMBOL_CLOSE_BRACK = 39,               /* CLOSE_BRACK  */
  YYSYMBOL_BLOCK_BEGIN = 40,               /* BLOCK_BEGIN  */
  YYSYMBOL_BLOCK_END = 41,                 /* BLOCK_END  */
  YYSYMBOL_SEMI = 42,                      /* SEMI  */
  YYSYMBOL_COLON = 43,                     /* COLON  */
  YYSYMBOL_DOT = 44,                       /* DOT  */
  YYSYMBOL_COMMA = 45,                     /* COMMA  */
  YYSYMBOL_AMPERSAND = 46,                 /* AMPERSAND  */
  YYSYMBOL_PLUS = 47,                      /* PLUS  */
  YYSYMBOL_MINUS = 48,                     /* MINUS  */
  YYSYMBOL_DIV = 49,                       /* DIV  */
  YYSYMBOL_MULT = 50,                      /* MULT  */
  YYSYMBOL_INCREMENT = 51,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 52,                 /* DECREMENT  */
  YYSYMBOL_MODULE = 53,                    /* MODULE  */
  YYSYMBOL_ASSIGN = 54,                    /* ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 55,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 56,                /* SUB_ASSIGN  */
  YYSYMBOL_EQ = 57,                        /* EQ  */
  YYSYMBOL_NEQ = 58,                       /* NEQ  */
  YYSYMBOL_LT = 59,                        /* LT  */
  YYSYMBOL_GT = 60,                        /* GT  */
  YYSYMBOL_LE = 61,                        /* LE  */
  YYSYMBOL_GE = 62,                        /* GE  */
  YYSYMBOL_AND = 63,                       /* AND  */
  YYSYMBOL_OR = 64,                        /* OR  */
  YYSYMBOL_NOT = 65,                       /* NOT  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_prog = 67,                      /* prog  */
  YYSYMBOL_decs_var = 68,                  /* decs_var  */
  YYSYMBOL_dec_var = 69,                   /* dec_var  */
  YYSYMBOL_type_modifiers = 70,            /* type_modifiers  */
  YYSYMBOL_type_modifier = 71,             /* type_modifier  */
  YYSYMBOL_type = 72,                      /* type  */
  YYSYMBOL_ids = 73,                       /* ids  */
  YYSYMBOL_atomo = 74,                     /* atomo  */
  YYSYMBOL_dims = 75,                      /* dims  */
  YYSYMBOL_p_values = 76,                  /* p_values  */
  YYSYMBOL_expr = 77,                      /* expr  */
  YYSYMBOL_term = 78,                      /* term  */
  YYSYMBOL_factor = 79,                    /* factor  */
  YYSYMBOL_value = 80,                     /* value  */
  YYSYMBOL_assigns = 81,                   /* assigns  */
  YYSYMBOL_assign_def = 82,                /* assign_def  */
  YYSYMBOL_assign_mat = 83,                /* assign_mat  */
  YYSYMBOL_subprograms = 84,               /* subprograms  */
  YYSYMBOL_subprogram = 85,                /* subprogram  */
  YYSYMBOL_proc = 86,                      /* proc  */
  YYSYMBOL_function = 87,                  /* function  */
  YYSYMBOL_params = 88,                    /* params  */
  YYSYMBOL_param = 89,                     /* param  */
  YYSYMBOL_stmts = 90,                     /* stmts  */
  YYSYMBOL_stmt = 91,                      /* stmt  */
  YYSYMBOL_scan_stmt = 92,                 /* scan_stmt  */
  YYSYMBOL_print_stmt = 93,                /* print_stmt  */
  YYSYMBOL_print_content = 94,             /* print_content  */
  YYSYMBOL_conditional_stmt = 95,          /* conditional_stmt  */
  YYSYMBOL_if_stmt = 96,                   /* if_stmt  */
  YYSYMBOL_else_if_stmt = 97,              /* else_if_stmt  */
  YYSYMBOL_logic_expr = 98,                /* logic_expr  */
  YYSYMBOL_c_term = 99,                    /* c_term  */
  YYSYMBOL_comp = 100,                     /* comp  */
  YYSYMBOL_comp_op = 101,                  /* comp_op  */
  YYSYMBOL_logic_op = 102,                 /* logic_op  */
  YYSYMBOL_switch_stmt = 103,              /* switch_stmt  */
  YYSYMBOL_switch_cases = 104,             /* switch_cases  */
  YYSYMBOL_iteration_stmt = 105,           /* iteration_stmt  */
  YYSYMBOL_while_stmt = 106,               /* while_stmt  */
  YYSYMBOL_for_stmt = 107,                 /* for_stmt  */
  YYSYMBOL_dowhile_stmt = 108,             /* dowhile_stmt  */
  YYSYMBOL_function_call = 109,            /* function_call  */
  YYSYMBOL_args = 110,                     /* args  */
  YYSYMBOL_arg = 111,                      /* arg  */
  YYSYMBOL_principal = 112                 /* principal  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   546

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  151
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  348

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    76,    76,    82,    87,    92,    98,    99,   105,   112,
     120,   138,   157,   165,   176,   194,   215,   226,   243,   254,
     262,   280,   301,   311,   320,   326,   332,   337,   342,   352,
     357,   365,   367,   369,   371,   375,   378,   381,   384,   387,
     390,   395,   400,   411,   425,   435,   449,   461,   473,   486,
     490,   495,   505,   516,   526,   537,   541,   548,   553,   567,
     579,   592,   604,   615,   622,   633,   644,   656,   663,   668,
     671,   690,   707,   712,   718,   722,   726,   730,   736,   742,
     747,   756,   779,   785,   795,   800,   808,   813,   820,   829,
     837,   851,   863,   868,   876,   885,   894,   903,   908,   916,
     921,   926,   931,   936,   941,   947,   954,   973,   990,   996,
    1001,  1007,  1014,  1019,  1026,  1033,  1051,  1070,  1090,  1103,
    1111,  1118,  1125,  1128,  1133,  1137,  1142,  1150,  1159,  1163,
    1167,  1171,  1175,  1179,  1185,  1189,  1193,  1199,  1209,  1210,
    1221,  1226,  1231,  1238,  1246,  1268,  1278,  1291,  1305,  1312,
    1319,  1326
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INT_NUMBER",
  "FLOAT_NUMBER", "STRING_VALUE", "INT", "DOUBLE", "FLOAT", "CHAR",
  "STRING", "BOOLEAN", "NULL_VALUE", "VOID", "STRUCT", "ENUM", "TRUE",
  "FALSE", "WHILE", "DO", "SWITCH", "CASE", "DEFAULT", "IF", "ELSE",
  "ELSE_IF", "FOR", "CONTINUE", "BREAK", "CONST", "STATIC", "RETURN",
  "MAIN", "SCAN", "PRINT", "OPEN_PAREN", "CLOSE_PAREN", "OPEN_BRACK",
  "CLOSE_BRACK", "BLOCK_BEGIN", "BLOCK_END", "SEMI", "COLON", "DOT",
  "COMMA", "AMPERSAND", "PLUS", "MINUS", "DIV", "MULT", "INCREMENT",
  "DECREMENT", "MODULE", "ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "EQ", "NEQ",
  "LT", "GT", "LE", "GE", "AND", "OR", "NOT", "$accept", "prog",
  "decs_var", "dec_var", "type_modifiers", "type_modifier", "type", "ids",
  "atomo", "dims", "p_values", "expr", "term", "factor", "value",
  "assigns", "assign_def", "assign_mat", "subprograms", "subprogram",
  "proc", "function", "params", "param", "stmts", "stmt", "scan_stmt",
  "print_stmt", "print_content", "conditional_stmt", "if_stmt",
  "else_if_stmt", "logic_expr", "c_term", "comp", "comp_op", "logic_op",
  "switch_stmt", "switch_cases", "iteration_stmt", "while_stmt",
  "for_stmt", "dowhile_stmt", "function_call", "args", "arg", "principal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-205)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-124)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     417,    -7,  -205,  -205,  -205,  -205,  -205,  -205,    13,  -205,
    -205,  -205,    14,   368,   417,   497,   131,     2,  -205,    20,
    -205,   160,   266,   -27,    23,  -205,    35,    28,    39,    18,
     378,  -205,  -205,   378,  -205,    15,    85,  -205,   151,    89,
     109,   159,    49,  -205,   426,  -205,  -205,  -205,  -205,   266,
      84,   147,  -205,   405,   176,  -205,   118,  -205,   262,   445,
    -205,   286,   136,   318,   144,   130,   146,   378,  -205,  -205,
     180,   185,   218,    31,   190,   266,    43,  -205,    57,  -205,
      30,   266,     9,    84,  -205,  -205,  -205,    71,  -205,  -205,
      84,   266,   266,   266,   266,   266,   266,   266,    84,  -205,
     262,   447,  -205,   165,   170,   205,   191,    12,   193,   201,
     335,  -205,   266,    48,   137,  -205,   238,   353,  -205,   239,
     443,  -205,   207,   266,   166,     5,  -205,  -205,   252,   270,
     258,  -205,  -205,  -205,  -205,   176,   176,   176,   176,  -205,
    -205,  -205,  -205,   254,  -205,  -205,   275,   279,   283,   388,
      84,   320,   284,   497,   291,   298,   308,  -205,   312,   266,
     219,  -205,   311,   313,  -205,   266,   266,   315,  -205,   326,
    -205,   316,  -205,  -205,   388,   327,   138,   334,   331,   330,
     338,   345,   357,   366,  -205,  -205,   369,   388,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,
     388,  -205,   388,   371,  -205,   266,   374,  -205,   377,  -205,
     379,  -205,   389,  -205,   266,  -205,   390,   388,   232,   388,
     404,   232,   427,    30,   251,  -205,  -205,   400,   413,   388,
     408,  -205,   266,  -205,   409,   418,  -205,   425,   107,  -205,
    -205,   424,    67,  -205,  -205,   428,   464,   202,   232,   431,
     399,   432,   358,    62,  -205,   266,   441,   433,   435,  -205,
     454,  -205,    42,  -205,  -205,  -205,  -205,  -205,  -205,   266,
     410,  -205,  -205,  -205,   232,   478,   473,   471,    91,   470,
     305,  -205,   472,   266,   474,   266,  -205,   475,  -205,   358,
     388,  -205,   477,   479,   388,   266,  -205,   468,  -205,   358,
     480,   476,  -205,   481,   232,   498,   482,   196,  -205,   483,
    -205,   221,   450,   502,   110,   486,  -205,   485,   487,   488,
     489,   492,   250,   388,  -205,   388,   388,   388,   232,   493,
     506,   494,   505,   495,   496,   240,   388,  -205,   498,  -205,
    -205,   499,   500,  -205,   388,  -205,   501,  -205
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,    35,    36,    37,    38,    39,    40,    34,    33,
      31,    32,     0,     0,     6,     0,    29,     0,     8,    78,
      79,     0,     0,     0,     0,     1,     0,     0,     0,     0,
      84,    86,    87,     5,     7,     0,    34,    30,    44,     0,
       0,     0,    41,    80,    44,    74,    75,    76,    77,     0,
      49,     0,    69,     0,    63,    67,    73,    72,    44,     0,
      73,     0,     0,     0,     0,     0,     0,     4,    85,     3,
      44,     0,     0,     0,     0,     0,    45,    46,    47,     9,
       0,     0,     0,    55,    70,    71,    45,     0,    50,    47,
      53,     0,     0,     0,     0,     0,     0,     0,    51,    81,
      44,     0,    27,     0,     0,     0,     0,     0,     0,    92,
       0,     2,     0,    45,    47,    13,     0,     0,    48,     0,
      57,    12,     0,     0,     0,    44,    42,    43,     0,   149,
       0,   148,    56,    68,    54,    59,    60,    61,    62,    65,
      64,    66,    52,    45,    82,    26,     0,     0,     0,     0,
      96,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       0,    28,     0,     0,    10,     0,     0,     0,    19,     0,
     147,     0,    83,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,   100,     0,    97,   104,   105,
     102,   112,   113,   103,   140,   141,   142,   101,    95,    94,
       0,    93,     0,     0,    14,     0,     0,    22,     0,    25,
       0,    58,     0,    17,     0,   146,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   151,    98,     0,     0,     0,
       0,    20,     0,    23,     0,     0,    89,     0,    44,   124,
     125,     0,     0,   121,   126,     0,     0,     0,     0,     0,
      76,     0,   109,     0,   150,     0,     0,     0,     0,    11,
       0,    88,    45,   128,   129,   133,   132,   131,   130,     0,
       0,   134,   135,   136,     0,     0,     0,     0,     0,     0,
       0,   108,     0,     0,     0,     0,    15,     0,    18,   127,
       0,   120,     0,     0,     0,     0,   106,   111,   107,   110,
       0,     0,    21,     0,     0,   138,     0,     0,    91,     0,
     143,     0,     0,     0,   114,     0,    90,     0,     0,     0,
       0,     0,   117,     0,   145,     0,     0,     0,     0,     0,
     119,     0,     0,     0,     0,     0,     0,   144,   138,   137,
     115,     0,     0,   139,     0,   116,     0,   118
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -205,  -205,    -1,     6,  -205,   522,    24,     0,   -14,     3,
     -45,   -21,   246,   -87,   -19,    11,  -205,  -205,   -11,  -205,
    -205,  -205,   -81,  -205,  -104,  -205,  -205,  -205,   260,  -205,
    -205,   229,  -204,   271,  -205,  -205,  -205,  -205,   206,  -205,
    -205,  -205,  -205,  -142,  -205,  -205,   517
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    12,    13,   184,    15,    16,    17,    41,    52,    86,
     119,   120,    54,    55,    60,   185,    19,    20,    29,    30,
      31,    32,   108,   109,   186,   187,   188,   189,   253,   190,
     191,   330,   242,   243,   244,   269,   274,   192,   313,   193,
     194,   195,   196,    57,   130,   131,    33
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    59,    56,    42,    23,    38,    14,   197,   139,   140,
     141,    18,   125,    34,    25,   150,    24,   247,    70,    68,
      14,    42,    69,     1,   148,    18,    62,    61,    87,   155,
      43,    21,   197,   125,   116,    72,   127,    28,    64,    35,
     101,    76,    66,    21,   278,   197,   128,    22,    39,    74,
      21,    27,    40,    88,    28,    39,   111,    28,   197,    51,
     197,    39,   104,    63,    65,    71,   126,   156,    42,    14,
     216,   117,   201,   113,    18,   197,    39,   197,   167,  -123,
      51,   124,   129,   226,  -123,   121,   132,   197,    73,   107,
     157,    28,    77,   134,    81,    21,   227,   122,   228,   282,
     311,   142,   158,   143,   270,  -123,  -123,  -123,   133,   283,
     151,   123,    78,   237,   206,   245,   163,   160,    91,    92,
     211,   212,    21,    14,   335,   256,    93,    94,    18,   107,
     271,   272,   273,   295,   107,   320,   321,     2,     3,     4,
       5,     6,     7,    82,  -122,    21,    36,     9,   197,  -122,
      89,    74,   197,   198,   271,   272,   273,    98,    84,    85,
     230,    10,    11,    44,    45,    46,    47,   106,   284,   235,
    -122,  -122,  -122,    48,    82,    21,    21,   107,   102,    23,
     105,   197,   110,   197,   197,   197,   303,   258,   114,    21,
     306,   159,    22,   118,   197,    74,    49,   241,   301,    50,
     241,    79,   197,   252,    80,    75,    39,   145,   168,   249,
      51,   146,     2,     3,     4,     5,     6,     7,    21,   331,
     169,   332,   333,   334,    74,    95,    96,   241,   248,    97,
     152,   149,   342,   315,   112,   238,    45,    46,    47,   277,
     346,   262,   147,    91,    92,    48,   153,   166,   289,   239,
     240,    93,    94,   241,    58,    45,    46,   250,   317,   252,
     115,   207,   299,    80,    48,   271,   272,   273,    49,    58,
      45,    46,    47,   208,   307,   329,   321,   341,    39,    48,
     161,   164,    51,   241,   271,   272,   273,    49,   251,   100,
      45,    46,    47,   318,   170,   171,   172,    39,    82,    48,
      21,    51,    49,   271,   272,   273,    74,   241,    58,    45,
      46,   250,    39,    84,    85,    80,    51,   173,    48,   174,
     175,     1,    49,   199,   200,     2,     3,     4,     5,     6,
       7,   202,    39,     8,     9,   203,    51,   135,   136,   137,
     138,    49,     2,     3,     4,     5,     6,     7,    10,    11,
     204,    39,   205,   209,   210,    51,     1,   213,   215,   103,
       2,     3,     4,     5,     6,     7,   214,   217,     8,     9,
     218,   219,   154,   220,   221,     2,     3,     4,     5,     6,
       7,   222,    26,    10,    11,     2,     3,     4,     5,     6,
       7,   176,    26,   223,   162,     2,     3,     4,     5,     6,
       7,    27,   224,     8,     9,    91,    92,   177,   178,   179,
     225,   229,   180,    93,    94,   181,   231,   232,    10,    11,
       1,   233,   182,   183,     2,     3,     4,     5,     6,     7,
     234,   236,     8,     9,     2,     3,     4,     5,     6,     7,
     246,   254,     8,     9,    90,   255,   280,    10,    11,   257,
     290,   259,    91,    92,    45,    46,    47,    10,    11,   260,
      93,    94,    82,    48,    21,    83,   261,   276,   279,   275,
      74,    91,    92,   285,   281,   286,   287,    84,    85,    93,
      94,   263,   264,   265,   266,   267,   268,    99,   165,   144,
      91,    92,    91,    92,    91,    92,   288,   292,    93,    94,
      93,    94,    93,    94,     2,     3,     4,     5,     6,     7,
     293,   294,   296,   304,   298,   283,   300,   302,   309,   305,
     312,   308,   310,   314,   316,   319,   323,   324,   328,   327,
     325,   326,   321,   336,   338,   337,   339,   340,    37,   344,
     297,   345,   347,   322,   343,   291,    67
};

static const yytype_int16 yycheck[] =
{
      21,    22,    21,    17,     1,     3,     0,   149,    95,    96,
      97,     0,     3,    14,     0,     3,     3,   221,     3,    30,
      14,    35,    33,     3,   105,    14,     3,    54,    49,   110,
      19,    38,   174,     3,     3,    35,    81,    13,     3,    15,
      61,    38,     3,    38,   248,   187,    37,    54,    46,    44,
      38,    33,    50,    50,    30,    46,    67,    33,   200,    50,
     202,    46,    63,    40,    36,    50,    80,   112,    82,    63,
     174,    40,   153,    70,    63,   217,    46,   219,   123,    37,
      50,    78,    82,   187,    42,    42,    83,   229,     3,    65,
      42,    67,     3,    90,    45,    38,   200,    54,   202,    37,
     304,    98,    54,   100,    37,    63,    64,    65,    37,    47,
     107,    54,     3,   217,   159,   219,   117,   114,    47,    48,
     165,   166,    38,   117,   328,   229,    55,    56,   117,   105,
      63,    64,    65,    42,   110,    25,    26,     7,     8,     9,
      10,    11,    12,    36,    37,    38,    15,    16,   290,    42,
       3,    44,   294,   150,    63,    64,    65,    39,    51,    52,
     205,    30,    31,     3,     4,     5,     6,    37,   255,   214,
      63,    64,    65,    13,    36,    38,    38,   153,    42,   176,
      36,   323,    36,   325,   326,   327,   290,   232,     3,    38,
     294,    54,    54,     3,   336,    44,    36,   218,   285,    39,
     221,    42,   344,   224,    45,    54,    46,    42,    42,   223,
      50,    41,     7,     8,     9,    10,    11,    12,    38,   323,
      54,   325,   326,   327,    44,    49,    50,   248,   222,    53,
      37,    40,   336,    37,    54,     3,     4,     5,     6,    37,
     344,   238,    37,    47,    48,    13,    45,    40,   269,    17,
      18,    55,    56,   274,     3,     4,     5,     6,    37,   280,
      42,    42,   283,    45,    13,    63,    64,    65,    36,     3,
       4,     5,     6,    54,   295,    25,    26,    37,    46,    13,
      42,    42,    50,   304,    63,    64,    65,    36,    37,     3,
       4,     5,     6,   312,    42,    37,    42,    46,    36,    13,
      38,    50,    36,    63,    64,    65,    44,   328,     3,     4,
       5,     6,    46,    51,    52,    45,    50,    42,    13,    40,
      37,     3,    36,     3,    40,     7,     8,     9,    10,    11,
      12,    40,    46,    15,    16,    37,    50,    91,    92,    93,
      94,    36,     7,     8,     9,    10,    11,    12,    30,    31,
      42,    46,    40,    42,    41,    50,     3,    42,    42,    41,
       7,     8,     9,    10,    11,    12,    40,    40,    15,    16,
      36,    40,    37,    43,    36,     7,     8,     9,    10,    11,
      12,    36,    14,    30,    31,     7,     8,     9,    10,    11,
      12,     3,    14,    36,    41,     7,     8,     9,    10,    11,
      12,    33,    36,    15,    16,    47,    48,    19,    20,    21,
      41,    40,    24,    55,    56,    27,    42,    40,    30,    31,
       3,    42,    34,    35,     7,     8,     9,    10,    11,    12,
      41,    41,    15,    16,     7,     8,     9,    10,    11,    12,
      36,    41,    15,    16,    39,    32,    47,    30,    31,    41,
      40,    42,    47,    48,     4,     5,     6,    30,    31,    41,
      55,    56,    36,    13,    38,    39,    41,     3,    37,    41,
      44,    47,    48,    32,    42,    42,    41,    51,    52,    55,
      56,    57,    58,    59,    60,    61,    62,    42,    45,    42,
      47,    48,    47,    48,    47,    48,    42,    19,    55,    56,
      55,    56,    55,    56,     7,     8,     9,    10,    11,    12,
      37,    40,    42,    36,    42,    47,    42,    42,    42,    40,
      22,    41,    41,    41,    41,    23,    40,    42,    36,    40,
      43,    43,    26,    40,    29,    41,    41,    41,    16,    40,
     280,    41,    41,   314,   338,   274,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     8,     9,    10,    11,    12,    15,    16,
      30,    31,    67,    68,    69,    70,    71,    72,    81,    82,
      83,    38,    54,    75,     3,     0,    14,    33,    72,    84,
      85,    86,    87,   112,    68,    72,    15,    71,     3,    46,
      50,    73,    74,    81,     3,     4,     5,     6,    13,    36,
      39,    50,    74,    77,    78,    79,    80,   109,     3,    77,
      80,    54,     3,    40,     3,    36,     3,   112,    84,    84,
       3,    50,    73,     3,    44,    54,    75,     3,     3,    42,
      45,    45,    36,    39,    51,    52,    75,    77,    75,     3,
      39,    47,    48,    55,    56,    49,    50,    53,    39,    42,
       3,    77,    42,    41,    68,    36,    37,    72,    88,    89,
      36,    84,    54,    75,     3,    42,     3,    40,     3,    76,
      77,    42,    54,    54,    75,     3,    74,    76,    37,    73,
     110,   111,    75,    37,    75,    78,    78,    78,    78,    79,
      79,    79,    75,    75,    42,    42,    41,    37,    88,    40,
       3,    75,    37,    45,    37,    88,    76,    42,    54,    54,
      75,    42,    41,    68,    42,    45,    40,    76,    42,    54,
      42,    37,    42,    42,    40,    37,     3,    19,    20,    21,
      24,    27,    34,    35,    69,    81,    90,    91,    92,    93,
      95,    96,   103,   105,   106,   107,   108,   109,    75,     3,
      40,    88,    40,    37,    42,    40,    76,    42,    54,    42,
      41,    76,    76,    42,    40,    42,    90,    40,    36,    40,
      43,    36,    36,    36,    36,    41,    90,    90,    90,    40,
      76,    42,    40,    42,    41,    76,    41,    90,     3,    17,
      18,    77,    98,    99,   100,    90,    36,    98,    69,    74,
       6,    37,    77,    94,    41,    32,    90,    41,    76,    42,
      41,    41,    75,    57,    58,    59,    60,    61,    62,   101,
      37,    63,    64,    65,   102,    41,     3,    37,    98,    37,
      47,    42,    37,    47,    79,    32,    42,    41,    42,    77,
      40,    99,    19,    37,    40,    42,    42,    94,    42,    77,
      42,    79,    42,    90,    36,    40,    90,    77,    41,    42,
      41,    98,    22,   104,    41,    37,    41,    37,    80,    23,
      25,    26,    97,    40,    42,    43,    43,    40,    36,    25,
      97,    90,    90,    90,    90,    98,    40,    41,    29,    41,
      41,    37,    90,   104,    40,    41,    90,    41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    67,    67,    67,    68,    68,    68,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    70,
      70,    71,    71,    71,    71,    72,    72,    72,    72,    72,
      72,    73,    73,    73,    74,    74,    74,    74,    74,    75,
      75,    75,    75,    75,    75,    75,    75,    76,    76,    77,
      77,    77,    77,    77,    78,    78,    78,    78,    79,    79,
      79,    79,    79,    79,    80,    80,    80,    80,    81,    81,
      81,    82,    83,    83,    84,    84,    85,    85,    86,    86,
      87,    87,    88,    88,    89,    89,    89,    90,    90,    91,
      91,    91,    91,    91,    91,    91,    92,    93,    93,    94,
      94,    94,    95,    95,    96,    96,    96,    96,    97,    97,
      98,    98,    99,    99,    99,    99,    99,   100,   101,   101,
     101,   101,   101,   101,   102,   102,   102,   103,   104,   104,
     105,   105,   105,   106,   107,   108,   109,   109,   110,   111,
     112,   112
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     3,     2,     0,     2,     1,     3,
       5,     8,     4,     4,     6,     9,     5,     6,     9,     5,
       7,    10,     6,     7,     6,     6,     5,     4,     5,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     2,     2,     2,     3,     2,
       3,     3,     4,     3,     4,     3,     4,     1,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     1,     3,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     5,     6,     1,     2,     1,     1,     8,     7,
      11,    10,     1,     3,     3,     3,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     5,     5,     4,     1,
       3,     3,     1,     1,     7,    11,    12,     8,     7,     2,
       3,     1,     1,     2,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,    11,     0,     6,
       1,     1,     1,     7,    10,     9,     5,     4,     1,     1,
       7,     6
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* prog: decs_var subprograms principal subprograms  */
#line 76 "parser.y"
                                                  { fprintf(yyout, "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n%s\n%s\n%s\n%s", (yyvsp[-3].rec)->code, (yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code);
	 									freeRecord((yyvsp[-3].rec));
										freeRecord((yyvsp[-2].rec));
										freeRecord((yyvsp[-1].rec));
										freeRecord((yyvsp[0].rec));
	 								  }
#line 1675 "y.tab.c"
    break;

  case 3: /* prog: decs_var principal subprograms  */
#line 82 "parser.y"
                                          { fprintf(yyout, "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n%s\n%s\n%s", (yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code);
	 									freeRecord((yyvsp[-2].rec));
										freeRecord((yyvsp[-1].rec));
										freeRecord((yyvsp[0].rec));
	 								  }
#line 1685 "y.tab.c"
    break;

  case 4: /* prog: decs_var subprograms principal  */
#line 87 "parser.y"
                                          { fprintf(yyout, "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n%s\n%s\n%s", (yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code);
	 									freeRecord((yyvsp[-2].rec));
										freeRecord((yyvsp[-1].rec));
										freeRecord((yyvsp[0].rec));
	 								  }
#line 1695 "y.tab.c"
    break;

  case 5: /* prog: decs_var principal  */
#line 92 "parser.y"
                              { fprintf(yyout, "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n%s\n%s", (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code);
							freeRecord((yyvsp[-1].rec));
	 						freeRecord((yyvsp[0].rec));
	 					  }
#line 1704 "y.tab.c"
    break;

  case 6: /* decs_var: %empty  */
#line 98 "parser.y"
                                                {(yyval.rec) = createRecord("","");}
#line 1710 "y.tab.c"
    break;

  case 7: /* decs_var: dec_var decs_var  */
#line 99 "parser.y"
                                    {char *s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code,"","","");
							 (yyval.rec) = createRecord(s, (yyvsp[-1].rec)->type);
							 freeRecord((yyvsp[-1].rec));
							 freeRecord((yyvsp[0].rec));
							 free(s);
		 					}
#line 1721 "y.tab.c"
    break;

  case 8: /* decs_var: assigns  */
#line 105 "parser.y"
                           {char *s = cat((yyvsp[0].rec)->code, "", "", "","");
					(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
					freeRecord((yyvsp[0].rec));
					free(s);
		 		   }
#line 1731 "y.tab.c"
    break;

  case 9: /* dec_var: type ids SEMI  */
#line 112 "parser.y"
                        {	add('V', (yyvsp[-1].rec)->code);
							char *s = cat((yyvsp[-2].rec)->code, " ", (yyvsp[-1].rec)->code, ";","");
						  	
						  	(yyval.rec) = createRecord(s, (yyvsp[-2].rec)->code);
							freeRecord((yyvsp[-2].rec));
						  	freeRecord((yyvsp[-1].rec));
						  	free(s);
						}
#line 1744 "y.tab.c"
    break;

  case 10: /* dec_var: type ID ASSIGN p_values SEMI  */
#line 120 "parser.y"
                                                { 	add('V', (yyvsp[-3].sValue));
											char *s1 = cat((yyvsp[-4].rec)->code, " ", (yyvsp[-3].sValue), "=", (yyvsp[-1].rec)->code);
											char *s2 = cat(s1, ";", "", "", "");

											if(strcmp((yyvsp[-4].rec)->code, "string") == 0 && strcmp((yyvsp[-1].rec)->type, "string") == 0){
												(yyval.rec) = createRecord(s2, (yyvsp[-4].rec)->code);
											} else if(verificar_calculo_numero_float_int((yyvsp[-4].rec)->code, (yyvsp[-1].rec)->type)){
												(yyval.rec) = createRecord(s2, (yyvsp[-4].rec)->code);
											}else {
												yyerror("Tipos incompativeis");
											}

											(yyval.rec) = createRecord(s2, (yyvsp[-4].rec)->code);
											freeRecord((yyvsp[-4].rec));
											freeRecord((yyvsp[-1].rec));
											free(s2);
											free(s1);
										}
#line 1767 "y.tab.c"
    break;

  case 11: /* dec_var: type ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI  */
#line 138 "parser.y"
                                                                          { add('V', (yyvsp[-6].sValue));
																	char *s1 = cat((yyvsp[-7].rec)->code, " ", (yyvsp[-6].sValue), (yyvsp[-5].rec)->code, "=");
																	char *s2 = cat(s1, "{", (yyvsp[-2].rec)->code, "}", ";");
																  	

																	if(strcmp((yyvsp[-7].rec)->code, "string") == 0 && strcmp((yyvsp[-2].rec)->type, "string") == 0){
																		(yyval.rec) = createRecord(s2, (yyvsp[-7].rec)->code);
																	} else if(verificar_calculo_numero_float_int((yyvsp[-7].rec)->code, (yyvsp[-2].rec)->type)){
																		(yyval.rec) = createRecord(s2, (yyvsp[-7].rec)->code);
																	}else {
																		yyerror("Tipos incompativeis");
																	}

																	freeRecord((yyvsp[-7].rec));
																	freeRecord((yyvsp[-5].rec));
																	freeRecord((yyvsp[-2].rec));
																	free(s2);
																	free(s1);
																  }
#line 1791 "y.tab.c"
    break;

  case 12: /* dec_var: type ID dims SEMI  */
#line 157 "parser.y"
                                    {	add('V', (yyvsp[-2].sValue));
								char *s = cat((yyvsp[-3].rec)->code, " ", (yyvsp[-2].sValue), (yyvsp[-1].rec)->code, ";");
								
								(yyval.rec) = createRecord(s, (yyvsp[-3].rec)->code);
								freeRecord((yyvsp[-3].rec));
								freeRecord((yyvsp[-1].rec));
								free(s);
							}
#line 1804 "y.tab.c"
    break;

  case 13: /* dec_var: type_modifiers type ids SEMI  */
#line 165 "parser.y"
                                               {	add('V', (yyvsp[-1].rec)->code);
											char *s1 = cat((yyvsp[-3].rec)->code, " ", (yyvsp[-2].rec)->code, " ", (yyvsp[-1].rec)->code);
											char *s2 = cat(s1, ";", "", "", "");
											
											(yyval.rec) = createRecord(s2, (yyvsp[-2].rec)->code);
											freeRecord((yyvsp[-3].rec));
											freeRecord((yyvsp[-2].rec));
											freeRecord((yyvsp[-1].rec));
											free(s2);
											free(s1);
									   }
#line 1820 "y.tab.c"
    break;

  case 14: /* dec_var: type_modifiers type ID ASSIGN p_values SEMI  */
#line 176 "parser.y"
                                                      {	add('V', (yyvsp[-3].sValue));
														char *s1 = cat((yyvsp[-5].rec)->code, " ", (yyvsp[-4].rec)->code, " ", (yyvsp[-3].sValue));
														char *s2 = cat(s1, "=", (yyvsp[-1].rec)->code, ";", "");
														
														if(strcmp((yyvsp[-4].rec)->code, "string") == 0 && strcmp((yyvsp[-1].rec)->type, "string") == 0){
															(yyval.rec) = createRecord(s2, (yyvsp[-4].rec)->code);
														} else if(verificar_calculo_numero_float_int((yyvsp[-4].rec)->code, (yyvsp[-1].rec)->type)){
															(yyval.rec) = createRecord(s2, (yyvsp[-4].rec)->code);
														}else {
															yyerror("Tipos incompativeis");
														}

														freeRecord((yyvsp[-5].rec));
														freeRecord((yyvsp[-4].rec));
														freeRecord((yyvsp[-1].rec));
														free(s2);
														free(s1);
													  }
#line 1843 "y.tab.c"
    break;

  case 15: /* dec_var: type_modifiers type ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI  */
#line 194 "parser.y"
                                                                                         {	add('V', (yyvsp[-6].sValue));
																					char *s1 = cat((yyvsp[-8].rec)->code, " ", (yyvsp[-7].rec)->code, "", (yyvsp[-6].sValue));
																					char *s2 = cat(s1, (yyvsp[-5].rec)->code, "=", "{", (yyvsp[-2].rec)->code);
																					char *s3 = cat(s2, "}", ";", "", "");
																					
																					if(strcmp((yyvsp[-7].rec)->code, "string") == 0 && strcmp((yyvsp[-2].rec)->type, "string") == 0){
																						(yyval.rec) = createRecord(s3, (yyvsp[-7].rec)->code);
																					} else if(verificar_calculo_numero_float_int((yyvsp[-7].rec)->code, (yyvsp[-2].rec)->type)){
																						(yyval.rec) = createRecord(s3, (yyvsp[-7].rec)->code);
																					}else {
																						yyerror("Tipos incompativeis");
																					}

																					freeRecord((yyvsp[-8].rec));
																					freeRecord((yyvsp[-7].rec));
																					freeRecord((yyvsp[-5].rec));
																					freeRecord((yyvsp[-2].rec));
																					free(s3);
																					free(s2);
																					free(s1);
																				 }
#line 1869 "y.tab.c"
    break;

  case 16: /* dec_var: type_modifiers type ID dims SEMI  */
#line 215 "parser.y"
                                                   {	add('V', (yyvsp[-2].sValue));
												char *s1 = cat((yyvsp[-4].rec)->code, " ", (yyvsp[-3].rec)->code, " ", (yyvsp[-2].sValue));
												char *s2 = cat(s1, (yyvsp[-1].rec)->code, ";", "", "");
												
												(yyval.rec) = createRecord(s2, (yyvsp[-3].rec)->code);
												freeRecord((yyvsp[-4].rec));
												freeRecord((yyvsp[-3].rec));
												freeRecord((yyvsp[-1].rec));
												free(s2);
												free(s1);
										   }
#line 1885 "y.tab.c"
    break;

  case 17: /* dec_var: type MULT ID ASSIGN p_values SEMI  */
#line 226 "parser.y"
                                                    {	add('V', (yyvsp[-3].sValue));
												char *s1 = cat((yyvsp[-5].rec)->code, " *", (yyvsp[-3].sValue), "=", (yyvsp[-1].rec)->code);
												char *s2 = cat(s1, ";", "", "", "");

												if(strcmp((yyvsp[-5].rec)->code, "string") == 0 && strcmp((yyvsp[-1].rec)->type, "string") == 0){
													(yyval.rec) = createRecord(s2, (yyvsp[-5].rec)->code);
												} else if(verificar_calculo_numero_float_int((yyvsp[-5].rec)->code, (yyvsp[-1].rec)->type)){
													(yyval.rec) = createRecord(s2, (yyvsp[-5].rec)->code);
												}else {
													yyerror("Tipos incompativeis");
												}
												
												freeRecord((yyvsp[-5].rec));
												freeRecord((yyvsp[-1].rec));
												free(s2);
												free(s1);
											}
#line 1907 "y.tab.c"
    break;

  case 18: /* dec_var: type MULT ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI  */
#line 243 "parser.y"
                                                                               {add('V', (yyvsp[-6].sValue));
																		char *s1 = cat((yyvsp[-8].rec)->code, " *", (yyvsp[-6].sValue), (yyvsp[-5].rec)->code, "=");
																		char *s2 = cat(s1, "{", (yyvsp[-2].rec)->code, "}", ";");
																		
																		(yyval.rec) = createRecord(s2, (yyvsp[-8].rec)->code);
																		freeRecord((yyvsp[-8].rec));
																		freeRecord((yyvsp[-5].rec));
																		freeRecord((yyvsp[-2].rec));
																		free(s2);
																		free(s1);
																	   }
#line 1923 "y.tab.c"
    break;

  case 19: /* dec_var: type MULT ID dims SEMI  */
#line 254 "parser.y"
                                         {	add('V', (yyvsp[-2].sValue));
									char *s = cat((yyvsp[-4].rec)->code, " *", (yyvsp[-2].sValue), (yyvsp[-1].rec)->code, ";");
									
									(yyval.rec) = createRecord(s, (yyvsp[-4].rec)->code);
									freeRecord((yyvsp[-4].rec));
									freeRecord((yyvsp[-1].rec));
									free(s);
								 }
#line 1936 "y.tab.c"
    break;

  case 20: /* dec_var: type_modifiers type MULT ID ASSIGN p_values SEMI  */
#line 262 "parser.y"
                                                                   {	add('V', (yyvsp[-3].sValue));
																char *s1 = cat((yyvsp[-6].rec)->code, " ", (yyvsp[-5].rec)->code, " *", (yyvsp[-3].sValue));
																char *s2 = cat(s1, "=", (yyvsp[-1].rec)->code, ";", "");
																
																if(strcmp((yyvsp[-5].rec)->code, "string") == 0 && strcmp((yyvsp[-1].rec)->type, "string") == 0){
																	(yyval.rec) = createRecord(s2, (yyvsp[-5].rec)->code);
																} else if(verificar_calculo_numero_float_int((yyvsp[-5].rec)->code, (yyvsp[-1].rec)->type)){
																	(yyval.rec) = createRecord(s2, (yyvsp[-5].rec)->code);
																}else {
																	yyerror("Tipos incompativeis");
																}

																freeRecord((yyvsp[-6].rec));
																freeRecord((yyvsp[-5].rec));
																freeRecord((yyvsp[-1].rec));
																free(s2);
																free(s1);
														   }
#line 1959 "y.tab.c"
    break;

  case 21: /* dec_var: type_modifiers type MULT ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI  */
#line 280 "parser.y"
                                                                                              {	add('V', (yyvsp[-6].sValue));
																						char *s1 = cat((yyvsp[-9].rec)->code, " ", (yyvsp[-8].rec)->code, " *", (yyvsp[-6].sValue));
																						char *s2 = cat(s1, (yyvsp[-5].rec)->code, "=", "{", (yyvsp[-2].rec)->code);
																						char *s3 = cat(s2, "}", ";", "", "");
																						
																						if(strcmp((yyvsp[-8].rec)->code, "string") == 0 && strcmp((yyvsp[-2].rec)->type, "string") == 0){
																							(yyval.rec) = createRecord(s2, (yyvsp[-8].rec)->code);
																						} else if(verificar_calculo_numero_float_int((yyvsp[-8].rec)->code, (yyvsp[-2].rec)->type)){
																							(yyval.rec) = createRecord(s2, (yyvsp[-8].rec)->code);
																						}else {
																							yyerror("Tipos incompativeis");
																						}

																						freeRecord((yyvsp[-9].rec));
																						freeRecord((yyvsp[-8].rec));
																						freeRecord((yyvsp[-5].rec));
																						freeRecord((yyvsp[-2].rec));
																						free(s3);
																						free(s2);
																						free(s1);
																					  }
#line 1985 "y.tab.c"
    break;

  case 22: /* dec_var: type_modifiers type MULT ID dims SEMI  */
#line 301 "parser.y"
                                                        {	add('V', (yyvsp[-2].sValue));
													char *s1 = cat((yyvsp[-5].rec)->code, " ", (yyvsp[-4].rec)->code, " *", (yyvsp[-2].sValue));
													char *s2 = cat(s1, (yyvsp[-1].rec)->code, ";", "", "");
													(yyval.rec) = createRecord(s2, (yyvsp[-4].rec)->code);
													freeRecord((yyvsp[-5].rec));
													freeRecord((yyvsp[-4].rec));
													freeRecord((yyvsp[-1].rec));
													free(s2);
													free(s1);
												}
#line 2000 "y.tab.c"
    break;

  case 23: /* dec_var: type_modifier STRUCT ID BLOCK_BEGIN decs_var BLOCK_END SEMI  */
#line 311 "parser.y"
                                                                              {	add('V', (yyvsp[-4].sValue));
																		char *s1 = cat((yyvsp[-6].rec)->code, " struct ", (yyvsp[-4].sValue), " {\n", (yyvsp[-2].rec)->code);
																		char *s2 = cat(s1, "\n};", "", "", "");
																		freeRecord((yyvsp[-6].rec));
																		freeRecord((yyvsp[-2].rec));
																		(yyval.rec) = createRecord(s2, "struct");
																		free(s2);
																		free(s1);
																	  }
#line 2014 "y.tab.c"
    break;

  case 24: /* dec_var: STRUCT ID BLOCK_BEGIN decs_var BLOCK_END SEMI  */
#line 320 "parser.y"
                                                                {	add('V', (yyvsp[-4].sValue));
															char *s = cat("struct ", (yyvsp[-4].sValue), " {\n", (yyvsp[-2].rec)->code, "\n};");
															freeRecord((yyvsp[-2].rec));
															(yyval.rec) = createRecord(s, "struct");
															free(s);
														}
#line 2025 "y.tab.c"
    break;

  case 25: /* dec_var: type_modifier STRUCT ID BLOCK_BEGIN BLOCK_END SEMI  */
#line 326 "parser.y"
                                                                     {	add('V', (yyvsp[-3].sValue));
																char *s = cat((yyvsp[-5].rec)->code ," struct ", (yyvsp[-3].sValue) ," {", "};");
																freeRecord((yyvsp[-5].rec));
																(yyval.rec) = createRecord(s, "struct");
																free(s);
															 }
#line 2036 "y.tab.c"
    break;

  case 26: /* dec_var: STRUCT ID BLOCK_BEGIN BLOCK_END SEMI  */
#line 332 "parser.y"
                                                       {add('V', (yyvsp[-3].sValue));
												char *s = cat("struct", (yyvsp[-3].sValue) ,"{};", "", "");
												(yyval.rec) = createRecord(s, "struct");
												free(s);
											   }
#line 2046 "y.tab.c"
    break;

  case 27: /* dec_var: STRUCT ID ID SEMI  */
#line 337 "parser.y"
                                    { 	add('V', (yyvsp[-1].sValue));
								char * s = cat("struct ", (yyvsp[-2].sValue), " ", (yyvsp[-1].sValue), ";");
								(yyval.rec) = createRecord(s, (yyvsp[-2].sValue));
								free(s);
							}
#line 2056 "y.tab.c"
    break;

  case 28: /* dec_var: type_modifier STRUCT ID ID SEMI  */
#line 342 "parser.y"
                                                  { add('V', (yyvsp[-1].sValue));
											char * s1 = cat( (yyvsp[-4].rec)->code, " struct ", (yyvsp[-2].sValue), " ", (yyvsp[-1].sValue));
											char * s2 = cat(s1, ";", "", "", "");
											freeRecord((yyvsp[-4].rec));
											(yyval.rec) = createRecord(s2, (yyvsp[-2].sValue));
											free(s2);
											free(s1);
										}
#line 2069 "y.tab.c"
    break;

  case 29: /* type_modifiers: type_modifier  */
#line 352 "parser.y"
                               {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
									freeRecord((yyvsp[0].rec));
									(yyval.rec) = createRecord(s, "");
									free(s);
							   }
#line 2079 "y.tab.c"
    break;

  case 30: /* type_modifiers: type_modifier type_modifier  */
#line 357 "parser.y"
                                                         {	char *s = cat((yyvsp[-1].rec)->code, " ", (yyvsp[0].rec)->code, "", "");
												freeRecord((yyvsp[-1].rec));
												freeRecord((yyvsp[0].rec));
												(yyval.rec) = createRecord(s, "");
												free(s);
			   								 }
#line 2090 "y.tab.c"
    break;

  case 31: /* type_modifier: CONST  */
#line 365 "parser.y"
                      {	(yyval.rec) = createRecord("const", "");
					  }
#line 2097 "y.tab.c"
    break;

  case 32: /* type_modifier: STATIC  */
#line 367 "parser.y"
                       {(yyval.rec) = createRecord("static", "");
			  		  }
#line 2104 "y.tab.c"
    break;

  case 33: /* type_modifier: ENUM  */
#line 369 "parser.y"
                                 {	(yyval.rec) = createRecord("enum", "");
			  		 }
#line 2111 "y.tab.c"
    break;

  case 34: /* type_modifier: STRUCT  */
#line 371 "parser.y"
                                   {(yyval.rec) = createRecord("struct", "");
			  		   }
#line 2118 "y.tab.c"
    break;

  case 35: /* type: INT  */
#line 375 "parser.y"
           {insert_type("int");
			(yyval.rec) = createRecord("int", "");
		   }
#line 2126 "y.tab.c"
    break;

  case 36: /* type: DOUBLE  */
#line 378 "parser.y"
              {	insert_type("double");
				(yyval.rec) = createRecord("double", "");
	 		  }
#line 2134 "y.tab.c"
    break;

  case 37: /* type: FLOAT  */
#line 381 "parser.y"
                 {	insert_type("float");
				(yyval.rec) = createRecord("float", "");
	 		 }
#line 2142 "y.tab.c"
    break;

  case 38: /* type: CHAR  */
#line 384 "parser.y"
                {	insert_type("char");
				(yyval.rec) = createRecord("char", "");
	 		}
#line 2150 "y.tab.c"
    break;

  case 39: /* type: STRING  */
#line 387 "parser.y"
                  {	insert_type("string");
				(yyval.rec) = createRecord("string", "");
	 		  }
#line 2158 "y.tab.c"
    break;

  case 40: /* type: BOOLEAN  */
#line 390 "parser.y"
                   {insert_type("boolean");
				(yyval.rec) = createRecord("bool", "");
	 		   }
#line 2166 "y.tab.c"
    break;

  case 41: /* ids: atomo  */
#line 395 "parser.y"
            {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
				freeRecord((yyvsp[0].rec));
				free(s);
			}
#line 2176 "y.tab.c"
    break;

  case 42: /* ids: ids COMMA atomo  */
#line 400 "parser.y"
                          {	
						if(strcmp((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type) != 0){
							yyerror("Não pode ter ids juntos com tipos diferentes");
						}
						char *s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");

						(yyval.rec) = createRecord(s, (yyvsp[-2].rec)->type);
						freeRecord((yyvsp[-2].rec));
						freeRecord((yyvsp[0].rec));
						free(s);
					  }
#line 2192 "y.tab.c"
    break;

  case 43: /* ids: atomo COMMA p_values  */
#line 411 "parser.y"
                           {
							if(strcmp((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type) != 0){
								yyerror("Não pode ter ids juntos com tipos diferentes");
							}
		
							char *s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
							
							(yyval.rec) = createRecord(s, (yyvsp[-2].rec)->type);
							freeRecord((yyvsp[-2].rec));
							freeRecord((yyvsp[0].rec));
							free(s);
						   }
#line 2209 "y.tab.c"
    break;

  case 44: /* atomo: ID  */
#line 425 "parser.y"
           {
			int index = search((yyvsp[0].sValue));

			if(index == -1){
				(yyval.rec) = createRecord((yyvsp[0].sValue), "");
			}else{
				(yyval.rec) = createRecord((yyvsp[0].sValue), symbol_table[index].data_type);
			}
			free((yyvsp[0].sValue));
		   }
#line 2224 "y.tab.c"
    break;

  case 45: /* atomo: ID dims  */
#line 435 "parser.y"
                {	
					int index = search((yyvsp[-1].sValue));

					char *s = cat((yyvsp[-1].sValue), (yyvsp[0].rec)->code, "", "", "");

	  				if(index == -1){
						(yyval.rec) = createRecord(s, "");
					}else{
						(yyval.rec) = createRecord(s, symbol_table[index].data_type);
					}

					freeRecord((yyvsp[0].rec));
					free(s);
	  		    }
#line 2243 "y.tab.c"
    break;

  case 46: /* atomo: AMPERSAND ID  */
#line 449 "parser.y"
                         {	
						int index = search((yyvsp[0].sValue));
						
						char *s = cat("&", (yyvsp[0].sValue), "", "", "");

						if(index == -1){
							(yyval.rec) = createRecord(s, "");
						}else{
							(yyval.rec) = createRecord(s, symbol_table[index].data_type);
						}
						free(s);
	  				 }
#line 2260 "y.tab.c"
    break;

  case 47: /* atomo: MULT ID  */
#line 461 "parser.y"
                    {	
					int index = search((yyvsp[0].sValue));

					char *s = cat("*", (yyvsp[0].sValue), "", "", "");

					if(index == -1){
						(yyval.rec) = createRecord(s, "");
					}else{
						(yyval.rec) = createRecord(s, symbol_table[index].data_type);
					}
					free(s);
	  			}
#line 2277 "y.tab.c"
    break;

  case 48: /* atomo: ID DOT ID  */
#line 473 "parser.y"
                      {	
					int index = search((yyvsp[0].sValue));
					char *s = cat((yyvsp[-2].sValue), ".", (yyvsp[0].sValue), "", "");

					if(index == -1){
						(yyval.rec) = createRecord(s, "");
					}else{
	  					(yyval.rec) = createRecord(s, symbol_table[index].data_type);
					}
					free(s);
	  			  }
#line 2293 "y.tab.c"
    break;

  case 49: /* dims: OPEN_BRACK CLOSE_BRACK  */
#line 486 "parser.y"
                              {	char *s = cat("[", "]", "", "", "");
								(yyval.rec) = createRecord(s, "");
								free(s);
							  }
#line 2302 "y.tab.c"
    break;

  case 50: /* dims: OPEN_BRACK CLOSE_BRACK dims  */
#line 490 "parser.y"
                                       {char *s = cat("[", "]", (yyvsp[0].rec)->code, "", "");
									freeRecord((yyvsp[0].rec));
									(yyval.rec) = createRecord(s, "");
									free(s);
	 							   }
#line 2312 "y.tab.c"
    break;

  case 51: /* dims: OPEN_BRACK value CLOSE_BRACK  */
#line 495 "parser.y"
                                        {	
										if(strcmp((yyvsp[-1].rec)->type,"int") != 0){
											yyerror("O valor do tamanho de uma matriz tem que ser um inteiro");
										}

										char *s = cat("[", (yyvsp[-1].rec)->code, "]", "", "");
										freeRecord((yyvsp[-1].rec));
										(yyval.rec) = createRecord(s, "");
										free(s);
	 								}
#line 2327 "y.tab.c"
    break;

  case 52: /* dims: OPEN_BRACK value CLOSE_BRACK dims  */
#line 505 "parser.y"
                                         {	
											if(strcmp((yyvsp[-2].rec)->type,"int") != 0){
												yyerror("O valor do tamanho de uma matriz tem que ser um inteiro");
											}
											
											char *s = cat("[", (yyvsp[-2].rec)->code, "]", (yyvsp[0].rec)->code, "");
											freeRecord((yyvsp[-2].rec));
											freeRecord((yyvsp[0].rec));
											(yyval.rec) = createRecord(s, "");
											free(s);
						 				 }
#line 2343 "y.tab.c"
    break;

  case 53: /* dims: OPEN_BRACK expr CLOSE_BRACK  */
#line 516 "parser.y"
                                       {
									if(strcmp((yyvsp[-1].rec)->type,"int") != 0){
										yyerror("O valor do tamanho de uma matriz tem que ser um inteiro");
									}
									
									char *s = cat("[", (yyvsp[-1].rec)->code, "]", "", "");
									freeRecord((yyvsp[-1].rec));
									(yyval.rec) = createRecord(s, "");
									free(s);
	 							   }
#line 2358 "y.tab.c"
    break;

  case 54: /* dims: OPEN_BRACK expr CLOSE_BRACK dims  */
#line 526 "parser.y"
                                        {	
											if(strcmp((yyvsp[-2].rec)->type,"int") != 0){
												yyerror("O valor do tamanho de uma matriz tem que ser um inteiro");
											}

											char *s = cat("[", (yyvsp[-2].rec)->code, "]", (yyvsp[0].rec)->code, "");
											freeRecord((yyvsp[-2].rec));
											freeRecord((yyvsp[0].rec));
											(yyval.rec) = createRecord(s, "");
											free(s);
	 									}
#line 2374 "y.tab.c"
    break;

  case 55: /* dims: OPEN_BRACK ID CLOSE_BRACK  */
#line 537 "parser.y"
                                     {	char *s = cat("[", (yyvsp[-1].sValue), "]", "", "");
									(yyval.rec) = createRecord(s, "");
									free(s);
	 							 }
#line 2383 "y.tab.c"
    break;

  case 56: /* dims: OPEN_BRACK ID CLOSE_BRACK dims  */
#line 541 "parser.y"
                                      {	char *s = cat("[", (yyvsp[-2].sValue), "]", (yyvsp[0].rec)->code, "");
										freeRecord((yyvsp[0].rec));
										(yyval.rec) = createRecord(s, "");
										free(s);
	 								  }
#line 2393 "y.tab.c"
    break;

  case 57: /* p_values: expr  */
#line 548 "parser.y"
                {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
					(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
					freeRecord((yyvsp[0].rec));
					free(s);
				}
#line 2403 "y.tab.c"
    break;

  case 58: /* p_values: expr COMMA p_values  */
#line 553 "parser.y"
                                       {
								if(strcmp((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type) !=  0){
									yyerror("Não pode ter ids juntos com tipos diferentes");
								}

								char *s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
								
								(yyval.rec) = createRecord(s, (yyvsp[-2].rec)->type);
								freeRecord((yyvsp[-2].rec));
								freeRecord((yyvsp[0].rec));
								free(s);
		 					   }
#line 2420 "y.tab.c"
    break;

  case 59: /* expr: expr PLUS term  */
#line 567 "parser.y"
                      {	
						if(!verificar_calculo_numero_float_int((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type)){
							yyerror("Não é possivel realizar operações matematicas entre esses tipos");
						}

						char *s = cat((yyvsp[-2].rec)->code, "+", (yyvsp[0].rec)->code,"", "");
						
						(yyval.rec) = createRecord(s, tipo_resultado_operacao((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type));
						freeRecord((yyvsp[-2].rec));
						freeRecord((yyvsp[0].rec));
						free(s);
					  }
#line 2437 "y.tab.c"
    break;

  case 60: /* expr: expr MINUS term  */
#line 579 "parser.y"
                           {

						if(!verificar_calculo_numero_float_int((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type)){
							yyerror("Não é possivel realizar operações matematicas entre esses tipos");
						}

						char *s = cat((yyvsp[-2].rec)->code, "-", (yyvsp[0].rec)->code,"", "");
						
						(yyval.rec) = createRecord(s, tipo_resultado_operacao((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type));
						freeRecord((yyvsp[-2].rec));
						freeRecord((yyvsp[0].rec));
						free(s);	
	 				   }
#line 2455 "y.tab.c"
    break;

  case 61: /* expr: expr ADD_ASSIGN term  */
#line 592 "parser.y"
                                {	
								if(!verificar_calculo_numero_float_int((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type)){
									yyerror("Não é possivel realizar operações matematicas entre esses tipos");
								}

								char *s = cat((yyvsp[-2].rec)->code, "+=", (yyvsp[0].rec)->code,"", "");
							
								(yyval.rec) = createRecord(s, tipo_resultado_operacao((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type));
								freeRecord((yyvsp[-2].rec));
								freeRecord((yyvsp[0].rec));
								free(s);
	 					    }
#line 2472 "y.tab.c"
    break;

  case 62: /* expr: expr SUB_ASSIGN term  */
#line 604 "parser.y"
                                {	
								if(!verificar_calculo_numero_float_int((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type)){
									yyerror("Não é possivel realizar operações matematicas entre esses tipos");
								}

								char *s = cat((yyvsp[-2].rec)->code, "-=", (yyvsp[0].rec)->code,"", "");
								(yyval.rec) = createRecord(s, tipo_resultado_operacao((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type));
								freeRecord((yyvsp[-2].rec));
								freeRecord((yyvsp[0].rec));
								free(s);
	 						}
#line 2488 "y.tab.c"
    break;

  case 63: /* expr: term  */
#line 615 "parser.y"
                {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
				freeRecord((yyvsp[0].rec));
				free(s);
	 		}
#line 2498 "y.tab.c"
    break;

  case 64: /* term: term MULT factor  */
#line 622 "parser.y"
                        {	
							if(!verificar_calculo_numero_float_int((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type)){
								yyerror("Não é possivel realizar operações matematicas entre esses tipos");
							}
							
							char *s = cat((yyvsp[-2].rec)->code, "*", (yyvsp[0].rec)->code, "", "");
							(yyval.rec) = createRecord(s, tipo_resultado_operacao((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type));
							freeRecord((yyvsp[-2].rec));
							freeRecord((yyvsp[0].rec));
							free(s);
						}
#line 2514 "y.tab.c"
    break;

  case 65: /* term: term DIV factor  */
#line 633 "parser.y"
                       {
						if(!verificar_calculo_numero_float_int((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type)){
							yyerror("Não é possivel realizar operações matematicas entre esses tipos");
						}

						char *s = cat((yyvsp[-2].rec)->code, "/", (yyvsp[0].rec)->code, "", "");
						(yyval.rec) = createRecord(s, tipo_resultado_operacao((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type));
						freeRecord((yyvsp[-2].rec));
						freeRecord((yyvsp[0].rec));
						free(s);
	 				   }
#line 2530 "y.tab.c"
    break;

  case 66: /* term: term MODULE factor  */
#line 644 "parser.y"
                              {	

							if(!verificar_calculo_numero_float_int((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type)){
								yyerror("Não é possivel realizar operações matematicas entre esses tipos");
							}
		
							char *s = cat((yyvsp[-2].rec)->code, "%", (yyvsp[0].rec)->code, "", "");
							(yyval.rec) = createRecord(s, tipo_resultado_operacao((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type));
							freeRecord((yyvsp[-2].rec));
							freeRecord((yyvsp[0].rec));
							free(s);
	 					  }
#line 2547 "y.tab.c"
    break;

  case 67: /* term: factor  */
#line 656 "parser.y"
                  { char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
				freeRecord((yyvsp[0].rec));
				free(s);
			  }
#line 2557 "y.tab.c"
    break;

  case 68: /* factor: OPEN_PAREN expr CLOSE_PAREN  */
#line 663 "parser.y"
                                     {	char *s = cat("(", (yyvsp[-1].rec)->code, ")", "", "");
										(yyval.rec) = createRecord(s, (yyvsp[-1].rec)->type);
										freeRecord((yyvsp[-1].rec));
										free(s);
									 }
#line 2567 "y.tab.c"
    break;

  case 69: /* factor: atomo  */
#line 668 "parser.y"
               {	(yyval.rec) = createRecord((yyvsp[0].rec)->code, (yyvsp[0].rec)->type);
	   				freeRecord((yyvsp[0].rec));
	   		   }
#line 2575 "y.tab.c"
    break;

  case 70: /* factor: ID INCREMENT  */
#line 671 "parser.y"
                         { 	
						int index = search((yyvsp[-1].sValue));

						if(index == -1){
							yyerror("Variavel não encontrada");
						}
						
						

						if(strcmp(symbol_table[index].data_type, "int") != 0 &&
								strcmp(symbol_table[index].data_type,"float") != 0 ){
							yyerror("Essa operação só é permitida para int ou float");	
						}

						char *s = cat((yyvsp[-1].sValue),"++","","","");
						free((yyvsp[-1].sValue));
						(yyval.rec) = createRecord(s, symbol_table[index].data_type);
						free(s);
	   				 }
#line 2599 "y.tab.c"
    break;

  case 71: /* factor: ID DECREMENT  */
#line 690 "parser.y"
                         { 	
						int index = search((yyvsp[-1].sValue));

						if(index == -1){
							yyerror("Variavel não encontrada");
						}

						if(strcmp(symbol_table[index].data_type, "int") != 0 &&
								strcmp(symbol_table[index].data_type,"float") != 0 ){
							yyerror("Essa operação só é permitida para int ou float");	
						}

						char *s = cat((yyvsp[-1].sValue),"--","","","");
						(yyval.rec) = createRecord(s, symbol_table[index].data_type);
						free((yyvsp[-1].sValue));
						free(s);
	   				 }
#line 2621 "y.tab.c"
    break;

  case 72: /* factor: function_call  */
#line 707 "parser.y"
                           {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
						freeRecord((yyvsp[0].rec));	 
						free(s);
	   				   }
#line 2631 "y.tab.c"
    break;

  case 73: /* factor: value  */
#line 712 "parser.y"
                   {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
				freeRecord((yyvsp[0].rec));
				free(s);
	   		   }
#line 2641 "y.tab.c"
    break;

  case 74: /* value: INT_NUMBER  */
#line 718 "parser.y"
                   {char *s = cat((yyvsp[0].sValue),"","","","");
					(yyval.rec) = createRecord(s, "int");
					free(s);	
				   }
#line 2650 "y.tab.c"
    break;

  case 75: /* value: FLOAT_NUMBER  */
#line 722 "parser.y"
                     {	char *s = cat((yyvsp[0].sValue),"","","","");
						(yyval.rec) = createRecord(s, "float");
						free(s);
	  				 }
#line 2659 "y.tab.c"
    break;

  case 76: /* value: STRING_VALUE  */
#line 726 "parser.y"
                         {	char *s = cat((yyvsp[0].sValue),"","","","");
						(yyval.rec) = createRecord(s, "string");
						free(s);
	  				 }
#line 2668 "y.tab.c"
    break;

  case 77: /* value: NULL_VALUE  */
#line 730 "parser.y"
                       {char *s = cat("NULL","","","","");
					(yyval.rec) = createRecord(s, "null");
					free(s);
	  			   }
#line 2677 "y.tab.c"
    break;

  case 78: /* assigns: assign_def  */
#line 736 "parser.y"
                     {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						
						(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
						freeRecord((yyvsp[0].rec));	 
						free(s);
					 }
#line 2688 "y.tab.c"
    break;

  case 79: /* assigns: assign_mat  */
#line 742 "parser.y"
                     {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						freeRecord((yyvsp[0].rec));	 
						(yyval.rec) = createRecord(s, "");
						free(s);
					 }
#line 2698 "y.tab.c"
    break;

  case 80: /* assigns: assign_def assigns  */
#line 747 "parser.y"
                                     {	char *s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
								
								(yyval.rec) = createRecord(s, (yyvsp[-1].rec)->type);
								freeRecord((yyvsp[-1].rec));
								freeRecord((yyvsp[0].rec));
								free(s);
							 }
#line 2710 "y.tab.c"
    break;

  case 81: /* assign_def: ID ASSIGN expr SEMI  */
#line 756 "parser.y"
                                 {	
									
									int index = search((yyvsp[-3].sValue));

									if(index == -1){
										yyerror("Variavel não encontrada");
									}
									
									char *s = cat((yyvsp[-3].sValue), "=", (yyvsp[-1].rec)->code, ";", "");

									if(strcmp(symbol_table[index].data_type, "string") == 0 && strcmp((yyvsp[-1].rec)->type, "string") == 0){
										(yyval.rec) = createRecord(s, "string");
									} else if(verificar_calculo_numero_float_int(symbol_table[index].data_type, (yyvsp[-1].rec)->type)){
										(yyval.rec) = createRecord(s, tipo_resultado_operacao(symbol_table[index].data_type, (yyvsp[-1].rec)->type));
									}else {
										yyerror("Tipos incompativeis");
									}

									freeRecord((yyvsp[-1].rec));
									free(s);
								 }
#line 2736 "y.tab.c"
    break;

  case 82: /* assign_mat: ID dims ASSIGN expr SEMI  */
#line 779 "parser.y"
                                      {	char *s = cat((yyvsp[-4].sValue), (yyvsp[-3].rec)->code, "=", (yyvsp[-1].rec)->code, ";");
										freeRecord((yyvsp[-3].rec));
										freeRecord((yyvsp[-1].rec));
										(yyval.rec) = createRecord(s, "");
										free(s);
									  }
#line 2747 "y.tab.c"
    break;

  case 83: /* assign_mat: ID dims ASSIGN ID dims SEMI  */
#line 785 "parser.y"
                                                 {	char *s1 = cat((yyvsp[-5].sValue), (yyvsp[-4].rec)->code, "=", (yyvsp[-2].sValue), (yyvsp[-1].rec)->code);
											char *s2 = cat(s1, ";", "", "", "");
											freeRecord((yyvsp[-4].rec));
											freeRecord((yyvsp[-1].rec));
											(yyval.rec) = createRecord(s2, "");
											free(s2);
											free(s1);
		   								 }
#line 2760 "y.tab.c"
    break;

  case 84: /* subprograms: subprogram  */
#line 795 "parser.y"
                         { 	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
							freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);
						}
#line 2770 "y.tab.c"
    break;

  case 85: /* subprograms: subprogram subprograms  */
#line 800 "parser.y"
                                                 {	char *s = cat((yyvsp[-1].rec)->code, "", (yyvsp[0].rec)->code, "", "");
										freeRecord((yyvsp[-1].rec));
										freeRecord((yyvsp[0].rec));
										(yyval.rec) = createRecord(s, "");
										free(s);
									 }
#line 2781 "y.tab.c"
    break;

  case 86: /* subprogram: proc  */
#line 808 "parser.y"
                  { char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s, "");
					free(s);
				  }
#line 2791 "y.tab.c"
    break;

  case 87: /* subprogram: function  */
#line 813 "parser.y"
                              {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						freeRecord((yyvsp[0].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);
		   			  }
#line 2801 "y.tab.c"
    break;

  case 88: /* proc: VOID ID OPEN_PAREN params CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 820 "parser.y"
                                                                         {	add('P', (yyvsp[-6].sValue));
																			char *s1 = cat("void ", (yyvsp[-6].sValue), "(", (yyvsp[-4].rec)->code, ")");
																			char *s2 = cat(s1, "{\n", (yyvsp[-1].rec)->code, "\n}", "");
																			freeRecord((yyvsp[-4].rec));
																			freeRecord((yyvsp[-1].rec));
																			(yyval.rec) = createRecord(s2, "");
																			free(s2);
																			free(s1);
																		 }
#line 2815 "y.tab.c"
    break;

  case 89: /* proc: VOID ID OPEN_PAREN CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 829 "parser.y"
                                                                      {	add('P', (yyvsp[-5].sValue));
																	char *s = cat("void ", (yyvsp[-5].sValue), "(){\n", (yyvsp[-1].rec)->code, "\n}");
	 																freeRecord((yyvsp[-1].rec));
																	(yyval.rec) = createRecord(s, "");
																	free(s);
	 															  }
#line 2826 "y.tab.c"
    break;

  case 90: /* function: type ID OPEN_PAREN params CLOSE_PAREN BLOCK_BEGIN stmts RETURN factor SEMI BLOCK_END  */
#line 837 "parser.y"
                                                                                                {	add('F', (yyvsp[-9].sValue));
																							char *s1 = cat((yyvsp[-10].rec)->code, " ", (yyvsp[-9].sValue), "(", (yyvsp[-7].rec)->code);
																							char *s2 = cat(s1, "){\n", (yyvsp[-4].rec)->code, "\nreturn ", (yyvsp[-2].rec)->code);
																							char *s3 = cat(s2, ";\n}", "", "", "");
																							freeRecord((yyvsp[-10].rec));
																							freeRecord((yyvsp[-7].rec));
																							freeRecord((yyvsp[-4].rec));
																							freeRecord((yyvsp[-2].rec));
																							(yyval.rec) = createRecord(s3, "");
																							free(s3);
																							free(s2);
																							free(s1);
																							
																						  }
#line 2845 "y.tab.c"
    break;

  case 91: /* function: type ID OPEN_PAREN CLOSE_PAREN BLOCK_BEGIN stmts RETURN factor SEMI BLOCK_END  */
#line 851 "parser.y"
                                                                                                 {add('F', (yyvsp[-8].sValue));
																					char *s1 = cat((yyvsp[-9].rec)->code, " ", (yyvsp[-8].sValue), "(){\n", (yyvsp[-4].rec)->code);
		 																			char *s2 = cat(s1, "\nreturn ", (yyvsp[-2].rec)->code, ";\n}", "");
																					freeRecord((yyvsp[-9].rec));
																					freeRecord((yyvsp[-4].rec));
																					freeRecord((yyvsp[-2].rec));
																					(yyval.rec) = createRecord(s2, "");
																					free(s2);
																					free(s1);
		 																		   }
#line 2860 "y.tab.c"
    break;

  case 92: /* params: param  */
#line 863 "parser.y"
               {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				freeRecord((yyvsp[0].rec));
				(yyval.rec) = createRecord(s, "");
				free(s);
			   }
#line 2870 "y.tab.c"
    break;

  case 93: /* params: param COMMA params  */
#line 868 "parser.y"
                                {	char *s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
								freeRecord((yyvsp[-2].rec));
								freeRecord((yyvsp[0].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
			   				}
#line 2881 "y.tab.c"
    break;

  case 94: /* param: type dims ID  */
#line 876 "parser.y"
                     {	
						add('V', (yyvsp[0].sValue));
						char *s = cat((yyvsp[-2].rec)->code, " ", (yyvsp[-1].rec)->code, (yyvsp[0].sValue), "");
						
						(yyval.rec) = createRecord(s, (yyvsp[-2].rec)->code);
						freeRecord((yyvsp[-2].rec));
						freeRecord((yyvsp[-1].rec));
						free(s);
					 }
#line 2895 "y.tab.c"
    break;

  case 95: /* param: type ID dims  */
#line 885 "parser.y"
                         {	
						add('V', (yyvsp[-1].sValue));
						char *s = cat((yyvsp[-2].rec)->code, " ", (yyvsp[-1].sValue), (yyvsp[0].rec)->code, "");
						
						(yyval.rec) = createRecord(s, (yyvsp[-2].rec)->code);
						freeRecord((yyvsp[-2].rec));
						freeRecord((yyvsp[0].rec));
						free(s);
					 }
#line 2909 "y.tab.c"
    break;

  case 96: /* param: type ID  */
#line 894 "parser.y"
                    {	add('V', (yyvsp[0].sValue));
					char *s = cat((yyvsp[-1].rec)->code, " ", (yyvsp[0].sValue), "", "");
					
					(yyval.rec) = createRecord(s, (yyvsp[-1].rec)->code);
					freeRecord((yyvsp[-1].rec));
					free(s);
			    }
#line 2921 "y.tab.c"
    break;

  case 97: /* stmts: stmt  */
#line 903 "parser.y"
             {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				freeRecord((yyvsp[0].rec));
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 2931 "y.tab.c"
    break;

  case 98: /* stmts: stmt stmts  */
#line 908 "parser.y"
                   {char *s = cat((yyvsp[-1].rec)->code, "\n", (yyvsp[0].rec)->code, "", "");
					freeRecord((yyvsp[-1].rec));
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s, "");
					free(s);
				   }
#line 2942 "y.tab.c"
    break;

  case 99: /* stmt: dec_var  */
#line 916 "parser.y"
               {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				freeRecord((yyvsp[0].rec));
				(yyval.rec) = createRecord(s, "");
				free(s);
			   }
#line 2952 "y.tab.c"
    break;

  case 100: /* stmt: assigns  */
#line 921 "parser.y"
               {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				freeRecord((yyvsp[0].rec));
				(yyval.rec) = createRecord(s, "");
				free(s);
	 		   }
#line 2962 "y.tab.c"
    break;

  case 101: /* stmt: function_call  */
#line 926 "parser.y"
                         {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						freeRecord((yyvsp[0].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);
	 				 }
#line 2972 "y.tab.c"
    break;

  case 102: /* stmt: conditional_stmt  */
#line 931 "parser.y"
                        {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
							freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);
	 					}
#line 2982 "y.tab.c"
    break;

  case 103: /* stmt: iteration_stmt  */
#line 936 "parser.y"
                          {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						freeRecord((yyvsp[0].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);
	 				  }
#line 2992 "y.tab.c"
    break;

  case 104: /* stmt: scan_stmt  */
#line 941 "parser.y"
                     {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s, "");
					free(s);

	 			 }
#line 3003 "y.tab.c"
    break;

  case 105: /* stmt: print_stmt  */
#line 947 "parser.y"
                      {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s, "");
					free(s);
	 			  }
#line 3013 "y.tab.c"
    break;

  case 106: /* scan_stmt: SCAN OPEN_PAREN atomo CLOSE_PAREN SEMI  */
#line 954 "parser.y"
                                                  {
												char *s;

												if(strcmp((yyvsp[-2].rec)->type, "int") == 0){
													s = cat("scanf(\"%d\",&", (yyvsp[-2].rec)->code, ");", "", "");
												}else if(strcmp((yyvsp[-2].rec)->type, "float") == 0){
													s = cat("scanf(\"%f\",&", (yyvsp[-2].rec)->code, ");", "", "");
												}else if(strcmp((yyvsp[-2].rec)->type, "string") == 0){
													s = cat("scanf(\"%s\",", (yyvsp[-2].rec)->code, ");", "", "");
												}else{
													s = "";
													yyerror("Tipo invalido para o print");
												}
												freeRecord((yyvsp[-2].rec));
												(yyval.rec) = createRecord(s, "");
												free(s);
											   }
#line 3035 "y.tab.c"
    break;

  case 107: /* print_stmt: PRINT OPEN_PAREN print_content CLOSE_PAREN SEMI  */
#line 973 "parser.y"
                                                            {	
																char * s;
																if(strcmp((yyvsp[-2].rec)->type, "int") == 0){
																	s = cat("printf(\"%i\\n\",", (yyvsp[-2].rec)->code, ");", "", "");
																}else if(strcmp((yyvsp[-2].rec)->type, "float") == 0){
																	s = cat("printf(\"%f\\n\",", (yyvsp[-2].rec)->code, ");", "", "");
																}else if(strcmp((yyvsp[-2].rec)->type, "string") == 0){
																	s = cat("printf(", (yyvsp[-2].rec)->code, ");", "", "");
																}else{
																	s = "";
																	yyerror("Tipo invalido para o print");
																}
																
																freeRecord((yyvsp[-2].rec));
																(yyval.rec) = createRecord(s, "");
																free(s);
															}
#line 3057 "y.tab.c"
    break;

  case 108: /* print_stmt: PRINT OPEN_PAREN CLOSE_PAREN SEMI  */
#line 990 "parser.y"
                                                      {	char *s = cat("printf(\"\\n\");", "", "", "", "");
		  										(yyval.rec) = createRecord(s, "");
												free(s);
		  									  }
#line 3066 "y.tab.c"
    break;

  case 109: /* print_content: expr  */
#line 996 "parser.y"
                    { 	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
						freeRecord((yyvsp[0].rec));
						free(s);
					}
#line 3076 "y.tab.c"
    break;

  case 110: /* print_content: print_content PLUS expr  */
#line 1001 "parser.y"
                                                   {char *s = cat((yyvsp[-2].rec)->code, " + ", (yyvsp[0].rec)->code, "", "");
										freeRecord((yyvsp[-2].rec));
										freeRecord((yyvsp[0].rec));
										(yyval.rec) = createRecord(s, "");
										free(s);
			 						   }
#line 3087 "y.tab.c"
    break;

  case 111: /* print_content: STRING_VALUE PLUS print_content  */
#line 1007 "parser.y"
                                                           {char *s = cat((yyvsp[-2].sValue), " + ", (yyvsp[0].rec)->code, "", "");
												freeRecord((yyvsp[0].rec));
												(yyval.rec) = createRecord(s, "");
												free(s);
			 								   }
#line 3097 "y.tab.c"
    break;

  case 112: /* conditional_stmt: if_stmt  */
#line 1014 "parser.y"
                           {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
							freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);	
						   }
#line 3107 "y.tab.c"
    break;

  case 113: /* conditional_stmt: switch_stmt  */
#line 1019 "parser.y"
                                               {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
								freeRecord((yyvsp[0].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
				 			   }
#line 3117 "y.tab.c"
    break;

  case 114: /* if_stmt: IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 1026 "parser.y"
                                                                           {char *s = cat("if(", (yyvsp[-4].rec)->code, "){\n", (yyvsp[-1].rec)->code, "\n}");
																			freeRecord((yyvsp[-4].rec));
																			freeRecord((yyvsp[-1].rec));
																			(yyval.rec) = createRecord(s, "");
																			count_label++;
																			free(s);
																		   }
#line 3129 "y.tab.c"
    break;

  case 115: /* if_stmt: IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END ELSE BLOCK_BEGIN stmts BLOCK_END  */
#line 1033 "parser.y"
                                                                                                                    { 
																												char str[20];
																												sprintf(str, "%d", count_label);

																												char * label = cat("conditionOk", str, "", "", "");

																												char *s1 = cat("if(", (yyvsp[-8].rec)->code, "){\n", (yyvsp[-5].rec)->code, "goto ");
																												char *s2 = cat(s1, label, "; \n}", (yyvsp[-1].rec)->code, "\n");
																												char *s3 = cat(s2, label, ":", "", "");
																												freeRecord((yyvsp[-8].rec));
																												freeRecord((yyvsp[-5].rec));
																												freeRecord((yyvsp[-1].rec));
																												(yyval.rec) = createRecord(s3, "");
																												count_label++;
																												free(s3);
																												free(s2);
																												free(s1);
																											}
#line 3152 "y.tab.c"
    break;

  case 116: /* if_stmt: IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END else_if_stmt ELSE BLOCK_BEGIN stmts BLOCK_END  */
#line 1051 "parser.y"
                                                                                                                                 {	
																															char str[20];
																															sprintf(str, "%d", count_label);

																															char * label = cat("conditionOk", str, "", "", "");

																															char *s1 = cat("if(", (yyvsp[-9].rec)->code, "){\n", (yyvsp[-6].rec)->code, "goto ");
																															char *s2 = cat(s1, label, ";\n} ", (yyvsp[-4].rec)->code, "\n");	
																															char *s3 = cat(s2, (yyvsp[-1].rec)->code, "\n ", label, ":");
																															freeRecord((yyvsp[-9].rec));
																															freeRecord((yyvsp[-6].rec));
																															freeRecord((yyvsp[-4].rec));
																															freeRecord((yyvsp[-1].rec));
																															(yyval.rec) = createRecord(s3, "");
																															count_label++;
																															free(s3);
																															free(s2);
																															free(s1);
																														 }
#line 3176 "y.tab.c"
    break;

  case 117: /* if_stmt: IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END else_if_stmt  */
#line 1070 "parser.y"
                                                                                                {	
																							char str[20];
																							sprintf(str, "%d", count_label);

																							char * label = cat("conditionOk", str, "", "", "");
			
																							char *s1 = cat("if(", (yyvsp[-5].rec)->code, "){\n", (yyvsp[-2].rec)->code, "goto ");
																							char *s2 = cat(s1, label, ";\n}", (yyvsp[0].rec)->code, " ");
																							char *s3 = cat(s2, label, ":", "", "");
																							freeRecord((yyvsp[-5].rec));
																							freeRecord((yyvsp[-2].rec));
																							freeRecord((yyvsp[0].rec));
																							(yyval.rec) = createRecord(s3, "");
																							count_label++;
																							free(s3);
																							free(s2);
																							free(s1);
																						}
#line 3199 "y.tab.c"
    break;

  case 118: /* else_if_stmt: ELSE_IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 1090 "parser.y"
                                                                                     {	char str[20];
																						sprintf(str, "%d", count_label);

																						char * label = cat("conditionOk", str, "", "", "");

																						char *s1 = cat("if(", (yyvsp[-4].rec)->code, "){\n", (yyvsp[-1].rec)->code, " goto ");
																						char *s2 = cat(s1, label, ";", " \n}", "");
																						freeRecord((yyvsp[-4].rec));
																						freeRecord((yyvsp[-1].rec));
																						(yyval.rec) = createRecord(s2, "");
																						free(s2);
																						free(s1);
																					 }
#line 3217 "y.tab.c"
    break;

  case 119: /* else_if_stmt: else_if_stmt else_if_stmt  */
#line 1103 "parser.y"
                                                     {	char *s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
			 								freeRecord((yyvsp[-1].rec));
											freeRecord((yyvsp[0].rec));
											(yyval.rec) = createRecord(s, "");
											free(s);
			 							 }
#line 3228 "y.tab.c"
    break;

  case 120: /* logic_expr: logic_expr logic_op c_term  */
#line 1111 "parser.y"
                                        {	char *s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
											freeRecord((yyvsp[-2].rec));
											freeRecord((yyvsp[-1].rec));
											freeRecord((yyvsp[0].rec));
											(yyval.rec) = createRecord(s, "");
											free(s);
										}
#line 3240 "y.tab.c"
    break;

  case 121: /* logic_expr: c_term  */
#line 1118 "parser.y"
                            {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
		   				freeRecord((yyvsp[0].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);
		   			}
#line 3250 "y.tab.c"
    break;

  case 122: /* c_term: ID  */
#line 1125 "parser.y"
            {	(yyval.rec) = createRecord((yyvsp[0].sValue), "");
				free((yyvsp[0].sValue));
			}
#line 3258 "y.tab.c"
    break;

  case 123: /* c_term: ID dims  */
#line 1128 "parser.y"
                     {char *s= cat((yyvsp[-1].sValue),(yyvsp[0].rec)->code,"","","");
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s,"");
					free(s);
	   			}
#line 3268 "y.tab.c"
    break;

  case 124: /* c_term: TRUE  */
#line 1133 "parser.y"
                  {		char *s= cat("true","","","","");
					(yyval.rec) = createRecord(s,"");
					free(s);
			}
#line 3277 "y.tab.c"
    break;

  case 125: /* c_term: FALSE  */
#line 1137 "parser.y"
                   {	char *s= cat("false","","","","");
					(yyval.rec) = createRecord(s,"");
					free(s);

	   }
#line 3287 "y.tab.c"
    break;

  case 126: /* c_term: comp  */
#line 1142 "parser.y"
                  {	char *s= cat((yyvsp[0].rec)->code,"","","","");
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s,"");
					free(s);

	   }
#line 3298 "y.tab.c"
    break;

  case 127: /* comp: expr comp_op expr  */
#line 1150 "parser.y"
                        {	char *s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
							freeRecord((yyvsp[-2].rec));
							freeRecord((yyvsp[-1].rec));
							freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);
						}
#line 3310 "y.tab.c"
    break;

  case 128: /* comp_op: EQ  */
#line 1159 "parser.y"
             {	char *s = cat("==", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 3319 "y.tab.c"
    break;

  case 129: /* comp_op: NEQ  */
#line 1163 "parser.y"
                      {	char *s = cat("!=", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			  }
#line 3328 "y.tab.c"
    break;

  case 130: /* comp_op: GE  */
#line 1167 "parser.y"
                     {	char *s = cat(">=", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 3337 "y.tab.c"
    break;

  case 131: /* comp_op: LE  */
#line 1171 "parser.y"
                     {	char *s = cat("<=", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 3346 "y.tab.c"
    break;

  case 132: /* comp_op: GT  */
#line 1175 "parser.y"
                     {	char *s = cat(">", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 3355 "y.tab.c"
    break;

  case 133: /* comp_op: LT  */
#line 1179 "parser.y"
                     {	char *s = cat("<", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 3364 "y.tab.c"
    break;

  case 134: /* logic_op: AND  */
#line 1185 "parser.y"
               {char *s = cat("&&", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			   }
#line 3373 "y.tab.c"
    break;

  case 135: /* logic_op: OR  */
#line 1189 "parser.y"
                      {	char *s = cat("||", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
		 	  }
#line 3382 "y.tab.c"
    break;

  case 136: /* logic_op: NOT  */
#line 1193 "parser.y"
                       {char *s = cat("!", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
		 	   }
#line 3391 "y.tab.c"
    break;

  case 137: /* switch_stmt: SWITCH COLON OPEN_PAREN ID CLOSE_PAREN BLOCK_BEGIN switch_cases DEFAULT COLON stmts BLOCK_END  */
#line 1199 "parser.y"
                                                                                                            {	char *s1 = cat("switch: (", (yyvsp[-7].sValue), "){\n", (yyvsp[-4].rec)->code, "	default:\n");
																												char *s2 = cat(s1, (yyvsp[-1].rec)->code, "\n}", "", "");
																												freeRecord((yyvsp[-4].rec));
																												freeRecord((yyvsp[-1].rec));
																												(yyval.rec) = createRecord(s2, "");
																												free(s2);
																												free(s1);
													  														}
#line 3404 "y.tab.c"
    break;

  case 138: /* switch_cases: %empty  */
#line 1209 "parser.y"
               {(yyval.rec) = createRecord("","");}
#line 3410 "y.tab.c"
    break;

  case 139: /* switch_cases: CASE value COLON stmts BREAK switch_cases  */
#line 1210 "parser.y"
                                                                     {	char *s1 = cat("case ", (yyvsp[-4].rec)->code, ":\n", (yyvsp[-2].rec)->code, "\n");
			 												char *s2 = cat(s1, (yyvsp[0].rec)->code, "", "", "");
															freeRecord((yyvsp[-4].rec));
															freeRecord((yyvsp[-2].rec));
															freeRecord((yyvsp[0].rec));
															(yyval.rec) = createRecord(s2, "");
															free(s2);
															free(s1);
			 											 }
#line 3424 "y.tab.c"
    break;

  case 140: /* iteration_stmt: while_stmt  */
#line 1221 "parser.y"
                            {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
		   						freeRecord((yyvsp[0].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
							}
#line 3434 "y.tab.c"
    break;

  case 141: /* iteration_stmt: for_stmt  */
#line 1226 "parser.y"
                                      {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
		   					freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);
			   			  }
#line 3444 "y.tab.c"
    break;

  case 142: /* iteration_stmt: dowhile_stmt  */
#line 1231 "parser.y"
                                          {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
		   						freeRecord((yyvsp[0].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
			   				  }
#line 3454 "y.tab.c"
    break;

  case 143: /* while_stmt: WHILE OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 1238 "parser.y"
                                                                                 {	char *s = cat("whileLoop: if(", (yyvsp[-4].rec)->code, "){\n", (yyvsp[-1].rec)->code, "goto whileLoop;\n}");
																					freeRecord((yyvsp[-4].rec));
																					freeRecord((yyvsp[-1].rec));
																					(yyval.rec) = createRecord(s, "");
																					free(s);
																				 }
#line 3465 "y.tab.c"
    break;

  case 144: /* for_stmt: FOR OPEN_PAREN dec_var logic_expr SEMI expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 1246 "parser.y"
                                                                                               {
																								char str[20];
																								sprintf(str, "%d", count_label);

																								char * label = cat("forLoop", str, "", "", "");

																								char *s1 = cat((yyvsp[-7].rec)->code, label, ":\nif(", (yyvsp[-6].rec)->code, "){\n");
																								char *s2 = cat(s1, (yyvsp[-4].rec)->code, ";\n", (yyvsp[-1].rec)->code, "goto ");
																								char *s3 = cat(s2, label, ";\n}", "", "");
																								freeRecord((yyvsp[-7].rec));
																								freeRecord((yyvsp[-6].rec));
																								freeRecord((yyvsp[-4].rec));
																								freeRecord((yyvsp[-1].rec));
																								(yyval.rec) = createRecord(s3, "");
																								free(label);
																								free(s3);
																								free(s2);
																								free(s1);
																								count_label++;
																							   }
#line 3490 "y.tab.c"
    break;

  case 145: /* dowhile_stmt: DO BLOCK_BEGIN stmts BLOCK_END WHILE OPEN_PAREN logic_expr CLOSE_PAREN SEMI  */
#line 1268 "parser.y"
                                                                                           {char *s1 = cat((yyvsp[-6].rec)->code, "doWhile: if(", (yyvsp[-2].rec)->code, "){", (yyvsp[-6].rec)->code);
																							char *s2 = cat("} goto doWhile;", "", "", "", "");
																							freeRecord((yyvsp[-6].rec));
																							freeRecord((yyvsp[-2].rec));
																							(yyval.rec) = createRecord(s2, "");
																							free(s1);
																							free(s2);
																						   }
#line 3503 "y.tab.c"
    break;

  case 146: /* function_call: ID OPEN_PAREN args CLOSE_PAREN SEMI  */
#line 1278 "parser.y"
                                                    {	
														int index = search((yyvsp[-4].sValue));

														char *s = cat((yyvsp[-4].sValue), "(", (yyvsp[-2].rec)->code, ");", "");

														freeRecord((yyvsp[-2].rec));
														if(index != -1){
															(yyval.rec) = createRecord(s, symbol_table[index].data_type);
														}else {
															(yyval.rec) = createRecord(s, "");
														}
														free(s);
													}
#line 3521 "y.tab.c"
    break;

  case 147: /* function_call: ID OPEN_PAREN CLOSE_PAREN SEMI  */
#line 1291 "parser.y"
                                              {	
												int index = search((yyvsp[-3].sValue));

												char *s = cat((yyvsp[-3].sValue), "();", "", "", "");

												if(index != -1){
													(yyval.rec) = createRecord(s, symbol_table[index].data_type);
												}else {
													(yyval.rec) = createRecord(s, "");
												}
												free(s);
											  }
#line 3538 "y.tab.c"
    break;

  case 148: /* args: arg  */
#line 1305 "parser.y"
           {char *s = cat((yyvsp[0].rec)->code,"","","","");
			freeRecord((yyvsp[0].rec));
			(yyval.rec) = createRecord(s, "");
			free(s);
	 	   }
#line 3548 "y.tab.c"
    break;

  case 149: /* arg: ids  */
#line 1312 "parser.y"
          {	char *s = cat((yyvsp[0].rec)->code,"","","","");
			freeRecord((yyvsp[0].rec));
			(yyval.rec) = createRecord(s, "");
			free(s);
	 	  }
#line 3558 "y.tab.c"
    break;

  case 150: /* principal: MAIN OPEN_PAREN params CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 1319 "parser.y"
                                                                           {add('M', "main");
																			char *s = cat("int main(", (yyvsp[-4].rec)->code, "){\n", (yyvsp[-1].rec)->code, "\nreturn 0;\n}");
																			freeRecord((yyvsp[-4].rec));
																			freeRecord((yyvsp[-1].rec));
																			(yyval.rec) = createRecord(s, "");
																			free(s);
																		   }
#line 3570 "y.tab.c"
    break;

  case 151: /* principal: MAIN OPEN_PAREN CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 1326 "parser.y"
                                                                                {	add('M', "main");
																		char *s = cat("int main(){\n", (yyvsp[-1].rec)->code, "\nreturn 0;\n}", "", "");
		  																freeRecord((yyvsp[-1].rec));
																		(yyval.rec) = createRecord(s, "");
																		free(s);
		  															}
#line 3581 "y.tab.c"
    break;


#line 3585 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1334 "parser.y"
 /* Fim da segunda seção */

int main (int argc, char ** argv) {
 	int codigo;

    if (argc != 3) {
       printf("Usage: $./compiler input.txt output.txt\nClosing application...\n");
       exit(0);
    }
    
    yyin = fopen(argv[1], "r");
    yyout = fopen(argv[2], "w");

    codigo = yyparse();

    fclose(yyin);
    fclose(yyout);

	printf("\nSymble Table \n");
	printf("\nSYMBOL	DATATYPE	TYPE	LINE NUMBER 	SCOPE \n");
	printf("______________________________________________________\n\n");
	int i = 0;
	for(i = 0; i < count; i++){
		printf("%s\t%s\t\t%s\t%d\t%d\t\n", 
			symbol_table[i].id_name, 
			symbol_table[i].data_type, 
			symbol_table[i].type,
			symbol_table[i].line_no,
			symbol_table[i].scope);
	}

	for(i = 0; i < count; i++){
		free(symbol_table[i].id_name);
		free(symbol_table[i].type);
	}

	return codigo;
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}

char * cat(char * s1, char * s2, char * s3, char * s4, char * s5){
  int tam;
  char * output;

  tam = strlen(s1) + strlen(s2) + strlen(s3) + strlen(s4) + strlen(s5)+ 1;
  output = (char *) malloc(sizeof(char) * tam);
  
  if (!output){
    printf("Allocation problem. Closing application...\n");
    exit(0);
  }
  
  sprintf(output, "%s%s%s%s%s", s1, s2, s3, s4, s5);
  
  return output;
}

int search(char *type) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(symbol_table[i].id_name, type) == 0) {
			return i;
			break;
		}
	}

	return -1;
}

void add(char symbol, char * id_name){
	q=search(id_name);
	if(q == -1) {
		if(symbol == 'H'){
			symbol_table[count].id_name = strdup(id_name);
			symbol_table[count].data_type = strdup(type);
			symbol_table[count].line_no = countn;
			symbol_table[count].type = strdup("Header");
			symbol_table[count].scope = count_block;
			count++;
		} else if(symbol == 'K'){
			symbol_table[count].id_name = strdup(id_name);
			symbol_table[count].data_type = strdup("N/A");
			symbol_table[count].line_no = countn;
			symbol_table[count].type = strdup("Keyword\t");
			symbol_table[count].scope = count_block;
			count++;
		} else if(symbol == 'V'){
			symbol_table[count].id_name = strdup(id_name);
			symbol_table[count].data_type = strdup(type);
			symbol_table[count].line_no = countn;
			symbol_table[count].type = strdup("Variable");
			symbol_table[count].scope = count_block;
			count++;
		} else if(symbol == 'F'){
			symbol_table[count].id_name = strdup(id_name);
			symbol_table[count].data_type = strdup(type);
			symbol_table[count].line_no = countn;
			symbol_table[count].type = strdup("Function");
			symbol_table[count].scope = count_block;
			count++;
		} else if(symbol == 'P'){
			symbol_table[count].id_name = strdup(id_name);
			symbol_table[count].data_type = strdup("N/A");
			symbol_table[count].line_no = countn;
			symbol_table[count].type = strdup("Procedure");
			symbol_table[count].scope = count_block;
			count++;
		} else if(symbol == 'M'){
			symbol_table[count].id_name = strdup(id_name);
			symbol_table[count].data_type = strdup("N/A");
			symbol_table[count].line_no = countn;
			symbol_table[count].type = strdup("Main");
			symbol_table[count].scope = count_block;
			count++;
		}
	}
}

void insert_type(char * type_text){
	strcpy(type, type_text);
}

int verificar_valor_tipo_valido(char * valor, char * tipo){
	
	if((strcmp(tipo,"int") == 0 || strcmp(tipo,"float") == 0 || strcmp(tipo,"string") == 0) && isInteger(valor)){
		return 1;
	}else if((strcmp(tipo,"float") == 0 || strcmp(tipo,"string") == 0) && isFloat(valor)){
		return 1;
	}else if(strcmp(tipo,"string") == 0){
		return 1;
	}else {
		return 0;
	}
}

int isInteger(const char *str) {
	if(str == NULL || *str == '\0') {
		return 0;
	}

	char *endptr;
	strtol(str, &endptr, 10);

	if(*endptr != '\0') {
		return 0;
	}

	return 1;
}

int isFloat(const char *str) {
	if(str == NULL || *str == '\0') {
		return 0;
	}

	char *endptr;
	strtof(str, &endptr);

	if(*endptr != '\0') {
		return 0;
	}

	return 1;
}

int verificar_calculo_numero_float_int(char * type1, char * type2){
	if((strcmp(type1, "int") == 0 && strcmp(type2, "int") == 0)
		|| (strcmp(type1, "int") && strcmp(type2, "float") == 0)
		|| (strcmp(type1, "float") == 0 && strcmp(type2, "int") == 0)
		|| (strcmp(type1, "float") == 0 && strcmp(type2, "float") == 0)){
			return 1;
	}
	return 0;
}

char * tipo_resultado_operacao(char * type1, char * type2){
	if((strcmp(type1, "int") == 0 && strcmp(type2, "int") == 0)){
		return "int";
	}else if((strcmp(type1, "int") == 0 && strcmp(type2, "float") == 0)){
		return "float";
	} else if((strcmp(type1, "float") == 0 && strcmp(type2, "int") == 0)){
		return "float";
	} else if((strcmp(type1, "float") == 0 && strcmp(type2, "float") == 0)){
		return "float";
	} else {
		return "";
	}
}
