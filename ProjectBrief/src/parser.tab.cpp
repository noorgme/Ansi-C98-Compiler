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
  YYSYMBOL_IDENTIFIER = 4,                 /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 5,                   /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 6,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 7,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 8,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 9,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 10,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 11,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 12,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 13,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 14,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 15,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 16,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 17,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 18,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 19,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 20,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 21,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 22,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 23,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 24,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 25,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 26,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 27,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 28,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 29,                 /* TYPE_NAME  */
  YYSYMBOL_TYPEDEF = 30,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 31,                    /* EXTERN  */
  YYSYMBOL_STATIC = 32,                    /* STATIC  */
  YYSYMBOL_AUTO = 33,                      /* AUTO  */
  YYSYMBOL_REGISTER = 34,                  /* REGISTER  */
  YYSYMBOL_CHAR = 35,                      /* CHAR  */
  YYSYMBOL_SHORT = 36,                     /* SHORT  */
  YYSYMBOL_INT = 37,                       /* INT  */
  YYSYMBOL_LONG = 38,                      /* LONG  */
  YYSYMBOL_SIGNED = 39,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 40,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 41,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 42,                    /* DOUBLE  */
  YYSYMBOL_CONST = 43,                     /* CONST  */
  YYSYMBOL_VOLATILE = 44,                  /* VOLATILE  */
  YYSYMBOL_VOID = 45,                      /* VOID  */
  YYSYMBOL_STRUCT = 46,                    /* STRUCT  */
  YYSYMBOL_UNION = 47,                     /* UNION  */
  YYSYMBOL_ENUM = 48,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 49,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 50,                      /* CASE  */
  YYSYMBOL_DEFAULT = 51,                   /* DEFAULT  */
  YYSYMBOL_IF = 52,                        /* IF  */
  YYSYMBOL_ELSE = 53,                      /* ELSE  */
  YYSYMBOL_SWITCH = 54,                    /* SWITCH  */
  YYSYMBOL_WHILE = 55,                     /* WHILE  */
  YYSYMBOL_DO = 56,                        /* DO  */
  YYSYMBOL_FOR = 57,                       /* FOR  */
  YYSYMBOL_GOTO = 58,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 59,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 60,                     /* BREAK  */
  YYSYMBOL_RETURN = 61,                    /* RETURN  */
  YYSYMBOL_62_ = 62,                       /* '('  */
  YYSYMBOL_63_ = 63,                       /* ')'  */
  YYSYMBOL_64_ = 64,                       /* '['  */
  YYSYMBOL_65_ = 65,                       /* ']'  */
  YYSYMBOL_66_ = 66,                       /* '.'  */
  YYSYMBOL_67_ = 67,                       /* ','  */
  YYSYMBOL_68_ = 68,                       /* '&'  */
  YYSYMBOL_69_ = 69,                       /* '*'  */
  YYSYMBOL_70_ = 70,                       /* '+'  */
  YYSYMBOL_71_ = 71,                       /* '-'  */
  YYSYMBOL_72_ = 72,                       /* '~'  */
  YYSYMBOL_73_ = 73,                       /* '!'  */
  YYSYMBOL_74_ = 74,                       /* '/'  */
  YYSYMBOL_75_ = 75,                       /* '%'  */
  YYSYMBOL_76_ = 76,                       /* '<'  */
  YYSYMBOL_77_ = 77,                       /* '>'  */
  YYSYMBOL_78_ = 78,                       /* '^'  */
  YYSYMBOL_79_ = 79,                       /* '|'  */
  YYSYMBOL_80_ = 80,                       /* '?'  */
  YYSYMBOL_81_ = 81,                       /* ':'  */
  YYSYMBOL_82_ = 82,                       /* '='  */
  YYSYMBOL_83_ = 83,                       /* ';'  */
  YYSYMBOL_84_ = 84,                       /* '{'  */
  YYSYMBOL_85_ = 85,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 86,                  /* $accept  */
  YYSYMBOL_ROOT = 87,                      /* ROOT  */
  YYSYMBOL_translation_unit = 88,          /* translation_unit  */
  YYSYMBOL_external_declaration = 89,      /* external_declaration  */
  YYSYMBOL_function_definition = 90,       /* function_definition  */
  YYSYMBOL_declaration_specifiers = 91,    /* declaration_specifiers  */
  YYSYMBOL_primary_expression = 92,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 93,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 94,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 95,          /* unary_expression  */
  YYSYMBOL_unary_operator = 96,            /* unary_operator  */
  YYSYMBOL_cast_expression = 97,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 98, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 99,       /* additive_expression  */
  YYSYMBOL_shift_expression = 100,         /* shift_expression  */
  YYSYMBOL_relational_expression = 101,    /* relational_expression  */
  YYSYMBOL_equality_expression = 102,      /* equality_expression  */
  YYSYMBOL_and_expression = 103,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 104,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 105,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 106,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 107,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 108,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 109,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 110,      /* assignment_operator  */
  YYSYMBOL_expression = 111,               /* expression  */
  YYSYMBOL_constant_expression = 112,      /* constant_expression  */
  YYSYMBOL_declaration = 113,              /* declaration  */
  YYSYMBOL_init_declarator_list = 114,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 115,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 116,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 117,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 118, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 119,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 120,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 121,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 122, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 123,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 124,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 125,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 126,          /* enumerator_list  */
  YYSYMBOL_enumerator = 127,               /* enumerator  */
  YYSYMBOL_type_qualifier = 128,           /* type_qualifier  */
  YYSYMBOL_declarator = 129,               /* declarator  */
  YYSYMBOL_direct_declarator = 130,        /* direct_declarator  */
  YYSYMBOL_pointer = 131,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 132,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 133,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 134,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 135,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 136,          /* identifier_list  */
  YYSYMBOL_type_name = 137,                /* type_name  */
  YYSYMBOL_abstract_declarator = 138,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 139, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 140,              /* initializer  */
  YYSYMBOL_initializer_list = 141,         /* initializer_list  */
  YYSYMBOL_statement = 142,                /* statement  */
  YYSYMBOL_labeled_statement = 143,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 144,       /* compound_statement  */
  YYSYMBOL_declaration_list = 145,         /* declaration_list  */
  YYSYMBOL_statement_list = 146,           /* statement_list  */
  YYSYMBOL_expression_statement = 147,     /* expression_statement  */
  YYSYMBOL_selection_statement = 148,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 149,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 150            /* jump_statement  */
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
#define YYLAST   1188

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  349

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
       2,     2,     2,    73,     2,     2,     2,    75,    68,     2,
      62,    63,    69,    70,    67,    71,    66,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    83,
      76,    82,    77,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,    78,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    79,    85,    72,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    86,    86,    89,    90,    94,    95,    99,   100,   101,
     102,   106,   107,   108,   109,   110,   111,   115,   116,   117,
     118,   122,   123,   124,   125,   126,   127,   128,   129,   133,
     134,   138,   140,   141,   142,   143,   144,   148,   149,   150,
     151,   152,   153,   157,   158,   162,   163,   164,   165,   169,
     170,   171,   175,   176,   177,   181,   182,   183,   184,   185,
     189,   190,   191,   195,   196,   200,   201,   205,   206,   210,
     211,   215,   216,   220,   221,   225,   226,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   244,   248,
     252,   253,   257,   258,   262,   263,   267,   268,   269,   270,
     271,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   290,   291,   292,   296,   297,   301,   302,
     306,   310,   311,   312,   313,   317,   318,   322,   323,   324,
     328,   329,   330,   334,   335,   339,   340,   344,   345,   349,
     350,   354,   355,   356,   357,   358,   359,   360,   364,   365,
     366,   367,   371,   372,   377,   378,   382,   383,   387,   388,
     389,   393,   394,   398,   399,   403,   404,   405,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   421,   422,   423,
     427,   428,   432,   433,   434,   435,   436,   437,   441,   442,
     443,   447,   448,   449,   450,   455,   456,   460,   461,   465,
     466,   470,   471,   472,   476,   477,   478,   479,   483,   484,
     485,   486,   487
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
  "IDENTIFIER", "CONSTANT", "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP",
  "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP",
  "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
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

