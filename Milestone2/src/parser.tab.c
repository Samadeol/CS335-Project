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
#include "symbol_table.cpp"
using namespace std;

extern int yylex();
extern int yylineno;
extern FILE* yyin;

#define YYDEBUG 1

fstream fout,fin;
stack<int> st;
int node_number=1;
string type;

void yyerror(const char* error){
    fprintf (stderr, "%s | %d\n",error,yylineno);
    exit(1);
}

void func(string q,string p){
    if(p=="0") return;
    if(p[1]=='?') p="0";
    fout<<"n"<<node_number<<"[label=\""<<q<<"\"]"<<endl;
    int a[p.size()]={0};
    for(int i=p.size()-1;i>=0;i--){
        if(p[i]=='0'){
            int t = st.top();
            st.pop();
            a[i]=t;
        }
    }
    for(int i=0;i<p.size();i++){
        if(p[i]>'1') continue;
        fout<<"n"<<node_number<<"->";
        char c = 'a'+i;
        if(p[i]=='0') fout<<"n"<<a[i]<<endl;
        else fout<<"n"<<node_number<<c<<endl;
    }
    st.push(node_number);
    node_number++;
    return;
}



#line 118 "parser.tab.c"

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
    PACKAGE = 313,
    PERCENT = 314,
    PERCENT_EQUALS = 315,
    PERMITS = 316,
    PLUS = 317,
    PLUS_EQUALS = 318,
    PLUS_PLUS = 319,
    POWER = 320,
    POWER_EQUALS = 321,
    PRIVATE = 322,
    PUBLIC = 323,
    QUESTION = 324,
    RETURN = 325,
    RIGHT_CURLY_BRACE = 326,
    RIGHT_PARANTHESIS = 327,
    RIGHT_SQUARE_BRACE = 328,
    SEMI_COLON = 329,
    SLASH = 330,
    SLASH_EQUALS = 331,
    STAR = 332,
    STAR_EQUALS = 333,
    STATIC = 334,
    STRING_TYPE = 335,
    STRING_LITERAL = 336,
    SUPER = 337,
    SYNCHRONIZED = 338,
    TEXTBLOCK = 339,
    THIS = 340,
    THROW = 341,
    THROWS = 342,
    TILDA = 343,
    TRIPLE_DOT = 344,
    TRY = 345,
    VAR = 346,
    VOID = 347,
    WHILE = 348,
    YIELD = 349
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 52 "parser.y"

    struct {
        char label[1000];
        char type[100];
    }item;

#line 272 "parser.tab.c"

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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5389

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  130
/* YYNRULES -- Number of rules.  */
#define YYNRULES  430
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  838

#define YYUNDEFTOK  2
#define YYMAXUTOK   349


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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    66,    66,    69,    70,    71,    72,    73,    74,    75,
      79,    83,    84,    88,    89,    90,    91,    95,    99,   103,
     107,   111,   112,   116,   117,   121,   122,   126,   127,   128,
     132,   133,   137,   138,   142,   146,   147,   151,   155,   156,
     160,   164,   165,   169,   170,   174,   175,   176,   180,   184,
     185,   189,   190,   194,   195,   196,   197,   201,   202,   206,
     207,   211,   212,   216,   217,   221,   222,   226,   227,   228,
     232,   233,   234,   238,   239,   243,   244,   248,   249,   250,
     251,   255,   256,   260,   261,   265,   266,   267,   268,   269,
     270,   271,   272,   276,   277,   281,   282,   286,   287,   291,
     292,   293,   294,   295,   296,   300,   301,   305,   309,   310,
     314,   318,   322,   323,   324,   325,   326,   327,   328,   329,
     333,   334,   335,   336,   340,   341,   342,   343,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     362,   363,   367,   371,   372,   373,   374,   378,   379,   380,
     381,   385,   386,   390,   391,   395,   396,   400,   401,   402,
     403,   404,   408,   409,   410,   411,   412,   413,   417,   418,
     419,   420,   421,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   439,   443,   447,   451,   455,   456,
     457,   458,   459,   460,   461,   464,   468,   472,   476,   477,
     481,   485,   489,   490,   494,   495,   499,   500,   501,   502,
     503,   504,   505,   506,   510,   511,   512,   513,   514,   515,
     516,   517,   521,   522,   526,   527,   528,   529,   533,   537,
     538,   542,   546,   550,   551,   555,   559,   560,   564,   565,
     569,   573,   577,   578,   579,   583,   584,   588,   592,   593,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     610,   611,   612,   613,   614,   615,   616,   620,   621,   622,
     623,   624,   628,   629,   630,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,   646,   647,   648,
     649,   653,   654,   655,   659,   660,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   698,   699,   700,   701,   702,   703,
     707,   708,   712,   713,   717,   718,   719,   720,   721,   722,
     726,   727,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     749,   750,   751,   752,   753,   754,   755,   756,   757,   758,
     759,   760,   761,   762,   763,   764,   765,   766,   770,   771,
     772,   776,   777,   781,   782,   786,   787,   791,   792,   796,
     797,   801,   802,   803,   807,   808,   809,   810,   811,   815,
     816,   817,   818,   822,   823,   824,   828,   829,   830,   831,
     835,   836,   837,   838,   839,   843,   847,   851,   852,   853,
     854,   858,   859,   860,   861,   865,   866,   867,   868,   872,
     876
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
  "MINUS", "MINUS_EQUALS", "MINUS_MINUS", "NEW", "NULL_LITERAL", "PACKAGE",
  "PERCENT", "PERCENT_EQUALS", "PERMITS", "PLUS", "PLUS_EQUALS",
  "PLUS_PLUS", "POWER", "POWER_EQUALS", "PRIVATE", "PUBLIC", "QUESTION",
  "RETURN", "RIGHT_CURLY_BRACE", "RIGHT_PARANTHESIS", "RIGHT_SQUARE_BRACE",
  "SEMI_COLON", "SLASH", "SLASH_EQUALS", "STAR", "STAR_EQUALS", "STATIC",
  "STRING_TYPE", "STRING_LITERAL", "SUPER", "SYNCHRONIZED", "TEXTBLOCK",
  "THIS", "THROW", "THROWS", "TILDA", "TRIPLE_DOT", "TRY", "VAR", "VOID",
  "WHILE", "YIELD", "$accept", "input", "CompiledStuff",
  "PackageDeclaration", "ImportDeclarations", "ImportDeclaration",
  "SingleTypeImportDeclaration", "TypeImportOnDemandDeclaration",
  "SingleStaticImportDeclaration", "StaticImportOnDemandDeclaration",
  "TypeDeclarations", "TypeDeclaration", "Type", "PrimitiveType",
  "NumericType", "ReferenceType", "ClassType", "DotIdentifiers",
  "ArrayType", "Dims", "TypeArguments", "TypeArgumentList", "TypeArgument",
  "Wildcard", "ClassDeclaration", "ClassDeclarationHeader",
  "ClassModifiers", "ClassModifier", "TypeParameterList", "TypeParameters",
  "ClassTypes", "ClassBody", "ClassBodyDeclarations",
  "ClassBodyDeclaration", "ClassMemberDeclaration", "FieldDeclaration",
  "VariableDeclaratorList", "VariableDeclarator", "VariableInitializer",
  "MethodDeclaration", "MethodHeader", "MethodDeclarator",
  "ReceiverParameter", "FormalParameterList", "FormalParameter",
  "VariableModifiers", "Throws", "MethodBody", "StaticInitializer",
  "ConstructorDeclaration", "ConstructorDeclarationHeader", "Declarator",
  "ConstructorBody", "ExplicitConstructorInvocation", "Expressions",
  "InterfaceDeclaration", "InterfaceDeclarationHeader", "ArrayInitializer",
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
  "AssignmentExpression", "Assignment", "ConditionalExpression",
  "ConditionalOrExpression", "ConditionalAndExpression",
  "InclusiveOrExpression", "ExclusiveOrExpression", "AndExpression",
  "EqualityExpression", "RelationalExpression", "ShiftExpression",
  "AdditiveExpression", "MultiplicativeExpression", "UnaryExpression",
  "PreIncrementExpression", "PreDecrementExpression",
  "UnaryExpressionNotPlusMinus", "CastExpression", "PostfixExpression",
  "PostIncrementExpression", "PostDecrementExpression", YY_NULLPTR
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
     345,   346,   347,   348,   349
};
# endif

