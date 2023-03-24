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
vector<pair<string,string> > v; 
vector<string> function_call;
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



#line 121 "parser.tab.c"

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
    THROW = 340,
    THROWS = 341,
    TILDA = 342,
    TRIPLE_DOT = 343,
    TRY = 344,
    VAR = 345,
    VOID = 346,
    WHILE = 347,
    YIELD = 348
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 55 "parser.y"

    struct {
        char label[1000];
        char type[100];
        int dims;
        bool lit;
    }item;

#line 276 "parser.tab.c"

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
#define YYLAST   2613

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  295
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  550

#define YYUNDEFTOK  2
#define YYMAXUTOK   348


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
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    71,    71,    74,    75,    76,    77,    78,    79,    80,
      84,    88,    89,    93,    94,    95,    96,   100,   104,   108,
     112,   116,   117,   121,   122,   126,   127,   131,   132,   133,
     137,   138,   142,   143,   147,   151,   152,   156,   160,   161,
     165,   166,   170,   171,   175,   176,   177,   178,   182,   183,
     187,   188,   192,   193,   194,   198,   199,   200,   204,   212,
     223,   224,   228,   229,   251,   252,   256,   257,   261,   262,
     263,   264,   268,   269,   273,   274,   278,   279,   280,   281,
     282,   283,   287,   288,   292,   293,   297,   298,   302,   303,
     307,   308,   313,   314,   318,   319,   320,   321,   325,   326,
     330,   331,   335,   336,   340,   349,   358,   362,   363,   364,
     365,   366,   367,   371,   372,   373,   374,   375,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   392,   396,
     400,   404,   408,   409,   410,   411,   412,   413,   414,   417,
     421,   425,   429,   434,   435,   439,   443,   447,   448,   452,
     453,   457,   458,   459,   460,   461,   462,   463,   464,   468,
     469,   470,   471,   472,   473,   474,   475,   479,   480,   484,
     493,   504,   508,   509,   513,   517,   521,   522,   526,   530,
     531,   535,   536,   540,   544,   545,   546,   550,   551,   555,
     559,   560,   564,   565,   566,   567,   571,   572,   573,   574,
     575,   576,   580,   584,   585,   589,   590,   594,   595,   596,
     597,   601,   602,   603,   604,   608,   609,   613,   617,   618,
     622,   623,   624,   625,   626,   627,   628,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,   649,   650,   654,   655,   659,   660,
     664,   665,   669,   670,   674,   675,   679,   680,   681,   685,
     686,   687,   688,   689,   693,   694,   695,   696,   700,   701,
     702,   706,   707,   708,   709,   713,   714,   715,   716,   717,
     721,   733,   746,   747,   748,   749,   753,   754,   755,   756,
     760,   761,   762,   763,   767,   780
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
  "THROW", "THROWS", "TILDA", "TRIPLE_DOT", "TRY", "VAR", "VOID", "WHILE",
  "YIELD", "$accept", "input", "CompiledStuff", "PackageDeclaration",
  "ImportDeclarations", "ImportDeclaration", "SingleTypeImportDeclaration",
  "TypeImportOnDemandDeclaration", "SingleStaticImportDeclaration",
  "StaticImportOnDemandDeclaration", "TypeDeclarations", "TypeDeclaration",
  "Type", "PrimitiveType", "NumericType", "ReferenceType", "ClassType",
  "DotIdentifiers", "ArrayType", "Dims", "ClassDeclaration",
  "ClassModifiers", "ClassModifier", "ClassBody", "ClassBodyDeclarations",
  "ClassBodyDeclaration", "ClassMemberDeclaration", "FieldDeclaration",
  "VariableDeclaratorList", "VariableDeclarator", "VariableInitializer",
  "MethodDeclaration", "MethodDeclarator", "FormalParameterList",
  "FormalParameter", "MethodBody", "ConstructorDeclaration", "Declarator",
  "ConstructorBody", "Expressions", "InterfaceDeclaration",
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
  "ContinueStatement", "ReturnStatement", "ThrowStatement", "TryStatement",
  "Catches", "CatchClause", "Primary", "PrimaryNoNewArray", "Literal",
  "ClassInstanceCreationExpression",
  "UnqualifiedClassInstanceCreationExpression", "ArrayAccess",
  "MethodInvocation", "ArrayCreationExpression", "DimExprs", "Expression",
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
     345,   346,   347,   348
};
# endif

