/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "A1.y"

#include<stdio.h>
#include<string.h>

char* macroID[20];
char* macroVal[20];
int numMacros = 0;
void defMacro(char*,char*);
int valMacro(char*);

#line 82 "A1.tab.c"

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

#include "A1.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DEFEXPR = 3,                    /* DEFEXPR  */
  YYSYMBOL_DEFEXPR0 = 4,                   /* DEFEXPR0  */
  YYSYMBOL_DEFEXPR1 = 5,                   /* DEFEXPR1  */
  YYSYMBOL_DEFEXPR2 = 6,                   /* DEFEXPR2  */
  YYSYMBOL_DEFSTMT = 7,                    /* DEFSTMT  */
  YYSYMBOL_DEFSTMT0 = 8,                   /* DEFSTMT0  */
  YYSYMBOL_DEFSTMT1 = 9,                   /* DEFSTMT1  */
  YYSYMBOL_DEFSTMT2 = 10,                  /* DEFSTMT2  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_WHILE = 13,                     /* WHILE  */
  YYSYMBOL_NEW = 14,                       /* NEW  */
  YYSYMBOL_CLASS = 15,                     /* CLASS  */
  YYSYMBOL_PUBLIC = 16,                    /* PUBLIC  */
  YYSYMBOL_STATICVOIDMAIN = 17,            /* STATICVOIDMAIN  */
  YYSYMBOL_THIS = 18,                      /* THIS  */
  YYSYMBOL_RETURN = 19,                    /* RETURN  */
  YYSYMBOL_EXTENDS = 20,                   /* EXTENDS  */
  YYSYMBOL_LENGTH = 21,                    /* LENGTH  */
  YYSYMBOL_SYSOUT = 22,                    /* SYSOUT  */
  YYSYMBOL_INT = 23,                       /* INT  */
  YYSYMBOL_BOOLEAN = 24,                   /* BOOLEAN  */
  YYSYMBOL_STRING = 25,                    /* STRING  */
  YYSYMBOL_TRUE = 26,                      /* TRUE  */
  YYSYMBOL_FALSE = 27,                     /* FALSE  */
  YYSYMBOL_ID = 28,                        /* ID  */
  YYSYMBOL_INTEGER = 29,                   /* INTEGER  */
  YYSYMBOL_OP = 30,                        /* OP  */
  YYSYMBOL_DOT = 31,                       /* DOT  */
  YYSYMBOL_COMMA = 32,                     /* COMMA  */
  YYSYMBOL_SEMI = 33,                      /* SEMI  */
  YYSYMBOL_BANG = 34,                      /* BANG  */
  YYSYMBOL_EQ = 35,                        /* EQ  */
  YYSYMBOL_LROUND = 36,                    /* LROUND  */
  YYSYMBOL_RROUND = 37,                    /* RROUND  */
  YYSYMBOL_LCURLY = 38,                    /* LCURLY  */
  YYSYMBOL_RCURLY = 39,                    /* RCURLY  */
  YYSYMBOL_LBOX = 40,                      /* LBOX  */
  YYSYMBOL_RBOX = 41,                      /* RBOX  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_Goal = 43,                      /* Goal  */
  YYSYMBOL_MacroDefinitions = 44,          /* MacroDefinitions  */
  YYSYMBOL_MacroDefinition = 45,           /* MacroDefinition  */
  YYSYMBOL_MainClass = 46,                 /* MainClass  */
  YYSYMBOL_TypeDeclarations = 47,          /* TypeDeclarations  */
  YYSYMBOL_TypeDeclaration = 48,           /* TypeDeclaration  */
  YYSYMBOL_TypeDeclarationBody = 49,       /* TypeDeclarationBody  */
  YYSYMBOL_MethodDeclarations = 50,        /* MethodDeclarations  */
  YYSYMBOL_MethodDeclaration = 51,         /* MethodDeclaration  */
  YYSYMBOL_MethodDeclarationBody = 52,     /* MethodDeclarationBody  */
  YYSYMBOL_MacroDefExpression = 53,        /* MacroDefExpression  */
  YYSYMBOL_MacroDefStatement = 54,         /* MacroDefStatement  */
  YYSYMBOL_Statements = 55,                /* Statements  */
  YYSYMBOL_Statement = 56,                 /* Statement  */
  YYSYMBOL_Expressions = 57,               /* Expressions  */
  YYSYMBOL_Expression = 58,                /* Expression  */
  YYSYMBOL_PrimaryExpression = 59,         /* PrimaryExpression  */
  YYSYMBOL_TypeIDs = 60,                   /* TypeIDs  */
  YYSYMBOL_Type = 61,                      /* Type  */
  YYSYMBOL_IDs = 62                        /* IDs  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_uint8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   271

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  243

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    37,    37,    46,    48,    57,    62,    69,   102,   104,
     112,   125,   144,   153,   160,   162,   170,   192,   220,   229,
     237,   251,   264,   280,   302,   316,   329,   345,   367,   369,
     377,   386,   396,   405,   417,   428,   443,   453,   462,   475,
     477,   487,   494,   502,   509,   514,   523,   534,   542,   553,
     558,   563,   568,   573,   578,   588,   597,   603,   612,   614,
     626,   634,   640,   646,   654,   656
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "DEFEXPR", "DEFEXPR0",
  "DEFEXPR1", "DEFEXPR2", "DEFSTMT", "DEFSTMT0", "DEFSTMT1", "DEFSTMT2",
  "IF", "ELSE", "WHILE", "NEW", "CLASS", "PUBLIC", "STATICVOIDMAIN",
  "THIS", "RETURN", "EXTENDS", "LENGTH", "SYSOUT", "INT", "BOOLEAN",
  "STRING", "TRUE", "FALSE", "ID", "INTEGER", "OP", "DOT", "COMMA", "SEMI",
  "BANG", "EQ", "LROUND", "RROUND", "LCURLY", "RCURLY", "LBOX", "RBOX",
  "$accept", "Goal", "MacroDefinitions", "MacroDefinition", "MainClass",
  "TypeDeclarations", "TypeDeclaration", "TypeDeclarationBody",
  "MethodDeclarations", "MethodDeclaration", "MethodDeclarationBody",
  "MacroDefExpression", "MacroDefStatement", "Statements", "Statement",
  "Expressions", "Expression", "PrimaryExpression", "TypeIDs", "Type",
  "IDs", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
#endif

#define YYPACT_NINF (-211)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     170,   -14,    27,    28,    39,    40,    43,    47,    49,    25,
      66,   170,  -211,  -211,    46,    59,    62,    67,    68,    71,
      72,    73,  -211,    55,    70,  -211,    82,    74,    84,    85,
      90,    86,    91,   100,    93,   101,  -211,    70,   102,    97,
      98,   104,   105,   106,   110,   119,   126,   -15,  -211,   125,
     112,   120,   127,   129,    38,   121,   130,   143,   138,    77,
     135,   -12,  -211,  -211,  -211,   133,  -211,   112,   112,   134,
      -3,   112,   144,   150,   147,   148,   149,    17,    38,   151,
      38,    38,   152,   155,   154,    56,   146,  -211,  -211,   156,
    -211,   171,   160,   165,   157,   158,    36,  -211,   159,  -211,
     136,    10,   136,   161,   163,   172,   112,   112,   112,   112,
      60,   112,   162,  -211,  -211,   164,   166,   177,    77,   178,
     167,  -211,  -211,   174,   173,   112,   175,  -211,   179,  -211,
    -211,  -211,  -211,   180,   168,  -211,   112,   173,   176,   181,
     182,   184,   187,   179,   169,  -211,  -211,    38,   183,   185,
     186,  -211,    77,   193,   188,   189,  -211,   112,   190,    88,
    -211,   191,   192,    38,    38,   198,  -211,  -211,   195,   199,
     194,   196,  -211,    -2,  -211,   173,   200,  -211,   179,  -211,
    -211,   179,  -211,   197,   202,  -211,  -211,   205,   112,  -211,
     211,   203,   212,  -211,   112,  -211,   206,    38,    38,  -211,
     209,   207,    -4,   213,   210,  -211,   214,  -211,  -211,   208,
      17,   229,  -211,   221,    56,   215,  -211,  -211,   204,   112,
     217,   223,   216,   219,   224,    -4,   213,    -4,   112,   220,
    -211,  -211,   237,   225,  -211,   112,   227,   228,   226,   230,
     231,  -211,  -211
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     5,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     8,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,    14,
       0,     0,    53,    50,    51,    52,    49,     0,     0,     0,
      44,     0,     0,     0,     0,     0,     0,     0,    28,     0,
      28,    28,     0,     0,     0,     0,    62,    61,    63,     0,
      13,    14,     0,     0,     0,     0,     0,    56,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    29,     0,     0,     0,    14,     0,
       0,    10,    15,     0,    64,     0,     0,    47,    39,    57,
      52,    41,    43,     0,     0,    21,     0,    64,     0,     0,
       0,     0,     0,    39,     0,    30,    25,    28,     0,     0,
       0,    60,    14,     0,     0,     0,    55,     0,     0,     0,
      42,     0,     0,     0,     0,     0,    32,    37,     0,     0,
       0,     0,    11,     0,    12,    64,     0,    54,    39,    48,
      45,    39,    22,     0,    34,    36,    31,     0,     0,    26,
       0,     0,     0,    65,     0,    40,     0,    28,     0,    38,
       0,     0,    28,    58,     0,    46,     0,    35,    33,     0,
      63,     0,    19,     0,     0,     0,    23,    27,     0,     0,
       0,     0,     0,     0,     0,    28,    58,    28,     0,     0,
      18,    59,     0,     0,    16,     0,     0,     0,     0,     0,
       0,    17,     7
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -211,  -211,   247,  -211,  -211,   234,  -211,  -116,   124,  -211,
    -210,  -211,  -211,   -48,  -151,  -133,   -67,   -41,    37,   -82,
    -129
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     9,    10,    11,    24,    36,    37,    89,    90,    91,
     211,    12,    13,   212,    80,   158,    69,    70,   215,    92,
     154
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      97,    98,   149,   119,   103,    58,    79,    74,   162,    75,
     168,    94,   184,   185,    14,   230,    95,   232,    76,    86,
      87,    86,    87,    59,   210,    22,    88,   100,   101,   128,
     112,   132,   114,   115,    78,   191,   174,   102,   133,   138,
     139,   140,   141,   143,   144,   195,   193,   207,   196,    74,
      61,    75,   109,   110,    62,    15,    16,   111,   155,   131,
      76,   134,    63,    64,    65,    66,    77,    17,    18,   161,
      67,    19,    68,   127,    61,    20,    78,    21,    62,    86,
      87,    23,    26,    34,    88,    35,    63,    64,    65,    66,
     178,   192,   181,    85,    67,    27,    68,   142,    28,   170,
      86,    87,    61,    29,    30,    88,    62,    31,    32,    33,
      38,    39,    40,    41,    63,    64,    65,    66,    42,    44,
     213,   200,    67,    43,    68,   180,    61,   204,    45,    47,
      62,    46,   221,    50,    49,    51,    52,    53,    63,    64,
      65,    66,    57,   213,    54,   213,    67,    55,    68,   206,
      61,    56,   224,    60,    62,    72,    71,    73,    82,    81,
      83,   233,    63,    64,   130,    66,    84,    93,   237,    96,
      67,    99,    68,     1,     2,     3,     4,     5,     6,     7,
       8,   104,   105,   106,   107,   108,   120,    85,   123,   116,
     113,   117,   118,   124,   126,   121,   129,   125,   135,   136,
     137,   145,   148,   146,   147,   153,   150,   152,   151,   160,
     169,   157,   156,   163,   198,   122,   159,   166,   164,   165,
     167,   175,   173,   171,   172,   176,   223,   179,   182,   183,
     177,   186,   187,   189,   188,   197,   194,   190,   199,   201,
     203,   202,   208,   205,   209,   214,   218,   216,   219,   220,
     225,   226,   222,   217,   227,   228,   235,   229,    25,   234,
     238,   239,   236,   231,     0,   240,     0,     0,     0,   241,
     242,    48
};

static const yytype_int16 yycheck[] =
{
      67,    68,   118,    85,    71,    20,    54,    11,   137,    13,
     143,    23,   163,   164,    28,   225,    28,   227,    22,    23,
      24,    23,    24,    38,    28,     0,    28,    30,    31,    96,
      78,    21,    80,    81,    38,    37,   152,    40,    28,   106,
     107,   108,   109,   110,   111,   178,   175,   198,   181,    11,
      14,    13,    35,    36,    18,    28,    28,    40,   125,   100,
      22,   102,    26,    27,    28,    29,    28,    28,    28,   136,
      34,    28,    36,    37,    14,    28,    38,    28,    18,    23,
      24,    15,    36,    28,    28,    15,    26,    27,    28,    29,
     157,   173,   159,    16,    34,    36,    36,    37,    36,   147,
      23,    24,    14,    36,    36,    28,    18,    36,    36,    36,
      28,    37,    28,    28,    26,    27,    28,    29,    28,    28,
     202,   188,    34,    37,    36,    37,    14,   194,    28,    28,
      18,    38,   214,    36,    32,    37,    32,    32,    26,    27,
      28,    29,    16,   225,    38,   227,    34,    37,    36,   197,
      14,    32,   219,    28,    18,    28,    36,    28,    28,    38,
      17,   228,    26,    27,    28,    29,    28,    32,   235,    36,
      34,    37,    36,     3,     4,     5,     6,     7,     8,     9,
      10,    37,    32,    36,    36,    36,    40,    16,    28,    37,
      39,    36,    38,    28,    36,    39,    37,    40,    37,    36,
      28,    39,    25,    39,    38,    32,    28,    33,    41,    41,
      41,    32,    37,    37,    12,    91,    36,    33,    37,    37,
      33,    28,    36,    40,    39,    37,    22,    37,    37,    37,
      41,    33,    37,    39,    35,    38,    36,    41,    33,    28,
      28,    38,    33,    37,    37,    32,    38,    37,    19,    28,
      33,    28,    37,    39,    38,    36,    19,    33,    11,    39,
      33,    33,    37,   226,    -1,    39,    -1,    -1,    -1,    39,
      39,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    43,
      44,    45,    53,    54,    28,    28,    28,    28,    28,    28,
      28,    28,     0,    15,    46,    44,    36,    36,    36,    36,
      36,    36,    36,    36,    28,    15,    47,    48,    28,    37,
      28,    28,    28,    37,    28,    28,    38,    28,    47,    32,
      36,    37,    32,    32,    38,    37,    32,    16,    20,    38,
      28,    14,    18,    26,    27,    28,    29,    34,    36,    58,
      59,    36,    28,    28,    11,    13,    22,    28,    38,    55,
      56,    38,    28,    17,    28,    16,    23,    24,    28,    49,
      50,    51,    61,    32,    23,    28,    36,    58,    58,    37,
      30,    31,    40,    58,    37,    32,    36,    36,    36,    35,
      36,    40,    55,    39,    55,    55,    37,    36,    38,    61,
      40,    39,    50,    28,    28,    40,    36,    37,    58,    37,
      28,    59,    21,    28,    59,    37,    36,    28,    58,    58,
      58,    58,    37,    58,    58,    39,    39,    38,    25,    49,
      28,    41,    33,    32,    62,    58,    37,    32,    57,    36,
      41,    58,    62,    37,    37,    37,    33,    33,    57,    41,
      55,    40,    39,    36,    49,    28,    37,    41,    58,    37,
      37,    58,    37,    37,    56,    56,    33,    37,    35,    39,
      41,    37,    61,    62,    36,    57,    57,    38,    12,    33,
      58,    28,    38,    28,    58,    37,    55,    56,    33,    37,
      28,    52,    55,    61,    32,    60,    37,    39,    38,    19,
      28,    61,    37,    22,    58,    33,    28,    38,    36,    33,
      52,    60,    52,    58,    39,    19,    37,    58,    33,    33,
      39,    39,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    47,    47,
      48,    48,    49,    49,    50,    50,    51,    51,    52,    52,
      53,    53,    53,    53,    54,    54,    54,    54,    55,    55,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    57,
      57,    58,    58,    58,    58,    58,    58,    58,    58,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    60,    60,
      61,    61,    61,    61,    62,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     2,     1,     1,    19,     0,     2,
       5,     7,     4,     1,     0,     2,    11,    14,     4,     1,
       7,     8,    10,    13,     7,     8,    10,    13,     0,     2,
       3,     5,     4,     7,     5,     7,     5,     4,     6,     0,
       3,     3,     4,     3,     1,     5,     7,     3,     5,     1,
       1,     1,     1,     1,     5,     4,     2,     3,     0,     4,
       3,     1,     1,     1,     0,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  YY_STACK_PRINT (yyss, yyssp);

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Goal: MacroDefinitions MainClass TypeDeclarations  */
#line 37 "A1.y"
                                                   {
		int len = strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
		printf("%s", (yyval.s));
	}
