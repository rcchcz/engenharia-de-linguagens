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
#include "./lib/record.h"

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;

extern FILE * yyin, * yyout;

char * cat(char *, char *, char *, char *, char *);


#line 88 "y.tab.c"

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
    IMPORT = 288,                  /* IMPORT  */
    MAIN = 289,                    /* MAIN  */
    OPEN_PAREN = 290,              /* OPEN_PAREN  */
    CLOSE_PAREN = 291,             /* CLOSE_PAREN  */
    OPEN_BRACK = 292,              /* OPEN_BRACK  */
    CLOSE_BRACK = 293,             /* CLOSE_BRACK  */
    BLOCK_BEGIN = 294,             /* BLOCK_BEGIN  */
    BLOCK_END = 295,               /* BLOCK_END  */
    SEMI = 296,                    /* SEMI  */
    COLON = 297,                   /* COLON  */
    DOT = 298,                     /* DOT  */
    COMMA = 299,                   /* COMMA  */
    PLUS = 300,                    /* PLUS  */
    MINUS = 301,                   /* MINUS  */
    DIV = 302,                     /* DIV  */
    MULT = 303,                    /* MULT  */
    INCREMENT = 304,               /* INCREMENT  */
    DECREMENT = 305,               /* DECREMENT  */
    MODULE = 306,                  /* MODULE  */
    ASSIGN = 307,                  /* ASSIGN  */
    ADD_ASSIGN = 308,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 309,              /* SUB_ASSIGN  */
    EQ = 310,                      /* EQ  */
    NEQ = 311,                     /* NEQ  */
    LT = 312,                      /* LT  */
    GT = 313,                      /* GT  */
    LE = 314,                      /* LE  */
    GE = 315,                      /* GE  */
    AND = 316,                     /* AND  */
    OR = 317,                      /* OR  */
    NOT = 318                      /* NOT  */
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
#define IMPORT 288
#define MAIN 289
#define OPEN_PAREN 290
#define CLOSE_PAREN 291
#define OPEN_BRACK 292
#define CLOSE_BRACK 293
#define BLOCK_BEGIN 294
#define BLOCK_END 295
#define SEMI 296
#define COLON 297
#define DOT 298
#define COMMA 299
#define PLUS 300
#define MINUS 301
#define DIV 302
#define MULT 303
#define INCREMENT 304
#define DECREMENT 305
#define MODULE 306
#define ASSIGN 307
#define ADD_ASSIGN 308
#define SUB_ASSIGN 309
#define EQ 310
#define NEQ 311
#define LT 312
#define GT 313
#define LE 314
#define GE 315
#define AND 316
#define OR 317
#define NOT 318

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "parser.y"

	int    iValue; 	/* integer value */
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	float  fValue;  /* float value */
	double dvalue;  /* double value */ 
	struct record * rec;

