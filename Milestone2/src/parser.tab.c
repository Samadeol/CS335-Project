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



#line 126 "parser.tab.c"

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
#line 60 "parser.y"

    struct Item* item;

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2315

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  113
/* YYNRULES -- Number of rules.  */
#define YYNRULES  293
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  539

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
       0,    71,    71,    73,    74,    77,    78,    79,    80,    81,
      82,    83,    87,    91,    92,    96,    97,    98,    99,   103,
     107,   111,   115,   119,   120,   124,   125,   129,   130,   134,
     135,   136,   140,   141,   145,   146,   150,   154,   155,   159,
     163,   164,   168,   169,   172,   176,   177,   181,   182,   183,
     184,   188,   189,   193,   194,   198,   199,   200,   204,   205,
     206,   210,   217,   227,   228,   232,   244,   245,   246,   250,
     253,   254,   255,   256,   259,   263,   264,   268,   269,   273,
     274,   275,   276,   277,   278,   282,   283,   287,   288,   291,
     295,   296,   300,   301,   305,   306,   311,   312,   316,   317,
     321,   322,   326,   338,   348,   352,   353,   354,   355,   356,
     357,   361,   362,   363,   364,   365,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   382,   386,   390,   394,
     398,   399,   400,   401,   402,   403,   404,   407,   411,   415,
     419,   424,   425,   429,   433,   437,   438,   442,   443,   447,
     448,   449,   450,   451,   452,   453,   454,   458,   459,   460,
     461,   462,   463,   464,   465,   469,   470,   474,   484,   496,
     500,   501,   505,   509,   513,   514,   518,   522,   523,   527,
     528,   532,   536,   537,   538,   542,   543,   547,   551,   552,
     556,   557,   558,   559,   560,   564,   565,   566,   567,   568,
     569,   573,   577,   578,   582,   586,   587,   588,   589,   593,
     594,   595,   596,   600,   601,   605,   609,   610,   614,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   675,   676,   680,   681,   685,   686,   690,   691,
     695,   696,   700,   701,   705,   706,   707,   711,   712,   713,
     714,   715,   719,   720,   721,   722,   726,   727,   728,   732,
     733,   734,   735,   739,   740,   741,   742,   743,   747,   766,
     785,   786,   787,   788,   792,   793,   794,   795,   799,   800,
     801,   802,   806,   824
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

