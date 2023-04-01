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
#include "3ac.cpp"
#include "struct.h"
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
extern int inst_num;

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



#line 127 "parser.tab.c"

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
#line 61 "parser.y"

    struct Item* item;

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
#define YYLAST   2383

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  113
/* YYNRULES -- Number of rules.  */
#define YYNRULES  292
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  537

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
       0,    72,    72,    74,    75,    78,    79,    80,    81,    82,
      83,    84,    88,    92,    93,    97,    98,    99,   100,   104,
     108,   112,   116,   120,   121,   125,   126,   130,   131,   135,
     136,   137,   141,   142,   146,   147,   151,   155,   156,   160,
     164,   165,   169,   170,   173,   177,   178,   182,   183,   184,
     185,   189,   190,   194,   195,   199,   200,   201,   205,   206,
     207,   211,   218,   228,   229,   233,   245,   246,   247,   251,
     254,   255,   256,   257,   260,   264,   265,   269,   270,   274,
     275,   276,   277,   278,   279,   283,   284,   288,   289,   292,
     296,   297,   301,   302,   306,   307,   312,   313,   317,   318,
     322,   323,   327,   339,   349,   353,   354,   355,   356,   357,
     358,   362,   363,   364,   365,   366,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   383,   387,   391,   395,
     399,   400,   401,   402,   403,   404,   405,   408,   412,   416,
     420,   425,   426,   430,   434,   438,   439,   443,   444,   448,
     449,   450,   451,   452,   453,   454,   455,   459,   460,   461,
     462,   463,   464,   465,   466,   470,   471,   475,   485,   497,
     501,   502,   506,   510,   514,   515,   519,   523,   524,   528,
     529,   533,   537,   538,   539,   543,   544,   548,   552,   553,
     557,   558,   559,   560,   561,   565,   566,   567,   568,   569,
     570,   574,   578,   579,   583,   587,   588,   589,   590,   594,
     595,   596,   597,   601,   602,   606,   610,   611,   615,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
     646,   647,   648,   649,   650,   651,   652,   653,   654,   655,
     656,   660,   661,   665,   666,   670,   671,   675,   676,   680,
     681,   685,   686,   690,   691,   692,   696,   697,   698,   699,
     700,   704,   705,   706,   707,   711,   712,   713,   717,   718,
     719,   720,   724,   725,   726,   727,   728,   732,   751,   770,
     771,   772,   773,   777,   778,   779,   780,   784,   785,   786,
     787,   791,   809
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

