/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "myanalyzer.y" /* yacc.c:339  */

  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>
  #include "cgen.h"

  extern int yylex(void);
  extern int lineNum;

#line 76 "myanalyzer.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "myanalyzer.tab.h".  */
#ifndef YY_YY_MYANALYZER_TAB_H_INCLUDED
# define YY_YY_MYANALYZER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_ID = 258,
    TK_INT_POS_CONST = 259,
    TK_REAL_POST_CONST = 260,
    TK_ASSGN = 261,
    TK_OPEN_PARENTHESIS = 262,
    TK_CLOSE_PARENTHESIS = 263,
    TK_SEMICOLON = 264,
    TK_CONST_STR = 265,
    TK_CONST_CHAR = 266,
    TK_KW_STATIC = 267,
    TK_KW_BOOLEAN = 268,
    TK_KW_INTEGER = 269,
    TK_KW_CHARACTER = 270,
    TK_KW_REAL = 271,
    TK_KW_VOID = 272,
    TK_KW_MAIN = 273,
    TK_KW_TRUE = 274,
    TK_KW_FALSE = 275,
    TK_KW_STRING = 276,
    TK_KW_WHILE = 277,
    TK_KW_DO = 278,
    TK_KW_BREAK = 279,
    TK_KW_CONTINUE = 280,
    TK_KW_RETURN = 281,
    TK_KW_BEGIN = 282,
    TK_KW_IF = 283,
    TK_KW_ELSE = 284,
    TK_KW_FOR = 285,
    TK_KW_END = 286,
    TK_KW_OR = 287,
    TK_KW_NOT = 288,
    TK_KW_AND = 289,
    TK_KW_MOD = 290,
    TK_OP_EQUAL = 291,
    TK_OP_EQUAL_GREATER = 292,
    TK_OP_EQUAL_SMALLER = 293,
    TK_OP_GREATER = 294,
    TK_OP_SMALLER = 295,
    TK_OP_EQUAL_NOT = 296,
    TK_OP_LO_AND = 297,
    TK_OP_LO_OR = 298,
    TK_OP_LO_NOT = 299,
    TK_OPEN_BRACKET = 300,
    TK_CLOSE_BRACKET = 301,
    TK_COMMA = 302,
    FCLIB_READ_STRING = 303,
    FCLIB_READ_INTEGER = 304,
    FCLIB_READ_REAL = 305,
    FCLIB_WRITE_STRING = 306,
    FCLIB_WRITE_INTEGER = 307,
    FCLIB_WRITE_REAL = 308,
    TK_OP_PLUS = 309,
    TK_OP_MINUS = 310,
    TK_OP_MULT = 311,
    TK_OP_DIV = 312,
    UNARYMINUS = 313,
    UNARYPLUS = 314,
    NO_ELSE = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "myanalyzer.y" /* yacc.c:355  */

  char* str;

#line 181 "myanalyzer.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 198 "myanalyzer.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   687

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  206

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   131,   131,   140,   141,   144,   145,   148,   149,   150,
     151,   154,   155,   156,   157,   158,   161,   162,   163,   164,
     168,   169,   172,   173,   174,   177,   178,   181,   182,   183,
     187,   189,   193,   194,   197,   198,   201,   202,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   241,
     242,   243,   247,   248,   251,   252,   253,   257,   260,   261,
     263,   266,   269,   270,   271,   272,   273,   274,   275,   276
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_ID", "TK_INT_POS_CONST",
  "TK_REAL_POST_CONST", "TK_ASSGN", "TK_OPEN_PARENTHESIS",
  "TK_CLOSE_PARENTHESIS", "TK_SEMICOLON", "TK_CONST_STR", "TK_CONST_CHAR",
  "TK_KW_STATIC", "TK_KW_BOOLEAN", "TK_KW_INTEGER", "TK_KW_CHARACTER",
  "TK_KW_REAL", "TK_KW_VOID", "TK_KW_MAIN", "TK_KW_TRUE", "TK_KW_FALSE",
  "TK_KW_STRING", "TK_KW_WHILE", "TK_KW_DO", "TK_KW_BREAK",
  "TK_KW_CONTINUE", "TK_KW_RETURN", "TK_KW_BEGIN", "TK_KW_IF",
  "TK_KW_ELSE", "TK_KW_FOR", "TK_KW_END", "TK_KW_OR", "TK_KW_NOT",
  "TK_KW_AND", "TK_KW_MOD", "TK_OP_EQUAL", "TK_OP_EQUAL_GREATER",
  "TK_OP_EQUAL_SMALLER", "TK_OP_GREATER", "TK_OP_SMALLER",
  "TK_OP_EQUAL_NOT", "TK_OP_LO_AND", "TK_OP_LO_OR", "TK_OP_LO_NOT",
  "TK_OPEN_BRACKET", "TK_CLOSE_BRACKET", "TK_COMMA", "FCLIB_READ_STRING",
  "FCLIB_READ_INTEGER", "FCLIB_READ_REAL", "FCLIB_WRITE_STRING",
  "FCLIB_WRITE_INTEGER", "FCLIB_WRITE_REAL", "TK_OP_PLUS", "TK_OP_MINUS",
  "TK_OP_MULT", "TK_OP_DIV", "UNARYMINUS", "UNARYPLUS", "NO_ELSE",
  "$accept", "fc_body", "functio_declaration", "variables_declaration",
  "variables", "type", "assignment", "boolean", "sign", "characters",
  "more_variables", "function", "function_variables",
  "function_variables_list", "function_body", "expression", "expressions",
  "statements", "statement", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

