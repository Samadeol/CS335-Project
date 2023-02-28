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

extern int yylex();
extern int yylineno;

#define YYDEBUG 1

void yyerror(const char* error){
    fprintf (stderr, "%s | %d\n",error,yylineno);
}



#line 86 "parser.tab.c"

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
    TRIPLE_DOT = 342,
    TRY = 343,
    VAR = 344,
    VOID = 345,
    WHILE = 346,
    YIELD = 347
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "parser.y"

    char str[1000];

#line 235 "parser.tab.c"

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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5094

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  128
/* YYNRULES -- Number of rules.  */
#define YYNRULES  433
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  863

#define YYUNDEFTOK  2
#define YYMAXUTOK   347


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
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    31,    31,    34,    35,    36,    40,    41,    45,    46,
      47,    48,    52,    56,    60,    64,    68,    69,    73,    74,
      78,    79,    83,    84,    88,    89,    93,    94,    98,   102,
     103,   107,   108,   112,   113,   117,   121,   122,   126,   127,
     131,   132,   133,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   174,   175,   179,   180,   181,
     182,   183,   187,   188,   192,   193,   197,   201,   206,   207,
     211,   212,   216,   217,   221,   222,   223,   227,   228,   229,
     235,   236,   240,   241,   245,   246,   247,   248,   252,   253,
     258,   259,   265,   266,   267,   268,   269,   270,   271,   272,
     276,   277,   281,   282,   286,   287,   291,   292,   293,   294,
     295,   296,   300,   301,   305,   309,   310,   314,   318,   319,
     320,   321,   322,   323,   324,   325,   329,   330,   331,   332,
     336,   337,   338,   339,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   358,   359,   363,   364,
     365,   366,   367,   368,   369,   370,   374,   375,   376,   377,
     381,   382,   386,   387,   391,   392,   396,   397,   398,   399,
     400,   404,   405,   406,   407,   408,   409,   413,   414,   415,
     416,   417,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   435,   439,   443,   447,   451,   452,   453,
     454,   455,   456,   457,   460,   464,   468,   472,   473,   477,
     481,   485,   486,   490,   491,   495,   496,   497,   498,   499,
     500,   501,   502,   506,   507,   508,   509,   510,   511,   512,
     513,   517,   518,   522,   523,   524,   525,   529,   533,   534,
     538,   542,   546,   547,   551,   555,   556,   560,   561,   565,
     569,   573,   574,   575,   579,   580,   584,   588,   589,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   606,
     607,   608,   609,   610,   611,   612,   616,   617,   618,   619,
     620,   624,   625,   626,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
     649,   650,   651,   655,   656,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   681,   682,   683,   684,   685,   686,   687,
     688,   689,   690,   694,   695,   696,   697,   698,   699,   703,
     704,   708,   709,   713,   714,   715,   716,   717,   718,   722,
     723,   727,   728,   729,   733,   734,   735,   736,   737,   738,
     739,   740,   741,   742,   743,   744,   748,   749,   750,   754,
     755,   759,   760,   764,   765,   769,   770,   774,   775,   779,
     780,   781,   785,   786,   787,   788,   789,   793,   794,   795,
     796,   800,   801,   802,   806,   807,   808,   809,   813,   814,
     815,   816,   817,   821,   825,   829,   830,   831,   835,   836,
     837,   838,   842,   846
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
  "THROWS", "TILDA", "TRIPLE_DOT", "TRY", "VAR", "VOID", "WHILE", "YIELD",
  "$accept", "input", "CompiledStuff", "ImportDeclarations",
  "ImportDeclaration", "SingleTypeImportDeclaration",
  "TypeImportOnDemandDeclaration", "SingleStaticImportDeclaration",
  "StaticImportOnDemandDeclaration", "TypeDeclarations", "TypeDeclaration",
  "Type", "PrimitiveType", "NumericType", "ReferenceType", "ClassType",
  "DotIdentifiers", "ArrayType", "Dims", "TypeArguments",
  "TypeArgumentList", "TypeArgument", "Wildcard", "ClassDeclaration",
  "ClassModifiers", "ClassModifier", "TypeParameterList", "TypeParameters",
  "ClassExtends", "ClassImplements", "ClassTypes", "ClassBody",
  "ClassBodyDeclarations", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "VariableDeclaratorList",
  "VariableDeclarator", "VariableInitializer", "MethodDeclaration",
  "MethodHeader", "MethodDeclarator", "ReceiverParameter",
  "FormalParameterList", "FormalParameter", "VariableModifiers", "Throws",
  "MethodBody", "StaticInitializer", "ConstructorDeclaration",
  "Declarator", "ConstructorBody", "ExplicitConstructorInvocation",
  "Expressions", "InterfaceDeclaration", "ArrayInitializer",
  "VariableInitializerList", "Block", "BlockStatements", "BlockStatement",
  "Statement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "EmptyStatement",
  "LabeledStatement", "LabeledStatementNoShortIf", "ExpressionStatement",
  "StatementExpression", "IfThenStatement", "IfThenElseStatement",
  "IfThenElseStatementNoShortIf", "AssertStatement", "WhileStatement",
  "WhileStatementNoShortIf", "ForStatement", "ForStatementNoShortIf",
  "BasicForStatement", "BasicForStatementNoShortIf", "ForInit",
  "LocalVariableDeclaration", "ForUpdate", "StatementExpressionList",
  "EnhancedForStatement", "EnhancedForStatementNoShortIf",
  "BreakStatement", "YieldStatement", "ContinueStatement",
  "ReturnStatement", "ThrowStatement", "SynchronizedStatement",
  "TryStatement", "Catches", "CatchClause", "Primary", "PrimaryNoNewArray",
  "Literal", "ClassLiteral", "ClassInstanceCreationExpression",
  "UnqualifiedClassInstanceCreationExpression", "FieldAccess",
  "ArrayAccess", "MethodInvocation", "MethodReference",
  "ArrayCreationExpression", "DimExprs", "Expression", "LambdaExpression",
  "AssignmentExpression", "Assignment", "AssignmentOperator",
  "ConditionalExpression", "ConditionalOrExpression",
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
     345,   346,   347
};
# endif

