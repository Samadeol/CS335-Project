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
    }item;

#line 278 "parser.tab.c"

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
#define YYLAST   5198

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  121
/* YYNRULES -- Number of rules.  */
#define YYNRULES  402
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  794

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
       0,    72,    72,    75,    76,    77,    78,    79,    80,    81,
      85,    89,    90,    94,    95,    96,    97,   101,   105,   109,
     113,   117,   118,   122,   123,   127,   128,   132,   133,   134,
     138,   139,   143,   144,   148,   152,   153,   157,   161,   162,
     166,   170,   171,   175,   176,   180,   181,   182,   186,   187,
     191,   192,   196,   197,   198,   199,   203,   204,   208,   209,
     213,   214,   215,   216,   220,   221,   222,   226,   227,   231,
     232,   236,   237,   238,   239,   243,   244,   248,   249,   250,
     251,   255,   256,   260,   261,   265,   266,   267,   268,   269,
     270,   274,   275,   279,   283,   284,   288,   289,   293,   294,
     295,   296,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   315,   316,   321,   322,   326,   327,
     328,   329,   333,   334,   338,   339,   343,   344,   348,   349,
     350,   351,   352,   356,   357,   358,   359,   360,   361,   365,
     366,   367,   368,   369,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   387,   391,   395,   399,   403,
     404,   405,   406,   407,   408,   409,   412,   416,   420,   424,
     430,   431,   435,   439,   443,   444,   448,   449,   453,   454,
     455,   456,   457,   458,   459,   460,   464,   465,   466,   467,
     468,   469,   470,   471,   475,   476,   480,   481,   482,   483,
     487,   491,   492,   496,   500,   504,   505,   509,   513,   514,
     518,   519,   523,   527,   531,   532,   533,   537,   538,   542,
     546,   547,   551,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   564,   565,   566,   567,   568,   569,   570,   574,
     575,   576,   577,   578,   582,   583,   584,   588,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   607,   608,   609,   613,   614,   618,   619,
     620,   621,   622,   623,   624,   625,   626,   627,   628,   629,
     630,   631,   632,   633,   634,   635,   639,   640,   641,   642,
     643,   644,   645,   646,   647,   648,   652,   653,   654,   655,
     656,   657,   661,   662,   666,   667,   671,   672,   673,   674,
     675,   676,   680,   681,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,   709,   710,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     724,   725,   726,   730,   731,   735,   736,   740,   741,   745,
     746,   750,   751,   755,   756,   757,   761,   762,   763,   764,
     765,   769,   770,   771,   772,   776,   777,   778,   782,   783,
     784,   785,   789,   790,   791,   792,   793,   797,   801,   805,
     806,   807,   808,   812,   813,   814,   815,   819,   820,   821,
     822,   826,   830
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
  "ClassBody", "ClassBodyDeclarations", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "VariableDeclaratorList",
  "VariableDeclarator", "VariableInitializer", "MethodDeclaration",
  "MethodDeclarator", "FormalParameterList", "FormalParameter",
  "MethodBody", "StaticInitializer", "ConstructorDeclaration",
  "Declarator", "ConstructorBody", "ExplicitConstructorInvocation",
  "Expressions", "InterfaceDeclaration", "ArrayInitializer",
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

