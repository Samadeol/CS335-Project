/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

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

#include <bits/stdc++.h>
using namespace std;
int yylex();

extern int yylex();
extern int yylineno;
#define YYDEBUG 1

void yyerror(const char* error){
    fprintf (stderr, "%s | %d\n",s,yylineno);
    return 0;
}

#line 85 "parser.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    AMPERSAND = 258,
    AMPERSAND_AMPERSAND = 259,
    AMPERSAND_EQUALS = 260,
    ARROW_RIGHT = 261,
    ASSERT = 262,
    BAR = 263,
    BAR_BAR = 264,
    BAR_EQUALS = 265,
    BOOLEAN_LITERAL = 266,
    BOOLEAN_TYPE = 267,
    BREAK = 268,
    CATCH = 269,
    CHARACTER_LITERAL = 270,
    CLASS = 271,
    COLON = 272,
    COMMA = 273,
    CONTINUE = 274,
    DOT = 275,
    DOUBLE_COLON = 276,
    ELSE = 277,
    EQUALS = 278,
    EQUALS_EQUALS = 279,
    EXCLAIM = 280,
    EXCLAIM_EQUALS = 281,
    EXTENDS = 282,
    FINAL = 283,
    FINALLY = 284,
    FLOATINGPOINT_LITERAL = 285,
    FLOAT_POINT_TYPE = 286,
    FOR = 287,
    GREATER_THAN = 288,
    GREATER_THAN_EQUALS = 289,
    GREATER_THAN_GREATER_THAN = 290,
    GREATER_THAN_GREATER_THAN_EQUALS = 291,
    GREATER_THAN_GREATER_THAN_GREATER_THAN = 292,
    GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS = 293,
    IDENTIFIER = 294,
    IF = 295,
    IMPLEMENTS = 296,
    IMPORT = 297,
    INTEGER_LITERAL = 298,
    INTEGRAL_TYPE = 299,
    INTERFACE = 300,
    LEFT_CURLY_BRACE = 301,
    LEFT_PARANTHESIS = 302,
    LEFT_SQUARE_BRACE = 303,
    LESS_THAN = 304,
    LESS_THAN_EQUALS = 305,
    LESS_THAN_LESS_THAN = 306,
    LESS_THAN_LESS_THAN_EQUALS = 307,
    MINUS = 308,
    MINUS_EQUALS = 309,
    MINUS_MINUS = 310,
    NEW = 311,
    NULL_LITERAL = 312,
    PERCENT = 313,
    PERCENT_EQUALS = 314,
    PERMITS = 315,
    PLUS = 316,
    PLUS_EQUALS = 317,
    PLUS_PLUS = 318,
    POWER = 319,
    POWER_EQUALS = 320,
    PRIVATE = 321,
    PUBLIC = 322,
    QUESTION = 323,
    RETURN = 324,
    RIGHT_CURLY_BRACE = 325,
    RIGHT_PARANTHESIS = 326,
    RIGHT_SQUARE_BRACE = 327,
    SEMI_COLON = 328,
    SLASH = 329,
    SLASH_EQUALS = 330,
    STAR = 331,
    STAR_EQUALS = 332,
    STATIC = 333,
    STRING_LITERAL = 334,
    SUPER = 335,
    SYNCHRONIZED = 336,
    TEXTBLOCK = 337,
    THIS = 338,
    THROW = 339,
    THROWS = 340,
    TILDA = 341,
    TRY = 342,
    VAR = 343,
    VOID = 344,
    WHILE = 345,
    YIELD = 346
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "parser.y"

    char[1000] str;

#line 233 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYLAST   5464

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  129
/* YYNRULES -- Number of rules.  */
#define YYNRULES  467
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  887

#define YYUNDEFTOK  2
#define YYMAXUTOK   346


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    30,    30,    32,    33,    34,    35,    39,    40,    44,
      45,    46,    47,    51,    55,    59,    63,    67,    68,    72,
      73,    77,    78,    82,    83,    87,    88,    92,    93,    97,
      98,    99,   100,   104,   105,   109,   113,   114,   118,   122,
     123,   127,   128,   132,   133,   134,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   175,   176,
     180,   181,   185,   186,   187,   188,   192,   193,   194,   195,
     199,   203,   204,   205,   209,   210,   214,   219,   220,   224,
     225,   229,   230,   234,   235,   236,   240,   241,   242,   248,
     249,   250,   251,   252,   253,   254,   255,   259,   260,   261,
     262,   263,   264,   265,   266,   270,   271,   276,   277,   283,
     284,   285,   286,   287,   288,   289,   290,   294,   295,   299,
     300,   304,   305,   309,   310,   311,   312,   316,   317,   321,
     325,   326,   330,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   349,   350,   351,   352,   356,
     357,   358,   359,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   378,   379,   383,   384,   385,
     386,   387,   388,   389,   390,   394,   395,   396,   397,   401,
     402,   406,   407,   411,   412,   416,   417,   418,   419,   420,
     424,   425,   426,   427,   428,   429,   433,   434,   435,   436,
     437,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   455,   459,   463,   467,   471,   472,   473,   474,
     475,   476,   477,   480,   484,   488,   492,   493,   497,   501,
     505,   506,   510,   511,   515,   516,   517,   518,   519,   520,
     521,   522,   526,   527,   528,   529,   530,   531,   532,   533,
     537,   538,   542,   546,   547,   551,   555,   559,   560,   564,
     568,   569,   573,   574,   578,   582,   586,   587,   588,   592,
     593,   597,   601,   602,   606,   607,   608,   609,   610,   611,
     612,   613,   614,   615,   619,   620,   621,   622,   623,   624,
     625,   629,   630,   631,   632,   633,   637,   638,   639,   643,
     644,   645,   646,   647,   648,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   678,   679,   680,   684,   685,   686,   687,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   725,   726,   727,   728,
     729,   730,   734,   735,   739,   740,   744,   745,   746,   747,
     748,   749,   753,   754,   758,   762,   763,   764,   768,   769,
     770,   771,   772,   773,   774,   775,   776,   777,   778,   779,
     783,   784,   785,   789,   790,   794,   795,   799,   800,   804,
     805,   809,   810,   814,   815,   816,   820,   821,   822,   823,
     824,   828,   829,   830,   831,   835,   836,   837,   841,   842,
     843,   844,   848,   849,   850,   851,   852,   856,   860,   864,
     865,   866,   870,   871,   872,   873,   877,   881
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPERSAND", "AMPERSAND_AMPERSAND",
  "AMPERSAND_EQUALS", "ARROW_RIGHT", "ASSERT", "BAR", "BAR_BAR",
  "BAR_EQUALS", "BOOLEAN_LITERAL", "BOOLEAN_TYPE", "BREAK", "CATCH",
  "CHARACTER_LITERAL", "CLASS", "COLON", "COMMA", "CONTINUE", "DOT",
  "DOUBLE_COLON", "ELSE", "EQUALS", "EQUALS_EQUALS", "EXCLAIM",
  "EXCLAIM_EQUALS", "EXTENDS", "FINAL", "FINALLY", "FLOATINGPOINT_LITERAL",
  "FLOAT_POINT_TYPE", "FOR", "GREATER_THAN", "GREATER_THAN_EQUALS",
  "GREATER_THAN_GREATER_THAN", "GREATER_THAN_GREATER_THAN_EQUALS",
  "GREATER_THAN_GREATER_THAN_GREATER_THAN",
  "GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS", "IDENTIFIER", "IF",
  "IMPLEMENTS", "IMPORT", "INTEGER_LITERAL", "INTEGRAL_TYPE", "INTERFACE",
  "LEFT_CURLY_BRACE", "LEFT_PARANTHESIS", "LEFT_SQUARE_BRACE", "LESS_THAN",
  "LESS_THAN_EQUALS", "LESS_THAN_LESS_THAN", "LESS_THAN_LESS_THAN_EQUALS",
  "MINUS", "MINUS_EQUALS", "MINUS_MINUS", "NEW", "NULL_LITERAL", "PERCENT",
  "PERCENT_EQUALS", "PERMITS", "PLUS", "PLUS_EQUALS", "PLUS_PLUS", "POWER",
  "POWER_EQUALS", "PRIVATE", "PUBLIC", "QUESTION", "RETURN",
  "RIGHT_CURLY_BRACE", "RIGHT_PARANTHESIS", "RIGHT_SQUARE_BRACE",
  "SEMI_COLON", "SLASH", "SLASH_EQUALS", "STAR", "STAR_EQUALS", "STATIC",
  "STRING_LITERAL", "SUPER", "SYNCHRONIZED", "TEXTBLOCK", "THIS", "THROW",
  "THROWS", "TILDA", "TRY", "VAR", "VOID", "WHILE", "YIELD", "$accept",
  "input", "CompiledStuff", "ImportDeclarations", "ImportDeclaration",
  "SingleTypeImportDeclaration", "TypeImportOnDemandDeclaration",
  "SingleStaticImportDeclaration", "StaticImportOnDemandDeclaration",
  "TypeDeclarations", "TypeDeclaration", "Type", "PrimitiveType",
  "NumericType", "ReferenceType", "ClassType", "DotIdentifiers",
  "ArrayType", "Dims", "TypeArguments", "TypeArgumentList", "TypeArgument",
  "Wildcard", "ClassDeclaration", "ClassModifiers", "ClassModifier",
  "TypeParameterList", "TypeParameters", "ClassExtends", "TypeBound",
  "Additional_Bound", "ClassImplements", "ClassTypes", "ClassBody",
  "ClassBodyDeclarations", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "VariableDeclaratorList",
  "VariableInitializer", "MethodDeclaration", "MethodHeader",
  "MethodDeclarator", "ReceiverParameter", "FormalParameterList",
  "FormalParameter", "VariableModifiers", "Throws", "MethodBody",
  "StaticInitializer", "ConstructorDeclaration", "Declarator",
  "ConstructorBody", "ExplicitConstructorInvocation", "Expressions",
  "InterfaceDeclaration", "ArrayInitializer", "VariableInitializerList",
  "Block", "BlockStatements", "BlockStatement", "Statement",
  "StatementNoShortIf", "StatementWithoutTrailingSubstatement",
  "EmptyStatement", "LabeledStatement", "LabeledStatementNoShortIf",
  "ExpressionStatement", "StatementExpression", "IfThenStatement",
  "IfThenElseStatement", "IfThenElseStatementNoShortIf", "AssertStatement",
  "WhileStatement", "WhileStatementNoShortIf", "ForStatement",
  "ForStatementNoShortIf", "BasicForStatement",
  "BasicForStatementNoShortIf", "ForInit", "ForUpdate",
  "StatementExpressionList", "EnhancedForStatement",
  "EnhancedForStatementNoShortIf", "BreakStatement", "YieldStatement",
  "ContinueStatement", "ReturnStatement", "ThrowStatement",
  "SynchronizedStatement", "TryStatement", "Catches", "CatchClause",
  "Primary", "PrimaryNoNewArray", "Literal", "ClassLiteral",
  "ClassInstanceCreationExpression",
  "UnqualifiedClassInstanceCreationExpression", "FieldAccess",
  "ArrayAccess", "MethodInvocation", "MethodReference",
  "ArrayCreationExpression", "DimExprs", "Expression", "LambdaExpression",
  "AssignmentExpression", "Assignment", "LeftHandSide",
  "AssignmentOperator", "ConditionalExpression", "ConditionalOrExpression",
  "ConditionalAndExpression", "InclusiveOrExpression",
  "ExclusiveOrExpression", "AndExpression", "EqualityExpression",
  "RelationalExpression", "ShiftExpression", "AdditiveExpression",
  "MultiplicativeExpression", "UnaryExpression", "PreIncrementExpression",
  "PreDecrementExpression", "UnaryExpressionNotPlusMinus",
  "PostfixExpression", "PostIncrementExpression",
  "PostDecrementExpression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346
};
# endif

