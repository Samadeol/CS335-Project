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
#define YYLAST   5253

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  127
/* YYNRULES -- Number of rules.  */
#define YYNRULES  419
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  819

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
     212,   213,   217,   218,   222,   223,   227,   228,   229,   230,
     234,   235,   236,   240,   241,   245,   246,   250,   251,   252,
     253,   257,   258,   262,   263,   264,   265,   269,   270,   274,
     275,   279,   280,   281,   282,   283,   284,   288,   292,   293,
     297,   301,   305,   306,   307,   308,   309,   310,   311,   312,
     316,   317,   321,   322,   323,   324,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   343,   344,
     348,   352,   353,   354,   355,   359,   360,   361,   362,   366,
     367,   371,   372,   376,   377,   381,   382,   383,   384,   385,
     389,   390,   391,   392,   393,   394,   398,   399,   400,   401,
     402,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   420,   424,   428,   432,   436,   437,   438,   439,
     440,   441,   442,   445,   449,   453,   457,   463,   464,   468,
     472,   476,   477,   481,   482,   486,   487,   488,   489,   490,
     491,   492,   493,   497,   498,   499,   500,   501,   502,   503,
     504,   508,   509,   513,   514,   515,   516,   520,   524,   525,
     529,   533,   537,   538,   542,   546,   547,   551,   552,   556,
     560,   564,   565,   566,   570,   571,   575,   579,   580,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   597,
     598,   599,   600,   601,   602,   603,   607,   608,   609,   610,
     611,   615,   616,   617,   621,   622,   623,   624,   625,   626,
     627,   628,   629,   630,   631,   632,   633,   634,   635,   636,
     640,   641,   642,   646,   647,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   685,   686,   687,   688,   689,   690,   694,
     695,   699,   700,   704,   705,   706,   707,   708,   709,   713,
     714,   718,   719,   720,   721,   722,   723,   724,   725,   726,
     727,   728,   729,   730,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,   741,   742,   743,   744,   745,   746,
     747,   748,   749,   750,   751,   752,   753,   757,   758,   759,
     763,   764,   768,   769,   773,   774,   778,   779,   783,   784,
     788,   789,   790,   794,   795,   796,   797,   798,   802,   803,
     804,   805,   809,   810,   811,   815,   816,   817,   818,   822,
     823,   824,   825,   826,   830,   834,   838,   839,   840,   841,
     845,   846,   847,   848,   852,   853,   854,   855,   859,   863
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
  "IfThenElseStatementStart", "IfThenElseStatementNoShortIf",
  "AssertStatement", "WhileStatement", "WhileStatementNoShortIf",
  "ForStatement", "ForStatementNoShortIf", "BasicForStatement",
  "BasicForStatementNoShortIf", "ForInit", "LocalVariableDeclaration",
  "ForUpdate", "StatementExpressionList", "EnhancedForStatement",
  "EnhancedForStatementNoShortIf", "BreakStatement", "YieldStatement",
  "ContinueStatement", "ReturnStatement", "ThrowStatement",
  "SynchronizedStatement", "TryStatement", "Catches", "CatchClause",
  "Primary", "PrimaryNoNewArray", "Literal", "ClassLiteral",
  "ClassInstanceCreationExpression",
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

