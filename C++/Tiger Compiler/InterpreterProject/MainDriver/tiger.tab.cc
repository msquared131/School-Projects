
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
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */


/* Line 189 of yacc.c  */
#line 73 "tiger.tab.cc"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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

/* "%code requires" blocks.  */

/* Line 209 of yacc.c  */
#line 12 "tiger.yy"

#include <iostream>
#include "ErrorMsg.h"
#include <FlexLexer.h>
#include "Absyn.h"

int yylex(void); /* function prototype */
void yyerror(char *s);	//called by the parser whenever an eror occurs
void yyerror(int, int, char *s);	//called by the parser whenever an eror occurs




/* Line 209 of yacc.c  */
#line 111 "tiger.tab.cc"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     COMMA = 258,
     COLON = 259,
     SEMICOLON = 260,
     LPAREN = 261,
     RPAREN = 262,
     LBRACK = 263,
     RBRACK = 264,
     LBRACE = 265,
     RBRACE = 266,
     DOT = 267,
     ARRAY = 268,
     IF = 269,
     THEN = 270,
     ELSE = 271,
     WHILE = 272,
     FOR = 273,
     TO = 274,
     DO = 275,
     LET = 276,
     IN = 277,
     END = 278,
     OF = 279,
     BREAK = 280,
     NIL = 281,
     FUNCTION = 282,
     VAR = 283,
     TYPE = 284,
     ID = 285,
     STRING = 286,
     INT = 287,
     ASSIGN = 288,
     OR = 289,
     AND = 290,
     GE = 291,
     GT = 292,
     LE = 293,
     LT = 294,
     NE = 295,
     EQ = 296,
     MINUS = 297,
     PLUS = 298,
     DIV = 299,
     MUL = 300,
     UMINUS = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 24 "tiger.yy"

	int						ival;	//integer value of INT token
	string*					sval;	
	absyn::Exp*				exp;
	absyn::Var*				var;
	absyn::Ty*				ty;
	absyn::Dec*				dec;
	absyn::DecList*			declist;
	absyn::FieldList*		fieldlist;
	absyn::ExpList*			explist;
	absyn::FieldExpList*	fieldexplist;
	absyn::VarDec*			vardec;
	absyn::SeqExp*			seqexp;
		


/* Line 214 of yacc.c  */
#line 191 "tiger.tab.cc"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 39 "tiger.yy"

void yyerror(YYLTYPE loc, char *s);
absyn::Exp*		root;	//pointer to the root of abstract syntax tree


