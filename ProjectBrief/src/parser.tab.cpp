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
  YYSYMBOL_IDENTIFIER = 5,                 /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 6,                   /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 8,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 9,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 10,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 11,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 12,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 13,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 14,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 15,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 16,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 17,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 18,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 19,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 20,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 21,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 22,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 23,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 24,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 25,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 26,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 27,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 28,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 29,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 30,                 /* TYPE_NAME  */
  YYSYMBOL_TYPEDEF = 31,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 32,                    /* EXTERN  */
  YYSYMBOL_STATIC = 33,                    /* STATIC  */
  YYSYMBOL_AUTO = 34,                      /* AUTO  */
  YYSYMBOL_REGISTER = 35,                  /* REGISTER  */
  YYSYMBOL_CHAR = 36,                      /* CHAR  */
  YYSYMBOL_SHORT = 37,                     /* SHORT  */
  YYSYMBOL_INT = 38,                       /* INT  */
  YYSYMBOL_LONG = 39,                      /* LONG  */
  YYSYMBOL_SIGNED = 40,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 41,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 42,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 43,                    /* DOUBLE  */
  YYSYMBOL_CONST = 44,                     /* CONST  */
  YYSYMBOL_VOLATILE = 45,                  /* VOLATILE  */
  YYSYMBOL_VOID = 46,                      /* VOID  */
  YYSYMBOL_STRUCT = 47,                    /* STRUCT  */
  YYSYMBOL_UNION = 48,                     /* UNION  */
  YYSYMBOL_ENUM = 49,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 50,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 51,                      /* CASE  */
  YYSYMBOL_DEFAULT = 52,                   /* DEFAULT  */
  YYSYMBOL_IF = 53,                        /* IF  */
  YYSYMBOL_ELSE = 54,                      /* ELSE  */
  YYSYMBOL_SWITCH = 55,                    /* SWITCH  */
  YYSYMBOL_WHILE = 56,                     /* WHILE  */
  YYSYMBOL_DO = 57,                        /* DO  */
  YYSYMBOL_FOR = 58,                       /* FOR  */
  YYSYMBOL_GOTO = 59,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 60,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 61,                     /* BREAK  */
  YYSYMBOL_RETURN = 62,                    /* RETURN  */
  YYSYMBOL_63_ = 63,                       /* '('  */
  YYSYMBOL_64_ = 64,                       /* ')'  */
  YYSYMBOL_65_ = 65,                       /* '['  */
  YYSYMBOL_66_ = 66,                       /* ']'  */
  YYSYMBOL_67_ = 67,                       /* '.'  */
  YYSYMBOL_68_ = 68,                       /* ','  */
  YYSYMBOL_69_ = 69,                       /* '&'  */
  YYSYMBOL_70_ = 70,                       /* '*'  */
  YYSYMBOL_71_ = 71,                       /* '+'  */
  YYSYMBOL_72_ = 72,                       /* '-'  */
  YYSYMBOL_73_ = 73,                       /* '~'  */
  YYSYMBOL_74_ = 74,                       /* '!'  */
  YYSYMBOL_75_ = 75,                       /* '/'  */
  YYSYMBOL_76_ = 76,                       /* '%'  */
  YYSYMBOL_77_ = 77,                       /* '<'  */
  YYSYMBOL_78_ = 78,                       /* '>'  */
  YYSYMBOL_79_ = 79,                       /* '^'  */
  YYSYMBOL_80_ = 80,                       /* '|'  */
  YYSYMBOL_81_ = 81,                       /* '?'  */
  YYSYMBOL_82_ = 82,                       /* ':'  */
  YYSYMBOL_83_ = 83,                       /* '='  */
  YYSYMBOL_84_ = 84,                       /* ';'  */
  YYSYMBOL_85_ = 85,                       /* '{'  */
  YYSYMBOL_86_ = 86,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 87,                  /* $accept  */
  YYSYMBOL_ROOT = 88,                      /* ROOT  */
  YYSYMBOL_translation_unit = 89,          /* translation_unit  */
  YYSYMBOL_external_declaration = 90,      /* external_declaration  */
  YYSYMBOL_function_definition = 91,       /* function_definition  */
  YYSYMBOL_declaration_specifiers = 92,    /* declaration_specifiers  */
  YYSYMBOL_primary_expression = 93,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 94,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 95,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 96,          /* unary_expression  */
  YYSYMBOL_unary_operator = 97,            /* unary_operator  */
  YYSYMBOL_cast_expression = 98,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 99, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 100,      /* additive_expression  */
  YYSYMBOL_shift_expression = 101,         /* shift_expression  */
  YYSYMBOL_relational_expression = 102,    /* relational_expression  */
  YYSYMBOL_equality_expression = 103,      /* equality_expression  */
  YYSYMBOL_and_expression = 104,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 105,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 106,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 107,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 108,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 109,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 110,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 111,      /* assignment_operator  */
  YYSYMBOL_expression = 112,               /* expression  */
  YYSYMBOL_constant_expression = 113,      /* constant_expression  */
  YYSYMBOL_declaration = 114,              /* declaration  */
  YYSYMBOL_init_declarator_list = 115,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 116,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 117,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 118,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 119, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 120,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 121,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 122,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 123, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 124,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 125,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 126,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 127,          /* enumerator_list  */
  YYSYMBOL_enumerator = 128,               /* enumerator  */
  YYSYMBOL_type_qualifier = 129,           /* type_qualifier  */
  YYSYMBOL_declarator = 130,               /* declarator  */
  YYSYMBOL_direct_declarator = 131,        /* direct_declarator  */
  YYSYMBOL_pointer = 132,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 133,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 134,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 135,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 136,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 137,          /* identifier_list  */
  YYSYMBOL_type_name = 138,                /* type_name  */
  YYSYMBOL_abstract_declarator = 139,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 140, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 141,              /* initializer  */
  YYSYMBOL_initializer_list = 142,         /* initializer_list  */
  YYSYMBOL_statement = 143,                /* statement  */
  YYSYMBOL_labeled_statement = 144,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 145,       /* compound_statement  */
  YYSYMBOL_declaration_list = 146,         /* declaration_list  */
  YYSYMBOL_statement_list = 147,           /* statement_list  */
  YYSYMBOL_expression_statement = 148,     /* expression_statement  */
  YYSYMBOL_selection_statement = 149,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 150,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 151            /* jump_statement  */
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
#define YYLAST   1260

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  350

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   317


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
       2,     2,     2,    74,     2,     2,     2,    76,    69,     2,
      63,    64,    70,    71,    68,    72,    67,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    84,
      77,    83,    78,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,    80,    86,    73,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    91,    91,    94,    95,    99,   100,   104,   105,   106,
     107,   111,   112,   113,   114,   115,   116,   120,   121,   122,
     123,   124,   128,   129,   130,   131,   132,   133,   134,   135,
     139,   140,   144,   146,   147,   148,   149,   150,   154,   155,
     156,   157,   158,   159,   163,   164,   168,   169,   170,   171,
     175,   176,   177,   181,   182,   183,   187,   188,   189,   190,
     191,   195,   196,   197,   201,   202,   206,   207,   211,   212,
     216,   217,   221,   222,   226,   227,   231,   232,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   250,
     254,   258,   259,   263,   264,   268,   269,   273,   274,   275,
     276,   277,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   296,   297,   298,   302,   303,   307,
     308,   312,   316,   317,   318,   319,   323,   324,   328,   329,
     330,   334,   335,   336,   340,   341,   345,   346,   350,   351,
     355,   356,   360,   361,   362,   363,   364,   365,   366,   370,
     371,   372,   373,   377,   378,   383,   384,   388,   389,   393,
     394,   395,   399,   400,   404,   405,   409,   410,   411,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   427,   428,
     429,   433,   434,   438,   439,   440,   441,   442,   443,   447,
     448,   449,   453,   454,   455,   456,   461,   462,   466,   467,
     471,   472,   476,   477,   478,   482,   483,   484,   485,   489,
     490,   491,   492,   493
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
  "FLOAT_LITERAL", "IDENTIFIER", "CONSTANT", "STRING_LITERAL", "SIZEOF",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "TYPEDEF",
  "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG",
  "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID",
  "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE",
  "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN",
  "'('", "')'", "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'",
  "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'",
  "'='", "';'", "'{'", "'}'", "$accept", "ROOT", "translation_unit",
  "external_declaration", "function_definition", "declaration_specifiers",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
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