#line 1297 "A1.tab.c"
    break;

  case 3: /* MacroDefinitions: %empty  */
#line 46 "A1.y"
                   {	(yyval.s) = (char*) malloc(sizeof(char));
						(yyval.s)[0] = '\0'; }
#line 1304 "A1.tab.c"
    break;

  case 4: /* MacroDefinitions: MacroDefinition MacroDefinitions  */
#line 48 "A1.y"
                                           {
		int len = strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[0].s));
	}
#line 1317 "A1.tab.c"
    break;

  case 5: /* MacroDefinition: MacroDefExpression  */
#line 57 "A1.y"
                                     {
		int len = strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[0].s)); }
#line 1327 "A1.tab.c"
    break;

  case 6: /* MacroDefinition: MacroDefStatement  */
#line 62 "A1.y"
                            {
		int len = strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[0].s));
	}
#line 1338 "A1.tab.c"
    break;

  case 7: /* MainClass: CLASS ID LCURLY PUBLIC STATICVOIDMAIN LROUND STRING LBOX RBOX ID RROUND LCURLY SYSOUT LROUND Expression RROUND SEMI RCURLY RCURLY  */
#line 69 "A1.y"
                                                                                                                                              {
		int len = strlen((yyvsp[-18].s)) + strlen((yyvsp[-17].s)) + strlen((yyvsp[-16].s)) + strlen((yyvsp[-15].s)) + strlen((yyvsp[-14].s)) + strlen((yyvsp[-13].s)) + strlen((yyvsp[-12].s)) + strlen((yyvsp[-11].s)) + strlen((yyvsp[-10].s)) + strlen((yyvsp[-9].s)) + strlen((yyvsp[-8].s)) + strlen((yyvsp[-7].s)) + strlen((yyvsp[-6].s)) + strlen((yyvsp[-5].s)) + strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 6;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-18].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-17].s));
		strcat((yyval.s),(yyvsp[-16].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[-15].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-14].s));
		strcat((yyval.s),(yyvsp[-13].s));
		strcat((yyval.s),(yyvsp[-12].s));
		strcat((yyval.s),(yyvsp[-11].s));
		strcat((yyval.s),(yyvsp[-10].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-9].s));
		strcat((yyval.s),(yyvsp[-8].s));
		strcat((yyval.s),(yyvsp[-7].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[-6].s));
		strcat((yyval.s),(yyvsp[-5].s));
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[0].s));
		strcat((yyval.s),"\n");
	}
