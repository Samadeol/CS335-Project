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
extern string out_file_name;

#define YYDEBUG 1

extern bool first_parse;
int line_number;
fstream fout,fin;
stack<int> st;
int node_number=1;
vector<pair<string,string> > v; 
vector<string> function_call;
vector<tuple<string,string,int,int> > arguments;
string curr_class_name;
int inst_num;

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



#line 125 "parser.tab.c"

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
#line 59 "parser.y"

    struct {
        char label[1000];
        char type[100];
        int dims;
        bool lit;
        char temp_var[1000];
        int i_number;
        int true_list[1000];
        int false_list[1000];
        int next_list[1000];
    }item;

#line 285 "parser.tab.c"

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
#define YYLAST   2322

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  113
/* YYNRULES -- Number of rules.  */
#define YYNRULES  294
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  543

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
       0,    80,    80,    82,    83,    86,    87,    88,    89,    90,
      91,    92,    96,   100,   101,   105,   106,   107,   108,   112,
     116,   120,   124,   128,   129,   133,   134,   138,   139,   143,
     144,   145,   149,   150,   154,   155,   159,   163,   164,   168,
     172,   173,   177,   178,   181,   185,   186,   190,   191,   192,
     193,   197,   198,   202,   203,   207,   208,   209,   213,   214,
     215,   219,   226,   236,   237,   241,   242,   243,   244,   248,
     251,   252,   253,   254,   257,   261,   262,   266,   267,   271,
     272,   273,   274,   275,   276,   280,   281,   285,   286,   289,
     293,   294,   298,   299,   303,   304,   309,   310,   314,   315,
     319,   320,   324,   333,   342,   346,   347,   348,   349,   350,
     351,   355,   356,   357,   358,   359,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   376,   380,   384,   388,
     392,   393,   394,   395,   396,   397,   398,   401,   405,   409,
     413,   418,   419,   423,   427,   431,   432,   436,   437,   441,
     442,   443,   444,   445,   446,   447,   448,   452,   453,   454,
     455,   456,   457,   458,   459,   463,   464,   468,   477,   488,
     492,   493,   497,   501,   505,   506,   510,   514,   515,   519,
     520,   524,   528,   529,   530,   534,   535,   539,   543,   544,
     548,   549,   550,   551,   552,   556,   557,   558,   559,   560,
     561,   565,   569,   570,   574,   575,   579,   580,   581,   582,
     586,   587,   588,   589,   593,   594,   598,   602,   603,   607,
     608,   609,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,   627,
     628,   629,   630,   634,   635,   639,   640,   644,   645,   649,
     650,   654,   655,   659,   660,   664,   665,   666,   670,   671,
     672,   673,   674,   678,   679,   680,   681,   685,   686,   687,
     691,   692,   693,   694,   698,   699,   700,   701,   702,   706,
     720,   734,   735,   736,   737,   741,   742,   743,   744,   748,
     749,   750,   751,   755,   769
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
  "YIELD", "$accept", "input", "LeftCurl", "RightCurl", "CompiledStuff",
  "PackageDeclaration", "ImportDeclarations", "ImportDeclaration",
  "SingleTypeImportDeclaration", "TypeImportOnDemandDeclaration",
  "SingleStaticImportDeclaration", "StaticImportOnDemandDeclaration",
  "TypeDeclarations", "TypeDeclaration", "Type", "PrimitiveType",
  "NumericType", "ReferenceType", "ClassType", "DotIdentifiers",
  "ArrayType", "Dims", "ClassDeclarationHeader", "ClassDeclaration",
  "ClassModifiers", "ClassModifier", "ClassBody", "ClassBodyDeclarations",
  "ClassBodyDeclaration", "ClassMemberDeclaration", "FieldDeclaration",
  "VariableDeclaratorList", "VariableDeclarator", "VariableInitializer",
  "MethodDeclarationHeader", "MethodDeclaration", "MethodDeclarator",
  "FormalParameterList", "FormalParameter", "MethodBody",
  "ConstructorDeclarationHeader", "ConstructorDeclaration", "Declarator",
  "ConstructorBody", "Expressions", "InterfaceDeclaration", "Block",
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

