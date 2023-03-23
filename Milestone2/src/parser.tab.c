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

bool first_parse;
fstream fout,fin;
stack<int> st;
int node_number=1;
string type;
string modifiers;
string temp;

vector<tuple<string,string,bool,bool> > arguments;

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



#line 123 "parser.tab.c"

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
#line 57 "parser.y"

    struct {
        char label[1000];
        char type[100];
        int dims;
        bool lit;
    }item;

#line 279 "parser.tab.c"

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
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3594

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  334
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  650

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
       0,    73,    73,    76,    77,    78,    79,    80,    81,    82,
      86,    90,    91,    95,    96,    97,    98,   102,   106,   110,
     114,   118,   119,   123,   124,   128,   129,   133,   134,   135,
     139,   140,   144,   145,   149,   153,   154,   158,   162,   163,
     167,   168,   172,   173,   177,   178,   179,   180,   184,   185,
     189,   190,   194,   195,   196,   197,   201,   202,   203,   207,
     208,   212,   213,   217,   218,   219,   220,   224,   225,   229,
     230,   231,   232,   236,   237,   241,   242,   246,   247,   248,
     249,   250,   251,   255,   256,   260,   264,   265,   269,   270,
     274,   275,   276,   277,   281,   282,   283,   284,   285,   286,
     290,   291,   296,   297,   301,   302,   303,   304,   308,   309,
     313,   314,   318,   319,   323,   324,   325,   326,   327,   331,
     332,   333,   334,   335,   336,   340,   341,   342,   343,   344,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   362,   366,   370,   374,   378,   379,   380,   381,   382,
     383,   384,   387,   391,   395,   399,   404,   405,   409,   413,
     417,   418,   422,   423,   427,   428,   429,   430,   431,   432,
     433,   434,   438,   439,   440,   441,   442,   443,   444,   445,
     449,   450,   454,   455,   456,   457,   461,   465,   466,   470,
     474,   478,   479,   483,   487,   488,   492,   493,   497,   501,
     505,   506,   507,   511,   512,   516,   520,   521,   525,   526,
     527,   528,   529,   530,   531,   535,   536,   537,   538,   539,
     540,   544,   545,   546,   550,   551,   552,   553,   557,   558,
     562,   563,   564,   565,   566,   567,   568,   569,   570,   571,
     575,   576,   577,   578,   579,   580,   584,   585,   589,   590,
     594,   595,   596,   597,   598,   599,   603,   604,   608,   609,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,   627,   628,   629,
     630,   631,   635,   636,   637,   641,   642,   646,   647,   651,
     652,   656,   657,   661,   662,   666,   667,   668,   672,   673,
     674,   675,   676,   680,   681,   682,   683,   687,   688,   689,
     693,   694,   695,   696,   700,   701,   702,   703,   704,   708,
     722,   735,   736,   737,   738,   742,   743,   744,   745,   749,
     750,   751,   752,   756,   770
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
  "ArrayType", "Dims", "ClassDeclaration", "ClassModifiers",
  "ClassModifier", "ClassBody", "ClassBodyDeclarations",
  "ClassBodyDeclaration", "ClassMemberDeclaration", "FieldDeclaration",
  "VariableDeclaratorList", "VariableDeclarator", "VariableInitializer",
  "MethodDeclaration", "MethodDeclarator", "FormalParameterList",
  "FormalParameter", "MethodBody", "StaticInitializer",
  "ConstructorDeclaration", "Declarator", "ConstructorBody",
  "ExplicitConstructorInvocation", "Expressions", "InterfaceDeclaration",
  "ArrayInitializer", "VariableInitializerList", "Block",
  "BlockStatements", "BlockStatement", "Statement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "EmptyStatement",
  "LabeledStatement", "LabeledStatementNoShortIf", "ExpressionStatement",
  "StatementExpression", "IfThenStatement", "IfThenElseStatement",
  "IfThenElseStatementStart", "IfThenElseStatementNoShortIf",
  "AssertStatement", "WhileStatement", "WhileStatementNoShortIf",
  "ForStatement", "ForStatementNoShortIf", "BasicForStatement",
  "BasicForStatementNoShortIf", "ForInit", "LocalVariableDeclaration",
  "ForUpdate", "StatementExpressionList", "EnhancedForStatement",
  "EnhancedForStatementNoShortIf", "BreakStatement", "YieldStatement",
  "ContinueStatement", "ReturnStatement", "ThrowStatement",
  "SynchronizedStatement", "TryStatement", "Catches", "CatchClause",
  "Primary", "PrimaryNoNewArray", "Literal",
  "ClassInstanceCreationExpression",
  "UnqualifiedClassInstanceCreationExpression", "ArrayAccess",
  "MethodInvocation", "ArrayCreationExpression", "DimExprs", "Expression",
  "LambdaExpression", "AssignmentExpression", "Assignment",
  "ConditionalExpression", "ConditionalOrExpression",
  "ConditionalAndExpression", "InclusiveOrExpression",
  "ExclusiveOrExpression", "AndExpression", "EqualityExpression",
  "RelationalExpression", "ShiftExpression", "AdditiveExpression",
  "MultiplicativeExpression", "UnaryExpression", "PreIncrementExpression",
  "PreDecrementExpression", "UnaryExpressionNotPlusMinus",
  "CastExpression", "PostfixExpression", "PostIncrementExpression",
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
     345,   346,   347,   348,   349
};
# endif