#line 1375 "A1.tab.c"
    break;

  case 8: /* TypeDeclarations: %empty  */
#line 102 "A1.y"
                   {	(yyval.s) = (char*) malloc(sizeof(char));
						(yyval.s)[0] = '\0'; }
#line 1382 "A1.tab.c"
    break;

  case 9: /* TypeDeclarations: TypeDeclaration TypeDeclarations  */
#line 104 "A1.y"
                                           {
		int len = strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
	}
#line 1394 "A1.tab.c"
    break;

  case 10: /* TypeDeclaration: CLASS ID LCURLY TypeDeclarationBody RCURLY  */
#line 112 "A1.y"
                                                             {
		int len = strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 4;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[0].s));
		strcat((yyval.s),"\n"); }
#line 1412 "A1.tab.c"
    break;

  case 11: /* TypeDeclaration: CLASS ID EXTENDS ID LCURLY TypeDeclarationBody RCURLY  */
#line 125 "A1.y"
                                                                {
		int len = strlen((yyvsp[-6].s)) + strlen((yyvsp[-5].s)) + strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 6;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-6].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-5].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[0].s));
		strcat((yyval.s),"\n");
	}
#line 1435 "A1.tab.c"
    break;

  case 12: /* TypeDeclarationBody: Type ID SEMI TypeDeclarationBody  */
