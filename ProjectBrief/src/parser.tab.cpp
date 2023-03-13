/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/parser.y"

#include <stdio.h>
#include <string.h>
#include "ast.hpp"

#include <cassert>

extern const ASTNode *g_root;

int yylex(void);
void yyerror(const char *);

#line 84 "src/parser.tab.cpp"

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

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 4,                   /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 5,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 6,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 7,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 8,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 9,                     /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 10,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 11,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 12,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 13,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 14,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 15,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 16,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 17,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 18,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 19,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 20,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 21,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 22,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 23,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 24,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 25,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 26,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 27,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 28,                 /* TYPE_NAME  */
  YYSYMBOL_TYPEDEF = 29,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 30,                    /* EXTERN  */
  YYSYMBOL_STATIC = 31,                    /* STATIC  */
  YYSYMBOL_AUTO = 32,                      /* AUTO  */
  YYSYMBOL_REGISTER = 33,                  /* REGISTER  */
  YYSYMBOL_CHAR = 34,                      /* CHAR  */
  YYSYMBOL_SHORT = 35,                     /* SHORT  */
  YYSYMBOL_INT = 36,                       /* INT  */
  YYSYMBOL_LONG = 37,                      /* LONG  */
  YYSYMBOL_SIGNED = 38,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 39,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 40,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 41,                    /* DOUBLE  */
  YYSYMBOL_CONST = 42,                     /* CONST  */
  YYSYMBOL_VOLATILE = 43,                  /* VOLATILE  */
  YYSYMBOL_VOID = 44,                      /* VOID  */
  YYSYMBOL_STRUCT = 45,                    /* STRUCT  */
  YYSYMBOL_UNION = 46,                     /* UNION  */
  YYSYMBOL_ENUM = 47,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 48,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 49,                      /* CASE  */
  YYSYMBOL_DEFAULT = 50,                   /* DEFAULT  */
  YYSYMBOL_IF = 51,                        /* IF  */
  YYSYMBOL_ELSE = 52,                      /* ELSE  */
  YYSYMBOL_SWITCH = 53,                    /* SWITCH  */
  YYSYMBOL_WHILE = 54,                     /* WHILE  */
  YYSYMBOL_DO = 55,                        /* DO  */
  YYSYMBOL_FOR = 56,                       /* FOR  */
  YYSYMBOL_GOTO = 57,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 58,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 59,                     /* BREAK  */
  YYSYMBOL_RETURN = 60,                    /* RETURN  */
  YYSYMBOL_61_ = 61,                       /* '('  */
  YYSYMBOL_62_ = 62,                       /* ')'  */
  YYSYMBOL_63_ = 63,                       /* '['  */
  YYSYMBOL_64_ = 64,                       /* ']'  */
  YYSYMBOL_65_ = 65,                       /* '.'  */
  YYSYMBOL_66_ = 66,                       /* ','  */
  YYSYMBOL_67_ = 67,                       /* '&'  */
  YYSYMBOL_68_ = 68,                       /* '*'  */
  YYSYMBOL_69_ = 69,                       /* '+'  */
  YYSYMBOL_70_ = 70,                       /* '-'  */
  YYSYMBOL_71_ = 71,                       /* '~'  */
  YYSYMBOL_72_ = 72,                       /* '!'  */
  YYSYMBOL_73_ = 73,                       /* '/'  */
  YYSYMBOL_74_ = 74,                       /* '%'  */
  YYSYMBOL_75_ = 75,                       /* '<'  */
  YYSYMBOL_76_ = 76,                       /* '>'  */
  YYSYMBOL_77_ = 77,                       /* '^'  */
  YYSYMBOL_78_ = 78,                       /* '|'  */
  YYSYMBOL_79_ = 79,                       /* '?'  */
  YYSYMBOL_80_ = 80,                       /* ':'  */
  YYSYMBOL_81_ = 81,                       /* '='  */
  YYSYMBOL_82_ = 82,                       /* ';'  */
  YYSYMBOL_83_ = 83,                       /* '{'  */
  YYSYMBOL_84_ = 84,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 85,                  /* $accept  */
  YYSYMBOL_ROOT = 86,                      /* ROOT  */
  YYSYMBOL_translation_unit = 87,          /* translation_unit  */
  YYSYMBOL_external_declaration = 88,      /* external_declaration  */
  YYSYMBOL_function_definition = 89,       /* function_definition  */
  YYSYMBOL_declaration_specifiers = 90,    /* declaration_specifiers  */
  YYSYMBOL_primary_expression = 91,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 92,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 93,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 94,          /* unary_expression  */
  YYSYMBOL_unary_operator = 95,            /* unary_operator  */
  YYSYMBOL_cast_expression = 96,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 97, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 98,       /* additive_expression  */
  YYSYMBOL_shift_expression = 99,          /* shift_expression  */
  YYSYMBOL_relational_expression = 100,    /* relational_expression  */
  YYSYMBOL_equality_expression = 101,      /* equality_expression  */
  YYSYMBOL_and_expression = 102,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 103,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 104,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 105,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 106,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 107,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 108,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 109,      /* assignment_operator  */
  YYSYMBOL_expression = 110,               /* expression  */
  YYSYMBOL_constant_expression = 111,      /* constant_expression  */
  YYSYMBOL_declaration = 112,              /* declaration  */
  YYSYMBOL_init_declarator_list = 113,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 114,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 115,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 116,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 117, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 118,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 119,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 120,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 121, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 122,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 123,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 124,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 125,          /* enumerator_list  */
  YYSYMBOL_enumerator = 126,               /* enumerator  */
  YYSYMBOL_type_qualifier = 127,           /* type_qualifier  */
  YYSYMBOL_declarator = 128,               /* declarator  */
  YYSYMBOL_direct_declarator = 129,        /* direct_declarator  */
  YYSYMBOL_pointer = 130,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 131,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 132,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 133,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 134,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 135,          /* identifier_list  */
  YYSYMBOL_type_name = 136,                /* type_name  */
  YYSYMBOL_abstract_declarator = 137,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 138, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 139,              /* initializer  */
  YYSYMBOL_initializer_list = 140,         /* initializer_list  */
  YYSYMBOL_statement = 141,                /* statement  */
  YYSYMBOL_labeled_statement = 142,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 143,       /* compound_statement  */
  YYSYMBOL_declaration_list = 144,         /* declaration_list  */
  YYSYMBOL_statement_list = 145,           /* statement_list  */
  YYSYMBOL_expression_statement = 146,     /* expression_statement  */
  YYSYMBOL_selection_statement = 147,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 148,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 149            /* jump_statement  */
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1250

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  349

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   315


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
       2,     2,     2,    72,     2,     2,     2,    74,    67,     2,
      61,    62,    68,    69,    66,    70,    65,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    82,
      75,    81,    76,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    78,    84,    71,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    70,    70,    73,    74,    78,    79,    83,    84,    85,
      86,    90,    91,    92,    93,    94,    95,    99,   100,   101,
     102,   106,   107,   108,   109,   110,   111,   112,   113,   117,
     118,   122,   123,   124,   125,   126,   127,   131,   132,   133,
     134,   135,   136,   140,   141,   145,   146,   147,   148,   152,
     153,   154,   158,   159,   160,   164,   165,   166,   167,   168,
     172,   173,   174,   178,   179,   183,   184,   188,   189,   193,
     194,   198,   199,   203,   204,   208,   209,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   227,   231,
     235,   236,   240,   241,   245,   246,   250,   251,   252,   253,
     254,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   273,   274,   275,   279,   280,   284,   285,
     289,   293,   294,   295,   296,   300,   301,   305,   306,   307,
     311,   312,   313,   317,   318,   322,   323,   327,   328,   332,
     333,   337,   338,   339,   340,   341,   342,   343,   347,   348,
     349,   350,   354,   355,   360,   361,   365,   366,   370,   371,
     372,   376,   377,   381,   382,   386,   387,   388,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   404,   405,   406,
     410,   411,   415,   416,   417,   418,   419,   420,   424,   425,
     426,   430,   431,   432,   433,   437,   438,   442,   443,   447,
     448,   452,   453,   454,   458,   459,   460,   461,   465,   466,
     467,   468,   469
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "CONSTANT", "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['",
  "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'",
  "'}'", "$accept", "ROOT", "translation_unit", "external_declaration",
  "function_definition", "declaration_specifiers", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-197)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     918,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,
    -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,
    -197,    11,     4,    32,    22,   918,  -197,  -197,    17,  -197,
    1203,  1203,  -197,    14,  -197,  1203,  1050,   -27,    53,   -72,
      63,     6,  -197,  -197,    32,  -197,  -197,  -197,   -25,  -197,
    1030,  -197,  -197,    54,  1004,  -197,   275,    17,  -197,  -197,
    1050,   405,   663,   -27,    63,    59,    -2,  -197,  -197,  -197,
    -197,     4,  -197,   539,  -197,  1050,  1004,  1004,   953,  -197,
     110,  1004,    25,  -197,  -197,   782,   803,   803,   827,    64,
      86,   111,   115,   521,   118,   183,   106,   124,   556,   642,
    -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,   195,
     271,   827,  -197,     3,    49,   174,    47,   180,   125,   120,
     122,   197,    33,  -197,  -197,   135,  -197,  -197,  -197,   345,
     415,  -197,  -197,  -197,  -197,   137,  -197,  -197,  -197,  -197,
      40,   162,   165,  -197,   -17,  -197,  -197,  -197,  -197,   169,
      62,   827,    63,  -197,  -197,   539,  -197,  -197,  -197,   973,
    -197,  -197,  -197,   827,    24,  -197,   154,  -197,   521,   642,
    -197,   827,  -197,  -197,   155,   521,   827,   827,   827,   186,
     593,   159,  -197,  -197,  -197,   161,   184,   144,   188,   242,
    -197,  -197,   687,   827,   248,  -197,  -197,  -197,  -197,  -197,
    -197,  -197,  -197,  -197,  -197,  -197,   827,  -197,   827,   827,
     827,   827,   827,   827,   827,   827,   827,   827,   827,   827,
     827,   827,   827,   827,   827,   827,   827,  -197,  -197,   451,
    -197,  -197,   873,   712,  -197,    18,  -197,    82,  -197,  1182,
    -197,   249,  -197,  -197,  -197,  -197,  -197,   107,  -197,  -197,
     110,  -197,   827,  -197,   191,   521,  -197,   193,   200,   202,
     198,   593,  -197,  -197,  -197,  1106,   119,  -197,   827,  -197,
    -197,    68,  -197,   203,  -197,  -197,  -197,  -197,  -197,     3,
       3,    49,    49,   174,   174,   174,   174,    47,    47,   180,
     125,   120,   122,   197,   189,  -197,  -197,   206,   208,  -197,
     209,    82,  1147,   733,  -197,  -197,  -197,   485,  -197,  -197,
    -197,  -197,  -197,   521,   521,   521,   827,   757,  -197,  -197,
     827,  -197,   827,  -197,  -197,  -197,  -197,   212,  -197,   211,
    -197,  -197,   224,  -197,  -197,   215,   521,   220,  -197,  -197,
    -197,  -197,   521,   204,  -197,   521,  -197,  -197,  -197
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   141,   112,    96,    97,    98,    99,   100,   102,   103,
     104,   105,   108,   109,   106,   107,   137,   138,   101,   116,
     117,     0,     0,   148,     0,     2,     3,     5,     0,     6,
      11,    13,   110,     0,   111,    15,     0,   140,     0,   132,
       0,     0,   152,   150,   149,     1,     4,    90,     0,    92,
      94,    12,    14,   115,     0,    16,     0,     0,   195,    10,
       0,     0,     0,   139,     0,   135,     0,   133,   142,   153,
     151,     0,    91,     0,     8,     0,     0,   122,     0,   118,
       0,   124,    17,    18,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,    40,    41,    42,   199,   191,    21,    31,
      43,     0,    45,    49,    52,    55,    60,    63,    65,    67,
      69,    71,    73,    75,    88,     0,   197,   182,   183,     0,
       0,   184,   185,   186,   187,    94,   196,     9,   161,   147,
     160,     0,   154,   156,     0,    17,   144,    43,    89,     0,
       0,     0,     0,   130,    93,     0,   177,    95,     7,     0,
     121,   114,   119,     0,     0,   125,   127,   123,     0,     0,
      35,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,   209,   210,   211,     0,     0,   163,     0,     0,
      27,    28,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    77,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   200,   193,     0,
     192,   198,     0,     0,   158,   165,   159,   166,   145,     0,
     146,     0,   143,   131,   136,   134,   180,     0,   113,   128,
       0,   120,     0,   188,     0,     0,   190,     0,     0,     0,
       0,     0,   208,   212,    20,     0,   165,   164,     0,    26,
      23,     0,    29,     0,    25,    76,    46,    47,    48,    50,
      51,    53,    54,    58,    59,    56,    57,    61,    62,    64,
      66,    68,    70,    72,     0,   194,   173,     0,     0,   169,
       0,   167,     0,     0,   155,   157,   162,     0,   178,   126,
     129,    36,   189,     0,     0,     0,     0,     0,    44,    24,
       0,    22,     0,   174,   168,   170,   175,     0,   171,     0,
     179,   181,   201,   203,   204,     0,     0,     0,    30,    74,
     176,   172,     0,     0,   206,     0,   202,   205,   207
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -197,  -197,  -197,   260,  -197,     0,  -197,  -197,  -197,   -59,
    -197,   -99,    -1,     2,     5,    10,    66,    77,    65,    76,
      98,  -197,   -56,   -71,  -197,   -45,   -65,    13,  -197,   230,
    -197,   -30,  -197,  -197,   251,   -70,   -44,  -197,    87,  -197,
     274,   187,    39,   -13,   -34,    -4,  -197,   -60,  -197,   101,
    -197,   172,  -124,  -196,  -137,  -197,   -88,  -197,   139,    46,
     226,  -170,  -197,  -197,  -197
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    24,    25,    26,    27,    57,   108,   109,   271,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   206,   125,   149,    58,    48,    49,
      30,    31,    32,    33,    78,    79,    80,   164,   165,    34,
      66,    67,    35,    36,    37,    38,    44,   297,   142,   143,
     144,   188,   298,   237,   157,   247,   126,   127,   128,    60,
     130,   131,   132,   133,   134
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,   141,   156,   147,    63,   179,   148,     1,   162,    41,
     261,    64,   207,    29,    39,    50,   236,    53,   246,    43,
       1,     1,    45,   174,    77,    28,   170,   172,   173,   147,
      51,    52,   148,   160,    61,    55,    62,   167,    29,   301,
      70,    71,   231,     1,   135,   240,    77,    77,    77,   241,
     225,    77,   147,   185,   186,   187,     1,    72,   135,   215,
     216,   140,    42,   267,   152,    22,    65,   166,    68,    77,
     301,   208,    23,   136,    16,    17,   209,   210,    22,   232,
     253,   233,   153,    69,   156,    23,   244,   256,   136,   162,
     250,   317,   147,    81,    40,   148,    75,    54,   249,    47,
      23,   232,   129,   233,   147,   168,   251,   148,    23,   276,
     277,   278,   226,     1,    22,    81,    81,    81,   211,   212,
      81,   272,   217,   218,   186,   187,   186,   234,   152,    77,
     319,   257,   258,   259,   320,   275,   235,    76,    81,    77,
     151,   231,   136,   302,   175,   303,   243,   176,   273,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   312,   300,   318,
     331,    22,   177,   307,   147,    59,   178,   148,    23,   180,
     265,   294,   233,   266,   213,   214,   181,   310,   182,    74,
     163,   308,   221,   147,   219,   220,   148,   222,    81,   137,
     223,    63,   189,   190,   191,   265,   183,   233,    81,   147,
     279,   280,    23,   224,   158,   281,   282,   227,    73,    41,
     283,   284,   285,   286,   238,   332,   333,   334,   235,   287,
     288,   239,   140,   242,   252,   255,   156,   166,   329,   140,
     260,   262,   327,   263,   147,   269,   264,   148,   344,   338,
     268,   274,   306,   311,   346,   313,   192,   348,   193,   316,
     194,   266,   314,   147,   315,   140,   339,   321,   323,   322,
     324,   335,   337,   325,   340,   341,   342,   343,    82,    83,
      84,    85,   345,    86,    87,    46,   347,   289,   291,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   290,
     292,   154,   140,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   293,    88,    89,    90,   159,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   309,   150,   245,
     305,   254,   100,   101,   102,   103,   104,   105,    82,    83,
      84,    85,   205,    86,    87,   229,     0,   106,    56,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,    88,    89,    90,     0,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     0,   138,     0,
       0,     0,   100,   101,   102,   103,   104,   105,    82,    83,
      84,    85,     0,    86,    87,     0,     0,   106,    56,   228,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,    82,    83,    84,    85,     0,    86,
      87,     0,     0,     0,    88,    89,    90,   139,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,   145,    83,
      84,    85,     0,    86,    87,     0,     0,   106,    56,   230,
      88,    89,    90,     0,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,    82,    83,    84,    85,     0,    86,
      87,     0,     0,   106,    56,   295,     0,     0,     0,     0,
       0,     0,   145,    83,    84,    85,    99,    86,    87,     0,
       0,     0,   100,   101,   102,   103,   104,   105,     0,   145,
      83,    84,    85,     0,    86,    87,     0,     0,   155,   330,
      88,    89,    90,     0,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,     0,     0,   145,    83,    84,    85,
      99,    86,    87,   106,    56,     0,   100,   101,   102,   103,
     104,   105,     0,     0,     0,     0,     0,    99,     0,     0,
       0,     0,   155,   100,   101,   102,   103,   104,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   184,     0,
       0,     0,     0,     0,     0,   145,    83,    84,    85,     0,
      86,    87,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,   145,    83,    84,    85,
       2,    86,    87,     0,     0,   106,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     145,    83,    84,    85,     0,    86,    87,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   145,    83,    84,    85,     0,
      86,    87,     0,     0,    99,     0,     0,   146,     0,     0,
     100,   101,   102,   103,   104,   105,   145,    83,    84,    85,
       0,    86,    87,     0,     0,     0,     0,     0,    99,   270,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
     145,    83,    84,    85,     0,    86,    87,     0,     0,     0,
       0,     0,     0,    99,     0,     0,   299,     0,     0,   100,
     101,   102,   103,   104,   105,   145,    83,    84,    85,     0,
      86,    87,     0,     0,    99,     0,     0,   328,     0,     0,
     100,   101,   102,   103,   104,   105,   145,    83,    84,    85,
       0,    86,    87,     0,     0,     0,     0,     0,    99,   336,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
     145,    83,    84,    85,     0,    86,    87,     0,     0,     0,
       0,     0,     0,   169,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   171,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   232,   296,   233,     0,     0,     0,
       0,    23,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     2,     0,     0,     0,     0,    23,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     2,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,   161,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,   248,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   265,   296,   233,
       0,     0,     0,     0,    23,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   326,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     304,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21
};

