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
string modifiers;
string temp;

vector<tuple<string,string,int,bool,bool> > arguments;

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



#line 122 "parser.tab.c"

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
#line 56 "parser.y"

    struct {
        char label[1000];
        char type[100];
        int dims;
    }item;

#line 277 "parser.tab.c"

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5243

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  126
/* YYNRULES -- Number of rules.  */
#define YYNRULES  417
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  821

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
       0,    71,    71,    74,    75,    76,    77,    78,    79,    80,
      84,    88,    89,    93,    94,    95,    96,   100,   104,   108,
     112,   116,   117,   121,   122,   126,   127,   131,   132,   133,
     137,   138,   142,   143,   147,   151,   152,   156,   160,   161,
     165,   169,   170,   174,   175,   179,   180,   181,   185,   186,
     190,   191,   195,   196,   197,   198,   202,   203,   207,   208,
     212,   213,   217,   218,   222,   223,   227,   228,   229,   233,
     234,   235,   239,   240,   244,   245,   249,   250,   251,   252,
     256,   257,   261,   262,   263,   264,   268,   269,   273,   274,
     278,   279,   280,   281,   282,   283,   287,   291,   292,   296,
     300,   304,   305,   306,   307,   308,   309,   310,   311,   315,
     316,   320,   321,   322,   323,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   342,   343,   347,
     351,   352,   353,   354,   358,   359,   360,   361,   365,   366,
     370,   371,   375,   376,   380,   381,   382,   383,   384,   388,
     389,   390,   391,   392,   393,   397,   398,   399,   400,   401,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   419,   423,   427,   431,   435,   436,   437,   438,   439,
     440,   441,   444,   448,   452,   456,   457,   461,   465,   469,
     470,   474,   475,   479,   480,   481,   482,   483,   484,   485,
     486,   490,   491,   492,   493,   494,   495,   496,   497,   501,
     502,   506,   507,   508,   509,   513,   517,   518,   522,   526,
     530,   531,   535,   539,   540,   544,   545,   549,   553,   557,
     558,   559,   563,   564,   568,   572,   573,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   590,   591,   592,
     593,   594,   595,   596,   600,   601,   602,   603,   604,   608,
     609,   610,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,   627,   628,   629,   633,   634,
     635,   639,   640,   644,   645,   646,   647,   648,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   678,   679,   680,   681,   682,   683,   687,   688,   692,
     693,   697,   698,   699,   700,   701,   702,   706,   707,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,   724,   725,   726,   727,   728,   729,   730,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,   741,
     742,   743,   744,   745,   746,   750,   751,   752,   756,   757,
     761,   762,   766,   767,   771,   772,   776,   777,   781,   782,
     783,   787,   788,   789,   790,   791,   795,   796,   797,   798,
     802,   803,   804,   808,   809,   810,   811,   815,   816,   817,
     818,   819,   823,   827,   831,   832,   833,   834,   838,   839,
     840,   841,   845,   846,   847,   848,   852,   856
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
  "Wildcard", "ClassDeclaration", "ClassModifiers", "ClassModifier",
  "TypeParameterList", "TypeParameters", "ClassTypes", "ClassBody",
  "ClassBodyDeclarations", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "VariableDeclaratorList",
  "VariableDeclarator", "VariableInitializer", "MethodDeclaration",
  "MethodDeclarator", "FormalParameterList", "FormalParameter", "Throws",
  "MethodBody", "StaticInitializer", "ConstructorDeclaration",
  "ConstructorDeclarationHeader", "Declarator", "ConstructorBody",
  "ExplicitConstructorInvocation", "Expressions", "InterfaceDeclaration",
  "InterfaceDeclarationHeader", "ArrayInitializer",
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