#define YYPACT_NINF (-408)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-294)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     308,    19,  -408,   -14,    62,   143,  -408,  -408,  -408,   144,
    -408,   544,   544,  -408,  -408,  -408,  -408,  -408,   339,  -408,
    -408,   387,  -408,  -408,   149,  -408,   143,    -2,   149,   183,
    -408,   544,   339,  -408,   339,  -408,   167,   194,  -408,   677,
    -408,   206,    27,  -408,  -408,   232,   339,   149,   149,  -408,
    -408,   182,  -408,  1481,  -408,  -408,  -408,   237,   245,   189,
    -408,  -408,  -408,   183,  -408,   163,   703,  -408,  -408,  -408,
    -408,  -408,   240,  -408,    79,  -408,   236,  -408,  -408,     3,
    2251,  -408,    59,  -408,    83,    25,  -408,   266,   113,   268,
    -408,  2251,    25,  -408,  2251,  1160,  -408,  -408,  -408,  2251,
     275,   282,  2251,   294,  2282,  -408,  1630,  -408,  -408,  -408,
    -408,  -408,  -408,   260,  -408,  -408,   313,  -408,  -408,  -408,
    -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,   291,
    -408,   215,  -408,  1629,   283,  -408,  -408,  -408,  -408,    87,
      88,   172,   182,   -13,   189,   177,     4,  -408,   -13,   271,
     293,   237,   245,   240,  -408,  -408,  1729,  -408,   272,   277,
    -408,    25,  -408,     9,     1,  -408,  2251,   298,   855,  2251,
    2251,  2251,  2317,  -408,  -408,     0,  -408,  -408,  -408,     7,
     348,   352,   303,   366,   121,   315,   197,   207,   198,  -408,
    -408,  -408,  -408,  -408,    87,  -408,  -408,   304,  -408,   314,
    -408,   294,  2387,  1871,  1503,  2251,    37,  -408,  -408,   342,
     342,   120,  -408,  -408,   318,   326,   248,  2251,   327,   190,
       6,  2251,  2251,   363,  2251,  2251,  2251,  2251,  2251,  2251,
    2251,  2251,  2251,  2251,  2251,  -408,  -408,  -408,  1871,  2251,
    2251,  2251,  2251,  2251,  2251,  2251,  2251,  2251,  2251,  2251,
    2251,  2251,  -408,  -408,  -408,  -408,  -408,   293,  1947,   196,
     294,  -408,  -408,  -408,   331,   -13,    18,   -13,  -408,  -408,
    1800,  -408,  -408,    32,   189,   369,   184,  -408,  -408,   105,
    2334,   333,  -408,  -408,  -408,  2251,  -408,  2251,  2251,  2251,
    2251,  2251,  2251,  2251,  2251,  2251,  2251,  2251,  2251,  2251,
    2251,  2251,  2251,  2251,  2251,  2251,  2251,  -408,  -408,    21,
      25,  1999,   294,  -408,   335,   393,   395,  -408,  -408,    34,
    -408,   344,  2251,   371,   371,  2028,  -408,  -408,   364,   275,
     254,  -408,   345,  -408,  -408,  -408,  -408,   367,  -408,  -408,
    -408,   347,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,
     349,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,
    -408,  -408,  -408,   992,  -408,  -408,  -408,  1947,  -408,  -408,
    -408,  -408,  -408,  -408,   189,   382,   293,  -408,  -408,  2251,
     111,  2063,   114,   154,   353,   348,   409,   352,   303,   366,
     121,   315,   315,   197,   197,   197,   197,   207,   207,   207,
     198,   198,  -408,  -408,  -408,  -408,   294,  1270,   356,   419,
    2092,  2251,   502,  2251,  -408,  1927,   370,  2063,   293,   293,
    -408,    44,   184,  -408,   275,  -408,  1871,  2142,  -408,  -408,
     368,  -408,  -408,    20,  -408,   293,  -408,  -408,  2251,   154,
    -408,  -408,  2251,   419,  1871,   373,   395,  1724,  2439,   376,
     375,  -408,  -408,   404,   129,   406,  -408,  -408,   420,  -408,
     435,  -408,  -408,  -408,  -408,  -408,  -408,   385,  -408,   388,
    -408,  -408,  -408,    45,  -408,  1140,  -408,  -408,  -408,  -408,
    -408,  1871,  1871,   396,  1871,   398,  2445,  1871,  2409,  1927,
    2251,  1927,  -408,   275,  -408,  -408,  -408,  -408,  -408,  1871,
    -408,  1871,  1871,   402,  -408,  2177,   391,   442,  -408,   407,
    -408,  -408,  -408,  -408,  -408,  1871,  2476,   410,  2197,  2251,
    1927,  -408,  1927,   413,  2482,  2512,   417,   415,  -408,  -408,
    1927,  1927,   422,  1927,   426,  2532,  1927,  -408,  -408,  1927,
    -408,  1927,  1927,   427,  -408,  -408,  -408,  -408,  1927,  -408
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
      40,     0,     0,    17,    92,     0,     9,     0,     0,    28,
      31,    36,    30,     0,    48,    57,    29,     0,     0,    25,
      27,    26,    32,    34,    33,     0,     0,    51,    52,    55,
      56,    53,     0,    54,     0,    35,     0,    41,    93,     0,
       0,   198,     0,   199,     0,     0,   197,     0,    36,     0,
     196,     0,     0,   201,     0,     0,   100,   128,   200,     0,
       0,     0,     0,     0,   291,   118,     0,   103,   106,   107,
     119,   108,   120,     0,   109,   110,     0,   121,   111,   112,
     147,   148,   122,   127,   123,   124,   125,   126,   290,   190,
     192,   138,   202,   194,   137,   191,   132,   133,   134,     0,
     135,   136,     0,     0,    72,    64,     0,    61,     0,     0,
      37,     0,     0,     0,    49,    50,     0,    84,    35,     0,
      18,     0,    86,     0,     0,    75,     0,    36,     0,     0,
       0,     0,   291,   193,   195,     0,   217,   219,   218,   244,
     246,   248,   250,   252,   254,   256,   259,   264,   268,   271,
     275,   276,   279,   285,   282,   292,   293,     0,   176,     0,
     179,     0,     0,     0,     0,     0,   291,   194,   281,     0,
       0,    34,   280,   181,     0,     0,     0,     0,     0,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   101,   102,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   295,   294,    83,    68,    82,    73,     0,    65,
       0,    58,    69,    39,     0,     0,     0,     0,    85,    88,
       0,    19,    20,     0,    76,     0,     0,    87,   284,     0,
     291,     0,   278,   277,   283,     0,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   177,   180,     0,
       0,     0,     0,   173,     0,   168,   167,   129,   207,     0,
      91,     0,     0,   211,   213,     0,   182,   183,     0,     0,
     184,   188,     0,   178,   104,   229,   231,    35,   220,   227,
     228,     0,   226,   225,   223,   224,   230,   222,   221,   140,
       0,   241,   243,   232,   239,   240,   238,   237,   235,   236,
     242,   234,   233,     0,    62,    67,    66,     0,    60,    38,
      70,    59,    71,    89,    77,     0,    78,    80,    74,     0,
       0,     0,     0,     0,     0,   247,     0,   249,   251,   253,
     255,   257,   258,   261,   263,   260,   262,   266,   267,   265,
     270,   269,   274,   273,   272,   105,     0,     0,     0,   169,
       0,     0,     0,     0,   208,     0,     0,     0,   212,   214,
     203,     0,     0,   185,     0,   187,     0,     0,   205,   206,
       0,    94,    99,     0,    63,    79,    81,   286,     0,     0,
     288,   144,     0,   170,     0,     0,   171,     0,     0,     0,
       0,   172,    90,     0,    36,     0,   139,   141,   107,   114,
       0,   115,   116,   117,   149,   150,   216,     0,   204,     0,
     186,   145,   209,     0,    95,     0,    96,   287,   289,   245,
     151,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   215,     0,   210,    97,    98,   152,   153,     0,
     155,     0,     0,     0,   174,     0,     0,   168,   130,     0,
     142,   189,   154,   156,   157,     0,     0,     0,     0,     0,
       0,   158,     0,     0,     0,     0,     0,     0,   146,   159,
       0,     0,     0,     0,     0,     0,     0,   160,   161,     0,
     163,     0,     0,     0,   175,   162,   164,   165,     0,   166
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -408,  -408,  -408,  -408,   465,    28,  -408,  -408,  -408,  -408,
     187,   146,   -36,   -78,  -408,  -408,   400,     2,  -408,   -58,
    -408,   115,     5,   211,  -408,   434,  -408,  -408,   -92,   242,
    -354,  -408,   -52,  -408,  -274,  -128,  -408,   122,   350,  -313,
    -408,  -408,  -408,   -12,   351,   -96,  -159,  2061,  -407,  -408,
    -408,  -408,  -408,  -198,  -408,  -408,    86,  -408,  -408,  -408,
    -408,  -408,  -408,  -408,  -408,    16,    17,  -397,  -179,  -408,
    -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,   176,  -408,
    -408,  -408,   -53,  -408,  1314,    49,  -408,   299,  1219,  -408,
     155,    66,  -408,   224,   223,   225,   227,   222,  -248,   101,
     -19,  -113,   -59,   317,   457,  -362,  -408,   611,   762,   868
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   103,    59,    60,    61,    62,   172,    64,   259,
      20,    21,    22,    40,    66,    67,    68,    69,   146,   147,
     364,    70,   143,   164,   165,   255,    71,   144,   157,   319,
      23,   365,   433,   105,   106,   107,   108,   457,   109,   110,
     111,   459,   112,   113,   114,   115,   116,   461,   117,   118,
     462,   119,   463,   120,   464,   314,   315,   445,   446,   121,
     465,   122,   123,   124,   125,   126,   127,   330,   331,   128,
     129,   130,   173,   132,   133,   174,   135,   323,   366,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     131,   150,   378,    58,   313,    27,   148,    29,   458,   432,
     236,   220,   421,   434,   209,    49,   287,   285,    42,   276,
     262,   440,   260,   316,   260,    25,    38,    73,    41,   152,
      58,   161,   208,    53,    50,   212,   260,    49,   475,   260,
      33,    63,    25,   163,   317,   391,   392,    52,   274,   201,
     483,   485,   413,   131,    73,   104,    50,   223,    24,    33,
     266,   254,   413,   413,    25,    26,    75,    63,    63,    52,
      38,   374,    43,   277,   286,   162,   288,   478,   261,   349,
     334,    63,   458,    56,   458,   227,   257,    63,   216,   503,
     279,   476,   371,   206,   211,   405,   206,   275,   197,   265,
     267,    28,   134,   131,    76,    56,   414,   278,   104,   309,
     282,   283,   284,   458,   473,   458,   468,   494,   158,   523,
     375,   496,   199,   458,   458,   273,   458,   532,   534,   458,
     203,   256,   458,   198,   458,   458,   256,   370,   543,   372,
      45,   458,   252,  -292,    30,   293,   489,   294,   469,   131,
     131,   253,  -292,   149,    65,   134,   159,   200,   104,   264,
     204,    72,   264,    63,    35,    81,   312,   325,   206,    83,
     280,   206,   206,   206,   236,    49,   204,   379,    35,   166,
      35,    65,    25,   438,    86,   131,   439,   153,    72,   400,
     401,     2,    35,   167,    50,    39,    49,    90,    32,    34,
     258,   168,    51,    45,   104,   134,    47,    52,   136,   313,
      92,    93,   161,   258,   451,    50,   376,   131,    46,   367,
     409,   380,   382,    25,    79,   149,    74,  -293,    52,    79,
       6,     7,   299,    48,   300,    98,  -293,   149,   149,    44,
     163,   171,     8,    56,   264,   402,   403,   404,   301,   313,
     313,   134,   134,   256,   151,   256,   456,   304,    77,    78,
     302,   136,   328,  -193,    56,   418,   419,   471,   328,   303,
    -193,    75,   104,   305,   406,   306,   142,   329,    63,  -193,
     397,   398,   399,   424,   145,   480,   156,   134,   313,   206,
     313,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   316,
     160,   136,    63,   202,   443,   205,   435,   423,   313,   134,
     437,    53,   497,   498,     1,   500,   313,   313,   504,   217,
     317,  -195,   349,   219,   237,   238,     2,   313,  -195,   239,
     512,   264,   513,   514,   263,   204,   271,  -195,   295,   296,
       3,   272,   289,     4,   131,     1,   521,   136,   136,   131,
     290,   471,   131,   480,   297,   298,     5,     2,   291,   292,
     137,   497,   498,   131,   500,     6,     7,   504,   307,   477,
     512,   206,   513,   514,     4,   206,   163,     8,   308,   521,
     322,   131,   326,   136,   131,   131,   393,   394,   395,   396,
     327,   333,   337,    36,   369,   383,     6,     7,   377,   410,
     411,   422,   470,   412,   427,     2,   415,   426,     8,   417,
     428,   436,   429,   137,    63,   136,   442,   441,   131,   131,
     447,   131,    37,   131,   131,   131,   131,   260,   131,   474,
     206,   206,  -113,   466,   206,   481,   131,   487,   131,   131,
     486,   488,   312,   490,     6,     7,   134,   491,   492,   519,
     493,   134,   131,   131,   134,   518,     8,   131,   499,   131,
     501,   131,   131,   137,   515,   134,    31,   131,   131,   520,
     131,   511,   131,   131,   524,   530,   131,   536,   131,   131,
     104,   535,   210,   134,   539,   131,   134,   134,   541,   548,
     155,   460,   368,   268,   506,   507,   425,   270,   479,   324,
     138,   385,   387,    81,   390,   388,     0,    83,   389,   137,
     137,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     134,   134,    86,   134,     0,   134,   134,   134,   134,     0,
     134,   167,     0,     0,     0,    90,     0,     0,   134,     0,
     134,   134,     0,     0,     0,   137,     0,    91,    92,    93,
       1,     0,   136,   138,   134,   134,    94,   136,     0,   134,
     136,   134,     2,   134,   134,   460,     0,   460,     0,   134,
     134,   136,   134,    98,   134,   134,     3,   137,   134,     4,
     134,   134,     0,     0,     0,     0,     0,   134,     0,   136,
       0,     0,   136,   136,     0,     0,   460,     0,   460,     0,
       0,     6,     7,   138,     0,     0,   460,   460,     0,   460,
       0,     0,   460,     8,     0,   460,     0,   460,   460,     0,
       0,     0,     0,     0,   460,     0,   136,   136,     0,   136,
       0,   136,   136,   136,   136,     0,   136,     0,     0,     0,
       0,     0,     0,     0,   136,     0,   136,   136,     0,   138,
     138,     0,     0,     0,   139,     0,     0,     0,     0,     0,
     136,   136,     0,     0,     0,   136,     0,   136,     0,   136,
     136,     0,     0,     0,     0,   136,   136,     0,   136,    49,
     136,   136,     0,     0,   136,   138,   136,   136,     0,     0,
       0,     0,     0,   136,     0,     2,     0,     0,    50,     0,
       0,     0,     0,     0,     0,    49,    51,   139,     0,     0,
       0,    52,     0,    53,   137,     0,     0,   138,     0,   137,
       0,     2,   137,     0,    50,     0,     0,     0,     0,     0,
       0,     0,    51,   137,     6,     7,     0,    52,    54,    53,
       0,    55,     0,     0,     0,     0,     8,    56,     0,     0,
       0,   137,     0,     0,   137,   137,     0,   139,    57,     0,
       6,     7,     0,     0,   154,     0,     0,    55,     0,     0,
       0,     0,     8,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    57,     0,     0,     0,   137,   137,
       0,   137,     0,   137,   137,   137,   137,     0,   137,     0,
       0,     0,     0,   139,   139,   140,   137,     0,   137,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   137,   137,     0,     0,     0,   137,     0,   137,
       0,   137,   137,     0,     0,     0,     0,   137,   137,   139,
     137,     0,   137,   137,     0,     0,   137,     0,   137,   137,
       0,     0,     0,     0,   138,   137,    81,    49,   140,   138,
      83,     0,   138,     0,     0,     0,     0,     0,     0,     0,
     166,   139,     0,   138,     0,    86,    50,     0,     0,     0,
       0,     0,     0,     0,   167,     0,     0,     0,    90,    52,
       0,   138,   168,     0,   138,   138,     0,     0,   169,     0,
      91,    92,    93,     0,     0,     0,     0,   170,   140,    94,
       0,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,    98,     0,   138,   138,
       0,   138,   171,   138,   138,   138,   138,     0,   138,     0,
       0,     0,     0,     0,     0,     0,   138,     0,   138,   138,
       0,     0,     0,     0,   140,   140,     0,     0,     0,     0,
       0,     0,   138,   138,   141,     0,     0,   138,     0,   138,
       0,   138,   138,     0,     0,     0,     0,   138,   138,     0,
     138,     0,   138,   138,     0,     0,   138,     0,   138,   138,
     140,     0,     0,    81,     0,   138,     0,    83,     0,     0,
     430,     0,     0,     0,     0,     0,     0,   166,   139,     0,
       0,     0,    86,   139,   141,     0,   139,     0,     0,     0,
       0,   167,   140,     0,     0,    90,     0,   139,   363,   168,
       0,     0,     0,     0,     0,   169,     0,    91,    92,    93,
       0,     0,     0,     0,   170,   139,    94,     0,   139,   139,
       0,     0,     0,   431,     0,     0,     0,     0,     0,     0,
     141,   141,     0,    98,     0,     0,     0,     0,     0,   171,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   139,   139,     0,   139,     0,   139,   139,   139,
     139,     0,   139,     0,     0,     0,   141,     0,     0,     0,
     139,     0,   139,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   139,   139,     0,     0,
       0,   139,     0,   139,     0,   139,   139,     0,   141,     0,
       0,   139,   139,     0,   139,     0,   139,   139,     0,     0,
     139,    81,   139,   139,     0,    83,     0,     0,     0,   139,
       0,     0,     0,     0,     0,   166,     0,     0,     0,   140,
      86,    81,     0,     0,   140,    83,     0,   140,     0,   167,
       0,     0,     0,    90,     0,   166,   363,   168,   140,     0,
      86,     0,     0,   169,     0,    91,    92,    93,     0,   167,
       0,     0,   170,    90,    94,     0,   140,   168,     0,   140,
     140,   495,     0,   169,     0,    91,    92,    93,     0,     0,
       0,    98,   170,     0,    94,     0,     0,   171,     0,     0,
       0,     0,     0,     0,   213,     0,     0,     0,     0,     0,
       0,    98,     0,   140,   140,     0,   140,   171,   140,   140,
     140,   140,     0,   140,     0,     0,     0,     0,     0,     0,
       0,   140,     0,   140,   140,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   141,     0,   140,   140,     0,
     141,    81,   140,   141,   140,    83,   140,   140,     0,     0,
       0,     0,   140,   140,   141,   140,     0,   140,   140,   175,
      86,   140,     0,   140,   140,     0,     0,     0,     0,   167,
     140,     0,   141,    90,   214,   141,   141,     0,   215,     0,
       0,   218,     0,     0,     0,    91,    92,    93,     0,     0,
       0,     0,     0,     0,    94,     0,     0,     0,     0,     0,
       0,     0,   444,     0,     0,     0,     0,     0,     0,   141,
     141,    98,   141,     0,   141,   141,   141,   141,     0,   141,
       0,     0,     0,     0,     0,     0,     0,   141,     0,   141,
     141,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   141,   141,     0,     0,   281,   141,     0,
     141,     0,   141,   141,     0,     0,     0,     0,   141,   141,
       0,   141,     0,   141,   141,   207,     0,   141,   207,   141,
     141,     0,     0,     0,     0,     0,   141,     0,     0,     0,
       0,     0,     0,   320,   321,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   332,     0,     0,     0,
     335,   336,     0,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,     0,     0,     0,     0,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     207,     0,     0,   207,   207,   207,     0,     0,    80,     0,
       0,     0,    81,    49,    82,     0,    83,     0,     0,     0,
      84,     0,     0,     0,   384,     0,     0,   386,     0,    85,
       0,    86,    50,    87,    81,     0,     0,     0,    83,     0,
      88,    89,     0,     0,    90,    52,     0,    53,   166,     0,
     408,     0,     0,    86,     0,     0,    91,    92,    93,     0,
       0,   416,   167,     0,   320,    94,    90,     0,     0,     0,
     168,    95,    96,     0,     0,    97,   169,     0,    91,    92,
      93,    56,    98,     0,     0,   170,    99,    94,     0,     0,
     100,     0,     0,   101,   102,   318,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
     171,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     341,   207,     0,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,     0,     0,     0,     0,     0,     0,     0,     0,   449,
     450,     0,   452,     0,   240,     0,   467,    80,     0,   241,
       0,    81,    49,    82,     0,    83,   320,     0,     0,    84,
       0,     0,   242,     0,     0,     0,     0,     0,    85,     0,
      86,    50,    87,     0,     0,   243,     0,   244,     0,    88,
      89,     0,     0,    90,    52,     0,    53,     0,     0,     0,
       0,   245,     0,   246,     0,    91,    92,    93,     0,   247,
       0,     0,   248,   207,    94,   249,     0,   207,     0,     0,
      95,   235,     0,     0,    97,   250,     0,   251,     0,   509,
      56,    98,     0,     0,     0,    99,     0,     0,     0,   100,
       0,     0,   101,   102,   517,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,    80,   526,   527,    83,
      81,    49,    82,     0,    83,     0,     0,     0,    84,     0,
       0,     0,   207,   207,    86,     0,   207,    85,     0,    86,
      50,    87,     0,   167,     0,     0,     0,    90,    88,    89,
       0,     0,    90,    52,     0,    53,     0,     0,     0,    91,
      92,    93,     0,     0,    91,    92,    93,     0,    94,     0,
       0,     0,     0,    94,     0,     0,   482,     0,     0,    95,
     269,     0,     0,    97,     0,    98,     0,    80,     0,    56,
      98,    81,    49,    82,    99,    83,     0,     0,   100,    84,
       0,   101,   102,     0,     0,     0,     0,     0,    85,     0,
      86,    50,    87,     0,     0,     0,     0,     0,     0,    88,
      89,     0,     0,    90,    52,     0,    53,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    92,    93,     0,     0,
       0,     0,     0,     0,    94,     0,     0,     0,     0,     0,
      95,   373,     0,     0,    97,     0,     0,     0,    80,     0,
      56,    98,    81,     0,    82,    99,    83,     0,     0,   100,
      84,     0,   101,   102,     0,     0,     0,     0,     0,     0,
       0,    86,     0,    87,     0,     0,     0,     0,     0,     0,
      88,    89,     0,     0,    90,     0,     0,    53,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,     0,
       0,     0,     0,     0,    80,    94,     0,     0,    81,     0,
      82,    95,    83,     0,     0,    97,    84,     0,     0,     0,
       0,     0,    98,     0,     0,     0,    99,    86,    81,   453,
     100,     0,    83,   101,   102,     0,   454,    89,     0,     0,
      90,     0,   166,    53,     0,     0,     0,    86,     0,     0,
       0,     0,    91,    92,    93,     0,   167,     0,     0,     0,
      90,    94,     0,   363,   168,     0,     0,    95,     0,     0,
     169,    97,    91,    92,    93,     0,     0,     0,    98,   170,
      81,    94,    99,     0,    83,     0,   100,     0,     0,   455,
     102,     0,     0,     0,   166,     0,     0,     0,    98,    86,
       0,     0,     0,     0,   171,     0,     0,     0,   167,    81,
       0,     0,    90,    83,     0,     0,   168,     0,     0,     0,
       0,     0,   169,   166,    91,    92,    93,     0,    86,     0,
       0,   170,     0,    94,     0,     0,     0,   167,     0,     0,
       0,    90,     0,   407,    81,   168,     0,     0,    83,     0,
      98,   169,     0,    91,    92,    93,   171,     0,   166,     0,
     170,     0,    94,    86,     0,     0,     0,     0,     0,     0,
     420,     0,   167,    81,     0,     0,    90,    83,     0,    98,
     168,     0,     0,     0,     0,   171,   169,   166,    91,    92,
      93,     0,    86,     0,     0,   170,     0,    94,     0,     0,
       0,   167,     0,     0,     0,    90,   263,     0,     0,   168,
       0,     0,     0,     0,    98,   169,     0,    91,    92,    93,
     171,     0,     0,    81,   170,     0,    94,    83,     0,     0,
       0,     0,     0,     0,     0,     0,   448,   166,     0,     0,
       0,     0,    86,    98,     0,     0,     0,     0,     0,   171,
       0,   167,     0,     0,     0,    90,     0,     0,    81,   168,
       0,     0,    83,     0,     0,   169,     0,    91,    92,    93,
       0,     0,   166,     0,   170,     0,    94,    86,    81,     0,
       0,     0,    83,     0,   472,     0,   167,     0,     0,     0,
      90,     0,   166,    98,   168,     0,     0,    86,     0,   171,
     169,     0,    91,    92,    93,     0,   167,     0,     0,   170,
      90,    94,     0,     0,   168,     0,     0,     0,     0,     0,
     169,   516,    91,    92,    93,     0,     0,     0,    98,   170,
       0,    94,    81,     0,   171,     0,    83,     0,     0,     0,
       0,   525,     0,     0,     0,     0,   166,     0,    98,     0,
       0,    86,     0,     0,   171,     0,     0,   221,     0,     0,
     167,     0,   222,     0,    90,     0,     0,     0,   168,     0,
       0,     0,   223,     0,   169,   224,    91,    92,    93,     0,
       0,     0,     0,   170,     0,    94,     0,     0,   225,     0,
     226,   -34,   221,     0,     0,     0,     0,   222,     0,     0,
     227,     0,    98,     0,   228,     0,   229,   223,   171,   221,
     224,     0,   230,     0,   222,   231,     0,     0,   232,     0,
       0,     0,     0,   225,   223,   226,     0,   224,   233,     0,
     234,     0,     0,     0,     0,   227,     0,     0,     0,   228,
     225,   229,   226,     0,     0,     0,     0,   230,     0,     0,
     231,     0,   381,   232,     0,     0,   228,     0,   229,     0,
       0,     0,     0,   233,   230,   234,     0,   231,    81,    49,
     232,     0,    83,     0,     0,     0,     0,     0,     0,     0,
     233,     0,   234,     0,     0,   310,     0,    86,    50,     0,
      81,    49,     0,     0,    83,     0,   167,     0,     0,     0,
      90,    52,     0,     0,     0,     0,     0,   310,     0,    86,
      50,     0,    91,    92,    93,     0,     0,     0,   167,     0,
      81,    94,    90,    52,    83,     0,    81,     0,     0,     0,
      83,   311,     0,     0,    91,    92,    93,    56,    98,    86,
       0,     0,     0,    94,     0,    86,     0,     0,   167,     0,
       0,     0,    90,   505,   167,     0,     0,    81,    90,    56,
      98,    83,     0,    81,    91,    92,    93,    83,     0,     0,
      91,    92,    93,    94,     0,     0,    86,     0,     0,    94,
       0,   484,    86,     0,     0,   167,     0,   502,     0,    90,
      98,   167,     0,    81,     0,    90,    98,    83,     0,     0,
       0,    91,    92,    93,     0,     0,     0,    91,    92,    93,
      94,     0,    86,    81,     0,     0,    94,    83,   522,     0,
     508,   167,   510,     0,   531,    90,     0,    98,     0,     0,
       0,     0,    86,    98,     0,     0,     0,    91,    92,    93,
       0,   167,     0,     0,     0,    90,    94,     0,     0,     0,
       0,   528,     0,   529,   533,     0,     0,    91,    92,    93,
       0,   537,   538,    98,   540,     0,    94,   544,     0,     0,
     545,     0,   546,   547,   542,     0,     0,     0,     0,   549,
       0,     0,     0,    98
};