#define YYPACT_NINF (-429)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-292)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     541,    27,  -429,   -14,    90,    98,  -429,  -429,  -429,    18,
    -429,    60,    60,  -429,  -429,  -429,  -429,  -429,   116,  -429,
     -12,  -429,   136,  -429,  -429,  -429,  -429,    98,    13,   -12,
     120,  -429,    60,   116,  -429,   116,  -429,  -429,   706,  -429,
     141,   184,  -429,   259,    86,  -429,  -429,   224,   116,  -429,
    -429,   255,  -429,  -429,  -429,  -429,   261,  1565,  -429,   273,
     266,  -429,  -429,  -429,   120,  -429,    31,   706,  -429,  -429,
    -429,   151,  -429,   -12,  -429,  -429,  -429,  -429,   -12,    99,
    -429,   239,   114,   255,  -429,   266,   964,  -429,   104,  -429,
     108,     9,  -429,   278,   113,   279,  -429,   964,   964,     9,
    -429,   964,   290,  -429,  -429,   964,   -12,   281,   964,  -429,
     299,   828,  -429,  1565,  -429,  -429,  -429,  -429,  -429,  -429,
     268,  -429,  -429,   318,  -429,  -429,  -429,  -429,  -429,  -429,
    -429,  -429,  -429,  -429,  -429,  -429,  -429,  -429,   155,  -429,
    1069,   207,  -429,  -429,  -429,  -429,   225,   275,   277,   234,
       6,  -429,  -429,   271,   303,   261,   273,  -429,  -429,  -429,
    -429,  -429,  -429,  1565,  -429,  -429,   286,   287,  -429,     9,
    -429,   -20,    21,  -429,   303,   964,   306,   592,   964,   964,
     964,  1946,  -429,  -429,     5,  -429,  -429,  -429,     4,   352,
     354,   300,   363,    95,   243,   253,   265,   244,  -429,  -429,
    -429,  -429,  -429,   225,  -429,  -429,   293,  -429,   296,  -429,
     299,  2019,  1654,  1390,   964,   297,   180,  -429,  -429,   325,
     325,   169,  -429,  -429,   301,   308,   282,   964,   317,   235,
      10,   964,   964,   335,   964,   964,   964,   964,   964,   964,
     964,   964,   964,   964,   964,   341,  -429,  -429,  -429,  1654,
     964,   964,   964,   964,   964,   964,   964,   964,   964,   964,
     964,   964,  -429,  -429,   964,   237,   299,  -429,  -429,   321,
    -429,    17,  -429,  -429,  1565,  -429,  -429,   -19,   266,   356,
      -2,  -429,  -429,   -21,  1966,   324,  -429,  -429,  -429,   964,
    -429,   964,   964,   964,   964,   964,   964,   964,   964,   964,
     964,   964,   964,   964,   964,   964,   964,   964,   964,   964,
     964,  -429,  -429,    20,     9,  1095,   299,  -429,   326,   382,
     383,  -429,  -429,    23,  -429,   330,  -429,   359,   359,  1753,
    -429,  -429,   357,   -12,   295,  -429,   337,  -429,  -429,  -429,
    -429,   365,  -429,  -429,  -429,   340,  -429,  -429,  -429,  -429,
    -429,  -429,  -429,   964,  -429,  -429,  -429,  -429,  -429,  -429,
    -429,  -429,  -429,  -429,  -429,  -429,  -429,  -429,  -429,   358,
    -429,  -429,  -429,  -429,   266,   371,   303,  -429,  -429,   964,
     170,  1796,   222,   468,   344,   352,   398,   354,   300,   363,
      95,   243,   243,   253,   253,   253,   253,   265,   265,   265,
     244,   244,  -429,  -429,  -429,  -429,   299,  2071,   346,   407,
    1831,   964,  1623,   964,  -429,  1710,  1796,   303,   303,  -429,
      40,    -2,  -429,   -12,  -429,  1654,  1851,  -429,   364,     9,
    -429,   303,  -429,  -429,   964,   468,  -429,  -429,   964,   407,
    1654,   355,   383,  2093,  2123,   362,   360,  -429,  -429,   391,
     124,   392,  -429,  -429,   408,  -429,   418,  -429,  -429,  -429,
    -429,  -429,  -429,   369,  -429,  -429,  -429,    43,  -429,  -429,
    -429,  -429,  -429,  1654,  1654,   370,  1654,   373,  2143,  1654,
    2041,  1710,   964,  1710,   -12,  -429,  -429,  -429,  1654,  -429,
    1654,  1654,   374,  -429,  1886,   376,   412,  -429,   379,  -429,
    -429,  -429,  -429,  -429,  1654,  2166,   381,  1906,   964,  1710,
    -429,  1710,   386,  2186,  2197,   385,   389,  -429,  -429,  1710,
    1710,   394,  1710,   403,  2234,  1710,  -429,  -429,  1710,  -429,
    1710,  1710,   404,  -429,  -429,  -429,  -429,  1710,  -429
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
       0,   289,   116,     0,   101,   104,   105,   117,   106,   118,
       0,   107,   108,     0,   119,   109,   110,   145,   146,   120,
     125,   121,   122,   123,   124,   288,   188,   190,   136,   201,
     193,   135,   189,   130,   131,   132,     0,   133,   134,    66,
       0,    64,    71,     0,    39,     0,     0,    88,    52,    53,
      86,    74,    85,     0,    89,    97,    37,     0,    20,     0,
      90,     0,     0,    78,    76,     0,    38,     0,     0,     0,
       0,   289,   192,   194,     0,   215,   217,   216,   242,   244,
     246,   248,   250,   252,   254,   257,   262,   266,   269,   273,
     274,   277,   283,   280,   290,   291,     0,   174,     0,   177,
       0,     0,     0,     0,     0,     0,   289,   193,   279,     0,
       0,    36,   278,   179,     0,     0,     0,     0,     0,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   204,    99,   100,   129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   293,   292,     0,    67,     0,    61,    41,     0,
      72,     0,    73,    92,     0,    21,    22,     0,    79,     0,
       0,    91,   282,     0,   289,     0,   276,   275,   281,     0,
     141,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,   178,     0,     0,     0,     0,   171,     0,   166,
     165,   127,   205,     0,    95,     0,   191,   209,   211,     0,
     180,   181,     0,     0,   182,   186,     0,   176,   102,   227,
     229,    37,   218,   225,   226,     0,   224,   223,   221,   222,
     228,   220,   219,     0,   138,   239,   241,   230,   237,   238,
     236,   235,   233,   234,   240,   232,   231,    65,    69,     0,
      63,    40,    62,    93,    80,     0,    81,    83,    77,     0,
       0,     0,     0,   191,     0,   245,     0,   247,   249,   251,
     253,   255,   256,   259,   261,   258,   260,   264,   265,   263,
     268,   267,   272,   271,   270,   103,     0,     0,     0,   167,
       0,     0,     0,     0,   206,     0,     0,   210,   212,   202,
       0,     0,   183,     0,   185,     0,     0,   214,     0,     0,
      68,    82,    84,   284,     0,     0,   286,   142,     0,   168,
       0,     0,   169,     0,     0,     0,     0,   170,    94,     0,
      38,     0,   137,   139,   105,   112,     0,   113,   114,   115,
     147,   148,   203,     0,   184,   143,   207,     0,   213,   285,
     287,   243,   149,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   208,   150,   151,     0,   153,
       0,     0,     0,   172,     0,     0,   166,   128,     0,   140,
     187,   152,   154,   155,     0,     0,     0,     0,     0,     0,
     156,     0,     0,     0,     0,     0,     0,   144,   157,     0,
       0,     0,     0,     0,     0,     0,   158,   159,     0,   161,
       0,     0,     0,   173,   160,   162,   163,     0,   164
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -429,  -429,    -6,   -50,  -429,  -429,   432,   263,  -429,  -429,
    -429,  -429,   229,   173,   -36,   -95,  -429,  -429,   -93,  1261,
    -429,   -11,  -429,  -429,   147,    38,    88,  -429,   414,  -429,
    -429,  -109,   187,  -429,  -429,  -429,   -48,  -429,  -271,  -429,
    -429,  -429,   135,  -429,  -317,  -429,   -35,   307,  -105,  1002,
     712,  -363,  -429,  -429,  -429,  -429,  -121,  -429,  -429,  -332,
    -429,  -429,  -429,  -429,  -429,  -429,  -429,  -429,     7,     8,
    -428,  -206,  -429,  -429,  -429,  -429,  -429,  -429,  -429,  -429,
    -429,   150,  -429,  -429,  -429,   -57,  -429,  1082,    57,   121,
    -175,    -5,  -429,   186,    47,  -429,   200,   199,   201,   204,
     198,  -174,    79,   -92,     1,   -44,   315,   429,  -319,  -429,
     558,   687,   801
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    57,    58,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   110,    60,    61,    62,    63,   181,
      65,   265,    20,    21,    22,    23,    39,    67,    68,    69,
      70,   150,   151,   367,    71,    72,    84,   172,   173,   161,
      73,    74,    85,   164,   323,    24,   112,   113,   114,   115,
     453,   116,   117,   118,   455,   119,   120,   121,   122,   123,
     457,   124,   125,   458,   126,   459,   127,   460,   318,   319,
     441,   442,   128,   461,   129,   130,   131,   132,   133,   134,
     334,   335,   135,   136,   137,   182,   139,   140,   183,   142,
     245,   324,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     138,   230,    59,    76,   219,   320,   220,   109,   247,   378,
      49,   152,   420,   291,    38,   475,   477,   158,    31,   278,
     374,    49,   289,    38,   266,    26,   169,   153,   266,    50,
     156,    59,    76,    44,    37,   266,   162,    26,   266,   280,
      50,   413,    52,    49,   327,   328,   171,   271,    26,   154,
     492,   379,   454,    52,   218,   210,   138,   222,   413,     2,
      42,   413,    50,   246,   436,    27,    25,   163,   279,   375,
      51,   226,    38,   292,   174,    52,     1,   512,    55,   290,
     267,   184,   283,   456,   338,   521,   523,    45,     2,    55,
     317,   372,   215,   281,   405,   414,   532,   224,     6,     7,
     225,   313,     3,   228,    42,     4,   138,   270,   272,   467,
       8,    55,   462,   273,   141,   485,   470,    46,   454,   297,
     454,   298,   155,   391,   392,    80,    49,     6,     7,    29,
     212,   282,     1,   277,   286,   287,   288,    26,   166,     8,
      47,   481,   169,   206,     2,    50,   454,   208,   454,   456,
     463,   456,    40,    26,   138,   138,   454,   454,    52,   454,
     213,     4,   454,    81,     2,   454,   165,   454,   454,   247,
     141,   213,   285,    75,   454,   316,   167,   456,   207,   456,
      77,    41,   209,     6,     7,    66,   170,   456,   456,    47,
     456,    36,   138,   456,    55,     8,   456,    37,   456,   456,
     233,   157,    75,     6,     7,   456,    36,   409,    36,   325,
    -192,   397,   398,   399,    66,     8,   329,   138,   269,  -192,
     141,    36,   336,    78,   373,   160,   339,   340,   237,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
      33,    35,   434,   143,   171,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   264,   264,   368,
     369,    48,  -194,    80,   402,   403,   404,   376,   141,   141,
     269,  -194,   380,   382,   320,    34,   299,   300,   406,    79,
     262,    82,   153,   153,   384,   269,   317,   386,   303,   263,
     304,   447,   301,   302,   435,    34,   332,   439,   422,   143,
      83,    87,    82,   308,   305,    89,   141,   400,   401,   332,
     408,   333,   149,   168,   153,   175,   417,   418,   306,   309,
      92,   310,   317,   317,   423,   211,   214,   307,   227,   176,
    -290,   141,  -291,    96,   219,   433,   220,   177,   229,  -290,
     249,  -291,   248,   178,   268,    98,    99,   100,   428,   143,
     138,   269,   179,   213,   101,   138,   293,   317,   138,   317,
     275,   276,   294,   431,   223,   295,   296,   311,   138,   326,
     312,   104,   144,   237,   341,   330,   345,   180,   393,   394,
     395,   396,   331,   138,   317,   171,   138,   138,   464,   353,
     469,   337,   317,   317,   371,   377,   383,   143,   143,   411,
     410,   412,   415,   317,   421,   445,   446,   416,   448,   425,
     432,   428,   426,   427,   429,   438,   138,   138,   437,   138,
     443,   138,   138,   138,   138,   266,   138,   473,   144,   508,
    -111,   138,   479,   138,   138,   143,   478,   468,   480,   482,
     483,   484,   488,    32,   316,   490,   504,   138,   138,   500,
     507,   509,   138,   370,   138,   513,   138,   138,   519,   524,
     143,   525,   138,   138,   141,   138,   528,   138,   138,   141,
     274,   138,   141,   138,   138,   530,   537,   498,   144,    87,
     138,   159,   141,    89,   424,   471,   145,   495,   496,   506,
     430,   385,   387,   175,   390,   388,     0,   141,    92,   389,
     141,   141,   515,   516,     0,     0,     0,   176,     0,     0,
       0,    96,     0,     0,     0,   177,     0,     0,     0,     0,
       0,     0,     0,     0,    99,   100,   144,   144,     0,     0,
     141,   141,     0,   141,     0,   141,   141,   141,   141,     0,
     141,     0,   145,     0,     0,   141,     0,   141,   141,   104,
       0,     0,     0,     0,     0,   180,     0,     1,     0,     0,
       0,   141,   141,     0,   144,     0,   141,     0,   141,     2,
     141,   141,     0,     0,     0,     0,   141,   141,     0,   141,
       0,   141,   141,     3,     0,   141,     4,   141,   141,   144,
       0,     0,   145,   143,   141,     0,     0,     0,   143,     5,
       0,   143,     0,    87,    49,     0,     0,    89,     6,     7,
       0,   143,     0,     0,     0,   146,     0,   175,     0,     0,
       8,     0,    92,    50,     0,     0,   143,     0,     0,   143,
     143,   176,     0,     0,     0,    96,    52,     0,     0,   177,
     145,   145,     0,     0,     0,   178,     0,    98,    99,   100,
       0,     0,     0,     0,   179,     0,   101,     0,     0,   143,
     143,     0,   143,     0,   143,   143,   143,   143,     0,   143,
       0,   146,    55,   104,   143,     0,   143,   143,   145,   180,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,   143,     0,     0,     0,   143,     0,   143,     0,   143,
     143,     0,     0,   145,     0,   143,   143,     0,   143,     0,
     143,   143,     0,     0,   143,     0,   143,   143,    49,     0,
       0,   146,   144,   143,     0,     0,     0,   144,     0,     0,
     144,     0,     0,     0,     2,     0,     0,    50,     0,     0,
     144,     0,     0,     0,   147,    51,     0,     0,     0,     0,
      52,     0,    37,     0,     0,   144,     0,     0,   144,   144,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   146,
     146,     0,     0,     6,     7,     0,     0,    53,     0,     0,
      54,     0,     0,     0,     0,     8,    55,     0,   144,   144,
       0,   144,     0,   144,   144,   144,   144,    56,   144,     0,
     147,     0,     0,   144,     0,   144,   144,   146,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   144,
     144,     0,     0,     0,   144,     0,   144,     0,   144,   144,
       0,     0,   146,   231,   144,   144,   145,   144,   232,   144,
     144,   145,     0,   144,   145,   144,   144,     0,   233,     0,
     147,   234,   144,     0,   145,     0,     0,     0,   148,     0,
       0,     0,     0,     0,   235,     0,   236,   -36,     0,   145,
       0,     0,   145,   145,     0,     0,   237,     0,     0,     0,
     238,     0,   239,     0,     0,     0,     0,     0,   240,     0,
       0,   241,     0,     0,   242,     0,     0,     0,   147,   147,
       0,     0,   145,   145,   243,   145,   244,   145,   145,   145,
     145,     0,   145,     0,   148,     0,     0,   145,     0,   145,
     145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   145,   145,     0,   147,     0,   145,     0,
     145,     0,   145,   145,     0,     0,     0,     0,   145,   145,
       0,   145,     0,   145,   145,     0,     0,   145,     0,   145,
     145,   147,     0,     0,   148,   146,   145,     0,     0,     0,
     146,     0,     0,   146,     0,    87,     0,     0,     0,    89,
       0,     0,     0,   146,     0,     0,     0,     0,     0,   175,
       0,     0,     0,     0,    92,     0,     0,     0,   146,     0,
       0,   146,   146,   176,     0,     0,     0,    96,     0,     0,
       0,   177,   148,   148,     0,     0,     0,   178,     0,    98,
      99,   100,     0,     0,     0,     0,   179,     0,   101,     0,
       0,   146,   146,     0,   146,     0,   146,   146,   146,   146,
       0,   146,     0,     0,     0,   104,   146,     0,   146,   146,
     148,   180,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   146,   146,     0,     0,     0,   146,     0,   146,
       0,   146,   146,     0,   250,   148,     0,   146,   146,   251,
     146,     0,   146,   146,     0,     0,   146,     0,   146,   146,
       0,     0,   252,     0,   147,   146,     0,     0,     0,   147,
       0,     0,   147,     0,     0,   253,    87,   254,     0,     0,
      89,     0,   147,     0,     0,     0,     0,     0,     0,     0,
     175,   255,     0,   256,     0,    92,     0,   147,     0,   257,
     147,   147,   258,     0,   176,   259,     0,     0,    96,     0,
       0,     0,   177,     0,     0,   260,     0,   261,   178,     0,
      98,    99,   100,     0,     0,     0,     0,   179,     0,   101,
     147,   147,     0,   147,     0,   147,   147,   147,   147,   407,
     147,     0,     0,     0,     0,   147,   104,   147,   147,     0,
     217,     0,   180,   217,     0,     0,     0,     0,     0,     0,
       0,   147,   147,   497,     0,   499,   147,     0,   147,     0,
     147,   147,     0,     0,     0,     0,   147,   147,   148,   147,
       0,   147,   147,   148,   321,   147,   148,   147,   147,     0,
       0,   517,     0,   518,   147,     0,   148,     0,     0,     0,
       0,   526,   527,     0,   529,     0,     0,   533,     0,     0,
     534,   148,   535,   536,   148,   148,     0,     0,     0,   538,
       0,   354,     0,     0,     0,     0,     0,   217,     0,     0,
     217,   217,   217,     0,    28,     0,    30,     0,     0,     0,
       0,     0,     0,     0,   148,   148,     0,   148,     0,   148,
     148,   148,   148,     0,   148,     0,     0,     0,    43,   148,
       0,   148,   148,     0,     0,     0,     0,     0,     0,    64,
       0,     0,     0,     0,     0,   148,   148,     0,     0,     0,
     148,     0,   148,     0,   148,   148,     0,     0,   111,     0,
     148,   148,     0,   148,     0,   148,   148,    64,    64,   148,
       0,   148,   148,     0,     0,     0,     0,     0,   148,     0,
       0,     0,     0,    64,     0,     0,     0,     0,     0,     0,
       0,     0,    64,     0,     0,     0,     0,     0,     0,   216,
     221,     0,   216,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   217,   111,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   175,     0,   452,     0,     0,
      92,     0,     0,     0,   111,     0,     0,   465,     0,   176,
      64,     0,     0,    96,     0,     0,   216,   177,   284,   216,
     216,   216,   472,   178,     0,    98,    99,   100,     0,     0,
       0,     0,   179,     0,   101,     0,     0,     0,     0,     0,
       0,   217,   322,     0,     0,   217,     0,     0,     0,     0,
       0,   104,   111,     0,     0,   486,   487,   180,   489,     0,
       0,   493,     0,   321,     0,   354,     0,     0,     0,     0,
     501,     0,   502,   503,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   510,     0,     0,     0,
       0,   465,     0,   472,     0,     0,   217,   217,     0,     0,
     217,   486,   487,     0,   489,     0,     0,   493,     0,     0,
     501,     0,   502,   503,     0,   111,     0,     0,     0,   510,
       0,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   216,     0,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,    86,     0,     0,    64,    87,    49,    88,     0,
      89,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,    92,    50,    93,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    96,    52,
       0,    37,    97,     0,     0,     0,     0,     0,     0,     0,
      98,    99,   100,     0,     0,     0,     0,     0,     0,   101,
       0,     0,     0,     0,    87,   102,    53,     0,    89,   103,
     216,     0,     0,     0,   216,    55,   104,     0,     0,     0,
     105,     0,     0,    92,   106,     0,     0,   107,   108,     0,
       0,    86,   176,     0,     0,    87,    96,    88,     0,    89,
      97,     0,     0,    90,     0,     0,     0,     0,    98,    99,
     100,     0,    64,     0,    92,     0,    93,   101,     0,     0,
      64,     0,     0,    94,    95,   216,   216,    96,     0,   216,
      37,    97,     0,     0,   104,     0,     0,     0,     0,    98,
      99,   100,     0,     0,     0,     0,     0,    86,   101,     0,
       0,    87,     0,    88,   102,    89,     0,     0,   103,    90,
       0,     0,     0,     0,     0,   104,     0,     0,     0,   105,
      92,   111,   449,   106,     0,     0,   107,   108,     0,   450,
      95,     0,     0,    96,     0,     0,    37,    97,     0,     0,
       0,     0,     0,     0,    87,    98,    99,   100,    89,     0,
       0,     0,     0,     0,   101,     0,     0,     0,   175,     0,
     102,     0,     0,    92,   103,     0,     0,     0,     0,     0,
       0,   104,   176,     0,     0,   105,    96,     0,     0,   106,
     177,     0,   451,   108,     0,     0,   178,    87,    98,    99,
     100,    89,     0,     0,     0,   179,     0,   101,     0,     0,
       0,   175,     0,     0,     0,   419,    92,     0,     0,     0,
       0,     0,     0,     0,   104,   176,     0,     0,     0,    96,
     180,     0,    87,   177,     0,     0,    89,     0,     0,   178,
       0,    98,    99,   100,     0,     0,   175,     0,   179,     0,
     101,    92,    87,     0,     0,     0,    89,     0,     0,   268,
     176,     0,     0,     0,    96,     0,   175,   104,   177,     0,
       0,    92,     0,   180,   178,     0,    98,    99,   100,     0,
     176,     0,     0,   179,    96,   101,     0,    87,   177,     0,
       0,    89,     0,     0,   178,   444,    98,    99,   100,     0,
       0,   175,   104,   179,     0,   101,    92,    87,   180,     0,
       0,    89,     0,   466,     0,   176,     0,     0,     0,    96,
       0,   175,   104,   177,     0,     0,    92,     0,   180,   178,
       0,    98,    99,   100,     0,   176,     0,     0,   179,    96,
     101,   231,     0,   177,     0,     0,   232,     0,     0,   178,
     505,    98,    99,   100,     0,     0,   233,   104,   179,   234,
     101,   231,     0,   180,     0,     0,   232,     0,     0,     0,
     514,     0,   235,     0,   236,     0,   233,   104,     0,   234,
       0,     0,     0,   180,   237,     0,     0,     0,   238,     0,
     239,     0,   235,     0,   236,     0,   240,     0,     0,   241,
       0,     0,   242,     0,   381,     0,     0,     0,   238,     0,
     239,     0,   243,     0,   244,     0,   240,     0,     0,   241,
      87,    49,   242,     0,    89,     0,     0,     0,     0,     0,
       0,     0,   243,     0,   244,     0,     0,   314,     0,    92,
      50,     0,    87,    49,     0,     0,    89,     0,   176,     0,
       0,     0,    96,    52,     0,     0,    97,     0,     0,   314,
       0,    92,    50,     0,    98,    99,   100,     0,     0,     0,
     176,     0,    87,   101,    96,    52,    89,     0,    97,     0,
       0,     0,     0,   315,     0,     0,    98,    99,   100,    55,
     104,    92,     0,     0,    87,   101,     0,     0,    89,     0,
     176,     0,     0,     0,    96,   494,     0,     0,    97,     0,
       0,    55,   104,    92,     0,     0,    98,    99,   100,     0,
       0,     0,   176,     0,    87,   101,    96,     0,    89,     0,
      97,     0,     0,   440,     0,     0,     0,     0,    98,    99,
     100,     0,   104,    92,    87,     0,     0,   101,    89,     0,
       0,     0,   176,     0,     0,   474,    96,     0,     0,     0,
      97,     0,     0,    92,   104,     0,     0,    87,    98,    99,
     100,    89,   176,     0,     0,     0,    96,   101,     0,     0,
      97,     0,     0,     0,     0,   476,    92,    87,    98,    99,
     100,    89,     0,     0,   104,   176,     0,   101,    87,    96,
       0,     0,    89,    97,     0,   491,    92,     0,     0,     0,
       0,    98,    99,   100,   104,   176,     0,    92,     0,    96,
     101,     0,     0,    97,     0,     0,   176,     0,   511,     0,
      96,    98,    99,   100,    97,    87,     0,   104,     0,    89,
     101,     0,    98,    99,   100,     0,     0,     0,   520,     0,
       0,   101,     0,     0,    92,     0,     0,   104,     0,   522,
       0,     0,     0,   176,     0,     0,     0,    96,   104,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,    98,
      99,   100,     0,     0,     0,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,   531,     0,     0,     0,
       0,     0,     0,     0,     0,   104
};

