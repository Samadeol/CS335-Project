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
#line 55 "parser.y"

    struct {
        char label[1000];
        char type[100];
        int dims;
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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5325

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  129
/* YYNRULES -- Number of rules.  */
#define YYNRULES  423
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  829

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
       0,    70,    70,    73,    74,    75,    76,    77,    78,    79,
      83,    87,    88,    92,    93,    94,    95,    99,   103,   107,
     111,   115,   116,   120,   121,   125,   126,   130,   131,   132,
     136,   137,   141,   142,   146,   150,   151,   155,   159,   160,
     164,   168,   169,   173,   174,   178,   179,   180,   184,   188,
     189,   193,   194,   198,   199,   200,   201,   205,   206,   210,
     211,   215,   216,   220,   221,   225,   226,   230,   231,   232,
     236,   237,   238,   242,   243,   247,   248,   252,   253,   254,
     255,   259,   260,   264,   268,   269,   270,   271,   275,   276,
     280,   281,   285,   286,   290,   291,   292,   293,   294,   295,
     299,   303,   304,   308,   312,   316,   317,   318,   319,   320,
     321,   322,   323,   327,   328,   329,   330,   334,   335,   336,
     337,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   356,   357,   361,   365,   366,   367,   368,
     372,   373,   374,   375,   379,   380,   384,   385,   389,   390,
     394,   395,   396,   397,   398,   402,   403,   404,   405,   406,
     407,   411,   412,   413,   414,   415,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   433,   437,   441,
     445,   449,   450,   451,   452,   453,   454,   455,   458,   462,
     466,   470,   471,   475,   479,   483,   484,   488,   489,   493,
     494,   495,   496,   497,   498,   499,   500,   504,   505,   506,
     507,   508,   509,   510,   511,   515,   516,   520,   521,   522,
     523,   527,   531,   532,   536,   540,   544,   545,   549,   553,
     554,   558,   559,   563,   567,   571,   572,   573,   577,   578,
     582,   586,   587,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   604,   605,   606,   607,   608,   609,   610,
     614,   615,   616,   617,   618,   622,   623,   624,   628,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   647,   648,   649,   653,   654,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   679,   680,   681,
     682,   683,   684,   685,   686,   687,   688,   692,   693,   694,
     695,   696,   697,   701,   702,   706,   707,   711,   712,   713,
     714,   715,   716,   720,   721,   725,   726,   727,   728,   729,
     730,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,   741,   742,   743,   744,   745,   746,   747,   748,   749,
     750,   751,   752,   753,   754,   755,   756,   757,   758,   759,
     760,   764,   765,   766,   770,   771,   775,   776,   780,   781,
     785,   786,   790,   791,   795,   796,   797,   801,   802,   803,
     804,   805,   809,   810,   811,   812,   816,   817,   818,   822,
     823,   824,   825,   829,   830,   831,   832,   833,   837,   841,
     845,   846,   847,   848,   852,   853,   854,   855,   859,   860,
     861,   862,   866,   870
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
  "ReceiverParameter", "FormalParameterList", "FormalParameter", "Throws",
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

#define YYPACT_NINF (-644)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-422)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     383,   -10,  -644,    95,   119,   140,  -644,  -644,  -644,    37,
    -644,   385,   385,  -644,  -644,  -644,  -644,  -644,   143,  -644,
    -644,   106,   292,  -644,  -644,   106,  -644,  -644,   140,    25,
     151,   235,  -644,   385,   143,  -644,   143,  -644,   134,  -644,
     268,   308,  -644,  -644,   349,   286,  -644,   371,  -644,   376,
     143,  -644,  -644,   374,  -644,  -644,  -644,   392,  -644,   415,
     418,   426,  -644,  -644,  -644,   235,  -644,   326,   415,   982,
    -644,  -644,  -644,  -644,   361,  -644,  -644,   434,   409,  -644,
     151,   307,  -644,   464,   243,    30,  2200,  -644,   374,  -644,
     426,   442,     5,  -644,  -644,   479,   509,   415,   418,   415,
     409,   409,  -644,  -644,  -644,  -644,  -644,  2107,  -644,   542,
    -644,  -644,   511,   521,  -644,   531,  -644,   496,   312,  -644,
     255,   559,     3,  -644,  4655,  -644,   294,  -644,   335,    10,
    -644,   536,   230,   551,  -644,  4655,  4719,    65,  -644,  4719,
    2927,  -644,  -644,  -644,   413,   552,  -644,  -644,  4655,   392,
     562,   589,   564,  4655,   562,   399,   591,  1756,  -644,  2288,
    -644,  -644,  -644,  -644,  -644,  -644,   541,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,   489,   568,  -644,  -644,    39,  -644,  1137,  1160,    48,
    -644,  -644,  -644,  -644,  -644,   423,   503,   514,   509,  2991,
     341,   562,  -644,  -644,   550,  -644,    15,  -644,   409,  -644,
    -644,   154,  -644,     6,   577,  2653,   270,  2376,  2464,   140,
     607,  -644,  -644,  -644,   587,  -644,   153,   419,  -644,   590,
     209,   273,  -644,  4719,   125,  2799,  4719,  4719,  4719,   399,
     591,  -644,  -644,    17,  -644,  -644,  -644,  -644,    16,   624,
     622,   567,   628,   276,   467,   440,   520,   -31,  -644,  -644,
    -644,  -644,  -644,   423,  -644,  -644,   561,  -644,   563,  -644,
     562,   562,  4778,  1897,  3055,  4655,   570,   596,  4655,   422,
    -644,  -644,  -644,   598,   598,   411,   140,  -644,  -644,   574,
     309,   363,  4655,   575,   505,   446,    55,   634,  4655,   580,
      80,   635,   425,   481,  4655,  4655,    -1,  4655,  4655,  4655,
    3119,  4655,  4655,  4655,  4655,  4655,  4655,  4655,   436,  -644,
    -644,  -644,   483,   437,  4655,  4655,  4655,  4655,  4655,  4655,
    4655,  4655,  4655,  4655,  4655,  4655,  4655,  4655,  4655,  4655,
    4655,  4655,  4655,  4655,  4655,  4655,  4655,  4655,  4655,  -644,
    -644,  2724,  -644,  -644,  -644,  2991,  -644,  -644,  -644,  -644,
      85,   426,  -644,   517,  -644,  -644,  3183,  3247,   112,   608,
     610,  -644,  2552,  -644,  -644,   140,  -644,   426,   619,   576,
     509,  -644,  -644,   252,   132,  -644,  -644,  3311,   653,   242,
    1702,   135,   588,  -644,  -644,  -644,  4655,  -644,  4719,  4655,
    4719,  4719,  4719,  4719,  4719,  4719,  4719,  4719,  4719,  4719,
    4719,  4719,  4719,  4719,  4719,  4719,  4719,  4719,  -644,  -644,
     103,   115,    12,  3375,   562,   562,  -644,   592,   646,   647,
    -644,  -644,   145,  -644,   595,  -644,   242,  3119,   485,   616,
     485,   616,  3439,   636,   412,  -644,   621,   631,  -644,   632,
     600,  -644,   627,   392,   526,  -644,  -644,  -644,   606,  -644,
    -644,  -644,   663,  -644,  -644,   310,  -644,  -644,  -644,   633,
     510,   524,  -644,   642,  -644,  -644,  -644,  -644,   609,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,   669,   645,   656,  -644,
    -644,   658,   630,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,   629,  -644,  -644,
      44,  -644,   312,   312,   154,  -644,   638,   152,   639,   158,
     375,   -19,  3503,  3567,  -644,  -644,   509,  -644,  -644,   426,
    -644,  -644,  -644,  3311,  4719,   319,   342,   692,  5211,   640,
     624,   684,   622,   567,   628,   276,   467,   467,   440,   440,
     440,   440,   520,   520,   520,   -31,   -31,  -644,  -644,  -644,
    -644,  -644,   562,   562,  4892,   643,   688,   688,  3631,  4655,
    5233,  4655,  -644,  2640,   651,  -644,  3119,   509,  -644,   509,
     106,   166,   673,  3695,   694,  3759,   681,  -644,   392,   273,
    -644,   392,  -644,  1897,  -644,  -644,  -644,  3823,   411,   512,
     515,   682,  -644,  -644,  3887,   687,  -644,  -644,  -644,  2863,
    -644,  -644,  -644,  -644,  -644,   671,  -644,   672,  3951,   701,
     675,   169,   677,   185,  -644,  -644,  -644,  4719,  5211,  3311,
    -644,  -644,  4655,   688,   688,  1897,   680,   647,  4914,  4970,
     679,   685,  -644,  -644,   709,   239,   716,   717,  -644,   744,
     746,  -644,  -644,  -644,  -644,  -644,  -644,  -644,   697,  -644,
     106,  4015,   106,   188,   726,  -644,   191,  4079,  -644,   703,
    -644,  -644,  -644,   197,   729,   738,  -644,   739,  4143,  -644,
     221,  4207,  -644,  -644,  -644,  -644,   705,   225,  4271,  -644,
     708,  -644,   714,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    1897,  1897,   719,  1897,   722,  4992,  1897,  4836,  2640,  4655,
    4655,  1897,  -644,  -644,   106,   226,  -644,   106,  4335,  -644,
    -644,   233,   392,  -644,  4399,   742,  -644,  -644,   234,  -644,
    -644,   241,  -644,   721,   723,   246,  -644,  -644,  -644,  -644,
    1897,  -644,  1897,  1897,   724,  -644,  4463,   725,   781,  -644,
     730,   731,  -644,  -644,   106,  -644,   106,   247,  -644,  -644,
    -644,   249,  4527,  -644,  -644,  -644,  -644,   727,  -644,  -644,
    -644,  1897,  5048,   732,  4591,  4655,  2640,  2640,  -644,  -644,
     106,  -644,  -644,   264,  -644,  -644,  2640,   733,  5070,  5126,
     734,   743,   782,  -644,  -644,  -644,  -644,  2640,  2640,   745,
    2640,   748,  5148,  2640,  2640,  -644,  -644,  2640,  -644,  2640,
    2640,   749,  -644,  -644,  -644,  -644,  -644,  2640,  -644
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,    55,     0,     0,     0,    54,    53,    56,     0,
       2,     6,     4,    12,    13,    14,    15,    16,     3,    22,
      23,     0,     0,    52,    24,     0,    49,    36,     0,     0,
     136,    10,     1,     8,     7,    11,     5,    21,     0,    48,
       0,     0,    51,   135,     0,     0,    17,     0,   137,     0,
       9,    28,    31,    36,    30,    63,    72,    56,    29,     0,
       0,    25,    27,    26,    32,    34,    33,     0,     0,     0,
      66,    67,    70,    71,     0,    68,    69,     0,   109,    50,
     138,     0,    35,     0,     0,     0,     0,   103,     0,    84,
      88,    79,     0,    76,    85,     0,    37,     0,     0,     0,
     111,   105,    64,    65,   102,    83,   101,     0,   104,     0,
     110,   139,    35,     0,    18,     0,    57,     0,     0,   113,
       0,     0,     0,    93,     0,   255,     0,   256,     0,     0,
     254,     0,    36,     0,   253,     0,     0,     0,   259,     0,
       0,   146,   177,   257,     0,     0,   258,   245,     0,     0,
       0,     0,     0,     0,     0,    25,    26,   419,   166,     0,
     149,   154,   155,   167,   156,   168,     0,   157,   158,   169,
     159,   160,   195,   196,   170,   176,   171,   172,   174,   173,
     175,   418,   241,   243,   244,   248,   265,   249,   250,   251,
     252,   242,   181,   182,   183,     0,   184,   185,    89,     0,
      80,     0,    73,    39,     0,    86,     0,    87,   107,   112,
     106,     0,   117,     0,   245,    34,     0,     0,     0,     0,
     100,    19,    20,    60,     0,    58,     0,    94,    90,     0,
       0,     0,   114,     0,    36,     0,     0,     0,     0,     0,
       0,   248,   251,     0,   325,   326,   334,   333,   371,   374,
     376,   378,   380,   382,   384,   387,   392,   396,   399,   403,
     404,   407,   413,   410,   420,   421,     0,   226,     0,   229,
       0,     0,     0,     0,     0,     0,     0,    36,     0,   419,
     249,   250,   409,     0,     0,    34,     0,   408,   231,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   147,
     148,   180,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   423,
     422,     0,    77,    82,    81,     0,    75,    38,    74,   108,
      47,     0,    43,     0,    42,    44,     0,     0,     0,     0,
       0,   119,     0,   118,    62,     0,    59,    95,     0,     0,
      96,    98,   115,     0,     0,    92,   412,     0,     0,    25,
     419,     0,     0,   406,   405,   411,     0,   191,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   227,   230,
       0,     0,     0,     0,     0,     0,   223,     0,   216,   215,
     178,   289,     0,   134,     0,   247,     0,     0,     0,   317,
       0,   319,     0,     0,     0,   232,   285,     0,   313,     0,
       0,   233,     0,     0,   235,   239,   151,   264,     0,   228,
     150,   262,     0,   309,   311,     0,   344,   346,   260,    35,
       0,     0,   246,     0,   266,   335,   342,   343,     0,   341,
     340,   338,   339,   345,   337,   336,     0,   284,     0,   267,
     307,     0,     0,   356,   358,   347,   354,   355,   353,   352,
     350,   351,   357,   349,   348,   368,   370,   359,   366,   367,
     365,   364,   362,   363,   369,   361,   360,     0,   140,   145,
       0,    78,     0,     0,     0,    40,     0,     0,     0,     0,
       0,     0,     0,     0,   120,    61,    97,    99,    91,    94,
     116,   329,   332,     0,     0,    37,     0,     0,   247,     0,
     375,     0,   377,   379,   381,   383,   385,   386,   389,   391,
     388,   390,   394,   395,   393,   398,   397,   402,   401,   400,
     153,   152,     0,     0,     0,     0,   219,   217,     0,     0,
       0,     0,   290,     0,     0,   321,     0,   318,   322,   320,
     268,     0,     0,     0,     0,     0,     0,   314,     0,     0,
     236,     0,   238,     0,   263,   310,   312,     0,     0,     0,
       0,     0,   287,   261,     0,     0,   308,   288,   141,     0,
     142,    45,    46,    41,   125,     0,   121,     0,     0,     0,
       0,     0,     0,     0,   328,   331,   414,     0,     0,     0,
     416,   192,     0,   220,   218,     0,     0,   221,     0,     0,
       0,     0,   222,   133,     0,    36,     0,     0,   188,     0,
     155,   162,   163,   164,   165,   197,   198,   324,     0,   269,
     270,     0,   276,     0,     0,   299,     0,     0,   234,     0,
     237,   193,   291,     0,   286,     0,   315,     0,     0,   295,
       0,     0,   143,   144,   126,   122,     0,     0,     0,   127,
       0,   123,     0,   415,   417,   327,   330,   373,   372,   199,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   323,   271,   272,     0,   277,   278,     0,   300,
     301,     0,     0,   292,     0,     0,   316,   293,     0,   296,
     297,     0,   129,     0,     0,     0,   128,   124,   200,   201,
       0,   203,     0,     0,     0,   224,     0,     0,   216,   179,
       0,     0,   189,   273,   274,   279,   280,     0,   302,   240,
     303,     0,     0,   294,   298,   130,   131,     0,   202,   204,
     205,     0,     0,     0,     0,     0,     0,     0,   275,   281,
     282,   304,   305,     0,   132,   206,     0,     0,     0,     0,
       0,     0,     0,   194,   283,   306,   207,     0,     0,     0,
       0,     0,     0,     0,     0,   208,   209,     0,   211,     0,
       0,     0,   225,   190,   210,   212,   213,     0,   214
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -644,  -644,  -644,  -644,   799,    19,  -644,  -644,  -644,  -644,
     124,   390,    -2,     1,  -644,    57,  -126,  1635,  -644,    27,
      -7,  -644,   287,  -644,  -644,  -644,   189,   213,   320,  -644,
    -644,   -25,  -644,   750,  -644,  -644,   -90,   613,  -341,  -644,
    -644,   282,  -644,  -195,  -227,   -83,  -644,  -644,  -644,  -644,
      38,  -644,  -644,  1393,  -644,  -644,    75,  -644,   -55,   -94,
    -147,   566,  -315,  -200,  -644,  -644,  -644,  -644,  -271,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,    99,
     101,  -643,  -269,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,   368,  -644,  -644,  -644,  -644,   -77,  -290,
    1245,  1281,   -27,  -644,  -644,   543,  1278,   183,  -644,   113,
     190,  -644,   438,   441,   439,   433,   443,   170,   182,   194,
     179,   -89,   164,   290,  -541,  -644,   435,   625,   747
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   154,   239,    62,   240,    64,   157,    66,   318,
     286,   363,   364,   365,    20,    21,    22,    23,    68,   117,
     220,    39,    69,    70,    71,    72,    92,    93,   352,    73,
      74,    89,   121,   122,   123,   110,   105,    75,    76,    77,
      90,   108,   217,   432,    24,    25,   353,   520,   158,   159,
     160,   161,   659,   162,   163,   164,   661,   165,   166,   167,
     168,   662,   169,   170,   663,   171,   664,   172,   665,   427,
     428,   646,   647,   173,   666,   174,   175,   176,   177,   178,
     179,   180,   454,   455,   181,   182,   183,   184,   241,   186,
     187,   188,   242,   190,   191,   439,   433,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,   426,    87,   429,   385,   712,   714,   640,   206,   185,
     519,   284,   320,   218,   521,   468,   474,   209,   210,   106,
     611,   231,    51,   201,    51,   398,   290,   291,   415,    26,
     185,    35,   489,   201,   396,   384,    60,    32,   469,    61,
     391,    52,    51,    52,   416,    45,   417,   282,   211,    27,
     287,    27,    35,   366,    54,   470,    54,  -187,   118,   189,
     296,    52,   619,   629,   300,    98,  -186,    60,    61,    27,
      61,   320,   754,   201,    54,   232,    78,    51,   474,   202,
     189,   471,   185,   120,   472,   399,    61,   155,    96,   358,
      58,   397,    58,   374,   294,    63,    52,   704,   201,    46,
     216,   270,   119,   572,    27,   100,   101,    78,   155,    54,
      58,  -187,   522,  -187,   211,   620,   226,   198,   200,    61,
    -186,   201,  -186,   372,    63,   359,    63,   271,   468,   456,
      61,   387,   189,   201,    27,    34,    36,   208,   283,   797,
     185,   185,    63,   156,   386,    58,    51,   393,   394,   395,
     231,   469,    38,   231,   460,   809,   811,    50,    30,     1,
     155,   211,     2,   581,   156,    52,    51,   523,   470,   821,
     581,     2,   274,    53,    28,    63,   581,   570,    54,    27,
     420,   421,   302,    47,   581,    52,    63,   581,     4,   571,
     189,   189,   377,    27,   530,   185,   185,   472,    54,   192,
      47,     6,     7,   581,   540,    55,   581,   547,    56,   581,
       6,     7,   361,    57,    58,   581,   156,   582,   155,   155,
     192,    51,     8,   360,   625,   320,    59,    67,   383,   383,
     627,    61,    61,   383,    58,    42,   389,   118,   670,   581,
      52,   700,   378,   581,   581,   189,   189,   273,    27,   535,
     193,   581,   581,    54,   380,    49,   718,   702,    67,   581,
     727,   115,   301,   729,   581,   581,   302,   581,   362,   733,
     425,   193,   192,   155,   156,   156,   116,   274,   693,   436,
      42,   382,   581,   447,   449,    51,   274,    63,    63,    58,
      95,   539,   156,   739,   227,   185,   465,   743,   764,   473,
     404,   118,   405,   426,    52,   768,   773,    79,    40,   652,
     438,   440,    27,   774,   544,   488,   491,    54,   777,   790,
       2,   791,   200,   193,    51,    82,   567,   568,   569,   156,
     192,   192,   541,   266,   576,   577,   805,    41,    51,   462,
     228,   229,    94,    52,   229,   189,   112,    80,   446,   605,
      48,    27,   369,    58,     2,   370,    54,    52,   211,     6,
       7,   531,   486,    83,   355,    53,   606,   204,   267,    81,
      54,     8,   679,   155,   268,    47,   194,   426,   426,   205,
     207,   193,   193,   660,   113,   192,   192,    99,    96,   204,
     204,   637,    58,     6,     7,   609,   610,   194,   600,     1,
     111,     1,   448,   759,   536,     8,    58,    86,    37,   269,
      84,     2,   211,     2,   638,    82,   545,   546,    97,   301,
     573,    85,   628,    61,    37,     3,    37,     3,     4,   156,
       4,    49,    49,   290,   291,   104,   193,   193,    86,   379,
      37,     5,   306,   -34,   426,   462,   426,    95,   429,   194,
       6,     7,     6,     7,    88,   636,   486,    91,   442,   593,
     443,   594,     8,   545,     8,   199,   587,    95,   589,   199,
     310,   802,   803,   204,    95,   410,   490,   411,   349,    63,
     107,   806,   643,   644,   204,   192,   211,   350,   634,    85,
      95,   412,   815,   816,    95,   818,   109,   185,   822,   823,
     406,   407,   824,   185,   825,   826,   185,   194,   194,   322,
     323,   426,   828,   585,   224,   588,   408,   409,   660,   452,
     463,   195,   487,   361,   361,   361,   185,   426,   426,   225,
     211,   351,   211,   204,   453,   524,   193,   464,   114,   470,
     452,   426,   195,   678,   609,   610,   680,   189,   703,    27,
     525,   684,   203,   189,   686,   601,   189,   204,  -420,   211,
     219,   211,   194,   194,   211,   669,   380,  -420,   185,  -421,
     223,   185,   185,   413,   556,   557,   189,   230,  -421,   621,
     622,   362,   414,   272,   705,   221,   660,   660,   558,   559,
     560,   561,   565,   566,   195,   222,   660,   383,   275,   292,
      61,   295,   685,   687,   562,   563,   564,   660,   660,   297,
     660,   298,   303,   660,   660,   321,   324,   660,   189,   660,
     660,   189,   189,   357,   367,   375,   376,   660,   400,   381,
     401,   403,   402,   185,   185,   418,   185,   419,   185,   185,
     185,   185,   435,   274,   185,   723,   437,   726,   445,   451,
     457,   461,   195,   195,   459,   532,    63,   533,   537,   543,
     548,   538,   194,   579,   586,   580,   578,   583,   595,   592,
     596,   597,   598,   185,   599,   185,   185,   769,   603,   604,
     607,   611,   612,   189,   189,   613,   189,   192,   189,   189,
     189,   189,   614,   192,   189,   615,   192,   616,   639,   763,
     618,   642,   765,   617,   185,   185,   201,   195,   195,   185,
     185,   196,   624,   626,   641,   425,   192,   648,   155,   185,
     671,   185,   185,   189,   667,   189,   189,   674,   677,   688,
     185,   185,   196,   185,   691,   185,   185,   185,   193,   788,
     185,   789,   185,   185,   193,   694,   695,   193,   698,   699,
     185,   701,   710,   715,   189,   189,   717,   716,   192,   189,
     189,   192,   192,   719,   720,   804,   721,   193,  -161,   189,
     722,   189,   189,   728,   156,   732,   734,   735,   736,   742,
     189,   189,   746,   189,   196,   189,   189,   189,   747,   772,
     189,   750,   189,   189,   752,   775,   781,   776,   785,   784,
     189,   794,   786,   787,   814,   807,   798,   195,   812,   193,
      33,   623,   193,   193,   356,   813,   757,   817,   758,   103,
     819,   827,   602,   192,   192,   707,   192,   441,   192,   192,
     192,   192,   708,   197,   192,   554,   550,     0,     0,   430,
     553,   552,   196,   196,     0,     0,   555,     0,     0,     0,
       0,     0,     0,     0,   197,     0,     0,     0,     0,     0,
       0,     0,     0,   192,   194,   192,   192,     0,     0,     0,
     194,     0,     0,   194,   193,   193,     0,   193,     0,   193,
     193,   193,   193,     0,     0,   193,     0,     0,     0,     0,
       0,     0,     0,   194,   192,   192,     0,   196,   196,   192,
     192,     0,     0,     0,     0,     0,   197,     0,     0,   192,
       0,   192,   192,     0,   193,     0,   193,   193,     0,     0,
     192,   192,     0,   192,     0,   192,   192,   192,     0,     0,
     192,     0,   192,   192,     0,   194,     0,     0,   194,   194,
     192,     0,     0,     0,     0,   193,   193,     0,     0,     0,
     193,   193,     0,     0,     0,     0,     0,     0,     0,     0,
     193,     0,   193,   193,   197,   197,     0,     0,     0,     0,
       0,   193,   193,     0,   193,     0,   193,   193,   193,     0,
       0,   193,     0,   193,   193,     0,     0,     0,     0,     0,
       0,   193,     0,     0,    51,     0,     0,   196,     0,     0,
     194,   194,     0,   194,     0,   194,   194,   194,   194,   195,
       2,   194,     0,    52,     0,   195,     0,     0,   195,   197,
     197,    53,     0,     0,     0,     0,    54,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,   195,     0,
     194,     0,   194,   194,     0,     0,     0,     0,     0,     6,
       7,     0,     0,   102,     0,     0,    56,     0,     0,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       0,   194,   194,     0,    59,     0,   194,   194,     0,     0,
     195,     0,     0,   195,   195,     0,   194,     0,   194,   194,
       0,     0,     0,     0,     0,     0,     0,   194,   194,     0,
     194,     0,   194,   194,   194,     0,     0,   194,     0,   194,
     194,     0,     0,     0,     0,     0,     0,   194,     0,   197,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   325,     0,     0,   195,   195,   326,   195,   658,
     195,   195,   195,   195,     0,     0,   195,     0,     0,     0,
     327,     0,     0,     0,     0,   337,     0,     0,     0,   681,
     338,     0,     0,   328,     0,   329,     0,     0,     0,     0,
       0,     0,     0,   339,     0,   195,     0,   195,   195,   330,
       0,   331,     0,     0,     0,     0,   340,   332,   341,   196,
     333,     0,     0,   334,     0,   196,     0,     0,   196,     0,
       0,   709,   342,   335,   343,   336,   195,   195,     0,     0,
     344,   195,   195,   345,     0,     0,   346,     0,   196,     0,
       0,   195,     0,   195,   195,     0,   347,     0,   348,     0,
       0,     0,   195,   195,     0,   195,     0,   195,   195,   195,
       0,     0,   195,     0,   195,   195,     0,     0,     0,     0,
       0,     0,   195,     0,     0,     0,     0,     0,     0,     0,
     196,     0,     0,   196,   196,     0,   748,   749,     0,   751,
       0,     0,   755,     0,   430,     0,     0,   762,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   778,     0,   779,   780,
       0,   197,     0,     0,     0,     0,     0,   197,     0,     0,
     197,     0,     0,     0,     0,   196,   196,     0,   196,     0,
     196,   196,   196,   196,     0,     0,   196,   795,     0,     0,
     197,     0,   658,   681,     0,     0,     0,     0,     0,     0,
       0,     0,   709,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   748,   749,   196,   751,   196,   196,   755,
     762,   280,     0,   778,   280,   779,   780,     0,     0,     0,
       0,     0,   197,   795,     0,   197,   197,     0,     0,     0,
       0,     0,   243,     0,     0,     0,   196,   196,     0,     0,
       0,   196,   196,   276,     0,     0,     0,   281,   289,     0,
     281,   196,     0,   196,   196,     0,   293,     0,     0,     0,
       0,   299,   196,   196,     0,   196,     0,   196,   196,   196,
       0,     0,   196,     0,   196,   196,     0,     0,     0,     0,
       0,     0,   196,     0,     0,     0,     0,   197,   197,     0,
     197,     0,   197,   197,   197,   197,     0,     0,   197,     0,
       0,     0,     0,     0,     0,     0,     0,   354,   280,     0,
       0,   280,   280,   280,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,     0,   197,
     197,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   392,   281,     0,     0,   281,   281,   281,
       0,     0,     0,     0,     0,     0,     0,     0,   197,   197,
       0,     0,     0,   197,   197,     0,     0,     0,     0,     0,
       0,     0,     0,   197,     0,   197,   197,     0,     0,     0,
       0,     0,     0,   434,   197,   197,   392,   197,     0,   197,
     197,   197,     0,     0,   197,     0,   197,   197,     0,     0,
     450,     0,     0,     0,   197,     0,   458,     0,     0,     0,
       0,     0,   466,   467,     0,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,     0,     0,     0,     0,
       0,     0,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,     0,     0,   354,
       0,     0,     0,   354,     0,     0,     0,     0,    29,     0,
      31,     0,     0,   280,     0,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,    44,     0,   542,     0,     0,     0,     0,
       0,     0,     0,    65,   549,     0,     0,   551,     0,   281,
       0,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,     0,
       0,   575,    65,     0,    65,     0,     0,   304,     0,     0,
       0,     0,   305,     0,     0,   584,     0,     0,     0,     0,
      65,     0,   306,   -34,     0,   307,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   308,     0,
     309,   -34,   215,     0,     0,     0,     0,     0,     0,     0,
     310,     0,     0,    65,   311,     0,   312,     0,     0,   527,
     529,   304,   313,     0,    65,   314,   305,     0,   315,     0,
       0,   279,   285,     0,   279,     0,   306,   -34,   316,   307,
     317,     0,     0,     0,     0,     0,     0,     0,     0,   280,
       0,   -34,   308,   280,   309,   -34,     0,     0,     0,     0,
       0,     0,     0,     0,   310,     0,     0,     0,   311,     0,
     312,     0,     0,     0,     0,     0,   313,     0,     0,   314,
       0,   635,   315,     0,     0,   281,     0,     0,     0,   281,
       0,     0,   316,     0,   317,   591,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,     0,     0,     0,
       0,     0,     0,     0,    65,     0,   650,   651,     0,   653,
       0,     0,     0,     0,   668,    65,    65,     0,   279,     0,
     390,   279,   279,   279,     0,     0,     0,     0,     0,     0,
       0,     0,   280,   280,     0,     0,     0,   280,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,     0,     0,
       0,     0,     0,     0,   124,     0,     0,     0,   125,    51,
     126,     0,   127,   390,     0,     0,   128,   706,   281,   281,
       0,   444,     0,   281,     0,   631,   633,   130,    52,   131,
       0,     0,     0,     0,     0,     0,   132,   133,     0,     0,
     134,    54,     0,    86,   135,     0,     0,     0,     0,     0,
       0,     0,   136,   137,   138,     0,     0,     0,     0,     0,
       0,   139,     0,     0,     0,     0,     0,   140,     0,     0,
       0,   142,     0,     0,     0,     0,     0,    58,   143,   144,
     145,   146,   147,   148,     0,     0,   673,   149,   676,   151,
     152,   153,     0,     0,     0,     0,     0,   760,   761,     0,
     683,     0,     0,     0,     0,     0,     0,   690,     0,     0,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   697,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   279,   783,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,     0,     0,     0,     0,    65,     0,     0,
       0,     0,   800,   801,   725,     0,     0,     0,     0,     0,
     731,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   738,     0,     0,   741,     0,     0,     0,     0,     0,
       0,   745,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   608,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,     0,     0,   125,    51,
     126,   767,   127,     0,     0,     0,   128,   771,     0,     0,
       0,     0,     0,     0,     0,   129,     0,   130,    52,   131,
       0,     0,     0,     0,     0,     0,   132,   133,     0,     0,
     134,    54,     0,    86,   135,     0,   211,    65,    65,    65,
       0,     0,   136,   137,   138,   793,     0,     0,     0,     0,
       0,   139,     0,     0,     0,     0,     0,   140,   212,   279,
       0,   142,     0,   279,     0,     0,     0,    58,   143,   213,
     145,   146,   214,   148,     0,     0,     0,   149,   150,   151,
     152,   153,     0,     0,     0,     0,     0,   124,     0,     0,
       0,   125,    51,   126,     0,   127,     0,     0,     0,   128,
       0,     0,     0,     0,     0,     0,     0,     0,   129,     0,
     130,    52,   131,     0,    65,     0,     0,     0,     0,   132,
     133,     0,     0,   134,    54,     0,    86,   135,     0,     0,
       0,     0,     0,     0,     0,   136,   137,   138,     0,     0,
       0,     0,     0,     0,   139,     0,     0,     0,     0,     0,
     140,   141,   279,   279,   142,     0,     0,   279,     0,     0,
      58,   143,   144,   145,   146,   147,   148,     0,     0,     0,
     149,   150,   151,   152,   153,   124,     0,     0,     0,   125,
      51,   126,     0,   127,     0,     0,     0,   128,     0,     0,
       0,     0,     0,     0,     0,     0,   129,     0,   130,    52,
     131,     0,     0,     0,     0,     0,     0,   132,   133,     0,
       0,   134,    54,     0,    86,   135,     0,     0,     0,     0,
       0,     0,     0,   136,   137,   138,     0,     0,     0,     0,
       0,     0,   139,     0,     0,     0,     0,     0,   140,   319,
       0,     0,   142,     0,     0,     0,     0,     0,    58,   143,
     144,   145,   146,   147,   148,     0,     0,     0,   149,   150,
     151,   152,   153,   124,     0,     0,     0,   125,    51,   126,
       0,   127,     0,     0,     0,   128,     0,     0,     0,     0,
       0,     0,     0,     0,   129,     0,   130,    52,   131,     0,
       0,     0,     0,     0,     0,   132,   133,     0,     0,   134,
      54,     0,    86,   135,     0,     0,     0,     0,     0,     0,
       0,   136,   137,   138,     0,     0,     0,     0,     0,     0,
     139,     0,     0,     0,     0,     0,   140,   371,     0,     0,
     142,     0,     0,     0,     0,     0,    58,   143,   144,   145,
     146,   147,   148,     0,     0,     0,   149,   150,   151,   152,
     153,   124,     0,     0,     0,   125,    51,   126,     0,   127,
       0,     0,     0,   128,     0,     0,     0,     0,     0,     0,
       0,     0,   129,     0,   130,    52,   131,     0,     0,     0,
       0,     0,     0,   132,   133,     0,     0,   134,    54,     0,
      86,   135,     0,     0,     0,     0,     0,     0,     0,   136,
     137,   138,     0,     0,     0,     0,     0,     0,   139,     0,
       0,     0,     0,     0,   140,   373,     0,     0,   142,     0,
       0,     0,     0,     0,    58,   143,   144,   145,   146,   147,
     148,     0,     0,     0,   149,   150,   151,   152,   153,   124,
       0,     0,     0,   125,    51,   126,     0,   127,     0,     0,
       0,   128,     0,     0,     0,     0,     0,     0,     0,     0,
     129,     0,   130,    52,   131,     0,     0,     0,     0,     0,
       0,   132,   133,     0,     0,   134,    54,     0,    86,   135,
       0,     0,     0,     0,     0,     0,     0,   136,   137,   138,
       0,     0,     0,     0,     0,     0,   139,     0,     0,     0,
       0,     0,   140,   534,     0,     0,   142,     0,     0,     0,
       0,     0,    58,   143,   144,   145,   146,   147,   148,     0,
       0,     0,   149,   150,   151,   152,   153,   124,     0,     0,
       0,   125,    51,   126,     0,   127,     0,     0,   304,   128,
       0,     0,     0,   305,     0,     0,     0,     0,     0,     0,
     130,    52,   654,   368,     0,     0,   307,     0,     0,   655,
     656,     0,     0,   134,    54,     0,    86,   135,     0,   308,
       0,   309,     0,     0,     0,   136,   137,   138,     0,     0,
       0,   310,     0,     0,   139,   311,     0,   312,  -419,     0,
     140,     0,     0,   313,   142,     0,   314,  -419,     0,   315,
      58,   143,   144,   145,   146,   147,   148,     0,     0,   316,
     149,   317,   151,   657,   153,   125,    51,     0,     0,   127,
       0,     0,   517,     0,     0,     0,     0,     0,     0,   233,
       0,     0,     0,     0,   130,    52,     0,     0,     0,     0,
       0,     0,     0,   234,     0,     0,     0,   134,    54,     0,
     351,   235,     0,     0,     0,     0,     0,   236,     0,   136,
     137,   138,     0,     0,     0,     0,   237,     0,   139,     0,
       0,     0,     0,     0,     0,   518,     0,     0,     0,     0,
       0,     0,     0,     0,    58,   143,   144,     0,   146,   147,
     125,    51,   238,     0,   127,     0,   151,     0,     0,     0,
       0,     0,     0,     0,   233,     0,     0,   118,     0,   130,
      52,     0,     0,     0,     0,     0,     0,     0,   234,     0,
       0,     0,   134,    54,     0,     0,   235,     0,     0,     0,
       0,     0,   236,     0,   136,   137,   138,     0,     0,     0,
       0,   237,     0,   139,     0,     0,     0,     0,     0,     0,
       0,   388,     0,     0,   125,    51,     0,     0,   127,    58,
     143,   144,     0,   146,   147,     0,     0,   238,   233,     0,
       0,   151,     0,   130,    52,     0,     0,     0,     0,     0,
       0,     0,   234,     0,     0,     0,   134,    54,     0,   351,
     235,     0,     0,     0,     0,     0,   236,     0,   136,   137,
     138,     0,     0,     0,     0,   237,     0,   139,     0,     0,
       0,     0,     0,     0,   692,     0,     0,     0,   125,    51,
       0,     0,   127,    58,   143,   144,     0,   146,   147,     0,
       0,   238,   233,     0,     0,   151,     0,   130,    52,     0,
       0,     0,     0,     0,     0,     0,   234,     0,     0,     0,
     134,    54,     0,     0,   235,     0,     0,     0,     0,     0,
     236,     0,   136,   137,   138,     0,     0,     0,     0,   237,
       0,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   288,   125,    51,     0,     0,   127,    58,   143,   144,
       0,   146,   147,     0,     0,   238,   233,     0,     0,   151,
       0,   130,    52,     0,     0,     0,     0,     0,     0,     0,
     234,     0,     0,     0,   134,    54,     0,   351,   235,     0,
       0,     0,     0,     0,   236,     0,   136,   137,   138,     0,
       0,     0,     0,   237,     0,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,    51,     0,     0,
     127,    58,   143,   144,     0,   146,   147,     0,     0,   238,
     233,     0,     0,   151,     0,   130,    52,     0,     0,     0,
       0,     0,     0,     0,   234,     0,     0,     0,   134,    54,
       0,     0,   235,     0,     0,     0,     0,     0,   236,     0,
     136,   137,   138,     0,     0,     0,     0,   237,     0,   139,
       0,     0,     0,     0,     0,     0,     0,   431,     0,     0,
     125,    51,     0,     0,   127,    58,   143,   144,     0,   146,
     147,     0,     0,   238,   233,     0,     0,   151,     0,   130,
      52,     0,     0,     0,     0,     0,     0,     0,   234,     0,
       0,     0,   134,    54,     0,     0,   235,     0,     0,     0,
       0,     0,   236,     0,   136,   137,   138,     0,     0,     0,
       0,   237,     0,   139,     0,     0,     0,     0,     0,     0,
       0,     0,   203,     0,   125,    51,     0,     0,   127,    58,
     143,   144,     0,   146,   147,     0,     0,   238,   233,     0,
       0,   151,     0,   130,    52,     0,     0,     0,     0,     0,
       0,     0,   234,     0,     0,     0,   134,    54,     0,     0,
     235,     0,     0,     0,     0,     0,   236,     0,   136,   137,
     138,     0,     0,     0,     0,   237,     0,   139,     0,     0,
       0,     0,     0,     0,     0,   526,     0,     0,   125,    51,
       0,     0,   127,    58,   143,   144,     0,   146,   147,     0,
       0,   238,   233,     0,     0,   151,     0,   130,    52,     0,
       0,     0,     0,     0,     0,     0,   234,     0,     0,     0,
     134,    54,     0,     0,   235,     0,     0,     0,     0,     0,
     236,     0,   136,   137,   138,     0,     0,     0,     0,   237,
       0,   139,     0,     0,     0,     0,     0,     0,     0,   528,
       0,     0,   125,    51,     0,     0,   127,    58,   143,   144,
       0,   146,   147,     0,     0,   238,   233,     0,     0,   151,
       0,   130,    52,     0,     0,     0,     0,     0,     0,     0,
     234,     0,     0,     0,   134,    54,     0,    86,   235,     0,
       0,     0,     0,     0,   236,     0,   136,   137,   138,     0,
       0,     0,     0,   237,     0,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,    51,     0,     0,
     127,    58,   143,   144,     0,   146,   147,     0,     0,   238,
     233,     0,     0,   151,     0,   130,    52,     0,     0,     0,
       0,     0,     0,     0,   234,     0,     0,     0,   134,    54,
       0,     0,   235,     0,     0,     0,     0,     0,   236,     0,
     136,   137,   138,     0,     0,     0,     0,   237,     0,   139,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   574,
     125,    51,     0,     0,   127,    58,   143,   144,     0,   146,
     147,     0,     0,   238,   233,     0,     0,   151,     0,   130,
      52,     0,     0,     0,     0,     0,     0,     0,   234,     0,
       0,     0,   134,    54,     0,     0,   235,     0,     0,     0,
       0,     0,   236,     0,   136,   137,   138,     0,     0,     0,
       0,   237,     0,   139,     0,     0,     0,     0,     0,     0,
       0,   590,     0,     0,   125,    51,     0,     0,   127,    58,
     143,   144,     0,   146,   147,     0,     0,   238,   233,     0,
       0,   151,     0,   130,    52,     0,     0,     0,     0,     0,
       0,     0,   234,     0,     0,     0,   134,    54,     0,     0,
     235,     0,     0,     0,     0,     0,   236,     0,   136,   137,
     138,     0,     0,     0,     0,   237,     0,   139,     0,     0,
       0,     0,     0,     0,     0,   630,     0,     0,   125,    51,
       0,     0,   127,    58,   143,   144,     0,   146,   147,     0,
       0,   238,   233,     0,     0,   151,     0,   130,    52,     0,
       0,     0,     0,     0,     0,     0,   234,     0,     0,     0,
     134,    54,     0,     0,   235,     0,     0,     0,     0,     0,
     236,     0,   136,   137,   138,     0,     0,     0,     0,   237,
       0,   139,     0,     0,     0,     0,     0,     0,     0,   632,
       0,     0,   125,    51,     0,     0,   127,    58,   143,   144,
       0,   146,   147,     0,     0,   238,   233,     0,     0,   151,
       0,   130,    52,     0,     0,     0,     0,     0,     0,     0,
     234,     0,     0,     0,   134,    54,     0,     0,   235,     0,
       0,     0,     0,     0,   236,     0,   136,   137,   138,     0,
       0,     0,     0,   237,     0,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   649,   125,    51,     0,     0,
     127,    58,   143,   144,     0,   146,   147,     0,     0,   238,
     233,     0,     0,   151,     0,   130,    52,     0,     0,     0,
       0,     0,     0,     0,   234,     0,     0,     0,   134,    54,
       0,     0,   235,     0,     0,     0,     0,     0,   236,     0,
     136,   137,   138,     0,     0,     0,     0,   237,     0,   139,
       0,     0,     0,     0,     0,     0,     0,   672,     0,     0,
     125,    51,     0,     0,   127,    58,   143,   144,     0,   146,
     147,     0,     0,   238,   233,     0,     0,   151,     0,   130,
      52,     0,     0,     0,     0,     0,     0,     0,   234,     0,
       0,     0,   134,    54,     0,     0,   235,     0,     0,     0,
       0,     0,   236,     0,   136,   137,   138,     0,     0,     0,
       0,   237,     0,   139,     0,     0,     0,     0,     0,     0,
       0,   675,     0,     0,   125,    51,     0,     0,   127,    58,
     143,   144,     0,   146,   147,     0,     0,   238,   233,     0,
       0,   151,     0,   130,    52,     0,     0,     0,     0,     0,
       0,     0,   234,     0,     0,     0,   134,    54,     0,     0,
     235,     0,     0,     0,     0,     0,   236,     0,   136,   137,
     138,     0,     0,     0,     0,   237,     0,   139,     0,     0,
       0,     0,     0,     0,     0,   682,     0,     0,   125,    51,
       0,     0,   127,    58,   143,   144,     0,   146,   147,     0,
       0,   238,   233,     0,     0,   151,     0,   130,    52,     0,
       0,     0,     0,     0,     0,     0,   234,     0,     0,     0,
     134,    54,     0,     0,   235,     0,     0,     0,     0,     0,
     236,     0,   136,   137,   138,     0,     0,     0,     0,   237,
       0,   139,     0,     0,     0,     0,     0,     0,     0,   689,
       0,     0,   125,    51,     0,     0,   127,    58,   143,   144,
       0,   146,   147,     0,     0,   238,   233,     0,     0,   151,
       0,   130,    52,     0,     0,     0,     0,     0,     0,     0,
     234,     0,     0,     0,   134,    54,     0,     0,   235,     0,
       0,     0,     0,     0,   236,     0,   136,   137,   138,     0,
       0,     0,     0,   237,     0,   139,     0,     0,     0,     0,
       0,     0,     0,   696,     0,     0,   125,    51,     0,     0,
     127,    58,   143,   144,     0,   146,   147,     0,     0,   238,
     233,     0,     0,   151,     0,   130,    52,     0,     0,     0,
       0,     0,     0,     0,   234,     0,     0,     0,   134,    54,
       0,     0,   235,     0,     0,     0,     0,     0,   236,     0,
     136,   137,   138,     0,     0,     0,     0,   237,     0,   139,
       0,     0,     0,     0,     0,     0,     0,   724,     0,     0,
     125,    51,     0,     0,   127,    58,   143,   144,     0,   146,
     147,     0,     0,   238,   233,     0,     0,   151,     0,   130,
      52,     0,     0,     0,     0,     0,     0,     0,   234,     0,
       0,     0,   134,    54,     0,     0,   235,     0,     0,     0,
       0,     0,   236,     0,   136,   137,   138,     0,     0,     0,
       0,   237,     0,   139,     0,     0,     0,     0,     0,     0,
       0,   730,     0,     0,   125,    51,     0,     0,   127,    58,
     143,   144,     0,   146,   147,     0,     0,   238,   233,     0,
       0,   151,     0,   130,    52,     0,     0,     0,     0,     0,
       0,     0,   234,     0,     0,     0,   134,    54,     0,     0,
     235,     0,     0,     0,     0,     0,   236,     0,   136,   137,
     138,     0,     0,     0,     0,   237,     0,   139,     0,     0,
       0,     0,     0,     0,     0,   737,     0,     0,   125,    51,
       0,     0,   127,    58,   143,   144,     0,   146,   147,     0,
       0,   238,   233,     0,     0,   151,     0,   130,    52,     0,
       0,     0,     0,     0,     0,     0,   234,     0,     0,     0,
     134,    54,     0,     0,   235,     0,     0,     0,     0,     0,
     236,     0,   136,   137,   138,     0,     0,     0,     0,   237,
       0,   139,     0,     0,     0,     0,     0,     0,     0,   740,
       0,     0,   125,    51,     0,     0,   127,    58,   143,   144,
       0,   146,   147,     0,     0,   238,   233,     0,     0,   151,
       0,   130,    52,     0,     0,     0,     0,     0,     0,     0,
     234,     0,     0,     0,   134,    54,     0,     0,   235,     0,
       0,     0,     0,     0,   236,     0,   136,   137,   138,     0,
       0,     0,     0,   237,     0,   139,     0,     0,     0,     0,
       0,     0,     0,   744,     0,     0,   125,    51,     0,     0,
     127,    58,   143,   144,     0,   146,   147,     0,     0,   238,
     233,     0,     0,   151,     0,   130,    52,     0,     0,     0,
       0,     0,     0,     0,   234,     0,     0,     0,   134,    54,
       0,     0,   235,     0,     0,     0,     0,     0,   236,     0,
     136,   137,   138,     0,     0,     0,     0,   237,     0,   139,
       0,     0,     0,     0,     0,     0,     0,   766,     0,     0,
     125,    51,     0,     0,   127,    58,   143,   144,     0,   146,
     147,     0,     0,   238,   233,     0,     0,   151,     0,   130,
      52,     0,     0,     0,     0,     0,     0,     0,   234,     0,
       0,     0,   134,    54,     0,     0,   235,     0,     0,     0,
       0,     0,   236,     0,   136,   137,   138,     0,     0,     0,
       0,   237,     0,   139,     0,     0,     0,     0,     0,     0,
       0,   770,     0,     0,   125,    51,     0,     0,   127,    58,
     143,   144,     0,   146,   147,     0,     0,   238,   233,     0,
       0,   151,     0,   130,    52,     0,     0,     0,     0,     0,
       0,     0,   234,     0,     0,     0,   134,    54,     0,     0,
     235,     0,     0,     0,     0,     0,   236,     0,   136,   137,
     138,     0,     0,     0,     0,   237,     0,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   782,   125,    51,
       0,     0,   127,    58,   143,   144,     0,   146,   147,     0,
       0,   238,   233,     0,     0,   151,     0,   130,    52,     0,
       0,     0,     0,     0,     0,     0,   234,     0,     0,     0,
     134,    54,     0,     0,   235,     0,     0,     0,     0,     0,
     236,     0,   136,   137,   138,     0,     0,     0,     0,   237,
       0,   139,     0,     0,     0,     0,     0,     0,     0,   792,
       0,     0,   125,    51,     0,     0,   127,    58,   143,   144,
       0,   146,   147,     0,     0,   238,   233,     0,     0,   151,
       0,   130,    52,     0,     0,     0,     0,     0,     0,     0,
     234,     0,     0,     0,   134,    54,     0,     0,   235,     0,
       0,     0,     0,     0,   236,     0,   136,   137,   138,     0,
       0,     0,     0,   237,     0,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   799,   125,    51,     0,     0,
     127,    58,   143,   144,     0,   146,   147,     0,     0,   238,
     233,     0,     0,   151,     0,   130,    52,     0,     0,     0,
       0,     0,     0,     0,   234,     0,     0,     0,   134,    54,
       0,     0,   235,     0,     0,     0,     0,     0,   236,     0,
     136,   137,   138,     0,     0,     0,     0,   237,     0,   139,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,    51,     0,     0,   127,    58,   143,   144,     0,   146,
     147,     0,     0,   238,   233,     0,     0,   151,     0,   130,
      52,     0,     0,     0,     0,     0,     0,     0,   277,     0,
       0,     0,   134,    54,     0,     0,   278,     0,     0,     0,
       0,     0,   236,     0,   136,   137,   138,     0,     0,     0,
       0,   237,     0,   139,     0,     0,     0,     0,     0,   125,
      51,     0,     0,   127,     0,     0,     0,     0,     0,    58,
     143,   144,     0,   146,   147,     0,   422,   238,   130,    52,
       0,   151,     0,     0,     0,     0,     0,   277,     0,     0,
       0,   134,    54,     0,     0,   135,     0,     0,     0,     0,
       0,     0,     0,   136,   137,   138,     0,     0,     0,     0,
       0,     0,   139,     0,     0,     0,     0,   125,    51,     0,
       0,   127,   423,     0,     0,     0,     0,     0,    58,   143,
     144,     0,   146,   147,   422,     0,   130,    52,     0,   424,
     151,     0,     0,     0,     0,   277,     0,     0,     0,   134,
      54,     0,     0,   135,     0,     0,     0,     0,     0,     0,
       0,   136,   137,   138,     0,     0,     0,     0,     0,     0,
     139,     0,     0,   125,    51,     0,     0,   127,     0,     0,
     756,     0,     0,     0,     0,     0,    58,   143,   144,     0,
     146,   147,   130,    52,     0,   125,    51,   424,   151,   127,
       0,   277,     0,     0,     0,   134,    54,     0,     0,   135,
       0,     0,     0,     0,   130,    52,     0,   136,   137,   138,
       0,     0,     0,   277,     0,     0,   139,   134,    54,     0,
       0,   135,     0,     0,   645,     0,     0,     0,     0,   136,
     137,   138,    58,   143,   144,     0,   146,   147,   139,     0,
       0,   125,    51,     0,   151,   127,   711,     0,     0,     0,
       0,     0,     0,     0,    58,   143,   144,     0,   146,   147,
     130,    52,     0,   125,    51,     0,   151,   127,     0,   277,
       0,     0,     0,   134,    54,     0,     0,   135,     0,     0,
       0,     0,   130,    52,     0,   136,   137,   138,     0,     0,
       0,   277,     0,     0,   139,   134,    54,     0,     0,   135,
       0,     0,   713,     0,     0,     0,     0,   136,   137,   138,
      58,   143,   144,     0,   146,   147,   139,     0,     0,   125,
      51,     0,   151,   127,   753,     0,     0,     0,     0,     0,
       0,     0,    58,   143,   144,     0,   146,   147,   130,    52,
       0,   125,    51,     0,   151,   127,     0,   277,     0,     0,
       0,   134,    54,     0,     0,   135,     0,     0,     0,     0,
     130,    52,     0,   136,   137,   138,     0,     0,     0,   277,
       0,     0,   139,   134,    54,     0,     0,   135,     0,     0,
     796,     0,     0,     0,     0,   136,   137,   138,    58,   143,
     144,     0,   146,   147,   139,     0,     0,   125,    51,     0,
     151,   127,   808,     0,     0,     0,     0,     0,     0,     0,
      58,   143,   144,     0,   146,   147,   130,    52,     0,   125,
      51,     0,   151,   127,     0,   277,     0,     0,     0,   134,
      54,     0,     0,   135,     0,     0,     0,     0,   130,    52,
       0,   136,   137,   138,     0,     0,     0,   277,     0,     0,
     139,   134,    54,     0,     0,   135,     0,     0,   810,     0,
       0,     0,     0,   136,   137,   138,    58,   143,   144,     0,
     146,   147,   139,     0,     0,     0,     0,     0,   151,     0,
     820,     0,   125,    51,     0,     0,   127,     0,    58,   143,
     144,     0,   146,   147,     0,     0,   233,     0,     0,     0,
     151,   130,    52,     0,   125,    51,     0,     0,   127,     0,
     277,     0,     0,     0,   134,    54,     0,     0,   278,     0,
       0,     0,     0,   130,    52,     0,     0,   137,   138,     0,
       0,     0,   277,     0,     0,     0,   134,    54,     0,     0,
     135,     0,     0,     0,     0,     0,     0,     0,   136,   137,
     138,    58,   143,   144,     0,   146,   147,   139,     0,   238,
       0,     0,     0,   151,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,   143,   144,     0,   146,   147,     0,
       0,     0,     0,     0,     0,   151
};