#define YYPACT_NINF (-649)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-466)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     432,    67,   210,   116,  -649,  -649,    35,  -649,   432,  -649,
    -649,  -649,  -649,  -649,   428,  -649,  -649,   437,  -649,  -649,
     408,  -649,   182,    12,   532,  -649,  -649,   428,  -649,   188,
     224,  -649,   182,   182,   896,   228,   182,   509,   512,   598,
    -649,   307,    76,  -649,   550,   325,  -649,   483,   532,   355,
     339,    88,  -649,  -649,   360,  -649,  -649,  -649,   419,   448,
     255,  -649,  -649,  -649,   355,  -649,   269,    22,  1336,  -649,
    -649,  -649,  -649,   232,  -649,  -649,   323,   587,    -4,   182,
     538,   606,  -649,   182,   627,  -649,   182,  -649,   203,  -649,
     403,   325,  -649,  -649,   182,   511,   556,   630,  -649,   550,
     325,  -649,   478,   570,   262,  -649,   182,   155,  2261,  -649,
     360,   590,   535,   167,   600,   675,   590,   528,    22,   232,
     323,   448,   528,   323,  -649,  -649,  -649,  -649,  -649,  2053,
     713,   693,  -649,   703,   721,  -649,   140,   764,   354,  -649,
      -4,   182,   650,  -649,   182,  -649,    -4,   182,  -649,    -4,
     701,   716,  -649,  -649,    -4,   182,   586,   661,  -649,   182,
     668,  -649,   182,  -649,   325,  -649,  -649,   722,   124,   535,
     748,   400,  -649,  -649,   706,  -649,  -649,   398,   792,   109,
    -649,   611,  4913,  -649,    -3,  -649,   387,  -649,   765,    47,
     766,  -649,  4913,  4973,   440,  -649,  4973,  3129,  -649,  -649,
    -649,   390,   767,  -649,  -649,  4913,   419,   793,   797,   771,
    4913,   382,   444,   798,  1896,   100,  -649,  2368,  -649,  -649,
    -649,  -649,  -649,  -649,   747,  -649,  -649,  -649,  -649,  -649,
    -649,  -649,  -649,  -649,  -649,  -649,  -649,  -649,  -649,   699,
    4913,  -649,  -649,    13,  -649,  -649,  -649,    29,  -649,  -649,
    -649,   890,  -649,  -649,   505,   614,   732,  -649,   675,   789,
    3189,  -649,   136,    15,  -649,   757,  -649,   323,  -649,   693,
    -649,   590,   590,   693,  -649,  -649,   544,   784,  2874,    77,
    2457,  2542,   182,   816,  -649,   826,  -649,   819,  -649,   182,
     856,  -649,   585,  -649,    -4,   182,  -649,    -4,  -649,    -4,
    -649,  -649,  -649,  -649,    -4,   182,   670,  -649,   182,  -649,
      -4,   182,  -649,    -4,  -649,  -649,   481,   481,   262,  -649,
     816,   498,  -649,   384,   669,  -649,  -649,   711,  4973,   118,
    3067,  4973,  4973,  4973,  -649,  -649,    10,  -649,  -649,  -649,
    -649,     9,   859,   852,   800,   862,   775,   604,   651,   737,
     575,  -649,  -649,  -649,  -649,   505,  -649,  -649,   794,  -649,
     795,  -649,  4994,  2712,  3249,  4913,   799,   822,  2947,  -649,
    -649,  -649,   818,   506,   431,   182,  -649,  -649,   802,   568,
     676,  4913,   805,   597,    32,   855,  4913,   806,    50,   857,
     515,   517,   189,   522,  -649,   793,   382,  -649,  -649,  -649,
     622,   678,  -649,  -649,  -649,  -649,  -649,  -649,  -649,  -649,
    -649,  -649,  -649,  -649,  -649,  4913,  -649,  -649,   316,  3007,
     130,  -649,  -649,  3189,  -649,   138,   838,  -649,  -649,   693,
    -649,  -649,  -649,  -649,  -649,  3311,  3373,   227,   833,   834,
    -649,  2627,  -649,   355,   182,  -649,   826,   355,   182,  -649,
    -649,    -4,  -649,  -649,  -649,    -4,   182,  -649,    -4,  -649,
      -4,  -649,   748,   748,  -649,   808,   675,  -649,   731,   180,
    -649,   535,  -649,  3435,   876,   206,  -649,  -649,  -649,  4913,
    -649,  4973,  4913,  4973,  4973,  4973,  4973,  4973,  4973,  4973,
    4973,  4973,  4973,  4973,  4973,  4973,  4973,  4973,  4973,  4973,
    4973,  -649,  -649,  3495,   868,  -649,   815,   874,  -649,  -649,
     214,  -649,   836,  -649,  3555,   759,   863,   759,   863,  3617,
     334,   867,   436,  -649,   869,   871,  -649,   878,   844,  -649,
     872,   419,   616,  -649,  -649,  -649,   847,  -649,  -649,  -649,
     904,  -649,  -649,   304,  -649,   875,   683,   772,  -649,   882,
    -649,   907,   146,   156,   877,   886,  -649,  -649,   891,  -649,
    3189,   449,   861,  -649,  -649,    19,  -649,   157,   158,  -649,
     473,  -649,   865,   221,   866,   226,   554,   153,  3679,  3741,
    -649,   355,  -649,   355,  -649,  -649,    -4,  -649,  -649,  -649,
     535,  -649,   675,  -649,  -649,  3435,   923,   880,   859,   915,
     852,   800,   862,   775,   604,   604,   651,   651,   651,   651,
     737,   737,   737,   575,   575,  -649,  -649,  -649,  5075,   885,
    4913,  3803,  5375,  4913,  -649,  2793,   892,  -649,  3555,   675,
    -649,   675,   325,   240,   887,  3863,  3925,   370,   894,  3987,
     901,  -649,   419,   669,  -649,   419,  -649,  2712,  -649,  -649,
    -649,  4049,   431,   698,   709,   921,  -649,  -649,  -649,  4111,
     924,  -649,  -649,  3189,  -649,  1459,  -649,  -649,  -649,   163,
    3189,   485,  -649,   897,  -649,   899,  4173,   926,   902,   244,
     903,   253,  -649,  -649,  -649,  3435,  -649,  4913,  2712,   909,
     874,  5129,   910,  5150,   911,  -649,  -649,   939,   441,   940,
     941,  -649,   967,   968,  -649,  -649,  -649,  -649,  -649,  -649,
    -649,   919,  -649,   325,  4235,   325,   266,   325,   273,   945,
    4297,  -649,   286,  4359,  -649,   927,  -649,  -649,  -649,   303,
     867,   947,   957,  -649,   960,  4421,  -649,   305,  4483,  -649,
    -649,  -649,  -649,  -649,  3189,  -649,  -649,   928,   308,  4545,
    -649,   929,  -649,   930,  -649,  -649,  -649,  -649,  -649,  2712,
    2712,   935,  2712,  2712,   938,  5204,  5054,  2793,  4913,  4913,
    2712,  -649,  -649,   325,   315,  -649,   325,  -649,   325,  4607,
     325,   324,  -649,  -649,   333,   419,  -649,  4669,   953,  -649,
    -649,   335,  -649,  -649,   345,  -649,  -649,   943,   946,   371,
    -649,  -649,  -649,  -649,  2712,  -649,  -649,  2712,  2712,   942,
    4731,   995,   949,  -649,   955,   961,  -649,  -649,   325,  -649,
    -649,   325,   372,  -649,   325,  -649,  -649,  -649,   376,  4791,
    -649,  -649,  -649,  -649,   958,  -649,  -649,  -649,  2712,  5225,
     962,  4913,  4853,  2793,  2793,  -649,  -649,   325,  -649,  -649,
    -649,   379,  -649,  -649,  2793,   963,  5279,   965,  5300,   964,
    1018,  -649,  -649,  -649,  -649,  2793,  2793,   970,  2793,  2793,
     971,  5354,  2793,  -649,  -649,  2793,  -649,  -649,  2793,  2793,
     972,  -649,  -649,  -649,  -649,  2793,  -649
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     0,     0,     0,    81,    80,     0,     2,     5,     8,
       9,    10,    11,    12,     4,    18,    19,     0,    79,    20,
       0,    34,     0,     0,     0,     1,     7,     6,    17,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
      46,     0,     0,    13,     0,     0,   187,     0,     0,    90,
      29,     0,    24,    26,    34,    25,    99,   108,     0,     0,
       0,    21,    23,    22,    27,    28,     0,     0,     0,   102,
     103,   106,   107,     0,   104,   105,     0,     0,     0,     0,
       0,     0,    54,     0,     0,    50,     0,    48,     0,    33,
       0,     0,   189,   188,     0,     0,     0,     0,    62,     0,
       0,   191,     0,     0,     0,    30,     0,     0,     0,   152,
       0,   129,   137,     0,     0,    35,   131,     0,     0,     0,
       0,     0,     0,     0,   100,   101,   151,   127,   150,     0,
       0,     0,   159,     0,     0,    82,     0,    92,     0,    47,
       0,     0,     0,    58,     0,    56,     0,     0,    52,     0,
      33,     0,    14,   190,     0,     0,     0,     0,    70,     0,
       0,    66,     0,    64,     0,   193,   192,    31,    45,     0,
      41,     0,    40,    42,     0,   148,   165,     0,     0,     0,
     142,     0,     0,   306,     0,   307,     0,   305,     0,    34,
       0,   304,     0,     0,     0,   310,     0,     0,   201,   232,
     308,     0,     0,   309,   296,     0,     0,     0,     0,     0,
       0,     0,    21,    22,   354,     0,   221,     0,   204,   209,
     210,   222,   211,   223,     0,   212,   213,   224,   214,   215,
     250,   251,   225,   231,   226,   227,   229,   228,   230,   462,
     292,   294,   295,   299,   316,   300,   301,   302,   303,   293,
     236,     0,   237,   238,     0,   239,   240,   130,   138,     0,
       0,   109,     0,     0,    37,     0,   132,     0,   128,     0,
     163,   133,   135,     0,   153,   169,     0,   296,   354,     0,
       0,     0,     0,   149,   160,    88,    34,     0,    83,     0,
      93,    84,     0,    55,     0,     0,    60,     0,    51,     0,
      49,    15,    16,    63,     0,     0,     0,    74,     0,    72,
       0,     0,    68,     0,   194,    32,     0,     0,     0,    38,
      96,   143,   139,     0,     0,   166,   147,     0,     0,    34,
       0,     0,     0,     0,   299,   302,     0,   394,   395,   403,
     402,   420,   423,   425,   427,   429,   431,   433,   436,   441,
     445,   448,   452,   453,   456,   459,   464,   465,     0,   277,
       0,   280,     0,     0,     0,     0,     0,    34,   354,   300,
     301,   458,     0,     0,    29,     0,   457,   282,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   355,     0,     0,   202,   203,   235,
       0,     0,   357,   417,   419,   408,   415,   416,   414,   413,
     411,   412,   418,   410,   409,     0,   467,   466,   121,     0,
       0,   126,   125,     0,   111,     0,     0,   113,    36,     0,
     157,   164,   134,   136,   154,     0,     0,     0,     0,     0,
     171,     0,   170,    98,     0,    89,    86,    95,     0,    85,
      59,     0,    57,    53,    71,     0,     0,    76,     0,    67,
       0,    65,    43,    44,    39,     0,   145,   167,     0,     0,
     141,   144,   461,     0,     0,     0,   455,   454,   460,     0,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   278,   281,     0,   271,   274,     0,   270,   233,   358,
       0,   186,     0,   298,     0,     0,   386,     0,   388,     0,
       0,    30,     0,   283,   352,     0,   382,     0,     0,   284,
       0,     0,   286,   290,   206,   315,     0,   279,   205,   313,
       0,   378,   380,     0,   311,    33,     0,     0,   297,     0,
     317,     0,     0,     0,   351,     0,   318,   376,     0,   404,
       0,   123,     0,   195,   200,     0,   110,     0,     0,   115,
     117,   158,     0,     0,     0,     0,     0,     0,     0,     0,
     172,    97,    87,    94,    61,    75,     0,    73,    69,   140,
     143,   168,   146,   398,   401,     0,     0,     0,   424,     0,
     426,   428,   430,   432,   434,   435,   438,   440,   437,   439,
     443,   444,   442,   447,   446,   451,   450,   449,     0,     0,
       0,     0,     0,     0,   359,     0,     0,   390,     0,   387,
     391,   389,   319,     0,     0,     0,     0,     0,     0,     0,
       0,   383,     0,     0,   287,     0,   289,     0,   314,   379,
     381,     0,     0,     0,     0,     0,   312,   208,   207,     0,
       0,   377,   122,     0,   196,     0,   197,   114,   112,     0,
       0,   119,   177,     0,   173,     0,     0,     0,     0,     0,
       0,     0,    77,   397,   400,     0,   247,     0,     0,     0,
     272,     0,     0,     0,     0,   273,   185,     0,    34,     0,
       0,   243,     0,   210,   217,   218,   219,   220,   252,   253,
     393,     0,   320,   321,     0,   339,     0,   327,     0,     0,
       0,   368,     0,     0,   285,     0,   288,   248,   360,     0,
       0,   353,     0,   384,     0,     0,   364,     0,     0,   124,
     198,   199,   116,   118,     0,   178,   174,     0,     0,     0,
     179,     0,   175,     0,   396,   399,   422,   421,   254,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   392,   322,   323,     0,   340,   341,   328,   329,     0,
     347,     0,   369,   370,     0,     0,   361,     0,     0,   385,
     362,     0,   365,   366,     0,   120,   181,     0,     0,     0,
     180,   176,   255,   256,     0,   275,   258,     0,     0,     0,
       0,   271,     0,   234,     0,     0,   244,   324,   325,   342,
     330,   331,     0,   348,   349,   371,   291,   372,     0,     0,
     363,   367,   182,   183,     0,   257,   259,   260,     0,     0,
       0,     0,     0,     0,     0,   326,   332,   333,   350,   373,
     374,     0,   184,   261,     0,     0,     0,     0,     0,     0,
       0,   249,   334,   375,   262,     0,     0,     0,     0,     0,
       0,     0,     0,   263,   264,     0,   276,   266,     0,     0,
       0,   245,   265,   267,   268,     0,   269
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -649,  -649,  -649,  -649,  1036,  -649,  -649,  -649,  -649,  1037,
     665,   -28,    31,  -649,    75,    63,  1719,  -649,   917,   -60,
    -649,   728,  -649,  -649,    14,    27,   443,   913,   217,  -276,
    -649,    66,   873,   -24,  -649,   980,  -649,  -649,  -200,  -415,
    -649,   989,   -30,  -649,  -271,  -321,   -80,   -65,   948,  -649,
    -649,    53,  -101,  -649,   842,  -649,   291,  -649,   -56,  -117,
    -207,  -338,  -244,   184,  -649,  -649,  -649,  -649,  -252,  -649,
    -649,  -649,  -649,  -649,  -649,  -649,  -649,  -649,  -649,   292,
    -648,  -361,  -649,  -649,  -649,  -649,  -649,  -649,  -649,  -649,
    -649,  -649,   525,  -649,  -649,  -649,  -649,  -103,   -75,   352,
     628,    18,  -649,  -649,   687,  1625,   374,  -649,   139,  -649,
    -649,   377,  -649,   584,   583,   588,   589,   582,   160,   254,
     309,   202,  -115,   332,   453,  -649,   574,   804,   925
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,   169,   212,    62,   213,    64,   214,    65,   115,   105,
     171,   172,   173,    16,    17,    18,    67,   136,   137,   138,
     290,    39,   283,    40,    68,    69,    70,    71,   263,   420,
      72,    73,   116,   178,   179,   180,   181,   131,   127,    74,
      75,   112,   132,   280,   510,    19,   421,   565,   216,   217,
     218,   219,   702,   220,   221,   222,   704,   223,   224,   225,
     226,   705,   227,   228,   706,   229,   707,   230,   708,   506,
     689,   690,   231,   709,   232,   233,   234,   235,   236,   237,
     238,   532,   533,   239,   240,   241,   242,   334,   244,   245,
     246,   335,   248,   249,   516,   511,   337,   338,   339,   251,
     415,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,   507,   109,   470,   564,   243,    60,   384,   568,   445,
     398,   388,   281,    82,    85,    87,   103,   128,   481,   270,
      92,    93,   274,    98,   101,   508,   243,   479,   215,   111,
     284,  -242,    42,   426,    52,    25,   358,   665,   117,   122,
      60,   504,    34,   761,    31,   764,   257,  -241,    66,   215,
     426,   266,   469,    53,   139,   269,   143,   145,   273,   475,
     148,    54,   425,   128,   363,    61,    55,   153,   426,   279,
     359,   158,   161,   163,   398,   165,   166,   482,   371,   177,
     211,   376,    66,   480,  -242,    43,  -242,    76,   427,   666,
     122,   271,   272,    31,   364,    49,    51,    61,    61,    61,
    -241,   211,  -241,    81,    84,   534,    20,   315,   102,    63,
     505,   121,    52,    97,   243,    89,   293,   809,   296,   120,
     123,    76,   298,   538,   473,   300,   247,   324,   326,   106,
     303,    53,   307,   309,   375,    61,   312,   215,    61,    21,
     314,    63,    63,    63,    55,   662,   142,   247,   259,    61,
     383,   316,    90,   327,   259,    24,   426,   438,   287,   423,
     439,   157,   160,   441,   426,   364,   430,    52,   431,   174,
     582,   267,   434,   288,   426,   426,   259,   243,   243,   170,
     325,   426,    63,   175,   265,   259,    53,   396,   395,   211,
     260,   855,   655,    63,    21,   552,   553,    49,   324,    55,
     215,   215,   429,   566,   317,   544,   432,   433,   867,   424,
     870,   569,    61,   472,   107,   114,   476,   477,   478,   657,
     567,    21,   306,   880,   324,   372,   176,    47,   545,   658,
     667,   668,   623,   677,   398,   247,   742,    38,   104,   623,
     261,    45,   150,   544,   623,   546,    61,   250,   739,    21,
     741,   591,   211,   211,    80,   743,    63,   373,   623,   243,
     243,    91,   623,    48,    96,   100,   545,    77,   250,   547,
     450,   623,   548,   452,    52,   453,   104,   596,   108,   151,
     454,    52,   457,   546,   623,   624,   459,   701,    22,   461,
      63,   623,   673,    53,   113,   468,   468,   675,   247,   247,
      53,    21,   468,   114,   623,   126,    55,   576,    54,   727,
     548,   713,   156,    55,   521,   751,   164,   550,    35,   525,
     527,   623,   725,   623,   753,   556,   623,    88,   571,   795,
     168,   543,   549,   623,   468,     4,     5,   776,   243,   560,
     555,   558,   623,   649,   778,   443,    52,    61,    61,    61,
     758,   623,   447,   623,    61,    61,   250,   782,    59,   103,
     650,   215,   550,   623,   114,    53,   505,   634,   669,   129,
     695,    34,   133,    21,   786,   102,   792,   577,    55,   797,
     247,   247,    52,   615,   616,   617,   818,   291,   104,   623,
     623,   462,   463,   170,   623,   824,    52,   623,    63,    63,
     259,    53,   168,   719,   825,   507,   830,   107,   130,    21,
     379,   380,   175,   211,    55,    53,   831,   593,   318,   250,
     250,   802,   803,    21,   805,   806,   360,   584,    55,   508,
     114,   585,   816,   319,   587,    32,   588,   321,   168,   505,
     252,   505,   834,   847,     1,   811,   114,   849,     1,    33,
     863,   103,    52,    29,    34,   467,   103,    35,   767,   247,
     361,   252,   638,    37,   389,   108,   835,    44,    36,   836,
     837,    53,   663,     3,     2,   644,   152,     3,   519,    21,
     520,   322,    30,   636,    55,   637,   375,   110,   364,   104,
      95,    99,   114,    52,     4,     5,   670,   265,     4,     5,
     853,   250,   250,     4,     5,   701,   727,   581,   744,   118,
      32,   583,    53,   505,   505,   243,   758,   167,   465,   243,
      21,   114,   243,   813,    33,    55,   102,   802,   803,    34,
     805,   806,    35,   265,   816,   540,    32,   835,    32,   683,
     836,   837,   551,    94,   243,   369,   114,   853,   369,   252,
      33,    61,    33,    33,   514,    34,   541,    34,    34,    32,
     416,   253,   682,   265,   379,   380,   104,   110,   417,    79,
     265,   155,    83,   542,   653,   654,   114,    32,    34,    33,
     250,    35,   253,   114,    34,   243,   724,   505,   243,   726,
     243,   435,   730,   732,   734,   170,    34,    33,   141,   860,
     861,   676,    34,   287,   505,   133,   505,   524,   712,    89,
     864,   530,   252,   252,   134,   468,   159,   104,   449,   505,
     135,   873,   874,    52,   876,   877,   531,    33,   881,   754,
     530,   882,    34,   498,   883,   884,   247,   489,   490,   326,
     247,   886,    53,   247,    34,   645,   305,   604,   605,   499,
      21,   500,    34,   491,   492,    55,   243,   243,    86,   243,
     243,   554,   243,   243,   243,   247,   144,   243,    61,  -464,
     253,   104,   264,    34,    61,   130,    34,  -464,   546,    28,
     369,    52,   254,   369,   369,   369,   493,   147,   494,   772,
     162,   775,    28,   777,   252,   252,    34,   175,   613,   614,
      53,   243,   495,   254,   243,   243,   247,    34,    21,   247,
     295,   247,   170,    55,    34,   526,    34,   557,    63,   400,
     401,   308,    21,   265,   282,   104,   102,   104,   311,   826,
     456,   282,   104,   253,   253,   243,   243,   731,   468,   129,
     243,   243,   285,   606,   607,   608,   609,   104,   733,   817,
     471,   243,   819,   243,   820,   243,   823,   250,   104,   114,
     286,   250,   243,   243,   250,   243,   243,   289,   243,   243,
     590,   104,   243,   252,   301,   243,   243,   247,   247,   114,
     247,   247,   243,   247,   247,   247,   250,  -465,   247,   302,
     496,   254,   653,   654,   845,  -465,   -22,   846,   497,   487,
     848,   488,   610,   611,   612,   419,   627,   265,   630,   703,
     323,   259,   362,   365,   381,   253,   253,   385,   386,   391,
     399,   370,   247,   862,   370,   247,   247,   250,   418,   428,
     250,   436,   250,   369,   444,   369,   369,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   369,
     369,   369,   369,   134,   254,   254,   247,   247,   446,   448,
     484,   247,   247,   483,   485,   486,   514,   501,   502,   364,
     513,   535,   247,   539,   247,   523,   247,   570,   529,   537,
     578,   579,   595,   247,   247,   620,   247,   247,   621,   247,
     247,   589,   622,   247,   253,   403,   247,   247,   250,   250,
     404,   250,   250,   247,   250,   250,   250,   625,    52,   250,
     640,   628,   255,   405,   635,   642,   639,   641,   647,   643,
     648,   655,   651,   656,   659,   660,   406,    53,   407,   685,
     661,   664,   687,   255,   714,    54,   254,   254,   672,   674,
      55,   720,   408,   250,   409,    35,   250,   250,   723,   410,
     252,   703,   411,   686,   252,   412,   370,   252,   691,   370,
     370,   370,     4,     5,   710,   413,    56,   414,   735,    57,
     745,   738,   746,   749,    58,   750,   752,   250,   250,   252,
     759,   762,   250,   250,   765,    59,   766,   768,   769,   770,
    -216,   771,   779,   250,   787,   250,   788,   250,   785,   789,
     829,   796,   800,   801,   250,   250,   804,   250,   250,   807,
     250,   250,   841,   838,   250,   254,   832,   250,   250,   833,
     252,   255,   842,   252,   250,   252,   843,   703,   703,   258,
     262,   852,   844,   256,   865,   856,   868,   871,   703,   369,
     872,   875,   878,   885,    26,    27,   464,   320,   125,   703,
     703,   292,   703,   703,   256,   119,   703,   646,   812,   703,
     518,   756,   703,   703,   757,   598,   600,   268,   603,   703,
       0,   253,   601,     0,   602,   253,     0,     0,   253,     0,
       0,     0,     0,     0,   255,   255,     0,     0,     0,     0,
       0,   252,   252,     0,   252,   252,     0,   252,   252,   252,
     253,     0,   252,     0,     0,     0,     0,     0,     0,   370,
       0,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   390,
       0,   393,     0,     0,     0,     0,   252,     0,     0,   252,
     252,   253,   256,     0,   253,     0,   253,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,   255,     0,     0,
     252,   252,     0,     0,     0,   252,   252,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   252,     0,   252,     0,
     252,     0,   254,     0,     0,   393,   254,   252,   252,   254,
     252,   252,     0,   252,   252,   256,   256,   252,     0,     0,
     252,   252,   253,   253,     0,   253,   253,   252,   253,   253,
     253,   254,     0,   253,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   466,     0,
       0,     0,     0,     0,     0,   255,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   253,     0,     0,
     253,   253,   254,     0,     0,   254,     0,   254,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   573,   575,     0,
       0,     0,     0,     0,     0,   393,     0,   256,   256,   515,
     517,   253,   253,     0,     0,     0,   253,   253,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   253,     0,   253,
       0,   253,     0,     0,     0,   370,     0,     0,   253,   253,
       0,   253,   253,     0,   253,   253,     0,     0,   253,     0,
       0,   253,   253,   254,   254,   561,   254,   254,   253,   254,
     254,   254,     0,     0,   254,     0,     0,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   633,     0,     0,     0,     0,   256,    53,     0,     0,
       0,     0,     0,     0,     0,    54,     0,     0,   254,     0,
      55,   254,   254,     0,     0,    35,     0,     0,   592,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     5,     0,     0,   124,     0,     0,    57,
       0,     0,   254,   254,    58,     0,     0,   254,   254,     0,
     679,   681,   255,     0,     0,    59,   255,     0,   254,   255,
     254,     0,   254,   629,     0,   631,     0,     0,     0,   254,
     254,     0,   254,   254,     0,   254,   254,     0,     0,   254,
       0,   255,   254,   254,     0,     0,     0,     0,     0,   254,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     183,    52,     0,     0,   185,     0,     0,   716,   718,     0,
       0,   722,     0,     0,   328,     0,     0,   671,     0,   187,
      53,     0,   255,   729,     0,   255,     0,   255,   329,     0,
       0,   737,   191,    55,     0,   419,   330,   466,     0,     0,
       0,     0,   331,     0,   193,   194,   195,     0,   748,     0,
     332,     0,   196,     0,     0,     0,     0,     0,     0,   740,
       0,     0,     0,     0,     0,     0,     0,     0,   200,   201,
       0,   203,   204,   256,     0,   333,     0,   256,   208,     0,
     256,     0,     0,     0,     0,     0,   774,     0,     0,     0,
       0,     0,   781,   255,   255,   784,   255,   255,     0,   255,
     255,   255,   256,     0,   255,     0,     0,   791,     0,     0,
     794,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   799,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,     0,
       0,   255,   255,   256,     0,     0,   256,     0,   256,     0,
       0,   822,     0,     0,     0,     0,     0,     0,     0,   828,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   255,   255,     0,     0,     0,   255,   255,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,     0,
     255,     0,   255,     0,     0,     0,     0,     0,     0,   255,
     255,   851,   255,   255,     0,   255,   255,     0,     0,   255,
       0,     0,   255,   255,   256,   256,     0,   256,   256,   255,
     256,   256,   256,     0,     0,   256,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,     0,     0,     0,     0,     0,     0,     0,   256,
       0,     0,   256,   256,     0,     0,     0,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    50,    50,     0,    78,     0,     0,     0,     0,
       0,     0,     0,   256,   256,     0,     0,     0,   256,   256,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   256,
       0,   256,     0,   256,     0,    50,    50,    50,     0,     0,
     256,   256,     0,   256,   256,     0,   256,   256,   140,     0,
     256,     0,   146,   256,   256,   149,     0,   336,     0,     0,
     256,     0,     0,   154,     0,     0,     0,   366,     0,     0,
       0,     0,   378,    50,     0,    50,    50,     0,     0,     0,
     382,     0,     0,     0,     0,   387,     0,    50,     0,   394,
       0,     0,     0,     0,     0,     0,     0,     0,   278,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
     294,     0,     0,   297,     0,   402,   299,     0,     0,     0,
       0,     0,     0,     0,   304,     0,     0,     0,   310,     0,
       0,   313,     0,     0,     0,   422,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,   394,     0,     0,     0,   183,    52,     0,
       0,   185,   368,   374,   -29,   368,   392,   -29,     0,     0,
       0,   328,     0,     0,     0,     0,   187,    53,     0,     0,
       0,     0,     0,     0,    50,   329,     0,     0,     0,   191,
      55,     0,     0,   330,   114,   104,     0,     0,     0,   331,
       0,   193,   194,   195,     0,   366,     0,   332,     0,   196,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   200,   201,     0,   203,   204,
       0,     0,   333,     0,     0,   208,     0,     0,     0,     0,
     512,     0,     0,   394,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,   528,     0,    50,     0,
       0,   536,     0,     0,   451,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   455,     0,     0,   458,     0,     0,
     460,     0,     0,     0,     0,    50,    50,    50,     0,     0,
     559,     0,    50,    50,   422,     0,     0,   368,   422,     0,
     368,   368,   368,     0,     0,     0,     0,     0,     0,     0,
     182,     0,     0,     0,   183,    52,   184,     0,   185,     0,
       0,     0,   186,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,   187,    53,   188,     0,     0,     0,     0,
       0,     0,   189,   190,   522,     0,   191,    55,   594,   108,
     192,     0,   104,     0,   597,     0,     0,   599,   193,   194,
     195,     0,     0,     0,     0,     0,   196,     0,     0,     0,
       0,     0,   197,   275,     0,     0,   199,     0,   619,     0,
       0,     0,   200,   276,   202,   203,   277,   205,     0,   626,
     206,   207,   208,   209,   210,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,    50,     0,     0,
       0,     0,     0,     0,     0,   586,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   422,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     368,     0,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     684,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     0,   692,   694,     0,   696,     0,
       0,     0,     0,   711,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   652,     0,     0,   182,     0,
       0,     0,   183,    52,   184,     0,   185,     0,     0,     0,
     186,     0,     0,     0,     0,     0,     0,     0,   422,   175,
     422,   187,    53,   188,     0,   422,     0,     0,     0,     0,
     189,   190,     0,     0,   191,    55,     0,   108,   192,     0,
     755,     0,     0,     0,     0,     0,   193,   194,   195,     0,
       0,     0,     0,     0,   196,     0,     0,     0,     0,     0,
     197,   198,     0,     0,   199,     0,     0,     0,     0,     0,
     200,   201,   202,   203,   204,   205,     0,     0,   206,   207,
     208,   209,   210,     0,     0,     0,    50,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     0,     0,   422,
       0,     0,     0,     0,     0,   182,     0,     0,     0,   183,
      52,   184,     0,   185,     0,     0,     0,   186,     0,     0,
       0,     0,     0,   814,   815,     0,   175,     0,   187,    53,
     188,     0,     0,     0,     0,     0,   368,   189,   190,     0,
       0,   191,    55,     0,   108,   192,     0,     0,     0,     0,
       0,     0,     0,   193,   194,   195,     0,     0,     0,     0,
       0,   196,     0,     0,     0,   840,     0,   197,   397,     0,
       0,   199,     0,     0,     0,     0,     0,   200,   201,   202,
     203,   204,   205,     0,     0,   206,   207,   208,   209,   210,
       0,     0,     0,     0,   182,     0,   857,   859,   183,    52,
     184,     0,   185,     0,     0,     0,   186,     0,     0,     0,
       0,     0,     0,     0,     0,   175,     0,   187,    53,   188,
       0,     0,     0,     0,     0,     0,   189,   190,     0,     0,
     191,    55,     0,   108,   192,     0,     0,     0,     0,     0,
       0,     0,   193,   194,   195,     0,     0,     0,     0,     0,
     196,     0,     0,     0,     0,     0,   197,   440,     0,     0,
     199,     0,     0,     0,     0,     0,   200,   201,   202,   203,
     204,   205,     0,     0,   206,   207,   208,   209,   210,   182,
       0,     0,     0,   183,    52,   184,     0,   185,     0,     0,
       0,   186,     0,     0,     0,     0,     0,     0,     0,     0,
     175,     0,   187,    53,   188,     0,     0,     0,     0,     0,
       0,   189,   190,     0,     0,   191,    55,     0,   108,   192,
       0,     0,     0,     0,     0,     0,     0,   193,   194,   195,
       0,     0,     0,     0,     0,   196,     0,     0,     0,     0,
       0,   197,   442,     0,     0,   199,     0,     0,     0,     0,
       0,   200,   201,   202,   203,   204,   205,     0,     0,   206,
     207,   208,   209,   210,   182,     0,     0,     0,   183,    52,
     184,     0,   185,     0,     0,     0,   186,     0,     0,     0,
       0,     0,     0,     0,     0,   175,     0,   187,    53,   188,
       0,     0,     0,     0,     0,     0,   189,   190,     0,     0,
     191,    55,     0,   108,   192,     0,     0,     0,     0,     0,
       0,     0,   193,   194,   195,     0,     0,     0,     0,     0,
     196,     0,     0,     0,     0,     0,   197,   580,     0,     0,
     199,     0,     0,     0,     0,     0,   200,   201,   202,   203,
     204,   205,     0,     0,   206,   207,   208,   209,   210,   182,
       0,     0,     0,   183,    52,   184,     0,   185,     0,     0,
       0,   186,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   187,    53,   188,     0,     0,     0,     0,     0,
       0,   189,   190,     0,     0,   191,    55,     0,   108,   192,
       0,     0,     0,     0,     0,     0,     0,   193,   194,   195,
       0,     0,     0,     0,     0,   196,     0,     0,     0,     0,
       0,   197,     0,     0,     0,   199,     0,     0,     0,     0,
       0,   200,   201,   202,   203,   204,   205,     0,     0,   206,
     182,   208,   209,   210,   183,    52,   184,     0,   185,     0,
       0,     0,   186,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   187,    53,   697,     0,     0,     0,     0,
       0,     0,   698,   699,     0,     0,   191,    55,     0,   108,
     192,     0,     0,     0,     0,     0,     0,     0,   193,   194,
     195,     0,     0,     0,     0,     0,   196,     0,     0,     0,
       0,     0,   197,     0,     0,     0,   199,     0,     0,     0,
       0,     0,   200,   201,   202,   203,   204,   205,     0,     0,
     206,     0,   208,   700,   210,   183,    52,     0,     0,   185,
       0,     0,   -29,     0,   437,   -29,     0,     0,     0,   328,
       0,     0,     0,     0,   187,    53,     0,     0,     0,     0,
       0,     0,     0,   329,     0,     0,     0,   191,    55,     0,
       0,   330,   114,   104,     0,     0,     0,   331,     0,   193,
     194,   195,     0,     0,     0,   332,     0,   196,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   200,   201,     0,   203,   204,   183,    52,
     333,     0,   185,   208,     0,     0,     0,   392,   -29,     0,
       0,     0,   328,     0,     0,     0,     0,   187,    53,     0,
       0,     0,     0,     0,     0,     0,   329,     0,     0,     0,
     191,    55,     0,     0,   330,   114,   104,     0,     0,     0,
     331,     0,   193,   194,   195,     0,     0,     0,   332,     0,
     196,     0,     0,     0,     0,     0,     0,     0,   183,    52,
       0,     0,   185,     0,     0,   562,   200,   201,     0,   203,
     204,     0,   328,   333,     0,     0,   208,   187,    53,     0,
       0,     0,     0,     0,     0,     0,   329,     0,     0,     0,
     191,    55,     0,   419,   330,     0,     0,     0,     0,     0,
     331,     0,   193,   194,   195,     0,     0,     0,   332,     0,
     196,     0,     0,     0,     0,     0,     0,   563,   183,    52,
       0,     0,   185,     0,     0,     0,   200,   201,     0,   203,
     204,     0,   328,   333,     0,   175,   208,   187,    53,     0,
       0,     0,     0,     0,     0,     0,   329,     0,     0,     0,
     191,    55,     0,     0,   330,     0,     0,     0,     0,     0,
     331,     0,   193,   194,   195,     0,     0,     0,   332,     0,
     196,     0,     0,     0,     0,     0,     0,     0,   474,     0,
     183,    52,     0,     0,   185,     0,   200,   201,     0,   203,
     204,     0,     0,   333,   328,     0,   208,     0,     0,   187,
      53,     0,     0,     0,     0,     0,     0,     0,   329,     0,
       0,     0,   191,    55,     0,     0,   330,     0,     0,     0,
       0,     0,   331,     0,   193,   194,   195,     0,     0,     0,
     332,     0,   196,     0,     0,     0,     0,     0,     0,     0,
     183,    52,   377,     0,   185,     0,     0,     0,   200,   201,
       0,   203,   204,     0,   328,   333,     0,     0,   208,   187,
      53,     0,     0,     0,     0,     0,     0,     0,   329,     0,
       0,     0,   191,    55,     0,   419,   330,     0,     0,     0,
       0,     0,   331,     0,   193,   194,   195,     0,     0,     0,
     332,     0,   196,     0,     0,     0,     0,     0,     0,     0,
     183,    52,     0,     0,   185,     0,     0,     0,   200,   201,
       0,   203,   204,     0,   328,   333,     0,     0,   208,   187,
      53,     0,     0,     0,     0,     0,     0,     0,   329,     0,
       0,     0,   191,    55,     0,     0,   330,     0,     0,     0,
       0,     0,   331,     0,   193,   194,   195,     0,     0,     0,
     332,     0,   196,     0,     0,     0,     0,     0,     0,     0,
     509,     0,   183,    52,     0,     0,   185,     0,   200,   201,
       0,   203,   204,     0,     0,   333,   328,     0,   208,     0,
       0,   187,    53,     0,     0,     0,     0,     0,     0,     0,
     329,     0,     0,     0,   191,    55,     0,     0,   330,     0,
       0,     0,     0,     0,   331,     0,   193,   194,   195,     0,
       0,     0,   332,     0,   196,     0,     0,     0,     0,     0,
       0,     0,   572,     0,   183,    52,     0,     0,   185,     0,
     200,   201,     0,   203,   204,     0,     0,   333,   328,     0,
     208,     0,     0,   187,    53,     0,     0,     0,     0,     0,
       0,     0,   329,     0,     0,     0,   191,    55,     0,     0,
     330,     0,     0,     0,     0,     0,   331,     0,   193,   194,
     195,     0,     0,     0,   332,     0,   196,     0,     0,     0,
       0,     0,     0,     0,   574,     0,   183,    52,     0,     0,
     185,     0,   200,   201,     0,   203,   204,     0,     0,   333,
     328,     0,   208,     0,     0,   187,    53,     0,     0,     0,
       0,     0,     0,     0,   329,     0,     0,     0,   191,    55,
       0,   108,   330,     0,     0,     0,     0,     0,   331,     0,
     193,   194,   195,     0,     0,     0,   332,     0,   196,     0,
       0,     0,     0,     0,     0,     0,   183,    52,     0,     0,
     185,     0,     0,     0,   200,   201,     0,   203,   204,     0,
     328,   333,     0,     0,   208,   187,    53,     0,     0,     0,
       0,     0,     0,     0,   329,     0,     0,     0,   191,    55,
       0,     0,   330,     0,     0,     0,     0,     0,   331,     0,
     193,   194,   195,     0,     0,     0,   332,     0,   196,     0,
       0,     0,     0,     0,     0,     0,   183,    52,   618,     0,
     185,     0,     0,     0,   200,   201,     0,   203,   204,     0,
     328,   333,     0,     0,   208,   187,    53,     0,     0,     0,
       0,     0,     0,     0,   329,     0,     0,     0,   191,    55,
       0,     0,   330,     0,     0,     0,     0,     0,   331,     0,
     193,   194,   195,     0,     0,     0,   332,     0,   196,     0,
       0,     0,     0,     0,     0,     0,     0,   264,   183,    52,
       0,     0,   185,     0,   200,   201,     0,   203,   204,     0,
       0,   333,   328,     0,   208,     0,     0,   187,    53,     0,
       0,     0,     0,     0,     0,     0,   329,     0,     0,     0,
     191,    55,     0,     0,   330,     0,     0,     0,     0,     0,
     331,     0,   193,   194,   195,     0,     0,     0,   332,     0,
     196,     0,     0,     0,     0,     0,     0,     0,   632,     0,
     183,    52,     0,     0,   185,     0,   200,   201,     0,   203,
     204,     0,     0,   333,   328,     0,   208,     0,     0,   187,
      53,     0,     0,     0,     0,     0,     0,     0,   329,     0,
       0,     0,   191,    55,     0,     0,   330,     0,     0,     0,
       0,     0,   331,     0,   193,   194,   195,     0,     0,     0,
     332,     0,   196,     0,     0,     0,     0,     0,     0,     0,
     678,     0,   183,    52,     0,     0,   185,     0,   200,   201,
       0,   203,   204,     0,     0,   333,   328,     0,   208,     0,
       0,   187,    53,     0,     0,     0,     0,     0,     0,     0,
     329,     0,     0,     0,   191,    55,     0,     0,   330,     0,
       0,     0,     0,     0,   331,     0,   193,   194,   195,     0,
       0,     0,   332,     0,   196,     0,     0,     0,     0,     0,
       0,     0,   680,     0,   183,    52,     0,     0,   185,     0,
     200,   201,     0,   203,   204,     0,     0,   333,   328,     0,
     208,     0,     0,   187,    53,     0,     0,     0,     0,     0,
       0,     0,   329,     0,     0,     0,   191,    55,     0,     0,
     330,     0,     0,     0,     0,     0,   331,     0,   193,   194,
     195,     0,     0,     0,   332,     0,   196,     0,     0,     0,
       0,     0,     0,     0,   183,    52,   693,     0,   185,     0,
       0,     0,   200,   201,     0,   203,   204,     0,   328,   333,
       0,     0,   208,   187,    53,     0,     0,     0,     0,     0,
       0,     0,   329,     0,     0,     0,   191,    55,     0,     0,
     330,     0,     0,     0,     0,     0,   331,     0,   193,   194,
     195,     0,     0,     0,   332,     0,   196,     0,     0,     0,
       0,     0,     0,     0,   715,     0,   183,    52,     0,     0,
     185,     0,   200,   201,     0,   203,   204,     0,     0,   333,
     328,     0,   208,     0,     0,   187,    53,     0,     0,     0,
       0,     0,     0,     0,   329,     0,     0,     0,   191,    55,
       0,     0,   330,     0,     0,     0,     0,     0,   331,     0,
     193,   194,   195,     0,     0,     0,   332,     0,   196,     0,
       0,     0,     0,     0,     0,     0,   717,     0,   183,    52,
       0,     0,   185,     0,   200,   201,     0,   203,   204,     0,
       0,   333,   328,     0,   208,     0,     0,   187,    53,     0,
       0,     0,     0,     0,     0,     0,   329,     0,     0,     0,
     191,    55,     0,     0,   330,     0,     0,     0,     0,     0,
     331,     0,   193,   194,   195,     0,     0,     0,   332,     0,
     196,     0,     0,     0,     0,     0,     0,     0,   721,     0,
     183,    52,     0,     0,   185,     0,   200,   201,     0,   203,
     204,     0,     0,   333,   328,     0,   208,     0,     0,   187,
      53,     0,     0,     0,     0,     0,     0,     0,   329,     0,
       0,     0,   191,    55,     0,     0,   330,     0,     0,     0,
       0,     0,   331,     0,   193,   194,   195,     0,     0,     0,
     332,     0,   196,     0,     0,     0,     0,     0,     0,     0,
     728,     0,   183,    52,     0,     0,   185,     0,   200,   201,
       0,   203,   204,     0,     0,   333,   328,     0,   208,     0,
       0,   187,    53,     0,     0,     0,     0,     0,     0,     0,
     329,     0,     0,     0,   191,    55,     0,     0,   330,     0,
       0,     0,     0,     0,   331,     0,   193,   194,   195,     0,
       0,     0,   332,     0,   196,     0,     0,     0,     0,     0,
       0,     0,   736,     0,   183,    52,     0,     0,   185,     0,
     200,   201,     0,   203,   204,     0,     0,   333,   328,     0,
     208,     0,     0,   187,    53,     0,     0,     0,     0,     0,
       0,     0,   329,     0,     0,     0,   191,    55,     0,     0,
     330,     0,     0,     0,     0,     0,   331,     0,   193,   194,
     195,     0,     0,     0,   332,     0,   196,     0,     0,     0,
       0,     0,     0,     0,   747,     0,   183,    52,     0,     0,
     185,     0,   200,   201,     0,   203,   204,     0,     0,   333,
     328,     0,   208,     0,     0,   187,    53,     0,     0,     0,
       0,     0,     0,     0,   329,     0,     0,     0,   191,    55,
       0,     0,   330,     0,     0,     0,     0,     0,   331,     0,
     193,   194,   195,     0,     0,     0,   332,     0,   196,     0,
       0,     0,     0,     0,     0,     0,   773,     0,   183,    52,
       0,     0,   185,     0,   200,   201,     0,   203,   204,     0,
       0,   333,   328,     0,   208,     0,     0,   187,    53,     0,
       0,     0,     0,     0,     0,     0,   329,     0,     0,     0,
     191,    55,     0,     0,   330,     0,     0,     0,     0,     0,
     331,     0,   193,   194,   195,     0,     0,     0,   332,     0,
     196,     0,     0,     0,     0,     0,     0,     0,   780,     0,
     183,    52,     0,     0,   185,     0,   200,   201,     0,   203,
     204,     0,     0,   333,   328,     0,   208,     0,     0,   187,
      53,     0,     0,     0,     0,     0,     0,     0,   329,     0,
       0,     0,   191,    55,     0,     0,   330,     0,     0,     0,
       0,     0,   331,     0,   193,   194,   195,     0,     0,     0,
     332,     0,   196,     0,     0,     0,     0,     0,     0,     0,
     783,     0,   183,    52,     0,     0,   185,     0,   200,   201,
       0,   203,   204,     0,     0,   333,   328,     0,   208,     0,
       0,   187,    53,     0,     0,     0,     0,     0,     0,     0,
     329,     0,     0,     0,   191,    55,     0,     0,   330,     0,
       0,     0,     0,     0,   331,     0,   193,   194,   195,     0,
       0,     0,   332,     0,   196,     0,     0,     0,     0,     0,
       0,     0,   790,     0,   183,    52,     0,     0,   185,     0,
     200,   201,     0,   203,   204,     0,     0,   333,   328,     0,
     208,     0,     0,   187,    53,     0,     0,     0,     0,     0,
       0,     0,   329,     0,     0,     0,   191,    55,     0,     0,
     330,     0,     0,     0,     0,     0,   331,     0,   193,   194,
     195,     0,     0,     0,   332,     0,   196,     0,     0,     0,
       0,     0,     0,     0,   793,     0,   183,    52,     0,     0,
     185,     0,   200,   201,     0,   203,   204,     0,     0,   333,
     328,     0,   208,     0,     0,   187,    53,     0,     0,     0,
       0,     0,     0,     0,   329,     0,     0,     0,   191,    55,
       0,     0,   330,     0,     0,     0,     0,     0,   331,     0,
     193,   194,   195,     0,     0,     0,   332,     0,   196,     0,
       0,     0,     0,     0,     0,     0,   798,     0,   183,    52,
       0,     0,   185,     0,   200,   201,     0,   203,   204,     0,
       0,   333,   328,     0,   208,     0,     0,   187,    53,     0,
       0,     0,     0,     0,     0,     0,   329,     0,     0,     0,
     191,    55,     0,     0,   330,     0,     0,     0,     0,     0,
     331,     0,   193,   194,   195,     0,     0,     0,   332,     0,
     196,     0,     0,     0,     0,     0,     0,     0,   821,     0,
     183,    52,     0,     0,   185,     0,   200,   201,     0,   203,
     204,     0,     0,   333,   328,     0,   208,     0,     0,   187,
      53,     0,     0,     0,     0,     0,     0,     0,   329,     0,
       0,     0,   191,    55,     0,     0,   330,     0,     0,     0,
       0,     0,   331,     0,   193,   194,   195,     0,     0,     0,
     332,     0,   196,     0,     0,     0,     0,     0,     0,     0,
     827,     0,   183,    52,     0,     0,   185,     0,   200,   201,
       0,   203,   204,     0,     0,   333,   328,     0,   208,     0,
       0,   187,    53,     0,     0,     0,     0,     0,     0,     0,
     329,     0,     0,     0,   191,    55,     0,     0,   330,     0,
       0,     0,     0,     0,   331,     0,   193,   194,   195,     0,
       0,     0,   332,     0,   196,     0,     0,     0,     0,     0,
       0,     0,   183,    52,   839,     0,   185,     0,     0,     0,
     200,   201,     0,   203,   204,     0,   328,   333,     0,     0,
     208,   187,    53,     0,     0,     0,     0,     0,     0,     0,
     329,     0,     0,     0,   191,    55,     0,     0,   330,     0,
       0,     0,     0,     0,   331,     0,   193,   194,   195,     0,
       0,     0,   332,     0,   196,     0,     0,     0,     0,     0,
       0,     0,   850,     0,   183,    52,     0,     0,   185,     0,
     200,   201,     0,   203,   204,     0,     0,   333,   328,     0,
     208,     0,     0,   187,    53,     0,     0,     0,     0,     0,
       0,     0,   329,     0,     0,     0,   191,    55,     0,     0,
     330,     0,     0,     0,     0,     0,   331,     0,   193,   194,
     195,     0,     0,     0,   332,     0,   196,     0,     0,     0,
       0,     0,     0,     0,   183,    52,   858,     0,   185,     0,
       0,     0,   200,   201,     0,   203,   204,     0,   328,   333,
       0,     0,   208,   187,    53,     0,     0,     0,     0,     0,
       0,     0,   329,     0,     0,     0,   191,    55,     0,     0,
     330,     0,     0,     0,     0,     0,   331,     0,   193,   194,
     195,     0,     0,     0,   332,     0,   196,     0,     0,     0,
       0,     0,     0,     0,   183,    52,     0,     0,   185,     0,
       0,     0,   200,   201,     0,   203,   204,     0,   328,   333,
       0,     0,   208,   187,    53,   183,    52,     0,     0,   185,
       0,     0,   367,     0,     0,     0,   191,    55,     0,     0,
     192,     0,   175,     0,   187,    53,   331,     0,   193,   194,
     195,     0,     0,   367,   332,     0,   196,   191,    55,     0,
       0,   192,     0,     0,     0,     0,     0,     0,     0,   193,
     194,   195,   200,   201,     0,   203,   204,   196,     0,   333,
       0,     0,   208,     0,     0,   183,    52,   503,     0,   185,
       0,     0,     0,   200,   201,     0,   203,   204,     0,     0,
       0,     0,   175,   208,   187,    53,   183,    52,     0,     0,
     185,     0,     0,   367,     0,     0,     0,   191,    55,     0,
       0,   192,     0,     0,     0,   187,    53,     0,     0,   193,
     194,   195,     0,     0,   367,     0,     0,   196,   191,    55,
       0,     0,   192,     0,     0,     0,     0,   810,     0,     0,
     193,   194,   195,   200,   201,     0,   203,   204,   196,     0,
     183,    52,     0,   208,   185,     0,   688,     0,     0,     0,
       0,     0,     0,     0,   200,   201,     0,   203,   204,   187,
      53,   183,    52,     0,   208,   185,     0,     0,   367,     0,
       0,     0,   191,    55,     0,     0,   192,     0,     0,     0,
     187,    53,     0,     0,   193,   194,   195,     0,     0,   367,
       0,     0,   196,   191,    55,     0,     0,   192,     0,     0,
     760,     0,     0,     0,     0,   193,   194,   195,   200,   201,
       0,   203,   204,   196,     0,   183,    52,     0,   208,   185,
       0,   763,     0,     0,     0,     0,     0,     0,     0,   200,
     201,     0,   203,   204,   187,    53,   183,    52,     0,   208,
     185,     0,     0,   367,     0,     0,     0,   191,    55,     0,
       0,   192,     0,     0,     0,   187,    53,     0,     0,   193,
     194,   195,     0,     0,   367,     0,     0,   196,   191,    55,
       0,     0,   192,     0,     0,   808,     0,     0,     0,     0,
     193,   194,   195,   200,   201,     0,   203,   204,   196,     0,
     183,    52,     0,   208,   185,     0,   854,     0,     0,     0,
       0,     0,     0,     0,   200,   201,     0,   203,   204,   187,
      53,   183,    52,     0,   208,   185,     0,     0,   367,     0,
       0,     0,   191,    55,     0,     0,   192,     0,     0,     0,
     187,    53,     0,     0,   193,   194,   195,     0,     0,   367,
       0,     0,   196,   191,    55,     0,     0,   192,     0,     0,
     866,     0,     0,     0,     0,   193,   194,   195,   200,   201,
       0,   203,   204,   196,     0,   183,    52,     0,   208,   185,
       0,   869,     0,     0,     0,     0,     0,     0,     0,   200,
     201,     0,   203,   204,   187,    53,   183,    52,     0,   208,
     185,     0,     0,   367,     0,     0,     0,   191,    55,     0,
       0,   192,     0,     0,     0,   187,    53,     0,     0,   193,
     194,   195,     0,     0,   367,     0,     0,   196,   191,    55,
       0,     0,   192,     0,     0,   879,     0,     0,     0,     0,
     193,   194,   195,   200,   201,     0,   203,   204,   196,     0,
       0,     0,     0,   208,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   200,   201,     0,   203,   204,     0,
       0,     0,     0,     0,   208
};