#define YYPACT_NINF -118

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-118)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -118,    14,   187,  -118,   395,  -118,  -118,  -118,  -118,    13,
    -118,   426,  -118,    23,  -118,    37,    39,    80,  -118,     0,
      -4,   395,    93,     8,   395,   102,    59,   100,    59,   104,
     112,   114,  -118,  -118,  -118,  -118,  -118,  -118,  -118,    16,
    -118,   115,    -4,   117,  -118,   118,  -118,    81,   106,  -118,
    -118,   113,    59,  -118,  -118,  -118,   395,  -118,   154,   154,
    -118,   128,     2,  -118,   134,    28,   138,   140,    88,    28,
     143,   146,   147,   148,   149,   154,   155,   131,  -118,    28,
     133,    81,    88,    88,    88,   137,  -118,  -118,   158,  -118,
    -118,    88,  -118,  -118,  -118,  -118,    88,    88,   164,   165,
     166,    88,    88,   465,   152,    88,   184,    34,    88,    88,
    -118,    -4,  -118,  -118,  -118,  -118,   500,   596,   180,   178,
     185,    88,   214,  -118,  -118,   186,   189,   190,  -118,  -118,
    -118,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,  -118,   250,   203,   223,
     286,   322,  -118,    88,   202,    28,    88,   228,  -118,  -118,
    -118,  -118,   620,   188,  -118,   260,   296,   332,    62,   368,
      47,   224,   630,    62,     4,   -25,   204,    28,    88,  -118,
    -118,  -118,  -118,  -118,  -118,   358,  -118,   208,   535,   229,
      28,   141,  -118,  -118,    42,   570,    88,   237,   394,   235,
      28,    88,  -118,   430,    28,  -118
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     1,     0,    12,    11,    13,    14,     0,
      15,     2,     6,     0,     3,     0,     0,     0,     4,    27,
      27,    32,     0,    22,    32,     0,    27,     0,    27,     0,
       0,     0,    26,    25,    20,    21,    23,    24,    17,     0,
      18,     0,    27,     0,     7,     0,     9,    34,     0,    16,
      19,     0,    27,    29,     8,    10,     0,    33,    72,    72,
      28,     0,     0,    74,     0,     0,     0,     0,     0,    72,
       0,     0,     0,     0,     0,    72,     0,     0,    37,    72,
       0,    34,     0,    69,     0,     0,    82,    83,    63,    38,
      42,     0,    43,    41,    39,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,    27,    31,    73,    30,    35,     0,    70,     0,     0,
       0,    69,     0,    44,    45,     0,     0,     0,    46,    47,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,    86,    69,     0,     0,     0,     0,    64,    66,
      67,    68,    61,    59,    50,    53,    58,    57,    56,    55,
      54,    60,    62,    51,    52,    48,    49,     0,     0,    87,
      88,    89,    71,    85,    78,     0,    65,    80,     0,     0,
       0,     0,    79,    81,    63,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,    77
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -118,  -118,  -118,  -118,   191,     1,    -9,  -118,  -118,   159,
      68,   236,   243,   192,    55,   -67,  -117,   -56,   -65
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    11,     2,    75,    76,    26,    38,    39,    40,
      27,    14,    31,    57,    77,   117,   118,    78,    79
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      85,   103,    23,    13,   157,    15,    23,    24,    82,    83,
     133,    28,    17,   104,     3,   116,    16,   119,    32,    33,
      49,    50,    30,   113,   122,    30,    19,    34,    35,   123,
     124,    62,   145,    52,   128,   129,   182,    63,   147,   133,
      20,   150,   151,    25,    32,    33,    21,    25,   196,   121,
      64,    65,    66,    67,    68,    69,    70,    61,    71,   143,
     144,   145,    36,    37,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,    72,
      73,    74,   133,    22,   135,   136,   137,   138,    29,   185,
     184,    88,    89,    90,    43,    91,    45,   133,    92,    93,
      24,   142,   143,   144,   145,    42,    25,    94,    95,    44,
      53,   188,   187,    46,    80,    47,   142,   143,   144,   145,
      60,    96,    48,    51,   195,   193,    54,    55,    56,   198,
     110,    81,    97,    58,   203,   202,    98,    99,   100,   205,
      59,    84,   101,   102,   194,    89,    90,    86,    91,    87,
     105,    92,    93,   106,   107,   108,   109,    62,   111,   120,
      94,    95,   112,    63,   114,   121,     4,     5,     6,     7,
       8,   125,   126,   127,    96,    10,    64,    65,    66,    67,
      68,    69,    70,   146,    71,    97,   155,   148,   154,    98,
      99,   100,   156,    12,   159,   101,   102,   160,   161,     4,
       5,     6,     7,     8,     9,    72,    73,    74,    10,   178,
     131,   183,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   158,   133,   134,   135,   136,   137,   138,   139,
     140,   179,   142,   143,   144,   145,   186,   190,   192,   133,
     199,   201,   142,   143,   144,   145,   131,    18,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   177,   133,
     134,   135,   136,   137,   138,   139,   149,    41,   142,   143,
     144,   145,     0,   115,     0,     0,     0,     0,   142,   143,
     144,   145,   131,     0,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   180,   133,     0,   135,   136,   137,
     138,   139,     0,     0,   142,   143,   144,   145,     0,     0,
       0,     0,     0,     0,   142,   143,   144,   145,   131,     0,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     181,   133,     0,     0,   136,   137,   138,     0,     0,     0,
     142,   143,   144,   145,     0,     0,     0,     0,     0,     0,
     142,   143,   144,   145,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   189,   133,     0,     0,
       0,   137,   138,     0,     0,     0,   142,   143,   144,   145,
       0,     0,     0,     0,     0,     0,   142,   143,   144,   145,
     131,     0,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   200,   133,     0,     0,     0,   137,     5,     6,
       7,     8,   142,   143,   144,   145,    10,     0,     0,     0,
       0,     0,   142,   143,   144,   145,   131,     0,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   204,     5,
       6,     7,     8,     9,     0,     0,     0,    10,   142,   143,
     144,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   131,     0,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   142,   143,   144,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   131,     0,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   152,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   142,
     143,   144,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   131,     0,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   191,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   142,   143,   144,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   131,     0,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   197,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   142,
     143,   144,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   131,     0,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   142,   143,   144,   145,   131,     0,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
       0,     0,     0,   153,     0,     0,     0,     0,     0,     0,
     142,   143,   144,   145,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   132,   133,   134,   135,   136,   137,
     138,   139,   140,     0,   142,   143,   144,   145,     0,     0,
       0,     0,     0,     0,   142,   143,   144,   145
};