#define YYPACT_NINF (-628)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-416)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     539,    19,  -628,   106,   179,   187,  -628,  -628,  -628,    37,
    -628,   454,   454,  -628,  -628,  -628,  -628,  -628,   152,  -628,
    -628,   217,  -628,  -628,   119,   119,  -628,   187,    -2,   183,
     245,  -628,   454,   152,  -628,   152,  -628,   238,   297,  -628,
     503,  -628,  -628,   336,   130,  -628,   339,  -628,   353,   152,
     119,   183,  -628,  -628,   363,  -628,  -628,  -628,   398,  -628,
     428,   446,   471,  -628,  -628,  -628,   245,  -628,   788,   428,
     906,  -628,  -628,  -628,  -628,  -628,  -628,   448,   461,   212,
    -628,   462,   148,  -628,  -628,   271,  2149,  -628,   363,   129,
     471,   497,     2,  -628,   129,   486,   551,   428,   446,   428,
     461,   461,  -628,  -628,  1995,  -628,   586,  -628,   542,   550,
    -628,   571,  -628,   443,   372,  -628,   273,    35,  -628,  4631,
    -628,   303,  -628,   325,   143,  -628,   566,    18,   591,  -628,
    4631,  4695,   310,  -628,  4695,  2903,  -628,  -628,  -628,   138,
     595,  -628,  -628,  4631,   398,   601,   627,   602,  4631,   601,
     438,   629,  2704,  -628,  2251,  -628,  -628,  -628,  -628,  -628,
    -628,   579,  -628,  -628,  -628,  -628,  -628,  -628,  -628,  -628,
    -628,  -628,  -628,  -628,  -628,  -628,   504,   600,  -628,  -628,
      10,  -628,  1057,  1397,    13,  -628,  -628,  -628,  -628,  -628,
     289,   523,   541,  -628,  -628,  -628,   551,  2967,   366,   601,
    -628,  -628,  -628,   582,   129,    26,   129,   461,  -628,  -628,
     424,  -628,   430,   607,  1037,   527,  2343,  2431,   187,   639,
    -628,  -628,  -628,   619,  -628,   274,   471,   621,   369,  -628,
    4695,    20,  1197,  4695,  4695,  4695,   438,   629,  -628,  -628,
      23,  -628,  -628,  -628,  -628,    14,   657,   654,   598,   661,
     593,   552,   557,    -6,   464,  -628,  -628,  -628,  -628,  -628,
     289,  -628,  -628,   596,  -628,   597,  -628,   601,   601,  1820,
    2607,  3031,  4631,   608,   626,  4631,   436,  -628,  -628,  -628,
     630,   630,   417,   187,  -628,  -628,   611,   113,   334,  4631,
     612,   536,   442,    53,   658,  4631,   614,    61,   673,   449,
     512,  4631,  4631,   186,  4631,  4631,  4631,  3095,  4631,  4631,
    4631,  4631,  4631,  4631,  4631,   452,  -628,  -628,  -628,   517,
     404,  4631,  4631,  4631,  4631,  4631,  4631,  4631,  4631,  4631,
    4631,  4631,  4631,  4631,  4631,  4631,  4631,  4631,  4631,  4631,
    4631,  4631,  4631,  4631,  4631,  4631,  -628,  -628,  2775,  -628,
    -628,  -628,  2967,  -628,  -628,  -628,  -628,  -628,  -628,    59,
     471,  -628,   499,  -628,  -628,  3159,  3223,   290,   645,   652,
    -628,  2519,  -628,  -628,   187,  -628,   471,   664,   551,  -628,
    -628,  -628,  3287,   694,   228,    94,   107,   632,  -628,  -628,
    -628,  4631,  -628,  4695,  4631,  4695,  4695,  4695,  4695,  4695,
    4695,  4695,  4695,  4695,  4695,  4695,  4695,  4695,  4695,  4695,
    4695,  4695,  4695,  -628,  -628,    63,   104,   270,  3351,   601,
     601,  -628,   631,   689,   690,  -628,  -628,   116,  -628,   635,
    -628,   228,  3095,   581,   662,   581,   662,  3415,   679,   434,
    -628,   668,   678,  -628,   681,   649,  -628,   677,   398,   574,
    -628,  -628,  -628,   666,  -628,  -628,  -628,   710,  -628,  -628,
      -1,  -628,  -628,  -628,   683,   477,   533,  -628,   697,  -628,
    -628,  -628,  -628,   670,  -628,  -628,  -628,  -628,  -628,  -628,
    -628,   723,   699,   705,  -628,  -628,   711,   676,  -628,  -628,
    -628,  -628,  -628,  -628,  -628,  -628,  -628,  -628,  -628,  -628,
    -628,  -628,  -628,  -628,  -628,  -628,  -628,  -628,  -628,  -628,
    -628,  -628,   680,  -628,  -628,   118,  -628,   372,   372,   424,
    -628,   682,   126,   684,   158,   467,    85,  3479,  3543,  -628,
    -628,   551,  -628,  -628,  -628,  3287,  4695,   337,   387,   748,
    5129,   685,   657,   738,   654,   598,   661,   593,   552,   552,
     557,   557,   557,   557,    -6,    -6,    -6,   464,   464,  -628,
    -628,  -628,  -628,  -628,   601,   601,  4810,   686,   743,   743,
    3607,  4631,  5151,  4631,  -628,  2691,   693,  -628,  3095,   551,
    -628,   551,   119,   166,   716,  3671,   734,  3735,   721,  -628,
     398,   369,  -628,   398,  -628,  2607,  -628,  -628,  -628,  3799,
     417,   488,   540,   722,  -628,  -628,  3863,   728,  -628,  -628,
    -628,  2839,  -628,  -628,  -628,  -628,  -628,   696,  -628,   703,
    3927,   737,   707,   192,   708,   206,  -628,  -628,  -628,  4695,
    5129,  3287,  -628,  -628,  4631,   743,   743,  2607,   715,   690,
    4832,  4888,   717,   718,  -628,  -628,   742,   335,   745,   749,
    -628,   773,   776,  -628,  -628,  -628,  -628,  -628,  -628,  -628,
     726,  -628,   119,  3991,   119,   218,   754,  -628,   223,  4055,
    -628,   732,  -628,  -628,  -628,   251,   759,   772,  -628,   775,
    4119,  -628,   261,  4183,  -628,  -628,  -628,  -628,   741,   263,
    4247,  -628,   744,  -628,   746,  -628,  -628,  -628,  -628,  -628,
    -628,  -628,  2607,  2607,   740,  2607,   750,  4910,  2607,  4754,
    2691,  4631,  4631,  2607,  -628,  -628,   119,   275,  -628,   119,
    4311,  -628,  -628,   286,   398,  -628,  4375,   779,  -628,  -628,
     302,  -628,  -628,   314,  -628,   755,   756,   316,  -628,  -628,
    -628,  -628,  2607,  -628,  2607,  2607,   751,  -628,  4439,   757,
     811,  -628,   761,   762,  -628,  -628,   119,  -628,   119,   319,
    -628,  -628,  -628,   322,  4503,  -628,  -628,  -628,  -628,   764,
    -628,  -628,  -628,  2607,  4966,   766,  4567,  4631,  2691,  2691,
    -628,  -628,   119,  -628,  -628,   330,  -628,  -628,  2691,   763,
    4988,  5044,   767,   771,   814,  -628,  -628,  -628,  -628,  2691,
    2691,   774,  2691,   777,  5066,  2691,  2691,  -628,  -628,  2691,
    -628,  2691,  2691,   778,  -628,  -628,  -628,  -628,  -628,  2691,
    -628
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,    54,     0,     0,     0,    53,    52,    55,     0,
       2,     6,     4,    12,    13,    14,    15,    16,     3,    22,
      23,     0,    51,    24,     0,     0,    36,     0,     0,   130,
      10,     1,     8,     7,    11,     5,    21,     0,     0,    50,
       0,   129,    48,     0,     0,    17,     0,   131,     0,     9,
       0,   132,    28,    31,    36,    30,    62,    71,    55,    29,
       0,     0,    25,    27,    26,    32,    34,    33,     0,     0,
       0,    65,    66,    69,    70,    67,    68,     0,   105,     0,
      35,     0,     0,    49,   133,     0,     0,    99,     0,     0,
      86,    78,     0,    75,     0,     0,    37,     0,     0,     0,
     107,   101,    63,    64,     0,   100,     0,   106,    35,     0,
      18,     0,    56,     0,     0,   109,     0,     0,    89,     0,
     249,     0,   250,     0,     0,   248,     0,    36,     0,   247,
       0,     0,     0,   253,     0,     0,   140,   171,   251,     0,
       0,   252,   239,     0,     0,     0,     0,     0,     0,     0,
      25,    26,   413,   160,     0,   143,   148,   149,   161,   150,
     162,     0,   151,   152,   163,   153,   154,   189,   190,   164,
     170,   165,   166,   168,   167,   169,   412,   235,   237,   238,
     242,   259,   243,   244,   245,   246,   236,   175,   176,   177,
       0,   178,   179,    98,    82,    97,    87,     0,    79,     0,
      72,    83,    39,     0,     0,     0,     0,   103,   108,   102,
       0,   111,     0,   239,    34,     0,     0,     0,     0,    96,
      19,    20,    59,     0,    57,     0,    90,     0,     0,   110,
       0,    36,     0,     0,     0,     0,     0,     0,   242,   245,
       0,   319,   320,   328,   327,   365,   368,   370,   372,   374,
     376,   378,   381,   386,   390,   393,   397,   398,   401,   407,
     404,   414,   415,     0,   220,     0,   223,     0,     0,     0,
       0,     0,     0,     0,    36,     0,   413,   243,   244,   403,
       0,     0,    34,     0,   402,   225,     0,     0,     0,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   141,   142,   174,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   417,   416,     0,    76,
      81,    80,     0,    74,    38,    84,    73,    85,   104,    47,
       0,    43,     0,    42,    44,     0,     0,     0,     0,     0,
     113,     0,   112,    61,     0,    58,    91,     0,    92,    94,
      88,   406,     0,     0,    25,   413,     0,     0,   400,   399,
     405,     0,   185,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   221,   224,     0,     0,     0,     0,     0,
       0,   217,     0,   210,   209,   172,   283,     0,   128,     0,
     241,     0,     0,     0,   311,     0,   313,     0,     0,     0,
     226,   279,     0,   307,     0,     0,   227,     0,     0,   229,
     233,   145,   258,     0,   222,   144,   256,     0,   303,   305,
       0,   338,   340,   254,    35,     0,     0,   240,     0,   260,
     329,   336,   337,     0,   335,   334,   332,   333,   339,   331,
     330,     0,   278,     0,   261,   301,     0,     0,   350,   352,
     341,   348,   349,   347,   346,   344,   345,   351,   343,   342,
     362,   364,   353,   360,   361,   359,   358,   356,   357,   363,
     355,   354,     0,   134,   139,     0,    77,     0,     0,     0,
      40,     0,     0,     0,     0,     0,     0,     0,     0,   114,
      60,    93,    95,   323,   326,     0,     0,    37,     0,     0,
     241,     0,   369,     0,   371,   373,   375,   377,   379,   380,
     383,   385,   382,   384,   388,   389,   387,   392,   391,   396,
     395,   394,   147,   146,     0,     0,     0,     0,   213,   211,
       0,     0,     0,     0,   284,     0,     0,   315,     0,   312,
     316,   314,   262,     0,     0,     0,     0,     0,     0,   308,
       0,     0,   230,     0,   232,     0,   257,   304,   306,     0,
       0,     0,     0,     0,   281,   255,     0,     0,   302,   282,
     135,     0,   136,    45,    46,    41,   119,     0,   115,     0,
       0,     0,     0,     0,     0,     0,   322,   325,   408,     0,
       0,     0,   410,   186,     0,   214,   212,     0,     0,   215,
       0,     0,     0,     0,   216,   127,     0,    36,     0,     0,
     182,     0,   149,   156,   157,   158,   159,   191,   192,   318,
       0,   263,   264,     0,   270,     0,     0,   293,     0,     0,
     228,     0,   231,   187,   285,     0,   280,     0,   309,     0,
       0,   289,     0,     0,   137,   138,   120,   116,     0,     0,
       0,   121,     0,   117,     0,   409,   411,   321,   324,   367,
     366,   193,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   317,   265,   266,     0,   271,   272,
       0,   294,   295,     0,     0,   286,     0,     0,   310,   287,
       0,   290,   291,     0,   123,     0,     0,     0,   122,   118,
     194,   195,     0,   197,     0,     0,     0,   218,     0,     0,
     210,   173,     0,     0,   183,   267,   268,   273,   274,     0,
     296,   234,   297,     0,     0,   288,   292,   124,   125,     0,
     196,   198,   199,     0,     0,     0,     0,     0,     0,     0,
     269,   275,   276,   298,   299,     0,   126,   200,     0,     0,
       0,     0,     0,     0,     0,   188,   277,   300,   201,     0,
       0,     0,     0,     0,     0,     0,     0,   202,   203,     0,
     205,     0,     0,     0,   219,   184,   204,   206,   207,     0,
     208
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -628,  -628,  -628,  -628,   836,    29,  -628,  -628,  -628,  -628,
      31,    15,   -19,   -16,  -628,   -11,  -128,  1738,  -628,    11,
     -92,  -628,   329,  -628,  -628,    -8,   105,   411,  -628,  -628,
     -25,  -628,   781,  -628,  -628,   -53,   653,  -337,  -628,   307,
     622,  -226,   -84,   -75,  -628,  -628,  -628,    51,  -628,  -628,
    1153,  -628,  -628,   165,  -628,   -55,   -98,  -149,   606,  -481,
    -539,  -628,  -628,  -628,  -628,  -261,  -628,  -628,  -628,  -628,
    -628,  -628,  -628,  -628,  -628,  -628,   144,   149,  -627,  -268,
    -628,  -628,  -628,  -628,  -628,  -628,  -628,  -628,  -628,  -628,
     408,  -628,  -628,  -628,  -628,   -77,  -273,    22,  1386,   -26,
    -628,  -628,   580,  1381,   226,  -628,   100,   230,  -628,   472,
     474,   470,   473,   479,   235,   219,    68,   237,  -124,   222,
     374,  -518,  -628,   555,   735,   855
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   149,   236,    63,   237,    65,   152,    67,   315,
     283,   362,   363,   364,    20,    21,    22,    69,   113,   219,
      41,    70,    71,    72,    73,    92,    93,   349,    74,    89,
     117,   118,   107,   194,    75,    76,    77,    90,   105,   216,
     427,    23,    24,   350,   515,   153,   154,   155,   156,   651,
     157,   158,   159,   653,   160,   161,   162,   163,   654,   164,
     165,   655,   166,   656,   167,   657,   422,   423,   638,   639,
     168,   658,   169,   170,   171,   172,   173,   174,   175,   449,
     450,   176,   177,   178,   179,   238,   181,   182,   183,   239,
     185,   186,   434,   428,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   424,   380,    87,   281,   317,   217,   279,   421,   180,
     284,   514,   215,   704,   706,   516,   208,   209,    44,   201,
     199,    61,   632,   393,    62,    83,   382,   180,  -181,    64,
     469,  -180,    68,    36,   195,   270,   652,    31,   597,   195,
     391,    34,    33,    35,   199,   205,   484,   408,    36,    98,
      36,    61,    62,   228,    62,   598,   409,    64,    25,    64,
     184,    34,    68,    49,    36,   271,   116,   271,   317,    62,
     150,   199,    45,    96,    64,   151,   200,   180,   184,   199,
     746,   199,  -181,   394,  -181,  -180,   517,  -180,   150,   291,
     373,    78,   293,   151,   469,   225,   297,   392,    62,   301,
     356,   196,   198,    64,   302,   268,   381,   229,    62,   388,
     389,   390,   696,    64,   303,   -34,   280,   304,   371,   100,
     101,    78,   199,   358,   603,   228,    39,   451,   184,   355,
     305,   357,   306,   -34,   573,   455,   611,   562,   150,   180,
     180,   518,   307,   151,   573,    26,   308,   789,   309,   195,
     207,   195,   441,   277,   310,    52,   277,   311,   287,   288,
     312,   299,   210,   801,   803,    40,   111,   621,     1,    80,
     313,   652,   314,    39,    53,    86,   573,   813,   563,   539,
       2,   112,    26,   -34,   573,    27,   187,    55,   574,   612,
     184,   184,   180,   180,   360,   442,   444,     4,   617,   361,
     150,   150,   463,   193,   187,   151,   151,    81,   460,   116,
     573,   468,    62,   116,   415,   416,   384,    64,    29,     6,
       7,   151,   317,    59,   573,   464,    26,   483,   486,   751,
     619,     8,    46,    37,   267,   210,   573,   378,   662,   652,
     652,   573,   465,   184,   184,     2,   530,   299,   298,   652,
     420,   108,   277,   150,   187,   277,   277,   277,   151,   431,
     652,   652,    38,   652,   692,    48,   652,   652,   466,   573,
     652,   467,   652,   652,   685,   526,    95,    50,   694,   573,
     652,   573,    52,    52,     6,     7,   559,   560,   561,   109,
     719,   433,   435,   573,   180,   721,     8,   794,   795,   114,
     536,    53,    53,   198,   573,   421,   463,   798,   188,    26,
      26,   644,   226,   376,    55,    55,   187,   187,   807,   808,
     573,   810,    52,   725,   814,   815,   188,   533,   816,   464,
     817,   818,   573,   731,   573,   735,    51,   573,   820,   210,
     573,    53,   263,   115,   346,   184,   465,   756,   573,    26,
      59,    59,   710,   347,    55,   150,    79,   457,   760,   210,
     151,   564,   227,   377,   265,   671,   568,   569,    94,   187,
     187,    96,   525,   443,   765,   467,   188,   264,    82,   421,
     421,    52,   271,   210,    52,   203,   766,   531,   769,   352,
      59,   782,    80,   592,   783,   537,   538,   114,   565,   266,
      53,    62,   797,    53,   204,   206,    64,   481,    26,   629,
      85,    26,   628,    55,   203,   277,    55,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   203,    52,    48,   188,   188,
      47,   424,   537,   485,    86,   579,   421,   581,   421,    59,
     287,   288,    59,   210,    48,    53,   303,   -34,   298,   630,
     189,   223,    84,    26,   437,   197,   438,    88,    55,   457,
       1,   187,   481,   554,   555,   556,   224,   365,   189,    99,
     626,   585,     2,   586,   307,    91,    95,   601,   602,   180,
      95,   188,   188,   359,   104,   180,     3,   203,   180,     4,
     203,   360,   360,   360,    59,   695,   613,   614,   361,   677,
     679,   635,   636,   421,   620,    52,    26,   519,   180,    95,
     197,     6,     7,   410,   319,   320,   210,   676,   189,   421,
     421,     2,   520,     8,    53,   670,   110,   210,   672,   411,
     184,   412,    54,   421,    85,    95,   184,    55,   106,   184,
     447,   458,    46,   601,   602,     1,   482,   661,   277,   202,
     180,   210,   277,   180,   180,   448,   210,     2,   459,   184,
       6,     7,   116,   465,    56,    62,   697,    57,  -414,   678,
      64,     3,    58,    59,     4,   401,   402,  -414,   447,   210,
     189,   189,   405,   188,   406,    60,  -415,     5,   577,   203,
     580,   403,   404,   593,   218,  -415,     6,     7,   407,   368,
     222,   184,   369,   269,   184,   184,   220,   399,     8,   400,
     550,   551,   552,   553,   221,   180,   180,   348,   180,   203,
     180,   180,   180,   180,   548,   549,   180,   715,   272,   718,
     292,   190,   289,   189,   189,   557,   558,   294,   321,   295,
     300,   277,   277,   318,   366,   354,   277,   374,   375,   190,
     379,   395,   396,   397,   398,   180,   187,   180,   180,   761,
     413,   414,   187,   271,   452,   187,   184,   184,   432,   184,
     430,   184,   184,   184,   184,   440,   446,   184,   454,   456,
     420,   755,   527,   150,   757,   187,   180,   180,   151,   528,
     535,   180,   180,   532,   540,   570,   571,   575,   572,   190,
     578,   180,   584,   180,   180,   587,   184,   588,   184,   184,
     589,   590,   180,   180,   591,   180,   596,   180,   180,   180,
     599,   780,   180,   781,   180,   180,   603,   187,   595,   605,
     187,   187,   180,   604,   607,   189,   606,   184,   184,   609,
     608,   610,   184,   184,   631,   634,   616,   796,   618,   633,
     640,   199,   184,   663,   184,   184,   659,   666,   669,   680,
     686,   190,   190,   184,   184,   683,   184,   687,   184,   184,
     184,   691,   693,   184,   690,   184,   184,   702,   188,   709,
     708,   707,   711,   184,   188,   713,   712,   188,  -155,   714,
      52,   720,   187,   187,   724,   187,   726,   187,   187,   187,
     187,   727,   742,   187,   728,   734,     2,   188,   738,    53,
     739,   191,   744,   773,   190,   190,   764,    54,   777,   767,
     768,   776,    55,   778,   779,   799,   806,    46,   786,   191,
     790,   804,   187,   805,   187,   187,   809,    32,   615,   811,
     819,   103,   353,   749,   386,     6,     7,   594,   750,   188,
     699,   436,   188,   188,   700,   542,   545,     8,    59,   544,
     546,     0,     0,   187,   187,     0,   425,   547,   187,   187,
      97,     0,     0,     0,     0,     0,     0,     0,   187,   191,
     187,   187,     0,     0,     0,     0,     0,     0,     0,   187,
     187,     0,   187,     0,   187,   187,   187,     0,     0,   187,
       0,   187,   187,     0,     0,     0,     0,     0,    52,   187,
       0,     0,     0,     0,   188,   188,   190,   188,     0,   188,
     188,   188,   188,     0,     2,   188,     0,    53,     0,     0,
     189,   192,     0,     0,     0,    54,   189,     0,     0,   189,
      55,   191,   191,     0,     0,    46,     0,     0,     0,   192,
       0,     0,     0,     0,   188,     0,   188,   188,     0,   189,
       0,     0,     0,     6,     7,     0,     0,   102,     0,     0,
      57,     0,     0,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,   188,   188,     0,    60,     0,
     188,   188,     0,     0,   191,   191,     0,     0,     0,   192,
     188,   189,   188,   188,   189,   189,     0,     0,     0,     0,
       0,   188,   188,     0,   188,     0,   188,   188,   188,     0,
       0,   188,     0,   188,   188,     0,     0,     0,     0,     0,
       0,   188,   301,     0,     0,     0,     0,   302,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   367,     0,     0,
     304,     0,   322,     0,     0,     0,     0,   323,     0,     0,
       0,   192,   192,   305,     0,   306,   189,   189,     0,   189,
     324,   189,   189,   189,   189,   307,     0,   189,     0,   308,
       0,   309,  -413,   325,     0,   326,     0,   310,     0,     0,
     311,  -413,     0,   312,     0,     0,   191,     0,     0,   327,
       0,   328,     0,   313,     0,   314,   189,   329,   189,   189,
     330,   190,     0,   331,   192,   192,     0,   190,     0,     0,
     190,     0,     0,   332,     0,   333,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,   189,     0,
     190,     0,   189,   189,     0,     0,     0,     0,     0,     0,
       0,     0,   189,     0,   189,   189,     0,     0,     0,     0,
       0,     0,     0,   189,   189,     0,   189,     0,   189,   189,
     189,   650,     0,   189,     0,   189,   189,     0,     0,     0,
       0,     0,   190,   189,     0,   190,   190,     0,     0,     0,
       0,   673,     0,     0,     0,     0,     0,     0,   120,    52,
       0,     0,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   230,     0,     0,   114,   192,   125,    53,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,     0,
     129,    55,     0,   701,   232,     0,     0,     0,     0,     0,
     233,     0,   131,   132,   133,     0,     0,   190,   190,   234,
     190,   134,   190,   190,   190,   190,     0,     0,   190,   383,
       0,     0,     0,     0,     0,     0,     0,    59,   138,   139,
       0,   141,   142,     0,     0,   235,     0,     0,     0,   146,
       0,     0,     0,     0,     0,     0,     0,   190,     0,   190,
     190,   191,     0,     0,     0,     0,     0,   191,   740,   741,
     191,   743,     0,     0,   747,     0,   425,     0,     0,   754,
       0,     0,     0,     0,     0,     0,     0,     0,   190,   190,
     191,     0,     0,   190,   190,     0,     0,     0,     0,     0,
       0,     0,     0,   190,     0,   190,   190,     0,   770,     0,
     771,   772,     0,     0,   190,   190,     0,   190,     0,   190,
     190,   190,     0,     0,   190,     0,   190,   190,     0,     0,
       0,     0,   191,     0,   190,   191,   191,     0,     0,   787,
       0,     0,     0,     0,   650,   673,     0,     0,     0,     0,
       0,     0,     0,     0,   701,     0,     0,     0,     0,     0,
       0,     0,   334,     0,     0,   740,   741,   335,   743,     0,
       0,   747,   754,     0,     0,   770,     0,   771,   772,     0,
     336,   192,     0,     0,     0,   787,     0,   192,     0,     0,
     192,     0,     0,   337,     0,   338,     0,   191,   191,     0,
     191,     0,   191,   191,   191,   191,     0,     0,   191,   339,
     192,   340,     0,     0,     0,     0,     0,   341,     0,     0,
     342,     0,     0,   343,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   344,     0,   345,     0,   191,     0,   191,
     191,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   192,     0,     0,   192,   192,     0,     0,     0,
     240,     0,     0,     0,     0,     0,     0,     0,   191,   191,
       0,   273,     0,   191,   191,     0,   286,   278,   522,   524,
     278,     0,     0,   191,   290,   191,   191,     0,     0,   296,
       0,     0,     0,     0,   191,   191,     0,   191,     0,   191,
     191,   191,     0,     0,   191,     0,   191,   191,     0,     0,
       0,     0,     0,     0,   191,     0,     0,   192,   192,     0,
     192,     0,   192,   192,   192,   192,     0,     0,   192,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   351,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     583,     0,     0,     0,     0,     0,     0,   192,     0,   192,
     192,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   387,     0,     0,   278,     0,     0,   278,
     278,   278,     0,     0,     0,     0,     0,     0,   192,   192,
       0,     0,     0,   192,   192,     0,     0,     0,     0,     0,
       0,     0,     0,   192,     0,   192,   192,     0,     0,     0,
       0,     0,     0,   429,   192,   192,   387,   192,     0,   192,
     192,   192,     0,     0,   192,     0,   192,   192,     0,     0,
     445,     0,     0,     0,   192,     0,   453,     0,     0,     0,
     623,   625,   461,   462,     0,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,     0,     0,     0,     0,
       0,     0,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,     0,     0,   351,
       0,     0,     0,   351,     0,     0,     0,     0,   665,     0,
     668,    28,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,   675,     0,     0,     0,     0,     0,     0,   682,
       0,     0,     0,   534,     0,    43,     0,     0,     0,     0,
       0,     0,   541,   689,     0,   543,     0,     0,    66,   278,
       0,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   567,
       0,     0,     0,     0,     0,     0,    66,     0,    66,     0,
       0,     0,     0,   576,     0,     0,   717,     0,     0,     0,
       0,     0,   723,    66,     0,     0,     0,     0,     0,     0,
       0,   120,    52,   730,     0,   122,   733,     0,     0,     0,
       0,     0,   214,   737,     0,     0,     0,     0,   417,     0,
     125,    53,    66,     0,     0,     0,     0,     0,     0,   274,
       0,     0,    66,   129,    55,     0,     0,   130,     0,   276,
     282,     0,   276,   759,     0,   131,   132,   133,     0,   763,
       0,     0,     0,     0,   134,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   418,     0,     0,     0,     0,     0,
      59,   138,   139,     0,   141,   142,     0,     0,     0,     0,
       0,   419,   146,     0,     0,     0,   627,   785,     0,     0,
       0,     0,   278,     0,     0,     0,   278,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,     0,
       0,   642,   643,     0,   645,     0,    66,     0,     0,   660,
       0,     0,     0,     0,     0,     0,    66,     0,   276,     0,
     385,   276,   276,   276,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   351,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,   120,    52,   121,     0,
     122,     0,   698,   385,   123,   278,   278,     0,     0,     0,
     278,   439,     0,   124,     0,   125,    53,   126,     0,     0,
       0,     0,     0,     0,   127,   128,     0,     0,   129,    55,
       0,    86,   130,     0,   210,     0,     0,     0,     0,     0,
     131,   132,   133,     0,     0,     0,     0,     0,     0,   134,
       0,     0,     0,     0,     0,   135,   211,     0,     0,   137,
       0,     0,     0,     0,     0,    59,   138,   212,   140,   141,
     213,   143,     0,     0,     0,   144,   145,   146,   147,   148,
       0,     0,   752,   753,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   775,
       0,   276,     0,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,     0,     0,     0,     0,    66,   119,   792,   793,     0,
     120,    52,   121,     0,   122,     0,     0,     0,   123,     0,
       0,     0,     0,     0,     0,     0,     0,   124,     0,   125,
      53,   126,     0,     0,     0,     0,     0,     0,   127,   128,
       0,     0,   129,    55,     0,    86,   130,     0,     0,     0,
       0,     0,     0,   600,   131,   132,   133,     0,     0,     0,
       0,     0,     0,   134,     0,     0,     0,     0,     0,   135,
     136,     0,     0,   137,     0,     0,     0,     0,     0,    59,
     138,   139,   140,   141,   142,   143,     0,     0,     0,   144,
     145,   146,   147,   148,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    66,    66,    66,   119,     0,
       0,     0,   120,    52,   121,     0,   122,     0,     0,     0,
     123,     0,     0,     0,   276,     0,     0,     0,   276,   124,
       0,   125,    53,   126,     0,     0,     0,     0,     0,     0,
     127,   128,     0,     0,   129,    55,     0,    86,   130,     0,
       0,     0,     0,     0,     0,     0,   131,   132,   133,     0,
       0,     0,     0,     0,     0,   134,     0,     0,     0,     0,
       0,   135,   316,     0,     0,   137,     0,     0,     0,    66,
       0,    59,   138,   139,   140,   141,   142,   143,     0,     0,
       0,   144,   145,   146,   147,   148,     0,     0,     0,     0,
     119,     0,     0,     0,   120,    52,   121,     0,   122,     0,
       0,     0,   123,     0,     0,     0,     0,   276,   276,     0,
       0,   124,   276,   125,    53,   126,     0,     0,     0,     0,
       0,     0,   127,   128,     0,     0,   129,    55,     0,    86,
     130,     0,     0,     0,     0,     0,     0,     0,   131,   132,
     133,     0,     0,     0,     0,     0,     0,   134,     0,     0,
       0,     0,     0,   135,   370,     0,     0,   137,     0,     0,
       0,     0,     0,    59,   138,   139,   140,   141,   142,   143,
       0,     0,     0,   144,   145,   146,   147,   148,   119,     0,
       0,     0,   120,    52,   121,     0,   122,     0,     0,     0,
     123,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,   125,    53,   126,     0,     0,     0,     0,     0,     0,
     127,   128,     0,     0,   129,    55,     0,    86,   130,     0,
       0,     0,     0,     0,     0,     0,   131,   132,   133,     0,
       0,     0,     0,     0,     0,   134,     0,     0,     0,     0,
       0,   135,   372,     0,     0,   137,     0,     0,     0,     0,
       0,    59,   138,   139,   140,   141,   142,   143,     0,     0,
       0,   144,   145,   146,   147,   148,   119,     0,     0,     0,
     120,    52,   121,     0,   122,     0,     0,     0,   123,     0,
       0,     0,     0,     0,     0,     0,     0,   124,     0,   125,
      53,   126,     0,     0,     0,     0,     0,     0,   127,   128,
       0,     0,   129,    55,     0,    86,   130,     0,     0,     0,
       0,     0,     0,     0,   131,   132,   133,     0,     0,     0,
       0,     0,     0,   134,     0,     0,     0,     0,     0,   135,
     529,     0,     0,   137,     0,     0,     0,     0,     0,    59,
     138,   139,   140,   141,   142,   143,     0,     0,     0,   144,
     145,   146,   147,   148,   119,     0,     0,     0,   120,    52,
     121,     0,   122,     0,     0,     0,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   125,    53,   126,
       0,     0,     0,     0,     0,     0,   127,   128,     0,     0,
     129,    55,     0,    86,   130,     0,     0,     0,     0,     0,
       0,     0,   131,   132,   133,     0,     0,     0,     0,     0,
       0,   134,     0,     0,     0,     0,     0,   135,     0,     0,
       0,   137,     0,     0,     0,     0,     0,    59,   138,   139,
     140,   141,   142,   143,     0,     0,     0,   144,   119,   146,
     147,   148,   120,    52,   121,     0,   122,     0,     0,   301,
     123,     0,     0,     0,   302,     0,     0,     0,     0,     0,
       0,   125,    53,   646,   303,   -34,     0,   304,     0,     0,
     647,   648,     0,     0,   129,    55,     0,    86,   130,     0,
     305,     0,   306,   -34,     0,     0,   131,   132,   133,     0,
       0,     0,   307,     0,     0,   134,   308,     0,   309,     0,
       0,   135,     0,     0,   310,   137,     0,   311,     0,     0,
     312,    59,   138,   139,   140,   141,   142,   143,     0,     0,
     313,   144,   314,   146,   649,   148,   120,    52,     0,     0,
     122,     0,     0,   512,     0,     0,     0,     0,     0,     0,
     230,     0,     0,     0,     0,   125,    53,     0,     0,     0,
       0,     0,     0,     0,   231,     0,     0,     0,   129,    55,
       0,   348,   232,     0,     0,     0,     0,     0,   233,     0,
     131,   132,   133,     0,     0,     0,     0,   234,     0,   134,
       0,     0,     0,     0,     0,     0,   513,     0,     0,     0,
     120,    52,     0,     0,   122,    59,   138,   139,     0,   141,
     142,     0,     0,   235,   230,     0,     0,   146,     0,   125,
      53,     0,     0,     0,     0,     0,     0,     0,   231,     0,
       0,     0,   129,    55,     0,   348,   232,     0,     0,     0,
       0,     0,   233,     0,   131,   132,   133,     0,     0,     0,
       0,   234,     0,   134,     0,     0,     0,     0,     0,     0,
     684,     0,     0,     0,   120,    52,     0,     0,   122,    59,
     138,   139,     0,   141,   142,     0,     0,   235,   230,     0,
       0,   146,     0,   125,    53,     0,     0,     0,     0,     0,
       0,     0,   231,     0,     0,     0,   129,    55,     0,     0,
     232,     0,     0,     0,     0,     0,   233,     0,   131,   132,
     133,     0,     0,     0,     0,   234,     0,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   285,   120,    52,
       0,     0,   122,    59,   138,   139,     0,   141,   142,     0,
       0,   235,   230,     0,     0,   146,     0,   125,    53,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,     0,
     129,    55,     0,   348,   232,     0,     0,     0,     0,     0,
     233,     0,   131,   132,   133,     0,     0,     0,     0,   234,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120,    52,     0,     0,   122,    59,   138,   139,
       0,   141,   142,     0,     0,   235,   230,     0,     0,   146,
       0,   125,    53,     0,     0,     0,     0,     0,     0,     0,
     231,     0,     0,     0,   129,    55,     0,     0,   232,     0,
       0,     0,     0,     0,   233,     0,   131,   132,   133,     0,
       0,     0,     0,   234,     0,   134,     0,     0,     0,     0,
       0,     0,     0,   426,     0,     0,   120,    52,     0,     0,
     122,    59,   138,   139,     0,   141,   142,     0,     0,   235,
     230,     0,     0,   146,     0,   125,    53,     0,     0,     0,
       0,     0,     0,     0,   231,     0,     0,     0,   129,    55,
       0,     0,   232,     0,     0,     0,     0,     0,   233,     0,
     131,   132,   133,     0,     0,     0,     0,   234,     0,   134,
       0,     0,     0,     0,     0,     0,     0,     0,   202,     0,
     120,    52,     0,     0,   122,    59,   138,   139,     0,   141,
     142,     0,     0,   235,   230,     0,     0,   146,     0,   125,
      53,     0,     0,     0,     0,     0,     0,     0,   231,     0,
       0,     0,   129,    55,     0,     0,   232,     0,     0,     0,
       0,     0,   233,     0,   131,   132,   133,     0,     0,     0,
       0,   234,     0,   134,     0,     0,     0,     0,     0,     0,
       0,   521,     0,     0,   120,    52,     0,     0,   122,    59,
     138,   139,     0,   141,   142,     0,     0,   235,   230,     0,
       0,   146,     0,   125,    53,     0,     0,     0,     0,     0,
       0,     0,   231,     0,     0,     0,   129,    55,     0,     0,
     232,     0,     0,     0,     0,     0,   233,     0,   131,   132,
     133,     0,     0,     0,     0,   234,     0,   134,     0,     0,
       0,     0,     0,     0,     0,   523,     0,     0,   120,    52,
       0,     0,   122,    59,   138,   139,     0,   141,   142,     0,
       0,   235,   230,     0,     0,   146,     0,   125,    53,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,     0,
     129,    55,     0,    86,   232,     0,     0,     0,     0,     0,
     233,     0,   131,   132,   133,     0,     0,     0,     0,   234,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120,    52,     0,     0,   122,    59,   138,   139,
       0,   141,   142,     0,     0,   235,   230,     0,     0,   146,
       0,   125,    53,     0,     0,     0,     0,     0,     0,     0,
     231,     0,     0,     0,   129,    55,     0,     0,   232,     0,
       0,     0,     0,     0,   233,     0,   131,   132,   133,     0,
       0,     0,     0,   234,     0,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   566,   120,    52,     0,     0,
     122,    59,   138,   139,     0,   141,   142,     0,     0,   235,
     230,     0,     0,   146,     0,   125,    53,     0,     0,     0,
       0,     0,     0,     0,   231,     0,     0,     0,   129,    55,
       0,     0,   232,     0,     0,     0,     0,     0,   233,     0,
     131,   132,   133,     0,     0,     0,     0,   234,     0,   134,
       0,     0,     0,     0,     0,     0,     0,   582,     0,     0,
     120,    52,     0,     0,   122,    59,   138,   139,     0,   141,
     142,     0,     0,   235,   230,     0,     0,   146,     0,   125,
      53,     0,     0,     0,     0,     0,     0,     0,   231,     0,
       0,     0,   129,    55,     0,     0,   232,     0,     0,     0,
       0,     0,   233,     0,   131,   132,   133,     0,     0,     0,
       0,   234,     0,   134,     0,     0,     0,     0,     0,     0,
       0,   622,     0,     0,   120,    52,     0,     0,   122,    59,
     138,   139,     0,   141,   142,     0,     0,   235,   230,     0,
       0,   146,     0,   125,    53,     0,     0,     0,     0,     0,
       0,     0,   231,     0,     0,     0,   129,    55,     0,     0,
     232,     0,     0,     0,     0,     0,   233,     0,   131,   132,
     133,     0,     0,     0,     0,   234,     0,   134,     0,     0,
       0,     0,     0,     0,     0,   624,     0,     0,   120,    52,
       0,     0,   122,    59,   138,   139,     0,   141,   142,     0,
       0,   235,   230,     0,     0,   146,     0,   125,    53,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,     0,
     129,    55,     0,     0,   232,     0,     0,     0,     0,     0,
     233,     0,   131,   132,   133,     0,     0,     0,     0,   234,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   641,   120,    52,     0,     0,   122,    59,   138,   139,
       0,   141,   142,     0,     0,   235,   230,     0,     0,   146,
       0,   125,    53,     0,     0,     0,     0,     0,     0,     0,
     231,     0,     0,     0,   129,    55,     0,     0,   232,     0,
       0,     0,     0,     0,   233,     0,   131,   132,   133,     0,
       0,     0,     0,   234,     0,   134,     0,     0,     0,     0,
       0,     0,     0,   664,     0,     0,   120,    52,     0,     0,
     122,    59,   138,   139,     0,   141,   142,     0,     0,   235,
     230,     0,     0,   146,     0,   125,    53,     0,     0,     0,
       0,     0,     0,     0,   231,     0,     0,     0,   129,    55,
       0,     0,   232,     0,     0,     0,     0,     0,   233,     0,
     131,   132,   133,     0,     0,     0,     0,   234,     0,   134,
       0,     0,     0,     0,     0,     0,     0,   667,     0,     0,
     120,    52,     0,     0,   122,    59,   138,   139,     0,   141,
     142,     0,     0,   235,   230,     0,     0,   146,     0,   125,
      53,     0,     0,     0,     0,     0,     0,     0,   231,     0,
       0,     0,   129,    55,     0,     0,   232,     0,     0,     0,
       0,     0,   233,     0,   131,   132,   133,     0,     0,     0,
       0,   234,     0,   134,     0,     0,     0,     0,     0,     0,
       0,   674,     0,     0,   120,    52,     0,     0,   122,    59,
     138,   139,     0,   141,   142,     0,     0,   235,   230,     0,
       0,   146,     0,   125,    53,     0,     0,     0,     0,     0,
       0,     0,   231,     0,     0,     0,   129,    55,     0,     0,
     232,     0,     0,     0,     0,     0,   233,     0,   131,   132,
     133,     0,     0,     0,     0,   234,     0,   134,     0,     0,
       0,     0,     0,     0,     0,   681,     0,     0,   120,    52,
       0,     0,   122,    59,   138,   139,     0,   141,   142,     0,
       0,   235,   230,     0,     0,   146,     0,   125,    53,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,     0,
     129,    55,     0,     0,   232,     0,     0,     0,     0,     0,
     233,     0,   131,   132,   133,     0,     0,     0,     0,   234,
       0,   134,     0,     0,     0,     0,     0,     0,     0,   688,
       0,     0,   120,    52,     0,     0,   122,    59,   138,   139,
       0,   141,   142,     0,     0,   235,   230,     0,     0,   146,
       0,   125,    53,     0,     0,     0,     0,     0,     0,     0,
     231,     0,     0,     0,   129,    55,     0,     0,   232,     0,
       0,     0,     0,     0,   233,     0,   131,   132,   133,     0,
       0,     0,     0,   234,     0,   134,     0,     0,     0,     0,
       0,     0,     0,   716,     0,     0,   120,    52,     0,     0,
     122,    59,   138,   139,     0,   141,   142,     0,     0,   235,
     230,     0,     0,   146,     0,   125,    53,     0,     0,     0,
       0,     0,     0,     0,   231,     0,     0,     0,   129,    55,
       0,     0,   232,     0,     0,     0,     0,     0,   233,     0,
     131,   132,   133,     0,     0,     0,     0,   234,     0,   134,
       0,     0,     0,     0,     0,     0,     0,   722,     0,     0,
     120,    52,     0,     0,   122,    59,   138,   139,     0,   141,
     142,     0,     0,   235,   230,     0,     0,   146,     0,   125,
      53,     0,     0,     0,     0,     0,     0,     0,   231,     0,
       0,     0,   129,    55,     0,     0,   232,     0,     0,     0,
       0,     0,   233,     0,   131,   132,   133,     0,     0,     0,
       0,   234,     0,   134,     0,     0,     0,     0,     0,     0,
       0,   729,     0,     0,   120,    52,     0,     0,   122,    59,
     138,   139,     0,   141,   142,     0,     0,   235,   230,     0,
       0,   146,     0,   125,    53,     0,     0,     0,     0,     0,
       0,     0,   231,     0,     0,     0,   129,    55,     0,     0,
     232,     0,     0,     0,     0,     0,   233,     0,   131,   132,
     133,     0,     0,     0,     0,   234,     0,   134,     0,     0,
       0,     0,     0,     0,     0,   732,     0,     0,   120,    52,
       0,     0,   122,    59,   138,   139,     0,   141,   142,     0,
       0,   235,   230,     0,     0,   146,     0,   125,    53,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,     0,
     129,    55,     0,     0,   232,     0,     0,     0,     0,     0,
     233,     0,   131,   132,   133,     0,     0,     0,     0,   234,
       0,   134,     0,     0,     0,     0,     0,     0,     0,   736,
       0,     0,   120,    52,     0,     0,   122,    59,   138,   139,
       0,   141,   142,     0,     0,   235,   230,     0,     0,   146,
       0,   125,    53,     0,     0,     0,     0,     0,     0,     0,
     231,     0,     0,     0,   129,    55,     0,     0,   232,     0,
       0,     0,     0,     0,   233,     0,   131,   132,   133,     0,
       0,     0,     0,   234,     0,   134,     0,     0,     0,     0,
       0,     0,     0,   758,     0,     0,   120,    52,     0,     0,
     122,    59,   138,   139,     0,   141,   142,     0,     0,   235,
     230,     0,     0,   146,     0,   125,    53,     0,     0,     0,
       0,     0,     0,     0,   231,     0,     0,     0,   129,    55,
       0,     0,   232,     0,     0,     0,     0,     0,   233,     0,
     131,   132,   133,     0,     0,     0,     0,   234,     0,   134,
       0,     0,     0,     0,     0,     0,     0,   762,     0,     0,
     120,    52,     0,     0,   122,    59,   138,   139,     0,   141,
     142,     0,     0,   235,   230,     0,     0,   146,     0,   125,
      53,     0,     0,     0,     0,     0,     0,     0,   231,     0,
       0,     0,   129,    55,     0,     0,   232,     0,     0,     0,
       0,     0,   233,     0,   131,   132,   133,     0,     0,     0,
       0,   234,     0,   134,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   774,   120,    52,     0,     0,   122,    59,
     138,   139,     0,   141,   142,     0,     0,   235,   230,     0,
       0,   146,     0,   125,    53,     0,     0,     0,     0,     0,
       0,     0,   231,     0,     0,     0,   129,    55,     0,     0,
     232,     0,     0,     0,     0,     0,   233,     0,   131,   132,
     133,     0,     0,     0,     0,   234,     0,   134,     0,     0,
       0,     0,     0,     0,     0,   784,     0,     0,   120,    52,
       0,     0,   122,    59,   138,   139,     0,   141,   142,     0,
       0,   235,   230,     0,     0,   146,     0,   125,    53,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,     0,
     129,    55,     0,     0,   232,     0,     0,     0,     0,     0,
     233,     0,   131,   132,   133,     0,     0,     0,     0,   234,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   791,   120,    52,     0,     0,   122,    59,   138,   139,
       0,   141,   142,     0,     0,   235,   230,     0,     0,   146,
       0,   125,    53,     0,     0,     0,     0,     0,     0,     0,
     231,     0,     0,     0,   129,    55,     0,     0,   232,     0,
       0,     0,     0,     0,   233,     0,   131,   132,   133,     0,
       0,     0,     0,   234,     0,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,    52,     0,     0,
     122,    59,   138,   139,     0,   141,   142,     0,     0,   235,
     230,     0,     0,   146,     0,   125,    53,     0,     0,     0,
       0,     0,     0,     0,   274,     0,     0,     0,   129,    55,
       0,     0,   275,     0,     0,     0,     0,     0,   233,     0,
     131,   132,   133,     0,     0,     0,     0,   234,     0,   134,
       0,     0,     0,     0,     0,   120,    52,     0,     0,   122,
       0,     0,     0,     0,     0,    59,   138,   139,     0,   141,
     142,     0,   417,   235,   125,    53,     0,   146,     0,     0,
       0,     0,     0,   274,     0,     0,     0,   129,    55,     0,
       0,   130,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,     0,     0,     0,     0,     0,     0,   134,     0,
       0,   120,    52,     0,     0,   122,     0,     0,   748,     0,
       0,     0,     0,     0,    59,   138,   139,     0,   141,   142,
     125,    53,     0,   120,    52,   419,   146,   122,     0,   274,
       0,     0,     0,   129,    55,     0,     0,   130,     0,     0,
       0,     0,   125,    53,     0,   131,   132,   133,     0,     0,
       0,   274,     0,     0,   134,   129,    55,     0,     0,   130,
       0,     0,   637,     0,     0,     0,     0,   131,   132,   133,
      59,   138,   139,     0,   141,   142,   134,     0,     0,   120,
      52,     0,   146,   122,   703,     0,     0,     0,     0,     0,
       0,     0,    59,   138,   139,     0,   141,   142,   125,    53,
       0,   120,    52,     0,   146,   122,     0,   274,     0,     0,
       0,   129,    55,     0,     0,   130,     0,     0,     0,     0,
     125,    53,     0,   131,   132,   133,     0,     0,     0,   274,
       0,     0,   134,   129,    55,     0,     0,   130,     0,     0,
     705,     0,     0,     0,     0,   131,   132,   133,    59,   138,
     139,     0,   141,   142,   134,     0,     0,   120,    52,     0,
     146,   122,   745,     0,     0,     0,     0,     0,     0,     0,
      59,   138,   139,     0,   141,   142,   125,    53,     0,   120,
      52,     0,   146,   122,     0,   274,     0,     0,     0,   129,
      55,     0,     0,   130,     0,     0,     0,     0,   125,    53,
       0,   131,   132,   133,     0,     0,     0,   274,     0,     0,
     134,   129,    55,     0,     0,   130,     0,     0,   788,     0,
       0,     0,     0,   131,   132,   133,    59,   138,   139,     0,
     141,   142,   134,     0,     0,   120,    52,     0,   146,   122,
     800,     0,     0,     0,     0,     0,     0,     0,    59,   138,
     139,     0,   141,   142,   125,    53,     0,   120,    52,     0,
     146,   122,     0,   274,     0,     0,     0,   129,    55,     0,
       0,   130,     0,     0,     0,     0,   125,    53,     0,   131,
     132,   133,     0,     0,     0,   274,     0,     0,   134,   129,
      55,     0,     0,   130,     0,     0,   802,     0,     0,     0,
       0,   131,   132,   133,    59,   138,   139,     0,   141,   142,
     134,     0,     0,     0,     0,     0,   146,     0,   812,     0,
     120,    52,     0,     0,   122,     0,    59,   138,   139,     0,
     141,   142,     0,     0,   230,     0,     0,     0,   146,   125,
      53,     0,   120,    52,     0,     0,   122,     0,   274,     0,
       0,     0,   129,    55,     0,     0,   275,     0,     0,     0,
       0,   125,    53,     0,     0,   132,   133,     0,     0,     0,
     274,     0,     0,     0,   129,    55,     0,     0,   130,     0,
       0,     0,     0,     0,     0,     0,   131,   132,   133,    59,
     138,   139,     0,   141,   142,   134,     0,   235,     0,     0,
       0,   146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,   138,   139,     0,   141,   142,     0,     0,     0,
       0,     0,     0,   146
};