#line 144 "A1.y"
                                                       {
		int len = strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); }
#line 1449 "A1.tab.c"
    break;

  case 13: /* TypeDeclarationBody: MethodDeclarations  */
#line 153 "A1.y"
                             {
		int len = strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[0].s));
	}
#line 1460 "A1.tab.c"
    break;

  case 14: /* MethodDeclarations: %empty  */
#line 160 "A1.y"
                     {	(yyval.s) = (char*) malloc(sizeof(char));
						(yyval.s)[0] = '\0'; }
#line 1467 "A1.tab.c"
    break;

  case 15: /* MethodDeclarations: MethodDeclaration MethodDeclarations  */
#line 162 "A1.y"
                                               {
		int len = strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
	}
#line 1479 "A1.tab.c"
    break;

  case 16: /* MethodDeclaration: PUBLIC Type ID LROUND RROUND LCURLY MethodDeclarationBody RETURN Expression SEMI RCURLY  */
#line 170 "A1.y"
                                                                                                            {
		int len = strlen((yyvsp[-10].s)) + strlen((yyvsp[-9].s)) + strlen((yyvsp[-8].s)) + strlen((yyvsp[-7].s)) + strlen((yyvsp[-6].s)) + strlen((yyvsp[-5].s)) + strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 7;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-10].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-9].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-8].s));
		strcat((yyval.s),(yyvsp[-7].s));
		strcat((yyval.s),(yyvsp[-6].s));
		strcat((yyval.s),(yyvsp[-5].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[0].s));
		strcat((yyval.s),"\n"); }
