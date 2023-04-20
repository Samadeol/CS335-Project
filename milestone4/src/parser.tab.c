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
vector<pair<string,string> > declarations;
vector<pair<string,string> > function_call;
vector<tuple<string,string,int,int> > arguments;
string curr_class_name;
extern sym_table* print_table;
extern int inst_num;
extern int offset;
int k=0;

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



#line 130 "parser.tab.c"

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
    PRINT = 258,
    AMPERSAND = 259,
    AMPERSAND_AMPERSAND = 260,
    AMPERSAND_EQUALS = 261,
    ARROW_RIGHT = 262,
    ASSERT = 263,
    BAR = 264,
    BAR_BAR = 265,
    BAR_EQUALS = 266,
    BOOLEAN_LITERAL = 267,
    BOOLEAN_TYPE = 268,
    BREAK = 269,
    CATCH = 270,
    CHARACTER_LITERAL = 271,
    CLASS = 272,
    COLON = 273,
    COMMA = 274,
    CONTINUE = 275,
    DOT = 276,
    DOUBLE_COLON = 277,
    ELSE = 278,
    EQUALS = 279,
    EQUALS_EQUALS = 280,
    EXCLAIM = 281,
    EXCLAIM_EQUALS = 282,
    EXTENDS = 283,
    FINAL = 284,
    FINALLY = 285,
    FLOATINGPOINT_LITERAL = 286,
    FLOAT_POINT_TYPE = 287,
    FOR = 288,
    GREATER_THAN = 289,
    GREATER_THAN_EQUALS = 290,
    GREATER_THAN_GREATER_THAN = 291,
    GREATER_THAN_GREATER_THAN_EQUALS = 292,
    GREATER_THAN_GREATER_THAN_GREATER_THAN = 293,
    GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS = 294,
    IDENTIFIER = 295,
    IF = 296,
    IMPLEMENTS = 297,
    IMPORT = 298,
    INTEGER_LITERAL = 299,
    INTEGRAL_TYPE = 300,
    INTERFACE = 301,
    LEFT_CURLY_BRACE = 302,
    LEFT_PARANTHESIS = 303,
    LEFT_SQUARE_BRACE = 304,
    LESS_THAN = 305,
    LESS_THAN_EQUALS = 306,
    LESS_THAN_LESS_THAN = 307,
    LESS_THAN_LESS_THAN_EQUALS = 308,
    MINUS = 309,
    MINUS_EQUALS = 310,
    MINUS_MINUS = 311,
    NEW = 312,
    NULL_LITERAL = 313,
    PACKAGE = 314,
    PERCENT = 315,
    PERCENT_EQUALS = 316,
    PERMITS = 317,
    PLUS = 318,
    PLUS_EQUALS = 319,
    PLUS_PLUS = 320,
    POWER = 321,
    POWER_EQUALS = 322,
    PRIVATE = 323,
    PUBLIC = 324,
    QUESTION = 325,
    RETURN = 326,
    RIGHT_CURLY_BRACE = 327,
    RIGHT_PARANTHESIS = 328,
    RIGHT_SQUARE_BRACE = 329,
    SEMI_COLON = 330,
    SLASH = 331,
    SLASH_EQUALS = 332,
    STAR = 333,
    STAR_EQUALS = 334,
    STATIC = 335,
    STRING_TYPE = 336,
    STRING_LITERAL = 337,
    SUPER = 338,
    SYNCHRONIZED = 339,
    TEXTBLOCK = 340,
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
#line 64 "parser.y"

    struct Item* item;

#line 281 "parser.tab.c"

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
#define YYLAST   2307

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  295
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  545

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
       0,    75,    75,    77,    78,    81,    82,    83,    84,    85,
      86,    87,    91,    95,    96,   100,   101,   102,   103,   107,
     111,   115,   119,   123,   124,   128,   129,   133,   134,   138,
     139,   140,   144,   145,   149,   150,   154,   158,   159,   163,
     167,   168,   172,   173,   176,   180,   181,   185,   186,   187,
     188,   192,   193,   197,   198,   202,   203,   204,   208,   209,
     210,   214,   222,   233,   234,   238,   250,   251,   252,   256,
     259,   260,   261,   262,   265,   269,   270,   274,   275,   279,
     280,   281,   282,   283,   284,   288,   289,   293,   294,   297,
     301,   302,   306,   307,   311,   312,   317,   318,   322,   323,
     327,   328,   332,   350,   368,   372,   373,   374,   375,   376,
     377,   381,   382,   383,   384,   385,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   403,   407,   411,
     415,   419,   422,   423,   424,   425,   426,   427,   428,   431,
     435,   439,   443,   448,   449,   453,   457,   461,   462,   466,
     467,   471,   472,   473,   474,   475,   476,   477,   478,   482,
     483,   484,   485,   486,   487,   488,   489,   493,   494,   498,
     515,   534,   538,   539,   543,   547,   551,   552,   556,   560,
     561,   565,   566,   570,   574,   575,   576,   580,   581,   585,
     589,   590,   594,   595,   596,   597,   598,   602,   603,   604,
     605,   606,   607,   611,   615,   616,   620,   624,   625,   626,
     627,   631,   632,   633,   634,   638,   639,   643,   647,   648,
     652,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,   683,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,   709,   713,   714,   718,   719,   723,   724,
     728,   729,   733,   734,   738,   739,   743,   744,   745,   749,
     750,   751,   752,   753,   757,   758,   759,   760,   764,   765,
     766,   770,   771,   772,   773,   777,   778,   779,   780,   781,
     785,   804,   823,   824,   825,   826,   830,   831,   832,   833,
     837,   838,   839,   840,   844,   862
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINT", "AMPERSAND",
  "AMPERSAND_AMPERSAND", "AMPERSAND_EQUALS", "ARROW_RIGHT", "ASSERT",
  "BAR", "BAR_BAR", "BAR_EQUALS", "BOOLEAN_LITERAL", "BOOLEAN_TYPE",
  "BREAK", "CATCH", "CHARACTER_LITERAL", "CLASS", "COLON", "COMMA",
  "CONTINUE", "DOT", "DOUBLE_COLON", "ELSE", "EQUALS", "EQUALS_EQUALS",
  "EXCLAIM", "EXCLAIM_EQUALS", "EXTENDS", "FINAL", "FINALLY",
  "FLOATINGPOINT_LITERAL", "FLOAT_POINT_TYPE", "FOR", "GREATER_THAN",
  "GREATER_THAN_EQUALS", "GREATER_THAN_GREATER_THAN",
  "GREATER_THAN_GREATER_THAN_EQUALS",
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
  "PrintStatement", "StatementExpression", "IfThenStatement",
  "IfThenElseStatement", "IfThenElseStatementStart",
  "IfThenElseStatementNoShortIf", "AssertStatement", "WhileStatement",
  "WhileStatementNoShortIf", "ForStatement", "ForStatementNoShortIf",
  "BasicForStatement", "BasicForStatementNoShortIf", "ForInit",
  "LocalVariableDeclaration", "ForUpdate", "StatementExpressionList",
  "EnhancedForStatement", "EnhancedForStatementNoShortIf",
  "BreakStatement", "YieldStatement", "ContinueStatement",
  "ReturnStatement", "ThrowStatement", "TryStatement", "Catches",
  "CatchClause", "Primary", "PrimaryNoNewArray", "Literal",
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
     345,   346,   347,   348,   349
};
# endif