#define YYPACT_NINF (-641)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-429)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     360,    -8,  -641,    95,    -4,   176,  -641,  -641,  -641,    46,
    -641,   370,   370,  -641,  -641,  -641,  -641,  -641,   238,  -641,
    -641,   126,   322,  -641,  -641,   126,  -641,  -641,   176,    87,
     100,   232,  -641,   370,   238,  -641,   238,  -641,  1004,  -641,
     184,   329,  -641,  -641,   341,   -22,  -641,   397,  -641,   405,
     238,  -641,  -641,   340,  -641,  -641,  -641,   424,  -641,   456,
     482,   351,  -641,  -641,  -641,   232,  -641,   459,    12,  1614,
    -641,  -641,  -641,  -641,   339,  -641,  -641,   479,   390,  -641,
     100,   245,  -641,   484,     7,   229,  2086,  -641,   340,   390,
     351,   493,    26,  -641,   390,   492,   534,   482,    12,   339,
     390,   456,   456,   390,  -641,  -641,  -641,  -641,  -641,  1932,
    -641,   568,  -641,  -641,   525,   542,  -641,   573,  -641,   292,
    -641,  -641,   192,   606,   114,  -641,    99,  4741,  -641,   217,
    -641,   356,  -641,   582,   147,   583,  -641,  4741,  4805,    42,
    -641,  4805,  3013,  -641,  -641,  -641,   497,   585,  -641,  -641,
    4741,   424,   595,   613,   588,  4741,   595,   438,   615,  1841,
      14,  -641,  2268,  -641,  -641,  -641,  -641,  -641,  -641,   564,
    -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,
    -641,  -641,  -641,  -641,   594,   589,  -641,  -641,   103,  -641,
     810,  1442,   110,  -641,  -641,  -641,  -641,  -641,   264,   538,
     539,  -641,   534,  3077,   386,   595,  -641,  -641,  -641,   567,
      57,   390,  -641,  -641,   390,   390,  -641,    75,  -641,   460,
     599,  2739,   315,  2372,  2466,   176,   623,  -641,  -641,  -641,
     612,  -641,   453,  -641,   616,   243,   290,  -641,  -641,   251,
    4805,    17,  2885,  4805,  4805,  4805,   438,   615,  -641,  -641,
       2,  -641,  -641,  -641,  -641,    24,   648,   649,   593,   656,
     571,   535,    -1,   -23,   496,  -641,  -641,  -641,  -641,  -641,
     264,  -641,  -641,   586,  -641,   587,  -641,  4864,  2642,  3141,
    4741,   591,   617,  4741,   446,  -641,  -641,  -641,   618,   618,
     374,   176,  -641,  -641,   596,   -11,   510,  4741,   597,   470,
     431,   130,   651,  4741,   600,   140,   652,   458,   498,  4741,
    4741,    13,  4741,  4741,  4741,  3205,  4741,  4741,  4741,  4741,
    4741,  4741,  4741,   472,   595,   595,  -641,  -641,  -641,   531,
     540,  4741,  4741,  4741,  4741,  4741,  4741,  4741,  4741,  4741,
    4741,  4741,  4741,  4741,  4741,  4741,  4741,  4741,  4741,  4741,
    4741,  4741,  4741,  4741,  4741,  4741,  -641,  -641,  2810,  -641,
    -641,  -641,  3077,  -641,  -641,  -641,  -641,  -641,  -641,    33,
     351,  -641,   543,  -641,  -641,  3269,  3333,   120,   622,   625,
    -641,  2554,  -641,  -641,   176,  -641,   580,   534,  -641,  -641,
     344,   165,  -641,   351,   634,  -641,  3397,   669,   384,  1403,
     195,   604,  -641,  -641,  -641,  4741,  -641,  4805,  4741,  4805,
    4805,  4805,  4805,  4805,  4805,  4805,  4805,  4805,  4805,  4805,
    4805,  4805,  4805,  4805,  4805,  4805,  4805,  -641,  -641,  3461,
     595,   595,   205,  -641,   603,   662,   663,  -641,  -641,   198,
    -641,   608,  -641,   384,  3205,   562,   635,   562,   635,  3525,
     653,   444,  -641,   640,   655,  -641,   657,   619,  -641,   641,
     424,   563,  -641,  -641,  -641,   629,  -641,  -641,  -641,   674,
    -641,  -641,   518,  -641,  -641,  -641,   659,   549,   598,  -641,
     665,  -641,  -641,  -641,  -641,   636,  -641,  -641,  -641,  -641,
    -641,  -641,  -641,   686,   144,   169,   660,   671,  -641,  -641,
     677,   644,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,
    -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,
    -641,  -641,  -641,  -641,  -641,  -641,   650,  -641,  -641,   107,
    -641,   168,   168,    75,  -641,   664,   203,   667,   240,   476,
      84,  3589,  3653,  -641,  -641,  -641,   351,  -641,   534,  -641,
    -641,  -641,  3397,  4805,   411,   437,   716,  5297,   673,   648,
     708,   649,   593,   656,   571,   535,   535,    -1,    -1,    -1,
      -1,   -23,   -23,   -23,   496,   496,  -641,  -641,  -641,  4978,
     679,   709,   709,   595,   595,  3717,  4741,  2325,  4741,  -641,
    2726,   681,  -641,  3205,   534,  -641,   534,   126,   241,   689,
    3781,   693,  3845,   710,  -641,   424,   290,  -641,   424,  -641,
    2642,  -641,  -641,  -641,  3909,   374,   551,   552,   711,  -641,
    -641,  -641,  -641,  3973,   713,  -641,  -641,  -641,  2949,  -641,
    -641,  -641,  -641,  -641,   682,  -641,   687,  4037,   718,   692,
     244,   697,   261,  -641,  -641,  -641,  4805,  5297,  3397,  -641,
    -641,  4741,  2642,   661,   663,  5000,   709,   709,  5056,   698,
     683,  -641,  -641,   720,   283,   728,   732,  -641,   760,   761,
    -641,  -641,  -641,  -641,  -641,  -641,  -641,   714,  -641,   126,
    4101,   126,   271,   737,  -641,   275,  4165,  -641,   725,  -641,
    -641,  -641,   276,   739,   764,  -641,   765,  4229,  -641,   306,
    4293,  -641,  -641,  -641,  -641,   726,   308,  4357,  -641,   731,
    -641,   733,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  2642,
    2642,   734,  2642,   736,  5078,  2642,  4922,  2726,  4741,  4741,
    2642,  -641,  -641,   126,   309,  -641,   126,  4421,  -641,  -641,
     319,   424,  -641,  4485,   766,  -641,  -641,   321,  -641,  -641,
     324,  -641,   738,   740,   342,  -641,  -641,  -641,  -641,  2642,
    -641,  2642,  2642,   744,  -641,  4549,   743,   793,  -641,   746,
     747,  -641,  -641,   126,  -641,   126,   345,  -641,  -641,  -641,
     348,  4613,  -641,  -641,  -641,  -641,   748,  -641,  -641,  -641,
    2642,  5134,   749,  4677,  4741,  2726,  2726,  -641,  -641,   126,
    -641,  -641,   353,  -641,  -641,  2726,   752,  5156,  5212,   751,
     754,   789,  -641,  -641,  -641,  -641,  2726,  2726,   755,  2726,
     756,  5234,  2726,  2726,  -641,  -641,  2726,  -641,  2726,  2726,
     757,  -641,  -641,  -641,  -641,  -641,  2726,  -641
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,    55,     0,     0,     0,    54,    53,    56,     0,
       2,     6,     4,    12,    13,    14,    15,    16,     3,    22,
      23,     0,     0,    52,    24,     0,    49,    36,     0,     0,
     143,    10,     1,     8,     7,    11,     5,    21,     0,    48,
       0,     0,    51,   142,     0,     0,    17,     0,   144,     0,
       9,    28,    31,    36,    30,    63,    72,    56,    29,     0,
       0,    25,    27,    26,    32,    34,    33,     0,     0,     0,
      66,    67,    70,    71,     0,    68,    69,     0,   116,    50,
     145,     0,    35,     0,     0,     0,     0,   110,     0,    85,
      93,    79,     0,    76,    87,     0,    37,     0,     0,     0,
     118,     0,     0,   112,    64,    65,   109,    83,   108,     0,
     111,     0,   117,   146,    35,     0,    18,     0,    57,     0,
     106,   120,     0,     0,     0,    98,     0,     0,   262,     0,
     263,     0,   261,     0,    36,     0,   260,     0,     0,     0,
     266,     0,     0,   153,   184,   264,     0,     0,   265,   252,
       0,     0,     0,     0,     0,     0,     0,    25,    26,   426,
       0,   173,     0,   156,   161,   162,   174,   163,   175,     0,
     164,   165,   176,   166,   167,   202,   203,   177,   183,   178,
     179,   181,   180,   182,   425,   248,   250,   251,   255,   272,
     256,   257,   258,   259,   249,   188,   189,   190,     0,   191,
     192,    86,    94,     0,    80,     0,    73,    88,    39,     0,
       0,   114,    84,   119,    89,    91,   113,     0,   124,     0,
     252,    34,     0,     0,     0,     0,   107,    19,    20,    60,
       0,    58,    99,    95,     0,     0,     0,   121,   105,     0,
       0,    36,     0,     0,     0,     0,     0,     0,   255,   258,
       0,   332,   333,   341,   340,   378,   381,   383,   385,   387,
     389,   391,   394,   399,   403,   406,   410,   411,   414,   420,
     417,   427,   428,     0,   233,     0,   236,     0,     0,     0,
       0,     0,    36,     0,   426,   256,   257,   416,     0,     0,
      34,     0,   415,   238,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   154,   155,   187,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   430,   429,     0,    77,
      82,    81,     0,    75,    38,    74,   115,    90,    92,    47,
       0,    43,     0,    42,    44,     0,     0,     0,     0,     0,
     126,     0,   125,    62,     0,    59,     0,   101,   103,   122,
       0,     0,    97,   100,     0,   419,     0,     0,    25,   426,
       0,     0,   413,   412,   418,     0,   198,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   234,   237,     0,
       0,     0,     0,   230,     0,   223,   222,   185,   296,     0,
     141,     0,   254,     0,     0,     0,   324,     0,   326,     0,
       0,     0,   239,   292,     0,   320,     0,     0,   240,     0,
       0,   242,   246,   158,   271,     0,   235,   157,   269,     0,
     316,   318,     0,   351,   353,   267,    35,     0,     0,   253,
       0,   273,   342,   349,   350,     0,   348,   347,   345,   346,
     352,   344,   343,     0,     0,     0,   291,     0,   274,   314,
       0,     0,   363,   365,   354,   361,   362,   360,   359,   357,
     358,   364,   356,   355,   375,   377,   366,   373,   374,   372,
     371,   369,   370,   376,   368,   367,     0,   147,   152,     0,
      78,     0,     0,     0,    40,     0,     0,     0,     0,     0,
       0,     0,     0,   127,    61,    96,    99,   123,   102,   104,
     336,   339,     0,     0,    37,     0,     0,   254,     0,   382,
       0,   384,   386,   388,   390,   392,   393,   396,   398,   395,
     397,   401,   402,   400,   405,   404,   409,   408,   407,     0,
       0,   226,   224,     0,     0,     0,     0,     0,     0,   297,
       0,     0,   328,     0,   325,   329,   327,   275,     0,     0,
       0,     0,     0,     0,   321,     0,     0,   243,     0,   245,
       0,   270,   317,   319,     0,     0,     0,     0,     0,   294,
     268,   160,   159,     0,     0,   315,   295,   148,     0,   149,
      45,    46,    41,   132,     0,   128,     0,     0,     0,     0,
       0,     0,     0,   335,   338,   421,     0,     0,     0,   423,
     199,     0,     0,     0,   228,     0,   227,   225,     0,     0,
       0,   229,   140,     0,    36,     0,     0,   195,     0,   162,
     169,   170,   171,   172,   204,   205,   331,     0,   276,   277,
       0,   283,     0,     0,   306,     0,     0,   241,     0,   244,
     200,   298,     0,   293,     0,   322,     0,     0,   302,     0,
       0,   150,   151,   133,   129,     0,     0,     0,   134,     0,
     130,     0,   422,   424,   334,   337,   380,   379,   206,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   330,   278,   279,     0,   284,   285,     0,   307,   308,
       0,     0,   299,     0,     0,   323,   300,     0,   303,   304,
       0,   136,     0,     0,     0,   135,   131,   207,   208,     0,
     210,     0,     0,     0,   231,     0,     0,   223,   186,     0,
       0,   196,   280,   281,   286,   287,     0,   309,   247,   310,
       0,     0,   301,   305,   137,   138,     0,   209,   211,   212,
       0,     0,     0,     0,     0,     0,     0,   282,   288,   289,
     311,   312,     0,   139,   213,     0,     0,     0,     0,     0,
       0,     0,   201,   290,   313,   214,     0,     0,     0,     0,
       0,     0,     0,     0,   215,   216,     0,   218,     0,     0,
       0,   232,   197,   217,   219,   220,     0,   221
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -641,  -641,  -641,  -641,   821,    15,  -641,  -641,  -641,  -641,
     517,   512,    72,     3,  -641,    11,  -123,  1844,  -641,   -24,
    -105,  -641,   288,  -641,  -641,  -641,   282,    -2,   373,  -641,
    -641,   -25,  -641,   767,  -641,  -641,   -95,   632,  -350,  -641,
     772,    91,  -641,   -90,  -229,   -82,   -26,   735,  -641,  -641,
    -641,   378,  -641,  -641,  1010,  -641,  -641,   166,  -641,   -52,
     -99,  -141,   427,  -354,  -464,  -641,  -641,  -641,  -641,  -276,
    -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,
     116,   117,  -640,  -271,  -641,  -641,  -641,  -641,  -641,  -641,
    -641,  -641,  -641,  -641,   379,  -641,  -641,  -641,  -641,   -77,
    -221,   880,   981,   -27,  -641,  -641,   555,  1480,   194,  -641,
     133,   196,  -641,   443,   442,   451,   445,   454,   209,   189,
    -210,   204,  -127,   183,   343,  -544,  -641,   553,   763,   950
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   156,   246,    62,   247,    64,   159,    66,   323,
     291,   372,   373,   374,    20,    21,    22,    23,    68,   119,
     226,    39,    69,    70,    71,    72,    92,    93,   359,    73,
      74,    94,   123,   124,   125,   160,   112,   107,    75,    76,
      77,    90,   110,   223,   439,    24,    25,   360,   529,   161,
     162,   163,   164,   668,   165,   166,   167,   670,   168,   169,
     170,   171,   671,   172,   173,   672,   174,   673,   175,   674,
     434,   435,   653,   654,   176,   675,   177,   178,   179,   180,
     181,   182,   183,   461,   462,   184,   185,   186,   187,   248,
     189,   190,   191,   249,   193,   194,   446,   440,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,   433,   210,   126,   222,    87,   436,   392,   528,   188,
     224,   287,   530,   649,   292,   721,   289,    82,   723,   405,
      42,   327,   108,   396,    51,   117,    51,    35,   453,   475,
     422,    26,   188,   407,   419,    30,   420,    96,   217,   423,
     118,    61,   238,    52,   205,    52,    32,   108,    35,    63,
     421,    53,   476,    27,    51,    83,    54,   301,    54,   192,
     531,   305,   217,   201,   279,    42,   202,   204,   207,   477,
      61,    61,    61,    52,   213,   205,   406,   216,    63,    63,
      63,    27,   192,   327,   763,   188,    54,    51,    61,   157,
     481,   217,    58,   408,    58,   478,    63,   158,   479,   299,
     206,    61,   383,   713,   101,   324,    52,    45,   498,    63,
      60,    51,   157,   395,    27,   532,   402,   403,   404,    54,
     158,  -194,    58,   618,   381,   628,   669,   238,  -193,    61,
      52,   365,   236,   307,    27,   192,   475,    63,    27,    97,
     102,    60,   288,    54,   369,   391,   188,   188,   205,    47,
      89,   806,   400,   126,   126,    58,   481,   122,   205,   476,
     126,    46,   205,    61,   278,   157,   638,   818,   820,   217,
     102,    63,    38,   158,    28,  -194,   477,  -194,   629,    58,
      51,   830,  -193,   236,  -193,   366,   237,   205,   367,   368,
     454,   456,   214,   215,   279,   432,   192,   192,   239,    52,
     188,   188,   539,   472,   463,   479,   480,    27,   387,   571,
     572,   573,    54,   236,   467,    27,   588,    51,   621,   195,
     370,   588,   307,    79,   497,   500,   157,   157,   371,   494,
     495,   232,   325,   238,   158,   158,    52,   547,    61,    61,
     327,    51,   195,   622,    27,   398,    63,    63,    58,    54,
     192,   192,    49,   158,     1,    51,   273,   120,   588,   588,
      52,   544,   588,   669,   445,   447,     2,   556,    27,   196,
     589,   120,   540,    54,    52,   634,   204,   233,   702,   588,
     157,   234,    27,     4,   114,    58,   443,    54,   158,   588,
     393,   274,   196,   588,   588,   195,   583,   576,   577,   578,
     727,   121,    51,   433,   188,     6,     7,   390,   390,    58,
     230,   661,   636,   679,   390,   389,   709,     8,   120,   356,
      67,    52,   115,    58,   588,   231,   588,   588,   357,    27,
     279,   669,   669,   711,    54,   581,   582,   588,    40,   588,
     394,   669,   588,   736,   550,   196,    96,   738,   742,   431,
       2,    67,   669,   669,   192,   669,   195,   195,   669,   669,
     588,    81,   669,   588,   669,   669,   588,    41,    80,   548,
      58,   588,   669,   768,   554,   555,     1,   688,   748,   433,
     752,   773,   433,   546,   157,    86,     1,    85,     2,     6,
       7,   777,   158,   782,    49,   275,   783,   378,     2,    95,
     379,     8,     3,    48,   306,     4,   196,   196,   607,   362,
     195,   195,     3,   106,   786,     4,    78,   799,     5,   554,
     800,   449,   594,   450,   596,   814,   645,     6,     7,   197,
     276,   469,    95,   234,   209,    61,    84,     6,     7,     8,
      98,   811,   812,    63,    82,   100,   103,    78,   433,     8,
     433,   815,   197,   113,   203,   436,   553,   493,   306,   209,
     196,   196,   824,   825,    49,   827,   311,   -34,   831,   832,
      86,    51,   833,   386,   834,   835,   211,   111,   469,    95,
     295,   296,   837,   646,   459,   209,    95,     2,   656,   657,
      52,   600,   493,   601,   315,    88,   616,   617,    53,   460,
     643,    95,   188,    54,   584,   197,   209,   375,    47,   647,
     188,   694,   696,   188,   195,   433,   203,   295,   296,   712,
     209,    91,   387,   637,   126,   109,     6,     7,    34,    36,
      37,   433,   433,   188,   370,   370,   370,   470,     8,    58,
      85,    95,   630,   631,   371,   433,    37,   217,    37,   455,
      50,    59,   192,   687,   471,   424,   689,   612,   116,   217,
     192,   533,    37,   192,   196,   208,   197,   197,   415,   416,
     496,   425,   678,   426,   613,   188,   534,   459,   188,   499,
     217,   188,   209,   192,   417,   418,   225,   477,    27,   217,
     693,   695,   608,  -427,  -428,   413,   714,   414,   217,   227,
     217,   217,  -427,  -428,   567,   568,   569,   570,   358,    61,
     209,   592,   229,   595,   329,   330,   228,    63,   616,   617,
     197,   197,   565,   566,   235,   192,   574,   575,   192,   277,
     280,   192,   297,   302,   300,   303,   308,   331,   328,   198,
     364,   384,   188,   188,   432,   188,   376,   188,   188,   188,
     188,   385,   409,   188,   732,   388,   735,   410,   411,   412,
     427,   428,   198,   442,   279,   545,   444,   464,   468,   541,
     452,   458,   542,   549,   466,   552,   557,   585,   390,   586,
     590,   587,   188,   593,   188,   188,   599,   602,   606,   778,
     611,   605,   192,   192,   603,   192,   604,   192,   192,   192,
     192,   610,   620,   192,   618,   437,   614,   623,   772,   619,
     624,   774,   195,   188,   188,   198,   625,   626,   188,   188,
     195,   627,   648,   195,   197,   651,   683,   205,   188,   157,
     188,   188,   192,   719,   192,   192,   680,   158,   633,   188,
     188,   635,   188,   195,   188,   188,   188,   650,   797,   188,
     798,   188,   188,   655,   676,   725,   703,   686,   697,   188,
     700,   704,   196,   192,   192,   707,   708,   726,   192,   192,
     196,   710,   724,   196,   813,   728,   198,   198,   192,   729,
     192,   192,   730,  -168,   737,   195,   743,   731,   195,   192,
     192,   195,   192,   196,   192,   192,   192,   741,   431,   192,
     751,   192,   192,   744,   745,   755,   759,   756,   761,   192,
     794,   823,   784,   781,   785,   332,   790,   793,   795,   796,
     333,   632,   803,   807,   816,   821,   822,   826,   828,   836,
     198,   198,    33,   334,   212,   196,   105,   363,   196,    99,
     609,   196,   766,   767,   448,   716,   335,   717,   336,   199,
     559,   561,   195,   195,     0,   195,   563,   195,   195,   195,
     195,   562,   337,   195,   338,     0,   564,     0,     0,     0,
     339,     0,   199,   340,     0,     0,   341,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   342,     0,   343,     0,
       0,     0,   195,     0,   195,   195,     0,     0,     0,     0,
       0,     0,   196,   196,     0,   196,     0,   196,   196,   196,
     196,     0,     0,   196,     0,     0,     0,     0,     0,     0,
       0,     0,   197,   195,   195,   199,     0,     0,   195,   195,
     197,     0,     0,   197,   198,     0,     0,     0,   195,     0,
     195,   195,   196,     0,   196,   196,     0,     0,     0,   195,
     195,     0,   195,   197,   195,   195,   195,     0,     0,   195,
       0,   195,   195,     0,     0,     0,     0,     0,     0,   195,
       0,     0,     0,   196,   196,     0,     0,     0,   196,   196,
       0,     0,     0,     0,     0,     0,   199,   199,   196,     0,
     196,   196,     0,     0,     0,   197,     0,     0,   197,   196,
     196,   197,   196,     0,   196,   196,   196,     0,     0,   196,
       0,   196,   196,     0,     0,     0,    51,   667,   285,   196,
       0,   285,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,    52,   200,   690,     0,     0,
     199,   199,     0,    53,     0,     0,     0,     0,    54,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,   200,
       0,     0,   197,   197,     0,   197,     0,   197,   197,   197,
     197,     6,     7,   197,     0,    55,     0,     0,    56,   718,
       0,     0,     0,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,     0,     0,     0,
       0,     0,   197,     0,   197,   197,     0,     0,     0,     0,
       0,     0,   200,     0,     0,     0,     0,     0,     0,   286,
     285,     0,   286,   285,   285,   285,     0,     0,     0,     0,
       0,     0,   198,   197,   197,     0,     0,     0,   197,   197,
     198,     0,     0,   198,   199,     0,   757,   758,   197,   760,
     197,   197,   764,     0,   437,     0,     0,   771,     0,   197,
     197,     0,   197,   198,   197,   197,   197,     0,     0,   197,
       0,   197,   197,   200,   200,     0,     0,     0,     0,   197,
       0,     0,     0,     0,     0,     0,   787,     0,   788,   789,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   198,     0,     0,   198,     0,
       0,   198,     0,     0,     0,     0,     0,   804,     0,     0,
       0,   286,   667,   690,   286,   286,   286,   200,   200,     0,
       0,     0,   718,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   757,   758,     0,   760,     0,     0,   764,
     771,     0,     0,   787,     0,   788,   789,     0,     0,     0,
       0,     0,     0,   804,     0,     0,     0,     0,     0,     0,
       0,     0,   198,   198,     0,   198,     0,   198,   198,   198,
     198,     0,     0,   198,     0,     0,     0,   285,     0,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,     0,     0,     0,
       0,     0,   198,     0,   198,   198,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   199,   198,   198,     0,     0,     0,   198,   198,
     199,     0,     0,   199,     0,     0,     0,     0,   198,     0,
     198,   198,     0,     0,     0,     0,     0,     0,     0,   198,
     198,     0,   198,   199,   198,   198,   198,     0,     0,   198,
       0,   198,   198,     0,     0,   536,   538,     0,   286,   198,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   309,     0,
       0,     0,     0,   310,     0,   199,     0,     0,   199,     0,
       0,   199,     0,   311,   -34,     0,   312,     0,     0,     0,
       0,     0,     0,   285,     0,     0,     0,   285,     0,   313,
       0,   314,   -34,     0,     0,     0,     0,   344,     0,     0,
       0,   315,   345,     0,     0,   316,     0,   317,     0,   598,
       0,     0,     0,   318,     0,   346,   319,     0,     0,   320,
       0,     0,     0,     0,     0,     0,     0,     0,   347,   321,
     348,   322,   199,   199,     0,   199,     0,   199,   199,   199,
     199,     0,   -34,   199,   349,     0,   350,     0,     0,     0,
       0,     0,   351,     0,     0,   352,     0,     0,   353,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,     0,
     355,     0,   199,     0,   199,   199,   285,   285,     0,   200,
       0,   285,     0,     0,   286,     0,     0,   200,   286,     0,
     200,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   640,   642,   199,   199,     0,     0,     0,   199,   199,
     200,     0,     0,     0,     0,     0,     0,     0,   199,     0,
     199,   199,     0,     0,     0,     0,     0,     0,     0,   199,
     199,     0,   199,     0,   199,   199,   199,     0,     0,   199,
       0,   199,   199,     0,     0,     0,     0,     0,     0,   199,
       0,     0,   200,     0,     0,   200,     0,   250,   200,     0,
     682,     0,   685,     0,     0,     0,     0,   281,     0,     0,
       0,     0,   294,     0,   692,     0,    51,   286,   286,     0,
     298,     0,   286,   699,     0,   304,     0,     0,     0,     0,
       0,     0,     2,     0,     0,    52,     0,   706,     0,     0,
       0,     0,     0,    53,     0,     0,     0,     0,    54,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,   200,
     200,     0,   200,     0,   200,   200,   200,   200,     0,     0,
     200,     6,     7,   361,     0,   104,     0,     0,    56,     0,
     734,     0,     0,    57,    58,     0,   740,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,   747,     0,   200,
     750,   200,   200,     0,     0,     0,     0,   754,     0,     0,
       0,     0,   401,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     200,   200,     0,     0,     0,   200,   200,   776,     0,     0,
       0,     0,     0,   780,     0,   200,     0,   200,   200,     0,
     441,     0,     0,   401,     0,     0,   200,   200,     0,   200,
       0,   200,   200,   200,     0,     0,   200,   457,   200,   200,
       0,     0,     0,   465,     0,     0,   200,     0,     0,   473,
     474,   802,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,     0,     0,     0,     0,     0,     0,     0,
       0,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,     0,     0,   361,     0,
       0,     0,   361,     0,     0,     0,   309,    29,     0,    31,
       0,   310,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   311,   -34,     0,   312,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,     0,   551,   313,     0,   314,
     -34,     0,    65,     0,     0,   558,     0,     0,   560,   315,
       0,     0,     0,   316,     0,   317,     0,     0,     0,     0,
       0,   318,     0,     0,   319,     0,     0,   320,     0,   580,
       0,    65,    65,    65,     0,     0,     0,   321,     0,   322,
       0,     0,     0,     0,   591,     0,     0,     0,     0,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,    65,   128,    51,   129,     0,   130,     0,     0,
       0,   131,     0,   221,     0,     0,     0,     0,     0,     0,
     120,     0,   132,    52,   133,     0,     0,     0,     0,     0,
      65,   134,   135,     0,     0,   136,    54,     0,    86,   137,
       0,   217,   284,   290,     0,   284,     0,   138,   139,   140,
       0,     0,     0,     0,     0,     0,   141,     0,     0,     0,
       0,     0,   142,   218,    65,     0,   144,     0,     0,     0,
       0,     0,    58,   145,   219,   147,   148,   220,   150,     0,
       0,     0,   151,   152,   153,   154,   155,     0,     0,     0,
       0,     0,   644,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,     0,     0,     0,   659,   660,     0,   662,    65,
       0,     0,     0,   677,     0,     0,     0,     0,     0,    65,
      65,     0,     0,     0,   284,     0,   399,   284,   284,   284,
       0,     0,     0,   127,     0,     0,     0,   128,    51,   129,
       0,   130,     0,     0,     0,   131,     0,     0,   361,     0,
       0,     0,     0,     0,   120,     0,   132,    52,   133,     0,
       0,     0,     0,     0,     0,   134,   135,   399,   715,   136,
      54,     0,    86,   137,     0,   451,     0,     0,     0,     0,
       0,   138,   139,   140,     0,     0,     0,     0,     0,     0,
     141,     0,     0,     0,     0,     0,   142,   143,     0,     0,
     144,     0,     0,     0,     0,     0,    58,   145,   146,   147,
     148,   149,   150,     0,     0,     0,   151,   152,   153,   154,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   769,   770,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   792,     0,     0,     0,     0,
       0,   284,     0,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,     0,     0,   809,   810,   127,    65,     0,     0,   128,
      51,   129,     0,   130,     0,     0,     0,   131,     0,     0,
       0,     0,     0,     0,     0,     0,   120,     0,   132,    52,
     133,     0,     0,     0,     0,     0,     0,   134,   135,     0,
       0,   136,    54,     0,    86,   137,     0,     0,     0,     0,
       0,   615,     0,   138,   139,   140,     0,     0,     0,     0,
       0,     0,   141,     0,     0,     0,   128,    51,   142,   326,
     130,     0,   144,     0,     0,     0,     0,     0,    58,   145,
     146,   147,   148,   149,   150,   132,    52,     0,   151,   152,
     153,   154,   155,     0,   282,     0,     0,     0,   136,    54,
       0,     0,   137,     0,     0,    65,    65,    65,     0,   127,
     138,   139,   140,   128,    51,   129,     0,   130,     0,   141,
       0,   131,     0,     0,     0,     0,     0,   284,     0,     0,
     120,   284,   132,    52,   133,    58,   145,   146,     0,   148,
     149,   134,   135,     0,     0,   136,    54,   153,    86,   137,
       0,     0,     0,     0,     0,     0,     0,   138,   139,   140,
       0,     0,     0,     0,     0,     0,   141,     0,     0,     0,
       0,     0,   142,   380,     0,     0,   144,     0,     0,     0,
      65,     0,    58,   145,   146,   147,   148,   149,   150,     0,
       0,     0,   151,   152,   153,   154,   155,     0,     0,     0,
       0,     0,     0,   127,     0,     0,     0,   128,    51,   129,
       0,   130,     0,     0,     0,   131,     0,     0,     0,     0,
     284,   284,     0,     0,   120,   284,   132,    52,   133,     0,
       0,     0,     0,     0,     0,   134,   135,     0,     0,   136,
      54,     0,    86,   137,     0,     0,     0,     0,     0,     0,
       0,   138,   139,   140,     0,     0,     0,     0,     0,     0,
     141,     0,     0,     0,     0,     0,   142,   382,     0,     0,
     144,     0,     0,     0,     0,     0,    58,   145,   146,   147,
     148,   149,   150,     0,     0,     0,   151,   152,   153,   154,
     155,   127,     0,     0,     0,   128,    51,   129,     0,   130,
       0,     0,     0,   131,     0,     0,     0,     0,     0,     0,
       0,     0,   120,     0,   132,    52,   133,     0,     0,     0,
       0,     0,     0,   134,   135,     0,     0,   136,    54,     0,
      86,   137,     0,     0,     0,     0,     0,     0,     0,   138,
     139,   140,     0,     0,     0,     0,     0,     0,   141,     0,
       0,     0,     0,     0,   142,   543,     0,     0,   144,     0,
       0,     0,     0,     0,    58,   145,   146,   147,   148,   149,
     150,     0,     0,     0,   151,   152,   153,   154,   155,   127,
       0,     0,     0,   128,    51,   129,     0,   130,     0,     0,
       0,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132,    52,   133,     0,     0,     0,     0,     0,
       0,   134,   135,     0,     0,   136,    54,     0,    86,   137,
       0,     0,     0,     0,     0,     0,     0,   138,   139,   140,
       0,     0,     0,     0,     0,     0,   141,     0,     0,     0,
       0,     0,   142,     0,     0,     0,   144,     0,     0,     0,
       0,     0,    58,   145,   146,   147,   148,   149,   150,     0,
       0,     0,   151,   127,   153,   154,   155,   128,    51,   129,
       0,   130,     0,     0,   309,   131,     0,     0,     0,   310,
       0,     0,     0,     0,     0,     0,   132,    52,   663,   377,
       0,     0,   312,     0,     0,   664,   665,     0,     0,   136,
      54,     0,    86,   137,     0,   313,     0,   314,     0,     0,
       0,   138,   139,   140,     0,     0,     0,   315,     0,     0,
     141,   316,     0,   317,  -426,     0,   142,     0,     0,   318,
     144,     0,   319,  -426,     0,   320,    58,   145,   146,   147,
     148,   149,   150,     0,     0,   321,   151,   322,   153,   666,
     155,   128,    51,     0,     0,   130,     0,     0,   526,     0,
       0,     0,     0,     0,     0,   240,     0,     0,     0,     0,
     132,    52,     0,     0,     0,     0,     0,     0,     0,   241,
       0,     0,     0,   136,    54,     0,   358,   242,     0,     0,
       0,     0,     0,   243,     0,   138,   139,   140,     0,     0,
       0,     0,   244,     0,   141,     0,     0,     0,     0,     0,
       0,   527,     0,     0,     0,     0,     0,     0,     0,     0,
      58,   145,   146,     0,   148,   149,   128,    51,   245,     0,
     130,     0,   153,     0,     0,     0,     0,     0,     0,     0,
     240,     0,     0,   120,     0,   132,    52,     0,     0,     0,
       0,     0,     0,     0,   241,     0,     0,     0,   136,    54,
       0,     0,   242,     0,     0,     0,     0,     0,   243,     0,
     138,   139,   140,     0,     0,     0,     0,   244,     0,   141,
       0,     0,     0,     0,     0,     0,     0,   397,     0,     0,
     128,    51,     0,     0,   130,    58,   145,   146,     0,   148,
     149,     0,     0,   245,   240,     0,     0,   153,     0,   132,
      52,     0,     0,     0,     0,     0,     0,     0,   241,     0,
       0,     0,   136,    54,     0,   358,   242,     0,     0,     0,
       0,     0,   243,     0,   138,   139,   140,     0,     0,     0,
       0,   244,     0,   141,     0,     0,     0,     0,     0,     0,
     701,     0,     0,     0,   128,    51,     0,     0,   130,    58,
     145,   146,     0,   148,   149,     0,     0,   245,   240,     0,
       0,   153,     0,   132,    52,     0,     0,     0,     0,     0,
       0,     0,   241,     0,     0,     0,   136,    54,     0,     0,
     242,     0,     0,     0,     0,     0,   243,     0,   138,   139,
     140,     0,     0,     0,     0,   244,     0,   141,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   293,   128,    51,
       0,     0,   130,    58,   145,   146,     0,   148,   149,     0,
       0,   245,   240,     0,     0,   153,     0,   132,    52,     0,
       0,     0,     0,     0,     0,     0,   241,     0,     0,     0,
     136,    54,     0,   358,   242,     0,     0,     0,     0,     0,
     243,     0,   138,   139,   140,     0,     0,     0,     0,   244,
       0,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,    51,     0,     0,   130,    58,   145,   146,
       0,   148,   149,     0,     0,   245,   240,     0,     0,   153,
       0,   132,    52,     0,     0,     0,     0,     0,     0,     0,
     241,     0,     0,     0,   136,    54,     0,     0,   242,     0,
       0,     0,     0,     0,   243,     0,   138,   139,   140,     0,
       0,     0,     0,   244,     0,   141,     0,     0,     0,     0,
       0,     0,     0,   438,     0,     0,   128,    51,     0,     0,
     130,    58,   145,   146,     0,   148,   149,     0,     0,   245,
     240,     0,     0,   153,     0,   132,    52,     0,     0,     0,
       0,     0,     0,     0,   241,     0,     0,     0,   136,    54,
       0,     0,   242,     0,     0,     0,     0,     0,   243,     0,
     138,   139,   140,     0,     0,     0,     0,   244,     0,   141,
       0,     0,     0,     0,     0,     0,     0,     0,   208,     0,
     128,    51,     0,     0,   130,    58,   145,   146,     0,   148,
     149,     0,     0,   245,   240,     0,     0,   153,     0,   132,
      52,     0,     0,     0,     0,     0,     0,     0,   241,     0,
       0,     0,   136,    54,     0,     0,   242,     0,     0,     0,
       0,     0,   243,     0,   138,   139,   140,     0,     0,     0,
       0,   244,     0,   141,     0,     0,     0,     0,     0,     0,
       0,   535,     0,     0,   128,    51,     0,     0,   130,    58,
     145,   146,     0,   148,   149,     0,     0,   245,   240,     0,
       0,   153,     0,   132,    52,     0,     0,     0,     0,     0,
       0,     0,   241,     0,     0,     0,   136,    54,     0,     0,
     242,     0,     0,     0,     0,     0,   243,     0,   138,   139,
     140,     0,     0,     0,     0,   244,     0,   141,     0,     0,
       0,     0,     0,     0,     0,   537,     0,     0,   128,    51,
       0,     0,   130,    58,   145,   146,     0,   148,   149,     0,
       0,   245,   240,     0,     0,   153,     0,   132,    52,     0,
       0,     0,     0,     0,     0,     0,   241,     0,     0,     0,
     136,    54,     0,    86,   242,     0,     0,     0,     0,     0,
     243,     0,   138,   139,   140,     0,     0,     0,     0,   244,
       0,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,    51,     0,     0,   130,    58,   145,   146,
       0,   148,   149,     0,     0,   245,   240,     0,     0,   153,
       0,   132,    52,     0,     0,     0,     0,     0,     0,     0,
     241,     0,     0,     0,   136,    54,     0,     0,   242,     0,
       0,     0,     0,     0,   243,     0,   138,   139,   140,     0,
       0,     0,     0,   244,     0,   141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   579,   128,    51,     0,     0,
     130,    58,   145,   146,     0,   148,   149,     0,     0,   245,
     240,     0,     0,   153,     0,   132,    52,     0,     0,     0,
       0,     0,     0,     0,   241,     0,     0,     0,   136,    54,
       0,     0,   242,     0,     0,     0,     0,     0,   243,     0,
     138,   139,   140,     0,     0,     0,     0,   244,     0,   141,
       0,     0,     0,     0,     0,     0,     0,   597,     0,     0,
     128,    51,     0,     0,   130,    58,   145,   146,     0,   148,
     149,     0,     0,   245,   240,     0,     0,   153,     0,   132,
      52,     0,     0,     0,     0,     0,     0,     0,   241,     0,
       0,     0,   136,    54,     0,     0,   242,     0,     0,     0,
       0,     0,   243,     0,   138,   139,   140,     0,     0,     0,
       0,   244,     0,   141,     0,     0,     0,     0,     0,     0,
       0,   639,     0,     0,   128,    51,     0,     0,   130,    58,
     145,   146,     0,   148,   149,     0,     0,   245,   240,     0,
       0,   153,     0,   132,    52,     0,     0,     0,     0,     0,
       0,     0,   241,     0,     0,     0,   136,    54,     0,     0,
     242,     0,     0,     0,     0,     0,   243,     0,   138,   139,
     140,     0,     0,     0,     0,   244,     0,   141,     0,     0,
       0,     0,     0,     0,     0,   641,     0,     0,   128,    51,
       0,     0,   130,    58,   145,   146,     0,   148,   149,     0,
       0,   245,   240,     0,     0,   153,     0,   132,    52,     0,
       0,     0,     0,     0,     0,     0,   241,     0,     0,     0,
     136,    54,     0,     0,   242,     0,     0,     0,     0,     0,
     243,     0,   138,   139,   140,     0,     0,     0,     0,   244,
       0,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   658,   128,    51,     0,     0,   130,    58,   145,   146,
       0,   148,   149,     0,     0,   245,   240,     0,     0,   153,
       0,   132,    52,     0,     0,     0,     0,     0,     0,     0,
     241,     0,     0,     0,   136,    54,     0,     0,   242,     0,
       0,     0,     0,     0,   243,     0,   138,   139,   140,     0,
       0,     0,     0,   244,     0,   141,     0,     0,     0,     0,
       0,     0,     0,   681,     0,     0,   128,    51,     0,     0,
     130,    58,   145,   146,     0,   148,   149,     0,     0,   245,
     240,     0,     0,   153,     0,   132,    52,     0,     0,     0,
       0,     0,     0,     0,   241,     0,     0,     0,   136,    54,
       0,     0,   242,     0,     0,     0,     0,     0,   243,     0,
     138,   139,   140,     0,     0,     0,     0,   244,     0,   141,
       0,     0,     0,     0,     0,     0,     0,   684,     0,     0,
     128,    51,     0,     0,   130,    58,   145,   146,     0,   148,
     149,     0,     0,   245,   240,     0,     0,   153,     0,   132,
      52,     0,     0,     0,     0,     0,     0,     0,   241,     0,
       0,     0,   136,    54,     0,     0,   242,     0,     0,     0,
       0,     0,   243,     0,   138,   139,   140,     0,     0,     0,
       0,   244,     0,   141,     0,     0,     0,     0,     0,     0,
       0,   691,     0,     0,   128,    51,     0,     0,   130,    58,
     145,   146,     0,   148,   149,     0,     0,   245,   240,     0,
       0,   153,     0,   132,    52,     0,     0,     0,     0,     0,
       0,     0,   241,     0,     0,     0,   136,    54,     0,     0,
     242,     0,     0,     0,     0,     0,   243,     0,   138,   139,
     140,     0,     0,     0,     0,   244,     0,   141,     0,     0,
       0,     0,     0,     0,     0,   698,     0,     0,   128,    51,
       0,     0,   130,    58,   145,   146,     0,   148,   149,     0,
       0,   245,   240,     0,     0,   153,     0,   132,    52,     0,
       0,     0,     0,     0,     0,     0,   241,     0,     0,     0,
     136,    54,     0,     0,   242,     0,     0,     0,     0,     0,
     243,     0,   138,   139,   140,     0,     0,     0,     0,   244,
       0,   141,     0,     0,     0,     0,     0,     0,     0,   705,
       0,     0,   128,    51,     0,     0,   130,    58,   145,   146,
       0,   148,   149,     0,     0,   245,   240,     0,     0,   153,
       0,   132,    52,     0,     0,     0,     0,     0,     0,     0,
     241,     0,     0,     0,   136,    54,     0,     0,   242,     0,
       0,     0,     0,     0,   243,     0,   138,   139,   140,     0,
       0,     0,     0,   244,     0,   141,     0,     0,     0,     0,
       0,     0,     0,   733,     0,     0,   128,    51,     0,     0,
     130,    58,   145,   146,     0,   148,   149,     0,     0,   245,
     240,     0,     0,   153,     0,   132,    52,     0,     0,     0,
       0,     0,     0,     0,   241,     0,     0,     0,   136,    54,
       0,     0,   242,     0,     0,     0,     0,     0,   243,     0,
     138,   139,   140,     0,     0,     0,     0,   244,     0,   141,
       0,     0,     0,     0,     0,     0,     0,   739,     0,     0,
     128,    51,     0,     0,   130,    58,   145,   146,     0,   148,
     149,     0,     0,   245,   240,     0,     0,   153,     0,   132,
      52,     0,     0,     0,     0,     0,     0,     0,   241,     0,
       0,     0,   136,    54,     0,     0,   242,     0,     0,     0,
       0,     0,   243,     0,   138,   139,   140,     0,     0,     0,
       0,   244,     0,   141,     0,     0,     0,     0,     0,     0,
       0,   746,     0,     0,   128,    51,     0,     0,   130,    58,
     145,   146,     0,   148,   149,     0,     0,   245,   240,     0,
       0,   153,     0,   132,    52,     0,     0,     0,     0,     0,
       0,     0,   241,     0,     0,     0,   136,    54,     0,     0,
     242,     0,     0,     0,     0,     0,   243,     0,   138,   139,
     140,     0,     0,     0,     0,   244,     0,   141,     0,     0,
       0,     0,     0,     0,     0,   749,     0,     0,   128,    51,
       0,     0,   130,    58,   145,   146,     0,   148,   149,     0,
       0,   245,   240,     0,     0,   153,     0,   132,    52,     0,
       0,     0,     0,     0,     0,     0,   241,     0,     0,     0,
     136,    54,     0,     0,   242,     0,     0,     0,     0,     0,
     243,     0,   138,   139,   140,     0,     0,     0,     0,   244,
       0,   141,     0,     0,     0,     0,     0,     0,     0,   753,
       0,     0,   128,    51,     0,     0,   130,    58,   145,   146,
       0,   148,   149,     0,     0,   245,   240,     0,     0,   153,
       0,   132,    52,     0,     0,     0,     0,     0,     0,     0,
     241,     0,     0,     0,   136,    54,     0,     0,   242,     0,
       0,     0,     0,     0,   243,     0,   138,   139,   140,     0,
       0,     0,     0,   244,     0,   141,     0,     0,     0,     0,
       0,     0,     0,   775,     0,     0,   128,    51,     0,     0,
     130,    58,   145,   146,     0,   148,   149,     0,     0,   245,
     240,     0,     0,   153,     0,   132,    52,     0,     0,     0,
       0,     0,     0,     0,   241,     0,     0,     0,   136,    54,
       0,     0,   242,     0,     0,     0,     0,     0,   243,     0,
     138,   139,   140,     0,     0,     0,     0,   244,     0,   141,
       0,     0,     0,     0,     0,     0,     0,   779,     0,     0,
     128,    51,     0,     0,   130,    58,   145,   146,     0,   148,
     149,     0,     0,   245,   240,     0,     0,   153,     0,   132,
      52,     0,     0,     0,     0,     0,     0,     0,   241,     0,
       0,     0,   136,    54,     0,     0,   242,     0,     0,     0,
       0,     0,   243,     0,   138,   139,   140,     0,     0,     0,
       0,   244,     0,   141,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   791,   128,    51,     0,     0,   130,    58,
     145,   146,     0,   148,   149,     0,     0,   245,   240,     0,
       0,   153,     0,   132,    52,     0,     0,     0,     0,     0,
       0,     0,   241,     0,     0,     0,   136,    54,     0,     0,
     242,     0,     0,     0,     0,     0,   243,     0,   138,   139,
     140,     0,     0,     0,     0,   244,     0,   141,     0,     0,
       0,     0,     0,     0,     0,   801,     0,     0,   128,    51,
       0,     0,   130,    58,   145,   146,     0,   148,   149,     0,
       0,   245,   240,     0,     0,   153,     0,   132,    52,     0,
       0,     0,     0,     0,     0,     0,   241,     0,     0,     0,
     136,    54,     0,     0,   242,     0,     0,     0,     0,     0,
     243,     0,   138,   139,   140,     0,     0,     0,     0,   244,
       0,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   808,   128,    51,     0,     0,   130,    58,   145,   146,
       0,   148,   149,     0,     0,   245,   240,     0,     0,   153,
       0,   132,    52,     0,     0,     0,     0,     0,     0,     0,
     241,     0,     0,     0,   136,    54,     0,     0,   242,     0,
       0,     0,     0,     0,   243,     0,   138,   139,   140,     0,
       0,     0,     0,   244,     0,   141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,    51,     0,     0,
     130,    58,   145,   146,     0,   148,   149,     0,     0,   245,
     240,     0,     0,   153,     0,   132,    52,     0,     0,     0,
       0,     0,     0,     0,   282,     0,     0,     0,   136,    54,
       0,     0,   283,     0,     0,     0,     0,     0,   243,     0,
     138,   139,   140,     0,     0,     0,     0,   244,     0,   141,
       0,     0,     0,     0,     0,   128,    51,     0,     0,   130,
       0,     0,     0,     0,     0,    58,   145,   146,     0,   148,
     149,     0,   120,   245,   132,    52,     0,   153,     0,     0,
       0,     0,     0,   282,     0,     0,     0,   136,    54,     0,
       0,   137,     0,     0,     0,     0,     0,     0,     0,   138,
     139,   140,     0,     0,     0,     0,     0,     0,   141,     0,
       0,     0,     0,   128,    51,     0,     0,   130,   429,     0,
       0,     0,     0,     0,    58,   145,   146,     0,   148,   149,
     120,     0,   132,    52,     0,   430,   153,     0,     0,     0,
       0,   282,     0,     0,     0,   136,    54,     0,     0,   137,
       0,     0,     0,     0,     0,     0,     0,   138,   139,   140,
       0,     0,     0,     0,     0,     0,   141,     0,     0,   128,
      51,     0,     0,   130,     0,     0,   765,     0,     0,     0,
       0,     0,    58,   145,   146,     0,   148,   149,   132,    52,
       0,   128,    51,   430,   153,   130,     0,   282,     0,     0,
       0,   136,    54,     0,     0,   137,     0,     0,     0,     0,
     132,    52,     0,   138,   139,   140,     0,     0,     0,   282,
       0,     0,   141,   136,    54,     0,     0,   137,     0,     0,
     652,     0,     0,     0,     0,   138,   139,   140,    58,   145,
     146,     0,   148,   149,   141,     0,     0,   128,    51,     0,
     153,   130,   720,     0,     0,     0,     0,     0,     0,     0,
      58,   145,   146,     0,   148,   149,   132,    52,     0,   128,
      51,     0,   153,   130,     0,   282,     0,     0,     0,   136,
      54,     0,     0,   137,     0,     0,     0,     0,   132,    52,
       0,   138,   139,   140,     0,     0,     0,   282,     0,     0,
     141,   136,    54,     0,     0,   137,     0,     0,   722,     0,
       0,     0,     0,   138,   139,   140,    58,   145,   146,     0,
     148,   149,   141,     0,     0,   128,    51,     0,   153,   130,
     762,     0,     0,     0,     0,     0,     0,     0,    58,   145,
     146,     0,   148,   149,   132,    52,     0,   128,    51,     0,
     153,   130,     0,   282,     0,     0,     0,   136,    54,     0,
       0,   137,     0,     0,     0,     0,   132,    52,     0,   138,
     139,   140,     0,     0,     0,   282,     0,     0,   141,   136,
      54,     0,     0,   137,     0,     0,   805,     0,     0,     0,
       0,   138,   139,   140,    58,   145,   146,     0,   148,   149,
     141,     0,     0,   128,    51,     0,   153,   130,   817,     0,
       0,     0,     0,     0,     0,     0,    58,   145,   146,     0,
     148,   149,   132,    52,     0,   128,    51,     0,   153,   130,
       0,   282,     0,     0,     0,   136,    54,     0,     0,   137,
       0,     0,     0,     0,   132,    52,     0,   138,   139,   140,
       0,     0,     0,   282,     0,     0,   141,   136,    54,     0,
       0,   137,     0,     0,   819,     0,     0,     0,     0,   138,
     139,   140,    58,   145,   146,     0,   148,   149,   141,     0,
       0,     0,     0,     0,   153,     0,   829,     0,   128,    51,
       0,     0,   130,     0,    58,   145,   146,     0,   148,   149,
       0,     0,   240,     0,     0,     0,   153,   132,    52,     0,
       0,     0,     0,     0,     0,     0,   282,     0,     0,     0,
     136,    54,     0,     0,   283,     0,     0,     0,     0,     0,
       0,     0,     0,   139,   140,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,   145,   146,
       0,   148,   149,     0,     0,   245,     0,     0,     0,   153
};