static const yytype_int16 yycheck[] =
{
      65,    68,     6,     2,   121,     4,     6,     7,     6,     7,
      35,    20,    11,    69,     0,    82,     3,    84,    10,    11,
       4,     5,    21,    79,    91,    24,     3,    19,    20,    96,
      97,     3,    57,    42,   101,   102,   153,     9,   105,    35,
       3,   108,   109,    47,    10,    11,     7,    47,     6,     7,
      22,    23,    24,    25,    26,    27,    28,    56,    30,    55,
      56,    57,    54,    55,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,    51,
      52,    53,    35,     3,    37,    38,    39,    40,    20,   156,
     155,     3,     4,     5,    26,     7,    28,    35,    10,    11,
       7,    54,    55,    56,    57,     3,    47,    19,    20,     9,
      42,   178,   177,     9,    59,     3,    54,    55,    56,    57,
      52,    33,     8,     8,   191,   190,     9,     9,    47,   196,
      75,     3,    44,    27,   201,   200,    48,    49,    50,   204,
      27,     7,    54,    55,     3,     4,     5,     9,     7,     9,
       7,    10,    11,     7,     7,     7,     7,     3,     3,    22,
      19,    20,    31,     9,    31,     7,    12,    13,    14,    15,
      16,     7,     7,     7,    33,    21,    22,    23,    24,    25,
      26,    27,    28,    31,    30,    44,     8,     3,     8,    48,
      49,    50,     7,     2,     8,    54,    55,     8,     8,    12,
      13,    14,    15,    16,    17,    51,    52,    53,    21,     6,
      32,     9,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,     8,    35,    36,    37,    38,    39,    40,    41,
      42,     8,    54,    55,    56,    57,     8,    29,     9,    35,
       3,     6,    54,    55,    56,    57,    32,    11,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,     8,    35,
      36,    37,    38,    39,    40,    41,   107,    24,    54,    55,
      56,    57,    -1,    81,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,     8,    35,    -1,    37,    38,    39,
      40,    41,    -1,    -1,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
       8,    35,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,     8,    35,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,     8,    35,    -1,    -1,    -1,    39,    13,    14,
      15,    16,    54,    55,    56,    57,    21,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,     8,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    62,    64,     0,    12,    13,    14,    15,    16,    17,
      21,    63,    65,    66,    72,    66,     3,    66,    72,     3,
       3,     7,     3,     6,     7,    47,    67,    71,    67,    71,
      66,    73,    10,    11,    19,    20,    54,    55,    68,    69,
      70,    73,     3,    71,     9,    71,     9,     3,     8,     4,
       5,     8,    67,    71,     9,     9,    47,    74,    27,    27,
      71,    66,     3,     9,    22,    23,    24,    25,    26,    27,
      28,    30,    51,    52,    53,    65,    66,    75,    78,    79,
      75,     3,     6,     7,     7,    79,     9,     9,     3,     4,
       5,     7,    10,    11,    19,    20,    33,    44,    48,    49,
      50,    54,    55,    76,    78,     7,     7,     7,     7,     7,
      75,     3,    31,    78,    31,    74,    76,    76,    77,    76,
      22,     7,    76,    76,    76,     7,     7,     7,    76,    76,
       9,    32,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    54,    55,    56,    57,    31,    76,     3,    70,
      76,    76,     9,    47,     8,     8,     7,    77,     8,     8,
       8,     8,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,     8,     6,     8,
       8,     8,    77,     9,    79,    76,     8,    79,    76,     8,
      29,     9,     9,    79,     3,    76,     6,     9,    76,     3,
       8,     6,    79,    76,     8,    79
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    66,    66,    66,    66,    66,    67,    67,    67,    67,
      68,    68,    69,    69,    69,    70,    70,    71,    71,    71,
      72,    72,    73,    73,    74,    74,    75,    75,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    77,
      77,    77,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     0,     2,     4,     5,     5,
       6,     1,     1,     1,     1,     1,     3,     2,     2,     3,
       1,     1,     0,     1,     1,     1,     1,     0,     4,     3,
       8,     8,     0,     3,     0,     4,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     4,     3,     3,     3,     0,
       1,     3,     0,     2,     1,     3,    11,    13,     5,     7,
       5,     7,     2,     2,     3,     5,     4,     4,     4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 131 "myanalyzer.y" /* yacc.c:1646  */
    {
                            if( yyerror_count==0 ) {
                                puts(c_prologue);
                                printf("%s %s", (yyvsp[-1].str), (yyvsp[0].str));
                                printf("\n/*Your program is correct*/\n");
                            }
                          }
#line 1521 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 140 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str));}
#line 1527 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 141 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1533 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 144 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1539 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 145 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1545 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 148 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s;\n", (yyvsp[-3].str), (yyvsp[-2].str), (yyvsp[-1].str)); }
#line 1551 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 149 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s %s;\n", (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str), (yyvsp[-1].str)); }
#line 1557 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 150 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("static %s %s %s ;\n", (yyvsp[-3].str), (yyvsp[-2].str), (yyvsp[-1].str)); }
#line 1563 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 151 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("static %s %s %s %s\n", (yyvsp[-4].str), (yyvsp[-3].str), (yyvsp[-2].str), (yyvsp[-1].str)); }
#line 1569 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 154 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("int"); }
#line 1575 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 155 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("int"); }
#line 1581 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 156 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("char"); }
#line 1587 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 157 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("double"); }
#line 1593 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 158 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("char *"); }
#line 1599 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 161 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("= %s %s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1605 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 162 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("= %s", (yyvsp[0].str)); }
#line 1611 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 163 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("= %s", (yyvsp[0].str)); }
#line 1617 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 164 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("= %s%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1623 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 168 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("1"); }
#line 1629 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 169 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("0"); }
#line 1635 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 172 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(""); }
#line 1641 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 173 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("+"); }
#line 1647 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 174 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("-"); }
#line 1653 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 177 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1659 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 178 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1665 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 181 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(""); }
#line 1671 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 182 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(", %s %s %s", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1677 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 183 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(", %s  %s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1683 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 187 "myanalyzer.y" /* yacc.c:1646  */
    {
           (yyval.str) = template("%s %s(%s){ \n %s} \n", (yyvsp[-7].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str)); }
#line 1690 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 189 "myanalyzer.y" /* yacc.c:1646  */
    {
           (yyval.str) = template("void %s(%s){ \n %s} \n", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str)); }