static const yytype_int16 yycheck[] =
{
      53,    59,   276,    39,   202,     3,    58,     5,   415,   363,
     106,   103,   325,   367,    92,    12,     9,    17,    20,    18,
     148,   383,    18,   202,    18,    39,    21,    39,    26,    65,
      66,    28,    91,    46,    31,    94,    18,    12,    18,    18,
      12,    39,    39,    79,   203,   293,   294,    44,    39,    85,
     447,   448,    18,   106,    66,    53,    31,    20,    39,    31,
     152,    74,    18,    18,    39,    79,    39,    65,    66,    44,
      65,    39,    74,    72,    74,    72,    69,   439,    74,   238,
      74,    79,   489,    80,   491,    48,   144,    85,   100,   486,
     168,    71,    74,    91,    92,    74,    94,    88,    39,   151,
     152,    39,    53,   156,    77,    80,    72,   166,   106,   201,
     169,   170,   171,   520,   427,   522,    72,    72,    39,   516,
      88,   475,    39,   530,   531,   161,   533,   524,   525,   536,
      17,   143,   539,    74,   541,   542,   148,   265,   535,   267,
      20,   548,    55,    55,     0,    24,    17,    26,   422,   202,
     203,    64,    64,    48,    39,   106,    77,    74,   156,    48,
      47,    39,    48,   161,    18,    11,   202,    47,   166,    15,
     168,   169,   170,   171,   270,    12,    47,    72,    32,    25,
      34,    66,    39,    72,    30,   238,    72,    65,    66,   302,
     303,    28,    46,    39,    31,    46,    12,    43,    11,    12,
      23,    47,    39,    20,   202,   156,    39,    44,    53,   407,
      56,    57,    28,    23,   412,    31,   274,   270,    31,    23,
     312,   279,   280,    39,    47,    48,    20,    55,    44,    47,
      67,    68,    35,    39,    37,    81,    64,    48,    48,    28,
     276,    87,    79,    80,    48,   304,   305,   306,    51,   447,
     448,   202,   203,   265,    91,   267,   415,    59,    47,    48,
      53,   106,    14,    48,    80,   323,   324,   426,    14,    62,
      55,    39,   270,    75,   310,    77,    39,    29,   276,    64,
     299,   300,   301,    29,    39,   444,    46,   238,   486,   287,
     488,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   488,
      74,   156,   310,    47,   406,    47,   374,   329,   516,   270,
     379,    46,   481,   482,    16,   484,   524,   525,   487,    47,
     489,    48,   491,    39,    74,    22,    28,   535,    55,    48,
     499,    48,   501,   502,    73,    47,    74,    64,    33,    34,
      42,    74,     4,    45,   407,    16,   515,   202,   203,   412,
       8,   520,   415,   522,    49,    50,    58,    28,    65,     3,
      53,   530,   531,   426,   533,    67,    68,   536,    74,   438,
     539,   379,   541,   542,    45,   383,   422,    79,    74,   548,
      48,   444,    74,   238,   447,   448,   295,   296,   297,   298,
      74,    74,    39,    16,    73,    72,    67,    68,    39,    74,
      17,    47,   424,    18,    47,    28,    72,    72,    79,    48,
      73,    39,    73,   106,   422,   270,    17,    74,   481,   482,
      74,   484,    45,   486,   487,   488,   489,    18,   491,    71,
     438,   439,    22,    73,   442,    72,   499,    72,   501,   502,
      74,    47,   488,    47,    67,    68,   407,    22,    73,    17,
      72,   412,   515,   516,   415,    74,    79,   520,    72,   522,
      72,   524,   525,   156,    72,   426,    11,   530,   531,    72,
     533,   493,   535,   536,    74,    72,   539,    72,   541,   542,
     488,    74,    92,   444,    72,   548,   447,   448,    72,    72,
      66,   415,   260,   153,   488,   488,   330,   156,   442,   210,
      53,   287,   289,    11,   292,   290,    -1,    15,   291,   202,
     203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     481,   482,    30,   484,    -1,   486,   487,   488,   489,    -1,
     491,    39,    -1,    -1,    -1,    43,    -1,    -1,   499,    -1,
     501,   502,    -1,    -1,    -1,   238,    -1,    55,    56,    57,
      16,    -1,   407,   106,   515,   516,    64,   412,    -1,   520,
     415,   522,    28,   524,   525,   489,    -1,   491,    -1,   530,
     531,   426,   533,    81,   535,   536,    42,   270,   539,    45,
     541,   542,    -1,    -1,    -1,    -1,    -1,   548,    -1,   444,
      -1,    -1,   447,   448,    -1,    -1,   520,    -1,   522,    -1,
      -1,    67,    68,   156,    -1,    -1,   530,   531,    -1,   533,
      -1,    -1,   536,    79,    -1,   539,    -1,   541,   542,    -1,
      -1,    -1,    -1,    -1,   548,    -1,   481,   482,    -1,   484,
      -1,   486,   487,   488,   489,    -1,   491,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   499,    -1,   501,   502,    -1,   202,
     203,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
     515,   516,    -1,    -1,    -1,   520,    -1,   522,    -1,   524,
     525,    -1,    -1,    -1,    -1,   530,   531,    -1,   533,    12,
     535,   536,    -1,    -1,   539,   238,   541,   542,    -1,    -1,
      -1,    -1,    -1,   548,    -1,    28,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    39,   106,    -1,    -1,
      -1,    44,    -1,    46,   407,    -1,    -1,   270,    -1,   412,
      -1,    28,   415,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,   426,    67,    68,    -1,    44,    71,    46,
      -1,    74,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,
      -1,   444,    -1,    -1,   447,   448,    -1,   156,    91,    -1,
      67,    68,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,   481,   482,
      -1,   484,    -1,   486,   487,   488,   489,    -1,   491,    -1,
      -1,    -1,    -1,   202,   203,    53,   499,    -1,   501,   502,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   515,   516,    -1,    -1,    -1,   520,    -1,   522,
      -1,   524,   525,    -1,    -1,    -1,    -1,   530,   531,   238,
     533,    -1,   535,   536,    -1,    -1,   539,    -1,   541,   542,
      -1,    -1,    -1,    -1,   407,   548,    11,    12,   106,   412,
      15,    -1,   415,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   270,    -1,   426,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,   444,    47,    -1,   447,   448,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,   156,    64,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,   481,   482,
      -1,   484,    87,   486,   487,   488,   489,    -1,   491,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,   501,   502,
      -1,    -1,    -1,    -1,   202,   203,    -1,    -1,    -1,    -1,
      -1,    -1,   515,   516,   106,    -1,    -1,   520,    -1,   522,
      -1,   524,   525,    -1,    -1,    -1,    -1,   530,   531,    -1,
     533,    -1,   535,   536,    -1,    -1,   539,    -1,   541,   542,
     238,    -1,    -1,    11,    -1,   548,    -1,    15,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,   407,    -1,
      -1,    -1,    30,   412,   156,    -1,   415,    -1,    -1,    -1,
      -1,    39,   270,    -1,    -1,    43,    -1,   426,    46,    47,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,   444,    64,    -1,   447,   448,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
     202,   203,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   481,   482,    -1,   484,    -1,   486,   487,   488,
     489,    -1,   491,    -1,    -1,    -1,   238,    -1,    -1,    -1,
     499,    -1,   501,   502,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   515,   516,    -1,    -1,
      -1,   520,    -1,   522,    -1,   524,   525,    -1,   270,    -1,
      -1,   530,   531,    -1,   533,    -1,   535,   536,    -1,    -1,
     539,    11,   541,   542,    -1,    15,    -1,    -1,    -1,   548,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,   407,
      30,    11,    -1,    -1,   412,    15,    -1,   415,    -1,    39,
      -1,    -1,    -1,    43,    -1,    25,    46,    47,   426,    -1,
      30,    -1,    -1,    53,    -1,    55,    56,    57,    -1,    39,
      -1,    -1,    62,    43,    64,    -1,   444,    47,    -1,   447,
     448,    71,    -1,    53,    -1,    55,    56,    57,    -1,    -1,
      -1,    81,    62,    -1,    64,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,   481,   482,    -1,   484,    87,   486,   487,
     488,   489,    -1,   491,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   499,    -1,   501,   502,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   407,    -1,   515,   516,    -1,
     412,    11,   520,   415,   522,    15,   524,   525,    -1,    -1,
      -1,    -1,   530,   531,   426,   533,    -1,   535,   536,    80,
      30,   539,    -1,   541,   542,    -1,    -1,    -1,    -1,    39,
     548,    -1,   444,    43,    95,   447,   448,    -1,    99,    -1,
      -1,   102,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,   481,
     482,    81,   484,    -1,   486,   487,   488,   489,    -1,   491,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,   501,
     502,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   515,   516,    -1,    -1,   168,   520,    -1,
     522,    -1,   524,   525,    -1,    -1,    -1,    -1,   530,   531,
      -1,   533,    -1,   535,   536,    91,    -1,   539,    94,   541,
     542,    -1,    -1,    -1,    -1,    -1,   548,    -1,    -1,    -1,
      -1,    -1,    -1,   204,   205,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,
     221,   222,    -1,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,    -1,    -1,    -1,    -1,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     166,    -1,    -1,   169,   170,   171,    -1,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,   285,    -1,    -1,   288,    -1,    28,
      -1,    30,    31,    32,    11,    -1,    -1,    -1,    15,    -1,
      39,    40,    -1,    -1,    43,    44,    -1,    46,    25,    -1,
     311,    -1,    -1,    30,    -1,    -1,    55,    56,    57,    -1,
      -1,   322,    39,    -1,   325,    64,    43,    -1,    -1,    -1,
      47,    70,    71,    -1,    -1,    74,    53,    -1,    55,    56,
      57,    80,    81,    -1,    -1,    62,    85,    64,    -1,    -1,
      89,    -1,    -1,    92,    93,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     381,   287,    -1,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   410,
     411,    -1,   413,    -1,     5,    -1,   417,     7,    -1,    10,
      -1,    11,    12,    13,    -1,    15,   427,    -1,    -1,    19,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    -1,    -1,    36,    -1,    38,    -1,    39,
      40,    -1,    -1,    43,    44,    -1,    46,    -1,    -1,    -1,
      -1,    52,    -1,    54,    -1,    55,    56,    57,    -1,    60,
      -1,    -1,    63,   379,    64,    66,    -1,   383,    -1,    -1,
      70,    71,    -1,    -1,    74,    76,    -1,    78,    -1,   490,
      80,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,
      -1,    -1,    92,    93,   505,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,     7,   518,   519,    15,
      11,    12,    13,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,   438,   439,    30,    -1,   442,    28,    -1,    30,
      31,    32,    -1,    39,    -1,    -1,    -1,    43,    39,    40,
      -1,    -1,    43,    44,    -1,    46,    -1,    -1,    -1,    55,
      56,    57,    -1,    -1,    55,    56,    57,    -1,    64,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    72,    -1,    -1,    70,
      71,    -1,    -1,    74,    -1,    81,    -1,     7,    -1,    80,
      81,    11,    12,    13,    85,    15,    -1,    -1,    89,    19,
      -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    43,    44,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      70,    71,    -1,    -1,    74,    -1,    -1,    -1,     7,    -1,
      80,    81,    11,    -1,    13,    85,    15,    -1,    -1,    89,
      19,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,     7,    64,    -1,    -1,    11,    -1,
      13,    70,    15,    -1,    -1,    74,    19,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    30,    11,    32,
      89,    -1,    15,    92,    93,    -1,    39,    40,    -1,    -1,
      43,    -1,    25,    46,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    39,    -1,    -1,    -1,
      43,    64,    -1,    46,    47,    -1,    -1,    70,    -1,    -1,
      53,    74,    55,    56,    57,    -1,    -1,    -1,    81,    62,
      11,    64,    85,    -1,    15,    -1,    89,    -1,    -1,    92,
      93,    -1,    -1,    -1,    25,    -1,    -1,    -1,    81,    30,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    39,    11,
      -1,    -1,    43,    15,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    25,    55,    56,    57,    -1,    30,    -1,
      -1,    62,    -1,    64,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    74,    11,    47,    -1,    -1,    15,    -1,
      81,    53,    -1,    55,    56,    57,    87,    -1,    25,    -1,
      62,    -1,    64,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    39,    11,    -1,    -1,    43,    15,    -1,    81,
      47,    -1,    -1,    -1,    -1,    87,    53,    25,    55,    56,
      57,    -1,    30,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    73,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    81,    53,    -1,    55,    56,    57,
      87,    -1,    -1,    11,    62,    -1,    64,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    25,    -1,    -1,
      -1,    -1,    30,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    39,    -1,    -1,    -1,    43,    -1,    -1,    11,    47,
      -1,    -1,    15,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    25,    -1,    62,    -1,    64,    30,    11,    -1,
      -1,    -1,    15,    -1,    72,    -1,    39,    -1,    -1,    -1,
      43,    -1,    25,    81,    47,    -1,    -1,    30,    -1,    87,
      53,    -1,    55,    56,    57,    -1,    39,    -1,    -1,    62,
      43,    64,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    74,    55,    56,    57,    -1,    -1,    -1,    81,    62,
      -1,    64,    11,    -1,    87,    -1,    15,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    25,    -1,    81,    -1,
      -1,    30,    -1,    -1,    87,    -1,    -1,     5,    -1,    -1,
      39,    -1,    10,    -1,    43,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    20,    -1,    53,    23,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    36,    -1,
      38,    39,     5,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      48,    -1,    81,    -1,    52,    -1,    54,    20,    87,     5,
      23,    -1,    60,    -1,    10,    63,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    36,    20,    38,    -1,    23,    76,    -1,
      78,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      36,    54,    38,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    -1,    48,    66,    -1,    -1,    52,    -1,    54,    -1,
      -1,    -1,    -1,    76,    60,    78,    -1,    63,    11,    12,
      66,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    78,    -1,    -1,    28,    -1,    30,    31,    -1,
      11,    12,    -1,    -1,    15,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    -1,    55,    56,    57,    -1,    -1,    -1,    39,    -1,
      11,    64,    43,    44,    15,    -1,    11,    -1,    -1,    -1,
      15,    74,    -1,    -1,    55,    56,    57,    80,    81,    30,
      -1,    -1,    -1,    64,    -1,    30,    -1,    -1,    39,    -1,
      -1,    -1,    43,    74,    39,    -1,    -1,    11,    43,    80,
      81,    15,    -1,    11,    55,    56,    57,    15,    -1,    -1,
      55,    56,    57,    64,    -1,    -1,    30,    -1,    -1,    64,
      -1,    72,    30,    -1,    -1,    39,    -1,    72,    -1,    43,
      81,    39,    -1,    11,    -1,    43,    81,    15,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    55,    56,    57,
      64,    -1,    30,    11,    -1,    -1,    64,    15,    72,    -1,
     489,    39,   491,    -1,    72,    43,    -1,    81,    -1,    -1,
      -1,    -1,    30,    81,    -1,    -1,    -1,    55,    56,    57,
      -1,    39,    -1,    -1,    -1,    43,    64,    -1,    -1,    -1,
      -1,   520,    -1,   522,    72,    -1,    -1,    55,    56,    57,
      -1,   530,   531,    81,   533,    -1,    64,   536,    -1,    -1,
     539,    -1,   541,   542,    72,    -1,    -1,    -1,    -1,   548,
      -1,    -1,    -1,    81
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    28,    42,    45,    58,    67,    68,    79,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     114,   115,   116,   134,    39,    39,    79,   111,    39,   111,
       0,    98,   104,    99,   104,   105,    16,    45,   116,    46,
     117,   111,    20,    74,   117,    20,   104,    39,    39,    12,
      31,    39,    44,    46,    71,    74,    80,    91,   106,   107,
     108,   109,   110,   111,   112,   115,   118,   119,   120,   121,
     125,   130,   131,   137,    20,    39,    77,   117,   117,    47,
       7,    11,    13,    15,    19,    28,    30,    32,    39,    40,
      43,    55,    56,    57,    64,    70,    71,    74,    81,    85,
      89,    92,    93,   106,   111,   137,   138,   139,   140,   142,
     143,   144,   146,   147,   148,   149,   150,   152,   153,   155,
     157,   163,   165,   166,   167,   168,   169,   170,   173,   174,
     175,   176,   177,   178,   179,   180,   184,   197,   198,   201,
     202,   203,    39,   126,   131,    39,   122,   123,   126,    48,
     113,    91,   106,   131,    71,   119,    46,   132,    39,    77,
      74,    28,    72,   106,   127,   128,    25,    39,    47,    53,
      62,    87,   111,   176,   179,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,    39,    74,    39,
      74,   106,    47,    17,    47,    47,   111,   178,   196,   107,
     110,   111,   196,    74,   182,   182,   137,    47,   182,    39,
     122,     5,    10,    20,    23,    36,    38,    48,    52,    54,
      60,    63,    66,    76,    78,    71,   139,    74,    22,    48,
       5,    10,    23,    36,    38,    52,    54,    60,    63,    66,
      76,    78,    55,    64,    74,   129,   137,   113,    23,   113,
      18,    74,   129,    73,    48,   126,   122,   126,   132,    71,
     138,    74,    74,   106,    39,    88,    18,    72,   196,   107,
     111,   182,   196,   196,   196,    17,    74,     9,    69,     4,
       8,    65,     3,    24,    26,    33,    34,    49,    50,    35,
      37,    51,    53,    62,    59,    75,    77,    74,    74,   122,
      28,    74,   106,   147,   159,   160,   162,   140,    72,   133,
     182,   182,    48,   181,   181,    47,    74,    74,    14,    29,
     171,   172,   182,    74,    74,   182,   182,    39,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   140,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,    46,   124,   135,   182,    23,   123,    73,
     129,    74,   129,    71,    39,    88,   113,    39,   128,    72,
     113,    48,   113,    72,   182,   187,   182,   188,   189,   190,
     191,   192,   192,   193,   193,   193,   193,   194,   194,   194,
     195,   195,   196,   196,   196,    74,   106,    74,   182,   122,
      74,    17,    18,    18,    72,    72,   182,    48,   113,   113,
      72,   133,    47,   137,    29,   172,    72,    47,    73,    73,
      18,    71,   124,   136,   124,   113,    39,   196,    72,    72,
     199,    74,    17,   122,    72,   161,   162,    74,    74,   182,
     182,   147,   182,    32,    39,    92,   140,   141,   142,   145,
     150,   151,   154,   156,   158,   164,    73,   182,    72,   128,
     137,   140,    72,   133,    71,    18,    71,   196,   199,   185,
     140,    72,    72,   161,    72,   161,    74,    72,    47,    17,
      47,    22,    73,    72,    72,    71,   124,   140,   140,    72,
     140,    72,    72,   161,   140,    74,   159,   160,   141,   182,
     141,   137,   140,   140,   140,    72,    74,   182,    74,    17,
      72,   140,    72,   161,    74,    74,   182,   182,   141,   141,
      72,    72,   161,    72,   161,    74,    72,   141,   141,    72,
     141,    72,    72,   161,   141,   141,   141,   141,    72,   141
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    96,    96,    96,    96,    96,    96,
      97,    98,    98,    99,    99,    99,    99,   100,   101,   102,
     103,   104,   104,   105,   105,   106,   106,   107,   107,   107,
     108,   108,   109,   109,   110,   111,   111,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   116,   116,   117,   117,
     118,   118,   119,   119,   119,   120,   120,   120,   121,   121,
     122,   122,   123,   123,   123,   123,   124,   124,   125,   125,
     125,   125,   126,   126,   127,   127,   128,   128,   128,   128,
     128,   128,   129,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   134,   134,   135,   135,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   139,   140,   140,   140,
     140,   140,   140,   141,   141,   141,   141,   141,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   143,   144,
     145,   146,   147,   147,   147,   147,   147,   147,   147,   148,
     149,   150,   151,   152,   152,   153,   154,   155,   155,   156,
     156,   157,   157,   157,   157,   157,   157,   157,   157,   158,
     158,   158,   158,   158,   158,   158,   158,   159,   159,   160,
     160,   161,   162,   162,   163,   164,   165,   165,   166,   167,
     167,   168,   168,   169,   170,   170,   170,   171,   171,   172,
     173,   173,   174,   174,   174,   174,   175,   175,   175,   175,
     175,   175,   176,   177,   177,   178,   178,   179,   179,   179,
     179,   180,   180,   180,   180,   181,   181,   182,   183,   183,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   185,   185,   186,   186,   187,   187,
     188,   188,   189,   189,   190,   190,   191,   191,   191,   192,
     192,   192,   192,   192,   193,   193,   193,   193,   194,   194,
     194,   195,   195,   195,   195,   196,   196,   196,   196,   196,
     197,   198,   199,   199,   199,   199,   200,   200,   200,   200,
     201,   201,   201,   201,   202,   203
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     2,     2,     3,
       2,     2,     1,     1,     1,     1,     1,     3,     5,     6,
       6,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     2,
       3,     4,     2,     1,     1,     1,     1,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     1,     3,     4,     1,     2,     1,     1,     3,     3,
       4,     4,     1,     2,     3,     1,     2,     3,     3,     4,
       3,     4,     1,     1,     2,     3,     3,     4,     2,     3,
       3,     1,     3,     4,     2,     3,     3,     4,     3,     1,
       2,     3,     2,     1,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     5,
       3,     5,     3,     3,     5,     5,     5,     1,     1,     1,
       1,     6,     7,     7,     8,     7,     8,     8,     9,     6,
       7,     7,     8,     7,     8,     8,     9,     1,     1,     2,
       3,     1,     3,     1,     7,     7,     2,     3,     3,     2,
       3,     2,     3,     3,     3,     4,     5,     2,     1,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     5,     4,     4,     3,     4,     5,
       6,     3,     4,     3,     4,     4,     3,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     5,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     4,     5,     4,     5,
       1,     1,     1,     1,     2,     2
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
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2413 "parser.tab.c"
    break;

  case 26:
#line 127 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2419 "parser.tab.c"
    break;

  case 27:
#line 131 "parser.y"
                 {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2425 "parser.tab.c"
    break;

  case 28:
#line 132 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2431 "parser.tab.c"
    break;

  case 29:
#line 133 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2437 "parser.tab.c"
    break;

  case 30:
#line 137 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2443 "parser.tab.c"
    break;

  case 31:
#line 138 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2449 "parser.tab.c"
    break;

  case 32:
#line 142 "parser.y"
                {check_gst((yyvsp[0].item).label); strcpy((yyval.item).type,(yyvsp[0].item).label);}
#line 2455 "parser.tab.c"
    break;

  case 33:
#line 143 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2461 "parser.tab.c"
    break;

  case 34:
#line 147 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).label);}
#line 2467 "parser.tab.c"
    break;

  case 35:
#line 151 "parser.y"
                                {strcpy((yyval.item).label,strcat((yyvsp[-2].item).label,strcat((yyvsp[-1].item).label,(yyvsp[0].item).label)));}
#line 2473 "parser.tab.c"
    break;

  case 36:
#line 152 "parser.y"
                        {strcpy((yyval.item).label,(yyvsp[0].item).label);}
#line 2479 "parser.tab.c"
    break;

  case 37:
#line 156 "parser.y"
                        {string t; for(int i=0;i<(yyvsp[-1].item).dims;i++) t.push_back('*'); strcpy((yyval.item).type,strcat((yyvsp[-1].item).type,t.c_str()));}
#line 2485 "parser.tab.c"
    break;

  case 38:
#line 160 "parser.y"
                                          {(yyval.item).dims = (yyvsp[-2].item).dims+1;}
#line 2491 "parser.tab.c"
    break;

  case 39:
#line 161 "parser.y"
                                        {(yyval.item).dims = 1;}
#line 2497 "parser.tab.c"
    break;

  case 40:
#line 165 "parser.y"
                                {if(first_parse){make_class_entry((yyvsp[-1].item).label,yylineno,"00");}}
#line 2503 "parser.tab.c"
    break;

  case 41:
#line 166 "parser.y"
                                            {if(first_parse){string mod = check_class_modifiers((yyvsp[-3].item).label,(yyvsp[-1].item).label); make_class_entry((yyvsp[-1].item).label,yylineno,mod);}}
#line 2509 "parser.tab.c"
    break;

  case 42:
#line 170 "parser.y"
                             {strcpy((yyval.item).label,strcat((yyvsp[-1].item).label,(yyvsp[0].item).label));}
#line 2515 "parser.tab.c"
    break;

  case 43:
#line 171 "parser.y"
                {strcpy((yyval.item).label,(yyvsp[0].item).label);}
#line 2521 "parser.tab.c"
    break;

  case 44:
#line 175 "parser.y"
            {strcpy((yyval.item).label,"0");}
#line 2527 "parser.tab.c"
    break;

  case 45:
#line 176 "parser.y"
                {strcpy((yyval.item).label,"1");}
#line 2533 "parser.tab.c"
    break;

  case 46:
#line 177 "parser.y"
                {strcpy((yyval.item).label,"2");}
#line 2539 "parser.tab.c"
    break;

  case 47:
#line 178 "parser.y"
                {strcpy((yyval.item).label,"3");}
#line 2545 "parser.tab.c"
    break;

  case 54:
#line 194 "parser.y"
        {reset();}
#line 2551 "parser.tab.c"
    break;

  case 58:
#line 204 "parser.y"
                                        {
    if(first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type((yyvsp[-2].item).type,v[i].second,"declare");
            make_entry(v[i].first,t,yylineno,"0000");
        }
    }	
}
#line 2564 "parser.tab.c"
    break;

  case 59:
#line 212 "parser.y"
                                                        {
    if(first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type((yyvsp[-2].item).type,v[i].second,"declare");
            make_entry(v[i].first,t,yylineno,check_method_modifiers((yyvsp[-3].item).label));
        }
    }
}
#line 2577 "parser.tab.c"
    break;

  case 62:
#line 228 "parser.y"
                                        {for(int i=0;i<100;i++) if((yyvsp[0].item).type[i] == '*'){cout<<"Error "<<(yyvsp[-2].item).label<<" is not of array type"<<endl; exit(1); v.push_back(make_pair((yyvsp[-2].item).label,(yyvsp[0].item).type));}	}
#line 2583 "parser.tab.c"
    break;

  case 63:
#line 229 "parser.y"
                                            {
    string t = (yyvsp[0].item).type;
    int k=0;
    for(int i=0;i<t.size();i++) if(t[i]=='*') k++;
    if(t[0]=='*'){
        if(k<=(yyvsp[-2].item).dims){
            string p;
            for(int i=0;i<(yyvsp[-2].item).dims;i++) p.push_back('*');
            v.push_back(make_pair((yyvsp[-3].item).label,p));
        }
        else{
            cout<<"Type of "<<(yyvsp[-3].item).label<<" not matched"<<endl;
            exit(1);
        }
    }else{
        if(k==(yyvsp[-2].item).dims) v.push_back(make_pair((yyvsp[-3].item).label,(yyvsp[0].item).type));
        else{
            cout<<"Type of "<<(yyvsp[-3].item).label<<" not matched"<<endl;
            exit(1);
        }
    }
}
#line 2610 "parser.tab.c"
    break;

  case 64:
#line 251 "parser.y"
                {v.push_back(make_pair((yyvsp[0].item).label,""));}
#line 2616 "parser.tab.c"
    break;

  case 65:
#line 252 "parser.y"
                        {string t; for(int i=0;i<(yyvsp[0].item).dims;i++) t.push_back('*'); v.push_back(make_pair((yyvsp[-1].item).label,t));}
#line 2622 "parser.tab.c"
    break;

  case 66:
#line 256 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2628 "parser.tab.c"
    break;

  case 67:
#line 257 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2634 "parser.tab.c"
    break;

  case 68:
#line 261 "parser.y"
                                        {if(first_parse){if((yyvsp[-1].item).dims){cout<<"Void function cant be of array type"<<endl; exit(1);} make_func_entry((yyvsp[-1].item).label,"void",arguments,yylineno,"0000",(yyvsp[0].item).type); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}}
#line 2640 "parser.tab.c"
    break;

  case 69:
#line 262 "parser.y"
                                        {if(first_parse){string t; for(int i=0;i<(yyvsp[-1].item).dims;i++) t.push_back('*'); make_func_entry((yyvsp[-1].item).label,strcat((yyvsp[-2].item).type,t.c_str()),arguments,yylineno,"0000",(yyvsp[0].item).type); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}}
#line 2646 "parser.tab.c"
    break;

  case 70:
#line 263 "parser.y"
                                                   {if(first_parse){if((yyvsp[-2].item).dims){cout<<"Void function cant be of array type"<<endl; exit(1);} string x = check_method_modifiers((yyvsp[-3].item).label); make_func_entry((yyvsp[-1].item).label,"void",arguments,yylineno,x,(yyvsp[0].item).type); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}}
#line 2652 "parser.tab.c"
    break;

  case 71:
#line 264 "parser.y"
                                                  {if(first_parse){string t; for(int i=0;i<(yyvsp[-2].item).dims;i++) t.push_back('*'); string x = check_method_modifiers((yyvsp[-3].item).label); make_func_entry((yyvsp[-1].item).label,strcat((yyvsp[-2].item).type,t.c_str()),arguments,yylineno,,(yyvsp[0].item).type); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}}
#line 2658 "parser.tab.c"
    break;

  case 72:
#line 268 "parser.y"
            {strcpy((yyval.item).label,(yyvsp[0].item).label); (yyval.item).dims = 0;}
#line 2664 "parser.tab.c"
    break;

  case 73:
#line 269 "parser.y"
                        {strcpy((yyval.item).label,(yyvsp[-1].item).label); (yyval.item).dims = (yyvsp[0].item).dims;}
#line 2670 "parser.tab.c"
    break;

  case 76:
#line 278 "parser.y"
                    {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-1].item).type,0,0));}}
#line 2676 "parser.tab.c"
    break;

  case 77:
#line 279 "parser.y"
                                        {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-1].item).type,0,1));}}
#line 2682 "parser.tab.c"
    break;

  case 78:
#line 280 "parser.y"
                                {if(first_parse){string t; for(int i=0;i<(yyvsp[0].item).dims;i++) t.push_back('*'); arguments.push_back(make_tuple((yyvsp[-1].item).label,strcat((yyvsp[-2].item).type,t.c_str()),0,0));}}
#line 2688 "parser.tab.c"
    break;

  case 79:
#line 281 "parser.y"
                                        {if(first_parse){string t; for(int i=0;i<(yyvsp[-1].item).dims;i++) t.push_back('*'); arguments.push_back(make_tuple((yyvsp[-1].item).label,strcat((yyvsp[-3].item).type,t.c_str()),0,1));}}
#line 2694 "parser.tab.c"
    break;

  case 80:
#line 282 "parser.y"
                                        {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-2].item).type,1,0));}}
#line 2700 "parser.tab.c"
    break;

  case 81:
#line 283 "parser.y"
                                                {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-2].item).type,1,1));}}
#line 2706 "parser.tab.c"
    break;

  case 82:
#line 287 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2712 "parser.tab.c"
    break;

  case 83:
#line 288 "parser.y"
                {strcpy((yyval.item).type,";");}
#line 2718 "parser.tab.c"
    break;

  case 84:
#line 292 "parser.y"
                           {if(first_parse){check_constructor((yyvsp[0].item).label); make_func_entry((yyvsp[-1].item).label,(yyvsp[-1].item).label,arguments,yylineno,"0000"); add_arguments(arguments,(yyvsp[-1].item).label); arguments.clear();}}
#line 2724 "parser.tab.c"
    break;

  case 85:
#line 293 "parser.y"
                                           {if(first_parse){check_constructor((yyvsp[-1].item).label); string x = check_method_modifiers((yyvsp[-2].item).label); make_func_entry((yyvsp[-1].item).label,(yyvsp[-1].item).label,arguments,yylineno,x); add_arguments(arguments,(yyvsp[0].item).label); arguments.clear();}}
#line 2730 "parser.tab.c"
    break;

  case 90:
#line 307 "parser.y"
                                {function_call.push_back((yyvsp[0].item).type);}
#line 2736 "parser.tab.c"
    break;

  case 91:
#line 308 "parser.y"
                {function_call.push_back((yyvsp[0].item).type);}
#line 2742 "parser.tab.c"
    break;

  case 92:
#line 313 "parser.y"
                                {if(first_parse) make_class_entry((yyvsp[-1].item).label,yylineno,"00");}
#line 2748 "parser.tab.c"
    break;

  case 93:
#line 314 "parser.y"
                                                {if(first_parse){string mod = check_class_modifiers((yyvsp[-3].item).label,(yyvsp[-1].item).label); make_class_entry((yyvsp[-1].item).label,yylineno,mod);}}
#line 2754 "parser.tab.c"
    break;

  case 94:
#line 318 "parser.y"
                                                {strcpy((yyval.item).type,"*");}
#line 2760 "parser.tab.c"
    break;

  case 95:
#line 319 "parser.y"
                                                        {strcpy((yyval.item).type,"*");}
#line 2766 "parser.tab.c"
    break;

  case 96:
#line 320 "parser.y"
                                                                        {strcpy((yyval.item).type,strcat((yyvsp[-1].item).type,"*"));}
#line 2772 "parser.tab.c"
    break;

  case 97:
#line 321 "parser.y"
                                                                        {strcpy((yyval.item).type,strcat((yyvsp[-2].item).type,"*"));}
#line 2778 "parser.tab.c"
    break;

  case 98:
#line 325 "parser.y"
                                                    {strcpy((yyval.item).type, expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,"array").c_str());}
#line 2784 "parser.tab.c"
    break;

  case 99:
#line 326 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2790 "parser.tab.c"
    break;

  case 101:
#line 331 "parser.y"
                                                                {strcpy((yyval.item).type,(yyvsp[-1].item).type);}
#line 2796 "parser.tab.c"
    break;

  case 102:
#line 335 "parser.y"
                                        {string t = (yyvsp[-1].item).type; if(t.size()==0) strcpy((yyval.item).type,(yyvsp[0].item).type); else strcpy((yyval.item).type,(yyvsp[-1].item).type);}
#line 2802 "parser.tab.c"
    break;

  case 103:
#line 336 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2808 "parser.tab.c"
    break;

  case 104:
#line 340 "parser.y"
                                        {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type((yyvsp[-2].item).type,v[i].second,"declare");
            make_dirty_entry(v[i].first,t,yylineno,"0000");
        }
    }	
    v.clear();
}
#line 2822 "parser.tab.c"
    break;

  case 105:
#line 349 "parser.y"
                                                {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type((yyvsp[-2].item).type,v[i].second,"declare");
            make_dirty_entry(v[i].first,t,yylineno,"0010");
        }
    }	
    v.clear();
}
#line 2836 "parser.tab.c"
    break;

  case 106:
#line 358 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2842 "parser.tab.c"
    break;

  case 107:
#line 362 "parser.y"
                                                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2848 "parser.tab.c"
    break;

  case 124:
#line 385 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2854 "parser.tab.c"
    break;

  case 139:
#line 417 "parser.y"
                                                                {reset();}
#line 2860 "parser.tab.c"
    break;

  case 140:
#line 421 "parser.y"
                                            {reset();}
#line 2866 "parser.tab.c"
    break;

  case 141:
#line 425 "parser.y"
                                                                    {reset();}
#line 2872 "parser.tab.c"
    break;

  case 142:
#line 429 "parser.y"
                                                        {reset();}
#line 2878 "parser.tab.c"
    break;

  case 145:
#line 439 "parser.y"
                                                                {if((yyvsp[-2].item).type!="boolean"){cout<<"Expression must be of type boolean"<<endl;exit(1);} reset();}
#line 2884 "parser.tab.c"
    break;

  case 146:
#line 443 "parser.y"
                                                                                {if((yyvsp[-2].item).type!="boolean"){cout<<"Expression must be of type boolean"<<endl;exit(1);} reset();}
#line 2890 "parser.tab.c"
    break;

  case 151:
#line 457 "parser.y"
                                                                        {reset();}
#line 2896 "parser.tab.c"
    break;

  case 152:
#line 458 "parser.y"
                                                                                    {reset();}
#line 2902 "parser.tab.c"
    break;

  case 153:
#line 459 "parser.y"
                                                                                                {if((yyvsp[-3].item).type!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}
#line 2908 "parser.tab.c"
    break;

  case 154:
#line 460 "parser.y"
                                                                                                        {if((yyvsp[-4].item).type!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}
#line 2914 "parser.tab.c"
    break;

  case 155:
#line 461 "parser.y"
                                                                                                {reset();}
#line 2920 "parser.tab.c"
    break;

  case 156:
#line 462 "parser.y"
                                                                                                        {reset();}
#line 2926 "parser.tab.c"
    break;

  case 157:
#line 463 "parser.y"
                                                                                                        {if((yyvsp[-3].item).type!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}
#line 2932 "parser.tab.c"
    break;

  case 158:
#line 464 "parser.y"
                                                                                                                {if((yyvsp[-4].item).type!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}
#line 2938 "parser.tab.c"
    break;

  case 159:
#line 468 "parser.y"
                                                                                 {reset();}
#line 2944 "parser.tab.c"
    break;

  case 160:
#line 469 "parser.y"
                                                                                             {reset();}
#line 2950 "parser.tab.c"
    break;

  case 161:
#line 470 "parser.y"
                                                                                                        {if((yyvsp[-3].item).type!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}
#line 2956 "parser.tab.c"
    break;

  case 162:
#line 471 "parser.y"
                                                                                                                {if((yyvsp[-4].item).type!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}
#line 2962 "parser.tab.c"
    break;

  case 163:
#line 472 "parser.y"
                                                                                                        {reset();}
#line 2968 "parser.tab.c"
    break;

  case 164:
#line 473 "parser.y"
                                                                                                                {reset();}
#line 2974 "parser.tab.c"
    break;

  case 165:
#line 474 "parser.y"
                                                                                                                {if((yyvsp[-3].item).type!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}
#line 2980 "parser.tab.c"
    break;

  case 166:
#line 475 "parser.y"
                                                                                                                        {if((yyvsp[-4].item).type!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}
#line 2986 "parser.tab.c"
    break;

  case 169:
#line 484 "parser.y"
                           {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type((yyvsp[-1].item).type,v[i].second,"declare");
            make_dirty_entry(v[i].first,t,yylineno,"0000");
        }
    }	
    v.clear();
}
#line 3000 "parser.tab.c"
    break;

  case 170:
#line 493 "parser.y"
                                   {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type((yyvsp[-2].item).type,v[i].second,"declare");
            make_dirty_entry(v[i].first,t,yylineno,"0010");
        }
    }
    v.clear();
}
#line 3014 "parser.tab.c"
    break;

  case 174:
#line 513 "parser.y"
                                                                                                {reset();}
#line 3020 "parser.tab.c"
    break;

  case 175:
#line 517 "parser.y"
                                                                                                                {reset();}
#line 3026 "parser.tab.c"
    break;

  case 181:
#line 535 "parser.y"
                                {strcpy((yyval.item).type,"void");}
#line 3032 "parser.tab.c"
    break;

  case 182:
#line 536 "parser.y"
                                        {strcpy((yyval.item).type,(yyvsp[-1].item).type);}
#line 3038 "parser.tab.c"
    break;

  case 190:
#line 559 "parser.y"
                        {(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3044 "parser.tab.c"
    break;

  case 191:
#line 560 "parser.y"
                                {(yyval.item).lit = false; strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3050 "parser.tab.c"
    break;

  case 192:
#line 564 "parser.y"
                        {(yyval.item).lit = true;strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3056 "parser.tab.c"
    break;

  case 193:
#line 565 "parser.y"
                                        {(yyval.item).lit = false; strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3062 "parser.tab.c"
    break;

  case 194:
#line 566 "parser.y"
                        {(yyval.item).lit = false; strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3068 "parser.tab.c"
    break;

  case 195:
#line 567 "parser.y"
                                {(yyval.item).lit = false; strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3074 "parser.tab.c"
    break;

  case 196:
#line 571 "parser.y"
                    {strcpy((yyval.item).type,"int");}
#line 3080 "parser.tab.c"
    break;

  case 197:
#line 572 "parser.y"
                                {strcpy((yyval.item).type,"float");}
#line 3086 "parser.tab.c"
    break;

  case 198:
#line 573 "parser.y"
                        {strcpy((yyval.item).type,"bool");}
#line 3092 "parser.tab.c"
    break;

  case 199:
#line 574 "parser.y"
                                {strcpy((yyval.item).type,"char");}
#line 3098 "parser.tab.c"
    break;

  case 200:
#line 575 "parser.y"
                                {strcpy((yyval.item).type,"string");}
#line 3104 "parser.tab.c"
    break;

  case 201:
#line 576 "parser.y"
                        {strcpy((yyval.item).type,"null");}
#line 3110 "parser.tab.c"
    break;

  case 202:
#line 580 "parser.y"
                                                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3116 "parser.tab.c"
    break;

  case 203:
#line 584 "parser.y"
                                                        {string t = find_in_scope((yyvsp[-2].item).label); strcpy((yyval.item).type,get_method(t,t,function_call).c_str());}
#line 3122 "parser.tab.c"
    break;

  case 204:
#line 585 "parser.y"
                                                                        {string t = find_in_scope((yyvsp[-3].item).label); strcpy((yyval.item).type,get_method(t,t,function_call).c_str());}
#line 3128 "parser.tab.c"
    break;

  case 205:
#line 589 "parser.y"
                                                                        {string t = find_in_scope((yyvsp[-3].item).label); if(t[t.size()-1]!='*'){cout<<"Accessing Higher Dimensions of "<<(yyvsp[-3].item).label<<" in line number "<<yylineno<<endl; exit(1);} strcpy((yyval.item).type,(t.substr(0,t.size()-1)).c_str());}
#line 3134 "parser.tab.c"
    break;

  case 206:
#line 590 "parser.y"
                                                                                {string t = (yyvsp[-3].item).type; if(t[t.size()-1]!='*'){cout<<"Accessing Higher Dimensions of "<<(yyvsp[-3].item).type<<" in line number "<<yylineno<<endl; exit(1);} strcpy((yyval.item).type,(t.substr(0,t.size()-1)).c_str());}
#line 3140 "parser.tab.c"
    break;

  case 207:
#line 594 "parser.y"
                                                        {strcpy((yyval.item).type,get_method((yyvsp[-2].item).label,"",function_call).c_str());}
#line 3146 "parser.tab.c"
    break;

  case 208:
#line 595 "parser.y"
                                                                {strcpy((yyval.item).type,get_method((yyvsp[-3].item).label,"",function_call).c_str());function_call.clear();}
#line 3152 "parser.tab.c"
    break;

  case 209:
#line 596 "parser.y"
                                                                                {strcpy((yyval.item).type,get_method((yyvsp[-2].item).label,find_in_scope((yyvsp[-4].item).label),function_call).c_str());}
#line 3158 "parser.tab.c"
    break;

  case 210:
#line 597 "parser.y"
                                                                                        {strcpy((yyval.item).type,get_method((yyvsp[-3].item).label,find_in_scope((yyvsp[-5].item).label),function_call).c_str()); function_call.clear();}
#line 3164 "parser.tab.c"
    break;

  case 211:
#line 601 "parser.y"
                                {string t; for(int i=0;i<(yyvsp[0].item).dims;i++) t.push_back('*'); strcpy((yyval.item).type,strcat((yyvsp[-1].item).type,t.c_str()));}
#line 3170 "parser.tab.c"
    break;

  case 212:
#line 602 "parser.y"
                                        {string t; for(int i=0;i<(yyvsp[-1].item).dims;i++) t.push_back('*'); for(int i=0;i<(yyvsp[0].item).dims;i++) t.push_back('*'); strcpy((yyval.item).type,strcat((yyvsp[-2].item).type,t.c_str()));}
#line 3176 "parser.tab.c"
    break;

  case 213:
#line 603 "parser.y"
                                {string t; for(int i=0;i<(yyvsp[0].item).dims;i++) t.push_back('*'); strcpy((yyval.item).type,strcat((yyvsp[-1].item).type,t.c_str()));}
#line 3182 "parser.tab.c"
    break;

  case 214:
#line 604 "parser.y"
                                        {string t; for(int i=0;i<(yyvsp[-1].item).dims;i++) t.push_back('*'); for(int i=0;i<(yyvsp[0].item).dims;i++) t.push_back('*'); strcpy((yyval.item).type,strcat((yyvsp[-2].item).type,t.c_str()));}
#line 3188 "parser.tab.c"
    break;

  case 215:
#line 608 "parser.y"
                                                                {(yyval.item).dims = (yyvsp[-3].item).dims+1;if((yyvsp[-2].item).type!="int") {cout<<"Array size must be of integer type. Line number: "<<yylineno<<endl; exit(1);}}
#line 3194 "parser.tab.c"
    break;

  case 216:
#line 609 "parser.y"
                                                                {(yyval.item).dims=1; if((yyvsp[-1].item).type!="int") {cout<<"Array size must be of integer type. Line number: "<<yylineno<<endl; exit(1);}}
#line 3200 "parser.tab.c"
    break;

  case 217:
#line 613 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3206 "parser.tab.c"
    break;

  case 218:
#line 617 "parser.y"
                                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3212 "parser.tab.c"
    break;

  case 219:
#line 618 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3218 "parser.tab.c"
    break;

  case 220:
#line 622 "parser.y"
                                        {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3224 "parser.tab.c"
    break;

  case 221:
#line 623 "parser.y"
                                        {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3230 "parser.tab.c"
    break;

  case 222:
#line 624 "parser.y"
                                                {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3236 "parser.tab.c"
    break;

  case 223:
#line 625 "parser.y"
                                                {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3242 "parser.tab.c"
    break;

  case 224:
#line 626 "parser.y"
                                                {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3248 "parser.tab.c"
    break;

  case 225:
#line 627 "parser.y"
                                                {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3254 "parser.tab.c"
    break;

  case 226:
#line 628 "parser.y"
                                                                {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3260 "parser.tab.c"
    break;

  case 227:
#line 629 "parser.y"
                                                                        {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3266 "parser.tab.c"
    break;

  case 228:
#line 630 "parser.y"
                                                                                        {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3272 "parser.tab.c"
    break;

  case 229:
#line 631 "parser.y"
                                                        {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3278 "parser.tab.c"
    break;

  case 230:
#line 632 "parser.y"
                                                        {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3284 "parser.tab.c"
    break;

  case 231:
#line 633 "parser.y"
                                      {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3290 "parser.tab.c"
    break;

  case 232:
#line 634 "parser.y"
                                {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3296 "parser.tab.c"
    break;

  case 233:
#line 635 "parser.y"
                                                {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3302 "parser.tab.c"
    break;

  case 234:
#line 636 "parser.y"
                                                {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3308 "parser.tab.c"
    break;

  case 235:
#line 637 "parser.y"
                                                {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3314 "parser.tab.c"
    break;

  case 236:
#line 638 "parser.y"
                                                {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3320 "parser.tab.c"
    break;

  case 237:
#line 639 "parser.y"
                                                {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3326 "parser.tab.c"
    break;

  case 238:
#line 640 "parser.y"
                                                                {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3332 "parser.tab.c"
    break;

  case 239:
#line 641 "parser.y"
                                                                {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3338 "parser.tab.c"
    break;

  case 240:
#line 642 "parser.y"
                                                                                {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3344 "parser.tab.c"
    break;

  case 241:
#line 643 "parser.y"
                                                        {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3350 "parser.tab.c"
    break;

  case 242:
#line 644 "parser.y"
                                                {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3356 "parser.tab.c"
    break;

  case 243:
#line 645 "parser.y"
                                                {string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}
#line 3362 "parser.tab.c"
    break;

  case 244:
#line 649 "parser.y"
                                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3368 "parser.tab.c"
    break;

  case 245:
#line 650 "parser.y"
                                                                                {if((yyvsp[-4].item).type!="boolean"){cout<<"First expression has to be boolean"<<endl;exit(1);};}
#line 3374 "parser.tab.c"
    break;

  case 246:
#line 654 "parser.y"
                                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3380 "parser.tab.c"
    break;

  case 247:
#line 655 "parser.y"
                                                                        {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3386 "parser.tab.c"
    break;

  case 248:
#line 659 "parser.y"
                                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3392 "parser.tab.c"
    break;

  case 249:
#line 660 "parser.y"
                                                                                {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3398 "parser.tab.c"
    break;

  case 250:
#line 664 "parser.y"
                                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3404 "parser.tab.c"
    break;

  case 251:
#line 665 "parser.y"
                                                                {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3410 "parser.tab.c"
    break;

  case 252:
#line 669 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3416 "parser.tab.c"
    break;

  case 253:
#line 670 "parser.y"
                                                        {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3422 "parser.tab.c"
    break;

  case 254:
#line 674 "parser.y"
                                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3428 "parser.tab.c"
    break;

  case 255:
#line 675 "parser.y"
                                                {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3434 "parser.tab.c"
    break;

  case 256:
#line 679 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3440 "parser.tab.c"
    break;

  case 257:
#line 680 "parser.y"
                                                                {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3446 "parser.tab.c"
    break;

  case 258:
#line 681 "parser.y"
                                                                {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3452 "parser.tab.c"
    break;

  case 259:
#line 685 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3458 "parser.tab.c"
    break;

  case 260:
#line 686 "parser.y"
                                                        {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3464 "parser.tab.c"
    break;

  case 261:
#line 687 "parser.y"
                                                                {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3470 "parser.tab.c"
    break;

  case 262:
#line 688 "parser.y"
                                                                {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3476 "parser.tab.c"
    break;

  case 263:
#line 689 "parser.y"
                                                            {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3482 "parser.tab.c"
    break;

  case 264:
#line 693 "parser.y"
                                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3488 "parser.tab.c"
    break;

  case 265:
#line 694 "parser.y"
                                                                        {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3494 "parser.tab.c"
    break;

  case 266:
#line 695 "parser.y"
                                                                        {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3500 "parser.tab.c"
    break;

  case 267:
#line 696 "parser.y"
                                                                                        {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3506 "parser.tab.c"
    break;

  case 268:
#line 700 "parser.y"
                            {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3512 "parser.tab.c"
    break;

  case 269:
#line 701 "parser.y"
                                                            {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3518 "parser.tab.c"
    break;

  case 270:
#line 702 "parser.y"
                                                            {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3524 "parser.tab.c"
    break;

  case 271:
#line 706 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3530 "parser.tab.c"
    break;

  case 272:
#line 707 "parser.y"
                                                    {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3536 "parser.tab.c"
    break;

  case 273:
#line 708 "parser.y"
                                                    {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3542 "parser.tab.c"
    break;

  case 274:
#line 709 "parser.y"
                                                        {string t = expression_type((yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}
#line 3548 "parser.tab.c"
    break;

  case 275:
#line 713 "parser.y"
                                    {(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3554 "parser.tab.c"
    break;

  case 276:
#line 714 "parser.y"
                                        {(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3560 "parser.tab.c"
    break;

  case 277:
#line 715 "parser.y"
                                    {string t = expression_type((yyvsp[0].item).type,"",(yyvsp[-1].item).label); (yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,t.c_str());}
#line 3566 "parser.tab.c"
    break;

  case 278:
#line 716 "parser.y"
                                    {string t = expression_type((yyvsp[0].item).type,"",(yyvsp[-1].item).label); (yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,t.c_str());}
#line 3572 "parser.tab.c"
    break;

  case 279:
#line 717 "parser.y"
                                {(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3578 "parser.tab.c"
    break;

  case 280:
#line 721 "parser.y"
                                        {
    string t = expression_type((yyvsp[0].item).type,"",(yyvsp[-1].item).label);
    if((yyvsp[0].item).lit = true){
        cout<<"Cannot apply increment/decrement operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item).lit = false;
    strcpy((yyval.item).type,t.c_str());
}
#line 3592 "parser.tab.c"
    break;

  case 281:
#line 733 "parser.y"
                                        {

    string t = expression_type((yyvsp[0].item).type,"",(yyvsp[-1].item).label);
    if((yyvsp[0].item).lit = true){
        cout<<"Cannot apply increment/decrement operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item).lit = false;
    strcpy((yyval.item).type,t.c_str());
}
#line 3607 "parser.tab.c"
    break;

  case 282:
#line 746 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type); strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3613 "parser.tab.c"
    break;

  case 290:
#line 760 "parser.y"
                                    {(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3619 "parser.tab.c"
    break;

  case 291:
#line 761 "parser.y"
                                        {(yyval.item).lit = false; strcpy((yyval.item).type,find_in_scope((yyvsp[0].item).label).c_str());}
#line 3625 "parser.tab.c"
    break;

  case 292:
#line 762 "parser.y"
                                        {(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3631 "parser.tab.c"
    break;

  case 293:
#line 763 "parser.y"
                                        {(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3637 "parser.tab.c"
    break;

  case 294:
#line 767 "parser.y"
                                        {

    string t = expression_type((yyvsp[-1].item).type,"",(yyvsp[0].item).label);
    if((yyvsp[-1].item).lit = true){
        cout<<"Cannot apply increment operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item).lit = false;
    strcpy((yyval.item).type,t.c_str());
}
#line 3652 "parser.tab.c"
    break;

  case 295:
#line 780 "parser.y"
                                {

    string t = expression_type((yyvsp[-1].item).type,"",(yyvsp[0].item).label);
    if((yyvsp[-1].item).lit = true){
        cout<<"Cannot apply increment operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item).lit = false;
    strcpy((yyval.item).type,t.c_str());
}
#line 3667 "parser.tab.c"
    break;


#line 3671 "parser.tab.c"

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
#line 793 "parser.y"


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