/* Line 264 of yacc.c  */
#line 222 "tiger.tab.cc"

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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   316

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNRULES -- Number of states.  */
#define YYNSTATES  133

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    15,    17,    21,
      25,    29,    33,    37,    41,    45,    49,    53,    57,    61,
      64,    68,    72,    77,    82,    89,    94,   101,   106,   115,
     117,   123,   127,   129,   130,   134,   136,   137,   138,   142,
     148,   150,   154,   159,   164,   167,   169,   171,   172,   174,
     176,   178,   183,   185,   189,   193,   194,   196,   200,   204,
     211,   216,   224
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    49,    -1,    31,    -1,    32,    -1,    26,
      -1,    53,    33,    49,    -1,    53,    -1,     6,    50,     7,
      -1,    49,    43,    49,    -1,    49,    42,    49,    -1,    49,
      45,    49,    -1,    49,    44,    49,    -1,    49,    41,    49,
      -1,    49,    40,    49,    -1,    49,    39,    49,    -1,    49,
      38,    49,    -1,    49,    37,    49,    -1,    49,    36,    49,
      -1,    42,    49,    -1,    49,    35,    49,    -1,    49,    34,
      49,    -1,    30,     6,    51,     7,    -1,    30,    10,    52,
      11,    -1,    30,     8,    49,     9,    24,    49,    -1,    14,
      49,    15,    49,    -1,    14,    49,    15,    49,    16,    49,
      -1,    17,    49,    20,    49,    -1,    18,    30,    33,    49,
      19,    49,    20,    49,    -1,    25,    -1,    21,    55,    22,
      50,    23,    -1,    49,     5,    50,    -1,    49,    -1,    -1,
      49,     3,    51,    -1,    49,    -1,    -1,    -1,    30,    41,
      49,    -1,    30,    41,    49,     3,    52,    -1,    30,    -1,
      53,    12,    30,    -1,    53,     8,    49,     9,    -1,    30,
       8,    49,     9,    -1,    56,    54,    -1,    56,    -1,    54,
      -1,    -1,    57,    -1,    61,    -1,    62,    -1,    29,    30,
      41,    58,    -1,    30,    -1,    10,    59,    11,    -1,    13,
      24,    30,    -1,    -1,    60,    -1,    60,     3,    59,    -1,
      30,     4,    30,    -1,    28,    30,     4,    30,    33,    49,
      -1,    28,    30,    33,    49,    -1,    27,    30,     6,    59,
       7,    41,    49,    -1,    27,    30,     6,    59,     7,     4,
      30,    41,    49,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    84,    84,    90,    92,    94,    98,   102,   106,   108,
     110,   112,   114,   116,   118,   120,   122,   124,   126,   129,
     135,   137,   141,   145,   147,   152,   155,   158,   161,   167,
     170,   175,   177,   180,   184,   186,   189,   194,   195,   197,
     202,   204,   206,   208,   213,   236,   241,   244,   248,   250,
     252,   257,   262,   264,   266,   272,   273,   275,   280,   285,
     287,   292,   294
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMMA", "COLON", "SEMICOLON", "LPAREN",
  "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE", "DOT", "ARRAY", "IF",
  "THEN", "ELSE", "WHILE", "FOR", "TO", "DO", "LET", "IN", "END", "OF",
  "BREAK", "NIL", "FUNCTION", "VAR", "TYPE", "ID", "STRING", "INT",
  "ASSIGN", "OR", "AND", "GE", "GT", "LE", "LT", "NE", "EQ", "MINUS",
  "PLUS", "DIV", "MUL", "UMINUS", "$accept", "program", "exp", "exp_seq",
  "exp_list", "field_list", "lvalue", "dec_list", "decs", "dec",
  "type_dec", "type", "type_fields", "type_field", "var_dec", "field_dec", 0
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    50,    50,    50,    51,    51,    51,    52,    52,    52,
      53,    53,    53,    53,    54,    54,    55,    55,    56,    56,
      56,    57,    58,    58,    58,    59,    59,    59,    60,    61,
      61,    62,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     4,     4,     6,     4,     6,     4,     8,     1,
       5,     3,     1,     0,     3,     1,     0,     0,     3,     5,
       1,     3,     4,     4,     2,     1,     1,     0,     1,     1,
       1,     4,     1,     3,     3,     0,     1,     3,     3,     6,
       4,     7,     9
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    33,     0,     0,     0,    47,    29,     5,    40,     3,
       4,     0,     0,     2,     7,    32,     0,     0,     0,     0,
       0,     0,     0,    46,     0,    45,    48,    49,    50,    36,
       0,    37,    19,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       8,     0,     0,     0,     0,     0,     0,    33,    44,    35,
       0,     0,     0,     0,    21,    20,    18,    17,    16,    15,
      14,    13,    10,     9,    12,    11,     0,    41,     6,    31,
      25,    27,     0,    55,     0,     0,     0,     0,    36,    22,
      43,     0,    23,    42,     0,     0,     0,     0,    56,     0,
      60,    55,     0,    52,    51,    30,    34,     0,    38,    26,
       0,     0,     0,    55,     0,     0,     0,    24,    37,     0,
      58,     0,     0,    57,    59,    53,    54,    39,    28,     0,
      61,     0,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    12,    15,    16,    60,    63,    14,    23,    24,    25,
      26,   104,    97,    98,    27,    28
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -96
static const yytype_int16 yypact[] =
{
     199,   199,   199,   199,   -21,     4,   -96,   -96,     7,   -96,
     -96,   199,    12,   135,    -7,   110,    15,    34,   236,   -19,
      -5,    -3,    -2,   -96,    44,     4,   -96,   -96,   -96,   199,
     199,    37,   -96,   -96,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,    50,   199,   199,
     -96,   199,   199,   199,    75,    17,    41,   199,   -96,    20,
      76,   147,    43,    78,   261,   122,   271,   271,   271,   271,
     271,   271,   -25,   -25,   -96,   -96,   159,   -96,   135,   -96,
     210,   135,   223,    56,    57,   199,    -6,    67,   199,   -96,
      68,   199,   -96,   -96,   199,   199,    89,    90,    93,    65,
     135,    56,    79,   -96,   -96,   -96,   -96,   199,    98,   135,
     249,    69,     6,    56,   199,    91,    70,   135,    37,   199,
     -96,    74,   199,   -96,   135,   -96,   -96,   -96,   135,    64,
     135,   199,   135
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -96,   -96,     0,   -41,    18,   -10,   -96,    84,   -96,   -96,
     -96,   -96,   -95,   -96,   -96,   -96
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      13,    46,    17,    18,   101,    47,   115,   102,    79,    19,
     121,    32,    33,    29,    53,    30,    87,    31,   123,    44,
      45,    84,    50,    88,   103,    54,    48,    55,    56,    59,
      61,    20,    21,    22,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,   122,    78,    51,
      85,    80,    81,    82,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    57,    62,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      77,    83,    86,    89,    91,   100,    96,    99,    59,    92,
     105,   108,   107,   111,   109,   110,   113,   112,   114,   120,
     126,   118,   125,   116,   129,   131,   106,   117,   127,    58,
       0,     0,     0,     0,   124,    49,     0,     0,     0,   128,
       0,     0,   130,     0,     0,     0,     0,     0,     0,     0,
       0,   132,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    90,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    93,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     1,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     0,     3,     4,     0,     0,
       5,     0,     0,     0,     6,     7,    94,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    95,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    52,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,   119,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     0,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    44,    45
};