#define YYPACT_NINF (-416)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-291)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     222,    10,  -416,    84,    21,    66,  -416,  -416,  -416,   169,
    -416,   263,   263,  -416,  -416,  -416,  -416,  -416,    50,  -416,
     141,  -416,    98,  -416,  -416,  -416,  -416,    66,     2,   141,
     221,  -416,   263,    50,  -416,    50,  -416,  -416,   692,  -416,
     187,   200,  -416,   225,    76,  -416,  -416,   231,    50,  -416,
    -416,   227,  -416,  -416,  -416,  -416,   238,  1562,  -416,   255,
     248,  -416,  -416,  -416,   221,  -416,    13,   692,  -416,  -416,
    -416,   178,  -416,   141,  -416,  -416,  -416,  -416,   141,   118,
    -416,   237,    96,   227,  -416,   248,  2075,  -416,    86,  -416,
     119,   224,  -416,   274,   135,   277,  -416,  2075,  2075,   224,
    -416,  2075,  1794,  -416,  -416,  2075,   141,   279,  2075,  -416,
     295,   596,  -416,  1562,  -416,  -416,  -416,  -416,  -416,  -416,
     270,  -416,  -416,   327,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,   124,  -416,
     246,   176,  -416,  -416,  -416,  -416,   228,   261,   286,   214,
       0,  -416,  -416,   273,   314,   238,   255,  -416,  -416,  -416,
    -416,  -416,  -416,  1562,  -416,  -416,   297,   305,  -416,   224,
    -416,   -16,    22,  -416,   314,  2075,   336,  1759,  2075,  2075,
    2075,   988,  -416,  -416,     3,  -416,  -416,  -416,     6,   386,
     383,   328,   391,   122,   324,    18,   292,   240,  -416,  -416,
    -416,  -416,  -416,   228,  -416,  -416,   322,  -416,   323,  -416,
     295,  2114,  1646,   308,  2075,   326,   205,  -416,  -416,   351,
     351,    17,  -416,  -416,   329,   330,   219,  2075,   331,   209,
      24,  2075,  2075,   363,  2075,  2075,  2075,  2075,  2075,  2075,
    2075,  2075,  2075,  2075,  2075,   358,  -416,  -416,  -416,  1646,
    2075,  2075,  2075,  2075,  2075,  2075,  2075,  2075,  2075,  2075,
    2075,  -416,  -416,  2075,   212,   295,  -416,  -416,   334,  -416,
      25,  -416,  -416,  1562,  -416,  -416,    83,   248,   369,     7,
    -416,  -416,    89,  1107,   337,  -416,  -416,  -416,  2075,  -416,
    2075,  2075,  2075,  2075,  2075,  2075,  2075,  2075,  2075,  2075,
    2075,  2075,  2075,  2075,  2075,  2075,  2075,  2075,  2075,  2075,
    -416,  -416,    29,   224,  1823,   295,  -416,   338,   393,   395,
    -416,  -416,    40,  -416,   339,  -416,   368,   368,  1852,  -416,
    -416,   371,   141,   220,  -416,   353,  -416,  -416,  -416,  -416,
     376,  -416,  -416,  -416,   354,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  2075,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,   370,  -416,  -416,
    -416,  -416,   248,   389,   314,  -416,  -416,  2075,   199,  1887,
     206,   739,   356,   386,   416,   383,   328,   391,   122,   324,
     324,    18,    18,    18,    18,   292,   292,   292,   240,   240,
    -416,  -416,  -416,  -416,   295,  1556,   360,   417,  1916,  2075,
    1133,  2075,  -416,  1702,  1887,   314,   314,  -416,    47,     7,
    -416,   141,  -416,  1646,  1966,  -416,   364,   224,  -416,   314,
    -416,  -416,  2075,   739,  -416,  -416,  2075,   417,  1646,   367,
     395,  2166,  2188,   362,   372,  -416,  -416,   396,   142,   402,
    -416,  -416,   418,  -416,   420,  -416,  -416,  -416,  -416,  -416,
    -416,   379,  -416,  -416,  -416,    49,  -416,  -416,  -416,  -416,
    -416,  1646,  1646,   381,  1646,   384,  2218,  1646,  2136,  1702,
    2075,  1702,   141,  -416,  -416,  -416,  1646,  -416,  1646,  1646,
     385,  -416,  2001,   394,   441,  -416,   398,  -416,  -416,  -416,
    -416,  -416,  1646,  2238,   399,  2021,  2075,  1702,  -416,  1702,
     403,  2261,  2281,   400,   404,  -416,  -416,  1702,  1702,   407,
    1702,   408,  2292,  1702,  -416,  -416,  1702,  -416,  1702,  1702,
     409,  -416,  -416,  -416,  -416,  1702,  -416
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
       0,   288,   116,     0,   101,   104,   105,   117,   106,   118,
       0,   107,   108,     0,   119,   109,   110,   145,   146,   120,
     125,   121,   122,   123,   124,   287,   188,   190,   136,   201,
     193,   135,   189,   130,   131,   132,     0,   133,   134,    66,
       0,    64,    71,     0,    39,     0,     0,    88,    52,    53,
      86,    74,    85,     0,    89,    97,    37,     0,    20,     0,
      90,     0,     0,    78,    76,     0,    38,     0,     0,     0,
       0,   288,   192,   194,     0,   215,   217,   216,   241,   243,
     245,   247,   249,   251,   253,   256,   261,   265,   268,   272,
     273,   276,   282,   279,   289,   290,     0,   174,     0,   177,
       0,     0,     0,     0,     0,     0,   288,   193,   278,     0,
       0,    36,   277,   179,     0,     0,     0,     0,     0,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   204,    99,   100,   129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   292,   291,     0,    67,     0,    61,    41,     0,    72,
       0,    73,    92,     0,    21,    22,     0,    79,     0,     0,
      91,   281,     0,   288,     0,   275,   274,   280,     0,   141,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     175,   178,     0,     0,     0,     0,   171,     0,   166,   165,
     127,   205,     0,    95,     0,   191,   209,   211,     0,   180,
     181,     0,     0,   182,   186,     0,   176,   102,   227,   229,
      37,   218,   225,   226,     0,   224,   223,   221,   222,   228,
     220,   219,     0,   138,   238,   240,   230,   236,   237,   235,
     234,   232,   233,   239,   231,    65,    69,     0,    63,    40,
      62,    93,    80,     0,    81,    83,    77,     0,     0,     0,
       0,   191,     0,   244,     0,   246,   248,   250,   252,   254,
     255,   258,   260,   257,   259,   263,   264,   262,   267,   266,
     271,   270,   269,   103,     0,     0,     0,   167,     0,     0,
       0,     0,   206,     0,     0,   210,   212,   202,     0,     0,
     183,     0,   185,     0,     0,   214,     0,     0,    68,    82,
      84,   283,     0,     0,   285,   142,     0,   168,     0,     0,
     169,     0,     0,     0,     0,   170,    94,     0,    38,     0,
     137,   139,   105,   112,     0,   113,   114,   115,   147,   148,
     203,     0,   184,   143,   207,     0,   213,   284,   286,   242,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   208,   150,   151,     0,   153,     0,     0,
       0,   172,     0,     0,   166,   128,     0,   140,   187,   152,
     154,   155,     0,     0,     0,     0,     0,     0,   156,     0,
       0,     0,     0,     0,     0,   144,   157,     0,     0,     0,
       0,     0,     0,     0,   158,   159,     0,   161,     0,     0,
       0,   173,   160,   162,   163,     0,   164
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -416,  -416,   113,   -43,  -416,  -416,   471,    27,  -416,  -416,
    -416,  -416,   275,    15,   -37,   -92,  -416,  -416,   -95,  1120,
    -416,   -54,  -416,  -416,   147,    79,   102,  -416,   419,  -416,
    -416,   -94,   218,  -416,  -416,  -416,   -46,  -416,  -268,  -416,
    -416,  -416,   177,  -416,  -311,  -416,   -35,   321,  -103,   963,
    1848,  -379,  -416,  -416,  -416,  -416,  -183,  -416,  -416,  -345,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,     9,    11,
    -415,  -203,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,   152,  -416,  -416,  -416,   -57,  -416,   -96,    54,   121,
      94,  1273,  -416,   189,    55,  -416,   203,   198,   201,   207,
     202,    63,    77,    65,    82,   -89,   335,   446,  -360,  -416,
     581,   727,   838
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    57,    58,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   110,    60,    61,    62,    63,   181,
      65,   264,    20,    21,    22,    23,    39,    67,    68,    69,
      70,   150,   151,   365,    71,    72,    84,   172,   173,   161,
      73,    74,    85,   164,   322,    24,   112,   113,   114,   115,
     451,   116,   117,   118,   453,   119,   120,   121,   122,   123,
     455,   124,   125,   456,   126,   457,   127,   458,   317,   318,
     439,   440,   128,   459,   129,   130,   131,   132,   133,   134,
     333,   334,   135,   136,   137,   182,   139,   140,   183,   142,
     245,   323,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     138,    59,   217,    76,   220,   217,   154,   219,   319,   218,
     247,   376,   222,   152,   109,   290,   230,   418,   265,    49,
     288,   434,    44,   277,   158,    49,   473,   475,   316,   156,
      59,   174,    76,    36,   452,   169,   162,    47,    50,    34,
     279,     2,   265,   265,    50,   171,    26,   265,    36,    25,
      36,    52,    51,   302,   210,   303,   138,    52,   411,    34,
      29,   490,   270,    36,   328,   411,     1,   411,   454,   304,
     246,   226,   278,   468,   266,   291,    45,   289,     2,   217,
       6,     7,   217,   217,   217,   282,   281,    55,   510,   285,
     286,   287,     8,    55,   280,     4,   519,   521,   337,   370,
     452,    42,   452,   403,   155,    26,   138,   530,    49,   269,
     271,   141,   412,   465,    40,    80,   312,     6,     7,   460,
     272,   483,   372,    26,   169,   206,     2,    50,   452,     8,
     452,    46,   276,    38,   454,    26,   454,   153,   452,   452,
      52,   452,    38,    41,   452,    42,   296,   452,   297,   452,
     452,   461,   212,    81,   138,   138,   452,   166,   208,   479,
     207,   377,   454,    27,   454,     6,     7,   141,   170,    31,
     247,   373,   454,   454,   315,   454,    55,     8,   454,  -192,
     165,   454,   213,   454,   454,    66,   163,    37,  -192,   213,
     454,    38,   138,   209,   217,   167,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,    66,    75,   138,   141,   400,   401,
     402,   407,   316,   374,    37,   233,    77,   445,   378,   380,
     371,  -194,   263,   331,   331,   367,    49,   263,     1,    78,
    -194,    47,   171,   157,    75,    79,   143,   268,   332,   421,
       2,   250,   160,   237,   268,    50,   251,   153,   316,   316,
     268,    82,   153,    26,     3,   141,   141,     4,    52,   252,
      80,   432,   415,   416,    82,   319,   404,    83,   433,     1,
       5,   217,   253,   261,   254,   217,    33,    35,   431,     6,
       7,     2,   262,   316,   149,   316,   153,   420,   255,   307,
     256,     8,   143,   141,    55,     3,   257,    48,     4,   258,
     437,   168,   259,   326,   327,   308,  -289,   309,   429,    87,
     316,   211,   260,    89,   214,  -289,   227,   141,   316,   316,
       6,     7,   220,   175,   229,   219,   217,   217,    92,   316,
     217,  -290,     8,   467,   248,   305,   267,   176,   138,   249,
    -290,    96,   143,   138,   306,   177,   138,   298,   299,   389,
     390,   178,   268,    98,    99,   100,   138,   395,   396,   397,
     179,   274,   101,   300,   301,   391,   392,   393,   394,   275,
     321,   138,   171,   213,   138,   138,   462,   398,   399,   104,
     292,   293,   144,   294,   295,   180,   310,   311,   325,   237,
     143,   143,   340,   329,   330,   336,   352,   369,   375,   381,
     409,   413,   408,   410,   138,   138,   414,   138,   419,   138,
     138,   138,   138,   424,   138,   423,   427,   425,   430,   138,
     435,   138,   138,   436,   441,   265,   476,   466,   143,   471,
    -111,   315,   481,   478,   477,   138,   138,   498,   144,   480,
     138,   482,   138,   486,   138,   138,   488,   502,   506,   141,
     138,   138,   143,   138,   141,   138,   138,   141,   505,   138,
     507,   138,   138,   511,   522,   517,   523,   141,   138,   526,
     528,   535,    32,   368,   273,   422,   159,   493,   428,   494,
     385,   469,   141,   383,   386,   141,   141,   388,   144,     0,
       0,   387,     0,   145,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   141,   141,     0,   141,     0,
     141,   141,   141,   141,     0,   141,     0,     0,     0,     0,
     141,     0,   141,   141,     0,     0,   144,   144,     0,     0,
       0,     0,     0,     0,     0,     0,   141,   141,     0,   145,
       0,   141,     0,   141,     0,   141,   141,     0,     0,     0,
       0,   141,   141,     0,   141,     0,   141,   141,     0,     0,
     141,     0,   141,   141,   144,     0,     0,     0,     0,   141,
       0,     0,     0,     0,   143,     0,     0,     0,     0,   143,
       0,   231,   143,     0,     0,     0,   232,     0,   144,   145,
       0,     0,   143,     0,     0,     0,   233,     0,     0,   234,
       0,     0,     0,     0,     0,     0,     0,   143,     0,     0,
     143,   143,   235,     0,   236,   -36,     0,     0,   146,     0,
       0,     0,     0,     0,   237,     0,     0,     0,   238,     0,
     239,     0,     0,     0,     0,     0,   240,   145,   145,   241,
     143,   143,   242,   143,     0,   143,   143,   143,   143,     0,
     143,     0,   243,     0,   244,   143,     0,   143,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,   143,     0,   146,   145,   143,     0,   143,     0,
     143,   143,     0,     0,    49,     0,   143,   143,     0,   143,
       0,   143,   143,     0,     0,   143,     0,   143,   143,   145,
       2,     0,     0,    50,   143,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,    52,     0,    37,     0,
     144,     0,     0,     0,   146,   144,     0,     0,   144,     0,
      87,     0,     0,     0,    89,     0,     0,     0,   144,     6,
       7,     0,     0,    53,   175,     0,    54,     0,     0,    92,
       0,     8,    55,   144,     0,     0,   144,   144,   176,     0,
       0,     0,    96,    56,   147,     0,   177,     0,     0,     0,
       0,     0,   146,   146,     0,    99,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   144,     0,   144,
       0,   144,   144,   144,   144,     0,   144,     0,     0,     0,
     104,   144,     0,   144,   144,     0,   180,     0,     0,     0,
     146,     0,     0,     0,     0,     0,     0,   144,   144,     0,
     147,     0,   144,     0,   144,     0,   144,   144,     0,     0,
       0,   145,   144,   144,   146,   144,   145,   144,   144,   145,
       0,   144,     0,   144,   144,     0,     0,     0,     0,   145,
     144,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   145,     0,     0,   145,   145,     0,
     147,     0,     0,     0,     0,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   145,   145,     0,
     145,     0,   145,   145,   145,   145,     0,   145,     0,     0,
       0,     0,   145,     0,   145,   145,     0,     0,   147,   147,
       0,     0,     0,     0,     0,     0,     0,     0,   145,   145,
       0,   148,     0,   145,     0,   145,     0,   145,   145,     0,
       0,     0,     0,   145,   145,     0,   145,     0,   145,   145,
       0,     0,   145,     0,   145,   145,   147,     0,     0,     0,
       0,   145,     0,     0,     0,     0,   146,     0,     0,     0,
       0,   146,     0,   231,   146,     0,     0,     0,   232,     0,
     147,   148,     0,     0,   146,     0,     0,     0,   233,     0,
       0,   234,     0,     0,     0,     0,     0,     0,     0,   146,
       0,     0,   146,   146,   235,     0,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,     0,     0,     0,
     238,     0,   239,     0,     0,     0,     0,     0,   240,   148,
     148,   241,   146,   146,   242,   146,     0,   146,   146,   146,
     146,     0,   146,     0,   243,     0,   244,   146,     0,   146,
     146,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   146,   146,     0,     0,   148,   146,     0,
     146,     0,   146,   146,     0,     0,     0,     0,   146,   146,
       0,   146,     0,   146,   146,     0,     0,   146,     0,   146,
     146,   148,   231,     0,     0,     0,   146,   232,     0,     0,
       0,     0,     0,    28,     0,    30,     0,   233,     0,     0,
     234,     0,   147,     0,     0,     0,     0,   147,     0,     0,
     147,     0,     0,   235,    87,   236,     0,    43,    89,     0,
     147,     0,     0,     0,     0,   379,     0,     0,    64,   238,
       0,   239,     0,    92,     0,   147,     0,   240,   147,   147,
     241,     0,   176,   242,     0,   320,    96,   111,     0,     0,
      97,     0,     0,   243,     0,   244,    64,    64,    98,    99,
     100,     0,     0,     0,     0,     0,     0,   101,   147,   147,
       0,   147,    64,   147,   147,   147,   147,     0,   147,     0,
       0,    64,   353,   147,   104,   147,   147,     0,   216,   221,
       0,   216,     0,     0,     0,     0,     0,     0,     0,   147,
     147,     0,     0,   111,   147,     0,   147,     0,   147,   147,
       0,     0,     0,   148,   147,   147,     0,   147,   148,   147,
     147,   148,     0,   147,     0,   147,   147,     0,     0,     0,
       0,   148,   147,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   148,     0,     0,   148,
     148,     0,     0,   111,     0,     0,     0,     0,     0,    64,
       0,     0,     0,     0,     0,   216,     0,   283,   216,   216,
     216,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     148,     0,   148,     0,   148,   148,   148,   148,     0,   148,
       0,     0,     0,     0,   148,     0,   148,   148,     0,     0,
       0,   111,     0,     0,     0,     0,     0,     0,     0,     0,
     148,   148,     0,     0,     0,   148,     0,   148,     0,   148,
     148,     0,     0,     0,     0,   148,   148,     0,   148,   184,
     148,   148,     0,     0,   148,     0,   148,   148,     0,     0,
     215,     0,     0,   148,     0,   224,   450,     0,   225,     0,
       0,   228,     0,     0,     0,     0,   463,     0,     0,     0,
       0,     0,     0,   111,     0,     0,     0,     0,     0,    64,
       0,   470,     0,     0,     0,     0,     0,     0,     0,     0,
     216,     0,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
       0,     0,     0,    64,   484,   485,     0,   487,     0,     0,
     491,     0,   320,     0,   353,     0,     0,     0,     0,   499,
     284,   500,   501,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   508,     0,     0,     0,     0,
     463,     0,   470,     0,     0,     0,     0,     0,     0,     0,
     484,   485,     0,   487,     0,     0,   491,   324,     0,   499,
       0,   500,   501,     0,     0,     0,     0,   216,   508,     0,
     335,   216,     0,     0,   338,   339,     0,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,     0,     0,
       0,     0,     0,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,     0,     0,   366,     0,     0,    64,
       0,     0,     0,     0,     0,     0,     0,    64,     0,     0,
       0,     0,   216,   216,     0,     0,   216,     0,     0,     0,
       0,   382,     0,     0,   384,     0,     0,    87,     0,    86,
       0,    89,     0,    87,    49,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,    92,   406,     0,     0,
      91,     0,    92,    50,    93,   176,     0,     0,   111,    96,
       0,    94,    95,    97,     0,    96,    52,     0,    37,    97,
       0,    98,    99,   100,     0,     0,     0,    98,    99,   100,
     101,     0,     0,     0,     0,   426,   101,     0,   438,     0,
       0,     0,   102,    53,     0,     0,   103,   104,     0,     0,
       0,     0,    55,   104,     0,     0,     0,   105,     0,     0,
       0,   106,   344,    86,   107,   108,     0,    87,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,    93,     0,
       0,   443,   444,     0,   446,    94,    95,   426,     0,    96,
       0,     0,    37,    97,     0,     0,     0,     0,     0,     0,
       0,    98,    99,   100,     0,     0,     0,     0,     0,    86,
     101,     0,     0,    87,     0,    88,   102,    89,     0,     0,
     103,    90,     0,     0,     0,     0,     0,   104,     0,     0,
       0,   105,    92,     0,   447,   106,     0,     0,   107,   108,
       0,   448,    95,     0,     0,    96,     0,     0,    37,    97,
       0,     0,     0,   496,     0,     0,     0,    98,    99,   100,
       0,     0,     0,     0,     0,   504,   101,     0,     0,     0,
      87,    49,   102,     0,    89,     0,   103,     0,   513,   514,
       0,     0,     0,   104,   175,     0,     0,   105,     0,    92,
      50,   106,     0,     0,   449,   108,     0,     0,   176,     0,
       0,     0,    96,    52,     0,    87,   177,     0,     0,    89,
       0,     0,   178,     0,    98,    99,   100,     0,     0,   175,
       0,   179,     0,   101,    92,     0,     0,     0,     0,     0,
       0,     0,     0,   176,    87,     0,     0,    96,    89,    55,
     104,   177,     0,     0,     0,     0,   180,   178,   175,    98,
      99,   100,     0,    92,     0,     0,   179,     0,   101,     0,
       0,     0,   176,    87,     0,     0,    96,    89,   223,     0,
     177,     0,     0,     0,     0,   104,   178,   175,    98,    99,
     100,   180,    92,     0,     0,   179,     0,   101,     0,     0,
       0,   176,     0,     0,     0,    96,     0,   405,    87,   177,
       0,     0,    89,     0,   104,   178,     0,    98,    99,   100,
     180,     0,   175,     0,   179,     0,   101,    92,     0,     0,
       0,     0,     0,     0,   417,     0,   176,    87,     0,     0,
      96,    89,     0,   104,   177,     0,     0,     0,     0,   180,
     178,   175,    98,    99,   100,     0,    92,     0,     0,   179,
       0,   101,     0,     0,     0,   176,     0,     0,     0,    96,
     267,     0,     0,   177,     0,     0,     0,     0,   104,   178,
       0,    98,    99,   100,   180,     0,     0,    87,   179,     0,
     101,    89,     0,     0,     0,     0,     0,     0,     0,     0,
     442,   175,     0,     0,     0,     0,    92,   104,     0,     0,
       0,     0,     0,   180,     0,   176,     0,     0,     0,    96,
       0,     0,    87,   177,     0,     0,    89,     0,     0,   178,
       0,    98,    99,   100,     0,     0,   175,     0,   179,     0,
     101,    92,    87,     0,     0,     0,    89,     0,   464,     0,
     176,     0,     0,     0,    96,     0,   175,   104,   177,     0,
       0,    92,     0,   180,   178,     0,    98,    99,   100,     0,
     176,     0,     0,   179,    96,   101,     0,     0,   177,     0,
       0,     0,     0,     0,   178,   503,    98,    99,   100,     0,
       0,     0,   104,   179,     0,   101,    87,     0,   180,     0,
      89,     0,     0,     0,     0,   512,     0,     0,     0,     0,
     175,     0,   104,     0,     0,    92,     0,     0,   180,     0,
       0,     0,     0,     0,   176,     0,     0,     0,    96,     0,
       0,     0,   177,     0,     0,    87,    49,     0,   178,    89,
      98,    99,   100,     0,     0,     0,     0,   179,     0,   101,
       0,     0,   313,     0,    92,    50,     0,    87,    49,     0,
       0,    89,     0,   176,     0,     0,   104,    96,    52,     0,
       0,    97,   180,     0,   313,     0,    92,    50,     0,    98,
      99,   100,     0,     0,     0,   176,     0,    87,   101,    96,
      52,    89,     0,    97,     0,     0,     0,     0,   314,     0,
       0,    98,    99,   100,    55,   104,    92,     0,     0,    87,
     101,     0,     0,    89,     0,   176,     0,     0,     0,    96,
     492,     0,     0,    97,     0,     0,    55,   104,    92,     0,
       0,    98,    99,   100,     0,     0,     0,   176,     0,    87,
     101,    96,     0,    89,     0,    97,     0,     0,   472,     0,
       0,     0,     0,    98,    99,   100,     0,   104,    92,    87,
       0,     0,   101,    89,     0,     0,     0,   176,     0,     0,
     474,    96,     0,     0,     0,    97,     0,     0,    92,   104,
       0,     0,    87,    98,    99,   100,    89,   176,     0,     0,
       0,    96,   101,     0,     0,    97,     0,     0,     0,     0,
     489,    92,    87,    98,    99,   100,    89,     0,     0,   104,
     176,     0,   101,    87,    96,     0,     0,    89,    97,     0,
     509,    92,     0,     0,     0,     0,    98,    99,   100,   104,
     176,     0,    92,     0,    96,   101,     0,   495,    97,   497,
       0,   176,     0,   518,     0,    96,    98,    99,   100,    97,
       0,     0,   104,     0,     0,   101,     0,    98,    99,   100,
       0,     0,     0,   520,     0,   515,   101,   516,     0,     0,
       0,     0,   104,     0,   529,   524,   525,     0,   527,     0,
       0,   531,     0,   104,   532,     0,   533,   534,     0,     0,
       0,     0,     0,   536
};