#define YYPACT_NINF (-193)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     909,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,    10,     3,     6,    11,   909,  -193,  -193,    16,  -193,
    1140,  1140,  -193,    12,  -193,  1140,  1020,   -28,    35,   -62,
      52,     7,  -193,  -193,     6,  -193,  -193,  -193,   -26,  -193,
     964,  -193,  -193,   -21,   995,  -193,   249,    16,  -193,  -193,
    1020,   381,   665,   -28,    52,   -16,    -3,  -193,  -193,  -193,
    -193,     3,  -193,   516,  -193,  1020,   995,   995,   798,  -193,
     109,   995,  -193,    25,  -193,   785,   807,   807,   819,    38,
      19,    68,    84,   498,   110,   172,    96,   117,   533,   619,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,   553,
     317,   819,  -193,     2,    31,   173,    46,   187,   136,    36,
     135,   199,    -1,  -193,  -193,   137,  -193,  -193,  -193,   320,
     391,  -193,  -193,  -193,  -193,   139,  -193,  -193,  -193,  -193,
     130,   159,   156,  -193,    77,  -193,  -193,  -193,  -193,   164,
      23,   819,    52,  -193,  -193,   516,  -193,  -193,  -193,   944,
    -193,  -193,  -193,   819,    45,  -193,   143,  -193,   498,   619,
    -193,   819,  -193,  -193,   150,   498,   819,   819,   819,   178,
     570,   151,  -193,  -193,  -193,   152,   177,   111,   180,   237,
    -193,  -193,   690,   819,   241,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,   819,  -193,   819,   819,
     819,   819,   819,   819,   819,   819,   819,   819,   819,   819,
     819,   819,   819,   819,   819,   819,   819,  -193,  -193,   427,
    -193,  -193,   864,   702,  -193,    41,  -193,    83,  -193,  1119,
    -193,   242,  -193,  -193,  -193,  -193,  -193,    33,  -193,  -193,
     109,  -193,   819,  -193,   188,   498,  -193,   197,   201,   204,
     200,   570,  -193,  -193,  -193,  1043,   133,  -193,   819,  -193,
    -193,   119,  -193,   185,  -193,  -193,  -193,  -193,  -193,     2,
       2,    31,    31,   173,   173,   173,   173,    46,    46,   187,
     136,    36,   135,   199,   189,  -193,  -193,   205,   206,  -193,
     208,    83,  1084,   714,  -193,  -193,  -193,   462,  -193,  -193,
    -193,  -193,  -193,   498,   498,   498,   819,   736,  -193,  -193,
     819,  -193,   819,  -193,  -193,  -193,  -193,   211,  -193,   210,
    -193,  -193,   223,  -193,  -193,   214,   498,   235,  -193,  -193,
    -193,  -193,   498,   229,  -193,   498,  -193,  -193,  -193
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
       0,   124,    18,    17,    19,     0,     0,     0,     0,     0,
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
    -193,  -193,  -193,   288,  -193,     0,  -193,  -193,  -193,   -59,
    -193,   -99,   -23,    -7,    -5,    -2,    93,    94,    92,   101,
     103,  -193,   -56,   -71,  -193,   -45,   -65,    13,  -193,   260,
    -193,   -30,  -193,  -193,   259,   -70,   -44,  -193,    97,  -193,
     282,   196,    39,   -13,   -34,    -4,  -193,   -60,  -193,   134,
    -193,   215,  -119,  -192,  -137,  -193,   -88,  -193,   155,    87,
     240,  -170,  -193,  -193,  -193
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
     261,    45,   207,    29,    39,    50,    53,   225,   246,    43,
       1,   236,    64,   174,    77,    28,   170,   172,   173,   147,
      51,    52,   148,   160,    61,    55,    62,   167,    29,     1,
      70,    71,   231,   301,   135,     1,    77,    77,    77,    16,
      17,    77,   147,   185,   186,   187,    65,    72,   135,   215,
     216,   140,    42,    76,   152,    22,   151,   166,   267,    77,
      68,   208,    23,   136,   301,    23,   209,   210,    22,   226,
     253,   176,   153,    69,   156,    23,   244,   256,   136,   162,
     152,   317,   147,    81,    40,   148,    54,    22,   249,    47,
     307,   211,   212,   232,   147,   233,   168,   148,   243,   276,
     277,   278,   250,     1,   222,    81,    81,    81,   308,   175,
      81,   272,   217,   218,   186,   187,   186,   234,   251,    77,
     177,   257,   258,   259,     1,   275,   235,    75,    81,    77,
     240,   231,   136,   129,   241,   302,   178,   303,   273,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   312,   300,   318,
     331,    22,   180,   265,   147,   233,   181,   148,    23,   182,
      23,   294,   319,   266,   213,   214,   320,   310,   279,   280,
     163,    59,   232,   147,   233,   265,   148,   233,    81,    23,
     183,    63,   219,   220,   221,    74,   281,   282,    81,   147,
     283,   284,   285,   286,   223,   137,   224,   287,   288,    41,
     227,    73,   238,   239,   252,   332,   333,   334,   235,   242,
     158,   255,   140,   260,   262,   263,   156,   166,   329,   140,
     264,   269,   327,   268,   147,   274,   306,   148,   344,   338,
     321,   311,    82,    83,   346,    84,    85,   348,    86,    87,
     313,   266,   316,   147,   314,   140,   339,   315,   323,   324,
     322,   335,   337,   325,   340,   341,   342,   343,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   345,    88,
      89,    90,   140,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   347,    46,   289,   291,   290,   100,   101,   102,
     103,   104,   105,    82,    83,   292,    84,    85,   293,    86,
      87,   154,   106,    56,   107,   159,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   150,   309,   245,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   229,
      88,    89,    90,   305,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     0,   254,   138,     0,     0,   100,   101,
     102,   103,   104,   105,    82,    83,     0,    84,    85,   205,
      86,    87,     0,   106,    56,   228,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      82,    83,     0,    84,    85,     0,    86,    87,     0,     0,
       0,    88,    89,    90,   139,    91,    92,    93,    94,    95,
      96,    97,    98,    99,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,    82,   145,     0,    84,    85,
       0,    86,    87,     0,   106,    56,   230,    88,    89,    90,
       0,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,    82,    83,     0,    84,    85,     0,    86,    87,     0,
     106,    56,   295,     0,     0,     0,     0,     0,     0,    82,
     145,     0,    84,    85,    99,    86,    87,     0,     0,     0,
     100,   101,   102,   103,   104,   105,    82,   145,     0,    84,
      85,     0,    86,    87,     0,     0,   155,   330,    88,    89,
      90,     0,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   189,   190,   191,     0,     0,   100,   101,   102,   103,
     104,   105,     0,    82,   145,     0,    84,    85,    99,    86,
      87,   106,    56,     0,   100,   101,   102,   103,   104,   105,
       0,     0,     0,     0,     0,    99,     0,     0,     0,     0,
     155,   100,   101,   102,   103,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,   192,   184,   193,     0,   194,
       0,     0,    82,   145,     0,    84,    85,     0,    86,    87,
       0,     0,    99,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,     0,     0,     0,     0,     2,     0,
       0,     0,     0,   106,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    82,   145,
       0,    84,    85,     0,    86,    87,     0,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,    82,   145,     0,    84,    85,     0,    86,
      87,     0,     0,     0,     0,    82,   145,     0,    84,    85,
       0,    86,    87,     0,     0,     0,     0,    82,   145,     0,
      84,    85,     0,    86,    87,     0,     0,    99,     0,     0,
     146,     0,     0,   100,   101,   102,   103,   104,   105,    82,
     145,     0,    84,    85,     0,    86,    87,     0,     0,     0,
       0,     0,    99,   270,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,    99,     0,     0,   299,     0,     0,
     100,   101,   102,   103,   104,   105,    99,     0,     0,   328,
       0,     0,   100,   101,   102,   103,   104,   105,    82,   145,
       0,    84,    85,     0,    86,    87,     0,     0,    99,   336,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
      82,   145,     0,    84,    85,     0,    86,    87,     0,     0,
       0,     0,    82,   145,     0,    84,    85,     2,    86,    87,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,   169,     0,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,   171,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,    99,     0,   161,     0,     0,     0,   100,   101,   102,
     103,   104,   105,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   232,   296,   233,     0,
       0,     0,     0,    23,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     2,     0,     0,     0,     0,    23,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,   248,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,    73,     0,    56,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,   265,   296,   233,     0,     0,
       0,     0,    23,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   326,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   304,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    61,    73,    62,    38,    93,    62,     4,    78,    22,
     180,     0,   111,     0,     4,    28,     4,    18,   155,    23,
       4,   140,    84,    88,    54,    25,    85,    86,    87,    88,
      30,    31,    88,    77,    62,    35,    64,    81,    25,     4,
      44,    67,   130,   235,    57,     4,    76,    77,    78,    43,
      44,    81,   111,    98,    99,    99,     4,    83,    71,    13,
      14,    61,    23,    84,    67,    62,    82,    80,   187,    99,
      63,    69,    69,    60,   266,    69,    74,    75,    62,    80,
     168,    62,    85,    44,   155,    69,   151,   175,    75,   159,
      67,   261,   151,    54,    84,   151,    84,    62,   163,    83,
      67,    70,    71,    62,   163,    64,    81,   163,    85,   208,
     209,   210,    67,     4,    78,    76,    77,    78,    85,    81,
      81,   192,    76,    77,   169,   169,   171,   140,    83,   159,
      62,   176,   177,   178,     4,   206,   140,    50,    99,   169,
      63,   229,   129,    56,    67,    62,    62,    64,   193,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   255,   233,   268,
     307,    62,    62,    62,   233,    64,     4,   233,    69,    83,
      69,   226,    63,   187,    11,    12,    67,   252,   211,   212,
      81,    36,    62,   252,    64,    62,   252,    64,   159,    69,
      83,   235,    15,    16,    68,    50,   213,   214,   169,   268,
     215,   216,   217,   218,    79,    60,    17,   219,   220,   232,
      83,    82,    63,    67,    81,   313,   314,   315,   232,    65,
      75,    81,   232,    55,    83,    83,   307,   250,   303,   239,
      63,     4,   302,    63,   303,     4,     4,   303,   336,   320,
      65,    63,     3,     4,   342,     6,     7,   345,     9,    10,
      63,   265,    62,   322,    63,   265,   322,    63,    63,    63,
      81,   316,   317,    65,    63,    65,    53,    63,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    63,    50,
      51,    52,   302,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    83,    25,   221,   223,   222,    68,    69,    70,
      71,    72,    73,     3,     4,   224,     6,     7,   225,     9,
      10,    71,    83,    84,    85,    76,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    64,   250,   152,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,   129,
      50,    51,    52,   239,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,   169,     4,    -1,    -1,    68,    69,
      70,    71,    72,    73,     3,     4,    -1,     6,     7,    82,
       9,    10,    -1,    83,    84,    85,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    50,    51,    52,    63,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    83,    84,    85,    50,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,    62,     9,    10,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    -1,    84,    85,    50,    51,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     8,     9,    10,    -1,    -1,    68,    69,    70,    71,
      72,    73,    -1,     3,     4,    -1,     6,     7,    62,     9,
      10,    83,    84,    -1,    68,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      84,    68,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    83,    64,    -1,    66,
      -1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    83,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    -1,    62,    -1,    -1,
      65,    -1,    -1,    68,    69,    70,    71,    72,    73,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    73,    62,    -1,    -1,    65,    -1,    -1,
      68,    69,    70,    71,    72,    73,    62,    -1,    -1,    65,
      -1,    -1,    68,    69,    70,    71,    72,    73,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,    73,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,    29,     9,    10,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    62,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    62,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    62,    -1,    85,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    29,    -1,    -1,    -1,    -1,    69,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    85,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    82,    -1,    84,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    62,    69,    87,    88,    89,    90,    91,   113,
     116,   117,   118,   119,   125,   128,   129,   130,   131,     4,
      84,   129,   128,   131,   132,     0,    89,    83,   114,   115,
     129,    91,    91,     4,    84,    91,    84,    91,   113,   144,
     145,    62,    64,   130,    84,     4,   126,   127,    63,   128,
     131,    67,    83,    82,   144,   145,    84,   117,   120,   121,
     122,   128,     3,     4,     6,     7,     9,    10,    50,    51,
      52,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      68,    69,    70,    71,    72,    73,    83,    85,    92,    93,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   111,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   129,   113,   144,     4,    63,
      91,   133,   134,   135,   136,     4,    65,    95,   108,   112,
     126,    82,    67,    85,   115,    84,   109,   140,   144,   120,
     122,    85,   121,    81,   123,   124,   129,   122,    81,    62,
      95,    62,    95,    95,   112,    81,    62,    62,    62,   142,
      62,     4,    83,    83,    83,   111,   111,   122,   137,     8,
       9,    10,    62,    64,    66,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    82,   110,    97,    69,    74,
      75,    70,    71,    11,    12,    13,    14,    76,    77,    15,
      16,    68,    78,    79,    17,    18,    80,    83,    85,   146,
      85,   142,    62,    64,   129,   131,   138,   139,    63,    67,
      63,    67,    65,    85,   112,   127,   140,   141,    85,   112,
      67,    83,    81,   142,   137,    81,   142,   111,   111,   111,
      55,   147,    83,    83,    63,    62,   131,   138,    63,     4,
      63,    94,   109,   111,     4,   109,    97,    97,    97,    98,
      98,    99,    99,   100,   100,   100,   100,   101,   101,   102,
     103,   104,   105,   106,   111,    85,    63,   133,   138,    65,
     112,   139,    62,    64,    49,   135,     4,    67,    85,   124,
     112,    63,   142,    63,    63,    63,    62,   147,    97,    63,
      67,    65,    81,    63,    63,    65,    63,   133,    65,   112,
      85,   140,   142,   142,   142,   111,    63,   111,   109,   108,
      63,    65,    53,    63,   142,    63,   142,    83,   142
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    88,    88,    89,    89,    90,    90,    90,
      90,    91,    91,    91,    91,    91,    91,    92,    92,    92,
      92,    93,    93,    93,    93,    93,    93,    93,    93,    94,
      94,    95,    95,    95,    95,    95,    95,    96,    96,    96,
      96,    96,    96,    97,    97,    98,    98,    98,    98,    99,
      99,    99,   100,   100,   100,   101,   101,   101,   101,   101,
     102,   102,   102,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   108,   109,   109,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   111,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   116,   116,
     116,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   118,   118,   118,   119,   119,   120,   120,
     121,   122,   122,   122,   122,   123,   123,   124,   124,   124,
     125,   125,   125,   126,   126,   127,   127,   128,   128,   129,
     129,   130,   130,   130,   130,   130,   130,   130,   131,   131,
     131,   131,   132,   132,   133,   133,   134,   134,   135,   135,
     135,   136,   136,   137,   137,   138,   138,   138,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   140,   140,   140,
     141,   141,   142,   142,   142,   142,   142,   142,   143,   143,
     143,   144,   144,   144,   144,   145,   145,   146,   146,   147,
     147,   148,   148,   148,   149,   149,   149,   149,   150,   150,
     150,   150,   150
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
#line 86 "src/parser.y"
                      {g_root = (yyvsp[0].node);}