static const yytype_int16 yycheck[] =
{
       0,     8,     2,     3,    10,    12,   101,    13,    49,    30,
       4,    11,     0,     6,    33,     8,    57,    10,   113,    44,
      45,     4,     7,     3,    30,    30,    33,    30,    30,    29,
      30,    27,    28,    29,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    41,    48,    15,
      33,    51,    52,    53,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    22,    30,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      30,     6,    41,     7,    41,    85,    30,    30,    88,    11,
      23,    91,    24,     4,    94,    95,     3,     7,    33,    30,
      30,     3,    11,    24,    30,    41,    88,   107,   118,    25,
      -1,    -1,    -1,    -1,   114,     5,    -1,    -1,    -1,   119,
      -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     9,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     9,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,
      21,    -1,    -1,    -1,    25,    26,    16,    -1,    -1,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    19,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    20,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    20,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    14,    17,    18,    21,    25,    26,    30,    31,
      32,    42,    48,    49,    53,    49,    50,    49,    49,    30,
      27,    28,    29,    54,    55,    56,    57,    61,    62,     6,
       8,    10,    49,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     8,    12,    33,     5,
       7,    15,    20,    33,    30,    30,    30,    22,    54,    49,
      51,    49,    30,    52,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    30,    49,    50,
      49,    49,    49,     6,     4,    33,    41,    50,     3,     7,
       9,    41,    11,     9,    16,    19,    30,    59,    60,    30,
      49,    10,    13,    30,    58,    23,    51,    24,    49,    49,
      49,     4,     7,     3,    33,    59,    24,    49,     3,    20,
      30,     4,    41,    59,    49,    11,    30,    52,    49,    30,
      49,    41,    49
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

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
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
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
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 85 "tiger.yy"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); root=(yyval.exp); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 91 "tiger.yy"
    {(yyval.exp) = new absyn::StringExp((yylsp[(1) - (1)]).first_line, (yylsp[(1) - (1)]).first_column, *(yyvsp[(1) - (1)].sval));;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 93 "tiger.yy"
    {(yyval.exp) = new absyn::IntExp((yylsp[(1) - (1)]).first_line, (yylsp[(1) - (1)]).first_column, (yyvsp[(1) - (1)].ival));;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 95 "tiger.yy"
    {(yyval.exp) = new absyn::NilExp((yylsp[(1) - (1)]).first_line, (yylsp[(1) - (1)]).first_column);;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 99 "tiger.yy"
    {(yyval.exp) = new absyn::AssignExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].exp));;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 103 "tiger.yy"
    {(yyval.exp) = new absyn::VarExp((yylsp[(1) - (1)]).first_line, (yylsp[(1) - (1)]).first_column, (yyvsp[(1) - (1)].var));;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 107 "tiger.yy"
    {(yyval.exp) = (yyvsp[(2) - (3)].seqexp);;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 109 "tiger.yy"
    {(yyval.exp) = new absyn::OpExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::PLUS, (yyvsp[(3) - (3)].exp));;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 111 "tiger.yy"
    {(yyval.exp) = new absyn::OpExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::MINUS, (yyvsp[(3) - (3)].exp));;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 113 "tiger.yy"
    {(yyval.exp) = new absyn::OpExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::MUL, (yyvsp[(3) - (3)].exp));;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 115 "tiger.yy"
    {(yyval.exp) = new absyn::OpExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::DIV, (yyvsp[(3) - (3)].exp));;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 117 "tiger.yy"
    {(yyval.exp) = new absyn::OpExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::EQ, (yyvsp[(3) - (3)].exp));;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 119 "tiger.yy"
    {(yyval.exp) = new absyn::OpExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::NE, (yyvsp[(3) - (3)].exp));;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 121 "tiger.yy"
    {(yyval.exp) = new absyn::OpExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::LT, (yyvsp[(3) - (3)].exp));;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 123 "tiger.yy"
    {(yyval.exp) = new absyn::OpExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::LE, (yyvsp[(3) - (3)].exp));;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 125 "tiger.yy"
    {(yyval.exp) = new absyn::OpExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::GT, (yyvsp[(3) - (3)].exp));;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 127 "tiger.yy"
    {(yyval.exp) = new absyn::OpExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::GE, (yyvsp[(3) - (3)].exp));;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 130 "tiger.yy"
    {
			(yyval.exp) = new absyn::OpExp((yylsp[(1) - (2)]).first_line, (yylsp[(1) - (2)]).first_column, 
			new absyn::IntExp((yylsp[(1) - (2)]).first_line, (yylsp[(1) - (2)]).first_column, 0), 
			absyn::OpExp::MINUS, (yyvsp[(2) - (2)].exp));
			;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 136 "tiger.yy"
    {(yyval.exp) = new absyn::IfExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp), (new absyn::IntExp((yylsp[(3) - (3)]).first_line, (yylsp[(3) - (3)]).first_column, 0)));;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 138 "tiger.yy"
    {(yyval.exp) = new absyn::IfExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), (new absyn::IntExp((yylsp[(2) - (3)]).first_line, (yylsp[(2) - (3)]).first_column, 1)), (yyvsp[(3) - (3)].exp));;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 142 "tiger.yy"
    {(yyval.exp) = new absyn::CallExp((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, *(yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].explist));;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 146 "tiger.yy"
    {(yyval.exp) = new absyn::RecordExp((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, *(yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].fieldexplist));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 148 "tiger.yy"
    {(yyval.exp) = new absyn::ArrayExp((yylsp[(1) - (6)]).first_line, (yylsp[(1) - (6)]).first_column, *(yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].exp), (yyvsp[(6) - (6)].exp));;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 153 "tiger.yy"
    {(yyval.exp) = new absyn::IfExp((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, (yyvsp[(2) - (4)].exp), (yyvsp[(4) - (4)].exp));;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 156 "tiger.yy"
    {(yyval.exp) = new absyn::IfExp((yylsp[(1) - (6)]).first_line, (yylsp[(1) - (6)]).first_column, (yyvsp[(2) - (6)].exp), (yyvsp[(4) - (6)].exp), (yyvsp[(6) - (6)].exp));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 159 "tiger.yy"
    {(yyval.exp) = new absyn::WhileExp((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, (yyvsp[(2) - (4)].exp), (yyvsp[(4) - (4)].exp));;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 162 "tiger.yy"
    {
			(yyval.exp) = new absyn::ForExp((yylsp[(1) - (8)]).first_line, (yylsp[(1) - (8)]).first_column, 
			(new absyn::VarDec((yylsp[(2) - (8)]).first_line, (yylsp[(2) - (8)]).first_column, *(yyvsp[(2) - (8)].sval), NULL, (yyvsp[(4) - (8)].exp))), (yyvsp[(6) - (8)].exp), (yyvsp[(8) - (8)].exp));
			;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 168 "tiger.yy"
    {(yyval.exp) = new absyn::BreakExp((yylsp[(1) - (1)]).first_line, (yylsp[(1) - (1)]).first_column);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 171 "tiger.yy"
    {(yyval.exp) = new absyn::LetExp((yylsp[(1) - (5)]).first_line, (yylsp[(1) - (5)]).first_column, (yyvsp[(2) - (5)].declist), (yyvsp[(4) - (5)].seqexp));;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 176 "tiger.yy"
    {(yyval.seqexp) = new absyn::SeqExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, new absyn::ExpList((yyvsp[(1) - (3)].exp), (absyn::ExpList*)((yyvsp[(3) - (3)].seqexp)->getList())));;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 178 "tiger.yy"
    {(yyval.seqexp) = new absyn::SeqExp((yylsp[(1) - (1)]).first_line, (yylsp[(1) - (1)]).first_column, new absyn::ExpList((yyvsp[(1) - (1)].exp), NULL));;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 180 "tiger.yy"
    {(yyval.seqexp) = NULL;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 185 "tiger.yy"
    {(yyval.explist) = new absyn::ExpList((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].explist));;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 187 "tiger.yy"
    {(yyval.explist) = new absyn::ExpList((yyvsp[(1) - (1)].exp), NULL);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 189 "tiger.yy"
    {(yyval.explist) = NULL;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 194 "tiger.yy"
    {(yyval.fieldexplist) = NULL;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 196 "tiger.yy"
    {(yyval.fieldexplist) = new absyn::FieldExpList((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, *(yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].exp), NULL);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 198 "tiger.yy"
    {(yyval.fieldexplist) = new absyn::FieldExpList((yylsp[(1) - (5)]).first_line, (yylsp[(1) - (5)]).first_column, *(yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].fieldexplist));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 203 "tiger.yy"
    {(yyval.var) = new absyn::SimpleVar((yylsp[(1) - (1)]).first_line, (yylsp[(1) - (1)]).first_column, *(yyvsp[(1) - (1)].sval));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 205 "tiger.yy"
    {(yyval.var) = new absyn::FieldVar((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].var), *(yyvsp[(3) - (3)].sval));;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 207 "tiger.yy"
    {(yyval.var) = new absyn::SubscriptVar((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, (yyvsp[(1) - (4)].var), (yyvsp[(3) - (4)].exp));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 209 "tiger.yy"
    {(yyval.var) = new absyn::SubscriptVar((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, new absyn::SimpleVar((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, *(yyvsp[(1) - (4)].sval)), (yyvsp[(3) - (4)].exp));;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 214 "tiger.yy"
    {	
				if ( dynamic_cast<absyn::TypeDec *>((yyvsp[(1) - (2)].dec)) != NULL ) {
					absyn::TypeDec		*t = (absyn::TypeDec *)(yyvsp[(1) - (2)].dec);
					if ( dynamic_cast<const absyn::TypeDec *>((yyvsp[(2) - (2)].declist)->getHead()) != NULL ) {
						t->setNext( (absyn::TypeDec *)((yyvsp[(2) - (2)].declist)->getHead()) );
						(yyval.declist) = new absyn::DecList(t, (absyn::DecList *)(yyvsp[(2) - (2)].declist)->getRest());
					}
					else
						(yyval.declist) = new absyn::DecList((yyvsp[(1) - (2)].dec), (yyvsp[(2) - (2)].declist));		
				}
				else if ( dynamic_cast<absyn::FunctionDec *>((yyvsp[(1) - (2)].dec)) != NULL ) { 
					absyn::FunctionDec*		f = (absyn::FunctionDec *)(yyvsp[(1) - (2)].dec);
					if ( dynamic_cast<const absyn::FunctionDec *>((yyvsp[(2) - (2)].declist)->getHead()) != NULL ) {
						f->setNext( (absyn::FunctionDec *)((yyvsp[(2) - (2)].declist)->getHead()) );
						(yyval.declist) = new absyn::DecList(f, (absyn::DecList *)(yyvsp[(2) - (2)].declist)->getRest());
					}
					else
						(yyval.declist) = new absyn::DecList((yyvsp[(1) - (2)].dec), (yyvsp[(2) - (2)].declist));		
				} 
				else 
					(yyval.declist) = new absyn::DecList((yyvsp[(1) - (2)].dec), (yyvsp[(2) - (2)].declist));		
			;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 237 "tiger.yy"
    {(yyval.declist) = new absyn::DecList((yyvsp[(1) - (1)].dec), NULL);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 242 "tiger.yy"
    { (yyval.declist) = (yyvsp[(1) - (1)].declist); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 244 "tiger.yy"
    {(yyval.declist) = NULL;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 249 "tiger.yy"
    {(yyval.dec) = (yyvsp[(1) - (1)].dec);}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 251 "tiger.yy"
    {(yyval.dec) = (yyvsp[(1) - (1)].vardec);}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 253 "tiger.yy"
    {(yyval.dec) = (yyvsp[(1) - (1)].dec);}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 258 "tiger.yy"
    {(yyval.dec) = new absyn::TypeDec((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, *(yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].ty), NULL);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 263 "tiger.yy"
    {(yyval.ty) = new absyn::NameTy((yylsp[(1) - (1)]).first_line, (yylsp[(1) - (1)]).first_column, *(yyvsp[(1) - (1)].sval));;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 265 "tiger.yy"
    {(yyval.ty) = new absyn::RecordTy((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(2) - (3)].fieldlist));;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 267 "tiger.yy"
    {(yyval.ty) = new absyn::ArrayTy((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, *(yyvsp[(3) - (3)].sval));;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 272 "tiger.yy"
    {(yyval.fieldlist) = NULL;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 274 "tiger.yy"
    {(yyval.fieldlist) = (yyvsp[(1) - (1)].fieldlist);}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 276 "tiger.yy"
    {(yyval.fieldlist) = new absyn::FieldList((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].fieldlist)->getName(), (yyvsp[(1) - (3)].fieldlist)->getType(), (yyvsp[(3) - (3)].fieldlist));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 281 "tiger.yy"
    {(yyval.fieldlist) = new absyn::FieldList((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, *(yyvsp[(1) - (3)].sval), *(yyvsp[(3) - (3)].sval), NULL);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 286 "tiger.yy"
    {(yyval.vardec) = new absyn::VarDec((yylsp[(1) - (6)]).first_line, (yylsp[(1) - (6)]).first_column, *(yyvsp[(2) - (6)].sval), (new absyn::NameTy((yylsp[(4) - (6)]).first_line, (yylsp[(4) - (6)]).first_column, *(yyvsp[(4) - (6)].sval))), (yyvsp[(6) - (6)].exp));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 288 "tiger.yy"
    {(yyval.vardec) = new absyn::VarDec((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, *(yyvsp[(2) - (4)].sval), NULL, (yyvsp[(4) - (4)].exp));;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 293 "tiger.yy"
    {(yyval.dec) = new absyn::FunctionDec((yylsp[(1) - (7)]).first_line, (yylsp[(1) - (7)]).first_column, *(yyvsp[(2) - (7)].sval), (yyvsp[(4) - (7)].fieldlist), NULL, (yyvsp[(7) - (7)].exp), NULL);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 295 "tiger.yy"
    {
				(yyval.dec) = new absyn::FunctionDec((yylsp[(1) - (9)]).first_line, (yylsp[(1) - (9)]).first_column, *(yyvsp[(2) - (9)].sval), (yyvsp[(4) - (9)].fieldlist), 
				(new absyn::NameTy((yylsp[(7) - (9)]).first_line, (yylsp[(7) - (9)]).first_column, *(yyvsp[(7) - (9)].sval))), (yyvsp[(9) - (9)].exp), NULL);
				;}
    break;



/* Line 1455 of yacc.c  */
#line 2059 "tiger.tab.cc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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
#line 301 "tiger.yy"

extern yyFlexLexer	lexer;
int yylex(void)
{
	return lexer.yylex();
}

void yyerror(char *s)
{
	extern int	linenum;			//line no of current matched token
	extern int	colnum;
	extern void error(int, int, std::string);

	error(linenum, colnum, s);
}

void yyerror(int lineno, int column, char *s)
{
	extern void error(int, int, std::string);

	error(lineno, column, s);
}

void yyerror(YYLTYPE loc, char *s)
{
	extern void error(int, int, std::string);

	error(loc.first_line, loc.first_column, s);
}

/************
Add your own functions here.
************/