#define YYPACT_NINF (-588)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-418)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     399,   -13,  -588,   244,    93,   104,  -588,  -588,  -588,   150,
    -588,   445,   445,  -588,  -588,  -588,  -588,  -588,   277,  -588,
    -588,   341,  -588,  -588,     8,     8,  -588,   104,    37,    13,
     149,  -588,   445,   277,  -588,   277,  -588,   182,   189,  -588,
     794,  -588,  -588,   213,   122,  -588,   249,  -588,   263,   277,
       8,    13,  -588,  -588,   270,  -588,  2133,  -588,  -588,   274,
    -588,   329,   340,   387,  -588,  -588,  -588,   149,  -588,   327,
     329,  1811,  -588,  -588,  -588,  -588,  -588,  -588,   338,   356,
    -588,   202,  -588,   372,   486,  -588,  -588,   181,  4619,  -588,
      -1,  -588,   322,    49,  -588,   402,    23,   454,  -588,  4619,
    4683,   302,  -588,  4683,  2891,  -588,  -588,  -588,   352,   487,
    -588,  -588,  4619,   274,   424,   508,   506,  4619,   424,   373,
     535,  2692,  -588,  2233,  -588,  -588,  -588,  -588,  -588,  -588,
     497,  -588,  -588,   554,  -588,  -588,  -588,  -588,  -588,  -588,
    -588,  -588,  -588,  -588,  -588,  -588,   617,   557,  -588,  -588,
      18,  -588,   541,   558,    28,  -588,  -588,  -588,  -588,  -588,
     490,   547,   567,  -588,   270,   364,   387,   469,    12,  -588,
     364,   542,   575,   329,   340,   329,   356,   356,  -588,  -588,
    1982,  -588,   590,  -588,   559,   569,  -588,   616,  -588,   492,
     336,  -588,    62,   102,  -588,  4683,   200,  1749,  4683,  4683,
    4683,   373,   535,  -588,  -588,    17,  -588,  -588,  -588,  -588,
      15,   652,   651,   595,   658,   606,   564,   515,   290,   405,
    -588,  -588,  -588,  -588,  -588,   490,  -588,  -588,   588,  -588,
     589,  -588,   424,   424,  4742,  2595,  2955,  4619,   593,   619,
    4619,   382,  -588,  -588,  -588,   285,   622,   622,   377,   104,
    -588,  -588,   597,    11,    19,  4619,   598,   500,   280,    30,
     657,  4619,   600,    33,   659,   403,   481,  4619,  4619,   128,
    4619,  4619,  4619,  3019,  4619,  4619,  4619,  4619,  4619,  4619,
    4619,   408,  -588,  -588,  -588,  2595,   560,   416,  4619,  4619,
    4619,  4619,  4619,  4619,  4619,  4619,  4619,  4619,  4619,  4619,
    4619,  4619,  4619,  4619,  4619,  4619,  4619,  4619,  4619,  4619,
    4619,  4619,  4619,  -588,  -588,  -588,  -588,  -588,   575,  3083,
     284,   424,  -588,  -588,  -588,   603,   364,    51,   364,   356,
    -588,  -588,  -588,   384,   631,  5175,    54,  2331,  2419,   104,
     661,  -588,  -588,  -588,   641,  -588,   119,   387,   642,    75,
    -588,  -588,  3147,   676,   278,  1126,   115,   612,  -588,  -588,
    -588,  4619,  -588,  4683,  4619,  4683,  4683,  4683,  4683,  4683,
    4683,  4683,  4683,  4683,  4683,  4683,  4683,  4683,  4683,  4683,
    4683,  4683,  4683,  -588,  -588,    71,    79,   110,  3211,   424,
     424,  -588,   613,   671,   673,  -588,  -588,   116,  -588,   620,
    -588,   278,    39,   387,  -588,   514,  -588,  -588,  3019,   429,
     645,   429,   645,  3275,   664,   456,  -588,   647,   660,  -588,
     667,   635,  -588,   662,   274,   504,  -588,  -588,  -588,   638,
    -588,  -588,  -588,   695,  -588,  -588,   308,  -588,  -588,  -588,
     665,   459,   633,  -588,   674,  -588,  -588,  -588,  -588,   646,
    -588,  -588,  -588,  -588,  -588,  -588,  -588,   698,  -588,   668,
     679,  -588,  -588,   681,   650,  -588,  -588,  -588,  -588,  -588,
    -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,
    -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  2763,
    -588,  -588,  -588,  3083,  -588,  -588,  -588,  -588,  -588,  -588,
    3339,  3403,   175,   677,   682,  -588,  2507,  -588,  -588,   104,
    -588,   387,   687,   575,  -588,  -588,  -588,  -588,  3147,  4683,
     288,   339,   722,  1413,   656,   652,   714,   651,   595,   658,
     606,   564,   564,   515,   515,   515,   515,   290,   290,   290,
     405,   405,  -588,  -588,  -588,  -588,  -588,   424,   424,   833,
     663,   715,   715,  3467,  4619,  5112,  4619,  -588,  2679,   336,
     336,   285,  -588,   672,  -588,  3019,   575,  -588,   575,     8,
     117,   689,  3531,   705,  3595,   703,  -588,   274,    75,  -588,
     274,  -588,  2595,  -588,  -588,  -588,  3659,   377,   518,   526,
     704,  -588,  -588,  3723,   710,  -588,  -588,   688,  -588,  -588,
     238,  -588,   684,   139,   690,   144,   438,   -11,  3787,  3851,
    -588,  -588,   575,  -588,  -588,  -588,  -588,  4683,  1413,  3147,
    -588,  -588,  4619,   715,   715,  2595,   691,   673,  4856,  4878,
     693,   697,  -588,  -588,   723,   113,   724,  -588,  -588,   740,
    -588,   752,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,
    -588,   702,  -588,     8,  3915,     8,   146,   731,  -588,   147,
    3979,  -588,   707,  -588,  -588,  -588,   158,   734,   737,  -588,
     743,  4043,  -588,   165,  4107,  -588,  2827,  -588,  -588,   709,
    -588,   711,  4171,   739,   713,   167,   721,   174,  -588,  -588,
    -588,  -588,  -588,  -588,  -588,  2595,  2595,   712,  2595,   717,
    4934,  2595,  4800,  2679,  4619,  2679,  -588,  -588,     8,   176,
    -588,     8,  4235,  -588,  -588,   177,   274,  -588,  4299,   749,
    -588,  -588,   214,  -588,  -588,   224,  -588,  -588,  -588,  -588,
     727,   232,  4363,  -588,   733,  -588,   741,  -588,  -588,  2595,
    -588,  2595,  2595,   725,  -588,  4427,   742,   781,  -588,   746,
    -588,  -588,     8,  -588,     8,   234,  -588,  -588,  -588,   240,
    4491,  -588,  -588,  -588,   747,   750,   246,  -588,  -588,  -588,
    -588,  -588,  2595,  4956,   754,  4555,  4619,  2679,  -588,  -588,
       8,  -588,  -588,   258,  -588,  -588,   756,  -588,  2679,   759,
    5012,  5034,   760,   763,  -588,  -588,  -588,  -588,  -588,  2679,
    2679,   765,  2679,   769,  5090,  2679,  -588,  -588,  2679,  -588,
    2679,  2679,   770,  -588,  -588,  -588,  -588,  2679,  -588
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,    54,     0,     0,     0,    53,    52,    55,     0,
       2,     6,     4,    12,    13,    14,    15,    16,     3,    22,
      23,     0,    51,    24,     0,     0,    36,     0,     0,   131,
      10,     1,     8,     7,    11,     5,    21,     0,     0,    50,
       0,   130,    48,     0,     0,    17,     0,   132,     0,     9,
       0,   133,    28,    31,    36,    30,     0,    62,    72,    55,
      29,     0,     0,    25,    27,    26,    32,    34,    33,     0,
       0,     0,    65,    66,    70,    71,    67,    68,     0,   106,
      69,     0,    35,     0,     0,    49,   134,     0,     0,   251,
       0,   252,     0,     0,   250,     0,    36,     0,   249,     0,
       0,     0,   255,     0,     0,   141,   172,   253,     0,     0,
     254,   241,     0,     0,     0,     0,     0,     0,     0,    25,
      26,   415,   161,     0,   144,   149,   150,   162,   151,   163,
       0,   152,   153,     0,   164,   154,   155,   191,   192,   165,
     171,   166,   167,   169,   168,   170,   414,   237,   239,   240,
     244,   261,   245,   246,   247,   248,   238,   176,   177,   178,
       0,   179,   180,   100,     0,     0,    87,    79,     0,    76,
       0,     0,    37,     0,     0,     0,   108,   102,    63,    64,
       0,   101,     0,   107,    35,     0,    18,     0,    56,     0,
       0,   110,     0,     0,    90,     0,    36,     0,     0,     0,
       0,     0,     0,   244,   247,     0,   321,   322,   330,   329,
     367,   370,   372,   374,   376,   378,   380,   383,   388,   392,
     395,   399,   400,   403,   409,   406,   416,   417,     0,   222,
       0,   225,     0,     0,     0,     0,     0,     0,     0,    36,
       0,   415,   245,   246,   405,     0,     0,     0,    34,     0,
     404,   227,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   142,   143,   175,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   419,   418,    99,    83,    98,    88,     0,
      80,     0,    73,    84,    39,     0,     0,     0,     0,   104,
     109,   103,   112,     0,   241,    34,     0,     0,     0,     0,
      97,    19,    20,    59,     0,    57,     0,    91,     0,     0,
     111,   408,     0,     0,    25,   415,     0,     0,   402,   401,
     407,     0,   187,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   223,   226,     0,     0,     0,     0,     0,
       0,   219,     0,   212,   211,   173,   285,     0,   129,     0,
     243,     0,    47,     0,    43,     0,    42,    44,     0,     0,
     313,     0,   315,     0,     0,     0,   228,   281,     0,   309,
       0,     0,   229,     0,     0,   231,   235,   146,   260,     0,
     224,   145,   258,     0,   305,   307,     0,   340,   342,   256,
      35,     0,     0,   242,     0,   262,   331,   338,   339,     0,
     337,   336,   334,   335,   341,   333,   332,     0,   184,   280,
       0,   263,   303,     0,     0,   352,   354,   343,   350,   351,
     349,   348,   346,   347,   353,   345,   344,   364,   366,   355,
     362,   363,   361,   360,   358,   359,   365,   357,   356,     0,
      77,    82,    81,     0,    75,    38,    85,    74,    86,   105,
       0,     0,     0,     0,     0,   114,     0,   113,    61,     0,
      58,    92,     0,    93,    95,    89,   325,   328,     0,     0,
      37,     0,     0,   243,     0,   371,     0,   373,   375,   377,
     379,   381,   382,   385,   387,   384,   386,   390,   391,   389,
     394,   393,   398,   397,   396,   148,   147,     0,     0,     0,
       0,   215,   213,     0,     0,     0,     0,   286,     0,     0,
       0,     0,    40,     0,   317,     0,   314,   318,   316,   264,
       0,     0,     0,     0,     0,     0,   310,     0,     0,   232,
       0,   234,     0,   259,   306,   308,     0,     0,     0,     0,
       0,   283,   257,     0,     0,   304,   284,     0,   135,   140,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
     115,    60,    94,    96,   324,   327,   410,     0,     0,     0,
     412,   188,     0,   216,   214,     0,     0,   217,     0,     0,
       0,     0,   218,   128,     0,    36,     0,   183,   185,   150,
     157,     0,   158,   159,   160,   193,   194,    45,    46,    41,
     320,     0,   265,   266,     0,   272,     0,     0,   295,     0,
       0,   230,     0,   233,   189,   287,     0,   282,     0,   311,
       0,     0,   291,     0,     0,   136,     0,   137,   120,     0,
     116,     0,     0,     0,     0,     0,     0,     0,   411,   413,
     323,   326,   369,   368,   195,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   319,   267,   268,     0,
     273,   274,     0,   296,   297,     0,     0,   288,     0,     0,
     312,   289,     0,   292,   293,     0,   138,   139,   121,   117,
       0,     0,     0,   122,     0,   118,     0,   196,   197,     0,
     199,     0,     0,     0,   220,     0,     0,   212,   174,     0,
     186,   269,   270,   275,   276,     0,   298,   236,   299,     0,
       0,   290,   294,   124,     0,     0,     0,   123,   119,   198,
     200,   201,     0,     0,     0,     0,     0,     0,   271,   277,
     278,   300,   301,     0,   125,   126,     0,   202,     0,     0,
       0,     0,     0,     0,   190,   279,   302,   127,   203,     0,
       0,     0,     0,     0,     0,     0,   204,   205,     0,   207,
       0,     0,     0,   221,   206,   208,   209,     0,   210
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -588,  -588,  -588,  -588,   802,    40,  -588,  -588,  -588,  -588,
     483,   451,   -34,   -38,  -588,    25,   -96,  1751,  -588,   -20,
    -171,  -588,   253,  -588,  -588,   330,     6,   371,  -588,  -588,
      14,  -588,   775,  -588,  -588,   -95,   528,  -478,  -588,   -46,
     653,  -342,  -132,  -153,  -588,  -588,  -588,     7,  -588,  -588,
    -112,  -588,  -588,    98,  -588,   -39,  -166,  -115,  1170,  -363,
    -537,  -588,  -588,  -588,  -588,  -230,  -588,  -588,  -533,  -588,
    -588,  -588,  -588,  -588,  -588,  -588,  -588,   145,   151,  -587,
    -231,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,
    -588,   426,  -588,  -588,  -588,  -588,   -56,  -257,   729,   930,
       0,  -588,  -588,   605,  1411,   233,  -588,   198,   235,  -588,
     491,   493,   494,   489,   498,   257,   216,   275,   279,   -90,
     254,   455,  -501,  -588,   585,   783,   839
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   118,   201,    64,   202,    66,   121,    68,   281,
     249,   405,   406,   407,    20,    21,    22,    70,   189,   340,
      41,    71,    72,    73,    74,   168,   169,   490,    75,   165,
     193,   194,   183,   316,    76,    77,    78,   166,   181,   337,
     397,    23,    24,   491,   600,   122,   123,   124,   125,   638,
     126,   127,   128,   640,   129,   130,   131,   132,   133,   642,
     134,   135,   643,   136,   644,   137,   645,   392,   393,   626,
     627,   138,   646,   139,   140,   141,   142,   143,   144,   145,
     425,   426,   146,   147,   148,   149,   203,   151,   152,   153,
     204,   155,   156,   410,   398,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     150,    80,    63,   394,   391,   247,    62,   515,   283,   336,
     244,   599,   445,   250,   338,   601,   170,   323,   119,   259,
     163,   639,   620,   263,   363,   641,    25,    39,   590,   461,
     321,    63,    80,    63,   361,   174,  -182,    62,   228,    42,
     235,   697,   699,   172,   330,   331,  -181,    79,   321,    63,
     417,   321,    34,   192,    40,    63,   154,    44,   419,   233,
     245,    52,    46,   246,    85,    65,   559,   150,   245,   321,
     236,   683,    34,   229,   257,    39,   176,   177,    79,   327,
      53,   120,   418,   420,   364,   119,   322,    52,    26,   321,
    -182,   362,  -182,    55,    65,   436,    65,   321,   444,   265,
    -181,   347,  -181,   190,   427,   351,    53,   431,   358,   359,
     360,    45,    65,   743,    26,   460,   463,   689,    65,    55,
     349,   560,    52,   154,   150,   497,   317,   326,   328,    60,
     703,   317,    29,   349,   556,   556,   503,   385,   386,   504,
     232,    53,   119,    26,   439,   545,   318,   320,   120,    26,
      31,   348,    63,   546,    55,    60,   346,   556,   511,   354,
     236,    82,   556,   192,   556,   556,   639,   440,   639,    48,
     641,   506,   641,   496,   350,   498,   556,   245,   150,   150,
     154,   265,   329,   556,   441,   556,   789,   522,   557,   653,
      60,   439,   556,    52,   556,   556,   119,   499,   727,    83,
     390,   547,   401,   801,   803,   120,   352,   403,   512,   190,
     442,   679,    53,   443,   440,    65,   681,   812,   711,   713,
      26,    50,   120,   283,   245,    55,   409,   411,    51,   150,
     717,   441,   556,    81,   154,   154,   662,   723,   320,   734,
     639,   184,   556,   508,   641,   445,   736,   236,   752,   756,
     556,   639,   556,   191,   157,   641,   676,   606,   556,   120,
     443,    60,   639,   639,   556,   639,   641,   641,   639,   641,
     404,   639,   641,   639,   639,   641,   556,   641,   641,   185,
     639,   150,   150,    26,   641,   154,   761,   317,    84,   317,
     542,   543,   544,     1,   551,   552,   762,    52,   264,   119,
     119,   570,    82,   319,   764,     2,   780,   493,   433,   677,
     158,    63,   781,   516,    52,   192,    53,    87,   786,   391,
      56,   157,     4,    27,    26,   632,   171,   513,   171,    55,
     796,   607,   325,    53,   520,   521,   325,   154,   154,    52,
     748,    26,   750,   378,     6,     7,    55,   584,    52,    63,
     519,   245,   379,   548,   402,     2,     8,    37,    53,   457,
     617,   230,   120,   120,   585,    60,    54,    53,   164,     2,
      69,    55,   253,   254,    65,    26,    46,   158,   157,   167,
      55,   520,    60,   172,   180,   579,    38,   325,   603,   605,
     566,   283,   568,   264,     6,     7,   231,    48,   391,   391,
      47,    69,   269,   -34,   253,   254,     8,    60,     6,     7,
      56,   618,    65,   611,   794,     1,    60,   668,   670,   173,
       8,   171,    86,   433,   413,   798,   414,     2,   457,   616,
     273,   500,   157,   157,   158,   171,   806,   807,   315,   809,
     175,     3,   813,   182,     4,   814,   186,   815,   816,   234,
     150,   325,   623,   624,   818,   462,   325,     5,   588,   589,
     656,     1,   659,   258,   380,   245,     6,     7,   119,    36,
     391,   394,   391,     2,   666,   489,    48,   325,     8,   614,
     381,   673,   382,   157,    36,   682,    36,     3,   158,   158,
       4,   612,   319,   150,    33,    35,   685,   687,    26,   150,
      36,   237,   150,   572,   187,   573,   154,   564,   245,   567,
     344,   159,     6,     7,   423,    49,    87,   171,   423,   188,
     434,   403,   403,   403,     8,   345,   150,   688,   260,   424,
     245,   120,   561,   580,   255,   157,   157,   435,   661,   158,
      63,   663,   709,   391,   192,   313,   289,   562,   715,   154,
     375,   290,   376,   261,   314,   154,   266,   667,   154,   722,
     391,   391,   725,   301,   291,   669,   377,   245,   302,   150,
     731,   284,   150,   150,   391,   245,   285,   292,   159,   293,
     690,   303,   154,   652,   647,   648,   404,   533,   534,   535,
     536,   158,   158,   294,   304,   295,   305,   371,   372,   459,
     755,   296,  -416,    65,   297,   288,   759,   298,   339,   245,
     306,  -416,   307,   373,   374,   324,   441,   299,   308,   300,
     766,   309,  -417,   325,   310,   154,   531,   532,   154,   154,
     369,  -417,   370,   341,   311,   159,   312,   286,   287,   150,
     150,   160,   150,   342,   150,   150,   150,   150,   783,   150,
     537,   538,   539,   588,   589,   343,   365,   540,   541,   366,
     367,   368,   383,   384,   119,   400,   236,   707,   390,   710,
     408,   416,   422,   428,   430,   432,   495,   757,   501,   509,
     510,   514,   518,   150,   523,   150,   150,   553,   554,   159,
     159,   555,   558,   565,   574,   154,   154,   571,   154,   575,
     154,   154,   154,   154,   157,   154,   576,   577,   160,   578,
     582,   583,   586,   590,   592,   593,   150,   150,   594,   591,
     595,   150,   751,   596,   608,   753,   613,   120,   619,   609,
     621,   622,   150,   321,   150,   150,   654,   628,   657,   154,
     159,   154,   154,   150,   150,   650,   150,   157,   150,   150,
     660,   671,   150,   157,   150,   150,   157,   674,   678,   675,
     158,   150,  -156,   695,   680,   160,   778,   700,   779,   701,
     702,   704,   154,   154,   705,   706,   719,   154,   712,   716,
     157,   718,   720,   728,   739,   729,   732,   733,   154,   741,
     154,   154,   159,   159,   795,   735,   760,   772,   776,   154,
     154,   763,   154,   158,   154,   154,    52,   767,   154,   158,
     154,   154,   158,    32,   649,   768,   775,   154,   777,   160,
     160,   784,     2,   157,   785,    53,   157,   157,   790,   242,
     797,   799,   242,    54,   804,   805,   158,   808,    55,   161,
      56,   810,   817,    46,    89,    52,   179,   746,    91,   494,
     356,   581,   412,   747,   525,   692,   529,   693,   527,     0,
     528,     6,     7,    94,    53,    57,   530,     0,    58,     0,
     160,     0,   239,    59,    60,     0,    98,    55,     0,   158,
      99,     0,   158,   158,     0,     0,    61,     0,   100,   101,
     102,     0,     0,   157,   157,   162,   157,   103,   157,   157,
     157,   157,     0,   157,     0,   625,   161,     0,     0,     0,
       0,     0,     0,    60,   107,   108,     0,   110,   111,     0,
       0,     0,   160,   160,   242,   115,     0,   242,   242,   242,
       0,     0,     0,     0,     0,     0,     0,   157,     0,   157,
     157,     0,     0,     0,     0,     0,     0,     0,     0,   158,
     158,     0,   158,     0,   158,   158,   158,   158,     0,   158,
       0,   159,   162,   161,     0,     0,     0,     0,     0,     0,
     157,   157,     0,     0,     0,   157,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,     0,   157,   157,
       0,     0,     0,   158,     0,   158,   158,   157,   157,     0,
     157,     0,   157,   157,   159,     0,   157,     0,   157,   157,
     159,     0,     0,   159,     0,   157,     0,   161,   161,   162,
       0,     0,     0,     0,     0,     0,   158,   158,     0,     0,
     243,   158,     0,   243,     0,     0,     0,   159,     0,     0,
       0,     0,   158,     0,   158,   158,     0,     0,     0,     0,
       0,     0,     0,   158,   158,     0,   158,     0,   158,   158,
       0,     0,   158,     0,   158,   158,     0,     0,   161,     0,
       0,   158,     0,   162,   162,     0,     0,     0,     0,     0,
     159,     0,     0,   159,   159,     0,     0,     0,     0,     0,
       0,   160,   242,     0,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,     0,     0,     0,     0,     0,     0,     0,     0,
     161,   161,     0,     0,   162,   243,     0,     0,   243,   243,
     243,   267,     0,     0,   160,     0,   268,     0,     0,     0,
     160,     0,     0,   160,     0,     0,   269,   -34,     0,   270,
     159,   159,     0,   159,     0,   159,   159,   159,   159,     0,
     159,     0,   271,     0,   272,   -34,     0,   160,     0,     0,
       0,     0,     0,     0,   273,     0,   162,   162,   274,     0,
     275,     0,     0,     0,     0,     0,   276,     0,     0,   277,
       0,     0,   278,     0,   159,     0,   159,   159,     0,     0,
       0,     0,   279,     0,   280,     0,     0,     0,     0,     0,
     160,     0,     0,   160,   160,   -34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   159,   159,     0,
       0,     0,   159,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   159,     0,   159,   159,     0,   242,     0,
       0,     0,   242,     0,   159,   159,     0,   159,     0,   159,
     159,     0,     0,   159,     0,   159,   159,     0,     0,     0,
       0,     0,   159,     0,     0,     0,     0,     0,     0,     0,
     160,   160,     0,   160,     0,   160,   160,   160,   160,   161,
     160,     0,     0,   243,     0,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   160,     0,   160,   160,     0,     0,
       0,     0,   161,     0,     0,     0,     0,     0,   161,     0,
       0,   161,     0,     0,     0,   162,   242,   242,     0,     0,
       0,   242,     0,     0,     0,     0,     0,   160,   160,     0,
       0,     0,   160,     0,     0,   161,     0,     0,     0,     0,
       0,     0,     0,   160,     0,   160,   160,     0,     0,     0,
       0,     0,     0,     0,   160,   160,     0,   160,   162,   160,
     160,     0,     0,   160,   162,   160,   160,   162,     0,     0,
       0,     0,   160,     0,     0,   395,     0,     0,   161,     0,
       0,   161,   161,     0,     0,     0,     0,     0,     0,     0,
       0,   162,     0,     0,    89,    52,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   195,     0,
       0,     0,     0,    94,    53,     0,     0,     0,     0,   243,
       0,     0,   239,   243,     0,   458,    98,    55,     0,     0,
     240,     0,     0,     0,   162,     0,     0,   162,   162,   101,
     102,     0,     0,     0,     0,     0,     0,     0,   161,   161,
       0,   161,     0,   161,   161,   161,   161,     0,   161,     0,
       0,     0,     0,    60,   107,   108,     0,   110,   111,   205,
       0,   200,     0,     0,     0,   115,     0,     0,     0,     0,
     238,     0,     0,     0,     0,   252,     0,     0,     0,     0,
       0,     0,   161,   256,   161,   161,     0,     0,   262,     0,
       0,     0,     0,     0,   162,   162,     0,   162,     0,   162,
     162,   162,   162,     0,   162,     0,     0,   243,   243,     0,
       0,     0,   243,     0,     0,   161,   161,     0,     0,     0,
     161,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,     0,   161,   161,     0,     0,     0,   162,     0,
     162,   162,   161,   161,     0,   161,     0,   161,   161,     0,
       0,   161,     0,   161,   161,     0,     0,     0,     0,     0,
     161,     0,     0,     0,     0,     0,     0,     0,   357,     0,
       0,   162,   162,     0,     0,     0,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   162,     0,   162,
     162,     0,     0,     0,     0,     0,     0,     0,   162,   162,
       0,   162,     0,   162,   162,     0,     0,   162,   399,   162,
     162,   357,     0,     0,     0,     0,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   421,     0,     0,     0,
       0,     0,   429,     0,     0,     0,     0,     0,   437,   438,
       0,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,     0,     0,     0,     0,     0,     0,     0,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,     0,     0,     0,     0,   637,     0,
     492,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   664,     0,    28,     0,    30,     0,     0,     0,
      89,    52,     0,   517,    91,     0,     0,     0,     0,     0,
       0,     0,   524,     0,   195,   526,     0,   190,    43,    94,
      53,     0,     0,     0,     0,     0,     0,     0,   196,     0,
       0,    67,    98,    55,     0,   694,   197,     0,     0,   550,
       0,     0,   198,     0,   100,   101,   102,     0,     0,     0,
       0,   199,     0,   103,     0,     0,     0,     0,     0,   563,
      67,   353,    67,    52,     0,     0,     0,     0,     0,    60,
     107,   108,     0,   110,   111,     0,     0,   200,    67,     2,
       0,   115,    53,     0,    67,     0,     0,     0,     0,     0,
      54,   241,   248,     0,   241,    55,     0,    56,     0,     0,
      46,     0,     0,     0,     0,   737,   738,     0,   740,     0,
       0,   744,     0,   395,     0,   458,     0,     0,     6,     7,
       0,     0,   178,     0,     0,    58,     0,     0,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
     492,     0,     0,    61,   492,     0,     0,     0,     0,   769,
       0,   770,   771,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   615,
       0,   335,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,   787,     0,     0,     0,   241,   664,   355,   241,
     241,   241,     0,     0,     0,     0,     0,     0,   694,     0,
       0,     0,     0,     0,   630,   631,     0,   633,     0,   737,
     738,     0,   740,     0,     0,   744,   651,     0,   769,     0,
     770,   771,     0,     0,     0,     0,     0,   787,     0,    88,
       0,   355,     0,    89,    52,    90,    67,    91,     0,     0,
     415,    92,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,    94,    53,    95,     0,     0,     0,     0,     0,
       0,    96,    97,     0,     0,    98,    55,     0,    56,    99,
     691,   245,     0,     0,     0,     0,     0,   100,   101,   102,
       0,     0,     0,     0,     0,     0,   103,     0,     0,     0,
       0,     0,   104,   332,     0,     0,   106,     0,     0,     0,
       0,     0,    60,   107,   333,   109,   110,   334,   112,     0,
       0,     0,   113,   114,   115,   116,   117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   492,     0,     0,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   241,   749,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,     0,     0,     0,     0,    67,     0,
      88,     0,     0,     0,    89,    52,    90,     0,    91,     0,
       0,     0,    92,     0,     0,     0,   774,     0,     0,     0,
       0,    93,     0,    94,    53,    95,     0,     0,     0,     0,
       0,     0,    96,    97,     0,     0,    98,    55,     0,    56,
      99,     0,     0,     0,     0,     0,   792,   793,   100,   101,
     102,     0,   587,     0,     0,     0,     0,   103,     0,     0,
       0,     0,     0,   104,   105,     0,     0,   106,     0,     0,
       0,     0,     0,    60,   107,   108,   109,   110,   111,   112,
       0,     0,     0,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,    89,    52,    90,     0,    91,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
      67,    93,     0,    94,    53,    95,     0,     0,     0,     0,
     241,     0,    96,    97,   241,     0,    98,    55,     0,    56,
      99,     0,     0,     0,     0,     0,     0,     0,   100,   101,
     102,     0,     0,     0,     0,     0,     0,   103,     0,     0,
       0,     0,     0,   104,   282,     0,     0,   106,     0,     0,
      67,    67,    67,    60,   107,   108,   109,   110,   111,   112,
       0,     0,     0,   113,   114,   115,   116,   117,     0,    67,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,    89,    52,    90,     0,    91,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,    94,    53,    95,     0,     0,     0,     0,   241,   241,
      96,    97,     0,   241,    98,    55,     0,    56,    99,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,     0,
       0,     0,     0,     0,     0,   103,     0,     0,     0,     0,
       0,   104,   505,     0,     0,   106,     0,     0,     0,     0,
       0,    60,   107,   108,   109,   110,   111,   112,     0,     0,
       0,   113,   114,   115,   116,   117,    88,     0,     0,     0,
      89,    52,    90,     0,    91,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,    94,
      53,    95,     0,     0,     0,     0,     0,     0,    96,    97,
       0,     0,    98,    55,     0,    56,    99,     0,     0,     0,
       0,     0,     0,     0,   100,   101,   102,     0,     0,     0,
       0,     0,     0,   103,     0,     0,     0,     0,     0,   104,
     507,     0,     0,   106,     0,     0,     0,     0,     0,    60,
     107,   108,   109,   110,   111,   112,     0,     0,     0,   113,
     114,   115,   116,   117,    88,     0,     0,     0,    89,    52,
      90,     0,    91,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,    94,    53,    95,
       0,     0,     0,     0,     0,     0,    96,    97,     0,     0,
      98,    55,     0,    56,    99,     0,     0,     0,     0,     0,
       0,     0,   100,   101,   102,     0,     0,     0,     0,     0,
       0,   103,     0,     0,     0,     0,     0,   104,   610,     0,
       0,   106,     0,     0,     0,     0,     0,    60,   107,   108,
     109,   110,   111,   112,     0,     0,     0,   113,   114,   115,
     116,   117,    88,     0,     0,     0,    89,    52,    90,     0,
      91,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    53,    95,     0,     0,
       0,     0,     0,     0,    96,    97,     0,     0,    98,    55,
       0,    56,    99,     0,     0,     0,     0,     0,     0,     0,
     100,   101,   102,     0,     0,     0,     0,     0,     0,   103,
       0,     0,     0,     0,     0,   104,     0,     0,     0,   106,
       0,     0,     0,     0,     0,    60,   107,   108,   109,   110,
     111,   112,     0,     0,     0,   113,    88,   115,   116,   117,
      89,    52,    90,     0,    91,     0,     0,   267,    92,     0,
       0,     0,   268,     0,     0,     0,     0,     0,     0,    94,
      53,   634,   269,   -34,     0,   270,     0,     0,   635,    97,
       0,     0,    98,    55,     0,    56,    99,     0,   271,     0,
     272,   -34,     0,     0,   100,   101,   102,     0,     0,     0,
     273,     0,     0,   103,   274,     0,   275,     0,     0,   104,
       0,     0,   276,   106,     0,   277,     0,     0,   278,    60,
     107,   108,   109,   110,   111,   112,     0,     0,   279,   113,
     280,   115,   636,   117,    89,    52,     0,     0,    91,     0,
       0,   597,     0,     0,     0,     0,     0,     0,   195,     0,
       0,     0,     0,    94,    53,     0,     0,     0,     0,     0,
       0,     0,   196,     0,     0,     0,    98,    55,     0,   489,
     197,     0,     0,     0,     0,     0,   198,     0,   100,   101,
     102,     0,     0,     0,     0,   199,     0,   103,     0,     0,
       0,     0,     0,     0,   598,     0,     0,     0,    89,    52,
       0,     0,    91,    60,   107,   108,     0,   110,   111,     0,
       0,   200,   195,     0,     0,   115,     0,    94,    53,     0,
       0,     0,     0,     0,     0,     0,   196,     0,     0,     0,
      98,    55,     0,   489,   197,     0,     0,     0,     0,     0,
     198,     0,   100,   101,   102,     0,     0,     0,     0,   199,
       0,   103,     0,     0,     0,     0,     0,     0,   726,     0,
       0,     0,    89,    52,     0,     0,    91,    60,   107,   108,
       0,   110,   111,     0,     0,   200,   195,     0,     0,   115,
       0,    94,    53,     0,     0,     0,     0,     0,     0,     0,
     196,     0,     0,     0,    98,    55,     0,     0,   197,     0,
       0,     0,     0,     0,   198,     0,   100,   101,   102,     0,
       0,     0,     0,   199,     0,   103,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   251,    89,    52,     0,     0,
      91,    60,   107,   108,     0,   110,   111,     0,     0,   200,
     195,     0,     0,   115,     0,    94,    53,     0,     0,     0,
       0,     0,     0,     0,   196,     0,     0,     0,    98,    55,
       0,     0,   197,     0,     0,     0,     0,     0,   198,     0,
     100,   101,   102,     0,     0,     0,     0,   199,     0,   103,
       0,     0,     0,     0,     0,     0,     0,   396,     0,     0,
      89,    52,     0,     0,    91,    60,   107,   108,     0,   110,
     111,     0,     0,   200,   195,     0,     0,   115,     0,    94,
      53,     0,     0,     0,     0,     0,     0,     0,   196,     0,
       0,     0,    98,    55,     0,     0,   197,     0,     0,     0,
       0,     0,   198,     0,   100,   101,   102,     0,     0,     0,
       0,   199,     0,   103,     0,     0,     0,     0,     0,     0,
       0,     0,   324,     0,    89,    52,     0,     0,    91,    60,
     107,   108,     0,   110,   111,     0,     0,   200,   195,     0,
       0,   115,     0,    94,    53,     0,     0,     0,     0,     0,
       0,     0,   196,     0,     0,     0,    98,    55,     0,   489,
     197,     0,     0,     0,     0,     0,   198,     0,   100,   101,
     102,     0,     0,     0,     0,   199,     0,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,    52,
       0,     0,    91,    60,   107,   108,     0,   110,   111,     0,
       0,   200,   195,     0,     0,   115,     0,    94,    53,     0,
       0,     0,     0,     0,     0,     0,   196,     0,     0,     0,
      98,    55,     0,    56,   197,     0,     0,     0,     0,     0,
     198,     0,   100,   101,   102,     0,     0,     0,     0,   199,
       0,   103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,    52,     0,     0,    91,    60,   107,   108,
       0,   110,   111,     0,     0,   200,   195,     0,     0,   115,
       0,    94,    53,     0,     0,     0,     0,     0,     0,     0,
     196,     0,     0,     0,    98,    55,     0,     0,   197,     0,
       0,     0,     0,     0,   198,     0,   100,   101,   102,     0,
       0,     0,     0,   199,     0,   103,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   549,    89,    52,     0,     0,
      91,    60,   107,   108,     0,   110,   111,     0,     0,   200,
     195,     0,     0,   115,     0,    94,    53,     0,     0,     0,
       0,     0,     0,     0,   196,     0,     0,     0,    98,    55,
       0,     0,   197,     0,     0,     0,     0,     0,   198,     0,
     100,   101,   102,     0,     0,     0,     0,   199,     0,   103,
       0,     0,     0,     0,     0,     0,     0,   569,     0,     0,
      89,    52,     0,     0,    91,    60,   107,   108,     0,   110,
     111,     0,     0,   200,   195,     0,     0,   115,     0,    94,
      53,     0,     0,     0,     0,     0,     0,     0,   196,     0,
       0,     0,    98,    55,     0,     0,   197,     0,     0,     0,
       0,     0,   198,     0,   100,   101,   102,     0,     0,     0,
       0,   199,     0,   103,     0,     0,     0,     0,     0,     0,
       0,   602,     0,     0,    89,    52,     0,     0,    91,    60,
     107,   108,     0,   110,   111,     0,     0,   200,   195,     0,
       0,   115,     0,    94,    53,     0,     0,     0,     0,     0,
       0,     0,   196,     0,     0,     0,    98,    55,     0,     0,
     197,     0,     0,     0,     0,     0,   198,     0,   100,   101,
     102,     0,     0,     0,     0,   199,     0,   103,     0,     0,
       0,     0,     0,     0,     0,   604,     0,     0,    89,    52,
       0,     0,    91,    60,   107,   108,     0,   110,   111,     0,
       0,   200,   195,     0,     0,   115,     0,    94,    53,     0,
       0,     0,     0,     0,     0,     0,   196,     0,     0,     0,
      98,    55,     0,     0,   197,     0,     0,     0,     0,     0,
     198,     0,   100,   101,   102,     0,     0,     0,     0,   199,
       0,   103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   629,    89,    52,     0,     0,    91,    60,   107,   108,
       0,   110,   111,     0,     0,   200,   195,     0,     0,   115,
       0,    94,    53,     0,     0,     0,     0,     0,     0,     0,
     196,     0,     0,     0,    98,    55,     0,     0,   197,     0,
       0,     0,     0,     0,   198,     0,   100,   101,   102,     0,
       0,     0,     0,   199,     0,   103,     0,     0,     0,     0,
       0,     0,     0,   655,     0,     0,    89,    52,     0,     0,
      91,    60,   107,   108,     0,   110,   111,     0,     0,   200,
     195,     0,     0,   115,     0,    94,    53,     0,     0,     0,
       0,     0,     0,     0,   196,     0,     0,     0,    98,    55,
       0,     0,   197,     0,     0,     0,     0,     0,   198,     0,
     100,   101,   102,     0,     0,     0,     0,   199,     0,   103,
       0,     0,     0,     0,     0,     0,     0,   658,     0,     0,
      89,    52,     0,     0,    91,    60,   107,   108,     0,   110,
     111,     0,     0,   200,   195,     0,     0,   115,     0,    94,
      53,     0,     0,     0,     0,     0,     0,     0,   196,     0,
       0,     0,    98,    55,     0,     0,   197,     0,     0,     0,
       0,     0,   198,     0,   100,   101,   102,     0,     0,     0,
       0,   199,     0,   103,     0,     0,     0,     0,     0,     0,
       0,   665,     0,     0,    89,    52,     0,     0,    91,    60,
     107,   108,     0,   110,   111,     0,     0,   200,   195,     0,
       0,   115,     0,    94,    53,     0,     0,     0,     0,     0,
       0,     0,   196,     0,     0,     0,    98,    55,     0,     0,
     197,     0,     0,     0,     0,     0,   198,     0,   100,   101,
     102,     0,     0,     0,     0,   199,     0,   103,     0,     0,
       0,     0,     0,     0,     0,   672,     0,     0,    89,    52,
       0,     0,    91,    60,   107,   108,     0,   110,   111,     0,
       0,   200,   195,     0,     0,   115,     0,    94,    53,     0,
       0,     0,     0,     0,     0,     0,   196,     0,     0,     0,
      98,    55,     0,     0,   197,     0,     0,     0,     0,     0,
     198,     0,   100,   101,   102,     0,     0,     0,     0,   199,
       0,   103,     0,     0,     0,     0,     0,     0,     0,   684,
       0,     0,    89,    52,     0,     0,    91,    60,   107,   108,
       0,   110,   111,     0,     0,   200,   195,     0,     0,   115,
       0,    94,    53,     0,     0,     0,     0,     0,     0,     0,
     196,     0,     0,     0,    98,    55,     0,     0,   197,     0,
       0,     0,     0,     0,   198,     0,   100,   101,   102,     0,
       0,     0,     0,   199,     0,   103,     0,     0,     0,     0,
       0,     0,     0,   686,     0,     0,    89,    52,     0,     0,
      91,    60,   107,   108,     0,   110,   111,     0,     0,   200,
     195,     0,     0,   115,     0,    94,    53,     0,     0,     0,
       0,     0,     0,     0,   196,     0,     0,     0,    98,    55,
       0,     0,   197,     0,     0,     0,     0,     0,   198,     0,
     100,   101,   102,     0,     0,     0,     0,   199,     0,   103,
       0,     0,     0,     0,     0,     0,     0,   708,     0,     0,
      89,    52,     0,     0,    91,    60,   107,   108,     0,   110,
     111,     0,     0,   200,   195,     0,     0,   115,     0,    94,
      53,     0,     0,     0,     0,     0,     0,     0,   196,     0,
       0,     0,    98,    55,     0,     0,   197,     0,     0,     0,
       0,     0,   198,     0,   100,   101,   102,     0,     0,     0,
       0,   199,     0,   103,     0,     0,     0,     0,     0,     0,
       0,   714,     0,     0,    89,    52,     0,     0,    91,    60,
     107,   108,     0,   110,   111,     0,     0,   200,   195,     0,
       0,   115,     0,    94,    53,     0,     0,     0,     0,     0,
       0,     0,   196,     0,     0,     0,    98,    55,     0,     0,
     197,     0,     0,     0,     0,     0,   198,     0,   100,   101,
     102,     0,     0,     0,     0,   199,     0,   103,     0,     0,
       0,     0,     0,     0,     0,   721,     0,     0,    89,    52,
       0,     0,    91,    60,   107,   108,     0,   110,   111,     0,
       0,   200,   195,     0,     0,   115,     0,    94,    53,     0,
       0,     0,     0,     0,     0,     0,   196,     0,     0,     0,
      98,    55,     0,     0,   197,     0,     0,     0,     0,     0,
     198,     0,   100,   101,   102,     0,     0,     0,     0,   199,
       0,   103,     0,     0,     0,     0,     0,     0,     0,   724,
       0,     0,    89,    52,     0,     0,    91,    60,   107,   108,
       0,   110,   111,     0,     0,   200,   195,     0,     0,   115,
       0,    94,    53,     0,     0,     0,     0,     0,     0,     0,
     196,     0,     0,     0,    98,    55,     0,     0,   197,     0,
       0,     0,     0,     0,   198,     0,   100,   101,   102,     0,
       0,     0,     0,   199,     0,   103,     0,     0,     0,     0,
       0,     0,     0,   730,     0,     0,    89,    52,     0,     0,
      91,    60,   107,   108,     0,   110,   111,     0,     0,   200,
     195,     0,     0,   115,     0,    94,    53,     0,     0,     0,
       0,     0,     0,     0,   196,     0,     0,     0,    98,    55,
       0,     0,   197,     0,     0,     0,     0,     0,   198,     0,
     100,   101,   102,     0,     0,     0,     0,   199,     0,   103,
       0,     0,     0,     0,     0,     0,     0,   754,     0,     0,
      89,    52,     0,     0,    91,    60,   107,   108,     0,   110,
     111,     0,     0,   200,   195,     0,     0,   115,     0,    94,
      53,     0,     0,     0,     0,     0,     0,     0,   196,     0,
       0,     0,    98,    55,     0,     0,   197,     0,     0,     0,
       0,     0,   198,     0,   100,   101,   102,     0,     0,     0,
       0,   199,     0,   103,     0,     0,     0,     0,     0,     0,
       0,   758,     0,     0,    89,    52,     0,     0,    91,    60,
     107,   108,     0,   110,   111,     0,     0,   200,   195,     0,
       0,   115,     0,    94,    53,     0,     0,     0,     0,     0,
       0,     0,   196,     0,     0,     0,    98,    55,     0,     0,
     197,     0,     0,     0,     0,     0,   198,     0,   100,   101,
     102,     0,     0,     0,     0,   199,     0,   103,     0,     0,
       0,     0,     0,     0,     0,   765,     0,     0,    89,    52,
       0,     0,    91,    60,   107,   108,     0,   110,   111,     0,
       0,   200,   195,     0,     0,   115,     0,    94,    53,     0,
       0,     0,     0,     0,     0,     0,   196,     0,     0,     0,
      98,    55,     0,     0,   197,     0,     0,     0,     0,     0,
     198,     0,   100,   101,   102,     0,     0,     0,     0,   199,
       0,   103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   773,    89,    52,     0,     0,    91,    60,   107,   108,
       0,   110,   111,     0,     0,   200,   195,     0,     0,   115,
       0,    94,    53,     0,     0,     0,     0,     0,     0,     0,
     196,     0,     0,     0,    98,    55,     0,     0,   197,     0,
       0,     0,     0,     0,   198,     0,   100,   101,   102,     0,
       0,     0,     0,   199,     0,   103,     0,     0,     0,     0,
       0,     0,     0,   782,     0,     0,    89,    52,     0,     0,
      91,    60,   107,   108,     0,   110,   111,     0,     0,   200,
     195,     0,     0,   115,     0,    94,    53,     0,     0,     0,
       0,     0,     0,     0,   196,     0,     0,     0,    98,    55,
       0,     0,   197,     0,     0,     0,     0,     0,   198,     0,
     100,   101,   102,     0,     0,     0,     0,   199,     0,   103,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   791,
      89,    52,     0,     0,    91,    60,   107,   108,     0,   110,
     111,     0,     0,   200,   195,     0,     0,   115,     0,    94,
      53,     0,     0,     0,     0,     0,     0,     0,   196,     0,
       0,     0,    98,    55,     0,     0,   197,     0,     0,     0,
       0,     0,   198,     0,   100,   101,   102,     0,     0,     0,
       0,   199,     0,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    52,     0,     0,    91,    60,
     107,   108,     0,   110,   111,     0,     0,   200,   195,     0,
       0,   115,     0,    94,    53,     0,     0,     0,     0,     0,
       0,     0,   239,     0,     0,     0,    98,    55,     0,     0,
     240,     0,     0,     0,     0,     0,   198,     0,   100,   101,
     102,     0,     0,     0,     0,   199,     0,   103,     0,     0,
       0,     0,     0,    89,    52,     0,     0,    91,     0,     0,
       0,     0,     0,    60,   107,   108,     0,   110,   111,     0,
     387,   200,    94,    53,     0,   115,     0,     0,     0,     0,
       0,   239,     0,     0,     0,    98,    55,     0,     0,    99,
       0,     0,     0,     0,     0,     0,     0,   100,   101,   102,
       0,     0,     0,     0,     0,     0,   103,     0,     0,     0,
       0,    89,    52,     0,     0,    91,   388,     0,     0,     0,
       0,     0,    60,   107,   108,     0,   110,   111,   387,     0,
      94,    53,     0,   389,   115,     0,     0,     0,     0,   239,
       0,     0,     0,    98,    55,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,   100,   101,   102,     0,     0,
       0,     0,     0,     0,   103,     0,     0,    89,    52,     0,
       0,    91,     0,     0,   745,     0,     0,     0,     0,     0,
      60,   107,   108,     0,   110,   111,    94,    53,     0,    89,
      52,   389,   115,    91,     0,   239,     0,     0,     0,    98,
      55,     0,     0,    99,     0,     0,     0,     0,    94,    53,
       0,   100,   101,   102,     0,     0,     0,   239,     0,     0,
     103,    98,    55,     0,     0,    99,     0,     0,   696,     0,
       0,     0,     0,   100,   101,   102,    60,   107,   108,     0,
     110,   111,   103,     0,     0,    89,    52,     0,   115,    91,
     698,     0,     0,     0,     0,     0,     0,     0,    60,   107,
     108,     0,   110,   111,    94,    53,     0,    89,    52,     0,
     115,    91,     0,   239,     0,     0,     0,    98,    55,     0,
       0,    99,     0,     0,     0,     0,    94,    53,     0,   100,
     101,   102,     0,     0,     0,   239,     0,     0,   103,    98,
      55,     0,     0,    99,     0,     0,   742,     0,     0,     0,
       0,   100,   101,   102,    60,   107,   108,     0,   110,   111,
     103,     0,     0,    89,    52,     0,   115,    91,   788,     0,
       0,     0,     0,     0,     0,     0,    60,   107,   108,     0,
     110,   111,    94,    53,     0,    89,    52,     0,   115,    91,
       0,   239,     0,     0,     0,    98,    55,     0,     0,    99,
       0,     0,     0,     0,    94,    53,     0,   100,   101,   102,
       0,     0,     0,   239,     0,     0,   103,    98,    55,     0,
       0,    99,     0,     0,   800,     0,     0,     0,     0,   100,
     101,   102,    60,   107,   108,     0,   110,   111,   103,     0,
       0,    89,    52,     0,   115,    91,   802,     0,     0,     0,
       0,     0,     0,     0,    60,   107,   108,     0,   110,   111,
      94,    53,     0,    89,    52,     0,   115,    91,     0,   239,
       0,     0,     0,    98,    55,     0,     0,    99,     0,     0,
       0,     0,    94,    53,     0,   100,   101,   102,     0,     0,
       0,   239,     0,     0,   103,    98,    55,     0,     0,    99,
       0,     0,   811,     0,     0,     0,     0,   100,   101,   102,
      60,   107,   108,     0,   110,   111,   103,     0,     0,     0,
     267,     0,   115,     0,     0,   268,     0,     0,     0,     0,
       0,     0,    60,   107,   108,   502,   110,   111,   270,     0,
       0,     0,     0,     0,   115,     0,     0,     0,     0,     0,
       0,   271,     0,   272,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   273,     0,     0,     0,   274,     0,   275,
    -415,     0,     0,     0,     0,   276,     0,     0,   277,  -415,
       0,   278,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   279,     0,   280
};