#define YYPACT_NINF (-642)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-432)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     329,    71,  -642,   139,   116,  -642,  -642,  -642,  -642,   222,
    -642,   329,  -642,  -642,  -642,  -642,  -642,   325,  -642,  -642,
     527,  -642,  -642,   739,  -642,   145,    84,   479,  -642,  -642,
     325,  -642,   172,   274,  -642,   145,   145,  1199,   390,   145,
     420,   471,   209,  -642,    49,   101,  -642,   354,   389,  -642,
     745,   479,  -642,   369,   400,  -642,  -642,   418,  -642,  -642,
    -642,   486,   462,   475,   526,  -642,  -642,  -642,   270,  -642,
    1552,   120,  1471,  -642,  -642,  -642,  -642,    89,  -642,  -642,
     167,   350,    -8,   145,   536,   377,  -642,   145,   430,  -642,
     145,  -642,   159,  -642,   496,   389,  -642,  -642,   145,   539,
     613,   481,  -642,   354,   389,  -642,   580,   145,   540,  2274,
    -642,   418,   518,   526,   512,    19,  -642,   518,   563,   608,
     608,   475,   120,    89,   167,   462,   462,   167,  -642,  -642,
    -642,  -642,  -642,  2186,   619,   616,  -642,   639,  -642,   446,
    -642,    -8,   145,   502,  -642,   145,  -642,    -8,   145,  -642,
      -8,   622,   631,  -642,  -642,    -8,   145,   661,   541,  -642,
     145,   549,  -642,   145,  -642,   389,  -642,  -642,   619,  -642,
    -642,   210,   679,    87,  -642,   624,  4575,  -642,     6,  -642,
     265,  -642,   671,   300,   689,  -642,  4575,  4637,   455,  -642,
    4637,  2896,  -642,  -642,  -642,   680,   692,  -642,  -642,  4575,
     486,   681,   707,   694,  4575,   681,   331,   727,  1129,   184,
    -642,  2361,  -642,  -642,  -642,  -642,  -642,  -642,   678,  -642,
    -642,  -642,  -642,  -642,  -642,  -642,  -642,  -642,  -642,  -642,
    -642,  -642,  -642,   702,   726,  -642,  -642,    38,  -642,   488,
     488,    42,  -642,  -642,  -642,  -642,  -642,   379,   447,   598,
    -642,   608,  2959,   286,   681,  -642,  -642,  -642,   683,    22,
     167,  -642,   616,  -642,   518,   518,   616,  -642,   121,  -642,
     410,   730,  5017,   490,  2447,  2533,   145,   769,  -642,  -642,
     753,  -642,  -642,    -8,   145,  -642,    -8,  -642,    -8,  -642,
    -642,  -642,  -642,    -8,   145,   567,  -642,   145,  -642,    -8,
     145,  -642,    -8,  -642,   769,   396,  -642,   767,   586,   646,
    -642,  -642,   100,  4637,    12,  1834,  4637,  4637,  4637,   331,
     727,  -642,  -642,     2,  -642,  -642,  -642,  -642,    26,   808,
     805,   752,   814,   180,   573,   673,   623,   558,  -642,  -642,
    -642,  -642,   379,  -642,  -642,   748,  -642,   749,  -642,  1389,
    2705,  3021,  4575,   747,   776,   373,  -642,  -642,  -642,   778,
     778,   307,   145,  -642,  -642,   754,   293,   589,  4575,   758,
     504,   422,    29,   818,  4575,   762,    30,   822,   404,   436,
    -642,  -642,    73,  -642,  -642,  -642,  3083,  -642,  -642,  -642,
    -642,  -642,  -642,  -642,   407,  4575,   681,   681,  -642,  -642,
    -642,   611,   664,  4575,  4575,  4575,  -642,  -642,  2038,  -642,
    -642,  -642,  2959,  -642,  -642,  -642,   616,  -642,  -642,  -642,
    -642,  -642,    92,   526,  -642,   521,  -642,  -642,  3145,  3207,
     225,   800,   801,  -642,  2619,  -642,  -642,   145,  -642,  -642,
      -8,  -642,  -642,  -642,    -8,   145,  -642,    -8,  -642,    -8,
    -642,   766,   608,  -642,  -642,   147,   126,  -642,   526,   819,
    -642,  3269,   853,   128,  -642,  -642,  -642,  4575,  -642,  4637,
    4575,  4637,  4637,  4637,  4637,  4637,  4637,  4637,  4637,  4637,
    4637,  4637,  4637,  4637,  4637,  4637,  4637,  4637,  4637,  -642,
    -642,  3331,   681,   681,   226,  -642,   791,   849,   855,  -642,
    -642,   150,  -642,   796,  -642,  3083,   564,   826,   564,   826,
    3394,   842,   352,  -642,   829,   838,  -642,   839,   810,  -642,
     835,   486,   547,  -642,  -642,  -642,   812,  -642,  -642,  -642,
     868,  -642,  -642,   397,  -642,   840,   670,   742,  -642,   846,
    -642,   821,   870,  -642,    44,    48,   843,   856,  -642,  -642,
     857,   825,  -642,  -642,   824,  -642,  -642,   109,  -642,  -642,
     456,   456,   121,  -642,   827,   156,   828,   165,   468,   -17,
    3456,  3518,  -642,  -642,  -642,  -642,    -8,  -642,  -642,  -642,
     526,  -642,   608,  -642,  -642,  -642,  3269,   892,   831,   808,
     882,   805,   752,   814,   180,   573,   573,   673,   673,   673,
     673,   623,   623,   623,   558,   558,  -642,  -642,  -642,  4713,
     833,   894,   894,   681,   681,  3580,  4575,   789,  4575,  -642,
    2760,   844,  -642,  3083,   608,  -642,   608,   389,   182,   867,
    3643,   886,  3705,   873,  -642,   486,   646,  -642,   486,  -642,
    2705,  -642,  -642,  -642,  3767,   307,   676,   696,   875,  -642,
    -642,  -642,  -642,  3829,   896,  -642,  -642,  -642,  2834,  -642,
    -642,  -642,  -642,  -642,   874,  -642,   876,  3891,   899,   878,
     189,   879,   191,  -642,  -642,  -642,  3269,  -642,  4575,  2705,
     877,   855,  4734,   894,   894,  4789,   881,   884,  -642,  -642,
     910,   308,   911,   912,  -642,   893,   919,  -642,  -642,  -642,
    -642,  -642,  -642,  -642,   888,  -642,   389,  3953,   389,   211,
     914,  -642,   215,  4015,  -642,   891,  -642,  -642,  -642,   229,
     916,   925,  -642,   926,  4077,  -642,   230,  4139,  -642,  -642,
    -642,  -642,   895,   245,  4201,  -642,   897,  -642,   898,  -642,
    -642,  -642,  -642,  -642,  2705,  2705,   901,  2705,   904,  4810,
    2705,  4658,  2760,  4575,  4575,  2705,  -642,  -642,   389,   253,
    -642,   389,  4263,  -642,  -642,   277,   486,  -642,  4325,   922,
    -642,  -642,   289,  -642,  -642,   302,  -642,   903,   907,   315,
    -642,  -642,  -642,  -642,  2705,  -642,  2705,  2705,   906,  -642,
    4387,   908,   949,  -642,   913,   915,  -642,  -642,   389,  -642,
     389,   317,  -642,  -642,  -642,   334,  4450,  -642,  -642,  -642,
    -642,   909,  -642,  -642,  -642,  2705,  4865,   921,  4512,  4575,
    2760,  2760,  -642,  -642,   389,  -642,  -642,   343,  -642,  -642,
    2760,   918,  4886,  4941,   923,   924,   961,  -642,  -642,  -642,
    -642,  2760,  2760,   927,  2760,   930,  4962,  2760,  2760,  -642,
    -642,  2760,  -642,  2760,  2760,   932,  -642,  -642,  -642,  -642,
    -642,  2760,  -642
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,    79,     0,     0,    78,    77,    80,    81,     0,
       2,     4,     7,     8,     9,    10,    11,     3,    17,    18,
       0,    76,    19,     0,    30,     0,     0,     0,     1,     6,
       5,    16,     0,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,     0,    12,     0,     0,   168,
       0,     0,    86,    28,     0,    23,    25,    30,    24,    90,
      99,    80,     0,     0,    20,    22,    21,    26,    28,    27,
       0,     0,     0,    93,    94,    97,    98,     0,    95,    96,
       0,     0,     0,     0,     0,     0,    51,     0,     0,    47,
       0,    45,     0,    29,     0,     0,   170,   169,     0,     0,
       0,     0,    59,     0,     0,   172,     0,     0,     0,     0,
     137,     0,   112,   120,   106,     0,   103,   114,     0,    32,
      31,     0,     0,     0,     0,     0,     0,     0,    91,    92,
     136,   110,   135,     0,     0,     0,   142,     0,    82,     0,
      44,     0,     0,     0,    55,     0,    53,     0,     0,    49,
       0,    29,     0,    13,   171,     0,     0,     0,     0,    67,
       0,     0,    63,     0,    61,     0,   174,   173,     0,   133,
     146,     0,     0,     0,   125,     0,     0,   291,     0,   292,
       0,   290,     0,    30,     0,   289,     0,     0,     0,   295,
       0,     0,   182,   213,   293,     0,     0,   294,   281,     0,
       0,     0,     0,     0,     0,     0,    20,    21,   429,     0,
     202,     0,   185,   190,   191,   203,   192,   204,     0,   193,
     194,   205,   195,   196,   231,   232,   206,   212,   207,   208,
     210,   209,   211,   428,   277,   279,   280,   284,   301,   285,
     286,   287,   288,   278,   217,   218,   219,     0,   220,   221,
     113,   121,     0,   107,     0,   100,   115,    34,     0,     0,
       0,   111,     0,   144,   116,   118,     0,   138,     0,   150,
       0,   281,    28,     0,     0,     0,     0,   134,   143,    85,
       0,    83,    52,     0,     0,    57,     0,    48,     0,    46,
      14,    15,    60,     0,     0,     0,    71,     0,    69,     0,
       0,    65,     0,   175,    87,   126,   122,     0,     0,     0,
     147,   132,     0,     0,    30,     0,     0,     0,     0,     0,
       0,   284,   287,     0,   361,   362,   370,   369,   386,   389,
     391,   393,   395,   397,   399,   402,   407,   411,   414,   418,
     419,   422,   425,   430,   431,     0,   262,     0,   265,     0,
       0,     0,     0,     0,    30,   429,   285,   286,   424,     0,
       0,    28,     0,   423,   267,     0,     0,     0,     0,     0,
       0,   106,     0,     0,     0,     0,     0,     0,    32,     0,
     383,   385,     0,   374,   381,   382,     0,   380,   379,   377,
     378,   384,   376,   375,    31,     0,     0,     0,   183,   184,
     216,     0,     0,     0,     0,     0,   433,   432,     0,   104,
     109,   108,     0,   102,    33,   101,     0,   140,   145,   117,
     119,   139,    42,     0,    38,     0,    37,    39,     0,     0,
       0,     0,     0,   152,     0,   151,    89,     0,    84,    56,
       0,    54,    50,    68,     0,     0,    73,     0,    64,     0,
      62,     0,   128,   130,   148,     0,     0,   124,   127,     0,
     427,     0,     0,     0,   421,   420,   426,     0,   227,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   263,
     266,     0,     0,     0,     0,   259,     0,   252,   251,   214,
     325,     0,   167,     0,   283,     0,     0,   353,     0,   355,
       0,     0,     0,   268,   321,     0,   349,     0,     0,   269,
       0,     0,   271,   275,   187,   300,     0,   264,   186,   298,
       0,   345,   347,     0,   296,    29,     0,     0,   282,     0,
     302,     0,     0,   371,     0,     0,   320,     0,   303,   343,
       0,     0,   372,   373,     0,   176,   181,     0,   105,   141,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,   153,    88,    58,    72,     0,    70,    66,   123,
     126,   149,   129,   131,   365,   368,     0,     0,     0,   390,
       0,   392,   394,   396,   398,   400,   401,   404,   406,   403,
     405,   409,   410,   408,   413,   412,   417,   416,   415,     0,
       0,   255,   253,     0,     0,     0,     0,     0,     0,   326,
       0,     0,   357,     0,   354,   358,   356,   304,     0,     0,
       0,     0,     0,     0,   350,     0,     0,   272,     0,   274,
       0,   299,   346,   348,     0,     0,     0,     0,     0,   323,
     297,   189,   188,     0,     0,   344,   324,   177,     0,   178,
      40,    41,    36,   158,     0,   154,     0,     0,     0,     0,
       0,     0,     0,    74,   364,   367,     0,   228,     0,     0,
       0,   257,     0,   256,   254,     0,     0,     0,   258,   166,
       0,    30,     0,     0,   224,     0,   191,   198,   199,   200,
     201,   233,   234,   360,     0,   305,   306,     0,   312,     0,
       0,   335,     0,     0,   270,     0,   273,   229,   327,     0,
     322,     0,   351,     0,     0,   331,     0,     0,   179,   180,
     159,   155,     0,     0,     0,   160,     0,   156,     0,   363,
     366,   388,   387,   235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   359,   307,   308,     0,
     313,   314,     0,   336,   337,     0,     0,   328,     0,     0,
     352,   329,     0,   332,   333,     0,   162,     0,     0,     0,
     161,   157,   236,   237,     0,   239,     0,     0,     0,   260,
       0,     0,   252,   215,     0,     0,   225,   309,   310,   315,
     316,     0,   338,   276,   339,     0,     0,   330,   334,   163,
     164,     0,   238,   240,   241,     0,     0,     0,     0,     0,
       0,     0,   311,   317,   318,   340,   341,     0,   165,   242,
       0,     0,     0,     0,     0,     0,     0,   230,   319,   342,
     243,     0,     0,     0,     0,     0,     0,     0,     0,   244,
     245,     0,   247,     0,     0,     0,   261,   226,   246,   248,
     249,     0,   250
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -642,  -642,  -642,  -642,   974,  -642,  -642,  -642,  -642,   976,
     314,   -21,    28,  -642,   110,   -25,  1692,  -642,   -61,   -90,
    -642,   435,  -642,  -642,    69,    10,   388,  -642,   299,   -14,
     845,   -27,  -642,   935,  -642,  -642,  -117,   763,  -380,  -642,
     938,   -29,  -642,  -269,  -307,  -107,   -34,   887,  -642,  -642,
      54,   -93,  -642,  -204,  -642,   125,  -642,   -52,  -125,  -194,
    1204,  -155,  -370,  -642,  -642,  -642,  -642,  -295,  -642,  -642,
    -642,  -642,  -642,  -642,  -642,  -642,  -642,  -642,   273,   276,
    -641,  -343,  -642,  -642,  -642,  -642,  -642,  -642,  -642,  -642,
    -642,  -642,   503,  -642,  -642,  -642,  -642,  -104,  -216,   452,
     869,     9,  -642,  -642,   668,  1569,   351,  -642,   158,   550,
     355,  -642,   565,   561,   568,   562,   569,   327,   304,   328,
     330,  -123,   271,   458,  -642,   643,   756,   905
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,   205,   319,    65,   320,    67,   208,    69,   394,   362,
     425,   426,   427,    19,    20,    21,    71,   139,    41,    42,
     277,    43,    72,    73,    74,    75,   115,   116,   409,    76,
      77,   117,   172,   173,   174,   209,   135,   131,    78,    79,
     113,   136,   274,   501,    22,   410,   557,   210,   211,   212,
     213,   695,   214,   215,   216,   697,   217,   218,   219,   220,
     698,   221,   222,   699,   223,   700,   224,   701,   496,   497,
     680,   681,   225,   702,   226,   227,   228,   229,   230,   231,
     232,   522,   523,   233,   234,   235,   236,   321,   238,   239,
     240,   322,   242,   243,   507,   502,   324,   325,   326,   395,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,   175,   457,   119,   259,   237,   498,   120,   275,   110,
      52,    54,   106,    86,    89,    91,    63,   399,   461,   467,
      96,    97,   648,   102,   105,   132,    85,    88,   556,   237,
      34,   263,   558,   112,   267,   469,   101,   254,    37,   456,
     254,   746,   278,   273,   748,   345,   463,   254,   254,   121,
     126,    63,   251,   253,   495,   140,  -223,   144,   146,   351,
    -222,   149,   254,   668,   358,    64,   254,   363,   154,    92,
     143,   132,   159,   162,   164,   468,   166,   167,   250,   346,
      34,   399,   168,   256,   372,   158,   161,   171,   376,   534,
     262,    80,   255,   266,   470,   415,   264,   265,    64,    64,
      64,   126,   524,   528,    45,   309,    70,   237,   788,  -223,
      23,  -223,   535,  -222,   282,  -222,   285,   651,   241,   560,
     287,   652,   268,   289,   124,   127,    80,   658,   292,   536,
     296,   298,    55,    55,   301,   109,    64,   206,   303,   458,
      93,    70,   241,   295,   309,   378,   309,    66,   370,   434,
      64,    56,    56,   537,   312,    27,   538,    46,   310,    57,
      24,   206,   130,   360,    58,    58,   540,   417,   618,   418,
     237,   237,   561,   421,   618,   831,   260,    94,    24,   659,
      66,    66,    66,   618,    24,   548,   580,   459,   397,   422,
     460,   843,   845,   464,   465,   466,    55,   581,   151,   587,
     618,   175,   175,    64,   475,   855,   476,   618,   175,   618,
     125,    50,   311,   133,   540,    56,   359,    25,    66,   207,
     241,   619,    28,    24,   565,   567,   416,   664,    58,   618,
     419,   420,    66,   618,   307,   152,   666,    64,    55,   206,
     399,   534,   494,   207,   452,   237,   237,   618,   618,   305,
     696,   436,   134,   706,   311,    37,   439,    56,   378,   441,
     736,   442,   738,   618,   535,    24,   443,   244,   446,    90,
      58,   618,   448,   396,   268,   450,   515,   517,   729,   544,
     545,   536,   761,   241,   241,    66,   763,   455,   455,   533,
     106,   244,   539,   306,   455,   618,   423,   307,   506,   508,
     767,   773,   206,   206,   347,   568,   628,   618,   538,   412,
     253,   547,   550,    51,   495,   613,   777,   350,   118,    66,
     618,   207,   688,   559,   798,   752,    48,   106,   493,   715,
     237,    31,   514,   618,   258,   618,    64,    64,   348,    84,
     569,     1,   268,   206,    31,     1,    95,   351,   802,   100,
     104,   377,   618,     2,   510,   351,   511,     2,   241,   241,
     807,   618,   119,   606,   607,   608,   670,   672,   137,   244,
       4,     3,   106,   808,     4,   611,   612,   206,   424,   118,
     245,    35,   696,   138,   207,   207,   811,   495,   824,   106,
     495,     5,     6,   382,   -28,     5,     6,   582,   157,   630,
      37,   631,   165,     7,   245,   825,     8,     7,   498,   584,
       8,    40,   573,   574,   839,    47,   451,   575,    66,    66,
     577,   386,   578,    37,   530,   207,   709,   542,   712,    81,
     366,   367,   244,   244,   406,    37,   642,   145,    99,   103,
     719,   107,   407,   241,   118,   252,   624,    35,   626,   726,
     696,   696,   258,   643,   495,   258,   495,   428,   122,   207,
     696,    36,   206,   733,   280,   108,    37,    55,    55,   637,
     118,   696,   696,   614,   696,   531,    37,   696,   696,   281,
      83,   696,   245,   696,   696,   268,    56,    56,   646,   647,
     148,   696,   532,   380,    24,    24,   683,   684,   381,    58,
      58,   111,  -430,   759,   268,   237,    35,   244,   244,   765,
    -430,   383,    36,   237,   114,   667,   237,    37,   520,   452,
     772,   495,    64,   775,   384,    37,   385,    37,    38,   175,
     779,    87,   109,   521,   674,   252,   237,   495,   495,   562,
     387,   163,   388,    32,   207,   245,   245,   389,    37,   673,
     390,   495,    55,   391,   563,     2,   721,   723,   801,   108,
     118,   520,   284,   392,   805,   393,    35,   246,   169,   153,
     431,    56,    33,   432,   118,   237,   638,    36,   237,    24,
      36,   237,    37,   714,    58,    37,   716,    37,   423,   423,
     423,   246,   244,     5,     6,    37,   142,   793,    55,   156,
     705,   297,   827,   134,    66,     7,   477,   478,     8,   300,
     408,   170,   258,    37,   169,   455,   486,    56,   241,    93,
     245,   245,   479,   480,   739,    24,   241,   445,   516,   241,
      58,   622,   487,   625,   488,   257,    55,   276,   268,   356,
     237,   237,   356,   237,   494,   237,   237,   237,   237,   241,
     546,   237,   311,  -431,    36,    56,   258,   454,    55,    37,
     268,  -431,   133,    24,    64,   836,   837,   536,    58,   246,
     660,   661,   424,   160,   169,   840,   484,    56,   279,   757,
     237,   760,   237,   237,   485,    24,   849,   850,   241,   852,
      58,   241,   856,   857,   241,   290,   858,   308,   859,   860,
     366,   367,    36,   549,   291,   245,   862,    37,   481,    24,
     482,   237,   237,   268,   803,   720,   237,   237,   349,   268,
     371,   294,   401,   402,   483,   268,   237,   373,   237,   237,
     493,   797,   246,   246,   799,   722,   352,   237,   237,   368,
     237,   374,   237,   237,   237,   268,    66,   237,   379,   237,
     237,   400,   247,   241,   241,   414,   241,   237,   241,   241,
     241,   241,   646,   647,   241,   356,    35,   244,   356,   356,
     356,   822,    35,   823,   403,   244,   247,   429,   244,   206,
      36,   597,   598,   599,   600,    37,    36,   437,    38,   404,
     405,    37,   438,   241,    38,   241,   241,   838,   244,    39,
     177,    55,   595,   596,   179,    98,   453,   246,   246,   601,
     602,   603,   471,   472,   604,   605,   473,   474,   504,   181,
      56,   489,   490,   351,   241,   241,   505,   513,   354,   241,
     241,   519,   185,    58,   525,   527,   186,   244,   529,   241,
     244,   241,   241,   244,   187,   188,   189,   570,   571,   579,
     241,   241,   190,   241,   247,   241,   241,   241,   583,   586,
     241,   207,   241,   241,   615,   248,   616,   620,   194,   195,
     241,   197,   198,   617,   623,   629,   632,   633,   634,   202,
     245,   635,   636,   640,   641,   648,   650,   644,   245,   248,
     653,   245,   246,   649,   657,   654,   655,   656,   676,   678,
     663,   665,   244,   244,   677,   244,   682,   244,   244,   244,
     244,   245,   254,   244,   707,   755,   703,   247,   247,   710,
     713,   356,   724,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,  -197,   244,   727,   244,   244,   734,   730,   744,   731,
     245,   735,   737,   245,   749,   750,   245,   751,   753,   754,
     756,   762,   766,   768,   769,   770,   819,   248,   776,   806,
     780,   781,   784,   244,   244,   786,   809,   815,   244,   244,
     810,   818,   828,   848,   820,    29,   821,    30,   244,   841,
     244,   244,   247,   247,   832,   847,   846,   662,   851,   244,
     244,   853,   244,   861,   244,   244,   244,   129,   123,   244,
     261,   244,   244,   304,   249,   245,   245,   413,   245,   244,
     245,   245,   245,   245,   791,   639,   245,   792,   509,   741,
     248,   248,   591,   742,   589,   593,     0,     0,   249,     0,
     592,     0,     0,   594,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   245,   357,   245,   245,   357,
       0,     0,     0,     0,     0,     0,     0,   246,     0,     0,
       0,     0,     0,     0,     0,   246,     0,   247,   246,     0,
       0,     0,     0,     0,     0,     0,   245,   245,     0,     0,
       0,   245,   245,     0,     0,     0,     0,     0,   246,     0,
       0,   245,     0,   245,   245,   248,   248,     0,     0,     0,
       0,     0,   245,   245,     0,   245,   249,   245,   245,   245,
       0,     0,   245,     0,   245,   245,     0,     0,     0,     0,
     356,     0,   245,     0,   380,     0,     0,   246,     0,   381,
     246,     0,     0,   246,     0,     0,     0,     0,     0,   382,
     -28,     0,   383,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   384,     0,   385,   -28,     0,
       0,     0,     0,     0,     0,     0,     0,   386,     0,   249,
     249,   387,   357,   388,     0,   357,   357,   357,   389,     0,
     248,   390,     0,     0,   391,     0,     0,     0,     0,     0,
       0,     0,   246,   246,   392,   246,   393,   246,   246,   246,
     246,    55,     0,   246,     0,     0,   -28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
      56,     0,     0,     0,     0,     0,     0,     0,    57,     0,
       0,     0,   246,    58,   246,   246,     0,     0,    38,     0,
       0,     0,   247,     0,   249,   249,     0,     0,     0,     0,
     247,     0,     0,   247,     0,     5,     6,     0,     0,    59,
       0,     0,    60,   246,   246,     0,     0,    61,   246,   246,
       8,     0,     0,   247,     0,     0,     0,     0,   246,    62,
     246,   246,     0,     0,     0,     0,     0,     0,     0,   246,
     246,     0,   246,     0,   246,   246,   246,     0,     0,   246,
       0,   246,   246,     0,     0,     0,     0,     0,     0,   246,
       0,     0,   247,     0,     0,   247,     0,     0,   247,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   357,   249,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,     0,     0,
       0,     0,     0,     0,     0,   248,     0,     0,     0,     0,
       0,     0,     0,   248,     0,     0,   248,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   247,   247,     0,
     247,     0,   247,   247,   247,   247,   248,     0,   247,     0,
     177,    55,     0,     0,   179,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,     0,   181,
      56,     0,     0,     0,     0,     0,     0,   247,   354,   247,
     247,     0,   185,    58,     0,   248,   186,     0,   248,     0,
       0,   248,     0,     0,   187,   188,   189,     0,     0,     0,
       0,     0,   190,     0,     0,     0,     0,     0,   247,   247,
       0,     0,   491,   247,   247,     0,     0,     0,   194,   195,
       0,   197,   198,   247,     0,   247,   247,     0,   492,   202,
       0,     0,     0,    55,   247,   247,     0,   247,     0,   247,
     247,   247,     0,     0,   247,     0,   247,   247,     0,     2,
     248,   248,    56,   248,   247,   248,   248,   248,   248,     0,
      57,   248,     0,     0,   249,    58,     0,     0,     0,     0,
      38,     0,   249,     0,     0,   249,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     0,
     248,   128,   248,   248,    60,   249,     0,   357,     0,    61,
       0,     0,     8,     0,   499,     0,     0,     0,     0,     0,
       0,    62,     0,     0,    55,     0,     0,     0,     0,     0,
       0,   248,   248,     0,     0,     0,   248,   248,     0,     0,
       2,     0,     0,    56,   249,     0,   248,   249,   248,   248,
     249,    57,     0,     0,     0,     0,    58,   248,   248,     0,
     248,    38,   248,   248,   248,     0,     0,   248,     0,   248,
     248,     0,     0,     0,     0,     0,     0,   248,     5,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,    62,     0,     0,     0,     0,     0,     0,   249,
     249,     0,   249,     0,   249,   249,   249,   249,     0,     0,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,   249,   249,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    44,     0,     0,
     249,   249,     0,     0,     0,   249,   249,    53,    53,    68,
       0,    82,     0,     0,     0,   249,     0,   249,   249,     0,
       0,     0,     0,     0,     0,   323,   249,   249,     0,   249,
       0,   249,   249,   249,     0,   353,   249,     0,   249,   249,
     365,     0,    68,    68,    68,     0,   249,     0,   369,     0,
       0,     0,     0,   375,     0,   141,     0,     0,     0,   147,
       0,     0,   150,     0,     0,     0,     0,     0,     0,     0,
     155,     0,     0,     0,     0,     0,     0,     0,     0,    53,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,     0,     0,     0,     0,     0,
       0,   411,     0,     0,   694,   272,     0,     0,     0,     0,
       0,     0,     0,     0,   283,     0,     0,   286,     0,     0,
     288,     0,     0,     0,   717,   177,    55,     0,   293,   179,
       0,     0,   299,     0,     0,   302,     0,     0,     0,   313,
       0,     0,   169,     0,   181,    56,     0,    68,     0,     0,
       0,     0,     0,   314,     0,     0,     0,   185,    58,   355,
     361,   315,   355,   743,   353,     0,     0,   316,     0,   187,
     188,   189,     0,     0,     0,   317,     0,   190,     0,     0,
       0,    68,     0,     0,     0,   462,     0,     0,     0,     0,
       0,     0,     0,   194,   195,     0,   197,   198,     0,     0,
     318,   503,     0,     0,   202,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   518,     0,     0,
       0,     0,     0,   526,     0,     0,     0,     0,   782,   783,
       0,   785,     0,     0,   789,   541,   499,     0,     0,   796,
      68,     0,     0,     0,   543,     0,     0,     0,    53,     0,
       0,     0,   551,   552,   553,     0,   440,   411,     0,     0,
       0,   411,     0,     0,     0,     0,   444,     0,   812,   447,
     813,   814,   449,     0,     0,     0,     0,     0,     0,     0,
      68,    68,     0,     0,     0,   355,     0,     0,   355,   355,
     355,     0,     0,     0,     0,     0,     0,     0,     0,   829,
       0,     0,     0,     0,   694,   717,     0,     0,     0,     0,
     585,     0,     0,     0,   743,     0,   588,     0,     0,   590,
       0,     0,     0,     0,     0,   782,   783,     0,   785,   177,
      55,   789,   796,   179,   512,   812,   554,   813,   814,     0,
     610,     0,     0,   313,     0,   829,     0,     0,   181,    56,
       0,     0,     0,     0,   621,     0,     0,   314,     0,     0,
       0,   185,    58,     0,   408,   315,     0,     0,     0,     0,
       0,   316,     0,   187,   188,   189,     0,     0,     0,   317,
       0,   190,     0,     0,     0,     0,     0,     0,   555,     0,
       0,     0,     0,     0,     0,     0,     0,   194,   195,     0,
     197,   198,     0,     0,   318,     0,     0,     0,   202,    53,
       0,     0,     0,     0,     0,     0,     0,   576,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   675,     0,     0,     0,     0,
       0,   355,     0,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,     0,     0,     0,   686,   687,    68,   689,     0,     0,
       0,     0,   704,   176,     0,     0,     0,   177,    55,   178,
       0,   179,     0,     0,     0,   180,     0,     0,     0,     0,
       0,     0,     0,     0,   169,     0,   181,    56,   182,     0,
       0,     0,     0,     0,     0,   183,   184,   411,   645,   185,
      58,     0,   109,   186,     0,   268,     0,     0,     0,     0,
       0,   187,   188,   189,     0,   740,     0,     0,     0,   190,
       0,     0,    68,    68,    68,   191,   269,     0,     0,   193,
       0,     0,     0,     0,     0,   194,   270,   196,   197,   271,
     199,     0,     0,     0,   200,   201,   202,   203,   204,     0,
       0,   176,     0,     0,     0,   177,    55,   178,     0,   179,
       0,     0,     0,   180,     0,     0,     0,     0,     0,     0,
       0,     0,   169,     0,   181,    56,   182,     0,     0,     0,
       0,     0,     0,   183,   184,     0,     0,   185,    58,     0,
     109,   186,   794,   795,     0,     0,     0,     0,    68,   187,
     188,   189,     0,     0,     0,     0,     0,   190,     0,     0,
       0,     0,     0,   191,   192,     0,     0,   193,     0,     0,
       0,     0,     0,   194,   195,   196,   197,   198,   199,   817,
       0,     0,   200,   201,   202,   203,   204,     0,   176,     0,
     355,     0,   177,    55,   178,     0,   179,     0,     0,     0,
     180,     0,     0,     0,     0,     0,     0,   834,   835,   169,
       0,   181,    56,   182,     0,     0,     0,     0,     0,     0,
     183,   184,     0,     0,   185,    58,     0,   109,   186,     0,
       0,     0,     0,     0,     0,     0,   187,   188,   189,     0,
       0,     0,     0,     0,   190,     0,     0,     0,     0,     0,
     191,   398,     0,     0,   193,     0,     0,     0,     0,     0,
     194,   195,   196,   197,   198,   199,     0,     0,     0,   200,
     201,   202,   203,   204,   176,     0,     0,     0,   177,    55,
     178,     0,   179,     0,     0,     0,   180,     0,     0,     0,
       0,     0,     0,     0,     0,   169,     0,   181,    56,   182,
       0,     0,     0,     0,     0,     0,   183,   184,     0,     0,
     185,    58,     0,   109,   186,     0,     0,     0,     0,     0,
       0,     0,   187,   188,   189,     0,     0,     0,     0,     0,
     190,     0,     0,     0,     0,     0,   191,   433,     0,     0,
     193,     0,     0,     0,     0,     0,   194,   195,   196,   197,
     198,   199,     0,     0,     0,   200,   201,   202,   203,   204,
     176,     0,     0,     0,   177,    55,   178,     0,   179,     0,
       0,     0,   180,     0,     0,     0,     0,     0,     0,     0,
       0,   169,     0,   181,    56,   182,     0,     0,     0,     0,
       0,     0,   183,   184,     0,     0,   185,    58,     0,   109,
     186,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,     0,     0,     0,     0,     0,   190,     0,     0,     0,
       0,     0,   191,   435,     0,     0,   193,     0,     0,     0,
       0,     0,   194,   195,   196,   197,   198,   199,     0,     0,
       0,   200,   201,   202,   203,   204,   176,     0,     0,     0,
     177,    55,   178,     0,   179,     0,     0,     0,   180,     0,
       0,     0,     0,     0,     0,     0,     0,   169,     0,   181,
      56,   182,     0,     0,     0,     0,     0,     0,   183,   184,
       0,     0,   185,    58,     0,   109,   186,     0,     0,     0,
       0,     0,     0,     0,   187,   188,   189,     0,     0,     0,
       0,     0,   190,     0,     0,     0,     0,     0,   191,   572,
       0,     0,   193,     0,     0,     0,     0,     0,   194,   195,
     196,   197,   198,   199,     0,     0,     0,   200,   201,   202,
     203,   204,   176,     0,     0,     0,   177,    55,   178,     0,
     179,     0,     0,     0,   180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,    56,   182,     0,     0,
       0,     0,     0,     0,   183,   184,     0,     0,   185,    58,
       0,   109,   186,     0,     0,     0,     0,     0,     0,     0,
     187,   188,   189,     0,     0,     0,     0,   176,   190,     0,
       0,   177,    55,   178,   191,   179,     0,     0,   193,   180,
       0,     0,     0,     0,   194,   195,   196,   197,   198,   199,
     181,    56,   690,   200,     0,   202,   203,   204,     0,   691,
     692,     0,     0,   185,    58,     0,   109,   186,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,     0,     0,
       0,     0,     0,   190,     0,     0,     0,     0,     0,   191,
       0,     0,     0,   193,     0,     0,     0,     0,     0,   194,
     195,   196,   197,   198,   199,   177,    55,     0,   200,   179,
     202,   693,   204,     0,     0,     0,     0,     0,     0,   313,
       0,     0,     0,     0,   181,    56,     0,     0,     0,     0,
       0,     0,     0,   314,     0,     0,     0,   185,    58,     0,
     408,   315,     0,     0,     0,     0,     0,   316,     0,   187,
     188,   189,     0,     0,     0,   317,     0,   190,     0,     0,
       0,     0,     0,     0,   728,     0,     0,   177,    55,     0,
       0,   179,     0,   194,   195,     0,   197,   198,     0,     0,
     318,   313,     0,     0,   202,     0,   181,    56,     0,     0,
       0,     0,     0,     0,     0,   314,     0,     0,     0,   185,
      58,     0,     0,   315,     0,     0,     0,     0,     0,   316,
       0,   187,   188,   189,     0,     0,     0,   317,     0,   190,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   364,
     177,    55,     0,     0,   179,   194,   195,     0,   197,   198,
       0,     0,   318,     0,   313,     0,   202,     0,     0,   181,
      56,     0,     0,     0,     0,     0,     0,     0,   314,     0,
       0,     0,   185,    58,     0,   408,   315,     0,     0,     0,
       0,     0,   316,     0,   187,   188,   189,     0,     0,     0,
     317,     0,   190,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   177,    55,     0,     0,   179,     0,   194,   195,
       0,   197,   198,     0,     0,   318,   313,     0,     0,   202,
       0,   181,    56,     0,     0,     0,     0,     0,     0,     0,
     314,     0,     0,     0,   185,    58,     0,     0,   315,     0,
       0,     0,     0,     0,   316,     0,   187,   188,   189,     0,
       0,     0,   317,     0,   190,     0,     0,     0,     0,     0,
       0,     0,   500,     0,   177,    55,     0,     0,   179,     0,
     194,   195,     0,   197,   198,     0,     0,   318,   313,     0,
       0,   202,     0,   181,    56,     0,     0,     0,     0,     0,
       0,     0,   314,     0,     0,     0,   185,    58,     0,     0,
     315,     0,     0,     0,     0,     0,   316,     0,   187,   188,
     189,     0,     0,     0,   317,     0,   190,     0,     0,     0,
       0,     0,     0,     0,     0,   257,   177,    55,     0,     0,
     179,     0,   194,   195,     0,   197,   198,     0,     0,   318,
     313,     0,     0,   202,     0,   181,    56,     0,     0,     0,
       0,     0,     0,     0,   314,     0,     0,     0,   185,    58,
       0,     0,   315,     0,     0,     0,     0,     0,   316,     0,
     187,   188,   189,     0,     0,     0,   317,     0,   190,     0,
       0,     0,     0,     0,     0,     0,   564,     0,   177,    55,
       0,     0,   179,     0,   194,   195,     0,   197,   198,     0,
       0,   318,   313,     0,     0,   202,     0,   181,    56,     0,
       0,     0,     0,     0,     0,     0,   314,     0,     0,     0,
     185,    58,     0,     0,   315,     0,     0,     0,     0,     0,
     316,     0,   187,   188,   189,     0,     0,     0,   317,     0,
     190,     0,     0,     0,     0,     0,     0,     0,   566,     0,
     177,    55,     0,     0,   179,     0,   194,   195,     0,   197,
     198,     0,     0,   318,   313,     0,     0,   202,     0,   181,
      56,     0,     0,     0,     0,     0,     0,     0,   314,     0,
       0,     0,   185,    58,     0,   109,   315,     0,     0,     0,
       0,     0,   316,     0,   187,   188,   189,     0,     0,     0,
     317,     0,   190,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   177,    55,     0,     0,   179,     0,   194,   195,
       0,   197,   198,     0,     0,   318,   313,     0,     0,   202,
       0,   181,    56,     0,     0,     0,     0,     0,     0,     0,
     314,     0,     0,     0,   185,    58,     0,     0,   315,     0,
       0,     0,     0,     0,   316,     0,   187,   188,   189,     0,
       0,     0,   317,     0,   190,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   609,   177,    55,     0,     0,   179,
     194,   195,     0,   197,   198,     0,     0,   318,     0,   313,
       0,   202,     0,     0,   181,    56,     0,     0,     0,     0,
       0,     0,     0,   314,     0,     0,     0,   185,    58,     0,
       0,   315,     0,     0,     0,     0,     0,   316,     0,   187,
     188,   189,     0,     0,     0,   317,     0,   190,     0,     0,
       0,     0,     0,     0,     0,   627,     0,   177,    55,     0,
       0,   179,     0,   194,   195,     0,   197,   198,     0,     0,
     318,   313,     0,     0,   202,     0,   181,    56,     0,     0,
       0,     0,     0,     0,     0,   314,     0,     0,     0,   185,
      58,     0,     0,   315,     0,     0,     0,     0,     0,   316,
       0,   187,   188,   189,     0,     0,     0,   317,     0,   190,
       0,     0,     0,     0,     0,     0,     0,   669,     0,   177,
      55,     0,     0,   179,     0,   194,   195,     0,   197,   198,
       0,     0,   318,   313,     0,     0,   202,     0,   181,    56,
       0,     0,     0,     0,     0,     0,     0,   314,     0,     0,
       0,   185,    58,     0,     0,   315,     0,     0,     0,     0,
       0,   316,     0,   187,   188,   189,     0,     0,     0,   317,
       0,   190,     0,     0,     0,     0,     0,     0,     0,   671,
       0,   177,    55,     0,     0,   179,     0,   194,   195,     0,
     197,   198,     0,     0,   318,   313,     0,     0,   202,     0,
     181,    56,     0,     0,     0,     0,     0,     0,     0,   314,
       0,     0,     0,   185,    58,     0,     0,   315,     0,     0,
       0,     0,     0,   316,     0,   187,   188,   189,     0,     0,
       0,   317,     0,   190,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   685,   177,    55,     0,     0,   179,   194,
     195,     0,   197,   198,     0,     0,   318,     0,   313,     0,
     202,     0,     0,   181,    56,     0,     0,     0,     0,     0,
       0,     0,   314,     0,     0,     0,   185,    58,     0,     0,
     315,     0,     0,     0,     0,     0,   316,     0,   187,   188,
     189,     0,     0,     0,   317,     0,   190,     0,     0,     0,
       0,     0,     0,     0,   708,     0,   177,    55,     0,     0,
     179,     0,   194,   195,     0,   197,   198,     0,     0,   318,
     313,     0,     0,   202,     0,   181,    56,     0,     0,     0,
       0,     0,     0,     0,   314,     0,     0,     0,   185,    58,
       0,     0,   315,     0,     0,     0,     0,     0,   316,     0,
     187,   188,   189,     0,     0,     0,   317,     0,   190,     0,
       0,     0,     0,     0,     0,     0,   711,     0,   177,    55,
       0,     0,   179,     0,   194,   195,     0,   197,   198,     0,
       0,   318,   313,     0,     0,   202,     0,   181,    56,     0,
       0,     0,     0,     0,     0,     0,   314,     0,     0,     0,
     185,    58,     0,     0,   315,     0,     0,     0,     0,     0,
     316,     0,   187,   188,   189,     0,     0,     0,   317,     0,
     190,     0,     0,     0,     0,     0,     0,     0,   718,     0,
     177,    55,     0,     0,   179,     0,   194,   195,     0,   197,
     198,     0,     0,   318,   313,     0,     0,   202,     0,   181,
      56,     0,     0,     0,     0,     0,     0,     0,   314,     0,
       0,     0,   185,    58,     0,     0,   315,     0,     0,     0,
       0,     0,   316,     0,   187,   188,   189,     0,     0,     0,
     317,     0,   190,     0,     0,     0,     0,     0,     0,     0,
     725,     0,   177,    55,     0,     0,   179,     0,   194,   195,
       0,   197,   198,     0,     0,   318,   313,     0,     0,   202,
       0,   181,    56,     0,     0,     0,     0,     0,     0,     0,
     314,     0,     0,     0,   185,    58,     0,     0,   315,     0,
       0,     0,     0,     0,   316,     0,   187,   188,   189,     0,
       0,     0,   317,     0,   190,     0,     0,     0,     0,     0,
       0,     0,   732,     0,   177,    55,     0,     0,   179,     0,
     194,   195,     0,   197,   198,     0,     0,   318,   313,     0,
       0,   202,     0,   181,    56,     0,     0,     0,     0,     0,
       0,     0,   314,     0,     0,     0,   185,    58,     0,     0,
     315,     0,     0,     0,     0,     0,   316,     0,   187,   188,
     189,     0,     0,     0,   317,     0,   190,     0,     0,     0,
       0,     0,     0,     0,   758,     0,   177,    55,     0,     0,
     179,     0,   194,   195,     0,   197,   198,     0,     0,   318,
     313,     0,     0,   202,     0,   181,    56,     0,     0,     0,
       0,     0,     0,     0,   314,     0,     0,     0,   185,    58,
       0,     0,   315,     0,     0,     0,     0,     0,   316,     0,
     187,   188,   189,     0,     0,     0,   317,     0,   190,     0,
       0,     0,     0,     0,     0,     0,   764,     0,   177,    55,
       0,     0,   179,     0,   194,   195,     0,   197,   198,     0,
       0,   318,   313,     0,     0,   202,     0,   181,    56,     0,
       0,     0,     0,     0,     0,     0,   314,     0,     0,     0,
     185,    58,     0,     0,   315,     0,     0,     0,     0,     0,
     316,     0,   187,   188,   189,     0,     0,     0,   317,     0,
     190,     0,     0,     0,     0,     0,     0,     0,   771,     0,
     177,    55,     0,     0,   179,     0,   194,   195,     0,   197,
     198,     0,     0,   318,   313,     0,     0,   202,     0,   181,
      56,     0,     0,     0,     0,     0,     0,     0,   314,     0,
       0,     0,   185,    58,     0,     0,   315,     0,     0,     0,
       0,     0,   316,     0,   187,   188,   189,     0,     0,     0,
     317,     0,   190,     0,     0,     0,     0,     0,     0,     0,
     774,     0,   177,    55,     0,     0,   179,     0,   194,   195,
       0,   197,   198,     0,     0,   318,   313,     0,     0,   202,
       0,   181,    56,     0,     0,     0,     0,     0,     0,     0,
     314,     0,     0,     0,   185,    58,     0,     0,   315,     0,
       0,     0,     0,     0,   316,     0,   187,   188,   189,     0,
       0,     0,   317,     0,   190,     0,     0,     0,     0,     0,
       0,     0,   778,     0,   177,    55,     0,     0,   179,     0,
     194,   195,     0,   197,   198,     0,     0,   318,   313,     0,
       0,   202,     0,   181,    56,     0,     0,     0,     0,     0,
       0,     0,   314,     0,     0,     0,   185,    58,     0,     0,
     315,     0,     0,     0,     0,     0,   316,     0,   187,   188,
     189,     0,     0,     0,   317,     0,   190,     0,     0,     0,
       0,     0,     0,     0,   800,     0,   177,    55,     0,     0,
     179,     0,   194,   195,     0,   197,   198,     0,     0,   318,
     313,     0,     0,   202,     0,   181,    56,     0,     0,     0,
       0,     0,     0,     0,   314,     0,     0,     0,   185,    58,
       0,     0,   315,     0,     0,     0,     0,     0,   316,     0,
     187,   188,   189,     0,     0,     0,   317,     0,   190,     0,
       0,     0,     0,     0,     0,     0,   804,     0,   177,    55,
       0,     0,   179,     0,   194,   195,     0,   197,   198,     0,
       0,   318,   313,     0,     0,   202,     0,   181,    56,     0,
       0,     0,     0,     0,     0,     0,   314,     0,     0,     0,
     185,    58,     0,     0,   315,     0,     0,     0,     0,     0,
     316,     0,   187,   188,   189,     0,     0,     0,   317,     0,
     190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     816,   177,    55,     0,     0,   179,   194,   195,     0,   197,
     198,     0,     0,   318,     0,   313,     0,   202,     0,     0,
     181,    56,     0,     0,     0,     0,     0,     0,     0,   314,
       0,     0,     0,   185,    58,     0,     0,   315,     0,     0,
       0,     0,     0,   316,     0,   187,   188,   189,     0,     0,
       0,   317,     0,   190,     0,     0,     0,     0,     0,     0,
       0,   826,     0,   177,    55,     0,     0,   179,     0,   194,
     195,     0,   197,   198,     0,     0,   318,   313,     0,     0,
     202,     0,   181,    56,     0,     0,     0,     0,     0,     0,
       0,   314,     0,     0,     0,   185,    58,     0,     0,   315,
       0,     0,     0,     0,     0,   316,     0,   187,   188,   189,
       0,     0,     0,   317,     0,   190,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   833,   177,    55,     0,     0,
     179,   194,   195,     0,   197,   198,     0,     0,   318,     0,
     313,     0,   202,     0,     0,   181,    56,     0,     0,     0,
       0,     0,     0,     0,   314,     0,     0,     0,   185,    58,
       0,     0,   315,     0,     0,     0,     0,     0,   316,     0,
     187,   188,   189,     0,     0,     0,   317,     0,   190,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,    55,
       0,     0,   179,     0,   194,   195,     0,   197,   198,     0,
       0,   318,   313,     0,     0,   202,     0,   181,    56,   177,
      55,     0,     0,   179,     0,     0,   354,     0,     0,     0,
     185,    58,     0,     0,   186,     0,   169,     0,   181,    56,
     316,     0,   187,   188,   189,     0,     0,   354,   317,     0,
     190,   185,    58,     0,     0,   186,     0,     0,     0,     0,
       0,     0,     0,   187,   188,   189,   194,   195,     0,   197,
     198,   190,     0,   318,   177,    55,     0,   202,   179,     0,
       0,   790,     0,     0,     0,     0,     0,   194,   195,     0,
     197,   198,     0,   181,    56,   177,    55,   492,   202,   179,
       0,     0,   354,     0,     0,     0,   185,    58,     0,     0,
     186,     0,     0,     0,   181,    56,     0,     0,   187,   188,
     189,     0,     0,   354,     0,     0,   190,   185,    58,     0,
       0,   186,     0,     0,   679,     0,     0,     0,     0,   187,
     188,   189,   194,   195,     0,   197,   198,   190,     0,     0,
     177,    55,     0,   202,   179,   745,     0,     0,     0,     0,
       0,     0,     0,   194,   195,     0,   197,   198,     0,   181,
      56,   177,    55,     0,   202,   179,     0,     0,   354,     0,
       0,     0,   185,    58,     0,     0,   186,     0,     0,     0,
     181,    56,     0,     0,   187,   188,   189,     0,     0,   354,
       0,     0,   190,   185,    58,     0,     0,   186,     0,     0,
     747,     0,     0,     0,     0,   187,   188,   189,   194,   195,
       0,   197,   198,   190,     0,     0,   177,    55,     0,   202,
     179,   787,     0,     0,     0,     0,     0,     0,     0,   194,
     195,     0,   197,   198,     0,   181,    56,   177,    55,     0,
     202,   179,     0,     0,   354,     0,     0,     0,   185,    58,
       0,     0,   186,     0,     0,     0,   181,    56,     0,     0,
     187,   188,   189,     0,     0,   354,     0,     0,   190,   185,
      58,     0,     0,   186,     0,     0,   830,     0,     0,     0,
       0,   187,   188,   189,   194,   195,     0,   197,   198,   190,
       0,     0,   177,    55,     0,   202,   179,   842,     0,     0,
       0,     0,     0,     0,     0,   194,   195,     0,   197,   198,
       0,   181,    56,   177,    55,     0,   202,   179,     0,     0,
     354,     0,     0,     0,   185,    58,     0,     0,   186,     0,
       0,     0,   181,    56,     0,     0,   187,   188,   189,     0,
       0,   354,     0,     0,   190,   185,    58,     0,     0,   186,
       0,     0,   844,     0,     0,     0,     0,   187,   188,   189,
     194,   195,   380,   197,   198,   190,     0,   381,     0,     0,
       0,   202,     0,   854,     0,     0,     0,   430,     0,     0,
     383,   194,   195,     0,   197,   198,     0,     0,     0,     0,
       0,     0,   202,   384,     0,   385,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   386,     0,     0,     0,   387,
       0,   388,  -429,     0,     0,     0,   389,     0,     0,   390,
    -429,     0,   391,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   392,     0,   393
};