#line 1644 "src/parser.tab.cpp"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 89 "src/parser.y"
                               {(yyval.node) = (yyvsp[0].node);}
#line 1650 "src/parser.tab.cpp"
    break;

  case 8: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 100 "src/parser.y"
                                                               { (yyval.node) = new FunctionDefinition(FunctionDeclaration((yyvsp[-2].type_), std::move((yyvsp[-1].node))), (yyvsp[0].scoper));}
#line 1656 "src/parser.tab.cpp"
    break;

  case 13: /* declaration_specifiers: type_specifier  */
#line 108 "src/parser.y"
                         { (yyval.type_) = (yyvsp[0].type_); }
#line 1662 "src/parser.tab.cpp"
    break;

  case 17: /* primary_expression: IDENTIFIER  */
#line 115 "src/parser.y"
                     {(yyval.node) = new Identifier(*(yyvsp[0].string));}
#line 1668 "src/parser.tab.cpp"
    break;

  case 18: /* primary_expression: INT_LITERAL  */
#line 116 "src/parser.y"
                      {(yyval.node) = new IntLiteral((yyvsp[0].number));}
#line 1674 "src/parser.tab.cpp"
    break;

  case 20: /* primary_expression: '(' expression ')'  */
#line 118 "src/parser.y"
                             {(yyval.node)=(yyvsp[-1].node);}