static const yytype_int16 yycheck[] =
{
      25,   272,    57,   272,   231,   648,   649,   548,    98,    86,
     351,   137,   159,   107,   355,    16,   306,   100,   101,    74,
      39,    18,    12,    18,    12,     9,    20,    21,    59,    39,
     107,    12,   322,    18,    17,   230,    38,     0,    39,    38,
     235,    31,    12,    31,    75,    20,    77,   136,    49,    39,
     139,    39,    33,    47,    44,    56,    44,    18,    28,    86,
     150,    31,    18,    82,   154,    67,    18,    69,    67,    39,
      69,   218,   715,    18,    44,    72,    38,    12,   368,    74,
     107,    82,   159,    85,    85,    69,    85,    86,    61,    74,
      80,    74,    80,   219,   149,    38,    31,   638,    18,    74,
     107,    91,    72,    91,    39,    67,    68,    69,   107,    44,
      80,    72,    27,    74,    49,    71,   118,    90,    91,   118,
      72,    18,    74,   217,    67,   208,    69,   129,    16,    74,
     129,     6,   159,    18,    39,    11,    12,    99,   137,   782,
     217,   218,    85,    86,   233,    80,    12,   236,   237,   238,
      18,    39,    46,    18,    74,   798,   799,    33,    39,    16,
     159,    49,    28,    18,   107,    31,    12,    82,    56,   812,
      18,    28,    47,    39,    79,   118,    18,    74,    44,    39,
     270,   271,   155,    49,    18,    31,   129,    18,    45,    74,
     217,   218,    39,    39,    82,   272,   273,    85,    44,    86,
      49,    67,    68,    18,    72,    71,    18,    72,    74,    18,
      67,    68,   211,    79,    80,    18,   159,    72,   217,   218,
     107,    12,    79,    69,    72,   372,    92,    38,   230,   231,
      72,   230,   231,   235,    80,    22,   235,    28,    72,    18,
      31,    72,    89,    18,    18,   272,   273,    17,    39,   375,
      86,    18,    18,    44,   227,    20,    17,    72,    69,    18,
      72,    18,    20,    72,    18,    18,   239,    18,   211,    72,
     272,   107,   159,   272,   217,   218,    33,    47,   619,   278,
      67,    72,    18,   290,   291,    12,    47,   230,   231,    80,
      48,    39,   235,    72,    39,   372,   303,    72,    72,   306,
      24,    28,    26,   574,    31,    72,    72,    39,    16,   580,
     283,   284,    39,    72,    72,   322,   323,    44,    72,    72,
      28,    72,   295,   159,    12,    39,   415,   416,   417,   272,
     217,   218,   387,    39,   424,   425,    72,    45,    12,    20,
      85,    89,    60,    31,    89,   372,    39,    39,    39,    39,
      30,    39,    82,    80,    28,    85,    44,    31,    49,    67,
      68,   368,    20,    77,    23,    39,    56,    48,    74,    20,
      44,    79,   599,   372,    39,    49,    86,   648,   649,    97,
      98,   217,   218,   583,    77,   272,   273,    67,   361,    48,
      48,    72,    80,    67,    68,    20,    21,   107,   453,    16,
      80,    16,    39,   718,   377,    79,    80,    46,    18,    74,
      39,    28,    49,    28,    72,    39,   389,   390,    92,    20,
     422,    47,    47,   422,    34,    42,    36,    42,    45,   372,
      45,    20,    20,    20,    21,    74,   272,   273,    46,    20,
      50,    58,    20,    21,   715,    20,   717,    48,   717,   159,
      67,    68,    67,    68,    39,   544,    20,    39,    47,    47,
      49,    49,    79,   436,    79,    23,   439,    48,   441,    23,
      48,   786,   787,    48,    48,    35,    39,    37,    55,   422,
      46,   796,   572,   573,    48,   372,    49,    64,   543,    47,
      48,    51,   807,   808,    48,   810,    87,   574,   813,   814,
      33,    34,   817,   580,   819,   820,   583,   217,   218,    20,
      21,   782,   827,   438,    18,   440,    49,    50,   718,    14,
      39,    86,    39,   522,   523,   524,   603,   798,   799,    33,
      49,    46,    49,    48,    29,    18,   372,    56,    74,    56,
      14,   812,   107,   598,    20,    21,   601,   574,   637,    39,
      33,    39,    73,   580,    39,    29,   583,    48,    55,    49,
      18,    49,   272,   273,    49,   590,   539,    64,   645,    55,
      39,   648,   649,    53,   404,   405,   603,    18,    64,   522,
     523,   524,    62,    47,   639,    74,   786,   787,   406,   407,
     408,   409,   413,   414,   159,    74,   796,   599,    47,    47,
     599,    39,   609,   610,   410,   411,   412,   807,   808,    20,
     810,    47,    21,   813,   814,    74,    48,   817,   645,   819,
     820,   648,   649,    73,    47,    18,    39,   827,     4,    39,
       8,     3,    65,   710,   711,    74,   713,    74,   715,   716,
     717,   718,    72,    47,   721,   670,    48,   672,    74,    74,
      16,    16,   217,   218,    74,    47,   599,    47,    39,     6,
      72,    85,   372,    17,    48,    18,    74,    72,    47,    33,
      39,    39,    72,   750,    47,   752,   753,   732,    72,    16,
      47,    39,    73,   710,   711,    16,   713,   574,   715,   716,
     717,   718,    47,   580,   721,    39,   583,    39,     6,   724,
      71,    17,   727,    73,   781,   782,    18,   272,   273,   786,
     787,    86,    74,    74,    74,   717,   603,    74,   717,   796,
      47,   798,   799,   750,    73,   752,   753,    33,    47,    47,
     807,   808,   107,   810,    47,   812,   813,   814,   574,   764,
     817,   766,   819,   820,   580,    74,    74,   583,    47,    74,
     827,    74,    72,    74,   781,   782,    47,    72,   645,   786,
     787,   648,   649,    47,    47,   790,    22,   603,    22,   796,
      73,   798,   799,    47,   717,    72,    47,    39,    39,    74,
     807,   808,    74,   810,   159,   812,   813,   814,    74,    47,
     817,    72,   819,   820,    72,    74,    72,    74,    17,    74,
     827,    74,    72,    72,    22,    72,    74,   372,    74,   645,
      11,   524,   648,   649,   201,    72,   717,    72,   717,    69,
      72,    72,   454,   710,   711,   642,   713,   284,   715,   716,
     717,   718,   642,    86,   721,   402,   398,    -1,    -1,   273,
     401,   400,   217,   218,    -1,    -1,   403,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   750,   574,   752,   753,    -1,    -1,    -1,
     580,    -1,    -1,   583,   710,   711,    -1,   713,    -1,   715,
     716,   717,   718,    -1,    -1,   721,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   603,   781,   782,    -1,   272,   273,   786,
     787,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   796,
      -1,   798,   799,    -1,   750,    -1,   752,   753,    -1,    -1,
     807,   808,    -1,   810,    -1,   812,   813,   814,    -1,    -1,
     817,    -1,   819,   820,    -1,   645,    -1,    -1,   648,   649,
     827,    -1,    -1,    -1,    -1,   781,   782,    -1,    -1,    -1,
     786,   787,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     796,    -1,   798,   799,   217,   218,    -1,    -1,    -1,    -1,
      -1,   807,   808,    -1,   810,    -1,   812,   813,   814,    -1,
      -1,   817,    -1,   819,   820,    -1,    -1,    -1,    -1,    -1,
      -1,   827,    -1,    -1,    12,    -1,    -1,   372,    -1,    -1,
     710,   711,    -1,   713,    -1,   715,   716,   717,   718,   574,
      28,   721,    -1,    31,    -1,   580,    -1,    -1,   583,   272,
     273,    39,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,   603,    -1,
     750,    -1,   752,   753,    -1,    -1,    -1,    -1,    -1,    67,
      68,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   781,   782,    -1,    92,    -1,   786,   787,    -1,    -1,
     645,    -1,    -1,   648,   649,    -1,   796,    -1,   798,   799,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   807,   808,    -1,
     810,    -1,   812,   813,   814,    -1,    -1,   817,    -1,   819,
     820,    -1,    -1,    -1,    -1,    -1,    -1,   827,    -1,   372,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,    -1,   710,   711,    10,   713,   583,
     715,   716,   717,   718,    -1,    -1,   721,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,   603,
      10,    -1,    -1,    36,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,   750,    -1,   752,   753,    52,
      -1,    54,    -1,    -1,    -1,    -1,    36,    60,    38,   574,
      63,    -1,    -1,    66,    -1,   580,    -1,    -1,   583,    -1,
      -1,   645,    52,    76,    54,    78,   781,   782,    -1,    -1,
      60,   786,   787,    63,    -1,    -1,    66,    -1,   603,    -1,
      -1,   796,    -1,   798,   799,    -1,    76,    -1,    78,    -1,
      -1,    -1,   807,   808,    -1,   810,    -1,   812,   813,   814,
      -1,    -1,   817,    -1,   819,   820,    -1,    -1,    -1,    -1,
      -1,    -1,   827,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     645,    -1,    -1,   648,   649,    -1,   710,   711,    -1,   713,
      -1,    -1,   716,    -1,   718,    -1,    -1,   721,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   750,    -1,   752,   753,
      -1,   574,    -1,    -1,    -1,    -1,    -1,   580,    -1,    -1,
     583,    -1,    -1,    -1,    -1,   710,   711,    -1,   713,    -1,
     715,   716,   717,   718,    -1,    -1,   721,   781,    -1,    -1,
     603,    -1,   786,   787,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   796,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   807,   808,   750,   810,   752,   753,   813,
     814,   136,    -1,   817,   139,   819,   820,    -1,    -1,    -1,
      -1,    -1,   645,   827,    -1,   648,   649,    -1,    -1,    -1,
      -1,    -1,   124,    -1,    -1,    -1,   781,   782,    -1,    -1,
      -1,   786,   787,   135,    -1,    -1,    -1,   136,   140,    -1,
     139,   796,    -1,   798,   799,    -1,   148,    -1,    -1,    -1,
      -1,   153,   807,   808,    -1,   810,    -1,   812,   813,   814,
      -1,    -1,   817,    -1,   819,   820,    -1,    -1,    -1,    -1,
      -1,    -1,   827,    -1,    -1,    -1,    -1,   710,   711,    -1,
     713,    -1,   715,   716,   717,   718,    -1,    -1,   721,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,   233,    -1,
      -1,   236,   237,   238,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   750,    -1,   752,
     753,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   235,   233,    -1,    -1,   236,   237,   238,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   781,   782,
      -1,    -1,    -1,   786,   787,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   796,    -1,   798,   799,    -1,    -1,    -1,
      -1,    -1,    -1,   275,   807,   808,   278,   810,    -1,   812,
     813,   814,    -1,    -1,   817,    -1,   819,   820,    -1,    -1,
     292,    -1,    -1,    -1,   827,    -1,   298,    -1,    -1,    -1,
      -1,    -1,   304,   305,    -1,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,    -1,    -1,    -1,    -1,
      -1,    -1,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,    -1,    -1,   351,
      -1,    -1,    -1,   355,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,    -1,   398,    -1,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,    28,    -1,   387,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,   396,    -1,    -1,   399,    -1,   398,
      -1,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,    -1,
      -1,   423,    67,    -1,    69,    -1,    -1,     5,    -1,    -1,
      -1,    -1,    10,    -1,    -1,   437,    -1,    -1,    -1,    -1,
      85,    -1,    20,    21,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      38,    39,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    -1,   118,    52,    -1,    54,    -1,    -1,   366,
     367,     5,    60,    -1,   129,    63,    10,    -1,    66,    -1,
      -1,   136,   137,    -1,   139,    -1,    20,    21,    76,    23,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   544,
      -1,    89,    36,   548,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
      -1,   543,    66,    -1,    -1,   544,    -1,    -1,    -1,   548,
      -1,    -1,    76,    -1,    78,   442,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,    -1,   578,   579,    -1,   581,
      -1,    -1,    -1,    -1,   586,   230,   231,    -1,   233,    -1,
     235,   236,   237,   238,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   637,   638,    -1,    -1,    -1,   642,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   619,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    11,    12,
      13,    -1,    15,   278,    -1,    -1,    19,   639,   637,   638,
      -1,   286,    -1,   642,    -1,   532,   533,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    86,    -1,    -1,   593,    90,   595,    92,
      93,    94,    -1,    -1,    -1,    -1,    -1,   719,   720,    -1,
     607,    -1,    -1,    -1,    -1,    -1,    -1,   614,    -1,    -1,
     375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   628,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   398,   756,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,    -1,    -1,    -1,    -1,   422,    -1,    -1,
      -1,    -1,   784,   785,   671,    -1,    -1,    -1,    -1,    -1,
     677,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   688,    -1,    -1,   691,    -1,    -1,    -1,    -1,    -1,
      -1,   698,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    11,    12,
      13,   728,    15,    -1,    -1,    -1,    19,   734,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      43,    44,    -1,    46,    47,    -1,    49,   522,   523,   524,
      -1,    -1,    55,    56,    57,   772,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,   544,
      -1,    74,    -1,   548,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    86,    -1,    -1,    -1,    90,    91,    92,
      93,    94,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    11,    12,    13,    -1,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    -1,   599,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    43,    44,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      70,    71,   637,   638,    74,    -1,    -1,   642,    -1,    -1,
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
      28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    -1,
      -1,    -1,    90,    91,    92,    93,    94,     7,    -1,    -1,
      -1,    11,    12,    13,    -1,    15,    -1,    -1,     5,    19,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    20,    -1,    -1,    23,    -1,    -1,    39,
      40,    -1,    -1,    43,    44,    -1,    46,    47,    -1,    36,
      -1,    38,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    48,    -1,    -1,    64,    52,    -1,    54,    55,    -1,
      70,    -1,    -1,    60,    74,    -1,    63,    64,    -1,    66,
      80,    81,    82,    83,    84,    85,    86,    -1,    -1,    76,
      90,    78,    92,    93,    94,    11,    12,    -1,    -1,    15,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    -1,    84,    85,
      11,    12,    88,    -1,    15,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    11,    12,    -1,    -1,    15,    80,
      81,    82,    -1,    84,    85,    -1,    -1,    88,    25,    -1,
      -1,    92,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    11,    12,
      -1,    -1,    15,    80,    81,    82,    -1,    84,    85,    -1,
      -1,    88,    25,    -1,    -1,    92,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    11,    12,    -1,    -1,    15,    80,    81,    82,
      -1,    84,    85,    -1,    -1,    88,    25,    -1,    -1,    92,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    -1,    -1,
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
      39,    -1,    -1,    -1,    43,    44,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    11,    12,
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
      -1,    -1,    -1,    -1,    -1,    74,    11,    12,    -1,    -1,
      15,    80,    81,    82,    -1,    84,    85,    -1,    -1,    88,
      25,    -1,    -1,    92,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    12,    -1,    -1,    15,    80,    81,    82,    -1,    84,
      85,    -1,    -1,    88,    25,    -1,    -1,    92,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    11,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    -1,    84,    85,    -1,    28,    88,    30,    31,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    11,    12,    -1,
      -1,    15,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    -1,    84,    85,    28,    -1,    30,    31,    -1,    91,
      92,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    11,    12,    -1,    -1,    15,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    -1,
      84,    85,    30,    31,    -1,    11,    12,    91,    92,    15,
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
      84,    85,    64,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      72,    -1,    11,    12,    -1,    -1,    15,    -1,    80,    81,
      82,    -1,    84,    85,    -1,    -1,    25,    -1,    -1,    -1,
      92,    30,    31,    -1,    11,    12,    -1,    -1,    15,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    56,    57,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    80,    81,    82,    -1,    84,    85,    64,    -1,    88,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    -1,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    92
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    28,    42,    45,    58,    67,    68,    79,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     119,   120,   121,   122,   149,   150,    39,    39,    79,   112,
      39,   112,     0,    99,   105,   100,   105,   106,    46,   126,
      16,    45,   122,   126,   112,    20,    74,    49,   123,    20,
     105,    12,    31,    39,    44,    71,    74,    79,    80,    92,
     107,   108,   109,   110,   111,   112,   113,   121,   123,   127,
     128,   129,   130,   134,   135,   142,   143,   144,   145,    39,
      39,    20,    39,    77,    39,    47,    46,   153,    39,   136,
     145,    39,   131,   132,   136,    48,   114,    92,   107,   123,
     145,   145,    71,   128,    74,   141,   153,    46,   146,    87,
     140,   123,    39,    77,    74,    18,    33,   124,    28,    72,
     107,   137,   138,   139,     7,    11,    13,    15,    19,    28,
      30,    32,    39,    40,    43,    47,    55,    56,    57,    64,
      70,    71,    74,    81,    82,    83,    84,    85,    86,    90,
      91,    92,    93,    94,   107,   108,   110,   112,   153,   154,
     155,   156,   158,   159,   160,   162,   163,   164,   165,   167,
     168,   170,   172,   178,   180,   181,   182,   183,   184,   185,
     186,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   204,   217,   218,   221,   222,   223,   114,    23,
     114,    18,    74,    73,    48,   136,   131,   136,   145,   140,
     140,    49,    71,    82,    85,   112,   115,   147,   154,    18,
     125,    74,    74,    39,    18,    33,   107,    39,    85,    89,
      18,    18,    72,    25,    39,    47,    53,    62,    88,   108,
     110,   193,   197,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    39,    74,    39,    74,
      91,   107,    47,    17,    47,    47,   201,    39,    47,   112,
     195,   196,   216,   108,   111,   112,   115,   216,    74,   201,
      20,    21,    47,   201,   153,    39,   131,    20,    47,   201,
     131,    20,   114,    21,     5,    10,    20,    23,    36,    38,
      48,    52,    54,    60,    63,    66,    76,    78,   114,    71,
     155,    74,    20,    21,    48,     5,    10,    23,    36,    38,
      52,    54,    60,    63,    66,    76,    78,     5,    10,    23,
      36,    38,    52,    54,    60,    63,    66,    76,    78,    55,
      64,    46,   133,   151,   201,    23,   132,    73,    74,   140,
      69,   108,   110,   116,   117,   118,    47,    47,    20,    82,
      85,    71,   154,    71,   111,    18,    39,    39,    89,    20,
     114,    39,    72,   107,   138,   139,   216,     6,    72,   108,
     112,   138,   201,   216,   216,   216,    17,    74,     9,    69,
       4,     8,    65,     3,    24,    26,    33,    34,    49,    50,
      35,    37,    51,    53,    62,    59,    75,    77,    74,    74,
     131,   131,    28,    74,    91,   107,   163,   174,   175,   177,
     156,    72,   148,   201,   201,    72,   108,    48,   114,   200,
     114,   200,    47,    49,   112,    74,    39,   115,    39,   115,
     201,    74,    14,    29,   187,   188,    74,    16,   201,    74,
      74,    16,    20,    39,    56,   115,   201,   201,    16,    39,
      56,    82,    85,   115,   194,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,    20,    39,   115,   194,
      39,   115,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,    18,    71,   133,
     152,   133,    27,    82,    18,    33,    72,   148,    72,   148,
      82,   115,    47,    47,    71,   111,   114,    39,    85,    39,
      72,   153,   201,     6,    72,   114,   114,    72,    72,   201,
     207,   201,   208,   209,   210,   211,   212,   212,   213,   213,
     213,   213,   214,   214,   214,   215,   215,   216,   216,   216,
      74,    74,    91,   107,    74,   201,   131,   131,    74,    17,
      18,    18,    72,    72,   201,   151,    48,   114,   151,   114,
      72,   148,    33,    47,    49,    47,    39,    39,    72,    47,
     153,    29,   188,    72,    16,    39,    56,    47,   112,    20,
      21,    39,    73,    16,    47,    39,    39,    73,    71,    18,
      71,   110,   110,   117,    74,    72,    74,    72,    47,    82,
      72,   148,    72,   148,   153,   201,   216,    72,    72,     6,
     219,    74,    17,   131,   131,    72,   176,   177,    74,    74,
     201,   201,   163,   201,    32,    39,    40,    93,   156,   157,
     158,   161,   166,   169,   171,   173,   179,    73,   201,   126,
      72,    47,    72,   148,    33,    72,   148,    47,   153,   139,
     153,   156,    72,   148,    39,   115,    39,   115,    47,    72,
     148,    47,    71,   133,    74,    74,    72,   148,    47,    74,
      72,    74,    72,   216,   219,   153,   201,   202,   205,   156,
      72,    72,   176,    72,   176,    74,    72,    47,    17,    47,
      47,    22,    73,   126,    72,   148,   126,    72,    47,    72,
      72,   148,    72,    72,    47,    39,    39,    72,   148,    72,
      72,   148,    74,    72,    72,   148,    74,    74,   156,   156,
      72,   156,    72,    72,   176,   156,    74,   174,   175,   157,
     201,   201,   156,   126,    72,   126,    72,   148,    72,   153,
      72,   148,    47,    72,    72,    74,    74,    72,   156,   156,
     156,    72,    74,   201,    74,    17,    72,    72,   126,   126,
      72,    72,    72,   148,    74,   156,    72,   176,    74,    74,
     201,   201,   157,   157,   126,    72,   157,    72,    72,   176,
      72,   176,    74,    72,    22,   157,   157,    72,   157,    72,
      72,   176,   157,   157,   157,   157,   157,    72,   157
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
     132,   133,   133,   134,   135,   135,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   139,   139,   139,   139,
     140,   141,   141,   142,   143,   144,   144,   144,   144,   144,
     144,   144,   144,   145,   145,   145,   145,   146,   146,   146,
     146,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   148,   148,   149,   150,   150,   150,   150,
     151,   151,   151,   151,   152,   152,   153,   153,   154,   154,
     155,   155,   155,   155,   155,   156,   156,   156,   156,   156,
     156,   157,   157,   157,   157,   157,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   159,   160,   161,
     162,   163,   163,   163,   163,   163,   163,   163,   164,   165,
     166,   167,   167,   168,   169,   170,   170,   171,   171,   172,
     172,   172,   172,   172,   172,   172,   172,   173,   173,   173,
     173,   173,   173,   173,   173,   174,   174,   175,   175,   175,
     175,   176,   177,   177,   178,   179,   180,   180,   181,   182,
     182,   183,   183,   184,   185,   186,   186,   186,   187,   187,
     188,   189,   189,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   191,   191,   191,   191,   191,   191,   191,
     192,   192,   192,   192,   192,   193,   193,   193,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   195,   195,   195,   196,   196,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   199,   199,   199,
     199,   199,   199,   200,   200,   201,   201,   202,   202,   202,
     202,   202,   202,   203,   203,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   205,   205,   205,   206,   206,   207,   207,   208,   208,
     209,   209,   210,   210,   211,   211,   211,   212,   212,   212,
     212,   212,   213,   213,   213,   213,   214,   214,   214,   215,
     215,   215,   215,   216,   216,   216,   216,   216,   217,   218,
     219,   219,   219,   219,   220,   220,   220,   220,   221,   221,
     221,   221,   222,   223
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
       2,     1,     1,     2,     2,     2,     3,     3,     1,     2,
       2,     4,     3,     1,     2,     3,     3,     4,     3,     4,
       2,     1,     1,     2,     2,     2,     3,     3,     4,     1,
       2,     2,     3,     3,     4,     5,     6,     2,     3,     3,
       4,     4,     5,     5,     6,     4,     5,     5,     6,     6,
       7,     7,     8,     3,     1,     2,     2,     3,     3,     4,
       2,     3,     3,     4,     3,     1,     2,     3,     2,     1,
       3,     3,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     5,     7,
       7,     3,     5,     5,     5,     1,     1,     1,     1,     6,
       7,     7,     8,     7,     8,     8,     9,     6,     7,     7,
       8,     7,     8,     8,     9,     1,     1,     2,     3,     2,
       3,     1,     3,     1,     7,     7,     2,     3,     3,     2,
       3,     2,     3,     3,     5,     3,     4,     5,     2,     1,
       5,     1,     1,     1,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     4,     3,     1,     3,     3,     4,     5,
       5,     6,     6,     7,     7,     8,     5,     6,     6,     7,
       7,     8,     8,     9,     3,     3,     5,     4,     4,     3,
       4,     5,     6,     6,     7,     5,     6,     6,     7,     5,
       6,     6,     7,     7,     8,     8,     9,     3,     4,     3,
       4,     3,     4,     3,     4,     5,     6,     3,     4,     3,
       4,     4,     4,     4,     3,     1,     1,     5,     4,     3,
       5,     4,     3,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     5,     5,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     4,     5,     4,     5,     1,     1,
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
  case 25:
#line 125 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3089 "parser.tab.c"
    break;

  case 26:
#line 126 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3095 "parser.tab.c"
    break;

  case 27:
#line 130 "parser.y"
                 {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3101 "parser.tab.c"
    break;

  case 28:
#line 131 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3107 "parser.tab.c"
    break;

  case 29:
#line 132 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3113 "parser.tab.c"
    break;

  case 30:
#line 136 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3119 "parser.tab.c"
    break;

  case 31:
#line 137 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3125 "parser.tab.c"
    break;

  case 32:
#line 141 "parser.y"
                {check_gst((yyvsp[0].item).label); strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3131 "parser.tab.c"
    break;

  case 34:
#line 146 "parser.y"
                {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3137 "parser.tab.c"
    break;

  case 35:
#line 150 "parser.y"
                                {strcpy((yyval.item).label,strcat((yyvsp[-2].item).label,strcat((yyvsp[-1].item).label,(yyvsp[0].item).label)));}
#line 3143 "parser.tab.c"
    break;

  case 36:
#line 151 "parser.y"
                        {strcpy((yyval.item).type,(yyvsp[0].item).type);}
#line 3149 "parser.tab.c"
    break;

  case 38:
#line 159 "parser.y"
                                          {(yyval.item).dims = (yyvsp[-2].item).dims+1;}
#line 3155 "parser.tab.c"
    break;

  case 39:
#line 160 "parser.y"
                                        {(yyval.item).dims = 1;}
#line 3161 "parser.tab.c"
    break;

  case 48:
#line 184 "parser.y"
                                 {up_sym_table();}
#line 3167 "parser.tab.c"
    break;

  case 49:
#line 188 "parser.y"
                                {make_class_entry((yyvsp[0].item).label,yylineno,"00");}
#line 3173 "parser.tab.c"
    break;

  case 50:
#line 189 "parser.y"
                                   {string mod = check_class_modifiers((yyvsp[-2].item).label,(yyvsp[0].item).label); cout<<mod<<endl; make_class_entry((yyvsp[0].item).label,yylineno,mod);}
#line 3179 "parser.tab.c"
    break;

  case 51:
#line 193 "parser.y"
                             {strcpy((yyval.item).label,strcat((yyvsp[-1].item).label,(yyvsp[0].item).label));}
#line 3185 "parser.tab.c"
    break;

  case 52:
#line 194 "parser.y"
                {strcpy((yyval.item).label,(yyvsp[0].item).label);}
#line 3191 "parser.tab.c"
    break;

  case 53:
#line 198 "parser.y"
            {strcpy((yyval.item).label,"0");}
#line 3197 "parser.tab.c"
    break;

  case 54:
#line 199 "parser.y"
                {strcpy((yyval.item).label,"1");}
#line 3203 "parser.tab.c"
    break;

  case 55:
#line 200 "parser.y"
                {strcpy((yyval.item).label,"2");}
#line 3209 "parser.tab.c"
    break;

  case 56:
#line 201 "parser.y"
                {strcpy((yyval.item).label,"3");}
#line 3215 "parser.tab.c"
    break;

  case 77:
#line 252 "parser.y"
                                        {string x = check_method_modifiers(modifiers); make_entry((yyvsp[-2].item).label,type,yylineno,x);}
#line 3221 "parser.tab.c"
    break;

  case 78:
#line 253 "parser.y"
                                                {string x = check_method_modifiers(modifiers); vector<int> v((yyvsp[-2].item).dims,0); make_array_entry((yyvsp[-3].item).label,type,yylineno,v,x);}
#line 3227 "parser.tab.c"
    break;

  case 79:
#line 254 "parser.y"
                {string x = check_method_modifiers(modifiers); make_entry((yyvsp[0].item).label,type,yylineno,x);}
#line 3233 "parser.tab.c"
    break;

  case 80:
#line 255 "parser.y"
                        {string x = check_method_modifiers(modifiers); vector<int> v((yyvsp[0].item).dims,0); make_array_entry((yyvsp[-1].item).label,type,yylineno,v,x);}
#line 3239 "parser.tab.c"
    break;

  case 84:
#line 268 "parser.y"
                        {make_func_entry((yyvsp[0].item).label,"void",arguments,yylineno,"0000",(yyvsp[0].item).dims); add_arguments(arguments); arguments.clear();}
#line 3245 "parser.tab.c"
    break;

  case 85:
#line 269 "parser.y"
                                {make_func_entry((yyvsp[0].item).label,(yyvsp[-1].item).type,arguments,yylineno,"0000",(yyvsp[0].item).dims); add_arguments(arguments); arguments.clear();}
#line 3251 "parser.tab.c"
    break;

  case 86:
#line 270 "parser.y"
                                        {string x = check_method_modifiers((yyvsp[-2].item).label); make_func_entry((yyvsp[0].item).label,"void",arguments,yylineno,x,(yyvsp[-1].item).dims); add_arguments(arguments); arguments.clear();}
#line 3257 "parser.tab.c"
    break;

  case 87:
#line 271 "parser.y"
                                        {string x = check_method_modifiers((yyvsp[-2].item).label); make_func_entry((yyvsp[0].item).label,(yyvsp[-1].item).type,arguments,yylineno,x,(yyvsp[-1].item).dims); add_arguments(arguments); arguments.clear();}
#line 3263 "parser.tab.c"
    break;

  case 88:
#line 275 "parser.y"
            {strcpy((yyval.item).label,(yyvsp[0].item).label); (yyval.item).dims = 0;}
#line 3269 "parser.tab.c"
    break;

  case 89:
#line 276 "parser.y"
                        {strcpy((yyval.item).label,(yyvsp[-1].item).label); (yyval.item).dims = (yyvsp[0].item).dims;}
#line 3275 "parser.tab.c"
    break;

  case 94:
#line 290 "parser.y"
                    {arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-1].item).type,0,0,0));}
#line 3281 "parser.tab.c"
    break;

  case 95:
#line 291 "parser.y"
                                        {arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-1].item).type,0,0,1));}
#line 3287 "parser.tab.c"
    break;

  case 96:
#line 292 "parser.y"
                                {arguments.push_back(make_tuple((yyvsp[-1].item).label,(yyvsp[-2].item).type,(yyvsp[0].item).dims,0,0));}
#line 3293 "parser.tab.c"
    break;

  case 97:
#line 293 "parser.y"
                                        {arguments.push_back(make_tuple((yyvsp[-1].item).label,(yyvsp[-3].item).type,0,0,0));}
#line 3299 "parser.tab.c"
    break;

  case 98:
#line 294 "parser.y"
                                        {arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-2].item).type,0,1,0));}
#line 3305 "parser.tab.c"
    break;

  case 99:
#line 295 "parser.y"
                                                {arguments.push_back(make_tuple((yyvsp[0].item).label,(yyvsp[-2].item).type,0,1,1));}
#line 3311 "parser.tab.c"
    break;


#line 3315 "parser.tab.c"

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
#line 874 "parser.y"


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