static const yytype_int16 yycheck[] =
{
      57,   110,    38,    38,    99,   211,    99,    57,   113,   280,
      12,    59,   329,     9,    20,   443,   444,    67,     0,    39,
      39,    12,    17,    29,    18,    39,    28,    48,    18,    31,
      66,    67,    67,    20,    46,    18,    71,    39,    18,    18,
      31,    18,    44,    12,   219,   220,    82,   156,    39,    60,
     478,    72,   415,    44,    98,    91,   113,   101,    18,    28,
      22,    18,    31,   113,   383,    79,    39,    73,    88,    88,
      39,   106,    78,    69,    85,    44,    16,   505,    80,    74,
      74,    86,   177,   415,    74,   513,   514,    74,    28,    80,
     211,    74,    97,    72,    74,    72,   524,   102,    67,    68,
     105,   210,    42,   108,    66,    45,   163,   155,   156,   426,
      79,    80,    72,   163,    57,    72,   435,    29,   481,    24,
     483,    26,    91,   297,   298,    39,    12,    67,    68,    39,
      17,   175,    16,   169,   178,   179,   180,    39,    39,    79,
      20,    17,    28,    39,    28,    31,   509,    39,   511,   481,
     421,   483,    16,    39,   211,   212,   519,   520,    44,   522,
      47,    45,   525,    77,    28,   528,    78,   530,   531,   274,
     113,    47,   177,    38,   537,   211,    77,   509,    74,   511,
      39,    45,    74,    67,    68,    38,    72,   519,   520,    20,
     522,    18,   249,   525,    80,    79,   528,    46,   530,   531,
      20,    66,    67,    67,    68,   537,    33,   316,    35,   214,
      55,   303,   304,   305,    67,    79,    47,   274,    48,    64,
     163,    48,   227,    39,   274,    74,   231,   232,    48,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
      11,    12,    72,    57,   280,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,    23,    23,   264,
      23,    32,    55,    39,   308,   309,   310,   278,   211,   212,
      48,    64,   283,   284,   480,    12,    33,    34,   314,    20,
      55,    47,    48,    48,   289,    48,   407,   292,    35,    64,
      37,   412,    49,    50,    72,    32,    14,   406,   333,   113,
      39,    11,    47,    59,    51,    15,   249,   306,   307,    14,
     315,    29,    39,    74,    48,    25,   327,   328,    53,    75,
      30,    77,   443,   444,    29,    47,    47,    62,    47,    39,
      55,   274,    55,    43,   429,   379,   429,    47,    39,    64,
      22,    64,    74,    53,    73,    55,    56,    57,   353,   163,
     407,    48,    62,    47,    64,   412,     4,   478,   415,   480,
      74,    74,     8,   374,    74,    65,     3,    74,   425,    72,
      74,    81,    57,    48,    39,    74,   381,    87,   299,   300,
     301,   302,    74,   440,   505,   421,   443,   444,   423,    48,
     434,    74,   513,   514,    73,    39,    72,   211,   212,    17,
      74,    18,    72,   524,    47,   410,   411,    48,   413,    72,
      39,   416,    47,    73,    56,    17,   473,   474,    74,   476,
      74,   478,   479,   480,   481,    18,   483,    72,   113,    17,
      22,   488,    72,   490,   491,   249,    74,    73,    47,    47,
      22,    72,    72,    11,   480,    72,    72,   504,   505,   484,
      74,    72,   509,   266,   511,    74,   513,   514,    72,    74,
     274,    72,   519,   520,   407,   522,    72,   524,   525,   412,
     163,   528,   415,   530,   531,    72,    72,   482,   163,    11,
     537,    67,   425,    15,   334,   438,    57,   480,   480,   494,
     369,   291,   293,    25,   296,   294,    -1,   440,    30,   295,
     443,   444,   507,   508,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,   211,   212,    -1,    -1,
     473,   474,    -1,   476,    -1,   478,   479,   480,   481,    -1,
     483,    -1,   113,    -1,    -1,   488,    -1,   490,   491,    81,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    16,    -1,    -1,
      -1,   504,   505,    -1,   249,    -1,   509,    -1,   511,    28,
     513,   514,    -1,    -1,    -1,    -1,   519,   520,    -1,   522,
      -1,   524,   525,    42,    -1,   528,    45,   530,   531,   274,
      -1,    -1,   163,   407,   537,    -1,    -1,    -1,   412,    58,
      -1,   415,    -1,    11,    12,    -1,    -1,    15,    67,    68,
      -1,   425,    -1,    -1,    -1,    57,    -1,    25,    -1,    -1,
      79,    -1,    30,    31,    -1,    -1,   440,    -1,    -1,   443,
     444,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
     211,   212,    -1,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,   473,
     474,    -1,   476,    -1,   478,   479,   480,   481,    -1,   483,
      -1,   113,    80,    81,   488,    -1,   490,   491,   249,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     504,   505,    -1,    -1,    -1,   509,    -1,   511,    -1,   513,
     514,    -1,    -1,   274,    -1,   519,   520,    -1,   522,    -1,
     524,   525,    -1,    -1,   528,    -1,   530,   531,    12,    -1,
      -1,   163,   407,   537,    -1,    -1,    -1,   412,    -1,    -1,
     415,    -1,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,
     425,    -1,    -1,    -1,    57,    39,    -1,    -1,    -1,    -1,
      44,    -1,    46,    -1,    -1,   440,    -1,    -1,   443,   444,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,
     212,    -1,    -1,    67,    68,    -1,    -1,    71,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    79,    80,    -1,   473,   474,
      -1,   476,    -1,   478,   479,   480,   481,    91,   483,    -1,
     113,    -1,    -1,   488,    -1,   490,   491,   249,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   504,
     505,    -1,    -1,    -1,   509,    -1,   511,    -1,   513,   514,
      -1,    -1,   274,     5,   519,   520,   407,   522,    10,   524,
     525,   412,    -1,   528,   415,   530,   531,    -1,    20,    -1,
     163,    23,   537,    -1,   425,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    38,    39,    -1,   440,
      -1,    -1,   443,   444,    -1,    -1,    48,    -1,    -1,    -1,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    -1,    -1,    66,    -1,    -1,    -1,   211,   212,
      -1,    -1,   473,   474,    76,   476,    78,   478,   479,   480,
     481,    -1,   483,    -1,   113,    -1,    -1,   488,    -1,   490,
     491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   504,   505,    -1,   249,    -1,   509,    -1,
     511,    -1,   513,   514,    -1,    -1,    -1,    -1,   519,   520,
      -1,   522,    -1,   524,   525,    -1,    -1,   528,    -1,   530,
     531,   274,    -1,    -1,   163,   407,   537,    -1,    -1,    -1,
     412,    -1,    -1,   415,    -1,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,   425,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,   440,    -1,
      -1,   443,   444,    39,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    47,   211,   212,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,
      -1,   473,   474,    -1,   476,    -1,   478,   479,   480,   481,
      -1,   483,    -1,    -1,    -1,    81,   488,    -1,   490,   491,
     249,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   504,   505,    -1,    -1,    -1,   509,    -1,   511,
      -1,   513,   514,    -1,     5,   274,    -1,   519,   520,    10,
     522,    -1,   524,   525,    -1,    -1,   528,    -1,   530,   531,
      -1,    -1,    23,    -1,   407,   537,    -1,    -1,    -1,   412,
      -1,    -1,   415,    -1,    -1,    36,    11,    38,    -1,    -1,
      15,    -1,   425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    52,    -1,    54,    -1,    30,    -1,   440,    -1,    60,
     443,   444,    63,    -1,    39,    66,    -1,    -1,    43,    -1,
      -1,    -1,    47,    -1,    -1,    76,    -1,    78,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,
     473,   474,    -1,   476,    -1,   478,   479,   480,   481,    74,
     483,    -1,    -1,    -1,    -1,   488,    81,   490,   491,    -1,
      98,    -1,    87,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   504,   505,   481,    -1,   483,   509,    -1,   511,    -1,
     513,   514,    -1,    -1,    -1,    -1,   519,   520,   407,   522,
      -1,   524,   525,   412,   212,   528,   415,   530,   531,    -1,
      -1,   509,    -1,   511,   537,    -1,   425,    -1,    -1,    -1,
      -1,   519,   520,    -1,   522,    -1,    -1,   525,    -1,    -1,
     528,   440,   530,   531,   443,   444,    -1,    -1,    -1,   537,
      -1,   249,    -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,
     178,   179,   180,    -1,     3,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   473,   474,    -1,   476,    -1,   478,
     479,   480,   481,    -1,   483,    -1,    -1,    -1,    27,   488,
      -1,   490,   491,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,   504,   505,    -1,    -1,    -1,
     509,    -1,   511,    -1,   513,   514,    -1,    -1,    57,    -1,
     519,   520,    -1,   522,    -1,   524,   525,    66,    67,   528,
      -1,   530,   531,    -1,    -1,    -1,    -1,    -1,   537,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      99,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   291,   113,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,   415,    -1,    -1,
      30,    -1,    -1,    -1,   163,    -1,    -1,   425,    -1,    39,
     169,    -1,    -1,    43,    -1,    -1,   175,    47,   177,   178,
     179,   180,   440,    53,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,   379,    72,    -1,    -1,   383,    -1,    -1,    -1,    -1,
      -1,    81,   211,    -1,    -1,   473,   474,    87,   476,    -1,
      -1,   479,    -1,   481,    -1,   483,    -1,    -1,    -1,    -1,
     488,    -1,   490,   491,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,
      -1,   509,    -1,   511,    -1,    -1,   434,   435,    -1,    -1,
     438,   519,   520,    -1,   522,    -1,    -1,   525,    -1,    -1,
     528,    -1,   530,   531,    -1,   274,    -1,    -1,    -1,   537,
      -1,   280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   291,    -1,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,     7,    -1,    -1,   314,    11,    12,    13,    -1,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,    44,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    11,    70,    71,    -1,    15,    74,
     379,    -1,    -1,    -1,   383,    80,    81,    -1,    -1,    -1,
      85,    -1,    -1,    30,    89,    -1,    -1,    92,    93,    -1,
      -1,     7,    39,    -1,    -1,    11,    43,    13,    -1,    15,
      47,    -1,    -1,    19,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,   421,    -1,    30,    -1,    32,    64,    -1,    -1,
     429,    -1,    -1,    39,    40,   434,   435,    43,    -1,   438,
      46,    47,    -1,    -1,    81,    -1,    -1,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,     7,    64,    -1,
      -1,    11,    -1,    13,    70,    15,    -1,    -1,    74,    19,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      30,   480,    32,    89,    -1,    -1,    92,    93,    -1,    39,
      40,    -1,    -1,    43,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    55,    56,    57,    15,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    25,    -1,
      70,    -1,    -1,    30,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    39,    -1,    -1,    85,    43,    -1,    -1,    89,
      47,    -1,    92,    93,    -1,    -1,    53,    11,    55,    56,
      57,    15,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    72,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    39,    -1,    -1,    -1,    43,
      87,    -1,    11,    47,    -1,    -1,    15,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,    -1,    25,    -1,    62,    -1,
      64,    30,    11,    -1,    -1,    -1,    15,    -1,    -1,    73,
      39,    -1,    -1,    -1,    43,    -1,    25,    81,    47,    -1,
      -1,    30,    -1,    87,    53,    -1,    55,    56,    57,    -1,
      39,    -1,    -1,    62,    43,    64,    -1,    11,    47,    -1,
      -1,    15,    -1,    -1,    53,    74,    55,    56,    57,    -1,
      -1,    25,    81,    62,    -1,    64,    30,    11,    87,    -1,
      -1,    15,    -1,    72,    -1,    39,    -1,    -1,    -1,    43,
      -1,    25,    81,    47,    -1,    -1,    30,    -1,    87,    53,
      -1,    55,    56,    57,    -1,    39,    -1,    -1,    62,    43,
      64,     5,    -1,    47,    -1,    -1,    10,    -1,    -1,    53,
      74,    55,    56,    57,    -1,    -1,    20,    81,    62,    23,
      64,     5,    -1,    87,    -1,    -1,    10,    -1,    -1,    -1,
      74,    -1,    36,    -1,    38,    -1,    20,    81,    -1,    23,
      -1,    -1,    -1,    87,    48,    -1,    -1,    -1,    52,    -1,
      54,    -1,    36,    -1,    38,    -1,    60,    -1,    -1,    63,
      -1,    -1,    66,    -1,    48,    -1,    -1,    -1,    52,    -1,
      54,    -1,    76,    -1,    78,    -1,    60,    -1,    -1,    63,
      11,    12,    66,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    78,    -1,    -1,    28,    -1,    30,
      31,    -1,    11,    12,    -1,    -1,    15,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    28,
      -1,    30,    31,    -1,    55,    56,    57,    -1,    -1,    -1,
      39,    -1,    11,    64,    43,    44,    15,    -1,    47,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    55,    56,    57,    80,
      81,    30,    -1,    -1,    11,    64,    -1,    -1,    15,    -1,
      39,    -1,    -1,    -1,    43,    74,    -1,    -1,    47,    -1,
      -1,    80,    81,    30,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    39,    -1,    11,    64,    43,    -1,    15,    -1,
      47,    -1,    -1,    72,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    81,    30,    11,    -1,    -1,    64,    15,    -1,
      -1,    -1,    39,    -1,    -1,    72,    43,    -1,    -1,    -1,
      47,    -1,    -1,    30,    81,    -1,    -1,    11,    55,    56,
      57,    15,    39,    -1,    -1,    -1,    43,    64,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    72,    30,    11,    55,    56,
      57,    15,    -1,    -1,    81,    39,    -1,    64,    11,    43,
      -1,    -1,    15,    47,    -1,    72,    30,    -1,    -1,    -1,
      -1,    55,    56,    57,    81,    39,    -1,    30,    -1,    43,
      64,    -1,    -1,    47,    -1,    -1,    39,    -1,    72,    -1,
      43,    55,    56,    57,    47,    11,    -1,    81,    -1,    15,
      64,    -1,    55,    56,    57,    -1,    -1,    -1,    72,    -1,
      -1,    64,    -1,    -1,    30,    -1,    -1,    81,    -1,    72,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    81,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81
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
      76,    78,    55,    64,    23,   115,    18,    74,    73,    48,
     130,   125,   130,    97,   141,    74,    74,   108,    39,    88,
      18,    72,   199,   109,   113,   185,   199,   199,   199,    17,
      74,     9,    69,     4,     8,    65,     3,    24,    26,    33,
      34,    49,    50,    35,    37,    51,    53,    62,    59,    75,
      77,    74,    74,   125,    28,    74,   108,   150,   162,   163,
     165,   143,    72,   138,   185,   185,    72,   184,   184,    47,
      74,    74,    14,    29,   174,   175,   185,    74,    74,   185,
     185,    39,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,    48,   143,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   127,   185,    23,
     126,    73,    74,    97,    39,    88,   115,    39,   132,    72,
     115,    48,   115,    72,   185,   190,   185,   191,   192,   193,
     194,   195,   195,   196,   196,   196,   196,   197,   197,   197,
     198,   198,   199,   199,   199,    74,   108,    74,   185,   125,
      74,    17,    18,    18,    72,    72,    48,   115,   115,    72,
     138,    47,   140,    29,   175,    72,    47,    73,   185,    56,
     183,   115,    39,   199,    72,    72,   202,    74,    17,   125,
      72,   164,   165,    74,    74,   185,   185,   150,   185,    32,
      39,    92,   143,   144,   145,   148,   153,   154,   157,   159,
     161,   167,    72,   132,   140,   143,    72,   138,    73,   199,
     202,   188,   143,    72,    72,   164,    72,   164,    74,    72,
      47,    17,    47,    22,    72,    72,   143,   143,    72,   143,
      72,    72,   164,   143,    74,   162,   163,   144,   185,   144,
     140,   143,   143,   143,    72,    74,   185,    74,    17,    72,
     143,    72,   164,    74,    74,   185,   185,   144,   144,    72,
      72,   164,    72,   164,    74,    72,   144,   144,    72,   144,
      72,    72,   164,   144,   144,   144,   144,    72,   144
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
     187,   187,   188,   188,   189,   189,   190,   190,   191,   191,
     192,   192,   193,   193,   194,   194,   194,   195,   195,   195,
     195,   195,   196,   196,   196,   196,   197,   197,   197,   198,
     198,   198,   198,   199,   199,   199,   199,   199,   200,   201,
     202,   202,   202,   202,   203,   203,   203,   203,   204,   204,
     204,   204,   205,   206
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
       3,     3,     1,     5,     1,     3,     1,     3,     1,     3,
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
  case 3:
#line 73 "parser.y"
                           {new_scope();}
#line 2353 "parser.tab.c"
    break;

  case 4:
#line 74 "parser.y"
                                {old_scope();}
#line 2359 "parser.tab.c"
    break;

  case 27:
#line 129 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->type);}
#line 2365 "parser.tab.c"
    break;

  case 28:
#line 130 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->type);}
#line 2371 "parser.tab.c"
    break;

  case 29:
#line 134 "parser.y"
                 {strcpy((yyval.item)->type,(yyvsp[0].item)->type);}
#line 2377 "parser.tab.c"
    break;

  case 30:
#line 135 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2383 "parser.tab.c"
    break;

  case 31:
#line 136 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2389 "parser.tab.c"
    break;

  case 32:
#line 140 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2395 "parser.tab.c"
    break;

  case 33:
#line 141 "parser.y"
                        {strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2401 "parser.tab.c"
    break;

  case 34:
#line 145 "parser.y"
                {check_gst((yyvsp[0].item)->label); strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2407 "parser.tab.c"
    break;

  case 35:
#line 146 "parser.y"
                        {strcpy((yyval.item)->type,(yyvsp[0].item)->type);}
#line 2413 "parser.tab.c"
    break;

  case 36:
#line 150 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2419 "parser.tab.c"
    break;

  case 37:
#line 154 "parser.y"
                                {strcpy((yyval.item)->label,strcat((yyvsp[-2].item)->label,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->label)));}
#line 2425 "parser.tab.c"
    break;

  case 38:
#line 155 "parser.y"
                        {strcpy((yyval.item)->label,(yyvsp[0].item)->label);}
#line 2431 "parser.tab.c"
    break;

  case 39:
#line 159 "parser.y"
                        {string t; for(int i=0;i<(yyvsp[-1].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->type,strcat((yyvsp[-1].item)->type,t.c_str()));}
#line 2437 "parser.tab.c"
    break;

  case 40:
#line 163 "parser.y"
                                          {(yyval.item)->dims = (yyvsp[-2].item)->dims+1;}
#line 2443 "parser.tab.c"
    break;

  case 41:
#line 164 "parser.y"
                                        {(yyval.item)->dims = 1;}
#line 2449 "parser.tab.c"
    break;

  case 42:
#line 168 "parser.y"
                    {strcpy((yyval.item)->type,""); strcpy((yyval.item)->label,(yyvsp[0].item)->label); line_number = yylineno;  if(!first_parse) go_in_scope((yyvsp[0].item)->label);curr_class_name = (yyvsp[0].item)->label;}
#line 2455 "parser.tab.c"
    break;

  case 43:
#line 169 "parser.y"
                                    {strcpy((yyval.item)->type,(yyvsp[-2].item)->label); strcpy((yyval.item)->label,(yyvsp[0].item)->label); line_number = yylineno;  if(!first_parse) go_in_scope((yyvsp[0].item)->label); curr_class_name = (yyvsp[0].item)->label;}
#line 2461 "parser.tab.c"
    break;

  case 44:
#line 172 "parser.y"
                                        {if(first_parse){string mod = check_class_modifiers((yyvsp[-1].item)->type);make_class_entry((yyvsp[-1].item)->label,line_number,mod);}}
#line 2467 "parser.tab.c"
    break;

  case 45:
#line 176 "parser.y"
                             {strcpy((yyval.item)->label,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->label));}
#line 2473 "parser.tab.c"
    break;

  case 46:
#line 177 "parser.y"
                {strcpy((yyval.item)->label,(yyvsp[0].item)->label);}
#line 2479 "parser.tab.c"
    break;

  case 47:
#line 181 "parser.y"
            {strcpy((yyval.item)->label,"0");}
#line 2485 "parser.tab.c"
    break;

  case 48:
#line 182 "parser.y"
                {strcpy((yyval.item)->label,"1");}
#line 2491 "parser.tab.c"
    break;

  case 49:
#line 183 "parser.y"
                {strcpy((yyval.item)->label,"2");}
#line 2497 "parser.tab.c"
    break;

  case 50:
#line 184 "parser.y"
                {strcpy((yyval.item)->label,"3");}
#line 2503 "parser.tab.c"
    break;

  case 57:
#line 200 "parser.y"
        {reset();}
#line 2509 "parser.tab.c"
    break;

  case 61:
#line 210 "parser.y"
                                        {
    for(int i=0;i<v.size();i++){
        string t = expression_type(yylineno,(yyvsp[-2].item)->type,v[i].second,"declare");
        if(first_parse)   make_entry(v[i].first,t,yylineno,"0000");
    }
    v.clear();	
}
#line 2521 "parser.tab.c"
    break;

  case 62:
#line 217 "parser.y"
                                                        {
    for(int i=0;i<v.size();i++){
        string t = expression_type(yylineno,(yyvsp[-2].item)->type,v[i].second,"declare");
        if(first_parse) make_entry(v[i].first,t,yylineno,check_method_modifiers((yyvsp[-3].item)->label));
    }
    v.clear();
}
#line 2533 "parser.tab.c"
    break;

  case 63:
#line 227 "parser.y"
                                                    {if(!first_parse){(yyval.item)->i_number = (yyvsp[-2].item)->i_number; (yyval.item)->dimension = (yyvsp[-2].item)->dimension;}}
#line 2539 "parser.tab.c"
    break;

  case 64:
#line 228 "parser.y"
                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 2545 "parser.tab.c"
    break;

  case 65:
#line 232 "parser.y"
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
#line 2562 "parser.tab.c"
    break;

  case 66:
#line 244 "parser.y"
                {v.push_back(make_pair((yyvsp[0].item)->label,""));}
#line 2568 "parser.tab.c"
    break;

  case 67:
#line 245 "parser.y"
                        {string t; for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); v.push_back(make_pair((yyvsp[-1].item)->label,t));}
#line 2574 "parser.tab.c"
    break;

  case 68:
#line 246 "parser.y"
                                                 {if(first_parse){string t; for(int i=0;i<(yyvsp[-2].item)->dims;i++) t.push_back('*'); v.push_back(make_pair((yyvsp[-3].item)->label,t));}else{if((yyvsp[-2].item)->dims == (yyvsp[0].item)->dims) v.push_back(make_pair((yyvsp[-3].item)->label,(yyvsp[0].item)->type)); else{cout<<"Dimensions of array not matched in line number: "<<yylineno<<endl; exit(1);}array_func((yyvsp[-3].item)->label,(yyvsp[0].item)->dimension,(yyvsp[0].item)->type);(yyval.item)->dimension = (yyvsp[0].item)->dimension; }}
#line 2580 "parser.tab.c"
    break;

  case 69:
#line 250 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2586 "parser.tab.c"
    break;

  case 70:
#line 253 "parser.y"
                        {if((yyvsp[0].item)->dims){cout<<"Void function cant be of array type in line number "<<yylineno<<endl; exit(1);} strcpy((yyval.item)->label,(yyvsp[0].item)->label); strcpy((yyval.item)->type,"void0000"); line_number = yylineno; if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1);(yyval.item)->i_number = inst_num-1; for(int i=0;i<arguments.size();i++) emitt("","popparam","",get<0>(arguments[i]),-1);}}