#define YYPACT_NINF (-462)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-333)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     872,    68,  -462,    94,   204,   207,  -462,  -462,  -462,    52,
    -462,   622,   622,  -462,  -462,  -462,  -462,  -462,   155,  -462,
    -462,   233,  -462,  -462,    39,  -462,   207,    10,    39,   267,
    -462,   622,   155,  -462,   155,  -462,   281,   307,  -462,   310,
    -462,   327,    91,  -462,  -462,   314,   155,    39,    39,  -462,
    -462,   325,  -462,  1752,  -462,  -462,   330,  -462,   340,   344,
     343,  -462,  -462,  -462,   267,  -462,   858,   624,  -462,  -462,
    -462,  -462,  -462,  -462,   347,  -462,   176,  -462,   323,  -462,
    -462,   157,  3348,  -462,   178,  -462,   193,    30,  -462,   349,
     189,   352,  -462,  3348,  3396,    87,  -462,  3396,  2530,  -462,
    -462,  -462,   380,   362,  -462,  3348,   330,   371,   366,  3348,
     371,  3449,  -462,  1848,  -462,  -462,  -462,  -462,  -462,  -462,
     345,  -462,  -462,   392,  -462,  -462,  -462,  -462,  -462,  -462,
    -462,  -462,  -462,  -462,  -462,  -462,   397,   372,  -462,    22,
    -462,   919,    83,  -462,  -462,  -462,  -462,   293,   303,   309,
    -462,   325,   -26,   343,   256,    21,  -462,   -26,   350,   376,
     340,   344,   347,  -462,  -462,  1933,  -462,   351,   353,  -462,
      87,  -462,    -8,    37,  -462,  3396,    18,  1582,  3396,  3396,
    3396,  3497,  -462,  -462,    -1,  -462,  -462,  -462,  -462,    13,
     422,   420,   364,   427,   299,   311,   251,   150,   275,  -462,
    -462,  -462,  -462,  -462,   293,  -462,  -462,   359,  -462,   360,
    -462,   371,   371,    23,  2273,  2578,  3348,   363,   389,  2386,
     130,  -462,  -462,   390,   390,   235,  -462,  -462,   367,   398,
    3348,   369,   326,   257,    28,  3348,   377,    32,  3348,  3348,
     172,  3348,  3348,  3348,  3348,  3348,  3348,  3348,  3348,  3348,
    3348,  3348,  -462,  -462,  -462,  2273,    90,  3348,  3348,  3348,
    3348,  3348,  3348,  3348,  3348,  3348,  3348,  3348,  3348,  3348,
    -462,  -462,  -462,  -462,  -462,   376,  2626,   266,   371,  -462,
    -462,  -462,   382,   -26,    45,   -26,  -462,  -462,   248,   403,
    3456,  2018,  2103,  -462,  -462,   120,   343,   401,   153,  -462,
    -462,  2674,   451,   114,   827,    41,   386,  -462,  -462,  -462,
    3348,  -462,  3396,  3348,  3396,  3396,  3396,  3396,  3396,  3396,
    3396,  3396,  3396,  3396,  3396,  3396,  3396,  3396,  3396,  3396,
    3396,  3396,  -462,  -462,    46,    54,    44,  2722,   371,   371,
    -462,   385,   444,   449,  -462,  -462,   105,  -462,   391,  -462,
     114,  3516,  2770,   322,   421,   322,   421,  2820,  -462,   424,
     396,  -462,   425,   330,   337,  -462,  -462,   404,  -462,  -462,
    -462,  -462,   430,   207,   453,  -462,  -462,  -462,  -462,  -462,
     405,  -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,   433,
    -462,   408,  -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,
    -462,  -462,  -462,  -462,  2434,  -462,  -462,  -462,  2626,  -462,
    -462,  -462,  -462,  -462,  2868,  2916,   188,  -462,  2188,  -462,
     343,   443,   376,  -462,  -462,  -462,  -462,  2674,  3396,   245,
    2770,   261,   477,   445,   413,   422,   472,   420,   364,   427,
     299,   311,   311,   251,   251,   251,   251,   150,   150,   150,
     275,   275,  -462,  -462,  -462,  -462,  -462,   371,   371,  1289,
     416,   473,   473,  2964,  3348,  1604,  3348,  -462,  2338,   245,
     423,  -462,  2770,   376,  -462,   376,    39,   107,  3012,   330,
     153,  -462,   330,  -462,  2273,  3060,   235,   454,  -462,  3108,
    -462,   429,  -462,  -462,   109,  -462,   431,   118,   434,   119,
     249,  -462,   376,  -462,  -462,  -462,  -462,  3396,   445,  2674,
    -462,  -462,  3348,   473,   473,  2273,   432,   449,  1366,  2445,
     435,   438,  -462,  -462,   447,   234,   450,  -462,  -462,   481,
    -462,   485,  -462,  -462,  -462,  -462,  -462,  -462,   439,  -462,
      39,  -462,   126,  -462,   441,  -462,  -462,  -462,   148,   464,
    -462,   152,  -462,  2482,  -462,  -462,   442,  -462,   455,  3156,
    -462,  -462,  -462,  -462,  -462,  -462,  -462,  2273,  2273,   456,
    2273,   459,  2493,  2273,  1072,  2338,  3348,  2338,  -462,  -462,
    -462,   330,  -462,  3204,  -462,  -462,  -462,  -462,  -462,   458,
     154,  -462,  -462,  2273,  -462,  2273,  2273,   462,  -462,  3252,
     461,   506,  -462,   465,  -462,  -462,  -462,   158,  -462,   467,
    -462,  -462,  -462,  2273,  2541,   470,  3300,  3348,  2338,  -462,
    -462,  -462,  2338,   466,  2637,  2685,   471,   479,  -462,  -462,
    2338,  2338,   484,  2338,   487,  2733,  2338,  -462,  -462,  2338,
    -462,  2338,  2338,   490,  -462,  -462,  -462,  -462,  2338,  -462
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,    46,     0,     0,     0,    45,    44,    47,     0,
       2,     6,     4,    12,    13,    14,    15,    16,     3,    22,
      23,     0,    43,    24,     0,    36,     0,     0,     0,    10,
       1,     8,     7,    11,     5,    21,     0,     0,    42,     0,
      40,     0,     0,    17,   102,     0,     9,     0,     0,    28,
      31,    36,    30,     0,    48,    58,    47,    29,     0,     0,
      25,    27,    26,    32,    34,    33,     0,     0,    51,    52,
      56,    57,    53,    54,     0,    55,     0,    35,     0,    41,
     103,     0,     0,   217,     0,   218,     0,     0,   216,     0,
      36,     0,   215,     0,     0,     0,   220,     0,     0,   110,
     141,   219,     0,     0,   209,     0,     0,     0,     0,     0,
       0,   330,   130,     0,   113,   118,   119,   131,   120,   132,
       0,   121,   122,     0,   133,   123,   124,   160,   161,   134,
     140,   135,   136,   138,   137,   139,   329,   206,   208,   212,
     221,   213,   214,   207,   145,   146,   147,     0,   148,   149,
      85,     0,     0,    73,    65,     0,    62,     0,     0,    37,
       0,     0,     0,    49,    50,     0,    86,    35,     0,    18,
       0,    88,     0,     0,    76,     0,    36,     0,     0,     0,
       0,   330,   212,   214,     0,   248,   249,   257,   256,   282,
     285,   287,   289,   291,   293,   295,   298,   303,   307,   310,
     314,   315,   318,   324,   321,   331,   332,     0,   191,     0,
     194,     0,     0,     0,     0,     0,     0,     0,    36,     0,
     330,   213,   320,     0,     0,    34,   319,   196,     0,     0,
       0,     0,     0,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,   112,   144,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     334,   333,    84,    69,    83,    74,     0,    66,     0,    59,
      70,    39,     0,     0,     0,     0,    87,    90,     0,   209,
     330,     0,     0,    19,    20,     0,    77,     0,     0,    89,
     323,     0,     0,    25,   330,     0,     0,   317,   316,   322,
       0,   156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   192,   195,     0,     0,     0,     0,     0,     0,
     188,     0,   181,   180,   142,   230,     0,   101,     0,   211,
       0,   330,     0,     0,   240,     0,   242,     0,   197,     0,
       0,   198,     0,     0,   200,   204,   115,     0,   193,   114,
     267,   269,    35,     0,     0,   210,   222,   258,   265,   266,
       0,   264,   263,   261,   262,   268,   260,   259,   153,     0,
     223,     0,   279,   281,   270,   277,   278,   276,   275,   273,
     274,   280,   272,   271,     0,    63,    68,    67,     0,    61,
      38,    71,    60,    72,     0,     0,     0,    92,     0,    91,
      78,     0,    79,    81,    75,   252,   255,     0,     0,    37,
       0,     0,     0,   211,     0,   286,     0,   288,   290,   292,
     294,   296,   297,   300,   302,   299,   301,   305,   306,   304,
     309,   308,   313,   312,   311,   117,   116,     0,     0,     0,
       0,   184,   182,     0,     0,     0,     0,   231,     0,     0,
       0,   244,     0,   241,   245,   243,   224,     0,     0,     0,
       0,   201,     0,   203,     0,     0,     0,     0,   228,     0,
     229,     0,   104,   109,     0,    64,     0,     0,     0,     0,
       0,    93,    80,    82,   251,   254,   325,     0,     0,     0,
     327,   157,     0,   185,   183,     0,     0,   186,     0,     0,
       0,     0,   187,   100,     0,    36,     0,   152,   154,   119,
     126,     0,   127,   128,   129,   162,   163,   247,     0,   225,
     226,   236,     0,   199,     0,   202,   158,   232,     0,     0,
     234,     0,   105,     0,   106,    96,     0,    94,     0,     0,
     326,   328,   250,   253,   284,   283,   164,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   246,   227,
     237,     0,   233,     0,   235,   107,   108,    97,    95,     0,
       0,   165,   166,     0,   168,     0,     0,     0,   189,     0,
       0,   181,   143,     0,   155,   205,   238,     0,    98,     0,
     167,   169,   170,     0,     0,     0,     0,     0,     0,   239,
      99,   171,     0,     0,     0,     0,     0,     0,   159,   172,
       0,     0,     0,     0,     0,     0,     0,   173,   174,     0,
     176,     0,     0,     0,   190,   175,   177,   178,     0,   179
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -462,  -462,  -462,  -462,   514,   282,  -462,  -462,  -462,  -462,
     331,   265,   -38,   -77,  -462,  -462,   468,  1254,  -462,   -19,
    -462,   225,     2,   -22,  -462,   482,  -462,  -462,   -63,   286,
    -395,  -462,   -45,   407,  -291,  -142,  -462,  -462,   192,   406,
    -462,  -338,  -462,    27,  -462,   -35,  -153,  -110,   822,   901,
    -423,  -462,  -462,  -462,  -462,  -203,  -462,  -462,  -312,  -462,
    -462,  -462,  -462,  -462,  -462,  -462,  -462,    -7,    -4,  -461,
    -211,  -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,
    -462,   202,  -462,  -462,  -462,   -53,  -229,  1378,   -20,  -462,
     357,  1249,    62,  -462,   161,    73,  -462,   278,   273,   277,
     280,   283,  -282,    65,    79,   -37,   -89,   194,   393,  -416,
    -462,   426,   607,   640
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   110,    60,    61,    62,    63,   181,    65,   277,
      20,    21,    22,    40,    67,    68,    69,    70,   155,   156,
     405,    71,   152,   173,   174,   273,    72,    73,   153,   166,
     291,   346,    23,   406,   494,   112,   113,   114,   115,   528,
     116,   117,   118,   530,   119,   120,   121,   122,   123,   532,
     124,   125,   533,   126,   534,   127,   535,   341,   342,   516,
     517,   128,   536,   129,   130,   131,   132,   133,   134,   135,
     364,   365,   136,   137,   138,   182,   140,   141,   183,   143,
     354,   347,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     139,    59,   343,   253,    75,   222,    44,   424,   226,   493,
     340,   376,   292,   495,   157,   280,   310,   510,   223,   477,
      53,   150,   312,    38,   301,    79,    80,   390,   161,    59,
      42,   296,    75,   142,    83,    49,   441,   442,    85,   278,
    -151,   159,    49,   172,   234,   529,   278,   237,   272,   212,
     278,   336,    30,    88,    50,   298,    49,   569,   571,   298,
     139,    50,   218,   278,   278,   215,    92,    52,    38,    25,
      93,   232,   278,   311,    52,    50,   497,   499,    94,    95,
      96,   297,   313,    25,    43,    39,   300,    97,    52,   307,
     308,   309,   561,   142,  -151,   279,  -151,   337,   284,    49,
     303,  -150,   366,    57,   101,   102,   369,    24,   104,   299,
      57,   597,   139,   432,   338,   283,   285,   274,    50,   412,
     455,   211,   274,   466,    57,   466,    25,   553,   456,   389,
      77,    52,   295,    25,   275,   457,   466,   466,   418,   172,
     542,   411,   350,   413,   466,   142,   373,   548,   334,   335,
     240,   551,   529,   623,   529,  -150,   531,  -150,   586,   420,
     139,   139,   158,   632,   634,    49,   466,    57,    78,    49,
     466,     1,   466,    26,   643,   339,   466,   467,   244,   540,
     554,   170,   253,     2,    50,   170,   428,   376,    50,   544,
     556,   558,    25,   142,   142,   529,    25,    52,   580,   529,
       4,    52,   139,   327,   353,   355,   214,   529,   529,   421,
     529,   372,   328,   529,   144,   167,   529,   207,   529,   529,
     582,   590,     6,     7,   584,   529,   609,   372,   373,   171,
     619,    74,   209,    57,     8,   142,   215,    57,   139,   139,
     452,   453,   454,    28,   373,   607,    25,   145,   274,    36,
     274,   575,   208,   168,   374,    45,   340,   375,   162,    74,
     172,     2,   522,   531,    66,   531,   425,   210,   229,   487,
     500,   142,   142,   375,   144,   461,   462,   422,    37,   276,
     276,   215,   357,    35,   429,   431,   324,    45,   325,   408,
     450,   451,    66,   282,    33,   414,   559,    35,   458,    35,
       6,     7,   326,    81,   158,   158,   531,   145,   253,   282,
     531,    35,     8,    33,   282,   340,   340,   507,   531,   531,
      47,   531,    49,   318,   531,   319,   144,   531,   481,   531,
     531,   469,   431,   508,   329,   473,   531,   475,     2,   506,
     362,    50,    32,    34,   320,   321,    48,    76,   270,    51,
     330,   362,   331,    77,    52,   363,    53,   271,  -331,   145,
     322,   323,    46,   343,  -332,   139,   482,  -331,   404,   340,
     282,   340,    81,  -332,   144,   144,    53,     6,     7,   151,
     471,    54,   474,   154,    55,   443,   444,   445,   446,    56,
      57,   158,   504,   165,   513,   514,   213,   169,   142,   216,
     229,   502,    58,   447,   448,   449,   139,   145,   145,   230,
     233,   340,   139,   235,   255,   139,   144,   256,   560,   254,
     257,   340,   340,   281,   282,   293,   314,   294,   315,   316,
     317,   139,   340,   332,   333,   349,   215,   359,   352,   142,
     423,   358,   172,   361,   543,   142,   146,   545,   142,   145,
     415,   368,   144,   144,   539,   410,    83,   427,   433,   463,
      85,   464,   139,   468,   142,   139,   139,   465,   479,   472,
     175,   478,   480,   487,   562,    88,   484,   485,   488,   147,
     489,   490,   503,   509,   218,   145,   145,   511,    92,   512,
     518,   278,   219,   549,   574,   142,   537,   576,   142,   142,
     552,    95,    96,  -125,   567,   555,   146,   577,   557,   572,
     573,   583,   578,   581,   139,   139,   587,   139,   579,   139,
     139,   139,   139,   617,   139,    31,   101,   102,   593,   588,
     104,   595,   608,   180,   613,   616,   339,   618,   630,   147,
     139,   620,   139,   139,   624,   635,   605,   142,   142,   164,
     142,   636,   142,   142,   142,   142,   639,   142,   146,   641,
     139,   139,   648,   224,   409,   139,   483,   600,   286,   139,
     601,   139,   139,   142,   564,   142,   142,   139,   139,   144,
     139,   356,   139,   139,   305,   565,   139,   437,   139,   139,
     435,   147,   438,   142,   142,   139,   439,     0,   142,     0,
     440,     0,   142,     0,   142,   142,   146,   146,     0,     0,
     142,   142,   145,   142,     0,   142,   142,     0,     0,   142,
     144,   142,   142,     0,     0,     0,   144,     0,   142,   144,
       0,     0,     0,     0,     0,     0,    49,     0,     1,   147,
     147,     0,     0,     0,     0,   144,     0,     0,   146,     0,
       2,     0,     2,   145,     0,    50,     0,     0,     0,   145,
     148,     0,   145,    51,     3,     0,     0,     4,    52,     0,
      53,     0,     0,     0,     0,     0,   144,     0,   145,   144,
     144,   147,     0,     0,   146,   146,     0,     0,     0,     6,
       7,     6,     7,   149,     0,   163,     0,     0,    55,     0,
       0,     8,     0,    56,    57,     0,     0,     0,     0,   145,
       0,     0,   145,   145,     0,     0,    58,   147,   147,     0,
     148,     0,     0,     0,     0,     0,     0,     0,   144,   144,
       0,   144,     0,   144,   144,   144,   144,     0,   144,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   149,   144,     0,   144,   144,     0,     0,
       0,   145,   145,     0,   145,     0,   145,   145,   145,   145,
       0,   145,   148,     0,   144,   144,     0,     0,     0,   144,
       0,     0,     0,   144,     0,   144,   144,   145,     0,   145,
     145,   144,   144,     0,   144,     0,   144,   144,     0,     0,
     144,     0,   144,   144,     0,   149,     0,   145,   145,   144,
       0,   146,   145,     0,     0,     0,   145,     0,   145,   145,
     148,   148,     0,     0,   145,   145,     0,   145,     0,   145,
     145,     0,   238,   145,     0,   145,   145,   239,     0,     0,
       0,     0,   145,     0,   147,     0,     0,   240,     0,     0,
     241,     0,   146,   149,   149,     0,     0,     0,   146,     0,
       0,   146,   148,   242,     0,   243,   -34,     0,     0,     0,
      49,     0,     0,     0,     0,   430,     0,   146,     0,   245,
       0,   246,     0,     0,     0,   147,     2,   247,     1,    50,
     248,   147,     0,   249,   147,   149,     0,    51,   148,   148,
       2,     0,    52,   250,     0,   251,     0,     0,   146,     0,
     147,   146,   146,     0,     3,     0,   -34,     4,     0,     0,
       0,     0,     0,     0,   258,     6,     7,     0,     0,   259,
       5,   149,   149,     0,     0,     0,     0,     8,    57,     6,
       7,   147,   260,     0,   147,   147,     0,     0,     0,     0,
     160,     8,     0,     0,     0,   261,     0,   262,     0,     0,
     146,   146,     0,   146,     0,   146,   146,   146,   146,     0,
     146,   263,     0,   264,     0,     0,     0,     0,     0,   265,
       0,     0,   266,     0,     0,   267,   146,     0,   146,   146,
       0,     0,     0,   147,   147,   268,   147,   269,   147,   147,
     147,   147,     0,   147,     0,     0,   146,   146,     0,     0,
       0,   146,     0,     0,     0,   146,     0,   146,   146,   147,
       0,   147,   147,   146,   146,   148,   146,     0,   146,   146,
       0,     0,   146,     0,   146,   146,   344,     0,     0,   147,
     147,   146,     0,     0,   147,     0,     0,     0,   147,     0,
     147,   147,     0,     0,     0,     0,   147,   147,   149,   147,
       0,   147,   147,     0,     0,   147,   148,   147,   147,     0,
       0,     0,   148,     0,   147,   148,     0,   388,     0,     0,
       0,     0,     0,    83,    49,     0,     0,    85,     0,     0,
       0,   148,     0,     0,     0,     0,     0,     0,     0,   149,
     336,     0,    88,    50,     0,   149,     0,     0,   149,     0,
       0,   218,     0,     0,     0,    92,    52,     0,     0,    93,
       0,     0,   148,     0,   149,   148,   148,    94,    95,    96,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   599,     0,     0,     0,
       0,     0,    57,   101,   102,   149,     0,   104,   149,   149,
       0,     0,     0,   338,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   148,   148,     0,   148,     0,   148,
     148,   148,   148,     0,   148,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     148,     0,   148,   148,     0,     0,     0,   149,   149,     0,
     149,     0,   149,   149,   149,   149,     0,   149,     0,     0,
     148,   148,     0,     0,     0,   148,     0,     0,     0,   148,
       0,   148,   148,   149,     0,   149,   149,   148,   148,     0,
     148,     0,   148,   148,     0,     0,   148,     0,   148,   148,
       0,     0,     0,   149,   149,   148,     0,    27,   149,    29,
       0,     0,   149,     0,   149,   149,     0,     0,     0,     0,
     149,   149,     0,   149,     0,   149,   149,     0,     0,   149,
      41,   149,   149,     0,     0,     0,     0,     0,   149,     0,
     527,     0,     0,    64,     0,     0,     0,     0,     0,     0,
      83,     0,     0,     0,    85,     0,   546,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      64,    64,     0,     0,     0,     0,     0,     0,   218,     0,
       0,   184,    92,     0,     0,    64,    93,   566,     0,     0,
       0,    64,   217,     0,    94,    95,    96,   228,   220,   225,
       0,   220,     0,    97,   231,     0,     0,     0,   236,     0,
       0,   515,     0,     0,     0,     0,     0,   111,     0,     0,
     101,   102,     0,     0,   104,     0,     0,    83,     0,     0,
       0,    85,     0,     0,     0,     0,     0,     0,     0,   591,
     592,     0,   594,     0,     0,   598,    88,   344,     0,   388,
       0,     0,     0,     0,     0,   218,     0,     0,     0,    92,
       0,     0,     0,    93,     0,   610,     0,   611,   612,   290,
       0,    94,    95,    96,    64,     0,   306,     0,     0,   220,
      97,   304,   220,   220,   220,   621,     0,     0,   568,     0,
     546,     0,     0,     0,   566,     0,     0,   101,   102,     0,
       0,   104,   591,   592,     0,   594,     0,     0,   598,     0,
       0,   610,     0,   611,   612,   348,     0,   111,   306,     0,
     621,     0,   221,   351,     0,   221,   602,     0,   604,   360,
       0,     0,     0,     0,   367,     0,     0,   370,   371,     0,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,     0,     0,     0,     0,     0,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   628,
       0,     0,     0,   629,     0,   407,     0,     0,     0,     0,
       0,   637,   638,     0,   640,     0,     0,   644,     0,     0,
     645,     0,   646,   647,     0,   111,   111,     0,     0,   649,
     426,     0,    64,   221,     0,     0,   221,   221,   221,   434,
       0,     0,   436,     0,     0,     0,   220,     0,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   460,     0,     0,     0,
      64,     0,     0,    83,    49,     0,     0,    85,     0,     0,
       0,   470,     0,     0,     0,     0,     0,   175,     0,     0,
     170,     0,    88,    50,     0,    83,     0,     0,     0,    85,
       0,   176,     0,     0,     0,    92,    52,   486,     0,   177,
       0,     0,     0,     0,    88,   178,     0,    94,    95,    96,
       0,     0,     0,   218,   179,     0,    97,    92,     0,     0,
       0,    93,     0,   407,   302,     0,     0,   407,     0,    94,
      95,    96,    57,   101,   102,     0,     0,   104,    97,     0,
     180,     0,   111,     0,     0,     0,   505,     0,     0,   380,
       0,     0,   220,     0,     0,   101,   102,   220,     0,   104,
     221,     0,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
       0,     0,   520,   521,     0,   523,     0,     0,     0,     0,
       0,   538,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   563,    82,
       0,   220,   220,    83,    49,    84,   220,    85,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,    88,    50,    89,     0,     0,     0,     0,     0,
       0,    90,    91,     0,     0,    92,    52,     0,    53,    93,
       0,     0,   407,     0,     0,     0,   221,    94,    95,    96,
       0,   221,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,    98,    99,     0,   603,   100,     0,   111,     0,
       0,     0,    57,   101,   102,   103,     0,   104,   105,     0,
       0,     0,   106,   107,     0,   108,   109,     0,   615,     0,
       0,     0,     0,     0,     0,    82,     0,     0,     0,    83,
      49,    84,     0,    85,     0,   626,   627,    86,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,    88,    50,
      89,     0,     0,     0,     0,   221,   221,    90,    91,     0,
     221,    92,    52,     0,    53,    93,     0,     0,     0,     0,
       0,     0,     0,    94,    95,    96,     0,     0,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,    98,   252,
       0,     0,   100,     0,     0,     0,     0,     0,    57,   101,
     102,   103,     0,   104,   105,     0,     0,     0,   106,   107,
      82,   108,   109,     0,    83,    49,    84,     0,    85,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,    88,    50,    89,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,    92,    52,     0,    53,
      93,     0,     0,     0,     0,     0,     0,     0,    94,    95,
      96,     0,     0,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,    98,   287,     0,     0,   100,     0,     0,
       0,     0,     0,    57,   101,   288,   103,     0,   289,   105,
       0,     0,     0,   106,   107,    82,   108,   109,     0,    83,
      49,    84,     0,    85,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,    88,    50,
      89,     0,     0,     0,     0,     0,     0,    90,    91,     0,
       0,    92,    52,     0,    53,    93,     0,     0,     0,     0,
       0,     0,     0,    94,    95,    96,     0,     0,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,    98,   417,
       0,     0,   100,     0,     0,     0,     0,     0,    57,   101,
     102,   103,     0,   104,   105,     0,     0,     0,   106,   107,
      82,   108,   109,     0,    83,    49,    84,     0,    85,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,    88,    50,    89,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,    92,    52,     0,    53,
      93,     0,     0,     0,     0,     0,     0,     0,    94,    95,
      96,     0,     0,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,    98,   419,     0,     0,   100,     0,     0,
       0,     0,     0,    57,   101,   102,   103,     0,   104,   105,
       0,     0,     0,   106,   107,    82,   108,   109,     0,    83,
      49,    84,     0,    85,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,    88,    50,
      89,     0,     0,     0,     0,     0,     0,    90,    91,     0,
       0,    92,    52,     0,    53,    93,     0,     0,     0,     0,
       0,     0,     0,    94,    95,    96,     0,     0,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,    98,   501,
       0,     0,   100,     0,     0,     0,     0,     0,    57,   101,
     102,   103,     0,   104,   105,     0,     0,     0,   106,   107,
      82,   108,   109,     0,    83,     0,    84,     0,    85,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,    92,     0,     0,    53,
      93,     0,     0,     0,     0,     0,     0,     0,    94,    95,
      96,     0,     0,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,    98,     0,    82,     0,   100,     0,    83,
       0,    84,     0,    85,   101,   102,   103,    86,   104,   105,
       0,     0,     0,   106,     0,     0,   108,   109,    88,     0,
     524,     0,     0,     0,     0,     0,     0,   525,    91,     0,
       0,    92,     0,     0,    53,    93,     0,     0,     0,     0,
       0,     0,     0,    94,    95,    96,     0,    83,    49,     0,
       0,    85,    97,     0,     0,     0,     0,     0,    98,     0,
       0,   175,   100,     0,     0,     0,    88,    50,     0,   101,
     102,   103,     0,   104,   105,   176,     0,     0,   106,    92,
      52,   526,   109,   177,     0,     0,     0,     0,     0,   178,
       0,    94,    95,    96,     0,    83,     0,     0,   179,    85,
      97,     0,   491,     0,     0,     0,    83,     0,     0,   175,
      85,     0,     0,     0,    88,     0,    57,   101,   102,     0,
       0,   104,     0,   176,   180,    88,     0,    92,     0,     0,
     404,   177,     0,     0,   218,     0,     0,   178,    92,    94,
      95,    96,    93,    83,     0,     0,   179,    85,    97,     0,
      94,    95,    96,     0,    83,   492,     0,   175,    85,    97,
       0,     0,    88,     0,     0,   101,   102,   570,     0,   104,
       0,   176,   180,    88,     0,    92,   101,   102,   404,   177,
     104,     0,   218,     0,     0,   178,    92,    94,    95,    96,
      93,    83,     0,     0,   179,    85,    97,     0,    94,    95,
      96,     0,    83,   585,     0,   175,    85,    97,     0,     0,
      88,     0,     0,   101,   102,   596,     0,   104,     0,   176,
     180,    88,     0,    92,   101,   102,     0,   177,   104,     0,
     218,     0,     0,   178,    92,    94,    95,    96,    93,    83,
       0,     0,   179,    85,    97,     0,    94,    95,    96,     0,
       0,     0,     0,   175,   227,    97,     0,     0,    88,     0,
       0,   101,   102,   622,     0,   104,     0,   176,   180,     0,
       0,    92,   101,   102,     0,   177,   104,     0,     0,     0,
       0,   178,     0,    94,    95,    96,     0,    83,     0,     0,
     179,    85,    97,     0,     0,     0,     0,     0,    83,     0,
     345,   175,    85,     0,     0,     0,    88,     0,     0,   101,
     102,     0,     0,   104,     0,   176,   180,    88,     0,    92,
       0,     0,   404,   177,     0,     0,   218,     0,     0,   178,
      92,    94,    95,    96,    93,    83,     0,     0,   179,    85,
      97,     0,    94,    95,    96,     0,    83,     0,     0,   175,
      85,    97,     0,     0,    88,     0,     0,   101,   102,   631,
       0,   104,     0,   176,   180,    88,     0,    92,   101,   102,
      53,   177,   104,     0,   218,     0,     0,   178,    92,    94,
      95,    96,    93,    83,     0,     0,   179,    85,    97,     0,
      94,    95,    96,     0,    83,     0,     0,   175,    85,    97,
       0,     0,    88,     0,     0,   101,   102,   633,     0,   104,
       0,   176,   180,    88,     0,    92,   101,   102,     0,   177,
     104,     0,   218,     0,     0,   178,    92,    94,    95,    96,
      93,    83,     0,     0,   179,    85,    97,     0,    94,    95,
      96,     0,     0,     0,     0,   175,   459,    97,     0,     0,
      88,     0,     0,   101,   102,   642,     0,   104,     0,   176,
     180,     0,     0,    92,   101,   102,     0,   177,   104,     0,
       0,     0,     0,   178,     0,    94,    95,    96,     0,     0,
       0,    83,   179,     0,    97,    85,     0,     0,     0,     0,
       0,     0,     0,   281,     0,   175,     0,     0,     0,     0,
      88,   101,   102,     0,     0,   104,     0,     0,   180,   176,
       0,     0,     0,    92,     0,     0,     0,   177,     0,     0,
       0,     0,     0,   178,     0,    94,    95,    96,     0,    83,
       0,     0,   179,    85,    97,     0,     0,     0,     0,     0,
       0,     0,   476,   175,     0,     0,     0,     0,    88,     0,
       0,   101,   102,     0,     0,   104,     0,   176,   180,     0,
       0,    92,     0,     0,     0,   177,     0,     0,     0,     0,
       0,   178,     0,    94,    95,    96,     0,    83,     0,     0,
     179,    85,    97,     0,     0,     0,     0,     0,     0,     0,
     496,   175,     0,     0,     0,     0,    88,     0,     0,   101,
     102,     0,     0,   104,     0,   176,   180,     0,     0,    92,
       0,     0,     0,   177,     0,     0,     0,     0,     0,   178,
       0,    94,    95,    96,     0,    83,     0,     0,   179,    85,
      97,     0,     0,     0,     0,     0,     0,     0,   498,   175,
       0,     0,     0,     0,    88,     0,     0,   101,   102,     0,
       0,   104,     0,   176,   180,     0,     0,    92,     0,     0,
       0,   177,     0,     0,     0,     0,     0,   178,     0,    94,
      95,    96,     0,    83,     0,     0,   179,    85,    97,     0,
       0,     0,     0,     0,     0,     0,     0,   175,   519,     0,
       0,     0,    88,     0,     0,   101,   102,     0,     0,   104,
       0,   176,   180,     0,     0,    92,     0,     0,     0,   177,
       0,     0,     0,     0,     0,   178,     0,    94,    95,    96,
       0,    83,     0,     0,   179,    85,    97,     0,     0,     0,
       0,     0,     0,     0,   541,   175,     0,     0,     0,     0,
      88,     0,     0,   101,   102,     0,     0,   104,     0,   176,
     180,     0,     0,    92,     0,     0,     0,   177,     0,     0,
       0,     0,     0,   178,     0,    94,    95,    96,     0,    83,
       0,     0,   179,    85,    97,     0,     0,     0,     0,     0,
       0,     0,   547,   175,     0,     0,     0,     0,    88,     0,
       0,   101,   102,     0,     0,   104,     0,   176,   180,     0,
       0,    92,     0,     0,     0,   177,     0,     0,     0,     0,
       0,   178,     0,    94,    95,    96,     0,    83,     0,     0,
     179,    85,    97,     0,     0,     0,     0,     0,     0,     0,
     550,   175,     0,     0,     0,     0,    88,     0,     0,   101,
     102,     0,     0,   104,     0,   176,   180,     0,     0,    92,
       0,     0,     0,   177,     0,     0,     0,     0,     0,   178,
       0,    94,    95,    96,     0,    83,     0,     0,   179,    85,
      97,     0,     0,     0,     0,     0,     0,     0,   589,   175,
       0,     0,     0,     0,    88,     0,     0,   101,   102,     0,
       0,   104,     0,   176,   180,     0,     0,    92,     0,     0,
       0,   177,     0,     0,     0,     0,     0,   178,     0,    94,
      95,    96,     0,    83,     0,     0,   179,    85,    97,     0,
       0,     0,     0,     0,     0,     0,   606,   175,     0,     0,
       0,     0,    88,     0,     0,   101,   102,     0,     0,   104,
       0,   176,   180,     0,     0,    92,     0,     0,     0,   177,
       0,     0,     0,     0,     0,   178,     0,    94,    95,    96,
       0,    83,     0,     0,   179,    85,    97,     0,     0,     0,
       0,     0,     0,     0,     0,   175,   614,     0,     0,     0,
      88,     0,     0,   101,   102,     0,     0,   104,     0,   176,
     180,     0,     0,    92,     0,     0,     0,   177,     0,     0,
       0,     0,     0,   178,     0,    94,    95,    96,     0,    83,
       0,     0,   179,    85,    97,     0,     0,     0,     0,     0,
       0,     0,     0,   175,   625,     0,     0,     0,    88,     0,
       0,   101,   102,     0,     0,   104,     0,   176,   180,     0,
       0,    92,     0,     0,     0,   177,     0,     0,     0,     0,
       0,   178,     0,    94,    95,    96,     0,    83,     0,     0,
     179,    85,    97,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,    88,     0,     0,   101,
     102,     0,     0,   104,     0,   218,   180,     0,     0,    92,
       0,     0,     0,   219,     0,     0,     0,     0,     0,   178,
       0,    94,    95,    96,   238,     0,     0,     0,   179,   239,
      97,   238,     0,     0,     0,     0,   239,     0,     0,   240,
       0,     0,   241,     0,     0,     0,   416,   101,   102,   241,
       0,   104,     0,     0,   180,   242,     0,   243,   -34,     0,
       0,     0,   242,     0,   243,   -34,     0,   244,     0,     0,
       0,   245,   238,   246,   244,     0,     0,   239,   245,   247,
     246,     0,   248,     0,     0,   249,   247,   240,     0,   248,
     241,   238,   249,     0,     0,   250,   239,   251,     0,     0,
       0,     0,   250,   242,   251,   243,   240,     0,     0,   241,
       0,     0,     0,     0,     0,   244,     0,     0,     0,   245,
       0,   246,   242,     0,   243,     0,     0,   247,     0,     0,
     248,     0,     0,   249,   430,     0,     0,     0,   245,     0,
     246,     0,     0,   250,     0,   251,   247,     0,     0,   248,
       0,     0,   249,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   250,     0,   251
};