static const yytype_int16 yycheck[] =
{
      57,    38,    98,    38,    99,   101,    60,    99,   211,    98,
     113,   279,   101,    59,    57,     9,   110,   328,    18,    12,
      17,   381,    20,    39,    67,    12,   441,   442,   211,    66,
      67,    85,    67,    18,   413,    28,    71,    20,    31,    12,
      18,    28,    18,    18,    31,    82,    39,    18,    33,    39,
      35,    44,    39,    35,    91,    37,   113,    44,    18,    32,
      39,   476,   156,    48,    47,    18,    16,    18,   413,    51,
     113,   106,    88,   433,    74,    69,    74,    74,    28,   175,
      67,    68,   178,   179,   180,   177,   175,    80,   503,   178,
     179,   180,    79,    80,    72,    45,   511,   512,    74,    74,
     479,    22,   481,    74,    91,    39,   163,   522,    12,   155,
     156,    57,    72,   424,    16,    39,   210,    67,    68,    72,
     163,    72,    39,    39,    28,    39,    28,    31,   507,    79,
     509,    29,   169,    20,   479,    39,   481,    48,   517,   518,
      44,   520,    29,    45,   523,    66,    24,   526,    26,   528,
     529,   419,    17,    77,   211,   212,   535,    39,    39,    17,
      74,    72,   507,    79,   509,    67,    68,   113,    72,     0,
     273,    88,   517,   518,   211,   520,    80,    79,   523,    55,
      78,   526,    47,   528,   529,    38,    73,    46,    64,    47,
     535,    78,   249,    74,   290,    77,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,    67,    38,   273,   163,   307,   308,
     309,   315,   405,   277,    46,    20,    39,   410,   282,   283,
     273,    55,    23,    14,    14,    23,    12,    23,    16,    39,
      64,    20,   279,    66,    67,    20,    57,    48,    29,    29,
      28,     5,    74,    48,    48,    31,    10,    48,   441,   442,
      48,    47,    48,    39,    42,   211,   212,    45,    44,    23,
      39,    72,   326,   327,    47,   478,   313,    39,    72,    16,
      58,   377,    36,    55,    38,   381,    11,    12,   377,    67,
      68,    28,    64,   476,    39,   478,    48,   332,    52,    59,
      54,    79,   113,   249,    80,    42,    60,    32,    45,    63,
     404,    74,    66,   219,   220,    75,    55,    77,   372,    11,
     503,    47,    76,    15,    47,    64,    47,   273,   511,   512,
      67,    68,   427,    25,    39,   427,   432,   433,    30,   522,
     436,    55,    79,   432,    74,    53,    73,    39,   405,    22,
      64,    43,   163,   410,    62,    47,   413,    33,    34,   296,
     297,    53,    48,    55,    56,    57,   423,   302,   303,   304,
      62,    74,    64,    49,    50,   298,   299,   300,   301,    74,
      72,   438,   419,    47,   441,   442,   421,   305,   306,    81,
       4,     8,    57,    65,     3,    87,    74,    74,    72,    48,
     211,   212,    39,    74,    74,    74,    48,    73,    39,    72,
      17,    72,    74,    18,   471,   472,    48,   474,    47,   476,
     477,   478,   479,    47,   481,    72,    56,    73,    39,   486,
      74,   488,   489,    17,    74,    18,    74,    73,   249,    72,
      22,   478,    22,    47,    72,   502,   503,   482,   113,    47,
     507,    72,   509,    72,   511,   512,    72,    72,    17,   405,
     517,   518,   273,   520,   410,   522,   523,   413,    74,   526,
      72,   528,   529,    74,    74,    72,    72,   423,   535,    72,
      72,    72,    11,   265,   163,   333,    67,   478,   367,   478,
     292,   436,   438,   290,   293,   441,   442,   295,   163,    -1,
      -1,   294,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   471,   472,    -1,   474,    -1,
     476,   477,   478,   479,    -1,   481,    -1,    -1,    -1,    -1,
     486,    -1,   488,   489,    -1,    -1,   211,   212,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   502,   503,    -1,   113,
      -1,   507,    -1,   509,    -1,   511,   512,    -1,    -1,    -1,
      -1,   517,   518,    -1,   520,    -1,   522,   523,    -1,    -1,
     526,    -1,   528,   529,   249,    -1,    -1,    -1,    -1,   535,
      -1,    -1,    -1,    -1,   405,    -1,    -1,    -1,    -1,   410,
      -1,     5,   413,    -1,    -1,    -1,    10,    -1,   273,   163,
      -1,    -1,   423,    -1,    -1,    -1,    20,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   438,    -1,    -1,
     441,   442,    36,    -1,    38,    39,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,   211,   212,    63,
     471,   472,    66,   474,    -1,   476,   477,   478,   479,    -1,
     481,    -1,    76,    -1,    78,   486,    -1,   488,   489,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   502,   503,    -1,   113,   249,   507,    -1,   509,    -1,
     511,   512,    -1,    -1,    12,    -1,   517,   518,    -1,   520,
      -1,   522,   523,    -1,    -1,   526,    -1,   528,   529,   273,
      28,    -1,    -1,    31,   535,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    44,    -1,    46,    -1,
     405,    -1,    -1,    -1,   163,   410,    -1,    -1,   413,    -1,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,   423,    67,
      68,    -1,    -1,    71,    25,    -1,    74,    -1,    -1,    30,
      -1,    79,    80,   438,    -1,    -1,   441,   442,    39,    -1,
      -1,    -1,    43,    91,    57,    -1,    47,    -1,    -1,    -1,
      -1,    -1,   211,   212,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   471,   472,    -1,   474,
      -1,   476,   477,   478,   479,    -1,   481,    -1,    -1,    -1,
      81,   486,    -1,   488,   489,    -1,    87,    -1,    -1,    -1,
     249,    -1,    -1,    -1,    -1,    -1,    -1,   502,   503,    -1,
     113,    -1,   507,    -1,   509,    -1,   511,   512,    -1,    -1,
      -1,   405,   517,   518,   273,   520,   410,   522,   523,   413,
      -1,   526,    -1,   528,   529,    -1,    -1,    -1,    -1,   423,
     535,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   438,    -1,    -1,   441,   442,    -1,
     163,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   471,   472,    -1,
     474,    -1,   476,   477,   478,   479,    -1,   481,    -1,    -1,
      -1,    -1,   486,    -1,   488,   489,    -1,    -1,   211,   212,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   502,   503,
      -1,   113,    -1,   507,    -1,   509,    -1,   511,   512,    -1,
      -1,    -1,    -1,   517,   518,    -1,   520,    -1,   522,   523,
      -1,    -1,   526,    -1,   528,   529,   249,    -1,    -1,    -1,
      -1,   535,    -1,    -1,    -1,    -1,   405,    -1,    -1,    -1,
      -1,   410,    -1,     5,   413,    -1,    -1,    -1,    10,    -1,
     273,   163,    -1,    -1,   423,    -1,    -1,    -1,    20,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   438,
      -1,    -1,   441,   442,    36,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,   211,
     212,    63,   471,   472,    66,   474,    -1,   476,   477,   478,
     479,    -1,   481,    -1,    76,    -1,    78,   486,    -1,   488,
     489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   502,   503,    -1,    -1,   249,   507,    -1,
     509,    -1,   511,   512,    -1,    -1,    -1,    -1,   517,   518,
      -1,   520,    -1,   522,   523,    -1,    -1,   526,    -1,   528,
     529,   273,     5,    -1,    -1,    -1,   535,    10,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,    -1,    20,    -1,    -1,
      23,    -1,   405,    -1,    -1,    -1,    -1,   410,    -1,    -1,
     413,    -1,    -1,    36,    11,    38,    -1,    27,    15,    -1,
     423,    -1,    -1,    -1,    -1,    48,    -1,    -1,    38,    52,
      -1,    54,    -1,    30,    -1,   438,    -1,    60,   441,   442,
      63,    -1,    39,    66,    -1,   212,    43,    57,    -1,    -1,
      47,    -1,    -1,    76,    -1,    78,    66,    67,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,   471,   472,
      -1,   474,    82,   476,   477,   478,   479,    -1,   481,    -1,
      -1,    91,   249,   486,    81,   488,   489,    -1,    98,    99,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   502,
     503,    -1,    -1,   113,   507,    -1,   509,    -1,   511,   512,
      -1,    -1,    -1,   405,   517,   518,    -1,   520,   410,   522,
     523,   413,    -1,   526,    -1,   528,   529,    -1,    -1,    -1,
      -1,   423,   535,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   438,    -1,    -1,   441,
     442,    -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,   169,
      -1,    -1,    -1,    -1,    -1,   175,    -1,   177,   178,   179,
     180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   471,
     472,    -1,   474,    -1,   476,   477,   478,   479,    -1,   481,
      -1,    -1,    -1,    -1,   486,    -1,   488,   489,    -1,    -1,
      -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     502,   503,    -1,    -1,    -1,   507,    -1,   509,    -1,   511,
     512,    -1,    -1,    -1,    -1,   517,   518,    -1,   520,    86,
     522,   523,    -1,    -1,   526,    -1,   528,   529,    -1,    -1,
      97,    -1,    -1,   535,    -1,   102,   413,    -1,   105,    -1,
      -1,   108,    -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,
      -1,    -1,    -1,   273,    -1,    -1,    -1,    -1,    -1,   279,
      -1,   438,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     290,    -1,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
      -1,    -1,    -1,   313,   471,   472,    -1,   474,    -1,    -1,
     477,    -1,   479,    -1,   481,    -1,    -1,    -1,    -1,   486,
     177,   488,   489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,    -1,
     507,    -1,   509,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     517,   518,    -1,   520,    -1,    -1,   523,   214,    -1,   526,
      -1,   528,   529,    -1,    -1,    -1,    -1,   377,   535,    -1,
     227,   381,    -1,    -1,   231,   232,    -1,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,    -1,    -1,
      -1,    -1,    -1,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,    -1,    -1,   263,    -1,    -1,   419,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   427,    -1,    -1,
      -1,    -1,   432,   433,    -1,    -1,   436,    -1,    -1,    -1,
      -1,   288,    -1,    -1,   291,    -1,    -1,    11,    -1,     7,
      -1,    15,    -1,    11,    12,    13,    -1,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    30,   314,    -1,    -1,
      28,    -1,    30,    31,    32,    39,    -1,    -1,   478,    43,
      -1,    39,    40,    47,    -1,    43,    44,    -1,    46,    47,
      -1,    55,    56,    57,    -1,    -1,    -1,    55,    56,    57,
      64,    -1,    -1,    -1,    -1,   352,    64,    -1,    72,    -1,
      -1,    -1,    70,    71,    -1,    -1,    74,    81,    -1,    -1,
      -1,    -1,    80,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    89,   379,     7,    92,    93,    -1,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    -1,
      -1,   408,   409,    -1,   411,    39,    40,   414,    -1,    43,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,     7,
      64,    -1,    -1,    11,    -1,    13,    70,    15,    -1,    -1,
      74,    19,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    30,    -1,    32,    89,    -1,    -1,    92,    93,
      -1,    39,    40,    -1,    -1,    43,    -1,    -1,    46,    47,
      -1,    -1,    -1,   480,    -1,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,   492,    64,    -1,    -1,    -1,
      11,    12,    70,    -1,    15,    -1,    74,    -1,   505,   506,
      -1,    -1,    -1,    81,    25,    -1,    -1,    85,    -1,    30,
      31,    89,    -1,    -1,    92,    93,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    11,    47,    -1,    -1,    15,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    -1,    25,
      -1,    62,    -1,    64,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    11,    -1,    -1,    43,    15,    80,
      81,    47,    -1,    -1,    -1,    -1,    87,    53,    25,    55,
      56,    57,    -1,    30,    -1,    -1,    62,    -1,    64,    -1,
      -1,    -1,    39,    11,    -1,    -1,    43,    15,    74,    -1,
      47,    -1,    -1,    -1,    -1,    81,    53,    25,    55,    56,
      57,    87,    30,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    -1,    74,    11,    47,
      -1,    -1,    15,    -1,    81,    53,    -1,    55,    56,    57,
      87,    -1,    25,    -1,    62,    -1,    64,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    39,    11,    -1,    -1,
      43,    15,    -1,    81,    47,    -1,    -1,    -1,    -1,    87,
      53,    25,    55,    56,    57,    -1,    30,    -1,    -1,    62,
      -1,    64,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      73,    -1,    -1,    47,    -1,    -1,    -1,    -1,    81,    53,
      -1,    55,    56,    57,    87,    -1,    -1,    11,    62,    -1,
      64,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    25,    -1,    -1,    -1,    -1,    30,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    39,    -1,    -1,    -1,    43,
      -1,    -1,    11,    47,    -1,    -1,    15,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,    -1,    25,    -1,    62,    -1,
      64,    30,    11,    -1,    -1,    -1,    15,    -1,    72,    -1,
      39,    -1,    -1,    -1,    43,    -1,    25,    81,    47,    -1,
      -1,    30,    -1,    87,    53,    -1,    55,    56,    57,    -1,
      39,    -1,    -1,    62,    43,    64,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    74,    55,    56,    57,    -1,
      -1,    -1,    81,    62,    -1,    64,    11,    -1,    87,    -1,
      15,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      25,    -1,    81,    -1,    -1,    30,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,    -1,    -1,    11,    12,    -1,    53,    15,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,
      -1,    -1,    28,    -1,    30,    31,    -1,    11,    12,    -1,
      -1,    15,    -1,    39,    -1,    -1,    81,    43,    44,    -1,
      -1,    47,    87,    -1,    28,    -1,    30,    31,    -1,    55,
      56,    57,    -1,    -1,    -1,    39,    -1,    11,    64,    43,
      44,    15,    -1,    47,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    55,    56,    57,    80,    81,    30,    -1,    -1,    11,
      64,    -1,    -1,    15,    -1,    39,    -1,    -1,    -1,    43,
      74,    -1,    -1,    47,    -1,    -1,    80,    81,    30,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    39,    -1,    11,
      64,    43,    -1,    15,    -1,    47,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    55,    56,    57,    -1,    81,    30,    11,
      -1,    -1,    64,    15,    -1,    -1,    -1,    39,    -1,    -1,
      72,    43,    -1,    -1,    -1,    47,    -1,    -1,    30,    81,
      -1,    -1,    11,    55,    56,    57,    15,    39,    -1,    -1,
      -1,    43,    64,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      72,    30,    11,    55,    56,    57,    15,    -1,    -1,    81,
      39,    -1,    64,    11,    43,    -1,    -1,    15,    47,    -1,
      72,    30,    -1,    -1,    -1,    -1,    55,    56,    57,    81,
      39,    -1,    30,    -1,    43,    64,    -1,   479,    47,   481,
      -1,    39,    -1,    72,    -1,    43,    55,    56,    57,    47,
      -1,    -1,    81,    -1,    -1,    64,    -1,    55,    56,    57,
      -1,    -1,    -1,    72,    -1,   507,    64,   509,    -1,    -1,
      -1,    -1,    81,    -1,    72,   517,   518,    -1,   520,    -1,
      -1,   523,    -1,    81,   526,    -1,   528,   529,    -1,    -1,
      -1,    -1,    -1,   535
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
      60,    63,    66,    76,    78,   184,    97,   142,    74,    22,
       5,    10,    23,    36,    38,    52,    54,    60,    63,    66,
      76,    55,    64,    23,   115,    18,    74,    73,    48,   130,
     125,   130,    97,   141,    74,    74,   108,    39,    88,    18,
      72,   199,   109,   113,   185,   199,   199,   199,    17,    74,
       9,    69,     4,     8,    65,     3,    24,    26,    33,    34,
      49,    50,    35,    37,    51,    53,    62,    59,    75,    77,
      74,    74,   125,    28,    74,   108,   150,   162,   163,   165,
     143,    72,   138,   185,   185,    72,   184,   184,    47,    74,
      74,    14,    29,   174,   175,   185,    74,    74,   185,   185,
      39,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,    48,   143,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   127,   185,    23,   126,    73,
      74,    97,    39,    88,   115,    39,   132,    72,   115,    48,
     115,    72,   185,   190,   185,   191,   192,   193,   194,   195,
     195,   196,   196,   196,   196,   197,   197,   197,   198,   198,
     199,   199,   199,    74,   108,    74,   185,   125,    74,    17,
      18,    18,    72,    72,    48,   115,   115,    72,   138,    47,
     140,    29,   175,    72,    47,    73,   185,    56,   183,   115,
      39,   199,    72,    72,   202,    74,    17,   125,    72,   164,
     165,    74,    74,   185,   185,   150,   185,    32,    39,    92,
     143,   144,   145,   148,   153,   154,   157,   159,   161,   167,
      72,   132,   140,   143,    72,   138,    73,   199,   202,   188,
     143,    72,    72,   164,    72,   164,    74,    72,    47,    17,
      47,    22,    72,    72,   143,   143,    72,   143,    72,    72,
     164,   143,    74,   162,   163,   144,   185,   144,   140,   143,
     143,   143,    72,    74,   185,    74,    17,    72,   143,    72,
     164,    74,    74,   185,   185,   144,   144,    72,    72,   164,
      72,   164,    74,    72,   144,   144,    72,   144,    72,    72,
     164,   144,   144,   144,   144,    72,   144
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
     178,   179,   180,   180,   181,   182,   182,   182,   182,   183,
     183,   183,   183,   184,   184,   185,   186,   186,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   188,   188,   189,   189,   190,   190,   191,   191,   192,
     192,   193,   193,   194,   194,   194,   195,   195,   195,   195,
     195,   196,   196,   196,   196,   197,   197,   197,   198,   198,
     198,   198,   199,   199,   199,   199,   199,   200,   201,   202,
     202,   202,   202,   203,   203,   203,   203,   204,   204,   204,
     204,   205,   206
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
       1,     1,     4,     5,     2,     3,     4,     5,     6,     3,
       4,     3,     4,     4,     3,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     5,     1,     3,     1,     3,     1,     3,     1,
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
  case 3:
#line 74 "parser.y"
                           {new_scope();}
#line 2368 "parser.tab.c"
    break;

  case 4:
#line 75 "parser.y"
                                {old_scope();}
#line 2374 "parser.tab.c"
    break;

  case 27:
#line 130 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->type);}
#line 2380 "parser.tab.c"
    break;

  case 28:
#line 131 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->type);}
#line 2386 "parser.tab.c"
    break;

  case 29:
#line 135 "parser.y"
                 {strcpy((yyval.item)->type,(yyvsp[0].item)->type);}
#line 2392 "parser.tab.c"
    break;

  case 30:
#line 136 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2398 "parser.tab.c"
    break;

  case 31:
#line 137 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2404 "parser.tab.c"
    break;

  case 32:
#line 141 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2410 "parser.tab.c"
    break;

  case 33:
#line 142 "parser.y"
                        {strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2416 "parser.tab.c"
    break;

  case 34:
#line 146 "parser.y"
                {check_gst((yyvsp[0].item)->label); strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2422 "parser.tab.c"
    break;

  case 35:
#line 147 "parser.y"
                        {strcpy((yyval.item)->type,(yyvsp[0].item)->type);}
#line 2428 "parser.tab.c"
    break;

  case 36:
#line 151 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2434 "parser.tab.c"
    break;

  case 37:
#line 155 "parser.y"
                                {strcpy((yyval.item)->label,strcat((yyvsp[-2].item)->label,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->label)));}
#line 2440 "parser.tab.c"
    break;

  case 38:
#line 156 "parser.y"
                        {strcpy((yyval.item)->label,(yyvsp[0].item)->label);}
#line 2446 "parser.tab.c"
    break;

  case 39:
#line 160 "parser.y"
                        {string t; for(int i=0;i<(yyvsp[-1].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->type,strcat((yyvsp[-1].item)->type,t.c_str()));}
#line 2452 "parser.tab.c"
    break;

  case 40:
#line 164 "parser.y"
                                          {(yyval.item)->dims = (yyvsp[-2].item)->dims+1;}
#line 2458 "parser.tab.c"
    break;

  case 41:
#line 165 "parser.y"
                                        {(yyval.item)->dims = 1;}
#line 2464 "parser.tab.c"
    break;

  case 42:
#line 169 "parser.y"
                    {strcpy((yyval.item)->type,""); strcpy((yyval.item)->label,(yyvsp[0].item)->label); line_number = yylineno;  if(!first_parse) go_in_scope((yyvsp[0].item)->label);curr_class_name = (yyvsp[0].item)->label;}
#line 2470 "parser.tab.c"
    break;

  case 43:
#line 170 "parser.y"
                                    {strcpy((yyval.item)->type,(yyvsp[-2].item)->label); strcpy((yyval.item)->label,(yyvsp[0].item)->label); line_number = yylineno;  if(!first_parse) go_in_scope((yyvsp[0].item)->label); curr_class_name = (yyvsp[0].item)->label;}
#line 2476 "parser.tab.c"
    break;

  case 44:
#line 173 "parser.y"
                                        {if(first_parse){string mod = check_class_modifiers((yyvsp[-1].item)->type);make_class_entry((yyvsp[-1].item)->label,line_number,mod);}}
#line 2482 "parser.tab.c"
    break;

  case 45:
#line 177 "parser.y"
                             {strcpy((yyval.item)->label,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->label));}
#line 2488 "parser.tab.c"
    break;

  case 46:
#line 178 "parser.y"
                {strcpy((yyval.item)->label,(yyvsp[0].item)->label);}
#line 2494 "parser.tab.c"
    break;

  case 47:
#line 182 "parser.y"
            {strcpy((yyval.item)->label,"0");}
#line 2500 "parser.tab.c"
    break;

  case 48:
#line 183 "parser.y"
                {strcpy((yyval.item)->label,"1");}
#line 2506 "parser.tab.c"
    break;

  case 49:
#line 184 "parser.y"
                {strcpy((yyval.item)->label,"2");}
#line 2512 "parser.tab.c"
    break;

  case 50:
#line 185 "parser.y"
                {strcpy((yyval.item)->label,"3");}
#line 2518 "parser.tab.c"
    break;

  case 57:
#line 201 "parser.y"
        {reset();}
#line 2524 "parser.tab.c"
    break;

  case 61:
#line 211 "parser.y"
                                        {
    for(int i=0;i<v.size();i++){
        string t = expression_type(yylineno,(yyvsp[-2].item)->type,v[i].second,"declare");
        if(first_parse)   make_entry(v[i].first,t,yylineno,"0000");
    }
    v.clear();	
}
#line 2536 "parser.tab.c"
    break;

  case 62:
#line 218 "parser.y"
                                                        {
    for(int i=0;i<v.size();i++){
        string t = expression_type(yylineno,(yyvsp[-2].item)->type,v[i].second,"declare");
        if(first_parse) make_entry(v[i].first,t,yylineno,check_method_modifiers((yyvsp[-3].item)->label));
    }
    v.clear();
}
#line 2548 "parser.tab.c"
    break;

  case 63:
#line 228 "parser.y"
                                                    {if(!first_parse){(yyval.item)->i_number = (yyvsp[-2].item)->i_number; (yyval.item)->dimension = (yyvsp[-2].item)->dimension;}}
#line 2554 "parser.tab.c"
    break;

  case 64:
#line 229 "parser.y"
                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 2560 "parser.tab.c"
    break;

  case 65:
#line 233 "parser.y"
                                        {if(first_parse)v.push_back(make_pair((yyvsp[-2].item)->label,"")); else{v.push_back(make_pair((yyvsp[-2].item)->label,(yyvsp[0].item)->type)); 
    (yyval.item)->i_number = (yyvsp[0].item)->i_number;
    string p = (yyvsp[0].item)->type;
    if(p=="boolean"){
        emitt("","true","",(yyvsp[-2].item)->label,-1);
        backpatch((yyvsp[0].item)->true_list,inst_num-1);
        emitt("","false","",(yyvsp[-2].item)->label,-1);
        backpatch((yyvsp[0].item)->false_list,inst_num-1);
    }else{
        emitt("",(yyvsp[0].item)->temp_var,"",(yyvsp[-2].item)->label,-1);
    };
}}
#line 2577 "parser.tab.c"
    break;

  case 66:
#line 245 "parser.y"
                {v.push_back(make_pair((yyvsp[0].item)->label,""));}
#line 2583 "parser.tab.c"
    break;

  case 67:
#line 246 "parser.y"
                        {string t; for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); v.push_back(make_pair((yyvsp[-1].item)->label,t));}
#line 2589 "parser.tab.c"
    break;

  case 68:
#line 247 "parser.y"
                                                 {if(first_parse){string t; for(int i=0;i<(yyvsp[-2].item)->dims;i++) t.push_back('*'); v.push_back(make_pair((yyvsp[-3].item)->label,t));}else{if((yyvsp[-2].item)->dims == (yyvsp[0].item)->dims) v.push_back(make_pair((yyvsp[-3].item)->label,(yyvsp[0].item)->type)); else{cout<<"Dimensions of array not matched in line number: "<<yylineno<<endl; exit(1);}array_func((yyvsp[-3].item)->label,(yyvsp[0].item)->dimension,(yyvsp[0].item)->type);(yyval.item)->dimension = (yyvsp[0].item)->dimension; }}
#line 2595 "parser.tab.c"
    break;

  case 69:
#line 251 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2601 "parser.tab.c"
    break;

  case 70:
#line 254 "parser.y"
                        {if((yyvsp[0].item)->dims){cout<<"Void function cant be of array type in line number "<<yylineno<<endl; exit(1);} strcpy((yyval.item)->label,(yyvsp[0].item)->label); strcpy((yyval.item)->type,"void0000"); line_number = yylineno; if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1);(yyval.item)->i_number = inst_num-1;}}
