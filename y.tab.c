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
	extern int countn;
	extern int count_block;

#line 114 "y.tab.c"

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
#line 44 "parser.y"

	int    iValue; 	/* integer value */
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	float  fValue;  /* float value */
	double dvalue;  /* double value */ 
	struct record * rec;

#line 306 "y.tab.c"

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
#define YYLAST   547

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  150
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
       0,    75,    75,    81,    86,    91,    97,    98,   104,   111,
     119,   137,   156,   164,   175,   193,   214,   225,   242,   253,
     261,   279,   300,   310,   319,   325,   331,   336,   341,   351,
     356,   364,   366,   368,   370,   374,   377,   380,   383,   386,
     389,   394,   399,   410,   424,   434,   448,   460,   472,   485,
     489,   494,   504,   515,   525,   536,   540,   547,   552,   566,
     578,   591,   603,   614,   621,   632,   643,   655,   662,   667,
     670,   687,   704,   709,   715,   719,   723,   727,   733,   739,
     744,   753,   776,   782,   792,   797,   805,   810,   817,   826,
     834,   847,   859,   864,   872,   881,   890,   895,   903,   908,
     913,   918,   923,   928,   934,   941,   960,   977,   983,   988,
     994,  1001,  1006,  1013,  1019,  1028,  1038,  1049,  1055,  1063,
    1070,  1077,  1080,  1085,  1089,  1094,  1102,  1111,  1115,  1119,
    1123,  1127,  1131,  1137,  1141,  1145,  1151,  1161,  1162,  1173,
    1178,  1183,  1190,  1198,  1210,  1220,  1233,  1247,  1254,  1261,
    1268
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

#define YYPACT_NINF (-199)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-123)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     395,   -15,  -199,  -199,  -199,  -199,  -199,  -199,    24,  -199,
    -199,  -199,   100,   346,   395,   483,   125,    48,  -199,   117,
    -199,   203,   214,   -51,    22,  -199,   140,   115,   150,   127,
     475,  -199,  -199,   475,  -199,    73,   158,  -199,    45,   184,
     185,     0,   165,  -199,   401,  -199,  -199,  -199,  -199,   214,
     157,   218,  -199,   287,   234,  -199,   189,  -199,   227,   421,
    -199,   230,   187,   286,   201,   155,   205,   475,  -199,  -199,
     200,   245,    14,    23,   259,   214,   -10,  -199,    -7,  -199,
      85,   214,    87,   157,  -199,  -199,  -199,   122,  -199,  -199,
     157,   214,   214,   214,   214,   214,   214,   214,   157,  -199,
     227,   423,  -199,   246,   249,   164,   251,    10,   262,   258,
     311,  -199,   214,    55,    28,  -199,   263,   321,  -199,   269,
     368,  -199,   273,   214,    96,   213,  -199,  -199,   283,   270,
     267,  -199,  -199,  -199,  -199,   234,   234,   234,   234,  -199,
    -199,  -199,  -199,   299,  -199,  -199,   302,   305,   309,   356,
    -199,   344,   310,   483,   329,   312,   319,  -199,   330,   214,
     151,  -199,   342,   351,  -199,   214,   214,   343,  -199,   360,
    -199,   370,  -199,  -199,   356,   374,    80,   381,   378,   376,
     397,   398,   402,   405,  -199,  -199,   403,   356,  -199,  -199,
    -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,   356,
    -199,   356,   408,  -199,   214,   400,  -199,   409,  -199,   422,
    -199,   425,  -199,   214,  -199,   426,   356,   108,   356,   407,
     108,   420,    85,   209,  -199,  -199,   434,   430,   356,   439,
    -199,   214,  -199,   446,   455,  -199,   456,   357,  -199,  -199,
     399,    43,  -199,  -199,   457,   496,   160,   458,   464,   459,
     460,   326,    99,  -199,   214,   471,   462,   466,  -199,   463,
    -199,   244,  -199,  -199,  -199,  -199,  -199,  -199,   214,   469,
    -199,  -199,  -199,   108,   489,   473,   472,   108,   474,   264,
    -199,   476,   214,   477,   214,  -199,   478,  -199,   326,   356,
    -199,   479,   481,   356,   -28,  -199,   467,  -199,   326,   470,
     480,  -199,   482,   108,   491,   484,   214,  -199,   485,  -199,
     167,   468,   494,    70,   341,  -199,   486,   487,   488,   492,
     493,   102,   495,  -199,   356,   356,   356,   108,   497,   498,
     356,   504,   499,   500,   275,   356,   501,   491,  -199,  -199,
     503,   505,  -199,  -199,   356,  -199,   506,  -199
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
      57,    12,     0,     0,     0,    44,    42,    43,     0,   148,
       0,   147,    56,    68,    54,    59,    60,    61,    62,    65,
      64,    66,    52,    45,    82,    26,     0,     0,     0,     0,
      95,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       0,    28,     0,     0,    10,     0,     0,     0,    19,     0,
     146,     0,    83,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,    99,     0,    96,   103,   104,
     101,   111,   112,   102,   139,   140,   141,   100,    94,     0,
      93,     0,     0,    14,     0,     0,    22,     0,    25,     0,
      58,     0,    17,     0,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   150,    97,     0,     0,     0,     0,
      20,     0,    23,     0,     0,    89,     0,    44,   123,   124,
       0,     0,   120,   125,     0,     0,     0,     0,     0,    76,
       0,   108,     0,   149,     0,     0,     0,     0,    11,     0,
      88,    45,   127,   128,   132,   131,   130,   129,     0,     0,
     133,   134,   135,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,     0,    15,     0,    18,   126,     0,
     119,     0,     0,     0,     0,   105,   110,   106,   109,     0,
       0,    21,     0,     0,   137,     0,     0,    91,     0,   142,
       0,     0,     0,   113,     0,    90,     0,     0,     0,     0,
       0,   116,     0,   144,     0,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,   137,   136,   114,
       0,     0,   143,   138,     0,   115,     0,   117
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -199,  -199,    -2,     5,  -199,   511,    37,   -17,   -11,     3,
     -74,   -21,   181,   -86,   -19,    15,  -199,  -199,   -13,  -199,
    -199,  -199,   -89,  -199,  -144,  -199,  -199,  -199,   255,  -199,
    -199,   223,  -198,   265,  -199,  -199,  -199,  -199,   202,  -199,
    -199,  -199,  -199,  -141,  -199,  -199,   515
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    12,    13,   184,    15,    16,    17,    41,    52,    86,
     119,   120,    54,    55,    60,   185,    19,    20,    29,    30,
      31,    32,   108,   109,   186,   187,   188,   189,   252,   190,
     191,   329,   241,   242,   243,   268,   273,   192,   312,   193,
     194,   195,   196,    57,   130,   131,    33
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    59,    56,    61,    23,    14,    42,   127,   197,   139,
     140,   141,    34,   150,   306,    18,   148,    68,    72,    14,
      69,   155,   246,    21,    42,    62,   116,    24,    87,    18,
     215,    21,   121,   197,    43,   270,   271,   272,   156,    22,
     101,    76,    79,   225,   122,    80,   197,   123,    21,   167,
      28,    38,    35,    88,   111,   226,   115,   227,   197,    80,
     197,   104,    63,   117,   200,   129,    21,    28,    14,   126,
      28,    42,   236,   113,   244,   197,    70,   197,    18,   294,
     269,   124,   159,    21,   255,   205,   132,   197,   125,    74,
     125,   210,   211,   134,    39,   319,   320,   157,    40,    75,
      25,   142,   107,   143,    28,   310,   270,   271,   272,   158,
     151,   237,    45,    46,    47,   163,    82,   160,    21,    39,
       1,    48,    14,    71,   128,   238,   239,   328,   320,   334,
     229,    39,    18,    39,    22,    51,   281,    51,   168,   234,
      36,     9,   107,    64,    49,   302,   282,   107,   197,   305,
     169,    65,   197,    66,    39,    10,    11,   257,    51,   133,
      27,    73,     2,     3,     4,     5,     6,     7,   283,    91,
      92,     2,     3,     4,     5,     6,     7,    93,    94,    23,
     331,   332,   333,   197,   197,   197,   336,    77,    78,   197,
     107,   341,   106,   206,   197,    21,   240,   276,   300,   240,
     346,   147,   251,   197,   316,   207,    44,    45,    46,    47,
      81,   248,    58,    45,    46,   249,    48,    58,    45,    46,
      47,    89,    48,   270,   271,   272,   247,    48,    98,   102,
     270,   271,   272,   100,    45,    46,    47,   105,    21,    49,
     261,   110,    50,    48,    74,    49,   250,   288,   114,    39,
      49,    21,   240,    51,   112,    39,   240,    74,   251,    51,
      39,   298,   118,    82,    51,    21,    49,    58,    45,    46,
     249,    74,   135,   136,   137,   138,    39,    48,    84,    85,
      51,  -122,   240,    95,    96,   314,  -122,    97,   145,     1,
     146,   149,   317,     2,     3,     4,     5,     6,     7,   152,
      49,     8,     9,   153,   171,   161,   240,  -122,  -122,  -122,
      39,   164,   340,   166,    51,    80,    10,    11,     2,     3,
       4,     5,     6,     7,     1,   170,    90,   103,     2,     3,
       4,     5,     6,     7,    91,    92,     8,     9,   270,   271,
     272,   172,    93,    94,   173,   174,   175,   198,   154,   202,
     199,    10,    11,     2,     3,     4,     5,     6,     7,   176,
      26,   203,   162,     2,     3,     4,     5,     6,     7,   201,
     204,     8,     9,    91,    92,   177,   178,   179,   322,    27,
     180,    93,    94,   181,   208,   212,    10,    11,    91,    92,
     182,   183,   209,    82,  -121,    21,    93,    94,     1,  -121,
     213,    74,     2,     3,     4,     5,     6,     7,    84,    85,
       8,     9,   214,   165,   216,    91,    92,   217,   218,   219,
    -121,  -121,  -121,    93,    94,    10,    11,     2,     3,     4,
       5,     6,     7,   220,   221,     8,     9,    82,   222,    21,
      83,   223,   230,   245,   224,    74,    91,    92,   228,   231,
      10,    11,    84,    85,    93,    94,   262,   263,   264,   265,
     266,   267,   254,    99,   232,   144,   233,   235,    91,    92,
      91,    92,    45,    46,    47,   253,    93,    94,    93,    94,
     256,    48,     2,     3,     4,     5,     6,     7,   258,    26,
       2,     3,     4,     5,     6,     7,   259,   260,   274,   275,
     277,   278,   280,   284,   285,   287,   279,   286,   291,   289,
     292,   307,   293,   311,   282,   303,   295,   318,   297,   299,
     301,   304,   308,   309,   320,   313,   315,    37,   323,   327,
     324,   325,   326,   337,   296,   330,   321,   335,   290,   343,
     338,   339,   342,   344,    67,     0,   345,   347
};

