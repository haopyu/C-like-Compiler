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
    BIT_XOR = 279,
    LPAREN = 280,
    RPAREN = 281,
    SEMICOLON = 282,
    ELLIPSIS = 283,
    SHIFT_RIGHT = 284,
    SHIFT_LEFT = 285,
    INC = 286,
    DEC = 287,
    PTR = 288,
    AND = 289,
    OR = 290,
    LE = 291,
    GE = 292,
    EQ = 293,
    NE = 294,
    LBRACE = 295,
    RBRACE = 296,
    COMMA = 297,
    COLON = 298,
    ASSIGN = 299,
    LBRACKET = 300,
    RBRACKET = 301,
    DOT = 302,
    BIT_AND = 303,
    NOT = 304,
    NEGATION = 305,
    MOD = 306,
    LT = 307,
    GT = 308,
    BIT_OR = 309,
    QM = 310,
    SHIFT_LEFT_ASSIGN = 311,
    SHIFT_RIGHT_ASSIGN = 312,
    AND_ASSIGN = 313,
    MUL_ASSIGN = 314,
    DIV_ASSIGN = 315,
    MOD_ASSIGN = 316,
    ADD_ASSIGN = 317,
    SUB_ASSIGN = 318,
    XOR_ASSIGN = 319,
    OR_ASSIGN = 320,
    TYPEDEF_NAME = 321,
    TYPEDEF = 322,
    EXTERN = 323,
    STATIC = 324,
    AUTO = 325,
    REGISTER = 326,
    INLINE = 327,
    CONST = 328,
    RESTRICT = 329,
    VOLATILE = 330,
    BOOL = 331,
    CHAR = 332,
    SHORT = 333,
    INT = 334,
    LONG = 335,
    SIGNED = 336,
    UNSIGNED = 337,
    FLOAT = 338,
    DOUBLE = 339,
    VOID = 340,
    STRUCT = 341,
    UNION = 342,
    ENUM = 343
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "compiler.y" /* yacc.c:1909  */
 int val_int; float val_float; String val_str; int type; AST * tree; 

#line 146 "compiler.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILER_TAB_H_INCLUDED  */
