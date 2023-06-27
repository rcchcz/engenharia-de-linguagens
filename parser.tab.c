
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

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;



/* Line 189 of yacc.c  */
#line 84 "parser.tab.c"

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
#line 11 "parser.y"

	int    iValue; 	/* integer value */
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	float  fValue;  /* float value */
	double dvalue;  /* double value */ 



/* Line 214 of yacc.c  */
#line 193 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 205 "parser.tab.c"

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
#define YYLAST   415

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNRULES -- Number of states.  */
#define YYNSTATES  269

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
       0,     0,     3,     8,    12,    16,    19,    20,    23,    25,
      29,    35,    44,    49,    54,    61,    71,    77,    79,    82,
      84,    86,    88,    90,    92,    94,    96,    98,   100,   102,
     104,   108,   112,   114,   117,   120,   124,   128,   133,   137,
     142,   146,   151,   153,   157,   161,   165,   169,   173,   175,
     179,   183,   187,   189,   193,   195,   198,   200,   202,   204,
     206,   208,   210,   212,   216,   221,   227,   234,   236,   239,
     241,   243,   252,   260,   271,   281,   283,   287,   291,   294,
     296,   299,   301,   303,   305,   307,   309,   311,   313,   321,
     333,   346,   355,   363,   366,   370,   372,   374,   377,   379,
     381,   383,   387,   389,   391,   393,   395,   397,   399,   401,
     403,   405,   411,   412,   419,   421,   423,   425,   433,   444,
     454,   460,   465,   468,   470,   472,   480
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,    66,    82,   107,    82,    -1,    66,   107,
      82,    -1,    66,    82,   107,    -1,    66,   107,    -1,    -1,
      67,    66,    -1,    79,    -1,    70,    71,    41,    -1,    70,
       3,    52,    74,    41,    -1,    70,     3,    73,    52,    39,
      74,    40,    41,    -1,    70,     3,    73,    41,    -1,    68,
      70,    71,    41,    -1,    68,    70,     3,    52,    74,    41,
      -1,    68,    70,     3,    73,    52,    39,    74,    40,    41,
      -1,    68,    70,     3,    73,    41,    -1,    69,    -1,    69,
      69,    -1,    30,    -1,    31,    -1,    16,    -1,    15,    -1,
       7,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
      14,    -1,    72,    -1,    71,    44,    72,    -1,    72,    44,
      74,    -1,     3,    -1,     3,    73,    -1,    37,    38,    -1,
      37,    38,    73,    -1,    37,    78,    38,    -1,    37,    78,
      38,    73,    -1,    37,    75,    38,    -1,    37,    75,    38,
      73,    -1,    37,     3,    38,    -1,    37,     3,    38,    73,
      -1,    75,    -1,    75,    44,    74,    -1,    75,    45,    76,
      -1,    75,    46,    76,    -1,    75,    53,    76,    -1,    75,
      54,    76,    -1,    76,    -1,    76,    48,    77,    -1,    76,
      47,    77,    -1,    76,    51,    77,    -1,    77,    -1,    35,
      75,    36,    -1,     3,    -1,     3,    73,    -1,   104,    -1,
      78,    -1,     4,    -1,     5,    -1,     6,    -1,    80,    -1,
      81,    -1,    80,    41,    79,    -1,     3,    52,    75,    41,
      -1,     3,    73,    52,    75,    41,    -1,     3,    73,    52,
       3,    73,    41,    -1,    83,    -1,    83,    82,    -1,    84,
      -1,    85,    -1,    14,     3,    35,    86,    36,    39,    88,
      40,    -1,    14,     3,    35,    36,    39,    88,    40,    -1,
      70,     3,    35,    86,    36,    39,    88,    32,    78,    40,
      -1,    70,     3,    35,    36,    39,    88,    32,    78,    40,
      -1,    87,    -1,    87,    44,    86,    -1,    70,    73,     3,
      -1,    70,     3,    -1,    89,    -1,    89,    88,    -1,    67,
      -1,    79,    -1,   104,    -1,    90,    -1,   100,    -1,    91,
      -1,    98,    -1,    24,    35,    93,    36,    39,    88,    40,
      -1,    24,    35,    93,    36,    39,    88,    40,    25,    39,
      88,    40,    -1,    24,    35,    93,    36,    39,    88,    40,
      92,    25,    39,    88,    40,    -1,    24,    35,    93,    36,
      39,    88,    40,    92,    -1,    26,    35,    93,    36,    39,
      88,    40,    -1,    92,    92,    -1,    93,    97,    94,    -1,
      94,    -1,     3,    -1,     3,    73,    -1,    17,    -1,    18,
      -1,    95,    -1,    75,    96,    75,    -1,    55,    -1,    56,
      -1,    60,    -1,    59,    -1,    58,    -1,    57,    -1,    61,
      -1,    62,    -1,    63,    -1,    21,    99,    23,    42,    88,
      -1,    -1,    22,    78,    42,    88,    29,    99,    -1,   101,
      -1,   102,    -1,   103,    -1,    19,    35,    93,    36,    39,
      88,    40,    -1,    27,    35,    67,    93,    41,    75,    36,
      39,    88,    40,    -1,    20,    39,    88,    40,    19,    35,
      93,    36,    41,    -1,     3,    35,   105,    36,    41,    -1,
       3,    35,    36,    41,    -1,   105,   106,    -1,   106,    -1,
      71,    -1,    34,    35,    86,    36,    39,    88,    40,    -1,
      34,    35,    36,    39,    88,    40,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    35,    35,    36,    37,    38,    41,    42,    43,    46,
      47,    48,    49,    50,    51,    52,    53,    56,    57,    60,
      61,    62,    63,    66,    67,    68,    69,    70,    71,    74,
      75,    76,    79,    80,    83,    84,    85,    86,    87,    88,
      89,    90,    93,    94,    97,    98,    99,   100,   101,   104,
     105,   106,   107,   110,   111,   112,   113,   114,   117,   118,
     119,   122,   123,   124,   127,   130,   131,   134,   135,   138,
     139,   142,   143,   146,   147,   150,   151,   154,   155,   158,
     159,   162,   163,   164,   165,   166,   169,   170,   173,   174,
     175,   176,   179,   180,   183,   184,   187,   188,   189,   190,
     191,   194,   197,   198,   199,   200,   201,   202,   205,   206,
     207,   210,   213,   214,   217,   218,   219,   222,   225,   228,
     231,   232,   235,   236,   239,   242,   243
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
       0,     2,     4,     3,     3,     2,     0,     2,     1,     3,
       5,     8,     4,     4,     6,     9,     5,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     2,     2,     3,     3,     4,     3,     4,
       3,     4,     1,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     5,     6,     1,     2,     1,
       1,     8,     7,    10,     9,     1,     3,     3,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     7,    11,
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
      62,     0,     0,     0,     1,     0,     0,     0,     0,    67,
      69,    70,     5,     7,     0,    18,    32,     0,    29,     0,
      54,    58,    59,    60,     0,    34,     0,    48,    52,    57,
      56,    54,     0,    57,     0,     0,     0,     0,     4,    68,
       3,    32,     0,     0,    33,     9,     0,     0,    63,     0,
      40,    55,     0,    35,    38,     0,     0,     0,     0,     0,
       0,     0,    36,    64,    54,     0,     0,     0,     0,     0,
      75,     0,     2,     0,    33,    13,     0,    42,    12,     0,
      32,    30,    31,     0,   124,     0,   123,    41,    53,    39,
      44,    45,    46,    47,    50,    49,    51,    37,    55,    65,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
      16,     0,    10,     0,     0,    33,   121,     0,   122,    66,
       0,     0,     0,     0,     0,   112,     0,     0,    81,    82,
       0,    79,    84,    86,    87,    85,   114,   115,   116,    83,
      77,     0,    76,     0,     0,    14,     0,    43,     0,   120,
       0,     0,     0,     0,     0,     0,     0,     0,   126,    80,
       0,     0,     0,     0,     0,    72,     0,    54,    98,    99,
       0,     0,    95,   100,     0,     0,     0,     0,     0,   125,
       0,     0,     0,    11,    71,    55,   102,   103,   107,   106,
     105,   104,     0,     0,   108,   109,   110,     0,     0,     0,
       0,     0,     0,     0,     0,    15,   101,     0,    94,     0,
       0,   111,     0,     0,    74,     0,     0,     0,   112,     0,
       0,    73,   117,     0,   113,    88,     0,     0,     0,     0,
      91,     0,   119,     0,     0,     0,    93,     0,     0,     0,
       0,   118,    89,     0,     0,     0,    90,     0,    92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,   148,    15,    16,    17,   104,    38,    23,
      96,    97,    47,    48,    53,   149,    19,    20,    28,    29,
      30,    31,    89,    90,   150,   151,   152,   153,   256,   191,
     192,   193,   212,   217,   154,   175,   155,   156,   157,   158,
      50,   105,   106,    32
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -173
static const yytype_int16 yypact[] =
{
     220,   -20,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,    14,   238,   220,   329,   244,    16,  -173,   -17,
    -173,    80,    32,   -24,  -173,    65,    41,    86,    44,   337,
    -173,  -173,   337,  -173,   117,  -173,   -10,    75,   100,   149,
     134,  -173,  -173,  -173,    32,   123,   216,    94,  -173,   138,
    -173,    29,   277,  -173,    97,   151,    85,   172,   337,  -173,
    -173,    74,    89,    32,     4,  -173,   187,    32,  -173,    10,
     123,  -173,   241,  -173,   123,    32,    32,    32,    32,    32,
      32,    32,   123,  -173,    29,   279,   139,   178,     6,   175,
     182,   156,  -173,    32,    21,  -173,   179,   253,  -173,   180,
     123,  -173,  -173,   181,   188,    17,  -173,  -173,  -173,  -173,
      94,    94,    94,    94,  -173,  -173,  -173,  -173,   199,  -173,
     203,   208,   194,  -173,   268,   234,   329,   237,   256,   252,
    -173,   280,  -173,    32,    32,  -173,  -173,   287,  -173,  -173,
     194,   282,    20,   261,   290,   319,   307,   314,  -173,  -173,
     310,   194,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,   194,  -173,   194,   313,  -173,    32,  -173,   317,  -173,
     318,   194,   119,   194,   189,   336,   119,   274,  -173,  -173,
     320,   330,   194,   321,   322,  -173,   324,   202,  -173,  -173,
     257,    51,  -173,  -173,   325,   326,   327,   122,   119,  -173,
     189,   334,   331,  -173,  -173,   217,  -173,  -173,  -173,  -173,
    -173,  -173,    32,   328,  -173,  -173,  -173,   119,   351,   194,
     194,   332,   137,   333,   189,  -173,   281,   194,  -173,   339,
     346,  -173,   194,    32,  -173,   338,   340,   119,   319,   341,
     255,  -173,  -173,   126,  -173,    83,   343,   335,   344,   342,
     155,   194,  -173,   194,   119,   345,   353,   347,   348,   205,
     194,  -173,  -173,   350,   352,   194,  -173,   354,  -173
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -173,  -173,   371,     2,  -173,   370,    48,   -12,   349,   -30,
     -59,   -21,   278,   176,   -18,    11,  -173,  -173,    59,  -173,
    -173,  -173,   -79,  -173,  -122,  -173,  -173,  -173,   145,  -172,
     174,  -173,  -173,  -173,  -173,   157,  -173,  -173,  -173,  -173,
     -92,  -173,   288,   368
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -98
static const yytype_int16 yytable[] =
{
      46,    52,    14,    49,   197,    37,    64,   121,   102,   123,
      71,    18,   128,   100,    24,    73,    14,    21,   170,    36,
     100,    71,    62,    72,    39,    18,   222,    21,    54,   179,
     159,    94,    22,    85,   129,    51,    41,    42,    43,   180,
     107,   181,    63,    21,   109,    98,   103,   162,   159,   186,
      68,   194,   117,   137,   118,    69,    99,    21,   124,   159,
     201,    27,   130,    34,    69,   243,    21,    44,    55,   159,
     135,   159,    22,   131,   167,   168,    56,    27,    26,   159,
      27,   159,   259,    40,    41,    42,    43,   213,    59,    57,
     159,    60,     2,     3,     4,     5,     6,   230,   231,     7,
      84,    41,    42,    43,    88,   236,    27,   183,   248,   249,
     239,    21,   214,   215,   216,    44,    65,    92,    45,    66,
      61,    87,   187,    41,    42,    43,    93,   159,   159,   257,
      95,   258,    44,    66,    88,   159,   188,   189,   264,    88,
     159,    79,    80,   267,    67,    81,     2,     3,     4,     5,
       6,   190,     1,     7,    44,   190,   195,   205,   221,   159,
      21,   159,   247,     2,     3,     4,     5,     6,   159,    69,
       7,    21,    70,   159,    88,   120,    82,   190,   233,   198,
     255,   249,   223,   214,   215,   216,    86,   214,   215,   216,
     100,   226,   127,    41,    42,    43,   190,   142,   214,   215,
     216,     2,     3,     4,     5,     6,   235,    91,     7,     8,
       9,   125,   240,   143,   144,   145,   190,   122,   146,   134,
     132,   147,   136,     1,    10,    11,   126,     2,     3,     4,
       5,     6,    66,   190,     7,     8,     9,    69,   -96,    21,
     139,   263,   140,   -96,   141,     2,     3,     4,     5,     6,
      10,    11,    25,   -97,    74,   114,   115,   116,   -97,     8,
       9,    75,    76,   -96,   -96,   -96,   214,   215,   216,    77,
      78,   160,    26,   161,    10,    11,   163,   108,   -97,   -97,
     -97,     2,     3,     4,     5,     6,    75,    76,     7,     8,
       9,   246,   164,   165,    77,    78,   172,   133,    75,    76,
      75,    76,    75,    76,    10,    11,    77,    78,    77,    78,
      77,    78,   206,   207,   208,   209,   210,   211,    83,   166,
     119,   171,    75,    76,    75,    76,    75,    76,   169,   173,
      77,    78,    77,    78,    77,    78,     2,     3,     4,     5,
       6,   174,   176,     7,     2,     3,     4,     5,     6,   177,
     178,    25,   182,   110,   111,   112,   113,   184,   185,   196,
     199,   202,   200,   203,   204,   218,   224,   227,   219,   220,
     229,   232,   225,   234,   237,   238,   252,   254,   241,   249,
     242,   245,   251,   253,   260,    33,    35,   261,   262,   265,
     250,   228,   266,   138,   268,   244,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   101
};

static const yytype_int16 yycheck[] =
{
      21,    22,     0,    21,   176,    17,    36,    86,    67,     3,
      40,     0,    91,     3,     0,    45,    14,    37,   140,     3,
       3,    51,    34,    44,    41,    14,   198,    37,    52,   151,
     122,    61,    52,    54,    93,     3,     4,     5,     6,   161,
      70,   163,    52,    37,    74,    41,    36,   126,   140,   171,
      39,   173,    82,    36,    84,    35,    52,    37,    88,   151,
     182,    13,    41,    15,    35,   237,    37,    35,     3,   161,
     100,   163,    52,    52,   133,   134,    35,    29,    34,   171,
      32,   173,   254,     3,     4,     5,     6,    36,    29,     3,
     182,    32,     7,     8,     9,    10,    11,   219,   220,    14,
       3,     4,     5,     6,    56,   227,    58,   166,    25,    26,
     232,    37,    61,    62,    63,    35,    41,    58,    38,    44,
       3,    36,     3,     4,     5,     6,    52,   219,   220,   251,
      41,   253,    35,    44,    86,   227,    17,    18,   260,    91,
     232,    47,    48,   265,    44,    51,     7,     8,     9,    10,
      11,   172,     3,    14,    35,   176,   174,   187,    36,   251,
      37,   253,    36,     7,     8,     9,    10,    11,   260,    35,
      14,    37,    38,   265,   126,    36,    38,   198,    41,   177,
      25,    26,   200,    61,    62,    63,    35,    61,    62,    63,
       3,   212,    36,     4,     5,     6,   217,     3,    61,    62,
      63,     7,     8,     9,    10,    11,   224,    35,    14,    15,
      16,    36,   233,    19,    20,    21,   237,    39,    24,    39,
      41,    27,    41,     3,    30,    31,    44,     7,     8,     9,
      10,    11,    44,   254,    14,    15,    16,    35,    36,    37,
      41,    36,    39,    41,    36,     7,     8,     9,    10,    11,
      30,    31,    14,    36,    38,    79,    80,    81,    41,    15,
      16,    45,    46,    61,    62,    63,    61,    62,    63,    53,
      54,     3,    34,    39,    30,    31,    39,    36,    61,    62,
      63,     7,     8,     9,    10,    11,    45,    46,    14,    15,
      16,    36,    36,    41,    53,    54,    35,    44,    45,    46,
      45,    46,    45,    46,    30,    31,    53,    54,    53,    54,
      53,    54,    55,    56,    57,    58,    59,    60,    41,    39,
      41,    39,    45,    46,    45,    46,    45,    46,    41,    39,
      53,    54,    53,    54,    53,    54,     7,     8,     9,    10,
      11,    22,    35,    14,     7,     8,     9,    10,    11,    35,
      40,    14,    39,    75,    76,    77,    78,    40,    40,    23,
      40,    40,    32,    41,    40,    40,    32,    39,    42,    42,
      19,    39,    41,    40,    35,    29,    41,    35,    40,    26,
      40,    40,    39,    39,    39,    14,    16,    40,    40,    39,
     245,   217,    40,   105,    40,   238,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,     8,     9,    10,    11,    14,    15,    16,
      30,    31,    65,    66,    67,    68,    69,    70,    79,    80,
      81,    37,    52,    73,     0,    14,    34,    70,    82,    83,
      84,    85,   107,    66,    70,    69,     3,    71,    72,    41,
       3,     4,     5,     6,    35,    38,    75,    76,    77,    78,
     104,     3,    75,    78,    52,     3,    35,     3,   107,    82,
      82,     3,    71,    52,    73,    41,    44,    44,    79,    35,
      38,    73,    75,    73,    38,    45,    46,    53,    54,    47,
      48,    51,    38,    41,     3,    75,    35,    36,    70,    86,
      87,    35,    82,    52,    73,    41,    74,    75,    41,    52,
       3,    72,    74,    36,    71,   105,   106,    73,    36,    73,
      76,    76,    76,    76,    77,    77,    77,    73,    73,    41,
      36,    86,    39,     3,    73,    36,    44,    36,    86,    74,
      41,    52,    41,    44,    39,    73,    41,    36,   106,    41,
      39,    36,     3,    19,    20,    21,    24,    27,    67,    79,
      88,    89,    90,    91,    98,   100,   101,   102,   103,   104,
       3,    39,    86,    39,    36,    41,    39,    74,    74,    41,
      88,    39,    35,    39,    22,    99,    35,    35,    40,    88,
      88,    88,    39,    74,    40,    40,    88,     3,    17,    18,
      75,    93,    94,    95,    88,    78,    23,    93,    67,    40,
      32,    88,    40,    41,    40,    73,    55,    56,    57,    58,
      59,    60,    96,    36,    61,    62,    63,    97,    40,    42,
      42,    36,    93,    78,    32,    41,    75,    39,    94,    19,
      88,    88,    39,    41,    40,    78,    88,    35,    29,    88,
      75,    40,    40,    93,    99,    40,    36,    36,    25,    26,
      92,    39,    41,    39,    35,    25,    92,    88,    88,    93,
      39,    40,    40,    36,    88,    39,    40,    88,    40
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
      

/* Line 1455 of yacc.c  */
#line 1673 "parser.tab.c"
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
#line 246 "parser.y"
 /* Fim da segunda seção */

int main (void) {
	return yyparse();
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}

