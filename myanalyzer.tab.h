/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_MYANALYZER_TAB_H_INCLUDED
# define YY_YY_MYANALYZER_TAB_H_INCLUDED
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
    TK_ID = 258,
    TK_INT_POS_CONST = 259,
    TK_REAL_POST_CONST = 260,
    TK_ASSGN = 261,
    TK_OPEN_PARENTHESIS = 262,
    TK_CLOSE_PARENTHESIS = 263,
    TK_SEMICOLON = 264,
    TK_CONST_STR = 265,
    TK_CONST_CHAR = 266,
    TK_KW_STATIC = 267,
    TK_KW_BOOLEAN = 268,
    TK_KW_INTEGER = 269,
    TK_KW_CHARACTER = 270,
    TK_KW_REAL = 271,
    TK_KW_VOID = 272,
    TK_KW_MAIN = 273,
    TK_KW_TRUE = 274,
    TK_KW_FALSE = 275,
    TK_KW_STRING = 276,
    TK_KW_WHILE = 277,
    TK_KW_DO = 278,
    TK_KW_BREAK = 279,
    TK_KW_CONTINUE = 280,
    TK_KW_RETURN = 281,
    TK_KW_BEGIN = 282,
    TK_KW_IF = 283,
    TK_KW_ELSE = 284,
    TK_KW_FOR = 285,
    TK_KW_END = 286,
    TK_KW_OR = 287,
    TK_KW_NOT = 288,
    TK_KW_AND = 289,
    TK_KW_MOD = 290,
    TK_OP_EQUAL = 291,
    TK_OP_EQUAL_GREATER = 292,
    TK_OP_EQUAL_SMALLER = 293,
    TK_OP_GREATER = 294,
    TK_OP_SMALLER = 295,
    TK_OP_EQUAL_NOT = 296,
    TK_OP_LO_AND = 297,
    TK_OP_LO_OR = 298,
    TK_OP_LO_NOT = 299,
    TK_OPEN_BRACKET = 300,
    TK_CLOSE_BRACKET = 301,
    TK_COMMA = 302,
    FCLIB_READ_STRING = 303,
    FCLIB_READ_INTEGER = 304,
    FCLIB_READ_REAL = 305,
    FCLIB_WRITE_STRING = 306,
    FCLIB_WRITE_INTEGER = 307,
    FCLIB_WRITE_REAL = 308,
    TK_OP_PLUS = 309,
    TK_OP_MINUS = 310,
    TK_OP_MULT = 311,
    TK_OP_DIV = 312,
    UNARYMINUS = 313,
    UNARYPLUS = 314,
    NO_ELSE = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "myanalyzer.y" /* yacc.c:1909  */

  char* str;

#line 119 "myanalyzer.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */
