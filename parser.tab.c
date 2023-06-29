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


#line 87 "parser.tab.c"

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

#include "parser.tab.h"
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
  YYSYMBOL_function_call = 104,            /* function_call  */
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
#define YYLAST   402

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
static const yytype_int16 yyrline[] =
{
       0,    48,    48,    54,    59,    64,    70,    71,    77,    80,
      86,    94,   103,   109,   118,   127,   139,   150,   155,   163,
     165,   167,   169,   173,   175,   177,   179,   181,   183,   187,
     192,   198,   206,   209,   216,   220,   225,   230,   236,   241,
     247,   251,   258,   263,   271,   277,   283,   289,   295,   302,
     308,   314,   320,   327,   332,   335,   340,   345,   352,   358,
     364,   370,   375,   380,   388,   395,   401,   411,   416,   424,
     429,   436,   444,   451,   463,   474,   479,   487,   493,   500,
     505,   513,   518,   523,   528,   533,   540,   545,   552,   558,
     567,   577,   588,   594,   602,   609,   616,   619,   624,   628,
     633,   641,   644,   648,   652,   656,   660,   664,   670,   674,
     678,   684,   694,   695,   706,   711,   716,   723,   731,   743,
     751,   756,   762,   768,   775,   782,   788
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
  "dowhile_stmt", "function_call", "args", "arg", "principal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-169)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     232,    38,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,    40,   175,   232,   323,   263,    73,  -169,   105,
    -169,    62,    76,   -11,  -169,   109,    81,   117,    92,   331,
    -169,  -169,   331,  -169,   134,  -169,   106,    15,   143,  -169,
     309,  -169,  -169,  -169,    76,   158,    53,   149,  -169,   153,
    -169,   -28,   270,  -169,   119,   170,   131,   171,   331,  -169,
    -169,   123,    88,    76,    61,  -169,   205,    76,    17,   158,
    -169,   238,  -169,   158,    76,    76,    76,    76,    76,    76,
      76,   158,  -169,   -28,   272,   154,   185,     8,   183,   181,
     162,  -169,    76,   140,  -169,   188,   275,  -169,   191,   158,
    -169,  -169,   195,   210,    27,  -169,  -169,  -169,  -169,   149,
     149,   149,   149,  -169,  -169,  -169,  -169,   215,  -169,   221,
     233,   207,  -169,   258,   231,   323,   242,   246,   245,  -169,
     283,  -169,    76,    76,  -169,  -169,   271,  -169,  -169,   207,
     288,   114,   279,   296,   243,   301,   308,  -169,  -169,   314,
     207,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,
     207,  -169,   207,   316,  -169,    76,  -169,   317,  -169,   318,
     207,    66,   207,   321,    66,   257,  -169,  -169,   319,   328,
     207,   322,   320,  -169,   324,   214,  -169,  -169,   250,    85,
    -169,  -169,   325,   360,    94,    66,  -169,   344,   334,   326,
    -169,  -169,   -12,  -169,  -169,  -169,  -169,  -169,  -169,    76,
     329,  -169,  -169,  -169,    66,   350,   335,   333,    33,   330,
     344,  -169,   199,   207,  -169,   338,   336,   207,    76,  -169,
     337,   339,    66,   352,   340,   244,  -169,  -169,   141,   344,
     353,    78,   342,   341,   343,   345,   347,   348,   187,   207,
    -169,   207,   207,   207,    66,   349,   358,   351,   361,   354,
     355,   196,   207,  -169,   352,  -169,  -169,   357,   359,  -169,
     207,  -169,   362,  -169
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,    23,    24,    25,    26,    27,    28,    22,    21,
      19,    20,     0,     0,     6,     0,    17,     0,     8,    61,
      62,     0,     0,     0,     1,     0,     0,     0,     0,    67,
      69,    70,     5,     7,     0,    18,    32,     0,    29,    63,
      54,    58,    59,    60,     0,    34,     0,    48,    52,    57,
      56,    54,     0,    57,     0,     0,     0,     0,     4,    68,
       3,    32,     0,     0,    33,     9,     0,     0,     0,    40,
      55,     0,    35,    38,     0,     0,     0,     0,     0,     0,
       0,    36,    64,    54,     0,     0,     0,     0,     0,    75,
       0,     2,     0,    33,    13,     0,    42,    12,     0,    32,
      30,    31,     0,   124,     0,   123,    41,    53,    39,    44,
      45,    46,    47,    50,    49,    51,    37,    55,    65,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,    16,
       0,    10,     0,     0,    33,   121,     0,   122,    66,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    82,     0,
      79,    84,    86,    87,    85,   114,   115,   116,    83,    77,
       0,    76,     0,     0,    14,     0,    43,     0,   120,     0,
       0,     0,     0,     0,     0,     0,   126,    80,     0,     0,
       0,     0,     0,    72,     0,    54,    98,    99,     0,     0,
      95,   100,     0,     0,     0,     0,   125,     0,     0,     0,
      11,    71,    55,   102,   103,   107,   106,   105,   104,     0,
       0,   108,   109,   110,     0,     0,     0,     0,     0,     0,
       0,    15,   101,     0,    94,     0,     0,     0,     0,    74,
       0,     0,     0,   112,     0,     0,    73,   117,     0,     0,
       0,    88,     0,     0,     0,     0,     0,     0,    91,     0,
     119,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,   118,   112,   111,    89,     0,     0,   113,
       0,    90,     0,    92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,   364,     4,  -169,   373,     2,     5,   327,   -26,
     -55,   -21,   225,   273,   -19,   180,  -169,  -169,    56,  -169,
    -169,  -169,   -77,  -169,  -134,  -169,  -169,  -169,   151,  -168,
     184,  -169,  -169,  -169,  -169,   133,  -169,  -169,  -169,  -169,
    -118,  -169,   297,   372
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    12,    13,   147,    15,    16,    17,   103,    38,    23,
      95,    96,    47,    48,    53,   148,    19,    20,    28,    29,
      30,    31,    88,    89,   149,   150,   151,   152,   256,   189,
     190,   191,   209,   214,   153,   240,   154,   155,   156,   157,
      50,   104,   105,    32
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    52,    49,   158,    14,   169,   194,    68,   120,    21,
      64,   122,   101,   127,    70,    27,   177,    34,    14,    72,
      99,   158,    37,    71,   -97,    70,   178,   218,   179,   -97,
      99,    27,   158,    84,    27,    93,   184,   128,   192,    62,
      24,    54,   158,   106,   158,    21,   198,   108,   161,   -97,
     -97,   -97,   158,   102,   158,   116,    65,   117,    87,    66,
      27,   123,   158,   136,   238,    40,    41,    42,    43,   185,
      41,    42,    43,   134,   228,    21,    36,   166,   167,    51,
      41,    42,    43,   186,   187,    59,   261,    87,    60,   231,
      22,    73,    87,   234,   211,   212,   213,    44,    74,    75,
      45,    44,    97,   246,   247,   158,    76,    77,     1,   158,
     181,    44,    55,    98,    91,   257,    56,   258,   259,   260,
      57,   210,    83,    41,    42,    43,    26,    87,   268,    94,
     217,   158,    66,   158,   158,   158,   272,    61,     2,     3,
       4,     5,     6,    21,   158,     7,   211,   212,   213,    68,
     188,    21,   158,   188,    44,   211,   212,   213,    63,   202,
      21,     2,     3,     4,     5,     6,    22,    86,     7,     2,
       3,     4,     5,     6,   188,    92,     7,   243,   219,   195,
      18,   129,     2,     3,     4,     5,     6,    67,   222,    25,
     119,    81,   130,   188,    18,    21,    78,    79,   126,    39,
      80,   230,   211,   212,   213,    85,    90,   235,    99,    26,
     141,   188,   255,   247,     2,     3,     4,     5,     6,   124,
     244,     7,     8,     9,   121,   125,   142,   143,   144,   131,
     133,   145,   267,   188,   146,     1,   135,    10,    11,     2,
       3,     4,     5,     6,    74,    75,     7,     8,     9,    68,
     -96,    21,    76,    77,    66,   -96,   138,   211,   212,   213,
     139,   159,    10,    11,     2,     3,     4,     5,     6,   140,
     160,     7,     8,     9,   107,   -96,   -96,   -96,     8,     9,
     242,   162,   163,    74,    75,   173,   164,    10,    11,    74,
      75,    76,    77,    10,    11,    74,    75,    76,    77,   109,
     110,   111,   112,    76,    77,   203,   204,   205,   206,   207,
     208,    82,   168,   118,   171,    74,    75,    74,    75,   132,
      74,    75,   165,    76,    77,    76,    77,   170,    76,    77,
       2,     3,     4,     5,     6,   172,   174,     7,     2,     3,
       4,     5,     6,   175,    68,    25,    21,    69,    41,    42,
      43,   113,   114,   115,   176,   180,   193,   182,   183,   196,
     197,   200,   199,   216,   201,   215,   220,   221,   223,   225,
     229,   226,   227,   232,   239,   233,   245,   236,    33,   237,
     241,   249,   250,   254,   247,   251,   253,   252,   262,    35,
     264,   263,   248,   100,   265,   266,   270,   269,   224,   271,
      58,   137,   273
};