static const yytype_int16 yycheck[] =
{
      25,   269,   228,    58,   132,   154,   104,   131,   269,    86,
     134,   348,   104,   640,   641,   352,   100,   101,    20,    94,
      18,    40,   540,     9,    40,    50,     6,   104,    18,    40,
     303,    18,    40,    18,    89,    17,   575,     0,    39,    94,
      17,    12,    11,    12,    18,    98,   319,    53,    33,    68,
      35,    70,    68,    18,    70,    56,    62,    68,    39,    70,
      86,    32,    70,    32,    49,    47,    85,    47,   217,    85,
      86,    18,    74,    62,    85,    86,    74,   154,   104,    18,
     707,    18,    72,    69,    74,    72,    27,    74,   104,   144,
     218,    40,   145,   104,   367,   114,   149,    74,   114,     5,
      74,    90,    91,   114,    10,   124,   230,    72,   124,   233,
     234,   235,   630,   124,    20,    21,   132,    23,   216,    68,
      69,    70,    18,   207,    39,    18,    21,    74,   154,   204,
      36,   206,    38,    39,    18,    74,    18,    74,   154,   216,
     217,    82,    48,   154,    18,    39,    52,   774,    54,   204,
      99,   206,    39,   131,    60,    12,   134,    63,    20,    21,
      66,   150,    49,   790,   791,    46,    18,    82,    16,    39,
      76,   710,    78,    68,    31,    46,    18,   804,    74,    72,
      28,    33,    39,    89,    18,    79,    86,    44,    72,    71,
     216,   217,   269,   270,   210,   287,   288,    45,    72,   210,
     216,   217,    16,    74,   104,   216,   217,    77,   300,   228,
      18,   303,   228,   232,   267,   268,   232,   228,    39,    67,
      68,   232,   371,    80,    18,    39,    39,   319,   320,   710,
      72,    79,    49,    16,    91,    49,    18,   226,    72,   778,
     779,    18,    56,   269,   270,    28,   374,   236,    20,   788,
     269,    39,   230,   269,   154,   233,   234,   235,   269,   275,
     799,   800,    45,   802,    72,    20,   805,   806,    82,    18,
     809,    85,   811,   812,   611,   367,    48,    39,    72,    18,
     819,    18,    12,    12,    67,    68,   410,   411,   412,    77,
      72,   280,   281,    18,   371,    72,    79,   778,   779,    28,
      72,    31,    31,   292,    18,   566,    16,   788,    86,    39,
      39,   572,    39,    39,    44,    44,   216,   217,   799,   800,
      18,   802,    12,    72,   805,   806,   104,   382,   809,    39,
     811,   812,    18,    72,    18,    72,    39,    18,   819,    49,
      18,    31,    39,    72,    55,   371,    56,    72,    18,    39,
      80,    80,    17,    64,    44,   371,    20,    20,    72,    49,
     371,    91,    89,    89,    39,   591,   419,   420,    61,   269,
     270,   360,    82,    39,    72,    85,   154,    74,    39,   640,
     641,    12,    47,    49,    12,    48,    72,   376,    72,    23,
      80,    72,    39,   448,    72,   384,   385,    28,   417,    74,
      31,   417,    72,    31,    97,    98,   417,    20,    39,    72,
      47,    39,   536,    44,    48,   393,    44,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,    48,    12,    20,   216,   217,
      29,   709,   431,    39,    46,   434,   707,   436,   709,    80,
      20,    21,    80,    49,    20,    31,    20,    21,    20,    72,
      86,    18,    51,    39,    47,    23,    49,    39,    44,    20,
      16,   371,    20,   405,   406,   407,    33,    47,   104,    68,
     535,    47,    28,    49,    48,    39,    48,    20,    21,   566,
      48,   269,   270,    69,    46,   572,    42,    48,   575,    45,
      48,   517,   518,   519,    80,   629,   517,   518,   519,   601,
     602,   564,   565,   774,    47,    12,    39,    18,   595,    48,
      23,    67,    68,    59,    20,    21,    49,    39,   154,   790,
     791,    28,    33,    79,    31,   590,    74,    49,   593,    75,
     566,    77,    39,   804,    47,    48,   572,    44,    87,   575,
      14,    39,    49,    20,    21,    16,    39,   582,   536,    73,
     637,    49,   540,   640,   641,    29,    49,    28,    56,   595,
      67,    68,   591,    56,    71,   591,   631,    74,    55,    39,
     591,    42,    79,    80,    45,    33,    34,    64,    14,    49,
     216,   217,    35,   371,    37,    92,    55,    58,   433,    48,
     435,    49,    50,    29,    18,    64,    67,    68,    51,    82,
      39,   637,    85,    47,   640,   641,    74,    24,    79,    26,
     401,   402,   403,   404,    74,   702,   703,    46,   705,    48,
     707,   708,   709,   710,   399,   400,   713,   662,    47,   664,
      39,    86,    47,   269,   270,   408,   409,    20,    48,    47,
      21,   629,   630,    74,    47,    73,   634,    18,    39,   104,
      39,     4,     8,    65,     3,   742,   566,   744,   745,   724,
      74,    74,   572,    47,    16,   575,   702,   703,    48,   705,
      72,   707,   708,   709,   710,    74,    74,   713,    74,    16,
     709,   716,    47,   709,   719,   595,   773,   774,   709,    47,
       6,   778,   779,    39,    72,    74,    17,    72,    18,   154,
      48,   788,    33,   790,   791,    47,   742,    39,   744,   745,
      39,    72,   799,   800,    47,   802,    16,   804,   805,   806,
      47,   756,   809,   758,   811,   812,    39,   637,    72,    16,
     640,   641,   819,    73,    39,   371,    47,   773,   774,    73,
      39,    71,   778,   779,     6,    17,    74,   782,    74,    74,
      74,    18,   788,    47,   790,   791,    73,    33,    47,    47,
      74,   216,   217,   799,   800,    47,   802,    74,   804,   805,
     806,    74,    74,   809,    47,   811,   812,    72,   566,    47,
      72,    74,    47,   819,   572,    22,    47,   575,    22,    73,
      12,    47,   702,   703,    72,   705,    47,   707,   708,   709,
     710,    39,    72,   713,    39,    74,    28,   595,    74,    31,
      74,    86,    72,    72,   269,   270,    47,    39,    17,    74,
      74,    74,    44,    72,    72,    72,    22,    49,    74,   104,
      74,    74,   742,    72,   744,   745,    72,    11,   519,    72,
      72,    70,   199,   709,   232,    67,    68,   449,   709,   637,
     634,   281,   640,   641,   634,   393,   396,    79,    80,   395,
     397,    -1,    -1,   773,   774,    -1,   270,   398,   778,   779,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   788,   154,
     790,   791,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   799,
     800,    -1,   802,    -1,   804,   805,   806,    -1,    -1,   809,
      -1,   811,   812,    -1,    -1,    -1,    -1,    -1,    12,   819,
      -1,    -1,    -1,    -1,   702,   703,   371,   705,    -1,   707,
     708,   709,   710,    -1,    28,   713,    -1,    31,    -1,    -1,
     566,    86,    -1,    -1,    -1,    39,   572,    -1,    -1,   575,
      44,   216,   217,    -1,    -1,    49,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,   742,    -1,   744,   745,    -1,   595,
      -1,    -1,    -1,    67,    68,    -1,    -1,    71,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   773,   774,    -1,    92,    -1,
     778,   779,    -1,    -1,   269,   270,    -1,    -1,    -1,   154,
     788,   637,   790,   791,   640,   641,    -1,    -1,    -1,    -1,
      -1,   799,   800,    -1,   802,    -1,   804,   805,   806,    -1,
      -1,   809,    -1,   811,   812,    -1,    -1,    -1,    -1,    -1,
      -1,   819,     5,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      23,    -1,     5,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,   216,   217,    36,    -1,    38,   702,   703,    -1,   705,
      23,   707,   708,   709,   710,    48,    -1,   713,    -1,    52,
      -1,    54,    55,    36,    -1,    38,    -1,    60,    -1,    -1,
      63,    64,    -1,    66,    -1,    -1,   371,    -1,    -1,    52,
      -1,    54,    -1,    76,    -1,    78,   742,    60,   744,   745,
      63,   566,    -1,    66,   269,   270,    -1,   572,    -1,    -1,
     575,    -1,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   773,   774,    -1,
     595,    -1,   778,   779,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   788,    -1,   790,   791,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   799,   800,    -1,   802,    -1,   804,   805,
     806,   575,    -1,   809,    -1,   811,   812,    -1,    -1,    -1,
      -1,    -1,   637,   819,    -1,   640,   641,    -1,    -1,    -1,
      -1,   595,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    28,   371,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,   637,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,   702,   703,    62,
     705,    64,   707,   708,   709,   710,    -1,    -1,   713,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      -1,    84,    85,    -1,    -1,    88,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   742,    -1,   744,
     745,   566,    -1,    -1,    -1,    -1,    -1,   572,   702,   703,
     575,   705,    -1,    -1,   708,    -1,   710,    -1,    -1,   713,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   773,   774,
     595,    -1,    -1,   778,   779,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   788,    -1,   790,   791,    -1,   742,    -1,
     744,   745,    -1,    -1,   799,   800,    -1,   802,    -1,   804,
     805,   806,    -1,    -1,   809,    -1,   811,   812,    -1,    -1,
      -1,    -1,   637,    -1,   819,   640,   641,    -1,    -1,   773,
      -1,    -1,    -1,    -1,   778,   779,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   788,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,    -1,   799,   800,    10,   802,    -1,
      -1,   805,   806,    -1,    -1,   809,    -1,   811,   812,    -1,
      23,   566,    -1,    -1,    -1,   819,    -1,   572,    -1,    -1,
     575,    -1,    -1,    36,    -1,    38,    -1,   702,   703,    -1,
     705,    -1,   707,   708,   709,   710,    -1,    -1,   713,    52,
     595,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    78,    -1,   742,    -1,   744,
     745,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   637,    -1,    -1,   640,   641,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   773,   774,
      -1,   130,    -1,   778,   779,    -1,   135,   131,   365,   366,
     134,    -1,    -1,   788,   143,   790,   791,    -1,    -1,   148,
      -1,    -1,    -1,    -1,   799,   800,    -1,   802,    -1,   804,
     805,   806,    -1,    -1,   809,    -1,   811,   812,    -1,    -1,
      -1,    -1,    -1,    -1,   819,    -1,    -1,   702,   703,    -1,
     705,    -1,   707,   708,   709,   710,    -1,    -1,   713,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     437,    -1,    -1,    -1,    -1,    -1,    -1,   742,    -1,   744,
     745,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   232,    -1,    -1,   230,    -1,    -1,   233,
     234,   235,    -1,    -1,    -1,    -1,    -1,    -1,   773,   774,
      -1,    -1,    -1,   778,   779,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   788,    -1,   790,   791,    -1,    -1,    -1,
      -1,    -1,    -1,   272,   799,   800,   275,   802,    -1,   804,
     805,   806,    -1,    -1,   809,    -1,   811,   812,    -1,    -1,
     289,    -1,    -1,    -1,   819,    -1,   295,    -1,    -1,    -1,
     527,   528,   301,   302,    -1,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,    -1,    -1,    -1,    -1,
      -1,    -1,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,    -1,    -1,   348,
      -1,    -1,    -1,   352,    -1,    -1,    -1,    -1,   585,    -1,
     587,     3,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   599,    -1,    -1,    -1,    -1,    -1,    -1,   606,
      -1,    -1,    -1,   382,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,   391,   620,    -1,   394,    -1,    -1,    40,   393,
      -1,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   418,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,
      -1,    -1,    -1,   432,    -1,    -1,   663,    -1,    -1,    -1,
      -1,    -1,   669,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,   680,    -1,    15,   683,    -1,    -1,    -1,
      -1,    -1,   104,   690,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,   114,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,   124,    43,    44,    -1,    -1,    47,    -1,   131,
     132,    -1,   134,   720,    -1,    55,    56,    57,    -1,   726,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    -1,    84,    85,    -1,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,   535,   764,    -1,    -1,
      -1,    -1,   536,    -1,    -1,    -1,   540,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   210,    -1,
      -1,   570,   571,    -1,   573,    -1,   218,    -1,    -1,   578,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,   230,    -1,
     232,   233,   234,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   611,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    11,    12,    13,    -1,
      15,    -1,   631,   275,    19,   629,   630,    -1,    -1,    -1,
     634,   283,    -1,    28,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,    44,
      -1,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,    86,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      -1,    -1,   711,   712,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   374,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   748,
      -1,   393,    -1,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,    -1,    -1,    -1,    -1,   417,     7,   776,   777,    -1,
      11,    12,    13,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    43,    44,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,   465,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,
      71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    85,    86,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   517,   518,   519,     7,    -1,
      -1,    -1,    11,    12,    13,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,   536,    -1,    -1,    -1,   540,    28,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    43,    44,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    70,    71,    -1,    -1,    74,    -1,    -1,    -1,   591,
      -1,    80,    81,    82,    83,    84,    85,    86,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,   629,   630,    -1,
      -1,    28,   634,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    43,    44,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    70,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    85,    86,
      -1,    -1,    -1,    90,    91,    92,    93,    94,     7,    -1,
      -1,    -1,    11,    12,    13,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    43,    44,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    70,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    85,    86,    -1,    -1,
      -1,    90,    91,    92,    93,    94,     7,    -1,    -1,    -1,
      11,    12,    13,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    43,    44,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,
      71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    85,    86,    -1,    -1,    -1,    90,
      91,    92,    93,    94,     7,    -1,    -1,    -1,    11,    12,
      13,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    86,    -1,    -1,    -1,    90,     7,    92,
      93,    94,    11,    12,    13,    -1,    15,    -1,    -1,     5,
      19,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    20,    21,    -1,    23,    -1,    -1,
      39,    40,    -1,    -1,    43,    44,    -1,    46,    47,    -1,
      36,    -1,    38,    39,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    48,    -1,    -1,    64,    52,    -1,    54,    -1,
      -1,    70,    -1,    -1,    60,    74,    -1,    63,    -1,    -1,
      66,    80,    81,    82,    83,    84,    85,    86,    -1,    -1,
      76,    90,    78,    92,    93,    94,    11,    12,    -1,    -1,
      15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
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
      -1,    11,    12,    -1,    -1,    15,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    -1,    84,    85,
      30,    31,    -1,    11,    12,    91,    92,    15,    -1,    39,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    30,    31,    -1,    55,    56,    57,    -1,    -1,
      -1,    39,    -1,    -1,    64,    43,    44,    -1,    -1,    47,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    55,    56,    57,
      80,    81,    82,    -1,    84,    85,    64,    -1,    -1,    11,
      12,    -1,    92,    15,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    -1,    84,    85,    30,    31,
      -1,    11,    12,    -1,    92,    15,    -1,    39,    -1,    -1,
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
      64,    -1,    -1,    -1,    -1,    -1,    92,    -1,    72,    -1,
      11,    12,    -1,    -1,    15,    -1,    80,    81,    82,    -1,
      84,    85,    -1,    -1,    25,    -1,    -1,    -1,    92,    30,
      31,    -1,    11,    12,    -1,    -1,    15,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    56,    57,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    80,
      81,    82,    -1,    84,    85,    64,    -1,    88,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    -1,    84,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    92
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    28,    42,    45,    58,    67,    68,    79,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     119,   120,   121,   146,   147,    39,    39,    79,   112,    39,
     112,     0,    99,   105,   100,   105,   106,    16,    45,   121,
      46,   125,   125,   112,    20,    74,    49,   122,    20,   105,
      39,    39,    12,    31,    39,    44,    71,    74,    79,    80,
      92,   107,   108,   109,   110,   111,   112,   113,   120,   122,
     126,   127,   128,   129,   133,   139,   140,   141,   142,    20,
      39,    77,    39,   125,   122,    47,    46,   150,    39,   134,
     142,    39,   130,   131,   134,    48,   114,    92,   107,   122,
     142,   142,    71,   127,    46,   143,    87,   137,    39,    77,
      74,    18,    33,   123,    28,    72,   107,   135,   136,     7,
      11,    13,    15,    19,    28,    30,    32,    39,    40,    43,
      47,    55,    56,    57,    64,    70,    71,    74,    81,    82,
      83,    84,    85,    86,    90,    91,    92,    93,    94,   107,
     108,   110,   112,   150,   151,   152,   153,   155,   156,   157,
     159,   160,   161,   162,   164,   165,   167,   169,   175,   177,
     178,   179,   180,   181,   182,   183,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   201,   214,   215,
     218,   219,   220,    74,   138,   150,   114,    23,   114,    18,
      74,   138,    73,    48,   134,   130,   134,   142,   137,   137,
      49,    71,    82,    85,   112,   115,   144,   151,    18,   124,
      74,    74,    39,    18,    33,   107,    39,    89,    18,    72,
      25,    39,    47,    53,    62,    88,   108,   110,   190,   194,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,    39,    74,    39,    74,    91,   107,    47,
      17,    47,    47,   198,    39,    47,   112,   192,   193,   213,
     108,   111,   112,   115,   213,    74,   198,    20,    21,    47,
     198,   150,    39,   130,    20,    47,   198,   130,    20,   114,
      21,     5,    10,    20,    23,    36,    38,    48,    52,    54,
      60,    63,    66,    76,    78,   114,    71,   152,    74,    20,
      21,    48,     5,    10,    23,    36,    38,    52,    54,    60,
      63,    66,    76,    78,     5,    10,    23,    36,    38,    52,
      54,    60,    63,    66,    76,    78,    55,    64,    46,   132,
     148,   198,    23,   131,    73,   138,    74,   138,   137,    69,
     108,   110,   116,   117,   118,    47,    47,    20,    82,    85,
      71,   151,    71,   111,    18,    39,    39,    89,   114,    39,
     136,   213,     6,    72,   108,   112,   135,   198,   213,   213,
     213,    17,    74,     9,    69,     4,     8,    65,     3,    24,
      26,    33,    34,    49,    50,    35,    37,    51,    53,    62,
      59,    75,    77,    74,    74,   130,   130,    28,    74,    91,
     107,   160,   171,   172,   174,   153,    72,   145,   198,   198,
      72,   108,    48,   114,   197,   114,   197,    47,    49,   112,
      74,    39,   115,    39,   115,   198,    74,    14,    29,   184,
     185,    74,    16,   198,    74,    74,    16,    20,    39,    56,
     115,   198,   198,    16,    39,    56,    82,    85,   115,   191,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,    20,    39,   115,   191,    39,   115,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,    18,    71,   132,   149,   132,    27,    82,    18,
      33,    72,   145,    72,   145,    82,   115,    47,    47,    71,
     111,   114,    39,   150,   198,     6,    72,   114,   114,    72,
      72,   198,   204,   198,   205,   206,   207,   208,   209,   209,
     210,   210,   210,   210,   211,   211,   211,   212,   212,   213,
     213,   213,    74,    74,    91,   107,    74,   198,   130,   130,
      74,    17,    18,    18,    72,    72,   198,   148,    48,   114,
     148,   114,    72,   145,    33,    47,    49,    47,    39,    39,
      72,    47,   150,    29,   185,    72,    16,    39,    56,    47,
     112,    20,    21,    39,    73,    16,    47,    39,    39,    73,
      71,    18,    71,   110,   110,   117,    74,    72,    74,    72,
      47,    82,    72,   145,    72,   145,   150,   198,   213,    72,
      72,     6,   216,    74,    17,   130,   130,    72,   173,   174,
      74,    74,   198,   198,   160,   198,    32,    39,    40,    93,
     153,   154,   155,   158,   163,   166,   168,   170,   176,    73,
     198,   125,    72,    47,    72,   145,    33,    72,   145,    47,
     150,   136,   150,   153,    72,   145,    39,   115,    39,   115,
      47,    72,   145,    47,    71,   132,    74,    74,    72,   145,
      47,    74,    72,    74,    72,   213,   216,   150,   198,   199,
     202,   153,    72,    72,   173,    72,   173,    74,    72,    47,
      17,    47,    47,    22,    73,   125,    72,   145,   125,    72,
      47,    72,    72,   145,    72,    72,    47,    39,    39,    72,
     145,    72,    72,   145,    74,    72,    72,   145,    74,    74,
     153,   153,    72,   153,    72,    72,   173,   153,    74,   171,
     172,   154,   198,   198,   153,   125,    72,   125,    72,   145,
      72,   150,    72,   145,    47,    72,    72,    74,    74,    72,
     153,   153,   153,    72,    74,   198,    74,    17,    72,    72,
     125,   125,    72,    72,    72,   145,    74,   153,    72,   173,
      74,    74,   198,   198,   154,   154,   125,    72,   154,    72,
      72,   173,    72,   173,    74,    72,    22,   154,   154,    72,
     154,    72,    72,   173,   154,   154,   154,   154,   154,    72,
     154
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    97,    97,    97,    97,    97,    97,
      98,    99,    99,   100,   100,   100,   100,   101,   102,   103,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   108,
     109,   109,   110,   110,   111,   112,   112,   113,   114,   114,
     115,   116,   116,   117,   117,   118,   118,   118,   119,   119,
     120,   120,   121,   121,   121,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   127,   127,   127,   128,
     128,   128,   129,   129,   130,   130,   131,   131,   131,   131,
     132,   132,   133,   133,   133,   133,   134,   134,   135,   135,
     136,   136,   136,   136,   136,   136,   137,   138,   138,   139,
     140,   141,   141,   141,   141,   141,   141,   141,   141,   142,
     142,   143,   143,   143,   143,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   145,   145,   146,
     147,   147,   147,   147,   148,   148,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   152,   152,   152,   153,
     153,   153,   153,   153,   153,   154,   154,   154,   154,   154,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   156,   157,   158,   159,   160,   160,   160,   160,   160,
     160,   160,   161,   162,   163,   164,   164,   165,   166,   167,
     167,   168,   168,   169,   169,   169,   169,   169,   169,   169,
     169,   170,   170,   170,   170,   170,   170,   170,   170,   171,
     171,   172,   172,   172,   172,   173,   174,   174,   175,   176,
     177,   177,   178,   179,   179,   180,   180,   181,   182,   183,
     183,   183,   184,   184,   185,   186,   186,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   188,   188,   188,
     188,   188,   188,   188,   189,   189,   189,   189,   189,   190,
     190,   190,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   192,   192,
     192,   193,   193,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   196,   196,   196,   196,   196,   196,   197,   197,   198,
     198,   199,   199,   199,   199,   199,   199,   200,   200,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   202,   202,   202,   203,   203,
     204,   204,   205,   205,   206,   206,   207,   207,   208,   208,
     208,   209,   209,   209,   209,   209,   210,   210,   210,   210,
     211,   211,   211,   212,   212,   212,   212,   213,   213,   213,
     213,   213,   214,   215,   216,   216,   216,   216,   217,   217,
     217,   217,   218,   218,   218,   218,   219,   220
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     2,     2,     3,
       2,     2,     1,     1,     1,     1,     1,     3,     5,     6,
       6,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     2,
       3,     3,     1,     1,     1,     3,     3,     1,     3,     4,
       2,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     2,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     1,     3,     4,     1,     2,
       1,     1,     3,     3,     4,     4,     1,     2,     3,     1,
       2,     3,     3,     4,     3,     4,     2,     1,     1,     2,
       2,     2,     3,     3,     4,     1,     2,     2,     3,     3,
       4,     2,     3,     3,     4,     4,     5,     5,     6,     4,
       5,     5,     6,     6,     7,     7,     8,     3,     1,     2,
       2,     3,     3,     4,     2,     3,     3,     4,     3,     1,
       2,     3,     2,     1,     3,     3,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     5,     7,     7,     3,     5,     5,     5,     1,
       1,     1,     1,     6,     7,     7,     8,     7,     8,     8,
       9,     6,     7,     7,     8,     7,     8,     8,     9,     1,
       1,     2,     3,     2,     3,     1,     3,     1,     7,     7,
       2,     3,     3,     2,     3,     2,     3,     3,     5,     3,
       4,     5,     2,     1,     5,     1,     1,     1,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     4,     3,     1,
       3,     3,     4,     5,     5,     6,     6,     7,     7,     8,
       5,     6,     6,     7,     7,     8,     8,     9,     3,     3,
       5,     4,     4,     3,     4,     5,     6,     6,     7,     5,
       6,     6,     7,     5,     6,     6,     7,     7,     8,     8,
       9,     3,     4,     3,     4,     3,     4,     3,     4,     5,
       6,     3,     4,     3,     4,     4,     4,     4,     3,     1,
       1,     5,     4,     3,     5,     4,     3,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     5,     5,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     4,     5,
       4,     5,     1,     1,     1,     1,     2,     2
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
#line 126 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);type = (yyval.item).type;}
#line 3070 "parser.tab.c"
    break;

  case 26:
#line 127 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);type = (yyval.item).type;}
#line 3076 "parser.tab.c"
    break;

  case 27:
#line 131 "parser.y"
                 {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3082 "parser.tab.c"
    break;

  case 28:
#line 132 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3088 "parser.tab.c"
    break;

  case 29:
#line 133 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3094 "parser.tab.c"
    break;

  case 30:
#line 137 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3100 "parser.tab.c"
    break;

  case 31:
#line 138 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3106 "parser.tab.c"
    break;

  case 32:
#line 142 "parser.y"
                {check_gst((yyvsp[0].item).label); strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3112 "parser.tab.c"
    break;

  case 34:
#line 147 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3118 "parser.tab.c"
    break;

  case 35:
#line 151 "parser.y"
                                {strcpy((yyval.item).label,strcat((yyvsp[-2].item).label,strcat((yyvsp[-1].item).label,(yyvsp[0].item).label)));}
#line 3124 "parser.tab.c"
    break;

  case 36:
#line 152 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3130 "parser.tab.c"
    break;

  case 38:
#line 160 "parser.y"
                                          {(yyval.item).dims = (yyvsp[-2].item).dims+1;}
#line 3136 "parser.tab.c"
    break;

  case 39:
#line 161 "parser.y"
                                        {(yyval.item).dims = 1;}
#line 3142 "parser.tab.c"
    break;

  case 48:
#line 185 "parser.y"
                                {make_class_entry((yyvsp[-1].item).label,yylineno,"00");}
#line 3148 "parser.tab.c"
    break;

  case 49:
#line 186 "parser.y"
                                            {string mod = check_class_modifiers((yyvsp[-3].item).label,(yyvsp[-1].item).label); cout<<mod<<endl; make_class_entry((yyvsp[-1].item).label,yylineno,mod);}
#line 3154 "parser.tab.c"
    break;

  case 50:
#line 190 "parser.y"
                             {strcpy((yyval.item).label,strcat((yyvsp[-1].item).label,(yyvsp[0].item).label)); modifiers = (yyval.item).label;}
#line 3160 "parser.tab.c"
    break;

  case 51:
#line 191 "parser.y"
                {strcpy((yyval.item).label,(yyvsp[0].item).label); modifiers = (yyval.item).label;}
#line 3166 "parser.tab.c"
    break;

  case 52:
#line 195 "parser.y"
            {strcpy((yyval.item).label,"0");}
#line 3172 "parser.tab.c"
    break;

  case 53:
#line 196 "parser.y"
                {strcpy((yyval.item).label,"1");}
#line 3178 "parser.tab.c"
    break;

  case 54:
#line 197 "parser.y"
                {strcpy((yyval.item).label,"2");}
#line 3184 "parser.tab.c"
    break;

  case 55:
#line 198 "parser.y"
                {strcpy((yyval.item).label,"3");}
#line 3190 "parser.tab.c"
    break;

  case 72:
#line 239 "parser.y"
                                        {type.clear();}
#line 3196 "parser.tab.c"
    break;

  case 73:
#line 240 "parser.y"
                                                        {modifiers.clear();type.clear();}
#line 3202 "parser.tab.c"
    break;

  case 76:
#line 249 "parser.y"
                                        {string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); make_entry((yyvsp[-2].item).label,type,yylineno,x);}
#line 3208 "parser.tab.c"
    break;

  case 77:
#line 250 "parser.y"
                                                {string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); vector<int> v((yyvsp[-2].item).dims,0); make_array_entry((yyvsp[-3].item).label,type,yylineno,v,x);}
#line 3214 "parser.tab.c"
    break;

  case 78:
#line 251 "parser.y"
                {string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); make_entry((yyvsp[0].item).label,type,yylineno,x);}