#line 2607 "parser.tab.c"
    break;

  case 71:
#line 255 "parser.y"
                        {string t; for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->label,(yyvsp[0].item)->label); strcpy((yyval.item)->type,strcat((yyvsp[-1].item)->type,(t+"0000").c_str())); line_number = yylineno; if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; (yyval.item)->i_number = inst_num-1;}}
#line 2613 "parser.tab.c"
    break;

  case 72:
#line 256 "parser.y"
                                        {if((yyvsp[-1].item)->dims){cout<<"Void function cant be of array type in line number "<<yylineno<<endl;exit(1);} string x = check_method_modifiers((yyvsp[-2].item)->label); strcpy((yyval.item)->label,(yyvsp[0].item)->label); strcpy((yyval.item)->type,("void"+x).c_str()); line_number = yylineno; if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1);(yyval.item)->i_number = inst_num-1;}}
#line 2619 "parser.tab.c"
    break;

  case 73:
#line 257 "parser.y"
                                        {string t; for(int i=0;i<(yyvsp[-1].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->label,(yyvsp[0].item)->label); string x = check_method_modifiers((yyvsp[-2].item)->label); strcpy((yyval.item)->type,strcat((yyvsp[-1].item)->type,(t+x).c_str())); line_number = yylineno; if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1);(yyval.item)->i_number = inst_num-1;}}
