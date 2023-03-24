/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SRC_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/parser.y"

#include <stdio.h>
#include <string.h>
#include "ast.hpp"

#include <cassert>

extern const ASTNode *g_root;
extern FILE *yyin;

int yylex(void);
void yyerror(const char *);


#line 64 "src/parser.tab.hpp"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT_LITERAL = 258,             /* INT_LITERAL  */
    FLOAT_LITERAL = 259,           /* FLOAT_LITERAL  */
    IDENTIFIER = 260,              /* IDENTIFIER  */
    CONSTANT = 261,                /* CONSTANT  */
    STRING_LITERAL = 262,          /* STRING_LITERAL  */
    SIZEOF = 263,                  /* SIZEOF  */
    PTR_OP = 264,                  /* PTR_OP  */
    INC_OP = 265,                  /* INC_OP  */
    DEC_OP = 266,                  /* DEC_OP  */
    LEFT_OP = 267,                 /* LEFT_OP  */
    RIGHT_OP = 268,                /* RIGHT_OP  */
    LE_OP = 269,                   /* LE_OP  */
    GE_OP = 270,                   /* GE_OP  */
    EQ_OP = 271,                   /* EQ_OP  */
    NE_OP = 272,                   /* NE_OP  */
    AND_OP = 273,                  /* AND_OP  */
    OR_OP = 274,                   /* OR_OP  */
    MUL_ASSIGN = 275,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 276,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 277,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 278,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 279,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 280,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 281,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 282,              /* AND_ASSIGN  */
    XOR_ASSIGN = 283,              /* XOR_ASSIGN  */
    OR_ASSIGN = 284,               /* OR_ASSIGN  */
    TYPE_NAME = 285,               /* TYPE_NAME  */
    TYPEDEF = 286,                 /* TYPEDEF  */
    EXTERN = 287,                  /* EXTERN  */
    STATIC = 288,                  /* STATIC  */
    AUTO = 289,                    /* AUTO  */
    REGISTER = 290,                /* REGISTER  */
    CHAR = 291,                    /* CHAR  */
    SHORT = 292,                   /* SHORT  */
    INT = 293,                     /* INT  */
    LONG = 294,                    /* LONG  */
    SIGNED = 295,                  /* SIGNED  */
    UNSIGNED = 296,                /* UNSIGNED  */
    FLOAT = 297,                   /* FLOAT  */
    DOUBLE = 298,                  /* DOUBLE  */
    CONST = 299,                   /* CONST  */
    VOLATILE = 300,                /* VOLATILE  */
    VOID = 301,                    /* VOID  */
    STRUCT = 302,                  /* STRUCT  */
    UNION = 303,                   /* UNION  */
    ENUM = 304,                    /* ENUM  */
    ELLIPSIS = 305,                /* ELLIPSIS  */
    CASE = 306,                    /* CASE  */
    DEFAULT = 307,                 /* DEFAULT  */
    IF = 308,                      /* IF  */
    ELSE = 309,                    /* ELSE  */
    SWITCH = 310,                  /* SWITCH  */
    WHILE = 311,                   /* WHILE  */
    DO = 312,                      /* DO  */
    FOR = 313,                     /* FOR  */
    GOTO = 314,                    /* GOTO  */
    CONTINUE = 315,                /* CONTINUE  */
    BREAK = 316,                   /* BREAK  */
    RETURN = 317                   /* RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "src/parser.y"

  ASTNode *node;
  int number;
  std::string* string;
  Type* type_;
  makeScope* scoper;
  NodeList* listptr;
  DeclList* declList;
  initDeclarator* initDecl;
  double floatlit;
  char c;


#line 157 "src/parser.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_PARSER_TAB_HPP_INCLUDED  */