#define YYPACT_NINF (-390)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-293)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     308,   -11,  -390,   -19,     5,     8,  -390,  -390,  -390,    81,
    -390,   251,   251,  -390,  -390,  -390,  -390,  -390,   304,  -390,
      53,  -390,   332,  -390,  -390,  -390,  -390,     8,    42,    53,
     113,  -390,   251,   304,  -390,   304,  -390,  -390,    22,  -390,
      97,   102,  -390,   172,     1,  -390,  -390,   155,   304,  -390,
    -390,   150,  -390,  -390,  -390,  -390,   227,  1643,  -390,   229,
     210,  -390,  -390,  -390,   113,  -390,   234,    22,  -390,  -390,
    -390,   111,  -390,    53,  -390,  -390,  -390,  -390,    53,     9,
    -390,   214,   167,   150,  -390,   210,  1154,  -390,    90,  -390,
      99,    86,  -390,   235,   114,   256,  -390,  1154,  1154,    86,
    -390,  1154,   818,  -390,  -390,  1154,    53,   260,  1154,  -390,
     271,   985,  -390,  1643,  -390,  -390,  -390,  -390,  -390,  -390,
     249,  -390,  -390,   309,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,   286,  -390,   208,  -390,
    2007,   280,  -390,  -390,  -390,  -390,   141,   196,   219,   160,
       6,  -390,  -390,   264,   293,   227,   229,  -390,  -390,  -390,
    -390,  -390,  -390,  1643,  -390,  -390,   273,   294,  -390,    86,
    -390,     3,    46,  -390,   293,  1154,   298,   679,  1154,  1154,
    1154,  1986,  -390,  -390,    -3,  -390,  -390,  -390,     4,   350,
     359,   313,   366,    15,   347,   220,   236,   222,  -390,  -390,
    -390,  -390,  -390,   141,  -390,  -390,   299,  -390,   310,  -390,
     271,  2063,   798,   581,  1154,   318,   161,  -390,  -390,   353,
     353,     2,  -390,  -390,   324,   328,   170,  1154,   329,   119,
      14,  1154,  1154,   365,  1154,  1154,  1154,  1154,  1154,  1154,
    1154,  1154,  1154,  1154,  1154,  -390,  -390,  -390,   798,  1154,
    1154,  1154,  1154,  1154,  1154,  1154,  1154,  1154,  1154,  1154,
    1154,  1154,  -390,  -390,  1154,   153,   271,  -390,  -390,   333,
    -390,    18,  -390,  -390,  1643,  -390,  -390,    24,   210,   368,
       7,  -390,  -390,   189,  2006,   336,  -390,  -390,  -390,  1154,
    -390,  1154,  1154,  1154,  1154,  1154,  1154,  1154,  1154,  1154,
    1154,  1154,  1154,  1154,  1154,  1154,  1154,  1154,  1154,  1154,
    1154,  -390,  -390,    40,    86,  1769,   271,  -390,   335,   393,
     394,  -390,  -390,    47,  -390,   341,  -390,  1154,   367,   367,
    1054,  -390,  -390,   369,    53,   173,  -390,   342,  -390,  -390,
    -390,  -390,   370,  -390,  -390,  -390,   345,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,   348,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
     372,  -390,  -390,  -390,  -390,   210,   384,   293,  -390,  -390,
    1154,   192,  1812,   197,   265,   356,   350,   414,   359,   313,
     366,    15,   347,   347,   220,   220,   220,   220,   236,   236,
     236,   222,   222,  -390,  -390,  -390,  -390,   271,  1246,   360,
     415,  1862,  1154,  2241,  1154,  -390,  1726,   363,  1812,   293,
     293,  -390,    49,     7,  -390,    53,  -390,   798,  1891,  -390,
    -390,    86,  -390,   293,  -390,  -390,  1154,   265,  -390,  -390,
    1154,   415,   798,   371,   394,  1457,  2115,   373,   376,  -390,
    -390,   392,   139,   395,  -390,  -390,   418,  -390,   419,  -390,
    -390,  -390,  -390,  -390,  -390,   382,  -390,   377,  -390,  -390,
    -390,   110,  -390,  -390,  -390,  -390,   798,   798,   385,   798,
     387,  2137,   798,  2085,  1726,  1154,  1726,  -390,    53,  -390,
    -390,  -390,   798,  -390,   798,   798,   390,  -390,  1926,   389,
     427,  -390,   396,  -390,  -390,  -390,  -390,  -390,   798,  2167,
     391,  1946,  1154,  1726,  -390,  1726,   398,  2187,  2210,   399,
     402,  -390,  -390,  1726,  1726,   404,  1726,   413,  2230,  1726,
    -390,  -390,  1726,  -390,  1726,  1726,   416,  -390,  -390,  -390,
    -390,  1726,  -390
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,    49,     0,     0,     0,    48,    47,    50,     0,
       2,     8,     6,    14,    15,    16,    17,    18,     5,    24,
       0,    25,     0,    46,    26,    42,    38,     0,     0,     0,
      12,     1,    10,     9,    13,     7,    23,     3,     0,    44,
       0,     0,    45,     0,     0,    19,    96,     0,    11,    30,
      33,    38,    32,     4,    60,    31,     0,     0,    51,     0,
      27,    29,    28,    34,    36,    35,     0,     0,    54,    55,
      58,     0,    59,     0,    56,    87,    57,    43,     0,     0,
      37,     0,     0,     0,    70,    75,     0,   197,     0,   198,
       0,     0,   196,     0,    38,     0,   195,     0,     0,     0,
     200,     0,     0,   126,   199,     0,     0,     0,     0,    98,
       0,   290,   116,     0,   101,   104,   105,   117,   106,   118,
       0,   107,   108,     0,   119,   109,   110,   145,   146,   120,
     125,   121,   122,   123,   124,   289,   188,   190,   136,   201,
     193,   135,   189,   130,   131,   132,     0,   133,   134,    66,
       0,    64,    71,     0,    39,     0,     0,    88,    52,    53,
      86,    74,    85,     0,    89,    97,    37,     0,    20,     0,
      90,     0,     0,    78,    76,     0,    38,     0,     0,     0,
       0,   290,   192,   194,     0,   216,   218,   217,   243,   245,
     247,   249,   251,   253,   255,   258,   263,   267,   270,   274,
     275,   278,   284,   281,   291,   292,     0,   174,     0,   177,
       0,     0,     0,     0,     0,     0,   290,   193,   280,     0,
       0,    36,   279,   179,     0,     0,     0,     0,     0,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,   100,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   294,   293,     0,    67,     0,    61,    41,     0,
      72,     0,    73,    92,     0,    21,    22,     0,    79,     0,
       0,    91,   283,     0,   290,     0,   277,   276,   282,     0,
     141,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,   178,     0,     0,     0,     0,   171,     0,   166,
     165,   127,   206,     0,    95,     0,   191,     0,   210,   212,
       0,   180,   181,     0,     0,   182,   186,     0,   176,   102,
     228,   230,    37,   219,   226,   227,     0,   225,   224,   222,
     223,   229,   221,   220,   138,     0,   240,   242,   231,   238,
     239,   237,   236,   234,   235,   241,   233,   232,    65,    69,
       0,    63,    40,    62,    93,    80,     0,    81,    83,    77,
       0,     0,     0,     0,   191,     0,   246,     0,   248,   250,
     252,   254,   256,   257,   260,   262,   259,   261,   265,   266,
     264,   269,   268,   273,   272,   271,   103,     0,     0,     0,
     167,     0,     0,     0,     0,   207,     0,     0,     0,   211,
     213,   202,     0,     0,   183,     0,   185,     0,     0,   204,
     205,     0,    68,    82,    84,   285,     0,     0,   287,   142,
       0,   168,     0,     0,   169,     0,     0,     0,     0,   170,
      94,     0,    38,     0,   137,   139,   105,   112,     0,   113,
     114,   115,   147,   148,   215,     0,   203,     0,   184,   143,
     208,     0,   286,   288,   244,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   214,     0,   209,
     150,   151,     0,   153,     0,     0,     0,   172,     0,     0,
     166,   128,     0,   140,   187,   152,   154,   155,     0,     0,
       0,     0,     0,     0,   156,     0,     0,     0,     0,     0,
       0,   144,   157,     0,     0,     0,     0,     0,     0,     0,
     158,   159,     0,   161,     0,     0,     0,   173,   160,   162,
     163,     0,   164
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -390,  -390,    -4,   -36,  -390,  -390,   475,   238,  -390,  -390,
    -390,  -390,   178,   145,   -37,   -92,  -390,  -390,   -93,  1279,
    -390,   -42,  -390,  -390,    77,    -7,    94,  -390,   420,  -390,
    -390,  -101,   223,  -390,  -390,  -390,   -48,  -390,  -270,  -390,
    -390,  -390,   137,  -390,  -318,  -390,   -34,   327,  -105,  1007,
     383,  -389,  -390,  -390,  -390,  -390,  -154,  -390,  -390,  -364,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,    10,    11,
    -370,  -208,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,   156,  -390,  -390,  -390,   -57,  -390,   -75,    37,   122,
     275,  1377,  -390,   131,    56,  -390,   206,   205,   207,   204,
     209,   -45,    93,    12,    51,   -96,   269,   468,  -367,  -390,
     604,   745,   912
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    57,    58,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   110,    60,    61,    62,    63,   181,
      65,   265,    20,    21,    22,    23,    39,    67,    68,    69,
      70,   150,   151,   368,    71,    72,    84,   172,   173,   161,
      73,    74,    85,   164,   323,    24,   112,   113,   114,   115,
     455,   116,   117,   118,   457,   119,   120,   121,   122,   123,
     459,   124,   125,   460,   126,   461,   127,   462,   318,   319,
     443,   444,   128,   463,   129,   130,   131,   132,   133,   134,
     335,   336,   135,   136,   137,   182,   139,   140,   183,   142,
     328,   324,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     138,    59,   218,   320,    76,   222,   220,   219,   246,   230,
     379,   152,   422,   291,   289,    42,    38,   438,   154,    49,
      26,   109,    47,   217,   266,    38,   217,   456,    25,   156,
      59,   158,   266,    76,    49,   169,   266,   162,    50,   297,
      80,   298,   278,   174,    29,   171,    26,    26,   166,   330,
       2,    52,   458,    50,   210,   271,   138,   317,   266,    42,
      27,    51,    44,   375,   280,   414,    52,   414,    37,   163,
     473,   290,   226,   292,    38,   478,   480,   245,    81,   282,
     267,    31,   286,   287,   288,   283,   167,    55,   339,     6,
       7,   279,   373,    53,   141,   456,    54,   456,    49,    37,
     217,     8,    55,   217,   217,   217,   138,   270,   272,   313,
     471,   496,   376,    56,   406,    66,    45,    50,   281,   415,
     458,   466,   458,    46,   456,    26,   456,   273,   414,   206,
      52,   212,   277,    47,   456,   456,    77,   456,   208,   516,
     456,    78,   264,   456,    66,   456,   456,   525,   527,   458,
     141,   458,   456,   467,   138,   138,   484,    37,   536,   458,
     458,   213,   458,    36,   207,   458,    55,   153,   458,   246,
     458,   458,   165,   209,   316,    75,   370,   458,    36,    49,
      36,   233,   489,   264,   333,   160,   213,   333,   143,    33,
      35,   138,    79,    36,    80,   169,   262,    82,    50,   334,
     141,   269,   425,   157,    75,   263,    26,    82,   153,   237,
      48,    52,   403,   404,   405,   410,   217,   138,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   377,   153,   374,   170,
     269,   381,   383,   171,   143,   269,    49,    55,   141,   141,
      34,  -291,   392,   393,   317,   303,  -192,   304,   153,   449,
    -291,   380,     2,  -192,   436,    50,    83,     1,   149,   437,
      34,   305,  -192,    51,  -292,   320,    87,   407,    52,     2,
      89,   308,   211,  -292,   435,   141,   419,   420,   168,   306,
     175,   317,   317,     3,   143,    92,     4,   309,   307,   310,
     424,     6,     7,   214,   176,   217,   441,   227,    96,   217,
     229,   141,   177,     8,    55,   398,   399,   400,     6,     7,
       1,    99,   100,   247,     1,   155,   144,   317,  -194,   317,
       8,   248,     2,   433,   249,  -194,     2,   268,   220,   219,
     472,   269,   143,   143,  -194,   213,   104,   275,    40,     4,
       3,   138,   180,     4,   293,   317,   138,   401,   402,   138,
       2,   217,   217,   317,   317,   217,     5,   294,   276,   296,
     138,     6,     7,   311,   317,     6,     7,    41,   295,   143,
     299,   300,   144,     8,   312,   138,   171,     8,   138,   138,
     326,   468,   394,   395,   396,   397,   301,   302,   331,     6,
       7,   327,   332,   338,   342,   143,   372,   378,   384,   411,
     412,     8,   413,   416,   427,   418,   423,   428,   429,   138,
     138,   430,   138,   434,   138,   138,   138,   138,   431,   138,
     439,   440,   144,   266,   445,   138,   464,   138,   138,   483,
    -111,   486,   485,   476,   512,   141,   316,   481,   482,   488,
     141,   138,   138,   141,   504,   487,   138,   492,   138,   494,
     138,   138,   508,   511,   141,   517,   138,   138,   513,   138,
     523,   138,   138,   528,   529,   138,   532,   138,   138,   141,
     144,   144,   141,   141,   138,   534,    32,   159,   541,   371,
     274,   426,   432,   499,   500,   329,   474,   386,   388,   390,
       0,   389,     0,     0,     0,   391,     0,     0,     0,     0,
       0,     0,     0,   141,   141,     0,   141,   144,   141,   141,
     141,   141,     0,   141,     0,   145,     0,     0,     0,   141,
       0,   141,   141,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,   144,   143,   141,   141,   143,     0,     0,
     141,     0,   141,     0,   141,   141,     0,     0,   143,     0,
     141,   141,     0,   141,     0,   141,   141,     0,     0,   141,
       0,   141,   141,   143,     0,     0,   143,   143,   141,     0,
       0,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   175,   143,   143,     0,
     143,    92,   143,   143,   143,   143,     0,   143,     0,     0,
     176,     0,     0,   143,    96,   143,   143,     0,   177,     0,
       0,   145,     0,     0,   178,     0,    98,    99,   100,   143,
     143,     0,     0,   179,   143,   101,   143,     0,   143,   143,
       0,     0,     0,   322,   143,   143,     0,   143,     0,   143,
     143,   146,   104,   143,     0,   143,   143,     0,   180,     0,
       0,     0,   143,     0,     0,     0,     0,   144,     0,   145,
     145,     0,   144,     0,     0,   144,     0,     0,     0,     0,
      87,    49,     0,     0,    89,     0,   144,     0,     0,     0,
       0,     0,     0,     0,   175,     0,     0,     0,     0,    92,
      50,   144,     0,     0,   144,   144,   145,   146,   176,     0,
       0,     0,    96,    52,     0,     0,   177,     0,     0,     0,
       0,     0,   178,     0,    98,    99,   100,     0,     0,     0,
       0,   179,   145,   101,     0,   144,   144,     0,   144,     0,
     144,   144,   144,   144,     0,   144,     0,     0,     0,    55,
     104,   144,     0,   144,   144,     0,   180,   146,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   144,   144,     0,
       0,     0,   144,     0,   144,     0,   144,   144,     0,     0,
       0,     0,   144,   144,     0,   144,     0,   144,   144,     0,
       0,   144,   147,   144,   144,    86,     0,     0,     0,    87,
     144,    88,     0,    89,     0,   146,   146,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    87,
      93,     0,     0,    89,     0,     0,     0,    94,    95,     0,
       0,    96,     0,   175,    37,    97,     0,     0,    92,     0,
       0,     0,   146,    98,    99,   100,     0,   176,   147,     0,
       0,    96,   101,     0,     0,   177,     0,   501,   102,   503,
       0,   178,   103,    98,    99,   100,   145,     0,   146,   104,
     179,   145,   101,   105,   145,     0,     0,   106,     0,     0,
     107,   108,   223,     0,     0,   145,   521,     0,   522,   104,
       0,     0,     0,     0,     0,   180,   530,   531,   147,   533,
     145,     0,   537,   145,   145,   538,     0,   539,   540,     0,
       0,     0,     0,     0,   542,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   145,   145,     0,   145,     0,   145,
     145,   145,   145,     0,   145,     0,   147,   147,     0,     0,
     145,     0,   145,   145,     0,     0,     0,     0,     0,   148,
       0,     0,     0,     0,     0,     0,   145,   145,     0,     0,
       0,   145,     0,   145,     0,   145,   145,     0,     0,     0,
     231,   145,   145,   147,   145,   232,   145,   145,     0,     0,
     145,     0,   145,   145,     0,   233,     0,     0,   234,   145,
       0,     0,   146,     0,     0,     0,     0,   146,     0,   147,
     146,   235,     0,   236,   -36,   148,     0,     0,     0,     0,
       0,   146,     0,   237,     0,     0,     0,   238,     0,   239,
       0,     0,     0,     0,     0,   240,   146,     0,   241,   146,
     146,   242,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   243,     0,   244,     0,    87,     0,     0,     0,    89,
       0,     0,     0,     0,     0,   148,     0,     0,     0,   175,
     146,   146,     0,   146,    92,   146,   146,   146,   146,     0,
     146,     0,     0,   176,     0,     0,   146,    96,   146,   146,
       0,   177,     0,     0,     0,     0,     0,   178,     0,    98,
      99,   100,   146,   146,     0,     0,   179,   146,   101,   146,
       0,   146,   146,   148,   148,     0,   421,   146,   146,     0,
     146,     0,   146,   146,     0,   104,   146,     0,   146,   146,
       0,   180,     0,     0,     0,   146,     0,     0,     0,     0,
       0,     0,     0,   147,     0,     0,     0,     0,   147,     0,
     148,   147,     0,     0,     0,    87,     0,     0,     0,    89,
       0,     0,   147,     0,     0,     0,     0,     0,     0,   175,
       0,     0,     0,     0,    92,     0,   148,   147,     0,     0,
     147,   147,     0,   176,     0,     0,     0,    96,     0,     0,
       0,   177,     0,     0,     0,     0,     0,   178,     0,    98,
      99,   100,     0,     0,     0,     0,   179,     0,   101,   321,
       0,   147,   147,     0,   147,     0,   147,   147,   147,   147,
       0,   147,     0,     0,     0,   104,     0,   147,     0,   147,
     147,   180,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   147,   147,   354,     0,    87,   147,     0,
     147,    89,   147,   147,     0,     0,     0,     0,   147,   147,
       0,   147,     0,   147,   147,     0,    92,   147,     0,   147,
     147,     0,    28,     0,    30,   176,   147,     0,     0,    96,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,    98,    99,   100,     0,     0,    43,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,    64,   442,     0,
     148,     0,     0,     0,     0,   148,     0,   104,   148,     0,
       0,     0,     0,     0,     0,     0,   111,     0,     0,   148,
       0,     0,     0,     0,     0,    64,    64,     0,     0,     0,
       0,     0,     0,     0,   148,     0,     0,   148,   148,     0,
       0,    64,     0,     0,     0,     0,     0,     0,     0,     0,
      64,     0,     0,     0,     0,     0,     0,   216,   221,     0,
     216,     0,     0,     0,     0,     0,     0,     0,   148,   148,
       0,   148,   111,   148,   148,   148,   148,     0,   148,     0,
       0,     0,     0,     0,   148,     0,   148,   148,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     148,   148,     0,   454,     0,   148,     0,   148,     0,   148,
     148,     0,     0,     0,   469,   148,   148,     0,   148,     0,
     148,   148,   111,     0,   148,     0,   148,   148,    64,   475,
       0,     0,     0,   148,   216,     0,   284,   216,   216,   216,
       0,     0,     0,   184,     0,     0,     0,     0,    87,     0,
       0,     0,    89,     0,   215,     0,     0,     0,     0,   224,
       0,     0,   225,   490,   491,   228,   493,    92,     0,   497,
     111,   321,     0,   354,     0,     0,   176,     0,     0,   505,
      96,   506,   507,     0,    97,     0,     0,     0,     0,     0,
       0,     0,    98,    99,   100,   514,     0,     0,     0,     0,
     469,   101,   475,     0,     0,     0,     0,     0,     0,   477,
     490,   491,     0,   493,     0,     0,   497,     0,   104,   505,
       0,   506,   507,     0,     0,     0,     0,     0,   514,     0,
       0,     0,     0,   111,   285,     0,     0,     0,     0,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     216,     0,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
       0,   325,     0,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   337,     0,     0,     0,   340,   341,
       0,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,     0,     0,     0,     0,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
      86,     0,     0,     0,    87,    49,    88,     0,    89,   216,
       0,     0,    90,   216,     0,     0,   385,     0,     0,   387,
       0,    91,     0,    92,    50,    93,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,    96,    52,     0,    37,
      97,     0,   409,     0,     0,     0,     0,     0,    98,    99,
     100,     0,    64,     0,   417,     0,     0,   101,     0,     0,
      64,     0,     0,   102,    53,   216,   216,   103,     0,   216,
       0,     0,     0,    55,   104,     0,     0,     0,   105,     0,
       0,     0,   106,    86,     0,   107,   108,    87,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,   451,   346,
       0,     0,   111,     0,     0,   452,    95,     0,     0,    96,
       0,     0,    37,    97,     0,     0,     0,     0,     0,     0,
      87,    98,    99,   100,    89,     0,     0,     0,   447,   448,
     101,   450,     0,     0,   175,   465,   102,     0,     0,    92,
     103,     0,     0,     0,     0,     0,     0,   104,   176,     0,
       0,   105,    96,     0,     0,   106,   177,     0,   453,   108,
       0,     0,   178,    87,    98,    99,   100,    89,     0,     0,
       0,   179,     0,   101,     0,     0,     0,   175,     0,     0,
       0,     0,    92,   408,     0,     0,     0,     0,     0,     0,
     104,   176,     0,     0,     0,    96,   180,     0,     0,   177,
       0,     0,   502,     0,     0,   178,     0,    98,    99,   100,
       0,     0,     0,    87,   179,   510,   101,    89,     0,     0,
       0,     0,     0,     0,     0,   268,     0,   175,   519,   520,
       0,     0,    92,   104,     0,     0,     0,     0,     0,   180,
       0,   176,    87,     0,     0,    96,    89,     0,     0,   177,
       0,     0,     0,     0,     0,   178,   175,    98,    99,   100,
       0,    92,     0,     0,   179,     0,   101,     0,     0,     0,
     176,     0,     0,     0,    96,     0,   446,    87,   177,     0,
       0,    89,     0,   104,   178,     0,    98,    99,   100,   180,
       0,   175,     0,   179,     0,   101,    92,    87,     0,     0,
       0,    89,     0,   470,     0,   176,     0,     0,     0,    96,
       0,   175,   104,   177,     0,     0,    92,     0,   180,   178,
       0,    98,    99,   100,     0,   176,     0,     0,   179,    96,
     101,   231,     0,   177,     0,     0,   232,     0,     0,   178,
     509,    98,    99,   100,     0,     0,   233,   104,   179,   234,
     101,   231,   250,   180,     0,     0,   232,   251,     0,     0,
     518,     0,   235,     0,   236,     0,   233,   104,     0,   234,
     252,     0,     0,   180,   237,     0,     0,     0,   238,     0,
     239,     0,   235,   253,   236,   254,   240,     0,     0,   241,
       0,     0,   242,     0,   382,     0,     0,     0,   238,   255,
     239,   256,   243,     0,   244,     0,   240,   257,     0,   241,
     258,     0,   242,   259,    87,    49,     0,     0,    89,     0,
       0,     0,   243,   260,   244,   261,     0,     0,     0,     0,
       0,   314,     0,    92,    50,     0,    87,    49,     0,     0,
      89,     0,   176,     0,     0,     0,    96,    52,     0,     0,
      97,     0,     0,   314,     0,    92,    50,     0,    98,    99,
     100,     0,     0,     0,   176,     0,    87,   101,    96,    52,
      89,     0,    97,     0,     0,     0,     0,   315,     0,     0,
      98,    99,   100,    55,   104,    92,     0,     0,    87,   101,
       0,     0,    89,     0,   176,     0,     0,     0,    96,   498,
       0,     0,    97,     0,     0,    55,   104,    92,     0,     0,
      98,    99,   100,     0,     0,     0,   176,     0,    87,   101,
      96,     0,    89,     0,    97,     0,     0,   479,     0,     0,
       0,     0,    98,    99,   100,     0,   104,    92,    87,     0,
       0,   101,    89,     0,     0,     0,   176,     0,     0,   495,
      96,     0,     0,     0,    97,     0,     0,    92,   104,     0,
       0,    87,    98,    99,   100,    89,   176,     0,     0,     0,
      96,   101,     0,     0,    97,     0,     0,     0,     0,   515,
      92,    87,    98,    99,   100,    89,     0,     0,   104,   176,
       0,   101,    87,    96,     0,     0,    89,    97,     0,   524,
      92,     0,     0,     0,     0,    98,    99,   100,   104,   176,
       0,    92,     0,    96,   101,     0,     0,    97,     0,     0,
     176,     0,   526,     0,    96,    98,    99,   100,    97,     0,
       0,   104,     0,     0,   101,     0,    98,    99,   100,     0,
       0,     0,   535,     0,     0,   101,     0,     0,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   104
};

