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
  YYSYMBOL_INT_LITERAL = 3,                /* INT_LITERAL  */
  YYSYMBOL_FLOAT_LITERAL = 4,              /* FLOAT_LITERAL  */
  YYSYMBOL_HEX_LITERAL = 5,                /* HEX_LITERAL  */
  YYSYMBOL_IDENTIFIER = 6,                 /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 7,                   /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 8,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 9,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 10,                    /* PTR_OP  */
  YYSYMBOL_INC_OP = 11,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 12,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 13,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 14,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 15,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 16,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 17,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 18,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 19,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 20,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 21,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 22,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 23,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 24,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 25,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 26,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 27,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 28,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 29,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 30,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 31,                 /* TYPE_NAME  */
  YYSYMBOL_TYPEDEF = 32,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 33,                    /* EXTERN  */
  YYSYMBOL_STATIC = 34,                    /* STATIC  */
  YYSYMBOL_AUTO = 35,                      /* AUTO  */
  YYSYMBOL_REGISTER = 36,                  /* REGISTER  */
  YYSYMBOL_CHAR = 37,                      /* CHAR  */
  YYSYMBOL_SHORT = 38,                     /* SHORT  */
  YYSYMBOL_INT = 39,                       /* INT  */
  YYSYMBOL_LONG = 40,                      /* LONG  */
  YYSYMBOL_SIGNED = 41,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 42,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 43,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 44,                    /* DOUBLE  */
  YYSYMBOL_CONST = 45,                     /* CONST  */
  YYSYMBOL_VOLATILE = 46,                  /* VOLATILE  */
  YYSYMBOL_VOID = 47,                      /* VOID  */
  YYSYMBOL_STRUCT = 48,                    /* STRUCT  */
  YYSYMBOL_UNION = 49,                     /* UNION  */
  YYSYMBOL_ENUM = 50,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 51,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 52,                      /* CASE  */
  YYSYMBOL_DEFAULT = 53,                   /* DEFAULT  */
  YYSYMBOL_IF = 54,                        /* IF  */
  YYSYMBOL_ELSE = 55,                      /* ELSE  */
  YYSYMBOL_SWITCH = 56,                    /* SWITCH  */
  YYSYMBOL_WHILE = 57,                     /* WHILE  */
  YYSYMBOL_DO = 58,                        /* DO  */
  YYSYMBOL_FOR = 59,                       /* FOR  */
  YYSYMBOL_GOTO = 60,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 61,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 62,                     /* BREAK  */
  YYSYMBOL_RETURN = 63,                    /* RETURN  */
  YYSYMBOL_64_ = 64,                       /* '('  */
  YYSYMBOL_65_ = 65,                       /* ')'  */
  YYSYMBOL_66_ = 66,                       /* '['  */
  YYSYMBOL_67_ = 67,                       /* ']'  */
  YYSYMBOL_68_ = 68,                       /* '.'  */
  YYSYMBOL_69_ = 69,                       /* ','  */
  YYSYMBOL_70_ = 70,                       /* '&'  */
  YYSYMBOL_71_ = 71,                       /* '*'  */
  YYSYMBOL_72_ = 72,                       /* '+'  */
  YYSYMBOL_73_ = 73,                       /* '-'  */
  YYSYMBOL_74_ = 74,                       /* '~'  */
  YYSYMBOL_75_ = 75,                       /* '!'  */
  YYSYMBOL_76_ = 76,                       /* '/'  */
  YYSYMBOL_77_ = 77,                       /* '%'  */
  YYSYMBOL_78_ = 78,                       /* '<'  */
  YYSYMBOL_79_ = 79,                       /* '>'  */
  YYSYMBOL_80_ = 80,                       /* '^'  */
  YYSYMBOL_81_ = 81,                       /* '|'  */
  YYSYMBOL_82_ = 82,                       /* '?'  */
  YYSYMBOL_83_ = 83,                       /* ':'  */
  YYSYMBOL_84_ = 84,                       /* '='  */
  YYSYMBOL_85_ = 85,                       /* ';'  */
  YYSYMBOL_86_ = 86,                       /* '{'  */
  YYSYMBOL_87_ = 87,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 88,                  /* $accept  */
  YYSYMBOL_ROOT = 89,                      /* ROOT  */
  YYSYMBOL_translation_unit = 90,          /* translation_unit  */
  YYSYMBOL_external_declaration = 91,      /* external_declaration  */
  YYSYMBOL_function_definition = 92,       /* function_definition  */
  YYSYMBOL_declaration_specifiers = 93,    /* declaration_specifiers  */
  YYSYMBOL_primary_expression = 94,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 95,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 96,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 97,          /* unary_expression  */
  YYSYMBOL_unary_operator = 98,            /* unary_operator  */
  YYSYMBOL_cast_expression = 99,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 100, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 101,      /* additive_expression  */
  YYSYMBOL_shift_expression = 102,         /* shift_expression  */
  YYSYMBOL_relational_expression = 103,    /* relational_expression  */
  YYSYMBOL_equality_expression = 104,      /* equality_expression  */
  YYSYMBOL_and_expression = 105,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 106,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 107,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 108,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 109,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 110,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 111,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 112,      /* assignment_operator  */
  YYSYMBOL_expression = 113,               /* expression  */
  YYSYMBOL_constant_expression = 114,      /* constant_expression  */
  YYSYMBOL_declaration = 115,              /* declaration  */
  YYSYMBOL_init_declarator_list = 116,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 117,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 118,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 119,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 120, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 121,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 122,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 123,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 124, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 125,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 126,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 127,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 128,          /* enumerator_list  */
  YYSYMBOL_enumerator = 129,               /* enumerator  */
  YYSYMBOL_type_qualifier = 130,           /* type_qualifier  */
  YYSYMBOL_declarator = 131,               /* declarator  */
  YYSYMBOL_direct_declarator = 132,        /* direct_declarator  */
  YYSYMBOL_pointer = 133,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 134,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 135,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 136,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 137,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 138,          /* identifier_list  */
  YYSYMBOL_type_name = 139,                /* type_name  */
  YYSYMBOL_abstract_declarator = 140,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 141, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 142,              /* initializer  */
  YYSYMBOL_initializer_list = 143,         /* initializer_list  */
  YYSYMBOL_statement = 144,                /* statement  */
  YYSYMBOL_labeled_statement = 145,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 146,       /* compound_statement  */
  YYSYMBOL_declaration_list = 147,         /* declaration_list  */
  YYSYMBOL_statement_list = 148,           /* statement_list  */
  YYSYMBOL_expression_statement = 149,     /* expression_statement  */
  YYSYMBOL_selection_statement = 150,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 151,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 152            /* jump_statement  */
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
#define YYLAST   1224

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  215
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  352

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   318


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
       2,     2,     2,    75,     2,     2,     2,    77,    70,     2,
      64,    65,    71,    72,    69,    73,    68,    76,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,    85,
      78,    84,    79,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    67,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,    81,    87,    74,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    91,    91,    94,    95,    99,   100,   104,   105,   106,
     107,   111,   112,   113,   114,   115,   116,   120,   121,   122,
     123,   124,   125,   129,   130,   131,   132,   133,   134,   135,
     136,   140,   141,   145,   147,   148,   149,   150,   151,   155,
     156,   157,   158,   159,   160,   164,   165,   169,   170,   171,
     172,   176,   177,   178,   182,   183,   184,   188,   189,   190,
     191,   192,   196,   197,   198,   202,   203,   207,   208,   212,
     213,   217,   218,   222,   223,   227,   228,   232,   233,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   252,   256,   260,   261,   265,   266,   270,   271,   275,
     276,   277,   278,   279,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   298,   299,   300,   304,
     305,   309,   310,   314,   318,   319,   320,   321,   325,   326,
     330,   331,   332,   336,   337,   338,   342,   343,   347,   348,
     352,   353,   357,   358,   362,   363,   364,   365,   366,   367,
     368,   372,   373,   374,   375,   379,   380,   385,   386,   390,
     391,   395,   396,   397,   401,   402,   406,   407,   411,   412,
     413,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     429,   430,   431,   435,   436,   440,   441,   442,   443,   444,
     445,   449,   450,   451,   455,   456,   457,   458,   463,   464,
     468,   469,   473,   474,   478,   479,   480,   484,   485,   486,
     487,   491,   492,   493,   494,   495
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
  "\"end of file\"", "error", "\"invalid token\"", "INT_LITERAL",
  "FLOAT_LITERAL", "HEX_LITERAL", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "','",
  "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'",
  "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept",
  "ROOT", "translation_unit", "external_declaration",
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