static const yytype_int16 yycheck[] =
{
      56,    40,    40,   234,   234,   101,    40,   349,   123,   180,
     100,   489,   269,   103,   180,   493,    62,   170,    56,   114,
      59,   558,   523,   118,     9,   558,    39,    21,    39,   286,
      18,    69,    71,    71,    17,    69,    18,    71,    39,    25,
      17,   628,   629,    63,   176,   177,    18,    40,    18,    87,
      39,    18,    12,    87,    46,    93,    56,    20,    39,    93,
      49,    12,    49,   101,    50,    40,    27,   123,    49,    18,
      47,    82,    32,    74,   113,    69,    69,    70,    71,   174,
      31,    56,   253,   254,    69,   123,    74,    12,    39,    18,
      72,    74,    74,    44,    69,   266,    71,    18,   269,   119,
      72,    39,    74,    28,    74,   195,    31,    74,   198,   199,
     200,    74,    87,   700,    39,   286,   287,   618,    93,    44,
      18,    82,    12,   123,   180,    74,   165,   173,   174,    80,
      17,   170,    39,    18,    18,    18,    82,   232,   233,    85,
      91,    31,   180,    39,    16,    74,   166,   167,   123,    39,
       0,    89,   190,    74,    44,    80,   190,    18,    39,   197,
      47,    39,    18,   197,    18,    18,   703,    39,   705,    20,
     703,   337,   705,   326,    72,   328,    18,    49,   234,   235,
     180,   201,   175,    18,    56,    18,   773,    72,    72,    72,
      80,    16,    18,    12,    18,    18,   234,   329,   676,    77,
     234,    91,   240,   790,   791,   180,     6,   245,    89,    28,
      82,    72,    31,    85,    39,   190,    72,   804,    72,    72,
      39,    39,   197,   338,    49,    44,   246,   247,    39,   285,
      72,    56,    18,    20,   234,   235,   578,    72,   258,    72,
     777,    39,    18,   339,   777,   502,    72,    47,    72,    72,
      18,   788,    18,    72,    56,   788,    18,    82,    18,   234,
      85,    80,   799,   800,    18,   802,   799,   800,   805,   802,
     245,   808,   805,   810,   811,   808,    18,   810,   811,    77,
     817,   337,   338,    39,   817,   285,    72,   326,    39,   328,
     380,   381,   382,    16,   389,   390,    72,    12,    20,   337,
     338,   413,    39,    23,    72,    28,    72,    23,    20,    71,
      56,   349,    72,   352,    12,   349,    31,    47,    72,   549,
      46,   123,    45,    79,    39,   555,    48,   347,    48,    44,
      72,   502,    48,    31,   354,   355,    48,   337,   338,    12,
     703,    39,   705,    53,    67,    68,    44,    39,    12,   387,
      72,    49,    62,   387,    69,    28,    79,    16,    31,    20,
      72,    39,   337,   338,    56,    80,    39,    31,    39,    28,
      40,    44,    20,    21,   349,    39,    49,   123,   180,    39,
      44,   401,    80,   403,    46,   424,    45,    48,   500,   501,
     410,   506,   412,    20,    67,    68,    74,    20,   628,   629,
      29,    71,    20,    21,    20,    21,    79,    80,    67,    68,
      46,    72,   387,   509,   777,    16,    80,   588,   589,    92,
      79,    48,    51,    20,    47,   788,    49,    28,    20,   519,
      48,    47,   234,   235,   180,    48,   799,   800,    74,   802,
      69,    42,   805,    87,    45,   808,    74,   810,   811,    47,
     506,    48,   547,   548,   817,    39,    48,    58,    20,    21,
     572,    16,   574,    39,    59,    49,    67,    68,   506,    18,
     700,   702,   702,    28,   586,    46,    20,    48,    79,   518,
      75,   593,    77,   285,    33,    47,    35,    42,   234,   235,
      45,   511,    23,   549,    11,    12,   608,   609,    39,   555,
      49,    47,   558,    47,    18,    49,   506,   409,    49,   411,
      18,    56,    67,    68,    14,    32,    47,    48,    14,    33,
      39,   559,   560,   561,    79,    33,   582,   617,    20,    29,
      49,   506,    18,    29,    47,   337,   338,    56,   577,   285,
     578,   580,   654,   773,   578,    55,     5,    33,   660,   549,
      35,    10,    37,    47,    64,   555,    21,    39,   558,   671,
     790,   791,   674,     5,    23,    39,    51,    49,    10,   625,
     682,    74,   628,   629,   804,    49,    22,    36,   123,    38,
     619,    23,   582,   569,   559,   560,   561,   371,   372,   373,
     374,   337,   338,    52,    36,    54,    38,    33,    34,    39,
     712,    60,    55,   578,    63,    48,   718,    66,    18,    49,
      52,    64,    54,    49,    50,    73,    56,    76,    60,    78,
     732,    63,    55,    48,    66,   625,   369,   370,   628,   629,
      24,    64,    26,    74,    76,   180,    78,    20,    21,   695,
     696,    56,   698,    74,   700,   701,   702,   703,   760,   705,
     375,   376,   377,    20,    21,    39,     4,   378,   379,     8,
      65,     3,    74,    74,   702,    72,    47,   653,   702,   655,
      48,    74,    74,    16,    74,    16,    73,   716,    47,    18,
      39,    39,     6,   739,    72,   741,   742,    74,    17,   234,
     235,    18,    72,    48,    47,   695,   696,    33,   698,    39,
     700,   701,   702,   703,   506,   705,    39,    72,   123,    47,
      72,    16,    47,    39,    16,    47,   772,   773,    39,    73,
      39,   777,   708,    73,    47,   711,    39,   702,     6,    47,
      74,    17,   788,    18,   790,   791,    47,    74,    33,   739,
     285,   741,   742,   799,   800,    73,   802,   549,   804,   805,
      47,    47,   808,   555,   810,   811,   558,    47,    74,    71,
     506,   817,    22,    72,    74,   180,   752,    74,   754,    72,
      47,    47,   772,   773,    22,    73,    39,   777,    47,    72,
     582,    47,    39,    74,    72,    74,    47,    74,   788,    72,
     790,   791,   337,   338,   780,    74,    47,    72,    17,   799,
     800,    74,   802,   549,   804,   805,    12,    74,   808,   555,
     810,   811,   558,    11,   561,    74,    74,   817,    72,   234,
     235,    74,    28,   625,    74,    31,   628,   629,    74,   100,
      74,    72,   103,    39,    74,    72,   582,    72,    44,    56,
      46,    72,    72,    49,    11,    12,    71,   702,    15,   321,
     197,   425,   247,   702,   363,   622,   367,   622,   365,    -1,
     366,    67,    68,    30,    31,    71,   368,    -1,    74,    -1,
     285,    -1,    39,    79,    80,    -1,    43,    44,    -1,   625,
      47,    -1,   628,   629,    -1,    -1,    92,    -1,    55,    56,
      57,    -1,    -1,   695,   696,    56,   698,    64,   700,   701,
     702,   703,    -1,   705,    -1,    72,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    -1,    84,    85,    -1,
      -1,    -1,   337,   338,   195,    92,    -1,   198,   199,   200,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   739,    -1,   741,
     742,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   695,
     696,    -1,   698,    -1,   700,   701,   702,   703,    -1,   705,
      -1,   506,   123,   180,    -1,    -1,    -1,    -1,    -1,    -1,
     772,   773,    -1,    -1,    -1,   777,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   788,    -1,   790,   791,
      -1,    -1,    -1,   739,    -1,   741,   742,   799,   800,    -1,
     802,    -1,   804,   805,   549,    -1,   808,    -1,   810,   811,
     555,    -1,    -1,   558,    -1,   817,    -1,   234,   235,   180,
      -1,    -1,    -1,    -1,    -1,    -1,   772,   773,    -1,    -1,
     100,   777,    -1,   103,    -1,    -1,    -1,   582,    -1,    -1,
      -1,    -1,   788,    -1,   790,   791,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   799,   800,    -1,   802,    -1,   804,   805,
      -1,    -1,   808,    -1,   810,   811,    -1,    -1,   285,    -1,
      -1,   817,    -1,   234,   235,    -1,    -1,    -1,    -1,    -1,
     625,    -1,    -1,   628,   629,    -1,    -1,    -1,    -1,    -1,
      -1,   506,   363,    -1,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     337,   338,    -1,    -1,   285,   195,    -1,    -1,   198,   199,
     200,     5,    -1,    -1,   549,    -1,    10,    -1,    -1,    -1,
     555,    -1,    -1,   558,    -1,    -1,    20,    21,    -1,    23,
     695,   696,    -1,   698,    -1,   700,   701,   702,   703,    -1,
     705,    -1,    36,    -1,    38,    39,    -1,   582,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,   337,   338,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
      -1,    -1,    66,    -1,   739,    -1,   741,   742,    -1,    -1,
      -1,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,
     625,    -1,    -1,   628,   629,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   772,   773,    -1,
      -1,    -1,   777,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   788,    -1,   790,   791,    -1,   519,    -1,
      -1,    -1,   523,    -1,   799,   800,    -1,   802,    -1,   804,
     805,    -1,    -1,   808,    -1,   810,   811,    -1,    -1,    -1,
      -1,    -1,   817,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     695,   696,    -1,   698,    -1,   700,   701,   702,   703,   506,
     705,    -1,    -1,   363,    -1,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   739,    -1,   741,   742,    -1,    -1,
      -1,    -1,   549,    -1,    -1,    -1,    -1,    -1,   555,    -1,
      -1,   558,    -1,    -1,    -1,   506,   617,   618,    -1,    -1,
      -1,   622,    -1,    -1,    -1,    -1,    -1,   772,   773,    -1,
      -1,    -1,   777,    -1,    -1,   582,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   788,    -1,   790,   791,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   799,   800,    -1,   802,   549,   804,
     805,    -1,    -1,   808,   555,   810,   811,   558,    -1,    -1,
      -1,    -1,   817,    -1,    -1,   235,    -1,    -1,   625,    -1,
      -1,   628,   629,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   582,    -1,    -1,    11,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,   519,
      -1,    -1,    39,   523,    -1,   285,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,   625,    -1,    -1,   628,   629,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   695,   696,
      -1,   698,    -1,   700,   701,   702,   703,    -1,   705,    -1,
      -1,    -1,    -1,    80,    81,    82,    -1,    84,    85,    88,
      -1,    88,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
      -1,    -1,   739,   112,   741,   742,    -1,    -1,   117,    -1,
      -1,    -1,    -1,    -1,   695,   696,    -1,   698,    -1,   700,
     701,   702,   703,    -1,   705,    -1,    -1,   617,   618,    -1,
      -1,    -1,   622,    -1,    -1,   772,   773,    -1,    -1,    -1,
     777,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   788,    -1,   790,   791,    -1,    -1,    -1,   739,    -1,
     741,   742,   799,   800,    -1,   802,    -1,   804,   805,    -1,
      -1,   808,    -1,   810,   811,    -1,    -1,    -1,    -1,    -1,
     817,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,
      -1,   772,   773,    -1,    -1,    -1,   777,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   788,    -1,   790,
     791,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   799,   800,
      -1,   802,    -1,   804,   805,    -1,    -1,   808,   237,   810,
     811,   240,    -1,    -1,    -1,    -1,   817,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,
      -1,    -1,   261,    -1,    -1,    -1,    -1,    -1,   267,   268,
      -1,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,    -1,    -1,    -1,    -1,   558,    -1,
     319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   582,    -1,     3,    -1,     5,    -1,    -1,    -1,
      11,    12,    -1,   352,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   361,    -1,    25,   364,    -1,    28,    27,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    40,    43,    44,    -1,   625,    47,    -1,    -1,   388,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,   408,
      69,    72,    71,    12,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    -1,    84,    85,    -1,    -1,    88,    87,    28,
      -1,    92,    31,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      39,   100,   101,    -1,   103,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    -1,   695,   696,    -1,   698,    -1,
      -1,   701,    -1,   703,    -1,   705,    -1,    -1,    67,    68,
      -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     489,    -1,    -1,    92,   493,    -1,    -1,    -1,    -1,   739,
      -1,   741,   742,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   518,
      -1,   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   190,   772,    -1,    -1,    -1,   195,   777,   197,   198,
     199,   200,    -1,    -1,    -1,    -1,    -1,    -1,   788,    -1,
      -1,    -1,    -1,    -1,   553,   554,    -1,   556,    -1,   799,
     800,    -1,   802,    -1,    -1,   805,   565,    -1,   808,    -1,
     810,   811,    -1,    -1,    -1,    -1,    -1,   817,    -1,     7,
      -1,   240,    -1,    11,    12,    13,   245,    15,    -1,    -1,
     249,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    43,    44,    -1,    46,    47,
     619,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   676,    -1,    -1,
     339,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   363,   704,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,    -1,    -1,    -1,    -1,   387,    -1,
       7,    -1,    -1,    -1,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,   745,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    43,    44,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,   775,   776,    55,    56,
      57,    -1,   441,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    70,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    85,    86,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     509,    28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
     519,    -1,    39,    40,   523,    -1,    43,    44,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    70,    71,    -1,    -1,    74,    -1,    -1,
     559,   560,   561,    80,    81,    82,    83,    84,    85,    86,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    -1,   578,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,   617,   618,
      39,    40,    -1,   622,    43,    44,    -1,    46,    47,    -1,
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
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    86,    -1,    -1,    -1,    90,    91,    92,
      93,    94,     7,    -1,    -1,    -1,    11,    12,    13,    -1,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,    44,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,    86,    -1,    -1,    -1,    90,     7,    92,    93,    94,
      11,    12,    13,    -1,    15,    -1,    -1,     5,    19,    -1,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    20,    21,    -1,    23,    -1,    -1,    39,    40,
      -1,    -1,    43,    44,    -1,    46,    47,    -1,    36,    -1,
      38,    39,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      48,    -1,    -1,    64,    52,    -1,    54,    -1,    -1,    70,
      -1,    -1,    60,    74,    -1,    63,    -1,    -1,    66,    80,
      81,    82,    83,    84,    85,    86,    -1,    -1,    76,    90,
      78,    92,    93,    94,    11,    12,    -1,    -1,    15,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    11,    12,
      -1,    -1,    15,    80,    81,    82,    -1,    84,    85,    -1,
      -1,    88,    25,    -1,    -1,    92,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
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
      -1,    -1,    73,    -1,    11,    12,    -1,    -1,    15,    80,
      81,    82,    -1,    84,    85,    -1,    -1,    88,    25,    -1,
      -1,    92,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      11,    12,    -1,    -1,    15,    80,    81,    82,    -1,    84,
      85,    -1,    -1,    88,    25,    -1,    -1,    92,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    -1,    -1,    15,    80,
      81,    82,    -1,    84,    85,    -1,    -1,    88,    25,    -1,
      -1,    92,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    11,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    -1,    84,    85,    -1,
      28,    88,    30,    31,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    11,    12,    -1,    -1,    15,    74,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    -1,    84,    85,    28,    -1,
      30,    31,    -1,    91,    92,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    11,    12,    -1,
      -1,    15,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    -1,    84,    85,    30,    31,    -1,    11,
      12,    91,    92,    15,    -1,    39,    -1,    -1,    -1,    43,
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
      -1,    11,    12,    -1,    92,    15,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    -1,    84,    85,
      30,    31,    -1,    11,    12,    -1,    92,    15,    -1,    39,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    30,    31,    -1,    55,    56,    57,    -1,    -1,
      -1,    39,    -1,    -1,    64,    43,    44,    -1,    -1,    47,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    55,    56,    57,
      80,    81,    82,    -1,    84,    85,    64,    -1,    -1,    -1,
       5,    -1,    92,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    20,    84,    85,    23,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    -1,    54,
      55,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    78
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
      39,    39,    12,    31,    39,    44,    46,    71,    74,    79,
      80,    92,   107,   108,   109,   110,   111,   112,   113,   120,
     122,   126,   127,   128,   129,   133,   139,   140,   141,   142,
     150,    20,    39,    77,    39,   125,   122,    47,     7,    11,
      13,    15,    19,    28,    30,    32,    39,    40,    43,    47,
      55,    56,    57,    64,    70,    71,    74,    81,    82,    83,
      84,    85,    86,    90,    91,    92,    93,    94,   107,   108,
     110,   112,   150,   151,   152,   153,   155,   156,   157,   159,
     160,   161,   162,   163,   165,   166,   168,   170,   176,   178,
     179,   180,   181,   182,   183,   184,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   202,   215,   216,
     219,   220,   221,   150,    39,   134,   142,    39,   130,   131,
     134,    48,   114,    92,   107,   122,   142,   142,    71,   127,
      46,   143,    87,   137,    39,    77,    74,    18,    33,   123,
      28,    72,   107,   135,   136,    25,    39,    47,    53,    62,
      88,   108,   110,   191,   195,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    39,    74,
      39,    74,    91,   107,    47,    17,    47,    47,   199,    39,
      47,   112,   193,   194,   214,    49,   108,   111,   112,   115,
     214,    74,   199,    20,    21,    47,   199,   150,    39,   130,
      20,    47,   199,   130,    20,   114,    21,     5,    10,    20,
      23,    36,    38,    48,    52,    54,    60,    63,    66,    76,
      78,   114,    71,   152,    74,    22,    20,    21,    48,     5,
      10,    23,    36,    38,    52,    54,    60,    63,    66,    76,
      78,     5,    10,    23,    36,    38,    52,    54,    60,    63,
      66,    76,    78,    55,    64,    74,   138,   150,   114,    23,
     114,    18,    74,   138,    73,    48,   134,   130,   134,   142,
     137,   137,    71,    82,    85,   112,   115,   144,   151,    18,
     124,    74,    74,    39,    18,    33,   107,    39,    89,    18,
      72,   214,     6,    72,   108,   112,   135,   199,   214,   214,
     214,    17,    74,     9,    69,     4,     8,    65,     3,    24,
      26,    33,    34,    49,    50,    35,    37,    51,    53,    62,
      59,    75,    77,    74,    74,   130,   130,    28,    74,    91,
     107,   160,   172,   173,   175,   153,    72,   145,   199,   199,
      72,   108,    69,   108,   110,   116,   117,   118,    48,   114,
     198,   114,   198,    47,    49,   112,    74,    39,   115,    39,
     115,   199,    74,    14,    29,   185,   186,    74,    16,   199,
      74,    74,    16,    20,    39,    56,   115,   199,   199,    16,
      39,    56,    82,    85,   115,   192,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,    20,   153,    39,
     115,   192,    39,   115,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,    46,
     132,   148,   199,    23,   131,    73,   138,    74,   138,   137,
      47,    47,    20,    82,    85,    71,   151,    71,   111,    18,
      39,    39,    89,   114,    39,   136,   150,   199,     6,    72,
     114,   114,    72,    72,   199,   205,   199,   206,   207,   208,
     209,   210,   210,   211,   211,   211,   211,   212,   212,   212,
     213,   213,   214,   214,   214,    74,    74,    91,   107,    74,
     199,   130,   130,    74,    17,    18,    18,    72,    72,    27,
      82,    18,    33,   199,   148,    48,   114,   148,   114,    72,
     145,    33,    47,    49,    47,    39,    39,    72,    47,   150,
      29,   186,    72,    16,    39,    56,    47,   112,    20,    21,
      39,    73,    16,    47,    39,    39,    73,    18,    71,   132,
     149,   132,    72,   145,    72,   145,    82,   115,    47,    47,
      71,   111,   114,    39,   150,   199,   214,    72,    72,     6,
     217,    74,    17,   130,   130,    72,   174,   175,    74,    74,
     199,   199,   160,   199,    32,    39,    93,   153,   154,   155,
     158,   163,   164,   167,   169,   171,   177,   110,   110,   117,
      73,   199,   125,    72,    47,    72,   145,    33,    72,   145,
      47,   150,   136,   150,   153,    72,   145,    39,   115,    39,
     115,    47,    72,   145,    47,    71,    18,    71,    74,    72,
      74,    72,    47,    82,    72,   145,    72,   145,   214,   217,
     150,   199,   200,   203,   153,    72,    72,   174,    72,   174,
      74,    72,    47,    17,    47,    22,    73,   125,    72,   145,
     125,    72,    47,    72,    72,   145,    72,    72,    47,    39,
      39,    72,   145,    72,    72,   145,    71,   132,    74,    74,
      72,   145,    47,    74,    72,    74,    72,   153,   153,    72,
     153,    72,    72,   174,   153,    74,   172,   173,   154,   199,
     154,   125,    72,   125,    72,   145,    72,   150,    72,   145,
      47,    72,    72,    74,    72,    72,   145,    74,    74,   153,
     153,   153,    72,    74,   199,    74,    17,    72,   125,   125,
      72,    72,    72,   145,    74,    74,    72,   153,    72,   174,
      74,    74,   199,   199,   154,   125,    72,    74,   154,    72,
      72,   174,    72,   174,    74,    72,   154,   154,    72,   154,
      72,    72,   174,   154,   154,   154,   154,    72,   154
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
     124,   124,   125,   125,   126,   126,   127,   127,   127,   127,
     128,   128,   128,   129,   129,   130,   130,   131,   131,   131,
     131,   132,   132,   133,   133,   133,   133,   134,   134,   135,
     135,   136,   136,   136,   136,   136,   136,   137,   138,   138,
     139,   140,   141,   141,   141,   141,   141,   141,   141,   141,
     142,   142,   143,   143,   143,   143,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   145,   145,
     146,   147,   147,   147,   147,   148,   148,   148,   148,   149,
     149,   150,   150,   151,   151,   152,   152,   152,   152,   152,
     153,   153,   153,   153,   153,   153,   154,   154,   154,   154,
     154,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   156,   157,   158,   159,   160,   160,   160,   160,
     160,   160,   160,   161,   162,   163,   164,   165,   165,   166,
     167,   168,   168,   169,   169,   170,   170,   170,   170,   170,
     170,   170,   170,   171,   171,   171,   171,   171,   171,   171,
     171,   172,   172,   173,   173,   173,   173,   174,   175,   175,
     176,   177,   178,   178,   179,   180,   180,   181,   181,   182,
     183,   184,   184,   184,   185,   185,   186,   187,   187,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   189,
     189,   189,   189,   189,   189,   189,   190,   190,   190,   190,
     190,   191,   191,   191,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     193,   193,   193,   194,   194,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   197,   197,   197,   197,   197,   197,   198,
     198,   199,   199,   200,   200,   200,   200,   200,   200,   201,
     201,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   203,   203,   203,
     204,   204,   205,   205,   206,   206,   207,   207,   208,   208,
     209,   209,   209,   210,   210,   210,   210,   210,   211,   211,
     211,   211,   212,   212,   212,   213,   213,   213,   213,   214,
     214,   214,   214,   214,   215,   216,   217,   217,   217,   217,
     218,   218,   218,   218,   219,   219,   219,   219,   220,   221
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
       1,     1,     1,     3,     4,     3,     1,     3,     4,     1,
       2,     1,     1,     3,     3,     4,     4,     1,     2,     3,
       1,     2,     3,     3,     4,     3,     4,     2,     1,     1,
       2,     2,     2,     3,     3,     4,     1,     2,     2,     3,
       3,     4,     2,     3,     3,     4,     4,     5,     5,     6,
       4,     5,     5,     6,     6,     7,     7,     8,     3,     1,
       2,     2,     3,     3,     4,     2,     3,     3,     4,     3,
       1,     2,     3,     2,     1,     3,     3,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     5,     3,     5,     3,     3,     5,     5,
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
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     5,     5,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       4,     5,     4,     5,     1,     1,     1,     1,     2,     2
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

  case 69:
#line 230 "parser.y"
        {reset();}
#line 3196 "parser.tab.c"
    break;

  case 73:
#line 240 "parser.y"
                                        {type.clear();}
#line 3202 "parser.tab.c"
    break;

  case 74:
#line 241 "parser.y"
                                                        {modifiers.clear();type.clear();}
#line 3208 "parser.tab.c"
    break;

  case 77:
#line 250 "parser.y"
                                        {string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); make_entry((yyvsp[-2].item).label,type,yylineno,x);}