#define YYPACT_NINF (-406)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-294)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     175,   -15,  -406,   -16,   -11,   172,  -406,  -406,  -406,    42,
    -406,   303,   303,  -406,  -406,  -406,  -406,  -406,   105,  -406,
     206,  -406,   419,  -406,  -406,  -406,  -406,   172,    -2,   206,
     243,  -406,   303,   105,  -406,   105,  -406,  -406,   170,  -406,
     231,   255,  -406,   279,     9,  -406,  -406,   271,   105,  -406,
    -406,   268,  -406,  -406,  -406,  -406,   277,  1393,  -406,   285,
     284,  -406,  -406,  -406,   243,  -406,   262,   170,  -406,  -406,
    -406,   -10,  -406,   206,  -406,  -406,  -406,  -406,   206,    49,
    -406,   253,    15,   268,  -406,   284,   292,  1985,  -406,    29,
    -406,    93,    30,  -406,   293,    91,   297,  -406,  1985,  1985,
      30,  -406,  1985,  1706,  -406,  -406,  1985,   206,   299,  1985,
    -406,   310,  2016,  -406,  1393,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,   276,  -406,  -406,   341,  -406,  -406,  -406,  -406,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,
     131,  -406,   871,   163,  -406,  -406,  -406,  -406,   233,   234,
     256,   160,     3,  -406,  -406,   291,   318,   277,   285,  -406,
    -406,  -406,  -406,  -406,  -406,  1393,  -406,  -406,   294,   300,
    -406,    30,  -406,    18,     4,  -406,   318,  1985,  1985,   320,
    1671,  1985,  1985,  1985,  2051,  -406,  -406,    -1,  -406,  -406,
    -406,     2,   369,   368,   315,   378,   238,   258,   220,   273,
     208,  -406,  -406,  -406,  -406,  -406,   233,  -406,  -406,   309,
    -406,   313,  -406,   310,  2121,   785,  1758,  1985,   321,   121,
    -406,  -406,   342,   342,   134,  -406,  -406,   323,   324,   246,
    1985,   325,   137,    16,  1985,  1985,   361,  1985,  1985,  1985,
    1985,  1985,  1985,  1985,  1985,  1985,  1985,  1985,   353,  -406,
    -406,  -406,   785,  1985,  1985,  1985,  1985,  1985,  1985,  1985,
    1985,  1985,  1985,  1985,  1985,  -406,  -406,  1985,   151,   310,
    -406,  -406,   329,  -406,    22,  -406,  -406,  1393,  -406,  -406,
      88,   284,   365,    21,  -406,    12,  -406,   149,  2068,   333,
    -406,  -406,  -406,  1985,  -406,  1985,  1985,  1985,  1985,  1985,
    1985,  1985,  1985,  1985,  1985,  1985,  1985,  1985,  1985,  1985,
    1985,  1985,  1985,  1985,  1985,  -406,  -406,    44,    30,  1801,
     310,  -406,   332,   390,   392,  -406,  -406,    13,  -406,   336,
    -406,   363,   363,  1821,  -406,  -406,   366,   206,   251,  -406,
     340,  -406,  -406,  -406,  -406,   367,  -406,  -406,  -406,   343,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,  1985,  -406,  -406,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,  -406,   359,  -406,  -406,  -406,  -406,   284,   379,
     318,  -406,  -406,   345,  1985,   184,   322,   197,   805,   346,
     369,   400,   368,   315,   378,   238,   258,   258,   220,   220,
     220,   220,   273,   273,   273,   208,   208,  -406,  -406,  -406,
    -406,   310,   132,   349,   407,  1856,  1985,   257,  1985,  -406,
    1574,   322,   318,   318,  -406,    19,    21,  -406,   206,  -406,
     785,  1876,  -406,   357,    30,  -406,   318,  -406,  -406,  -406,
    1985,   805,  -406,  -406,  1985,   407,   785,   360,   392,  1111,
    1318,   372,   362,  -406,  -406,   386,   119,   393,  -406,  -406,
     426,  -406,   428,  -406,  -406,  -406,  -406,  -406,  -406,   382,
    -406,  -406,  -406,    40,  -406,  -406,  -406,  -406,  -406,   785,
     785,   384,   785,   388,  1415,   785,  2143,  1574,  1985,  1574,
     206,  -406,  -406,  -406,   785,  -406,   785,   785,   391,  -406,
    1911,   377,   424,  -406,   397,  -406,  -406,  -406,  -406,  -406,
     785,  1596,   403,  1931,  1985,  1574,  -406,  1574,   408,  2173,
    2195,   409,   410,  -406,  -406,  1574,  1574,   412,  1574,   416,
    2225,  1574,  -406,  -406,  1574,  -406,  1574,  1574,   417,  -406,
    -406,  -406,  -406,  1574,  -406
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
      37,     0,     0,     0,    70,    75,     0,     0,   199,     0,
     200,     0,     0,   198,     0,    38,     0,   197,     0,     0,
       0,   202,     0,     0,   127,   201,     0,     0,     0,     0,
      98,     0,   291,   116,     0,   101,   104,   105,   117,   106,
     118,   126,     0,   107,   108,     0,   119,   109,   110,   147,
     148,   120,   125,   121,   122,   123,   124,   290,   190,   192,
     138,   203,   195,   137,   191,   132,   133,   134,     0,   135,
     136,    66,     0,    64,    71,     0,    39,     0,     0,    88,
      52,    53,    86,    74,    85,     0,    89,    97,    37,     0,
      20,     0,    90,     0,     0,    78,    76,     0,     0,    38,
       0,     0,     0,     0,   291,   194,   196,     0,   217,   219,
     218,   244,   246,   248,   250,   252,   254,   256,   259,   264,
     268,   271,   275,   276,   279,   285,   282,   292,   293,     0,
     176,     0,   179,     0,     0,     0,     0,     0,     0,   291,
     195,   281,     0,     0,    36,   280,   181,     0,     0,     0,
       0,     0,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   206,    99,
     100,   130,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   295,   294,     0,    67,     0,
      61,    41,     0,    72,     0,    73,    92,     0,    21,    22,
       0,    79,     0,     0,    91,     0,   284,     0,   291,     0,
     278,   277,   283,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   177,   180,     0,     0,     0,
       0,   173,     0,   168,   167,   128,   207,     0,    95,     0,
     193,   211,   213,     0,   182,   183,     0,     0,   184,   188,
       0,   178,   102,   229,   231,    37,   220,   227,   228,     0,
     226,   225,   223,   224,   230,   222,   221,     0,   140,   241,
     243,   232,   239,   240,   238,   237,   235,   236,   242,   234,
     233,    65,    69,     0,    63,    40,    62,    93,    80,     0,
      81,    83,    77,     0,     0,     0,     0,     0,   193,     0,
     247,     0,   249,   251,   253,   255,   257,   258,   261,   263,
     260,   262,   266,   267,   265,   270,   269,   274,   273,   272,
     103,     0,     0,     0,   169,     0,     0,     0,     0,   208,
       0,     0,   212,   214,   204,     0,     0,   185,     0,   187,
       0,     0,   216,     0,     0,    68,    82,    84,   131,   286,
       0,     0,   288,   144,     0,   170,     0,     0,   171,     0,
       0,     0,     0,   172,    94,     0,    38,     0,   139,   141,
     105,   112,     0,   113,   114,   115,   149,   150,   205,     0,
     186,   145,   209,     0,   215,   287,   289,   245,   151,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   210,   152,   153,     0,   155,     0,     0,     0,   174,
       0,     0,   168,   129,     0,   142,   189,   154,   156,   157,
       0,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,     0,     0,   146,   159,     0,     0,     0,     0,     0,
       0,     0,   160,   161,     0,   163,     0,     0,     0,   175,
     162,   164,   165,     0,   166
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -406,  -406,    25,   -47,  -406,  -406,   455,   169,  -406,  -406,
    -406,  -406,   195,   219,   -36,   -99,  -406,  -406,   -97,  1207,
    -406,   -52,  -406,  -406,     1,     5,   101,  -406,   425,  -406,
    -406,  -107,   198,  -406,  -406,  -406,   -33,  -406,  -274,  -406,
    -406,  -406,   165,  -406,  -315,  -406,   -31,   330,  -108,   816,
     649,  -405,  -406,  -406,  -406,  -406,  -406,  -201,  -406,  -406,
    -372,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,     8,
      11,  -370,  -209,  -406,  -406,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,   162,  -406,  -406,  -406,   -57,  -406,   394,    26,
     125,   -76,  1305,  -406,   109,    57,  -406,   207,  -161,   205,
     210,   204,   -42,    53,  -208,  -117,   -88,   230,   434,  -336,
    -406,   517,   609,   741
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    57,    58,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   111,    60,    61,    62,    63,   184,
      65,   268,    20,    21,    22,    23,    39,    67,    68,    69,
      70,   152,   153,   371,    71,    72,    84,   174,   175,   163,
      73,    74,    85,   166,   327,    24,   113,   114,   115,   116,
     459,   117,   118,   119,   461,   120,   121,   122,   123,   124,
     125,   463,   126,   127,   464,   128,   465,   129,   466,   322,
     323,   447,   448,   130,   467,   131,   132,   133,   134,   135,
     136,   338,   339,   137,   138,   139,   185,   141,   142,   186,
     144,   248,   328,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     140,   222,    59,   223,   233,   324,   250,    76,   156,   382,
     110,   221,   295,   321,   225,   460,   285,   293,   425,    44,
     160,   298,   269,   283,    26,    25,   154,    42,    49,    29,
     158,    59,   418,   176,    49,   269,    76,    37,   418,    66,
     164,   269,    31,    49,   171,    38,   173,    50,   462,    80,
     171,   274,   442,    50,    38,    26,   213,   140,   281,   418,
      52,    26,    50,   269,    27,   162,    52,   249,    66,   209,
      26,    42,   296,    45,   294,    52,   229,   284,   270,   481,
     483,   287,   460,   143,   460,   383,   419,    81,   172,   168,
     286,   342,   468,   290,   291,   292,    55,   376,   165,   402,
     403,   404,    55,    38,   210,   476,   317,   282,   140,   215,
     460,    55,   460,   491,   498,   462,   473,   462,   276,   410,
     460,   460,     1,   460,   273,   275,   460,   169,   378,   460,
      46,   460,   460,   211,     2,   280,   392,   487,   460,   216,
     143,   518,   236,   462,    88,   462,   331,   332,    90,   527,
     529,     4,   469,   462,   462,    47,   462,   140,   140,   462,
     538,   267,   462,    93,   462,   462,   145,   216,   212,   250,
     240,   462,   179,     6,     7,   373,    97,   379,   320,   167,
      98,    34,   333,    49,   267,     8,   155,  -194,    99,   100,
     101,   143,     1,   405,   406,   140,  -194,   102,   155,     2,
     272,    34,    50,    75,     2,   446,    33,    35,    82,   155,
      51,   321,    26,   414,   105,    52,   453,    37,     3,  -196,
     140,     4,   384,   145,   407,   408,   409,    48,  -196,   380,
     377,   159,    75,   272,     5,   385,   387,    36,     6,     7,
     143,   143,    53,     6,     7,    54,   272,   173,   321,   321,
       8,    55,    36,    37,    36,     8,   307,   440,   308,   396,
     397,   336,    56,   301,    47,   302,   336,    36,   312,    88,
     441,    77,   309,    90,   145,    49,   337,   324,   143,   422,
     423,   428,   411,   321,   313,   321,   314,   146,    93,   265,
    -292,     2,   303,   304,    50,    78,   439,   179,   266,  -292,
      79,    97,    51,   143,   445,    98,   427,    52,   305,   306,
     321,    80,  -293,    99,   100,   101,    82,    83,   321,   321,
       1,  -293,   102,   145,   145,   151,   436,   310,   170,   321,
       6,     7,     2,   155,    88,   222,   311,   223,    90,   105,
     177,   214,     8,    55,   146,   217,     3,   230,   178,     4,
     232,   251,   475,    93,   157,   140,   398,   399,   400,   401,
     140,   145,   179,   140,   252,   271,    97,   272,   216,   278,
     180,     6,     7,   140,   297,   279,   181,   298,    99,   100,
     101,   299,   300,     8,   315,   182,   145,   102,   316,   140,
     173,   240,   140,   140,   330,   146,   271,   470,   334,   335,
     341,   345,   357,   375,   105,   381,   388,   415,   416,   420,
     183,   417,   421,   430,   426,   431,   434,   432,   444,   437,
     438,   443,   140,   140,   449,   140,   269,   140,   140,   140,
     140,   474,   140,   479,   486,   485,    40,   140,   143,   140,
     140,   488,   514,   143,   146,   146,   143,   484,     2,  -111,
     320,   489,   513,   140,   140,   490,   143,   494,   140,   506,
     140,   496,   140,   140,   510,    41,    32,   374,   140,   140,
     515,   140,   143,   140,   140,   143,   143,   140,   519,   140,
     140,   525,   146,   531,   530,   534,   140,     6,     7,   536,
     543,   147,   161,   220,   501,   277,   220,   502,   435,     8,
     429,   477,   390,   393,   395,   143,   143,   146,   143,   394,
     143,   143,   143,   143,     0,   143,     0,     0,     0,     0,
     143,   145,   143,   143,     0,     0,   145,     0,     0,   145,
       0,     0,     0,     0,     0,     0,   143,   143,     0,   145,
       0,   143,     0,   143,     0,   143,   143,     0,   147,     0,
       0,   143,   143,     0,   143,   145,   143,   143,   145,   145,
     143,     0,   143,   143,     0,     0,     0,     0,     0,   143,
       0,   220,   220,     0,   148,   220,   220,   220,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,   145,
       0,   145,     0,   145,   145,   145,   145,     0,   145,   147,
       0,     0,     0,   145,     0,   145,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   145,
     145,     0,     0,     0,   145,     0,   145,     0,   145,   145,
       0,   148,     0,     0,   145,   145,     0,   145,     0,   145,
     145,     0,   146,   145,     0,   145,   145,   146,   147,   147,
     146,     0,   145,     0,     0,     0,     0,     0,     0,     0,
     146,     0,     0,     0,     0,     0,   149,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   146,     0,     0,   146,
     146,     0,   148,     0,     0,     0,   147,     0,     0,   220,
       0,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   146,
     146,   147,   146,     0,   146,   146,   146,   146,     0,   146,
       0,     0,     0,   149,   146,     0,   146,   146,     0,     0,
       0,   148,   148,     0,     0,     0,     0,     0,     0,     0,
     146,   146,     0,     0,     0,   146,     0,   146,     0,   146,
     146,     0,     0,     0,     0,   146,   146,     0,   146,     0,
     146,   146,     0,     0,   146,     0,   146,   146,     0,   148,
       0,     0,     0,   146,   149,     0,     0,     0,   220,     0,
       0,     0,   220,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,    87,   148,     0,     0,    88,   150,    89,
       0,    90,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    88,    94,     0,
       0,    90,     0,   149,   149,    95,    96,     0,     0,    97,
       0,   178,    37,    98,   220,   220,    93,     0,   220,     0,
       0,    99,   100,   101,     0,   179,   147,     0,     0,    97,
     102,   147,     0,   180,   147,   150,   103,     0,     0,     0,
     104,   149,   100,   101,   147,     0,     0,   105,     0,     0,
       0,   106,     0,     0,     0,   107,     0,   253,   108,   109,
     147,     0,   254,   147,   147,     0,   149,   105,     0,     0,
       0,     0,     0,   183,     0,   255,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   150,     0,   256,     0,
     257,     0,     0,   147,   147,     0,   147,     0,   147,   147,
     147,   147,     0,   147,   258,     0,   259,     0,   147,   148,
     147,   147,   260,     0,   148,   261,     0,   148,   262,     0,
       0,     0,     0,     0,   147,   147,     0,   148,   263,   147,
     264,   147,     0,   147,   147,   150,   150,     0,     0,   147,
     147,     0,   147,   148,   147,   147,   148,   148,   147,     0,
     147,   147,     0,     0,     0,     0,     0,   147,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   150,     0,     0,   148,   148,     0,   148,
       0,   148,   148,   148,   148,     0,   148,     0,     0,     0,
       0,   148,     0,   148,   148,     0,     0,     0,   150,     0,
       0,   149,     0,     0,     0,     0,   149,   148,   148,   149,
       0,   325,   148,     0,   148,     0,   148,   148,     0,   149,
       0,     0,   148,   148,     0,   148,     0,   148,   148,     0,
       0,   148,     0,   148,   148,   149,     0,     0,   149,   149,
     148,     0,     0,     0,     0,     0,     0,     0,   358,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   149,   149,
       0,   149,     0,   149,   149,   149,   149,     0,   149,     0,
       0,     0,     0,   149,     0,   149,   149,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   149,
     149,     0,     0,    88,   149,     0,   149,    90,   149,   149,
       0,     0,     0,     0,   149,   149,   503,   149,   505,   149,
     149,     0,    93,   149,     0,   149,   149,     0,     0,     0,
       0,   179,   149,   150,     0,    97,     0,     0,   150,    98,
       0,   150,     0,     0,   523,     0,   524,    99,   100,   101,
       0,   150,     0,     0,   532,   533,   102,   535,     0,     0,
     539,     0,     0,   540,   480,   541,   542,   150,     0,     0,
     150,   150,   544,   105,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,    30,     0,     0,     0,     0,     0,     0,     0,
     150,   150,     0,   150,     0,   150,   150,   150,   150,     0,
     150,     0,     0,     0,    43,   150,   458,   150,   150,     0,
       0,     0,     0,     0,     0,    64,   471,     0,     0,     0,
       0,   150,   150,     0,     0,     0,   150,     0,   150,     0,
     150,   150,   478,     0,   112,     0,   150,   150,     0,   150,
       0,   150,   150,    64,    64,   150,     0,   150,   150,     0,
       0,     0,     0,     0,   150,     0,     0,     0,     0,    64,
       0,     0,     0,     0,     0,   492,   493,     0,   495,    64,
       0,   499,     0,   325,     0,   358,   219,   224,     0,   219,
     507,     0,   508,   509,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,   516,     0,     0,     0,
      88,   471,     0,   478,    90,     0,     0,     0,     0,     0,
       0,   492,   493,     0,   495,     0,     0,   499,     0,    93,
     507,     0,   508,   509,     0,     0,     0,     0,   179,   516,
       0,     0,    97,     0,     0,     0,    98,     0,     0,     0,
       0,     0,   112,     0,    99,   100,   101,     0,    64,     0,
       0,     0,     0,   102,   219,   219,     0,   288,   219,   219,
     219,   482,   187,     0,     0,     0,    86,     0,     0,     0,
     105,    87,     0,   218,     0,    88,    49,    89,   227,    90,
       0,   228,     0,    91,   231,     0,     0,     0,     0,     0,
       0,   112,    92,     0,    93,    50,    94,    88,     0,     0,
       0,    90,     0,    95,    96,     0,     0,    97,    52,     0,
      37,    98,     0,     0,     0,     0,    93,     0,     0,    99,
     100,   101,     0,     0,     0,   179,     0,     0,   102,    97,
       0,     0,     0,    98,   103,    53,     0,     0,   104,     0,
       0,    99,   100,   101,    55,   105,     0,     0,     0,   106,
     102,     0,     0,   107,   112,   289,   108,   109,   497,     0,
      64,     0,     0,     0,     0,     0,     0,   105,     0,     0,
       0,     0,   219,     0,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   329,     0,     0,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   340,     0,     0,     0,   343,
     344,     0,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,     0,     0,     0,     0,     0,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
       0,     0,   372,     0,     0,     0,     0,    86,     0,     0,
       0,     0,    87,     0,     0,     0,    88,     0,    89,     0,
      90,   219,     0,     0,    91,   219,     0,     0,   389,     0,
       0,   391,     0,     0,     0,    93,     0,   455,    88,     0,
       0,     0,    90,     0,   456,    96,     0,     0,    97,     0,
       0,    37,    98,     0,   413,     0,     0,    93,     0,     0,
      99,   100,   101,    64,     0,     0,   179,     0,     0,   102,
      97,    64,     0,     0,    98,   103,     0,   219,   219,   104,
       0,   219,    99,   100,   101,     0,   105,     0,     0,     0,
     106,   102,   433,     0,   107,     0,     0,   457,   109,   517,
       0,     0,     0,     0,     0,     0,     0,     0,   105,     0,
       0,     0,     0,    88,    49,     0,     0,    90,     0,     0,
       0,   349,     0,   112,     0,     0,     0,   178,     0,     0,
       0,     0,    93,    50,     0,     0,     0,     0,     0,     0,
       0,   179,     0,     0,     0,    97,    52,     0,    88,   180,
     451,   452,    90,   454,     0,   181,   433,    99,   100,   101,
       0,     0,   178,     0,   182,     0,   102,    93,     0,     0,
       0,     0,     0,     0,     0,     0,   179,     0,     0,     0,
      97,     0,    55,   105,   180,     0,     0,     0,     0,   183,
     181,     0,    99,   100,   101,     0,     0,     0,     0,   182,
      88,   102,     0,     0,    90,     0,     0,     0,     0,     0,
       0,   226,     0,     0,   178,     0,     0,     0,   105,    93,
       0,     0,     0,   504,   183,     0,     0,     0,   179,     0,
       0,     0,    97,     0,     0,   512,   180,     0,     0,     0,
       0,     0,   181,    88,    99,   100,   101,    90,   521,   522,
       0,   182,     0,   102,     0,     0,     0,   178,     0,     0,
       0,   326,    93,    88,     0,     0,     0,    90,     0,     0,
     105,   179,     0,     0,     0,    97,   183,   178,     0,   180,
       0,     0,    93,     0,     0,   181,     0,    99,   100,   101,
       0,   179,     0,     0,   182,    97,   102,     0,    88,   180,
       0,     0,    90,     0,     0,   181,   412,    99,   100,   101,
       0,     0,   178,   105,   182,     0,   102,    93,    88,   183,
       0,     0,    90,     0,   424,     0,   179,     0,     0,     0,
      97,     0,   178,   105,   180,     0,     0,    93,     0,   183,
     181,     0,    99,   100,   101,     0,   179,     0,     0,   182,
      97,   102,     0,    88,   180,     0,     0,    90,     0,     0,
     181,   450,    99,   100,   101,     0,     0,   178,   105,   182,
       0,   102,    93,    88,   183,     0,     0,    90,     0,   472,
       0,   179,     0,     0,     0,    97,     0,   178,   105,   180,
       0,     0,    93,     0,   183,   181,     0,    99,   100,   101,
       0,   179,     0,     0,   182,    97,   102,     0,     0,   180,
       0,     0,     0,     0,     0,   181,   511,    99,   100,   101,
       0,     0,     0,   105,   182,     0,   102,    88,     0,   183,
       0,    90,     0,     0,     0,     0,   520,     0,     0,     0,
       0,   178,     0,   105,     0,     0,    93,     0,     0,   183,
       0,     0,   234,     0,     0,   179,     0,   235,     0,    97,
       0,     0,     0,   180,     0,     0,     0,   236,     0,   181,
     237,    99,   100,   101,     0,     0,     0,     0,   182,     0,
     102,     0,     0,   238,     0,   239,   -36,   234,     0,     0,
       0,     0,   235,     0,     0,   240,     0,   105,     0,   241,
       0,   242,   236,   183,   234,   237,     0,   243,     0,   235,
     244,     0,     0,   245,     0,     0,     0,     0,   238,   236,
     239,     0,   237,   246,     0,   247,     0,     0,     0,     0,
     240,     0,     0,     0,   241,   238,   242,   239,     0,     0,
       0,     0,   243,     0,     0,   244,     0,   386,   245,     0,
       0,   241,     0,   242,     0,     0,     0,     0,   246,   243,
     247,     0,   244,    88,    49,   245,     0,    90,     0,     0,
       0,     0,     0,     0,     0,   246,     0,   247,     0,     0,
     318,     0,    93,    50,     0,    88,    49,     0,     0,    90,
       0,   179,     0,     0,     0,    97,    52,     0,     0,    98,
       0,     0,   318,     0,    93,    50,     0,    99,   100,   101,
       0,     0,     0,   179,     0,    88,   102,    97,    52,    90,
       0,    98,     0,     0,     0,     0,   319,     0,     0,    99,
     100,   101,    55,   105,    93,     0,     0,    88,   102,     0,
       0,    90,     0,   179,     0,     0,     0,    97,   500,     0,
       0,    98,     0,     0,    55,   105,    93,     0,     0,    99,
     100,   101,     0,     0,     0,   179,     0,    88,   102,    97,
       0,    90,     0,    98,     0,     0,   526,     0,     0,     0,
       0,    99,   100,   101,     0,   105,    93,     0,     0,     0,
     102,     0,     0,     0,     0,   179,     0,     0,   528,    97,
       0,     0,     0,    98,     0,     0,     0,   105,     0,     0,
       0,    99,   100,   101,     0,     0,     0,     0,     0,     0,
     102,     0,     0,     0,     0,     0,     0,     0,   537,     0,
       0,     0,     0,     0,     0,     0,     0,   105
};

static const yytype_int16 yycheck[] =
{
      57,   100,    38,   100,   111,   214,   114,    38,    60,   283,
      57,    99,    10,   214,   102,   420,   177,    18,   333,    21,
      67,     9,    19,    19,    40,    40,    59,    22,    13,    40,
      66,    67,    19,    85,    13,    19,    67,    47,    19,    38,
      71,    19,     0,    13,    29,    20,    82,    32,   420,    40,
      29,   158,   388,    32,    29,    40,    92,   114,    40,    19,
      45,    40,    32,    19,    80,    75,    45,   114,    67,    40,
      40,    66,    70,    75,    75,    45,   107,    73,    75,   449,
     450,   180,   487,    57,   489,    73,    73,    78,    73,    40,
     178,    75,    73,   181,   182,   183,    81,    75,    73,   307,
     308,   309,    81,    78,    75,   441,   213,    89,   165,    18,
     515,    81,   517,    73,   484,   487,   431,   489,   165,    75,
     525,   526,    17,   528,   157,   158,   531,    78,    40,   534,
      29,   536,   537,    40,    29,   171,   297,    18,   543,    48,
     114,   511,    21,   515,    12,   517,   222,   223,    16,   519,
     520,    46,   426,   525,   526,    21,   528,   214,   215,   531,
     530,    24,   534,    31,   536,   537,    57,    48,    75,   277,
      49,   543,    40,    68,    69,    24,    44,    89,   214,    78,
      48,    12,    48,    13,    24,    80,    49,    56,    56,    57,
      58,   165,    17,   310,   311,   252,    65,    65,    49,    29,
      49,    32,    32,    38,    29,    73,    11,    12,    48,    49,
      40,   412,    40,   320,    82,    45,   417,    47,    43,    56,
     277,    46,    73,   114,   312,   313,   314,    32,    65,   281,
     277,    66,    67,    49,    59,   287,   288,    18,    68,    69,
     214,   215,    72,    68,    69,    75,    49,   283,   449,   450,
      80,    81,    33,    47,    35,    80,    36,    73,    38,   301,
     302,    15,    92,    25,    21,    27,    15,    48,    60,    12,
      73,    40,    52,    16,   165,    13,    30,   486,   252,   331,
     332,    30,   318,   484,    76,   486,    78,    57,    31,    56,
      56,    29,    34,    35,    32,    40,   384,    40,    65,    65,
      21,    44,    40,   277,   411,    48,   337,    45,    50,    51,
     511,    40,    56,    56,    57,    58,    48,    40,   519,   520,
      17,    65,    65,   214,   215,    40,   378,    54,    75,   530,
      68,    69,    29,    49,    12,   434,    63,   434,    16,    82,
      48,    48,    80,    81,   114,    48,    43,    48,    26,    46,
      40,    75,   440,    31,    92,   412,   303,   304,   305,   306,
     417,   252,    40,   420,    23,    74,    44,    49,    48,    75,
      48,    68,    69,   430,     5,    75,    54,     9,    56,    57,
      58,    66,     4,    80,    75,    63,   277,    65,    75,   446,
     426,    49,   449,   450,    73,   165,    74,   428,    75,    75,
      75,    40,    49,    74,    82,    40,    73,    75,    18,    73,
      88,    19,    49,    73,    48,    48,    57,    74,    18,    40,
      75,    75,   479,   480,    75,   482,    19,   484,   485,   486,
     487,    74,   489,    73,    48,    73,    17,   494,   412,   496,
     497,    48,    18,   417,   214,   215,   420,    75,    29,    23,
     486,    23,    75,   510,   511,    73,   430,    73,   515,   490,
     517,    73,   519,   520,    73,    46,    11,   269,   525,   526,
      73,   528,   446,   530,   531,   449,   450,   534,    75,   536,
     537,    73,   252,    73,    75,    73,   543,    68,    69,    73,
      73,    57,    67,    99,   486,   165,   102,   486,   373,    80,
     338,   444,   295,   298,   300,   479,   480,   277,   482,   299,
     484,   485,   486,   487,    -1,   489,    -1,    -1,    -1,    -1,
     494,   412,   496,   497,    -1,    -1,   417,    -1,    -1,   420,
      -1,    -1,    -1,    -1,    -1,    -1,   510,   511,    -1,   430,
      -1,   515,    -1,   517,    -1,   519,   520,    -1,   114,    -1,
      -1,   525,   526,    -1,   528,   446,   530,   531,   449,   450,
     534,    -1,   536,   537,    -1,    -1,    -1,    -1,    -1,   543,
      -1,   177,   178,    -1,    57,   181,   182,   183,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,   480,
      -1,   482,    -1,   484,   485,   486,   487,    -1,   489,   165,
      -1,    -1,    -1,   494,    -1,   496,   497,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   510,
     511,    -1,    -1,    -1,   515,    -1,   517,    -1,   519,   520,
      -1,   114,    -1,    -1,   525,   526,    -1,   528,    -1,   530,
     531,    -1,   412,   534,    -1,   536,   537,   417,   214,   215,
     420,    -1,   543,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     430,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   446,    -1,    -1,   449,
     450,    -1,   165,    -1,    -1,    -1,   252,    -1,    -1,   295,
      -1,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   479,
     480,   277,   482,    -1,   484,   485,   486,   487,    -1,   489,
      -1,    -1,    -1,   114,   494,    -1,   496,   497,    -1,    -1,
      -1,   214,   215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     510,   511,    -1,    -1,    -1,   515,    -1,   517,    -1,   519,
     520,    -1,    -1,    -1,    -1,   525,   526,    -1,   528,    -1,
     530,   531,    -1,    -1,   534,    -1,   536,   537,    -1,   252,
      -1,    -1,    -1,   543,   165,    -1,    -1,    -1,   384,    -1,
      -1,    -1,   388,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,     8,   277,    -1,    -1,    12,    57,    14,
      -1,    16,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    12,    33,    -1,
      -1,    16,    -1,   214,   215,    40,    41,    -1,    -1,    44,
      -1,    26,    47,    48,   440,   441,    31,    -1,   444,    -1,
      -1,    56,    57,    58,    -1,    40,   412,    -1,    -1,    44,
      65,   417,    -1,    48,   420,   114,    71,    -1,    -1,    -1,
      75,   252,    57,    58,   430,    -1,    -1,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,    -1,     6,    93,    94,
     446,    -1,    11,   449,   450,    -1,   277,    82,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    37,    -1,
      39,    -1,    -1,   479,   480,    -1,   482,    -1,   484,   485,
     486,   487,    -1,   489,    53,    -1,    55,    -1,   494,   412,
     496,   497,    61,    -1,   417,    64,    -1,   420,    67,    -1,
      -1,    -1,    -1,    -1,   510,   511,    -1,   430,    77,   515,
      79,   517,    -1,   519,   520,   214,   215,    -1,    -1,   525,
     526,    -1,   528,   446,   530,   531,   449,   450,   534,    -1,
     536,   537,    -1,    -1,    -1,    -1,    -1,   543,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   252,    -1,    -1,   479,   480,    -1,   482,
      -1,   484,   485,   486,   487,    -1,   489,    -1,    -1,    -1,
      -1,   494,    -1,   496,   497,    -1,    -1,    -1,   277,    -1,
      -1,   412,    -1,    -1,    -1,    -1,   417,   510,   511,   420,
      -1,   215,   515,    -1,   517,    -1,   519,   520,    -1,   430,
      -1,    -1,   525,   526,    -1,   528,    -1,   530,   531,    -1,
      -1,   534,    -1,   536,   537,   446,    -1,    -1,   449,   450,
     543,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   252,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,   480,
      -1,   482,    -1,   484,   485,   486,   487,    -1,   489,    -1,
      -1,    -1,    -1,   494,    -1,   496,   497,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   510,
     511,    -1,    -1,    12,   515,    -1,   517,    16,   519,   520,
      -1,    -1,    -1,    -1,   525,   526,   487,   528,   489,   530,
     531,    -1,    31,   534,    -1,   536,   537,    -1,    -1,    -1,
      -1,    40,   543,   412,    -1,    44,    -1,    -1,   417,    48,
      -1,   420,    -1,    -1,   515,    -1,   517,    56,    57,    58,
      -1,   430,    -1,    -1,   525,   526,    65,   528,    -1,    -1,
     531,    -1,    -1,   534,    73,   536,   537,   446,    -1,    -1,
     449,   450,   543,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     479,   480,    -1,   482,    -1,   484,   485,   486,   487,    -1,
     489,    -1,    -1,    -1,    27,   494,   420,   496,   497,    -1,
      -1,    -1,    -1,    -1,    -1,    38,   430,    -1,    -1,    -1,
      -1,   510,   511,    -1,    -1,    -1,   515,    -1,   517,    -1,
     519,   520,   446,    -1,    57,    -1,   525,   526,    -1,   528,
      -1,   530,   531,    66,    67,   534,    -1,   536,   537,    -1,
      -1,    -1,    -1,    -1,   543,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,   479,   480,    -1,   482,    92,
      -1,   485,    -1,   487,    -1,   489,    99,   100,    -1,   102,
     494,    -1,   496,   497,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,    -1,    -1,   510,    -1,    -1,    -1,
      12,   515,    -1,   517,    16,    -1,    -1,    -1,    -1,    -1,
      -1,   525,   526,    -1,   528,    -1,    -1,   531,    -1,    31,
     534,    -1,   536,   537,    -1,    -1,    -1,    -1,    40,   543,
      -1,    -1,    44,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,   165,    -1,    56,    57,    58,    -1,   171,    -1,
      -1,    -1,    -1,    65,   177,   178,    -1,   180,   181,   182,
     183,    73,    87,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      82,     8,    -1,    98,    -1,    12,    13,    14,   103,    16,
      -1,   106,    -1,    20,   109,    -1,    -1,    -1,    -1,    -1,
      -1,   214,    29,    -1,    31,    32,    33,    12,    -1,    -1,
      -1,    16,    -1,    40,    41,    -1,    -1,    44,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,    31,    -1,    -1,    56,
      57,    58,    -1,    -1,    -1,    40,    -1,    -1,    65,    44,
      -1,    -1,    -1,    48,    71,    72,    -1,    -1,    75,    -1,
      -1,    56,    57,    58,    81,    82,    -1,    -1,    -1,    86,
      65,    -1,    -1,    90,   277,   180,    93,    94,    73,    -1,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,   295,    -1,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   217,    -1,    -1,   318,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   230,    -1,    -1,    -1,   234,
     235,    -1,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,    -1,    -1,    -1,    -1,    -1,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      -1,    -1,   267,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    12,    -1,    14,    -1,
      16,   384,    -1,    -1,    20,   388,    -1,    -1,   293,    -1,
      -1,   296,    -1,    -1,    -1,    31,    -1,    33,    12,    -1,
      -1,    -1,    16,    -1,    40,    41,    -1,    -1,    44,    -1,
      -1,    47,    48,    -1,   319,    -1,    -1,    31,    -1,    -1,
      56,    57,    58,   426,    -1,    -1,    40,    -1,    -1,    65,
      44,   434,    -1,    -1,    48,    71,    -1,   440,   441,    75,
      -1,   444,    56,    57,    58,    -1,    82,    -1,    -1,    -1,
      86,    65,   357,    -1,    90,    -1,    -1,    93,    94,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    12,    13,    -1,    -1,    16,    -1,    -1,
      -1,   386,    -1,   486,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    45,    -1,    12,    48,
     415,   416,    16,   418,    -1,    54,   421,    56,    57,    58,
      -1,    -1,    26,    -1,    63,    -1,    65,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    -1,    81,    82,    48,    -1,    -1,    -1,    -1,    88,
      54,    -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      12,    65,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    26,    -1,    -1,    -1,    82,    31,
      -1,    -1,    -1,   488,    88,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    -1,    -1,   500,    48,    -1,    -1,    -1,
      -1,    -1,    54,    12,    56,    57,    58,    16,   513,   514,
      -1,    63,    -1,    65,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    73,    31,    12,    -1,    -1,    -1,    16,    -1,    -1,
      82,    40,    -1,    -1,    -1,    44,    88,    26,    -1,    48,
      -1,    -1,    31,    -1,    -1,    54,    -1,    56,    57,    58,
      -1,    40,    -1,    -1,    63,    44,    65,    -1,    12,    48,
      -1,    -1,    16,    -1,    -1,    54,    75,    56,    57,    58,
      -1,    -1,    26,    82,    63,    -1,    65,    31,    12,    88,
      -1,    -1,    16,    -1,    73,    -1,    40,    -1,    -1,    -1,
      44,    -1,    26,    82,    48,    -1,    -1,    31,    -1,    88,
      54,    -1,    56,    57,    58,    -1,    40,    -1,    -1,    63,
      44,    65,    -1,    12,    48,    -1,    -1,    16,    -1,    -1,
      54,    75,    56,    57,    58,    -1,    -1,    26,    82,    63,
      -1,    65,    31,    12,    88,    -1,    -1,    16,    -1,    73,
      -1,    40,    -1,    -1,    -1,    44,    -1,    26,    82,    48,
      -1,    -1,    31,    -1,    88,    54,    -1,    56,    57,    58,
      -1,    40,    -1,    -1,    63,    44,    65,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    54,    75,    56,    57,    58,
      -1,    -1,    -1,    82,    63,    -1,    65,    12,    -1,    88,
      -1,    16,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    26,    -1,    82,    -1,    -1,    31,    -1,    -1,    88,
      -1,    -1,     6,    -1,    -1,    40,    -1,    11,    -1,    44,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    21,    -1,    54,
      24,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,
      65,    -1,    -1,    37,    -1,    39,    40,     6,    -1,    -1,
      -1,    -1,    11,    -1,    -1,    49,    -1,    82,    -1,    53,
      -1,    55,    21,    88,     6,    24,    -1,    61,    -1,    11,
      64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    37,    21,
      39,    -1,    24,    77,    -1,    79,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    53,    37,    55,    39,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    64,    -1,    49,    67,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    77,    61,
      79,    -1,    64,    12,    13,    67,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    -1,
      29,    -1,    31,    32,    -1,    12,    13,    -1,    -1,    16,
      -1,    40,    -1,    -1,    -1,    44,    45,    -1,    -1,    48,
      -1,    -1,    29,    -1,    31,    32,    -1,    56,    57,    58,
      -1,    -1,    -1,    40,    -1,    12,    65,    44,    45,    16,
      -1,    48,    -1,    -1,    -1,    -1,    75,    -1,    -1,    56,
      57,    58,    81,    82,    31,    -1,    -1,    12,    65,    -1,
      -1,    16,    -1,    40,    -1,    -1,    -1,    44,    75,    -1,
      -1,    48,    -1,    -1,    81,    82,    31,    -1,    -1,    56,
      57,    58,    -1,    -1,    -1,    40,    -1,    12,    65,    44,
      -1,    16,    -1,    48,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    56,    57,    58,    -1,    82,    31,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    40,    -1,    -1,    73,    44,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    29,    43,    46,    59,    68,    69,    80,    96,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     117,   118,   119,   120,   140,    40,    40,    80,   114,    40,
     114,     0,   101,   107,   102,   107,   108,    47,    97,   121,
      17,    46,   120,   114,    21,    75,   121,    21,   107,    13,
      32,    40,    45,    72,    75,    81,    92,    97,    98,   109,
     110,   111,   112,   113,   114,   115,   119,   122,   123,   124,
     125,   129,   130,   135,   136,   137,   141,    40,    40,    21,
      40,    78,    48,    40,   131,   137,     3,     8,    12,    14,
      16,    20,    29,    31,    33,    40,    41,    44,    48,    56,
      57,    58,    65,    71,    75,    82,    86,    90,    93,    94,
      98,   109,   114,   141,   142,   143,   144,   146,   147,   148,
     150,   151,   152,   153,   154,   155,   157,   158,   160,   162,
     168,   170,   171,   172,   173,   174,   175,   178,   179,   180,
     181,   182,   183,   184,   185,   189,   202,   203,   206,   207,
     208,    40,   126,   127,   131,    49,   116,    92,   109,   137,
      98,   123,    75,   134,   141,    97,   138,   121,    40,    78,
      75,    29,    73,   109,   132,   133,   116,    48,    26,    40,
      48,    54,    63,    88,   114,   181,   184,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,    40,
      75,    40,    75,   109,    48,    18,    48,    48,   187,   114,
     183,   201,   110,   113,   114,   201,    75,   187,   187,   141,
      48,   187,    40,   126,     6,    11,    21,    24,    37,    39,
      49,    53,    55,    61,    64,    67,    77,    79,   186,    98,
     143,    75,    23,     6,    11,    24,    37,    39,    53,    55,
      61,    64,    67,    77,    79,    56,    65,    24,   116,    19,
      75,    74,    49,   131,   126,   131,    98,   142,    75,    75,
     109,    40,    89,    19,    73,   193,   201,   110,   114,   187,
     201,   201,   201,    18,    75,    10,    70,     5,     9,    66,
       4,    25,    27,    34,    35,    50,    51,    36,    38,    52,
      54,    63,    60,    76,    78,    75,    75,   126,    29,    75,
     109,   152,   164,   165,   167,   144,    73,   139,   187,   187,
      73,   186,   186,    48,    75,    75,    15,    30,   176,   177,
     187,    75,    75,   187,   187,    40,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,    49,   144,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   128,   187,    24,   127,    74,    75,    98,    40,    89,
     116,    40,   133,    73,    73,   116,    49,   116,    73,   187,
     192,   187,   193,   194,   195,   196,   197,   197,   198,   198,
     198,   198,   199,   199,   199,   200,   200,   201,   201,   201,
      75,   109,    75,   187,   126,    75,    18,    19,    19,    73,
      73,    49,   116,   116,    73,   139,    48,   141,    30,   177,
      73,    48,    74,   187,    57,   185,   116,    40,    75,   201,
      73,    73,   204,    75,    18,   126,    73,   166,   167,    75,
      75,   187,   187,   152,   187,    33,    40,    93,   144,   145,
     146,   149,   155,   156,   159,   161,   163,   169,    73,   133,
     141,   144,    73,   139,    74,   201,   204,   190,   144,    73,
      73,   166,    73,   166,    75,    73,    48,    18,    48,    23,
      73,    73,   144,   144,    73,   144,    73,    73,   166,   144,
      75,   164,   165,   145,   187,   145,   141,   144,   144,   144,
      73,    75,   187,    75,    18,    73,   144,    73,   166,    75,
      75,   187,   187,   145,   145,    73,    73,   166,    73,   166,
      75,    73,   145,   145,    73,   145,    73,    73,   166,   145,
     145,   145,   145,    73,   145
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    98,    99,    99,    99,    99,    99,
      99,    99,   100,   101,   101,   102,   102,   102,   102,   103,
     104,   105,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   110,   111,   111,   112,   112,   113,   114,   114,   115,
     116,   116,   117,   117,   118,   119,   119,   120,   120,   120,
     120,   121,   121,   122,   122,   123,   123,   123,   124,   124,
     124,   125,   125,   126,   126,   127,   127,   127,   127,   128,
     129,   129,   129,   129,   130,   131,   131,   132,   132,   133,
     133,   133,   133,   133,   133,   134,   134,   135,   135,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   141,   141,
     142,   142,   143,   143,   143,   144,   144,   144,   144,   144,
     144,   145,   145,   145,   145,   145,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   147,   148,   149,
     150,   151,   152,   152,   152,   152,   152,   152,   152,   153,
     154,   155,   156,   157,   157,   158,   159,   160,   160,   161,
     161,   162,   162,   162,   162,   162,   162,   162,   162,   163,
     163,   163,   163,   163,   163,   163,   163,   164,   164,   165,
     165,   166,   167,   167,   168,   169,   170,   170,   171,   172,
     172,   173,   173,   174,   175,   175,   175,   176,   176,   177,
     178,   178,   179,   179,   179,   179,   179,   180,   180,   180,
     180,   180,   180,   181,   182,   182,   183,   184,   184,   184,
     184,   185,   185,   185,   185,   186,   186,   187,   188,   188,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   190,   190,   191,   191,   192,   192,
     193,   193,   194,   194,   195,   195,   196,   196,   196,   197,
     197,   197,   197,   197,   198,   198,   198,   198,   199,   199,
     199,   200,   200,   200,   200,   201,   201,   201,   201,   201,
     202,   203,   204,   204,   204,   204,   205,   205,   205,   205,
     206,   206,   206,   206,   207,   208
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
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     5,     1,     1,     1,     1,     1,     1,     1,     5,
       3,     5,     3,     3,     5,     5,     5,     1,     1,     1,
       1,     6,     7,     7,     8,     7,     8,     8,     9,     6,
       7,     7,     8,     7,     8,     8,     9,     1,     1,     2,
       3,     1,     3,     1,     7,     7,     2,     3,     3,     2,
       3,     2,     3,     3,     3,     4,     5,     2,     1,     5,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     5,     2,     3,     4,     5,
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
  case 3:
#line 77 "parser.y"
                           {new_scope();}
#line 2361 "parser.tab.c"
    break;

  case 4:
#line 78 "parser.y"
                                {old_scope();}
#line 2367 "parser.tab.c"
    break;

  case 27:
#line 133 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->type);}
#line 2373 "parser.tab.c"
    break;

  case 28:
#line 134 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->type);}
#line 2379 "parser.tab.c"
    break;

  case 29:
#line 138 "parser.y"
                 {strcpy((yyval.item)->type,(yyvsp[0].item)->type);}
#line 2385 "parser.tab.c"
    break;

  case 30:
#line 139 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2391 "parser.tab.c"
    break;

  case 31:
#line 140 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2397 "parser.tab.c"
    break;

  case 32:
#line 144 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2403 "parser.tab.c"
    break;

  case 33:
#line 145 "parser.y"
                        {strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2409 "parser.tab.c"
    break;

  case 34:
#line 149 "parser.y"
                {check_gst((yyvsp[0].item)->label); strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2415 "parser.tab.c"
    break;

  case 35:
#line 150 "parser.y"
                        {strcpy((yyval.item)->type,(yyvsp[0].item)->type);}
#line 2421 "parser.tab.c"
    break;

  case 36:
#line 154 "parser.y"
                {strcpy((yyval.item)->type,(yyvsp[0].item)->label);}
#line 2427 "parser.tab.c"
    break;

  case 37:
#line 158 "parser.y"
                                {strcpy((yyval.item)->label,strcat((yyvsp[-2].item)->label,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->label)));}
#line 2433 "parser.tab.c"
    break;

  case 38:
#line 159 "parser.y"
                        {strcpy((yyval.item)->label,(yyvsp[0].item)->label);}
#line 2439 "parser.tab.c"
    break;

  case 39:
#line 163 "parser.y"
                        {string t; for(int i=0;i<(yyvsp[-1].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->type,strcat((yyvsp[-1].item)->type,t.c_str()));}
#line 2445 "parser.tab.c"
    break;

  case 40:
#line 167 "parser.y"
                                          {(yyval.item)->dims = (yyvsp[-2].item)->dims+1;}
#line 2451 "parser.tab.c"
    break;

  case 41:
#line 168 "parser.y"
                                        {(yyval.item)->dims = 1;}
#line 2457 "parser.tab.c"
    break;

  case 42:
#line 172 "parser.y"
                    {strcpy((yyval.item)->type,""); strcpy((yyval.item)->label,(yyvsp[0].item)->label); line_number = yylineno;  if(!first_parse) go_in_scope((yyvsp[0].item)->label);curr_class_name = (yyvsp[0].item)->label;}
#line 2463 "parser.tab.c"
    break;

  case 43:
#line 173 "parser.y"
                                    {strcpy((yyval.item)->type,(yyvsp[-2].item)->label); strcpy((yyval.item)->label,(yyvsp[0].item)->label); line_number = yylineno;  if(!first_parse) go_in_scope((yyvsp[0].item)->label); curr_class_name = (yyvsp[0].item)->label;}
#line 2469 "parser.tab.c"
    break;

  case 44:
#line 176 "parser.y"
                                        {if(first_parse){string mod = check_class_modifiers((yyvsp[-1].item)->type);make_class_entry((yyvsp[-1].item)->label,line_number,mod);}}
#line 2475 "parser.tab.c"
    break;

  case 45:
#line 180 "parser.y"
                             {strcpy((yyval.item)->label,strcat((yyvsp[-1].item)->label,(yyvsp[0].item)->label));}
#line 2481 "parser.tab.c"
    break;

  case 46:
#line 181 "parser.y"
                {strcpy((yyval.item)->label,(yyvsp[0].item)->label);}
#line 2487 "parser.tab.c"
    break;

  case 47:
#line 185 "parser.y"
            {strcpy((yyval.item)->label,"0");}
#line 2493 "parser.tab.c"
    break;

  case 48:
#line 186 "parser.y"
                {strcpy((yyval.item)->label,"1");}
#line 2499 "parser.tab.c"
    break;

  case 49:
#line 187 "parser.y"
                {strcpy((yyval.item)->label,"2");}
#line 2505 "parser.tab.c"
    break;

  case 50:
#line 188 "parser.y"
                {strcpy((yyval.item)->label,"3");}
#line 2511 "parser.tab.c"
    break;

  case 57:
#line 204 "parser.y"
        {reset();}
#line 2517 "parser.tab.c"
    break;

  case 61:
#line 214 "parser.y"
                                        {
    for(int i=0;i<v.size();i++){
        string t = expression_type(yylineno,(yyvsp[-2].item)->type,v[i].second,"declare");
        if(first_parse)   make_entry(v[i].first,t,yylineno,"0000",1);
    }
    v.clear();
    declarations.clear();	
}
#line 2530 "parser.tab.c"
    break;

  case 62:
#line 222 "parser.y"
                                                        {
    for(int i=0;i<v.size();i++){
        string t = expression_type(yylineno,(yyvsp[-2].item)->type,v[i].second,"declare");
        if(first_parse) make_entry(v[i].first,t,yylineno,check_method_modifiers((yyvsp[-3].item)->label),1);
    }
    v.clear();
    declarations.clear();
}
#line 2543 "parser.tab.c"
    break;

  case 63:
#line 233 "parser.y"
                                                    {if(!first_parse){(yyval.item)->i_number = (yyvsp[-2].item)->i_number; (yyval.item)->dimension = (yyvsp[-2].item)->dimension;}}
#line 2549 "parser.tab.c"
    break;

  case 64:
#line 234 "parser.y"
                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 2555 "parser.tab.c"
    break;

  case 65:
#line 238 "parser.y"
                                        {if(first_parse)v.push_back(make_pair((yyvsp[-2].item)->label,"")); else{v.push_back(make_pair((yyvsp[-2].item)->label,(yyvsp[0].item)->type)); 
    (yyval.item)->i_number = (yyvsp[0].item)->i_number;
    string p = (yyvsp[0].item)->type;
    if(p=="boolean"){
        emitt("","true","",get_base_offset((yyvsp[-2].item)->label),-1);
        backpatch((yyvsp[0].item)->true_list,inst_num-1);
        emitt("","false","",get_base_offset((yyvsp[-2].item)->label),-1);
        backpatch((yyvsp[0].item)->false_list,inst_num-1);
    }else{
        declarations.push_back(make_pair((yyvsp[-2].item)->label,(yyvsp[0].item)->temp_var));
    };
}}
#line 2572 "parser.tab.c"
    break;

  case 66:
#line 250 "parser.y"
                {if(first_parse)v.push_back(make_pair((yyvsp[0].item)->label,""));else{}}
#line 2578 "parser.tab.c"
    break;

  case 67:
#line 251 "parser.y"
                        {string t; for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); v.push_back(make_pair((yyvsp[-1].item)->label,t));}
#line 2584 "parser.tab.c"
    break;

  case 68:
#line 252 "parser.y"
                                                 {if(first_parse){string t; for(int i=0;i<(yyvsp[-2].item)->dims;i++) t.push_back('*'); v.push_back(make_pair((yyvsp[-3].item)->label,t));}else{if((yyvsp[-2].item)->dims == (yyvsp[0].item)->dims) v.push_back(make_pair((yyvsp[-3].item)->label,(yyvsp[0].item)->type)); else{cout<<"Dimensions of array not matched in line number: "<<yylineno<<endl; exit(1);}declarations.push_back(make_pair((yyvsp[-3].item)->label,(yyvsp[0].item)->temp_var));(yyval.item)->dimension = (yyvsp[0].item)->dimension; }}
#line 2590 "parser.tab.c"
    break;

  case 69:
#line 256 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2596 "parser.tab.c"
    break;

  case 70:
#line 259 "parser.y"
                        {if((yyvsp[0].item)->dims){cout<<"Void function cant be of array type in line number "<<yylineno<<endl; exit(1);} strcpy((yyval.item)->label,(yyvsp[0].item)->label); strcpy((yyval.item)->type,"void0000"); line_number = yylineno; if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1);(yyval.item)->i_number = inst_num-1; print_table = new sym_table;}}