#line 1506 "A1.tab.c"
    break;

  case 17: /* MethodDeclaration: PUBLIC Type ID LROUND Type ID TypeIDs RROUND LCURLY MethodDeclarationBody RETURN Expression SEMI RCURLY  */
#line 192 "A1.y"
                                                                                                                  {
		int len = strlen((yyvsp[-13].s)) + strlen((yyvsp[-12].s)) + strlen((yyvsp[-11].s)) + strlen((yyvsp[-10].s)) + strlen((yyvsp[-9].s)) + strlen((yyvsp[-8].s)) + strlen((yyvsp[-7].s)) + strlen((yyvsp[-6].s)) + strlen((yyvsp[-5].s)) + strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 7;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-13].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-12].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-11].s));
		strcat((yyval.s),(yyvsp[-10].s));
		strcat((yyval.s),(yyvsp[-9].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-8].s));
		strcat((yyval.s),(yyvsp[-7].s));
		strcat((yyval.s),(yyvsp[-6].s));
		strcat((yyval.s),(yyvsp[-5].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[0].s));
		strcat((yyval.s),"\n");
	}
#line 1538 "A1.tab.c"
    break;

  case 18: /* MethodDeclarationBody: Type ID SEMI MethodDeclarationBody  */
#line 220 "A1.y"
                                                           {
		int len = strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); }
#line 1552 "A1.tab.c"
    break;

  case 19: /* MethodDeclarationBody: Statements  */
#line 229 "A1.y"
                     {
		int len = strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[0].s));
	}
#line 1564 "A1.tab.c"
    break;

  case 20: /* MacroDefExpression: DEFEXPR0 ID LROUND RROUND LROUND Expression RROUND  */
#line 237 "A1.y"
                                                                        {
		int len = strlen((yyvsp[-6].s)) + strlen((yyvsp[-5].s)) + strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-6].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-5].s));
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); 
		
		defMacro((yyvsp[-5].s), (yyvsp[-1].s)); }