#define YYPACT_NINF (-182)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     993,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,    13,    14,     4,    39,   993,  -182,  -182,    63,  -182,
    1154,  1154,  -182,    16,  -182,  1154,  1034,    62,    30,   -79,
      28,   -51,  -182,  -182,     4,  -182,  -182,  -182,    45,  -182,
     930,  -182,  -182,   -33,  1174,  -182,   275,    63,  -182,  -182,
    1034,   430,   729,    62,    28,   -21,   -32,  -182,  -182,  -182,
    -182,    14,  -182,   620,  -182,  1034,  1174,  1174,   254,  -182,
      54,  1174,  -182,  -182,  -182,   -17,  -182,   863,   936,   936,
     948,   -10,    41,    56,    79,   602,   118,    71,   104,   108,
     639,   742,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,   134,   191,   948,  -182,   119,   136,   210,    94,   215,
     137,   124,   130,   206,    34,  -182,  -182,   149,  -182,  -182,
    -182,   360,   445,  -182,  -182,  -182,  -182,   154,  -182,  -182,
    -182,  -182,    53,   176,   182,  -182,     7,  -182,  -182,  -182,
    -182,   186,   101,   948,    28,  -182,  -182,   620,  -182,  -182,
    -182,   339,  -182,  -182,  -182,   948,    64,  -182,   171,  -182,
     602,   742,  -182,   948,  -182,  -182,   174,   602,   948,   948,
     948,   202,   693,   175,  -182,  -182,  -182,   178,   196,   113,
     200,   260,  -182,  -182,   815,   948,   267,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,   948,
    -182,   948,   948,   948,   948,   948,   948,   948,   948,   948,
     948,   948,   948,   948,   948,   948,   948,   948,   948,   948,
    -182,  -182,   481,  -182,  -182,   551,   827,  -182,    15,  -182,
     121,  -182,  1133,  -182,   268,  -182,  -182,  -182,  -182,  -182,
     105,  -182,  -182,    54,  -182,   948,  -182,   211,   602,  -182,
     212,   217,   223,   225,   693,  -182,  -182,  -182,  1057,   135,
    -182,   948,  -182,  -182,   111,  -182,   259,  -182,  -182,  -182,
    -182,  -182,   119,   119,   136,   136,   210,   210,   210,   210,
      94,    94,   215,   137,   124,   130,   206,   207,  -182,  -182,
     265,   277,  -182,   273,   121,  1098,   839,  -182,  -182,  -182,
     566,  -182,  -182,  -182,  -182,  -182,   602,   602,   602,   948,
     851,  -182,  -182,   948,  -182,   948,  -182,  -182,  -182,  -182,
     278,  -182,   284,  -182,  -182,   289,  -182,  -182,   287,   602,
     288,  -182,  -182,  -182,  -182,   602,   269,  -182,   602,  -182,
    -182,  -182
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   144,   115,    99,   100,   101,   102,   103,   105,   106,
     107,   108,   111,   112,   109,   110,   140,   141,   104,   119,
     120,     0,     0,   151,     0,     2,     3,     5,     0,     6,
      11,    13,   113,     0,   114,    15,     0,   143,     0,   135,
       0,     0,   155,   153,   152,     1,     4,    93,     0,    95,
      97,    12,    14,   118,     0,    16,     0,     0,   198,    10,
       0,     0,     0,   142,     0,   138,     0,   136,   145,   156,
     154,     0,    94,     0,     8,     0,     0,   125,     0,   121,
       0,   127,    18,    20,    19,    17,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    40,    41,    42,    43,    44,   202,   194,
      23,    33,    45,     0,    47,    51,    54,    57,    62,    65,
      67,    69,    71,    73,    75,    77,    91,     0,   200,   185,
     186,     0,     0,   187,   188,   189,   190,    97,   199,     9,
     164,   150,   163,     0,   157,   159,     0,    17,   147,    45,
      92,     0,     0,     0,     0,   133,    96,     0,   180,    98,
       7,     0,   124,   117,   122,     0,     0,   128,   130,   126,
       0,     0,    37,     0,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,   212,   213,   214,     0,     0,   166,
       0,     0,    29,    30,     0,     0,     0,    90,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    79,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   196,     0,   195,   201,     0,     0,   161,   168,   162,
     169,   148,     0,   149,     0,   146,   134,   139,   137,   183,
       0,   116,   131,     0,   123,     0,   191,     0,     0,   193,
       0,     0,     0,     0,     0,   211,   215,    22,     0,   168,
     167,     0,    28,    25,     0,    31,     0,    27,    78,    48,
      49,    50,    52,    53,    55,    56,    60,    61,    58,    59,
      63,    64,    66,    68,    70,    72,    74,     0,   197,   176,
       0,     0,   172,     0,   170,     0,     0,   158,   160,   165,
       0,   181,   129,   132,    38,   192,     0,     0,     0,     0,
       0,    46,    26,     0,    24,     0,   177,   171,   173,   178,
       0,   174,     0,   182,   184,   204,   206,   207,     0,     0,
       0,    32,    76,   179,   175,     0,     0,   209,     0,   205,
     208,   210
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,  -182,  -182,   330,  -182,     0,  -182,  -182,  -182,   -61,
    -182,  -100,    22,    27,    51,    24,   132,   133,   131,   140,
     145,  -182,   -58,   -71,  -182,   -89,   -50,     8,  -182,   303,
    -182,   -30,  -182,  -182,   283,   -68,   -36,  -182,   122,  -182,
     326,   257,    20,   -13,   -35,    -6,  -182,   -55,  -182,   173,
    -182,   256,  -119,  -181,  -141,  -182,   -90,  -182,    72,     6,
     294,  -164,  -182,  -182,  -182
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    24,    25,    26,    27,    57,   110,   111,   274,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   209,   127,   151,    58,    48,    49,
      30,    31,    32,    33,    78,    79,    80,   166,   167,    34,
      66,    67,    35,    36,    37,    38,    44,   300,   144,   145,
     146,   190,   301,   240,   159,   250,   128,   129,   130,    60,
     132,   133,   134,   135,   136
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,   149,   158,    63,   150,   181,   143,    64,    29,    41,
     164,   187,   188,   210,    68,    50,   249,    43,   264,    39,
       1,     1,    53,   239,    77,    28,   172,   174,   175,   149,
      51,    52,   150,    29,    65,    55,     1,   154,    70,    45,
     176,   162,   234,    42,   137,   169,    77,    77,    77,    16,
      17,    77,   149,    76,   228,   155,    75,   304,   137,     1,
       1,   142,   131,   153,    69,   189,   170,   168,   138,     1,
     270,    77,   243,   177,    81,    23,   244,   183,    22,   235,
     256,   236,   188,   138,   188,    23,   158,   259,   304,   260,
     261,   262,   149,   164,    22,   150,    81,    81,    81,    40,
     320,    81,    54,   247,   149,   178,   276,   150,    59,   218,
     219,   279,   280,   281,    71,   252,   229,   235,    22,   236,
     179,    81,    74,   275,    23,    23,    61,    22,    62,   237,
      72,    77,   139,   253,    23,   189,   238,   165,   278,   138,
     297,    77,   234,   180,   191,   192,   193,   160,    47,   254,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   315,   334,
     154,   321,   220,   221,   310,   149,   322,   268,   150,   236,
     323,    81,   182,   269,    23,   305,   303,   306,   246,   184,
     211,    81,   311,   185,   149,   212,   213,   150,   194,   268,
     195,   236,   196,    63,   225,   313,   197,   224,   214,   215,
     149,   226,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,    41,   216,   217,   227,   335,   336,   337,   238,
     338,   340,   222,   223,   230,   142,   282,   283,    73,   158,
     168,   241,   142,   284,   285,   149,   290,   291,   150,   347,
     330,   242,   341,   245,   255,   349,   332,   258,   351,   263,
     265,   267,   269,   266,   149,   271,   272,   342,   142,   286,
     287,   288,   289,   277,   309,   208,   314,   316,    82,    83,
      84,    85,   317,    86,    87,     2,    88,    89,   318,   319,
     325,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   142,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   324,    90,    91,    92,
     326,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     328,   163,   327,   343,   345,   102,   103,   104,   105,   106,
     107,   344,   346,   348,   350,    46,   292,   294,   293,   161,
     108,    56,   109,    82,    83,    84,    85,   295,    86,    87,
       2,    88,    89,   296,   156,   312,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     152,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   248,    90,    91,    92,   308,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   232,   251,   257,     0,     0,
     102,   103,   104,   105,   106,   107,   140,     0,     0,     0,
       0,     0,     0,     0,     0,   108,    56,   231,    82,    83,
      84,    85,     0,    86,    87,     0,    88,    89,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,    82,    83,    84,    85,     0,    86,
      87,     0,    88,    89,     0,   141,     0,    90,    91,    92,
       0,    93,    94,    95,    96,    97,    98,    99,   100,   101,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     108,    56,   233,    90,    91,    92,     0,    93,    94,    95,
      96,    97,    98,    99,   100,   101,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,     1,     0,     0,
       0,     0,     0,     0,     0,     0,   108,    56,   298,    82,
      83,    84,   147,     0,    86,    87,     0,    88,    89,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,    82,    83,    84,    85,     0,
      86,    87,     0,    88,    89,   235,   299,   236,     0,     0,
       0,     0,    23,    82,    83,    84,   147,     0,    86,    87,
     101,    88,    89,     0,     0,     0,   102,   103,   104,   105,
     106,   107,    82,    83,    84,   147,     0,    86,    87,     0,
      88,    89,   157,   333,    90,    91,    92,     0,    93,    94,
      95,    96,    97,    98,    99,   100,   101,     0,     0,     0,
       0,     0,   102,   103,   104,   105,   106,   107,     0,     0,
       0,     0,     0,     0,   101,     0,     0,   108,    56,     0,
     102,   103,   104,   105,   106,   107,    82,    83,    84,   147,
       0,    86,    87,   101,    88,    89,   157,     0,     0,   102,
     103,   104,   105,   106,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   186,     0,     0,     0,     0,     0,
       0,     0,    82,    83,    84,   147,     0,    86,    87,     0,
      88,    89,     0,     0,     0,    82,    83,    84,   147,     0,
      86,    87,     0,    88,    89,     0,     0,   101,     0,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,     0,
       0,     0,     0,     2,     0,     0,     0,     0,   108,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   101,     0,     0,   148,     0,     0,   102,
     103,   104,   105,   106,   107,     0,   101,     0,     0,     0,
       0,     0,   102,   103,   104,   105,   106,   107,    82,    83,
      84,   147,     0,    86,    87,     0,    88,    89,     0,     0,
      82,    83,    84,   147,     0,    86,    87,     0,    88,    89,
       0,     0,    82,    83,    84,   147,     0,    86,    87,     0,
      88,    89,     0,     0,    82,    83,    84,   147,     0,    86,
      87,     0,    88,    89,     0,     0,    82,    83,    84,   147,
       0,    86,    87,     0,    88,    89,     0,     0,     0,   101,
     273,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,   101,     0,     0,   302,     0,     0,   102,   103,   104,
     105,   106,   107,   101,     0,     0,   331,     0,     0,   102,
     103,   104,   105,   106,   107,   101,   339,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,   171,     0,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,    82,
      83,    84,   147,     0,    86,    87,     0,    88,    89,     0,
       0,    82,    83,    84,   147,     0,    86,    87,     0,    88,
      89,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
     173,     0,     0,     0,     0,     0,   102,   103,   104,   105,
     106,   107,   101,     0,    73,     0,    56,     0,   102,   103,
     104,   105,   106,   107,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,    23,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,   268,   299,   236,     0,     0,     0,     0,    23,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   329,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   307,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     2,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    62,    73,    38,    62,    95,    61,    86,     0,    22,
      78,   100,   101,   113,    65,    28,   157,    23,   182,     6,
       6,     6,     6,   142,    54,    25,    87,    88,    89,    90,
      30,    31,    90,    25,     6,    35,     6,    69,    44,     0,
      90,    77,   132,    23,    57,    81,    76,    77,    78,    45,
      46,    81,   113,    86,    20,    87,    50,   238,    71,     6,
       6,    61,    56,    84,    44,   101,    83,    80,    60,     6,
     189,   101,    65,    83,    54,    71,    69,     6,    64,    64,
     170,    66,   171,    75,   173,    71,   157,   177,   269,   178,
     179,   180,   153,   161,    64,   153,    76,    77,    78,    86,
     264,    81,    86,   153,   165,    64,   195,   165,    36,    15,
      16,   211,   212,   213,    69,   165,    82,    64,    64,    66,
      64,   101,    50,   194,    71,    71,    64,    64,    66,   142,
      85,   161,    60,    69,    71,   171,   142,    83,   209,   131,
     229,   171,   232,    64,    10,    11,    12,    75,    85,    85,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   258,   310,
      69,   271,    78,    79,    69,   236,    65,    64,   236,    66,
      69,   161,    64,   189,    71,    64,   236,    66,    87,    85,
      71,   171,    87,    85,   255,    76,    77,   255,    64,    64,
      66,    66,    68,   238,    80,   255,    15,    70,    72,    73,
     271,    81,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   235,    13,    14,    19,   316,   317,   318,   235,
     319,   320,    17,    18,    85,   235,   214,   215,    84,   310,
     253,    65,   242,   216,   217,   306,   222,   223,   306,   339,
     305,    69,   323,    67,    83,   345,   306,    83,   348,    57,
      85,    65,   268,    85,   325,    65,     6,   325,   268,   218,
     219,   220,   221,     6,     6,    84,    65,    65,     3,     4,
       5,     6,    65,     8,     9,    31,    11,    12,    65,    64,
      83,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,   305,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    67,    52,    53,    54,
      65,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      67,    87,    65,    65,    55,    70,    71,    72,    73,    74,
      75,    67,    65,    65,    85,    25,   224,   226,   225,    76,
      85,    86,    87,     3,     4,     5,     6,   227,     8,     9,
      31,    11,    12,   228,    71,   253,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      64,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,   154,    52,    53,    54,   242,    56,    57,    58,    59,
      60,    61,    62,    63,    64,   131,    87,   171,    -1,    -1,
      70,    71,    72,    73,    74,    75,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,     3,     4,
       5,     6,    -1,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    11,    12,    -1,    65,    -1,    52,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    52,    53,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,     3,
       4,     5,     6,    -1,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    11,    12,    64,    65,    66,    -1,    -1,
      -1,    -1,    71,     3,     4,     5,     6,    -1,     8,     9,
      64,    11,    12,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,     3,     4,     5,     6,    -1,     8,     9,    -1,
      11,    12,    86,    87,    52,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    85,    86,    -1,
      70,    71,    72,    73,    74,    75,     3,     4,     5,     6,
      -1,     8,     9,    64,    11,    12,    86,    -1,    -1,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    11,    12,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    85,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    64,    -1,    -1,    67,    -1,    -1,    70,
      71,    72,    73,    74,    75,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,     3,     4,
       5,     6,    -1,     8,     9,    -1,    11,    12,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    11,    12,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      11,    12,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    11,    12,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    64,
      65,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    64,    -1,    -1,    67,    -1,    -1,    70,    71,    72,
      73,    74,    75,    64,    -1,    -1,    67,    -1,    -1,    70,
      71,    72,    73,    74,    75,    64,    65,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    64,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,     3,
       4,     5,     6,    -1,     8,     9,    -1,    11,    12,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    11,
      12,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
      64,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,    64,    -1,    84,    -1,    86,    -1,    70,    71,
      72,    73,    74,    75,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    31,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    64,    71,    89,    90,    91,    92,    93,   115,
     118,   119,   120,   121,   127,   130,   131,   132,   133,     6,
      86,   131,   130,   133,   134,     0,    91,    85,   116,   117,
     131,    93,    93,     6,    86,    93,    86,    93,   115,   146,
     147,    64,    66,   132,    86,     6,   128,   129,    65,   130,
     133,    69,    85,    84,   146,   147,    86,   119,   122,   123,
     124,   130,     3,     4,     5,     6,     8,     9,    11,    12,
      52,    53,    54,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    70,    71,    72,    73,    74,    75,    85,    87,
      94,    95,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   113,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   131,   115,   146,
       6,    65,    93,   135,   136,   137,   138,     6,    67,    97,
     110,   114,   128,    84,    69,    87,   117,    86,   111,   142,
     146,   122,   124,    87,   123,    83,   125,   126,   131,   124,
      83,    64,    97,    64,    97,    97,   114,    83,    64,    64,
      64,   144,    64,     6,    85,    85,    85,   113,   113,   124,
     139,    10,    11,    12,    64,    66,    68,    15,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    84,   112,
      99,    71,    76,    77,    72,    73,    13,    14,    15,    16,
      78,    79,    17,    18,    70,    80,    81,    19,    20,    82,
      85,    87,   148,    87,   144,    64,    66,   131,   133,   140,
     141,    65,    69,    65,    69,    67,    87,   114,   129,   142,
     143,    87,   114,    69,    85,    83,   144,   139,    83,   144,
     113,   113,   113,    57,   149,    85,    85,    65,    64,   133,
     140,    65,     6,    65,    96,   111,   113,     6,   111,    99,
      99,    99,   100,   100,   101,   101,   102,   102,   102,   102,
     103,   103,   104,   105,   106,   107,   108,   113,    87,    65,
     135,   140,    67,   114,   141,    64,    66,    51,   137,     6,
      69,    87,   126,   114,    65,   144,    65,    65,    65,    64,
     149,    99,    65,    69,    67,    83,    65,    65,    67,    65,
     135,    67,   114,    87,   142,   144,   144,   144,   113,    65,
     113,   111,   110,    65,    67,    55,    65,   144,    65,   144,
      85,   144
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    90,    90,    91,    91,    92,    92,    92,
      92,    93,    93,    93,    93,    93,    93,    94,    94,    94,
      94,    94,    94,    95,    95,    95,    95,    95,    95,    95,
      95,    96,    96,    97,    97,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    99,    99,   100,   100,   100,
     100,   101,   101,   101,   102,   102,   102,   103,   103,   103,
     103,   103,   104,   104,   104,   105,   105,   106,   106,   107,
     107,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   113,   114,   115,   115,   116,   116,   117,   117,   118,
     118,   118,   118,   118,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   120,   120,   120,   121,
     121,   122,   122,   123,   124,   124,   124,   124,   125,   125,
     126,   126,   126,   127,   127,   127,   128,   128,   129,   129,
     130,   130,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   133,   133,   133,   133,   134,   134,   135,   135,   136,
     136,   137,   137,   137,   138,   138,   139,   139,   140,   140,
     140,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     142,   142,   142,   143,   143,   144,   144,   144,   144,   144,
     144,   145,   145,   145,   146,   146,   146,   146,   147,   147,
     148,   148,   149,   149,   150,   150,   150,   151,   151,   151,
     151,   152,   152,   152,   152,   152
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     4,     3,     3,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     3,     1,     4,     3,     4,     3,     3,     2,
       2,     1,     3,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     2,     1,
       1,     1,     2,     3,     2,     1,     2,     1,     1,     3,
       1,     2,     3,     4,     5,     2,     1,     3,     1,     3,
       1,     1,     2,     1,     1,     3,     4,     3,     4,     4,
       3,     1,     2,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     2,     1,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     3,     4,     1,     2,
       1,     2,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     3,     2,     2,     2,     3
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
#line 91 "src/parser.y"
                      {g_root = (yyvsp[0].node);}