static const yytype_int16 yycheck[] =
{
      24,   362,    58,   324,   419,   108,    34,   207,   423,   285,
     217,   211,   129,    37,    38,    39,    20,    73,     9,   120,
      44,    45,   123,    47,    48,   363,   129,    17,   108,    59,
     131,    18,    20,    18,    12,     0,    39,    18,    66,    67,
      68,   362,    46,   691,    17,   693,   111,    18,    34,   129,
      18,   116,   323,    31,    78,   120,    80,    81,   123,   330,
      84,    39,   262,   119,    17,    34,    44,    91,    18,   129,
      73,    95,    96,    97,   281,    99,   100,    68,   193,   107,
     108,   196,    68,    73,    71,    73,    73,    34,    73,    70,
     118,   121,   122,    66,    47,    32,    33,    66,    67,    68,
      71,   129,    73,    37,    38,    73,    39,   167,    20,    34,
     362,    89,    12,    47,   217,    39,   140,   765,   142,    66,
      67,    68,   146,    73,     6,   149,   108,    18,    28,    41,
     154,    31,   156,   157,   194,   104,   160,   217,   107,    39,
     164,    66,    67,    68,    44,   560,    80,   129,    18,   118,
     206,    27,    76,   181,    18,    39,    18,    80,    18,    23,
      83,    95,    96,   280,    18,    47,   267,    12,   269,   106,
     446,   118,   273,    33,    18,    18,    18,   280,   281,   104,
      71,    18,   107,    28,    48,    18,    31,   215,    88,   217,
      23,   839,    39,   118,    39,   395,   396,   134,    18,    44,
     280,   281,   267,    73,    80,    16,   271,   272,   856,    73,
     858,    73,   181,   328,    47,    48,   331,   332,   333,    73,
     420,    39,   156,   871,    18,   194,    71,    39,    39,    73,
      73,    73,    18,    80,   441,   217,    73,    20,    49,    18,
      73,    24,    39,    16,    18,    56,   215,   108,   663,    39,
     665,    71,   280,   281,    37,   670,   181,   194,    18,   362,
     363,    44,    18,    39,    47,    48,    39,    39,   129,    80,
     294,    18,    83,   297,    12,   299,    49,    71,    46,    76,
     304,    12,   306,    56,    18,    71,   310,   625,    78,   313,
     215,    18,    71,    31,    39,   323,   324,    71,   280,   281,
      31,    39,   330,    48,    18,    73,    44,    80,    39,   647,
      83,    71,    95,    44,   374,    71,    99,   392,    49,   379,
     380,    18,   643,    18,    71,   400,    18,    20,   429,   744,
      68,   391,   392,    18,   362,    66,    67,    71,   441,    23,
     400,   401,    18,    39,    71,   282,    12,   316,   317,   318,
     688,    18,   289,    18,   323,   324,   217,    71,    89,    20,
      56,   441,   437,    18,    48,    31,   618,    33,   568,    46,
     622,    46,    18,    39,    71,    20,    71,   437,    44,    71,
     362,   363,    12,   498,   499,   500,    71,    33,    49,    18,
      18,   316,   317,   318,    18,    71,    12,    18,   323,   324,
      18,    31,    68,    33,    71,   766,    71,    47,    85,    39,
      20,    21,    28,   441,    44,    31,    71,   473,    18,   280,
     281,   759,   760,    39,   762,   763,    39,   451,    44,   767,
      48,   455,   770,    33,   458,    27,   460,    39,    68,   691,
     108,   693,    71,    71,    16,   766,    48,    71,    16,    41,
      71,    20,    12,    16,    46,    71,    20,    49,    17,   441,
      73,   129,   522,    20,    20,    46,   804,    24,    60,   807,
     808,    31,    23,    45,    42,   531,    73,    45,    47,    39,
      49,    83,    45,    47,    44,    49,   546,    39,    47,    49,
      47,    48,    48,    12,    66,    67,    23,    48,    66,    67,
     838,   362,   363,    66,    67,   843,   844,   444,    23,    66,
      27,   448,    31,   765,   766,   618,   854,    39,    20,   622,
      39,    48,   625,   767,    41,    44,    20,   865,   866,    46,
     868,   869,    49,    48,   872,    20,    27,   875,    27,   595,
     878,   879,    20,    60,   647,   193,    48,   885,   196,   217,
      41,   520,    41,    41,    48,    46,    39,    46,    46,    27,
      55,   108,   586,    48,    20,    21,    49,    39,    63,    60,
      48,    60,    60,    56,    20,    21,    48,    27,    46,    41,
     441,    49,   129,    48,    46,   688,   642,   839,   691,   645,
     693,    47,   652,   653,   654,   520,    46,    41,    60,   843,
     844,    47,    46,    18,   856,    18,   858,    39,   632,    39,
     854,    14,   280,   281,    27,   643,    60,    49,    33,   871,
      33,   865,   866,    12,   868,   869,    29,    41,   872,   685,
      14,   875,    46,    58,   878,   879,   618,    33,    34,    28,
     622,   885,    31,   625,    46,    29,    60,   487,   488,    74,
      39,    76,    46,    49,    50,    44,   759,   760,    60,   762,
     763,    39,   765,   766,   767,   647,    60,   770,   637,    55,
     217,    49,    72,    46,   643,    85,    46,    63,    56,    14,
     328,    12,   108,   331,   332,   333,    35,    60,    37,   713,
      60,   715,    27,   717,   362,   363,    46,    28,   496,   497,
      31,   804,    51,   129,   807,   808,   688,    46,    39,   691,
      60,   693,   637,    44,    46,    39,    46,    39,   643,    20,
      21,    60,    39,    48,    18,    49,    20,    49,    60,   785,
      60,    18,    49,   280,   281,   838,   839,    39,   766,    46,
     843,   844,    39,   489,   490,   491,   492,    49,    39,   773,
      39,   854,   776,   856,   778,   858,   780,   618,    49,    48,
      39,   622,   865,   866,   625,   868,   869,     3,   871,   872,
      39,    49,   875,   441,    73,   878,   879,   759,   760,    48,
     762,   763,   885,   765,   766,   767,   647,    55,   770,    73,
      53,   217,    20,    21,   818,    63,    48,   821,    61,    24,
     824,    26,   493,   494,   495,    46,   515,    48,   517,   625,
      18,    18,    47,    47,    47,   362,   363,    20,    47,    21,
      73,   193,   804,   847,   196,   807,   808,   688,    39,    72,
     691,    47,   693,   481,    18,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,    27,   280,   281,   838,   839,    39,     3,
       8,   843,   844,     4,    64,     3,    48,    73,    73,    47,
      71,    16,   854,    16,   856,    73,   858,    39,    73,    73,
      47,    47,     6,   865,   866,    17,   868,   869,    73,   871,
     872,    83,    18,   875,   441,     5,   878,   879,   759,   760,
      10,   762,   763,   885,   765,   766,   767,    71,    12,   770,
      39,    48,   108,    23,    47,    71,    47,    39,    71,    47,
      16,    39,    47,    16,    47,    39,    36,    31,    38,     6,
      39,    70,    17,   129,    47,    39,   362,   363,    73,    73,
      44,    47,    52,   804,    54,    49,   807,   808,    47,    59,
     618,   767,    62,    73,   622,    65,   328,   625,    73,   331,
     332,   333,    66,    67,    72,    75,    70,    77,    47,    73,
      73,    47,    73,    47,    78,    73,    73,   838,   839,   647,
      71,    71,   843,   844,    73,    89,    47,    47,    47,    22,
      22,    72,    47,   854,    47,   856,    39,   858,    71,    39,
      47,    73,    73,    73,   865,   866,    71,   868,   869,    71,
     871,   872,    17,    71,   875,   441,    73,   878,   879,    73,
     688,   217,    73,   691,   885,   693,    71,   843,   844,   112,
     113,    73,    71,   108,    71,    73,    71,    73,   854,   687,
      22,    71,    71,    71,     8,     8,   318,   174,    68,   865,
     866,   138,   868,   869,   129,    66,   872,   532,   766,   875,
     373,   687,   878,   879,   687,   481,   483,   119,   486,   885,
      -1,   618,   484,    -1,   485,   622,    -1,    -1,   625,    -1,
      -1,    -1,    -1,    -1,   280,   281,    -1,    -1,    -1,    -1,
      -1,   759,   760,    -1,   762,   763,    -1,   765,   766,   767,
     647,    -1,   770,    -1,    -1,    -1,    -1,    -1,    -1,   481,
      -1,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   212,
      -1,   214,    -1,    -1,    -1,    -1,   804,    -1,    -1,   807,
     808,   688,   217,    -1,   691,    -1,   693,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   362,   363,    -1,    -1,
     838,   839,    -1,    -1,    -1,   843,   844,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   854,    -1,   856,    -1,
     858,    -1,   618,    -1,    -1,   278,   622,   865,   866,   625,
     868,   869,    -1,   871,   872,   280,   281,   875,    -1,    -1,
     878,   879,   759,   760,    -1,   762,   763,   885,   765,   766,
     767,   647,    -1,   770,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   321,    -1,
      -1,    -1,    -1,    -1,    -1,   441,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   804,    -1,    -1,
     807,   808,   688,    -1,    -1,   691,    -1,   693,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   435,   436,    -1,
      -1,    -1,    -1,    -1,    -1,   368,    -1,   362,   363,   372,
     373,   838,   839,    -1,    -1,    -1,   843,   844,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   854,    -1,   856,
      -1,   858,    -1,    -1,    -1,   687,    -1,    -1,   865,   866,
      -1,   868,   869,    -1,   871,   872,    -1,    -1,   875,    -1,
      -1,   878,   879,   759,   760,   418,   762,   763,   885,   765,
     766,   767,    -1,    -1,   770,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   519,    -1,    -1,    -1,    -1,   441,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,   804,    -1,
      44,   807,   808,    -1,    -1,    49,    -1,    -1,   471,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      -1,    -1,   838,   839,    78,    -1,    -1,   843,   844,    -1,
     578,   579,   618,    -1,    -1,    89,   622,    -1,   854,   625,
     856,    -1,   858,   516,    -1,   518,    -1,    -1,    -1,   865,
     866,    -1,   868,   869,    -1,   871,   872,    -1,    -1,   875,
      -1,   647,   878,   879,    -1,    -1,    -1,    -1,    -1,   885,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    12,    -1,    -1,    15,    -1,    -1,   635,   636,    -1,
      -1,   639,    -1,    -1,    25,    -1,    -1,   570,    -1,    30,
      31,    -1,   688,   651,    -1,   691,    -1,   693,    39,    -1,
      -1,   659,    43,    44,    -1,    46,    47,   590,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,   676,    -1,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      -1,    82,    83,   618,    -1,    86,    -1,   622,    89,    -1,
     625,    -1,    -1,    -1,    -1,    -1,   714,    -1,    -1,    -1,
      -1,    -1,   720,   759,   760,   723,   762,   763,    -1,   765,
     766,   767,   647,    -1,   770,    -1,    -1,   735,    -1,    -1,
     738,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   749,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   804,    -1,
      -1,   807,   808,   688,    -1,    -1,   691,    -1,   693,    -1,
      -1,   779,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   787,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   838,   839,    -1,    -1,    -1,   843,   844,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   854,    -1,
     856,    -1,   858,    -1,    -1,    -1,    -1,    -1,    -1,   865,
     866,   829,   868,   869,    -1,   871,   872,    -1,    -1,   875,
      -1,    -1,   878,   879,   759,   760,    -1,   762,   763,   885,
     765,   766,   767,    -1,    -1,   770,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     2,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   804,
      -1,    -1,   807,   808,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   838,   839,    -1,    -1,    -1,   843,   844,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   854,
      -1,   856,    -1,   858,    -1,    66,    67,    68,    -1,    -1,
     865,   866,    -1,   868,   869,    -1,   871,   872,    79,    -1,
     875,    -1,    83,   878,   879,    86,    -1,   182,    -1,    -1,
     885,    -1,    -1,    94,    -1,    -1,    -1,   192,    -1,    -1,
      -1,    -1,   197,   104,    -1,   106,   107,    -1,    -1,    -1,
     205,    -1,    -1,    -1,    -1,   210,    -1,   118,    -1,   214,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,
      -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,   144,    -1,   240,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,   159,    -1,
      -1,   162,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,   278,    -1,    -1,    -1,    11,    12,    -1,
      -1,    15,   193,   194,    18,   196,    20,    21,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,   215,    39,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,   330,    -1,    61,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    82,    83,
      -1,    -1,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,
     365,    -1,    -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   282,    -1,    -1,    -1,    -1,   381,    -1,   289,    -1,
      -1,   386,    -1,    -1,   295,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,   308,    -1,    -1,
     311,    -1,    -1,    -1,    -1,   316,   317,   318,    -1,    -1,
     415,    -1,   323,   324,   419,    -1,    -1,   328,   423,    -1,
     331,   332,   333,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,   375,    -1,    43,    44,   473,    46,
      47,    -1,    49,    -1,   479,    -1,    -1,   482,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,    -1,    73,    -1,   503,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    84,    -1,   514,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   444,    -1,    -1,    -1,   448,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   456,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   560,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     481,    -1,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     595,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   520,
      -1,    -1,    -1,    -1,    -1,   620,   621,    -1,   623,    -1,
      -1,    -1,    -1,   628,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   546,    -1,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   663,    28,
     665,    30,    31,    32,    -1,   670,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    43,    44,    -1,    46,    47,    -1,
     685,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    84,    -1,    -1,    87,    88,
      89,    90,    91,    -1,    -1,    -1,   637,    -1,    -1,    -1,
      -1,    -1,   643,    -1,    -1,    -1,    -1,    -1,    -1,   744,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,   768,   769,    -1,    28,    -1,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,   687,    39,    40,    -1,
      -1,    43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,   810,    -1,    69,    70,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      82,    83,    84,    -1,    -1,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,     7,    -1,   841,   842,    11,    12,
      13,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    84,    -1,    -1,    87,    88,    89,    90,    91,     7,
      -1,    -1,    -1,    11,    12,    13,    -1,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    83,    84,    -1,    -1,    87,
      88,    89,    90,    91,     7,    -1,    -1,    -1,    11,    12,
      13,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    84,    -1,    -1,    87,    88,    89,    90,    91,     7,
      -1,    -1,    -1,    11,    12,    13,    -1,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    83,    84,    -1,    -1,    87,
       7,    89,    90,    91,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    43,    44,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    89,    90,    91,    11,    12,    -1,    -1,    15,
      -1,    -1,    18,    -1,    20,    21,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    48,    49,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    -1,    82,    83,    11,    12,
      86,    -1,    15,    89,    -1,    -1,    -1,    20,    21,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
      -1,    -1,    15,    -1,    -1,    18,    79,    80,    -1,    82,
      83,    -1,    25,    86,    -1,    -1,    89,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    11,    12,
      -1,    -1,    15,    -1,    -1,    -1,    79,    80,    -1,    82,
      83,    -1,    25,    86,    -1,    28,    89,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      11,    12,    -1,    -1,    15,    -1,    79,    80,    -1,    82,
      83,    -1,    -1,    86,    25,    -1,    89,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    12,    73,    -1,    15,    -1,    -1,    -1,    79,    80,
      -1,    82,    83,    -1,    25,    86,    -1,    -1,    89,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    12,    -1,    -1,    15,    -1,    -1,    -1,    79,    80,
      -1,    82,    83,    -1,    25,    86,    -1,    -1,    89,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    11,    12,    -1,    -1,    15,    -1,    79,    80,
      -1,    82,    83,    -1,    -1,    86,    25,    -1,    89,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    11,    12,    -1,    -1,    15,    -1,
      79,    80,    -1,    82,    83,    -1,    -1,    86,    25,    -1,
      89,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    11,    12,    -1,    -1,
      15,    -1,    79,    80,    -1,    82,    83,    -1,    -1,    86,
      25,    -1,    89,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    -1,    -1,
      15,    -1,    -1,    -1,    79,    80,    -1,    82,    83,    -1,
      25,    86,    -1,    -1,    89,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    73,    -1,
      15,    -1,    -1,    -1,    79,    80,    -1,    82,    83,    -1,
      25,    86,    -1,    -1,    89,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    11,    12,
      -1,    -1,    15,    -1,    79,    80,    -1,    82,    83,    -1,
      -1,    86,    25,    -1,    89,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      11,    12,    -1,    -1,    15,    -1,    79,    80,    -1,    82,
      83,    -1,    -1,    86,    25,    -1,    89,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    11,    12,    -1,    -1,    15,    -1,    79,    80,
      -1,    82,    83,    -1,    -1,    86,    25,    -1,    89,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    11,    12,    -1,    -1,    15,    -1,
      79,    80,    -1,    82,    83,    -1,    -1,    86,    25,    -1,
      89,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    73,    -1,    15,    -1,
      -1,    -1,    79,    80,    -1,    82,    83,    -1,    25,    86,
      -1,    -1,    89,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    11,    12,    -1,    -1,
      15,    -1,    79,    80,    -1,    82,    83,    -1,    -1,    86,
      25,    -1,    89,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    11,    12,
      -1,    -1,    15,    -1,    79,    80,    -1,    82,    83,    -1,
      -1,    86,    25,    -1,    89,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      11,    12,    -1,    -1,    15,    -1,    79,    80,    -1,    82,
      83,    -1,    -1,    86,    25,    -1,    89,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    11,    12,    -1,    -1,    15,    -1,    79,    80,
      -1,    82,    83,    -1,    -1,    86,    25,    -1,    89,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    11,    12,    -1,    -1,    15,    -1,
      79,    80,    -1,    82,    83,    -1,    -1,    86,    25,    -1,
      89,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    11,    12,    -1,    -1,
      15,    -1,    79,    80,    -1,    82,    83,    -1,    -1,    86,
      25,    -1,    89,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    11,    12,
      -1,    -1,    15,    -1,    79,    80,    -1,    82,    83,    -1,
      -1,    86,    25,    -1,    89,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      11,    12,    -1,    -1,    15,    -1,    79,    80,    -1,    82,
      83,    -1,    -1,    86,    25,    -1,    89,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    11,    12,    -1,    -1,    15,    -1,    79,    80,
      -1,    82,    83,    -1,    -1,    86,    25,    -1,    89,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    11,    12,    -1,    -1,    15,    -1,
      79,    80,    -1,    82,    83,    -1,    -1,    86,    25,    -1,
      89,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    11,    12,    -1,    -1,
      15,    -1,    79,    80,    -1,    82,    83,    -1,    -1,    86,
      25,    -1,    89,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    11,    12,
      -1,    -1,    15,    -1,    79,    80,    -1,    82,    83,    -1,
      -1,    86,    25,    -1,    89,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      11,    12,    -1,    -1,    15,    -1,    79,    80,    -1,    82,
      83,    -1,    -1,    86,    25,    -1,    89,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    11,    12,    -1,    -1,    15,    -1,    79,    80,
      -1,    82,    83,    -1,    -1,    86,    25,    -1,    89,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    12,    73,    -1,    15,    -1,    -1,    -1,
      79,    80,    -1,    82,    83,    -1,    25,    86,    -1,    -1,
      89,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    11,    12,    -1,    -1,    15,    -1,
      79,    80,    -1,    82,    83,    -1,    -1,    86,    25,    -1,
      89,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    73,    -1,    15,    -1,
      -1,    -1,    79,    80,    -1,    82,    83,    -1,    25,    86,
      -1,    -1,    89,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    -1,    -1,    15,    -1,
      -1,    -1,    79,    80,    -1,    82,    83,    -1,    25,    86,
      -1,    -1,    89,    30,    31,    11,    12,    -1,    -1,    15,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    28,    -1,    30,    31,    53,    -1,    55,    56,
      57,    -1,    -1,    39,    61,    -1,    63,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    79,    80,    -1,    82,    83,    63,    -1,    86,
      -1,    -1,    89,    -1,    -1,    11,    12,    73,    -1,    15,
      -1,    -1,    -1,    79,    80,    -1,    82,    83,    -1,    -1,
      -1,    -1,    28,    89,    30,    31,    11,    12,    -1,    -1,
      15,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    30,    31,    -1,    -1,    55,
      56,    57,    -1,    -1,    39,    -1,    -1,    63,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      55,    56,    57,    79,    80,    -1,    82,    83,    63,    -1,
      11,    12,    -1,    89,    15,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    -1,    82,    83,    30,
      31,    11,    12,    -1,    89,    15,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      30,    31,    -1,    -1,    55,    56,    57,    -1,    -1,    39,
      -1,    -1,    63,    43,    44,    -1,    -1,    47,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    55,    56,    57,    79,    80,
      -1,    82,    83,    63,    -1,    11,    12,    -1,    89,    15,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    -1,    82,    83,    30,    31,    11,    12,    -1,    89,
      15,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    30,    31,    -1,    -1,    55,
      56,    57,    -1,    -1,    39,    -1,    -1,    63,    43,    44,
      -1,    -1,    47,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      55,    56,    57,    79,    80,    -1,    82,    83,    63,    -1,
      11,    12,    -1,    89,    15,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    -1,    82,    83,    30,
      31,    11,    12,    -1,    89,    15,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      30,    31,    -1,    -1,    55,    56,    57,    -1,    -1,    39,
      -1,    -1,    63,    43,    44,    -1,    -1,    47,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    55,    56,    57,    79,    80,
      -1,    82,    83,    63,    -1,    11,    12,    -1,    89,    15,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    -1,    82,    83,    30,    31,    11,    12,    -1,    89,
      15,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    30,    31,    -1,    -1,    55,
      56,    57,    -1,    -1,    39,    -1,    -1,    63,    43,    44,
      -1,    -1,    47,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      55,    56,    57,    79,    80,    -1,    82,    83,    63,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    89
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    42,    45,    66,    67,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   115,   116,   117,   147,
      39,    39,    78,   108,    39,     0,    96,   101,   102,    16,
      45,   117,    27,    41,    46,    49,    60,   118,   120,   123,
     125,   108,    20,    73,   118,   120,   125,    39,    39,   107,
     108,   107,    12,    31,    39,    44,    70,    73,    78,    89,
     103,   104,   105,   106,   107,   109,   116,   118,   126,   127,
     128,   129,   132,   133,   141,   142,   143,    39,   108,    60,
     120,   123,   125,    60,   123,   125,    60,   125,    20,    39,
      76,   120,   125,   125,    60,   118,   120,   123,   125,   118,
     120,   125,    20,    20,    49,   111,    41,    47,    46,   150,
      39,   134,   143,    39,    48,   110,   134,   103,   118,   133,
     143,    89,   103,   143,    70,   127,    73,   140,   150,    46,
      85,   139,   144,    18,    27,    33,   119,   120,   121,   125,
     108,    60,   123,   125,    60,   125,   108,    60,   125,   108,
      39,    76,    73,   125,   108,    60,   120,   123,   125,    60,
     123,   125,    60,   125,   120,   125,   125,    39,    68,   103,
     106,   112,   113,   114,   107,    28,    71,   103,   135,   136,
     137,   138,     7,    11,    13,    15,    19,    30,    32,    39,
      40,    43,    47,    55,    56,    57,    63,    69,    70,    73,
      79,    80,    81,    82,    83,    84,    87,    88,    89,    90,
      91,   103,   104,   106,   108,   138,   150,   151,   152,   153,
     155,   156,   157,   159,   160,   161,   162,   164,   165,   167,
     169,   174,   176,   177,   178,   179,   180,   181,   182,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     200,   201,   215,   216,   218,   219,   220,   139,   110,    18,
      23,    73,   110,   130,    72,    48,   139,   143,   140,   139,
     144,   134,   134,   139,   144,    70,    80,    83,   108,   111,
     145,   151,    18,   124,   144,    39,    39,    18,    33,     3,
     122,    33,   119,   125,   108,    60,   125,   108,   125,   108,
     125,    73,    73,   125,   108,    60,   123,   125,    60,   125,
     108,    60,   125,   108,   125,   111,    27,    80,    18,    33,
     124,    39,    83,    18,    18,    71,    28,   103,    25,    39,
      47,    53,    61,    86,   189,   193,   197,   198,   199,   200,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,    39,    73,
      39,    73,    47,    17,    47,    47,   197,    39,   108,   191,
     192,   214,   104,   107,   108,   111,   214,    73,   197,    20,
      21,    47,   197,   150,   130,    20,    47,   197,   130,    20,
     110,    21,    20,   110,   197,    88,   103,    70,   152,    73,
      20,    21,   197,     5,    10,    23,    36,    38,    52,    54,
      59,    62,    65,    75,    77,   202,    55,    63,    39,    46,
     131,   148,   197,    23,    73,   130,    18,    73,    72,   139,
     144,   144,   139,   139,   144,    47,    47,    20,    80,    83,
      70,   151,    70,   107,    18,   121,    39,   107,     3,    33,
     125,   108,   125,   125,   125,   108,    60,   125,   108,   125,
     108,   125,   106,   106,   113,    20,   110,    71,   103,   136,
     137,    39,   214,     6,    71,   136,   214,   214,   214,    17,
      73,     9,    68,     4,     8,    64,     3,    24,    26,    33,
      34,    49,    50,    35,    37,    51,    53,    61,    58,    74,
      76,    73,    73,    73,   137,   160,   171,   173,   153,    71,
     146,   197,   197,    71,    48,   110,   196,   110,   196,    47,
      49,   111,   108,    73,    39,   111,    39,   111,   197,    73,
      14,    29,   183,   184,    73,    16,   197,    73,    73,    16,
      20,    39,    56,   111,    16,    39,    56,    80,    83,   111,
     190,    20,   130,   130,    39,   111,   190,    39,   111,   197,
      23,   110,    18,    70,   131,   149,    73,   130,   131,    73,
      39,   144,    71,   146,    71,   146,    80,   111,    47,    47,
      70,   107,   121,   107,   125,   125,   108,   125,   125,    83,
      39,    71,   110,   150,   197,     6,    71,   197,   205,   197,
     206,   207,   208,   209,   210,   210,   211,   211,   211,   211,
     212,   212,   212,   213,   213,   214,   214,   214,    73,   197,
      17,    73,    18,    18,    71,    71,   197,   148,    48,   110,
     148,   110,    71,   146,    33,    47,    47,    49,   111,    47,
      39,    39,    71,    47,   150,    29,   184,    71,    16,    39,
      56,    47,   108,    20,    21,    39,    16,    73,    73,    47,
      39,    39,   131,    23,    70,    18,    70,    73,    73,   130,
      23,   110,    73,    71,    73,    71,    47,    80,    71,   146,
      71,   146,   125,   150,   197,     6,    73,    17,    71,   172,
     173,    73,   197,    73,   197,   160,   197,    32,    39,    40,
      90,   153,   154,   155,   158,   163,   166,   168,   170,   175,
      72,   197,   125,    71,    47,    71,   146,    71,   146,    33,
      47,    71,   146,    47,   150,   137,   150,   153,    71,   146,
     111,    39,   111,    39,   111,    47,    71,   146,    47,   131,
      70,   131,    73,   131,    23,    73,    73,    71,   146,    47,
      73,    71,    73,    71,   150,   197,   198,   203,   153,    71,
      71,   172,    71,    71,   172,    73,    47,    17,    47,    47,
      22,    72,   125,    71,   146,   125,    71,   125,    71,    47,
      71,   146,    71,    71,   146,    71,    71,    47,    39,    39,
      71,   146,    71,    71,   146,   131,    73,    71,    71,   146,
      73,    73,   153,   153,    71,   153,   153,    71,    71,   172,
      73,   137,   171,   154,   197,   197,   153,   125,    71,   125,
     125,    71,   146,   125,    71,    71,   150,    71,   146,    47,
      71,    71,    73,    73,    71,   153,   153,   153,    71,    73,
     197,    17,    73,    71,    71,   125,   125,    71,   125,    71,
      71,   146,    73,   153,    71,   172,    73,   197,    73,   197,
     154,   154,   125,    71,   154,    71,    71,   172,    71,    71,
     172,    73,    22,   154,   154,    71,   154,   154,    71,    71,
     172,   154,   154,   154,   154,    71,   154
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    94,    94,    94,    94,    95,    95,    96,
      96,    96,    96,    97,    98,    99,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   107,   107,   108,   108,   109,   110,   110,   111,   112,
     112,   113,   113,   114,   114,   114,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   116,   116,
     117,   117,   118,   118,   118,   118,   119,   119,   119,   119,
     120,   121,   121,   121,   122,   122,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   127,   128,   128,   128,   129,
     129,   129,   129,   129,   129,   129,   129,   130,   130,   130,
     130,   130,   130,   130,   130,   131,   131,   132,   132,   133,
     133,   133,   133,   133,   133,   133,   133,   134,   134,   135,
     135,   136,   136,   137,   137,   137,   137,   138,   138,   139,
     140,   140,   141,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   143,   143,   143,   143,   144,
     144,   144,   144,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   146,   146,   147,   147,   147,
     147,   147,   147,   147,   147,   148,   148,   148,   148,   149,
     149,   150,   150,   151,   151,   152,   152,   152,   152,   152,
     153,   153,   153,   153,   153,   153,   154,   154,   154,   154,
     154,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   156,   157,   158,   159,   160,   160,   160,   160,
     160,   160,   160,   161,   162,   163,   164,   164,   165,   166,
     167,   167,   168,   168,   169,   169,   169,   169,   169,   169,
     169,   169,   170,   170,   170,   170,   170,   170,   170,   170,
     171,   171,   172,   173,   173,   174,   175,   176,   176,   177,
     178,   178,   179,   179,   180,   181,   182,   182,   182,   183,
     183,   184,   185,   185,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   187,   187,   187,   187,   187,   187,
     187,   188,   188,   188,   188,   188,   189,   189,   189,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   191,   191,   191,   192,   192,   192,   192,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   195,   195,   195,   195,
     195,   195,   196,   196,   197,   197,   198,   198,   198,   198,
     198,   198,   199,   199,   200,   201,   201,   201,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     203,   203,   203,   204,   204,   205,   205,   206,   206,   207,
     207,   208,   208,   209,   209,   209,   210,   210,   210,   210,
     210,   211,   211,   211,   211,   212,   212,   212,   213,   213,
     213,   213,   214,   214,   214,   214,   214,   215,   216,   217,
     217,   217,   218,   218,   218,   218,   219,   220
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     3,     5,     6,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     4,     3,     1,     2,     3,     2,     3,     3,
       1,     1,     1,     3,     3,     1,     3,     5,     4,     6,
       4,     6,     5,     7,     4,     6,     5,     7,     5,     7,
       6,     8,     4,     6,     5,     7,     5,     7,     6,     8,
       5,     7,     6,     8,     6,     8,     7,     9,     2,     1,
       1,     1,     3,     4,     4,     5,     3,     4,     2,     3,
       2,     2,     1,     2,     3,     2,     5,     3,     2,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     4,     6,     4,     6,     5,     7,     3,     5,     4,
       6,     2,     4,     3,     5,     1,     1,     2,     3,     2,
       3,     2,     3,     3,     4,     3,     4,     1,     2,     2,
       4,     3,     1,     2,     3,     3,     4,     2,     1,     2,
       1,     1,     2,     3,     4,     3,     4,     4,     5,     2,
       3,     2,     3,     3,     4,     3,     4,     5,     6,     2,
       3,     3,     4,     4,     5,     5,     6,     4,     5,     5,
       6,     6,     7,     7,     8,     3,     1,     3,     4,     4,
       5,     4,     5,     5,     6,     2,     3,     3,     4,     3,
       1,     2,     3,     2,     1,     3,     3,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     5,     7,     7,     3,     5,     5,     5,
       1,     1,     1,     1,     6,     7,     7,     8,     7,     8,
       8,     9,     6,     7,     7,     8,     7,     8,     8,     9,
       1,     1,     1,     3,     1,     7,     7,     2,     3,     3,
       2,     3,     2,     3,     3,     5,     3,     4,     5,     2,
       1,     5,     1,     1,     1,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     4,     3,     1,     3,     3,     4,
       5,     5,     6,     6,     7,     7,     8,     5,     6,     6,
       7,     7,     8,     8,     9,     4,     5,     5,     6,     5,
       6,     6,     7,     5,     6,     6,     7,     6,     7,     7,
       8,     3,     3,     5,     1,     2,     1,     2,     3,     4,
       5,     6,     6,     7,     5,     6,     6,     7,     5,     6,
       6,     7,     7,     8,     8,     9,     3,     4,     3,     4,
       3,     4,     3,     4,     5,     6,     3,     4,     3,     4,
       4,     4,     4,     3,     1,     1,     5,     4,     3,     5,
       4,     3,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     5,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     1,     1,     1,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 3102 "parser.tab.c"

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
  *++yylsp = yyloc;

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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

  yyerror_range[1] = yylloc;

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp);
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
#line 885 "parser.y"


int main(){
    #if YYDEBUG
        yydebug = 1;
    #endif
    yyparse();
}