static const yytype_int16 yycheck[] =
{
      27,   108,   309,    64,   121,   109,   349,    68,   133,    61,
      35,    36,    20,    40,    41,    42,    37,   211,     6,    17,
      47,    48,    39,    50,    51,    77,    40,    41,   408,   133,
      20,   124,   412,    62,   127,     9,    50,    18,    46,   308,
      18,   682,   135,   133,   685,    39,   315,    18,    18,    70,
      71,    72,   113,   114,   349,    82,    18,    84,    85,    47,
      18,    88,    18,    80,   187,    37,    18,   190,    95,    20,
      84,   123,    99,   100,   101,    73,   103,   104,   112,    73,
      70,   275,   107,   117,   201,    99,   100,   108,   205,    16,
     124,    37,    73,   127,    68,    73,   125,   126,    70,    71,
      72,   122,    73,    73,    20,    18,    37,   211,   749,    71,
      39,    73,    39,    71,   141,    73,   143,    73,   109,    27,
     147,    73,    49,   150,    70,    71,    72,    18,   155,    56,
     157,   158,    12,    12,   161,    46,   108,   109,   165,    39,
      39,    72,   133,   157,    18,   206,    18,    37,   200,   274,
     122,    31,    31,    80,   175,    39,    83,    73,    71,    39,
      39,   133,    73,   188,    44,    44,   382,   260,    18,   262,
     274,   275,    80,   266,    18,   816,   122,    76,    39,    70,
      70,    71,    72,    18,    39,   401,    39,    87,   209,    68,
     313,   832,   833,   316,   317,   318,    12,    71,    39,    71,
      18,   308,   309,   175,    24,   846,    26,    18,   315,    18,
      90,    39,    28,    46,   430,    31,   188,    78,   108,   109,
     211,    71,     0,    39,   428,   429,   260,    71,    44,    18,
     264,   265,   122,    18,    87,    76,    71,   209,    12,   211,
     434,    16,   349,   133,   305,   349,   350,    18,    18,    39,
     620,   276,    85,    71,    28,    46,   283,    31,   319,   286,
      71,   288,    71,    18,    39,    39,   293,   109,   295,    60,
      44,    18,   299,    89,    49,   302,   366,   367,   658,   396,
     397,    56,    71,   274,   275,   175,    71,   308,   309,   379,
      20,   133,   382,    83,   315,    18,   268,    87,   359,   360,
      71,    71,   274,   275,    39,    80,   510,    18,    83,    23,
     371,   401,   402,    39,   609,    89,    71,    17,    48,   209,
      18,   211,   617,   416,    71,    17,    27,    20,   349,   636,
     434,    17,    39,    18,    48,    18,   308,   309,    73,    40,
     430,    16,    49,   315,    30,    16,    47,    47,    71,    50,
      51,    20,    18,    28,    47,    47,    49,    28,   349,   350,
      71,    18,   423,   486,   487,   488,   570,   571,    18,   211,
      45,    42,    20,    71,    45,   492,   493,   349,   268,    48,
     109,    27,   752,    33,   274,   275,    71,   682,    71,    20,
     685,    66,    67,    20,    21,    66,    67,   458,    99,    47,
      46,    49,   103,    78,   133,    71,    81,    78,   751,   461,
      81,    23,   437,   440,    71,    27,    20,   444,   308,   309,
     447,    48,   449,    46,    20,   315,   630,    20,   632,    39,
      20,    21,   274,   275,    55,    46,    39,    60,    50,    51,
     644,    41,    63,   434,    48,    23,   507,    27,   509,   653,
     820,   821,    48,    56,   749,    48,   751,    47,    70,   349,
     830,    41,   434,   667,    18,    47,    46,    12,    12,   521,
      48,   841,   842,   494,   844,    39,    46,   847,   848,    33,
      60,   851,   211,   853,   854,    49,    31,    31,    20,    21,
      60,   861,    56,     5,    39,    39,   613,   614,    10,    44,
      44,    39,    55,   707,    49,   609,    27,   349,   350,   713,
      63,    23,    41,   617,    39,    47,   620,    46,    14,   580,
     724,   816,   494,   727,    36,    46,    38,    46,    49,   636,
     734,    60,    46,    29,   586,    23,   640,   832,   833,    18,
      52,    60,    54,    16,   434,   274,   275,    59,    46,   576,
      62,   846,    12,    65,    33,    28,   646,   647,   762,    47,
      48,    14,    60,    75,   768,    77,    27,   109,    28,    73,
      80,    31,    45,    83,    48,   679,    29,    41,   682,    39,
      41,   685,    46,   635,    44,    46,   638,    46,   560,   561,
     562,   133,   434,    66,    67,    46,    60,   752,    12,    60,
     627,    60,   806,    85,   494,    78,    33,    34,    81,    60,
      46,    71,    48,    46,    28,   636,    58,    31,   609,    39,
     349,   350,    49,    50,   676,    39,   617,    60,    39,   620,
      44,   506,    74,   508,    76,    72,    12,    18,    49,   187,
     744,   745,   190,   747,   751,   749,   750,   751,   752,   640,
      39,   755,    28,    55,    41,    31,    48,    71,    12,    46,
      49,    63,    46,    39,   636,   820,   821,    56,    44,   211,
     560,   561,   562,    60,    28,   830,    53,    31,    39,   706,
     784,   708,   786,   787,    61,    39,   841,   842,   679,   844,
      44,   682,   847,   848,   685,    73,   851,    18,   853,   854,
      20,    21,    41,    39,    73,   434,   861,    46,    35,    39,
      37,   815,   816,    49,   766,    39,   820,   821,    47,    49,
      39,    60,    20,    21,    51,    49,   830,    20,   832,   833,
     751,   758,   274,   275,   761,    39,    47,   841,   842,    47,
     844,    47,   846,   847,   848,    49,   636,   851,    21,   853,
     854,    73,   109,   744,   745,    72,   747,   861,   749,   750,
     751,   752,    20,    21,   755,   313,    27,   609,   316,   317,
     318,   798,    27,   800,    48,   617,   133,    47,   620,   751,
      41,   477,   478,   479,   480,    46,    41,    18,    49,   239,
     240,    46,    39,   784,    49,   786,   787,   824,   640,    60,
      11,    12,   475,   476,    15,    60,    39,   349,   350,   481,
     482,   483,     4,     8,   484,   485,    64,     3,    71,    30,
      31,    73,    73,    47,   815,   816,    48,    73,    39,   820,
     821,    73,    43,    44,    16,    73,    47,   679,    16,   830,
     682,   832,   833,   685,    55,    56,    57,    47,    47,    83,
     841,   842,    63,   844,   211,   846,   847,   848,    39,     6,
     851,   751,   853,   854,    73,   109,    17,    71,    79,    80,
     861,    82,    83,    18,    48,    33,    47,    39,    39,    90,
     609,    71,    47,    71,    16,    39,    16,    47,   617,   133,
      47,   620,   434,    72,    70,    39,    39,    72,     6,    17,
      73,    73,   744,   745,    73,   747,    73,   749,   750,   751,
     752,   640,    18,   755,    47,    22,    72,   274,   275,    33,
      47,   469,    47,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,    22,   784,    47,   786,   787,    47,    73,    71,    73,
     679,    73,    73,   682,    73,    71,   685,    47,    47,    47,
      72,    47,    71,    47,    39,    39,    17,   211,    73,    47,
      73,    73,    71,   815,   816,    71,    73,    71,   820,   821,
      73,    73,    73,    22,    71,    11,    71,    11,   830,    71,
     832,   833,   349,   350,    73,    71,    73,   562,    71,   841,
     842,    71,   844,    71,   846,   847,   848,    72,    70,   851,
     123,   853,   854,   168,   109,   744,   745,   254,   747,   861,
     749,   750,   751,   752,   751,   522,   755,   751,   360,   678,
     274,   275,   471,   678,   469,   473,    -1,    -1,   133,    -1,
     472,    -1,    -1,   474,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   784,   187,   786,   787,   190,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   609,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   617,    -1,   434,   620,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   815,   816,    -1,    -1,
      -1,   820,   821,    -1,    -1,    -1,    -1,    -1,   640,    -1,
      -1,   830,    -1,   832,   833,   349,   350,    -1,    -1,    -1,
      -1,    -1,   841,   842,    -1,   844,   211,   846,   847,   848,
      -1,    -1,   851,    -1,   853,   854,    -1,    -1,    -1,    -1,
     678,    -1,   861,    -1,     5,    -1,    -1,   679,    -1,    10,
     682,    -1,    -1,   685,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,   274,
     275,    52,   313,    54,    -1,   316,   317,   318,    59,    -1,
     434,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   744,   745,    75,   747,    77,   749,   750,   751,
     752,    12,    -1,   755,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,   784,    44,   786,   787,    -1,    -1,    49,    -1,
      -1,    -1,   609,    -1,   349,   350,    -1,    -1,    -1,    -1,
     617,    -1,    -1,   620,    -1,    66,    67,    -1,    -1,    70,
      -1,    -1,    73,   815,   816,    -1,    -1,    78,   820,   821,
      81,    -1,    -1,   640,    -1,    -1,    -1,    -1,   830,    90,
     832,   833,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   841,
     842,    -1,   844,    -1,   846,   847,   848,    -1,    -1,   851,
      -1,   853,   854,    -1,    -1,    -1,    -1,    -1,    -1,   861,
      -1,    -1,   679,    -1,    -1,   682,    -1,    -1,   685,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   469,   434,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   609,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   617,    -1,    -1,   620,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   744,   745,    -1,
     747,    -1,   749,   750,   751,   752,   640,    -1,   755,    -1,
      11,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,   784,    39,   786,
     787,    -1,    43,    44,    -1,   679,    47,    -1,   682,    -1,
      -1,   685,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,   815,   816,
      -1,    -1,    73,   820,   821,    -1,    -1,    -1,    79,    80,
      -1,    82,    83,   830,    -1,   832,   833,    -1,    89,    90,
      -1,    -1,    -1,    12,   841,   842,    -1,   844,    -1,   846,
     847,   848,    -1,    -1,   851,    -1,   853,   854,    -1,    28,
     744,   745,    31,   747,   861,   749,   750,   751,   752,    -1,
      39,   755,    -1,    -1,   609,    44,    -1,    -1,    -1,    -1,
      49,    -1,   617,    -1,    -1,   620,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
     784,    70,   786,   787,    73,   640,    -1,   678,    -1,    78,
      -1,    -1,    81,    -1,   350,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,   815,   816,    -1,    -1,    -1,   820,   821,    -1,    -1,
      28,    -1,    -1,    31,   679,    -1,   830,   682,   832,   833,
     685,    39,    -1,    -1,    -1,    -1,    44,   841,   842,    -1,
     844,    49,   846,   847,   848,    -1,    -1,   851,    -1,   853,
     854,    -1,    -1,    -1,    -1,    -1,    -1,   861,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,   744,
     745,    -1,   747,    -1,   749,   750,   751,   752,    -1,    -1,
     755,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   784,
      -1,   786,   787,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
     815,   816,    -1,    -1,    -1,   820,   821,    35,    36,    37,
      -1,    39,    -1,    -1,    -1,   830,    -1,   832,   833,    -1,
      -1,    -1,    -1,    -1,    -1,   176,   841,   842,    -1,   844,
      -1,   846,   847,   848,    -1,   186,   851,    -1,   853,   854,
     191,    -1,    70,    71,    72,    -1,   861,    -1,   199,    -1,
      -1,    -1,    -1,   204,    -1,    83,    -1,    -1,    -1,    87,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,   252,    -1,    -1,   620,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,   145,    -1,    -1,
     148,    -1,    -1,    -1,   640,    11,    12,    -1,   156,    15,
      -1,    -1,   160,    -1,    -1,   163,    -1,    -1,    -1,    25,
      -1,    -1,    28,    -1,    30,    31,    -1,   175,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,   187,
     188,    47,   190,   679,   315,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,
      -1,   209,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    -1,    82,    83,    -1,    -1,
      86,   352,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   368,    -1,    -1,
      -1,    -1,    -1,   374,    -1,    -1,    -1,    -1,   744,   745,
      -1,   747,    -1,    -1,   750,   386,   752,    -1,    -1,   755,
     268,    -1,    -1,    -1,   395,    -1,    -1,    -1,   276,    -1,
      -1,    -1,   403,   404,   405,    -1,   284,   408,    -1,    -1,
      -1,   412,    -1,    -1,    -1,    -1,   294,    -1,   784,   297,
     786,   787,   300,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     308,   309,    -1,    -1,    -1,   313,    -1,    -1,   316,   317,
     318,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   815,
      -1,    -1,    -1,    -1,   820,   821,    -1,    -1,    -1,    -1,
     461,    -1,    -1,    -1,   830,    -1,   467,    -1,    -1,   470,
      -1,    -1,    -1,    -1,    -1,   841,   842,    -1,   844,    11,
      12,   847,   848,    15,   362,   851,    18,   853,   854,    -1,
     491,    -1,    -1,    25,    -1,   861,    -1,    -1,    30,    31,
      -1,    -1,    -1,    -1,   505,    -1,    -1,    39,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,    61,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,
      82,    83,    -1,    -1,    86,    -1,    -1,    -1,    90,   437,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   445,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   586,    -1,    -1,    -1,    -1,
      -1,   469,    -1,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,    -1,    -1,    -1,   615,   616,   494,   618,    -1,    -1,
      -1,    -1,   623,     7,    -1,    -1,    -1,    11,    12,    13,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,   658,   536,    43,
      44,    -1,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,   676,    -1,    -1,    -1,    63,
      -1,    -1,   560,   561,   562,    69,    70,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,    83,
      84,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
      -1,     7,    -1,    -1,    -1,    11,    12,    13,    -1,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    43,    44,    -1,
      46,    47,   753,   754,    -1,    -1,    -1,    -1,   636,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    83,    84,   790,
      -1,    -1,    88,    89,    90,    91,    92,    -1,     7,    -1,
     678,    -1,    11,    12,    13,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,   818,   819,    28,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    43,    44,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    88,
      89,    90,    91,    92,     7,    -1,    -1,    -1,    11,    12,
      13,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    84,    -1,    -1,    -1,    88,    89,    90,    91,    92,
       7,    -1,    -1,    -1,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    43,    44,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    84,    -1,    -1,
      -1,    88,    89,    90,    91,    92,     7,    -1,    -1,    -1,
      11,    12,    13,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    43,    44,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    83,    84,    -1,    -1,    -1,    88,    89,    90,
      91,    92,     7,    -1,    -1,    -1,    11,    12,    13,    -1,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,    44,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,     7,    63,    -1,
      -1,    11,    12,    13,    69,    15,    -1,    -1,    73,    19,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    83,    84,
      30,    31,    32,    88,    -1,    90,    91,    92,    -1,    39,
      40,    -1,    -1,    43,    44,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    82,    83,    84,    11,    12,    -1,    88,    15,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    11,    12,    -1,
      -1,    15,    -1,    79,    80,    -1,    82,    83,    -1,    -1,
      86,    25,    -1,    -1,    90,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,    -1,    -1,    61,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      11,    12,    -1,    -1,    15,    79,    80,    -1,    82,    83,
      -1,    -1,    86,    -1,    25,    -1,    90,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    12,    -1,    -1,    15,    -1,    79,    80,
      -1,    82,    83,    -1,    -1,    86,    25,    -1,    -1,    90,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    11,    12,    -1,    -1,    15,    -1,
      79,    80,    -1,    82,    83,    -1,    -1,    86,    25,    -1,
      -1,    90,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    11,    12,    -1,    -1,
      15,    -1,    79,    80,    -1,    82,    83,    -1,    -1,    86,
      25,    -1,    -1,    90,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    11,    12,
      -1,    -1,    15,    -1,    79,    80,    -1,    82,    83,    -1,
      -1,    86,    25,    -1,    -1,    90,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      11,    12,    -1,    -1,    15,    -1,    79,    80,    -1,    82,
      83,    -1,    -1,    86,    25,    -1,    -1,    90,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    12,    -1,    -1,    15,    -1,    79,    80,
      -1,    82,    83,    -1,    -1,    86,    25,    -1,    -1,    90,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    11,    12,    -1,    -1,    15,
      79,    80,    -1,    82,    83,    -1,    -1,    86,    -1,    25,
      -1,    90,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    11,    12,    -1,
      -1,    15,    -1,    79,    80,    -1,    82,    83,    -1,    -1,
      86,    25,    -1,    -1,    90,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,    -1,    -1,    61,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    11,
      12,    -1,    -1,    15,    -1,    79,    80,    -1,    82,    83,
      -1,    -1,    86,    25,    -1,    -1,    90,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,    61,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    11,    12,    -1,    -1,    15,    -1,    79,    80,    -1,
      82,    83,    -1,    -1,    86,    25,    -1,    -1,    90,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,
      -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    11,    12,    -1,    -1,    15,    79,
      80,    -1,    82,    83,    -1,    -1,    86,    -1,    25,    -1,
      90,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    11,    12,    -1,    -1,
      15,    -1,    79,    80,    -1,    82,    83,    -1,    -1,    86,
      25,    -1,    -1,    90,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    11,    12,
      -1,    -1,    15,    -1,    79,    80,    -1,    82,    83,    -1,
      -1,    86,    25,    -1,    -1,    90,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      11,    12,    -1,    -1,    15,    -1,    79,    80,    -1,    82,
      83,    -1,    -1,    86,    25,    -1,    -1,    90,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    11,    12,    -1,    -1,    15,    -1,    79,    80,
      -1,    82,    83,    -1,    -1,    86,    25,    -1,    -1,    90,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    11,    12,    -1,    -1,    15,    -1,
      79,    80,    -1,    82,    83,    -1,    -1,    86,    25,    -1,
      -1,    90,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    11,    12,    -1,    -1,
      15,    -1,    79,    80,    -1,    82,    83,    -1,    -1,    86,
      25,    -1,    -1,    90,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    11,    12,
      -1,    -1,    15,    -1,    79,    80,    -1,    82,    83,    -1,
      -1,    86,    25,    -1,    -1,    90,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      11,    12,    -1,    -1,    15,    -1,    79,    80,    -1,    82,
      83,    -1,    -1,    86,    25,    -1,    -1,    90,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    11,    12,    -1,    -1,    15,    -1,    79,    80,
      -1,    82,    83,    -1,    -1,    86,    25,    -1,    -1,    90,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    11,    12,    -1,    -1,    15,    -1,
      79,    80,    -1,    82,    83,    -1,    -1,    86,    25,    -1,
      -1,    90,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    11,    12,    -1,    -1,
      15,    -1,    79,    80,    -1,    82,    83,    -1,    -1,    86,
      25,    -1,    -1,    90,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    11,    12,
      -1,    -1,    15,    -1,    79,    80,    -1,    82,    83,    -1,
      -1,    86,    25,    -1,    -1,    90,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    11,    12,    -1,    -1,    15,    79,    80,    -1,    82,
      83,    -1,    -1,    86,    -1,    25,    -1,    90,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,
      -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    11,    12,    -1,    -1,    15,    -1,    79,
      80,    -1,    82,    83,    -1,    -1,    86,    25,    -1,    -1,
      90,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    11,    12,    -1,    -1,
      15,    79,    80,    -1,    82,    83,    -1,    -1,    86,    -1,
      25,    -1,    90,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
      -1,    -1,    15,    -1,    79,    80,    -1,    82,    83,    -1,
      -1,    86,    25,    -1,    -1,    90,    -1,    30,    31,    11,
      12,    -1,    -1,    15,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    28,    -1,    30,    31,
      53,    -1,    55,    56,    57,    -1,    -1,    39,    61,    -1,
      63,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    79,    80,    -1,    82,
      83,    63,    -1,    86,    11,    12,    -1,    90,    15,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,
      82,    83,    -1,    30,    31,    11,    12,    89,    90,    15,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    30,    31,    -1,    -1,    55,    56,
      57,    -1,    -1,    39,    -1,    -1,    63,    43,    44,    -1,
      -1,    47,    -1,    -1,    71,    -1,    -1,    -1,    -1,    55,
      56,    57,    79,    80,    -1,    82,    83,    63,    -1,    -1,
      11,    12,    -1,    90,    15,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    -1,    82,    83,    -1,    30,
      31,    11,    12,    -1,    90,    15,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      30,    31,    -1,    -1,    55,    56,    57,    -1,    -1,    39,
      -1,    -1,    63,    43,    44,    -1,    -1,    47,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    55,    56,    57,    79,    80,
      -1,    82,    83,    63,    -1,    -1,    11,    12,    -1,    90,
      15,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    -1,    82,    83,    -1,    30,    31,    11,    12,    -1,
      90,    15,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    30,    31,    -1,    -1,
      55,    56,    57,    -1,    -1,    39,    -1,    -1,    63,    43,
      44,    -1,    -1,    47,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    55,    56,    57,    79,    80,    -1,    82,    83,    63,
      -1,    -1,    11,    12,    -1,    90,    15,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    82,    83,
      -1,    30,    31,    11,    12,    -1,    90,    15,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    30,    31,    -1,    -1,    55,    56,    57,    -1,
      -1,    39,    -1,    -1,    63,    43,    44,    -1,    -1,    47,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    55,    56,    57,
      79,    80,     5,    82,    83,    63,    -1,    10,    -1,    -1,
      -1,    90,    -1,    71,    -1,    -1,    -1,    20,    -1,    -1,
      23,    79,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    36,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      -1,    54,    55,    -1,    -1,    -1,    59,    -1,    -1,    62,
      63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    28,    42,    45,    66,    67,    78,    81,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   116,
     117,   118,   147,    39,    39,    78,   109,    39,     0,    97,
     102,   103,    16,    45,   118,    27,    41,    46,    49,    60,
     119,   121,   122,   124,   109,    20,    73,   119,   121,   124,
      39,    39,   108,   109,   108,    12,    31,    39,    44,    70,
      73,    78,    90,   104,   105,   106,   107,   108,   109,   110,
     117,   119,   125,   126,   127,   128,   132,   133,   141,   142,
     143,    39,   109,    60,   121,   122,   124,    60,   122,   124,
      60,   124,    20,    39,    76,   121,   124,   124,    60,   119,
     121,   122,   124,   119,   121,   124,    20,    41,    47,    46,
     150,    39,   134,   143,    39,   129,   130,   134,    48,   111,
     111,   104,   119,   133,   143,    90,   104,   143,    70,   126,
      73,   140,   150,    46,    85,   139,   144,    18,    33,   120,
     124,   109,    60,   122,   124,    60,   124,   109,    60,   124,
     109,    39,    76,    73,   124,   109,    60,   121,   122,   124,
      60,   122,   124,    60,   124,   121,   124,   124,   108,    28,
      71,   104,   135,   136,   137,   138,     7,    11,    13,    15,
      19,    30,    32,    39,    40,    43,    47,    55,    56,    57,
      63,    69,    70,    73,    79,    80,    81,    82,    83,    84,
      88,    89,    90,    91,    92,   104,   105,   107,   109,   138,
     150,   151,   152,   153,   155,   156,   157,   159,   160,   161,
     162,   164,   165,   167,   169,   175,   177,   178,   179,   180,
     181,   182,   183,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   201,   215,   216,   218,   219,   220,
     139,   111,    23,   111,    18,    73,   139,    72,    48,   129,
     143,   140,   139,   144,   134,   134,   139,   144,    49,    70,
      80,    83,   109,   112,   145,   151,    18,   123,   144,    39,
      18,    33,   124,   109,    60,   124,   109,   124,   109,   124,
      73,    73,   124,   109,    60,   122,   124,    60,   124,   109,
      60,   124,   109,   124,   123,    39,    83,    87,    18,    18,
      71,    28,   104,    25,    39,    47,    53,    61,    86,   105,
     107,   190,   194,   198,   199,   200,   201,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,    39,    73,    39,    73,    47,
      17,    47,    47,   198,    39,   109,   192,   193,   214,   105,
     108,   109,   112,   214,    73,   198,    20,    21,    47,   198,
     150,    39,   129,    20,    47,   198,   129,    20,   111,    21,
       5,    10,    20,    23,    36,    38,    48,    52,    54,    59,
      62,    65,    75,    77,   111,   202,    89,   104,    70,   152,
      73,    20,    21,    48,   202,   202,    55,    63,    46,   131,
     148,   198,    23,   130,    72,    73,   139,   144,   144,   139,
     139,   144,    68,   105,   107,   113,   114,   115,    47,    47,
      20,    80,    83,    70,   151,    70,   108,    18,    39,   124,
     109,   124,   124,   124,   109,    60,   124,   109,   124,   109,
     124,    20,   111,    39,    71,   104,   136,   137,    39,    87,
     214,     6,    71,   136,   214,   214,   214,    17,    73,     9,
      68,     4,     8,    64,     3,    24,    26,    33,    34,    49,
      50,    35,    37,    51,    53,    61,    58,    74,    76,    73,
      73,    73,    89,   104,   138,   160,   171,   172,   174,   153,
      71,   146,   198,   198,    71,    48,   111,   197,   111,   197,
      47,    49,   109,    73,    39,   112,    39,   112,   198,    73,
      14,    29,   184,   185,    73,    16,   198,    73,    73,    16,
      20,    39,    56,   112,    16,    39,    56,    80,    83,   112,
     191,   198,    20,   198,   129,   129,    39,   112,   191,    39,
     112,   198,   198,   198,    18,    70,   131,   149,   131,   144,
      27,    80,    18,    33,    71,   146,    71,   146,    80,   112,
      47,    47,    70,   108,   124,   124,   109,   124,   124,    83,
      39,    71,   111,    39,   150,   198,     6,    71,   198,   205,
     198,   206,   207,   208,   209,   210,   210,   211,   211,   211,
     211,   212,   212,   212,   213,   213,   214,   214,   214,    73,
     198,   129,   129,    89,   104,    73,    17,    18,    18,    71,
      71,   198,   148,    48,   111,   148,   111,    71,   146,    33,
      47,    49,    47,    39,    39,    71,    47,   150,    29,   185,
      71,    16,    39,    56,    47,   109,    20,    21,    39,    72,
      16,    73,    73,    47,    39,    39,    72,    70,    18,    70,
     107,   107,   114,    73,    71,    73,    71,    47,    80,    71,
     146,    71,   146,   124,   150,   198,     6,    73,    17,    71,
     173,   174,    73,   129,   129,    73,   198,   198,   160,   198,
      32,    39,    40,    91,   153,   154,   155,   158,   163,   166,
     168,   170,   176,    72,   198,   124,    71,    47,    71,   146,
      33,    71,   146,    47,   150,   137,   150,   153,    71,   146,
      39,   112,    39,   112,    47,    71,   146,    47,    70,   131,
      73,    73,    71,   146,    47,    73,    71,    73,    71,   150,
     198,   199,   203,   153,    71,    71,   173,    71,   173,    73,
      71,    47,    17,    47,    47,    22,    72,   124,    71,   146,
     124,    71,    47,    71,    71,   146,    71,    71,    47,    39,
      39,    71,   146,    71,    71,   146,    73,    71,    71,   146,
      73,    73,   153,   153,    71,   153,    71,    71,   173,   153,
      73,   171,   172,   154,   198,   198,   153,   124,    71,   124,
      71,   146,    71,   150,    71,   146,    47,    71,    71,    73,
      73,    71,   153,   153,   153,    71,    73,   198,    73,    17,
      71,    71,   124,   124,    71,    71,    71,   146,    73,   153,
      71,   173,    73,    73,   198,   198,   154,   154,   124,    71,
     154,    71,    71,   173,    71,   173,    73,    71,    22,   154,
     154,    71,   154,    71,    71,   173,   154,   154,   154,   154,
     154,    71,   154
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    95,    95,    96,    96,    97,    97,
      97,    97,    98,    99,   100,   101,   102,   102,   103,   103,
     104,   104,   105,   105,   106,   106,   107,   107,   108,   109,
     109,   110,   110,   111,   111,   112,   113,   113,   114,   114,
     115,   115,   115,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   117,   117,   118,   118,   118,
     118,   118,   119,   119,   120,   120,   121,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   126,   127,   127,   127,
     128,   128,   129,   129,   130,   130,   130,   130,   131,   131,
     132,   132,   133,   133,   133,   133,   133,   133,   133,   133,
     134,   134,   135,   135,   136,   136,   137,   137,   137,   137,
     137,   137,   138,   138,   139,   140,   140,   141,   142,   142,
     142,   142,   142,   142,   142,   142,   143,   143,   143,   143,
     144,   144,   144,   144,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   146,   146,   147,   147,
     147,   147,   147,   147,   147,   147,   148,   148,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   152,   152,
     152,   153,   153,   153,   153,   153,   153,   154,   154,   154,
     154,   154,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   156,   157,   158,   159,   160,   160,   160,
     160,   160,   160,   160,   161,   162,   163,   164,   164,   165,
     166,   167,   167,   168,   168,   169,   169,   169,   169,   169,
     169,   169,   169,   170,   170,   170,   170,   170,   170,   170,
     170,   171,   171,   172,   172,   172,   172,   173,   174,   174,
     175,   176,   177,   177,   178,   179,   179,   180,   180,   181,
     182,   183,   183,   183,   184,   184,   185,   186,   186,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   188,
     188,   188,   188,   188,   188,   188,   189,   189,   189,   189,
     189,   190,   190,   190,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     192,   192,   192,   193,   193,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   196,   196,   196,   196,   196,   196,   197,
     197,   198,   198,   199,   199,   199,   199,   199,   199,   200,
     200,   201,   201,   201,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   203,   203,   203,   204,
     204,   205,   205,   206,   206,   207,   207,   208,   208,   209,
     209,   209,   210,   210,   210,   210,   210,   211,   211,   211,
     211,   212,   212,   212,   213,   213,   213,   213,   214,   214,
     214,   214,   214,   215,   216,   217,   217,   217,   218,   218,
     218,   218,   219,   220
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     3,     5,     6,     6,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     2,     3,     2,     3,     3,     1,     1,     1,
       3,     3,     1,     3,     5,     4,     6,     4,     6,     5,
       7,     4,     6,     5,     7,     5,     7,     6,     8,     4,
       6,     5,     7,     5,     7,     6,     8,     5,     7,     6,
       8,     6,     8,     7,     9,     2,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     2,     2,     5,     3,     2,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     1,     3,     4,     1,     2,     1,     1,
       2,     3,     2,     3,     2,     3,     3,     4,     3,     4,
       1,     2,     2,     4,     3,     1,     2,     3,     3,     4,
       3,     4,     2,     1,     2,     1,     1,     2,     3,     4,
       4,     5,     2,     3,     3,     4,     3,     4,     5,     6,
       2,     3,     3,     4,     4,     5,     5,     6,     4,     5,
       5,     6,     6,     7,     7,     8,     3,     1,     3,     4,
       4,     5,     4,     5,     5,     6,     2,     3,     3,     4,
       3,     1,     2,     3,     2,     1,     3,     3,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     5,     7,     7,     3,     5,     5,
       5,     1,     1,     1,     1,     6,     7,     7,     8,     7,
       8,     8,     9,     6,     7,     7,     8,     7,     8,     8,
       9,     1,     1,     2,     3,     2,     3,     1,     3,     1,
       7,     7,     2,     3,     3,     2,     3,     2,     3,     3,
       5,     3,     4,     5,     2,     1,     5,     1,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     4,
       3,     1,     3,     3,     4,     5,     5,     6,     6,     7,
       7,     8,     5,     6,     6,     7,     7,     8,     8,     9,
       3,     3,     5,     4,     4,     3,     4,     5,     6,     6,
       7,     5,     6,     6,     7,     5,     6,     6,     7,     7,
       8,     8,     9,     3,     4,     3,     4,     3,     4,     3,
       4,     5,     6,     3,     4,     3,     4,     4,     4,     4,
       3,     1,     1,     5,     4,     3,     5,     4,     3,     1,
       1,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     5,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     1,
       1,     1,     2,     2
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
  case 2:
#line 31 "parser.y"
                     {cout<<"Done"<<endl;}
#line 3017 "parser.tab.c"
    break;


#line 3021 "parser.tab.c"

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
#line 850 "parser.y"


int main(){
    yyparse();
    exit(0);
}