#line 2602 "parser.tab.c"
    break;

  case 71:
#line 260 "parser.y"
                        {string t; for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->label,(yyvsp[0].item)->label); strcpy((yyval.item)->type,strcat((yyvsp[-1].item)->type,(t+"0000").c_str())); line_number = yylineno; if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1); (yyval.item)->i_number = inst_num-1; print_table = new sym_table;}}
#line 2608 "parser.tab.c"
    break;

  case 72:
#line 261 "parser.y"
                                        {{if((yyvsp[0].item)->dims){cout<<"Void function cant be of array type in line number "<<yylineno<<endl;exit(1);} string x = check_method_modifiers((yyvsp[-2].item)->label); strcpy((yyval.item)->label,(yyvsp[0].item)->label); strcpy((yyval.item)->type,("void"+x).c_str()); line_number = yylineno;} if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1);(yyval.item)->i_number = inst_num-1; print_table = new sym_table;}}
#line 2614 "parser.tab.c"
    break;

  case 73:
#line 262 "parser.y"
                                        {{string t; for(int i=0;i<(yyvsp[-1].item)->dims;i++) t.push_back('*'); string x = check_method_modifiers((yyvsp[-2].item)->label); strcpy((yyval.item)->label,(yyvsp[0].item)->label); strcpy((yyval.item)->type,strcat((yyvsp[-1].item)->type,(t+x).c_str())); line_number = yylineno;} if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1);(yyval.item)->i_number = inst_num-1; print_table = new sym_table;}}