#line 2592 "parser.tab.c"
    break;

  case 71:
#line 254 "parser.y"
                        {string t; for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->label,(yyvsp[0].item)->label); strcpy((yyval.item)->type,strcat((yyvsp[-1].item)->type,(t+"0000").c_str())); line_number = yylineno; if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; (yyval.item)->i_number = inst_num-1; for(int i=0;i<arguments.size();i++) emitt("","popparam","",get<0>(arguments[i]),-1);}}
#line 2598 "parser.tab.c"
    break;

  case 72:
#line 255 "parser.y"
                                        {if((yyvsp[0].item)->dims){cout<<"Void function cant be of array type in line number "<<yylineno<<endl;exit(1);} string x = check_method_modifiers((yyvsp[-2].item)->label); strcpy((yyval.item)->label,(yyvsp[0].item)->label); strcpy((yyval.item)->type,("void"+x).c_str()); line_number = yylineno; if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1);(yyval.item)->i_number = inst_num-1; for(int i=0;i<arguments.size();i++) emitt("","popparam","",get<0>(arguments[i]),-1);}}
#line 2604 "parser.tab.c"
    break;

  case 73:
#line 256 "parser.y"
                                        {string t; for(int i=0;i<(yyvsp[-1].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->label,(yyvsp[0].item)->label); string x = check_method_modifiers((yyvsp[-2].item)->label); strcpy((yyval.item)->type,strcat((yyvsp[-1].item)->type,(t+x).c_str())); line_number = yylineno; if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1);(yyval.item)->i_number = inst_num-1; for(int i=0;i<arguments.size();i++) emitt("","popparam","",get<0>(arguments[i]),-1);}}