static const yytype_int16 yycheck[] =
{
      57,    38,    98,   211,    38,   101,    99,    99,   113,   110,
     280,    59,   330,     9,    17,    22,    20,   384,    60,    12,
      39,    57,    20,    98,    18,    29,   101,   416,    39,    66,
      67,    67,    18,    67,    12,    28,    18,    71,    31,    24,
      39,    26,    39,    85,    39,    82,    39,    39,    39,    47,
      28,    44,   416,    31,    91,   156,   113,   211,    18,    66,
      79,    39,    20,    39,    18,    18,    44,    18,    46,    73,
     437,    74,   106,    69,    78,   445,   446,   113,    77,   175,
      74,     0,   178,   179,   180,   177,    77,    80,    74,    67,
      68,    88,    74,    71,    57,   484,    74,   486,    12,    46,
     175,    79,    80,   178,   179,   180,   163,   155,   156,   210,
     428,   481,    88,    91,    74,    38,    74,    31,    72,    72,
     484,    72,   486,    29,   513,    39,   515,   163,    18,    39,
      44,    17,   169,    20,   523,   524,    39,   526,    39,   509,
     529,    39,    23,   532,    67,   534,   535,   517,   518,   513,
     113,   515,   541,   423,   211,   212,    17,    46,   528,   523,
     524,    47,   526,    18,    74,   529,    80,    48,   532,   274,
     534,   535,    78,    74,   211,    38,    23,   541,    33,    12,
      35,    20,    72,    23,    14,    74,    47,    14,    57,    11,
      12,   248,    20,    48,    39,    28,    55,    47,    31,    29,
     163,    48,    29,    66,    67,    64,    39,    47,    48,    48,
      32,    44,   308,   309,   310,   316,   291,   274,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   278,    48,   274,    72,
      48,   283,   284,   280,   113,    48,    12,    80,   211,   212,
      12,    55,   297,   298,   408,    35,    48,    37,    48,   413,
      64,    72,    28,    55,    72,    31,    39,    16,    39,    72,
      32,    51,    64,    39,    55,   483,    11,   314,    44,    28,
      15,    59,    47,    64,   380,   248,   328,   329,    74,    53,
      25,   445,   446,    42,   163,    30,    45,    75,    62,    77,
     334,    67,    68,    47,    39,   380,   407,    47,    43,   384,
      39,   274,    47,    79,    80,   303,   304,   305,    67,    68,
      16,    56,    57,    74,    16,    91,    57,   481,    48,   483,
      79,    22,    28,   375,    48,    55,    28,    73,   431,   431,
     436,    48,   211,   212,    64,    47,    81,    74,    16,    45,
      42,   408,    87,    45,     4,   509,   413,   306,   307,   416,
      28,   436,   437,   517,   518,   440,    58,     8,    74,     3,
     427,    67,    68,    74,   528,    67,    68,    45,    65,   248,
      33,    34,   113,    79,    74,   442,   423,    79,   445,   446,
      72,   425,   299,   300,   301,   302,    49,    50,    74,    67,
      68,    48,    74,    74,    39,   274,    73,    39,    72,    74,
      17,    79,    18,    72,    72,    48,    47,    47,    73,   476,
     477,    73,   479,    39,   481,   482,   483,   484,    56,   486,
      74,    17,   163,    18,    74,   492,    73,   494,   495,    47,
      22,    22,    47,    72,    17,   408,   483,    74,    72,    72,
     413,   508,   509,   416,   488,    73,   513,    72,   515,    72,
     517,   518,    72,    74,   427,    74,   523,   524,    72,   526,
      72,   528,   529,    74,    72,   532,    72,   534,   535,   442,
     211,   212,   445,   446,   541,    72,    11,    67,    72,   266,
     163,   335,   370,   483,   483,   220,   440,   291,   293,   295,
      -1,   294,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   476,   477,    -1,   479,   248,   481,   482,
     483,   484,    -1,   486,    -1,    57,    -1,    -1,    -1,   492,
      -1,   494,   495,    -1,    -1,    -1,    -1,    -1,    -1,   408,
      -1,    -1,    -1,   274,   413,   508,   509,   416,    -1,    -1,
     513,    -1,   515,    -1,   517,   518,    -1,    -1,   427,    -1,
     523,   524,    -1,   526,    -1,   528,   529,    -1,    -1,   532,
      -1,   534,   535,   442,    -1,    -1,   445,   446,   541,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   476,   477,    -1,
     479,    30,   481,   482,   483,   484,    -1,   486,    -1,    -1,
      39,    -1,    -1,   492,    43,   494,   495,    -1,    47,    -1,
      -1,   163,    -1,    -1,    53,    -1,    55,    56,    57,   508,
     509,    -1,    -1,    62,   513,    64,   515,    -1,   517,   518,
      -1,    -1,    -1,    72,   523,   524,    -1,   526,    -1,   528,
     529,    57,    81,   532,    -1,   534,   535,    -1,    87,    -1,
      -1,    -1,   541,    -1,    -1,    -1,    -1,   408,    -1,   211,
     212,    -1,   413,    -1,    -1,   416,    -1,    -1,    -1,    -1,
      11,    12,    -1,    -1,    15,    -1,   427,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,
      31,   442,    -1,    -1,   445,   446,   248,   113,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,   274,    64,    -1,   476,   477,    -1,   479,    -1,
     481,   482,   483,   484,    -1,   486,    -1,    -1,    -1,    80,
      81,   492,    -1,   494,   495,    -1,    87,   163,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   508,   509,    -1,
      -1,    -1,   513,    -1,   515,    -1,   517,   518,    -1,    -1,
      -1,    -1,   523,   524,    -1,   526,    -1,   528,   529,    -1,
      -1,   532,    57,   534,   535,     7,    -1,    -1,    -1,    11,
     541,    13,    -1,    15,    -1,   211,   212,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    11,
      32,    -1,    -1,    15,    -1,    -1,    -1,    39,    40,    -1,
      -1,    43,    -1,    25,    46,    47,    -1,    -1,    30,    -1,
      -1,    -1,   248,    55,    56,    57,    -1,    39,   113,    -1,
      -1,    43,    64,    -1,    -1,    47,    -1,   484,    70,   486,
      -1,    53,    74,    55,    56,    57,   408,    -1,   274,    81,
      62,   413,    64,    85,   416,    -1,    -1,    89,    -1,    -1,
      92,    93,    74,    -1,    -1,   427,   513,    -1,   515,    81,
      -1,    -1,    -1,    -1,    -1,    87,   523,   524,   163,   526,
     442,    -1,   529,   445,   446,   532,    -1,   534,   535,    -1,
      -1,    -1,    -1,    -1,   541,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   476,   477,    -1,   479,    -1,   481,
     482,   483,   484,    -1,   486,    -1,   211,   212,    -1,    -1,
     492,    -1,   494,   495,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,   508,   509,    -1,    -1,
      -1,   513,    -1,   515,    -1,   517,   518,    -1,    -1,    -1,
       5,   523,   524,   248,   526,    10,   528,   529,    -1,    -1,
     532,    -1,   534,   535,    -1,    20,    -1,    -1,    23,   541,
      -1,    -1,   408,    -1,    -1,    -1,    -1,   413,    -1,   274,
     416,    36,    -1,    38,    39,   113,    -1,    -1,    -1,    -1,
      -1,   427,    -1,    48,    -1,    -1,    -1,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,   442,    -1,    63,   445,
     446,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    78,    -1,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,    25,
     476,   477,    -1,   479,    30,   481,   482,   483,   484,    -1,
     486,    -1,    -1,    39,    -1,    -1,   492,    43,   494,   495,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,   508,   509,    -1,    -1,    62,   513,    64,   515,
      -1,   517,   518,   211,   212,    -1,    72,   523,   524,    -1,
     526,    -1,   528,   529,    -1,    81,   532,    -1,   534,   535,
      -1,    87,    -1,    -1,    -1,   541,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   408,    -1,    -1,    -1,    -1,   413,    -1,
     248,   416,    -1,    -1,    -1,    11,    -1,    -1,    -1,    15,
      -1,    -1,   427,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    30,    -1,   274,   442,    -1,    -1,
     445,   446,    -1,    39,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,   212,
      -1,   476,   477,    -1,   479,    -1,   481,   482,   483,   484,
      -1,   486,    -1,    -1,    -1,    81,    -1,   492,    -1,   494,
     495,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   508,   509,   248,    -1,    11,   513,    -1,
     515,    15,   517,   518,    -1,    -1,    -1,    -1,   523,   524,
      -1,   526,    -1,   528,   529,    -1,    30,   532,    -1,   534,
     535,    -1,     3,    -1,     5,    39,   541,    -1,    -1,    43,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    27,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    38,    72,    -1,
     408,    -1,    -1,    -1,    -1,   413,    -1,    81,   416,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,   427,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   442,    -1,    -1,   445,   446,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   476,   477,
      -1,   479,   113,   481,   482,   483,   484,    -1,   486,    -1,
      -1,    -1,    -1,    -1,   492,    -1,   494,   495,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     508,   509,    -1,   416,    -1,   513,    -1,   515,    -1,   517,
     518,    -1,    -1,    -1,   427,   523,   524,    -1,   526,    -1,
     528,   529,   163,    -1,   532,    -1,   534,   535,   169,   442,
      -1,    -1,    -1,   541,   175,    -1,   177,   178,   179,   180,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    15,    -1,    97,    -1,    -1,    -1,    -1,   102,
      -1,    -1,   105,   476,   477,   108,   479,    30,    -1,   482,
     211,   484,    -1,   486,    -1,    -1,    39,    -1,    -1,   492,
      43,   494,   495,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,   508,    -1,    -1,    -1,    -1,
     513,    64,   515,    -1,    -1,    -1,    -1,    -1,    -1,    72,
     523,   524,    -1,   526,    -1,    -1,   529,    -1,    81,   532,
      -1,   534,   535,    -1,    -1,    -1,    -1,    -1,   541,    -1,
      -1,    -1,    -1,   274,   177,    -1,    -1,    -1,    -1,   280,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     291,    -1,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
      -1,   214,    -1,   314,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,   231,   232,
      -1,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,    -1,    -1,    -1,    -1,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,    -1,
      -1,   264,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    11,    12,    13,    -1,    15,   380,
      -1,    -1,    19,   384,    -1,    -1,   289,    -1,    -1,   292,
      -1,    28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    43,    44,    -1,    46,
      47,    -1,   315,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,   423,    -1,   327,    -1,    -1,    64,    -1,    -1,
     431,    -1,    -1,    70,    71,   436,   437,    74,    -1,   440,
      -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    89,     7,    -1,    92,    93,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,   382,
      -1,    -1,   483,    -1,    -1,    39,    40,    -1,    -1,    43,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    55,    56,    57,    15,    -1,    -1,    -1,   411,   412,
      64,   414,    -1,    -1,    25,   418,    70,    -1,    -1,    30,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    39,    -1,
      -1,    85,    43,    -1,    -1,    89,    47,    -1,    92,    93,
      -1,    -1,    53,    11,    55,    56,    57,    15,    -1,    -1,
      -1,    62,    -1,    64,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    30,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    39,    -1,    -1,    -1,    43,    87,    -1,    -1,    47,
      -1,    -1,   485,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    11,    62,   498,    64,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    25,   511,   512,
      -1,    -1,    30,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    39,    11,    -1,    -1,    43,    15,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    53,    25,    55,    56,    57,
      -1,    30,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    -1,    74,    11,    47,    -1,
      -1,    15,    -1,    81,    53,    -1,    55,    56,    57,    87,
      -1,    25,    -1,    62,    -1,    64,    30,    11,    -1,    -1,
      -1,    15,    -1,    72,    -1,    39,    -1,    -1,    -1,    43,
      -1,    25,    81,    47,    -1,    -1,    30,    -1,    87,    53,
      -1,    55,    56,    57,    -1,    39,    -1,    -1,    62,    43,
      64,     5,    -1,    47,    -1,    -1,    10,    -1,    -1,    53,
      74,    55,    56,    57,    -1,    -1,    20,    81,    62,    23,
      64,     5,     5,    87,    -1,    -1,    10,    10,    -1,    -1,
      74,    -1,    36,    -1,    38,    -1,    20,    81,    -1,    23,
      23,    -1,    -1,    87,    48,    -1,    -1,    -1,    52,    -1,
      54,    -1,    36,    36,    38,    38,    60,    -1,    -1,    63,
      -1,    -1,    66,    -1,    48,    -1,    -1,    -1,    52,    52,
      54,    54,    76,    -1,    78,    -1,    60,    60,    -1,    63,
      63,    -1,    66,    66,    11,    12,    -1,    -1,    15,    -1,
      -1,    -1,    76,    76,    78,    78,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    -1,    11,    12,    -1,    -1,
      15,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    28,    -1,    30,    31,    -1,    55,    56,
      57,    -1,    -1,    -1,    39,    -1,    11,    64,    43,    44,
      15,    -1,    47,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      55,    56,    57,    80,    81,    30,    -1,    -1,    11,    64,
      -1,    -1,    15,    -1,    39,    -1,    -1,    -1,    43,    74,
      -1,    -1,    47,    -1,    -1,    80,    81,    30,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    39,    -1,    11,    64,
      43,    -1,    15,    -1,    47,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    81,    30,    11,    -1,
      -1,    64,    15,    -1,    -1,    -1,    39,    -1,    -1,    72,
      43,    -1,    -1,    -1,    47,    -1,    -1,    30,    81,    -1,
      -1,    11,    55,    56,    57,    15,    39,    -1,    -1,    -1,
      43,    64,    -1,    -1,    47,    -1,    -1,    -1,    -1,    72,
      30,    11,    55,    56,    57,    15,    -1,    -1,    81,    39,
      -1,    64,    11,    43,    -1,    -1,    15,    47,    -1,    72,
      30,    -1,    -1,    -1,    -1,    55,    56,    57,    81,    39,
      -1,    30,    -1,    43,    64,    -1,    -1,    47,    -1,    -1,
      39,    -1,    72,    -1,    43,    55,    56,    57,    47,    -1,
      -1,    81,    -1,    -1,    64,    -1,    55,    56,    57,    -1,
      -1,    -1,    72,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    28,    42,    45,    58,    67,    68,    79,    95,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     116,   117,   118,   119,   139,    39,    39,    79,   113,    39,
     113,     0,   100,   106,   101,   106,   107,    46,    96,   120,
      16,    45,   119,   113,    20,    74,   120,    20,   106,    12,
      31,    39,    44,    71,    74,    80,    91,    96,    97,   108,
     109,   110,   111,   112,   113,   114,   118,   121,   122,   123,
     124,   128,   129,   134,   135,   136,   140,    39,    39,    20,
      39,    77,    47,    39,   130,   136,     7,    11,    13,    15,
      19,    28,    30,    32,    39,    40,    43,    47,    55,    56,
      57,    64,    70,    74,    81,    85,    89,    92,    93,    97,
     108,   113,   140,   141,   142,   143,   145,   146,   147,   149,
     150,   151,   152,   153,   155,   156,   158,   160,   166,   168,
     169,   170,   171,   172,   173,   176,   177,   178,   179,   180,
     181,   182,   183,   187,   200,   201,   204,   205,   206,    39,
     125,   126,   130,    48,   115,    91,   108,   136,    97,   122,
      74,   133,   140,    96,   137,   120,    39,    77,    74,    28,
      72,   108,   131,   132,   115,    25,    39,    47,    53,    62,
      87,   113,   179,   182,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,    39,    74,    39,    74,
     108,    47,    17,    47,    47,   185,   113,   181,   199,   109,
     112,   113,   199,    74,   185,   185,   140,    47,   185,    39,
     125,     5,    10,    20,    23,    36,    38,    48,    52,    54,
      60,    63,    66,    76,    78,    97,   142,    74,    22,    48,
       5,    10,    23,    36,    38,    52,    54,    60,    63,    66,
      76,    78,    55,    64,    23,   115,    18,    74,    73,    48,
     130,   125,   130,    97,   141,    74,    74,   108,    39,    88,
      18,    72,   199,   109,   113,   185,   199,   199,   199,    17,
      74,     9,    69,     4,     8,    65,     3,    24,    26,    33,
      34,    49,    50,    35,    37,    51,    53,    62,    59,    75,
      77,    74,    74,   125,    28,    74,   108,   150,   162,   163,
     165,   143,    72,   138,   185,   185,    72,    48,   184,   184,
      47,    74,    74,    14,    29,   174,   175,   185,    74,    74,
     185,   185,    39,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   143,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   127,   185,
      23,   126,    73,    74,    97,    39,    88,   115,    39,   132,
      72,   115,    48,   115,    72,   185,   190,   185,   191,   192,
     193,   194,   195,   195,   196,   196,   196,   196,   197,   197,
     197,   198,   198,   199,   199,   199,    74,   108,    74,   185,
     125,    74,    17,    18,    18,    72,    72,   185,    48,   115,
     115,    72,   138,    47,   140,    29,   175,    72,    47,    73,
      73,    56,   183,   115,    39,   199,    72,    72,   202,    74,
      17,   125,    72,   164,   165,    74,    74,   185,   185,   150,
     185,    32,    39,    92,   143,   144,   145,   148,   153,   154,
     157,   159,   161,   167,    73,   185,    72,   132,   140,   143,
      72,   138,   199,   202,   188,   143,    72,    72,   164,    72,
     164,    74,    72,    47,    17,    47,    22,    73,    72,    72,
     143,   143,    72,   143,    72,    72,   164,   143,    74,   162,
     163,   144,   185,   144,   140,   143,   143,   143,    72,    74,
     185,    74,    17,    72,   143,    72,   164,    74,    74,   185,
     185,   144,   144,    72,    72,   164,    72,   164,    74,    72,
     144,   144,    72,   144,    72,    72,   164,   144,   144,   144,
     144,    72,   144
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    97,    98,    98,    98,    98,    98,
      98,    98,    99,   100,   100,   101,   101,   101,   101,   102,
     103,   104,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   109,   110,   110,   111,   111,   112,   113,   113,   114,
     115,   115,   116,   116,   117,   118,   118,   119,   119,   119,
     119,   120,   120,   121,   121,   122,   122,   122,   123,   123,
     123,   124,   124,   125,   125,   126,   126,   126,   126,   127,
     128,   128,   128,   128,   129,   130,   130,   131,   131,   132,
     132,   132,   132,   132,   132,   133,   133,   134,   134,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   142,   142,   143,   143,   143,   143,   143,
     143,   144,   144,   144,   144,   144,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   146,   147,   148,   149,
     150,   150,   150,   150,   150,   150,   150,   151,   152,   153,
     154,   155,   155,   156,   157,   158,   158,   159,   159,   160,
     160,   160,   160,   160,   160,   160,   160,   161,   161,   161,
     161,   161,   161,   161,   161,   162,   162,   163,   163,   164,
     165,   165,   166,   167,   168,   168,   169,   170,   170,   171,
     171,   172,   173,   173,   173,   174,   174,   175,   176,   176,
     177,   177,   177,   177,   177,   178,   178,   178,   178,   178,
     178,   179,   180,   180,   181,   181,   182,   182,   182,   182,
     183,   183,   183,   183,   184,   184,   185,   186,   186,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   188,   188,   189,   189,   190,   190,   191,
     191,   192,   192,   193,   193,   194,   194,   194,   195,   195,
     195,   195,   195,   196,   196,   196,   196,   197,   197,   197,
     198,   198,   198,   198,   199,   199,   199,   199,   199,   200,
     201,   202,   202,   202,   202,   203,   203,   203,   203,   204,
     204,   204,   204,   205,   206
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     1,     2,
       2,     3,     2,     2,     1,     1,     1,     1,     1,     3,
       5,     6,     6,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       3,     2,     2,     3,     2,     2,     1,     1,     1,     1,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     1,     3,     1,     2,     4,     1,
       2,     2,     3,     3,     2,     1,     2,     3,     1,     2,
       3,     3,     4,     3,     4,     1,     1,     1,     2,     2,
       3,     4,     2,     3,     3,     1,     3,     4,     2,     3,
       2,     1,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     5,     3,     5,
       3,     3,     5,     5,     5,     1,     1,     1,     1,     6,
       7,     7,     8,     7,     8,     8,     9,     6,     7,     7,
       8,     7,     8,     8,     9,     1,     1,     2,     3,     1,
       3,     1,     7,     7,     2,     3,     3,     2,     3,     2,
       3,     3,     3,     4,     5,     2,     1,     5,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     5,     4,     4,     3,     4,     5,     6,
       3,     4,     3,     4,     4,     3,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     5,     1,     3,     1,     3,     1,
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
  case 3:
#line 82 "parser.y"
                           {new_scope();}
#line 2367 "parser.tab.c"
    break;

  case 4:
#line 83 "parser.y"
                                {old_scope();}
#line 2373 "parser.tab.c"
    break;

  case 27:
#line 138 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2379 "parser.tab.c"
    break;

  case 28:
#line 139 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2385 "parser.tab.c"
    break;

  case 29:
#line 143 "parser.y"
                 {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2391 "parser.tab.c"
    break;

  case 30:
#line 144 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).label);}
#line 2397 "parser.tab.c"
    break;

  case 31:
#line 145 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).label);}
#line 2403 "parser.tab.c"
    break;

  case 32:
#line 149 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).label);}
#line 2409 "parser.tab.c"
    break;

  case 33:
#line 150 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).label);}
#line 2415 "parser.tab.c"
    break;

  case 34:
#line 154 "parser.y"
                {check_gst((yyvsp[0].item).label); strcpy((yyval.item).type,(yyvsp[0].item).label);}
#line 2421 "parser.tab.c"
    break;

  case 35:
#line 155 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 2427 "parser.tab.c"
    break;

  case 36:
#line 159 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).label);}
#line 2433 "parser.tab.c"
    break;

  case 37:
#line 163 "parser.y"
                                {strcpy((yyval.item).label,strcat((yyvsp[-2].item).label,strcat((yyvsp[-1].item).label,(yyvsp[0].item).label)));}
#line 2439 "parser.tab.c"
    break;

  case 38:
#line 164 "parser.y"
                        {strcpy((yyval.item).label,(yyvsp[0].item).label);}
#line 2445 "parser.tab.c"
    break;

  case 39:
#line 168 "parser.y"
                        {string t; for(int i=0;i<(yyvsp[-1].item).dims;i++) t.push_back('*'); strcpy((yyval.item).type,strcat((yyvsp[-1].item).type,t.c_str()));}
#line 2451 "parser.tab.c"
    break;

  case 40:
#line 172 "parser.y"
                                          {(yyval.item).dims = (yyvsp[-2].item).dims+1;}
#line 2457 "parser.tab.c"
    break;

  case 41:
#line 173 "parser.y"
                                        {(yyval.item).dims = 1;}
#line 2463 "parser.tab.c"
    break;

  case 42:
#line 177 "parser.y"
                    {strcpy((yyval.item).type,""); strcpy((yyval.item).label,(yyvsp[0].item).label); line_number = yylineno;  if(!first_parse) go_in_scope((yyvsp[0].item).label);curr_class_name = (yyvsp[0].item).label;}
#line 2469 "parser.tab.c"
    break;

  case 43:
#line 178 "parser.y"
                                    {strcpy((yyval.item).type,(yyvsp[-2].item).label); strcpy((yyval.item).label,(yyvsp[0].item).label); line_number = yylineno;  if(!first_parse) go_in_scope((yyvsp[0].item).label); curr_class_name = (yyvsp[0].item).label;}
#line 2475 "parser.tab.c"
    break;

  case 44:
#line 181 "parser.y"
                                        {if(first_parse){string mod = check_class_modifiers((yyvsp[-1].item).type);make_class_entry((yyvsp[-1].item).label,line_number,mod);}}
#line 2481 "parser.tab.c"
    break;

  case 45:
#line 185 "parser.y"
                             {strcpy((yyval.item).label,strcat((yyvsp[-1].item).label,(yyvsp[0].item).label));}
#line 2487 "parser.tab.c"
    break;

  case 46:
#line 186 "parser.y"
                {strcpy((yyval.item).label,(yyvsp[0].item).label);}
#line 2493 "parser.tab.c"
    break;

  case 47:
#line 190 "parser.y"
            {strcpy((yyval.item).label,"0");}
#line 2499 "parser.tab.c"
    break;

  case 48:
#line 191 "parser.y"
                {strcpy((yyval.item).label,"1");}
#line 2505 "parser.tab.c"
    break;

  case 49:
#line 192 "parser.y"
                {strcpy((yyval.item).label,"2");}
#line 2511 "parser.tab.c"
    break;

  case 50:
#line 193 "parser.y"
                {strcpy((yyval.item).label,"3");}
#line 2517 "parser.tab.c"
    break;

  case 57:
#line 209 "parser.y"
        {reset();}
#line 2523 "parser.tab.c"
    break;

  case 61:
#line 219 "parser.y"
                                        {
    for(int i=0;i<v.size();i++){
        string t = expression_type(yylineno,(yyvsp[-2].item).type,v[i].second,"declare");
        if(first_parse)   make_entry(v[i].first,t,yylineno,"0000");
    }
    v.clear();	
}
#line 2535 "parser.tab.c"
    break;

  case 62:
#line 226 "parser.y"
                                                        {
    for(int i=0;i<v.size();i++){
        string t = expression_type(yylineno,(yyvsp[-2].item).type,v[i].second,"declare");
        if(first_parse) make_entry(v[i].first,t,yylineno,check_method_modifiers((yyvsp[-3].item).label));
    }
    v.clear();
}
#line 2547 "parser.tab.c"
    break;

  case 65:
#line 241 "parser.y"
                                        {if(first_parse)v.push_back(make_pair((yyvsp[-2].item).label,"")); else v.push_back(make_pair((yyvsp[-2].item).label,(yyvsp[0].item).type));}
#line 2553 "parser.tab.c"
    break;

  case 66:
#line 242 "parser.y"
                {v.push_back(make_pair((yyvsp[0].item).label,""));}
#line 2559 "parser.tab.c"
    break;

  case 67:
#line 243 "parser.y"
                        {string t; for(int i=0;i<(yyvsp[0].item).dims;i++) t.push_back('*'); v.push_back(make_pair((yyvsp[-1].item).label,t));}
#line 2565 "parser.tab.c"
    break;

  case 68:
#line 244 "parser.y"
                                                 {if(first_parse){string t; for(int i=0;i<(yyvsp[-2].item).dims;i++) t.push_back('*'); v.push_back(make_pair((yyvsp[-3].item).label,t));}else{if((yyvsp[-2].item).dims == (yyvsp[0].item).dims) v.push_back(make_pair((yyvsp[-3].item).label,(yyvsp[0].item).type)); else{cout<<"Dimensions of array not matched in line number: "<<yylineno<<endl; exit(1);}}}
#line 2571 "parser.tab.c"
    break;

  case 69:
#line 248 "parser.y"
                        {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 2577 "parser.tab.c"
    break;

  case 70:
#line 251 "parser.y"
                        {if((yyvsp[0].item).dims){cout<<"Void function cant be of array type in line number "<<yylineno<<endl; exit(1);} strcpy((yyval.item).label,(yyvsp[0].item).label); strcpy((yyval.item).type,"void0000"); line_number = yylineno; if(!first_parse)go_in_scope((yyvsp[0].item).label);}
#line 2583 "parser.tab.c"
    break;

  case 71:
#line 252 "parser.y"
                        {string t; for(int i=0;i<(yyvsp[0].item).dims;i++) t.push_back('*'); strcpy((yyval.item).label,(yyvsp[0].item).label); strcpy((yyval.item).type,strcat((yyvsp[-1].item).type,(t+"0000").c_str())); line_number = yylineno; if(!first_parse)go_in_scope((yyvsp[0].item).label);}
#line 2589 "parser.tab.c"
    break;

  case 72:
#line 253 "parser.y"
                                        {if((yyvsp[-1].item).dims){cout<<"Void function cant be of array type in line number "<<yylineno<<endl;exit(1);} string x = check_method_modifiers((yyvsp[-2].item).label); strcpy((yyval.item).label,(yyvsp[0].item).label); strcpy((yyval.item).type,("void"+x).c_str()); line_number = yylineno; if(!first_parse)go_in_scope((yyvsp[0].item).label);}
#line 2595 "parser.tab.c"
    break;

  case 73:
#line 254 "parser.y"
                                        {string t; for(int i=0;i<(yyvsp[-1].item).dims;i++) t.push_back('*'); strcpy((yyval.item).label,(yyvsp[0].item).label); string x = check_method_modifiers((yyvsp[-2].item).label); strcpy((yyval.item).type,strcat((yyvsp[-1].item).type,(t+x).c_str())); line_number = yylineno; if(!first_parse)go_in_scope((yyvsp[0].item).label);}
#line 2601 "parser.tab.c"
    break;

  case 74:
#line 257 "parser.y"
                                        {if(first_parse){string x = (yyvsp[-1].item).type; make_func_entry((yyvsp[-1].item).label,x.substr(0,x.size()-4),arguments,line_number,x.substr(x.size()-4,4)); arguments.clear();}else{print(curr_class_name+"."+(yyvsp[-1].item).label);}}
#line 2607 "parser.tab.c"
    break;

  case 75:
#line 261 "parser.y"
            {strcpy((yyval.item).label,(yyvsp[0].item).label); (yyval.item).dims = 0;}
#line 2613 "parser.tab.c"
    break;

  case 76:
#line 262 "parser.y"
                        {strcpy((yyval.item).label,(yyvsp[-1].item).label); (yyval.item).dims = (yyvsp[0].item).dims;}
#line 2619 "parser.tab.c"
    break;

  case 79:
#line 271 "parser.y"
                    {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-1].item).type,0,0));}}