static const yytype_int16 yycheck[] =
{
      53,    39,   213,   113,    39,    94,    28,   298,    97,   404,
     213,   240,   165,   408,    59,   157,    17,   433,    95,   357,
      46,    56,     9,    21,     6,    47,    48,   256,    66,    67,
      20,    39,    67,    53,    11,    12,   318,   319,    15,    18,
      18,    60,    12,    81,   107,   468,    18,   110,    74,    87,
      18,    28,     0,    30,    31,    18,    12,   518,   519,    18,
     113,    31,    39,    18,    18,    47,    43,    44,    66,    39,
      47,   106,    18,    74,    44,    31,   414,   415,    55,    56,
      57,    89,    69,    39,    74,    46,   175,    64,    44,   178,
     179,   180,   508,   113,    72,    74,    74,    74,   161,    12,
     177,    18,    74,    80,    81,    82,    74,    39,    85,    72,
      80,   572,   165,    72,    91,   160,   161,   152,    31,    74,
      74,    91,   157,    18,    80,    18,    39,    18,    74,    39,
      39,    44,   170,    39,   153,    91,    18,    18,   291,   177,
     478,   283,   219,   285,    18,   165,    56,   485,   211,   212,
      20,   489,   575,   614,   577,    72,   468,    74,   553,    39,
     213,   214,    48,   624,   625,    12,    18,    80,    77,    12,
      18,    16,    18,    79,   635,   213,    18,    72,    48,    72,
      71,    28,   292,    28,    31,    28,    72,   416,    31,   480,
      72,    72,    39,   213,   214,   618,    39,    44,    72,   622,
      45,    44,   255,    53,   223,   224,    17,   630,   631,    89,
     633,    39,    62,   636,    53,    39,   639,    39,   641,   642,
      72,   559,    67,    68,    72,   648,    72,    39,    56,    72,
      72,    39,    39,    80,    79,   255,    47,    80,   291,   292,
     329,   330,   331,    39,    56,   583,    39,    53,   283,    16,
     285,    17,    74,    77,    82,    20,   459,    85,    66,    67,
     298,    28,   465,   575,    39,   577,   301,    74,    20,    20,
      82,   291,   292,    85,   113,   338,   339,   296,    45,    23,
      23,    47,    47,    18,   303,   304,    35,    20,    37,    23,
     327,   328,    67,    48,    12,    47,    47,    32,   336,    34,
      67,    68,    51,    47,    48,    48,   618,   113,   418,    48,
     622,    46,    79,    31,    48,   518,   519,    72,   630,   631,
      39,   633,    12,    24,   636,    26,   165,   639,   363,   641,
     642,   350,   351,    72,    59,   354,   648,   356,    28,   428,
      14,    31,    11,    12,    33,    34,    39,    20,    55,    39,
      75,    14,    77,    39,    44,    29,    46,    64,    55,   165,
      49,    50,    31,   574,    55,   418,    29,    64,    46,   572,
      48,   574,    47,    64,   213,   214,    46,    67,    68,    39,
     353,    71,   355,    39,    74,   320,   321,   322,   323,    79,
      80,    48,   427,    46,   457,   458,    47,    74,   418,    47,
      20,   420,    92,   324,   325,   326,   459,   213,   214,    47,
      39,   614,   465,    47,    22,   468,   255,    20,   507,    74,
      48,   624,   625,    73,    48,    74,     4,    74,     8,    65,
       3,   484,   635,    74,    74,    72,    47,    39,    48,   459,
      39,    74,   480,    74,   479,   465,    53,   482,   468,   255,
      47,    74,   291,   292,   476,    73,    11,     6,    72,    74,
      15,    17,   515,    72,   484,   518,   519,    18,    72,    48,
      25,    47,    47,    20,   509,    30,    72,    47,    73,    53,
      47,    73,    39,     6,    39,   291,   292,    74,    43,    17,
      74,    18,    47,    39,    47,   515,    73,    47,   518,   519,
      71,    56,    57,    22,    72,    74,   113,    22,    74,    74,
      72,    47,    73,    72,   567,   568,    74,   570,   540,   572,
     573,   574,   575,    17,   577,    11,    81,    82,    72,    74,
      85,    72,    74,    88,    72,    74,   574,    72,    72,   113,
     593,    74,   595,   596,    74,    74,   581,   567,   568,    67,
     570,    72,   572,   573,   574,   575,    72,   577,   165,    72,
     613,   614,    72,    95,   278,   618,   364,   574,   162,   622,
     574,   624,   625,   593,   512,   595,   596,   630,   631,   418,
     633,   224,   635,   636,   177,   512,   639,   314,   641,   642,
     312,   165,   315,   613,   614,   648,   316,    -1,   618,    -1,
     317,    -1,   622,    -1,   624,   625,   213,   214,    -1,    -1,
     630,   631,   418,   633,    -1,   635,   636,    -1,    -1,   639,
     459,   641,   642,    -1,    -1,    -1,   465,    -1,   648,   468,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    16,   213,
     214,    -1,    -1,    -1,    -1,   484,    -1,    -1,   255,    -1,
      28,    -1,    28,   459,    -1,    31,    -1,    -1,    -1,   465,
      53,    -1,   468,    39,    42,    -1,    -1,    45,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,   515,    -1,   484,   518,
     519,   255,    -1,    -1,   291,   292,    -1,    -1,    -1,    67,
      68,    67,    68,    53,    -1,    71,    -1,    -1,    74,    -1,
      -1,    79,    -1,    79,    80,    -1,    -1,    -1,    -1,   515,
      -1,    -1,   518,   519,    -1,    -1,    92,   291,   292,    -1,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   567,   568,
      -1,   570,    -1,   572,   573,   574,   575,    -1,   577,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   593,    -1,   595,   596,    -1,    -1,
      -1,   567,   568,    -1,   570,    -1,   572,   573,   574,   575,
      -1,   577,   165,    -1,   613,   614,    -1,    -1,    -1,   618,
      -1,    -1,    -1,   622,    -1,   624,   625,   593,    -1,   595,
     596,   630,   631,    -1,   633,    -1,   635,   636,    -1,    -1,
     639,    -1,   641,   642,    -1,   165,    -1,   613,   614,   648,
      -1,   418,   618,    -1,    -1,    -1,   622,    -1,   624,   625,
     213,   214,    -1,    -1,   630,   631,    -1,   633,    -1,   635,
     636,    -1,     5,   639,    -1,   641,   642,    10,    -1,    -1,
      -1,    -1,   648,    -1,   418,    -1,    -1,    20,    -1,    -1,
      23,    -1,   459,   213,   214,    -1,    -1,    -1,   465,    -1,
      -1,   468,   255,    36,    -1,    38,    39,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    48,    -1,   484,    -1,    52,
      -1,    54,    -1,    -1,    -1,   459,    28,    60,    16,    31,
      63,   465,    -1,    66,   468,   255,    -1,    39,   291,   292,
      28,    -1,    44,    76,    -1,    78,    -1,    -1,   515,    -1,
     484,   518,   519,    -1,    42,    -1,    89,    45,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    67,    68,    -1,    -1,    10,
      58,   291,   292,    -1,    -1,    -1,    -1,    79,    80,    67,
      68,   515,    23,    -1,   518,   519,    -1,    -1,    -1,    -1,
      92,    79,    -1,    -1,    -1,    36,    -1,    38,    -1,    -1,
     567,   568,    -1,   570,    -1,   572,   573,   574,   575,    -1,
     577,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    -1,    -1,    66,   593,    -1,   595,   596,
      -1,    -1,    -1,   567,   568,    76,   570,    78,   572,   573,
     574,   575,    -1,   577,    -1,    -1,   613,   614,    -1,    -1,
      -1,   618,    -1,    -1,    -1,   622,    -1,   624,   625,   593,
      -1,   595,   596,   630,   631,   418,   633,    -1,   635,   636,
      -1,    -1,   639,    -1,   641,   642,   214,    -1,    -1,   613,
     614,   648,    -1,    -1,   618,    -1,    -1,    -1,   622,    -1,
     624,   625,    -1,    -1,    -1,    -1,   630,   631,   418,   633,
      -1,   635,   636,    -1,    -1,   639,   459,   641,   642,    -1,
      -1,    -1,   465,    -1,   648,   468,    -1,   255,    -1,    -1,
      -1,    -1,    -1,    11,    12,    -1,    -1,    15,    -1,    -1,
      -1,   484,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   459,
      28,    -1,    30,    31,    -1,   465,    -1,    -1,   468,    -1,
      -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,    -1,   515,    -1,   484,   518,   519,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,   515,    -1,    85,   518,   519,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   567,   568,    -1,   570,    -1,   572,
     573,   574,   575,    -1,   577,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     593,    -1,   595,   596,    -1,    -1,    -1,   567,   568,    -1,
     570,    -1,   572,   573,   574,   575,    -1,   577,    -1,    -1,
     613,   614,    -1,    -1,    -1,   618,    -1,    -1,    -1,   622,
      -1,   624,   625,   593,    -1,   595,   596,   630,   631,    -1,
     633,    -1,   635,   636,    -1,    -1,   639,    -1,   641,   642,
      -1,    -1,    -1,   613,   614,   648,    -1,     3,   618,     5,
      -1,    -1,   622,    -1,   624,   625,    -1,    -1,    -1,    -1,
     630,   631,    -1,   633,    -1,   635,   636,    -1,    -1,   639,
      26,   641,   642,    -1,    -1,    -1,    -1,    -1,   648,    -1,
     468,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    15,    -1,   484,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    82,    43,    -1,    -1,    81,    47,   515,    -1,    -1,
      -1,    87,    93,    -1,    55,    56,    57,    98,    94,    95,
      -1,    97,    -1,    64,   105,    -1,    -1,    -1,   109,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
      81,    82,    -1,    -1,    85,    -1,    -1,    11,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   567,
     568,    -1,   570,    -1,    -1,   573,    30,   575,    -1,   577,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    47,    -1,   593,    -1,   595,   596,   165,
      -1,    55,    56,    57,   170,    -1,   177,    -1,    -1,   175,
      64,   177,   178,   179,   180,   613,    -1,    -1,    72,    -1,
     618,    -1,    -1,    -1,   622,    -1,    -1,    81,    82,    -1,
      -1,    85,   630,   631,    -1,   633,    -1,    -1,   636,    -1,
      -1,   639,    -1,   641,   642,   216,    -1,   213,   219,    -1,
     648,    -1,    94,   219,    -1,    97,   575,    -1,   577,   230,
      -1,    -1,    -1,    -1,   235,    -1,    -1,   238,   239,    -1,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,    -1,    -1,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   618,
      -1,    -1,    -1,   622,    -1,   276,    -1,    -1,    -1,    -1,
      -1,   630,   631,    -1,   633,    -1,    -1,   636,    -1,    -1,
     639,    -1,   641,   642,    -1,   291,   292,    -1,    -1,   648,
     301,    -1,   298,   175,    -1,    -1,   178,   179,   180,   310,
      -1,    -1,   313,    -1,    -1,    -1,   312,    -1,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   337,    -1,    -1,    -1,
     336,    -1,    -1,    11,    12,    -1,    -1,    15,    -1,    -1,
      -1,   352,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      28,    -1,    30,    31,    -1,    11,    -1,    -1,    -1,    15,
      -1,    39,    -1,    -1,    -1,    43,    44,   373,    -1,    47,
      -1,    -1,    -1,    -1,    30,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    39,    62,    -1,    64,    43,    -1,    -1,
      -1,    47,    -1,   404,    72,    -1,    -1,   408,    -1,    55,
      56,    57,    80,    81,    82,    -1,    -1,    85,    64,    -1,
      88,    -1,   418,    -1,    -1,    -1,   427,    -1,    -1,   430,
      -1,    -1,   428,    -1,    -1,    81,    82,   433,    -1,    85,
     312,    -1,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
      -1,    -1,   463,   464,    -1,   466,    -1,    -1,    -1,    -1,
      -1,   472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   509,     7,
      -1,   507,   508,    11,    12,    13,   512,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    43,    44,    -1,    46,    47,
      -1,    -1,   553,    -1,    -1,    -1,   428,    55,    56,    57,
      -1,   433,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    -1,   576,    74,    -1,   574,    -1,
      -1,    -1,    80,    81,    82,    83,    -1,    85,    86,    -1,
      -1,    -1,    90,    91,    -1,    93,    94,    -1,   599,    -1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    11,
      12,    13,    -1,    15,    -1,   616,   617,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    -1,    -1,    -1,    -1,   507,   508,    39,    40,    -1,
     512,    43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    -1,    85,    86,    -1,    -1,    -1,    90,    91,
       7,    93,    94,    -1,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    43,    44,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    70,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    -1,    85,    86,
      -1,    -1,    -1,    90,    91,     7,    93,    94,    -1,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      -1,    43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    -1,    85,    86,    -1,    -1,    -1,    90,    91,
       7,    93,    94,    -1,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    43,    44,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    70,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    -1,    85,    86,
      -1,    -1,    -1,    90,    91,     7,    93,    94,    -1,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      -1,    43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    -1,    85,    86,    -1,    -1,    -1,    90,    91,
       7,    93,    94,    -1,    11,    -1,    13,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    43,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    70,    -1,     7,    -1,    74,    -1,    11,
      -1,    13,    -1,    15,    81,    82,    83,    19,    85,    86,
      -1,    -1,    -1,    90,    -1,    -1,    93,    94,    30,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      -1,    43,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    -1,    11,    12,    -1,
      -1,    15,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    25,    74,    -1,    -1,    -1,    30,    31,    -1,    81,
      82,    83,    -1,    85,    86,    39,    -1,    -1,    90,    43,
      44,    93,    94,    47,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,    11,    -1,    -1,    62,    15,
      64,    -1,    18,    -1,    -1,    -1,    11,    -1,    -1,    25,
      15,    -1,    -1,    -1,    30,    -1,    80,    81,    82,    -1,
      -1,    85,    -1,    39,    88,    30,    -1,    43,    -1,    -1,
      46,    47,    -1,    -1,    39,    -1,    -1,    53,    43,    55,
      56,    57,    47,    11,    -1,    -1,    62,    15,    64,    -1,
      55,    56,    57,    -1,    11,    71,    -1,    25,    15,    64,
      -1,    -1,    30,    -1,    -1,    81,    82,    72,    -1,    85,
      -1,    39,    88,    30,    -1,    43,    81,    82,    46,    47,
      85,    -1,    39,    -1,    -1,    53,    43,    55,    56,    57,
      47,    11,    -1,    -1,    62,    15,    64,    -1,    55,    56,
      57,    -1,    11,    71,    -1,    25,    15,    64,    -1,    -1,
      30,    -1,    -1,    81,    82,    72,    -1,    85,    -1,    39,
      88,    30,    -1,    43,    81,    82,    -1,    47,    85,    -1,
      39,    -1,    -1,    53,    43,    55,    56,    57,    47,    11,
      -1,    -1,    62,    15,    64,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    25,    74,    64,    -1,    -1,    30,    -1,
      -1,    81,    82,    72,    -1,    85,    -1,    39,    88,    -1,
      -1,    43,    81,    82,    -1,    47,    85,    -1,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    -1,    11,    -1,    -1,
      62,    15,    64,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      72,    25,    15,    -1,    -1,    -1,    30,    -1,    -1,    81,
      82,    -1,    -1,    85,    -1,    39,    88,    30,    -1,    43,
      -1,    -1,    46,    47,    -1,    -1,    39,    -1,    -1,    53,
      43,    55,    56,    57,    47,    11,    -1,    -1,    62,    15,
      64,    -1,    55,    56,    57,    -1,    11,    -1,    -1,    25,
      15,    64,    -1,    -1,    30,    -1,    -1,    81,    82,    72,
      -1,    85,    -1,    39,    88,    30,    -1,    43,    81,    82,
      46,    47,    85,    -1,    39,    -1,    -1,    53,    43,    55,
      56,    57,    47,    11,    -1,    -1,    62,    15,    64,    -1,
      55,    56,    57,    -1,    11,    -1,    -1,    25,    15,    64,
      -1,    -1,    30,    -1,    -1,    81,    82,    72,    -1,    85,
      -1,    39,    88,    30,    -1,    43,    81,    82,    -1,    47,
      85,    -1,    39,    -1,    -1,    53,    43,    55,    56,    57,
      47,    11,    -1,    -1,    62,    15,    64,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    25,    74,    64,    -1,    -1,
      30,    -1,    -1,    81,    82,    72,    -1,    85,    -1,    39,
      88,    -1,    -1,    43,    81,    82,    -1,    47,    85,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,
      -1,    11,    62,    -1,    64,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    25,    -1,    -1,    -1,    -1,
      30,    81,    82,    -1,    -1,    85,    -1,    -1,    88,    39,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,    11,
      -1,    -1,    62,    15,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    25,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    81,    82,    -1,    -1,    85,    -1,    39,    88,    -1,
      -1,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    -1,    11,    -1,    -1,
      62,    15,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    81,
      82,    -1,    -1,    85,    -1,    39,    88,    -1,    -1,    43,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,    11,    -1,    -1,    62,    15,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    25,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    81,    82,    -1,
      -1,    85,    -1,    39,    88,    -1,    -1,    43,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    11,    -1,    -1,    62,    15,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    74,    -1,
      -1,    -1,    30,    -1,    -1,    81,    82,    -1,    -1,    85,
      -1,    39,    88,    -1,    -1,    43,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    11,    -1,    -1,    62,    15,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    25,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    81,    82,    -1,    -1,    85,    -1,    39,
      88,    -1,    -1,    43,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,    11,
      -1,    -1,    62,    15,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    25,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    81,    82,    -1,    -1,    85,    -1,    39,    88,    -1,
      -1,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    -1,    11,    -1,    -1,
      62,    15,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    81,
      82,    -1,    -1,    85,    -1,    39,    88,    -1,    -1,    43,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,    11,    -1,    -1,    62,    15,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    25,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    81,    82,    -1,
      -1,    85,    -1,    39,    88,    -1,    -1,    43,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    11,    -1,    -1,    62,    15,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    25,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    81,    82,    -1,    -1,    85,
      -1,    39,    88,    -1,    -1,    43,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    11,    -1,    -1,    62,    15,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    74,    -1,    -1,    -1,
      30,    -1,    -1,    81,    82,    -1,    -1,    85,    -1,    39,
      88,    -1,    -1,    43,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,    11,
      -1,    -1,    62,    15,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    74,    -1,    -1,    -1,    30,    -1,
      -1,    81,    82,    -1,    -1,    85,    -1,    39,    88,    -1,
      -1,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    -1,    11,    -1,    -1,
      62,    15,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    81,
      82,    -1,    -1,    85,    -1,    39,    88,    -1,    -1,    43,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,     5,    -1,    -1,    -1,    62,    10,
      64,     5,    -1,    -1,    -1,    -1,    10,    -1,    -1,    20,
      -1,    -1,    23,    -1,    -1,    -1,    20,    81,    82,    23,
      -1,    85,    -1,    -1,    88,    36,    -1,    38,    39,    -1,
      -1,    -1,    36,    -1,    38,    39,    -1,    48,    -1,    -1,
      -1,    52,     5,    54,    48,    -1,    -1,    10,    52,    60,
      54,    -1,    63,    -1,    -1,    66,    60,    20,    -1,    63,
      23,     5,    66,    -1,    -1,    76,    10,    78,    -1,    -1,
      -1,    -1,    76,    36,    78,    38,    20,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      -1,    54,    36,    -1,    38,    -1,    -1,    60,    -1,    -1,
      63,    -1,    -1,    66,    48,    -1,    -1,    -1,    52,    -1,
      54,    -1,    -1,    76,    -1,    78,    60,    -1,    -1,    63,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    78
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    28,    42,    45,    58,    67,    68,    79,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     115,   116,   117,   137,    39,    39,    79,   112,    39,   112,
       0,    99,   105,   100,   105,   106,    16,    45,   117,    46,
     118,   112,    20,    74,   118,    20,   105,    39,    39,    12,
      31,    39,    44,    46,    71,    74,    79,    80,    92,   107,
     108,   109,   110,   111,   112,   113,   116,   119,   120,   121,
     122,   126,   131,   132,   133,   140,    20,    39,    77,   118,
     118,    47,     7,    11,    13,    15,    19,    28,    30,    32,
      39,    40,    43,    47,    55,    56,    57,    64,    70,    71,
      74,    81,    82,    83,    85,    86,    90,    91,    93,    94,
     107,   112,   140,   141,   142,   143,   145,   146,   147,   149,
     150,   151,   152,   153,   155,   156,   158,   160,   166,   168,
     169,   170,   171,   172,   173,   174,   177,   178,   179,   180,
     181,   182,   183,   184,   189,   202,   203,   206,   207,   208,
     140,    39,   127,   133,    39,   123,   124,   127,    48,   114,
      92,   107,   133,    71,   120,    46,   134,    39,    77,    74,
      28,    72,   107,   128,   129,    25,    39,    47,    53,    62,
      88,   112,   180,   183,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,    39,    74,    39,
      74,    91,   107,    47,    17,    47,    47,   186,    39,    47,
     112,   182,   201,   108,   111,   112,   201,    74,   186,    20,
      47,   186,   140,    39,   123,    47,   186,   123,     5,    10,
      20,    23,    36,    38,    48,    52,    54,    60,    63,    66,
      76,    78,    71,   142,    74,    22,    20,    48,     5,    10,
      23,    36,    38,    52,    54,    60,    63,    66,    76,    78,
      55,    64,    74,   130,   140,   114,    23,   114,    18,    74,
     130,    73,    48,   127,   123,   127,   134,    71,    82,    85,
     112,   135,   141,    74,    74,   107,    39,    89,    18,    72,
     201,     6,    72,   108,   112,   128,   186,   201,   201,   201,
      17,    74,     9,    69,     4,     8,    65,     3,    24,    26,
      33,    34,    49,    50,    35,    37,    51,    53,    62,    59,
      75,    77,    74,    74,   123,   123,    28,    74,    91,   107,
     150,   162,   163,   165,   143,    72,   136,   186,   186,    72,
     108,   112,    48,   114,   185,   114,   185,    47,    74,    39,
     186,    74,    14,    29,   175,   176,    74,   186,    74,    74,
     186,   186,    39,    56,    82,    85,   181,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   143,    39,
     181,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,    46,   125,   138,   186,    23,   124,
      73,   130,    74,   130,    47,    47,    20,    71,   141,    71,
      39,    89,   114,    39,   129,   140,   186,     6,    72,   114,
      48,   114,    72,    72,   186,   192,   186,   193,   194,   195,
     196,   197,   197,   198,   198,   198,   198,   199,   199,   199,
     200,   200,   201,   201,   201,    74,    74,    91,   107,    74,
     186,   123,   123,    74,    17,    18,    18,    72,    72,   114,
     186,   138,    48,   114,   138,   114,    72,   136,    47,    72,
      47,   140,    29,   176,    72,    47,   112,    20,    73,    47,
      73,    18,    71,   125,   139,   125,    72,   136,    72,   136,
      82,    71,   114,    39,   140,   186,   201,    72,    72,     6,
     204,    74,    17,   123,   123,    72,   164,   165,    74,    74,
     186,   186,   150,   186,    32,    39,    93,   143,   144,   145,
     148,   153,   154,   157,   159,   161,   167,    73,   186,   118,
      72,    72,   136,   140,   129,   140,   143,    72,   136,    39,
      72,   136,    71,    18,    71,    74,    72,    74,    72,    47,
     201,   204,   140,   186,   187,   190,   143,    72,    72,   164,
      72,   164,    74,    72,    47,    17,    47,    22,    73,   118,
      72,    72,    72,    47,    72,    71,   125,    74,    74,    72,
     136,   143,   143,    72,   143,    72,    72,   164,   143,    74,
     162,   163,   144,   186,   144,   140,    72,   136,    74,    72,
     143,   143,   143,    72,    74,   186,    74,    17,    72,    72,
      74,   143,    72,   164,    74,    74,   186,   186,   144,   144,
      72,    72,   164,    72,   164,    74,    72,   144,   144,    72,
     144,    72,    72,   164,   144,   144,   144,   144,    72,   144
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    97,    97,    97,    97,    97,    97,
      98,    99,    99,   100,   100,   100,   100,   101,   102,   103,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   108,
     109,   109,   110,   110,   111,   112,   112,   113,   114,   114,
     115,   115,   116,   116,   117,   117,   117,   117,   118,   118,
     119,   119,   120,   120,   120,   120,   121,   121,   121,   122,
     122,   123,   123,   124,   124,   124,   124,   125,   125,   126,
     126,   126,   126,   127,   127,   128,   128,   129,   129,   129,
     129,   129,   129,   130,   130,   131,   132,   132,   133,   133,
     134,   134,   134,   134,   135,   135,   135,   135,   135,   135,
     136,   136,   137,   137,   138,   138,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   142,   142,   142,   142,   143,
     143,   143,   143,   143,   143,   144,   144,   144,   144,   144,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   146,   147,   148,   149,   150,   150,   150,   150,   150,
     150,   150,   151,   152,   153,   154,   155,   155,   156,   157,
     158,   158,   159,   159,   160,   160,   160,   160,   160,   160,
     160,   160,   161,   161,   161,   161,   161,   161,   161,   161,
     162,   162,   163,   163,   163,   163,   164,   165,   165,   166,
     167,   168,   168,   169,   170,   170,   171,   171,   172,   173,
     174,   174,   174,   175,   175,   176,   177,   177,   178,   178,
     178,   178,   178,   178,   178,   179,   179,   179,   179,   179,
     179,   180,   180,   180,   181,   181,   181,   181,   182,   182,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     184,   184,   184,   184,   184,   184,   185,   185,   186,   186,
     187,   187,   187,   187,   187,   187,   188,   188,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   190,   190,   190,   191,   191,   192,   192,   193,
     193,   194,   194,   195,   195,   196,   196,   196,   197,   197,
     197,   197,   197,   198,   198,   198,   198,   199,   199,   199,
     200,   200,   200,   200,   201,   201,   201,   201,   201,   202,
     203,   204,   204,   204,   204,   205,   205,   205,   205,   206,
     206,   206,   206,   207,   208
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     2,     2,     3,
       2,     2,     1,     1,     1,     1,     1,     3,     5,     6,
       6,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     2,
       3,     4,     2,     1,     1,     1,     1,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     1,     3,     4,     1,     2,     1,     1,     3,
       3,     4,     4,     1,     2,     3,     1,     2,     3,     3,
       4,     3,     4,     1,     1,     2,     2,     3,     3,     4,
       2,     3,     3,     4,     4,     5,     4,     5,     6,     7,
       3,     1,     3,     4,     2,     3,     3,     4,     3,     1,
       2,     3,     2,     1,     3,     3,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     5,     3,     5,     3,     3,     5,     5,     5,
       1,     1,     1,     1,     6,     7,     7,     8,     7,     8,
       8,     9,     6,     7,     7,     8,     7,     8,     8,     9,
       1,     1,     2,     3,     2,     3,     1,     3,     1,     7,
       7,     2,     3,     3,     2,     3,     2,     3,     3,     5,
       3,     4,     5,     2,     1,     5,     1,     1,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     4,     5,     5,     6,     4,     4,
       3,     4,     5,     6,     5,     6,     5,     6,     7,     8,
       3,     4,     3,     4,     4,     4,     4,     3,     1,     1,
       5,     4,     3,     5,     4,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     5,     5,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     4,     5,     4,     5,     1,
       1,     1,     1,     2,     2
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
#line 128 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);type = (yyval.item).type;}
#line 2660 "parser.tab.c"
    break;

  case 26:
#line 129 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);type = (yyval.item).type;}
#line 2666 "parser.tab.c"
    break;

  case 27:
#line 133 "parser.y"
                 {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2672 "parser.tab.c"
    break;

  case 28:
#line 134 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2678 "parser.tab.c"
    break;

  case 29:
#line 135 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2684 "parser.tab.c"
    break;

  case 30:
#line 139 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2690 "parser.tab.c"
    break;

  case 31:
#line 140 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2696 "parser.tab.c"
    break;

  case 32:
#line 144 "parser.y"
                {check_gst((yyvsp[0].item).label); strcpy((yyval.item).type,(yyvsp[0].item).label);}
#line 2702 "parser.tab.c"
    break;

  case 33:
#line 145 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2708 "parser.tab.c"
    break;

  case 34:
#line 149 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2714 "parser.tab.c"
    break;

  case 35:
#line 153 "parser.y"
                                {strcpy((yyval.item).label,strcat((yyvsp[-2].item).label,strcat((yyvsp[-1].item).label,(yyvsp[0].item).label)));}
#line 2720 "parser.tab.c"
    break;

  case 36:
#line 154 "parser.y"
                        {strcpy((yyval.item).label,(yyvsp[0].item).label);}
#line 2726 "parser.tab.c"
    break;

  case 37:
#line 158 "parser.y"
                        {string t; for(int i=0;i<(yyvsp[-1].item).dims;i++) t.push_back('*'); strcpy((yyval.item).type,strcat((yyvsp[-1].item).type,t.c_str()));}
#line 2732 "parser.tab.c"
    break;

  case 38:
#line 162 "parser.y"
                                          {(yyval.item).dims = (yyvsp[-2].item).dims+1;}
#line 2738 "parser.tab.c"
    break;

  case 39:
#line 163 "parser.y"
                                        {(yyval.item).dims = 1;}
#line 2744 "parser.tab.c"
    break;

  case 40:
#line 167 "parser.y"
                                {if(first_parse){make_class_entry((yyvsp[-1].item).label,yylineno,"00");}}
#line 2750 "parser.tab.c"
    break;

  case 41:
#line 168 "parser.y"
                                            {if(first_parse){string mod = check_class_modifiers((yyvsp[-3].item).label,(yyvsp[-1].item).label); make_class_entry((yyvsp[-1].item).label,yylineno,mod);} modifiers.clear();}
#line 2756 "parser.tab.c"
    break;

  case 42:
#line 172 "parser.y"
                             {strcpy((yyval.item).label,strcat((yyvsp[-1].item).label,(yyvsp[0].item).label)); modifiers = (yyval.item).label;}
#line 2762 "parser.tab.c"
    break;

  case 43:
#line 173 "parser.y"
                {strcpy((yyval.item).label,(yyvsp[0].item).label); modifiers = (yyval.item).label;}
#line 2768 "parser.tab.c"
    break;

  case 44:
#line 177 "parser.y"
            {strcpy((yyval.item).label,"0");}
#line 2774 "parser.tab.c"
    break;

  case 45:
#line 178 "parser.y"
                {strcpy((yyval.item).label,"1");}
#line 2780 "parser.tab.c"
    break;

  case 46:
#line 179 "parser.y"
                {strcpy((yyval.item).label,"2");temp.clear();}
#line 2786 "parser.tab.c"
    break;

  case 47:
#line 180 "parser.y"
                {strcpy((yyval.item).label,"3");}
#line 2792 "parser.tab.c"
    break;

  case 55:
#line 197 "parser.y"
        {reset();}
#line 2798 "parser.tab.c"
    break;

  case 59:
#line 207 "parser.y"
                                        {type.clear();}
#line 2804 "parser.tab.c"
    break;

  case 60:
#line 208 "parser.y"
                                                        {modifiers.clear();type.clear();}
#line 2810 "parser.tab.c"
    break;

  case 63:
#line 217 "parser.y"
                                        {if(check_first()){string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); make_entry((yyvsp[-2].item).label,type,yylineno,x);}}
#line 2816 "parser.tab.c"
    break;

  case 64:
#line 218 "parser.y"
                                                {if(check_first()){string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); string t; for(int i=0;i<(yyvsp[-2].item).dims;i++) t.push_back('*'); make_array_entry((yyvsp[-3].item).label,type+t,yylineno,x);}}
