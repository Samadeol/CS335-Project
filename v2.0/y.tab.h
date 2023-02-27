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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    PERCENT = 313,
    PERCENT_EQUALS = 314,
    PERMITS = 315,
    PLUS = 316,
    PLUS_EQUALS = 317,
    PLUS_PLUS = 318,
    POWER = 319,
    POWER_EQUALS = 320,
    PRIVATE = 321,
    PUBLIC = 322,
    QUESTION = 323,
    RETURN = 324,
    RIGHT_CURLY_BRACE = 325,
    RIGHT_PARANTHESIS = 326,
    RIGHT_SQUARE_BRACE = 327,
    SEMI_COLON = 328,
    SLASH = 329,
    SLASH_EQUALS = 330,
    STAR = 331,
    STAR_EQUALS = 332,
    STATIC = 333,
    STRING_LITERAL = 334,
    SUPER = 335,
    SYNCHRONIZED = 336,
    TEXTBLOCK = 337,
    THIS = 338,
    THROW = 339,
    THROWS = 340,
    TILDA = 341,
    TRY = 342,
    VAR = 343,
    VOID = 344,
    WHILE = 345,
    YIELD = 346
  };
#endif
/* Tokens.  */
#define AMPERSAND 258
#define AMPERSAND_AMPERSAND 259
#define AMPERSAND_EQUALS 260
#define ARROW_RIGHT 261
#define ASSERT 262
#define BAR 263
#define BAR_BAR 264
#define BAR_EQUALS 265
#define BOOLEAN_LITERAL 266
#define BOOLEAN_TYPE 267
#define BREAK 268
#define CATCH 269
#define CHARACTER_LITERAL 270
#define CLASS 271
#define COLON 272
#define COMMA 273
#define CONTINUE 274
#define DOT 275
#define DOUBLE_COLON 276
#define ELSE 277
#define EQUALS 278
#define EQUALS_EQUALS 279
#define EXCLAIM 280
#define EXCLAIM_EQUALS 281
#define EXTENDS 282
#define FINAL 283
#define FINALLY 284
#define FLOATINGPOINT_LITERAL 285
#define FLOAT_POINT_TYPE 286
#define FOR 287
#define GREATER_THAN 288
#define GREATER_THAN_EQUALS 289
#define GREATER_THAN_GREATER_THAN 290
#define GREATER_THAN_GREATER_THAN_EQUALS 291
#define GREATER_THAN_GREATER_THAN_GREATER_THAN 292
#define GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS 293
#define IDENTIFIER 294
#define IF 295
#define IMPLEMENTS 296
#define IMPORT 297
#define INTEGER_LITERAL 298
#define INTEGRAL_TYPE 299
#define INTERFACE 300
#define LEFT_CURLY_BRACE 301
#define LEFT_PARANTHESIS 302
#define LEFT_SQUARE_BRACE 303
#define LESS_THAN 304
#define LESS_THAN_EQUALS 305
#define LESS_THAN_LESS_THAN 306
#define LESS_THAN_LESS_THAN_EQUALS 307
#define MINUS 308
#define MINUS_EQUALS 309
#define MINUS_MINUS 310
#define NEW 311
#define NULL_LITERAL 312
#define PERCENT 313
#define PERCENT_EQUALS 314
#define PERMITS 315
#define PLUS 316
#define PLUS_EQUALS 317
#define PLUS_PLUS 318
#define POWER 319
#define POWER_EQUALS 320
#define PRIVATE 321
#define PUBLIC 322
#define QUESTION 323
#define RETURN 324
#define RIGHT_CURLY_BRACE 325
#define RIGHT_PARANTHESIS 326
#define RIGHT_SQUARE_BRACE 327
#define SEMI_COLON 328
#define SLASH 329
#define SLASH_EQUALS 330
#define STAR 331
#define STAR_EQUALS 332
#define STATIC 333
#define STRING_LITERAL 334
#define SUPER 335
#define SYNCHRONIZED 336
#define TEXTBLOCK 337
#define THIS 338
#define THROW 339
#define THROWS 340
#define TILDA 341
#define TRY 342
#define VAR 343
#define VOID 344
#define WHILE 345
#define YIELD 346

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "parser.y"

    char[1000] str;

#line 243 "y.tab.h"

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
