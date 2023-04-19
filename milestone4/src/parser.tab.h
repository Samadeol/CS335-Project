/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 156 "parser.tab.h"

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