#define YYPACT_NINF (-593)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-401)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     461,    31,  -593,    -1,    79,    98,  -593,  -593,  -593,    65,
    -593,    87,    87,  -593,  -593,  -593,  -593,  -593,   360,  -593,
    -593,   566,  -593,  -593,    95,  -593,    98,    51,    95,   157,
    -593,    87,   360,  -593,   360,  -593,   164,   222,  -593,  2030,
    -593,   279,   131,  -593,  -593,   292,   360,    95,    95,  -593,
    -593,   260,  -593,  2212,  -593,  -593,   289,  -593,   304,   380,
     351,  -593,  -593,  -593,   157,  -593,    18,  5053,  -593,  -593,
    -593,  -593,  -593,  -593,   400,  -593,   137,  -593,   385,  -593,
    -593,   281,  1790,  -593,   109,  -593,   132,    29,  -593,   407,
      25,   420,  -593,  1790,  4604,   382,  -593,  4604,  1319,  -593,
    -593,  -593,    38,   467,  -593,  -593,  1790,   289,   443,   459,
     480,  1790,   443,   268,   466,  5120,  -593,  2300,  -593,  -593,
    -593,  -593,  -593,  -593,   470,  -593,  -593,   472,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
     271,   500,  -593,  -593,    19,  -593,   344,   536,    77,  -593,
    -593,  -593,  -593,  -593,   -10,    -3,   411,  -593,   260,   250,
     351,   490,     2,  -593,   250,   484,   512,   304,   380,   400,
    -593,  -593,  2114,  -593,   495,   515,  -593,   452,  -593,   -14,
      66,  -593,  4604,   151,  2812,  4604,  4604,  4604,   268,   466,
    -593,  -593,     7,  -593,  -593,  -593,  -593,     8,   588,   597,
     556,   629,   349,   537,   498,   477,   445,  -593,  -593,  -593,
    -593,  -593,   -10,  -593,  -593,   561,  -593,   568,  -593,   443,
     443,   972,  2652,  2940,  1790,   569,   593,  1790,   409,  -593,
    -593,  -593,   264,   599,   599,   192,    98,  -593,  -593,   575,
     330,   468,  1790,   577,    37,   354,     5,   636,  1790,   581,
      15,   638,   312,   460,  1790,  1790,   146,  1790,  1790,  1790,
    3004,  1790,  1790,  1790,  1790,  1790,  1790,  1790,   342,  -593,
    -593,  -593,  2652,   552,   506,  1790,  1790,  1790,  1790,  1790,
    1790,  1790,  1790,  1790,  1790,  1790,  1790,  1790,  1790,  1790,
    1790,  1790,  1790,  1790,  1790,  1790,  1790,  1790,  1790,  1790,
    -593,  -593,  -593,  -593,  -593,   512,  3068,   392,   443,  -593,
    -593,  -593,   584,   250,    16,   250,  -593,  -593,   404,   611,
     893,   141,  2388,  2476,  -593,  -593,   104,   351,   621,   176,
    -593,  -593,  3132,   660,   262,   432,   117,   595,  -593,  -593,
    -593,  1790,  -593,  4604,  1790,  4604,  4604,  4604,  4604,  4604,
    4604,  4604,  4604,  4604,  4604,  4604,  4604,  4604,  4604,  4604,
    4604,  4604,  4604,  -593,  -593,    22,    26,    43,  3196,   443,
     443,  -593,   598,   657,   661,  -593,  -593,   124,  -593,   609,
    -593,   262,    20,   351,  -593,   183,  -593,  -593,  3004,   580,
     634,   580,   634,  3260,   651,   338,  -593,   639,   646,  -593,
     648,   616,  -593,   642,   289,   236,  -593,  -593,  -593,   618,
    -593,  -593,  -593,   675,  -593,  -593,   244,  -593,  -593,  -593,
     645,   524,   413,  -593,   654,  -593,  -593,  -593,  -593,   624,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,   682,  -593,   653,
     662,  -593,  -593,   663,   630,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  -593,  1223,
    -593,  -593,  -593,  3068,  -593,  -593,  -593,  -593,  -593,  3324,
    3388,   178,   658,   664,  -593,  2564,  -593,   351,   665,   512,
    -593,  -593,  -593,  -593,  3132,  4604,   425,   440,   701,   801,
     635,   588,   698,   597,   556,   629,   349,   537,   537,   498,
     498,   498,   498,   477,   477,   477,   445,   445,  -593,  -593,
    -593,  -593,  -593,   443,   443,  4719,   649,   702,   702,  3452,
    1790,  5031,  1790,  -593,  2736,   452,   452,   264,  -593,   667,
    -593,  3004,   512,  -593,   512,    95,   161,   684,  3516,   703,
    3580,   688,  -593,   289,   176,  -593,   289,  -593,  2652,  -593,
    -593,  -593,  3644,   192,   526,   567,   690,  -593,  -593,  3708,
     691,  -593,  -593,   670,  -593,  -593,    21,  -593,   668,   166,
     669,   168,   429,   128,  3772,  3836,  -593,   512,  -593,  -593,
    -593,  -593,  4604,   801,  3132,  -593,  -593,  1790,   702,   702,
    2652,   672,   661,  4741,  4797,   671,   674,  -593,  -593,   704,
     227,   706,  -593,  -593,   727,  -593,   728,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,  -593,   681,  -593,    95,  3900,
      95,   179,   708,  -593,   181,  3964,  -593,   685,  -593,  -593,
    -593,   182,   709,   719,  -593,   720,  4028,  -593,   187,  4092,
    -593,  2876,  -593,  -593,   687,  -593,   693,  4156,   715,   694,
     214,   699,   249,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    2652,  2652,   692,  2652,   700,  4819,  2652,  4663,  2736,  1790,
    2736,  -593,  -593,    95,   269,  -593,    95,  4220,  -593,  -593,
     283,   289,  -593,  4284,   729,  -593,  -593,   284,  -593,  -593,
     287,  -593,  -593,  -593,  -593,   707,   293,  4348,  -593,   710,
    -593,   713,  -593,  -593,  2652,  -593,  2652,  2652,   716,  -593,
    4412,   717,   761,  -593,   718,  -593,  -593,    95,  -593,    95,
     296,  -593,  -593,  -593,   300,  4476,  -593,  -593,  -593,   723,
     725,   309,  -593,  -593,  -593,  -593,  -593,  2652,  4875,   730,
    4540,  1790,  2736,  -593,  -593,    95,  -593,  -593,   311,  -593,
    -593,   733,  -593,  2736,   721,  4897,  4953,   734,   722,  -593,
    -593,  -593,  -593,  -593,  2736,  2736,   737,  2736,   738,  4975,
    2736,  -593,  -593,  2736,  -593,  2736,  2736,   739,  -593,  -593,
    -593,  -593,  2736,  -593
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,    54,     0,     0,     0,    53,    52,    55,     0,
       2,     6,     4,    12,    13,    14,    15,    16,     3,    22,
      23,     0,    51,    24,     0,    36,     0,     0,     0,    10,
       1,     8,     7,    11,     5,    21,     0,     0,    50,     0,
      48,     0,     0,    17,   116,     0,     9,     0,     0,    28,
      31,    36,    30,     0,    56,    66,    55,    29,     0,     0,
      25,    27,    26,    32,    34,    33,     0,     0,    59,    60,
      64,    65,    61,    62,     0,    63,     0,    35,     0,    49,
     117,     0,     0,   234,     0,   235,     0,     0,   233,     0,
      36,     0,   232,     0,     0,     0,   238,     0,     0,   124,
     155,   236,     0,     0,   237,   224,     0,     0,     0,     0,
       0,     0,     0,    25,    26,   398,   144,     0,   127,   132,
     133,   145,   134,   146,     0,   135,   136,     0,   147,   137,
     138,   174,   175,   148,   154,   149,   150,   152,   151,   153,
     397,   220,   222,   223,   227,   244,   228,   229,   230,   231,
     221,   159,   160,   161,     0,   162,   163,    93,     0,     0,
      81,    73,     0,    70,     0,     0,    37,     0,     0,     0,
      57,    58,     0,    94,    35,     0,    18,     0,    96,     0,
       0,    84,     0,    36,     0,     0,     0,     0,     0,     0,
     227,   230,     0,   304,   305,   313,   312,   350,   353,   355,
     357,   359,   361,   363,   366,   371,   375,   378,   382,   383,
     386,   392,   389,   399,   400,     0,   205,     0,   208,     0,
       0,     0,     0,     0,     0,     0,    36,     0,   398,   228,
     229,   388,     0,     0,     0,    34,     0,   387,   210,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
     126,   158,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     402,   401,    92,    77,    91,    82,     0,    74,     0,    67,
      78,    39,     0,     0,     0,     0,    95,    98,     0,   224,
      34,     0,     0,     0,    19,    20,     0,    85,     0,     0,
      97,   391,     0,     0,    25,   398,     0,     0,   385,   384,
     390,     0,   170,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   206,   209,     0,     0,     0,     0,     0,
       0,   202,     0,   195,   194,   156,   268,     0,   115,     0,
     226,     0,    47,     0,    43,     0,    42,    44,     0,     0,
     296,     0,   298,     0,     0,     0,   211,   264,     0,   292,
       0,     0,   212,     0,     0,   214,   218,   129,   243,     0,
     207,   128,   241,     0,   288,   290,     0,   323,   325,   239,
      35,     0,     0,   225,     0,   245,   314,   321,   322,     0,
     320,   319,   317,   318,   324,   316,   315,     0,   167,   263,
       0,   246,   286,     0,     0,   335,   337,   326,   333,   334,
     332,   331,   329,   330,   336,   328,   327,   347,   349,   338,
     345,   346,   344,   343,   341,   342,   348,   340,   339,     0,
      71,    76,    75,     0,    69,    38,    79,    68,    80,     0,
       0,     0,     0,     0,   100,     0,    99,    86,     0,    87,
      89,    83,   308,   311,     0,     0,    37,     0,     0,   226,
       0,   354,     0,   356,   358,   360,   362,   364,   365,   368,
     370,   367,   369,   373,   374,   372,   377,   376,   381,   380,
     379,   131,   130,     0,     0,     0,     0,   198,   196,     0,
       0,     0,     0,   269,     0,     0,     0,     0,    40,     0,
     300,     0,   297,   301,   299,   247,     0,     0,     0,     0,
       0,     0,   293,     0,     0,   215,     0,   217,     0,   242,
     289,   291,     0,     0,     0,     0,     0,   266,   240,     0,
       0,   287,   267,     0,   118,   123,     0,    72,     0,     0,
       0,     0,     0,     0,     0,     0,   101,    88,    90,   307,
     310,   393,     0,     0,     0,   395,   171,     0,   199,   197,
       0,     0,   200,     0,     0,     0,     0,   201,   114,     0,
      36,     0,   166,   168,   133,   140,     0,   141,   142,   143,
     176,   177,    45,    46,    41,   303,     0,   248,   249,     0,
     255,     0,     0,   278,     0,     0,   213,     0,   216,   172,
     270,     0,   265,     0,   294,     0,     0,   274,     0,     0,
     119,     0,   120,   106,     0,   102,     0,     0,     0,     0,
       0,     0,     0,   394,   396,   306,   309,   352,   351,   178,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   302,   250,   251,     0,   256,   257,     0,   279,   280,
       0,     0,   271,     0,     0,   295,   272,     0,   275,   276,
       0,   121,   122,   107,   103,     0,     0,     0,   108,     0,
     104,     0,   179,   180,     0,   182,     0,     0,     0,   203,
       0,     0,   195,   157,     0,   169,   252,   253,   258,   259,
       0,   281,   219,   282,     0,     0,   273,   277,   110,     0,
       0,     0,   109,   105,   181,   183,   184,     0,     0,     0,
       0,     0,     0,   254,   260,   261,   283,   284,     0,   111,
     112,     0,   185,     0,     0,     0,     0,     0,     0,   173,
     262,   285,   113,   186,     0,     0,     0,     0,     0,     0,
       0,   187,   188,     0,   190,     0,     0,     0,   204,   189,
     191,   192,     0,   193
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -593,  -593,  -593,  -593,   771,    36,  -593,  -593,  -593,  -593,
     550,   534,   -31,    41,  -593,    94,   724,  1678,  -593,     3,
    -129,  -593,   252,  -593,  -593,   402,    93,   -21,  -593,   747,
    -593,  -593,   -80,   509,  -459,  -593,   -37,   637,  -324,  -133,
    -593,  -593,   435,   655,  -593,   530,  -593,   224,  -593,   -38,
    -157,  -114,  1014,  -374,  -528,  -593,  -593,  -593,  -593,  -212,
    -593,  -593,  -435,  -593,  -593,  -593,  -593,  -593,  -593,  -593,
    -593,   145,   148,  -592,  -219,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,  -593,  -593,  -593,   418,  -593,  -593,  -593,  -593,
     -53,  -252,  1582,  1625,     0,  -593,  -593,   594,  1367,   221,
    -593,   125,   230,  -593,   486,   485,   487,   488,   489,   -65,
     285,   228,   239,   -81,   321,   447,  -480,  -593,   643,   767,
     821
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   112,   188,    61,   189,    63,   115,    65,   268,
     236,   385,   386,   387,    20,    21,    22,    40,    67,    68,
      69,    70,   162,   163,   470,    71,   159,   180,   181,   303,
      72,    73,   160,   173,   322,   377,    23,   471,   576,   116,
     117,   118,   119,   613,   120,   121,   122,   615,   123,   124,
     125,   126,   127,   617,   128,   129,   618,   130,   619,   131,
     620,   372,   373,   601,   602,   132,   621,   133,   134,   135,
     136,   137,   138,   139,   405,   406,   140,   141,   142,   143,
     190,   145,   146,   147,   191,   149,   150,   390,   378,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     144,    75,   374,   270,   425,   491,   614,    44,    59,   371,
     575,   672,   674,   231,   577,   323,   237,   343,   157,   595,
     308,   441,   164,   308,   341,   327,    79,    80,   246,    75,
      49,   310,   250,   308,   308,   168,    59,  -165,    25,   651,
     308,    49,   222,   321,   308,   300,     2,   535,    33,    50,
     179,   403,  -399,   148,   301,    49,   220,    51,   240,   241,
      50,  -399,    52,   166,   144,    30,   404,    33,    25,   244,
      24,    42,   223,    52,    50,   328,   309,   344,    26,   407,
      60,   342,    25,   718,   329,     6,     7,    52,   314,   411,
     477,  -165,   652,  -165,   113,  -164,   521,     8,    57,   616,
     522,   331,   536,     1,   338,   339,   340,    60,    60,    57,
     167,   398,   400,   664,    38,     2,   252,   148,    28,   144,
     219,   304,    60,    57,   416,    43,   304,   424,    60,     3,
     313,   315,     4,    62,   523,   329,   233,    25,   330,   365,
     366,    39,   532,   487,   440,   443,   326,   114,   215,  -164,
     614,  -164,   614,   179,     6,     7,   764,   332,   113,    38,
      62,    62,   419,   305,   307,   485,     8,   566,   144,   144,
      77,   217,   148,   776,   778,    62,   174,    45,   151,   532,
     476,    62,   478,   216,   532,   420,   532,   787,    49,   498,
     370,   252,   702,   488,   419,   232,   533,   532,   223,   532,
     532,   537,   421,    47,   177,   532,   218,    50,    78,   270,
     658,   114,    45,   113,   175,    25,   538,   420,    60,   144,
      52,   148,   148,   482,   614,   334,   483,   232,   422,   425,
     637,   423,   532,   628,   421,   614,   389,   391,   654,   393,
     656,   394,   151,   616,   678,   616,   614,   614,   307,   614,
     403,   686,   614,   688,   692,   614,    57,   614,   614,   698,
     582,    48,   113,   423,   614,   556,   114,   532,   381,   144,
     144,    62,   148,   383,   223,   304,    49,   304,   114,   518,
     519,   520,   251,   560,   507,   508,   709,   532,   251,   527,
     528,   273,   274,    49,   492,    50,    53,   151,   179,    76,
     561,   532,   532,    25,   723,   532,   725,    81,    52,   177,
     165,   532,    50,   371,   532,   114,   165,   616,   532,   607,
      25,   711,   148,   148,   302,    52,   384,   532,   616,   532,
     489,    77,   413,   382,   495,    53,   524,   496,   497,   616,
     616,   727,   616,   158,    57,   616,   151,   151,   616,   276,
     616,   616,   583,   178,   277,   731,   736,   616,    45,   737,
     312,    57,   437,   113,   113,   739,   555,   278,   755,   397,
      60,   270,   756,   349,   152,   350,     1,   306,   769,   232,
     279,   761,   280,   771,   496,   548,   166,   549,     2,   773,
     312,   371,   371,   542,    49,   544,   281,   151,   282,   165,
     781,   782,   165,   784,   283,     4,   788,   284,    60,   789,
     285,   790,   791,    50,   591,   473,   114,   114,   793,   161,
     286,    25,   287,    62,   240,   241,    52,     6,     7,   256,
     -34,   232,   144,   564,   565,   643,   645,   254,   152,     8,
     312,    66,   255,   598,   599,   413,   172,   151,   151,   564,
     565,   479,   256,   -34,   221,   257,   589,   260,   374,   176,
     437,    62,    57,   371,    49,   371,  -400,   224,   258,    66,
     259,   -34,   144,   312,    74,  -400,   657,     1,   144,   247,
     260,   144,   245,    50,   261,   148,   262,   253,   312,     2,
     587,    25,   263,   152,   272,   264,    52,   592,   265,   414,
     153,   169,    74,     3,   360,   144,     4,   399,   266,   232,
     267,   663,   593,   306,   242,   636,   415,   232,   638,     5,
     361,   -34,   362,   179,   627,   148,   113,   248,     6,     7,
     358,   148,    57,   355,   148,   356,   371,    81,   165,   359,
       8,   288,   152,   152,   271,   442,   289,   144,   275,   357,
     144,   144,    35,   371,   371,   232,   665,   311,   148,   290,
     312,    32,    34,    25,   153,   642,    35,   371,    35,   324,
     351,   352,   291,   232,   292,   232,   383,   383,   383,   114,
      35,    46,    36,   513,   514,   515,   353,   354,   293,   325,
     294,   439,   345,   152,     2,    60,   295,   516,   517,   296,
     148,   232,   297,   148,   148,   346,   644,   682,   421,   685,
     151,    37,   298,   540,   299,   543,   232,   144,   144,   153,
     144,   347,   144,   144,   144,   144,   469,   144,   312,   622,
     623,   384,   348,     6,     7,   363,   509,   510,   511,   512,
     223,   380,   364,   152,   152,     8,   370,   388,    62,   396,
     151,   402,   408,   732,   412,   410,   151,   475,   480,   151,
     490,   144,   726,   144,   144,   728,   494,   499,   153,   153,
     148,   148,   529,   148,   530,   148,   148,   148,   148,   531,
     148,   534,   541,   151,   547,   551,   550,   552,   553,   554,
     558,   559,   562,   566,   144,   144,   154,   567,   568,   144,
     569,   570,   571,   572,   588,   584,   753,   594,   754,   596,
     144,   585,   144,   144,   148,   597,   148,   148,   113,   153,
     308,   144,   144,   603,   144,   151,   144,   144,   151,   151,
     144,   629,   144,   144,   770,   635,   632,   646,   649,   144,
     625,   650,   653,   655,   670,   675,   676,   148,   148,  -139,
     680,   677,   148,   679,   681,   687,   693,   691,   694,   695,
     154,   703,   707,   148,   714,   148,   148,   704,   708,   153,
     153,   114,   716,   710,   148,   148,   735,   148,   751,   148,
     148,   738,    31,   148,   742,   148,   148,   743,   747,   624,
     752,   750,   148,   774,   780,   151,   151,   759,   151,   760,
     151,   151,   151,   151,   765,   151,   152,   772,   779,   783,
     785,   792,    83,    49,   171,   154,    85,   474,   667,   234,
     155,   336,   721,   557,   316,   722,   182,   668,   392,   501,
     503,    88,    50,   504,     0,   505,     0,   506,     0,   151,
     226,   151,   151,     0,    92,    52,   152,     0,   227,     0,
       0,     0,   152,     0,     0,   152,     0,    95,    96,     0,
       0,     0,     0,     0,   154,   154,     0,     0,     0,     0,
       0,     0,   151,   151,   156,     0,     0,   151,     0,   152,
       0,    57,   101,   102,   155,   104,   105,     0,   151,   187,
     151,   151,     0,   109,     0,     0,     0,     0,   254,   151,
     151,     0,   151,   255,   151,   151,     0,     0,   151,     0,
     151,   151,     0,   481,     0,   154,   257,   151,     0,     0,
       0,   152,     0,   546,   152,   152,     0,     0,     0,   258,
       0,   259,   153,     0,     0,     0,     0,     0,   156,   155,
       0,   260,     0,     0,     0,   261,     0,   262,  -398,     0,
       0,     0,     0,   263,     0,     0,   264,  -398,     0,   265,
       0,     0,     0,     0,     0,   154,   154,     0,     0,   266,
       0,   267,   153,     0,     0,     0,     0,     0,   153,     0,
       0,   153,     0,    83,    49,     0,     0,    85,   155,   155,
       0,   152,   152,   156,   152,     0,   152,   152,   152,   152,
     367,   152,    88,    50,     0,   153,     0,     0,     0,   579,
     581,   226,     0,     0,     0,    92,    52,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    96,
       0,     0,     0,     0,     0,   152,    97,   152,   152,   155,
       0,     0,   156,   156,     0,     0,   368,   153,     0,     0,
     153,   153,    57,   101,   102,     0,   104,   105,     0,     0,
       0,     0,     0,   369,   109,     0,     0,     0,   152,   152,
       0,     0,     0,   152,     0,     0,     0,     0,   631,     0,
     634,     0,     0,     0,   152,     0,   152,   152,     0,   155,
     155,     0,   641,   156,     0,   152,   152,     0,   152,   648,
     152,   152,     0,     0,   152,     0,   152,   152,     0,     0,
       0,     0,     0,   152,   660,   662,     0,   153,   153,     0,
     153,     0,   153,   153,   153,   153,     0,   153,   154,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   684,
       0,   153,     0,   153,   153,   690,     0,     0,   154,     0,
       0,     0,     0,     0,   154,     0,   697,   154,     0,   700,
       0,     0,     0,     0,     0,     0,     0,   706,     0,     0,
       0,     0,     0,     0,   153,   153,     0,     0,     0,   153,
       0,   154,     0,     0,     0,     0,     0,     0,     0,     0,
     153,     0,   153,   153,     0,     0,     0,   730,     0,     0,
       0,   153,   153,   734,   153,     0,   153,   153,     0,     0,
     153,     0,   153,   153,    83,    49,   375,   741,    85,   153,
       0,   573,     0,   154,     0,     0,   154,   154,   182,     0,
       0,     0,   155,    88,    50,     0,     0,     0,     0,     0,
       0,     0,   183,     0,     0,   758,    92,    52,     0,   469,
     184,     0,     0,     0,     0,     0,   185,     0,    94,    95,
      96,     0,     0,     0,     0,   186,   438,    97,     0,     0,
       0,     0,   155,     0,   574,     0,     0,     0,   155,     0,
       0,   155,     0,    57,   101,   102,   156,   104,   105,     0,
       0,   187,     0,   154,   154,   109,   154,     0,   154,   154,
     154,   154,     0,   154,     0,   155,     0,     0,     0,     0,
      83,    49,     0,     0,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   182,     0,   156,     0,     0,    88,
      50,     0,   156,     0,     0,   156,     0,   154,   183,   154,
     154,     0,    92,    52,     0,     0,   184,   155,     0,     0,
     155,   155,   185,     0,    94,    95,    96,     0,     0,   156,
       0,   186,     0,    97,     0,     0,     0,     0,     0,     0,
     154,   154,     0,   238,     0,   154,     0,     0,     0,    57,
     101,   102,     0,   104,   105,     0,   154,   187,   154,   154,
       0,   109,     0,     0,     0,     0,     0,   154,   154,     0,
     154,   156,   154,   154,   156,   156,   154,     0,   154,   154,
       0,     0,     0,     0,     0,   154,     0,   155,   155,     0,
     155,     0,   155,   155,   155,   155,     0,   155,     0,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,     0,     0,     0,     0,   239,     0,     0,     0,     0,
       0,     0,     0,   243,     0,     0,     0,     0,   249,     0,
       0,   155,     0,   155,   155,     0,     0,     0,     0,     0,
       0,   156,   156,     0,   156,     0,   156,   156,   156,   156,
       0,   156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   155,   155,     0,     0,     0,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     155,     0,   155,   155,     0,   156,     0,   156,   156,     0,
       0,   155,   155,     0,   155,     0,   155,   155,   612,     0,
     155,   337,   155,   155,     0,     0,     0,     0,     0,   155,
       0,     0,     0,     0,     0,     0,     0,     0,   156,   156,
       0,     0,   639,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   156,     0,   156,   156,     0,     0,
       0,   379,     0,     0,   337,   156,   156,     0,   156,     0,
     156,   156,     0,     0,   156,     0,   156,   156,     0,   401,
       0,     0,     0,   156,   669,   409,     0,     0,     0,     0,
       0,   417,   418,     0,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,     0,     0,     0,     0,     0,
       0,     0,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,     0,     0,     0,
       0,     0,     0,   472,     0,     0,   229,     0,     0,   229,
       0,    27,     0,    29,   712,   713,     0,   715,     0,     0,
     719,     0,   375,     0,   438,     0,     0,     0,     0,   493,
       0,     0,     0,     0,    41,     0,     0,     0,   500,     0,
       0,   502,     0,     0,     0,     0,     0,    64,     0,   230,
       0,     0,   230,     0,     0,     0,     0,     0,   744,     0,
     745,   746,     0,     0,     0,   526,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   539,     0,     0,     0,    64,
       0,   762,     0,     0,   229,    64,   639,   229,   229,   229,
       0,     0,   228,   235,     0,   228,     0,   669,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   712,   713,
       0,   715,     0,     0,   719,     0,     0,   744,     0,   745,
     746,    83,    49,     0,     0,    85,   762,   230,     0,     0,
     230,   230,   230,     0,     0,   182,     0,     0,     0,     0,
      88,    50,     0,     0,     0,     0,     0,     0,     0,   183,
       0,     0,     0,    92,    52,     0,   472,   184,     0,     0,
     472,     0,     0,   185,     0,    94,    95,    96,     0,     0,
     320,     0,   186,     0,    97,    64,     0,     0,     0,     0,
     228,   590,   335,   228,   228,   228,     0,     0,     0,     0,
      57,   101,   102,     0,   104,   105,     0,     0,   187,     0,
       0,     0,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   605,   606,     0,   608,
       0,     0,     0,     0,     0,   335,     0,     0,   626,     0,
      64,     0,     0,     0,   395,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   229,     0,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   666,     0,     0,     0,     0,     0,     0,   230,     0,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   472,     0,
       0,   228,     0,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,     0,    49,     0,     0,    64,   724,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,    52,     0,    53,   229,     0,     0,
       0,   229,     0,     0,     0,     0,     0,   749,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     6,     7,   563,
       0,    54,     0,     0,    55,     0,     0,     0,     0,    56,
      57,     0,     0,     0,     0,     0,     0,   767,   768,     0,
     230,    82,    58,     0,   230,    83,    49,    84,     0,    85,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,    88,    50,    89,     0,     0,     0,
       0,     0,     0,    90,    91,     0,     0,    92,    52,     0,
      53,    93,     0,   232,     0,     0,     0,     0,     0,    94,
      95,    96,     0,   228,   229,   229,     0,   228,    97,   229,
       0,     0,     0,     0,    98,   317,     0,     0,   100,     0,
       0,     0,     0,     0,    57,   101,   318,   103,   104,   319,
     106,     0,     0,     0,   107,   108,   109,   110,   111,     0,
       0,     0,     0,    64,    64,    64,     0,   230,   230,    82,
       0,     0,   230,    83,    49,    84,     0,    85,     0,     0,
       0,    86,    64,     0,     0,     0,     0,     0,     0,     0,
      87,     0,    88,    50,    89,     0,     0,     0,     0,     0,
       0,    90,    91,     0,     0,    92,    52,     0,    53,    93,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    96,
     228,   228,     0,     0,     0,   228,    97,     0,     0,     0,
       0,     0,    98,    99,     0,     0,   100,     0,     0,     0,
       0,     0,    57,   101,   102,   103,   104,   105,   106,     0,
       0,     0,   107,   108,   109,   110,   111,    82,     0,     0,
       0,    83,    49,    84,     0,    85,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
      88,    50,    89,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,    92,    52,     0,    53,    93,     0,     0,
       0,     0,     0,     0,     0,    94,    95,    96,     0,     0,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
      98,   269,     0,     0,   100,     0,     0,     0,     0,     0,
      57,   101,   102,   103,   104,   105,   106,     0,     0,     0,
     107,   108,   109,   110,   111,    82,     0,     0,     0,    83,
      49,    84,     0,    85,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,    88,    50,
      89,     0,     0,     0,     0,     0,     0,    90,    91,     0,
       0,    92,    52,     0,    53,    93,     0,     0,     0,     0,
       0,     0,     0,    94,    95,    96,     0,     0,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,    98,   484,
       0,     0,   100,     0,     0,     0,     0,     0,    57,   101,
     102,   103,   104,   105,   106,     0,     0,     0,   107,   108,
     109,   110,   111,    82,     0,     0,     0,    83,    49,    84,
       0,    85,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,    88,    50,    89,     0,
       0,     0,     0,     0,     0,    90,    91,     0,     0,    92,
      52,     0,    53,    93,     0,     0,     0,     0,     0,     0,
       0,    94,    95,    96,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,    98,   486,     0,     0,
     100,     0,     0,     0,     0,     0,    57,   101,   102,   103,
     104,   105,   106,     0,     0,     0,   107,   108,   109,   110,
     111,    82,     0,     0,     0,    83,    49,    84,     0,    85,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,    88,    50,    89,     0,     0,     0,
       0,     0,     0,    90,    91,     0,     0,    92,    52,     0,
      53,    93,     0,     0,     0,     0,     0,     0,     0,    94,
      95,    96,     0,     0,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,    98,   586,     0,     0,   100,     0,
       0,     0,     0,     0,    57,   101,   102,   103,   104,   105,
     106,     0,     0,     0,   107,   108,   109,   110,   111,    82,
       0,     0,     0,    83,    49,    84,     0,    85,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    50,    89,     0,     0,     0,     0,     0,
       0,    90,    91,     0,     0,    92,    52,     0,    53,    93,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    96,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,    98,     0,     0,     0,   100,     0,     0,     0,
       0,     0,    57,   101,   102,   103,   104,   105,   106,     0,
       0,     0,   107,    82,   109,   110,   111,    83,    49,    84,
       0,    85,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    50,   609,     0,
       0,     0,     0,     0,     0,   610,    91,     0,     0,    92,
      52,     0,    53,    93,     0,     0,     0,     0,     0,     0,
       0,    94,    95,    96,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,    98,     0,     0,     0,
     100,     0,     0,     0,     0,     0,    57,   101,   102,   103,
     104,   105,   106,    83,    49,     0,   107,    85,   109,   611,
     111,     0,     0,     0,     0,     0,     0,   182,     0,     0,
     177,     0,    88,    50,     0,     0,     0,     0,     0,     0,
       0,   183,     0,     0,     0,    92,    52,     0,     0,   184,
       0,     0,     0,     0,     0,   185,     0,    94,    95,    96,
       0,     0,     0,     0,   186,     0,    97,     0,     0,     0,
       0,     0,     0,     0,   333,     0,     0,    83,    49,     0,
       0,    85,    57,   101,   102,     0,   104,   105,     0,     0,
     187,   182,     0,     0,   109,     0,    88,    50,     0,     0,
       0,     0,     0,     0,     0,   183,     0,     0,     0,    92,
      52,     0,   469,   184,     0,     0,     0,     0,     0,   185,
       0,    94,    95,    96,     0,     0,     0,     0,   186,     0,
      97,     0,     0,     0,     0,     0,     0,   701,     0,     0,
       0,    83,    49,     0,     0,    85,    57,   101,   102,     0,
     104,   105,     0,     0,   187,   182,     0,     0,   109,     0,
      88,    50,     0,     0,     0,     0,     0,     0,     0,   183,
       0,     0,     0,    92,    52,     0,     0,   184,     0,     0,
       0,     0,     0,   185,     0,    94,    95,    96,     0,     0,
       0,     0,   186,     0,    97,     0,     0,     0,     0,     0,
       0,     0,   376,     0,     0,    83,    49,     0,     0,    85,
      57,   101,   102,     0,   104,   105,     0,     0,   187,   182,
       0,     0,   109,     0,    88,    50,     0,     0,     0,     0,
       0,     0,     0,   183,     0,     0,     0,    92,    52,     0,
       0,   184,     0,     0,     0,     0,     0,   185,     0,    94,
      95,    96,     0,     0,     0,     0,   186,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,   311,     0,    83,
      49,     0,     0,    85,    57,   101,   102,     0,   104,   105,
       0,     0,   187,   182,     0,     0,   109,     0,    88,    50,
       0,     0,     0,     0,     0,     0,     0,   183,     0,     0,
       0,    92,    52,     0,   469,   184,     0,     0,     0,     0,
       0,   185,     0,    94,    95,    96,     0,     0,     0,     0,
     186,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,    49,     0,     0,    85,    57,   101,
     102,     0,   104,   105,     0,     0,   187,   182,     0,     0,
     109,     0,    88,    50,     0,     0,     0,     0,     0,     0,
       0,   183,     0,     0,     0,    92,    52,     0,    53,   184,
       0,     0,     0,     0,     0,   185,     0,    94,    95,    96,
       0,     0,     0,     0,   186,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    49,     0,
       0,    85,    57,   101,   102,     0,   104,   105,     0,     0,
     187,   182,     0,     0,   109,     0,    88,    50,     0,     0,
       0,     0,     0,     0,     0,   183,     0,     0,     0,    92,
      52,     0,     0,   184,     0,     0,     0,     0,     0,   185,
       0,    94,    95,    96,     0,     0,     0,     0,   186,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     525,    83,    49,     0,     0,    85,    57,   101,   102,     0,
     104,   105,     0,     0,   187,   182,     0,     0,   109,     0,
      88,    50,     0,     0,     0,     0,     0,     0,     0,   183,
       0,     0,     0,    92,    52,     0,     0,   184,     0,     0,
       0,     0,     0,   185,     0,    94,    95,    96,     0,     0,
       0,     0,   186,     0,    97,     0,     0,     0,     0,     0,
       0,     0,   545,     0,     0,    83,    49,     0,     0,    85,
      57,   101,   102,     0,   104,   105,     0,     0,   187,   182,
       0,     0,   109,     0,    88,    50,     0,     0,     0,     0,
       0,     0,     0,   183,     0,     0,     0,    92,    52,     0,
       0,   184,     0,     0,     0,     0,     0,   185,     0,    94,
      95,    96,     0,     0,     0,     0,   186,     0,    97,     0,
       0,     0,     0,     0,     0,     0,   578,     0,     0,    83,
      49,     0,     0,    85,    57,   101,   102,     0,   104,   105,
       0,     0,   187,   182,     0,     0,   109,     0,    88,    50,
       0,     0,     0,     0,     0,     0,     0,   183,     0,     0,
       0,    92,    52,     0,     0,   184,     0,     0,     0,     0,
       0,   185,     0,    94,    95,    96,     0,     0,     0,     0,
     186,     0,    97,     0,     0,     0,     0,     0,     0,     0,
     580,     0,     0,    83,    49,     0,     0,    85,    57,   101,
     102,     0,   104,   105,     0,     0,   187,   182,     0,     0,
     109,     0,    88,    50,     0,     0,     0,     0,     0,     0,
       0,   183,     0,     0,     0,    92,    52,     0,     0,   184,
       0,     0,     0,     0,     0,   185,     0,    94,    95,    96,
       0,     0,     0,     0,   186,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   604,    83,    49,     0,
       0,    85,    57,   101,   102,     0,   104,   105,     0,     0,
     187,   182,     0,     0,   109,     0,    88,    50,     0,     0,
       0,     0,     0,     0,     0,   183,     0,     0,     0,    92,
      52,     0,     0,   184,     0,     0,     0,     0,     0,   185,
       0,    94,    95,    96,     0,     0,     0,     0,   186,     0,
      97,     0,     0,     0,     0,     0,     0,     0,   630,     0,
       0,    83,    49,     0,     0,    85,    57,   101,   102,     0,
     104,   105,     0,     0,   187,   182,     0,     0,   109,     0,
      88,    50,     0,     0,     0,     0,     0,     0,     0,   183,
       0,     0,     0,    92,    52,     0,     0,   184,     0,     0,
       0,     0,     0,   185,     0,    94,    95,    96,     0,     0,
       0,     0,   186,     0,    97,     0,     0,     0,     0,     0,
       0,     0,   633,     0,     0,    83,    49,     0,     0,    85,
      57,   101,   102,     0,   104,   105,     0,     0,   187,   182,
       0,     0,   109,     0,    88,    50,     0,     0,     0,     0,
       0,     0,     0,   183,     0,     0,     0,    92,    52,     0,
       0,   184,     0,     0,     0,     0,     0,   185,     0,    94,
      95,    96,     0,     0,     0,     0,   186,     0,    97,     0,
       0,     0,     0,     0,     0,     0,   640,     0,     0,    83,
      49,     0,     0,    85,    57,   101,   102,     0,   104,   105,
       0,     0,   187,   182,     0,     0,   109,     0,    88,    50,
       0,     0,     0,     0,     0,     0,     0,   183,     0,     0,
       0,    92,    52,     0,     0,   184,     0,     0,     0,     0,
       0,   185,     0,    94,    95,    96,     0,     0,     0,     0,
     186,     0,    97,     0,     0,     0,     0,     0,     0,     0,
     647,     0,     0,    83,    49,     0,     0,    85,    57,   101,
     102,     0,   104,   105,     0,     0,   187,   182,     0,     0,
     109,     0,    88,    50,     0,     0,     0,     0,     0,     0,
       0,   183,     0,     0,     0,    92,    52,     0,     0,   184,
       0,     0,     0,     0,     0,   185,     0,    94,    95,    96,
       0,     0,     0,     0,   186,     0,    97,     0,     0,     0,
       0,     0,     0,     0,   659,     0,     0,    83,    49,     0,
       0,    85,    57,   101,   102,     0,   104,   105,     0,     0,
     187,   182,     0,     0,   109,     0,    88,    50,     0,     0,
       0,     0,     0,     0,     0,   183,     0,     0,     0,    92,
      52,     0,     0,   184,     0,     0,     0,     0,     0,   185,
       0,    94,    95,    96,     0,     0,     0,     0,   186,     0,
      97,     0,     0,     0,     0,     0,     0,     0,   661,     0,
       0,    83,    49,     0,     0,    85,    57,   101,   102,     0,
     104,   105,     0,     0,   187,   182,     0,     0,   109,     0,
      88,    50,     0,     0,     0,     0,     0,     0,     0,   183,
       0,     0,     0,    92,    52,     0,     0,   184,     0,     0,
       0,     0,     0,   185,     0,    94,    95,    96,     0,     0,
       0,     0,   186,     0,    97,     0,     0,     0,     0,     0,
       0,     0,   683,     0,     0,    83,    49,     0,     0,    85,
      57,   101,   102,     0,   104,   105,     0,     0,   187,   182,
       0,     0,   109,     0,    88,    50,     0,     0,     0,     0,
       0,     0,     0,   183,     0,     0,     0,    92,    52,     0,
       0,   184,     0,     0,     0,     0,     0,   185,     0,    94,
      95,    96,     0,     0,     0,     0,   186,     0,    97,     0,
       0,     0,     0,     0,     0,     0,   689,     0,     0,    83,
      49,     0,     0,    85,    57,   101,   102,     0,   104,   105,
       0,     0,   187,   182,     0,     0,   109,     0,    88,    50,
       0,     0,     0,     0,     0,     0,     0,   183,     0,     0,
       0,    92,    52,     0,     0,   184,     0,     0,     0,     0,
       0,   185,     0,    94,    95,    96,     0,     0,     0,     0,
     186,     0,    97,     0,     0,     0,     0,     0,     0,     0,
     696,     0,     0,    83,    49,     0,     0,    85,    57,   101,
     102,     0,   104,   105,     0,     0,   187,   182,     0,     0,
     109,     0,    88,    50,     0,     0,     0,     0,     0,     0,
       0,   183,     0,     0,     0,    92,    52,     0,     0,   184,
       0,     0,     0,     0,     0,   185,     0,    94,    95,    96,
       0,     0,     0,     0,   186,     0,    97,     0,     0,     0,
       0,     0,     0,     0,   699,     0,     0,    83,    49,     0,
       0,    85,    57,   101,   102,     0,   104,   105,     0,     0,
     187,   182,     0,     0,   109,     0,    88,    50,     0,     0,
       0,     0,     0,     0,     0,   183,     0,     0,     0,    92,
      52,     0,     0,   184,     0,     0,     0,     0,     0,   185,
       0,    94,    95,    96,     0,     0,     0,     0,   186,     0,
      97,     0,     0,     0,     0,     0,     0,     0,   705,     0,
       0,    83,    49,     0,     0,    85,    57,   101,   102,     0,
     104,   105,     0,     0,   187,   182,     0,     0,   109,     0,
      88,    50,     0,     0,     0,     0,     0,     0,     0,   183,
       0,     0,     0,    92,    52,     0,     0,   184,     0,     0,
       0,     0,     0,   185,     0,    94,    95,    96,     0,     0,
       0,     0,   186,     0,    97,     0,     0,     0,     0,     0,
       0,     0,   729,     0,     0,    83,    49,     0,     0,    85,
      57,   101,   102,     0,   104,   105,     0,     0,   187,   182,
       0,     0,   109,     0,    88,    50,     0,     0,     0,     0,
       0,     0,     0,   183,     0,     0,     0,    92,    52,     0,
       0,   184,     0,     0,     0,     0,     0,   185,     0,    94,
      95,    96,     0,     0,     0,     0,   186,     0,    97,     0,
       0,     0,     0,     0,     0,     0,   733,     0,     0,    83,
      49,     0,     0,    85,    57,   101,   102,     0,   104,   105,
       0,     0,   187,   182,     0,     0,   109,     0,    88,    50,
       0,     0,     0,     0,     0,     0,     0,   183,     0,     0,
       0,    92,    52,     0,     0,   184,     0,     0,     0,     0,
       0,   185,     0,    94,    95,    96,     0,     0,     0,     0,
     186,     0,    97,     0,     0,     0,     0,     0,     0,     0,
     740,     0,     0,    83,    49,     0,     0,    85,    57,   101,
     102,     0,   104,   105,     0,     0,   187,   182,     0,     0,
     109,     0,    88,    50,     0,     0,     0,     0,     0,     0,
       0,   183,     0,     0,     0,    92,    52,     0,     0,   184,
       0,     0,     0,     0,     0,   185,     0,    94,    95,    96,
       0,     0,     0,     0,   186,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   748,    83,    49,     0,
       0,    85,    57,   101,   102,     0,   104,   105,     0,     0,
     187,   182,     0,     0,   109,     0,    88,    50,     0,     0,
       0,     0,     0,     0,     0,   183,     0,     0,     0,    92,
      52,     0,     0,   184,     0,     0,     0,     0,     0,   185,
       0,    94,    95,    96,     0,     0,     0,     0,   186,     0,
      97,     0,     0,     0,     0,     0,     0,     0,   757,     0,
       0,    83,    49,     0,     0,    85,    57,   101,   102,     0,
     104,   105,     0,     0,   187,   182,     0,     0,   109,     0,
      88,    50,     0,     0,     0,     0,     0,     0,     0,   183,
       0,     0,     0,    92,    52,     0,     0,   184,     0,     0,
       0,     0,     0,   185,     0,    94,    95,    96,     0,     0,
       0,     0,   186,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   766,    83,    49,     0,     0,    85,
      57,   101,   102,     0,   104,   105,     0,     0,   187,   182,
       0,     0,   109,     0,    88,    50,     0,     0,     0,     0,
       0,     0,     0,   226,     0,     0,     0,    92,    52,     0,
       0,   227,     0,     0,     0,     0,     0,   185,     0,    94,
      95,    96,     0,     0,     0,     0,   186,     0,    97,     0,
       0,     0,     0,     0,    83,    49,     0,     0,    85,     0,
       0,     0,     0,     0,    57,   101,   102,     0,   104,   105,
       0,   367,   187,    88,    50,     0,   109,     0,     0,     0,
       0,     0,   226,     0,     0,     0,    92,    52,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,    94,    95,
      96,     0,     0,     0,     0,     0,     0,    97,     0,     0,
      83,    49,     0,     0,    85,     0,     0,   720,     0,     0,
       0,     0,     0,    57,   101,   102,     0,   104,   105,    88,
      50,     0,    83,    49,   369,   109,    85,     0,   226,     0,
       0,     0,    92,    52,     0,     0,    93,     0,     0,     0,
       0,    88,    50,     0,    94,    95,    96,     0,     0,     0,
     226,     0,     0,    97,    92,    52,     0,     0,    93,     0,
       0,   600,     0,     0,     0,     0,    94,    95,    96,    57,
     101,   102,     0,   104,   105,    97,     0,     0,    83,    49,
       0,   109,    85,   671,     0,     0,     0,     0,     0,     0,
       0,    57,   101,   102,     0,   104,   105,    88,    50,     0,
      83,    49,     0,   109,    85,     0,   226,     0,     0,     0,
      92,    52,     0,     0,    93,     0,     0,     0,     0,    88,
      50,     0,    94,    95,    96,     0,     0,     0,   226,     0,
       0,    97,    92,    52,     0,     0,    93,     0,     0,   673,
       0,     0,     0,     0,    94,    95,    96,    57,   101,   102,
       0,   104,   105,    97,     0,     0,    83,    49,     0,   109,
      85,   717,     0,     0,     0,     0,     0,     0,     0,    57,
     101,   102,     0,   104,   105,    88,    50,     0,    83,    49,
       0,   109,    85,     0,   226,     0,     0,     0,    92,    52,
       0,     0,    93,     0,     0,     0,     0,    88,    50,     0,
      94,    95,    96,     0,     0,     0,   226,     0,     0,    97,
      92,    52,     0,     0,    93,     0,     0,   763,     0,     0,
       0,     0,    94,    95,    96,    57,   101,   102,     0,   104,
     105,    97,     0,     0,    83,    49,     0,   109,    85,   775,
       0,     0,     0,     0,     0,     0,     0,    57,   101,   102,
       0,   104,   105,    88,    50,     0,    83,    49,     0,   109,
      85,     0,   226,     0,     0,     0,    92,    52,     0,     0,
      93,     0,     0,     0,     0,    88,    50,     0,    94,    95,
      96,     0,     0,     0,   226,     0,     0,    97,    92,    52,
       0,     0,    93,     0,     0,   777,     0,     0,     0,     0,
      94,    95,    96,    57,   101,   102,     0,   104,   105,    97,
       0,     0,    83,    49,     0,   109,    85,   786,     0,     0,
       0,     0,     0,     0,     0,    57,   101,   102,     0,   104,
     105,    88,    50,     0,     0,    49,     0,   109,     0,     0,
     226,     0,     0,     0,    92,    52,     0,     0,    93,     0,
       0,     2,     0,     0,    50,     0,    94,    95,    96,     0,
       0,     0,    51,     0,     0,    97,     0,    52,     0,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,   101,   102,     0,   104,   105,     0,     0,     0,
       6,     7,     0,   109,   170,   254,     0,    55,     0,     0,
     255,     0,    56,    57,     0,     0,     0,     0,     0,     0,
     256,   -34,     0,   257,     0,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   258,     0,   259,   -34,
       0,     0,     0,     0,     0,     0,     0,     0,   260,     0,
       0,     0,   261,     0,   262,     0,     0,     0,     0,     0,
     263,     0,     0,   264,     0,     0,   265,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   266,     0,   267
};