#line 3214 "parser.tab.c"
    break;

  case 78:
#line 251 "parser.y"
                                                {string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); vector<int> v((yyvsp[-2].item).dims,0); make_array_entry((yyvsp[-3].item).label,type,yylineno,v,x);}
#line 3220 "parser.tab.c"
    break;

  case 79:
#line 252 "parser.y"
                {string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); make_entry((yyvsp[0].item).label,type,yylineno,x);}
#line 3226 "parser.tab.c"
    break;

  case 80:
#line 253 "parser.y"
                        {string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); vector<int> v((yyvsp[0].item).dims,0); make_array_entry((yyvsp[-1].item).label,type,yylineno,v,x);}
#line 3232 "parser.tab.c"
    break;

  case 83:
#line 262 "parser.y"
                                        {make_func_entry((yyvsp[-1].item).label,"void",arguments,yylineno,"0000",(yyvsp[-1].item).dims); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}
#line 3238 "parser.tab.c"
    break;

  case 84:
#line 263 "parser.y"
                                        {make_func_entry((yyvsp[-1].item).label,(yyvsp[-2].item).type,arguments,yylineno,"0000",(yyvsp[-1].item).dims); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}
#line 3244 "parser.tab.c"
    break;

  case 85:
#line 264 "parser.y"
                                                   {string x = check_method_modifiers((yyvsp[-3].item).label); make_func_entry((yyvsp[-1].item).label,"void",arguments,yylineno,x,(yyvsp[-2].item).dims); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}
