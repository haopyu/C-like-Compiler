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

#ifndef YY_YY_COMPILER_TAB_H_INCLUDED
# define YY_YY_COMPILER_TAB_H_INCLUDED
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
    CASE = 258,
    DEFAULT = 259,
    IF = 260,
    ELSE = 261,
    SWITCH = 262,
    WHILE = 263,
    DO = 264,
    FOR = 265,
    GOTO = 266,
    CONTINUE = 267,
    BREAK = 268,
    RETURN = 269,
    SIZEOF = 270,
    INT_CONST = 271,
    FLOAT_CONST = 272,
    IDENTIFIER = 273,
    STRING = 274,
    ADD = 275,
    SUB = 276,
    MUL = 277,
    DIV = 278,
    POWER = 279,
    LPAREN = 280,
    RPAREN = 281,
    SEMICOLON = 282,
    SHIFT_RIGHT = 283,
    SHIFT_LEFT = 284,
    INC = 285,
    DEC = 286,
    PTR = 287,
    AND = 288,
    OR = 289,
    LE = 290,
    GE = 291,
    EQ = 292,
    NE = 293,
    LBRACE = 294,
    RBRACE = 295,
    COMMA = 296,
    COLON = 297,
    ASSIGN = 298,
    LBRACKET = 299,
    RBRACKET = 300,
    DOT = 301,
    BIT_AND = 302,
    NOT = 303,
    NEGATION = 304,
    MOD = 305,
    LT = 306,
    GT = 307,
    BIT_OR = 308,
    QM = 309,
    SHIFT_LEFT_ASSIGN = 310,
    SHIFT_RIGHT_ASSIGN = 311,
    AND_ASSIGN = 312,
    MUL_ASSIGN = 313,
    DIV_ASSIGN = 314,
    MOD_ASSIGN = 315,
    ADD_ASSIGN = 316,
    SUB_ASSIGN = 317,
    XOR_ASSIGN = 318,
    OR_ASSIGN = 319,
    TYPEDEF = 320,
    EXTERN = 321,
    STATIC = 322,
    AUTO = 323,
    REGISTER = 324,
    INLINE = 325,
    CONST = 326,
    RESTRICT = 327,
    VOLATILE = 328,
    BOOL = 329,
    CHAR = 330,
    SHORT = 331,
    INT = 332,
    LONG = 333,
    SIGNED = 334,
    UNSIGNED = 335,
    FLOAT = 336,
    DOUBLE = 337,
    VOID = 338,
    STRUCT = 339,
    UNION = 340,
    ENUM = 341,
    UMINUS = 342
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 7 "compiler.y" /* yacc.c:1909  */
 AST *val; int type; 

#line 145 "compiler.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILER_TAB_H_INCLUDED  */