static const yytype_int16 yycheck[] =
{
      25,   277,    97,    85,   109,    57,   277,   236,   358,    86,
     109,   138,   362,   557,   141,   655,   139,    39,   658,    17,
      22,   162,    74,     6,    12,    18,    12,    12,    39,    16,
      53,    39,   109,     9,    35,    39,    37,    61,    49,    62,
      33,    38,    28,    31,    18,    31,     0,    99,    33,    38,
      51,    39,    39,    39,    12,    77,    44,   152,    44,    86,
      27,   156,    49,    89,    47,    67,    90,    91,    94,    56,
      67,    68,    69,    31,   100,    18,    74,   103,    67,    68,
      69,    39,   109,   224,   724,   162,    44,    12,    85,    86,
     311,    49,    80,    69,    80,    82,    85,    86,    85,   151,
      74,    98,   225,   647,    92,    91,    31,    20,   329,    98,
      38,    12,   109,   240,    39,    82,   243,   244,   245,    44,
     109,    18,    80,    39,   223,    18,   590,    28,    18,   126,
      31,    74,    18,   157,    39,   162,    16,   126,    39,    67,
      68,    69,   139,    44,    69,   235,   223,   224,    18,    49,
      59,   791,   242,   235,   236,    80,   377,    85,    18,    39,
     242,    74,    18,   160,    17,   162,    82,   807,   808,    49,
      98,   160,    46,   162,    79,    72,    56,    74,    71,    80,
      12,   821,    72,    18,    74,   211,    72,    18,   214,   215,
     295,   296,   101,   102,    47,   277,   223,   224,   126,    31,
     277,   278,    82,   308,    74,    85,   311,    39,   232,   419,
     420,   421,    44,    18,    74,    39,    18,    12,    74,    86,
     217,    18,   246,    39,   329,   330,   223,   224,   217,   324,
     325,    39,   160,    28,   223,   224,    31,    72,   235,   236,
     381,    12,   109,    74,    39,   242,   235,   236,    80,    44,
     277,   278,    20,   242,    16,    12,    39,    28,    18,    18,
      31,   384,    18,   727,   288,   289,    28,    72,    39,    86,
      72,    28,   377,    44,    31,    72,   300,    85,   628,    18,
     277,    89,    39,    45,    39,    80,   283,    44,   277,    18,
      39,    74,   109,    18,    18,   162,    91,   424,   425,   426,
      17,    72,    12,   579,   381,    67,    68,   235,   236,    80,
      18,   587,    72,    72,   242,    72,    72,    79,    28,    55,
      38,    31,    77,    80,    18,    33,    18,    18,    64,    39,
      47,   795,   796,    72,    44,   430,   431,    18,    16,    18,
      89,   805,    18,    72,   396,   162,   370,    72,    72,   277,
      28,    69,   816,   817,   381,   819,   223,   224,   822,   823,
      18,    20,   826,    18,   828,   829,    18,    45,    39,   393,
      80,    18,   836,   727,   398,   399,    16,   606,    72,   655,
      72,    72,   658,    39,   381,    46,    16,    47,    28,    67,
      68,    72,   381,    72,    20,    39,    72,    82,    28,    48,
      85,    79,    42,    30,    20,    45,   223,   224,   460,    23,
     277,   278,    42,    74,    72,    45,    38,    72,    58,   443,
      72,    47,   446,    49,   448,    72,   553,    67,    68,    86,
      74,    20,    48,    89,    48,   432,    39,    67,    68,    79,
      67,   795,   796,   432,    39,    67,    68,    69,   724,    79,
     726,   805,   109,    80,    23,   726,    72,    20,    20,    48,
     277,   278,   816,   817,    20,   819,    20,    21,   822,   823,
      46,    12,   826,    20,   828,   829,    98,    87,    20,    48,
      20,    21,   836,    72,    14,    48,    48,    28,   583,   584,
      31,    47,    20,    49,    48,    39,    20,    21,    39,    29,
     552,    48,   579,    44,   432,   162,    48,    47,    49,    72,
     587,   616,   617,   590,   381,   791,    23,    20,    21,   646,
      48,    39,   546,    47,   606,    46,    67,    68,    11,    12,
      18,   807,   808,   610,   531,   532,   533,    39,    79,    80,
      47,    48,   531,   532,   533,   821,    34,    49,    36,    39,
      33,    92,   579,   605,    56,    59,   608,    39,    74,    49,
     587,    18,    50,   590,   381,    73,   223,   224,    33,    34,
      39,    75,   597,    77,    56,   652,    33,    14,   655,    39,
      49,   658,    48,   610,    49,    50,    18,    56,    39,    49,
      39,    39,    29,    55,    55,    24,   648,    26,    49,    74,
      49,    49,    64,    64,   415,   416,   417,   418,    46,   606,
      48,   445,    39,   447,    20,    21,    74,   606,    20,    21,
     277,   278,   413,   414,    18,   652,   422,   423,   655,    47,
      47,   658,    47,    20,    39,    47,    21,    48,    74,    86,
      73,    18,   719,   720,   726,   722,    47,   724,   725,   726,
     727,    39,     4,   730,   679,    39,   681,     8,    65,     3,
      74,    74,   109,    72,    47,    85,    48,    16,    16,    47,
      74,    74,    47,    39,    74,     6,    72,    74,   606,    17,
      72,    18,   759,    48,   761,   762,    33,    47,    47,   741,
      16,    72,   719,   720,    39,   722,    39,   724,   725,   726,
     727,    72,    16,   730,    39,   278,    47,    47,   733,    73,
      39,   736,   579,   790,   791,   162,    39,    73,   795,   796,
     587,    71,     6,   590,   381,    17,    33,    18,   805,   726,
     807,   808,   759,    72,   761,   762,    47,   726,    74,   816,
     817,    74,   819,   610,   821,   822,   823,    74,   773,   826,
     775,   828,   829,    74,    73,    72,    74,    47,    47,   836,
      47,    74,   579,   790,   791,    47,    74,    47,   795,   796,
     587,    74,    74,   590,   799,    47,   223,   224,   805,    47,
     807,   808,    22,    22,    47,   652,    47,    73,   655,   816,
     817,   658,   819,   610,   821,   822,   823,    72,   726,   826,
      74,   828,   829,    39,    39,    74,    72,    74,    72,   836,
      17,    22,    74,    47,    74,     5,    72,    74,    72,    72,
      10,   533,    74,    74,    72,    74,    72,    72,    72,    72,
     277,   278,    11,    23,    99,   652,    69,   205,   655,    67,
     461,   658,   726,   726,   289,   651,    36,   651,    38,    86,
     407,   409,   719,   720,    -1,   722,   411,   724,   725,   726,
     727,   410,    52,   730,    54,    -1,   412,    -1,    -1,    -1,
      60,    -1,   109,    63,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    -1,
      -1,    -1,   759,    -1,   761,   762,    -1,    -1,    -1,    -1,
      -1,    -1,   719,   720,    -1,   722,    -1,   724,   725,   726,
     727,    -1,    -1,   730,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   579,   790,   791,   162,    -1,    -1,   795,   796,
     587,    -1,    -1,   590,   381,    -1,    -1,    -1,   805,    -1,
     807,   808,   759,    -1,   761,   762,    -1,    -1,    -1,   816,
     817,    -1,   819,   610,   821,   822,   823,    -1,    -1,   826,
      -1,   828,   829,    -1,    -1,    -1,    -1,    -1,    -1,   836,
      -1,    -1,    -1,   790,   791,    -1,    -1,    -1,   795,   796,
      -1,    -1,    -1,    -1,    -1,    -1,   223,   224,   805,    -1,
     807,   808,    -1,    -1,    -1,   652,    -1,    -1,   655,   816,
     817,   658,   819,    -1,   821,   822,   823,    -1,    -1,   826,
      -1,   828,   829,    -1,    -1,    -1,    12,   590,   138,   836,
      -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    31,    86,   610,    -1,    -1,
     277,   278,    -1,    39,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,   109,
      -1,    -1,   719,   720,    -1,   722,    -1,   724,   725,   726,
     727,    67,    68,   730,    -1,    71,    -1,    -1,    74,   652,
      -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,   759,    -1,   761,   762,    -1,    -1,    -1,    -1,
      -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     240,    -1,   141,   243,   244,   245,    -1,    -1,    -1,    -1,
      -1,    -1,   579,   790,   791,    -1,    -1,    -1,   795,   796,
     587,    -1,    -1,   590,   381,    -1,   719,   720,   805,   722,
     807,   808,   725,    -1,   727,    -1,    -1,   730,    -1,   816,
     817,    -1,   819,   610,   821,   822,   823,    -1,    -1,   826,
      -1,   828,   829,   223,   224,    -1,    -1,    -1,    -1,   836,
      -1,    -1,    -1,    -1,    -1,    -1,   759,    -1,   761,   762,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   652,    -1,    -1,   655,    -1,
      -1,   658,    -1,    -1,    -1,    -1,    -1,   790,    -1,    -1,
      -1,   240,   795,   796,   243,   244,   245,   277,   278,    -1,
      -1,    -1,   805,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   816,   817,    -1,   819,    -1,    -1,   822,
     823,    -1,    -1,   826,    -1,   828,   829,    -1,    -1,    -1,
      -1,    -1,    -1,   836,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   719,   720,    -1,   722,    -1,   724,   725,   726,
     727,    -1,    -1,   730,    -1,    -1,    -1,   407,    -1,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,    -1,    -1,    -1,
      -1,    -1,   759,    -1,   761,   762,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   381,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   579,   790,   791,    -1,    -1,    -1,   795,   796,
     587,    -1,    -1,   590,    -1,    -1,    -1,    -1,   805,    -1,
     807,   808,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   816,
     817,    -1,   819,   610,   821,   822,   823,    -1,    -1,   826,
      -1,   828,   829,    -1,    -1,   375,   376,    -1,   407,   836,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,     5,    -1,
      -1,    -1,    -1,    10,    -1,   652,    -1,    -1,   655,    -1,
      -1,   658,    -1,    20,    21,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,   553,    -1,    -1,    -1,   557,    -1,    36,
      -1,    38,    39,    -1,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    48,    10,    -1,    -1,    52,    -1,    54,    -1,   449,
      -1,    -1,    -1,    60,    -1,    23,    63,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    76,
      38,    78,   719,   720,    -1,   722,    -1,   724,   725,   726,
     727,    -1,    89,   730,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      78,    -1,   759,    -1,   761,   762,   646,   647,    -1,   579,
      -1,   651,    -1,    -1,   553,    -1,    -1,   587,   557,    -1,
     590,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   541,   542,   790,   791,    -1,    -1,    -1,   795,   796,
     610,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   805,    -1,
     807,   808,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   816,
     817,    -1,   819,    -1,   821,   822,   823,    -1,    -1,   826,
      -1,   828,   829,    -1,    -1,    -1,    -1,    -1,    -1,   836,
      -1,    -1,   652,    -1,    -1,   655,    -1,   127,   658,    -1,
     600,    -1,   602,    -1,    -1,    -1,    -1,   137,    -1,    -1,
      -1,    -1,   142,    -1,   614,    -1,    12,   646,   647,    -1,
     150,    -1,   651,   623,    -1,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    31,    -1,   637,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,   719,
     720,    -1,   722,    -1,   724,   725,   726,   727,    -1,    -1,
     730,    67,    68,   203,    -1,    71,    -1,    -1,    74,    -1,
     680,    -1,    -1,    79,    80,    -1,   686,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,   697,    -1,   759,
     700,   761,   762,    -1,    -1,    -1,    -1,   707,    -1,    -1,
      -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     790,   791,    -1,    -1,    -1,   795,   796,   737,    -1,    -1,
      -1,    -1,    -1,   743,    -1,   805,    -1,   807,   808,    -1,
     280,    -1,    -1,   283,    -1,    -1,   816,   817,    -1,   819,
      -1,   821,   822,   823,    -1,    -1,   826,   297,   828,   829,
      -1,    -1,    -1,   303,    -1,    -1,   836,    -1,    -1,   309,
     310,   781,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,    -1,    -1,   358,    -1,
      -1,    -1,   362,    -1,    -1,    -1,     5,     3,    -1,     5,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,   396,    36,    -1,    38,
      39,    -1,    38,    -1,    -1,   405,    -1,    -1,   408,    48,
      -1,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    -1,    -1,    66,    -1,   429,
      -1,    67,    68,    69,    -1,    -1,    -1,    76,    -1,    78,
      -1,    -1,    -1,    -1,   444,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    98,    11,    12,    13,    -1,    15,    -1,    -1,
      -1,    19,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
     126,    39,    40,    -1,    -1,    43,    44,    -1,    46,    47,
      -1,    49,   138,   139,    -1,   141,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,   160,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,   552,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,    -1,    -1,    -1,   585,   586,    -1,   588,   225,
      -1,    -1,    -1,   593,    -1,    -1,    -1,    -1,    -1,   235,
     236,    -1,    -1,    -1,   240,    -1,   242,   243,   244,   245,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,   628,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,   283,   648,    43,
      44,    -1,    46,    47,    -1,   291,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   728,   729,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   765,    -1,    -1,    -1,    -1,
      -1,   407,    -1,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,    -1,    -1,   793,   794,     7,   432,    -1,    -1,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      -1,    43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,   477,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    11,    12,    70,    71,
      15,    -1,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    85,    86,    30,    31,    -1,    90,    91,
      92,    93,    94,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,   531,   532,   533,    -1,     7,
      55,    56,    57,    11,    12,    13,    -1,    15,    -1,    64,
      -1,    19,    -1,    -1,    -1,    -1,    -1,   553,    -1,    -1,
      28,   557,    30,    31,    32,    80,    81,    82,    -1,    84,
      85,    39,    40,    -1,    -1,    43,    44,    92,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    -1,    -1,    74,    -1,    -1,    -1,
     606,    -1,    80,    81,    82,    83,    84,    85,    86,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
     646,   647,    -1,    -1,    28,   651,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,
      44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    -1,    -1,    -1,    90,    91,    92,    93,
      94,     7,    -1,    -1,    -1,    11,    12,    13,    -1,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    43,    44,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    -1,    -1,    -1,    90,    91,    92,    93,    94,     7,
      -1,    -1,    -1,    11,    12,    13,    -1,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    -1,
      -1,    -1,    90,     7,    92,    93,    94,    11,    12,    13,
      -1,    15,    -1,    -1,     5,    19,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    20,
      -1,    -1,    23,    -1,    -1,    39,    40,    -1,    -1,    43,
      44,    -1,    46,    47,    -1,    36,    -1,    38,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    48,    -1,    -1,
      64,    52,    -1,    54,    55,    -1,    70,    -1,    -1,    60,
      74,    -1,    63,    64,    -1,    66,    80,    81,    82,    83,
      84,    85,    86,    -1,    -1,    76,    90,    78,    92,    93,
      94,    11,    12,    -1,    -1,    15,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    44,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    -1,    84,    85,    11,    12,    88,    -1,
      15,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      11,    12,    -1,    -1,    15,    80,    81,    82,    -1,    84,
      85,    -1,    -1,    88,    25,    -1,    -1,    92,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    11,    12,    -1,    -1,    15,    80,
      81,    82,    -1,    84,    85,    -1,    -1,    88,    25,    -1,
      -1,    92,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    11,    12,
      -1,    -1,    15,    80,    81,    82,    -1,    84,    85,    -1,
      -1,    88,    25,    -1,    -1,    92,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    12,    -1,    -1,    15,    80,    81,    82,
      -1,    84,    85,    -1,    -1,    88,    25,    -1,    -1,    92,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    11,    12,    -1,    -1,
      15,    80,    81,    82,    -1,    84,    85,    -1,    -1,    88,
      25,    -1,    -1,    92,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      11,    12,    -1,    -1,    15,    80,    81,    82,    -1,    84,
      85,    -1,    -1,    88,    25,    -1,    -1,    92,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    11,    12,    -1,    -1,    15,    80,
      81,    82,    -1,    84,    85,    -1,    -1,    88,    25,    -1,
      -1,    92,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    11,    12,
      -1,    -1,    15,    80,    81,    82,    -1,    84,    85,    -1,
      -1,    88,    25,    -1,    -1,    92,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    12,    -1,    -1,    15,    80,    81,    82,
      -1,    84,    85,    -1,    -1,    88,    25,    -1,    -1,    92,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    11,    12,    -1,    -1,
      15,    80,    81,    82,    -1,    84,    85,    -1,    -1,    88,
      25,    -1,    -1,    92,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      11,    12,    -1,    -1,    15,    80,    81,    82,    -1,    84,
      85,    -1,    -1,    88,    25,    -1,    -1,    92,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    11,    12,    -1,    -1,    15,    80,
      81,    82,    -1,    84,    85,    -1,    -1,    88,    25,    -1,
      -1,    92,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    11,    12,
      -1,    -1,    15,    80,    81,    82,    -1,    84,    85,    -1,
      -1,    88,    25,    -1,    -1,    92,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    11,    12,    -1,    -1,    15,    80,    81,    82,
      -1,    84,    85,    -1,    -1,    88,    25,    -1,    -1,    92,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    11,    12,    -1,    -1,
      15,    80,    81,    82,    -1,    84,    85,    -1,    -1,    88,
      25,    -1,    -1,    92,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      11,    12,    -1,    -1,    15,    80,    81,    82,    -1,    84,
      85,    -1,    -1,    88,    25,    -1,    -1,    92,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    11,    12,    -1,    -1,    15,    80,
      81,    82,    -1,    84,    85,    -1,    -1,    88,    25,    -1,
      -1,    92,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    11,    12,
      -1,    -1,    15,    80,    81,    82,    -1,    84,    85,    -1,
      -1,    88,    25,    -1,    -1,    92,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    11,    12,    -1,    -1,    15,    80,    81,    82,
      -1,    84,    85,    -1,    -1,    88,    25,    -1,    -1,    92,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    11,    12,    -1,    -1,
      15,    80,    81,    82,    -1,    84,    85,    -1,    -1,    88,
      25,    -1,    -1,    92,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      11,    12,    -1,    -1,    15,    80,    81,    82,    -1,    84,
      85,    -1,    -1,    88,    25,    -1,    -1,    92,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    11,    12,    -1,    -1,    15,    80,
      81,    82,    -1,    84,    85,    -1,    -1,    88,    25,    -1,
      -1,    92,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    11,    12,
      -1,    -1,    15,    80,    81,    82,    -1,    84,    85,    -1,
      -1,    88,    25,    -1,    -1,    92,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    11,    12,    -1,    -1,    15,    80,    81,    82,
      -1,    84,    85,    -1,    -1,    88,    25,    -1,    -1,    92,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    11,    12,    -1,    -1,
      15,    80,    81,    82,    -1,    84,    85,    -1,    -1,    88,
      25,    -1,    -1,    92,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      11,    12,    -1,    -1,    15,    80,    81,    82,    -1,    84,
      85,    -1,    -1,    88,    25,    -1,    -1,    92,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    11,    12,    -1,    -1,    15,    80,
      81,    82,    -1,    84,    85,    -1,    -1,    88,    25,    -1,
      -1,    92,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    11,    12,
      -1,    -1,    15,    80,    81,    82,    -1,    84,    85,    -1,
      -1,    88,    25,    -1,    -1,    92,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    11,    12,    -1,    -1,    15,    80,    81,    82,
      -1,    84,    85,    -1,    -1,    88,    25,    -1,    -1,    92,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    -1,    -1,
      15,    80,    81,    82,    -1,    84,    85,    -1,    -1,    88,
      25,    -1,    -1,    92,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    11,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    -1,    84,
      85,    -1,    28,    88,    30,    31,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    11,    12,    -1,    -1,    15,    74,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    -1,    84,    85,
      28,    -1,    30,    31,    -1,    91,    92,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    11,
      12,    -1,    -1,    15,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    -1,    84,    85,    30,    31,
      -1,    11,    12,    91,    92,    15,    -1,    39,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      30,    31,    -1,    55,    56,    57,    -1,    -1,    -1,    39,
      -1,    -1,    64,    43,    44,    -1,    -1,    47,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    55,    56,    57,    80,    81,
      82,    -1,    84,    85,    64,    -1,    -1,    11,    12,    -1,
      92,    15,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    -1,    84,    85,    30,    31,    -1,    11,
      12,    -1,    92,    15,    -1,    39,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    30,    31,
      -1,    55,    56,    57,    -1,    -1,    -1,    39,    -1,    -1,
      64,    43,    44,    -1,    -1,    47,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    55,    56,    57,    80,    81,    82,    -1,
      84,    85,    64,    -1,    -1,    11,    12,    -1,    92,    15,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    -1,    84,    85,    30,    31,    -1,    11,    12,    -1,
      92,    15,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    30,    31,    -1,    55,
      56,    57,    -1,    -1,    -1,    39,    -1,    -1,    64,    43,
      44,    -1,    -1,    47,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    55,    56,    57,    80,    81,    82,    -1,    84,    85,
      64,    -1,    -1,    11,    12,    -1,    92,    15,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    -1,
      84,    85,    30,    31,    -1,    11,    12,    -1,    92,    15,
      -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    30,    31,    -1,    55,    56,    57,
      -1,    -1,    -1,    39,    -1,    -1,    64,    43,    44,    -1,
      -1,    47,    -1,    -1,    72,    -1,    -1,    -1,    -1,    55,
      56,    57,    80,    81,    82,    -1,    84,    85,    64,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    72,    -1,    11,    12,
      -1,    -1,    15,    -1,    80,    81,    82,    -1,    84,    85,
      -1,    -1,    25,    -1,    -1,    -1,    92,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      -1,    84,    85,    -1,    -1,    88,    -1,    -1,    -1,    92
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    28,    42,    45,    58,    67,    68,    79,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     119,   120,   121,   122,   150,   151,    39,    39,    79,   112,
      39,   112,     0,    99,   105,   100,   105,   106,    46,   126,
      16,    45,   122,   126,   112,    20,    74,    49,   123,    20,
     105,    12,    31,    39,    44,    71,    74,    79,    80,    92,
     107,   108,   109,   110,   111,   112,   113,   121,   123,   127,
     128,   129,   130,   134,   135,   143,   144,   145,   146,    39,
      39,    20,    39,    77,    39,    47,    46,   154,    39,   136,
     146,    39,   131,   132,   136,    48,   114,   107,   123,   135,
     146,    92,   107,   146,    71,   128,    74,   142,   154,    46,
     147,    87,   141,   123,    39,    77,    74,    18,    33,   124,
      28,    72,   107,   137,   138,   139,   140,     7,    11,    13,
      15,    19,    30,    32,    39,    40,    43,    47,    55,    56,
      57,    64,    70,    71,    74,    81,    82,    83,    84,    85,
      86,    90,    91,    92,    93,    94,   107,   108,   110,   112,
     140,   154,   155,   156,   157,   159,   160,   161,   163,   164,
     165,   166,   168,   169,   171,   173,   179,   181,   182,   183,
     184,   185,   186,   187,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   205,   218,   219,   222,   223,
     224,   141,   114,    23,   114,    18,    74,   141,    73,    48,
     131,   146,   142,   141,   136,   136,   141,    49,    71,    82,
      85,   112,   115,   148,   155,    18,   125,    74,    74,    39,
      18,    33,    39,    85,    89,    18,    18,    72,    28,   107,
      25,    39,    47,    53,    62,    88,   108,   110,   194,   198,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,    39,    74,    39,    74,    47,    17,    47,
      47,   202,    39,    47,   112,   196,   197,   217,   108,   111,
     112,   115,   217,    74,   202,    20,    21,    47,   202,   154,
      39,   131,    20,    47,   202,   131,    20,   114,    21,     5,
      10,    20,    23,    36,    38,    48,    52,    54,    60,    63,
      66,    76,    78,   114,    91,   107,    71,   156,    74,    20,
      21,    48,     5,    10,    23,    36,    38,    52,    54,    60,
      63,    66,    76,    78,     5,    10,    23,    36,    38,    52,
      54,    60,    63,    66,    76,    78,    55,    64,    46,   133,
     152,   202,    23,   132,    73,    74,   141,   141,   141,    69,
     108,   110,   116,   117,   118,    47,    47,    20,    82,    85,
      71,   155,    71,   111,    18,    39,    20,   114,    39,    72,
     107,   138,   139,    39,    89,   217,     6,    72,   108,   112,
     138,   202,   217,   217,   217,    17,    74,     9,    69,     4,
       8,    65,     3,    24,    26,    33,    34,    49,    50,    35,
      37,    51,    53,    62,    59,    75,    77,    74,    74,    74,
      91,   107,   140,   164,   175,   176,   178,   157,    72,   149,
     202,   202,    72,   108,    48,   114,   201,   114,   201,    47,
      49,   112,    74,    39,   115,    39,   115,   202,    74,    14,
      29,   188,   189,    74,    16,   202,    74,    74,    16,    20,
      39,    56,   115,   202,   202,    16,    39,    56,    82,    85,
     115,   195,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,    20,   131,   131,    39,   115,   195,    39,
     115,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,    18,    71,   133,   153,
     133,    27,    82,    18,    33,    72,   149,    72,   149,    82,
     115,    47,    47,    71,   111,    85,    39,    72,   114,    39,
     154,   202,     6,    72,   114,   114,    72,    72,   202,   208,
     202,   209,   210,   211,   212,   213,   213,   214,   214,   214,
     214,   215,   215,   215,   216,   216,   217,   217,   217,    74,
     202,   131,   131,    91,   107,    74,    17,    18,    18,    72,
      72,   202,   152,    48,   114,   152,   114,    72,   149,    33,
      47,    49,    47,    39,    39,    72,    47,   154,    29,   189,
      72,    16,    39,    56,    47,   112,    20,    21,    39,    73,
      16,    74,    74,    47,    39,    39,    73,    71,    18,    71,
     110,   110,   117,    74,    72,    74,    72,    47,    82,    72,
     149,    72,   149,   154,   202,   217,    72,    72,     6,   220,
      74,    17,    72,   177,   178,    74,   131,   131,    74,   202,
     202,   164,   202,    32,    39,    40,    93,   157,   158,   159,
     162,   167,   170,   172,   174,   180,    73,   202,   126,    72,
      47,    72,   149,    33,    72,   149,    47,   154,   139,   154,
     157,    72,   149,    39,   115,    39,   115,    47,    72,   149,
      47,    71,   133,    74,    74,    72,   149,    47,    74,    72,
      74,    72,   217,   220,   154,   202,   203,   206,   157,    72,
      72,   177,    72,   177,    74,    72,    47,    17,    47,    47,
      22,    73,   126,    72,   149,   126,    72,    47,    72,    72,
     149,    72,    72,    47,    39,    39,    72,   149,    72,    72,
     149,    74,    72,    72,   149,    74,    74,   157,   157,    72,
     157,    72,    72,   177,   157,    74,   175,   176,   158,   202,
     202,   157,   126,    72,   126,    72,   149,    72,   154,    72,
     149,    47,    72,    72,    74,    74,    72,   157,   157,   157,
      72,    74,   202,    74,    17,    72,    72,   126,   126,    72,
      72,    72,   149,    74,   157,    72,   177,    74,    74,   202,
     202,   158,   158,   126,    72,   158,    72,    72,   177,    72,
     177,    74,    72,    22,   158,   158,    72,   158,    72,    72,
     177,   158,   158,   158,   158,   158,    72,   158
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    97,    97,    97,    97,    97,    97,
      98,    99,    99,   100,   100,   100,   100,   101,   102,   103,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   108,
     109,   109,   110,   110,   111,   112,   112,   113,   114,   114,
     115,   116,   116,   117,   117,   118,   118,   118,   119,   120,
     120,   121,   121,   122,   122,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   128,
     129,   129,   129,   130,   130,   131,   131,   132,   132,   132,
     132,   133,   133,   134,   134,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   136,   137,   137,   138,   138,   139,
     139,   139,   139,   139,   139,   140,   140,   141,   142,   142,
     143,   144,   145,   145,   145,   145,   145,   145,   145,   145,
     146,   146,   146,   146,   147,   147,   147,   147,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     149,   149,   150,   151,   151,   151,   151,   152,   152,   152,
     152,   153,   153,   154,   154,   155,   155,   156,   156,   156,
     156,   156,   157,   157,   157,   157,   157,   157,   158,   158,
     158,   158,   158,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   160,   161,   162,   163,   164,   164,
     164,   164,   164,   164,   164,   165,   166,   167,   168,   168,
     169,   170,   171,   171,   172,   172,   173,   173,   173,   173,
     173,   173,   173,   173,   174,   174,   174,   174,   174,   174,
     174,   174,   175,   175,   176,   176,   176,   176,   177,   178,
     178,   179,   180,   181,   181,   182,   183,   183,   184,   184,
     185,   186,   187,   187,   187,   188,   188,   189,   190,   190,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     192,   192,   192,   192,   192,   192,   192,   193,   193,   193,
     193,   193,   194,   194,   194,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   196,   196,   196,   197,   197,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   200,   200,   200,   200,   200,   200,
     201,   201,   202,   202,   203,   203,   203,   203,   203,   203,
     204,   204,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   206,   206,
     206,   207,   207,   208,   208,   209,   209,   210,   210,   211,
     211,   212,   212,   212,   213,   213,   213,   213,   213,   214,
     214,   214,   214,   215,   215,   215,   216,   216,   216,   216,
     217,   217,   217,   217,   217,   218,   219,   220,   220,   220,
     220,   221,   221,   221,   221,   222,   222,   222,   222,   223,
     224
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     2,     2,     3,
       2,     2,     1,     1,     1,     1,     1,     3,     5,     6,
       6,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     2,
       3,     3,     1,     1,     1,     3,     3,     1,     2,     2,
       3,     2,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     2,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     1,     3,     4,     1,
       2,     1,     1,     2,     3,     2,     3,     2,     3,     3,
       4,     3,     4,     1,     2,     2,     4,     3,     1,     2,
       3,     3,     4,     3,     4,     2,     1,     2,     1,     1,
       2,     2,     2,     3,     3,     4,     1,     2,     2,     3,
       3,     4,     5,     6,     2,     3,     3,     4,     4,     5,
       5,     6,     4,     5,     5,     6,     6,     7,     7,     8,
       3,     1,     2,     2,     3,     3,     4,     2,     3,     3,
       4,     3,     1,     2,     3,     2,     1,     3,     3,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     5,     7,     7,     3,     5,
       5,     5,     1,     1,     1,     1,     6,     7,     7,     8,
       7,     8,     8,     9,     6,     7,     7,     8,     7,     8,
       8,     9,     1,     1,     2,     3,     2,     3,     1,     3,
       1,     7,     7,     2,     3,     3,     2,     3,     2,     3,
       3,     5,     3,     4,     5,     2,     1,     5,     1,     1,
       1,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       4,     3,     1,     3,     3,     4,     5,     5,     6,     6,
       7,     7,     8,     5,     6,     6,     7,     7,     8,     8,
       9,     3,     3,     5,     4,     4,     3,     4,     5,     6,
       6,     7,     5,     6,     6,     7,     5,     6,     6,     7,
       7,     8,     8,     9,     3,     4,     3,     4,     3,     4,
       3,     4,     5,     6,     3,     4,     3,     4,     4,     4,
       4,     3,     1,     1,     5,     4,     3,     5,     4,     3,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     5,
       5,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     4,     5,     4,     5,     1,     1,     1,     1,     2,
       2
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
  case 25:
#line 121 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3103 "parser.tab.c"
    break;

  case 26:
#line 122 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3109 "parser.tab.c"
    break;

  case 27:
#line 126 "parser.y"
                 {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3115 "parser.tab.c"
    break;

  case 28:
#line 127 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3121 "parser.tab.c"
    break;

  case 29:
#line 128 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3127 "parser.tab.c"
    break;

  case 30:
#line 132 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3133 "parser.tab.c"
    break;

  case 31:
#line 133 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3139 "parser.tab.c"
    break;

  case 32:
#line 137 "parser.y"
                {check_gst((yyvsp[0].item).label); strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3145 "parser.tab.c"
    break;

  case 34:
#line 142 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3151 "parser.tab.c"
    break;

  case 35:
#line 146 "parser.y"
                                {strcpy((yyval.item).label,strcat((yyvsp[-2].item).label,strcat((yyvsp[-1].item).label,(yyvsp[0].item).label)));}
#line 3157 "parser.tab.c"
    break;

  case 36:
#line 147 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3163 "parser.tab.c"
    break;

  case 48:
#line 180 "parser.y"
                                 {up_sym_table();}
#line 3169 "parser.tab.c"
    break;

  case 49:
#line 184 "parser.y"
                                {make_class_entry((yyvsp[0].item).label,yylineno);}
#line 3175 "parser.tab.c"
    break;

  case 50:
#line 185 "parser.y"
                                   {string mod = check_class_modifiers((yyvsp[-2].item).label,(yyvsp[0].item).label); cout<<mod<<endl; make_class_entry((yyvsp[0].item).label,yylineno);}
#line 3181 "parser.tab.c"
    break;

  case 51:
#line 189 "parser.y"
                             {strcpy((yyval.item).label,strcat((yyvsp[-1].item).label,(yyvsp[0].item).label));}
#line 3187 "parser.tab.c"
    break;

  case 52:
#line 190 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3193 "parser.tab.c"
    break;

  case 53:
#line 194 "parser.y"
            {strcpy((yyval.item).label,"0");}
#line 3199 "parser.tab.c"
    break;

  case 54:
#line 195 "parser.y"
                {strcpy((yyval.item).label,"1");}
#line 3205 "parser.tab.c"
    break;

  case 55:
#line 196 "parser.y"
                {strcpy((yyval.item).label,"2");}
#line 3211 "parser.tab.c"
    break;

  case 56:
#line 197 "parser.y"
                {strcpy((yyval.item).label,"3");}
#line 3217 "parser.tab.c"
    break;

  case 77:
#line 248 "parser.y"
                                        {make_entry((yyvsp[-2].item).label,type,yylineno);}
#line 3223 "parser.tab.c"
    break;

  case 79:
#line 250 "parser.y"
                {make_entry((yyvsp[0].item).label,type,yylineno);}
#line 3229 "parser.tab.c"
    break;


#line 3233 "parser.tab.c"

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
#line 880 "parser.y"


int main(int argc, char** argv){
    string input, output;
    if(argc<2){
        cout<<"No Actions Provided"<<endl;
        exit(1);
    }
    for(int i=1;i<argc;i++){
        string k = argv[i];
        if(k.size()<6){
            cout<<k<<" is not a valid option."<<endl;
            exit(1);
        }
        if(k=="--help"){
            cout<<"Available Options:"<<endl<<endl;
            cout<<"--help     :  Opens this menu"<<endl;
            cout<<"--input    :  To enter input file destination from the build folder"<<endl;
            cout<<"--output   :  To enter output file destination from the build folder"<<endl;
            cout<<"--verbose  :  To list all the shift/reduce/lexer actions of the parsed program"<<endl;
            exit(1);
        }
        else if(k.size()<8){
            cout<<k<<" is not a valid option."<<endl;
            exit(1);
        }
        else if(k.substr(0,8)=="--input=") input = k.substr(8,k.size()-8);
        else if(k.size()<9){
            cout<<k<<" is not a valid option."<<endl;
            exit(1);
        }
        else if(k.substr(0,9)=="--output=") output = k.substr(9,k.size()-9);
        else if(k=="--verbose") yydebug=1;
        else{
            cout<<k<<" is not a valid option."<<endl;
            exit(1);
        }
    }
    if(input.size()==0){
        cout<<"No input file provided"<<endl;
        exit(1);
    }
    if(input.size()<6 || input.substr(input.size()-5,5)!=".java"){
        cout<<input<<" is not a valid java file"<<endl;
        exit(1);
    }
    if(output.size()==0) output = input.substr(0,input.size()-5)+".dot";
    node_number=1;
    yyin = fopen(input.c_str(),"r");
    fout.open(output,ios::out);
    st.empty();
    fout<<"digraph G{"<<endl<<"node[ordering=out]"<<endl;

    init_symbol_table();
    yyparse();


    fout<<"}"<<endl;
    exit(0);
}