#define YYPACT_NINF (-203)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     887,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,    17,    11,    10,    36,   887,  -203,  -203,    13,  -203,
    1211,  1211,  -203,    18,  -203,  1211,  1058,    44,    14,   -75,
      45,     7,  -203,  -203,    10,  -203,  -203,  -203,    -9,  -203,
    1038,  -203,  -203,   -23,  1012,  -203,   274,    13,  -203,  -203,
    1058,   932,   652,    44,    45,    23,   -28,  -203,  -203,  -203,
    -203,    11,  -203,   526,  -203,  1058,  1012,  1012,   961,  -203,
      62,  1012,  -203,  -203,    57,  -203,   781,   796,   796,   828,
      89,    31,   118,   128,   490,   133,   193,   126,   131,   562,
     637,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
     195,   269,   828,  -203,    58,    74,   182,   122,   191,   143,
     139,   140,   204,    -2,  -203,  -203,   142,  -203,  -203,  -203,
     346,   418,  -203,  -203,  -203,  -203,   147,  -203,  -203,  -203,
    -203,   119,   159,   163,  -203,     5,  -203,  -203,  -203,  -203,
     166,   -26,   828,    45,  -203,  -203,   526,  -203,  -203,  -203,
     981,  -203,  -203,  -203,   828,    63,  -203,   152,  -203,   490,
     637,  -203,   828,  -203,  -203,   153,   490,   828,   828,   828,
     185,   580,   158,  -203,  -203,  -203,   162,   179,   110,   183,
     246,  -203,  -203,   684,   828,   247,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,   828,  -203,   828,
     828,   828,   828,   828,   828,   828,   828,   828,   828,   828,
     828,   828,   828,   828,   828,   828,   828,   828,  -203,  -203,
     454,  -203,  -203,   841,   709,  -203,    51,  -203,   114,  -203,
    1190,  -203,   250,  -203,  -203,  -203,  -203,  -203,    37,  -203,
    -203,    62,  -203,   828,  -203,   197,   490,  -203,   200,   201,
     205,   194,   580,  -203,  -203,  -203,  1114,   127,  -203,   828,
    -203,  -203,   104,  -203,   202,  -203,  -203,  -203,  -203,  -203,
      58,    58,    74,    74,   182,   182,   182,   182,   122,   122,
     191,   143,   139,   140,   204,   188,  -203,  -203,   207,   208,
    -203,   209,   114,  1155,   724,  -203,  -203,  -203,   364,  -203,
    -203,  -203,  -203,  -203,   490,   490,   490,   828,   756,  -203,
    -203,   828,  -203,   828,  -203,  -203,  -203,  -203,   210,  -203,
     214,  -203,  -203,   219,  -203,  -203,   212,   490,   222,  -203,
    -203,  -203,  -203,   490,   199,  -203,   490,  -203,  -203,  -203
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   142,   113,    97,    98,    99,   100,   101,   103,   104,
     105,   106,   109,   110,   107,   108,   138,   139,   102,   117,
     118,     0,     0,   149,     0,     2,     3,     5,     0,     6,
      11,    13,   111,     0,   112,    15,     0,   141,     0,   133,
       0,     0,   153,   151,   150,     1,     4,    91,     0,    93,
      95,    12,    14,   116,     0,    16,     0,     0,   196,    10,
       0,     0,     0,   140,     0,   136,     0,   134,   143,   154,
     152,     0,    92,     0,     8,     0,     0,   123,     0,   119,
       0,   125,    18,    19,    17,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,    39,    40,    41,    42,    43,   200,   192,    22,
      32,    44,     0,    46,    50,    53,    56,    61,    64,    66,
      68,    70,    72,    74,    76,    89,     0,   198,   183,   184,
       0,     0,   185,   186,   187,   188,    95,   197,     9,   162,
     148,   161,     0,   155,   157,     0,    17,   145,    44,    90,
       0,     0,     0,     0,   131,    94,     0,   178,    96,     7,
       0,   122,   115,   120,     0,     0,   126,   128,   124,     0,
       0,    36,     0,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,   210,   211,   212,     0,     0,   164,     0,
       0,    28,    29,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    78,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   201,   194,
       0,   193,   199,     0,     0,   159,   166,   160,   167,   146,
       0,   147,     0,   144,   132,   137,   135,   181,     0,   114,
     129,     0,   121,     0,   189,     0,     0,   191,     0,     0,
       0,     0,     0,   209,   213,    21,     0,   166,   165,     0,
      27,    24,     0,    30,     0,    26,    77,    47,    48,    49,
      51,    52,    54,    55,    59,    60,    57,    58,    62,    63,
      65,    67,    69,    71,    73,     0,   195,   174,     0,     0,
     170,     0,   168,     0,     0,   156,   158,   163,     0,   179,
     127,   130,    37,   190,     0,     0,     0,     0,     0,    45,
      25,     0,    23,     0,   175,   169,   171,   176,     0,   172,
       0,   180,   182,   202,   204,   205,     0,     0,     0,    31,
      75,   177,   173,     0,     0,   207,     0,   203,   206,   208
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -203,  -203,  -203,   262,  -203,     0,  -203,  -203,  -203,   -60,
    -203,   -99,     1,     2,   -31,     4,    66,    76,    77,    75,
      98,  -203,   -56,   -72,  -203,   -79,   -51,    12,  -203,   231,
    -203,   -30,  -203,  -203,   252,   -74,   -32,  -203,    87,  -203,
     275,   187,    41,   -14,   -33,   -12,  -203,   -58,  -203,   101,
    -203,   172,  -100,  -202,  -141,  -203,   -87,  -203,     3,    70,
     225,  -172,  -203,  -203,  -203
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    24,    25,    26,    27,    57,   109,   110,   272,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   207,   126,   150,    58,    48,    49,
      30,    31,    32,    33,    78,    79,    80,   165,   166,    34,
      66,    67,    35,    36,    37,    38,    44,   298,   143,   144,
     145,   189,   299,   238,   158,   248,   127,   128,   129,    60,
     131,   132,   133,   134,   135
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,   157,   148,   142,   163,    63,   149,   180,    41,   262,
      64,    43,    29,   208,    50,   247,     1,   226,     1,     1,
     186,   187,    39,    53,    77,    28,   171,   173,   174,   148,
      51,    52,    70,   149,   302,    55,    45,    29,   175,    59,
     153,   237,   153,   136,   232,   161,    77,    77,    77,   168,
      65,    77,   148,    74,    16,    17,     1,   136,   154,    71,
     244,   141,    76,   138,    42,   302,   167,     1,   188,   241,
      77,    68,   137,   242,    22,    72,    22,    22,   159,   227,
      23,    23,   254,    23,   157,    69,   163,   137,   268,   257,
     318,   187,   148,   187,   177,    81,   149,    47,   258,   259,
     260,   245,    40,    54,   148,   308,   152,    61,   149,    62,
     277,   278,   279,   250,   233,   274,   234,    81,    81,    81,
      75,   273,    81,   309,     1,    22,   130,   235,   209,   236,
      77,   251,    23,   210,   211,   276,   216,   217,   188,   169,
      77,    81,   137,   232,   164,   212,   213,   252,   295,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   332,   320,   313,
     319,   176,   321,   266,   148,   234,   267,   303,   149,   304,
      23,   178,   233,   301,   234,   284,   285,   286,   287,    23,
     266,   179,   234,   148,   214,   215,   181,   149,   182,   218,
     219,    81,   311,    63,   190,   191,   192,   220,   221,   148,
     183,    81,   222,   280,   281,   184,   282,   283,   223,    41,
     224,   236,   225,   239,   288,   289,   228,   333,   334,   335,
      73,   240,   243,   141,   253,   256,   157,   167,   336,   338,
     141,   261,   263,   265,   148,   328,   264,   269,   149,   339,
     345,   270,   275,   330,   267,   307,   347,   317,   193,   349,
     194,   312,   195,   148,   314,   315,   141,   340,   322,   316,
     323,   324,   325,   343,   341,   326,   344,    82,    83,    84,
     342,    85,    86,   348,    87,    88,   346,    46,   290,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   291,
     293,   292,   155,   141,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   294,    89,    90,    91,   160,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   310,   151,
     246,   306,   255,   101,   102,   103,   104,   105,   106,    82,
      83,    84,   206,    85,    86,   230,    87,    88,   107,    56,
     108,     0,     0,     0,     0,     0,     0,    82,    83,   146,
       0,    85,    86,     0,    87,    88,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,    89,    90,    91,
       0,    92,    93,    94,    95,    96,    97,    98,    99,   100,
       0,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,    82,    83,    84,     0,    85,    86,   100,    87,    88,
     107,    56,   229,   101,   102,   103,   104,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
     331,     0,     0,     0,     0,     0,     0,    82,    83,    84,
       0,    85,    86,     0,    87,    88,     0,     0,     0,    89,
      90,    91,     0,    92,    93,    94,    95,    96,    97,    98,
      99,   100,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,    82,    83,    84,     0,    85,    86,     0,
      87,    88,   107,    56,   231,    89,    90,    91,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   100,     0,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,    82,
      83,   146,     0,    85,    86,     0,    87,    88,   107,    56,
     296,    89,    90,    91,     0,    92,    93,    94,    95,    96,
      97,    98,    99,   100,     0,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,    82,    83,   146,     0,    85,
      86,     0,    87,    88,   107,    56,     0,     0,     0,     0,
       0,     0,     0,    82,    83,   146,     0,    85,    86,   100,
      87,    88,     0,     0,     0,   101,   102,   103,   104,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,   101,   102,   103,   104,   105,   106,     0,     0,     0,
      82,    83,   146,   100,    85,    86,   185,    87,    88,   101,
     102,   103,   104,   105,   106,    82,    83,   146,     0,    85,
      86,     0,    87,    88,   107,     0,     0,     2,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    82,    83,   146,
       0,    85,    86,     0,    87,    88,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,   101,   102,   103,   104,
     105,   106,    82,    83,   146,   100,    85,    86,   147,    87,
      88,   101,   102,   103,   104,   105,   106,    82,    83,   146,
       0,    85,    86,     0,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   271,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,    82,
      83,   146,     0,    85,    86,     0,    87,    88,     0,     0,
       0,     0,   100,     0,     0,   300,     0,     0,   101,   102,
     103,   104,   105,   106,    82,    83,   146,   100,    85,    86,
     329,    87,    88,   101,   102,   103,   104,   105,   106,    82,
      83,   146,     0,    85,    86,     0,    87,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     337,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,    82,    83,   146,     0,    85,    86,     0,    87,    88,
       0,     0,     0,     0,   170,     0,     1,     0,     0,     0,
     101,   102,   103,   104,   105,   106,     0,     0,     0,   172,
       0,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   100,     1,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,     0,   233,   297,   234,     0,     0,     0,
       0,    23,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,   140,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     2,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,   162,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,   249,     2,     3,
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
       0,     0,     0,     0,     0,     0,     0,   266,   297,   234,
       0,     0,     0,     0,    23,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   327,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     305,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21
};