#line 2822 "parser.tab.c"
    break;

  case 65:
#line 219 "parser.y"
                {if(check_first()){string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); make_entry((yyvsp[0].item).label,type,yylineno,x);}}
#line 2828 "parser.tab.c"
    break;

  case 66:
#line 220 "parser.y"
                        {if(check_first()){string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers);string t; for(int i=0;i<(yyvsp[-1].item).dims;i++) t.push_back('*'); make_array_entry((yyvsp[-1].item).label,type+t,yylineno,x);}}
#line 2834 "parser.tab.c"
    break;

  case 67:
#line 224 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2840 "parser.tab.c"
    break;

  case 68:
#line 225 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2846 "parser.tab.c"
    break;

  case 69:
#line 229 "parser.y"
                                        {if(first_parse){if((yyvsp[-1].item).dims){cout<<"Void function cant be of array type"<<endl; exit(1);} make_func_entry((yyvsp[-1].item).label,"void",arguments,yylineno,"0000"); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}}
#line 2852 "parser.tab.c"
    break;

  case 70:
#line 230 "parser.y"
                                        {if(first_parse){string t; for(int i=0;i<(yyvsp[-1].item).dims;i++) t.push_back('*'); make_func_entry((yyvsp[-1].item).label,strcat((yyvsp[-2].item).type,t.c_str()),arguments,yylineno,"0000"); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}}