static const yytype_int16 yycheck[] =
{
       0,    61,    73,    62,    38,    93,    62,     3,    78,    22,
     180,    83,   111,     0,     3,    28,   140,     3,   155,    23,
       3,     3,     0,    88,    54,    25,    85,    86,    87,    88,
      30,    31,    88,    77,    61,    35,    63,    81,    25,   235,
      44,    66,   130,     3,    57,    62,    76,    77,    78,    66,
      17,    81,   111,    98,    99,    99,     3,    82,    71,    12,
      13,    61,    23,   187,    66,    61,     3,    80,    62,    99,
     266,    68,    68,    60,    42,    43,    73,    74,    61,    61,
     168,    63,    84,    44,   155,    68,   151,   175,    75,   159,
      66,   261,   151,    54,    83,   151,    50,    83,   163,    82,
      68,    61,    56,    63,   163,    80,    82,   163,    68,   208,
     209,   210,    79,     3,    61,    76,    77,    78,    69,    70,
      81,   192,    75,    76,   169,   169,   171,   140,    66,   159,
      62,   176,   177,   178,    66,   206,   140,    83,    99,   169,
      81,   229,   129,    61,    80,    63,    84,    61,   193,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   255,   233,   268,
     307,    61,    61,    66,   233,    36,    61,   233,    68,    61,
      61,   226,    63,   187,    10,    11,     3,   252,    82,    50,
      80,    84,    67,   252,    14,    15,   252,    77,   159,    60,
      78,   235,     7,     8,     9,    61,    82,    63,   169,   268,
     211,   212,    68,    16,    75,   213,   214,    82,    81,   232,
     215,   216,   217,   218,    62,   313,   314,   315,   232,   219,
     220,    66,   232,    64,    80,    80,   307,   250,   303,   239,
      54,    82,   302,    82,   303,     3,    62,   303,   336,   320,
      62,     3,     3,    62,   342,    62,    61,   345,    63,    61,
      65,   265,    62,   322,    62,   265,   322,    64,    62,    80,
      62,   316,   317,    64,    62,    64,    52,    62,     3,     4,
       5,     6,    62,     8,     9,    25,    82,   221,   223,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   222,
     224,    71,   302,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   225,    49,    50,    51,    76,    53,    54,
      55,    56,    57,    58,    59,    60,    61,   250,    64,   152,
     239,   169,    67,    68,    69,    70,    71,    72,     3,     4,
       5,     6,    81,     8,     9,   129,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,     3,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    82,    83,    84,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    49,    50,    51,    62,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    82,    83,    84,
      49,    50,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    71,    72,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    61,     8,     9,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    83,    84,
      49,    50,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    71,    72,    -1,    -1,     3,     4,     5,     6,
      61,     8,     9,    82,    83,    -1,    67,    68,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    83,    67,    68,    69,    70,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,     3,     4,     5,     6,
      28,     8,     9,    -1,    -1,    82,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    61,    -1,    -1,    64,    -1,    -1,
      67,    68,    69,    70,    71,    72,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    64,    -1,    -1,    67,
      68,    69,    70,    71,    72,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    61,    -1,    -1,    64,    -1,    -1,
      67,    68,    69,    70,    71,    72,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    28,    -1,    -1,    -1,    -1,    68,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    84,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    84,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      -1,    -1,    -1,    -1,    68,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    61,    68,    86,    87,    88,    89,    90,   112,
     115,   116,   117,   118,   124,   127,   128,   129,   130,     3,
      83,   128,   127,   130,   131,     0,    88,    82,   113,   114,
     128,    90,    90,     3,    83,    90,    83,    90,   112,   143,
     144,    61,    63,   129,    83,     3,   125,   126,    62,   127,
     130,    66,    82,    81,   143,   144,    83,   116,   119,   120,
     121,   127,     3,     4,     5,     6,     8,     9,    49,    50,
      51,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      67,    68,    69,    70,    71,    72,    82,    84,    91,    92,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   110,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   128,   112,   143,     3,    62,
      90,   132,   133,   134,   135,     3,    64,    94,   107,   111,
     125,    81,    66,    84,   114,    83,   108,   139,   143,   119,
     121,    84,   120,    80,   122,   123,   128,   121,    80,    61,
      94,    61,    94,    94,   111,    80,    61,    61,    61,   141,
      61,     3,    82,    82,    82,   110,   110,   121,   136,     7,
       8,     9,    61,    63,    65,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    81,   109,    96,    68,    73,
      74,    69,    70,    10,    11,    12,    13,    75,    76,    14,
      15,    67,    77,    78,    16,    17,    79,    82,    84,   145,
      84,   141,    61,    63,   128,   130,   137,   138,    62,    66,
      62,    66,    64,    84,   111,   126,   139,   140,    84,   111,
      66,    82,    80,   141,   136,    80,   141,   110,   110,   110,
      54,   146,    82,    82,    62,    61,   130,   137,    62,     3,
      62,    93,   108,   110,     3,   108,    96,    96,    96,    97,
      97,    98,    98,    99,    99,    99,    99,   100,   100,   101,
     102,   103,   104,   105,   110,    84,    62,   132,   137,    64,
     111,   138,    61,    63,    48,   134,     3,    66,    84,   123,
     111,    62,   141,    62,    62,    62,    61,   146,    96,    62,
      66,    64,    80,    62,    62,    64,    62,   132,    64,   111,
      84,   139,   141,   141,   141,   110,    62,   110,   108,   107,
      62,    64,    52,    62,   141,    62,   141,    82,   141
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    87,    87,    88,    88,    89,    89,    89,
      89,    90,    90,    90,    90,    90,    90,    91,    91,    91,
      91,    92,    92,    92,    92,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    94,    94,    94,    95,    95,    95,
      95,    95,    95,    96,    96,    97,    97,    97,    97,    98,
      98,    98,    99,    99,    99,   100,   100,   100,   100,   100,
     101,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   111,
     112,   112,   113,   113,   114,   114,   115,   115,   115,   115,
     115,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   117,   117,   117,   118,   118,   119,   119,
     120,   121,   121,   121,   121,   122,   122,   123,   123,   123,
     124,   124,   124,   125,   125,   126,   126,   127,   127,   128,
     128,   129,   129,   129,   129,   129,   129,   129,   130,   130,
     130,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     134,   135,   135,   136,   136,   137,   137,   137,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   139,   139,   139,
     140,   140,   141,   141,   141,   141,   141,   141,   142,   142,
     142,   143,   143,   143,   143,   144,   144,   145,   145,   146,
     146,   147,   147,   147,   148,   148,   148,   148,   149,   149,
     149,   149,   149
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     4,     3,     3,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     1,
       3,     1,     4,     3,     4,     3,     3,     2,     2,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     4,     2,     1,     1,     1,     2,
       3,     2,     1,     2,     1,     1,     3,     1,     2,     3,
       4,     5,     2,     1,     3,     1,     3,     1,     1,     2,
       1,     1,     3,     4,     3,     4,     4,     3,     1,     2,
       2,     3,     1,     2,     1,     3,     1,     3,     2,     2,
       1,     1,     3,     1,     2,     1,     1,     2,     3,     2,
       3,     3,     4,     2,     3,     3,     4,     1,     3,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     2,     3,     3,     4,     1,     2,     1,     2,     1,
       2,     5,     7,     5,     5,     7,     6,     7,     3,     2,
       2,     2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* ROOT: translation_unit  */
#line 70 "src/parser.y"
                      {g_root = (yyvsp[0].node);}
#line 1672 "src/parser.tab.cpp"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 73 "src/parser.y"
                               {(yyval.node) = (yyvsp[0].node);}
#line 1678 "src/parser.tab.cpp"
    break;

  case 8: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 84 "src/parser.y"
                                                               {(yyval.node)=(yyvsp[-2].node);}
#line 1684 "src/parser.tab.cpp"
    break;

  case 13: /* declaration_specifiers: type_specifier  */
#line 92 "src/parser.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 1690 "src/parser.tab.cpp"
    break;

  case 18: /* primary_expression: CONSTANT  */
#line 100 "src/parser.y"
                   {(yyval.node) = new IntType((yyvsp[0].num));}
#line 1696 "src/parser.tab.cpp"
    break;

  case 21: /* postfix_expression: primary_expression  */
#line 106 "src/parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1702 "src/parser.tab.cpp"
    break;

  case 31: /* unary_expression: postfix_expression  */
#line 122 "src/parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1708 "src/parser.tab.cpp"
    break;

  case 43: /* cast_expression: unary_expression  */
#line 140 "src/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1714 "src/parser.tab.cpp"
    break;

  case 45: /* multiplicative_expression: cast_expression  */
#line 145 "src/parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 1720 "src/parser.tab.cpp"
    break;

  case 49: /* additive_expression: multiplicative_expression  */
#line 152 "src/parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1726 "src/parser.tab.cpp"
    break;

  case 52: /* shift_expression: additive_expression  */
#line 158 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1732 "src/parser.tab.cpp"
    break;

  case 55: /* relational_expression: shift_expression  */
#line 164 "src/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1738 "src/parser.tab.cpp"
    break;

  case 60: /* equality_expression: relational_expression  */
#line 172 "src/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1744 "src/parser.tab.cpp"
    break;

  case 63: /* and_expression: equality_expression  */
#line 178 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1750 "src/parser.tab.cpp"
    break;

  case 65: /* exclusive_or_expression: and_expression  */
#line 183 "src/parser.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 1756 "src/parser.tab.cpp"
    break;

  case 67: /* inclusive_or_expression: exclusive_or_expression  */
#line 188 "src/parser.y"
                                  { (yyval.node) = (yyvsp[0].node); }
#line 1762 "src/parser.tab.cpp"
    break;

  case 69: /* logical_and_expression: inclusive_or_expression  */
#line 193 "src/parser.y"
                                  { (yyval.node) = (yyvsp[0].node); }
#line 1768 "src/parser.tab.cpp"
    break;

  case 71: /* logical_or_expression: logical_and_expression  */
#line 198 "src/parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 1774 "src/parser.tab.cpp"
    break;

  case 73: /* conditional_expression: logical_or_expression  */
#line 203 "src/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1780 "src/parser.tab.cpp"
    break;

  case 75: /* assignment_expression: conditional_expression  */
#line 208 "src/parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 1786 "src/parser.tab.cpp"
    break;

  case 88: /* expression: assignment_expression  */
#line 227 "src/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1792 "src/parser.tab.cpp"
    break;

  case 104: /* type_specifier: INT  */
#line 261 "src/parser.y"
              {(yyval.node) = new IntType();}
#line 1798 "src/parser.tab.cpp"
    break;

  case 141: /* direct_declarator: IDENTIFIER  */
#line 337 "src/parser.y"
                     { (yyval.node)="f";}
#line 1804 "src/parser.tab.cpp"
    break;

  case 147: /* direct_declarator: direct_declarator '(' ')'  */
#line 343 "src/parser.y"
                                    { (yyval.node) = (yyvsp[-2].node); }
#line 1810 "src/parser.tab.cpp"
    break;

  case 183: /* statement: compound_statement  */
#line 416 "src/parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1816 "src/parser.tab.cpp"
    break;

  case 187: /* statement: jump_statement  */
#line 420 "src/parser.y"
                         {(yyval.node) = (yyvsp[0].node);}
#line 1822 "src/parser.tab.cpp"
    break;

  case 192: /* compound_statement: '{' statement_list '}'  */
#line 431 "src/parser.y"
                                 { (yyval.node) = (yyvsp[-1].node); }
#line 1828 "src/parser.tab.cpp"
    break;

  case 197: /* statement_list: statement  */
#line 442 "src/parser.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 1834 "src/parser.tab.cpp"
    break;

  case 212: /* jump_statement: RETURN expression ';'  */
#line 469 "src/parser.y"
                                {(yyval.node) = new Return((yyvsp[-1].node));}
#line 1840 "src/parser.tab.cpp"
    break;


#line 1844 "src/parser.tab.cpp"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 472 "src/parser.y"


const ASTNode *g_root; // Definition of variable (to match declaration earlier)

ASTNode *parseAST("input.txt")
{
  g_root=0;
  yyparse();
  return g_root;
}

