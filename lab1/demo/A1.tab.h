/* A Bison parser, made by GNU Bison 3.7.5.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_A1_TAB_H_INCLUDED
# define YY_YY_A1_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    DEFEXPR = 258,                 /* DEFEXPR  */
    DEFEXPR0 = 259,                /* DEFEXPR0  */
    DEFEXPR1 = 260,                /* DEFEXPR1  */
    DEFEXPR2 = 261,                /* DEFEXPR2  */
    DEFSTMT = 262,                 /* DEFSTMT  */
    DEFSTMT0 = 263,                /* DEFSTMT0  */
    DEFSTMT1 = 264,                /* DEFSTMT1  */
    DEFSTMT2 = 265,                /* DEFSTMT2  */
    IF = 266,                      /* IF  */
    ELSE = 267,                    /* ELSE  */
    WHILE = 268,                   /* WHILE  */
    NEW = 269,                     /* NEW  */
    CLASS = 270,                   /* CLASS  */
    PUBLIC = 271,                  /* PUBLIC  */
    STATICVOIDMAIN = 272,          /* STATICVOIDMAIN  */
    THIS = 273,                    /* THIS  */
    RETURN = 274,                  /* RETURN  */
    EXTENDS = 275,                 /* EXTENDS  */
    LENGTH = 276,                  /* LENGTH  */
    SYSOUT = 277,                  /* SYSOUT  */
    INT = 278,                     /* INT  */
    BOOLEAN = 279,                 /* BOOLEAN  */
    STRING = 280,                  /* STRING  */
    TRUE = 281,                    /* TRUE  */
    FALSE = 282,                   /* FALSE  */
    ID = 283,                      /* ID  */
    INTEGER = 284,                 /* INTEGER  */
    OP = 285,                      /* OP  */
    DOT = 286,                     /* DOT  */
    COMMA = 287,                   /* COMMA  */
    SEMI = 288,                    /* SEMI  */
    BANG = 289,                    /* BANG  */
    EQ = 290,                      /* EQ  */
    LROUND = 291,                  /* LROUND  */
    RROUND = 292,                  /* RROUND  */
    LCURLY = 293,                  /* LCURLY  */
    RCURLY = 294,                  /* RCURLY  */
    LBOX = 295,                    /* LBOX  */
    RBOX = 296                     /* RBOX  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "A1.y"

	char *s;

#line 109 "A1.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_A1_TAB_H_INCLUDED  */