#line 3250 "parser.tab.c"
    break;

  case 86:
#line 265 "parser.y"
                                                  {string x = check_method_modifiers((yyvsp[-3].item).label); make_func_entry((yyvsp[-1].item).label,(yyvsp[-2].item).type,arguments,yylineno,x,(yyvsp[-2].item).dims); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}
#line 3256 "parser.tab.c"
    break;

  case 87:
#line 269 "parser.y"
            {strcpy((yyval.item).label,(yyvsp[0].item).label); (yyval.item).dims = 0;}
#line 3262 "parser.tab.c"
    break;

  case 88:
#line 270 "parser.y"
                        {strcpy((yyval.item).label,(yyvsp[-1].item).label); (yyval.item).dims = (yyvsp[0].item).dims;}
#line 3268 "parser.tab.c"
    break;

  case 91:
#line 279 "parser.y"
                    {arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-1].item).type,0,0,0));}
#line 3274 "parser.tab.c"
    break;

  case 92:
#line 280 "parser.y"
                                        {arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-1].item).type,0,0,1));}
#line 3280 "parser.tab.c"
    break;

  case 93:
#line 281 "parser.y"
                                {arguments.push_back(make_tuple((yyvsp[-1].item).label,(yyvsp[-2].item).type,(yyvsp[0].item).dims,0,0));}
#line 3286 "parser.tab.c"
    break;

  case 94:
#line 282 "parser.y"
                                        {arguments.push_back(make_tuple((yyvsp[-1].item).label,(yyvsp[-3].item).type,0,0,0));}
#line 3292 "parser.tab.c"
    break;

  case 95:
#line 283 "parser.y"
                                        {arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-2].item).type,0,1,0));}
#line 3298 "parser.tab.c"
    break;

  case 96:
#line 284 "parser.y"
                                                {arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-2].item).type,0,1,1));}
#line 3304 "parser.tab.c"
    break;

  case 147:
#line 383 "parser.y"
                                                {temp.clear();}
#line 3310 "parser.tab.c"
    break;

  case 148:
#line 384 "parser.y"
                                                {temp.clear();}
#line 3316 "parser.tab.c"
    break;


#line 3320 "parser.tab.c"

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
#line 867 "parser.y"


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