static const yytype_int16 yycheck[] =
{
      53,    39,   221,   117,   256,   329,   534,    28,    39,   221,
     469,   603,   604,    94,   473,   172,    97,     9,    56,   499,
      18,   273,    59,    18,    17,    39,    47,    48,   108,    67,
      12,   164,   112,    18,    18,    66,    67,    18,    39,    18,
      18,    12,    17,   172,    18,    55,    28,    27,    12,    31,
      81,    14,    55,    53,    64,    12,    87,    39,    20,    21,
      31,    64,    44,    60,   117,     0,    29,    31,    39,   107,
      39,    20,    47,    44,    31,    89,    74,    69,    79,    74,
      39,    74,    39,   675,    18,    67,    68,    44,   168,    74,
      74,    72,    71,    74,    53,    18,    74,    79,    80,   534,
      74,   182,    82,    16,   185,   186,   187,    66,    67,    80,
      92,   240,   241,   593,    21,    28,   113,   117,    39,   172,
      91,   159,    81,    80,   253,    74,   164,   256,    87,    42,
     167,   168,    45,    39,    91,    18,    95,    39,    72,   219,
     220,    46,    18,    39,   273,   274,   177,    53,    39,    72,
     678,    74,   680,   184,    67,    68,   748,     6,   117,    66,
      66,    67,    16,   160,   161,   322,    79,    39,   221,   222,
      39,    39,   172,   765,   766,    81,    39,    20,    53,    18,
     313,    87,   315,    74,    18,    39,    18,   779,    12,    72,
     221,   188,   651,    89,    16,    49,    72,    18,    47,    18,
      18,    18,    56,    39,    28,    18,    74,    31,    77,   323,
      82,   117,    20,   172,    77,    39,    33,    39,   177,   272,
      44,   221,   222,    82,   752,   184,    85,    49,    82,   481,
     554,    85,    18,    72,    56,   763,   233,   234,    72,    47,
      72,    49,   117,   678,    17,   680,   774,   775,   245,   777,
      14,    72,   780,    72,    72,   783,    80,   785,   786,    72,
      82,    39,   221,    85,   792,    29,   172,    18,   227,   322,
     323,   177,   272,   232,    47,   313,    12,   315,   184,   360,
     361,   362,    20,    39,   349,   350,    72,    18,    20,   369,
     370,    20,    21,    12,   332,    31,    46,   172,   329,    20,
      56,    18,    18,    39,   678,    18,   680,    47,    44,    28,
      48,    18,    31,   525,    18,   221,    48,   752,    18,   531,
      39,    72,   322,   323,    74,    44,   232,    18,   763,    18,
     327,    39,    20,    69,    72,    46,   367,   334,   335,   774,
     775,    72,   777,    39,    80,   780,   221,   222,   783,     5,
     785,   786,   481,    72,    10,    72,    72,   792,    20,    72,
      48,    80,    20,   322,   323,    72,   404,    23,    72,    39,
     329,   485,    72,    24,    53,    26,    16,    23,   752,    49,
      36,    72,    38,    72,   381,    47,   383,    49,    28,   763,
      48,   603,   604,   390,    12,   392,    52,   272,    54,    48,
     774,   775,    48,   777,    60,    45,   780,    63,   367,   783,
      66,   785,   786,    31,   495,    23,   322,   323,   792,    39,
      76,    39,    78,   329,    20,    21,    44,    67,    68,    20,
      21,    49,   485,    20,    21,   564,   565,     5,   117,    79,
      48,    39,    10,   523,   524,    20,    46,   322,   323,    20,
      21,    47,    20,    21,    47,    23,   494,    48,   677,    74,
      20,   367,    80,   675,    12,   677,    55,    47,    36,    67,
      38,    39,   525,    48,    39,    64,    47,    16,   531,    20,
      48,   534,    39,    31,    52,   485,    54,    21,    48,    28,
     487,    39,    60,   172,    22,    63,    44,    72,    66,    39,
      53,    66,    67,    42,    59,   558,    45,    39,    76,    49,
      78,   592,    72,    23,    47,   553,    56,    49,   556,    58,
      75,    89,    77,   554,   545,   525,   485,    47,    67,    68,
      53,   531,    80,    35,   534,    37,   748,    47,    48,    62,
      79,     5,   221,   222,    74,    39,    10,   600,    48,    51,
     603,   604,    18,   765,   766,    49,   594,    73,   558,    23,
      48,    11,    12,    39,   117,    39,    32,   779,    34,    74,
      33,    34,    36,    49,    38,    49,   535,   536,   537,   485,
      46,    31,    16,   355,   356,   357,    49,    50,    52,    74,
      54,    39,     4,   272,    28,   554,    60,   358,   359,    63,
     600,    49,    66,   603,   604,     8,    39,   628,    56,   630,
     485,    45,    76,   389,    78,   391,    49,   670,   671,   172,
     673,    65,   675,   676,   677,   678,    46,   680,    48,   535,
     536,   537,     3,    67,    68,    74,   351,   352,   353,   354,
      47,    72,    74,   322,   323,    79,   677,    48,   554,    74,
     525,    74,    16,   691,    16,    74,   531,    73,    47,   534,
      39,   714,   683,   716,   717,   686,     6,    72,   221,   222,
     670,   671,    74,   673,    17,   675,   676,   677,   678,    18,
     680,    72,    48,   558,    33,    39,    47,    39,    72,    47,
      72,    16,    47,    39,   747,   748,    53,    73,    16,   752,
      47,    39,    39,    73,    39,    47,   727,     6,   729,    74,
     763,    47,   765,   766,   714,    17,   716,   717,   677,   272,
      18,   774,   775,    74,   777,   600,   779,   780,   603,   604,
     783,    47,   785,   786,   755,    47,    33,    47,    47,   792,
      73,    71,    74,    74,    72,    74,    72,   747,   748,    22,
      22,    47,   752,    47,    73,    47,    47,    72,    39,    39,
     117,    74,    47,   763,    72,   765,   766,    74,    74,   322,
     323,   677,    72,    74,   774,   775,    47,   777,    17,   779,
     780,    74,    11,   783,    74,   785,   786,    74,    72,   537,
      72,    74,   792,    72,    72,   670,   671,    74,   673,    74,
     675,   676,   677,   678,    74,   680,   485,    74,    74,    72,
      72,    72,    11,    12,    67,   172,    15,   308,   597,    95,
      53,   184,   677,   405,   169,   677,    25,   597,   234,   343,
     345,    30,    31,   346,    -1,   347,    -1,   348,    -1,   714,
      39,   716,   717,    -1,    43,    44,   525,    -1,    47,    -1,
      -1,    -1,   531,    -1,    -1,   534,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,
      -1,    -1,   747,   748,    53,    -1,    -1,   752,    -1,   558,
      -1,    80,    81,    82,   117,    84,    85,    -1,   763,    88,
     765,   766,    -1,    92,    -1,    -1,    -1,    -1,     5,   774,
     775,    -1,   777,    10,   779,   780,    -1,    -1,   783,    -1,
     785,   786,    -1,    20,    -1,   272,    23,   792,    -1,    -1,
      -1,   600,    -1,   393,   603,   604,    -1,    -1,    -1,    36,
      -1,    38,   485,    -1,    -1,    -1,    -1,    -1,   117,   172,
      -1,    48,    -1,    -1,    -1,    52,    -1,    54,    55,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    63,    64,    -1,    66,
      -1,    -1,    -1,    -1,    -1,   322,   323,    -1,    -1,    76,
      -1,    78,   525,    -1,    -1,    -1,    -1,    -1,   531,    -1,
      -1,   534,    -1,    11,    12,    -1,    -1,    15,   221,   222,
      -1,   670,   671,   172,   673,    -1,   675,   676,   677,   678,
      28,   680,    30,    31,    -1,   558,    -1,    -1,    -1,   479,
     480,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,   714,    64,   716,   717,   272,
      -1,    -1,   221,   222,    -1,    -1,    74,   600,    -1,    -1,
     603,   604,    80,    81,    82,    -1,    84,    85,    -1,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,   747,   748,
      -1,    -1,    -1,   752,    -1,    -1,    -1,    -1,   548,    -1,
     550,    -1,    -1,    -1,   763,    -1,   765,   766,    -1,   322,
     323,    -1,   562,   272,    -1,   774,   775,    -1,   777,   569,
     779,   780,    -1,    -1,   783,    -1,   785,   786,    -1,    -1,
      -1,    -1,    -1,   792,   584,   585,    -1,   670,   671,    -1,
     673,    -1,   675,   676,   677,   678,    -1,   680,   485,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,   323,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   629,
      -1,   714,    -1,   716,   717,   635,    -1,    -1,   525,    -1,
      -1,    -1,    -1,    -1,   531,    -1,   646,   534,    -1,   649,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   657,    -1,    -1,
      -1,    -1,    -1,    -1,   747,   748,    -1,    -1,    -1,   752,
      -1,   558,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     763,    -1,   765,   766,    -1,    -1,    -1,   687,    -1,    -1,
      -1,   774,   775,   693,   777,    -1,   779,   780,    -1,    -1,
     783,    -1,   785,   786,    11,    12,   222,   707,    15,   792,
      -1,    18,    -1,   600,    -1,    -1,   603,   604,    25,    -1,
      -1,    -1,   485,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,   735,    43,    44,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,   272,    64,    -1,    -1,
      -1,    -1,   525,    -1,    71,    -1,    -1,    -1,   531,    -1,
      -1,   534,    -1,    80,    81,    82,   485,    84,    85,    -1,
      -1,    88,    -1,   670,   671,    92,   673,    -1,   675,   676,
     677,   678,    -1,   680,    -1,   558,    -1,    -1,    -1,    -1,
      11,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,   525,    -1,    -1,    30,
      31,    -1,   531,    -1,    -1,   534,    -1,   714,    39,   716,
     717,    -1,    43,    44,    -1,    -1,    47,   600,    -1,    -1,
     603,   604,    53,    -1,    55,    56,    57,    -1,    -1,   558,
      -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
     747,   748,    -1,    74,    -1,   752,    -1,    -1,    -1,    80,
      81,    82,    -1,    84,    85,    -1,   763,    88,   765,   766,
      -1,    92,    -1,    -1,    -1,    -1,    -1,   774,   775,    -1,
     777,   600,   779,   780,   603,   604,   783,    -1,   785,   786,
      -1,    -1,    -1,    -1,    -1,   792,    -1,   670,   671,    -1,
     673,    -1,   675,   676,   677,   678,    -1,   680,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   714,    -1,   716,   717,    -1,    -1,    -1,    -1,    -1,
      -1,   670,   671,    -1,   673,    -1,   675,   676,   677,   678,
      -1,   680,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   747,   748,    -1,    -1,    -1,   752,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     763,    -1,   765,   766,    -1,   714,    -1,   716,   717,    -1,
      -1,   774,   775,    -1,   777,    -1,   779,   780,   534,    -1,
     783,   184,   785,   786,    -1,    -1,    -1,    -1,    -1,   792,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   747,   748,
      -1,    -1,   558,   752,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   763,    -1,   765,   766,    -1,    -1,
      -1,   224,    -1,    -1,   227,   774,   775,    -1,   777,    -1,
     779,   780,    -1,    -1,   783,    -1,   785,   786,    -1,   242,
      -1,    -1,    -1,   792,   600,   248,    -1,    -1,    -1,    -1,
      -1,   254,   255,    -1,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,    -1,    -1,    -1,
      -1,    -1,    -1,   306,    -1,    -1,    94,    -1,    -1,    97,
      -1,     3,    -1,     5,   670,   671,    -1,   673,    -1,    -1,
     676,    -1,   678,    -1,   680,    -1,    -1,    -1,    -1,   332,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,   341,    -1,
      -1,   344,    -1,    -1,    -1,    -1,    -1,    39,    -1,    94,
      -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,   714,    -1,
     716,   717,    -1,    -1,    -1,   368,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   388,    -1,    -1,    -1,    81,
      -1,   747,    -1,    -1,   182,    87,   752,   185,   186,   187,
      -1,    -1,    94,    95,    -1,    97,    -1,   763,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   774,   775,
      -1,   777,    -1,    -1,   780,    -1,    -1,   783,    -1,   785,
     786,    11,    12,    -1,    -1,    15,   792,   182,    -1,    -1,
     185,   186,   187,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    44,    -1,   469,    47,    -1,    -1,
     473,    -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,
     172,    -1,    62,    -1,    64,   177,    -1,    -1,    -1,    -1,
     182,   494,   184,   185,   186,   187,    -1,    -1,    -1,    -1,
      80,    81,    82,    -1,    84,    85,    -1,    -1,    88,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   529,   530,    -1,   532,
      -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,   541,    -1,
     232,    -1,    -1,    -1,   236,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   343,    -1,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   594,    -1,    -1,    -1,    -1,    -1,    -1,   343,    -1,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   651,    -1,
      -1,   343,    -1,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,    -1,    12,    -1,    -1,   367,   679,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    44,    -1,    46,   495,    -1,    -1,
      -1,   499,    -1,    -1,    -1,    -1,    -1,   720,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,   421,
      -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,   750,   751,    -1,
     495,     7,    92,    -1,   499,    11,    12,    13,    -1,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    43,    44,    -1,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    -1,   495,   592,   593,    -1,   499,    64,   597,
      -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    -1,    -1,    -1,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,   535,   536,   537,    -1,   592,   593,     7,
      -1,    -1,   597,    11,    12,    13,    -1,    15,    -1,    -1,
      -1,    19,   554,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
     592,   593,    -1,    -1,    -1,   597,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    -1,
      -1,    -1,    90,    91,    92,    93,    94,     7,    -1,    -1,
      -1,    11,    12,    13,    -1,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    43,    44,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      70,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    -1,    -1,    -1,
      90,    91,    92,    93,    94,     7,    -1,    -1,    -1,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      -1,    43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    85,    86,    -1,    -1,    -1,    90,    91,
      92,    93,    94,     7,    -1,    -1,    -1,    11,    12,    13,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    -1,
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
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,
      44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    11,    12,    -1,    90,    15,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      28,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    11,    12,    -1,
      -1,    15,    80,    81,    82,    -1,    84,    85,    -1,    -1,
      88,    25,    -1,    -1,    92,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    11,    12,    -1,    -1,    15,    80,    81,    82,    -1,
      84,    85,    -1,    -1,    88,    25,    -1,    -1,    92,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    11,    12,    -1,    -1,    15,
      80,    81,    82,    -1,    84,    85,    -1,    -1,    88,    25,
      -1,    -1,    92,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    11,
      12,    -1,    -1,    15,    80,    81,    82,    -1,    84,    85,
      -1,    -1,    88,    25,    -1,    -1,    92,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    12,    -1,    -1,    15,    80,    81,
      82,    -1,    84,    85,    -1,    -1,    88,    25,    -1,    -1,
      92,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    -1,
      -1,    15,    80,    81,    82,    -1,    84,    85,    -1,    -1,
      88,    25,    -1,    -1,    92,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    11,    12,    -1,    -1,    15,    80,    81,    82,    -1,
      84,    85,    -1,    -1,    88,    25,    -1,    -1,    92,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    11,    12,    -1,    -1,    15,
      80,    81,    82,    -1,    84,    85,    -1,    -1,    88,    25,
      -1,    -1,    92,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    11,
      12,    -1,    -1,    15,    80,    81,    82,    -1,    84,    85,
      -1,    -1,    88,    25,    -1,    -1,    92,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    11,    12,    -1,    -1,    15,    80,    81,
      82,    -1,    84,    85,    -1,    -1,    88,    25,    -1,    -1,
      92,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    11,    12,    -1,
      -1,    15,    80,    81,    82,    -1,    84,    85,    -1,    -1,
      88,    25,    -1,    -1,    92,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    11,    12,    -1,    -1,    15,    80,    81,    82,    -1,
      84,    85,    -1,    -1,    88,    25,    -1,    -1,    92,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    11,    12,    -1,    -1,    15,
      80,    81,    82,    -1,    84,    85,    -1,    -1,    88,    25,
      -1,    -1,    92,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    11,
      12,    -1,    -1,    15,    80,    81,    82,    -1,    84,    85,
      -1,    -1,    88,    25,    -1,    -1,    92,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    11,    12,    -1,    -1,    15,    80,    81,
      82,    -1,    84,    85,    -1,    -1,    88,    25,    -1,    -1,
      92,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    11,    12,    -1,
      -1,    15,    80,    81,    82,    -1,    84,    85,    -1,    -1,
      88,    25,    -1,    -1,    92,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    11,    12,    -1,    -1,    15,    80,    81,    82,    -1,
      84,    85,    -1,    -1,    88,    25,    -1,    -1,    92,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    11,    12,    -1,    -1,    15,
      80,    81,    82,    -1,    84,    85,    -1,    -1,    88,    25,
      -1,    -1,    92,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    11,
      12,    -1,    -1,    15,    80,    81,    82,    -1,    84,    85,
      -1,    -1,    88,    25,    -1,    -1,    92,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    11,    12,    -1,    -1,    15,    80,    81,
      82,    -1,    84,    85,    -1,    -1,    88,    25,    -1,    -1,
      92,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    11,    12,    -1,
      -1,    15,    80,    81,    82,    -1,    84,    85,    -1,    -1,
      88,    25,    -1,    -1,    92,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    11,    12,    -1,    -1,    15,    80,    81,    82,    -1,
      84,    85,    -1,    -1,    88,    25,    -1,    -1,    92,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    11,    12,    -1,    -1,    15,
      80,    81,    82,    -1,    84,    85,    -1,    -1,    88,    25,
      -1,    -1,    92,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    11,
      12,    -1,    -1,    15,    80,    81,    82,    -1,    84,    85,
      -1,    -1,    88,    25,    -1,    -1,    92,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    11,    12,    -1,    -1,    15,    80,    81,
      82,    -1,    84,    85,    -1,    -1,    88,    25,    -1,    -1,
      92,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    11,    12,    -1,
      -1,    15,    80,    81,    82,    -1,    84,    85,    -1,    -1,
      88,    25,    -1,    -1,    92,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    11,    12,    -1,    -1,    15,    80,    81,    82,    -1,
      84,    85,    -1,    -1,    88,    25,    -1,    -1,    92,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    11,    12,    -1,    -1,    15,
      80,    81,    82,    -1,    84,    85,    -1,    -1,    88,    25,
      -1,    -1,    92,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    11,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    -1,    84,    85,
      -1,    28,    88,    30,    31,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      11,    12,    -1,    -1,    15,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    -1,    84,    85,    30,
      31,    -1,    11,    12,    91,    92,    15,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    30,    31,    -1,    55,    56,    57,    -1,    -1,    -1,
      39,    -1,    -1,    64,    43,    44,    -1,    -1,    47,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    55,    56,    57,    80,
      81,    82,    -1,    84,    85,    64,    -1,    -1,    11,    12,
      -1,    92,    15,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    -1,    84,    85,    30,    31,    -1,
      11,    12,    -1,    92,    15,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    30,
      31,    -1,    55,    56,    57,    -1,    -1,    -1,    39,    -1,
      -1,    64,    43,    44,    -1,    -1,    47,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    55,    56,    57,    80,    81,    82,
      -1,    84,    85,    64,    -1,    -1,    11,    12,    -1,    92,
      15,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    -1,    84,    85,    30,    31,    -1,    11,    12,
      -1,    92,    15,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    30,    31,    -1,
      55,    56,    57,    -1,    -1,    -1,    39,    -1,    -1,    64,
      43,    44,    -1,    -1,    47,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    55,    56,    57,    80,    81,    82,    -1,    84,
      85,    64,    -1,    -1,    11,    12,    -1,    92,    15,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      -1,    84,    85,    30,    31,    -1,    11,    12,    -1,    92,
      15,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    30,    31,    -1,    55,    56,
      57,    -1,    -1,    -1,    39,    -1,    -1,    64,    43,    44,
      -1,    -1,    47,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      55,    56,    57,    80,    81,    82,    -1,    84,    85,    64,
      -1,    -1,    11,    12,    -1,    92,    15,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    -1,    84,
      85,    30,    31,    -1,    -1,    12,    -1,    92,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    28,    -1,    -1,    31,    -1,    55,    56,    57,    -1,
      -1,    -1,    39,    -1,    -1,    64,    -1,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    -1,    84,    85,    -1,    -1,    -1,
      67,    68,    -1,    92,    71,     5,    -1,    74,    -1,    -1,
      10,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    28,    42,    45,    58,    67,    68,    79,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     119,   120,   121,   141,    39,    39,    79,   112,    39,   112,
       0,    99,   105,   100,   105,   106,    16,    45,   121,    46,
     122,   112,    20,    74,   122,    20,   105,    39,    39,    12,
      31,    39,    44,    46,    71,    74,    79,    80,    92,   107,
     108,   109,   110,   111,   112,   113,   120,   123,   124,   125,
     126,   130,   135,   136,   137,   144,    20,    39,    77,   122,
     122,    47,     7,    11,    13,    15,    19,    28,    30,    32,
      39,    40,    43,    47,    55,    56,    57,    64,    70,    71,
      74,    81,    82,    83,    84,    85,    86,    90,    91,    92,
      93,    94,   107,   108,   110,   112,   144,   145,   146,   147,
     149,   150,   151,   153,   154,   155,   156,   157,   159,   160,
     162,   164,   170,   172,   173,   174,   175,   176,   177,   178,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   196,   209,   210,   213,   214,   215,   144,    39,   131,
     137,    39,   127,   128,   131,    48,   114,    92,   107,   137,
      71,   124,    46,   138,    39,    77,    74,    28,    72,   107,
     132,   133,    25,    39,    47,    53,    62,    88,   108,   110,
     185,   189,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,    39,    74,    39,    74,    91,
     107,    47,    17,    47,    47,   193,    39,    47,   112,   187,
     188,   208,    49,   108,   111,   112,   115,   208,    74,   193,
      20,    21,    47,   193,   144,    39,   127,    20,    47,   193,
     127,    20,   114,    21,     5,    10,    20,    23,    36,    38,
      48,    52,    54,    60,    63,    66,    76,    78,   114,    71,
     146,    74,    22,    20,    21,    48,     5,    10,    23,    36,
      38,    52,    54,    60,    63,    66,    76,    78,     5,    10,
      23,    36,    38,    52,    54,    60,    63,    66,    76,    78,
      55,    64,    74,   134,   144,   114,    23,   114,    18,    74,
     134,    73,    48,   131,   127,   131,   138,    71,    82,    85,
     112,   115,   139,   145,    74,    74,   107,    39,    89,    18,
      72,   208,     6,    72,   108,   112,   132,   193,   208,   208,
     208,    17,    74,     9,    69,     4,     8,    65,     3,    24,
      26,    33,    34,    49,    50,    35,    37,    51,    53,    62,
      59,    75,    77,    74,    74,   127,   127,    28,    74,    91,
     107,   154,   166,   167,   169,   147,    72,   140,   193,   193,
      72,   108,    69,   108,   110,   116,   117,   118,    48,   114,
     192,   114,   192,    47,    49,   112,    74,    39,   115,    39,
     115,   193,    74,    14,    29,   179,   180,    74,    16,   193,
      74,    74,    16,    20,    39,    56,   115,   193,   193,    16,
      39,    56,    82,    85,   115,   186,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,    20,   147,    39,
     115,   186,    39,   115,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,    46,
     129,   142,   193,    23,   128,    73,   134,    74,   134,    47,
      47,    20,    82,    85,    71,   145,    71,    39,    89,   114,
      39,   133,   144,   193,     6,    72,   114,   114,    72,    72,
     193,   199,   193,   200,   201,   202,   203,   204,   204,   205,
     205,   205,   205,   206,   206,   206,   207,   207,   208,   208,
     208,    74,    74,    91,   107,    74,   193,   127,   127,    74,
      17,    18,    18,    72,    72,    27,    82,    18,    33,   193,
     142,    48,   114,   142,   114,    72,   140,    33,    47,    49,
      47,    39,    39,    72,    47,   144,    29,   180,    72,    16,
      39,    56,    47,   112,    20,    21,    39,    73,    16,    47,
      39,    39,    73,    18,    71,   129,   143,   129,    72,   140,
      72,   140,    82,   115,    47,    47,    71,   114,    39,   144,
     193,   208,    72,    72,     6,   211,    74,    17,   127,   127,
      72,   168,   169,    74,    74,   193,   193,   154,   193,    32,
      39,    93,   147,   148,   149,   152,   157,   158,   161,   163,
     165,   171,   110,   110,   117,    73,   193,   122,    72,    47,
      72,   140,    33,    72,   140,    47,   144,   133,   144,   147,
      72,   140,    39,   115,    39,   115,    47,    72,   140,    47,
      71,    18,    71,    74,    72,    74,    72,    47,    82,    72,
     140,    72,   140,   208,   211,   144,   193,   194,   197,   147,
      72,    72,   168,    72,   168,    74,    72,    47,    17,    47,
      22,    73,   122,    72,   140,   122,    72,    47,    72,    72,
     140,    72,    72,    47,    39,    39,    72,   140,    72,    72,
     140,    71,   129,    74,    74,    72,   140,    47,    74,    72,
      74,    72,   147,   147,    72,   147,    72,    72,   168,   147,
      74,   166,   167,   148,   193,   148,   122,    72,   122,    72,
     140,    72,   144,    72,   140,    47,    72,    72,    74,    72,
      72,   140,    74,    74,   147,   147,   147,    72,    74,   193,
      74,    17,    72,   122,   122,    72,    72,    72,   140,    74,
      74,    72,   147,    72,   168,    74,    74,   193,   193,   148,
     122,    72,    74,   148,    72,    72,   168,    72,   168,    74,
      72,   148,   148,    72,   148,    72,    72,   168,   148,   148,
     148,   148,    72,   148
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
     124,   124,   124,   124,   125,   125,   125,   126,   126,   127,
     127,   128,   128,   128,   128,   129,   129,   130,   130,   130,
     130,   131,   131,   132,   132,   133,   133,   133,   133,   133,
     133,   134,   134,   135,   136,   136,   137,   137,   138,   138,
     138,   138,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   140,   140,   141,   141,   142,   142,
     142,   142,   143,   143,   144,   144,   145,   145,   146,   146,
     146,   146,   146,   147,   147,   147,   147,   147,   147,   148,
     148,   148,   148,   148,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   150,   151,   152,   153,   154,
     154,   154,   154,   154,   154,   154,   155,   156,   157,   158,
     159,   159,   160,   161,   162,   162,   163,   163,   164,   164,
     164,   164,   164,   164,   164,   164,   165,   165,   165,   165,
     165,   165,   165,   165,   166,   166,   167,   167,   167,   167,
     168,   169,   169,   170,   171,   172,   172,   173,   174,   174,
     175,   175,   176,   177,   178,   178,   178,   179,   179,   180,
     181,   181,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   183,   183,   183,   183,   183,   183,   183,   184,
     184,   184,   184,   184,   185,   185,   185,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   187,   187,   187,   188,   188,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   191,   191,   191,   191,
     191,   191,   192,   192,   193,   193,   194,   194,   194,   194,
     194,   194,   195,   195,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     197,   197,   197,   198,   198,   199,   199,   200,   200,   201,
     201,   202,   202,   203,   203,   203,   204,   204,   204,   204,
     204,   205,   205,   205,   205,   206,   206,   206,   207,   207,
     207,   207,   208,   208,   208,   208,   208,   209,   210,   211,
     211,   211,   211,   212,   212,   212,   212,   213,   213,   213,
     213,   214,   215
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     2,     2,     3,
       2,     2,     1,     1,     1,     1,     1,     3,     5,     6,
       6,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     2,
       3,     3,     1,     1,     1,     3,     3,     1,     3,     4,
       2,     1,     1,     1,     1,     1,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       1,     3,     4,     1,     2,     1,     1,     3,     3,     4,
       4,     1,     2,     3,     1,     2,     3,     3,     4,     3,
       4,     1,     1,     2,     2,     3,     3,     4,     2,     3,
       3,     4,     4,     5,     5,     6,     4,     5,     5,     6,
       6,     7,     7,     8,     3,     1,     3,     4,     2,     3,
       3,     4,     3,     1,     2,     3,     2,     1,     3,     3,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     5,     3,     5,     3,
       3,     5,     5,     5,     1,     1,     1,     1,     6,     7,
       7,     8,     7,     8,     8,     9,     6,     7,     7,     8,
       7,     8,     8,     9,     1,     1,     2,     3,     2,     3,
       1,     3,     1,     7,     7,     2,     3,     3,     2,     3,
       2,     3,     3,     5,     3,     4,     5,     2,     1,     5,
       1,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     4,     3,     1,     3,     3,     4,     5,     5,
       6,     6,     7,     7,     8,     5,     6,     6,     7,     7,
       8,     8,     9,     3,     3,     5,     4,     4,     3,     4,
       5,     6,     6,     7,     5,     6,     6,     7,     5,     6,
       6,     7,     7,     8,     8,     9,     3,     4,     3,     4,
       3,     4,     3,     4,     5,     6,     3,     4,     3,     4,
       4,     4,     4,     3,     1,     1,     5,     4,     3,     5,
       4,     3,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     5,     5,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     4,     5,     4,     5,     1,     1,     1,
       1,     2,     2
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
#line 127 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);type = (yyval.item).type;}
#line 3048 "parser.tab.c"
    break;

  case 26:
#line 128 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);type = (yyval.item).type;}
#line 3054 "parser.tab.c"
    break;

  case 27:
#line 132 "parser.y"
                 {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3060 "parser.tab.c"
    break;

  case 28:
#line 133 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3066 "parser.tab.c"
    break;

  case 29:
#line 134 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3072 "parser.tab.c"
    break;

  case 30:
#line 138 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3078 "parser.tab.c"
    break;

  case 31:
#line 139 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3084 "parser.tab.c"
    break;

  case 32:
#line 143 "parser.y"
                {check_gst((yyvsp[0].item).label); strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3090 "parser.tab.c"
    break;

  case 34:
#line 148 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3096 "parser.tab.c"
    break;

  case 35:
#line 152 "parser.y"
                                {strcpy((yyval.item).label,strcat((yyvsp[-2].item).label,strcat((yyvsp[-1].item).label,(yyvsp[0].item).label)));}
#line 3102 "parser.tab.c"
    break;

  case 36:
#line 153 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3108 "parser.tab.c"
    break;

  case 38:
#line 161 "parser.y"
                                          {(yyval.item).dims = (yyvsp[-2].item).dims+1;}
#line 3114 "parser.tab.c"
    break;

  case 39:
#line 162 "parser.y"
                                        {(yyval.item).dims = 1;}
#line 3120 "parser.tab.c"
    break;

  case 48:
#line 186 "parser.y"
                                {if(first_parse) make_class_entry((yyvsp[-1].item).label,yylineno,"00");}
#line 3126 "parser.tab.c"
    break;

  case 49:
#line 187 "parser.y"
                                            {if(first_parse){string mod = check_class_modifiers((yyvsp[-3].item).label,(yyvsp[-1].item).label); make_class_entry((yyvsp[-1].item).label,yylineno,mod);} modifiers.clear();}
#line 3132 "parser.tab.c"
    break;

  case 50:
#line 191 "parser.y"
                             {strcpy((yyval.item).label,strcat((yyvsp[-1].item).label,(yyvsp[0].item).label)); modifiers = (yyval.item).label;}
#line 3138 "parser.tab.c"
    break;

  case 51:
#line 192 "parser.y"
                {strcpy((yyval.item).label,(yyvsp[0].item).label); modifiers = (yyval.item).label;}
#line 3144 "parser.tab.c"
    break;

  case 52:
#line 196 "parser.y"
            {strcpy((yyval.item).label,"0");}
#line 3150 "parser.tab.c"
    break;

  case 53:
#line 197 "parser.y"
                {strcpy((yyval.item).label,"1");}
#line 3156 "parser.tab.c"
    break;

  case 54:
#line 198 "parser.y"
                {strcpy((yyval.item).label,"2");temp.clear();}
#line 3162 "parser.tab.c"
    break;

  case 55:
#line 199 "parser.y"
                {strcpy((yyval.item).label,"3");}
#line 3168 "parser.tab.c"
    break;

  case 63:
#line 216 "parser.y"
        {reset();}
#line 3174 "parser.tab.c"
    break;

  case 67:
#line 226 "parser.y"
                                        {type.clear();}
#line 3180 "parser.tab.c"
    break;

  case 68:
#line 227 "parser.y"
                                                        {modifiers.clear();type.clear();}
#line 3186 "parser.tab.c"
    break;

  case 71:
#line 236 "parser.y"
                                        {if(check_first()){string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); make_entry((yyvsp[-2].item).label,type,yylineno,x);}}
#line 3192 "parser.tab.c"
    break;

  case 72:
#line 237 "parser.y"
                                                {if(check_first()){string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); vector<int> v((yyvsp[-2].item).dims,0); make_array_entry((yyvsp[-3].item).label,type,yylineno,v,x);}}
#line 3198 "parser.tab.c"
    break;

  case 73:
#line 238 "parser.y"
                {if(check_first()){string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); make_entry((yyvsp[0].item).label,type,yylineno,x);}}