#line 2858 "parser.tab.c"
    break;

  case 71:
#line 231 "parser.y"
                                                   {if(first_parse){if((yyvsp[-2].item).dims){cout<<"Void function cant be of array type"<<endl; exit(1);} string x = check_method_modifiers((yyvsp[-3].item).label); make_func_entry((yyvsp[-1].item).label,"void",arguments,yylineno,x); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}modifiers.clear();}
#line 2864 "parser.tab.c"
    break;

  case 72:
#line 232 "parser.y"
                                                  {if(first_parse){string t; for(int i=0;i<(yyvsp[-2].item).dims;i++) t.push_back('*'); string x = check_method_modifiers((yyvsp[-3].item).label); make_func_entry((yyvsp[-1].item).label,strcat((yyvsp[-2].item).type,t.c_str()),arguments,yylineno,x); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}modifiers.clear();}
#line 2870 "parser.tab.c"
    break;

  case 73:
#line 236 "parser.y"
            {strcpy((yyval.item).label,(yyvsp[0].item).label); (yyval.item).dims = 0;}
#line 2876 "parser.tab.c"
    break;

  case 74:
#line 237 "parser.y"
                        {strcpy((yyval.item).label,(yyvsp[-1].item).label); (yyval.item).dims = (yyvsp[0].item).dims;}