#line 3220 "parser.tab.c"
    break;

  case 79:
#line 252 "parser.y"
                        {string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); vector<int> v((yyvsp[0].item).dims,0); make_array_entry((yyvsp[-1].item).label,type,yylineno,v,x);}
#line 3226 "parser.tab.c"
    break;

  case 82:
#line 261 "parser.y"
                                        {make_func_entry((yyvsp[-1].item).label,"void",arguments,yylineno,"0000",(yyvsp[-1].item).dims); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}
#line 3232 "parser.tab.c"
    break;

  case 83:
#line 262 "parser.y"
                                        {make_func_entry((yyvsp[-1].item).label,(yyvsp[-2].item).type,arguments,yylineno,"0000",(yyvsp[-1].item).dims); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}
#line 3238 "parser.tab.c"
    break;

  case 84:
#line 263 "parser.y"
                                                   {string x = check_method_modifiers((yyvsp[-3].item).label); make_func_entry((yyvsp[-1].item).label,"void",arguments,yylineno,x,(yyvsp[-2].item).dims); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}
#line 3244 "parser.tab.c"
    break;

  case 85:
#line 264 "parser.y"
                                                  {string x = check_method_modifiers((yyvsp[-3].item).label); make_func_entry((yyvsp[-1].item).label,(yyvsp[-2].item).type,arguments,yylineno,x,(yyvsp[-2].item).dims); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}