#line 1680 "src/parser.tab.cpp"
    break;

  case 21: /* postfix_expression: primary_expression  */
#line 122 "src/parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1686 "src/parser.tab.cpp"
    break;

  case 31: /* unary_expression: postfix_expression  */
#line 138 "src/parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1692 "src/parser.tab.cpp"
    break;

  case 35: /* unary_expression: SIZEOF unary_expression  */
#line 143 "src/parser.y"
                                  {(yyval.node) = new SizeOf((yyvsp[0].node));}
#line 1698 "src/parser.tab.cpp"
    break;

  case 36: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 144 "src/parser.y"
                                   {(yyval.node) = new SizeOf((yyvsp[-1].node));}
#line 1704 "src/parser.tab.cpp"
    break;

  case 43: /* cast_expression: unary_expression  */
#line 157 "src/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1710 "src/parser.tab.cpp"
    break;

  case 45: /* multiplicative_expression: cast_expression  */
#line 162 "src/parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 1716 "src/parser.tab.cpp"
    break;

  case 46: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 163 "src/parser.y"
                                                        {(yyval.node) = new BinaryOperator(BinaryOperator::MULTIPLY, (yyvsp[-2].node), (yyvsp[0].node));}
#line 1722 "src/parser.tab.cpp"
    break;

  case 47: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 164 "src/parser.y"
                                                        {(yyval.node) = new BinaryOperator(BinaryOperator::DIVIDE, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1728 "src/parser.tab.cpp"
    break;

  case 48: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 165 "src/parser.y"
                                                        {(yyval.node) = new BinaryOperator(BinaryOperator::MODULO, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1734 "src/parser.tab.cpp"
    break;

  case 49: /* additive_expression: multiplicative_expression  */
#line 169 "src/parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1740 "src/parser.tab.cpp"
    break;

  case 50: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 170 "src/parser.y"
                                                            {(yyval.node) = new BinaryOperator(BinaryOperator::ADD, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1746 "src/parser.tab.cpp"
    break;

  case 51: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 171 "src/parser.y"
                                                            {(yyval.node) = new BinaryOperator(BinaryOperator::SUBTRACT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1752 "src/parser.tab.cpp"
    break;

  case 52: /* shift_expression: additive_expression  */
#line 175 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1758 "src/parser.tab.cpp"
    break;

  case 53: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 176 "src/parser.y"
                                                       {(yyval.node) = new BinaryOperator(BinaryOperator::LEFT_SHIFT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1764 "src/parser.tab.cpp"
    break;

  case 54: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 177 "src/parser.y"
                                                        {(yyval.node) = new BinaryOperator(BinaryOperator::RIGHT_SHIFT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1770 "src/parser.tab.cpp"
    break;

  case 55: /* relational_expression: shift_expression  */
#line 181 "src/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1776 "src/parser.tab.cpp"
    break;

  case 56: /* relational_expression: relational_expression '<' shift_expression  */
#line 182 "src/parser.y"
                                                     {(yyval.node) = new BinaryOperator(BinaryOperator::LESS_THAN, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1782 "src/parser.tab.cpp"
    break;

  case 57: /* relational_expression: relational_expression '>' shift_expression  */
#line 183 "src/parser.y"
                                                     {(yyval.node) = new BinaryOperator(BinaryOperator::GREATER_THAN, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1788 "src/parser.tab.cpp"
    break;

  case 58: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 184 "src/parser.y"
                                                       {(yyval.node) = new BinaryOperator(BinaryOperator::LESS_EQ, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1794 "src/parser.tab.cpp"
    break;

  case 59: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 185 "src/parser.y"
                                                       {(yyval.node) = new BinaryOperator(BinaryOperator::GREATER_EQ, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1800 "src/parser.tab.cpp"
    break;

  case 60: /* equality_expression: relational_expression  */
#line 189 "src/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1806 "src/parser.tab.cpp"
    break;

  case 61: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 190 "src/parser.y"
                                                          {(yyval.node) = new BinaryOperator(BinaryOperator::EQUAL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1812 "src/parser.tab.cpp"
    break;

  case 62: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 191 "src/parser.y"
                                                          {(yyval.node) = new BinaryOperator(BinaryOperator::NEQUAL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1818 "src/parser.tab.cpp"
    break;

  case 63: /* and_expression: equality_expression  */
#line 195 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1824 "src/parser.tab.cpp"
    break;

  case 64: /* and_expression: and_expression '&' equality_expression  */
#line 196 "src/parser.y"
                                                 {(yyval.node) = new BinaryOperator(BinaryOperator::AND, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1830 "src/parser.tab.cpp"
    break;

  case 65: /* exclusive_or_expression: and_expression  */
#line 200 "src/parser.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 1836 "src/parser.tab.cpp"
    break;

  case 66: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 201 "src/parser.y"
                                                     {(yyval.node) = new BinaryOperator(BinaryOperator::XOR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1842 "src/parser.tab.cpp"
    break;

  case 67: /* inclusive_or_expression: exclusive_or_expression  */
#line 205 "src/parser.y"
                                  { (yyval.node) = (yyvsp[0].node); }
#line 1848 "src/parser.tab.cpp"
    break;

  case 68: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 206 "src/parser.y"
                                                              {(yyval.node) = new BinaryOperator(BinaryOperator::OR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1854 "src/parser.tab.cpp"
    break;

  case 69: /* logical_and_expression: inclusive_or_expression  */
#line 210 "src/parser.y"
                                  { (yyval.node) = (yyvsp[0].node); }
#line 1860 "src/parser.tab.cpp"
    break;

  case 70: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 211 "src/parser.y"
                                                                {(yyval.node) = new BinaryOperator(BinaryOperator::LOGICAL_AND, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1866 "src/parser.tab.cpp"
    break;

  case 71: /* logical_or_expression: logical_and_expression  */
#line 215 "src/parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 1872 "src/parser.tab.cpp"
    break;

  case 72: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 216 "src/parser.y"
                                                             {(yyval.node) = new BinaryOperator(BinaryOperator::LOGICAL_OR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1878 "src/parser.tab.cpp"
    break;

  case 73: /* conditional_expression: logical_or_expression  */
#line 220 "src/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1884 "src/parser.tab.cpp"
    break;

  case 75: /* assignment_expression: conditional_expression  */
#line 225 "src/parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 1890 "src/parser.tab.cpp"
    break;

  case 88: /* expression: assignment_expression  */
#line 244 "src/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1896 "src/parser.tab.cpp"
    break;

  case 91: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 253 "src/parser.y"
                                                          {(yyval.node) = new varDeclarator((yyvsp[-2].type_), (yyvsp[-1].initDecl));}
#line 1902 "src/parser.tab.cpp"
    break;

  case 92: /* init_declarator_list: init_declarator  */
#line 257 "src/parser.y"
                          {(yyval.initDecl) = (yyvsp[0].initDecl);}
#line 1908 "src/parser.tab.cpp"
    break;

  case 93: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 258 "src/parser.y"
                                                   {(yyval.initDecl) = (yyvsp[-2].initDecl);}
#line 1914 "src/parser.tab.cpp"
    break;

  case 94: /* init_declarator: declarator  */
#line 262 "src/parser.y"
                     {std::cout << "initDeclarator($1, nullptr)" << std::endl; (yyval.initDecl) = new initDeclarator((yyvsp[0].node), nullptr);}
#line 1920 "src/parser.tab.cpp"
    break;

  case 95: /* init_declarator: declarator '=' initializer  */
#line 263 "src/parser.y"
                                     {(yyval.initDecl) = new initDeclarator((yyvsp[-2].node), (yyvsp[0].node));}
#line 1926 "src/parser.tab.cpp"
    break;

  case 102: /* type_specifier: CHAR  */
#line 276 "src/parser.y"
               {(yyval.type_) = new Type(Type::CHAR);}
#line 1932 "src/parser.tab.cpp"
    break;

  case 104: /* type_specifier: INT  */
#line 278 "src/parser.y"
              {(yyval.type_) = new Type(Type::INT);}
#line 1938 "src/parser.tab.cpp"
    break;

  case 109: /* type_specifier: UNSIGNED  */
#line 283 "src/parser.y"
                   {(yyval.type_) = new Type(Type::UNSIGNED_INT);}
#line 1944 "src/parser.tab.cpp"
    break;

  case 122: /* specifier_qualifier_list: type_specifier  */
#line 311 "src/parser.y"
                         {(yyval.node)=(yyvsp[0].type_);}
#line 1950 "src/parser.tab.cpp"
    break;

  case 140: /* declarator: direct_declarator  */
#line 350 "src/parser.y"
                            {(yyval.node)=(yyvsp[0].node);}
#line 1956 "src/parser.tab.cpp"
    break;

  case 141: /* direct_declarator: IDENTIFIER  */
#line 354 "src/parser.y"
                     { (yyval.node) = new Identifier(*(yyvsp[0].string));}
#line 1962 "src/parser.tab.cpp"
    break;

  case 145: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 358 "src/parser.y"
                                                        {(yyval.node) = new FuncWithArgs((yyvsp[-3].node), (yyvsp[-1].declList)); }
#line 1968 "src/parser.tab.cpp"
    break;

  case 147: /* direct_declarator: direct_declarator '(' ')'  */
#line 360 "src/parser.y"
                                    { (yyval.node) = (yyvsp[-2].node); }
#line 1974 "src/parser.tab.cpp"
    break;

  case 154: /* parameter_type_list: parameter_list  */
#line 377 "src/parser.y"
                         {(yyval.declList) = (yyvsp[0].declList);}
#line 1980 "src/parser.tab.cpp"
    break;

  case 156: /* parameter_list: parameter_declaration  */
#line 382 "src/parser.y"
                                {(yyval.declList)=(yyvsp[0].declList);}
#line 1986 "src/parser.tab.cpp"
    break;

  case 157: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 383 "src/parser.y"
                                                   {(yyval.declList) = appendArgList((yyvsp[-2].declList), (yyvsp[0].declList));}
#line 1992 "src/parser.tab.cpp"
    break;

  case 158: /* parameter_declaration: declaration_specifiers declarator  */
#line 387 "src/parser.y"
                                            {(yyval.declList) = makeArgList(new varDeclarator((yyvsp[-1].type_), new initDeclarator((yyvsp[0].node), nullptr)));}
#line 1998 "src/parser.tab.cpp"
    break;

  case 163: /* type_name: specifier_qualifier_list  */
#line 398 "src/parser.y"
                                   {(yyval.node)=(yyvsp[0].node);}
#line 2004 "src/parser.tab.cpp"
    break;

  case 177: /* initializer: assignment_expression  */
#line 421 "src/parser.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 2010 "src/parser.tab.cpp"
    break;

  case 180: /* initializer_list: initializer  */
#line 427 "src/parser.y"
                      {(yyval.node)=(yyvsp[0].node);}
#line 2016 "src/parser.tab.cpp"
    break;

  case 182: /* statement: labeled_statement  */
#line 432 "src/parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2022 "src/parser.tab.cpp"
    break;

  case 183: /* statement: compound_statement  */
#line 433 "src/parser.y"
                             { (yyval.node) = (yyvsp[0].scoper); }
#line 2028 "src/parser.tab.cpp"
    break;

  case 184: /* statement: expression_statement  */
#line 434 "src/parser.y"
                               {(yyval.node)=(yyvsp[0].node);}
#line 2034 "src/parser.tab.cpp"
    break;

  case 185: /* statement: selection_statement  */
#line 435 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 2040 "src/parser.tab.cpp"
    break;

  case 186: /* statement: iteration_statement  */
#line 436 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 2046 "src/parser.tab.cpp"
    break;

  case 187: /* statement: jump_statement  */
#line 437 "src/parser.y"
                         {(yyval.node) = (yyvsp[0].node);}
#line 2052 "src/parser.tab.cpp"
    break;

  case 191: /* compound_statement: '{' '}'  */
#line 447 "src/parser.y"
                  { (yyval.scoper) = new makeScope(new NodeList(), new NodeList()); }
#line 2058 "src/parser.tab.cpp"
    break;

  case 192: /* compound_statement: '{' statement_list '}'  */
#line 448 "src/parser.y"
                                 { (yyval.scoper) = new makeScope(new NodeList(), (yyvsp[-1].listptr)); }
#line 2064 "src/parser.tab.cpp"
    break;

  case 193: /* compound_statement: '{' declaration_list '}'  */
#line 449 "src/parser.y"
                                   { (yyval.scoper) = new makeScope((yyvsp[-1].listptr), new NodeList()); }
#line 2070 "src/parser.tab.cpp"
    break;

  case 194: /* compound_statement: '{' declaration_list statement_list '}'  */
#line 450 "src/parser.y"
                                                  { (yyval.scoper) = new makeScope((yyvsp[-2].listptr), (yyvsp[-1].listptr)); }
#line 2076 "src/parser.tab.cpp"
    break;

  case 195: /* declaration_list: declaration  */
#line 455 "src/parser.y"
                      {(yyval.listptr) = makeList((yyvsp[0].node)); }
#line 2082 "src/parser.tab.cpp"
    break;

  case 196: /* declaration_list: declaration_list declaration  */
#line 456 "src/parser.y"
                                       {(yyval.listptr) = appendList((yyvsp[-1].listptr), (yyvsp[0].node));}
#line 2088 "src/parser.tab.cpp"
    break;

  case 197: /* statement_list: statement  */
#line 460 "src/parser.y"
                    {(yyval.listptr) = makeList((yyvsp[0].node)); }
#line 2094 "src/parser.tab.cpp"
    break;

  case 198: /* statement_list: statement_list statement  */
#line 461 "src/parser.y"
                                   {(yyval.listptr) = appendList((yyvsp[-1].listptr), (yyvsp[0].node));}
#line 2100 "src/parser.tab.cpp"
    break;

  case 212: /* jump_statement: RETURN expression ';'  */
#line 487 "src/parser.y"
                                {(yyval.node) = new Return((yyvsp[-1].node));}
#line 2106 "src/parser.tab.cpp"
    break;


#line 2110 "src/parser.tab.cpp"

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

#line 490 "src/parser.y"


const ASTNode *g_root; // Definition of variable (to match declaration earlier)

const ASTNode *parseAST(){
	g_root=0;
	yyparse();
	return g_root;
	
}