#line 1697 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 193 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(""); }
#line 1703 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 194 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1709 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 197 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(""); }
#line 1715 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 198 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(", %s %s %s", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1721 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 201 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1727 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 202 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1733 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 205 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1739 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 206 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1745 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 207 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1751 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 208 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1757 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 209 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1763 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 210 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1769 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 211 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("not %s", (yyvsp[0].str)); }
#line 1775 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 212 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("!%s", (yyvsp[0].str)); }
#line 1781 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 213 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("+%s", (yyvsp[0].str)); }
#line 1787 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 214 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("-%s", (yyvsp[0].str)); }
#line 1793 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 215 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s*%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1799 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 216 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s/%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1805 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 217 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %% %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1811 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 218 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s+%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1817 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 219 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s-%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1823 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 220 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s==%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1829 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 221 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s != %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1835 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 222 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s<%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1841 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 223 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s>%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1847 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 224 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s<=%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1853 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 225 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s>=%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1859 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 226 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s and %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1865 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 227 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s && %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1871 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 228 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s or %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1877 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 229 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s || %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1883 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 230 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1889 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 231 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 1895 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 232 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 1901 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 233 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("readString()");}
#line 1907 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 234 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("readInteger()"); }
#line 1913 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 235 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("readReal()");}
#line 1919 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 241 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(""); }
#line 1925 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 242 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1931 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 243 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s, %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1937 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 247 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(""); }
#line 1943 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 248 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1949 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 251 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(";\n"); }
#line 1955 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 252 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[-1].str)); }
#line 1961 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 253 "myanalyzer.y" /* yacc.c:1646  */
    {
            (yyval.str) = template("for(%s= %s; %s= %s){\n\t%s}", (yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-2].str));
           }