#line 3250 "parser.tab.c"
    break;

  case 86:
#line 268 "parser.y"
            {strcpy((yyval.item).label,(yyvsp[0].item).label); (yyval.item).dims = 0;}
#line 3256 "parser.tab.c"
    break;

  case 87:
#line 269 "parser.y"
                        {strcpy((yyval.item).label,(yyvsp[-1].item).label); (yyval.item).dims = (yyvsp[0].item).dims;}
#line 3262 "parser.tab.c"
    break;

  case 90:
#line 278 "parser.y"
                    {arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-1].item).type,0,0,0));}
#line 3268 "parser.tab.c"
    break;

  case 91:
#line 279 "parser.y"
                                        {arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-1].item).type,0,0,1));}
#line 3274 "parser.tab.c"
    break;

  case 92:
#line 280 "parser.y"
                                {arguments.push_back(make_tuple((yyvsp[-1].item).label,(yyvsp[-2].item).type,(yyvsp[0].item).dims,0,0));}
#line 3280 "parser.tab.c"
    break;

  case 93:
#line 281 "parser.y"
                                        {arguments.push_back(make_tuple((yyvsp[-1].item).label,(yyvsp[-3].item).type,0,0,0));}
#line 3286 "parser.tab.c"
    break;

  case 94:
#line 282 "parser.y"
                                        {arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-2].item).type,0,1,0));}
#line 3292 "parser.tab.c"
    break;

  case 95:
#line 283 "parser.y"
                                                {arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-2].item).type,0,1,1));}
#line 3298 "parser.tab.c"
    break;

  case 146:
#line 382 "parser.y"
                                                {temp.clear();}
#line 3304 "parser.tab.c"
    break;

  case 147:
#line 383 "parser.y"
                                                {temp.clear();}
#line 3310 "parser.tab.c"
    break;


#line 3314 "parser.tab.c"

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
#line 860 "parser.y"


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