#line 1583 "A1.tab.c"
    break;

  case 21: /* MacroDefExpression: DEFEXPR1 ID LROUND ID RROUND LROUND Expression RROUND  */
#line 251 "A1.y"
                                                                {
		int len = strlen((yyvsp[-7].s)) + strlen((yyvsp[-6].s)) + strlen((yyvsp[-5].s)) + strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-7].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-6].s));
		strcat((yyval.s),(yyvsp[-5].s));
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); }
#line 1601 "A1.tab.c"
    break;

  case 22: /* MacroDefExpression: DEFEXPR2 ID LROUND ID COMMA ID RROUND LROUND Expression RROUND  */
#line 264 "A1.y"
                                                                         {
		int len = strlen((yyvsp[-9].s)) + strlen((yyvsp[-8].s)) + strlen((yyvsp[-7].s)) + strlen((yyvsp[-6].s)) + strlen((yyvsp[-5].s)) + strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 2;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-9].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-8].s));
		strcat((yyval.s),(yyvsp[-7].s));
		strcat((yyval.s),(yyvsp[-6].s));
		strcat((yyval.s),(yyvsp[-5].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); }
#line 1622 "A1.tab.c"
    break;

  case 23: /* MacroDefExpression: DEFEXPR ID LROUND ID COMMA ID COMMA ID IDs RROUND LROUND Expression RROUND  */
#line 280 "A1.y"
                                                                                     {
		int len = strlen((yyvsp[-12].s)) + strlen((yyvsp[-11].s)) + strlen((yyvsp[-10].s)) + strlen((yyvsp[-9].s)) + strlen((yyvsp[-8].s)) + strlen((yyvsp[-7].s)) + strlen((yyvsp[-6].s)) + strlen((yyvsp[-5].s)) + strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 3;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-12].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-11].s));
		strcat((yyval.s),(yyvsp[-10].s));
		strcat((yyval.s),(yyvsp[-9].s));
		strcat((yyval.s),(yyvsp[-8].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-7].s));
		strcat((yyval.s),(yyvsp[-6].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-5].s));
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
	}
#line 1648 "A1.tab.c"
    break;

  case 24: /* MacroDefStatement: DEFSTMT0 ID LROUND RROUND LCURLY Statements RCURLY  */
#line 302 "A1.y"
                                                                       {
		int len = strlen((yyvsp[-6].s)) + strlen((yyvsp[-5].s)) + strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-6].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-5].s));
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
		
		defMacro((yyvsp[-5].s), (yyvsp[-1].s)); }
#line 1667 "A1.tab.c"
    break;

  case 25: /* MacroDefStatement: DEFSTMT1 ID LROUND ID RROUND LCURLY Statements RCURLY  */
#line 316 "A1.y"
                                                                {
		int len = strlen((yyvsp[-7].s)) + strlen((yyvsp[-6].s)) + strlen((yyvsp[-5].s)) + strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-7].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-6].s));
		strcat((yyval.s),(yyvsp[-5].s));
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); }
#line 1685 "A1.tab.c"
    break;

  case 26: /* MacroDefStatement: DEFSTMT2 ID LROUND ID COMMA ID RROUND LCURLY Statements RCURLY  */
#line 329 "A1.y"
                                                                         {
		int len = strlen((yyvsp[-9].s)) + strlen((yyvsp[-8].s)) + strlen((yyvsp[-7].s)) + strlen((yyvsp[-6].s)) + strlen((yyvsp[-5].s)) + strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 2;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-9].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-8].s));
		strcat((yyval.s),(yyvsp[-7].s));
		strcat((yyval.s),(yyvsp[-6].s));
		strcat((yyval.s),(yyvsp[-5].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); }
#line 1706 "A1.tab.c"
    break;

  case 27: /* MacroDefStatement: DEFSTMT ID LROUND ID COMMA ID COMMA ID IDs RROUND LCURLY Statements RCURLY  */
#line 345 "A1.y"
                                                                                     {
		int len = strlen((yyvsp[-12].s)) + strlen((yyvsp[-11].s)) + strlen((yyvsp[-10].s)) + strlen((yyvsp[-9].s)) + strlen((yyvsp[-8].s)) + strlen((yyvsp[-7].s)) + strlen((yyvsp[-6].s)) + strlen((yyvsp[-5].s)) + strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 3;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-12].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-11].s));
		strcat((yyval.s),(yyvsp[-10].s));
		strcat((yyval.s),(yyvsp[-9].s));
		strcat((yyval.s),(yyvsp[-8].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-7].s));
		strcat((yyval.s),(yyvsp[-6].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-5].s));
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
	}
#line 1732 "A1.tab.c"
    break;

  case 28: /* Statements: %empty  */
#line 367 "A1.y"
             {	(yyval.s) = (char*) malloc(sizeof(char));
				(yyval.s)[0] = '\0'; }
#line 1739 "A1.tab.c"
    break;

  case 29: /* Statements: Statement Statements  */