#line 3204 "parser.tab.c"
    break;

  case 74:
#line 239 "parser.y"
                        {if(check_first()){string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); vector<int> v((yyvsp[0].item).dims,0); make_array_entry((yyvsp[-1].item).label,type,yylineno,v,x);}}
#line 3210 "parser.tab.c"
    break;

  case 77:
#line 248 "parser.y"
                                        {if(first_parse){make_func_entry((yyvsp[-1].item).label,"void",arguments,yylineno,"0000",(yyvsp[-1].item).dims); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}}
#line 3216 "parser.tab.c"
    break;

  case 78:
#line 249 "parser.y"
                                        {if(first_parse){make_func_entry((yyvsp[-1].item).label,(yyvsp[-2].item).type,arguments,yylineno,"0000",(yyvsp[-1].item).dims); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}}
#line 3222 "parser.tab.c"
    break;

  case 79:
#line 250 "parser.y"
                                                   {if(first_parse){string x = check_method_modifiers((yyvsp[-3].item).label); make_func_entry((yyvsp[-1].item).label,"void",arguments,yylineno,x,(yyvsp[-2].item).dims); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}modifiers.clear();}
#line 3228 "parser.tab.c"
    break;

  case 80:
#line 251 "parser.y"
                                                  {if(first_parse){string x = check_method_modifiers((yyvsp[-3].item).label); make_func_entry((yyvsp[-1].item).label,(yyvsp[-2].item).type,arguments,yylineno,x,(yyvsp[-2].item).dims); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}modifiers.clear();}