#line 2882 "parser.tab.c"
    break;

  case 77:
#line 246 "parser.y"
                    {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-1].item).type,0,0));}}
#line 2888 "parser.tab.c"
    break;

  case 78:
#line 247 "parser.y"
                                        {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-1].item).type,0,1));}}
#line 2894 "parser.tab.c"
    break;

  case 79:
#line 248 "parser.y"
                                {if(first_parse){string t; for(int i=0;i<(yyvsp[0].item).dims;i++) t.push_back('*'); arguments.push_back(make_tuple((yyvsp[-1].item).label,strcat((yyvsp[-2].item).type,t.c_str()),0,0));}}
#line 2900 "parser.tab.c"
    break;

  case 80:
#line 249 "parser.y"
                                        {if(first_parse){string t; for(int i=0;i<(yyvsp[-1].item).dims;i++) t.push_back('*'); arguments.push_back(make_tuple((yyvsp[-1].item).label,strcat((yyvsp[-3].item).type,t.c_str()),0,1));}}
#line 2906 "parser.tab.c"
    break;

  case 81:
#line 250 "parser.y"
                                        {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-2].item).type,1,0));}}
#line 2912 "parser.tab.c"
    break;

  case 82:
#line 251 "parser.y"
                                                {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-2].item).type,1,1));}}