static const yytype_int16 yycheck[] =
{
      21,    22,    21,   121,     0,   139,   174,    35,    85,    37,
      36,     3,    67,    90,    40,    13,   150,    15,    14,    45,
       3,   139,    17,    44,    36,    51,   160,   195,   162,    41,
       3,    29,   150,    54,    32,    61,   170,    92,   172,    34,
       0,    52,   160,    69,   162,    37,   180,    73,   125,    61,
      62,    63,   170,    36,   172,    81,    41,    83,    56,    44,
      58,    87,   180,    36,   232,     3,     4,     5,     6,     3,
       4,     5,     6,    99,    41,    37,     3,   132,   133,     3,
       4,     5,     6,    17,    18,    29,   254,    85,    32,   223,
      52,    38,    90,   227,    61,    62,    63,    35,    45,    46,
      38,    35,    41,    25,    26,   223,    53,    54,     3,   227,
     165,    35,     3,    52,    58,   249,    35,   251,   252,   253,
       3,    36,     3,     4,     5,     6,    34,   125,   262,    41,
      36,   249,    44,   251,   252,   253,   270,     3,     7,     8,
       9,    10,    11,    37,   262,    14,    61,    62,    63,    35,
     171,    37,   270,   174,    35,    61,    62,    63,    52,   185,
      37,     7,     8,     9,    10,    11,    52,    36,    14,     7,
       8,     9,    10,    11,   195,    52,    14,    36,   197,   175,
       0,    41,     7,     8,     9,    10,    11,    44,   209,    14,
      36,    38,    52,   214,    14,    37,    47,    48,    36,    19,
      51,   220,    61,    62,    63,    35,    35,   228,     3,    34,
       3,   232,    25,    26,     7,     8,     9,    10,    11,    36,
     239,    14,    15,    16,    39,    44,    19,    20,    21,    41,
      39,    24,    36,   254,    27,     3,    41,    30,    31,     7,
       8,     9,    10,    11,    45,    46,    14,    15,    16,    35,
      36,    37,    53,    54,    44,    41,    41,    61,    62,    63,
      39,     3,    30,    31,     7,     8,     9,    10,    11,    36,
      39,    14,    15,    16,    36,    61,    62,    63,    15,    16,
      36,    39,    36,    45,    46,    42,    41,    30,    31,    45,
      46,    53,    54,    30,    31,    45,    46,    53,    54,    74,
      75,    76,    77,    53,    54,    55,    56,    57,    58,    59,
      60,    41,    41,    41,    35,    45,    46,    45,    46,    44,
      45,    46,    39,    53,    54,    53,    54,    39,    53,    54,
       7,     8,     9,    10,    11,    39,    35,    14,     7,     8,
       9,    10,    11,    35,    35,    14,    37,    38,     4,     5,
       6,    78,    79,    80,    40,    39,    35,    40,    40,    40,
      32,    41,    40,     3,    40,    40,    32,    41,    39,    19,
      40,    36,    39,    35,    22,    39,    23,    40,    14,    40,
      40,    39,    41,    35,    26,    42,    39,    42,    39,    16,
      29,    40,   241,    66,    40,    40,    39,   264,   214,    40,
      28,   104,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     8,     9,    10,    11,    14,    15,    16,
      30,    31,    65,    66,    67,    68,    69,    70,    79,    80,
      81,    37,    52,    73,     0,    14,    34,    70,    82,    83,
      84,    85,   107,    66,    70,    69,     3,    71,    72,    79,
       3,     4,     5,     6,    35,    38,    75,    76,    77,    78,
     104,     3,    75,    78,    52,     3,    35,     3,   107,    82,
      82,     3,    71,    52,    73,    41,    44,    44,    35,    38,
      73,    75,    73,    38,    45,    46,    53,    54,    47,    48,
      51,    38,    41,     3,    75,    35,    36,    70,    86,    87,
      35,    82,    52,    73,    41,    74,    75,    41,    52,     3,
      72,    74,    36,    71,   105,   106,    73,    36,    73,    76,
      76,    76,    76,    77,    77,    77,    73,    73,    41,    36,
      86,    39,     3,    73,    36,    44,    36,    86,    74,    41,
      52,    41,    44,    39,    73,    41,    36,   106,    41,    39,
      36,     3,    19,    20,    21,    24,    27,    67,    79,    88,
      89,    90,    91,    98,   100,   101,   102,   103,   104,     3,
      39,    86,    39,    36,    41,    39,    74,    74,    41,    88,
      39,    35,    39,    42,    35,    35,    40,    88,    88,    88,
      39,    74,    40,    40,    88,     3,    17,    18,    75,    93,
      94,    95,    88,    35,    93,    67,    40,    32,    88,    40,
      41,    40,    73,    55,    56,    57,    58,    59,    60,    96,
      36,    61,    62,    63,    97,    40,     3,    36,    93,    78,
      32,    41,    75,    39,    94,    19,    36,    39,    41,    40,
      78,    88,    35,    39,    88,    75,    40,    40,    93,    22,
      99,    40,    36,    36,    78,    23,    25,    26,    92,    39,
      41,    42,    42,    39,    35,    25,    92,    88,    88,    88,
      88,    93,    39,    40,    29,    40,    40,    36,    88,    99,
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
       0,     2,     4,     3,     3,     2,     0,     2,     1,     3,
       5,     8,     4,     4,     6,     9,     5,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     2,     2,     3,     3,     4,     3,     4,
       3,     4,     1,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     5,     6,     1,     2,     1,
       1,     8,     7,    10,     9,     1,     3,     3,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     7,    11,
      12,     8,     7,     2,     3,     1,     1,     2,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,    11,     0,     6,     1,     1,     1,     7,    10,     9,
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
  case 2: /* prog: decs_var subprograms principal subprograms  */
#line 48 "parser.y"
                                                  { fprintf(yyout, "%s\n%s\n%s\n%s", (yyvsp[-3].rec)->code, (yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code);
	 									freeRecord((yyvsp[-3].rec));
										freeRecord((yyvsp[-2].rec));
										freeRecord((yyvsp[-1].rec));
										freeRecord((yyvsp[0].rec));
	 								  }
#line 1398 "parser.tab.c"
    break;

  case 3: /* prog: decs_var principal subprograms  */
#line 54 "parser.y"
                                          { fprintf(yyout, "%s\n%s\n%s", (yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code);
	 									freeRecord((yyvsp[-2].rec));
										freeRecord((yyvsp[-1].rec));
										freeRecord((yyvsp[0].rec));
	 								  }
#line 1408 "parser.tab.c"
    break;

  case 4: /* prog: decs_var subprograms principal  */
#line 59 "parser.y"
                                          { fprintf(yyout, "%s\n%s\n%s", (yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code);
	 									freeRecord((yyvsp[-2].rec));
										freeRecord((yyvsp[-1].rec));
										freeRecord((yyvsp[0].rec));
	 								  }
#line 1418 "parser.tab.c"
    break;

  case 5: /* prog: decs_var principal  */
#line 64 "parser.y"
                              { fprintf(yyout, "%s\n%s", (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code);
							freeRecord((yyvsp[-1].rec));
	 						freeRecord((yyvsp[0].rec));
	 					  }
#line 1427 "parser.tab.c"
    break;

  case 6: /* decs_var: %empty  */
#line 70 "parser.y"
                                                {(yyval.rec) = createRecord("","");}
#line 1433 "parser.tab.c"
    break;

  case 7: /* decs_var: dec_var decs_var  */
#line 71 "parser.y"
                                    {char *s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code,"","","");
		 					 freeRecord((yyvsp[-1].rec));
							 freeRecord((yyvsp[0].rec));
							 (yyval.rec) = createRecord(s, "");
							 free(s);
		 					}
#line 1444 "parser.tab.c"
    break;

  case 8: /* decs_var: assigns  */
#line 77 "parser.y"
                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1450 "parser.tab.c"
    break;

  case 9: /* dec_var: type ids SEMI  */
#line 80 "parser.y"
                        { char *s = cat((yyvsp[-2].rec)->code, " ", (yyvsp[-1].rec)->code, ";","");
						  freeRecord((yyvsp[-2].rec));
						  freeRecord((yyvsp[-1].rec));
						  (yyval.rec) = createRecord(s, "");
						  free(s);
						}
#line 1461 "parser.tab.c"
    break;

  case 10: /* dec_var: type ID ASSIGN p_values SEMI  */
#line 86 "parser.y"
                                                { 	char *s1 = cat((yyvsp[-4].rec)->code, " ", (yyvsp[-3].sValue), "=", (yyvsp[-1].rec)->code);
											char *s2 = cat(s1, ";", "", "", "");
											freeRecord((yyvsp[-4].rec));
											freeRecord((yyvsp[-1].rec));
											(yyval.rec) = createRecord(s2, "");
											free(s2);
											free(s1);
										}
#line 1474 "parser.tab.c"
    break;

  case 11: /* dec_var: type ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI  */
#line 94 "parser.y"
                                                                          { char *s1 = cat((yyvsp[-7].rec)->code, " ", (yyvsp[-6].sValue), (yyvsp[-5].rec)->code, "=");
																	char *s2 = cat(s1, "{", (yyvsp[-2].rec)->code, "}", ";");
																  	freeRecord((yyvsp[-7].rec));
																	freeRecord((yyvsp[-5].rec));
																	freeRecord((yyvsp[-2].rec));
																	(yyval.rec) = createRecord(s2, "");
																	free(s2);
																	free(s1);
																  }
#line 1488 "parser.tab.c"
    break;

  case 12: /* dec_var: type ID dims SEMI  */
#line 103 "parser.y"
                                    {	char *s = cat((yyvsp[-3].rec)->code, " ", (yyvsp[-2].sValue), (yyvsp[-1].rec)->code, ";");
								freeRecord((yyvsp[-3].rec));
								freeRecord((yyvsp[-1].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
							}
#line 1499 "parser.tab.c"
    break;

  case 13: /* dec_var: type_modifiers type ids SEMI  */
#line 109 "parser.y"
                                               {	char *s1 = cat((yyvsp[-3].rec)->code, " ", (yyvsp[-2].rec)->code, " ", (yyvsp[-1].rec)->code);
											char *s2 = cat(s1, ";", "", "", "");
											freeRecord((yyvsp[-3].rec));
											freeRecord((yyvsp[-2].rec));
											freeRecord((yyvsp[-1].rec));
											(yyval.rec) = createRecord(s2, "");
											free(s2);
											free(s1);
									   }
#line 1513 "parser.tab.c"
    break;

  case 14: /* dec_var: type_modifiers type ID ASSIGN p_values SEMI  */
#line 118 "parser.y"
                                                      {	char *s1 = cat((yyvsp[-5].rec)->code, " ", (yyvsp[-4].rec)->code, " ", (yyvsp[-3].sValue));
														char *s2 = cat(s1, "=", (yyvsp[-1].rec)->code, ";", "");
														freeRecord((yyvsp[-5].rec));
														freeRecord((yyvsp[-4].rec));
														freeRecord((yyvsp[-1].rec));
														(yyval.rec) = createRecord(s2, "");
														free(s2);
														free(s1);
													  }
#line 1527 "parser.tab.c"
    break;

  case 15: /* dec_var: type_modifiers type ID dims ASSIGN BLOCK_BEGIN p_values BLOCK_END SEMI  */
#line 127 "parser.y"
                                                                                         {	char *s1 = cat((yyvsp[-8].rec)->code, " ", (yyvsp[-7].rec)->code, "", (yyvsp[-6].sValue));
																					char *s2 = cat(s1, (yyvsp[-5].rec)->code, "=", "{", (yyvsp[-2].rec)->code);
																					char *s3 = cat(s2, "}", ";", "", "");
																					freeRecord((yyvsp[-8].rec));
																					freeRecord((yyvsp[-7].rec));
																					freeRecord((yyvsp[-5].rec));
																					freeRecord((yyvsp[-2].rec));
																					(yyval.rec) = createRecord(s3, "");
																					free(s3);
																					free(s2);
																					free(s1);
																				 }
#line 1544 "parser.tab.c"
    break;

  case 16: /* dec_var: type_modifiers type ID dims SEMI  */
#line 139 "parser.y"
                                                   {	char *s1 = cat((yyvsp[-4].rec)->code, " ", (yyvsp[-3].rec)->code, " ", (yyvsp[-2].sValue));
												char *s2 = cat(s1, (yyvsp[-1].rec)->code, ";", "", "");
												freeRecord((yyvsp[-4].rec));
												freeRecord((yyvsp[-3].rec));
												freeRecord((yyvsp[-1].rec));
												(yyval.rec) = createRecord(s2, "");
												free(s2);
												free(s1);
										   }
#line 1558 "parser.tab.c"
    break;

  case 17: /* type_modifiers: type_modifier  */
#line 150 "parser.y"
                               {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
									freeRecord((yyvsp[0].rec));
									(yyval.rec) = createRecord(s, "");
									free(s);
							   }
#line 1568 "parser.tab.c"
    break;

  case 18: /* type_modifiers: type_modifier type_modifier  */
#line 155 "parser.y"
                                                         {	char *s = cat((yyvsp[-1].rec)->code, " ", (yyvsp[0].rec)->code, "", "");
												freeRecord((yyvsp[-1].rec));
												freeRecord((yyvsp[0].rec));
												(yyval.rec) = createRecord(s, "");
												free(s);
			   								 }
#line 1579 "parser.tab.c"
    break;

  case 19: /* type_modifier: CONST  */
#line 163 "parser.y"
                      {	(yyval.rec) = createRecord("const", "");
					  }
#line 1586 "parser.tab.c"
    break;

  case 20: /* type_modifier: STATIC  */
#line 165 "parser.y"
                       {(yyval.rec) = createRecord("static", "");
			  		  }
#line 1593 "parser.tab.c"
    break;

  case 21: /* type_modifier: ENUM  */
#line 167 "parser.y"
                                 {	(yyval.rec) = createRecord("enum", "");
			  		 }
#line 1600 "parser.tab.c"
    break;

  case 22: /* type_modifier: STRUCT  */
#line 169 "parser.y"
                                   {(yyval.rec) = createRecord("struct", "");
			  		   }
#line 1607 "parser.tab.c"
    break;

  case 23: /* type: INT  */
#line 173 "parser.y"
           {(yyval.rec) = createRecord("int", "");
		   }
#line 1614 "parser.tab.c"
    break;

  case 24: /* type: DOUBLE  */
#line 175 "parser.y"
              {	(yyval.rec) = createRecord("double", "");
	 		  }
#line 1621 "parser.tab.c"
    break;

  case 25: /* type: FLOAT  */
#line 177 "parser.y"
                 {	(yyval.rec) = createRecord("float", "");
	 		 }
#line 1628 "parser.tab.c"
    break;

  case 26: /* type: CHAR  */
#line 179 "parser.y"
                {	(yyval.rec) = createRecord("char", "");
	 		}
#line 1635 "parser.tab.c"
    break;

  case 27: /* type: STRING  */
#line 181 "parser.y"
                  {	(yyval.rec) = createRecord("string", "");
	 		  }
#line 1642 "parser.tab.c"
    break;

  case 28: /* type: VOID  */
#line 183 "parser.y"
                {	(yyval.rec) = createRecord("void", "");
	 		}
#line 1649 "parser.tab.c"
    break;

  case 29: /* ids: atomo  */
#line 187 "parser.y"
            {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				freeRecord((yyvsp[0].rec));
				(yyval.rec) = createRecord(s, "");
				free(s);
			}
#line 1659 "parser.tab.c"
    break;

  case 30: /* ids: ids COMMA atomo  */
#line 192 "parser.y"
                          {	char *s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
						freeRecord((yyvsp[-2].rec));
						freeRecord((yyvsp[0].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);
					  }
#line 1670 "parser.tab.c"
    break;

  case 31: /* ids: atomo COMMA p_values  */
#line 198 "parser.y"
                           {char *s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
							freeRecord((yyvsp[-2].rec));
							freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);
						   }
#line 1681 "parser.tab.c"
    break;

  case 32: /* atomo: ID  */
#line 206 "parser.y"
           {(yyval.rec) = createRecord((yyvsp[0].sValue), "");
			free((yyvsp[0].sValue));
		   }
#line 1689 "parser.tab.c"
    break;

  case 33: /* atomo: ID dims  */
#line 209 "parser.y"
               {char *s = cat((yyvsp[-1].sValue), (yyvsp[0].rec)->code, "", "", "");
	  			freeRecord((yyvsp[0].rec));
				(yyval.rec) = createRecord(s, "");
				free(s);
	  		   }
#line 1699 "parser.tab.c"
    break;

  case 34: /* dims: OPEN_BRACK CLOSE_BRACK  */
#line 216 "parser.y"
                              {	char *s = cat("[", "]", "", "", "");
								(yyval.rec) = createRecord(s, "");
								free(s);
							  }
#line 1708 "parser.tab.c"
    break;

  case 35: /* dims: OPEN_BRACK CLOSE_BRACK dims  */
#line 220 "parser.y"
                                       {char *s = cat("[", "]", (yyvsp[0].rec)->code, "", "");
									freeRecord((yyvsp[0].rec));
									(yyval.rec) = createRecord(s, "");
									free(s);
	 							   }
#line 1718 "parser.tab.c"
    break;

  case 36: /* dims: OPEN_BRACK value CLOSE_BRACK  */
#line 225 "parser.y"
                                        {	char *s = cat("[", (yyvsp[-1].rec)->code, "]", "", "");
										freeRecord((yyvsp[-1].rec));
										(yyval.rec) = createRecord(s, "");
										free(s);
	 								}
#line 1728 "parser.tab.c"
    break;

  case 37: /* dims: OPEN_BRACK value CLOSE_BRACK dims  */
#line 230 "parser.y"
                                         {	char *s = cat("[", (yyvsp[-2].rec)->code, "]", (yyvsp[0].rec)->code, "");
											freeRecord((yyvsp[-2].rec));
											freeRecord((yyvsp[0].rec));
											(yyval.rec) = createRecord(s, "");
											free(s);
						 				 }
#line 1739 "parser.tab.c"
    break;

  case 38: /* dims: OPEN_BRACK expr CLOSE_BRACK  */
#line 236 "parser.y"
                                       {char *s = cat("[", (yyvsp[-1].rec)->code, "]", "", "");
									freeRecord((yyvsp[-1].rec));
									(yyval.rec) = createRecord(s, "");
									free(s);
	 							   }
#line 1749 "parser.tab.c"
    break;

  case 39: /* dims: OPEN_BRACK expr CLOSE_BRACK dims  */
#line 241 "parser.y"
                                        {	char *s = cat("[", (yyvsp[-2].rec)->code, "]", (yyvsp[0].rec)->code, "");
											freeRecord((yyvsp[-2].rec));
											freeRecord((yyvsp[0].rec));
											(yyval.rec) = createRecord(s, "");
											free(s);
	 									}
#line 1760 "parser.tab.c"
    break;

  case 40: /* dims: OPEN_BRACK ID CLOSE_BRACK  */
#line 247 "parser.y"
                                     {	char *s = cat("[", (yyvsp[-1].sValue), "]", "", "");
									(yyval.rec) = createRecord(s, "");
									free(s);
	 							 }
#line 1769 "parser.tab.c"
    break;

  case 41: /* dims: OPEN_BRACK ID CLOSE_BRACK dims  */
#line 251 "parser.y"
                                      {	char *s = cat("[", (yyvsp[-2].sValue), "]", (yyvsp[0].rec)->code, "");
										freeRecord((yyvsp[0].rec));
										(yyval.rec) = createRecord(s, "");
										free(s);
	 								  }
#line 1779 "parser.tab.c"
    break;

  case 42: /* p_values: expr  */
#line 258 "parser.y"
                {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s, "");
					free(s);
				}
#line 1789 "parser.tab.c"
    break;

  case 43: /* p_values: expr COMMA p_values  */
#line 263 "parser.y"
                                       {char *s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
								freeRecord((yyvsp[-2].rec));
								freeRecord((yyvsp[0].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
		 					   }
#line 1800 "parser.tab.c"
    break;

  case 44: /* expr: expr PLUS term  */
#line 271 "parser.y"
                      {	char *s = cat((yyvsp[-2].rec)->code, "+", (yyvsp[0].rec)->code,"", "");
						freeRecord((yyvsp[-2].rec));
						freeRecord((yyvsp[0].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);
					  }
#line 1811 "parser.tab.c"
    break;

  case 45: /* expr: expr MINUS term  */
#line 277 "parser.y"
                           {char *s = cat((yyvsp[-2].rec)->code, "-", (yyvsp[0].rec)->code,"", "");
						freeRecord((yyvsp[-2].rec));
						freeRecord((yyvsp[0].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);	
	 				   }
#line 1822 "parser.tab.c"
    break;

  case 46: /* expr: expr ADD_ASSIGN term  */
#line 283 "parser.y"
                                {	char *s = cat((yyvsp[-2].rec)->code, "+=", (yyvsp[0].rec)->code,"", "");
								freeRecord((yyvsp[-2].rec));
								freeRecord((yyvsp[0].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
	 					    }
#line 1833 "parser.tab.c"
    break;

  case 47: /* expr: expr SUB_ASSIGN term  */
#line 289 "parser.y"
                                {	char *s = cat((yyvsp[-2].rec)->code, "-=", (yyvsp[0].rec)->code,"", "");
								freeRecord((yyvsp[-2].rec));
								freeRecord((yyvsp[0].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
	 						}
#line 1844 "parser.tab.c"
    break;

  case 48: /* expr: term  */
#line 295 "parser.y"
                {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				freeRecord((yyvsp[0].rec));
				(yyval.rec) = createRecord(s, "");
				free(s);
	 		}
#line 1854 "parser.tab.c"
    break;

  case 49: /* term: term MULT factor  */
#line 302 "parser.y"
                        {	char *s = cat((yyvsp[-2].rec)->code, "*", (yyvsp[0].rec)->code, "", "");
							freeRecord((yyvsp[-2].rec));
							freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);
						}
#line 1865 "parser.tab.c"
    break;

  case 50: /* term: term DIV factor  */
#line 308 "parser.y"
                       {char *s = cat((yyvsp[-2].rec)->code, "/", (yyvsp[0].rec)->code, "", "");
						freeRecord((yyvsp[-2].rec));
						freeRecord((yyvsp[0].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);
	 				   }
#line 1876 "parser.tab.c"
    break;

  case 51: /* term: term MODULE factor  */
#line 314 "parser.y"
                              {	char *s = cat((yyvsp[-2].rec)->code, "%", (yyvsp[0].rec)->code, "", "");
							freeRecord((yyvsp[-2].rec));
							freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);
	 					  }
#line 1887 "parser.tab.c"
    break;

  case 52: /* term: factor  */
#line 320 "parser.y"
                  { char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				freeRecord((yyvsp[0].rec));	 
				(yyval.rec) = createRecord(s, "");
				free(s);
			  }
#line 1897 "parser.tab.c"
    break;

  case 53: /* factor: OPEN_PAREN expr CLOSE_PAREN  */
#line 327 "parser.y"
                                     {	char *s = cat("(", (yyvsp[-1].rec)->code, ")", "", "");
										freeRecord((yyvsp[-1].rec));
										(yyval.rec) = createRecord(s, "");
										free(s);
									 }
#line 1907 "parser.tab.c"
    break;

  case 54: /* factor: ID  */
#line 332 "parser.y"
            {	(yyval.rec) = createRecord((yyvsp[0].sValue), "");
				free((yyvsp[0].sValue));
	   		}
#line 1915 "parser.tab.c"
    break;

  case 55: /* factor: ID dims  */
#line 335 "parser.y"
                     {	char *s = cat((yyvsp[-1].sValue), (yyvsp[0].rec)->code, "", "", "");
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s, "");
					free(s);
	   			 }
#line 1925 "parser.tab.c"
    break;

  case 56: /* factor: function_call  */
#line 340 "parser.y"
                           {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						freeRecord((yyvsp[0].rec));	 
						(yyval.rec) = createRecord(s, "");
						free(s);
	   				   }
#line 1935 "parser.tab.c"
    break;

  case 57: /* factor: value  */
#line 345 "parser.y"
                   {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				freeRecord((yyvsp[0].rec));	 
				(yyval.rec) = createRecord(s, "");
				free(s);
	   			}
#line 1945 "parser.tab.c"
    break;

  case 58: /* value: INT_NUMBER  */
#line 352 "parser.y"
                   {char *s1;
					sprintf(s1, "%d", (yyvsp[0].iValue));
					char *s = cat(s1,"","","","");
					(yyval.rec) = createRecord(s, "");
					free(s);	
				   }
#line 1956 "parser.tab.c"
    break;

  case 59: /* value: FLOAT_NUMBER  */
#line 358 "parser.y"
                     {	char *s1;
	  					sprintf(s1, "%g", (yyvsp[0].fValue));
						char *s = cat(s1,"","","","");
						(yyval.rec) = createRecord(s, "");
						free(s);
	  				 }
#line 1967 "parser.tab.c"
    break;

  case 60: /* value: STRING_VALUE  */
#line 364 "parser.y"
                         {	char *s = cat((yyvsp[0].sValue),"","","","");
						(yyval.rec) = createRecord(s, "");
						free(s);
	  				 }
#line 1976 "parser.tab.c"
    break;

  case 61: /* assigns: assign_def  */
#line 370 "parser.y"
                     {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						freeRecord((yyvsp[0].rec));	 
						(yyval.rec) = createRecord(s, "");
						free(s);
					 }
#line 1986 "parser.tab.c"
    break;

  case 62: /* assigns: assign_mat  */
#line 375 "parser.y"
                     {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						freeRecord((yyvsp[0].rec));	 
						(yyval.rec) = createRecord(s, "");
						free(s);
					 }
#line 1996 "parser.tab.c"
    break;

  case 63: /* assigns: assign_def assigns  */
#line 380 "parser.y"
                                     {	char *s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
								freeRecord((yyvsp[-1].rec));
								freeRecord((yyvsp[0].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
							 }
#line 2007 "parser.tab.c"
    break;

  case 64: /* assign_def: ID ASSIGN expr SEMI  */
#line 388 "parser.y"
                                 {	char *s = cat((yyvsp[-3].sValue), "=", (yyvsp[-1].rec)->code, ";", "");
									freeRecord((yyvsp[-1].rec));
									(yyval.rec) = createRecord(s, "");
									free(s);
								 }
#line 2017 "parser.tab.c"
    break;

  case 65: /* assign_mat: ID dims ASSIGN expr SEMI  */
#line 395 "parser.y"
                                      {	char *s = cat((yyvsp[-4].sValue), (yyvsp[-3].rec)->code, "=", (yyvsp[-1].rec)->code, ";");
										freeRecord((yyvsp[-3].rec));
										freeRecord((yyvsp[-1].rec));
										(yyval.rec) = createRecord(s, "");
										free(s);
									  }
#line 2028 "parser.tab.c"
    break;

  case 66: /* assign_mat: ID dims ASSIGN ID dims SEMI  */
#line 401 "parser.y"
                                                 {	char *s1 = cat((yyvsp[-5].sValue), (yyvsp[-4].rec)->code, "=", (yyvsp[-2].sValue), (yyvsp[-1].rec)->code);
											char *s2 = cat(s1, ";", "", "", "");
											freeRecord((yyvsp[-4].rec));
											freeRecord((yyvsp[-1].rec));
											(yyval.rec) = createRecord(s2, "");
											free(s2);
											free(s1);
		   								 }
#line 2041 "parser.tab.c"
    break;

  case 67: /* subprograms: subprogram  */
#line 411 "parser.y"
                         { 	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
							freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);
						}
#line 2051 "parser.tab.c"
    break;

  case 68: /* subprograms: subprogram subprograms  */
#line 416 "parser.y"
                                                 {	char *s = cat((yyvsp[-1].rec)->code, "", (yyvsp[0].rec)->code, "", "");
										freeRecord((yyvsp[-1].rec));
										freeRecord((yyvsp[0].rec));
										(yyval.rec) = createRecord(s, "");
										free(s);
									 }
#line 2062 "parser.tab.c"
    break;

  case 69: /* subprogram: proc  */
#line 424 "parser.y"
                  { char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s, "");
					free(s);
				  }
#line 2072 "parser.tab.c"
    break;

  case 70: /* subprogram: function  */
#line 429 "parser.y"
                              {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						freeRecord((yyvsp[0].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);
		   			  }
#line 2082 "parser.tab.c"
    break;

  case 71: /* proc: VOID ID OPEN_PAREN params CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 436 "parser.y"
                                                                         {	char *s1 = cat("void ", (yyvsp[-6].sValue), "(", (yyvsp[-4].rec)->code, ")");
																			char *s2 = cat(s1, "{\n", (yyvsp[-1].rec)->code, "\n}", "");
																			freeRecord((yyvsp[-4].rec));
																			freeRecord((yyvsp[-1].rec));
																			(yyval.rec) = createRecord(s2, "");
																			free(s2);
																			free(s1);
																		 }
#line 2095 "parser.tab.c"
    break;

  case 72: /* proc: VOID ID OPEN_PAREN CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 444 "parser.y"
                                                                      {	char *s = cat("void ", (yyvsp[-5].sValue), "(){\n", (yyvsp[-1].rec)->code, "\n}");
	 																freeRecord((yyvsp[-1].rec));
																	(yyval.rec) = createRecord(s, "");
																	free(s);
	 															  }
#line 2105 "parser.tab.c"
    break;

  case 73: /* function: type ID OPEN_PAREN params CLOSE_PAREN BLOCK_BEGIN stmts RETURN value BLOCK_END  */
#line 451 "parser.y"
                                                                                          {	char *s1 = cat((yyvsp[-9].rec)->code, " ", (yyvsp[-8].sValue), "(", (yyvsp[-6].rec)->code);
																							char *s2 = cat(s1, "){\n", (yyvsp[-3].rec)->code, "\nreturn ", (yyvsp[-1].rec)->code);
																							char *s3 = cat(s2, "\n}", "", "", "");
																							freeRecord((yyvsp[-9].rec));
																							freeRecord((yyvsp[-6].rec));
																							freeRecord((yyvsp[-3].rec));
																							freeRecord((yyvsp[-1].rec));
																							(yyval.rec) = createRecord(s3, "");
																							free(s3);
																							free(s2);
																							free(s1);
																						  }
#line 2122 "parser.tab.c"
    break;

  case 74: /* function: type ID OPEN_PAREN CLOSE_PAREN BLOCK_BEGIN stmts RETURN value BLOCK_END  */
#line 463 "parser.y"
                                                                                           {char *s1 = cat((yyvsp[-8].rec)->code, " ", (yyvsp[-7].sValue), "(){\n", (yyvsp[-3].rec)->code);
		 																			char *s2 = cat(s1, "\nreturn ", (yyvsp[-1].rec)->code, "\n}", "");
																					freeRecord((yyvsp[-8].rec));
																					freeRecord((yyvsp[-3].rec));
																					freeRecord((yyvsp[-1].rec));
																					(yyval.rec) = createRecord(s2, "");
																					free(s2);
																					free(s1);
		 																		   }
#line 2136 "parser.tab.c"
    break;

  case 75: /* params: param  */
#line 474 "parser.y"
               {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				freeRecord((yyvsp[0].rec));
				(yyval.rec) = createRecord(s, "");
				free(s);
			   }
#line 2146 "parser.tab.c"
    break;

  case 76: /* params: param COMMA params  */
#line 479 "parser.y"
                                {	char *s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
								freeRecord((yyvsp[-2].rec));
								freeRecord((yyvsp[0].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
			   				}
#line 2157 "parser.tab.c"
    break;

  case 77: /* param: type dims ID  */
#line 487 "parser.y"
                     {	char *s = cat((yyvsp[-2].rec)->code, " ", (yyvsp[-1].rec)->code, (yyvsp[0].sValue), "");
						freeRecord((yyvsp[-2].rec));
						freeRecord((yyvsp[-1].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);
					 }
#line 2168 "parser.tab.c"
    break;

  case 78: /* param: type ID  */
#line 493 "parser.y"
                    {	char *s = cat((yyvsp[-1].rec)->code, " ", (yyvsp[0].sValue), "", "");
					freeRecord((yyvsp[-1].rec));
					(yyval.rec) = createRecord(s, "");
					free(s);
			    }
#line 2178 "parser.tab.c"
    break;

  case 79: /* stmts: stmt  */
#line 500 "parser.y"
             {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				freeRecord((yyvsp[0].rec));
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 2188 "parser.tab.c"
    break;

  case 80: /* stmts: stmt stmts  */
#line 505 "parser.y"
                   {char *s = cat((yyvsp[-1].rec)->code, "\n", (yyvsp[0].rec)->code, "", "");
					freeRecord((yyvsp[-1].rec));
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s, "");
					free(s);
				   }
#line 2199 "parser.tab.c"
    break;

  case 81: /* stmt: dec_var  */
#line 513 "parser.y"
               {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				freeRecord((yyvsp[0].rec));
				(yyval.rec) = createRecord(s, "");
				free(s);
			   }
#line 2209 "parser.tab.c"
    break;

  case 82: /* stmt: assigns  */
#line 518 "parser.y"
               {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
				freeRecord((yyvsp[0].rec));
				(yyval.rec) = createRecord(s, "");
				free(s);
	 		   }
#line 2219 "parser.tab.c"
    break;

  case 83: /* stmt: function_call  */
#line 523 "parser.y"
                         {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						freeRecord((yyvsp[0].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);
	 				 }
#line 2229 "parser.tab.c"
    break;

  case 84: /* stmt: conditional_stmt  */
#line 528 "parser.y"
                        {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
							freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);
	 					}
#line 2239 "parser.tab.c"
    break;

  case 85: /* stmt: iteration_stmt  */
#line 533 "parser.y"
                          {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
						freeRecord((yyvsp[0].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);
	 				  }
#line 2249 "parser.tab.c"
    break;

  case 86: /* conditional_stmt: if_stmt  */
#line 540 "parser.y"
                           {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
							freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);	
						   }
#line 2259 "parser.tab.c"
    break;

  case 87: /* conditional_stmt: switch_stmt  */
#line 545 "parser.y"
                                               {char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
								freeRecord((yyvsp[0].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
				 			   }
#line 2269 "parser.tab.c"
    break;

  case 88: /* if_stmt: IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 552 "parser.y"
                                                                           {char *s = cat("if(", (yyvsp[-4].rec)->code, "){\n", (yyvsp[-1].rec)->code, "\n}");
																			freeRecord((yyvsp[-4].rec));
																			freeRecord((yyvsp[-1].rec));
																			(yyval.rec) = createRecord(s, "");
																			free(s);
																		   }
#line 2280 "parser.tab.c"
    break;

  case 89: /* if_stmt: IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END ELSE BLOCK_BEGIN stmts BLOCK_END  */
#line 558 "parser.y"
                                                                                                                    { 	char *s1 = cat("if(", (yyvsp[-8].rec)->code, "){\n", (yyvsp[-5].rec)->code, "\n}");
																												char *s2 = cat(s1, " else {\n", (yyvsp[-1].rec)->code, "\n}", "");
																												freeRecord((yyvsp[-8].rec));
																												freeRecord((yyvsp[-5].rec));
																												freeRecord((yyvsp[-1].rec));
																												(yyval.rec) = createRecord(s2, "");
																												free(s2);
																												free(s1);
																											}
#line 2294 "parser.tab.c"
    break;

  case 90: /* if_stmt: IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END else_if_stmt ELSE BLOCK_BEGIN stmts BLOCK_END  */
#line 567 "parser.y"
                                                                                                                                 {	char *s1 = cat("if(", (yyvsp[-9].rec)->code, "){\n", (yyvsp[-6].rec)->code, "\n} ");
																															char *s2 = cat(s2, (yyvsp[-4].rec)->code, " else {\n", (yyvsp[-1].rec)->code, "\n}");
																															freeRecord((yyvsp[-9].rec));
																															freeRecord((yyvsp[-6].rec));
																															freeRecord((yyvsp[-4].rec));
																															freeRecord((yyvsp[-1].rec));
																															(yyval.rec) = createRecord(s2, "");
																															free(s2);
																															free(s1);
																														 }
#line 2309 "parser.tab.c"
    break;

  case 91: /* if_stmt: IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END else_if_stmt  */
#line 577 "parser.y"
                                                                                                {	char *s1 = cat("if(", (yyvsp[-5].rec)->code, "){\n", (yyvsp[-2].rec)->code, "\n} ");
																							char *s2 = cat(s1, (yyvsp[0].rec)->code, "", "", "");
																							freeRecord((yyvsp[-5].rec));
																							freeRecord((yyvsp[-2].rec));
																							freeRecord((yyvsp[0].rec));
																							(yyval.rec) = createRecord(s2, "");
																							free(s2);
																							free(s1);
																						}
#line 2323 "parser.tab.c"
    break;

  case 92: /* else_if_stmt: ELSE_IF OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 588 "parser.y"
                                                                                     {	char *s = cat("else if(", (yyvsp[-4].rec)->code, "){\n", (yyvsp[-1].rec)->code, "\n} ");
																						freeRecord((yyvsp[-4].rec));
																						freeRecord((yyvsp[-1].rec));
																						(yyval.rec) = createRecord(s, "");
																						free(s);
																					 }
#line 2334 "parser.tab.c"
    break;

  case 93: /* else_if_stmt: else_if_stmt else_if_stmt  */
#line 594 "parser.y"
                                                     {	char *s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
			 								freeRecord((yyvsp[-1].rec));
											freeRecord((yyvsp[0].rec));
											(yyval.rec) = createRecord(s, "");
											free(s);
			 							 }
#line 2345 "parser.tab.c"
    break;

  case 94: /* logic_expr: logic_expr logic_op c_term  */
#line 602 "parser.y"
                                        {	char *s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
											freeRecord((yyvsp[-2].rec));
											freeRecord((yyvsp[-1].rec));
											freeRecord((yyvsp[0].rec));
											(yyval.rec) = createRecord(s, "");
											free(s);
										}
#line 2357 "parser.tab.c"
    break;

  case 95: /* logic_expr: c_term  */
#line 609 "parser.y"
                            {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
		   				freeRecord((yyvsp[0].rec));
						(yyval.rec) = createRecord(s, "");
						free(s);
		   			}
#line 2367 "parser.tab.c"
    break;

  case 96: /* c_term: ID  */
#line 616 "parser.y"
            {	(yyval.rec) = createRecord((yyvsp[0].sValue), "");
				free((yyvsp[0].sValue));
			}
#line 2375 "parser.tab.c"
    break;

  case 97: /* c_term: ID dims  */
#line 619 "parser.y"
                     {char *s= cat((yyvsp[-1].sValue),(yyvsp[0].rec)->code,"","","");
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s,"");
					free(s);
	   			}
#line 2385 "parser.tab.c"
    break;

  case 98: /* c_term: TRUE  */
#line 624 "parser.y"
                  {		char *s= cat("true","","","","");
					(yyval.rec) = createRecord(s,"");
					free(s);
			}
#line 2394 "parser.tab.c"
    break;

  case 99: /* c_term: FALSE  */
#line 628 "parser.y"
                   {	char *s= cat("false","","","","");
					(yyval.rec) = createRecord(s,"");
					free(s);

	   }
#line 2404 "parser.tab.c"
    break;

  case 100: /* c_term: comp  */
#line 633 "parser.y"
                  {	char *s= cat((yyvsp[0].rec)->code,"","","","");
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s,"");
					free(s);

	   }
#line 2415 "parser.tab.c"
    break;

  case 102: /* comp_op: EQ  */
#line 644 "parser.y"
             {	char *s = cat("==", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 2424 "parser.tab.c"
    break;

  case 103: /* comp_op: NEQ  */
#line 648 "parser.y"
                      {	char *s = cat("!=", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			  }
#line 2433 "parser.tab.c"
    break;

  case 104: /* comp_op: GE  */
#line 652 "parser.y"
                     {	char *s = cat(">=", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 2442 "parser.tab.c"
    break;

  case 105: /* comp_op: LE  */
#line 656 "parser.y"
                     {	char *s = cat("<=", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 2451 "parser.tab.c"
    break;

  case 106: /* comp_op: GT  */
#line 660 "parser.y"
                     {	char *s = cat(">", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 2460 "parser.tab.c"
    break;

  case 107: /* comp_op: LT  */
#line 664 "parser.y"
                     {	char *s = cat("<", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			 }
#line 2469 "parser.tab.c"
    break;

  case 108: /* logic_op: AND  */
#line 670 "parser.y"
               {char *s = cat("&&", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
			   }
#line 2478 "parser.tab.c"
    break;

  case 109: /* logic_op: OR  */
#line 674 "parser.y"
                      {	char *s = cat("||", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
		 	  }
#line 2487 "parser.tab.c"
    break;

  case 110: /* logic_op: NOT  */
#line 678 "parser.y"
                       {char *s = cat("!", "", "", "", "");
				(yyval.rec) = createRecord(s, "");
				free(s);
		 	   }
#line 2496 "parser.tab.c"
    break;

  case 111: /* switch_stmt: SWITCH COLON OPEN_PAREN ID CLOSE_PAREN BLOCK_BEGIN switch_cases DEFAULT COLON stmts BLOCK_END  */
#line 684 "parser.y"
                                                                                                            {	char *s1 = cat("switch: (", (yyvsp[-7].sValue), "){\n", (yyvsp[-4].rec)->code, "	default:\n");
																												char *s2 = cat(s1, (yyvsp[-1].rec)->code, "\n}", "", "");
																												freeRecord((yyvsp[-4].rec));
																												freeRecord((yyvsp[-1].rec));
																												(yyval.rec) = createRecord(s2, "");
																												free(s2);
																												free(s1);
													  														}
#line 2509 "parser.tab.c"
    break;

  case 112: /* switch_cases: %empty  */
#line 694 "parser.y"
               {(yyval.rec) = createRecord("","");}
#line 2515 "parser.tab.c"
    break;

  case 113: /* switch_cases: CASE value COLON stmts BREAK switch_cases  */
#line 695 "parser.y"
                                                                     {	char *s1 = cat("case ", (yyvsp[-4].rec)->code, ":\n", (yyvsp[-2].rec)->code, "\n");
			 												char *s2 = cat(s1, (yyvsp[0].rec)->code, "", "", "");
															freeRecord((yyvsp[-4].rec));
															freeRecord((yyvsp[-2].rec));
															freeRecord((yyvsp[0].rec));
															(yyval.rec) = createRecord(s2, "");
															free(s2);
															free(s1);
			 											 }
#line 2529 "parser.tab.c"
    break;

  case 114: /* iteration_stmt: while_stmt  */
#line 706 "parser.y"
                            {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
		   						freeRecord((yyvsp[0].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
							}
#line 2539 "parser.tab.c"
    break;

  case 115: /* iteration_stmt: for_stmt  */
#line 711 "parser.y"
                                      {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
		   					freeRecord((yyvsp[0].rec));
							(yyval.rec) = createRecord(s, "");
							free(s);
			   			  }
#line 2549 "parser.tab.c"
    break;

  case 116: /* iteration_stmt: dowhile_stmt  */
#line 716 "parser.y"
                                          {	char *s = cat((yyvsp[0].rec)->code, "", "", "", "");
		   						freeRecord((yyvsp[0].rec));
								(yyval.rec) = createRecord(s, "");
								free(s);
			   				  }
#line 2559 "parser.tab.c"
    break;

  case 117: /* while_stmt: WHILE OPEN_PAREN logic_expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 723 "parser.y"
                                                                                 {	char *s = cat("while(", (yyvsp[-4].rec)->code, "){\n", (yyvsp[-1].rec)->code, "\n}");
																					freeRecord((yyvsp[-4].rec));
																					freeRecord((yyvsp[-1].rec));
																					(yyval.rec) = createRecord(s, "");
																					free(s);
																				 }
#line 2570 "parser.tab.c"
    break;

  case 118: /* for_stmt: FOR OPEN_PAREN dec_var logic_expr SEMI expr CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 731 "parser.y"
                                                                                               {char *s1 = cat("for(", (yyvsp[-7].rec)->code, (yyvsp[-6].rec)->code, ";", (yyvsp[-4].rec)->code);
																								char *s2 = cat(s1, "){\n", (yyvsp[-1].rec)->code, "\n}", "");
																								freeRecord((yyvsp[-7].rec));
																								freeRecord((yyvsp[-6].rec));
																								freeRecord((yyvsp[-4].rec));
																								freeRecord((yyvsp[-1].rec));
																								(yyval.rec) = createRecord(s2, "");
																								free(s2);
																								free(s1);
																							   }
#line 2585 "parser.tab.c"
    break;

  case 119: /* dowhile_stmt: DO BLOCK_BEGIN stmts BLOCK_END WHILE OPEN_PAREN logic_expr CLOSE_PAREN SEMI  */
#line 743 "parser.y"
                                                                                           {char *s = cat("do{\n", (yyvsp[-6].rec)->code, "\n} while(", (yyvsp[-2].rec)->code, ");");
																							freeRecord((yyvsp[-6].rec));
																							freeRecord((yyvsp[-2].rec));
																							(yyval.rec) = createRecord(s, "");
																							free(s);
																						   }
#line 2596 "parser.tab.c"
    break;

  case 120: /* function_call: ID OPEN_PAREN args CLOSE_PAREN SEMI  */
#line 751 "parser.y"
                                                    {	char *s = cat((yyvsp[-4].sValue), "(", (yyvsp[-2].rec)->code, ");", "");
														freeRecord((yyvsp[-2].rec));
														(yyval.rec) = createRecord(s, "");
														free(s);
													}
#line 2606 "parser.tab.c"
    break;

  case 121: /* function_call: ID OPEN_PAREN CLOSE_PAREN SEMI  */
#line 756 "parser.y"
                                              {	char *s = cat((yyvsp[-3].sValue), "();", "", "", "");
												(yyval.rec) = createRecord(s, "");
												free(s);
											  }
#line 2615 "parser.tab.c"
    break;

  case 122: /* args: args arg  */
#line 762 "parser.y"
                {	char *s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
					freeRecord((yyvsp[-1].rec));
					freeRecord((yyvsp[0].rec));
					(yyval.rec) = createRecord(s, "");
					free(s);
				}
#line 2626 "parser.tab.c"
    break;

  case 123: /* args: arg  */
#line 768 "parser.y"
               {char *s = cat((yyvsp[0].rec)->code,"","","","");
			freeRecord((yyvsp[0].rec));
			(yyval.rec) = createRecord(s, "");
			free(s);
	 	   }
#line 2636 "parser.tab.c"
    break;

  case 124: /* arg: ids  */
#line 775 "parser.y"
          {	char *s = cat((yyvsp[0].rec)->code,"","","","");
			freeRecord((yyvsp[0].rec));
			(yyval.rec) = createRecord(s, "");
			free(s);
	 	  }
#line 2646 "parser.tab.c"
    break;

  case 125: /* principal: MAIN OPEN_PAREN params CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 782 "parser.y"
                                                                           {char *s = cat("main(", (yyvsp[-4].rec)->code, "){\n", (yyvsp[-1].rec)->code, "\n}");
																			freeRecord((yyvsp[-4].rec));
																			freeRecord((yyvsp[-1].rec));
																			(yyval.rec) = createRecord(s, "");
																			free(s);
																		   }
#line 2657 "parser.tab.c"
    break;

  case 126: /* principal: MAIN OPEN_PAREN CLOSE_PAREN BLOCK_BEGIN stmts BLOCK_END  */
#line 788 "parser.y"
                                                                                {	char *s = cat("main(){\n", (yyvsp[-1].rec)->code, "\n}", "", "");
		  																freeRecord((yyvsp[-1].rec));
																		(yyval.rec) = createRecord(s, "");
																		free(s);
		  															}
#line 2667 "parser.tab.c"
    break;


#line 2671 "parser.tab.c"

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

#line 795 "parser.y"
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