#line 2620 "parser.tab.c"
    break;

  case 74:
#line 265 "parser.y"
                                        {if(first_parse){string x = (yyvsp[-1].item)->type; make_func_entry((yyvsp[-1].item)->label,x.substr(0,x.size()-4),arguments,line_number,x.substr(x.size()-4,4));}else{print(curr_class_name+"."+(yyvsp[-1].item)->label); emitt("end",to_string(-offset),"","",-1); offset=0; (yyval.item)->i_number = (yyvsp[-1].item)->i_number; backpatch((yyvsp[0].item)->next_list,inst_num-1);}arguments.clear();}
#line 2626 "parser.tab.c"
    break;

  case 75:
#line 269 "parser.y"
            {strcpy((yyval.item)->label,(yyvsp[0].item)->label); (yyval.item)->dims = 0;}
#line 2632 "parser.tab.c"
    break;

  case 76:
#line 270 "parser.y"
                        {strcpy((yyval.item)->label,(yyvsp[-1].item)->label); (yyval.item)->dims = (yyvsp[0].item)->dims;}
#line 2638 "parser.tab.c"
    break;

  case 79:
#line 279 "parser.y"
                    {arguments.push_back(make_tuple((yyvsp[0].item)->label,(yyvsp[-1].item)->type,0,0));}
#line 2644 "parser.tab.c"
    break;

  case 80:
#line 280 "parser.y"
                                        {arguments.push_back(make_tuple((yyvsp[0].item)->label,(yyvsp[-1].item)->type,0,1));}
#line 2650 "parser.tab.c"
    break;

  case 81:
#line 281 "parser.y"
                                {string t; for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); arguments.push_back(make_tuple((yyvsp[-1].item)->label,strcat((yyvsp[-2].item)->type,t.c_str()),0,0));}
#line 2656 "parser.tab.c"
    break;

  case 82:
#line 282 "parser.y"
                                        {string t; for(int i=0;i<(yyvsp[-1].item)->dims;i++) t.push_back('*'); arguments.push_back(make_tuple((yyvsp[-1].item)->label,strcat((yyvsp[-3].item)->type,t.c_str()),0,1));}
#line 2662 "parser.tab.c"
    break;

  case 83:
#line 283 "parser.y"
                                        {arguments.push_back(make_tuple((yyvsp[0].item)->label,(yyvsp[-2].item)->type,1,0));}
#line 2668 "parser.tab.c"
    break;

  case 84:
#line 284 "parser.y"
                                                {arguments.push_back(make_tuple((yyvsp[0].item)->label,(yyvsp[-2].item)->type,1,1));}
#line 2674 "parser.tab.c"
    break;

  case 85:
#line 288 "parser.y"
        {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number,(yyval.item)->next_list = (yyvsp[0].item)->next_list;}}
#line 2680 "parser.tab.c"
    break;

  case 87:
#line 293 "parser.y"
            {strcpy((yyval.item)->label,(yyvsp[0].item)->label); strcpy((yyval.item)->type,"0000"); line_number = yylineno; if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1); (yyval.item)->i_number = inst_num-1; }}
#line 2686 "parser.tab.c"
    break;

  case 88:
#line 294 "parser.y"
                            {string x = check_method_modifiers((yyvsp[-1].item)->label); strcpy((yyval.item)->type,x.c_str()); strcpy((yyval.item)->label,(yyvsp[0].item)->label); strcpy((yyval.item)->type,(yyvsp[0].item)->label); line_number = yylineno; if(!first_parse){go_in_scope((yyvsp[0].item)->label);string l = (yyvsp[0].item)->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1); (yyval.item)->i_number = inst_num-1;}}
#line 2692 "parser.tab.c"
    break;

  case 89:
#line 297 "parser.y"
                                             {if(first_parse){check_constructor((yyvsp[0].item)->label); make_func_entry((yyvsp[-1].item)->label,(yyvsp[-1].item)->label,arguments,line_number,(yyvsp[-1].item)->type);}arguments.clear(); if(!first_parse){print(curr_class_name+"."+curr_class_name); emitt("end",to_string(-offset),"","",-1); offset = 0; (yyval.item)->i_number = (yyvsp[-1].item)->i_number; backpatch((yyvsp[0].item)->next_list,inst_num-1);}}
#line 2698 "parser.tab.c"
    break;

  case 94:
#line 311 "parser.y"
                                {if(!first_parse){function_call.push_back(make_pair((yyvsp[0].item)->type,(yyvsp[0].item)->temp_var));}}
#line 2704 "parser.tab.c"
    break;

  case 95:
#line 312 "parser.y"
                {if(!first_parse){function_call.push_back(make_pair((yyvsp[0].item)->type,(yyvsp[0].item)->temp_var));}}
#line 2710 "parser.tab.c"
    break;

  case 96:
#line 317 "parser.y"
                                {if(first_parse) make_class_entry((yyvsp[-1].item)->label,yylineno,"00");}
#line 2716 "parser.tab.c"
    break;

  case 97:
#line 318 "parser.y"
                                                {if(first_parse){string mod = check_class_modifiers((yyvsp[-3].item)->label); make_class_entry((yyvsp[-1].item)->label,yylineno,mod);}}
#line 2722 "parser.tab.c"
    break;

  case 98:
#line 322 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = -1;}}
#line 2728 "parser.tab.c"
    break;

  case 99:
#line 323 "parser.y"
                                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[-1].item)->i_number, (yyval.item)->true_list = (yyvsp[-1].item)->true_list; (yyval.item)->next_list = (yyvsp[-1].item)->next_list;}}
#line 2734 "parser.tab.c"
    break;

  case 100:
#line 327 "parser.y"
                                {if(!first_parse){backpatch((yyvsp[-1].item)->next_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[-1].item)->i_number; (yyval.item)->true_list = merge((yyvsp[-1].item)->true_list, (yyvsp[0].item)->true_list);}}
#line 2740 "parser.tab.c"
    break;

  case 101:
#line 328 "parser.y"
                 {if(!first_parse){(yyval.item)->next_list = (yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2746 "parser.tab.c"
    break;

  case 102:
#line 332 "parser.y"
                                        {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,(yyvsp[-2].item)->type,v[i].second,"declare");
            make_entry(v[i].first,t,yylineno,"0000",-1);
        }
        for(int i=0;i<declarations.size();i++){
            char temp[1000];
            strcpy(temp,(declarations[i].first).c_str());
            string t = find_in_scope(declarations[i].first,temp);
            emitt("",declarations[i].second,"",temp,-1);
        }
        if((yyvsp[-1].item)->dimension.size()) set_dimensions(v[0].first,(yyvsp[-1].item)->dimension);
        (yyval.item)->i_number = (yyvsp[-1].item)->i_number;
    }	
    v.clear();
    declarations.clear();
}
#line 2769 "parser.tab.c"
    break;

  case 103:
#line 350 "parser.y"
                                                {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,(yyvsp[-2].item)->type,v[i].second,"declare");
            make_entry(declarations[i].first,t,yylineno,"0010",-1);
        }
        for(int i=0;i<declarations.size();i++){
            char temp[1000];
            strcpy(temp,(declarations[i].first).c_str());
            string t = find_in_scope(declarations[i].first,temp);
            emitt("",declarations[i].second,"",temp,-1);
        }
        if((yyvsp[-1].item)->dimension.size()) set_dimensions(v[0].first,(yyvsp[-1].item)->dimension);
        (yyval.item)->i_number = (yyvsp[-1].item)->i_number;
    }	
    v.clear();
    declarations.clear();
}
#line 2792 "parser.tab.c"
    break;

  case 104:
#line 368 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type); (yyval.item)->next_list = (yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2798 "parser.tab.c"
    break;

  case 105:
#line 372 "parser.y"
                                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type); (yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2804 "parser.tab.c"
    break;

  case 106:
#line 373 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2810 "parser.tab.c"
    break;

  case 107:
#line 374 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2816 "parser.tab.c"
    break;

  case 108:
#line 375 "parser.y"
                                                {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2822 "parser.tab.c"
    break;

  case 109:
#line 376 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2828 "parser.tab.c"
    break;

  case 110:
#line 377 "parser.y"
                                                {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list; (yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2834 "parser.tab.c"
    break;

  case 111:
#line 381 "parser.y"
                                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type); (yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2840 "parser.tab.c"
    break;

  case 112:
#line 382 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2846 "parser.tab.c"
    break;

  case 113:
#line 383 "parser.y"
                                                {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2852 "parser.tab.c"
    break;

  case 114:
#line 384 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2858 "parser.tab.c"
    break;

  case 115:
#line 385 "parser.y"
                                                {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2864 "parser.tab.c"
    break;

  case 116:
#line 389 "parser.y"
                                                    {if(!first_parse){(yyval.item)->next_list=(yyvsp[0].item)->next_list;(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2870 "parser.tab.c"
    break;

  case 117:
#line 390 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2876 "parser.tab.c"
    break;

  case 118:
#line 391 "parser.y"
                                                    {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2882 "parser.tab.c"
    break;

  case 119:
#line 392 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2888 "parser.tab.c"
    break;

  case 120:
#line 393 "parser.y"
                                                    {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;}}
#line 2894 "parser.tab.c"
    break;

  case 121:
#line 394 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2900 "parser.tab.c"
    break;

  case 122:
#line 395 "parser.y"
                                                    {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2906 "parser.tab.c"
    break;

  case 123:
#line 396 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2912 "parser.tab.c"
    break;

  case 124:
#line 397 "parser.y"
                                                    {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2918 "parser.tab.c"
    break;

  case 125:
#line 398 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2924 "parser.tab.c"
    break;

  case 126:
#line 399 "parser.y"
                                                {if(!first_parse){(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 2930 "parser.tab.c"
    break;

  case 130:
#line 415 "parser.y"
                                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[-1].item)->i_number;}}
#line 2936 "parser.tab.c"
    break;

  case 131:
#line 419 "parser.y"
                                                                            {if(!first_parse){string k = (yyvsp[-2].item)->temp_var; (yyval.item)->i_number = (yyvsp[-2].item)->i_number; emitt("string","print("+k+")","","",-1);}}
#line 2942 "parser.tab.c"
    break;

  case 132:
#line 422 "parser.y"
                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2948 "parser.tab.c"
    break;

  case 133:
#line 423 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2954 "parser.tab.c"
    break;

  case 134:
#line 424 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2960 "parser.tab.c"
    break;

  case 135:
#line 425 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2966 "parser.tab.c"
    break;

  case 136:
#line 426 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2972 "parser.tab.c"
    break;

  case 137:
#line 427 "parser.y"
                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2978 "parser.tab.c"
    break;

  case 138:
#line 428 "parser.y"
                                    {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 2984 "parser.tab.c"
    break;

  case 139:
#line 431 "parser.y"
                                                                {if(!first_parse){reset(); backpatch((yyvsp[-2].item)->true_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-2].item)->false_list,(yyvsp[0].item)->next_list); (yyval.item)->i_number=(yyvsp[-2].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list;  }}
#line 2990 "parser.tab.c"
    break;

  case 140:
#line 435 "parser.y"
                                            {if(!first_parse){reset(); backpatch((yyval.item)->false_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-2].item)->next_list,(yyvsp[0].item)->next_list);(yyval.item)->i_number = (yyvsp[-2].item)->i_number; (yyval.item)->true_list = merge((yyvsp[-2].item)->true_list,(yyvsp[0].item)->true_list); }}
#line 2996 "parser.tab.c"
    break;

  case 141:
#line 439 "parser.y"
                                                                    {if(!first_parse){reset(); backpatch((yyvsp[-2].item)->true_list,(yyvsp[0].item)->i_number); emitt("","","","goto",-1); (yyval.item)->false_list = (yyvsp[-2].item)->false_list; (yyval.item)->next_list = (yyvsp[0].item)->next_list; (yyval.item)->next_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number; (yyval.item)->true_list = (yyvsp[0].item)->true_list; }}
#line 3002 "parser.tab.c"
    break;

  case 142:
#line 443 "parser.y"
                                                        {if(!first_parse){reset(); backpatch((yyval.item)->false_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-2].item)->next_list,(yyvsp[0].item)->next_list);(yyval.item)->i_number = (yyvsp[-2].item)->i_number; (yyval.item)->true_list = merge((yyvsp[-2].item)->true_list,(yyvsp[0].item)->true_list); }}
#line 3008 "parser.tab.c"
    break;

  case 145:
#line 453 "parser.y"
                                                                {if(!first_parse){string t = (yyvsp[-2].item)->type; if(t!="boolean"){cout<<"Expression must be of type boolean in line number "<<yylineno<<endl;exit(1);} reset(); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); backpatch((yyvsp[-2].item)->true_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-2].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-2].item)->i_number); (yyval.item)->i_number = (yyvsp[-2].item)->i_number; }}
#line 3014 "parser.tab.c"
    break;

  case 146:
#line 457 "parser.y"
                                                                                {if(!first_parse){string t = (yyvsp[-2].item)->type; if(t!="boolean"){cout<<"Expression must be of type boolean in line number "<<yylineno<<endl;exit(1);} reset(); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); backpatch((yyvsp[-2].item)->true_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-2].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-2].item)->i_number); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3020 "parser.tab.c"
    break;

  case 147:
#line 461 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number; (yyval.item)->next_list = (yyvsp[0].item)->next_list;}}
#line 3026 "parser.tab.c"
    break;

  case 149:
#line 466 "parser.y"
                                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number; (yyval.item)->next_list = (yyvsp[0].item)->next_list;}}
#line 3032 "parser.tab.c"
    break;

  case 151:
#line 471 "parser.y"
                                                                        {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[0].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[0].item)->i_number);}}
#line 3038 "parser.tab.c"
    break;

  case 152:
#line 472 "parser.y"
                                                                                    {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[0].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[0].item)->i_number);}}
#line 3044 "parser.tab.c"
    break;

  case 153:
#line 473 "parser.y"
                                                                                                {if(!first_parse){string t = (yyvsp[-3].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression in line number "<<yylineno<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-3].item)->i_number; if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num; backpatch((yyvsp[-3].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-3].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-3].item)->false_list,(yyvsp[0].item)->true_list);  emitt("","","","goto",(yyvsp[-3].item)->i_number);}}
#line 3050 "parser.tab.c"
    break;

  case 154:
#line 474 "parser.y"
                                                                                                        {if(!first_parse){string t = (yyvsp[-4].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression in line number "<<yylineno<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-4].item)->i_number;if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num; backpatch((yyvsp[-4].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-4].item)->false_list,(yyvsp[0].item)->true_list);  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[-4].item)->i_number);}}
#line 3056 "parser.tab.c"
    break;

  case 155:
#line 475 "parser.y"
                                                                                                {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[-4].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[0].item)->i_number);}}
#line 3062 "parser.tab.c"
    break;

  case 156:
#line 476 "parser.y"
                                                                                                        {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[-5].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[0].item)->i_number);}}
#line 3068 "parser.tab.c"
    break;

  case 157:
#line 477 "parser.y"
                                                                                                        {if(!first_parse){string t = (yyvsp[-3].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression in line number "<<yylineno<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-5].item)->i_number; if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num;backpatch((yyvsp[-3].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-3].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-3].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-3].item)->i_number);}}
#line 3074 "parser.tab.c"
    break;

  case 158:
#line 478 "parser.y"
                                                                                                                {if(!first_parse){string t = (yyvsp[-4].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression in line number "<<yylineno<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-6].item)->i_number;if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num; backpatch((yyvsp[-4].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-4].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-2].item)->i_number); backpatch((yyvsp[-2].item)->next_list,(yyvsp[-4].item)->i_number);}}
#line 3080 "parser.tab.c"
    break;

  case 159:
#line 482 "parser.y"
                                                                                 {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[0].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[0].item)->i_number);}}
#line 3086 "parser.tab.c"
    break;

  case 160:
#line 483 "parser.y"
                                                                                             {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[0].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[0].item)->i_number);}}
#line 3092 "parser.tab.c"
    break;

  case 161:
#line 484 "parser.y"
                                                                                                        {if(!first_parse){string t = (yyvsp[-3].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-3].item)->i_number; if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num;  backpatch((yyvsp[-3].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-3].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-3].item)->false_list,(yyvsp[0].item)->true_list);  emitt("","","","goto",(yyvsp[-3].item)->i_number);}}
#line 3098 "parser.tab.c"
    break;

  case 162:
#line 485 "parser.y"
                                                                                                                {if(!first_parse){string t = (yyvsp[-4].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-4].item)->i_number;if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num;  backpatch((yyvsp[-4].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-4].item)->false_list,(yyvsp[0].item)->true_list);  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[-4].item)->i_number);}}
#line 3104 "parser.tab.c"
    break;

  case 163:
#line 486 "parser.y"
                                                                                                        {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[-4].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[0].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[0].item)->i_number);}}
#line 3110 "parser.tab.c"
    break;

  case 164:
#line 487 "parser.y"
                                                                                                                {if(!first_parse){reset();(yyval.item)->i_number = (yyvsp[-5].item)->i_number; backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = (yyvsp[0].item)->true_list;  emitt("","","","goto",(yyvsp[-2].item)->i_number);  backpatch((yyvsp[-2].item)->next_list,(yyvsp[0].item)->i_number);}}
#line 3116 "parser.tab.c"
    break;

  case 165:
#line 488 "parser.y"
                                                                                                                {if(!first_parse){string t = (yyvsp[-3].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-5].item)->i_number;if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num;  backpatch((yyvsp[-3].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-3].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-3].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-3].item)->i_number);}}
#line 3122 "parser.tab.c"
    break;

  case 166:
#line 489 "parser.y"
                                                                                                                        {if(!first_parse){string t = (yyvsp[-4].item)->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();(yyval.item)->i_number = (yyvsp[-6].item)->i_number;if((yyvsp[0].item)->i_number==-1) (yyvsp[0].item)->i_number = inst_num;  backpatch((yyvsp[-4].item)->true_list,(yyvsp[0].item)->i_number); backpatch((yyvsp[0].item)->next_list,(yyvsp[-2].item)->i_number); (yyval.item)->next_list = merge((yyvsp[-4].item)->false_list,(yyvsp[0].item)->true_list); emitt("","","","goto",(yyvsp[-2].item)->i_number); backpatch((yyvsp[-2].item)->next_list,(yyvsp[-4].item)->i_number);}}
#line 3128 "parser.tab.c"
    break;

  case 167:
#line 493 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3134 "parser.tab.c"
    break;

  case 168:
#line 494 "parser.y"
                            {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3140 "parser.tab.c"
    break;

  case 169:
#line 498 "parser.y"
                           {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,(yyvsp[-1].item)->type,v[i].second,"declare");
            make_dirty_entry(v[i].first,t,yylineno,"0000",-1);
        }
        for(int i=0;i<declarations.size();i++){
            char temp[1000];
            strcpy(temp,(declarations[i].first).c_str());
            string t = find_in_scope(declarations[i].first,temp);
            emitt("",declarations[i].second,"",temp,-1);
        }
        (yyval.item)->i_number = (yyvsp[0].item)->i_number;
    }	
    declarations.clear();
    v.clear();
}
#line 3162 "parser.tab.c"
    break;

  case 170:
#line 515 "parser.y"
                                   {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,(yyvsp[-2].item)->type,v[i].second,"declare");
            make_dirty_entry(v[i].first,t,yylineno,"0010",-1);
        }
        for(int i=0;i<declarations.size();i++){
            char temp[1000];
            strcpy(temp,(declarations[i].first).c_str());
            string t = find_in_scope(declarations[i].first,temp);
            emitt("",declarations[i].second,"",temp,-1);
        }
        (yyval.item)->i_number = (yyvsp[0].item)->i_number;
    }
    declarations.clear();
    v.clear();
}
#line 3184 "parser.tab.c"
    break;

  case 171:
#line 534 "parser.y"
                                {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number; emitt("","","","goto",-1); (yyval.item)->next_list.push_back(inst_num-1);}}
#line 3190 "parser.tab.c"
    break;

  case 172:
#line 538 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3196 "parser.tab.c"
    break;

  case 173:
#line 539 "parser.y"
                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3202 "parser.tab.c"
    break;

  case 174:
#line 543 "parser.y"
                                                                                                {if(!first_parse){reset();}}
#line 3208 "parser.tab.c"
    break;

  case 175:
#line 547 "parser.y"
                                                                                                                {if(!first_parse){reset();}}
#line 3214 "parser.tab.c"
    break;

  case 176:
#line 551 "parser.y"
                                {if(!first_parse){emitt("","","","goto",-1); (yyval.item)->true_list.push_back(inst_num-1); (yyval.item)->i_number = inst_num-1;}}
#line 3220 "parser.tab.c"
    break;

  case 177:
#line 552 "parser.y"
                                        {if(!first_parse){emitt("","","","goto",-1); (yyval.item)->true_list.push_back(inst_num-1); (yyval.item)->i_number = inst_num-1;}}
#line 3226 "parser.tab.c"
    break;

  case 179:
#line 560 "parser.y"
                                {if(!first_parse){emitt("","","","goto",-1); (yyval.item)->next_list.push_back(inst_num-1); (yyval.item)->i_number = inst_num-1; }}
#line 3232 "parser.tab.c"
    break;

  case 180:
#line 561 "parser.y"
                                        {if(!first_parse){emitt("","","","goto",-1); (yyval.item)->next_list.push_back(inst_num-1); (yyval.item)->i_number = inst_num-1;}}
#line 3238 "parser.tab.c"
    break;

  case 181:
#line 565 "parser.y"
                                            {if(!first_parse){emitt("string","return","","",-1);(yyval.item)->i_number = inst_num-1;}}
#line 3244 "parser.tab.c"
    break;

  case 182:
#line 566 "parser.y"
                                         {if(!first_parse){emitt("",(yyvsp[-1].item)->temp_var,"","rax",-1); emitt("string","return","","",-1);(yyval.item)->i_number=(yyvsp[-1].item)->i_number;}}
#line 3250 "parser.tab.c"
    break;

  case 190:
#line 589 "parser.y"
                        {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3256 "parser.tab.c"
    break;

  case 191:
#line 590 "parser.y"
                                {if(!first_parse){(yyval.item)->lit = false; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->dimension = (yyvsp[0].item)->dimension;(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3262 "parser.tab.c"
    break;

  case 192:
#line 594 "parser.y"
                        {if(!first_parse){(yyval.item)->lit = true;strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3268 "parser.tab.c"
    break;

  case 193:
#line 595 "parser.y"
                                               {if(!first_parse){(yyval.item)->lit = false; strcpy((yyval.item)->type,(yyvsp[-1].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[-1].item)->temp_var);(yyval.item)->true_list = (yyvsp[-1].item)->true_list; (yyval.item)->false_list = (yyvsp[-1].item)->false_list; (yyval.item)->i_number = (yyvsp[-1].item)->i_number;}}
#line 3274 "parser.tab.c"
    break;

  case 194:
#line 596 "parser.y"
                                        {if(!first_parse){(yyval.item)->lit = false; strcpy((yyval.item)->type,(yyvsp[0].item)->type); (yyval.item)->i_number = (yyvsp[0].item)->i_number; strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);}}
#line 3280 "parser.tab.c"
    break;

  case 195:
#line 597 "parser.y"
                        {if(!first_parse){(yyval.item)->lit = false;  strcpy((yyval.item)->type,(yyvsp[0].item)->type);(yyval.item)->i_number = (yyvsp[0].item)->i_number; string z = new_temporary(); emitt("",(yyvsp[0].item)->temp_var,"",z,-1); strcpy((yyval.item)->temp_var,z.c_str());}}
#line 3286 "parser.tab.c"
    break;

  case 196:
#line 598 "parser.y"
                                {if(!first_parse){(yyval.item)->lit = false; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3292 "parser.tab.c"
    break;

  case 197:
#line 602 "parser.y"
                    {if(!first_parse){strcpy((yyval.item)->type,"int");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3298 "parser.tab.c"
    break;

  case 198:
#line 603 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,"float");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3304 "parser.tab.c"
    break;

  case 199:
#line 604 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,"boolean");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3310 "parser.tab.c"
    break;

  case 200:
#line 605 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,"char");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3316 "parser.tab.c"
    break;

  case 201:
#line 606 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,"String");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3322 "parser.tab.c"
    break;

  case 202:
#line 607 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,"null");strcpy((yyval.item)->temp_var,new_temporary().c_str());emitt("",(yyvsp[0].item)->label,"",(yyval.item)->temp_var,-1);(yyval.item)->i_number = inst_num-1;}}
#line 3328 "parser.tab.c"
    break;

  case 203:
#line 611 "parser.y"
                                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type); strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3334 "parser.tab.c"
    break;

  case 204:
#line 615 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number = inst_num; strcpy((yyval.item)->temp_var,"rax"); check_gst((yyvsp[-2].item)->label); strcpy((yyval.item)->type,get_method((yyvsp[-2].item)->label,"constructor",function_call).c_str());function_call.clear(); string pp = new_temporary();emitt("","rax","",pp,-1); strcpy((yyval.item)->temp_var,pp.c_str());}}
#line 3340 "parser.tab.c"
    break;

  case 205:
#line 616 "parser.y"
                                                                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[-2].item)->i_number; strcpy((yyval.item)->temp_var,"rax"); check_gst((yyvsp[-3].item)->label); strcpy((yyval.item)->type,get_method((yyvsp[-3].item)->label,"constructor",function_call).c_str());function_call.clear();string pp = new_temporary();emitt("","rax","",pp,-1); strcpy((yyval.item)->temp_var,pp.c_str());}}
#line 3346 "parser.tab.c"
    break;

  case 206:
#line 620 "parser.y"
                                {if(!first_parse){string bruh = (yyvsp[-1].item)->label; string t = find_in_scope((yyvsp[-1].item)->label,(yyvsp[-1].item)->label); int count=0; for(int i=0;i<t.size();i++)if(t[i]=='*') count++; if(count<(yyvsp[0].item)->dims){cout<<"Accessing Higher Dimensions of "<<bruh<<" in line number "<<yylineno<<endl; exit(1);} string l = (t.substr(0,t.size()-(yyvsp[0].item)->dims));strcpy((yyval.item)->type,l.c_str());vector<int> s = get_dimensions(bruh); strcpy((yyval.item)->temp_var,array_access((yyvsp[-1].item)->label,s,(yyvsp[0].item)->dimension).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; strcpy((yyval.item)->label,bruh.c_str());}}
#line 3352 "parser.tab.c"
    break;

  case 207:
#line 624 "parser.y"
                                                        {if(!first_parse){(yyval.item)->i_number = inst_num; strcpy((yyval.item)->temp_var,"rax"); strcpy((yyval.item)->type,get_method((yyvsp[-2].item)->label,"",function_call).c_str());string pp = new_temporary();emitt("","rax","",pp,-1); strcpy((yyval.item)->temp_var,pp.c_str());}}
#line 3358 "parser.tab.c"
    break;

  case 208:
#line 625 "parser.y"
                                                                {if(!first_parse){strcpy((yyval.item)->temp_var,"rax"); strcpy((yyval.item)->type,get_method((yyvsp[-3].item)->label,"",function_call).c_str());function_call.clear();string pp = new_temporary();emitt("","rax","",pp,-1); strcpy((yyval.item)->temp_var,pp.c_str());}}
#line 3364 "parser.tab.c"
    break;

  case 209:
#line 626 "parser.y"
                                                                                {if(!first_parse){(yyval.item)->i_number = inst_num;strcpy((yyval.item)->temp_var,"rax"); string ab = find_in_scope((yyvsp[-4].item)->label,(yyvsp[-4].item)->label); strcpy((yyval.item)->type,get_method((yyvsp[-2].item)->label,ab,function_call,(yyvsp[-4].item)->label).c_str());string pp = new_temporary();emitt("","rax","",pp,-1); strcpy((yyval.item)->temp_var,pp.c_str());}}
#line 3370 "parser.tab.c"
    break;

  case 210:
#line 627 "parser.y"
                                                                                        {if(!first_parse){(yyval.item)->i_number = (yyvsp[-1].item)->i_number; strcpy((yyval.item)->temp_var,"rax"); string ab = find_in_scope((yyvsp[-5].item)->label,(yyvsp[-5].item)->label); strcpy((yyval.item)->type,get_method((yyvsp[-3].item)->label,ab,function_call,(yyvsp[-5].item)->label).c_str()); function_call.clear();string pp = new_temporary();emitt("","rax","",pp,-1); strcpy((yyval.item)->temp_var,pp.c_str());}}
#line 3376 "parser.tab.c"
    break;

  case 211:
#line 631 "parser.y"
                                {if(!first_parse){string t; for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->type,strcat((yyvsp[-1].item)->type,t.c_str()));(yyval.item)->dims = (yyvsp[0].item)->dims; (yyval.item)->i_number = (yyvsp[0].item)->i_number;strcpy((yyval.item)->temp_var,array_func((yyvsp[-2].item)->label,(yyvsp[0].item)->dimension,(yyvsp[-1].item)->type).c_str()); (yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3382 "parser.tab.c"
    break;

  case 212:
#line 632 "parser.y"
                                        {if(!first_parse){string t; for(int i=0;i<(yyvsp[-1].item)->dims;i++) t.push_back('*'); for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->type,strcat((yyvsp[-2].item)->type,t.c_str()));(yyval.item)->dims = (yyvsp[-1].item)->dims + (yyvsp[0].item)->dims;}}
#line 3388 "parser.tab.c"
    break;

  case 213:
#line 633 "parser.y"
                                {if(!first_parse){string t; for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->type,strcat((yyvsp[-1].item)->type,t.c_str()));(yyval.item)->dims = (yyvsp[0].item)->dims; (yyval.item)->dimension = (yyvsp[0].item)->dimension; (yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3394 "parser.tab.c"
    break;

  case 214:
#line 634 "parser.y"
                                        {if(!first_parse){string t; for(int i=0;i<(yyvsp[-1].item)->dims;i++) t.push_back('*'); for(int i=0;i<(yyvsp[0].item)->dims;i++) t.push_back('*'); strcpy((yyval.item)->type,strcat((yyvsp[-2].item)->type,t.c_str()));(yyval.item)->dims = (yyvsp[-1].item)->dims + (yyvsp[0].item)->dims;}}
#line 3400 "parser.tab.c"
    break;

  case 215:
#line 638 "parser.y"
                                                                {if(!first_parse){(yyval.item)->dims = (yyvsp[-3].item)->dims+1; string t = (yyvsp[-1].item)->type; if(t!="int" && t!="byte" && t!="short" && t!="long") {cout<<"Array size must be of integer type. Line number: "<<yylineno<<endl; exit(1);}(yyvsp[-3].item)->dimension.push_back(reduce((yyvsp[-1].item)->temp_var)); (yyval.item)->dimension = (yyvsp[-3].item)->dimension; (yyval.item)->i_number = (yyvsp[-3].item)->i_number;}}
#line 3406 "parser.tab.c"
    break;

  case 216:
#line 639 "parser.y"
                                                                {if(!first_parse){(yyval.item)->dims=1; string t = (yyvsp[-1].item)->type; if(t!="int" && t!="byte" && t!="short" && t!="long") {cout<<"Array size must be of integer type. Line number: "<<yylineno<<endl; exit(1);} (yyval.item)->dimension.push_back(reduce((yyvsp[-1].item)->temp_var));(yyval.item)->i_number = (yyvsp[-1].item)->i_number;}}
#line 3412 "parser.tab.c"
    break;

  case 217:
#line 643 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number=(yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3418 "parser.tab.c"
    break;

  case 218:
#line 647 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);(yyval.item)->i_number=(yyvsp[0].item)->i_number;strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3424 "parser.tab.c"
    break;

  case 219:
#line 648 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);(yyval.item)->i_number=(yyvsp[0].item)->i_number;}}
#line 3430 "parser.tab.c"
    break;

  case 220:
#line 652 "parser.y"
                                        {
    if(!first_parse){
        string bruh = (yyvsp[-2].item)->label;
        string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);
        strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str());
        (yyval.item)->i_number = (yyvsp[0].item)->i_number;
        if((yyvsp[0].item)->dimension.size()){
            set_dimensions(bruh,(yyvsp[0].item)->dimension);
        }
        if(t=="boolean"){
            emitt("","true","",get_base_offset((yyvsp[-2].item)->label),-1);
            backpatch((yyvsp[0].item)->true_list,inst_num-1);
            emitt("","false","",get_base_offset((yyvsp[-2].item)->label),-1);
            backpatch((yyvsp[0].item)->false_list,inst_num-1);
        }else{
            if(t!=(yyvsp[0].item)->type){string temp = new_temporary(); strcpy((yyvsp[0].item)->temp_var,temp.c_str());}
            emitt("",(yyvsp[0].item)->temp_var,"",get_base_offset((yyvsp[-2].item)->label),-1);
        }
    }
}
#line 3455 "parser.tab.c"
    break;

  case 221:
#line 672 "parser.y"
                                            {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",get_base_offset((yyvsp[-2].item)->label),"",l,-1); string s = new_temporary(); emitt("*",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",get_base_offset((yyvsp[-2].item)->label),-1);}}
#line 3461 "parser.tab.c"
    break;

  case 222:
#line 673 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",get_base_offset((yyvsp[-2].item)->label),"",l,-1); string s = new_temporary(); emitt("/",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",get_base_offset((yyvsp[-2].item)->label),-1);}}
#line 3467 "parser.tab.c"
    break;

  case 223:
#line 674 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",get_base_offset((yyvsp[-2].item)->label),"",l,-1); string s = new_temporary(); emitt("\%",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",get_base_offset((yyvsp[-2].item)->label),-1);}}
#line 3473 "parser.tab.c"
    break;

  case 224:
#line 675 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",get_base_offset((yyvsp[-2].item)->label),"",l,-1); string s = new_temporary(); emitt("+",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",get_base_offset((yyvsp[-2].item)->label),-1);}}
#line 3479 "parser.tab.c"
    break;

  case 225:
#line 676 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",get_base_offset((yyvsp[-2].item)->label),"",l,-1); string s = new_temporary(); emitt("-",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",get_base_offset((yyvsp[-2].item)->label),-1);}}
#line 3485 "parser.tab.c"
    break;

  case 226:
#line 677 "parser.y"
                                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",get_base_offset((yyvsp[-2].item)->label),"",l,-1); string s = new_temporary(); emitt("<<",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",get_base_offset((yyvsp[-2].item)->label),-1);}}
#line 3491 "parser.tab.c"
    break;

  case 227:
#line 678 "parser.y"
                                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",get_base_offset((yyvsp[-2].item)->label),"",l,-1); string s = new_temporary(); emitt(">>",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",get_base_offset((yyvsp[-2].item)->label),-1);}}