#line 369 "A1.y"
                               {
		int len = strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
	}
#line 1751 "A1.tab.c"
    break;

  case 30: /* Statement: LCURLY Statements RCURLY  */
#line 377 "A1.y"
                                     {
		int len = strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 2;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
		strcat((yyval.s),"\n"); }
#line 1765 "A1.tab.c"
    break;

  case 31: /* Statement: SYSOUT LROUND Expression RROUND SEMI  */
#line 386 "A1.y"
                                           {
		int len = strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
		strcat((yyval.s),"\n"); }
#line 1780 "A1.tab.c"
    break;

  case 32: /* Statement: ID EQ Expression SEMI  */
#line 396 "A1.y"
                            {
		int len = strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
		strcat((yyval.s),"\n"); }
#line 1794 "A1.tab.c"
    break;

  case 33: /* Statement: ID LBOX Expression RBOX EQ Expression SEMI  */
#line 405 "A1.y"
                                                 {
		int len = strlen((yyvsp[-6].s)) + strlen((yyvsp[-5].s)) + strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-6].s));
		strcat((yyval.s),(yyvsp[-5].s));
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
		strcat((yyval.s),"\n"); }
#line 1811 "A1.tab.c"
    break;

  case 34: /* Statement: IF LROUND Expression RROUND Statement  */
#line 417 "A1.y"
                                            {
		int len = strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 2;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[0].s));
		strcat((yyval.s),"\n"); }
#line 1827 "A1.tab.c"
    break;

  case 35: /* Statement: IF LROUND Expression RROUND Statement ELSE Statement  */
#line 428 "A1.y"
                                                           {
		int len = strlen((yyvsp[-6].s)) + strlen((yyvsp[-5].s)) + strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 4;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-6].s));
		strcat((yyval.s),(yyvsp[-5].s));
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),"\n");
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[0].s));
		strcat((yyval.s),"\n"); }
#line 1847 "A1.tab.c"
    break;

  case 36: /* Statement: WHILE LROUND Expression RROUND Statement  */
#line 443 "A1.y"
                                               {
		int len = strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
		strcat((yyval.s),"\n"); }
#line 1862 "A1.tab.c"
    break;

  case 37: /* Statement: ID LROUND RROUND SEMI  */
#line 453 "A1.y"
                            {
		int len = strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); 
		strcat((yyval.s),"\n"); }
#line 1876 "A1.tab.c"
    break;

  case 38: /* Statement: ID LROUND Expression Expressions RROUND SEMI  */
#line 462 "A1.y"
                                                   {
		int len = strlen((yyvsp[-5].s)) + strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-5].s));
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
		strcat((yyval.s),"\n");
	}
#line 1893 "A1.tab.c"
    break;

  case 39: /* Expressions: %empty  */
#line 475 "A1.y"
              { (yyval.s) = (char*) malloc(sizeof(char));
				(yyval.s)[0] = '\0'; }
#line 1900 "A1.tab.c"
    break;

  case 40: /* Expressions: COMMA Expression Expressions  */
#line 477 "A1.y"
                                       {
		int len = strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
	}
#line 1914 "A1.tab.c"
    break;

  case 41: /* Expression: PrimaryExpression OP PrimaryExpression  */
#line 487 "A1.y"
                                                    {
		int len = strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); }
#line 1926 "A1.tab.c"
    break;

  case 42: /* Expression: PrimaryExpression LBOX PrimaryExpression RBOX  */
#line 494 "A1.y"
                                                    {
		int len = strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); }
#line 1939 "A1.tab.c"
    break;

  case 43: /* Expression: PrimaryExpression DOT LENGTH  */
#line 502 "A1.y"
                                   {
		int len = strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); }
#line 1951 "A1.tab.c"
    break;

  case 44: /* Expression: PrimaryExpression  */
#line 509 "A1.y"
                        {
		int len = strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[0].s)); }
#line 1961 "A1.tab.c"
    break;

  case 45: /* Expression: PrimaryExpression DOT ID LROUND RROUND  */
#line 514 "A1.y"
                                             {
		int len = strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); }
#line 1975 "A1.tab.c"
    break;

  case 46: /* Expression: PrimaryExpression DOT ID LROUND Expression Expressions RROUND  */
#line 523 "A1.y"
                                                                    {
		int len = strlen((yyvsp[-6].s)) + strlen((yyvsp[-5].s)) + strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-6].s));
		strcat((yyval.s),(yyvsp[-5].s));
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); }
#line 1991 "A1.tab.c"
    break;

  case 47: /* Expression: ID LROUND RROUND  */
#line 534 "A1.y"
                       {
		int macroNum = valMacro((yyvsp[-2].s));
		int len = strlen(macroVal[macroNum]) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),macroVal[macroNum]);
		strcat((yyval.s),(yyvsp[0].s)); }
#line 2004 "A1.tab.c"
    break;

  case 48: /* Expression: ID LROUND Expression Expressions RROUND  */