#line 2625 "parser.tab.c"
    break;

  case 80:
#line 272 "parser.y"
                                        {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-1].item).type,0,1));}}
#line 2631 "parser.tab.c"
    break;

  case 81:
#line 273 "parser.y"
                                {if(first_parse){string t; for(int i=0;i<(yyvsp[0].item).dims;i++) t.push_back('*'); arguments.push_back(make_tuple((yyvsp[-1].item).label,strcat((yyvsp[-2].item).type,t.c_str()),0,0));}}
#line 2637 "parser.tab.c"
    break;

  case 82:
#line 274 "parser.y"
                                        {if(first_parse){string t; for(int i=0;i<(yyvsp[-1].item).dims;i++) t.push_back('*'); arguments.push_back(make_tuple((yyvsp[-1].item).label,strcat((yyvsp[-3].item).type,t.c_str()),0,1));}}
#line 2643 "parser.tab.c"
    break;

  case 83:
#line 275 "parser.y"
                                        {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-2].item).type,1,0));}}
#line 2649 "parser.tab.c"
    break;

  case 84:
#line 276 "parser.y"
                                                {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-2].item).type,1,1));}}
#line 2655 "parser.tab.c"
    break;

  case 87:
#line 285 "parser.y"
            {strcpy((yyval.item).type,"0000"); strcpy((yyval.item).label,(yyvsp[0].item).label); line_number = yylineno;  if(!first_parse) go_in_scope((yyvsp[0].item).label);}
