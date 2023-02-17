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

#ifndef YY_YY_COMPILE_TAB_H_INCLUDED
# define YY_YY_COMPILE_TAB_H_INCLUDED
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
    AND = 258,
    AND_AND = 259,
    ASSERT = 260,
    ASSIGNMENT_OPERATORS = 261,
    ASTERISK = 262,
    ATR = 263,
    BAR = 264,
    BOOLEAN = 265,
    BOOLEAN_TYPE = 266,
    BREAK = 267,
    CATCH = 268,
    CLASS = 269,
    COLON = 270,
    COLONTWICE = 271,
    COMMA = 272,
    CONTINUE = 273,
    CURLY_LEFT = 274,
    CURLY_RIGHT = 275,
    DOT = 276,
    ELSE = 277,
    ENUM = 278,
    EQUALS = 279,
    EQUAL_EQUAL = 280,
    EXCLAIM = 281,
    EXCLAIM_EQUAL = 282,
    EXTENDS = 283,
    FINAL = 284,
    FINALLY = 285,
    FLOAT_POINT_TYPE = 286,
    FOR = 287,
    GREATER = 288,
    GREATER_EQUAL = 289,
    GREATER_GREATER = 290,
    GREATER_GREATER_GREATER = 291,
    IDENTIFIER = 292,
    IF = 293,
    IMPLEMENTS = 294,
    INSTANCEOF = 295,
    INTEGRAL_TYPE = 296,
    LARROW = 297,
    LEFTARROW = 298,
    LESS = 299,
    LESS_EQUAL = 300,
    LESS_LESS = 301,
    LITERAL = 302,
    MINUS = 303,
    MINUS_MINUS = 304,
    NEW = 305,
    OR = 306,
    OR_OR = 307,
    PARA_LEFT = 308,
    PARA_RIGHT = 309,
    PERCENT = 310,
    PERMITS = 311,
    PLUS = 312,
    PLUS_PLUS = 313,
    POWER = 314,
    PRIVATE = 315,
    PUBLIC = 316,
    QUESTION = 317,
    RARROW = 318,
    RECORD = 319,
    RETURN = 320,
    SEMI_COLON = 321,
    SLASH = 322,
    SQUARE_LEFT = 323,
    SQUARE_RIGHT = 324,
    STATIC = 325,
    SUPER = 326,
    SYNCHRONIZED = 327,
    THIS = 328,
    THROW = 329,
    THROWS = 330,
    TILDE = 331,
    TRY = 332,
    VAR = 333,
    VOID = 334,
    WHILE = 335,
    YIELD = 336
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "compile.y"


char[100] s;


#line 145 "compile.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILE_TAB_H_INCLUDED  */