#line 542 "A1.y"
                                              {
		int len = strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
	}
#line 2019 "A1.tab.c"
    break;

  case 49: /* PrimaryExpression: INTEGER  */
#line 553 "A1.y"
                            {
		int len = strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[0].s)); }
#line 2029 "A1.tab.c"
    break;

  case 50: /* PrimaryExpression: TRUE  */
#line 558 "A1.y"
           {
		int len = strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[0].s)); }
#line 2039 "A1.tab.c"
    break;

  case 51: /* PrimaryExpression: FALSE  */
#line 563 "A1.y"
            {
		int len = strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[0].s)); }
#line 2049 "A1.tab.c"
    break;

  case 52: /* PrimaryExpression: ID  */
#line 568 "A1.y"
         {
		int len = strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[0].s)); }
#line 2059 "A1.tab.c"
    break;

  case 53: /* PrimaryExpression: THIS  */
#line 573 "A1.y"
           {
		int len = strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[0].s)); }
#line 2069 "A1.tab.c"
    break;

  case 54: /* PrimaryExpression: NEW INT LBOX Expression RBOX  */
#line 578 "A1.y"
                                   {
		int len = strlen((yyvsp[-4].s)) + strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-4].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); }
#line 2084 "A1.tab.c"
    break;

  case 55: /* PrimaryExpression: NEW ID LROUND RROUND  */
#line 588 "A1.y"
                           {
		int len = strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); }
#line 2098 "A1.tab.c"
    break;

  case 56: /* PrimaryExpression: BANG Expression  */
#line 597 "A1.y"
                      {
		int len = strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); }
#line 2109 "A1.tab.c"
    break;

  case 57: /* PrimaryExpression: LROUND Expression RROUND  */
#line 603 "A1.y"
                               {
		int len = strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
	}
#line 2122 "A1.tab.c"
    break;

  case 58: /* TypeIDs: %empty  */
#line 612 "A1.y"
          { (yyval.s) = (char*) malloc(sizeof(char));
			(yyval.s)[0] = '\0'; }
#line 2129 "A1.tab.c"
    break;

  case 59: /* TypeIDs: COMMA Type ID TypeIDs  */
#line 614 "A1.y"
                                {
		int len = strlen((yyvsp[-3].s)) + strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 2;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-3].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
	}
#line 2145 "A1.tab.c"
    break;

  case 60: /* Type: INT LBOX RBOX  */
#line 626 "A1.y"
                     {
		int len = strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s)); 
		strcat((yyval.s)," "); }
#line 2158 "A1.tab.c"
    break;

  case 61: /* Type: BOOLEAN  */
#line 634 "A1.y"
              {
		int len = strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[0].s));
		strcat((yyval.s)," "); }
#line 2169 "A1.tab.c"
    break;

  case 62: /* Type: INT  */
#line 640 "A1.y"
          {
		int len = strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[0].s)); 
		strcat((yyval.s)," "); }
#line 2180 "A1.tab.c"
    break;

  case 63: /* Type: ID  */
#line 646 "A1.y"
         {
		int len = strlen((yyvsp[0].s)) + 1;
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[0].s));
		strcat((yyval.s)," ");
	}
#line 2192 "A1.tab.c"
    break;

  case 64: /* IDs: %empty  */
#line 654 "A1.y"
      { (yyval.s) = (char*) malloc(sizeof(char));
		(yyval.s)[0] = '\0'; }
#line 2199 "A1.tab.c"
    break;

  case 65: /* IDs: COMMA ID IDs  */
#line 656 "A1.y"
                       {
		int len = strlen((yyvsp[-2].s)) + strlen((yyvsp[-1].s)) + 1 + strlen((yyvsp[0].s));
		(yyval.s) = (char*) malloc((len + 1) * sizeof(char));
		(yyval.s)[0] = '\0';
		strcat((yyval.s),(yyvsp[-2].s));
		strcat((yyval.s)," ");
		strcat((yyval.s),(yyvsp[-1].s));
		strcat((yyval.s),(yyvsp[0].s));
	}
#line 2213 "A1.tab.c"
    break;


#line 2217 "A1.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 666 "A1.y"
 

int yyerror(char *s)
{
	printf("//Failed to parse input code");
	return 0;
}

void defMacro(char* id,char* val){
	macroID[numMacros] = (char*)malloc(strlen(id)+1);
	strcpy(macroID[numMacros], id);
	macroVal[numMacros] = (char*)malloc(strlen(val)+1);
	strcpy(macroVal[numMacros], val);
	numMacros++;
}

int valMacro(char* id){
	for(int i = 0; i < numMacros; i++) {
		if(strcmp(macroID[i],id) == 0){		
			return i;
		}
	}
	return 0;
}

int main(int argc, char **argv)
{
	/* #ifdef YYDEBUG
    yydebug = 1;  
    #endif */
	yyparse();
	return 0;
}