#line 1658 "src/parser.tab.cpp"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 94 "src/parser.y"
                               {(yyval.node) = (yyvsp[0].node);}
#line 1664 "src/parser.tab.cpp"
    break;

  case 8: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 105 "src/parser.y"
                                                               { (yyval.node) = new FunctionDefinition(FunctionDeclaration((yyvsp[-2].type_), std::move((yyvsp[-1].node))), (yyvsp[0].scoper));}
#line 1670 "src/parser.tab.cpp"
    break;

  case 13: /* declaration_specifiers: type_specifier  */
#line 113 "src/parser.y"
                         { (yyval.type_) = (yyvsp[0].type_); }
#line 1676 "src/parser.tab.cpp"
    break;

  case 17: /* primary_expression: IDENTIFIER  */
#line 120 "src/parser.y"
                     {(yyval.node) = new Identifier(*(yyvsp[0].string));}
#line 1682 "src/parser.tab.cpp"
    break;

  case 18: /* primary_expression: INT_LITERAL  */
#line 121 "src/parser.y"
                      {(yyval.node) = new IntLiteral((yyvsp[0].number));}
#line 1688 "src/parser.tab.cpp"
    break;

  case 19: /* primary_expression: HEX_LITERAL  */
#line 122 "src/parser.y"
                      {(yyval.node) = new IntLiteral((yyvsp[0].number));}