#line 3497 "parser.tab.c"
    break;

  case 228:
#line 679 "parser.y"
                                                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",get_base_offset((yyvsp[-2].item)->label),"",l,-1); string s = new_temporary(); emitt(">>>",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",get_base_offset((yyvsp[-2].item)->label),-1);}}
#line 3503 "parser.tab.c"
    break;

  case 229:
#line 680 "parser.y"
                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",get_base_offset((yyvsp[-2].item)->label),"",l,-1); string s = new_temporary(); emitt("&",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",get_base_offset((yyvsp[-2].item)->label),-1);}}
#line 3509 "parser.tab.c"
    break;

  case 230:
#line 681 "parser.y"
                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str());(yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",get_base_offset((yyvsp[-2].item)->label),"",l,-1); string s = new_temporary(); emitt("^",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",get_base_offset((yyvsp[-2].item)->label),-1);}}
#line 3515 "parser.tab.c"
    break;

  case 231:
#line 682 "parser.y"
                                      {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",get_base_offset((yyvsp[-2].item)->label),"",l,-1); string s = new_temporary(); emitt("|",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",get_base_offset((yyvsp[-2].item)->label),-1);}}
#line 3521 "parser.tab.c"
    break;

  case 232:
#line 683 "parser.y"
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
            
            emitt("",(yyvsp[0].item)->temp_var,"",(yyvsp[-2].item)->temp_var,-1);
        }
    }
}
#line 3542 "parser.tab.c"
    break;

  case 233:
#line 699 "parser.y"
                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("*",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3548 "parser.tab.c"
    break;

  case 234:
#line 700 "parser.y"
                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("/",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3554 "parser.tab.c"
    break;

  case 235:
#line 701 "parser.y"
                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("\%",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3560 "parser.tab.c"
    break;

  case 236:
#line 702 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("+",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3566 "parser.tab.c"
    break;

  case 237:
#line 703 "parser.y"
                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("-",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3572 "parser.tab.c"
    break;

  case 238:
#line 704 "parser.y"
                                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("<<",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3578 "parser.tab.c"
    break;

  case 239:
#line 705 "parser.y"
                                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt(">>",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3584 "parser.tab.c"
    break;

  case 240:
#line 706 "parser.y"
                                                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt(">>>",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3590 "parser.tab.c"
    break;

  case 241:
#line 707 "parser.y"
                                                        {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("&",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3596 "parser.tab.c"
    break;

  case 242:
#line 708 "parser.y"
                                                {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str());(yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("^",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3602 "parser.tab.c"
    break;

  case 243:
#line 709 "parser.y"
                                   {if(!first_parse){string t = find_in_scope((yyvsp[-2].item)->label,(yyvsp[-2].item)->label);strcpy((yyval.item)->type,expression_type(yylineno,t,(yyvsp[0].item)->type,(yyvsp[-1].item)->label).c_str()); (yyval.item)->i_number = (yyvsp[0].item)->i_number; string l = new_temporary(); emitt("",(yyvsp[-2].item)->temp_var,"",l,-1); string s = new_temporary(); emitt("|",l,(yyvsp[0].item)->temp_var,s,-1); emitt("",s,"",(yyvsp[-2].item)->temp_var,-1);}}
#line 3608 "parser.tab.c"
    break;

  case 244:
#line 713 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3614 "parser.tab.c"
    break;

  case 245:
#line 714 "parser.y"
                                                                                {if(!first_parse){string s = (yyvsp[-4].item)->type; if(s!="boolean"){cout<<"First expression has to be boolean"<<endl;exit(1);}; backpatch((yyvsp[-4].item)->true_list,(yyvsp[-2].item)->i_number);}}
#line 3620 "parser.tab.c"
    break;

  case 246:
#line 718 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3626 "parser.tab.c"
    break;

  case 247:
#line 719 "parser.y"
                                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());backpatch((yyvsp[-2].item)->false_list,(yyvsp[0].item)->i_number);(yyval.item)->false_list = (yyvsp[0].item)->false_list; (yyval.item)->true_list = merge((yyvsp[-2].item)->true_list,(yyvsp[0].item)->true_list);(yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3632 "parser.tab.c"
    break;

  case 248:
#line 723 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3638 "parser.tab.c"
    break;

  case 249:
#line 724 "parser.y"
                                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());backpatch((yyvsp[-2].item)->true_list,(yyvsp[0].item)->i_number);(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = merge((yyvsp[-2].item)->false_list,(yyvsp[0].item)->false_list);(yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3644 "parser.tab.c"
    break;

  case 250:
#line 728 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3650 "parser.tab.c"
    break;

  case 251:
#line 729 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());  string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3656 "parser.tab.c"
    break;

  case 252:
#line 733 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3662 "parser.tab.c"
    break;

  case 253:
#line 734 "parser.y"
                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());  string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3668 "parser.tab.c"
    break;

  case 254:
#line 738 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3674 "parser.tab.c"
    break;

  case 255:
#line 739 "parser.y"
                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());  string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3680 "parser.tab.c"
    break;

  case 256:
#line 743 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->true_list = (yyvsp[0].item)->true_list; (yyval.item)->false_list = (yyvsp[0].item)->false_list;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3686 "parser.tab.c"
    break;

  case 257:
#line 744 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());char pp[1000] = " "; char qq[1000] = " "; emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat(qq,strcat((yyvsp[-1].item)->label,strcat(pp,(yyvsp[0].item)->temp_var)))),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3692 "parser.tab.c"
    break;

  case 258:
#line 745 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());char pp[1000] = " "; char qq[1000] = " "; emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat(qq,strcat((yyvsp[-1].item)->label,strcat(pp,(yyvsp[0].item)->temp_var)))),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3698 "parser.tab.c"
    break;

  case 259:
#line 749 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var); (yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3704 "parser.tab.c"
    break;

  case 260:
#line 750 "parser.y"
                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str()); char pp[1000] = " "; char qq[1000] = " ";  emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat(qq,strcat((yyvsp[-1].item)->label,strcat(pp,(yyvsp[0].item)->temp_var)))),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3710 "parser.tab.c"
    break;

  case 261:
#line 751 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());char pp[1000] = " "; char qq[1000] = " "; emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat(qq,strcat((yyvsp[-1].item)->label,strcat(pp,(yyvsp[0].item)->temp_var)))),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3716 "parser.tab.c"
    break;

  case 262:
#line 752 "parser.y"
                                                                {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());char pp[1000] = " "; char qq[1000] = " "; emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat(qq,strcat((yyvsp[-1].item)->label,strcat(pp,(yyvsp[0].item)->temp_var)))),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3722 "parser.tab.c"
    break;

  case 263:
#line 753 "parser.y"
                                                            {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());char pp[1000] = " "; char qq[1000] = " "; emitt("if",strcat((yyvsp[-2].item)->temp_var,strcat(qq,strcat((yyvsp[-1].item)->label,strcat(pp,(yyvsp[0].item)->temp_var)))),"","goto",-1);(yyval.item)->true_list.push_back(inst_num-1);emitt("","","","goto",-1); (yyval.item)->false_list.push_back(inst_num-1); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3728 "parser.tab.c"
    break;

  case 264:
#line 757 "parser.y"
                                {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3734 "parser.tab.c"
    break;

  case 265:
#line 758 "parser.y"
                                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str()); string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3740 "parser.tab.c"
    break;

  case 266:
#line 759 "parser.y"
                                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str()); string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3746 "parser.tab.c"
    break;

  case 267:
#line 760 "parser.y"
                                                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str()); string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3752 "parser.tab.c"
    break;

  case 268:
#line 764 "parser.y"
                            {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3758 "parser.tab.c"
    break;

  case 269:
#line 765 "parser.y"
                                                            {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());  string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3764 "parser.tab.c"
    break;

  case 270:
#line 766 "parser.y"
                                                            {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());  string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3770 "parser.tab.c"
    break;

  case 271:
#line 770 "parser.y"
                        {if(!first_parse){strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3776 "parser.tab.c"
    break;

  case 272:
#line 771 "parser.y"
                                                    {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());  string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3782 "parser.tab.c"
    break;

  case 273:
#line 772 "parser.y"
                                                    {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());  string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3788 "parser.tab.c"
    break;

  case 274:
#line 773 "parser.y"
                                                        {if(!first_parse){string t = expression_type(yylineno,(yyvsp[-2].item)->type,(yyvsp[0].item)->type,(yyvsp[-1].item)->label); strcpy((yyval.item)->type,t.c_str());  string l = new_temporary(); emitt((yyvsp[-1].item)->label,(yyvsp[-2].item)->temp_var,(yyvsp[0].item)->temp_var,l,-1); strcpy((yyval.item)->temp_var,l.c_str()); (yyval.item)->i_number = (yyvsp[-2].item)->i_number;}}
#line 3794 "parser.tab.c"
    break;

  case 275:
#line 777 "parser.y"
                                    {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3800 "parser.tab.c"
    break;

  case 276:
#line 778 "parser.y"
                                        {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3806 "parser.tab.c"
    break;

  case 277:
#line 779 "parser.y"
                                    {if(!first_parse){string t = expression_type(yylineno,(yyvsp[0].item)->type,"",(yyvsp[-1].item)->label); (yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,t.c_str());strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[-1].item)->i_number;}}
#line 3812 "parser.tab.c"
    break;

  case 278:
#line 780 "parser.y"
                                    {if(!first_parse){string t = expression_type(yylineno,(yyvsp[0].item)->type,"",(yyvsp[-1].item)->label); (yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,t.c_str());t = new_temporary(); emitt((yyvsp[-1].item)->label,"",(yyvsp[0].item)->temp_var,t,-1); strcpy((yyval.item)->temp_var,t.c_str());(yyval.item)->i_number = (yyvsp[-1].item)->i_number;}}
#line 3818 "parser.tab.c"
    break;

  case 279:
#line 781 "parser.y"
                                {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3824 "parser.tab.c"
    break;

  case 280:
#line 785 "parser.y"
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
#line 3845 "parser.tab.c"
    break;

  case 281:
#line 804 "parser.y"
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
#line 3866 "parser.tab.c"
    break;

  case 282:
#line 823 "parser.y"
                        {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type); strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3872 "parser.tab.c"
    break;

  case 283:
#line 824 "parser.y"
                                    {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type); string p = new_temporary(); emitt("~","",(yyvsp[0].item)->temp_var,p,-1); strcpy((yyval.item)->temp_var,p.c_str());(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3878 "parser.tab.c"
    break;

  case 284:
#line 825 "parser.y"
                                        {if(!first_parse){string t = (yyvsp[0].item)->type; if(t!="boolean"){cout<<"! operation only allowed on boolean in line number "<<yylineno<<endl; exit(1);}else{strcpy((yyval.item)->type,(yyvsp[0].item)->type);} (yyval.item)->true_list = (yyvsp[0].item)->false_list; (yyval.item)->false_list = (yyvsp[0].item)->true_list; (yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3884 "parser.tab.c"
    break;

  case 290:
#line 837 "parser.y"
                                    {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;(yyval.item)->dimension = (yyvsp[0].item)->dimension;}}
#line 3890 "parser.tab.c"
    break;

  case 291:
#line 838 "parser.y"
                                        {if(!first_parse){(yyval.item)->lit = false; strcpy((yyval.item)->type,find_in_scope((yyvsp[0].item)->label,(yyvsp[0].item)->label).c_str()); (yyval.item)->i_number = inst_num; string l = new_temporary(); emitt("",get_base_offset((yyvsp[0].item)->label),"",l,-1); strcpy((yyval.item)->temp_var,l.c_str()); strcpy((yyval.item)->label,(yyvsp[0].item)->label);}}
#line 3896 "parser.tab.c"
    break;

  case 292:
#line 839 "parser.y"
                                        {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3902 "parser.tab.c"
    break;

  case 293:
#line 840 "parser.y"
                                        {if(!first_parse){(yyval.item)->lit = (yyvsp[0].item)->lit; strcpy((yyval.item)->type,(yyvsp[0].item)->type);strcpy((yyval.item)->temp_var,(yyvsp[0].item)->temp_var);(yyval.item)->i_number = (yyvsp[0].item)->i_number;}}
#line 3908 "parser.tab.c"
    break;

  case 294:
#line 844 "parser.y"
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
    emitt("",(yyvsp[-1].item)->temp_var,"",get_base_offset((yyvsp[-1].item)->label),-1);
    strcpy((yyval.item)->temp_var,(yyvsp[-1].item)->temp_var);
    (yyval.item)->i_number = (yyvsp[-1].item)->i_number;
}
}
#line 3928 "parser.tab.c"
    break;

  case 295:
#line 862 "parser.y"
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
    emitt("",(yyvsp[-1].item)->temp_var,"",get_base_offset((yyvsp[-1].item)->label),-1);
    strcpy((yyval.item)->temp_var,(yyvsp[-1].item)->temp_var);
    (yyval.item)->i_number = (yyvsp[-1].item)->i_number;
    }
}
#line 3948 "parser.tab.c"
    break;


#line 3952 "parser.tab.c"

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