static const yytype_int16 yycheck[] =
{
       0,    73,    62,    61,    78,    38,    62,    94,    22,   181,
      85,    23,     0,   112,    28,   156,     5,    19,     5,     5,
      99,   100,     5,     5,    54,    25,    86,    87,    88,    89,
      30,    31,    44,    89,   236,    35,     0,    25,    89,    36,
      68,   141,    68,    57,   131,    77,    76,    77,    78,    81,
       5,    81,   112,    50,    44,    45,     5,    71,    86,    68,
      86,    61,    85,    60,    23,   267,    80,     5,   100,    64,
     100,    64,    60,    68,    63,    84,    63,    63,    75,    81,
      70,    70,   169,    70,   156,    44,   160,    75,   188,   176,
     262,   170,   152,   172,    63,    54,   152,    84,   177,   178,
     179,   152,    85,    85,   164,    68,    83,    63,   164,    65,
     209,   210,   211,   164,    63,   194,    65,    76,    77,    78,
      50,   193,    81,    86,     5,    63,    56,   141,    70,   141,
     160,    68,    70,    75,    76,   207,    14,    15,   170,    82,
     170,   100,   130,   230,    82,    71,    72,    84,   227,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   308,    64,   256,
     269,    82,    68,    63,   234,    65,   188,    63,   234,    65,
      70,    63,    63,   234,    65,   216,   217,   218,   219,    70,
      63,    63,    65,   253,    12,    13,    63,   253,     5,    77,
      78,   160,   253,   236,     9,    10,    11,    16,    17,   269,
      84,   170,    69,   212,   213,    84,   214,   215,    79,   233,
      80,   233,    18,    64,   220,   221,    84,   314,   315,   316,
      83,    68,    66,   233,    82,    82,   308,   251,   317,   318,
     240,    56,    84,    64,   304,   303,    84,    64,   304,   321,
     337,     5,     5,   304,   266,     5,   343,    63,    63,   346,
      65,    64,    67,   323,    64,    64,   266,   323,    66,    64,
      82,    64,    64,    54,    64,    66,    64,     3,     4,     5,
      66,     7,     8,    84,    10,    11,    64,    25,   222,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,   223,
     225,   224,    71,   303,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,   226,    51,    52,    53,    76,    55,
      56,    57,    58,    59,    60,    61,    62,    63,   251,    64,
     153,   240,   170,    69,    70,    71,    72,    73,    74,     3,
       4,     5,    83,     7,     8,   130,    10,    11,    84,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,     8,    -1,    10,    11,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,     3,     4,     5,    -1,     7,     8,    63,    10,    11,
      84,    85,    86,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,     3,     4,     5,    -1,     7,     8,    -1,
      10,    11,    84,    85,    86,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,     3,
       4,     5,    -1,     7,     8,    -1,    10,    11,    84,    85,
      86,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,     3,     4,     5,    -1,     7,
       8,    -1,    10,    11,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,     8,    63,
      10,    11,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
       3,     4,     5,    63,     7,     8,    84,    10,    11,    69,
      70,    71,    72,    73,    74,     3,     4,     5,    -1,     7,
       8,    -1,    10,    11,    84,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     3,     4,     5,
      -1,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,     3,     4,     5,    63,     7,     8,    66,    10,
      11,    69,    70,    71,    72,    73,    74,     3,     4,     5,
      -1,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,     3,
       4,     5,    -1,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    66,    -1,    -1,    69,    70,
      71,    72,    73,    74,     3,     4,     5,    63,     7,     8,
      66,    10,    11,    69,    70,    71,    72,    73,    74,     3,
       4,     5,    -1,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,     3,     4,     5,    -1,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    63,    -1,     5,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    63,     5,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    -1,    63,    64,    65,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    64,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    30,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    86,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    86,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      -1,    -1,    -1,    -1,    70,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    63,    70,    88,    89,    90,    91,    92,   114,
     117,   118,   119,   120,   126,   129,   130,   131,   132,     5,
      85,   130,   129,   132,   133,     0,    90,    84,   115,   116,
     130,    92,    92,     5,    85,    92,    85,    92,   114,   145,
     146,    63,    65,   131,    85,     5,   127,   128,    64,   129,
     132,    68,    84,    83,   145,   146,    85,   118,   121,   122,
     123,   129,     3,     4,     5,     7,     8,    10,    11,    51,
      52,    53,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    69,    70,    71,    72,    73,    74,    84,    86,    93,
      94,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   112,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   130,   114,   145,     5,
      64,    92,   134,   135,   136,   137,     5,    66,    96,   109,
     113,   127,    83,    68,    86,   116,    85,   110,   141,   145,
     121,   123,    86,   122,    82,   124,   125,   130,   123,    82,
      63,    96,    63,    96,    96,   113,    82,    63,    63,    63,
     143,    63,     5,    84,    84,    84,   112,   112,   123,   138,
       9,    10,    11,    63,    65,    67,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    83,   111,    98,    70,
      75,    76,    71,    72,    12,    13,    14,    15,    77,    78,
      16,    17,    69,    79,    80,    18,    19,    81,    84,    86,
     147,    86,   143,    63,    65,   130,   132,   139,   140,    64,
      68,    64,    68,    66,    86,   113,   128,   141,   142,    86,
     113,    68,    84,    82,   143,   138,    82,   143,   112,   112,
     112,    56,   148,    84,    84,    64,    63,   132,   139,    64,
       5,    64,    95,   110,   112,     5,   110,    98,    98,    98,
      99,    99,   100,   100,   101,   101,   101,   101,   102,   102,
     103,   104,   105,   106,   107,   112,    86,    64,   134,   139,
      66,   113,   140,    63,    65,    50,   136,     5,    68,    86,
     125,   113,    64,   143,    64,    64,    64,    63,   148,    98,
      64,    68,    66,    82,    64,    64,    66,    64,   134,    66,
     113,    86,   141,   143,   143,   143,   112,    64,   112,   110,
     109,    64,    66,    54,    64,   143,    64,   143,    84,   143
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    92,    92,    92,    92,    92,    92,    93,    93,    93,
      93,    93,    94,    94,    94,    94,    94,    94,    94,    94,
      95,    95,    96,    96,    96,    96,    96,    96,    97,    97,
      97,    97,    97,    97,    98,    98,    99,    99,    99,    99,
     100,   100,   100,   101,   101,   101,   102,   102,   102,   102,
     102,   103,   103,   103,   104,   104,   105,   105,   106,   106,
     107,   107,   108,   108,   109,   109,   110,   110,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   112,
     113,   114,   114,   115,   115,   116,   116,   117,   117,   117,
     117,   117,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   119,   119,   119,   120,   120,   121,
     121,   122,   123,   123,   123,   123,   124,   124,   125,   125,
     125,   126,   126,   126,   127,   127,   128,   128,   129,   129,
     130,   130,   131,   131,   131,   131,   131,   131,   131,   132,
     132,   132,   132,   133,   133,   134,   134,   135,   135,   136,
     136,   136,   137,   137,   138,   138,   139,   139,   139,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   141,   141,
     141,   142,   142,   143,   143,   143,   143,   143,   143,   144,
     144,   144,   145,   145,   145,   145,   146,   146,   147,   147,
     148,   148,   149,   149,   149,   150,   150,   150,   150,   151,
     151,   151,   151,   151
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     4,     3,     3,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     1,
       1,     3,     1,     4,     3,     4,     3,     3,     2,     2,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     4,     2,     1,     1,     1,
       2,     3,     2,     1,     2,     1,     1,     3,     1,     2,
       3,     4,     5,     2,     1,     3,     1,     3,     1,     1,
       2,     1,     1,     3,     4,     3,     4,     4,     3,     1,
       2,     2,     3,     1,     2,     1,     3,     1,     3,     2,
       2,     1,     1,     3,     1,     2,     1,     1,     2,     3,
       2,     3,     3,     4,     2,     3,     3,     4,     1,     3,
       4,     1,     3,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     2,     3,     3,     4,     1,     2,     1,     2,
       1,     2,     5,     7,     5,     5,     7,     6,     7,     3,
       2,     2,     2,     3
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
#line 1661 "src/parser.tab.cpp"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 94 "src/parser.y"
                               {(yyval.node) = (yyvsp[0].node);}
#line 1667 "src/parser.tab.cpp"
    break;

  case 8: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 105 "src/parser.y"
                                                               { (yyval.node) = new FunctionDefinition(FunctionDeclaration((yyvsp[-2].type_), std::move((yyvsp[-1].node))), (yyvsp[0].scoper));}
#line 1673 "src/parser.tab.cpp"
    break;

  case 13: /* declaration_specifiers: type_specifier  */
#line 113 "src/parser.y"
                         { (yyval.type_) = (yyvsp[0].type_); }
#line 1679 "src/parser.tab.cpp"
    break;

  case 17: /* primary_expression: IDENTIFIER  */
#line 120 "src/parser.y"
                     {(yyval.node) = new Identifier(*(yyvsp[0].string));}
#line 1685 "src/parser.tab.cpp"
    break;

  case 18: /* primary_expression: INT_LITERAL  */
#line 121 "src/parser.y"
                      {(yyval.node) = new IntLiteral((yyvsp[0].number));}
#line 1691 "src/parser.tab.cpp"
    break;

  case 19: /* primary_expression: FLOAT_LITERAL  */
#line 122 "src/parser.y"
                        {(yyval.node) = new FloatLiteral((yyvsp[0].floatlit));}
#line 1697 "src/parser.tab.cpp"
    break;

  case 21: /* primary_expression: '(' expression ')'  */
#line 124 "src/parser.y"
                             {(yyval.node)=(yyvsp[-1].node);}
#line 1703 "src/parser.tab.cpp"
    break;

  case 22: /* postfix_expression: primary_expression  */
#line 128 "src/parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1709 "src/parser.tab.cpp"
    break;

  case 32: /* unary_expression: postfix_expression  */
#line 144 "src/parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1715 "src/parser.tab.cpp"
    break;

  case 36: /* unary_expression: SIZEOF unary_expression  */
#line 149 "src/parser.y"
                                  {(yyval.node) = new SizeOf((yyvsp[0].node));}
#line 1721 "src/parser.tab.cpp"
    break;

  case 37: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 150 "src/parser.y"
                                   {(yyval.node) = new SizeOf((yyvsp[-1].node));}
#line 1727 "src/parser.tab.cpp"
    break;

  case 44: /* cast_expression: unary_expression  */
#line 163 "src/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1733 "src/parser.tab.cpp"
    break;

  case 46: /* multiplicative_expression: cast_expression  */
#line 168 "src/parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 1739 "src/parser.tab.cpp"
    break;

  case 47: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 169 "src/parser.y"
                                                        {(yyval.node) = new BinaryOperator(BinaryOperator::MULTIPLY, (yyvsp[-2].node), (yyvsp[0].node));}
#line 1745 "src/parser.tab.cpp"
    break;

  case 48: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 170 "src/parser.y"
                                                        {(yyval.node) = new BinaryOperator(BinaryOperator::DIVIDE, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1751 "src/parser.tab.cpp"
    break;

  case 49: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 171 "src/parser.y"
                                                        {(yyval.node) = new BinaryOperator(BinaryOperator::MODULO, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1757 "src/parser.tab.cpp"
    break;

  case 50: /* additive_expression: multiplicative_expression  */
#line 175 "src/parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1763 "src/parser.tab.cpp"
    break;

  case 51: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 176 "src/parser.y"
                                                            {(yyval.node) = new BinaryOperator(BinaryOperator::ADD, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1769 "src/parser.tab.cpp"
    break;

  case 52: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 177 "src/parser.y"
                                                            {(yyval.node) = new BinaryOperator(BinaryOperator::SUBTRACT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1775 "src/parser.tab.cpp"
    break;

  case 53: /* shift_expression: additive_expression  */
#line 181 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1781 "src/parser.tab.cpp"
    break;

  case 54: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 182 "src/parser.y"
                                                       {(yyval.node) = new BinaryOperator(BinaryOperator::LEFT_SHIFT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1787 "src/parser.tab.cpp"
    break;

  case 55: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 183 "src/parser.y"
                                                        {(yyval.node) = new BinaryOperator(BinaryOperator::RIGHT_SHIFT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1793 "src/parser.tab.cpp"
    break;

  case 56: /* relational_expression: shift_expression  */
#line 187 "src/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1799 "src/parser.tab.cpp"
    break;

  case 57: /* relational_expression: relational_expression '<' shift_expression  */
#line 188 "src/parser.y"
                                                     {(yyval.node) = new BinaryOperator(BinaryOperator::LESS_THAN, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1805 "src/parser.tab.cpp"
    break;

  case 58: /* relational_expression: relational_expression '>' shift_expression  */
#line 189 "src/parser.y"
                                                     {(yyval.node) = new BinaryOperator(BinaryOperator::GREATER_THAN, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1811 "src/parser.tab.cpp"
    break;

  case 59: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 190 "src/parser.y"
                                                       {(yyval.node) = new BinaryOperator(BinaryOperator::LESS_EQ, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1817 "src/parser.tab.cpp"
    break;

  case 60: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 191 "src/parser.y"
                                                       {(yyval.node) = new BinaryOperator(BinaryOperator::GREATER_EQ, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1823 "src/parser.tab.cpp"
    break;

  case 61: /* equality_expression: relational_expression  */
#line 195 "src/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1829 "src/parser.tab.cpp"
    break;

  case 62: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 196 "src/parser.y"
                                                          {(yyval.node) = new BinaryOperator(BinaryOperator::EQUAL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1835 "src/parser.tab.cpp"
    break;

  case 63: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 197 "src/parser.y"
                                                          {(yyval.node) = new BinaryOperator(BinaryOperator::NEQUAL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1841 "src/parser.tab.cpp"
    break;

  case 64: /* and_expression: equality_expression  */
#line 201 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1847 "src/parser.tab.cpp"
    break;

  case 65: /* and_expression: and_expression '&' equality_expression  */
#line 202 "src/parser.y"
                                                 {(yyval.node) = new BinaryOperator(BinaryOperator::AND, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1853 "src/parser.tab.cpp"
    break;

  case 66: /* exclusive_or_expression: and_expression  */
#line 206 "src/parser.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 1859 "src/parser.tab.cpp"
    break;

  case 67: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 207 "src/parser.y"
                                                     {(yyval.node) = new BinaryOperator(BinaryOperator::XOR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1865 "src/parser.tab.cpp"
    break;

  case 68: /* inclusive_or_expression: exclusive_or_expression  */
#line 211 "src/parser.y"
                                  { (yyval.node) = (yyvsp[0].node); }
#line 1871 "src/parser.tab.cpp"
    break;

  case 69: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 212 "src/parser.y"
                                                              {(yyval.node) = new BinaryOperator(BinaryOperator::OR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1877 "src/parser.tab.cpp"
    break;

  case 70: /* logical_and_expression: inclusive_or_expression  */
#line 216 "src/parser.y"
                                  { (yyval.node) = (yyvsp[0].node); }
#line 1883 "src/parser.tab.cpp"
    break;

  case 71: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 217 "src/parser.y"
                                                                {(yyval.node) = new BinaryOperator(BinaryOperator::LOGICAL_AND, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1889 "src/parser.tab.cpp"
    break;

  case 72: /* logical_or_expression: logical_and_expression  */
#line 221 "src/parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 1895 "src/parser.tab.cpp"
    break;

  case 73: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 222 "src/parser.y"
                                                             {(yyval.node) = new BinaryOperator(BinaryOperator::LOGICAL_OR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1901 "src/parser.tab.cpp"
    break;

  case 74: /* conditional_expression: logical_or_expression  */
#line 226 "src/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1907 "src/parser.tab.cpp"
    break;

  case 76: /* assignment_expression: conditional_expression  */
#line 231 "src/parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 1913 "src/parser.tab.cpp"
    break;

  case 77: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 232 "src/parser.y"
                                                                     {(yyval.node) = new Assign((yyvsp[-2].node), (yyvsp[-1].c), (yyvsp[0].node));}
#line 1919 "src/parser.tab.cpp"
    break;

  case 78: /* assignment_operator: '='  */
#line 236 "src/parser.y"
              {(yyval.c) = '=' ;}
#line 1925 "src/parser.tab.cpp"
    break;

  case 79: /* assignment_operator: MUL_ASSIGN  */
#line 237 "src/parser.y"
                     {(yyval.c) = '*';}
#line 1931 "src/parser.tab.cpp"
    break;

  case 80: /* assignment_operator: DIV_ASSIGN  */
#line 238 "src/parser.y"
                      {(yyval.c) = '/';}
#line 1937 "src/parser.tab.cpp"
    break;

  case 81: /* assignment_operator: MOD_ASSIGN  */
#line 239 "src/parser.y"
                      {(yyval.c) = '%'; }
#line 1943 "src/parser.tab.cpp"
    break;

  case 82: /* assignment_operator: ADD_ASSIGN  */
#line 240 "src/parser.y"
                     {(yyval.c) = '+';}
#line 1949 "src/parser.tab.cpp"
    break;

  case 83: /* assignment_operator: SUB_ASSIGN  */
#line 241 "src/parser.y"
                      {(yyval.c) = '-';}
#line 1955 "src/parser.tab.cpp"
    break;

  case 84: /* assignment_operator: LEFT_ASSIGN  */
#line 242 "src/parser.y"
                       {(yyval.c) = '<';}
#line 1961 "src/parser.tab.cpp"
    break;

  case 85: /* assignment_operator: RIGHT_ASSIGN  */
#line 243 "src/parser.y"
                       {(yyval.c) = '>';}
#line 1967 "src/parser.tab.cpp"
    break;

  case 86: /* assignment_operator: AND_ASSIGN  */
#line 244 "src/parser.y"
                      {(yyval.c) = '&';}
#line 1973 "src/parser.tab.cpp"
    break;

  case 87: /* assignment_operator: XOR_ASSIGN  */
#line 245 "src/parser.y"
                      {(yyval.c) = 'x';}
#line 1979 "src/parser.tab.cpp"
    break;

  case 88: /* assignment_operator: OR_ASSIGN  */
#line 246 "src/parser.y"
                     {(yyval.c) = '|';}
#line 1985 "src/parser.tab.cpp"
    break;

  case 89: /* expression: assignment_expression  */
#line 250 "src/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1991 "src/parser.tab.cpp"
    break;

  case 92: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 259 "src/parser.y"
                                                          {(yyval.node) = new varDeclarator((yyvsp[-2].type_), (yyvsp[-1].initDecl));}
#line 1997 "src/parser.tab.cpp"
    break;

  case 93: /* init_declarator_list: init_declarator  */
#line 263 "src/parser.y"
                          {(yyval.initDecl) = (yyvsp[0].initDecl);}
#line 2003 "src/parser.tab.cpp"
    break;

  case 94: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 264 "src/parser.y"
                                                   {(yyval.initDecl) = (yyvsp[-2].initDecl);}
#line 2009 "src/parser.tab.cpp"
    break;

  case 95: /* init_declarator: declarator  */
#line 268 "src/parser.y"
                     {std::cout << "initDeclarator($1, nullptr)" << std::endl; (yyval.initDecl) = new initDeclarator((yyvsp[0].node), nullptr);}
#line 2015 "src/parser.tab.cpp"
    break;

  case 96: /* init_declarator: declarator '=' initializer  */
#line 269 "src/parser.y"
                                     {(yyval.initDecl) = new initDeclarator((yyvsp[-2].node), (yyvsp[0].node));}
#line 2021 "src/parser.tab.cpp"
    break;

  case 103: /* type_specifier: CHAR  */
#line 282 "src/parser.y"
               {(yyval.type_) = new Type(Type::CHAR);}
#line 2027 "src/parser.tab.cpp"
    break;

  case 105: /* type_specifier: INT  */
#line 284 "src/parser.y"
              {(yyval.type_) = new Type(Type::INT);}
#line 2033 "src/parser.tab.cpp"
    break;

  case 107: /* type_specifier: FLOAT  */
#line 286 "src/parser.y"
                {(yyval.type_) = new Type(Type::FLOAT);}
#line 2039 "src/parser.tab.cpp"
    break;

  case 108: /* type_specifier: DOUBLE  */
#line 287 "src/parser.y"
                 {(yyval.type_) = new Type(Type::DOUBLE);}
#line 2045 "src/parser.tab.cpp"
    break;

  case 110: /* type_specifier: UNSIGNED  */
#line 289 "src/parser.y"
                   {(yyval.type_) = new Type(Type::UNSIGNED_INT);}
#line 2051 "src/parser.tab.cpp"
    break;

  case 123: /* specifier_qualifier_list: type_specifier  */
#line 317 "src/parser.y"
                         {(yyval.node)=(yyvsp[0].type_);}
#line 2057 "src/parser.tab.cpp"
    break;

  case 141: /* declarator: direct_declarator  */
#line 356 "src/parser.y"
                            {(yyval.node)=(yyvsp[0].node);}
#line 2063 "src/parser.tab.cpp"
    break;

  case 142: /* direct_declarator: IDENTIFIER  */
#line 360 "src/parser.y"
                     { (yyval.node) = new Identifier(*(yyvsp[0].string));}
#line 2069 "src/parser.tab.cpp"
    break;

  case 146: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 364 "src/parser.y"
                                                        {(yyval.node) = new FuncWithArgs((yyvsp[-3].node), (yyvsp[-1].declList)); }
#line 2075 "src/parser.tab.cpp"
    break;

  case 148: /* direct_declarator: direct_declarator '(' ')'  */
#line 366 "src/parser.y"
                                    { (yyval.node) = (yyvsp[-2].node); }
#line 2081 "src/parser.tab.cpp"
    break;

  case 155: /* parameter_type_list: parameter_list  */
#line 383 "src/parser.y"
                         {(yyval.declList) = (yyvsp[0].declList);}
#line 2087 "src/parser.tab.cpp"
    break;

  case 157: /* parameter_list: parameter_declaration  */
#line 388 "src/parser.y"
                                {(yyval.declList)=(yyvsp[0].declList);}
#line 2093 "src/parser.tab.cpp"
    break;

  case 158: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 389 "src/parser.y"
                                                   {(yyval.declList) = appendArgList((yyvsp[-2].declList), (yyvsp[0].declList));}
#line 2099 "src/parser.tab.cpp"
    break;

  case 159: /* parameter_declaration: declaration_specifiers declarator  */
#line 393 "src/parser.y"
                                            {(yyval.declList) = makeArgList(new varDeclarator((yyvsp[-1].type_), new initDeclarator((yyvsp[0].node), nullptr)));}
#line 2105 "src/parser.tab.cpp"
    break;

  case 164: /* type_name: specifier_qualifier_list  */
#line 404 "src/parser.y"
                                   {(yyval.node)=(yyvsp[0].node);}
#line 2111 "src/parser.tab.cpp"
    break;

  case 178: /* initializer: assignment_expression  */
#line 427 "src/parser.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 2117 "src/parser.tab.cpp"
    break;

  case 181: /* initializer_list: initializer  */
#line 433 "src/parser.y"
                      {(yyval.node)=(yyvsp[0].node);}
#line 2123 "src/parser.tab.cpp"
    break;

  case 183: /* statement: labeled_statement  */
#line 438 "src/parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2129 "src/parser.tab.cpp"
    break;

  case 184: /* statement: compound_statement  */
#line 439 "src/parser.y"
                             { (yyval.node) = (yyvsp[0].scoper); }
#line 2135 "src/parser.tab.cpp"
    break;

  case 185: /* statement: expression_statement  */
#line 440 "src/parser.y"
                               {(yyval.node)=(yyvsp[0].node);}
#line 2141 "src/parser.tab.cpp"
    break;

  case 186: /* statement: selection_statement  */
#line 441 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 2147 "src/parser.tab.cpp"
    break;

  case 187: /* statement: iteration_statement  */
#line 442 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 2153 "src/parser.tab.cpp"
    break;

  case 188: /* statement: jump_statement  */
#line 443 "src/parser.y"
                         {(yyval.node) = (yyvsp[0].node);}
#line 2159 "src/parser.tab.cpp"
    break;

  case 192: /* compound_statement: '{' '}'  */
#line 453 "src/parser.y"
                  { (yyval.scoper) = new makeScope(new NodeList(), new NodeList()); }
#line 2165 "src/parser.tab.cpp"
    break;

  case 193: /* compound_statement: '{' statement_list '}'  */
#line 454 "src/parser.y"
                                 { (yyval.scoper) = new makeScope(new NodeList(), (yyvsp[-1].listptr)); }
#line 2171 "src/parser.tab.cpp"
    break;

  case 194: /* compound_statement: '{' declaration_list '}'  */
#line 455 "src/parser.y"
                                   { (yyval.scoper) = new makeScope((yyvsp[-1].listptr), new NodeList()); }
#line 2177 "src/parser.tab.cpp"
    break;

  case 195: /* compound_statement: '{' declaration_list statement_list '}'  */
#line 456 "src/parser.y"
                                                  { (yyval.scoper) = new makeScope((yyvsp[-2].listptr), (yyvsp[-1].listptr)); }
#line 2183 "src/parser.tab.cpp"
    break;

  case 196: /* declaration_list: declaration  */
#line 461 "src/parser.y"
                      {(yyval.listptr) = makeList((yyvsp[0].node)); }
#line 2189 "src/parser.tab.cpp"
    break;

  case 197: /* declaration_list: declaration_list declaration  */
#line 462 "src/parser.y"
                                       {(yyval.listptr) = appendList((yyvsp[-1].listptr), (yyvsp[0].node));}
#line 2195 "src/parser.tab.cpp"
    break;

  case 198: /* statement_list: statement  */
#line 466 "src/parser.y"
                    {(yyval.listptr) = makeList((yyvsp[0].node)); }
#line 2201 "src/parser.tab.cpp"
    break;

  case 199: /* statement_list: statement_list statement  */
#line 467 "src/parser.y"
                                   {(yyval.listptr) = appendList((yyvsp[-1].listptr), (yyvsp[0].node));}
#line 2207 "src/parser.tab.cpp"
    break;

  case 213: /* jump_statement: RETURN expression ';'  */
#line 493 "src/parser.y"
                                {(yyval.node) = new Return((yyvsp[-1].node));}
#line 2213 "src/parser.tab.cpp"
    break;


#line 2217 "src/parser.tab.cpp"

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

#line 496 "src/parser.y"


const ASTNode *g_root; // Definition of variable (to match declaration earlier)

const ASTNode *parseAST(){
	g_root=0;
	yyparse();
	return g_root;
	
};