#line 1969 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 257 "myanalyzer.y" /* yacc.c:1646  */
    {
            (yyval.str) = template("for(%s= %s; %s; %s= %s){\n\t%s}", (yyvsp[-10].str), (yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-2].str),  (yyvsp[0].str));
           }
#line 1977 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 260 "myanalyzer.y" /* yacc.c:1646  */
    {(yyval.str) = template("while(%s){\n%s}", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1983 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 261 "myanalyzer.y" /* yacc.c:1646  */
    {
            (yyval.str) = template("do {\n%s}while(%)}", (yyvsp[-5].str), (yyvsp[-2].str));}
#line 1990 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 263 "myanalyzer.y" /* yacc.c:1646  */
    {
            (yyval.str) = template("if(%s){\n\t%s}\n", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1997 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 266 "myanalyzer.y" /* yacc.c:1646  */
    {
            (yyval.str) = template("if(%s){\n\t%s} \nelse{\t%s}\n", (yyvsp[-4].str), (yyvsp[-2].str),(yyvsp[0].str)); }
#line 2004 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 269 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s;\n", (yyvsp[-1].str)); }
#line 2010 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 270 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s;\n", (yyvsp[-1].str)); }
#line 2016 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 271 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("return %s;\n", (yyvsp[-1].str)); }
#line 2022 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 272 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s(%s);\n", (yyvsp[-4].str), (yyvsp[-2].str)); }
#line 2028 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 273 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s = %s;\n", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 2034 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 274 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("writeString(%s)", (yyvsp[-1].str));}
#line 2040 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 275 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("writeInteger(%s)", (yyvsp[-1].str));}
#line 2046 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 276 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("writeReal(%s)", (yyvsp[-1].str));}
#line 2052 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;


#line 2056 "myanalyzer.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  return yyresult;
}
#line 281 "myanalyzer.y" /* yacc.c:1906  */

int main ()
{
  if ( yyparse() == 0)
     printf("\n//Accepted!\n");
  else
     printf("\n//Rejected!\n");
}