#line 3234 "parser.tab.c"
    break;

  case 81:
#line 255 "parser.y"
            {strcpy((yyval.item).label,(yyvsp[0].item).label); (yyval.item).dims = 0;}
#line 3240 "parser.tab.c"
    break;

  case 82:
#line 256 "parser.y"
                        {strcpy((yyval.item).label,(yyvsp[-1].item).label); (yyval.item).dims = (yyvsp[0].item).dims;}
#line 3246 "parser.tab.c"
    break;

  case 85:
#line 265 "parser.y"
                    {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-1].item).type,0,0,0));}}
#line 3252 "parser.tab.c"
    break;

  case 86:
#line 266 "parser.y"
                                        {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-1].item).type,0,0,1));}}
#line 3258 "parser.tab.c"
    break;

  case 87:
#line 267 "parser.y"
                                {if(first_parse){arguments.push_back(make_tuple((yyvsp[-1].item).label,(yyvsp[-2].item).type,(yyvsp[0].item).dims,0,0));}}
#line 3264 "parser.tab.c"
    break;

  case 88:
#line 268 "parser.y"
                                        {if(first_parse){arguments.push_back(make_tuple((yyvsp[-1].item).label,(yyvsp[-3].item).type,0,0,0));}}
#line 3270 "parser.tab.c"
    break;

  case 89:
#line 269 "parser.y"
                                        {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-2].item).type,0,1,0));}}
#line 3276 "parser.tab.c"
    break;

  case 90:
#line 270 "parser.y"
                                                {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-2].item).type,0,1,1));}}
#line 3282 "parser.tab.c"
    break;

  case 94:
#line 283 "parser.y"
                           {if(first_parse){check_constructor((yyvsp[0].item).label); make_func_entry((yyvsp[-1].item).label,(yyvsp[-1].item).label,arguments,yylineno,"0000",(yyvsp[-1].item).dims); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}}
#line 3288 "parser.tab.c"
    break;

  case 95:
#line 284 "parser.y"
                                           {if(first_parse){check_constructor((yyvsp[-1].item).label); string x = check_method_modifiers((yyvsp[-2].item).label); make_func_entry((yyvsp[-1].item).label,(yyvsp[-1].item).label,arguments,yylineno,x,(yyvsp[-1].item).dims); add_arguments(arguments,(yyvsp[0].item).label); arguments.clear();}modifiers.clear();}
#line 3294 "parser.tab.c"
    break;

  case 116:
#line 321 "parser.y"
                                {if(first_parse) make_class_entry((yyvsp[-1].item).label,yylineno,"00");}
#line 3300 "parser.tab.c"
    break;

  case 117:
#line 322 "parser.y"
                                                {if(first_parse){string mod = check_class_modifiers((yyvsp[-3].item).label,(yyvsp[-1].item).label); make_class_entry((yyvsp[-1].item).label,yylineno,mod);} modifiers.clear();}
#line 3306 "parser.tab.c"
    break;

  case 130:
#line 350 "parser.y"
                                                {temp.clear();}
#line 3312 "parser.tab.c"
    break;

  case 131:
#line 351 "parser.y"
                                                {temp.clear();}
#line 3318 "parser.tab.c"
    break;


#line 3322 "parser.tab.c"

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
#line 834 "parser.y"


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