#line 2610 "parser.tab.c"
    break;

  case 74:
#line 259 "parser.y"
                                        {if(first_parse){string x = (yyvsp[-1].item)->type; make_func_entry((yyvsp[-1].item)->label,x.substr(0,x.size()-4),arguments,line_number,x.substr(x.size()-4,4)); arguments.clear();}else{print(curr_class_name+"."+(yyvsp[-1].item)->label);emitt("end","","","",-1); (yyval.item)->i_number = (yyvsp[-1].item)->i_number; backpatch((yyvsp[0].item)->next_list,inst_num-1);}}
#line 2616 "parser.tab.c"
    break;

  case 75:
#line 263 "parser.y"
            {strcpy((yyval.item)->label,(yyvsp[0].item)->label); (yyval.item)->dims = 0;}
#line 2622 "parser.tab.c"
    break;

  case 76:
#line 264 "parser.y"
                        {strcpy((yyval.item)->label,(yyvsp[-1].item)->label); (yyval.item)->dims = (yyvsp[0].item)->dims;}
#line 2628 "parser.tab.c"
    break;

  case 79:
#line 273 "parser.y"
                    {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item)->label,(yyvsp[-1].item)->type,0,0));}}
#line 2634 "parser.tab.c"
    break;

  case 80:
#line 274 "parser.y"
                                        {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item)->label,(yyvsp[-1].item)->type,0,1));}}
#line 2640 "parser.tab.c"
    break;

  case 81:
#line 275 "parser.y"
                                {if(first_parse){string t; for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); arguments.push_back(make_tuple((yyvsp[-1].item)->label,strcat((yyvsp[-2].item)->type,t.c_str()),0,0));}}
#line 2646 "parser.tab.c"
    break;

  case 82:
#line 276 "parser.y"
                                        {if(first_parse){string t; for(int i=0;i<(yyvsp[-1].item)->dims;i++) t.push_back('*'); arguments.push_back(make_tuple((yyvsp[-1].item)->label,strcat((yyvsp[-3].item)->type,t.c_str()),0,1));}}
#line 2652 "parser.tab.c"
    break;

  case 83:
#line 277 "parser.y"
                                        {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item)->label,(yyvsp[-2].item)->type,1,0));}}
#line 2658 "parser.tab.c"
    break;

  case 84:
#line 278 "parser.y"
                                                {if(first_parse){arguments.push_back(make_tuple((yyvsp[0].item)->label,(yyvsp[-2].item)->type,1,1));}}
#line 2664 "parser.tab.c"
    break;

  case 85:
#line 282 "parser.y"
        {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number,(yyval.item)->next_list = merge((yyvsp[0].item)->next_list,(yyvsp[0].item)->end_list);}}
#line 2670 "parser.tab.c"
    break;

  case 87:
#line 287 "parser.y"
            {strcpy((yyval.item)->type,"0000"); strcpy((yyval.item)->label,(yyvsp[0].item)->label); line_number = yylineno;  if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1);(yyval.item)->i_number = inst_num-1;}}
#line 2676 "parser.tab.c"
    break;

  case 88:
#line 288 "parser.y"
                            {string x = check_method_modifiers((yyvsp[-1].item)->label); strcpy((yyval.item)->type,x.c_str()); strcpy((yyval.item)->label,(yyvsp[0].item)->label);  line_number = yylineno; if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1);(yyval.item)->i_number = inst_num-1;}}
#line 2682 "parser.tab.c"
    break;

  case 89:
#line 291 "parser.y"
                                             {if(first_parse){check_constructor((yyvsp[0].item)->label); make_func_entry((yyvsp[-1].item)->label,(yyvsp[-1].item)->label,arguments,line_number,(yyvsp[-1].item)->type); arguments.clear();emitt("end","","","",-1); (yyval.item)->i_number = (yyvsp[-1].item)->i_number; backpatch((yyvsp[0].item)->next_list,inst_num-1);}}
#line 2688 "parser.tab.c"
    break;

  case 94:
#line 305 "parser.y"
                                {if(!first_parse){function_call.push_back((yyvsp[0].item)->type);}}
#line 2694 "parser.tab.c"
    break;

  case 95:
#line 306 "parser.y"
                {if(!first_parse){function_call.push_back((yyvsp[0].item)->type);}}
#line 2700 "parser.tab.c"
    break;

  case 96:
#line 311 "parser.y"
                                {if(first_parse) make_class_entry((yyvsp[-1].item)->label,yylineno,"00");}
#line 2706 "parser.tab.c"
    break;

  case 97:
#line 312 "parser.y"
                                                {if(first_parse){string mod = check_class_modifiers((yyvsp[-3].item)->label); make_class_entry((yyvsp[-1].item)->label,yylineno,mod);}}
#line 2712 "parser.tab.c"
    break;

  case 98:
#line 316 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = -1;}}
#line 2718 "parser.tab.c"
    break;

  case 99:
#line 317 "parser.y"
                                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[-1].item)->i_number, (yyval.item)->true_list = (yyvsp[-1].item)->true_list; (yyval.item)->next_list = (yyvsp[-1].item)->next_list;(yyval.item)->end_list=(yyvsp[-1].item)->end_list;}}
#line 2724 "parser.tab.c"
    break;

  case 100:
#line 321 "parser.y"
                                {if(!first_parse){backpatch((yyvsp[-1].item)->next_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[-1].item)->i_number; (yyval.item)->true_list = merge((yyvsp[-1].item)->true_list, (yyvsp[0].item)->true_list);(yyval.item)->end_list=merge((yyvsp[-1].item)->end_list,(yyvsp[0].item)->end_list);}}
#line 2730 "parser.tab.c"
    break;

  case 101:
#line 322 "parser.y"
                 {if(!first_parse){(yyval.item)->next_list = (yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2736 "parser.tab.c"
    break;

  case 102:
#line 326 "parser.y"
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
#line 2753 "parser.tab.c"
    break;

  case 103:
#line 338 "parser.y"
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
#line 2768 "parser.tab.c"
    break;

  case 104:
#line 348 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type); (yyval.item)->next_list = (yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2774 "parser.tab.c"
    break;

  case 105:
#line 352 "parser.y"
                                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type); (yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2780 "parser.tab.c"
    break;

  case 106:
#line 353 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2786 "parser.tab.c"
    break;

  case 107:
#line 354 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[0].item)->i_number;(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2792 "parser.tab.c"
    break;

  case 108:
#line 355 "parser.y"
                                                {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[0].item)->i_number;(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2798 "parser.tab.c"
    break;

  case 109:
#line 356 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[0].item)->i_number;(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2804 "parser.tab.c"
    break;

  case 110:
#line 357 "parser.y"
                                                {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[0].item)->i_number;(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2810 "parser.tab.c"
    break;

  case 111:
#line 361 "parser.y"
                                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type); (yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2816 "parser.tab.c"
    break;

  case 112:
#line 362 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2822 "parser.tab.c"
    break;

  case 113:
#line 363 "parser.y"
                                                {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2828 "parser.tab.c"
    break;

  case 114:
#line 364 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number;(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2834 "parser.tab.c"
    break;

  case 115:
#line 365 "parser.y"
                                                {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number;(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2840 "parser.tab.c"
    break;

  case 116:
#line 369 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2846 "parser.tab.c"
    break;

  case 117:
#line 370 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2852 "parser.tab.c"
    break;

  case 118:
#line 371 "parser.y"
                                                    {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2858 "parser.tab.c"
    break;

  case 119:
#line 372 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2864 "parser.tab.c"
    break;

  case 120:
#line 373 "parser.y"
                                                    {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2870 "parser.tab.c"
    break;

  case 121:
#line 374 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2876 "parser.tab.c"
    break;

  case 122:
#line 375 "parser.y"
                                                    {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2882 "parser.tab.c"
    break;

  case 123:
#line 376 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2888 "parser.tab.c"
    break;

  case 124:
#line 377 "parser.y"
                                                    {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2894 "parser.tab.c"
    break;

  case 125:
#line 378 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2900 "parser.tab.c"
    break;

  case 129:
#line 394 "parser.y"
                                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[-1].item)->i_number;}}
#line 2906 "parser.tab.c"
    break;

  case 130:
#line 398 "parser.y"
                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2912 "parser.tab.c"
    break;

  case 131:
#line 399 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2918 "parser.tab.c"
    break;

  case 132:
#line 400 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2924 "parser.tab.c"
    break;

  case 133:
#line 401 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2930 "parser.tab.c"
    break;

  case 134:
#line 402 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2936 "parser.tab.c"
    break;

  case 137:
#line 407 "parser.y"
                                                                {if(!first_parse){reset(); backpatch((yyvsp[-2].item)->true_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-2].item)->false_list,(yyvsp[0].item)->next_list); (yyval.item)->i_number=(yyvsp[-2].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;  (yyval.item)->end_list = (yyvsp[0].item)->end_list;}}
#line 2942 "parser.tab.c"
    break;

  case 138:
#line 411 "parser.y"
                                            {if(!first_parse){reset(); backpatch((yyval.item)->false_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-2].item)->next_list,(yyvsp[0].item)->next_list);(yyval.item)->i_number = (yyvsp[-2].item)->i_number; (yyval.item)->true_list = merge((yyvsp[-2].item)->true_list,(yyvsp[0].item)->true_list); (yyval.item)->end_list = (yyvsp[0].item)->end_list;}}
#line 2948 "parser.tab.c"
    break;

  case 139:
#line 415 "parser.y"
                                                                    {if(!first_parse){reset(); backpatch((yyvsp[-2].item)->true_list,(yyvsp[0].item)->i_number); (yyval.item)->false_list = (yyvsp[-2].item)->false_list; emitt("","","","goto",-1); (yyval.item)->next_list = (yyvsp[0].item)->next_list; (yyval.item)->next_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->end_list = (yyvsp[0].item)->end_list;}}
#line 2954 "parser.tab.c"
    break;

  case 140:
#line 419 "parser.y"
                                                        {if(!first_parse){reset(); backpatch((yyval.item)->false_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-2].item)->next_list,(yyvsp[0].item)->next_list);(yyval.item)->i_number = (yyvsp[-2].item)->i_number; (yyval.item)->true_list = merge((yyvsp[-2].item)->true_list,(yyvsp[0].item)->true_list); (yyval.item)->end_list = (yyvsp[0].item)->end_list;}}
#line 2960 "parser.tab.c"
    break;

  case 143:
#line 429 "parser.y"
                                                                {if(!first_parse){string t = (yyvsp[-2].item)->type; if(t!="boolean"){cout<<"Expression must be of type boolean in line number "<<yylineno<<endl;exit(1);} reset(); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); backpatch((yyvsp[-2].item)->true_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-2].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-2].item)->i_number); (yyval.item)->i_number = (yyvsp[-2].item)->i_number; (yyval.item)->end_list = (yyvsp[0].item)->end_list;}}
#line 2966 "parser.tab.c"
    break;

  case 144:
#line 433 "parser.y"
                                                                                {if(!first_parse){string t = (yyvsp[-2].item)->type; if(t!="boolean"){cout<<"Expression must be of type boolean in line number "<<yylineno<<endl;exit(1);} reset(); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); backpatch((yyvsp[-2].item)->true_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-2].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-2].item)->i_number); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 2972 "parser.tab.c"
    break;

  case 145:
#line 437 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number; (yyval.item)->next_list = (yyvsp[0].item)->next_list;(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2978 "parser.tab.c"
    break;

  case 147:
#line 442 "parser.y"
                                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number; (yyval.item)->next_list = (yyvsp[0].item)->next_list;(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2984 "parser.tab.c"
    break;

  case 149:
#line 447 "parser.y"
                                                                        {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[0].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[0].item)->i_number);(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2990 "parser.tab.c"
    break;

  case 150:
#line 448 "parser.y"
                                                                                    {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[0].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[0].item)->i_number);(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 2996 "parser.tab.c"
    break;

  case 151:
#line 449 "parser.y"
                                                                                                {if(!first_parse){string t = (yyvsp[-3].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression in line number "<<yylineno<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-3].item)->i_number; if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num; backpatch((yyvsp[-3].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-3].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-3].item)->false_list,(yyvsp[0].item)->true_list);  emitt("","","","goto",(yyvsp[-3].item)->i_number);(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 3002 "parser.tab.c"
    break;

  case 152:
#line 450 "parser.y"
                                                                                                        {if(!first_parse){string t = (yyvsp[-4].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression in line number "<<yylineno<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-4].item)->i_number;if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num; backpatch((yyvsp[-4].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-4].item)->false_list,(yyvsp[0].item)->true_list);  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[-4].item)->i_number);(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 3008 "parser.tab.c"
    break;

  case 153:
#line 451 "parser.y"
                                                                                                {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[-4].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[0].item)->i_number);(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 3014 "parser.tab.c"
    break;

  case 154:
#line 452 "parser.y"
                                                                                                        {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[-5].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[0].item)->i_number);(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 3020 "parser.tab.c"
    break;

  case 155:
#line 453 "parser.y"
                                                                                                        {if(!first_parse){string t = (yyvsp[-3].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression in line number "<<yylineno<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-5].item)->i_number; if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num;backpatch((yyvsp[-3].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-3].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-3].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-3].item)->i_number);(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 3026 "parser.tab.c"
    break;

  case 156:
#line 454 "parser.y"
                                                                                                                {if(!first_parse){string t = (yyvsp[-4].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression in line number "<<yylineno<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-6].item)->i_number;if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num; backpatch((yyvsp[-4].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-4].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-2].item)->i_number); backpatch((yyvsp[-2].item)->next_list,(yyvsp[-4].item)->i_number);(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 3032 "parser.tab.c"
    break;

  case 157:
#line 458 "parser.y"
                                                                                 {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[0].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[0].item)->i_number);(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 3038 "parser.tab.c"
    break;

  case 158:
#line 459 "parser.y"
                                                                                             {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[0].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[0].item)->i_number);(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 3044 "parser.tab.c"
    break;

  case 159:
#line 460 "parser.y"
                                                                                                        {if(!first_parse){string t = (yyvsp[-3].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-3].item)->i_number; if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num;  backpatch((yyvsp[-3].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-3].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-3].item)->false_list,(yyvsp[0].item)->true_list);  emitt("","","","goto",(yyvsp[-3].item)->i_number);(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 3050 "parser.tab.c"
    break;

  case 160:
#line 461 "parser.y"
                                                                                                                {if(!first_parse){string t = (yyvsp[-4].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-4].item)->i_number;if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num;  backpatch((yyvsp[-4].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-4].item)->false_list,(yyvsp[0].item)->true_list);  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[-4].item)->i_number);(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 3056 "parser.tab.c"
    break;

  case 161:
#line 462 "parser.y"
                                                                                                        {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[-4].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[0].item)->i_number);(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 3062 "parser.tab.c"
    break;

  case 162:
#line 463 "parser.y"
                                                                                                                {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[-5].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[0].item)->i_number);(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 3068 "parser.tab.c"
    break;

  case 163:
#line 464 "parser.y"
                                                                                                                {if(!first_parse){string t = (yyvsp[-3].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-5].item)->i_number;if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num;  backpatch((yyvsp[-3].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-3].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-3].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-3].item)->i_number);(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 3074 "parser.tab.c"
    break;

  case 164:
#line 465 "parser.y"
                                                                                                                        {if(!first_parse){string t = (yyvsp[-4].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-6].item)->i_number;if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num;  backpatch((yyvsp[-4].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-4].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-2].item)->i_number); backpatch((yyvsp[-2].item)->next_list,(yyvsp[-4].item)->i_number);(yyval.item)->end_list=(yyvsp[0].item)->end_list;}}
#line 3080 "parser.tab.c"
    break;

  case 165:
#line 469 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3086 "parser.tab.c"
    break;

  case 166:
#line 470 "parser.y"
                            {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3092 "parser.tab.c"
    break;

  case 167:
#line 474 "parser.y"
                           {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,(yyvsp[-1].item)->type,v[i].second,"declare");
            make_dirty_entry(v[i].first,t,yylineno,"0000",1);
        }
        (yyval.item)->i_number = (yyvsp[0].item)->i_number;
    }	
    v.clear();
}
#line 3107 "parser.tab.c"
    break;

  case 168:
#line 484 "parser.y"
                                   {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,(yyvsp[-2].item)->type,v[i].second,"declare");
            make_dirty_entry(v[i].first,t,yylineno,"0010",1);
        }
        (yyval.item)->i_number = (yyvsp[0].item)->i_number;
    }
    v.clear();
}
#line 3122 "parser.tab.c"
    break;

  case 169:
#line 496 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number; emitt("","","","goto",-1); (yyval.item)->next_list.push_back(inst_num-1);}}
#line 3128 "parser.tab.c"
    break;

  case 170:
#line 500 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3134 "parser.tab.c"
    break;

  case 171:
#line 501 "parser.y"
                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3140 "parser.tab.c"
    break;

  case 172:
#line 505 "parser.y"
                                                                                                {if(!first_parse){reset();}}
#line 3146 "parser.tab.c"
    break;

  case 173:
#line 509 "parser.y"
                                                                                                                {if(!first_parse){reset();}}
#line 3152 "parser.tab.c"
    break;

  case 174:
#line 513 "parser.y"
                                {if(!first_parse){emitt("","","","goto",-1); (yyval.item)->true_list.push_back(inst_num-1); (yyval.item)->i_number = inst_num-1;}}
#line 3158 "parser.tab.c"
    break;

  case 175:
#line 514 "parser.y"
                                        {if(!first_parse){emitt("","","","goto",-1); (yyval.item)->true_list.push_back(inst_num-1); (yyval.item)->i_number = inst_num-1;}}
#line 3164 "parser.tab.c"
    break;

  case 177:
#line 522 "parser.y"
                                {if(!first_parse){emitt("","","","goto",-1); (yyval.item)->next_list.push_back(inst_num-1); (yyval.item)->i_number = inst_num-1; }}
#line 3170 "parser.tab.c"
    break;

  case 178:
#line 523 "parser.y"
                                        {if(!first_parse){emitt("","","","goto",-1); (yyval.item)->next_list.push_back(inst_num-1); (yyval.item)->i_number = inst_num-1;}}
#line 3176 "parser.tab.c"
    break;

  case 179:
#line 527 "parser.y"
                                            {if(!first_parse){emitt("","","","goto",-1);(yyval.item)->end_list.push_back(inst_num-1);(yyval.item)->i_number = inst_num-1;}}
#line 3182 "parser.tab.c"
    break;

  case 180:
#line 528 "parser.y"
                                         {if(!first_parse){emitt("","","","goto",-1);(yyval.item)->i_number=(yyvsp[-1].item)->i_number;(yyval.item)->end_list.push_back(inst_num-1);}}
#line 3188 "parser.tab.c"
    break;

  case 188:
#line 551 "parser.y"
                        {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3194 "parser.tab.c"
    break;

  case 189:
#line 552 "parser.y"
                                {if(!first_parse){(yyval.item)->lit = false; strcpy((yyval.item)->type,(yyvsp[0].item)->type);(yyval.item)->dimension = (yyvsp[0].item)->dimension;(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3200 "parser.tab.c"
    break;

  case 190:
#line 556 "parser.y"
                        {if(!first_parse){(yyval.item)->lit = true;strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3206 "parser.tab.c"
    break;

  case 191:
#line 557 "parser.y"
                                               {if(!first_parse){(yyval.item)->lit = false; strcpy((yyval.item)->type,(yyvsp[-1].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[-1].item)->temp_var);(yyval.item)->true_list = (yyvsp[-1].item)->true_list; (yyval.item)->false_list = (yyvsp[-1].item)->false_list; (yyval.item)->i_number = (yyvsp[-1].item)->i_number;}}
#line 3212 "parser.tab.c"
    break;

  case 192:
#line 558 "parser.y"
                                        {if(!first_parse){(yyval.item)->lit = false; strcpy((yyval.item)->type,(yyvsp[0].item)->type);}}
#line 3218 "parser.tab.c"
    break;

  case 193:
#line 559 "parser.y"
                        {if(!first_parse){(yyval.item)->lit = false;  strcpy((yyval.item)->type,(yyvsp[0].item)->type);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3224 "parser.tab.c"
    break;

  case 194:
#line 560 "parser.y"
                                {if(!first_parse){(yyval.item)->lit = false; strcpy((yyval.item)->type,(yyvsp[0].item)->type);}}
#line 3230 "parser.tab.c"
    break;

  case 195:
#line 564 "parser.y"
                    {if(!first_parse){strcpy((yyval.item)->type,"int");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3236 "parser.tab.c"
    break;

  case 196:
#line 565 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,"float");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3242 "parser.tab.c"
    break;

  case 197:
#line 566 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,"boolean");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3248 "parser.tab.c"
    break;

  case 198:
#line 567 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,"char");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3254 "parser.tab.c"
    break;

  case 199:
#line 568 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,"String");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3260 "parser.tab.c"
    break;

  case 200:
#line 569 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,"null");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3266 "parser.tab.c"
    break;

  case 201:
#line 573 "parser.y"
                                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);}}
#line 3272 "parser.tab.c"
    break;

  case 202:
#line 577 "parser.y"
                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label); strcpy((yyval.item)->type,get_method(t,t,function_call).c_str());}}
#line 3278 "parser.tab.c"
    break;

  case 203:
#line 578 "parser.y"
                                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-3].item)->label,(yyvsp[-3].item)->label); strcpy((yyval.item)->type,get_method(t,t,function_call).c_str());}}
#line 3284 "parser.tab.c"
    break;

  case 204:
#line 582 "parser.y"
                                {if(!first_parse){string t = find_in_scope((yyvsp[-1].item)->label,(yyvsp[-1].item)->label); int count=0; for(int i=0;i<t.size();i++)if(t[i]=='*') count++; if(count<(yyvsp[0].item)->dims){cout<<"Accessing Higher Dimensions of "<<(yyvsp[-1].item)->label<<" in line number "<<yylineno<<endl; exit(1);} string l = (t.substr(0,t.size()-(yyvsp[0].item)->dims));strcpy((yyval.item)->type,l.c_str());vector<int> s = get_dimensions((yyvsp[-1].item)->label); strcpy((yyval.item)->temp_var,array_access((yyvsp[-1].item)->label,s,(yyvsp[0].item)->dimension).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3290 "parser.tab.c"
    break;

  case 205:
#line 586 "parser.y"
                                                        {if(!first_parse){strcpy((yyval.item)->type,get_method((yyvsp[-2].item)->label,"",function_call).c_str());}}
#line 3296 "parser.tab.c"
    break;

  case 206:
#line 587 "parser.y"
                                                                {if(!first_parse){strcpy((yyval.item)->type,get_method((yyvsp[-3].item)->label,"",function_call).c_str());function_call.clear();}}
#line 3302 "parser.tab.c"
    break;

  case 207:
#line 588 "parser.y"
                                                                                {if(!first_parse){strcpy((yyval.item)->type,get_method((yyvsp[-2].item)->label,find_in_scope((yyvsp[-4].item)->label,(yyvsp[-4].item)->label),function_call).c_str());}}
#line 3308 "parser.tab.c"
    break;

  case 208:
#line 589 "parser.y"
                                                                                        {if(!first_parse){strcpy((yyval.item)->type,get_method((yyvsp[-3].item)->label,find_in_scope((yyvsp[-5].item)->label,(yyvsp[-5].item)->label),function_call).c_str()); function_call.clear();}}
#line 3314 "parser.tab.c"
    break;

  case 209:
#line 593 "parser.y"
                                {if(!first_parse){string t; for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->type,strcat((yyvsp[-1].item)->type,t.c_str()));(yyval.item)->dims = (yyvsp[0].item)->dims; (yyval.item)->dimension = (yyvsp[0].item)->dimension; (yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3320 "parser.tab.c"
    break;

  case 210:
#line 594 "parser.y"
                                        {if(!first_parse){string t; for(int i=0;i<(yyvsp[-1].item)->dims;i++) t.push_back('*'); for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->type,strcat((yyvsp[-2].item)->type,t.c_str()));(yyval.item)->dims = (yyvsp[-1].item)->dims + (yyvsp[0].item)->dims;}}
#line 3326 "parser.tab.c"
    break;

  case 211:
#line 595 "parser.y"
                                {if(!first_parse){string t; for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->type,strcat((yyvsp[-1].item)->type,t.c_str()));(yyval.item)->dims = (yyvsp[0].item)->dims; (yyval.item)->dimension = (yyvsp[0].item)->dimension; (yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3332 "parser.tab.c"
    break;

  case 212:
#line 596 "parser.y"
                                        {if(!first_parse){string t; for(int i=0;i<(yyvsp[-1].item)->dims;i++) t.push_back('*'); for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->type,strcat((yyvsp[-2].item)->type,t.c_str()));(yyval.item)->dims = (yyvsp[-1].item)->dims + (yyvsp[0].item)->dims;}}
#line 3338 "parser.tab.c"
    break;

  case 213:
#line 600 "parser.y"
                                                                {if(!first_parse){(yyval.item)->dims = (yyvsp[-3].item)->dims+1; string t = (yyvsp[-1].item)->type; if(t!="int" && t!="byte" && t!="short" && t!="long") {cout<<"Array size must be of integer type. Line number: "<<yylineno<<endl; exit(1);}(yyvsp[-3].item)->dimension.push_back(reduce((yyvsp[-1].item)->temp_var)); (yyval.item)->dimension = (yyvsp[-3].item)->dimension; (yyval.item)->i_number = (yyvsp[-3].item)->i_number;}}
#line 3344 "parser.tab.c"
    break;

  case 214:
#line 601 "parser.y"
                                                                {if(!first_parse){(yyval.item)->dims=1; string t = (yyvsp[-1].item)->type; if(t!="int" && t!="byte" && t!="short" && t!="long") {cout<<"Array size must be of integer type. Line number: "<<yylineno<<endl; exit(1);} (yyval.item)->dimension.push_back(reduce((yyvsp[-1].item)->temp_var));(yyval.item)->i_number = (yyvsp[-1].item)->i_number;}}
#line 3350 "parser.tab.c"
    break;

  case 215:
#line 605 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number=(yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3356 "parser.tab.c"
    break;

  case 216:
#line 609 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);(yyval.item)->i_number=(yyvsp[0].item)->i_number;strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3362 "parser.tab.c"
    break;

  case 217:
#line 610 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 3368 "parser.tab.c"
    break;

  case 218:
#line 614 "parser.y"
                                        {
    if(!first_parse){
        string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);
        strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str());
        (yyval.item)->i_number = (yyvsp[0].item)->i_number;
        if((yyvsp[0].item)->dimension.size()){
            array_func((yyvsp[-2].item)->label,(yyvsp[0].item)->dimension,(yyvsp[0].item)->type);
            set_dimensions((yyvsp[-2].item)->label,(yyvsp[0].item)->dimension);
        }
        else if(t=="boolean"){
            emitt("","true","",(yyvsp[-2].item)->label,-1);
            backpatch((yyvsp[0].item)->true_list,inst_num-1);
            emitt("","false","",(yyvsp[-2].item)->label,-1);
            backpatch((yyvsp[0].item)->false_list,inst_num-1);
        }else{
            if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());}
            emitt("",(yyvsp[0].item)->temp_var,"",(yyvsp[-2].item)->label,-1);
        }
    }
}
#line 3393 "parser.tab.c"
    break;

  case 219:
#line 634 "parser.y"
                                            {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number;if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("*"+t,l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3399 "parser.tab.c"
    break;

  case 220:
#line 635 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number;if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("/"+t,l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3405 "parser.tab.c"
    break;

  case 221:
#line 636 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number;if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("\%"+t,l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3411 "parser.tab.c"
    break;

  case 222:
#line 637 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number;if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("+"+t,l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3417 "parser.tab.c"
    break;

  case 223:
#line 638 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number;if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("-"+t,l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3423 "parser.tab.c"
    break;

  case 224:
#line 639 "parser.y"
                                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("<<",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3429 "parser.tab.c"
    break;

  case 225:
#line 640 "parser.y"
                                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt(">>",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3435 "parser.tab.c"
    break;

  case 226:
#line 641 "parser.y"
                                                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt(">>>",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3441 "parser.tab.c"
    break;

  case 227:
#line 642 "parser.y"
                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number;if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("&"+t,l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3447 "parser.tab.c"
    break;

  case 228:
#line 643 "parser.y"
                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str());(yyval.item)->i_number = (yyvsp[0].item)->i_number;if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("^"+t,l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3453 "parser.tab.c"
    break;

  case 229:
#line 644 "parser.y"
                                      {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number;if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt("",(yyvsp[-2].item)->label,"",l,-1); string s = new_temporary(); emitt("|"+t,l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->label,-1);}}
#line 3459 "parser.tab.c"
    break;

  case 230:
#line 645 "parser.y"
                               {
    if(!first_parse){
        string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);
        strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str());
        (yyval.item)->i_number = (yyvsp[0].item)->i_number;
        if(t=="boolean"){
            emitt("","true","",(yyvsp[-2].item)->temp_var,-1);
            backpatch((yyvsp[0].item)->true_list,inst_num-1);
            emitt("","false","",(yyvsp[-2].item)->temp_var,-1);
            backpatch((yyvsp[0].item)->false_list,inst_num-1);
        }else{
            if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());}
            emitt("",(yyvsp[0].item)->temp_var,"",(yyvsp[-2].item)->temp_var,-1);
        }
    }
}
#line 3480 "parser.tab.c"
    break;

  case 231:
#line 661 "parser.y"
                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number;if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("*"+t,l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3486 "parser.tab.c"
    break;

  case 232:
#line 662 "parser.y"
                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number;if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("/"+t,l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3492 "parser.tab.c"
    break;

  case 233:
#line 663 "parser.y"
                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number;if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("\%"+t,l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3498 "parser.tab.c"
    break;

  case 234:
#line 664 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number;if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("+"+t,l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3504 "parser.tab.c"
    break;

  case 235:
#line 665 "parser.y"
                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number;if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("-"+t,l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3510 "parser.tab.c"
    break;

  case 236:
#line 666 "parser.y"
                                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("<<",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3516 "parser.tab.c"
    break;

  case 237:
#line 667 "parser.y"
                                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt(">>",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3522 "parser.tab.c"
    break;

  case 238:
#line 668 "parser.y"
                                                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt(">>>",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3528 "parser.tab.c"
    break;

  case 239:
#line 669 "parser.y"
                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number;if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("&"+t,l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3534 "parser.tab.c"
    break;

  case 240:
#line 670 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str());(yyval.item)->i_number = (yyvsp[0].item)->i_number;if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("^"+t,l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3540 "parser.tab.c"
    break;

  case 241:
#line 671 "parser.y"
                                   {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number;if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("|"+t,l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3546 "parser.tab.c"
    break;

  case 242:
#line 675 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3552 "parser.tab.c"
    break;

  case 243:
#line 676 "parser.y"
                                                                                {if(!first_parse){string s = (yyvsp[-4].item)->type; if(s!="boolean"){cout<<"First expression has to be boolean"<<endl;exit(1);}; backpatch((yyvsp[-4].item)->true_list,(yyvsp[-2].item)->i_number);}}
#line 3558 "parser.tab.c"
    break;

  case 244:
#line 680 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3564 "parser.tab.c"
    break;

  case 245:
#line 681 "parser.y"
                                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());backpatch((yyvsp[-2].item)->false_list,(yyvsp[0].item)->i_number);(yyval.item)->false_list = (yyvsp[0].item)->false_list; (yyval.item)->true_list = merge((yyvsp[-2].item)->true_list,(yyvsp[0].item)->true_list);(yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3570 "parser.tab.c"
    break;

  case 246:
#line 685 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3576 "parser.tab.c"
    break;

  case 247:
#line 686 "parser.y"
                                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());backpatch((yyvsp[-2].item)->true_list,(yyvsp[0].item)->i_number);(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = merge((yyvsp[-2].item)->false_list,(yyvsp[0].item)->false_list);(yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3582 "parser.tab.c"
    break;

  case 248:
#line 690 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3588 "parser.tab.c"
    break;

  case 249:
#line 691 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());if(t!=(yyvsp[-2].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[-2].item)->temp_var,t,temp,-1); strcpy((yyvsp[-2].item)->temp_var,temp.c_str());} if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt(strcat((yyvsp[-1].item)->label,t.c_str()),(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3594 "parser.tab.c"
    break;

  case 250:
#line 695 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3600 "parser.tab.c"
    break;

  case 251:
#line 696 "parser.y"
                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());if(t!=(yyvsp[-2].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[-2].item)->temp_var,t,temp,-1); strcpy((yyvsp[-2].item)->temp_var,temp.c_str());} if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt(strcat((yyvsp[-1].item)->label,t.c_str()),(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3606 "parser.tab.c"
    break;

  case 252:
#line 700 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3612 "parser.tab.c"
    break;

  case 253:
#line 701 "parser.y"
                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());if(t!=(yyvsp[-2].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[-2].item)->temp_var,t,temp,-1); strcpy((yyvsp[-2].item)->temp_var,temp.c_str());} if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt(strcat((yyvsp[-1].item)->label,t.c_str()),(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3618 "parser.tab.c"
    break;

  case 254:
#line 705 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3624 "parser.tab.c"
    break;

  case 255:
#line 706 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->temp_var)),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3630 "parser.tab.c"
    break;

  case 256:
#line 707 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->temp_var)),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3636 "parser.tab.c"
    break;

  case 257:
#line 711 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3642 "parser.tab.c"
    break;

  case 258:
#line 712 "parser.y"
                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str()); emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->temp_var)),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3648 "parser.tab.c"
    break;

  case 259:
#line 713 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->temp_var)),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3654 "parser.tab.c"
    break;

  case 260:
#line 714 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->temp_var)),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3660 "parser.tab.c"
    break;

  case 261:
#line 715 "parser.y"
                                                            {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->temp_var)),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3666 "parser.tab.c"
    break;

  case 262:
#line 719 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3672 "parser.tab.c"
    break;

  case 263:
#line 720 "parser.y"
                                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());if(t!=(yyvsp[-2].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[-2].item)->temp_var,t,temp,-1); strcpy((yyvsp[-2].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3678 "parser.tab.c"
    break;

  case 264:
#line 721 "parser.y"
                                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());if(t!=(yyvsp[-2].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[-2].item)->temp_var,t,temp,-1); strcpy((yyvsp[-2].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3684 "parser.tab.c"
    break;

  case 265:
#line 722 "parser.y"
                                                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());if(t!=(yyvsp[-2].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[-2].item)->temp_var,t,temp,-1); strcpy((yyvsp[-2].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3690 "parser.tab.c"
    break;

  case 266:
#line 726 "parser.y"
                            {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3696 "parser.tab.c"
    break;

  case 267:
#line 727 "parser.y"
                                                            {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());if(t!=(yyvsp[-2].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[-2].item)->temp_var,t,temp,-1); strcpy((yyvsp[-2].item)->temp_var,temp.c_str());} if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt(strcat((yyvsp[-1].item)->label,t.c_str()),(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3702 "parser.tab.c"
    break;

  case 268:
#line 728 "parser.y"
                                                            {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());if(t!=(yyvsp[-2].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[-2].item)->temp_var,t,temp,-1); strcpy((yyvsp[-2].item)->temp_var,temp.c_str());} if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt(strcat((yyvsp[-1].item)->label,t.c_str()),(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3708 "parser.tab.c"
    break;

  case 269:
#line 732 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3714 "parser.tab.c"
    break;

  case 270:
#line 733 "parser.y"
                                                    {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());if(t!=(yyvsp[-2].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[-2].item)->temp_var,t,temp,-1); strcpy((yyvsp[-2].item)->temp_var,temp.c_str());} if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt(strcat((yyvsp[-1].item)->label,t.c_str()),(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3720 "parser.tab.c"
    break;

  case 271:
#line 734 "parser.y"
                                                    {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());if(t!=(yyvsp[-2].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[-2].item)->temp_var,t,temp,-1); strcpy((yyvsp[-2].item)->temp_var,temp.c_str());} if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt(strcat((yyvsp[-1].item)->label,t.c_str()),(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3726 "parser.tab.c"
    break;

  case 272:
#line 735 "parser.y"
                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());if(t!=(yyvsp[-2].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[-2].item)->temp_var,t,temp,-1); strcpy((yyvsp[-2].item)->temp_var,temp.c_str());} if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); emitt("cast",(yyvsp[0].item)->temp_var,t,temp,-1); strcpy((yyvsp[0].item)->temp_var,temp.c_str());} string l = new_temporary(); emitt(strcat((yyvsp[-1].item)->label,t.c_str()),(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3732 "parser.tab.c"
    break;

  case 273:
#line 739 "parser.y"
                                    {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3738 "parser.tab.c"
    break;

  case 274:
#line 740 "parser.y"
                                        {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3744 "parser.tab.c"
    break;

  case 275:
#line 741 "parser.y"
                                    {if(!first_parse){string t = expression_type(yylineno,(yyvsp[0].item)->type,"",(yyvsp[-1].item)->label); (yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,t.c_str());strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[-1].item)->i_number;}}
#line 3750 "parser.tab.c"
    break;

  case 276:
#line 742 "parser.y"
                                    {if(!first_parse){string t = expression_type(yylineno,(yyvsp[0].item)->type,"",(yyvsp[-1].item)->label); (yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,t.c_str());t = new_temporary(); emitt((yyvsp[-1].item)->label,"",(yyvsp[0].item)->temp_var,t,-1); strcpy((yyval.item)->temp_var,t.c_str());(yyval.item)->i_number = (yyvsp[-1].item)->i_number;}}
#line 3756 "parser.tab.c"
    break;

  case 277:
#line 743 "parser.y"
                                {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3762 "parser.tab.c"
    break;

  case 278:
#line 747 "parser.y"
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
    emitt("+"+t,(yyvsp[0].item)->temp_var,"1",(yyvsp[0].item)->temp_var,-1);
    strcpy((yyval.item)->temp_var,t.c_str());
    (yyval.item)->i_number = (yyvsp[0].item)->i_number;
}    
}
#line 3783 "parser.tab.c"
    break;

  case 279:
#line 766 "parser.y"
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
    emitt("-"+t,(yyvsp[0].item)->temp_var,"1",(yyvsp[0].item)->temp_var,-1);
    strcpy((yyval.item)->temp_var,t.c_str());
    (yyval.item)->i_number = (yyvsp[0].item)->i_number;
}
}
#line 3804 "parser.tab.c"
    break;

  case 280:
#line 785 "parser.y"
                        {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type); strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3810 "parser.tab.c"
    break;

  case 282:
#line 787 "parser.y"
                                        {if(!first_parse){string t = (yyvsp[0].item)->type; if(t!="boolean"){cout<<"! operation only allowed on boolean in line number "<<yylineno<<endl; exit(1);}else{strcpy((yyval.item)->type,(yyvsp[0].item)->type);} (yyval.item)->true_list = (yyvsp[0].item)->false_list; (yyval.item)->false_list = (yyvsp[0].item)->true_list; (yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3816 "parser.tab.c"
    break;

  case 288:
#line 799 "parser.y"
                                    {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3822 "parser.tab.c"
    break;

  case 289:
#line 800 "parser.y"
                                        {if(!first_parse){(yyval.item)->lit = false; strcpy((yyval.item)->type,find_in_scope((yyvsp[0].item)->label,(yyvsp[0].item)->label).c_str());(yyval.item)->i_number = inst_num; string l = new_temporary(); emitt("",(yyvsp[0].item)->label,"",l,-1); strcpy((yyval.item)->temp_var,l.c_str()); strcpy((yyval.item)->label,(yyvsp[0].item)->label);}}
#line 3828 "parser.tab.c"
    break;

  case 290:
#line 801 "parser.y"
                                        {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3834 "parser.tab.c"
    break;

  case 291:
#line 802 "parser.y"
                                        {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3840 "parser.tab.c"
    break;

  case 292:
#line 806 "parser.y"
                                        {
    if(!first_parse){
    string t = expression_type(yylineno,(yyvsp[-1].item)->type,"",(yyvsp[0].item)->label);
    if((yyvsp[-1].item)->lit == true){
        cout<<"Cannot apply increment operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item)->lit = false;
    strcpy((yyval.item)->type,t.c_str());
    emitt("+"+t,(yyvsp[-1].item)->temp_var,"1",(yyvsp[-1].item)->temp_var,-1);
    emitt("",(yyvsp[-1].item)->temp_var,"",(yyvsp[-1].item)->label,-1);
    strcpy((yyval.item)->temp_var,(yyvsp[-1].item)->temp_var);
    (yyval.item)->i_number = (yyvsp[-1].item)->i_number;
}
}
#line 3860 "parser.tab.c"
    break;

  case 293:
#line 824 "parser.y"
                                {
    if(!first_parse){
    string t = expression_type(yylineno,(yyvsp[-1].item)->type,"",(yyvsp[0].item)->label);
    if((yyvsp[-1].item)->lit == true){
        cout<<"Cannot apply increment operation on a literal"<<endl;
        exit(1);
    }
    (yyval.item)->lit = false;
    strcpy((yyval.item)->type,t.c_str());
    emitt("-"+t,(yyvsp[-1].item)->temp_var,"1",(yyvsp[-1].item)->temp_var,-1);
    emitt("",(yyvsp[-1].item)->temp_var,"",(yyvsp[-1].item)->label,-1);
    strcpy((yyval.item)->temp_var,(yyvsp[-1].item)->temp_var);
    (yyval.item)->i_number = (yyvsp[-1].item)->i_number;
    }
}
#line 3880 "parser.tab.c"
    break;


#line 3884 "parser.tab.c"

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
#line 842 "parser.y"


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