#line 2918 "parser.tab.c"
    break;

  case 86:
#line 264 "parser.y"
                           {if(first_parse){check_constructor((yyvsp[0].item).label); make_func_entry((yyvsp[-1].item).label,(yyvsp[-1].item).label,arguments,yylineno,"0000"); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}}
#line 2924 "parser.tab.c"
    break;

  case 87:
#line 265 "parser.y"
                                           {if(first_parse){check_constructor((yyvsp[-1].item).label); string x = check_method_modifiers((yyvsp[-2].item).label); make_func_entry((yyvsp[-1].item).label,(yyvsp[-1].item).label,arguments,yylineno,x); add_arguments(arguments,(yyvsp[0].item).label); arguments.clear();}modifiers.clear();}
#line 2930 "parser.tab.c"
    break;

  case 102:
#line 296 "parser.y"
                                {if(first_parse) make_class_entry((yyvsp[-1].item).label,yylineno,"00");}
#line 2936 "parser.tab.c"
    break;

  case 103:
#line 297 "parser.y"
                                                {if(first_parse){string mod = check_class_modifiers((yyvsp[-3].item).label,(yyvsp[-1].item).label); make_class_entry((yyvsp[-1].item).label,yylineno,mod);} modifiers.clear();}
#line 2942 "parser.tab.c"
    break;

  case 104:
#line 301 "parser.y"
                                                {strcpy((yyval.item).type,"*");}
#line 2948 "parser.tab.c"
    break;

  case 105:
#line 302 "parser.y"
                                                        {strcpy((yyval.item).type,"*");}
#line 2954 "parser.tab.c"
    break;

  case 106:
#line 303 "parser.y"
                                                                        {strcpy((yyval.item).type,strcat((yyvsp[-1].item).type,"*"));}
#line 2960 "parser.tab.c"
    break;

  case 107:
#line 304 "parser.y"
                                                                        {strcpy((yyval.item).type,strcat((yyvsp[-2].item).type,"*"));}
#line 2966 "parser.tab.c"
    break;

  case 108:
#line 308 "parser.y"
                                                    {strcpy((yyval.item).type, expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,"array").c_str());}
#line 2972 "parser.tab.c"
    break;

  case 109:
#line 309 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2978 "parser.tab.c"
    break;

  case 116:
#line 325 "parser.y"
                                                {temp.clear();}
#line 2984 "parser.tab.c"
    break;

  case 117:
#line 326 "parser.y"
                                                {temp.clear();}
#line 2990 "parser.tab.c"
    break;

  case 152:
#line 387 "parser.y"
                                                                {reset();}
#line 2996 "parser.tab.c"
    break;

  case 153:
#line 391 "parser.y"
                                            {reset();}
#line 3002 "parser.tab.c"
    break;

  case 154:
#line 395 "parser.y"
                                                                    {reset();}
#line 3008 "parser.tab.c"
    break;

  case 155:
#line 399 "parser.y"
                                                        {reset();}
#line 3014 "parser.tab.c"
    break;

  case 158:
#line 409 "parser.y"
                                                                {if((yyvsp[-2].item).type!="boolean"){cout<<"Expression must be of type boolean"<<endl;exit(1);} reset();}
#line 3020 "parser.tab.c"
    break;

  case 159:
#line 413 "parser.y"
                                                                                {if((yyvsp[-2].item).type!="boolean"){cout<<"Expression must be of type boolean"<<endl;exit(1);} reset();}
#line 3026 "parser.tab.c"
    break;

  case 208:
#line 525 "parser.y"
                        {(yyval.item).lit = true;}
#line 3032 "parser.tab.c"
    break;

  case 215:
#line 535 "parser.y"
                    {strcpy((yyval.item).type,"int");}
#line 3038 "parser.tab.c"
    break;

  case 216:
#line 536 "parser.y"
                                {strcpy((yyval.item).type,"float");}
#line 3044 "parser.tab.c"
    break;

  case 217:
#line 537 "parser.y"
                        {strcpy((yyval.item).type,"bool");}
#line 3050 "parser.tab.c"
    break;

  case 218:
#line 538 "parser.y"
                                {strcpy((yyval.item).type,"char");}
#line 3056 "parser.tab.c"
    break;

  case 219:
#line 539 "parser.y"
                                {strcpy((yyval.item).type,"string");}
#line 3062 "parser.tab.c"
    break;

  case 220:
#line 540 "parser.y"
                        {strcpy((yyval.item).type,"null");}
#line 3068 "parser.tab.c"
    break;

  case 282:
#line 635 "parser.y"
                                {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3074 "parser.tab.c"
    break;

  case 285:
#line 641 "parser.y"
                                {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3080 "parser.tab.c"
    break;

  case 286:
#line 642 "parser.y"
                                                                        {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3086 "parser.tab.c"
    break;

  case 287:
#line 646 "parser.y"
                                {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3092 "parser.tab.c"
    break;

  case 288:
#line 647 "parser.y"
                                                                                {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3098 "parser.tab.c"
    break;

  case 289:
#line 651 "parser.y"
                                {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3104 "parser.tab.c"
    break;

  case 290:
#line 652 "parser.y"
                                                                {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3110 "parser.tab.c"
    break;

  case 291:
#line 656 "parser.y"
                        {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3116 "parser.tab.c"
    break;

  case 292:
#line 657 "parser.y"
                                                        {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3122 "parser.tab.c"
    break;

  case 293:
#line 661 "parser.y"
                                {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3128 "parser.tab.c"
    break;

  case 294:
#line 662 "parser.y"
                                                {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3134 "parser.tab.c"
    break;

  case 295:
#line 666 "parser.y"
                        {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3140 "parser.tab.c"
    break;

  case 296:
#line 667 "parser.y"
                                                                {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3146 "parser.tab.c"
    break;

  case 297:
#line 668 "parser.y"
                                                                {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3152 "parser.tab.c"
    break;

  case 298:
#line 672 "parser.y"
                        {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3158 "parser.tab.c"
    break;

  case 299:
#line 673 "parser.y"
                                                        {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3164 "parser.tab.c"
    break;

  case 300:
#line 674 "parser.y"
                                                                {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3170 "parser.tab.c"
    break;

  case 301:
#line 675 "parser.y"
                                                                {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3176 "parser.tab.c"
    break;

  case 302:
#line 676 "parser.y"
                                                            {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3182 "parser.tab.c"
    break;

  case 303:
#line 680 "parser.y"
                                {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3188 "parser.tab.c"
    break;

  case 304:
#line 681 "parser.y"
                                                                        {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3194 "parser.tab.c"
    break;

  case 305:
#line 682 "parser.y"
                                                                        {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3200 "parser.tab.c"
    break;

  case 306:
#line 683 "parser.y"
                                                                                        {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3206 "parser.tab.c"
    break;

  case 307:
#line 687 "parser.y"
                            {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3212 "parser.tab.c"
    break;

  case 308:
#line 688 "parser.y"
                                                            {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3218 "parser.tab.c"
    break;

  case 309:
#line 689 "parser.y"
                                                            {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3224 "parser.tab.c"
    break;

  case 310:
#line 693 "parser.y"
                        {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3230 "parser.tab.c"
    break;

  case 311:
#line 694 "parser.y"
                                                    {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3236 "parser.tab.c"
    break;

  case 312:
#line 695 "parser.y"
                                                    {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3242 "parser.tab.c"
    break;

  case 313:
#line 696 "parser.y"
                                                        {if(!first_parse){string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3248 "parser.tab.c"
    break;

  case 314:
#line 700 "parser.y"
                                    {if(!first_parse){(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3254 "parser.tab.c"
    break;

  case 315:
#line 701 "parser.y"
                                        {if(!first_parse){(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3260 "parser.tab.c"
    break;

  case 316:
#line 702 "parser.y"
                                    {if(!first_parse){string t = expression_type((yyvsp[0].item).type,"",(yyvsp[-1].item).label); (yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,t.c_str());}}
#line 3266 "parser.tab.c"
    break;

  case 317:
#line 703 "parser.y"
                                    {if(!first_parse){string t = expression_type((yyvsp[0].item).type,"",(yyvsp[-1].item).label); (yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,t.c_str());}}
#line 3272 "parser.tab.c"
    break;

  case 318:
#line 704 "parser.y"
                                {if(!first_parse){(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3278 "parser.tab.c"
    break;

  case 319:
#line 708 "parser.y"
                                        {
if(!first_parse){
    string t = expression_type((yyvsp[0].item).type,"",(yyvsp[-1].item).label);
    if((yyvsp[0].item).lit = true){
        cout<<"Cannot apply increment/decrement operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item).lit = false;
    strcpy((yyval.item).type,t.c_str());
}    
}
#line 3294 "parser.tab.c"
    break;

  case 320:
#line 722 "parser.y"
                                        {
if(!first_parse){
    string t = expression_type((yyvsp[0].item).type,"",(yyvsp[-1].item).label);
    if((yyvsp[0].item).lit = true){
        cout<<"Cannot apply increment/decrement operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item).lit = false;
    strcpy((yyval.item).type,t.c_str());
}}
#line 3309 "parser.tab.c"
    break;

  case 321:
#line 735 "parser.y"
                        {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type); strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3315 "parser.tab.c"
    break;

  case 329:
#line 749 "parser.y"
                                    {if(!first_parse){(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3321 "parser.tab.c"
    break;

  case 330:
#line 750 "parser.y"
                                        {if(!first_parse){(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3327 "parser.tab.c"
    break;

  case 331:
#line 751 "parser.y"
                                        {if(!first_parse){(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3333 "parser.tab.c"
    break;

  case 332:
#line 752 "parser.y"
                                        {if(!first_parse){(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3339 "parser.tab.c"
    break;

  case 333:
#line 756 "parser.y"
                                        {
if(!first_parse){
    string t = expression_type((yyvsp[-1].item).type,"",(yyvsp[0].item).label);
    if((yyvsp[-1].item).lit = true){
        cout<<"Cannot apply increment operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item).lit = false;
    strcpy((yyval.item).type,t.c_str());
}
}
#line 3355 "parser.tab.c"
    break;

  case 334:
#line 770 "parser.y"
                                {
if(!first_parse){
    string t = expression_type((yyvsp[-1].item).type,"",(yyvsp[0].item).label);
    if((yyvsp[-1].item).lit = true){
        cout<<"Cannot apply increment operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item).lit = false;
    strcpy((yyval.item).type,t.c_str());
}
}
#line 3371 "parser.tab.c"
    break;


#line 3375 "parser.tab.c"

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
#line 784 "parser.y"


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

    first_parse = true;
    init_symbol_table();
    yyparse();


    fout<<"}"<<endl;
    exit(0);
}