#line 2625 "parser.tab.c"
    break;

  case 74:
#line 260 "parser.y"
                                        {if(first_parse){string x = (yyvsp[-1].item)->type; make_func_entry((yyvsp[-1].item)->label,x.substr(0,x.size()-4),arguments,line_number,x.substr(x.size()-4,4)); arguments.clear();}else{print(curr_class_name+"."+(yyvsp[-1].item)->label);emitt("end","","","",-1); (yyval.item)->i_number = (yyvsp[-1].item)->i_number; backpatch((yyvsp[0].item)->next_list,inst_num-1);}}
#line 2631 "parser.tab.c"
    break;

  case 75:
#line 264 "parser.y"
            {strcpy((yyval.item)->label,(yyvsp[0].item)->label); (yyval.item)->dims = 0;}
#line 2637 "parser.tab.c"
    break;

  case 76:
#line 265 "parser.y"
                        {strcpy((yyval.item)->label,(yyvsp[-1].item)->label); (yyval.item)->dims = (yyvsp[0].item)->dims;}
#line 2643 "parser.tab.c"
    break;

  case 79:
#line 274 "parser.y"
                    {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item)->label,(yyvsp[-1].item)->type,0,0));}}
#line 2649 "parser.tab.c"
    break;

  case 80:
#line 275 "parser.y"
                                        {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item)->label,(yyvsp[-1].item)->type,0,1));}}
#line 2655 "parser.tab.c"
    break;

  case 81:
#line 276 "parser.y"
                                {if(first_parse){string t; for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); arguments.push_back(make_tuple((yyvsp[-1].item)->label,strcat((yyvsp[-2].item)->type,t.c_str()),0,0));}}
#line 2661 "parser.tab.c"
    break;

  case 82:
#line 277 "parser.y"
                                        {if(first_parse){string t; for(int i=0;i<(yyvsp[-1].item)->dims;i++) t.push_back('*'); arguments.push_back(make_tuple((yyvsp[-1].item)->label,strcat((yyvsp[-3].item)->type,t.c_str()),0,1));}}
#line 2667 "parser.tab.c"
    break;

  case 83:
#line 278 "parser.y"
                                        {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item)->label,(yyvsp[-2].item)->type,1,0));}}
#line 2673 "parser.tab.c"
    break;

  case 84:
#line 279 "parser.y"
                                                {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item)->label,(yyvsp[-2].item)->type,1,1));}}
#line 2679 "parser.tab.c"
    break;

  case 85:
#line 283 "parser.y"
        {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number,(yyval.item)->next_list = (yyvsp[0].item)->next_list;}}
#line 2685 "parser.tab.c"
    break;

  case 87:
#line 288 "parser.y"
            {strcpy((yyval.item)->type,"0000"); strcpy((yyval.item)->label,(yyvsp[0].item)->label); line_number = yylineno;  if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1);(yyval.item)->i_number = inst_num-1;}}
#line 2691 "parser.tab.c"
    break;

  case 88:
#line 289 "parser.y"
                            {string x = check_method_modifiers((yyvsp[-1].item)->label); strcpy((yyval.item)->type,x.c_str()); strcpy((yyval.item)->label,(yyvsp[0].item)->label);  line_number = yylineno; if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1);(yyval.item)->i_number = inst_num-1;}}
#line 2697 "parser.tab.c"
    break;

  case 89:
#line 292 "parser.y"
                                             {if(first_parse){check_constructor((yyvsp[0].item)->label); make_func_entry((yyvsp[-1].item)->label,(yyvsp[-1].item)->label,arguments,line_number,(yyvsp[-1].item)->type); arguments.clear();emitt("end","","","",-1); (yyval.item)->i_number = (yyvsp[-1].item)->i_number; backpatch((yyvsp[0].item)->next_list,inst_num-1);}}
#line 2703 "parser.tab.c"
    break;

  case 94:
#line 306 "parser.y"
                                {if(!first_parse){function_call.push_back((yyvsp[0].item)->type);}}
#line 2709 "parser.tab.c"
    break;

  case 95:
#line 307 "parser.y"
                {if(!first_parse){function_call.push_back((yyvsp[0].item)->type);}}
#line 2715 "parser.tab.c"
    break;

  case 96:
#line 312 "parser.y"
                                {if(first_parse) make_class_entry((yyvsp[-1].item)->label,yylineno,"00");}
#line 2721 "parser.tab.c"
    break;

  case 97:
#line 313 "parser.y"
                                                {if(first_parse){string mod = check_class_modifiers((yyvsp[-3].item)->label); make_class_entry((yyvsp[-1].item)->label,yylineno,mod);}}
#line 2727 "parser.tab.c"
    break;

  case 98:
#line 317 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = -1;}}
#line 2733 "parser.tab.c"
    break;

  case 99:
#line 318 "parser.y"
                                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[-1].item)->i_number, (yyval.item)->true_list = (yyvsp[-1].item)->true_list; (yyval.item)->next_list = (yyvsp[-1].item)->next_list;}}
#line 2739 "parser.tab.c"
    break;

  case 100:
#line 322 "parser.y"
                                {if(!first_parse){backpatch((yyvsp[-1].item)->next_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[-1].item)->i_number; (yyval.item)->true_list = merge((yyvsp[-1].item)->true_list, (yyvsp[0].item)->true_list);}}
#line 2745 "parser.tab.c"
    break;

  case 101:
#line 323 "parser.y"
                 {if(!first_parse){(yyval.item)->next_list = (yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2751 "parser.tab.c"
    break;

  case 102:
#line 327 "parser.y"
                                        {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,(yyvsp[-2].item)->type,v[i].second,"declare");
            make_entry(v[i].first,t,yylineno,"0000");
            
        }
        if((yyvsp[-1].item)->dimension.size()) set_dimensions(v[0].first,(yyvsp[-1].item)->dimension);
        (yyval.item)->i_number = (yyvsp[-1].item)->i_number;
    }	
    v.clear();
}
#line 2768 "parser.tab.c"
    break;

  case 103:
#line 339 "parser.y"
                                                {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,(yyvsp[-2].item)->type,v[i].second,"declare");
            make_entry(v[i].first,t,yylineno,"0010");
        }
        (yyval.item)->i_number = (yyvsp[-1].item)->i_number;
    }	
    v.clear();
}
#line 2783 "parser.tab.c"
    break;

  case 104:
#line 349 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type); (yyval.item)->next_list = (yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2789 "parser.tab.c"
    break;

  case 105:
#line 353 "parser.y"
                                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type); (yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2795 "parser.tab.c"
    break;

  case 106:
#line 354 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2801 "parser.tab.c"
    break;

  case 107:
#line 355 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2807 "parser.tab.c"
    break;

  case 108:
#line 356 "parser.y"
                                                {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2813 "parser.tab.c"
    break;

  case 109:
#line 357 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2819 "parser.tab.c"
    break;

  case 110:
#line 358 "parser.y"
                                                {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2825 "parser.tab.c"
    break;

  case 111:
#line 362 "parser.y"
                                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type); (yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2831 "parser.tab.c"
    break;

  case 112:
#line 363 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2837 "parser.tab.c"
    break;

  case 113:
#line 364 "parser.y"
                                                {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2843 "parser.tab.c"
    break;

  case 114:
#line 365 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2849 "parser.tab.c"
    break;

  case 115:
#line 366 "parser.y"
                                                {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2855 "parser.tab.c"
    break;

  case 116:
#line 370 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2861 "parser.tab.c"
    break;

  case 117:
#line 371 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2867 "parser.tab.c"
    break;

  case 118:
#line 372 "parser.y"
                                                    {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2873 "parser.tab.c"
    break;

  case 119:
#line 373 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2879 "parser.tab.c"
    break;

  case 120:
#line 374 "parser.y"
                                                    {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2885 "parser.tab.c"
    break;

  case 121:
#line 375 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2891 "parser.tab.c"
    break;

  case 122:
#line 376 "parser.y"
                                                    {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2897 "parser.tab.c"
    break;

  case 123:
#line 377 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2903 "parser.tab.c"
    break;

  case 124:
#line 378 "parser.y"
                                                    {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2909 "parser.tab.c"
    break;

  case 125:
#line 379 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2915 "parser.tab.c"
    break;

  case 129:
#line 395 "parser.y"
                                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[-1].item)->i_number;}}
#line 2921 "parser.tab.c"
    break;

  case 130:
#line 399 "parser.y"
                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2927 "parser.tab.c"
    break;

  case 131:
#line 400 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2933 "parser.tab.c"
    break;

  case 132:
#line 401 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2939 "parser.tab.c"
    break;

  case 133:
#line 402 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2945 "parser.tab.c"
    break;

  case 134:
#line 403 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2951 "parser.tab.c"
    break;

  case 137:
#line 408 "parser.y"
                                                                {if(!first_parse){reset(); backpatch((yyvsp[-2].item)->true_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-2].item)->false_list,(yyvsp[0].item)->next_list); (yyval.item)->i_number=(yyvsp[-2].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;  }}
#line 2957 "parser.tab.c"
    break;

  case 138:
#line 412 "parser.y"
                                            {if(!first_parse){reset(); backpatch((yyval.item)->false_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-2].item)->next_list,(yyvsp[0].item)->next_list);(yyval.item)->i_number = (yyvsp[-2].item)->i_number; (yyval.item)->true_list = merge((yyvsp[-2].item)->true_list,(yyvsp[0].item)->true_list);}}
#line 2963 "parser.tab.c"
    break;

  case 139:
#line 416 "parser.y"
                                                                    {if(!first_parse){reset(); backpatch((yyvsp[-2].item)->true_list,(yyvsp[0].item)->i_number); (yyval.item)->false_list = (yyvsp[-2].item)->false_list; emitt("","","","goto",-1); (yyval.item)->next_list = (yyvsp[0].item)->next_list; (yyval.item)->next_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2969 "parser.tab.c"
    break;

  case 140:
#line 420 "parser.y"
                                                        {if(!first_parse){reset(); backpatch((yyval.item)->false_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-2].item)->next_list,(yyvsp[0].item)->next_list);(yyval.item)->i_number = (yyvsp[-2].item)->i_number; (yyval.item)->true_list = merge((yyvsp[-2].item)->true_list,(yyvsp[0].item)->true_list);}}
#line 2975 "parser.tab.c"
    break;

  case 143:
#line 430 "parser.y"
                                                                {if(!first_parse){string t = (yyvsp[-2].item)->type; if(t!="boolean"){cout<<"Expression must be of type boolean in line number "<<yylineno<<endl;exit(1);} reset(); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); backpatch((yyvsp[-2].item)->true_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-2].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-2].item)->i_number); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 2981 "parser.tab.c"
    break;

  case 144:
#line 434 "parser.y"
                                                                                {if(!first_parse){string t = (yyvsp[-2].item)->type; if(t!="boolean"){cout<<"Expression must be of type boolean in line number "<<yylineno<<endl;exit(1);} reset(); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); backpatch((yyvsp[-2].item)->true_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-2].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-2].item)->i_number); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 2987 "parser.tab.c"
    break;

  case 145:
#line 438 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number; (yyval.item)->next_list = (yyvsp[0].item)->next_list;}}
#line 2993 "parser.tab.c"
    break;

  case 147:
#line 443 "parser.y"
                                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number; (yyval.item)->next_list = (yyvsp[0].item)->next_list;}}
#line 2999 "parser.tab.c"
    break;

  case 149:
#line 448 "parser.y"
                                                                        {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[0].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[0].item)->i_number);}}
#line 3005 "parser.tab.c"
    break;

  case 150:
#line 449 "parser.y"
                                                                                    {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[0].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[0].item)->i_number);}}
#line 3011 "parser.tab.c"
    break;

  case 151:
#line 450 "parser.y"
                                                                                                {if(!first_parse){string t = (yyvsp[-3].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression in line number "<<yylineno<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-3].item)->i_number; if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num; backpatch((yyvsp[-3].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-3].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-3].item)->false_list,(yyvsp[0].item)->true_list);  emitt("","","","goto",(yyvsp[-3].item)->i_number);}}
#line 3017 "parser.tab.c"
    break;

  case 152:
#line 451 "parser.y"
                                                                                                        {if(!first_parse){string t = (yyvsp[-4].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression in line number "<<yylineno<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-4].item)->i_number;if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num; backpatch((yyvsp[-4].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-4].item)->false_list,(yyvsp[0].item)->true_list);  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[-4].item)->i_number);}}
#line 3023 "parser.tab.c"
    break;

  case 153:
#line 452 "parser.y"
                                                                                                {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[-4].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[0].item)->i_number);}}
#line 3029 "parser.tab.c"
    break;

  case 154:
#line 453 "parser.y"
                                                                                                        {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[-5].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[0].item)->i_number);}}
#line 3035 "parser.tab.c"
    break;

  case 155:
#line 454 "parser.y"
                                                                                                        {if(!first_parse){string t = (yyvsp[-3].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression in line number "<<yylineno<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-5].item)->i_number; if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num;backpatch((yyvsp[-3].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-3].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-3].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-3].item)->i_number);}}
#line 3041 "parser.tab.c"
    break;

  case 156:
#line 455 "parser.y"
                                                                                                                {if(!first_parse){string t = (yyvsp[-4].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression in line number "<<yylineno<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-6].item)->i_number;if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num; backpatch((yyvsp[-4].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-4].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-2].item)->i_number); backpatch((yyvsp[-2].item)->next_list,(yyvsp[-4].item)->i_number);}}
#line 3047 "parser.tab.c"
    break;

  case 157:
#line 459 "parser.y"
                                                                                 {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[0].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[0].item)->i_number);}}
#line 3053 "parser.tab.c"
    break;

  case 158:
#line 460 "parser.y"
                                                                                             {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[0].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[0].item)->i_number);}}
#line 3059 "parser.tab.c"
    break;

  case 159:
#line 461 "parser.y"
                                                                                                        {if(!first_parse){string t = (yyvsp[-3].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-3].item)->i_number; if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num;  backpatch((yyvsp[-3].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-3].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-3].item)->false_list,(yyvsp[0].item)->true_list);  emitt("","","","goto",(yyvsp[-3].item)->i_number);}}
#line 3065 "parser.tab.c"
    break;

  case 160:
#line 462 "parser.y"
                                                                                                                {if(!first_parse){string t = (yyvsp[-4].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-4].item)->i_number;if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num;  backpatch((yyvsp[-4].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-4].item)->false_list,(yyvsp[0].item)->true_list);  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[-4].item)->i_number);}}
#line 3071 "parser.tab.c"
    break;

  case 161:
#line 463 "parser.y"
                                                                                                        {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[-4].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[0].item)->i_number);}}
#line 3077 "parser.tab.c"
    break;

  case 162:
#line 464 "parser.y"
                                                                                                                {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[-5].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[0].item)->i_number);}}
#line 3083 "parser.tab.c"
    break;

  case 163:
#line 465 "parser.y"
                                                                                                                {if(!first_parse){string t = (yyvsp[-3].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-5].item)->i_number;if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num;  backpatch((yyvsp[-3].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-3].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-3].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-3].item)->i_number);}}
#line 3089 "parser.tab.c"
    break;

  case 164:
#line 466 "parser.y"
                                                                                                                        {if(!first_parse){string t = (yyvsp[-4].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-6].item)->i_number;if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num;  backpatch((yyvsp[-4].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-4].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-2].item)->i_number); backpatch((yyvsp[-2].item)->next_list,(yyvsp[-4].item)->i_number);}}
#line 3095 "parser.tab.c"
    break;

  case 165:
#line 470 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3101 "parser.tab.c"
    break;

  case 166:
#line 471 "parser.y"
                            {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3107 "parser.tab.c"
    break;

  case 167:
#line 475 "parser.y"
                           {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,(yyvsp[-1].item)->type,v[i].second,"declare");
            make_dirty_entry(v[i].first,t,yylineno,"0000");
        }
        (yyval.item)->i_number = (yyvsp[0].item)->i_number;
    }	
    v.clear();
}
#line 3122 "parser.tab.c"
    break;

  case 168:
#line 485 "parser.y"
                                   {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,(yyvsp[-2].item)->type,v[i].second,"declare");
            make_dirty_entry(v[i].first,t,yylineno,"0010");
        }
        (yyval.item)->i_number = (yyvsp[0].item)->i_number;
    }
    v.clear();
}
#line 3137 "parser.tab.c"
    break;

  case 169:
#line 497 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number; emitt("","","","goto",-1); (yyval.item)->next_list.push_back(inst_num-1);}}
#line 3143 "parser.tab.c"
    break;

  case 170:
#line 501 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3149 "parser.tab.c"
    break;

  case 171:
#line 502 "parser.y"
                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3155 "parser.tab.c"
    break;

  case 172:
#line 506 "parser.y"
                                                                                                {if(!first_parse){reset();}}
#line 3161 "parser.tab.c"
    break;

  case 173:
#line 510 "parser.y"
                                                                                                                {if(!first_parse){reset();}}
#line 3167 "parser.tab.c"
    break;

  case 174:
#line 514 "parser.y"
                                {if(!first_parse){emitt("","","","goto",-1); (yyval.item)->true_list.push_back(inst_num-1); (yyval.item)->i_number = inst_num-1;}}
#line 3173 "parser.tab.c"
    break;

  case 175:
#line 515 "parser.y"
                                        {if(!first_parse){emitt("","","","goto",-1); (yyval.item)->true_list.push_back(inst_num-1); (yyval.item)->i_number = inst_num-1;}}
#line 3179 "parser.tab.c"
    break;

  case 177:
#line 523 "parser.y"
                                {if(!first_parse){emitt("","","","goto",-1); (yyval.item)->next_list.push_back(inst_num-1); (yyval.item)->i_number = inst_num-1; }}
#line 3185 "parser.tab.c"
    break;

  case 178:
#line 524 "parser.y"
                                        {if(!first_parse){emitt("","","","goto",-1); (yyval.item)->next_list.push_back(inst_num-1); (yyval.item)->i_number = inst_num-1;}}
#line 3191 "parser.tab.c"
    break;

  case 188:
#line 552 "parser.y"
                        {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3197 "parser.tab.c"
    break;

  case 189:
#line 553 "parser.y"
                                {if(!first_parse){(yyval.item)->lit = false; strcpy((yyval.item)->type,(yyvsp[0].item)->type);(yyval.item)->dimension = (yyvsp[0].item)->dimension;(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3203 "parser.tab.c"
    break;

  case 190:
#line 557 "parser.y"
                        {if(!first_parse){(yyval.item)->lit = true;strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3209 "parser.tab.c"
    break;

  case 191:
#line 558 "parser.y"
                                               {if(!first_parse){(yyval.item)->lit = false; strcpy((yyval.item)->type,(yyvsp[-1].item)->type);(yyval.item)->true_list = (yyvsp[-1].item)->true_list; (yyval.item)->false_list = (yyvsp[-1].item)->false_list; (yyval.item)->i_number = (yyvsp[-1].item)->i_number;}}
#line 3215 "parser.tab.c"
    break;

  case 192:
#line 559 "parser.y"
                                        {if(!first_parse){(yyval.item)->lit = false; strcpy((yyval.item)->type,(yyvsp[0].item)->type);}}
#line 3221 "parser.tab.c"
    break;

  case 193:
#line 560 "parser.y"
                        {if(!first_parse){(yyval.item)->lit = false;  strcpy((yyval.item)->type,(yyvsp[0].item)->type);}}
#line 3227 "parser.tab.c"
    break;

  case 194:
#line 561 "parser.y"
                                {if(!first_parse){(yyval.item)->lit = false; strcpy((yyval.item)->type,(yyvsp[0].item)->type);}}
#line 3233 "parser.tab.c"
    break;

  case 195:
#line 565 "parser.y"
                    {if(!first_parse){strcpy((yyval.item)->type,"byte");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3239 "parser.tab.c"
    break;

  case 196:
#line 566 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,"float");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3245 "parser.tab.c"
    break;

  case 197:
#line 567 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,"boolean");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3251 "parser.tab.c"
    break;

  case 198:
#line 568 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,"char");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3257 "parser.tab.c"
    break;

  case 199:
#line 569 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,"string");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3263 "parser.tab.c"
    break;

  case 200:
#line 570 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,"null");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3269 "parser.tab.c"
    break;

  case 201:
#line 574 "parser.y"
                                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);}}
#line 3275 "parser.tab.c"
    break;

  case 202:
#line 578 "parser.y"
                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label); strcpy((yyval.item)->type,get_method(t,t,function_call).c_str());}}
#line 3281 "parser.tab.c"
    break;

  case 203:
#line 579 "parser.y"
                                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-3].item)->label); strcpy((yyval.item)->type,get_method(t,t,function_call).c_str());}}
#line 3287 "parser.tab.c"
    break;

  case 204:
#line 583 "parser.y"
                                {if(!first_parse){string t = find_in_scope((yyvsp[-1].item)->label); int count=0; for(int i=0;i<t.size();i++)if(t[i]=='*') count++; if(count<(yyvsp[0].item)->dims){cout<<"Accessing Higher Dimensions of "<<(yyvsp[-1].item)->label<<" in line number "<<yylineno<<endl; exit(1);} string l = (t.substr(0,t.size()-(yyvsp[0].item)->dims));strcpy((yyval.item)->type,l.c_str());vector<int> s = get_dimensions((yyvsp[-1].item)->label); strcpy((yyval.item)->temp_var,array_access((yyvsp[-1].item)->label,s,(yyvsp[0].item)->dimension).c_str());}}
#line 3293 "parser.tab.c"
    break;

  case 205:
#line 587 "parser.y"
                                                        {if(!first_parse){strcpy((yyval.item)->type,get_method((yyvsp[-2].item)->label,"",function_call).c_str());}}
#line 3299 "parser.tab.c"
    break;

  case 206:
#line 588 "parser.y"
                                                                {if(!first_parse){strcpy((yyval.item)->type,get_method((yyvsp[-3].item)->label,"",function_call).c_str());function_call.clear();}}
#line 3305 "parser.tab.c"
    break;

  case 207:
#line 589 "parser.y"
                                                                                {if(!first_parse){strcpy((yyval.item)->type,get_method((yyvsp[-2].item)->label,find_in_scope((yyvsp[-4].item)->label),function_call).c_str());}}
#line 3311 "parser.tab.c"
    break;

  case 208:
#line 590 "parser.y"
                                                                                        {if(!first_parse){strcpy((yyval.item)->type,get_method((yyvsp[-3].item)->label,find_in_scope((yyvsp[-5].item)->label),function_call).c_str()); function_call.clear();}}
#line 3317 "parser.tab.c"
    break;

  case 209:
#line 594 "parser.y"
                                {if(!first_parse){string t; for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->type,strcat((yyvsp[-1].item)->type,t.c_str()));(yyval.item)->dims = (yyvsp[0].item)->dims; (yyval.item)->dimension = (yyvsp[0].item)->dimension; (yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3323 "parser.tab.c"
    break;

  case 210:
#line 595 "parser.y"
                                        {if(!first_parse){string t; for(int i=0;i<(yyvsp[-1].item)->dims;i++) t.push_back('*'); for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->type,strcat((yyvsp[-2].item)->type,t.c_str()));(yyval.item)->dims = (yyvsp[-1].item)->dims + (yyvsp[0].item)->dims;}}
#line 3329 "parser.tab.c"
    break;

  case 211:
#line 596 "parser.y"
                                {if(!first_parse){string t; for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->type,strcat((yyvsp[-1].item)->type,t.c_str()));(yyval.item)->dims = (yyvsp[0].item)->dims; (yyval.item)->dimension = (yyvsp[0].item)->dimension; (yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3335 "parser.tab.c"
    break;

  case 212:
#line 597 "parser.y"
                                        {if(!first_parse){string t; for(int i=0;i<(yyvsp[-1].item)->dims;i++) t.push_back('*'); for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->type,strcat((yyvsp[-2].item)->type,t.c_str()));(yyval.item)->dims = (yyvsp[-1].item)->dims + (yyvsp[0].item)->dims;}}
#line 3341 "parser.tab.c"
    break;

  case 213:
#line 601 "parser.y"
                                                                {if(!first_parse){(yyval.item)->dims = (yyvsp[-3].item)->dims+1; string t = (yyvsp[-1].item)->type; if(t!="int" && t!="byte" && t!="short" && t!="long") {cout<<"Array size must be of integer type. Line number: "<<yylineno<<endl; exit(1);}(yyvsp[-3].item)->dimension.push_back(reduce((yyvsp[-1].item)->temp_var)); (yyval.item)->dimension = (yyvsp[-3].item)->dimension; (yyval.item)->i_number = (yyvsp[-3].item)->i_number;}}
#line 3347 "parser.tab.c"
    break;

  case 214:
#line 602 "parser.y"
                                                                {if(!first_parse){(yyval.item)->dims=1; string t = (yyvsp[-1].item)->type; if(t!="int" && t!="byte" && t!="short" && t!="long") {cout<<"Array size must be of integer type. Line number: "<<yylineno<<endl; exit(1);} (yyval.item)->dimension.push_back(reduce((yyvsp[-1].item)->temp_var));(yyval.item)->i_number = (yyvsp[-1].item)->i_number;}}
#line 3353 "parser.tab.c"
    break;

  case 215:
#line 606 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number=(yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3359 "parser.tab.c"
    break;

  case 216:
#line 610 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);(yyval.item)->i_number=(yyvsp[0].item)->i_number;strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3365 "parser.tab.c"
    break;

  case 217:
#line 611 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 3371 "parser.tab.c"
    break;

  case 218:
#line 615 "parser.y"
                                        {
    if(!first_parse){
        string t = find_in_scope((yyvsp[-2].item)->label);
        strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str());
        string p = (yyvsp[-2].item)->type;
        (yyval.item)->i_number = (yyvsp[0].item)->i_number;
        if((yyvsp[0].item)->dimension.size()){
            array_func((yyvsp[-2].item)->label,(yyvsp[0].item)->dimension,(yyvsp[0].item)->type);
            set_dimensions((yyvsp[-2].item)->label,(yyvsp[0].item)->dimension);
        }
        else if(p=="boolean"){
            emitt("","true","",(yyvsp[-2].item)->label,-1);
            backpatch((yyvsp[0].item)->true_list,inst_num-1);
            emitt("","false","",(yyvsp[-2].item)->label,-1);
            backpatch((yyvsp[0].item)->false_list,inst_num-1);
        }else{
            emitt("",(yyvsp[0].item)->temp_var,"",(yyvsp[-2].item)->label,-1);
        }
    }
}
#line 3396 "parser.tab.c"
    break;

  case 219:
#line 635 "parser.y"
                                            {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("*",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3402 "parser.tab.c"
    break;

  case 220:
#line 636 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("/",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3408 "parser.tab.c"
    break;

  case 221:
#line 637 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("\%",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3414 "parser.tab.c"
    break;

  case 222:
#line 638 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("+",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3420 "parser.tab.c"
    break;

  case 223:
#line 639 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("-",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3426 "parser.tab.c"
    break;

  case 224:
#line 640 "parser.y"
                                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("<<",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3432 "parser.tab.c"
    break;

  case 225:
#line 641 "parser.y"
                                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt(">>",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3438 "parser.tab.c"
    break;

  case 226:
#line 642 "parser.y"
                                                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt(">>>",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3444 "parser.tab.c"
    break;

  case 227:
#line 643 "parser.y"
                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("&",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3450 "parser.tab.c"
    break;

  case 228:
#line 644 "parser.y"
                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str());(yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("^",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3456 "parser.tab.c"
    break;

  case 229:
#line 645 "parser.y"
                                      {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("|",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3462 "parser.tab.c"
    break;

  case 230:
#line 646 "parser.y"
                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("*",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3468 "parser.tab.c"
    break;

  case 231:
#line 647 "parser.y"
                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("/",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3474 "parser.tab.c"
    break;

  case 232:
#line 648 "parser.y"
                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("\%",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3480 "parser.tab.c"
    break;

  case 233:
#line 649 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("+",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3486 "parser.tab.c"
    break;

  case 234:
#line 650 "parser.y"
                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("-",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3492 "parser.tab.c"
    break;

  case 235:
#line 651 "parser.y"
                                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("<<",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3498 "parser.tab.c"
    break;

  case 236:
#line 652 "parser.y"
                                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt(">>",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3504 "parser.tab.c"
    break;

  case 237:
#line 653 "parser.y"
                                                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt(">>>",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3510 "parser.tab.c"
    break;

  case 238:
#line 654 "parser.y"
                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("&",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3516 "parser.tab.c"
    break;

  case 239:
#line 655 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str());(yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("^",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3522 "parser.tab.c"
    break;

  case 240:
#line 656 "parser.y"
                                   {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("|",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3528 "parser.tab.c"
    break;

  case 241:
#line 660 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3534 "parser.tab.c"
    break;

  case 242:
#line 661 "parser.y"
                                                                                {if(!first_parse){string s = (yyvsp[-4].item)->type; if(s!="boolean"){cout<<"First expression has to be boolean"<<endl;exit(1);}; backpatch((yyvsp[-4].item)->true_list,(yyvsp[-2].item)->i_number);}}
#line 3540 "parser.tab.c"
    break;

  case 243:
#line 665 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3546 "parser.tab.c"
    break;

  case 244:
#line 666 "parser.y"
                                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());backpatch((yyvsp[-2].item)->false_list,(yyvsp[0].item)->i_number);(yyval.item)->false_list = (yyvsp[0].item)->false_list; (yyval.item)->true_list = merge((yyvsp[-2].item)->true_list,(yyvsp[0].item)->true_list);(yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3552 "parser.tab.c"
    break;

  case 245:
#line 670 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3558 "parser.tab.c"
    break;

  case 246:
#line 671 "parser.y"
                                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());backpatch((yyvsp[-2].item)->true_list,(yyvsp[0].item)->i_number);(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = merge((yyvsp[-2].item)->false_list,(yyvsp[0].item)->false_list);(yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3564 "parser.tab.c"
    break;

  case 247:
#line 675 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3570 "parser.tab.c"
    break;

  case 248:
#line 676 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3576 "parser.tab.c"
    break;

  case 249:
#line 680 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3582 "parser.tab.c"
    break;

  case 250:
#line 681 "parser.y"
                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3588 "parser.tab.c"
    break;

  case 251:
#line 685 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3594 "parser.tab.c"
    break;

  case 252:
#line 686 "parser.y"
                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3600 "parser.tab.c"
    break;

  case 253:
#line 690 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3606 "parser.tab.c"
    break;

  case 254:
#line 691 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->temp_var)),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3612 "parser.tab.c"
    break;

  case 255:
#line 692 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->temp_var)),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3618 "parser.tab.c"
    break;

  case 256:
#line 696 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3624 "parser.tab.c"
    break;

  case 257:
#line 697 "parser.y"
                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str()); emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->temp_var)),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3630 "parser.tab.c"
    break;

  case 258:
#line 698 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->temp_var)),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3636 "parser.tab.c"
    break;

  case 259:
#line 699 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->temp_var)),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3642 "parser.tab.c"
    break;

  case 260:
#line 700 "parser.y"
                                                            {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->temp_var)),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3648 "parser.tab.c"
    break;

  case 261:
#line 704 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3654 "parser.tab.c"
    break;

  case 262:
#line 705 "parser.y"
                                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3660 "parser.tab.c"
    break;

  case 263:
#line 706 "parser.y"
                                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3666 "parser.tab.c"
    break;

  case 264:
#line 707 "parser.y"
                                                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3672 "parser.tab.c"
    break;

  case 265:
#line 711 "parser.y"
                            {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3678 "parser.tab.c"
    break;

  case 266:
#line 712 "parser.y"
                                                            {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3684 "parser.tab.c"
    break;

  case 267:
#line 713 "parser.y"
                                                            {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3690 "parser.tab.c"
    break;

  case 268:
#line 717 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3696 "parser.tab.c"
    break;

  case 269:
#line 718 "parser.y"
                                                    {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3702 "parser.tab.c"
    break;

  case 270:
#line 719 "parser.y"
                                                    {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3708 "parser.tab.c"
    break;

  case 271:
#line 720 "parser.y"
                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3714 "parser.tab.c"
    break;

  case 272:
#line 724 "parser.y"
                                    {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3720 "parser.tab.c"
    break;

  case 273:
#line 725 "parser.y"
                                        {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3726 "parser.tab.c"
    break;

  case 274:
#line 726 "parser.y"
                                    {if(!first_parse){string t = expression_type(yylineno,(yyvsp[0].item)->type,"",(yyvsp[-1].item)->label); (yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,t.c_str());strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[-1].item)->i_number;}}
#line 3732 "parser.tab.c"
    break;

  case 275:
#line 727 "parser.y"
                                    {if(!first_parse){string t = expression_type(yylineno,(yyvsp[0].item)->type,"",(yyvsp[-1].item)->label); (yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,t.c_str());t = new_temporary(); emitt((yyvsp[-1].item)->label,"",(yyvsp[0].item)->temp_var,t,-1); strcpy((yyval.item)->temp_var,t.c_str());(yyval.item)->i_number = (yyvsp[-1].item)->i_number;}}
#line 3738 "parser.tab.c"
    break;

  case 276:
#line 728 "parser.y"
                                {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3744 "parser.tab.c"
    break;

  case 277:
#line 732 "parser.y"
                                        {
    if(!first_parse){
    string t = expression_type(yylineno,(yyvsp[0].item)->type,"",(yyvsp[-1].item)->label);
    if((yyvsp[0].item)->lit == true){
        cout<<"Cannot apply increment/decrement operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item)->lit = false;
    strcpy((yyval.item)->type,t.c_str());
    t = new_temporary();
    emitt("",(yyvsp[0].item)->temp_var,"",t,-1);
    emitt("+",(yyvsp[0].item)->temp_var,"1",(yyvsp[0].item)->temp_var,-1);
    strcpy((yyval.item)->temp_var,t.c_str());
    (yyval.item)->i_number = (yyvsp[0].item)->i_number;
}    
}
#line 3765 "parser.tab.c"
    break;

  case 278:
#line 751 "parser.y"
                                        {
if(!first_parse){
    string t = expression_type(yylineno,(yyvsp[0].item)->type,"",(yyvsp[-1].item)->label);
    if((yyvsp[0].item)->lit == true){
        cout<<"Cannot apply increment/decrement operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item)->lit = false;
    strcpy((yyval.item)->type,t.c_str());
    t = new_temporary();
    emitt("",(yyvsp[0].item)->temp_var,"",t,-1);
    emitt("-",(yyvsp[0].item)->temp_var,"1",(yyvsp[0].item)->temp_var,-1);
    strcpy((yyval.item)->temp_var,t.c_str());
    (yyval.item)->i_number = (yyvsp[0].item)->i_number;
}
}
#line 3786 "parser.tab.c"
    break;

  case 279:
#line 770 "parser.y"
                        {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type); strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3792 "parser.tab.c"
    break;

  case 281:
#line 772 "parser.y"
                                        {if(!first_parse){string t = (yyvsp[0].item)->type; if(t!="boolean"){cout<<"! operation only allowed on boolean in line number "<<yylineno<<endl; exit(1);}else{strcpy((yyval.item)->type,(yyvsp[0].item)->type);} (yyval.item)->true_list = (yyvsp[0].item)->false_list; (yyval.item)->false_list = (yyvsp[0].item)->true_list; (yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3798 "parser.tab.c"
    break;

  case 287:
#line 784 "parser.y"
                                    {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3804 "parser.tab.c"
    break;

  case 288:
#line 785 "parser.y"
                                        {if(!first_parse){(yyval.item)->lit = false; strcpy((yyval.item)->type,find_in_scope((yyvsp[0].item)->label).c_str());(yyval.item)->i_number = inst_num; string l = new_temporary(); emitt("",(yyvsp[0].item)->label,"",l,-1); strcpy((yyval.item)->temp_var,l.c_str()); strcpy((yyval.item)->label,(yyvsp[0].item)->label);}}
#line 3810 "parser.tab.c"
    break;

  case 289:
#line 786 "parser.y"
                                        {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3816 "parser.tab.c"
    break;

  case 290:
#line 787 "parser.y"
                                        {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3822 "parser.tab.c"
    break;

  case 291:
#line 791 "parser.y"
                                        {
    if(!first_parse){
    string t = expression_type(yylineno,(yyvsp[-1].item)->type,"",(yyvsp[0].item)->label);
    if((yyvsp[-1].item)->lit == true){
        cout<<"Cannot apply increment operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item)->lit = false;
    strcpy((yyval.item)->type,t.c_str());
    emitt("+",(yyvsp[-1].item)->temp_var,"1",(yyvsp[-1].item)->temp_var,-1);
    emitt("",(yyvsp[-1].item)->temp_var,"",(yyvsp[-1].item)->label,-1);
    strcpy((yyval.item)->temp_var,(yyvsp[-1].item)->temp_var);
    (yyval.item)->i_number = (yyvsp[-1].item)->i_number;
}
}
#line 3842 "parser.tab.c"
    break;

  case 292:
#line 809 "parser.y"
                                {
    if(!first_parse){
    string t = expression_type(yylineno,(yyvsp[-1].item)->type,"",(yyvsp[0].item)->label);
    if((yyvsp[-1].item)->lit == true){
        cout<<"Cannot apply increment operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item)->lit = false;
    strcpy((yyval.item)->type,t.c_str());
    emitt("-",(yyvsp[-1].item)->temp_var,"1",(yyvsp[-1].item)->temp_var,-1);
    emitt("",(yyvsp[-1].item)->temp_var,"",(yyvsp[-1].item)->label,-1);
    strcpy((yyval.item)->temp_var,(yyvsp[-1].item)->temp_var);
    (yyval.item)->i_number = (yyvsp[-1].item)->i_number;
    }
}
#line 3862 "parser.tab.c"
    break;


#line 3866 "parser.tab.c"

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
#line 827 "parser.y"


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
    print3AC_code();
    exit(0);
}