#line 1694 "src/parser.tab.cpp"
    break;

  case 20: /* primary_expression: FLOAT_LITERAL  */
#line 123 "src/parser.y"
                        {(yyval.node) = new FloatLiteral((yyvsp[0].floatlit));}
#line 1700 "src/parser.tab.cpp"
    break;

  case 22: /* primary_expression: '(' expression ')'  */
#line 125 "src/parser.y"
                             {(yyval.node)=(yyvsp[-1].node);}
#line 1706 "src/parser.tab.cpp"
    break;

  case 23: /* postfix_expression: primary_expression  */
#line 129 "src/parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1712 "src/parser.tab.cpp"
    break;

  case 33: /* unary_expression: postfix_expression  */
#line 145 "src/parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1718 "src/parser.tab.cpp"
    break;

  case 37: /* unary_expression: SIZEOF unary_expression  */
#line 150 "src/parser.y"
                                  {(yyval.node) = new SizeOf((yyvsp[0].node));}
#line 1724 "src/parser.tab.cpp"
    break;

  case 38: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 151 "src/parser.y"
                                   {(yyval.node) = new SizeOf((yyvsp[-1].node));}
#line 1730 "src/parser.tab.cpp"
    break;

  case 45: /* cast_expression: unary_expression  */
#line 164 "src/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1736 "src/parser.tab.cpp"
    break;

  case 47: /* multiplicative_expression: cast_expression  */