static const yytype_int16 yycheck[] =
{
      21,    22,    21,    54,     1,     0,    17,    81,   149,    95,
      96,    97,    14,     3,    42,     0,   105,    30,    35,    14,
      33,   110,   220,    38,    35,     3,     3,     3,    49,    14,
     174,    38,    42,   174,    19,    63,    64,    65,   112,    54,
      61,    38,    42,   187,    54,    45,   187,    54,    38,   123,
      13,     3,    15,    50,    67,   199,    42,   201,   199,    45,
     201,    63,    40,    40,   153,    82,    38,    30,    63,    80,
      33,    82,   216,    70,   218,   216,     3,   218,    63,   277,
      37,    78,    54,    38,   228,   159,    83,   228,     3,    44,
       3,   165,   166,    90,    46,    25,    26,    42,    50,    54,
       0,    98,    65,   100,    67,   303,    63,    64,    65,    54,
     107,     3,     4,     5,     6,   117,    36,   114,    38,    46,
       3,    13,   117,    50,    37,    17,    18,    25,    26,   327,
     204,    46,   117,    46,    54,    50,    37,    50,    42,   213,
      15,    16,   105,     3,    36,   289,    47,   110,   289,   293,
      54,    36,   293,     3,    46,    30,    31,   231,    50,    37,
      33,     3,     7,     8,     9,    10,    11,    12,   254,    47,
      48,     7,     8,     9,    10,    11,    12,    55,    56,   176,
     324,   325,   326,   324,   325,   326,   330,     3,     3,   330,
     153,   335,    37,    42,   335,    38,   217,    37,   284,   220,
     344,    37,   223,   344,    37,    54,     3,     4,     5,     6,
      45,   222,     3,     4,     5,     6,    13,     3,     4,     5,
       6,     3,    13,    63,    64,    65,   221,    13,    39,    42,
      63,    64,    65,     3,     4,     5,     6,    36,    38,    36,
     237,    36,    39,    13,    44,    36,    37,   268,     3,    46,
      36,    38,   273,    50,    54,    46,   277,    44,   279,    50,
      46,   282,     3,    36,    50,    38,    36,     3,     4,     5,
       6,    44,    91,    92,    93,    94,    46,    13,    51,    52,
      50,    37,   303,    49,    50,   306,    42,    53,    42,     3,
      41,    40,   311,     7,     8,     9,    10,    11,    12,    37,
      36,    15,    16,    45,    37,    42,   327,    63,    64,    65,
      46,    42,    37,    40,    50,    45,    30,    31,     7,     8,
       9,    10,    11,    12,     3,    42,    39,    41,     7,     8,
       9,    10,    11,    12,    47,    48,    15,    16,    63,    64,
      65,    42,    55,    56,    42,    40,    37,     3,    37,    37,
      40,    30,    31,     7,     8,     9,    10,    11,    12,     3,
      14,    42,    41,     7,     8,     9,    10,    11,    12,    40,
      40,    15,    16,    47,    48,    19,    20,    21,    37,    33,
      24,    55,    56,    27,    42,    42,    30,    31,    47,    48,
      34,    35,    41,    36,    37,    38,    55,    56,     3,    42,
      40,    44,     7,     8,     9,    10,    11,    12,    51,    52,
      15,    16,    42,    45,    40,    47,    48,    36,    40,    43,
      63,    64,    65,    55,    56,    30,    31,     7,     8,     9,
      10,    11,    12,    36,    36,    15,    16,    36,    36,    38,
      39,    36,    42,    36,    41,    44,    47,    48,    40,    40,
      30,    31,    51,    52,    55,    56,    57,    58,    59,    60,
      61,    62,    32,    42,    42,    42,    41,    41,    47,    48,
      47,    48,     4,     5,     6,    41,    55,    56,    55,    56,
      41,    13,     7,     8,     9,    10,    11,    12,    42,    14,
       7,     8,     9,    10,    11,    12,    41,    41,    41,     3,
      42,    37,    42,    32,    42,    42,    47,    41,    19,    40,
      37,    41,    40,    22,    47,    36,    42,    23,    42,    42,
      42,    40,    42,    41,    26,    41,    41,    16,    42,    36,
      43,    43,    40,    29,   279,    40,   313,    40,   273,   337,
      41,    41,    41,    40,    29,    -1,    41,    41
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
      95,    96,   103,   105,   106,   107,   108,   109,     3,    40,
      88,    40,    37,    42,    40,    76,    42,    54,    42,    41,
      76,    76,    42,    40,    42,    90,    40,    36,    40,    43,
      36,    36,    36,    36,    41,    90,    90,    90,    40,    76,
      42,    40,    42,    41,    76,    41,    90,     3,    17,    18,
      77,    98,    99,   100,    90,    36,    98,    69,    74,     6,
      37,    77,    94,    41,    32,    90,    41,    76,    42,    41,
      41,    75,    57,    58,    59,    60,    61,    62,   101,    37,
      63,    64,    65,   102,    41,     3,    37,    42,    37,    47,
      42,    37,    47,    79,    32,    42,    41,    42,    77,    40,
      99,    19,    37,    40,    98,    42,    94,    42,    77,    42,
      79,    42,    90,    36,    40,    90,    42,    41,    42,    41,
      98,    22,   104,    41,    77,    41,    37,    80,    23,    25,
      26,    97,    37,    42,    43,    43,    40,    36,    25,    97,
      40,    90,    90,    90,    98,    40,    90,    29,    41,    41,
      37,    90,    41,   104,    40,    41,    90,    41
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
      87,    87,    88,    88,    89,    89,    90,    90,    91,    91,
      91,    91,    91,    91,    91,    92,    93,    93,    94,    94,
      94,    95,    95,    96,    96,    96,    96,    97,    97,    98,
      98,    99,    99,    99,    99,    99,   100,   101,   101,   101,
     101,   101,   101,   102,   102,   102,   103,   104,   104,   105,
     105,   105,   106,   107,   108,   109,   109,   110,   111,   112,
     112
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
      11,    10,     1,     3,     3,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     5,     5,     4,     1,     3,
       3,     1,     1,     7,    11,    12,     8,     7,     2,     3,
       1,     1,     2,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,    11,     0,     6,     1,
       1,     1,     7,    11,     9,     5,     4,     1,     1,     7,
       6
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
#line 75 "parser.y"
                                                  { fprintf(yyout, "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n%s\n%s\n%s\n%s", (yyvsp[-3].rec)->code, (yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code);
	 									freeRecord((yyvsp[-3].rec));
										freeRecord((yyvsp[-2].rec));
										freeRecord((yyvsp[-1].rec));
										freeRecord((yyvsp[0].rec));
	 								  }
#line 1674 "y.tab.c"
    break;

  case 3: /* prog: decs_var principal subprograms  */
#line 81 "parser.y"
                                          { fprintf(yyout, "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n%s\n%s\n%s", (yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code);
	 									freeRecord((yyvsp[-2].rec));
										freeRecord((yyvsp[-1].rec));
										freeRecord((yyvsp[0].rec));
	 								  }
#line 1684 "y.tab.c"
    break;

  case 4: /* prog: decs_var subprograms principal  */
#line 86 "parser.y"
                                          { fprintf(yyout, "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n%s\n%s\n%s", (yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code);
	 									freeRecord((yyvsp[-2].rec));
										freeRecord((yyvsp[-1].rec));
										freeRecord((yyvsp[0].rec));
	 								  }
#line 1694 "y.tab.c"
    break;

  case 5: /* prog: decs_var principal  */
#line 91 "parser.y"
                              { fprintf(yyout, "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n%s\n%s", (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code);
							freeRecord((yyvsp[-1].rec));
	 						freeRecord((yyvsp[0].rec));
	 					  }
#line 1703 "y.tab.c"
    break;

  case 6: /* decs_var: %empty  */
#line 97 "parser.y"
                                                {(yyval.rec) = createRecord("","");}
#line 1709 "y.tab.c"
    break;

  case 7: /* decs_var: dec_var decs_var  */
#line 98 "parser.y"
                                    {char *s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code,"","","");
							 (yyval.rec) = createRecord(s, (yyvsp[-1].rec)->type);
							 freeRecord((yyvsp[-1].rec));
							 freeRecord((yyvsp[0].rec));
							 free(s);
		 					}
#line 1720 "y.tab.c"
    break;

  case 8: /* decs_var: assigns  */
#line 104 "parser.y"
                           {char *s = cat((yyvsp[0].rec)->code, "", "", "","");
					(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
					freeRecord((yyvsp[0].rec));
					free(s);
		 		   }
#line 1730 "y.tab.c"
    break;

  case 9: /* dec_var: type ids SEMI  */
#line 111 "parser.y"
                        {	add('V', (yyvsp[-1].rec)->code);
							char *s = cat((yyvsp[-2].rec)->code, " ", (yyvsp[-1].rec)->code, ";","");
						  	
						  	(yyval.rec) = createRecord(s, (yyvsp[-2].rec)->code);
							freeRecord((yyvsp[-2].rec));
						  	freeRecord((yyvsp[-1].rec));
						  	free(s);
						}
#line 1743 "y.tab.c"
    break;

  case 10: /* dec_var: type ID ASSIGN p_values SEMI  */
#line 119 "parser.y"
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
#line 1766 "y.tab.c"
    break;

  case 11: /* dec_var: type ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI  */
#line 137 "parser.y"
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
#line 1790 "y.tab.c"
    break;

  case 12: /* dec_var: type ID dims SEMI  */
#line 156 "parser.y"
                                    {	add('V', (yyvsp[-2].sValue));
								char *s = cat((yyvsp[-3].rec)->code, " ", (yyvsp[-2].sValue), (yyvsp[-1].rec)->code, ";");
								
								(yyval.rec) = createRecord(s, (yyvsp[-3].rec)->code);
								freeRecord((yyvsp[-3].rec));
								freeRecord((yyvsp[-1].rec));
								free(s);
							}
#line 1803 "y.tab.c"
    break;

  case 13: /* dec_var: type_modifiers type ids SEMI  */
#line 164 "parser.y"
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
#line 1819 "y.tab.c"
    break;

  case 14: /* dec_var: type_modifiers type ID ASSIGN p_values SEMI  */
#line 175 "parser.y"
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
#line 1842 "y.tab.c"
    break;

  case 15: /* dec_var: type_modifiers type ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI  */
#line 193 "parser.y"
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
#line 1868 "y.tab.c"
    break;

  case 16: /* dec_var: type_modifiers type ID dims SEMI  */
#line 214 "parser.y"
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
#line 1884 "y.tab.c"
    break;

  case 17: /* dec_var: type MULT ID ASSIGN p_values SEMI  */
#line 225 "parser.y"
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
#line 1906 "y.tab.c"
    break;

  case 18: /* dec_var: type MULT ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI  */
#line 242 "parser.y"
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
#line 1922 "y.tab.c"
    break;

  case 19: /* dec_var: type MULT ID dims SEMI  */
#line 253 "parser.y"
                                         {	add('V', (yyvsp[-2].sValue));
									char *s = cat((yyvsp[-4].rec)->code, " *", (yyvsp[-2].sValue), (yyvsp[-1].rec)->code, ";");
									
									(yyval.rec) = createRecord(s, (yyvsp[-4].rec)->code);
									freeRecord((yyvsp[-4].rec));
									freeRecord((yyvsp[-1].rec));
									free(s);
								 }
#line 1935 "y.tab.c"
    break;

  case 20: /* dec_var: type_modifiers type MULT ID ASSIGN p_values SEMI  */
#line 261 "parser.y"
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
#line 1958 "y.tab.c"
    break;

  case 21: /* dec_var: type_modifiers type MULT ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI  */
#line 279 "parser.y"
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
#line 1984 "y.tab.c"
    break;

  case 22: /* dec_var: type_modifiers type MULT ID dims SEMI  */
#line 300 "parser.y"
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
#line 1999 "y.tab.c"
    break;

  case 23: /* dec_var: type_modifier STRUCT ID BLOCK_BEGIN decs_var BLOCK_END SEMI  */
#line 310 "parser.y"
                                                                              {	add('V', (yyvsp[-4].sValue));
																		char *s1 = cat((yyvsp[-6].rec)->code, " struct ", (yyvsp[-4].sValue), " {\n", (yyvsp[-2].rec)->code);
																		char *s2 = cat(s1, "\n};", "", "", "");
																		freeRecord((yyvsp[-6].rec));
																		freeRecord((yyvsp[-2].rec));
																		(yyval.rec) = createRecord(s2, "struct");
																		free(s2);
																		free(s1);
																	  }
#line 2013 "y.tab.c"
    break;

  case 24: /* dec_var: STRUCT ID BLOCK_BEGIN decs_var BLOCK_END SEMI  */
#line 319 "parser.y"
                                                                {	add('V', (yyvsp[-4].sValue));
															char *s = cat("struct ", (yyvsp[-4].sValue), " {\n", (yyvsp[-2].rec)->code, "\n};");
															freeRecord((yyvsp[-2].rec));
															(yyval.rec) = createRecord(s, "struct");
															free(s);
														}
#line 2024 "y.tab.c"
    break;

  case 25: /* dec_var: type_modifier STRUCT ID BLOCK_BEGIN BLOCK_END SEMI  */
#line 325 "parser.y"
                                                                     {	add('V', (yyvsp[-3].sValue));
																char *s = cat((yyvsp[-5].rec)->code ," struct ", (yyvsp[-3].sValue) ," {", "};");
																freeRecord((yyvsp[-5].rec));
																(yyval.rec) = createRecord(s, "struct");
																free(s);
															 }
#line 2035 "y.tab.c"
    break;

  case 26: /* dec_var: STRUCT ID BLOCK_BEGIN BLOCK_END SEMI  */
#line 331 "parser.y"
                                                       {add('V', (yyvsp[-3].sValue));
												char *s = cat("struct", (yyvsp[-3].sValue) ,"{};", "", "");
												(yyval.rec) = createRecord(s, "struct");
												free(s);
											   }
#line 2045 "y.tab.c"
    break;

  case 27: /* dec_var: STRUCT ID ID SEMI  */
#line 336 "parser.y"
                                    { 	add('V', (yyvsp[-1].sValue));
								char * s = cat("struct ", (yyvsp[-2].sValue), " ", (yyvsp[-1].sValue), ";");
								(yyval.rec) = createRecord(s, (yyvsp[-2].sValue));
								free(s);
							}
#line 2055 "y.tab.c"
    break;

  case 28: /* dec_var: type_modifier STRUCT ID ID SEMI  */
#line 341 "parser.y"
                                                  { add('V', (yyvsp[-1].sValue));
											char * s1 = cat( (yyvsp[-4].rec)->code, " struct ", (yyvsp[-2].sValue), " ", (yyvsp[-1].sValue));
											char * s2 = cat(s1, ";", "", "", "");
											freeRecord((yyvsp[-4].rec));
											(yyval.rec) = createRecord(s2, (yyvsp[-2].sValue));
											free(s2);
											free(s1);
										}
#line 2068 "y.tab.c"
    break;

  case 29: /* type_modifiers: type_modifier  */
#line 351 "parser.y"
                               {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
									freeRecord((yyvsp[0].rec));
									(yyval.rec) = createRecord(s, "");
									free(s);
							   }
#line 2078 "y.tab.c"
    break;

  case 30: /* type_modifiers: type_modifier type_modifier  */
#line 356 "parser.y"
                                                         {	char *s = cat((yyvsp[-1].rec)->code, " ", (yyvsp[0].rec)->code, "", "");
												freeRecord((yyvsp[-1].rec));
												freeRecord((yyvsp[0].rec));
												(yyval.rec) = createRecord(s, "");
												free(s);
			   								 }
#line 2089 "y.tab.c"
    break;

  case 31: /* type_modifier: CONST  */
#line 364 "parser.y"
                      {	(yyval.rec) = createRecord("const", "");
					  }
#line 2096 "y.tab.c"
    break;

  case 32: /* type_modifier: STATIC  */
#line 366 "parser.y"
                       {(yyval.rec) = createRecord("static", "");
			  		  }
#line 2103 "y.tab.c"
    break;

  case 33: /* type_modifier: ENUM  */
#line 368 "parser.y"
                                 {	(yyval.rec) = createRecord("enum", "");
			  		 }
#line 2110 "y.tab.c"
    break;

  case 34: /* type_modifier: STRUCT  */
#line 370 "parser.y"
                                   {(yyval.rec) = createRecord("struct", "");
			  		   }
#line 2117 "y.tab.c"
    break;

  case 35: /* type: INT  */
#line 374 "parser.y"
           {insert_type("int");
			(yyval.rec) = createRecord("int", "");
		   }
#line 2125 "y.tab.c"
    break;

  case 36: /* type: DOUBLE  */
#line 377 "parser.y"
              {	insert_type("double");
				(yyval.rec) = createRecord("double", "");
	 		  }
#line 2133 "y.tab.c"
    break;

  case 37: /* type: FLOAT  */
#line 380 "parser.y"
                 {	insert_type("float");
				(yyval.rec) = createRecord("float", "");
	 		 }
#line 2141 "y.tab.c"
    break;

  case 38: /* type: CHAR  */
#line 383 "parser.y"
                {	insert_type("char");
				(yyval.rec) = createRecord("char", "");
	 		}
#line 2149 "y.tab.c"
    break;

  case 39: /* type: STRING  */
#line 386 "parser.y"
                  {	insert_type("string");
				(yyval.rec) = createRecord("string", "");
	 		  }
#line 2157 "y.tab.c"
    break;

  case 40: /* type: BOOLEAN  */
#line 389 "parser.y"
                   {insert_type("boolean");
				(yyval.rec) = createRecord("bool", "");
	 		   }
#line 2165 "y.tab.c"
    break;

  case 41: /* ids: atomo  */
#line 394 "parser.y"
            {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
				freeRecord((yyvsp[0].rec));
				free(s);
			}
#line 2175 "y.tab.c"
    break;

  case 42: /* ids: ids COMMA atomo  */
#line 399 "parser.y"
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
#line 2191 "y.tab.c"
    break;

  case 43: /* ids: atomo COMMA p_values  */
#line 410 "parser.y"
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
#line 2208 "y.tab.c"
    break;

  case 44: /* atomo: ID  */
#line 424 "parser.y"
           {
			int index = search((yyvsp[0].sValue));

			if(index == -1){
				(yyval.rec) = createRecord((yyvsp[0].sValue), "");
			}else{
				(yyval.rec) = createRecord((yyvsp[0].sValue), symbol_table[index].data_type);
			}
			free((yyvsp[0].sValue));
		   }
#line 2223 "y.tab.c"
    break;

  case 45: /* atomo: ID dims  */
#line 434 "parser.y"
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
#line 2242 "y.tab.c"
    break;

  case 46: /* atomo: AMPERSAND ID  */
#line 448 "parser.y"
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
#line 2259 "y.tab.c"
    break;

  case 47: /* atomo: MULT ID  */
#line 460 "parser.y"
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
#line 2276 "y.tab.c"
    break;

  case 48: /* atomo: ID DOT ID  */
#line 472 "parser.y"
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
#line 2292 "y.tab.c"
    break;

  case 49: /* dims: OPEN_BRACK CLOSE_BRACK  */
#line 485 "parser.y"
                              {	char *s = cat("[", "]", "", "", "");
								(yyval.rec) = createRecord(s, "");
								free(s);
							  }
#line 2301 "y.tab.c"
    break;

  case 50: /* dims: OPEN_BRACK CLOSE_BRACK dims  */
#line 489 "parser.y"
                                       {char *s = cat("[", "]", (yyvsp[0].rec)->code, "", "");
									freeRecord((yyvsp[0].rec));
									(yyval.rec) = createRecord(s, "");
									free(s);
	 							   }
#line 2311 "y.tab.c"
    break;

  case 51: /* dims: OPEN_BRACK value CLOSE_BRACK  */
#line 494 "parser.y"
                                        {	
										if(strcmp((yyvsp[-1].rec)->type,"int") != 0){
											yyerror("O valor do tamanho de uma matriz tem que ser um inteiro");
										}

										char *s = cat("[", (yyvsp[-1].rec)->code, "]", "", "");
										freeRecord((yyvsp[-1].rec));
										(yyval.rec) = createRecord(s, "");
										free(s);
	 								}
#line 2326 "y.tab.c"
    break;

  case 52: /* dims: OPEN_BRACK value CLOSE_BRACK dims  */
#line 504 "parser.y"
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
#line 2342 "y.tab.c"
    break;

  case 53: /* dims: OPEN_BRACK expr CLOSE_BRACK  */
#line 515 "parser.y"
                                       {
									if(strcmp((yyvsp[-1].rec)->type,"int") != 0){
										yyerror("O valor do tamanho de uma matriz tem que ser um inteiro");
									}
									
									char *s = cat("[", (yyvsp[-1].rec)->code, "]", "", "");
									freeRecord((yyvsp[-1].rec));
									(yyval.rec) = createRecord(s, "");
									free(s);
	 							   }
#line 2357 "y.tab.c"
    break;

  case 54: /* dims: OPEN_BRACK expr CLOSE_BRACK dims  */
#line 525 "parser.y"
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
#line 2373 "y.tab.c"
    break;

  case 55: /* dims: OPEN_BRACK ID CLOSE_BRACK  */
#line 536 "parser.y"
                                     {	char *s = cat("[", (yyvsp[-1].sValue), "]", "", "");
									(yyval.rec) = createRecord(s, "");
									free(s);
	 							 }
#line 2382 "y.tab.c"
    break;

  case 56: /* dims: OPEN_BRACK ID CLOSE_BRACK dims  */
#line 540 "parser.y"
                                      {	char *s = cat("[", (yyvsp[-2].sValue), "]", (yyvsp[0].rec)->code, "");
										freeRecord((yyvsp[0].rec));
										(yyval.rec) = createRecord(s, "");
										free(s);
	 								  }
#line 2392 "y.tab.c"
    break;

  case 57: /* p_values: expr  */
#line 547 "parser.y"
                {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
					(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
					freeRecord((yyvsp[0].rec));
					free(s);
				}
#line 2402 "y.tab.c"
    break;

  case 58: /* p_values: expr COMMA p_values  */
#line 552 "parser.y"
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
#line 2419 "y.tab.c"
    break;

  case 59: /* expr: expr PLUS term  */
#line 566 "parser.y"
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
#line 2436 "y.tab.c"
    break;

  case 60: /* expr: expr MINUS term  */
#line 578 "parser.y"
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
#line 2454 "y.tab.c"
    break;

  case 61: /* expr: expr ADD_ASSIGN term  */
#line 591 "parser.y"
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
#line 2471 "y.tab.c"
    break;

  case 62: /* expr: expr SUB_ASSIGN term  */
#line 603 "parser.y"
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
#line 2487 "y.tab.c"
    break;

  case 63: /* expr: term  */
#line 614 "parser.y"
                {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
				freeRecord((yyvsp[0].rec));
				free(s);
	 		}
#line 2497 "y.tab.c"
    break;

  case 64: /* term: term MULT factor  */
#line 621 "parser.y"
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
#line 2513 "y.tab.c"
    break;

  case 65: /* term: term DIV factor  */
#line 632 "parser.y"
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
#line 2529 "y.tab.c"
    break;

  case 66: /* term: term MODULE factor  */
#line 643 "parser.y"
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
#line 2546 "y.tab.c"
    break;

  case 67: /* term: factor  */
#line 655 "parser.y"
                  { char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
				freeRecord((yyvsp[0].rec));
				free(s);
			  }
#line 2556 "y.tab.c"
    break;

  case 68: /* factor: OPEN_PAREN expr CLOSE_PAREN  */
#line 662 "parser.y"
                                     {	char *s = cat("(", (yyvsp[-1].rec)->code, ")", "", "");
										(yyval.rec) = createRecord(s, (yyvsp[-1].rec)->type);
										freeRecord((yyvsp[-1].rec));
										free(s);
									 }
#line 2566 "y.tab.c"
    break;

  case 69: /* factor: atomo  */
#line 667 "parser.y"
               {	(yyval.rec) = createRecord((yyvsp[0].rec)->code, (yyvsp[0].rec)->type);
	   				freeRecord((yyvsp[0].rec));
	   		   }
#line 2574 "y.tab.c"
    break;

  case 70: /* factor: ID INCREMENT  */
#line 670 "parser.y"
                         { 	
						int index = search((yyvsp[-1].sValue));

						if(index == -1){
							yyerror("Variavel não encontrada");
						}
						
						if(strcmp(symbol_table[index].data_type, "int") != 0 ||
								strcmp(symbol_table[index].data_type,"float") != 0 ){
							yyerror("Essa operação só é permitida para int ou float");	
						}

						char *s = cat((yyvsp[-1].sValue),"++","","","");
						free((yyvsp[-1].sValue));
						(yyval.rec) = createRecord(s, symbol_table[index].data_type);
						free(s);
	   				 }
#line 2596 "y.tab.c"
    break;

  case 71: /* factor: ID DECREMENT  */
#line 687 "parser.y"
                         { 	
						int index = search((yyvsp[-1].sValue));

						if(index == -1){
							yyerror("Variavel não encontrada");
						}

						if(strcmp(symbol_table[index].data_type, "int") != 0 ||
								strcmp(symbol_table[index].data_type,"float") != 0 ){
							yyerror("Essa operação só é permitida para int ou float");	
						}

						char *s = cat((yyvsp[-1].sValue),"--","","","");
						(yyval.rec) = createRecord(s, symbol_table[index].data_type);
						free((yyvsp[-1].sValue));
						free(s);
	   				 }
#line 2618 "y.tab.c"
    break;

  case 72: /* factor: function_call  */
#line 704 "parser.y"
                           {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
						freeRecord((yyvsp[0].rec));	 
						free(s);
	   				   }
#line 2628 "y.tab.c"
    break;

  case 73: /* factor: value  */
#line 709 "parser.y"
                   {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
				freeRecord((yyvsp[0].rec));
				free(s);
	   		   }
#line 2638 "y.tab.c"
    break;

  case 74: /* value: INT_NUMBER  */
#line 715 "parser.y"
                   {char *s = cat((yyvsp[0].sValue),"","","","");
					(yyval.rec) = createRecord(s, "int");
					free(s);	
				   }
#line 2647 "y.tab.c"
    break;

  case 75: /* value: FLOAT_NUMBER  */
#line 719 "parser.y"
                     {	char *s = cat((yyvsp[0].sValue),"","","","");
						(yyval.rec) = createRecord(s, "float");
						free(s);
	  				 }
#line 2656 "y.tab.c"
    break;

  case 76: /* value: STRING_VALUE  */
#line 723 "parser.y"
                         {	char *s = cat((yyvsp[0].sValue),"","","","");
						(yyval.rec) = createRecord(s, "string");
						free(s);
	  				 }
#line 2665 "y.tab.c"
    break;

  case 77: /* value: NULL_VALUE  */
#line 727 "parser.y"
                       {char *s = cat("NULL","","","","");
					(yyval.rec) = createRecord(s, "null");
					free(s);
	  			   }
#line 2674 "y.tab.c"
    break;

  case 78: /* assigns: assign_def  */
#line 733 "parser.y"
                     {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						
						(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
						freeRecord((yyvsp[0].rec));	 
						free(s);
					 }
#line 2685 "y.tab.c"
    break;

  case 79: /* assigns: assign_mat  */
#line 739 "parser.y"
                     {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						freeRecord((yyvsp[0].rec));	 
						(yyval.rec) = createRecord(s, "");
						free(s);
					 }
#line 2695 "y.tab.c"
    break;

  case 80: /* assigns: assign_def assigns  */
#line 744 "parser.y"
                                     {	char *s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
								
								(yyval.rec) = createRecord(s, (yyvsp[-1].rec)->type);
								freeRecord((yyvsp[-1].rec));
								freeRecord((yyvsp[0].rec));
								free(s);
							 }
#line 2707 "y.tab.c"
    break;

  case 81: /* assign_def: ID ASSIGN expr SEMI  */
#line 753 "parser.y"
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
#line 2733 "y.tab.c"
    break;

  case 82: /* assign_mat: ID dims ASSIGN expr SEMI  */
#line 776 "parser.y"
                                      {	char *s = cat((yyvsp[-4].sValue), (yyvsp[-3].rec)->code, "=", (yyvsp[-1].rec)->code, ";");
										freeRecord((yyvsp[-3].rec));
										freeRecord((yyvsp[-1].rec));
										(yyval.rec) = createRecord(s, "");
										free(s);
									  }
#line 2744 "y.tab.c"
    break;

  case 83: /* assign_mat: ID dims ASSIGN ID dims SEMI  */
#line 782 "parser.y"
                                                 {	char *s1 = cat((yyvsp[-5].sValue), (yyvsp[-4].rec)->code, "=", (yyvsp[-2].sValue), (yyvsp[-1].rec)->code);
											char *s2 = cat(s1, ";", "", "", "");
											freeRecord((yyvsp[-4].rec));
											freeRecord((yyvsp[-1].rec));
											(yyval.rec) = createRecord(s2, "");
											free(s2);
											free(s1);
		   								 }
#line 2757 "y.tab.c"
    break;

  case 84: /* subprograms: subprogram  */
#line 792 "parser.y"
                         { 	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
							freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);
						}
#line 2767 "y.tab.c"
    break;

  case 85: /* subprograms: subprogram subprograms  */
#line 797 "parser.y"
                                                 {	char *s = cat((yyvsp[-1].rec)->code, "", (yyvsp[0].rec)->code, "", "");
										freeRecord((yyvsp[-1].rec));
										freeRecord((yyvsp[0].rec));
										(yyval.rec) = createRecord(s, "");
										free(s);
									 }
#line 2778 "y.tab.c"
    break;

  case 86: /* subprogram: proc  */
#line 805 "parser.y"
                  { char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s, "");
					free(s);
				  }
#line 2788 "y.tab.c"
    break;

  case 87: /* subprogram: function  */
#line 810 "parser.y"
                              {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						freeRecord((yyvsp[0].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);
		   			  }
#line 2798 "y.tab.c"
    break;

  case 88: /* proc: VOID ID OPEN_PAREN params CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 817 "parser.y"
                                                                         {	add('P', (yyvsp[-6].sValue));
																			char *s1 = cat("void ", (yyvsp[-6].sValue), "(", (yyvsp[-4].rec)->code, ")");
																			char *s2 = cat(s1, "{\n", (yyvsp[-1].rec)->code, "\n}", "");
																			freeRecord((yyvsp[-4].rec));
																			freeRecord((yyvsp[-1].rec));
																			(yyval.rec) = createRecord(s2, "");
																			free(s2);
																			free(s1);
																		 }
#line 2812 "y.tab.c"
    break;

  case 89: /* proc: VOID ID OPEN_PAREN CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 826 "parser.y"
                                                                      {	add('P', (yyvsp[-5].sValue));
																	char *s = cat("void ", (yyvsp[-5].sValue), "(){\n", (yyvsp[-1].rec)->code, "\n}");
	 																freeRecord((yyvsp[-1].rec));
																	(yyval.rec) = createRecord(s, "");
																	free(s);
	 															  }
#line 2823 "y.tab.c"
    break;

  case 90: /* function: type ID OPEN_PAREN params CLOSE_PAREN BLOCK_BEGIN stmts RETURN factor SEMI BLOCK_END  */
#line 834 "parser.y"
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
#line 2841 "y.tab.c"
    break;

  case 91: /* function: type ID OPEN_PAREN CLOSE_PAREN BLOCK_BEGIN stmts RETURN factor SEMI BLOCK_END  */
#line 847 "parser.y"
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
#line 2856 "y.tab.c"
    break;

  case 92: /* params: param  */
#line 859 "parser.y"
               {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				freeRecord((yyvsp[0].rec));
				(yyval.rec) = createRecord(s, "");
				free(s);
			   }
#line 2866 "y.tab.c"
    break;

  case 93: /* params: param COMMA params  */
#line 864 "parser.y"
                                {	char *s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
								freeRecord((yyvsp[-2].rec));
								freeRecord((yyvsp[0].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
			   				}
#line 2877 "y.tab.c"
    break;

  case 94: /* param: type dims ID  */
#line 872 "parser.y"
                     {	
						add('V', (yyvsp[0].sValue));
						char *s = cat((yyvsp[-2].rec)->code, " ", (yyvsp[-1].rec)->code, (yyvsp[0].sValue), "");
						
						(yyval.rec) = createRecord(s, (yyvsp[-2].rec)->code);
						freeRecord((yyvsp[-2].rec));
						freeRecord((yyvsp[-1].rec));
						free(s);
					 }
#line 2891 "y.tab.c"
    break;

  case 95: /* param: type ID  */
#line 881 "parser.y"
                    {	add('V', (yyvsp[0].sValue));
					char *s = cat((yyvsp[-1].rec)->code, " ", (yyvsp[0].sValue), "", "");
					
					(yyval.rec) = createRecord(s, (yyvsp[-1].rec)->code);
					freeRecord((yyvsp[-1].rec));
					free(s);
			    }
#line 2903 "y.tab.c"
    break;

  case 96: /* stmts: stmt  */
#line 890 "parser.y"
             {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				freeRecord((yyvsp[0].rec));
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 2913 "y.tab.c"
    break;

  case 97: /* stmts: stmt stmts  */
#line 895 "parser.y"
                   {char *s = cat((yyvsp[-1].rec)->code, "\n", (yyvsp[0].rec)->code, "", "");
					freeRecord((yyvsp[-1].rec));
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s, "");
					free(s);
				   }
#line 2924 "y.tab.c"
    break;

  case 98: /* stmt: dec_var  */
#line 903 "parser.y"
               {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				freeRecord((yyvsp[0].rec));
				(yyval.rec) = createRecord(s, "");
				free(s);
			   }
#line 2934 "y.tab.c"
    break;

  case 99: /* stmt: assigns  */
#line 908 "parser.y"
               {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				freeRecord((yyvsp[0].rec));
				(yyval.rec) = createRecord(s, "");
				free(s);
	 		   }
#line 2944 "y.tab.c"
    break;

  case 100: /* stmt: function_call  */
#line 913 "parser.y"
                         {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						freeRecord((yyvsp[0].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);
	 				 }
#line 2954 "y.tab.c"
    break;

  case 101: /* stmt: conditional_stmt  */
#line 918 "parser.y"
                        {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
							freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);
	 					}
#line 2964 "y.tab.c"
    break;

  case 102: /* stmt: iteration_stmt  */
#line 923 "parser.y"
                          {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						freeRecord((yyvsp[0].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);
	 				  }
#line 2974 "y.tab.c"
    break;

  case 103: /* stmt: scan_stmt  */
#line 928 "parser.y"
                     {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s, "");
					free(s);

	 			 }
#line 2985 "y.tab.c"
    break;

  case 104: /* stmt: print_stmt  */
#line 934 "parser.y"
                      {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s, "");
					free(s);
	 			  }
#line 2995 "y.tab.c"
    break;

  case 105: /* scan_stmt: SCAN OPEN_PAREN atomo CLOSE_PAREN SEMI  */
#line 941 "parser.y"
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
#line 3017 "y.tab.c"
    break;

  case 106: /* print_stmt: PRINT OPEN_PAREN print_content CLOSE_PAREN SEMI  */
#line 960 "parser.y"
                                                            {	
																char * s;
																if(strcmp((yyvsp[-2].rec)->type, "int") == 0){
																	s = cat("printf(\"%i\\n\",", (yyvsp[-2].rec)->code, ");", "", "");
																}else if(strcmp((yyvsp[-2].rec)->type, "float") == 0){
																	s = cat("printf(\"%f\\n\",", (yyvsp[-2].rec)->code, ");", "", "");
																}else if(strcmp((yyvsp[-2].rec)->type, "string") == 0){
																	s = cat("printf(", (yyvsp[-2].rec)->code, "\\n);", "", "");
																}else{
																	s = "";
																	yyerror("Tipo invalido para o print");
																}
																
																freeRecord((yyvsp[-2].rec));
																(yyval.rec) = createRecord(s, "");
																free(s);
															}
#line 3039 "y.tab.c"
    break;

  case 107: /* print_stmt: PRINT OPEN_PAREN CLOSE_PAREN SEMI  */
#line 977 "parser.y"
                                                      {	char *s = cat("print(\"\\n\");", "", "", "", "");
		  										(yyval.rec) = createRecord(s, "");
												free(s);
		  									  }
#line 3048 "y.tab.c"
    break;

  case 108: /* print_content: expr  */
#line 983 "parser.y"
                    { 	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
						freeRecord((yyvsp[0].rec));
						free(s);
					}
#line 3058 "y.tab.c"
    break;

  case 109: /* print_content: print_content PLUS expr  */
#line 988 "parser.y"
                                                   {char *s = cat((yyvsp[-2].rec)->code, " + ", (yyvsp[0].rec)->code, "", "");
										freeRecord((yyvsp[-2].rec));
										freeRecord((yyvsp[0].rec));
										(yyval.rec) = createRecord(s, "");
										free(s);
			 						   }
#line 3069 "y.tab.c"
    break;

  case 110: /* print_content: STRING_VALUE PLUS print_content  */
#line 994 "parser.y"
                                                           {char *s = cat((yyvsp[-2].sValue), " + ", (yyvsp[0].rec)->code, "", "");
												freeRecord((yyvsp[0].rec));
												(yyval.rec) = createRecord(s, "");
												free(s);
			 								   }
#line 3079 "y.tab.c"
    break;

  case 111: /* conditional_stmt: if_stmt  */
#line 1001 "parser.y"
                           {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
							freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);	
						   }
#line 3089 "y.tab.c"
    break;

  case 112: /* conditional_stmt: switch_stmt  */
#line 1006 "parser.y"
                                               {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
								freeRecord((yyvsp[0].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
				 			   }
#line 3099 "y.tab.c"
    break;

  case 113: /* if_stmt: IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 1013 "parser.y"
                                                                           {char *s = cat("if(", (yyvsp[-4].rec)->code, "){\n", (yyvsp[-1].rec)->code, "\n}");
																			freeRecord((yyvsp[-4].rec));
																			freeRecord((yyvsp[-1].rec));
																			(yyval.rec) = createRecord(s, "");
																			free(s);
																		   }
#line 3110 "y.tab.c"
    break;

  case 114: /* if_stmt: IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END ELSE BLOCK_BEGIN stmts BLOCK_END  */
#line 1019 "parser.y"
                                                                                                                    { 	char *s1 = cat("if(", (yyvsp[-8].rec)->code, "){\n", (yyvsp[-5].rec)->code, "goto conditionOk1; \n}");
																												char *s2 = cat(s1, (yyvsp[-1].rec)->code, "conditionOk1:", "", "");
																												freeRecord((yyvsp[-8].rec));
																												freeRecord((yyvsp[-5].rec));
																												freeRecord((yyvsp[-1].rec));
																												(yyval.rec) = createRecord(s2, "");
																												free(s2);
																												free(s1);
																											}
#line 3124 "y.tab.c"
    break;

  case 115: /* if_stmt: IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END else_if_stmt ELSE BLOCK_BEGIN stmts BLOCK_END  */
#line 1028 "parser.y"
                                                                                                                                 {	char *s1 = cat("if(", (yyvsp[-9].rec)->code, "){\n", (yyvsp[-6].rec)->code, "goto conditionOk2;\n} ");
																															char *s2 = cat(s1, (yyvsp[-4].rec)->code, "\n", (yyvsp[-1].rec)->code, "\n conditionOk2:");
																															freeRecord((yyvsp[-9].rec));
																															freeRecord((yyvsp[-6].rec));
																															freeRecord((yyvsp[-4].rec));
																															freeRecord((yyvsp[-1].rec));
																															(yyval.rec) = createRecord(s2, "");
																															free(s2);
																															free(s1);
																														 }
#line 3139 "y.tab.c"
    break;

  case 116: /* if_stmt: IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END else_if_stmt  */
#line 1038 "parser.y"
                                                                                                {	char *s1 = cat("if(", (yyvsp[-5].rec)->code, "){\n", (yyvsp[-2].rec)->code, "\n} goto contiditionOk3;");
																							char *s2 = cat(s1, (yyvsp[0].rec)->code, "conditionOk3:", "", "");
																							freeRecord((yyvsp[-5].rec));
																							freeRecord((yyvsp[-2].rec));
																							freeRecord((yyvsp[0].rec));
																							(yyval.rec) = createRecord(s2, "");
																							free(s2);
																							free(s1);
																						}
#line 3153 "y.tab.c"
    break;

  case 117: /* else_if_stmt: ELSE_IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 1049 "parser.y"
                                                                                     {	char *s = cat("if(", (yyvsp[-4].rec)->code, "){\n", (yyvsp[-1].rec)->code, "\n} ");
																						freeRecord((yyvsp[-4].rec));
																						freeRecord((yyvsp[-1].rec));
																						(yyval.rec) = createRecord(s, "");
																						free(s);
																					 }
#line 3164 "y.tab.c"
    break;

  case 118: /* else_if_stmt: else_if_stmt else_if_stmt  */
#line 1055 "parser.y"
                                                     {	char *s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
			 								freeRecord((yyvsp[-1].rec));
											freeRecord((yyvsp[0].rec));
											(yyval.rec) = createRecord(s, "");
											free(s);
			 							 }
#line 3175 "y.tab.c"
    break;

  case 119: /* logic_expr: logic_expr logic_op c_term  */
#line 1063 "parser.y"
                                        {	char *s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
											freeRecord((yyvsp[-2].rec));
											freeRecord((yyvsp[-1].rec));
											freeRecord((yyvsp[0].rec));
											(yyval.rec) = createRecord(s, "");
											free(s);
										}
#line 3187 "y.tab.c"
    break;

  case 120: /* logic_expr: c_term  */
#line 1070 "parser.y"
                            {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
		   				freeRecord((yyvsp[0].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);
		   			}
#line 3197 "y.tab.c"
    break;

  case 121: /* c_term: ID  */
#line 1077 "parser.y"
            {	(yyval.rec) = createRecord((yyvsp[0].sValue), "");
				free((yyvsp[0].sValue));
			}
#line 3205 "y.tab.c"
    break;

  case 122: /* c_term: ID dims  */
#line 1080 "parser.y"
                     {char *s= cat((yyvsp[-1].sValue),(yyvsp[0].rec)->code,"","","");
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s,"");
					free(s);
	   			}
#line 3215 "y.tab.c"
    break;

  case 123: /* c_term: TRUE  */
#line 1085 "parser.y"
                  {		char *s= cat("true","","","","");
					(yyval.rec) = createRecord(s,"");
					free(s);
			}
#line 3224 "y.tab.c"
    break;

  case 124: /* c_term: FALSE  */
#line 1089 "parser.y"
                   {	char *s= cat("false","","","","");
					(yyval.rec) = createRecord(s,"");
					free(s);

	   }
#line 3234 "y.tab.c"
    break;

  case 125: /* c_term: comp  */
#line 1094 "parser.y"
                  {	char *s= cat((yyvsp[0].rec)->code,"","","","");
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s,"");
					free(s);

	   }
#line 3245 "y.tab.c"
    break;

  case 126: /* comp: expr comp_op expr  */
#line 1102 "parser.y"
                        {	char *s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
							freeRecord((yyvsp[-2].rec));
							freeRecord((yyvsp[-1].rec));
							freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);
						}
#line 3257 "y.tab.c"
    break;

  case 127: /* comp_op: EQ  */
#line 1111 "parser.y"
             {	char *s = cat("==", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 3266 "y.tab.c"
    break;

  case 128: /* comp_op: NEQ  */
#line 1115 "parser.y"
                      {	char *s = cat("!=", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			  }
#line 3275 "y.tab.c"
    break;

  case 129: /* comp_op: GE  */
#line 1119 "parser.y"
                     {	char *s = cat(">=", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 3284 "y.tab.c"
    break;

  case 130: /* comp_op: LE  */
#line 1123 "parser.y"
                     {	char *s = cat("<=", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 3293 "y.tab.c"
    break;

  case 131: /* comp_op: GT  */
#line 1127 "parser.y"
                     {	char *s = cat(">", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 3302 "y.tab.c"
    break;

  case 132: /* comp_op: LT  */
#line 1131 "parser.y"
                     {	char *s = cat("<", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 3311 "y.tab.c"
    break;

  case 133: /* logic_op: AND  */
#line 1137 "parser.y"
               {char *s = cat("&&", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			   }
#line 3320 "y.tab.c"
    break;

  case 134: /* logic_op: OR  */
#line 1141 "parser.y"
                      {	char *s = cat("||", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
		 	  }
#line 3329 "y.tab.c"
    break;

  case 135: /* logic_op: NOT  */
#line 1145 "parser.y"
                       {char *s = cat("!", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
		 	   }
#line 3338 "y.tab.c"
    break;

  case 136: /* switch_stmt: SWITCH COLON OPEN_PAREN ID CLOSE_PAREN BLOCK_BEGIN switch_cases DEFAULT COLON stmts BLOCK_END  */
#line 1151 "parser.y"
                                                                                                            {	char *s1 = cat("switch: (", (yyvsp[-7].sValue), "){\n", (yyvsp[-4].rec)->code, "	default:\n");
																												char *s2 = cat(s1, (yyvsp[-1].rec)->code, "\n}", "", "");
																												freeRecord((yyvsp[-4].rec));
																												freeRecord((yyvsp[-1].rec));
																												(yyval.rec) = createRecord(s2, "");
																												free(s2);
																												free(s1);
													  														}
#line 3351 "y.tab.c"
    break;

  case 137: /* switch_cases: %empty  */
#line 1161 "parser.y"
               {(yyval.rec) = createRecord("","");}
#line 3357 "y.tab.c"
    break;

  case 138: /* switch_cases: CASE value COLON stmts BREAK switch_cases  */
#line 1162 "parser.y"
                                                                     {	char *s1 = cat("case ", (yyvsp[-4].rec)->code, ":\n", (yyvsp[-2].rec)->code, "\n");
			 												char *s2 = cat(s1, (yyvsp[0].rec)->code, "", "", "");
															freeRecord((yyvsp[-4].rec));
															freeRecord((yyvsp[-2].rec));
															freeRecord((yyvsp[0].rec));
															(yyval.rec) = createRecord(s2, "");
															free(s2);
															free(s1);
			 											 }
#line 3371 "y.tab.c"
    break;

  case 139: /* iteration_stmt: while_stmt  */
#line 1173 "parser.y"
                            {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
		   						freeRecord((yyvsp[0].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
							}
#line 3381 "y.tab.c"
    break;

  case 140: /* iteration_stmt: for_stmt  */
#line 1178 "parser.y"
                                      {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
		   					freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);
			   			  }
#line 3391 "y.tab.c"
    break;

  case 141: /* iteration_stmt: dowhile_stmt  */
#line 1183 "parser.y"
                                          {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
		   						freeRecord((yyvsp[0].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
			   				  }
#line 3401 "y.tab.c"
    break;

  case 142: /* while_stmt: WHILE OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 1190 "parser.y"
                                                                                 {	char *s = cat("whileLoop: if(", (yyvsp[-4].rec)->code, "){\n", (yyvsp[-1].rec)->code, "goto whileLoop;\n}");
																					freeRecord((yyvsp[-4].rec));
																					freeRecord((yyvsp[-1].rec));
																					(yyval.rec) = createRecord(s, "");
																					free(s);
																				 }
#line 3412 "y.tab.c"
    break;

  case 143: /* for_stmt: FOR OPEN_PAREN dec_var SEMI logic_expr SEMI expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 1198 "parser.y"
                                                                                                    {char *s1 = cat((yyvsp[-8].rec)->code, "forLoop:\n", "if(",(yyvsp[-6].rec)->code, "){\n");
																								char *s2 = cat(s1, (yyvsp[-4].rec)->code, "\n", (yyvsp[-1].rec)->code, "goto forLoop;\n}");
																								freeRecord((yyvsp[-8].rec));
																								freeRecord((yyvsp[-6].rec));
																								freeRecord((yyvsp[-4].rec));
																								freeRecord((yyvsp[-1].rec));
																								(yyval.rec) = createRecord(s2, "");
																								free(s2);
																								free(s1);
																							   }
#line 3427 "y.tab.c"
    break;

  case 144: /* dowhile_stmt: DO BLOCK_BEGIN stmts BLOCK_END WHILE OPEN_PAREN logic_expr CLOSE_PAREN SEMI  */
#line 1210 "parser.y"
                                                                                           {char *s1 = cat((yyvsp[-6].rec)->code, "doWhile: if(", (yyvsp[-2].rec)->code, "){", (yyvsp[-6].rec)->code);
																							char *s2 = cat("} goto doWhile;", "", "", "", "");
																							freeRecord((yyvsp[-6].rec));
																							freeRecord((yyvsp[-2].rec));
																							(yyval.rec) = createRecord(s2, "");
																							free(s1);
																							free(s2);
																						   }
#line 3440 "y.tab.c"
    break;

  case 145: /* function_call: ID OPEN_PAREN args CLOSE_PAREN SEMI  */
#line 1220 "parser.y"
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
#line 3458 "y.tab.c"
    break;

  case 146: /* function_call: ID OPEN_PAREN CLOSE_PAREN SEMI  */
#line 1233 "parser.y"
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
#line 3475 "y.tab.c"
    break;

  case 147: /* args: arg  */
#line 1247 "parser.y"
           {char *s = cat((yyvsp[0].rec)->code,"","","","");
			freeRecord((yyvsp[0].rec));
			(yyval.rec) = createRecord(s, "");
			free(s);
	 	   }
#line 3485 "y.tab.c"
    break;

  case 148: /* arg: ids  */
#line 1254 "parser.y"
          {	char *s = cat((yyvsp[0].rec)->code,"","","","");
			freeRecord((yyvsp[0].rec));
			(yyval.rec) = createRecord(s, "");
			free(s);
	 	  }
#line 3495 "y.tab.c"
    break;

  case 149: /* principal: MAIN OPEN_PAREN params CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 1261 "parser.y"
                                                                           {add('M', "main");
																			char *s = cat("int main(", (yyvsp[-4].rec)->code, "){\n", (yyvsp[-1].rec)->code, "\nreturn 0;\n}");
																			freeRecord((yyvsp[-4].rec));
																			freeRecord((yyvsp[-1].rec));
																			(yyval.rec) = createRecord(s, "");
																			free(s);
																		   }
#line 3507 "y.tab.c"
    break;

  case 150: /* principal: MAIN OPEN_PAREN CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 1268 "parser.y"
                                                                                {	add('M', "main");
																		char *s = cat("int main(){\n", (yyvsp[-1].rec)->code, "\nreturn 0;\n}", "", "");
		  																freeRecord((yyvsp[-1].rec));
																		(yyval.rec) = createRecord(s, "");
																		free(s);
		  															}
#line 3518 "y.tab.c"
    break;


#line 3522 "y.tab.c"

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

#line 1276 "parser.y"
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