#line 2661 "parser.tab.c"
    break;

  case 88:
#line 286 "parser.y"
                            {string x = check_method_modifiers((yyvsp[-1].item).label); strcpy((yyval.item).type,x.c_str()); strcpy((yyval.item).label,(yyvsp[0].item).label);  line_number = yylineno; if(!first_parse) go_in_scope((yyvsp[0].item).label);}
#line 2667 "parser.tab.c"
    break;

  case 89:
#line 289 "parser.y"
                                             {if(first_parse){check_constructor((yyvsp[0].item).label); make_func_entry((yyvsp[-1].item).label,(yyvsp[-1].item).label,arguments,line_number,(yyvsp[-1].item).type); arguments.clear();}}
#line 2673 "parser.tab.c"
    break;

  case 94:
#line 303 "parser.y"
                                {if(!first_parse){function_call.push_back((yyvsp[0].item).type);}}
#line 2679 "parser.tab.c"
    break;

  case 95:
#line 304 "parser.y"
                {if(!first_parse){function_call.push_back((yyvsp[0].item).type);}}
#line 2685 "parser.tab.c"
    break;

  case 96:
#line 309 "parser.y"
                                {if(first_parse) make_class_entry((yyvsp[-1].item).label,yylineno,"00");}
#line 2691 "parser.tab.c"
    break;

  case 97:
#line 310 "parser.y"
                                                {if(first_parse){string mod = check_class_modifiers((yyvsp[-3].item).label); make_class_entry((yyvsp[-1].item).label,yylineno,mod);}}
#line 2697 "parser.tab.c"
    break;

  case 102:
#line 324 "parser.y"
                                        {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,(yyvsp[-2].item).type,v[i].second,"declare");
            make_entry(v[i].first,t,yylineno,"0000");
        }
    }	
    v.clear();
}
#line 2711 "parser.tab.c"
    break;

  case 103:
#line 333 "parser.y"
                                                {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,(yyvsp[-2].item).type,v[i].second,"declare");
            make_entry(v[i].first,t,yylineno,"0010");
        }
    }	
    v.clear();
}
#line 2725 "parser.tab.c"
    break;

  case 104:
#line 342 "parser.y"
                        {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 2731 "parser.tab.c"
    break;

  case 105:
#line 346 "parser.y"
                                                {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 2737 "parser.tab.c"
    break;

  case 137:
#line 401 "parser.y"
                                                                {if(!first_parse){reset();}}
#line 2743 "parser.tab.c"
    break;

  case 138:
#line 405 "parser.y"
                                            {if(!first_parse){reset();}}
#line 2749 "parser.tab.c"
    break;

  case 139:
#line 409 "parser.y"
                                                                    {if(!first_parse){reset();}}
#line 2755 "parser.tab.c"
    break;

  case 140:
#line 413 "parser.y"
                                                        {if(!first_parse){reset();}}
#line 2761 "parser.tab.c"
    break;

  case 143:
#line 423 "parser.y"
                                                                {if(!first_parse){string t = (yyvsp[-2].item).type; if(t!="boolean"){cout<<"Expression must be of type boolean in line number "<<yylineno<<endl;exit(1);} reset();}}
#line 2767 "parser.tab.c"
    break;

  case 144:
#line 427 "parser.y"
                                                                                {if(!first_parse){string t = (yyvsp[-2].item).type; if(t!="boolean"){cout<<"Expression must be of type boolean in line number "<<yylineno<<endl;exit(1);} reset();}}
#line 2773 "parser.tab.c"
    break;

  case 149:
#line 441 "parser.y"
                                                                        {if(!first_parse){reset();}}
#line 2779 "parser.tab.c"
    break;

  case 150:
#line 442 "parser.y"
                                                                                    {if(!first_parse){reset();}}
#line 2785 "parser.tab.c"
    break;

  case 151:
#line 443 "parser.y"
                                                                                                {if(!first_parse){string t = (yyvsp[-3].item).type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}}
#line 2791 "parser.tab.c"
    break;

  case 152:
#line 444 "parser.y"
                                                                                                        {if(!first_parse){string t = (yyvsp[-4].item).type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}}
#line 2797 "parser.tab.c"
    break;

  case 153:
#line 445 "parser.y"
                                                                                                {if(!first_parse){reset();}}
#line 2803 "parser.tab.c"
    break;

  case 154:
#line 446 "parser.y"
                                                                                                        {if(!first_parse){reset();}}
#line 2809 "parser.tab.c"
    break;

  case 155:
#line 447 "parser.y"
                                                                                                        {if(!first_parse){string t = (yyvsp[-3].item).type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}}
#line 2815 "parser.tab.c"
    break;

  case 156:
#line 448 "parser.y"
                                                                                                                {if(!first_parse){string t = (yyvsp[-4].item).type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}}
#line 2821 "parser.tab.c"
    break;

  case 157:
#line 452 "parser.y"
                                                                                 {if(!first_parse){reset();}}
#line 2827 "parser.tab.c"
    break;

  case 158:
#line 453 "parser.y"
                                                                                             {if(!first_parse){reset();}}
#line 2833 "parser.tab.c"
    break;

  case 159:
#line 454 "parser.y"
                                                                                                        {if(!first_parse){string t = (yyvsp[-3].item).type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}}
#line 2839 "parser.tab.c"
    break;

  case 160:
#line 455 "parser.y"
                                                                                                                {if(!first_parse){string t = (yyvsp[-4].item).type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}}
#line 2845 "parser.tab.c"
    break;

  case 161:
#line 456 "parser.y"
                                                                                                        {if(!first_parse){reset();}}
#line 2851 "parser.tab.c"
    break;

  case 162:
#line 457 "parser.y"
                                                                                                                {if(!first_parse){reset();}}
#line 2857 "parser.tab.c"
    break;

  case 163:
#line 458 "parser.y"
                                                                                                                {if(!first_parse){string t = (yyvsp[-3].item).type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}}
#line 2863 "parser.tab.c"
    break;

  case 164:
#line 459 "parser.y"
                                                                                                                        {if(!first_parse){string t = (yyvsp[-4].item).type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}}
#line 2869 "parser.tab.c"
    break;

  case 167:
#line 468 "parser.y"
                           {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,(yyvsp[-1].item).type,v[i].second,"declare");
            make_dirty_entry(v[i].first,t,yylineno,"0000");
        }
    }	
    v.clear();
}
#line 2883 "parser.tab.c"
    break;

  case 168:
#line 477 "parser.y"
                                   {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,(yyvsp[-2].item).type,v[i].second,"declare");
            make_dirty_entry(v[i].first,t,yylineno,"0010");
        }
    }
    v.clear();
}
#line 2897 "parser.tab.c"
    break;

  case 172:
#line 497 "parser.y"
                                                                                                {if(!first_parse){reset();}}
#line 2903 "parser.tab.c"
    break;

  case 173:
#line 501 "parser.y"
                                                                                                                {if(!first_parse){reset();}}
#line 2909 "parser.tab.c"
    break;

  case 188:
#line 543 "parser.y"
                        {if(!first_parse){(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 2915 "parser.tab.c"
    break;

  case 189:
#line 544 "parser.y"
                                {if(!first_parse){(yyval.item).lit = false; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 2921 "parser.tab.c"
    break;

  case 190:
#line 548 "parser.y"
                        {if(!first_parse){(yyval.item).lit = true;strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 2927 "parser.tab.c"
    break;

  case 191:
#line 549 "parser.y"
                                               {if(!first_parse){(yyval.item).lit = false; strcpy((yyval.item).type,(yyvsp[-1].item).type);}}
#line 2933 "parser.tab.c"
    break;

  case 192:
#line 550 "parser.y"
                                        {if(!first_parse){(yyval.item).lit = false; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 2939 "parser.tab.c"
    break;

  case 193:
#line 551 "parser.y"
                        {if(!first_parse){(yyval.item).lit = false; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 2945 "parser.tab.c"
    break;

  case 194:
#line 552 "parser.y"
                                {if(!first_parse){(yyval.item).lit = false; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 2951 "parser.tab.c"
    break;

  case 195:
#line 556 "parser.y"
                    {if(!first_parse){strcpy((yyval.item).type,"byte");}}
#line 2957 "parser.tab.c"
    break;

  case 196:
#line 557 "parser.y"
                                {if(!first_parse){strcpy((yyval.item).type,"float");}}
#line 2963 "parser.tab.c"
    break;

  case 197:
#line 558 "parser.y"
                        {if(!first_parse){strcpy((yyval.item).type,"boolean");}}
#line 2969 "parser.tab.c"
    break;

  case 198:
#line 559 "parser.y"
                                {if(!first_parse){strcpy((yyval.item).type,"char");}}
#line 2975 "parser.tab.c"
    break;

  case 199:
#line 560 "parser.y"
                                {if(!first_parse){strcpy((yyval.item).type,"string");}}
#line 2981 "parser.tab.c"
    break;

  case 200:
#line 561 "parser.y"
                        {if(!first_parse){strcpy((yyval.item).type,"null");}}
#line 2987 "parser.tab.c"
    break;

  case 201:
#line 565 "parser.y"
                                                {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 2993 "parser.tab.c"
    break;

  case 202:
#line 569 "parser.y"
                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label); strcpy((yyval.item).type,get_method(t,t,function_call).c_str());}}
#line 2999 "parser.tab.c"
    break;

  case 203:
#line 570 "parser.y"
                                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-3].item).label); strcpy((yyval.item).type,get_method(t,t,function_call).c_str());}}
#line 3005 "parser.tab.c"
    break;

  case 204:
#line 574 "parser.y"
                                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-3].item).label); if(t[t.size()-1]!='*'){cout<<"Accessing Higher Dimensions of "<<(yyvsp[-3].item).label<<" in line number "<<yylineno<<endl; exit(1);} strcpy((yyval.item).type,(t.substr(0,t.size()-1)).c_str());}}
#line 3011 "parser.tab.c"
    break;

  case 205:
#line 575 "parser.y"
                                                                                {if(!first_parse){string t = (yyvsp[-3].item).type; if(t[t.size()-1]!='*'){cout<<"Accessing Higher Dimensions of "<<(yyvsp[-3].item).type<<" in line number "<<yylineno<<endl; exit(1);} strcpy((yyval.item).type,(t.substr(0,t.size()-1)).c_str());}}
#line 3017 "parser.tab.c"
    break;

  case 206:
#line 579 "parser.y"
                                                        {if(!first_parse){strcpy((yyval.item).type,get_method((yyvsp[-2].item).label,"",function_call).c_str());}}
#line 3023 "parser.tab.c"
    break;

  case 207:
#line 580 "parser.y"
                                                                {if(!first_parse){strcpy((yyval.item).type,get_method((yyvsp[-3].item).label,"",function_call).c_str());function_call.clear();}}
#line 3029 "parser.tab.c"
    break;

  case 208:
#line 581 "parser.y"
                                                                                {if(!first_parse){strcpy((yyval.item).type,get_method((yyvsp[-2].item).label,find_in_scope((yyvsp[-4].item).label),function_call).c_str());}}
#line 3035 "parser.tab.c"
    break;

  case 209:
#line 582 "parser.y"
                                                                                        {if(!first_parse){strcpy((yyval.item).type,get_method((yyvsp[-3].item).label,find_in_scope((yyvsp[-5].item).label),function_call).c_str()); function_call.clear();}}
#line 3041 "parser.tab.c"
    break;

  case 210:
#line 586 "parser.y"
                                {if(!first_parse){string t; for(int i=0;i<(yyvsp[0].item).dims;i++) t.push_back('*'); strcpy((yyval.item).type,strcat((yyvsp[-1].item).type,t.c_str()));(yyval.item).dims = (yyvsp[0].item).dims;}}
#line 3047 "parser.tab.c"
    break;

  case 211:
#line 587 "parser.y"
                                        {if(!first_parse){string t; for(int i=0;i<(yyvsp[-1].item).dims;i++) t.push_back('*'); for(int i=0;i<(yyvsp[0].item).dims;i++) t.push_back('*'); strcpy((yyval.item).type,strcat((yyvsp[-2].item).type,t.c_str()));(yyval.item).dims = (yyvsp[-1].item).dims + (yyvsp[0].item).dims;}}
#line 3053 "parser.tab.c"
    break;

  case 212:
#line 588 "parser.y"
                                {if(!first_parse){string t; for(int i=0;i<(yyvsp[0].item).dims;i++) t.push_back('*'); strcpy((yyval.item).type,strcat((yyvsp[-1].item).type,t.c_str()));(yyval.item).dims = (yyvsp[0].item).dims;}}
#line 3059 "parser.tab.c"
    break;

  case 213:
#line 589 "parser.y"
                                        {if(!first_parse){string t; for(int i=0;i<(yyvsp[-1].item).dims;i++) t.push_back('*'); for(int i=0;i<(yyvsp[0].item).dims;i++) t.push_back('*'); strcpy((yyval.item).type,strcat((yyvsp[-2].item).type,t.c_str()));(yyval.item).dims = (yyvsp[-1].item).dims + (yyvsp[0].item).dims;}}
#line 3065 "parser.tab.c"
    break;

  case 214:
#line 593 "parser.y"
                                                                {if(!first_parse){(yyval.item).dims = (yyvsp[-3].item).dims+1; string t = (yyvsp[-1].item).type; if(t!="int" && t!="byte" && t!="short" && t!="long") {cout<<"Array size must be of integer type. Line number: "<<yylineno<<endl; exit(1);}}}
#line 3071 "parser.tab.c"
    break;

  case 215:
#line 594 "parser.y"
                                                                {if(!first_parse){(yyval.item).dims=1; string t = (yyvsp[-1].item).type; if(t!="int" && t!="byte" && t!="short" && t!="long") {cout<<"Array size must be of integer type. Line number: "<<yylineno<<endl; exit(1);}}}
#line 3077 "parser.tab.c"
    break;

  case 216:
#line 598 "parser.y"
                        {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3083 "parser.tab.c"
    break;

  case 217:
#line 602 "parser.y"
                                {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3089 "parser.tab.c"
    break;

  case 218:
#line 603 "parser.y"
                        {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3095 "parser.tab.c"
    break;

  case 219:
#line 607 "parser.y"
                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3101 "parser.tab.c"
    break;

  case 220:
#line 608 "parser.y"
                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3107 "parser.tab.c"
    break;

  case 221:
#line 609 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3113 "parser.tab.c"
    break;

  case 222:
#line 610 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3119 "parser.tab.c"
    break;

  case 223:
#line 611 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3125 "parser.tab.c"
    break;

  case 224:
#line 612 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3131 "parser.tab.c"
    break;

  case 225:
#line 613 "parser.y"
                                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3137 "parser.tab.c"
    break;

  case 226:
#line 614 "parser.y"
                                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3143 "parser.tab.c"
    break;

  case 227:
#line 615 "parser.y"
                                                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3149 "parser.tab.c"
    break;

  case 228:
#line 616 "parser.y"
                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3155 "parser.tab.c"
    break;

  case 229:
#line 617 "parser.y"
                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3161 "parser.tab.c"
    break;

  case 230:
#line 618 "parser.y"
                                      {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3167 "parser.tab.c"
    break;

  case 231:
#line 619 "parser.y"
                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3173 "parser.tab.c"
    break;

  case 232:
#line 620 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3179 "parser.tab.c"
    break;

  case 233:
#line 621 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3185 "parser.tab.c"
    break;

  case 234:
#line 622 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3191 "parser.tab.c"
    break;

  case 235:
#line 623 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3197 "parser.tab.c"
    break;

  case 236:
#line 624 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3203 "parser.tab.c"
    break;

  case 237:
#line 625 "parser.y"
                                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3209 "parser.tab.c"
    break;

  case 238:
#line 626 "parser.y"
                                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3215 "parser.tab.c"
    break;

  case 239:
#line 627 "parser.y"
                                                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3221 "parser.tab.c"
    break;

  case 240:
#line 628 "parser.y"
                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3227 "parser.tab.c"
    break;

  case 241:
#line 629 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3233 "parser.tab.c"
    break;

  case 242:
#line 630 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item).label);strcpy((yyval.item).type,expression_type(yylineno,t,(yyvsp[0].item).type,(yyvsp[-1].item).label).c_str());}}
#line 3239 "parser.tab.c"
    break;

  case 243:
#line 634 "parser.y"
                                {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3245 "parser.tab.c"
    break;

  case 244:
#line 635 "parser.y"
                                                                                {if(!first_parse){string s = (yyvsp[-4].item).type; if(s!="boolean"){cout<<"First expression has to be boolean"<<endl;exit(1);};}}
#line 3251 "parser.tab.c"
    break;

  case 245:
#line 639 "parser.y"
                                {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3257 "parser.tab.c"
    break;

  case 246:
#line 640 "parser.y"
                                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3263 "parser.tab.c"
    break;

  case 247:
#line 644 "parser.y"
                                {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3269 "parser.tab.c"
    break;

  case 248:
#line 645 "parser.y"
                                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3275 "parser.tab.c"
    break;

  case 249:
#line 649 "parser.y"
                                {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3281 "parser.tab.c"
    break;

  case 250:
#line 650 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3287 "parser.tab.c"
    break;

  case 251:
#line 654 "parser.y"
                        {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3293 "parser.tab.c"
    break;

  case 252:
#line 655 "parser.y"
                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3299 "parser.tab.c"
    break;

  case 253:
#line 659 "parser.y"
                                {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3305 "parser.tab.c"
    break;

  case 254:
#line 660 "parser.y"
                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3311 "parser.tab.c"
    break;

  case 255:
#line 664 "parser.y"
                        {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3317 "parser.tab.c"
    break;

  case 256:
#line 665 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3323 "parser.tab.c"
    break;

  case 257:
#line 666 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3329 "parser.tab.c"
    break;

  case 258:
#line 670 "parser.y"
                        {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3335 "parser.tab.c"
    break;

  case 259:
#line 671 "parser.y"
                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3341 "parser.tab.c"
    break;

  case 260:
#line 672 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3347 "parser.tab.c"
    break;

  case 261:
#line 673 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3353 "parser.tab.c"
    break;

  case 262:
#line 674 "parser.y"
                                                            {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3359 "parser.tab.c"
    break;

  case 263:
#line 678 "parser.y"
                                {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3365 "parser.tab.c"
    break;

  case 264:
#line 679 "parser.y"
                                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3371 "parser.tab.c"
    break;

  case 265:
#line 680 "parser.y"
                                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3377 "parser.tab.c"
    break;

  case 266:
#line 681 "parser.y"
                                                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3383 "parser.tab.c"
    break;

  case 267:
#line 685 "parser.y"
                            {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3389 "parser.tab.c"
    break;

  case 268:
#line 686 "parser.y"
                                                            {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3395 "parser.tab.c"
    break;

  case 269:
#line 687 "parser.y"
                                                            {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3401 "parser.tab.c"
    break;

  case 270:
#line 691 "parser.y"
                        {if(!first_parse){strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3407 "parser.tab.c"
    break;

  case 271:
#line 692 "parser.y"
                                                    {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3413 "parser.tab.c"
    break;

  case 272:
#line 693 "parser.y"
                                                    {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3419 "parser.tab.c"
    break;

  case 273:
#line 694 "parser.y"
                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item).type,(yyvsp[0].item).type,(yyvsp[-1].item).label); strcpy((yyval.item).type,t.c_str());}}
#line 3425 "parser.tab.c"
    break;

  case 274:
#line 698 "parser.y"
                                    {if(!first_parse){(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3431 "parser.tab.c"
    break;

  case 275:
#line 699 "parser.y"
                                        {if(!first_parse){(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3437 "parser.tab.c"
    break;

  case 276:
#line 700 "parser.y"
                                    {if(!first_parse){string t = expression_type(yylineno,(yyvsp[0].item).type,"",(yyvsp[-1].item).label); (yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,t.c_str());}}
#line 3443 "parser.tab.c"
    break;

  case 277:
#line 701 "parser.y"
                                    {if(!first_parse){string t = expression_type(yylineno,(yyvsp[0].item).type,"",(yyvsp[-1].item).label); (yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,t.c_str());}}
#line 3449 "parser.tab.c"
    break;

  case 278:
#line 702 "parser.y"
                                {if(!first_parse){(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3455 "parser.tab.c"
    break;

  case 279:
#line 706 "parser.y"
                                        {
    if(!first_parse){
    string t = expression_type(yylineno,(yyvsp[0].item).type,"",(yyvsp[-1].item).label);
    if((yyvsp[0].item).lit == true){
        cout<<"Cannot apply increment/decrement operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item).lit = false;
    strcpy((yyval.item).type,t.c_str());
}    
}
#line 3471 "parser.tab.c"
    break;

  case 280:
#line 720 "parser.y"
                                        {
if(!first_parse){
    string t = expression_type(yylineno,(yyvsp[0].item).type,"",(yyvsp[-1].item).label);
    if((yyvsp[0].item).lit == true){
        cout<<"Cannot apply increment/decrement operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item).lit = false;
    strcpy((yyval.item).type,t.c_str());
}
}
#line 3487 "parser.tab.c"
    break;

  case 281:
#line 734 "parser.y"
                        {if(!first_parse){(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type); strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3493 "parser.tab.c"
    break;

  case 289:
#line 748 "parser.y"
                                    {if(!first_parse){(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3499 "parser.tab.c"
    break;

  case 290:
#line 749 "parser.y"
                                        {if(!first_parse){(yyval.item).lit = false; strcpy((yyval.item).type,find_in_scope((yyvsp[0].item).label).c_str());}}
#line 3505 "parser.tab.c"
    break;

  case 291:
#line 750 "parser.y"
                                        {if(!first_parse){(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3511 "parser.tab.c"
    break;

  case 292:
#line 751 "parser.y"
                                        {if(!first_parse){(yyval.item).lit = (yyvsp[0].item).lit; strcpy((yyval.item).type,(yyvsp[0].item).type);}}
#line 3517 "parser.tab.c"
    break;

  case 293:
#line 755 "parser.y"
                                        {
    if(!first_parse){
    string t = expression_type(yylineno,(yyvsp[-1].item).type,"",(yyvsp[0].item).label);
    if((yyvsp[-1].item).lit == true){
        cout<<"Cannot apply increment operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item).lit = false;
    strcpy((yyval.item).type,t.c_str());
}
}
#line 3533 "parser.tab.c"
    break;

  case 294:
#line 769 "parser.y"
                                {
    if(!first_parse){
    string t = expression_type(yylineno,(yyvsp[-1].item).type,"",(yyvsp[0].item).label);
    if((yyvsp[-1].item).lit == true){
        cout<<"Cannot apply increment operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item).lit = false;
    strcpy((yyval.item).type,t.c_str());
    }
}
#line 3549 "parser.tab.c"
    break;


#line 3553 "parser.tab.c"

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
#line 783 "parser.y"


int main(int argc, char** argv){
    string input;
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
    string remove = "rm -rf "+input.substr(0,input.size()-5)+" || true";
    string make = "mkdir "+input.substr(0,input.size()-5);
    out_file_name = input.substr(0,input.size()-5)+"/";
    const char* rm = remove.c_str();
    const char* mkdir = make.c_str();
    system(rm);
    system(mkdir);

    yyin = fopen(input.c_str(),"r");
    first_parse = true;
    init_symbol_table();
    yyparse();
    first_parse = false;
    yyin = fopen(input.c_str(),"r");
    yylineno = 1;
    second_init();
    inst_num = 0;
    yyparse();
    final_print();
    exit(0);
}
