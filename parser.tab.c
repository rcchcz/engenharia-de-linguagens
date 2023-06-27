
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
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



/* Line 189 of yacc.c  */
#line 91 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 18 "parser.y"

	int    iValue; 	/* integer value */
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	float  fValue;  /* float value */
	double dvalue;  /* double value */ 
	struct record * rec;



/* Line 214 of yacc.c  */
#line 201 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 213 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

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
/* YYNRULES -- Number of states.  */
#define YYNSTATES  274

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    11,    17,    23,    27,    28,    31,    33,
      37,    43,    52,    57,    62,    69,    79,    85,    87,    90,
      92,    94,    96,    98,   100,   102,   104,   106,   108,   110,
     112,   116,   120,   122,   125,   128,   132,   136,   141,   145,
     150,   154,   159,   161,   165,   169,   173,   177,   181,   183,
     187,   191,   195,   197,   201,   203,   206,   208,   210,   212,
     214,   216,   218,   220,   224,   229,   235,   242,   244,   247,
     249,   251,   260,   268,   279,   289,   291,   295,   299,   302,
     304,   308,   310,   312,   314,   316,   318,   320,   322,   330,
     342,   355,   364,   372,   375,   379,   381,   383,   386,   388,
     390,   392,   396,   398,   400,   402,   404,   406,   408,   410,
     412,   414,   420,   421,   428,   430,   432,   434,   442,   453,
     463,   469,   474,   477,   479,   481,   489
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,    66,    41,    82,    41,   107,    41,    82,
      -1,    66,    41,   107,    41,    82,    -1,    66,    41,    82,
      41,   107,    -1,    66,    41,   107,    -1,    -1,    67,    66,
      -1,    79,    -1,    70,    71,    41,    -1,    70,     3,    52,
      74,    41,    -1,    70,     3,    73,    52,    39,    74,    40,
      41,    -1,    70,     3,    73,    41,    -1,    68,    70,    71,
      41,    -1,    68,    70,     3,    52,    74,    41,    -1,    68,
      70,     3,    73,    52,    39,    74,    40,    41,    -1,    68,
      70,     3,    73,    41,    -1,    69,    -1,    69,    69,    -1,
      30,    -1,    31,    -1,    16,    -1,    15,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,    11,    -1,    14,    -1,
      72,    -1,    71,    44,    72,    -1,    72,    44,    74,    -1,
       3,    -1,     3,    73,    -1,    37,    38,    -1,    37,    38,
      73,    -1,    37,    78,    38,    -1,    37,    78,    38,    73,
      -1,    37,    75,    38,    -1,    37,    75,    38,    73,    -1,
      37,     3,    38,    -1,    37,     3,    38,    73,    -1,    75,
      -1,    75,    44,    74,    -1,    75,    45,    76,    -1,    75,
      46,    76,    -1,    75,    53,    76,    -1,    75,    54,    76,
      -1,    76,    -1,    76,    48,    77,    -1,    76,    47,    77,
      -1,    76,    51,    77,    -1,    77,    -1,    35,    75,    36,
      -1,     3,    -1,     3,    73,    -1,   104,    -1,    78,    -1,
       4,    -1,     5,    -1,     6,    -1,    80,    -1,    81,    -1,
      80,    41,    79,    -1,     3,    52,    75,    41,    -1,     3,
      73,    52,    75,    41,    -1,     3,    73,    52,     3,    73,
      41,    -1,    83,    -1,    83,    82,    -1,    84,    -1,    85,
      -1,    14,     3,    35,    86,    36,    39,    88,    40,    -1,
      14,     3,    35,    36,    39,    88,    40,    -1,    70,     3,
      35,    86,    36,    39,    88,    32,    78,    40,    -1,    70,
       3,    35,    36,    39,    88,    32,    78,    40,    -1,    87,
      -1,    87,    44,    86,    -1,    70,    73,     3,    -1,    70,
       3,    -1,    89,    -1,    89,    41,    88,    -1,    67,    -1,
      79,    -1,   104,    -1,    90,    -1,   100,    -1,    91,    -1,
      98,    -1,    24,    35,    93,    36,    39,    88,    40,    -1,
      24,    35,    93,    36,    39,    88,    40,    25,    39,    88,
      40,    -1,    24,    35,    93,    36,    39,    88,    40,    92,
      25,    39,    88,    40,    -1,    24,    35,    93,    36,    39,
      88,    40,    92,    -1,    26,    35,    93,    36,    39,    88,
      40,    -1,    92,    92,    -1,    93,    97,    94,    -1,    94,
      -1,     3,    -1,     3,    73,    -1,    17,    -1,    18,    -1,
      95,    -1,    75,    96,    75,    -1,    55,    -1,    56,    -1,
      60,    -1,    59,    -1,    58,    -1,    57,    -1,    61,    -1,
      62,    -1,    63,    -1,    21,    99,    23,    42,    88,    -1,
      -1,    22,    78,    42,    88,    29,    99,    -1,   101,    -1,
     102,    -1,   103,    -1,    19,    35,    93,    36,    39,    88,
      40,    -1,    27,    35,    67,    93,    41,    75,    36,    39,
      88,    40,    -1,    20,    39,    88,    40,    19,    35,    93,
      36,    41,    -1,     3,    35,   105,    36,    41,    -1,     3,
      35,    36,    41,    -1,   105,   106,    -1,   106,    -1,    71,
      -1,    34,    35,    86,    36,    39,    88,    40,    -1,    34,
      35,    36,    39,    88,    40,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
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

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INT_NUMBER", "FLOAT_NUMBER",
  "STRING_VALUE", "INT", "DOUBLE", "FLOAT", "CHAR", "STRING", "BOOLEAN",
  "NULL_VALUE", "VOID", "STRUCT", "ENUM", "TRUE", "FALSE", "WHILE", "DO",
  "SWITCH", "CASE", "DEFAULT", "IF", "ELSE", "ELSE_IF", "FOR", "CONTINUE",
  "BREAK", "CONST", "STATIC", "RETURN", "IMPORT", "MAIN", "OPEN_PAREN",
  "CLOSE_PAREN", "OPEN_BRACK", "CLOSE_BRACK", "BLOCK_BEGIN", "BLOCK_END",
  "SEMI", "COLON", "DOT", "COMMA", "PLUS", "MINUS", "DIV", "MULT",
  "INCREMENT", "DECREMENT", "MODULE", "ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "EQ", "NEQ", "LT", "GT", "LE", "GE", "AND", "OR", "NOT", "$accept",
  "prog", "decs_var", "dec_var", "type_modifiers", "type_modifier", "type",
  "ids", "atomo", "dims", "p_values", "expr", "term", "factor", "value",
  "assigns", "assign_def", "assign_mat", "subprograms", "subprogram",
  "proc", "function", "params", "param", "stmts", "stmt",
  "conditional_stmt", "if_stmt", "else_if_stmt", "logic_expr", "c_term",
  "comp", "comp_op", "logic_op", "switch_stmt", "switch_cases",
  "iteration_stmt", "while_stmt", "for_stmt", "dowhile_stmt",
  "funcion_call", "args", "arg", "principal", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
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

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
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

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,   156,    15,    16,    17,    98,    31,    23,
      90,    91,    40,    41,    46,   157,    19,    20,    51,    52,
      53,    54,   117,   118,   158,   159,   160,   161,   261,   197,
     198,   199,   218,   223,   162,   181,   163,   164,   165,   166,
      43,    99,   100,    55
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -175
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,   368,     4,  -175,   370,    -6,    89,   358,   -27,
     -52,   -21,   230,   283,   -18,    31,  -175,  -175,   -47,  -175,
    -175,  -175,   -48,  -175,  -115,  -175,  -175,  -175,   138,  -174,
     168,  -175,  -175,  -175,  -175,   156,  -175,  -175,  -175,  -175,
    -128,  -175,   296,   306
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -98
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

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
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

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 44:

/* Line 1455 of yacc.c  */
#line 109 "parser.y"
    {(yyval.rec) = (yyvsp[(1) - (3)].rec) + (yyvsp[(3) - (3)].rec);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 110 "parser.y"
    {(yyval.rec) = (yyvsp[(1) - (3)].rec) - (yyvsp[(3) - (3)].rec);;}
    break;



/* Line 1455 of yacc.c  */
#line 1699 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 258 "parser.y"
 /* Fim da segunda seção */

int main (void) {
	return yyparse();
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}