#line 169 "src/parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 1742 "src/parser.tab.cpp"
    break;

  case 48: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 170 "src/parser.y"
                                                        {(yyval.node) = new BinaryOperator(BinaryOperator::MULTIPLY, (yyvsp[-2].node), (yyvsp[0].node));}
#line 1748 "src/parser.tab.cpp"
    break;

  case 49: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 171 "src/parser.y"
                                                        {(yyval.node) = new BinaryOperator(BinaryOperator::DIVIDE, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1754 "src/parser.tab.cpp"
    break;

  case 50: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 172 "src/parser.y"
                                                        {(yyval.node) = new BinaryOperator(BinaryOperator::MODULO, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1760 "src/parser.tab.cpp"
    break;

  case 51: /* additive_expression: multiplicative_expression  */
#line 176 "src/parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1766 "src/parser.tab.cpp"
    break;

  case 52: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 177 "src/parser.y"
                                                            {(yyval.node) = new BinaryOperator(BinaryOperator::ADD, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1772 "src/parser.tab.cpp"
    break;

  case 53: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 178 "src/parser.y"
                                                            {(yyval.node) = new BinaryOperator(BinaryOperator::SUBTRACT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1778 "src/parser.tab.cpp"
    break;

  case 54: /* shift_expression: additive_expression  */
#line 182 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1784 "src/parser.tab.cpp"
    break;

  case 55: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 183 "src/parser.y"
                                                       {(yyval.node) = new BinaryOperator(BinaryOperator::LEFT_SHIFT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1790 "src/parser.tab.cpp"
    break;

  case 56: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 184 "src/parser.y"
                                                        {(yyval.node) = new BinaryOperator(BinaryOperator::RIGHT_SHIFT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1796 "src/parser.tab.cpp"
    break;

  case 57: /* relational_expression: shift_expression  */
#line 188 "src/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1802 "src/parser.tab.cpp"
    break;

  case 58: /* relational_expression: relational_expression '<' shift_expression  */
#line 189 "src/parser.y"
                                                     {(yyval.node) = new BinaryOperator(BinaryOperator::LESS_THAN, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1808 "src/parser.tab.cpp"
    break;

  case 59: /* relational_expression: relational_expression '>' shift_expression  */
#line 190 "src/parser.y"
                                                     {(yyval.node) = new BinaryOperator(BinaryOperator::GREATER_THAN, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1814 "src/parser.tab.cpp"
    break;

  case 60: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 191 "src/parser.y"
                                                       {(yyval.node) = new BinaryOperator(BinaryOperator::LESS_EQ, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1820 "src/parser.tab.cpp"
    break;

  case 61: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 192 "src/parser.y"
                                                       {(yyval.node) = new BinaryOperator(BinaryOperator::GREATER_EQ, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1826 "src/parser.tab.cpp"
    break;

  case 62: /* equality_expression: relational_expression  */
#line 196 "src/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1832 "src/parser.tab.cpp"
    break;

  case 63: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 197 "src/parser.y"
                                                          {(yyval.node) = new BinaryOperator(BinaryOperator::EQUAL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1838 "src/parser.tab.cpp"
    break;

  case 64: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 198 "src/parser.y"
                                                          {(yyval.node) = new BinaryOperator(BinaryOperator::NEQUAL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1844 "src/parser.tab.cpp"
    break;

  case 65: /* and_expression: equality_expression  */
#line 202 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1850 "src/parser.tab.cpp"
    break;

  case 66: /* and_expression: and_expression '&' equality_expression  */
#line 203 "src/parser.y"
                                                 {(yyval.node) = new BinaryOperator(BinaryOperator::AND, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1856 "src/parser.tab.cpp"
    break;

  case 67: /* exclusive_or_expression: and_expression  */
#line 207 "src/parser.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 1862 "src/parser.tab.cpp"
    break;

  case 68: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 208 "src/parser.y"
                                                     {(yyval.node) = new BinaryOperator(BinaryOperator::XOR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1868 "src/parser.tab.cpp"
    break;

  case 69: /* inclusive_or_expression: exclusive_or_expression  */
#line 212 "src/parser.y"
                                  { (yyval.node) = (yyvsp[0].node); }
#line 1874 "src/parser.tab.cpp"
    break;

  case 70: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 213 "src/parser.y"
                                                              {(yyval.node) = new BinaryOperator(BinaryOperator::OR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1880 "src/parser.tab.cpp"
    break;

  case 71: /* logical_and_expression: inclusive_or_expression  */
#line 217 "src/parser.y"
                                  { (yyval.node) = (yyvsp[0].node); }
#line 1886 "src/parser.tab.cpp"
    break;

  case 72: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 218 "src/parser.y"
                                                                {(yyval.node) = new BinaryOperator(BinaryOperator::LOGICAL_AND, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1892 "src/parser.tab.cpp"
    break;

  case 73: /* logical_or_expression: logical_and_expression  */
#line 222 "src/parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 1898 "src/parser.tab.cpp"
    break;

  case 74: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 223 "src/parser.y"
                                                             {(yyval.node) = new BinaryOperator(BinaryOperator::LOGICAL_OR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1904 "src/parser.tab.cpp"
    break;

  case 75: /* conditional_expression: logical_or_expression  */
#line 227 "src/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1910 "src/parser.tab.cpp"
    break;

  case 77: /* assignment_expression: conditional_expression  */
#line 232 "src/parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 1916 "src/parser.tab.cpp"
    break;

  case 78: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 233 "src/parser.y"
                                                                     {(yyval.node) = new Assign((yyvsp[-2].node), (yyvsp[-1].c), (yyvsp[0].node));}
#line 1922 "src/parser.tab.cpp"
    break;

  case 79: /* assignment_operator: '='  */
#line 237 "src/parser.y"
              {(yyval.c) = '=' ;}
#line 1928 "src/parser.tab.cpp"
    break;

  case 80: /* assignment_operator: MUL_ASSIGN  */
#line 238 "src/parser.y"
                     {(yyval.c) = '*';}
#line 1934 "src/parser.tab.cpp"
    break;

  case 81: /* assignment_operator: DIV_ASSIGN  */
#line 239 "src/parser.y"
                      {(yyval.c) = '/';}
#line 1940 "src/parser.tab.cpp"
    break;

  case 82: /* assignment_operator: MOD_ASSIGN  */
#line 240 "src/parser.y"
                      {(yyval.c) = '%'; }
#line 1946 "src/parser.tab.cpp"
    break;

  case 83: /* assignment_operator: ADD_ASSIGN  */
#line 241 "src/parser.y"
                     {(yyval.c) = '+';}
#line 1952 "src/parser.tab.cpp"
    break;

  case 84: /* assignment_operator: SUB_ASSIGN  */
#line 242 "src/parser.y"
                      {(yyval.c) = '-';}
#line 1958 "src/parser.tab.cpp"
    break;

  case 85: /* assignment_operator: LEFT_ASSIGN  */
#line 243 "src/parser.y"
                       {(yyval.c) = '<';}
#line 1964 "src/parser.tab.cpp"
    break;

  case 86: /* assignment_operator: RIGHT_ASSIGN  */
#line 244 "src/parser.y"
                       {(yyval.c) = '>';}
#line 1970 "src/parser.tab.cpp"
    break;

  case 87: /* assignment_operator: AND_ASSIGN  */
#line 245 "src/parser.y"
                      {(yyval.c) = '&';}
#line 1976 "src/parser.tab.cpp"
    break;

  case 88: /* assignment_operator: XOR_ASSIGN  */
#line 246 "src/parser.y"
                      {(yyval.c) = 'x';}
#line 1982 "src/parser.tab.cpp"
    break;

  case 89: /* assignment_operator: OR_ASSIGN  */
#line 247 "src/parser.y"
                     {(yyval.c) = '|';}
#line 1988 "src/parser.tab.cpp"
    break;

  case 90: /* assignment_operator: LE_OP  */
#line 248 "src/parser.y"
                {(yyval.c) = 'l';}
#line 1994 "src/parser.tab.cpp"
    break;

  case 91: /* expression: assignment_expression  */
#line 252 "src/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2000 "src/parser.tab.cpp"
    break;

  case 94: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 261 "src/parser.y"
                                                          {(yyval.node) = new varDeclarator((yyvsp[-2].type_), (yyvsp[-1].initDecl));}
#line 2006 "src/parser.tab.cpp"
    break;

  case 95: /* init_declarator_list: init_declarator  */
#line 265 "src/parser.y"
                          {(yyval.initDecl) = (yyvsp[0].initDecl);}
#line 2012 "src/parser.tab.cpp"
    break;

  case 96: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 266 "src/parser.y"
                                                   {(yyval.initDecl) = (yyvsp[-2].initDecl);}
#line 2018 "src/parser.tab.cpp"
    break;

  case 97: /* init_declarator: declarator  */
#line 270 "src/parser.y"
                     {std::cout << "initDeclarator($1, nullptr)" << std::endl; (yyval.initDecl) = new initDeclarator((yyvsp[0].node), nullptr);}
#line 2024 "src/parser.tab.cpp"
    break;

  case 98: /* init_declarator: declarator '=' initializer  */
#line 271 "src/parser.y"
                                     {(yyval.initDecl) = new initDeclarator((yyvsp[-2].node), (yyvsp[0].node));}
#line 2030 "src/parser.tab.cpp"
    break;

  case 105: /* type_specifier: CHAR  */
#line 284 "src/parser.y"
               {(yyval.type_) = new Type(Type::CHAR);}
#line 2036 "src/parser.tab.cpp"
    break;

  case 107: /* type_specifier: INT  */
#line 286 "src/parser.y"
              {(yyval.type_) = new Type(Type::INT);}
#line 2042 "src/parser.tab.cpp"
    break;

  case 109: /* type_specifier: FLOAT  */
#line 288 "src/parser.y"
                {(yyval.type_) = new Type(Type::FLOAT);}
#line 2048 "src/parser.tab.cpp"
    break;

  case 110: /* type_specifier: DOUBLE  */
#line 289 "src/parser.y"
                 {(yyval.type_) = new Type(Type::DOUBLE);}
#line 2054 "src/parser.tab.cpp"
    break;

  case 112: /* type_specifier: UNSIGNED  */
#line 291 "src/parser.y"
                   {(yyval.type_) = new Type(Type::UNSIGNED_INT);}
#line 2060 "src/parser.tab.cpp"
    break;

  case 125: /* specifier_qualifier_list: type_specifier  */
#line 319 "src/parser.y"
                         {(yyval.node)=(yyvsp[0].type_);}
#line 2066 "src/parser.tab.cpp"
    break;

  case 143: /* declarator: direct_declarator  */
#line 358 "src/parser.y"
                            {(yyval.node)=(yyvsp[0].node);}
#line 2072 "src/parser.tab.cpp"
    break;

  case 144: /* direct_declarator: IDENTIFIER  */
#line 362 "src/parser.y"
                     { (yyval.node) = new Identifier(*(yyvsp[0].string));}
#line 2078 "src/parser.tab.cpp"
    break;

  case 148: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 366 "src/parser.y"
                                                        {(yyval.node) = new FuncWithArgs((yyvsp[-3].node), (yyvsp[-1].declList)); }
#line 2084 "src/parser.tab.cpp"
    break;

  case 150: /* direct_declarator: direct_declarator '(' ')'  */
#line 368 "src/parser.y"
                                    { (yyval.node) = (yyvsp[-2].node); }
#line 2090 "src/parser.tab.cpp"
    break;

  case 157: /* parameter_type_list: parameter_list  */
#line 385 "src/parser.y"
                         {(yyval.declList) = (yyvsp[0].declList);}
#line 2096 "src/parser.tab.cpp"
    break;

  case 159: /* parameter_list: parameter_declaration  */
#line 390 "src/parser.y"
                                {(yyval.declList)=(yyvsp[0].declList);}
#line 2102 "src/parser.tab.cpp"
    break;

  case 160: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 391 "src/parser.y"
                                                   {(yyval.declList) = appendArgList((yyvsp[-2].declList), (yyvsp[0].declList));}
#line 2108 "src/parser.tab.cpp"
    break;

  case 161: /* parameter_declaration: declaration_specifiers declarator  */
#line 395 "src/parser.y"
                                            {(yyval.declList) = makeArgList(new varDeclarator((yyvsp[-1].type_), new initDeclarator((yyvsp[0].node), nullptr)));}
#line 2114 "src/parser.tab.cpp"
    break;

  case 166: /* type_name: specifier_qualifier_list  */
#line 406 "src/parser.y"
                                   {(yyval.node)=(yyvsp[0].node);}
#line 2120 "src/parser.tab.cpp"
    break;

  case 180: /* initializer: assignment_expression  */
#line 429 "src/parser.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 2126 "src/parser.tab.cpp"
    break;

  case 183: /* initializer_list: initializer  */
#line 435 "src/parser.y"
                      {(yyval.node)=(yyvsp[0].node);}
#line 2132 "src/parser.tab.cpp"
    break;

  case 185: /* statement: labeled_statement  */
#line 440 "src/parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2138 "src/parser.tab.cpp"
    break;

  case 186: /* statement: compound_statement  */
#line 441 "src/parser.y"
                             { (yyval.node) = (yyvsp[0].scoper); }
#line 2144 "src/parser.tab.cpp"
    break;

  case 187: /* statement: expression_statement  */
#line 442 "src/parser.y"
                               {(yyval.node)=(yyvsp[0].node);}
#line 2150 "src/parser.tab.cpp"
    break;

  case 188: /* statement: selection_statement  */
#line 443 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 2156 "src/parser.tab.cpp"
    break;

  case 189: /* statement: iteration_statement  */
#line 444 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 2162 "src/parser.tab.cpp"
    break;

  case 190: /* statement: jump_statement  */
#line 445 "src/parser.y"
                         {(yyval.node) = (yyvsp[0].node);}
#line 2168 "src/parser.tab.cpp"
    break;

  case 194: /* compound_statement: '{' '}'  */
#line 455 "src/parser.y"
                  { (yyval.scoper) = new makeScope(new NodeList(), new NodeList()); }
#line 2174 "src/parser.tab.cpp"
    break;

  case 195: /* compound_statement: '{' statement_list '}'  */
#line 456 "src/parser.y"
                                 { (yyval.scoper) = new makeScope(new NodeList(), (yyvsp[-1].listptr)); }
#line 2180 "src/parser.tab.cpp"
    break;

  case 196: /* compound_statement: '{' declaration_list '}'  */
#line 457 "src/parser.y"
                                   { (yyval.scoper) = new makeScope((yyvsp[-1].listptr), new NodeList()); }
#line 2186 "src/parser.tab.cpp"
    break;

  case 197: /* compound_statement: '{' declaration_list statement_list '}'  */
#line 458 "src/parser.y"
                                                  { (yyval.scoper) = new makeScope((yyvsp[-2].listptr), (yyvsp[-1].listptr)); }
#line 2192 "src/parser.tab.cpp"
    break;

  case 198: /* declaration_list: declaration  */
#line 463 "src/parser.y"
                      {(yyval.listptr) = makeList((yyvsp[0].node)); }
#line 2198 "src/parser.tab.cpp"
    break;

  case 199: /* declaration_list: declaration_list declaration  */
#line 464 "src/parser.y"
                                       {(yyval.listptr) = appendList((yyvsp[-1].listptr), (yyvsp[0].node));}
#line 2204 "src/parser.tab.cpp"
    break;

  case 200: /* statement_list: statement  */
#line 468 "src/parser.y"
                    {(yyval.listptr) = makeList((yyvsp[0].node)); }
#line 2210 "src/parser.tab.cpp"
    break;

  case 201: /* statement_list: statement_list statement  */
#line 469 "src/parser.y"
                                   {(yyval.listptr) = appendList((yyvsp[-1].listptr), (yyvsp[0].node));}
#line 2216 "src/parser.tab.cpp"
    break;

  case 215: /* jump_statement: RETURN expression ';'  */
#line 495 "src/parser.y"
                                {(yyval.node) = new Return((yyvsp[-1].node));}
#line 2222 "src/parser.tab.cpp"
    break;


#line 2226 "src/parser.tab.cpp"

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

#line 498 "src/parser.y"


const ASTNode *g_root; // Definition of variable (to match declaration earlier)

const ASTNode *parseAST(){
	g_root=0;
	yyparse();
	return g_root;
	
};