#line 276 "y.tab.c"

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
  YYSYMBOL_IMPORT = 33,                    /* IMPORT  */
  YYSYMBOL_MAIN = 34,                      /* MAIN  */
  YYSYMBOL_OPEN_PAREN = 35,                /* OPEN_PAREN  */
  YYSYMBOL_CLOSE_PAREN = 36,               /* CLOSE_PAREN  */
  YYSYMBOL_OPEN_BRACK = 37,                /* OPEN_BRACK  */
  YYSYMBOL_CLOSE_BRACK = 38,               /* CLOSE_BRACK  */
  YYSYMBOL_BLOCK_BEGIN = 39,               /* BLOCK_BEGIN  */
  YYSYMBOL_BLOCK_END = 40,                 /* BLOCK_END  */
  YYSYMBOL_SEMI = 41,                      /* SEMI  */
  YYSYMBOL_COLON = 42,                     /* COLON  */
  YYSYMBOL_DOT = 43,                       /* DOT  */
  YYSYMBOL_COMMA = 44,                     /* COMMA  */
  YYSYMBOL_PLUS = 45,                      /* PLUS  */
  YYSYMBOL_MINUS = 46,                     /* MINUS  */
  YYSYMBOL_DIV = 47,                       /* DIV  */
  YYSYMBOL_MULT = 48,                      /* MULT  */
  YYSYMBOL_INCREMENT = 49,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 50,                 /* DECREMENT  */
  YYSYMBOL_MODULE = 51,                    /* MODULE  */
  YYSYMBOL_ASSIGN = 52,                    /* ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 53,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 54,                /* SUB_ASSIGN  */
  YYSYMBOL_EQ = 55,                        /* EQ  */
  YYSYMBOL_NEQ = 56,                       /* NEQ  */
  YYSYMBOL_LT = 57,                        /* LT  */
  YYSYMBOL_GT = 58,                        /* GT  */
  YYSYMBOL_LE = 59,                        /* LE  */
  YYSYMBOL_GE = 60,                        /* GE  */
  YYSYMBOL_AND = 61,                       /* AND  */
  YYSYMBOL_OR = 62,                        /* OR  */
  YYSYMBOL_NOT = 63,                       /* NOT  */
  YYSYMBOL_YYACCEPT = 64,                  /* $accept  */
  YYSYMBOL_prog = 65,                      /* prog  */
  YYSYMBOL_decs_var = 66,                  /* decs_var  */
  YYSYMBOL_dec_var = 67,                   /* dec_var  */
  YYSYMBOL_type_modifiers = 68,            /* type_modifiers  */
  YYSYMBOL_type_modifier = 69,             /* type_modifier  */
  YYSYMBOL_type = 70,                      /* type  */
  YYSYMBOL_ids = 71,                       /* ids  */
  YYSYMBOL_atomo = 72,                     /* atomo  */
  YYSYMBOL_dims = 73,                      /* dims  */
  YYSYMBOL_p_values = 74,                  /* p_values  */
  YYSYMBOL_expr = 75,                      /* expr  */
  YYSYMBOL_term = 76,                      /* term  */
  YYSYMBOL_factor = 77,                    /* factor  */
  YYSYMBOL_value = 78,                     /* value  */
  YYSYMBOL_assigns = 79,                   /* assigns  */
  YYSYMBOL_assign_def = 80,                /* assign_def  */
  YYSYMBOL_assign_mat = 81,                /* assign_mat  */
  YYSYMBOL_subprograms = 82,               /* subprograms  */
  YYSYMBOL_subprogram = 83,                /* subprogram  */
  YYSYMBOL_proc = 84,                      /* proc  */
  YYSYMBOL_function = 85,                  /* function  */
  YYSYMBOL_params = 86,                    /* params  */
  YYSYMBOL_param = 87,                     /* param  */
  YYSYMBOL_stmts = 88,                     /* stmts  */
  YYSYMBOL_stmt = 89,                      /* stmt  */
  YYSYMBOL_conditional_stmt = 90,          /* conditional_stmt  */
  YYSYMBOL_if_stmt = 91,                   /* if_stmt  */
  YYSYMBOL_else_if_stmt = 92,              /* else_if_stmt  */
  YYSYMBOL_logic_expr = 93,                /* logic_expr  */
  YYSYMBOL_c_term = 94,                    /* c_term  */
  YYSYMBOL_comp = 95,                      /* comp  */
  YYSYMBOL_comp_op = 96,                   /* comp_op  */
  YYSYMBOL_logic_op = 97,                  /* logic_op  */
  YYSYMBOL_switch_stmt = 98,               /* switch_stmt  */
  YYSYMBOL_switch_cases = 99,              /* switch_cases  */
  YYSYMBOL_iteration_stmt = 100,           /* iteration_stmt  */
  YYSYMBOL_while_stmt = 101,               /* while_stmt  */
  YYSYMBOL_for_stmt = 102,                 /* for_stmt  */
  YYSYMBOL_dowhile_stmt = 103,             /* dowhile_stmt  */
  YYSYMBOL_funcion_call = 104,             /* funcion_call  */
  YYSYMBOL_args = 105,                     /* args  */
  YYSYMBOL_arg = 106,                      /* arg  */
  YYSYMBOL_principal = 107                 /* principal  */
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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   419

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  274

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   318


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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    47,    47,    48,    49,    50,    53,    54,    55,    58,
      59,    60,    61,    62,    63,    64,    65,    68,    69,    72,
      73,    74,    75,    78,    79,    80,    81,    82,    83,    86,
      87,    88,    91,    92,    95,    96,    97,    98,    99,   100,
     101,   102,   105,   106,   109,   110,   111,   112,   113,   116,
     117,   118,   119,   122,   123,   124,   125,   126,   129,   130,
     131,   134,   135,   136,   139,   142,   143,   146,   147,   150,
     151,   154,   155,   158,   159,   162,   163,   166,   167,   170,
     171,   174,   175,   176,   177,   178,   181,   182,   185,   186,
     187,   188,   191,   192,   195,   196,   199,   200,   201,   202,
     203,   206,   209,   210,   211,   212,   213,   214,   217,   218,
     219,   222,   225,   226,   229,   230,   231,   234,   237,   240,
     243,   244,   247,   248,   251,   254,   255
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
  "IMPORT", "MAIN", "OPEN_PAREN", "CLOSE_PAREN", "OPEN_BRACK",
  "CLOSE_BRACK", "BLOCK_BEGIN", "BLOCK_END", "SEMI", "COLON", "DOT",
  "COMMA", "PLUS", "MINUS", "DIV", "MULT", "INCREMENT", "DECREMENT",
  "MODULE", "ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "EQ", "NEQ", "LT", "GT",
  "LE", "GE", "AND", "OR", "NOT", "$accept", "prog", "decs_var", "dec_var",
  "type_modifiers", "type_modifier", "type", "ids", "atomo", "dims",
  "p_values", "expr", "term", "factor", "value", "assigns", "assign_def",
  "assign_mat", "subprograms", "subprogram", "proc", "function", "params",
  "param", "stmts", "stmt", "conditional_stmt", "if_stmt", "else_if_stmt",
  "logic_expr", "c_term", "comp", "comp_op", "logic_op", "switch_stmt",
  "switch_cases", "iteration_stmt", "while_stmt", "for_stmt",
  "dowhile_stmt", "funcion_call", "args", "arg", "principal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-175)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     240,   -15,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,    36,    -1,   240,   330,   245,    50,  -175,    24,
    -175,     9,   121,    20,  -175,   258,  -175,    74,  -175,    44,
     175,    39,    81,   166,  -175,  -175,  -175,   121,    70,   253,
     -24,  -175,    80,  -175,    -3,   187,  -175,   141,   120,    77,
     126,   107,   338,  -175,  -175,   108,   123,   267,   121,     7,
    -175,   151,   121,  -175,    22,    70,  -175,    33,  -175,    70,
     121,   121,   121,   121,   121,   121,   121,    70,  -175,    -3,
     280,   124,   160,   137,   139,  -175,   338,   121,    41,  -175,
     117,   278,  -175,   147,    70,  -175,  -175,   144,   155,    25,
    -175,  -175,  -175,  -175,   -24,   -24,   -24,   -24,  -175,  -175,
    -175,  -175,   149,  -175,   170,   161,    18,   169,   167,   184,
     186,  -175,   196,  -175,   171,  -175,   121,   121,  -175,  -175,
     203,  -175,  -175,   214,   226,   215,  -175,   277,   257,   330,
     281,   261,   338,  -175,   121,  -175,   289,  -175,   215,   291,
      53,   307,   304,   328,   316,   321,  -175,  -175,   320,   322,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,   215,
    -175,   215,   323,  -175,   324,   325,   327,   215,    97,   215,
     349,   342,    97,   279,  -175,   215,   329,   336,   215,   331,
    -175,  -175,   333,   222,  -175,  -175,   259,   102,  -175,  -175,
     334,   319,   335,   146,    97,  -175,  -175,   349,   339,  -175,
    -175,    58,  -175,  -175,  -175,  -175,  -175,  -175,   121,   337,
    -175,  -175,  -175,    97,   351,   215,   215,   340,    90,   341,
     349,   282,   215,  -175,   343,   346,  -175,   215,   121,  -175,
     344,   345,    97,   328,   347,   228,  -175,  -175,   152,  -175,
     109,   350,   352,   353,   348,   114,   215,  -175,   215,    97,
     355,   354,   356,   357,   216,   215,  -175,  -175,   359,   360,
     215,  -175,   361,  -175
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,    23,    24,    25,    26,    27,    28,    22,    21,
      19,    20,     0,     0,     6,     0,    17,     0,     8,    61,
      62,     0,     0,     0,     1,     0,     7,     0,    18,    32,
       0,    29,     0,    54,    58,    59,    60,     0,    34,     0,
      48,    52,    57,    56,    54,     0,    57,     0,     0,     0,
       0,     0,    67,    69,    70,     5,    32,     0,     0,    33,
       9,     0,     0,    63,     0,    40,    55,     0,    35,    38,
       0,     0,     0,     0,     0,     0,     0,    36,    64,    54,
       0,     0,     0,     0,     0,    68,     0,     0,    33,    13,
       0,    42,    12,     0,    32,    30,    31,     0,   124,     0,
     123,    41,    53,    39,    44,    45,    46,    47,    50,    49,
      51,    37,    55,    65,     0,     0,     0,     0,    75,     0,
       4,     3,     0,    16,     0,    10,     0,     0,    33,   121,
       0,   122,    66,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,    14,     0,    43,     0,   120,     0,     0,
       0,     0,     0,   112,     0,     0,    81,    82,     0,    79,
      84,    86,    87,    85,   114,   115,   116,    83,    77,     0,
      76,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,     0,     0,     0,     0,     0,
      11,    72,     0,    54,    98,    99,     0,     0,    95,   100,
       0,     0,     0,     0,     0,    80,   125,     0,     0,    15,
      71,    55,   102,   103,   107,   106,   105,   104,     0,     0,
     108,   109,   110,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,    94,     0,     0,   111,     0,     0,    74,
       0,     0,     0,   112,     0,     0,    73,   117,     0,   113,
      88,     0,     0,     0,     0,    91,     0,   119,     0,     0,
       0,    93,     0,     0,     0,     0,   118,    89,     0,     0,
       0,    90,     0,    92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,   368,     4,  -175,   370,    -6,    89,   358,   -27,
     -52,   -21,   230,   283,   -18,    31,  -175,  -175,   -47,  -175,
    -175,  -175,   -48,  -175,  -115,  -175,  -175,  -175,   138,  -174,
     168,  -175,  -175,  -175,  -175,   156,  -175,  -175,  -175,  -175,
    -128,  -175,   296,   306
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    12,    13,   156,    15,    16,    17,    98,    31,    23,
      90,    91,    40,    41,    46,   157,    19,    20,    51,    52,
      53,    54,   117,   118,   158,   159,   160,   161,   261,   197,
     198,   199,   218,   223,   162,   181,   163,   164,   165,   166,
      43,    99,   100,    55
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    45,    59,    42,    14,    85,    66,   167,   203,    27,
      96,    68,    33,    34,    35,    36,    67,    66,    14,    50,
     167,   136,    21,    74,    75,    94,    80,    76,    94,    88,
     228,    18,    64,   176,    21,   122,    24,    22,   101,   121,
      25,   167,   103,   167,    37,    18,    50,    38,    92,   167,
     111,   167,   112,    29,   186,    21,   187,   167,    97,    93,
     167,   130,   192,    63,   200,    32,   134,   128,   248,   102,
     205,   141,    47,   208,   145,   146,   116,    56,    70,    71,
      50,    21,   123,    62,     1,   264,    72,    73,    64,   137,
      21,   170,   174,   124,   -97,   173,    58,   167,   167,   -97,
     193,    34,    35,    36,   167,    22,    30,    21,   116,   167,
     235,   236,    82,   116,   194,   195,    57,   241,    77,   -97,
     -97,   -97,   244,    81,    44,    34,    35,    36,   167,    83,
     167,   238,    37,   116,   253,   254,    50,   167,   219,   260,
     254,   262,   167,   263,    79,    34,    35,    36,    84,    86,
     269,   220,   221,   222,    94,   272,    37,   196,   125,   114,
      21,   196,   201,   220,   221,   222,   211,     2,     3,     4,
       5,     6,   119,    49,     7,    87,    37,     2,     3,     4,
       5,     6,   227,   196,     7,   129,   127,   204,   252,   229,
     132,     2,     3,     4,     5,     6,   115,   231,     7,    61,
     135,    64,   196,    21,    65,   138,   133,   220,   221,   222,
     144,   139,   240,   220,   221,   222,    60,   245,   150,    61,
     140,   196,     2,     3,     4,     5,     6,   142,    78,     7,
       8,     9,    70,    71,   151,   152,   153,   143,   196,   154,
      72,    73,   155,     1,   147,    10,    11,     2,     3,     4,
       5,     6,   268,   148,     7,     8,     9,    64,   -96,    21,
       8,     9,   149,   -96,   251,     2,     3,     4,     5,     6,
      10,    11,    48,    70,    71,    10,    11,   220,   221,   222,
     168,    72,    73,   -96,   -96,   -96,     2,     3,     4,     5,
       6,    69,    49,     7,     8,     9,   169,   172,    70,    71,
     104,   105,   106,   107,    70,    71,    72,    73,    89,    10,
      11,    61,    72,    73,   212,   213,   214,   215,   216,   217,
     171,   113,   126,    70,    71,    70,    71,    70,    71,   175,
     177,    72,    73,    72,    73,    72,    73,     2,     3,     4,
       5,     6,   178,   179,     7,     2,     3,     4,     5,     6,
     180,   182,    48,    34,    35,    36,   183,   108,   109,   110,
     184,   225,   188,   185,   189,   202,   190,   191,   207,   206,
     234,   230,   209,   210,   224,   243,   232,   226,   242,   237,
     254,   239,    26,   259,   246,   247,    28,   250,   255,   256,
     120,   233,   258,   257,   265,   131,   266,   267,   270,   249,
     271,   273,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95
};

