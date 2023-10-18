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
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
extern int yylex();
extern FILE * yyin;
extern int yyerror (char const*s);


#line 80 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFICADOR = 3,              /* IDENTIFICADOR  */
  YYSYMBOL_CADENA_DE_CARACTERES = 4,       /* CADENA_DE_CARACTERES  */
  YYSYMBOL_CONSTANTE_CARACTER = 5,         /* CONSTANTE_CARACTER  */
  YYSYMBOL_CONSTANTE_DE_ENUMERACION = 6,   /* CONSTANTE_DE_ENUMERACION  */
  YYSYMBOL_CONSTANTE_REAL = 7,             /* CONSTANTE_REAL  */
  YYSYMBOL_CONSTANTE_DECIMAL = 8,          /* CONSTANTE_DECIMAL  */
  YYSYMBOL_CONSTANTE_OCTAL = 9,            /* CONSTANTE_OCTAL  */
  YYSYMBOL_CONSTANTE_HEXADECIMAL = 10,     /* CONSTANTE_HEXADECIMAL  */
  YYSYMBOL_OPERADOR_LOGICO_OR = 11,        /* OPERADOR_LOGICO_OR  */
  YYSYMBOL_OPERADOR_LOGICO_AND = 12,       /* OPERADOR_LOGICO_AND  */
  YYSYMBOL_OPERADOR_DE_IGUALDAD = 13,      /* OPERADOR_DE_IGUALDAD  */
  YYSYMBOL_OPERADOR_DE_DESIGUALDAD = 14,   /* OPERADOR_DE_DESIGUALDAD  */
  YYSYMBOL_OPERADOR_DESPLAZAMIENTO_DE_BITS_A_IZQUIERDA = 15, /* OPERADOR_DESPLAZAMIENTO_DE_BITS_A_IZQUIERDA  */
  YYSYMBOL_OPERADOR_DESPLAZAMIENTO_DE_BITS_A_DERECHA = 16, /* OPERADOR_DESPLAZAMIENTO_DE_BITS_A_DERECHA  */
  YYSYMBOL_OPERADOR_DE_COMPARACION = 17,   /* OPERADOR_DE_COMPARACION  */
  YYSYMBOL_MENOR_O_IGUAL = 18,             /* MENOR_O_IGUAL  */
  YYSYMBOL_MAYOR_O_IGUAL = 19,             /* MAYOR_O_IGUAL  */
  YYSYMBOL_INCREMENTO = 20,                /* INCREMENTO  */
  YYSYMBOL_DECREMENTO = 21,                /* DECREMENTO  */
  YYSYMBOL_SIZEOF = 22,                    /* SIZEOF  */
  YYSYMBOL_OPERADOR_FLECHA = 23,           /* OPERADOR_FLECHA  */
  YYSYMBOL_CASE = 24,                      /* CASE  */
  YYSYMBOL_DEFAULT = 25,                   /* DEFAULT  */
  YYSYMBOL_VOID = 26,                      /* VOID  */
  YYSYMBOL_CHAR = 27,                      /* CHAR  */
  YYSYMBOL_SHORT = 28,                     /* SHORT  */
  YYSYMBOL_INT = 29,                       /* INT  */
  YYSYMBOL_LONG = 30,                      /* LONG  */
  YYSYMBOL_FLOAT = 31,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 32,                    /* DOUBLE  */
  YYSYMBOL_SIGNED = 33,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 34,                  /* UNSIGNED  */
  YYSYMBOL_CONST = 35,                     /* CONST  */
  YYSYMBOL_VOLATILE = 36,                  /* VOLATILE  */
  YYSYMBOL_AUTO = 37,                      /* AUTO  */
  YYSYMBOL_REGISTER = 38,                  /* REGISTER  */
  YYSYMBOL_STATIC = 39,                    /* STATIC  */
  YYSYMBOL_EXTERN = 40,                    /* EXTERN  */
  YYSYMBOL_TYPEDEF = 41,                   /* TYPEDEF  */
  YYSYMBOL_ELIPSIS = 42,                   /* ELIPSIS  */
  YYSYMBOL_STRUCT = 43,                    /* STRUCT  */
  YYSYMBOL_UNION = 44,                     /* UNION  */
  YYSYMBOL_ENUM = 45,                      /* ENUM  */
  YYSYMBOL_IF = 46,                        /* IF  */
  YYSYMBOL_ELSE = 47,                      /* ELSE  */
  YYSYMBOL_SWITCH = 48,                    /* SWITCH  */
  YYSYMBOL_WHILE = 49,                     /* WHILE  */
  YYSYMBOL_DO = 50,                        /* DO  */
  YYSYMBOL_FOR = 51,                       /* FOR  */
  YYSYMBOL_GOTO = 52,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 53,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 54,                     /* BREAK  */
  YYSYMBOL_RETURN = 55,                    /* RETURN  */
  YYSYMBOL_OPERADOR_ASIGNACION_MULTIPLICACION = 56, /* OPERADOR_ASIGNACION_MULTIPLICACION  */
  YYSYMBOL_OPERADOR_ASIGNACION_DIVISION = 57, /* OPERADOR_ASIGNACION_DIVISION  */
  YYSYMBOL_OPERADOR_ASIGNACION_RESTO = 58, /* OPERADOR_ASIGNACION_RESTO  */
  YYSYMBOL_OPERADOR_ASIGNACION_SUMA = 59,  /* OPERADOR_ASIGNACION_SUMA  */
  YYSYMBOL_OPERADOR_ASIGNACION_RESTA = 60, /* OPERADOR_ASIGNACION_RESTA  */
  YYSYMBOL_OPERADOR_ASIGNACION_DESPLAZAMIENTO_DE_BITS_A_IZQUIERDA = 61, /* OPERADOR_ASIGNACION_DESPLAZAMIENTO_DE_BITS_A_IZQUIERDA  */
  YYSYMBOL_OPERADOR_ASIGNACION_DESPLAZAMIENTO_DE_BITS_A_DERECHA = 62, /* OPERADOR_ASIGNACION_DESPLAZAMIENTO_DE_BITS_A_DERECHA  */
  YYSYMBOL_OPERADOR_ASIGNACION_AND_BIT_A_BIT = 63, /* OPERADOR_ASIGNACION_AND_BIT_A_BIT  */
  YYSYMBOL_OPERADOR_ASIGNACION_XOR_BIT_A_BIT = 64, /* OPERADOR_ASIGNACION_XOR_BIT_A_BIT  */
  YYSYMBOL_OPERADOR_ASIGNACION_OR_BIT_A_BIT = 65, /* OPERADOR_ASIGNACION_OR_BIT_A_BIT  */
  YYSYMBOL_66_ = 66,                       /* ','  */
  YYSYMBOL_67_ = 67,                       /* '='  */
  YYSYMBOL_68_ = 68,                       /* '?'  */
  YYSYMBOL_69_ = 69,                       /* ':'  */
  YYSYMBOL_70_ = 70,                       /* '|'  */
  YYSYMBOL_71_ = 71,                       /* '&'  */
  YYSYMBOL_72_ = 72,                       /* '^'  */
  YYSYMBOL_73_ = 73,                       /* '<'  */
  YYSYMBOL_74_ = 74,                       /* '>'  */
  YYSYMBOL_75_ = 75,                       /* '+'  */
  YYSYMBOL_76_ = 76,                       /* '-'  */
  YYSYMBOL_77_ = 77,                       /* '*'  */
  YYSYMBOL_78_ = 78,                       /* '/'  */
  YYSYMBOL_79_ = 79,                       /* '%'  */
  YYSYMBOL_80_ = 80,                       /* '('  */
  YYSYMBOL_81_ = 81,                       /* ')'  */
  YYSYMBOL_DESPLAZAMIENTO_A_DERECHA = 82,  /* DESPLAZAMIENTO_A_DERECHA  */
  YYSYMBOL_DESPLAZAMIENTO_A_IZQUIERDA = 83, /* DESPLAZAMIENTO_A_IZQUIERDA  */
  YYSYMBOL_84_ = 84,                       /* '~'  */
  YYSYMBOL_85_ = 85,                       /* '!'  */
  YYSYMBOL_86_ = 86,                       /* '['  */
  YYSYMBOL_87_ = 87,                       /* ']'  */
  YYSYMBOL_THEN = 88,                      /* THEN  */
  YYSYMBOL_89_ = 89,                       /* ';'  */
  YYSYMBOL_90_ = 90,                       /* '{'  */
  YYSYMBOL_91_ = 91,                       /* '}'  */
  YYSYMBOL_92_ = 92,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 93,                  /* $accept  */
  YYSYMBOL_unidad_de_traduccion = 94,      /* unidad_de_traduccion  */
  YYSYMBOL_declaracion_externa = 95,       /* declaracion_externa  */
  YYSYMBOL_definicion_de_funcion = 96,     /* definicion_de_funcion  */
  YYSYMBOL_declaracion = 97,               /* declaracion  */
  YYSYMBOL_lista_de_declaraciones = 98,    /* lista_de_declaraciones  */
  YYSYMBOL_especificadores_de_declaracion = 99, /* especificadores_de_declaracion  */
  YYSYMBOL_especificador_de_clase_de_almacenamiento = 100, /* especificador_de_clase_de_almacenamiento  */
  YYSYMBOL_especificador_de_tipo = 101,    /* especificador_de_tipo  */
  YYSYMBOL_calificador_de_tipo = 102,      /* calificador_de_tipo  */
  YYSYMBOL_especificador_de_struct_o_union = 103, /* especificador_de_struct_o_union  */
  YYSYMBOL_struct_o_union = 104,           /* struct_o_union  */
  YYSYMBOL_lista_de_declaraciones_struct = 105, /* lista_de_declaraciones_struct  */
  YYSYMBOL_lista_de_declaradores_inicial = 106, /* lista_de_declaradores_inicial  */
  YYSYMBOL_declarador_inicial = 107,       /* declarador_inicial  */
  YYSYMBOL_declaracion_struct = 108,       /* declaracion_struct  */
  YYSYMBOL_lista_de_calificadores_y_especificadores = 109, /* lista_de_calificadores_y_especificadores  */
  YYSYMBOL_lista_de_declaradores_struct = 110, /* lista_de_declaradores_struct  */
  YYSYMBOL_declarador_struct = 111,        /* declarador_struct  */
  YYSYMBOL_especificador_enum = 112,       /* especificador_enum  */
  YYSYMBOL_lista_de_enumeradores = 113,    /* lista_de_enumeradores  */
  YYSYMBOL_enumerador = 114,               /* enumerador  */
  YYSYMBOL_declarador = 115,               /* declarador  */
  YYSYMBOL_declarador_directo = 116,       /* declarador_directo  */
  YYSYMBOL_puntero = 117,                  /* puntero  */
  YYSYMBOL_lista_de_calificadores_de_tipo = 118, /* lista_de_calificadores_de_tipo  */
  YYSYMBOL_lista_de_tipos_de_parametros = 119, /* lista_de_tipos_de_parametros  */
  YYSYMBOL_lista_de_parametros = 120,      /* lista_de_parametros  */
  YYSYMBOL_declaracion_de_parametro = 121, /* declaracion_de_parametro  */
  YYSYMBOL_lista_de_identificadores = 122, /* lista_de_identificadores  */
  YYSYMBOL_inicializador = 123,            /* inicializador  */
  YYSYMBOL_lista_de_inicializadores = 124, /* lista_de_inicializadores  */
  YYSYMBOL_nombre_de_tipo = 125,           /* nombre_de_tipo  */
  YYSYMBOL_declarador_abstracto = 126,     /* declarador_abstracto  */
  YYSYMBOL_declarador_abstracto_directo = 127, /* declarador_abstracto_directo  */
  YYSYMBOL_sentencia = 128,                /* sentencia  */
  YYSYMBOL_sentencia_de_etiqueta = 129,    /* sentencia_de_etiqueta  */
  YYSYMBOL_sentencia_de_expresion = 130,   /* sentencia_de_expresion  */
  YYSYMBOL_sentencia_compuesta = 131,      /* sentencia_compuesta  */
  YYSYMBOL_lista_de_sentencias = 132,      /* lista_de_sentencias  */
  YYSYMBOL_sentencia_de_seleccion = 133,   /* sentencia_de_seleccion  */
  YYSYMBOL_sentencia_de_iteracion = 134,   /* sentencia_de_iteracion  */
  YYSYMBOL_sentencia_de_salto = 135,       /* sentencia_de_salto  */
  YYSYMBOL_expresion = 136,                /* expresion  */
  YYSYMBOL_expresion_de_asignacion = 137,  /* expresion_de_asignacion  */
  YYSYMBOL_operador_de_asignacion = 138,   /* operador_de_asignacion  */
  YYSYMBOL_expresion_condicional = 139,    /* expresion_condicional  */
  YYSYMBOL_expresion_constante = 140,      /* expresion_constante  */
  YYSYMBOL_expresion_logica_OR = 141,      /* expresion_logica_OR  */
  YYSYMBOL_expresion_logica_AND = 142,     /* expresion_logica_AND  */
  YYSYMBOL_expresion_OR_inclusiva = 143,   /* expresion_OR_inclusiva  */
  YYSYMBOL_expresion_XOR = 144,            /* expresion_XOR  */
  YYSYMBOL_expresion_AND = 145,            /* expresion_AND  */
  YYSYMBOL_expresion_de_igualdad = 146,    /* expresion_de_igualdad  */
  YYSYMBOL_expresion_relacional = 147,     /* expresion_relacional  */
  YYSYMBOL_expresion_de_desplazamiento = 148, /* expresion_de_desplazamiento  */
  YYSYMBOL_expresion_aditiva = 149,        /* expresion_aditiva  */
  YYSYMBOL_expresion_multiplicativa = 150, /* expresion_multiplicativa  */
  YYSYMBOL_expresion_de_casteo = 151,      /* expresion_de_casteo  */
  YYSYMBOL_expresion_unaria = 152,         /* expresion_unaria  */
  YYSYMBOL_operador_unario = 153,          /* operador_unario  */
  YYSYMBOL_expresion_posfija = 154,        /* expresion_posfija  */
  YYSYMBOL_expresion_primaria = 155,       /* expresion_primaria  */
  YYSYMBOL_lista_de_expresiones_de_argumentos = 156, /* lista_de_expresiones_de_argumentos  */
  YYSYMBOL_constante = 157,                /* constante  */
  YYSYMBOL_constante_entera = 158          /* constante_entera  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1720

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  219
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  379

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   323


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
       2,     2,     2,    85,     2,     2,     2,    79,    71,     2,
      80,    81,    77,    75,    66,    76,    92,    78,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    69,    89,
      73,    67,    74,    68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    86,     2,    87,    72,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,    70,    91,    84,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    82,    83,    88
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    69,    69,    70,    74,    75,    79,    80,    81,    82,
      86,    87,    91,    92,    96,    97,    98,    99,   100,   101,
     105,   106,   107,   108,   109,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   127,   128,   132,   133,
     134,   138,   139,   143,   144,   148,   149,   153,   154,   158,
     162,   163,   164,   165,   169,   170,   174,   175,   176,   180,
     181,   182,   186,   187,   191,   192,   196,   197,   201,   202,
     203,   204,   205,   206,   207,   211,   212,   213,   214,   218,
     219,   223,   224,   228,   229,   233,   234,   235,   239,   240,
     244,   245,   246,   250,   251,   255,   256,   260,   261,   262,
     266,   267,   268,   269,   270,   276,   277,   278,   279,   280,
     281,   285,   286,   287,   291,   292,   296,   297,   298,   299,
     303,   304,   308,   310,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   327,   328,   329,   330,   331,   335,
     336,   340,   342,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   360,   361,   365,   369,   370,   374,
     375,   379,   380,   384,   385,   389,   390,   394,   395,   396,
     400,   401,   402,   403,   404,   408,   409,   410,   414,   415,
     416,   420,   421,   422,   423,   427,   428,   432,   433,   434,
     435,   436,   437,   441,   442,   443,   444,   445,   446,   450,
     451,   452,   453,   454,   455,   456,   457,   461,   462,   463,
     464,   468,   469,   473,   474,   475,   479,   480,   481,   482
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFICADOR",
  "CADENA_DE_CARACTERES", "CONSTANTE_CARACTER", "CONSTANTE_DE_ENUMERACION",
  "CONSTANTE_REAL", "CONSTANTE_DECIMAL", "CONSTANTE_OCTAL",
  "CONSTANTE_HEXADECIMAL", "OPERADOR_LOGICO_OR", "OPERADOR_LOGICO_AND",
  "OPERADOR_DE_IGUALDAD", "OPERADOR_DE_DESIGUALDAD",
  "OPERADOR_DESPLAZAMIENTO_DE_BITS_A_IZQUIERDA",
  "OPERADOR_DESPLAZAMIENTO_DE_BITS_A_DERECHA", "OPERADOR_DE_COMPARACION",
  "MENOR_O_IGUAL", "MAYOR_O_IGUAL", "INCREMENTO", "DECREMENTO", "SIZEOF",
  "OPERADOR_FLECHA", "CASE", "DEFAULT", "VOID", "CHAR", "SHORT", "INT",
  "LONG", "FLOAT", "DOUBLE", "SIGNED", "UNSIGNED", "CONST", "VOLATILE",
  "AUTO", "REGISTER", "STATIC", "EXTERN", "TYPEDEF", "ELIPSIS", "STRUCT",
  "UNION", "ENUM", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "OPERADOR_ASIGNACION_MULTIPLICACION",
  "OPERADOR_ASIGNACION_DIVISION", "OPERADOR_ASIGNACION_RESTO",
  "OPERADOR_ASIGNACION_SUMA", "OPERADOR_ASIGNACION_RESTA",
  "OPERADOR_ASIGNACION_DESPLAZAMIENTO_DE_BITS_A_IZQUIERDA",
  "OPERADOR_ASIGNACION_DESPLAZAMIENTO_DE_BITS_A_DERECHA",
  "OPERADOR_ASIGNACION_AND_BIT_A_BIT", "OPERADOR_ASIGNACION_XOR_BIT_A_BIT",
  "OPERADOR_ASIGNACION_OR_BIT_A_BIT", "','", "'='", "'?'", "':'", "'|'",
  "'&'", "'^'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'('",
  "')'", "DESPLAZAMIENTO_A_DERECHA", "DESPLAZAMIENTO_A_IZQUIERDA", "'~'",
  "'!'", "'['", "']'", "THEN", "';'", "'{'", "'}'", "'.'", "$accept",
  "unidad_de_traduccion", "declaracion_externa", "definicion_de_funcion",
  "declaracion", "lista_de_declaraciones",
  "especificadores_de_declaracion",
  "especificador_de_clase_de_almacenamiento", "especificador_de_tipo",
  "calificador_de_tipo", "especificador_de_struct_o_union",
  "struct_o_union", "lista_de_declaraciones_struct",
  "lista_de_declaradores_inicial", "declarador_inicial",
  "declaracion_struct", "lista_de_calificadores_y_especificadores",
  "lista_de_declaradores_struct", "declarador_struct",
  "especificador_enum", "lista_de_enumeradores", "enumerador",
  "declarador", "declarador_directo", "puntero",
  "lista_de_calificadores_de_tipo", "lista_de_tipos_de_parametros",
  "lista_de_parametros", "declaracion_de_parametro",
  "lista_de_identificadores", "inicializador", "lista_de_inicializadores",
  "nombre_de_tipo", "declarador_abstracto", "declarador_abstracto_directo",
  "sentencia", "sentencia_de_etiqueta", "sentencia_de_expresion",
  "sentencia_compuesta", "lista_de_sentencias", "sentencia_de_seleccion",
  "sentencia_de_iteracion", "sentencia_de_salto", "expresion",
  "expresion_de_asignacion", "operador_de_asignacion",
  "expresion_condicional", "expresion_constante", "expresion_logica_OR",
  "expresion_logica_AND", "expresion_OR_inclusiva", "expresion_XOR",
  "expresion_AND", "expresion_de_igualdad", "expresion_relacional",
  "expresion_de_desplazamiento", "expresion_aditiva",
  "expresion_multiplicativa", "expresion_de_casteo", "expresion_unaria",
  "operador_unario", "expresion_posfija", "expresion_primaria",
  "lista_de_expresiones_de_argumentos", "constante", "constante_entera", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-216)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1466,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
       6,   -22,    71,  1391,  -216,  -216,  -216,    55,  1655,  1655,
    1655,  -216,     8,  -216,  1574,   124,    14,   -85,    13,  -216,
    -216,   -22,   -54,  -216,  -216,  -216,   -12,  -216,  1526,  -216,
    -216,  -216,   -14,  1675,   306,  -216,  1574,    55,  -216,  1446,
     943,   124,    13,   -11,   -42,  -216,  -216,  -216,  -216,    71,
    -216,   708,  1574,  -216,  1675,  1675,  1675,  1486,  -216,    70,
      -3,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  1285,  1285,
    1328,  1368,    11,     4,    15,    44,   685,    58,    85,    63,
     107,   796,  -216,  -216,  -216,  -216,  1036,  -216,  -216,  -216,
    -216,   395,  -216,  -216,  -216,  -216,   484,  -216,  -216,  -216,
      17,  -216,  -216,     7,   142,   173,   161,   217,   209,   127,
     250,   193,    86,  -216,   307,  1368,    82,  -216,  -216,  -216,
    -216,  -216,   225,  -216,  -216,    41,   212,   228,  -216,    56,
    -216,  -216,  -216,   210,  -216,   -13,  1368,    13,  -216,  -216,
     708,  -216,  -216,  -216,  1506,  -216,  -216,  -216,  -216,  1368,
      21,  -216,   227,   685,  1368,  -216,  -216,  1036,  -216,   185,
     685,  1368,  1368,  1368,   249,   816,   213,  -216,  -216,  -216,
      51,    39,   220,    89,  -216,   573,  -216,  -216,  1368,  -216,
    1368,  1368,  1368,  1368,  1368,  1368,  1368,  1368,  1368,  1368,
    1368,  1368,  1368,  1368,  1368,  1368,  1368,  1368,  1368,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    1368,  -216,  -216,  -216,   300,  1079,  1368,   301,   952,  1368,
    -216,    34,  -216,   155,  -216,  1614,   302,  -216,  -216,  -216,
    -216,  -216,  -216,    -2,  -216,  -216,    70,  -216,  1368,  -216,
     226,   685,  -216,   126,   133,   136,   237,   836,    67,  -216,
    -216,  1594,   156,  -216,  1368,  -216,  -216,  -216,   142,   198,
     173,   161,   217,   209,   127,   127,   250,   250,   250,   250,
     193,   193,    86,    86,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,   137,   -20,  -216,   238,   239,   219,   155,  1655,  1368,
    -216,  -216,  -216,   596,  -216,  -216,  -216,  -216,  -216,   685,
     685,   685,  1368,  1119,    68,   923,  -216,  1368,  1368,  -216,
    -216,  -216,  -216,  -216,   240,   231,  -216,  -216,   276,  -216,
    -216,   139,   685,   140,  1162,  1202,   106,  -216,  -216,  -216,
    -216,   243,   235,  -216,   685,   685,   147,   685,   158,  1245,
    1368,  -216,  -216,  -216,   685,  -216,   685,   685,   163,   168,
    -216,  -216,  -216,   685,   685,  -216,   278,   685,  -216
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    68,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    36,    37,    20,    21,    22,    23,    24,    41,    42,
       0,    75,     0,     0,     2,     4,     5,     0,    14,    16,
      18,    34,     0,    35,     0,    66,     0,    61,     0,    79,
      77,    76,     0,     1,     3,    10,     0,    45,    47,    15,
      17,    19,    40,     0,     0,    12,     0,     0,     6,     0,
       0,    67,     0,    64,     0,    62,    80,    78,    69,     0,
      11,     0,     0,     8,     0,    50,    52,     0,    43,     0,
     207,   209,   214,   219,   215,   216,   217,   218,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   198,   195,   196,   197,     0,   193,   194,   114,
     116,     0,   120,   105,   106,   107,     0,   108,   109,   110,
       0,   139,   141,   154,   157,   159,   161,   163,   165,   167,
     170,   175,   178,   181,   185,     0,   187,   199,   208,   213,
      13,     7,    47,    88,    73,    86,     0,    81,    83,     0,
     207,    70,   156,     0,   185,     0,     0,     0,    59,    46,
       0,    48,    90,     9,     0,    51,    53,    38,    44,     0,
       0,    54,    56,     0,     0,   188,   189,     0,   191,     0,
       0,     0,     0,     0,     0,     0,     0,   135,   136,   137,
       0,    95,     0,     0,   118,     0,   117,   121,     0,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   143,
       0,   190,   205,   206,     0,     0,     0,     0,     0,     0,
      85,    97,    87,    98,    72,     0,     0,    74,    71,    60,
      65,    63,    93,     0,    39,    57,     0,    49,     0,   111,
       0,     0,   113,     0,     0,     0,     0,     0,     0,   134,
     138,     0,    97,    96,     0,   210,   119,   140,   158,     0,
     160,   162,   164,   166,   168,   169,   172,   174,   171,   173,
     176,   177,   179,   180,   182,   183,   184,   142,   204,   201,
     211,     0,     0,   203,     0,     0,     0,    99,     0,     0,
      82,    84,    89,     0,    91,    55,    58,   192,   112,     0,
       0,     0,     0,     0,     0,     0,   186,     0,     0,   202,
     200,   103,   100,   101,     0,     0,    92,    94,     0,   123,
     124,     0,     0,     0,     0,     0,     0,   155,   212,   104,
     102,     0,     0,   126,     0,     0,     0,     0,     0,     0,
       0,   125,   129,   128,     0,   127,     0,     0,     0,     0,
     132,   131,   130,     0,     0,   133,     0,     0,   122
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,   325,  -216,    25,   192,     0,  -216,   -34,    -6,
    -216,  -216,   255,  -216,   284,   -65,   -24,  -216,   117,  -216,
     313,   205,   -19,   -32,    24,  -216,   -58,  -216,   131,  -216,
    -154,  -216,   201,  -106,  -215,   -94,  -216,  -216,   160,   268,
    -216,  -216,  -216,   -70,   -37,  -216,   -28,  -149,  -216,   180,
     182,   184,   181,   183,    78,    48,    65,    72,  -125,   -27,
    -216,  -216,  -216,  -216,  -216,  -216
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    23,    24,    25,    55,    56,    57,    28,    29,    30,
      31,    32,    77,    46,    47,    78,    79,   170,   171,    33,
      64,    65,    34,    35,    36,    41,   304,   147,   148,   149,
     161,   253,   192,   305,   243,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   230,   122,   153,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   301,   138,   139
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,   146,   184,    42,    61,    62,   252,   250,    48,    37,
     231,    52,   168,    11,    12,    39,    63,     1,   200,    75,
     255,   179,   197,    27,   157,    26,   307,    68,    49,    50,
      51,   190,   152,   154,   162,    66,   193,     1,   142,   242,
      75,    75,    75,    75,     1,    40,   198,    76,    26,   158,
     142,   165,   166,   157,    69,    21,   156,   307,     1,   145,
     172,   175,   176,   178,   313,    67,   173,   330,    76,    76,
      76,    76,    75,     1,     1,   201,    74,    70,   249,   259,
     180,   140,   191,   198,   181,   273,   262,   256,   186,   314,
     306,   294,   295,   296,    22,   182,    38,   140,    53,   168,
      76,   197,   232,   233,   193,   234,   199,   193,   154,   316,
     257,   263,   264,   265,   238,   268,    21,   198,    21,   271,
     239,   238,   246,   162,   183,   239,   240,   239,   152,   154,
      75,   279,    21,   198,   198,    22,   140,   247,   185,   169,
     270,   152,   154,    75,    45,   208,   209,    21,    21,   326,
      22,    22,   187,   191,   202,   198,   325,   344,    76,   337,
     335,   277,   235,   216,   217,   218,   302,   318,   236,   241,
     275,    76,   198,   154,   237,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   198,   297,    58,   359,   188,   324,   300,   198,
     210,   211,   198,   328,    59,   198,   198,   319,    73,    61,
      60,   152,   154,   198,   320,   272,   141,   321,   329,    42,
     352,   354,   206,   207,   198,   338,   339,   340,   364,   198,
     152,   154,   163,   204,   198,   308,   271,   172,   145,   366,
      72,   309,   239,   203,   373,   145,   111,   154,   353,   374,
     334,   198,   341,   343,   261,   346,   286,   287,   288,   289,
     362,   363,   241,   365,   198,   212,   213,   327,   214,   215,
     370,   145,   371,   372,   356,   358,   162,   290,   291,   375,
     376,   152,   154,   378,   284,   285,   292,   293,   205,   368,
     369,   348,    71,   244,   245,   272,   258,   248,   266,   347,
     154,   274,   269,   298,   303,   312,   333,   317,   145,    80,
      81,    82,    83,    84,    85,    86,    87,   322,   350,   331,
     332,   349,   351,   360,   361,   377,    88,    89,    90,   164,
      91,    92,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    44,    18,
      19,    20,    93,   159,    94,    95,    96,    97,    98,    99,
     100,   101,   251,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   315,   229,   155,   311,   102,   260,   195,
     278,   103,   104,   105,   280,   282,   106,   281,   283,     0,
     107,   108,     0,     0,     0,   109,    54,   110,    80,    81,
      82,    83,    84,    85,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,     0,    91,
      92,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     0,    18,    19,
      20,    93,     0,    94,    95,    96,    97,    98,    99,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,     0,
     103,   104,   105,     0,     0,   106,     0,     0,     0,   107,
     108,     0,     0,     0,   109,    54,   194,    80,    81,    82,
      83,    84,    85,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,     0,    91,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,    94,    95,    96,    97,    98,    99,   100,   101,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,     0,   103,
     104,   105,     0,     0,   106,     0,     0,     0,   107,   108,
       0,     0,     0,   109,    54,   196,    80,    81,    82,    83,
      84,    85,    86,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,     0,    91,    92,   150,
      81,    82,    83,    84,    85,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    93,
       0,    94,    95,    96,    97,    98,    99,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,     0,     0,     0,   103,   104,
     105,     0,     0,   106,     0,     0,     0,   107,   108,     0,
       0,     0,   109,    54,   276,     0,     0,   102,     0,     0,
       0,   103,   104,   105,     0,     0,   106,     0,     0,     0,
     107,   108,     0,     0,     0,     0,   160,   336,    80,    81,
      82,    83,    84,    85,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,     0,    91,
      92,   150,    81,    82,    83,    84,    85,    86,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    93,     0,    94,    95,    96,    97,    98,    99,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,     0,
     103,   104,   105,     0,     0,   106,     0,     0,     0,   107,
     108,     0,     0,     0,   109,    54,     0,     0,     0,   102,
       0,     0,     0,   103,   104,   105,     0,     0,   106,     0,
       0,     0,   107,   108,     0,     0,     0,     0,   160,   150,
      81,    82,    83,    84,    85,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,   150,
      81,    82,    83,    84,    85,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,   150,
      81,    82,    83,    84,    85,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,   103,   104,   105,     0,     0,   106,     0,     0,     0,
     107,   108,     0,     0,     0,   189,     0,   102,     0,     0,
       0,   103,   104,   105,     0,     0,   106,     0,     0,     0,
     107,   108,     0,     0,     0,   267,     0,   102,     0,     0,
       0,   103,   104,   105,     0,     0,   106,     0,     0,     0,
     107,   108,     0,     0,     0,   323,   150,    81,    82,    83,
      84,    85,    86,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,   150,    81,    82,    83,
      84,    85,    86,    87,     0,     1,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,   102,    18,    19,    20,   103,   104,
     105,     0,     0,   106,     0,     0,     0,   107,   108,     0,
       0,     0,   345,     0,   102,     0,     0,     0,   103,   104,
     105,     0,     0,   106,     0,     0,     0,   107,   108,    21,
     151,     0,   238,     0,     0,     0,     0,     0,   239,   150,
      81,    82,    83,    84,    85,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,     0,     0,     0,    18,
      19,    20,   150,    81,    82,    83,    84,    85,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,     0,     0,     0,     0,     0,   102,     0,     0,
       0,   103,   104,   105,     0,     0,   106,     0,     0,     0,
     107,   108,   150,    81,    82,    83,    84,    85,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,     0,     0,     0,     0,     0,     0,     0,     0,
     102,     0,     0,     0,   103,   104,   105,     0,     0,   106,
     299,     0,     0,   107,   108,   150,    81,    82,    83,    84,
      85,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,     0,     0,     0,     0,     0,
     102,     0,     0,     0,   103,   104,   105,     0,     0,   106,
     342,     0,     0,   107,   108,   150,    81,    82,    83,    84,
      85,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,   103,   104,   105,
       0,     0,   106,   355,     0,     0,   107,   108,   150,    81,
      82,    83,    84,    85,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,     0,     0,
       0,     0,     0,   102,     0,     0,     0,   103,   104,   105,
       0,     0,   106,   357,     0,     0,   107,   108,   150,    81,
      82,    83,    84,    85,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,     0,
     103,   104,   105,     0,     0,   106,   367,     0,     0,   107,
     108,   150,    81,    82,    83,    84,    85,    86,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,     0,     0,     0,     0,     0,   102,     0,     0,     0,
     103,   104,   105,     0,     0,   174,     0,     0,     0,   107,
     108,   150,    81,    82,    83,    84,    85,    86,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    43,     0,     0,     1,     0,     0,     0,     0,   102,
       0,     0,     0,   103,   104,   105,     0,     0,   177,     0,
       0,     0,   107,   108,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     0,    18,    19,    20,     0,     0,   102,
       0,     0,     0,   103,   104,   105,     0,     0,   106,   143,
       0,     0,   107,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     1,
       0,    22,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,     0,    18,
      19,    20,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,     0,    18,
      19,    20,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,     0,   144,     0,    18,
      19,    20,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    21,     0,     0,    22,     0,     0,    18,
      19,    20,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,     0,    18,
      19,    20,     0,     0,     0,     0,     0,   167,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,     0,     0,     0,   254,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    54,    18,    19,    20,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,     0,    18,    19,    20,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,   310,    18,    19,    20,
       0,     0,     0,     0,    54,     0,     0,     0,     0,     0,
       0,    21,     0,     0,   271,     0,     0,     0,     0,     0,
     239,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     0,    18,    19,
      20,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,     0,     0,     0,    18,    19,
      20
};

static const yytype_int16 yycheck[] =
{
       0,    59,    96,    22,    36,    90,   160,   156,    27,     3,
     135,     3,    77,    35,    36,    21,     3,     3,    11,    53,
     169,    91,   116,    23,    66,     0,   241,    81,    28,    29,
      30,   101,    60,    60,    71,    41,   106,     3,    57,   145,
      74,    75,    76,    77,     3,    21,    66,    53,    23,    91,
      69,    75,    76,    66,    66,    77,    67,   272,     3,    59,
      79,    88,    89,    90,    66,    41,    69,    87,    74,    75,
      76,    77,   106,     3,     3,    68,    90,    89,    91,   173,
      69,    56,   106,    66,    80,   191,   180,    66,     3,    91,
     239,   216,   217,   218,    80,    80,    90,    72,    90,   164,
     106,   195,    20,    21,   174,    23,    89,   177,   135,   258,
      89,   181,   182,   183,    80,   185,    77,    66,    77,    80,
      86,    80,    66,   160,    80,    86,   145,    86,   156,   156,
     164,   201,    77,    66,    66,    80,   111,    81,    80,    69,
      89,   169,   169,   177,    89,    18,    19,    77,    77,   274,
      80,    80,    89,   177,    12,    66,    89,    89,   164,   313,
     309,   198,    80,    77,    78,    79,   236,   261,    86,   145,
      81,   177,    66,   200,    92,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,    66,   230,    34,    89,    89,   267,   235,    66,
      73,    74,    66,    66,    80,    66,    66,    81,    48,   241,
      86,   239,   239,    66,    81,   191,    56,    81,    81,   238,
      81,    81,    13,    14,    66,   319,   320,   321,    81,    66,
     258,   258,    72,    72,    66,    80,    80,   256,   238,    81,
      48,    86,    86,    70,    81,   245,    54,   274,   342,    81,
     308,    66,   322,   323,    69,   325,   208,   209,   210,   211,
     354,   355,   238,   357,    66,    15,    16,    69,    75,    76,
     364,   271,   366,   367,   344,   345,   313,   212,   213,   373,
     374,   309,   309,   377,   206,   207,   214,   215,    71,   359,
     360,   328,    67,    81,    66,   271,    69,    87,    49,   327,
     327,    81,    89,     3,     3,     3,    87,    81,   308,     3,
       4,     5,     6,     7,     8,     9,    10,    80,    87,    81,
      81,    81,    46,    80,    89,    47,    20,    21,    22,    74,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    23,    43,
      44,    45,    46,    69,    48,    49,    50,    51,    52,    53,
      54,    55,   157,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,   256,    67,    62,   245,    71,   177,   111,
     200,    75,    76,    77,   202,   204,    80,   203,   205,    -1,
      84,    85,    -1,    -1,    -1,    89,    90,    91,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,    84,
      85,    -1,    -1,    -1,    89,    90,    91,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,
      76,    77,    -1,    -1,    80,    -1,    -1,    -1,    84,    85,
      -1,    -1,    -1,    89,    90,    91,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,    76,
      77,    -1,    -1,    80,    -1,    -1,    -1,    84,    85,    -1,
      -1,    -1,    89,    90,    91,    -1,    -1,    71,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
      84,    85,    -1,    -1,    -1,    -1,    90,    91,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,
      25,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,    84,
      85,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    75,    76,    77,    -1,    -1,    80,    -1,
      -1,    -1,    84,    85,    -1,    -1,    -1,    -1,    90,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
      84,    85,    -1,    -1,    -1,    89,    -1,    71,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
      84,    85,    -1,    -1,    -1,    89,    -1,    71,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
      84,    85,    -1,    -1,    -1,    89,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    71,    43,    44,    45,    75,    76,
      77,    -1,    -1,    80,    -1,    -1,    -1,    84,    85,    -1,
      -1,    -1,    89,    -1,    71,    -1,    -1,    -1,    75,    76,
      77,    -1,    -1,    80,    -1,    -1,    -1,    84,    85,    77,
      87,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
      84,    85,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    80,
      81,    -1,    -1,    84,    85,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    80,
      81,    -1,    -1,    84,    85,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    75,    76,    77,
      -1,    -1,    80,    81,    -1,    -1,    84,    85,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    75,    76,    77,
      -1,    -1,    80,    81,    -1,    -1,    84,    85,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      75,    76,    77,    -1,    -1,    80,    81,    -1,    -1,    84,
      85,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,    84,
      85,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,     0,    -1,    -1,     3,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    75,    76,    77,    -1,    -1,    80,    -1,
      -1,    -1,    84,    85,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    -1,    -1,    71,
      -1,    -1,    -1,    75,    76,    77,    -1,    -1,    80,     3,
      -1,    -1,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,     3,
      -1,    80,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    81,    -1,    43,
      44,    45,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    77,    -1,    -1,    80,    -1,    -1,    43,
      44,    45,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    91,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    90,    43,    44,    45,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    43,    44,
      45,    77,    80,    94,    95,    96,    97,    99,   100,   101,
     102,   103,   104,   112,   115,   116,   117,     3,    90,   102,
     117,   118,   115,     0,    95,    89,   106,   107,   115,    99,
      99,    99,     3,    90,    90,    97,    98,    99,   131,    80,
      86,   116,    90,     3,   113,   114,   102,   117,    81,    66,
      89,    67,    98,   131,    90,   101,   102,   105,   108,   109,
       3,     4,     5,     6,     7,     8,     9,    10,    20,    21,
      22,    24,    25,    46,    48,    49,    50,    51,    52,    53,
      54,    55,    71,    75,    76,    77,    80,    84,    85,    89,
      91,    98,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   139,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   157,   158,
      97,   131,   115,     3,    81,    99,   119,   120,   121,   122,
       3,    87,   139,   140,   152,   113,    67,    66,    91,   107,
      90,   123,   137,   131,   105,   109,   109,    91,   108,    69,
     110,   111,   115,    69,    80,   152,   152,    80,   152,   136,
      69,    80,    80,    80,   128,    80,     3,    89,    89,    89,
     136,   109,   125,   136,    91,   132,    91,   128,    66,    89,
      11,    68,    12,    70,    72,    71,    13,    14,    18,    19,
      73,    74,    15,    16,    75,    76,    77,    78,    79,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    67,
     138,   151,    20,    21,    23,    80,    86,    92,    80,    86,
     115,   117,   126,   127,    81,    66,    66,    81,    87,    91,
     140,   114,   123,   124,    91,   140,    66,    89,    69,   128,
     125,    69,   128,   136,   136,   136,    49,    89,   136,    89,
      89,    80,   117,   126,    81,    81,    91,   137,   142,   136,
     143,   144,   145,   146,   147,   147,   148,   148,   148,   148,
     149,   149,   150,   150,   151,   151,   151,   137,     3,    81,
     137,   156,   136,     3,   119,   126,   140,   127,    80,    86,
      42,   121,     3,    66,    91,   111,   140,    81,   128,    81,
      81,    81,    80,    89,   136,    89,   151,    69,    66,    81,
      87,    81,    81,    87,   119,   140,    91,   123,   128,   128,
     128,   136,    81,   136,    89,    89,   136,   139,   137,    81,
      87,    46,    81,   128,    81,    81,   136,    81,   136,    89,
      80,    89,   128,   128,    81,   128,    81,    81,   136,   136,
     128,   128,   128,    81,    81,   128,   128,    47,   128
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    95,    95,    96,    96,    96,    96,
      97,    97,    98,    98,    99,    99,    99,    99,    99,    99,
     100,   100,   100,   100,   100,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   102,   102,   103,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     109,   109,   109,   109,   110,   110,   111,   111,   111,   112,
     112,   112,   113,   113,   114,   114,   115,   115,   116,   116,
     116,   116,   116,   116,   116,   117,   117,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   121,   122,   122,
     123,   123,   123,   124,   124,   125,   125,   126,   126,   126,
     127,   127,   127,   127,   127,   128,   128,   128,   128,   128,
     128,   129,   129,   129,   130,   130,   131,   131,   131,   131,
     132,   132,   133,   133,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   135,   135,   135,   135,   135,   136,
     136,   137,   137,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   139,   139,   140,   141,   141,   142,
     142,   143,   143,   144,   144,   145,   145,   146,   146,   146,
     147,   147,   147,   147,   147,   148,   148,   148,   149,   149,
     149,   150,   150,   150,   150,   151,   151,   152,   152,   152,
     152,   152,   152,   153,   153,   153,   153,   153,   153,   154,
     154,   154,   154,   154,   154,   154,   154,   155,   155,   155,
     155,   156,   156,   157,   157,   157,   158,   158,   158,   158
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     3,     3,     4,
       2,     3,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     5,
       2,     1,     1,     1,     2,     1,     3,     1,     3,     3,
       1,     2,     1,     2,     1,     3,     1,     2,     3,     4,
       5,     2,     1,     3,     1,     3,     1,     2,     1,     3,
       3,     4,     4,     3,     4,     1,     2,     2,     3,     1,
       2,     1,     3,     1,     3,     2,     1,     2,     1,     3,
       1,     3,     4,     1,     3,     1,     2,     1,     1,     2,
       3,     3,     4,     3,     4,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     1,     2,     2,     3,     3,     4,
       1,     2,    12,     5,     5,     7,     6,     7,     7,     7,
       8,     8,     8,     9,     3,     2,     2,     2,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     4,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     4,     3,     3,     2,     2,     1,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 72: /* declarador_directo: declarador_directo '(' lista_de_tipos_de_parametros ')'  */
#line 205 "parser.y"
                                                                        { printf("Funcion: %s\n", (yyvsp[-3].sval)); }
#line 2064 "parser.tab.c"
    break;

  case 85: /* declaracion_de_parametro: especificadores_de_declaracion declarador  */
#line 233 "parser.y"
                                                          { printf("Parametro: %s\n", (yyvsp[0].sval)); }
#line 2070 "parser.tab.c"
    break;


#line 2074 "parser.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 485 "parser.y"


int main (int argc, const char * argv[])
{
	#if YYDEBUG
        yydebug = 1;
	#endif
	if (argc != 2)
	{
		puts ("Error: Se espera el nombre del archivo a analizar");
		return 1;
	}
	yyin = fopen (argv[1], "r");
	
  yyparse ();
  return 0;
}