static const yytype_int16 yycheck[] =
{
      21,    22,    29,    21,     0,    52,    33,   135,   182,    15,
      62,    38,     3,     4,     5,     6,    37,    44,    14,    25,
     148,     3,    37,    47,    48,     3,    47,    51,     3,    56,
     204,     0,    35,   148,    37,    87,     0,    52,    65,    86,
      41,   169,    69,   171,    35,    14,    52,    38,    41,   177,
      77,   179,    79,     3,   169,    37,   171,   185,    36,    52,
     188,    36,   177,    32,   179,    41,   114,    94,   242,    36,
     185,   119,    52,   188,   126,   127,    82,     3,    45,    46,
      86,    37,    41,    44,     3,   259,    53,    54,    35,   116,
      37,   139,   144,    52,    36,   142,    52,   225,   226,    41,
       3,     4,     5,     6,   232,    52,    17,    37,   114,   237,
     225,   226,    35,   119,    17,    18,    27,   232,    38,    61,
      62,    63,   237,     3,     3,     4,     5,     6,   256,     3,
     258,    41,    35,   139,    25,    26,   142,   265,    36,    25,
      26,   256,   270,   258,     3,     4,     5,     6,    41,    41,
     265,    61,    62,    63,     3,   270,    35,   178,    41,    35,
      37,   182,   180,    61,    62,    63,   193,     7,     8,     9,
      10,    11,    35,    34,    14,    52,    35,     7,     8,     9,
      10,    11,    36,   204,    14,    41,    39,   183,    36,   207,
      41,     7,     8,     9,    10,    11,    36,   218,    14,    44,
      39,    35,   223,    37,    38,    36,    36,    61,    62,    63,
      39,    44,   230,    61,    62,    63,    41,   238,     3,    44,
      36,   242,     7,     8,     9,    10,    11,    41,    41,    14,
      15,    16,    45,    46,    19,    20,    21,    41,   259,    24,
      53,    54,    27,     3,    41,    30,    31,     7,     8,     9,
      10,    11,    36,    39,    14,    15,    16,    35,    36,    37,
      15,    16,    36,    41,    36,     7,     8,     9,    10,    11,
      30,    31,    14,    45,    46,    30,    31,    61,    62,    63,
       3,    53,    54,    61,    62,    63,     7,     8,     9,    10,
      11,    38,    34,    14,    15,    16,    39,    36,    45,    46,
      70,    71,    72,    73,    45,    46,    53,    54,    41,    30,
      31,    44,    53,    54,    55,    56,    57,    58,    59,    60,
      39,    41,    44,    45,    46,    45,    46,    45,    46,    40,
      39,    53,    54,    53,    54,    53,    54,     7,     8,     9,
      10,    11,    35,    39,    14,     7,     8,     9,    10,    11,
      22,    35,    14,     4,     5,     6,    35,    74,    75,    76,
      40,    42,    39,    41,    40,    23,    41,    40,    32,    40,
      19,    32,    41,    40,    40,    29,    39,    42,    35,    39,
      26,    40,    14,    35,    40,    40,    16,    40,   250,    39,
      84,   223,    39,    41,    39,    99,    40,    40,    39,   243,
      40,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     8,     9,    10,    11,    14,    15,    16,
      30,    31,    65,    66,    67,    68,    69,    70,    79,    80,
      81,    37,    52,    73,     0,    41,    66,    70,    69,     3,
      71,    72,    41,     3,     4,     5,     6,    35,    38,    75,
      76,    77,    78,   104,     3,    75,    78,    52,    14,    34,
      70,    82,    83,    84,    85,   107,     3,    71,    52,    73,
      41,    44,    44,    79,    35,    38,    73,    75,    73,    38,
      45,    46,    53,    54,    47,    48,    51,    38,    41,     3,
      75,     3,    35,     3,    41,    82,    41,    52,    73,    41,
      74,    75,    41,    52,     3,    72,    74,    36,    71,   105,
     106,    73,    36,    73,    76,    76,    76,    76,    77,    77,
      77,    73,    73,    41,    35,    36,    70,    86,    87,    35,
     107,    82,    74,    41,    52,    41,    44,    39,    73,    41,
      36,   106,    41,    36,    86,    39,     3,    73,    36,    44,
      36,    86,    41,    41,    39,    74,    74,    41,    39,    36,
       3,    19,    20,    21,    24,    27,    67,    79,    88,    89,
      90,    91,    98,   100,   101,   102,   103,   104,     3,    39,
      86,    39,    36,    82,    74,    40,    88,    39,    35,    39,
      22,    99,    35,    35,    40,    41,    88,    88,    39,    40,
      41,    40,    88,     3,    17,    18,    75,    93,    94,    95,
      88,    78,    23,    93,    67,    88,    40,    32,    88,    41,
      40,    73,    55,    56,    57,    58,    59,    60,    96,    36,
      61,    62,    63,    97,    40,    42,    42,    36,    93,    78,
      32,    75,    39,    94,    19,    88,    88,    39,    41,    40,
      78,    88,    35,    29,    88,    75,    40,    40,    93,    99,
      40,    36,    36,    25,    26,    92,    39,    41,    39,    35,
      25,    92,    88,    88,    93,    39,    40,    40,    36,    88,
      39,    40,    88,    40
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    65,    65,    65,    66,    66,    66,    67,
      67,    67,    67,    67,    67,    67,    67,    68,    68,    69,
      69,    69,    69,    70,    70,    70,    70,    70,    70,    71,
      71,    71,    72,    72,    73,    73,    73,    73,    73,    73,
      73,    73,    74,    74,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    77,    77,    77,    77,    77,    78,    78,
      78,    79,    79,    79,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    89,    89,    89,    90,    90,    91,    91,
      91,    91,    92,    92,    93,    93,    94,    94,    94,    94,
      94,    95,    96,    96,    96,    96,    96,    96,    97,    97,
      97,    98,    99,    99,   100,   100,   100,   101,   102,   103,
     104,   104,   105,   105,   106,   107,   107
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     5,     5,     3,     0,     2,     1,     3,
       5,     8,     4,     4,     6,     9,     5,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     2,     2,     3,     3,     4,     3,     4,
       3,     4,     1,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     5,     6,     1,     2,     1,
       1,     8,     7,    10,     9,     1,     3,     3,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     7,    11,
      12,     8,     7,     2,     3,     1,     1,     2,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     0,     6,     1,     1,     1,     7,    10,     9,
       5,     4,     2,     1,     1,     7,     6
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
  case 44: /* expr: expr PLUS term  */
#line 109 "parser.y"
                      {(yyval.rec) = (yyvsp[-2].rec) + (yyvsp[0].rec);}
#line 1576 "y.tab.c"
    break;

  case 45: /* expr: expr MINUS term  */
#line 110 "parser.y"
                           {(yyval.rec) = (yyvsp[-2].rec) - (yyvsp[0].rec);}
#line 1582 "y.tab.c"
    break;


#line 1586 "y.tab.c"

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

#line 258 "parser.y"
 /* Fim da segunda seção */

int main (void) {
	return yyparse();
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}
