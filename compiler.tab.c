/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "compiler.y" /* yacc.c:339  */

    #include "AST.h"
    #include "IR.h"
    int yyerror(const char *s);  
    extern int yylex(void);
    extern int yylineno;
    extern char *yytext;
    AST *root;

#line 76 "compiler.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "compiler.tab.h".  */
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
#line 11 "compiler.y" /* yacc.c:355  */
 int val_int; float val_float; String val_str; int type; AST * tree; 

#line 208 "compiler.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 225 "compiler.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1467

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  234
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  390

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   343

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    66,    72,    83,    86,    92,    95,   101,
     104,   110,   113,   121,   124,   131,   134,   137,   140,   143,
     146,   149,   152,   158,   161,   167,   170,   179,   185,   191,
     197,   203,   212,   218,   224,   230,   236,   242,   248,   254,
     260,   266,   272,   275,   281,   290,   296,   299,   308,   314,
     323,   326,   332,   335,   341,   344,   347,   350,   356,   359,
     365,   368,   371,   377,   383,   386,   392,   395,   404,   407,
     413,   419,   428,   434,   440,   449,   458,   461,   467,   473,
     476,   479,   482,   485,   488,   491,   494,   497,   500,   503,
     509,   512,   515,   518,   524,   527,   533,   536,   542,   545,
     551,   555,   558,   564,   570,   579,   582,   588,   591,   594,
     600,   603,   606,   609,   612,   615,   621,   624,   627,   633,
     636,   639,   642,   648,   654,   657,   663,   666,   677,   683,
     686,   692,   698,   701,   704,   707,   710,   716,   722,   725,
     728,   731,   737,   740,   746,   749,   752,   755,   758,   761,
     767,   773,   779,   785,   791,   797,   806,   809,   815,   818,
     824,   830,   839,   842,   848,   857,   860,   866,   875,   878,
     884,   890,   896,   905,   908,   914,   923,   926,   935,   938,
     947,   950,   959,   962,   971,   974,   983,   986,   992,   995,
    1001,  1007,  1013,  1019,  1025,  1031,  1037,  1043,  1049,  1055,
    1061,  1070,  1073,  1079,  1087,  1090,  1093,  1096,  1099,  1102,
    1108,  1114,  1117,  1123,  1126,  1132,  1135,  1141,  1144,  1150,
    1153,  1156,  1162,  1168,  1174,  1183,  1186,  1189,  1192,  1195,
    1201,  1204,  1207,  1210,  1213
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CASE", "DEFAULT", "IF", "ELSE",
  "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN",
  "SIZEOF", "INT_CONST", "FLOAT_CONST", "IDENTIFIER", "STRING", "ADD",
  "SUB", "MUL", "DIV", "BIT_XOR", "LPAREN", "RPAREN", "SEMICOLON",
  "ELLIPSIS", "SHIFT_RIGHT", "SHIFT_LEFT", "INC", "DEC", "PTR", "AND",
  "OR", "LE", "GE", "EQ", "NE", "LBRACE", "RBRACE", "COMMA", "COLON",
  "ASSIGN", "LBRACKET", "RBRACKET", "DOT", "BIT_AND", "NOT", "NEGATION",
  "MOD", "LT", "GT", "BIT_OR", "QM", "SHIFT_LEFT_ASSIGN",
  "SHIFT_RIGHT_ASSIGN", "AND_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPEDEF_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER",
  "INLINE", "CONST", "RESTRICT", "VOLATILE", "BOOL", "CHAR", "SHORT",
  "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "VOID", "STRUCT",
  "UNION", "ENUM", "$accept", "program", "constant", "translation_unit",
  "external_declaration", "function_definition", "declaration_list",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343
};
# endif

#define YYPACT_NINF -320

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-320)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1379,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,    41,    24,  1379,  -320,  -320,  -320,   157,
    1379,  1379,  -320,    42,  -320,  1379,  1379,     1,    37,  -320,
    -320,  -320,     5,   168,  -320,   116,  -320,  1043,    43,   155,
    -320,  -320,    17,   468,  -320,  -320,    37,    30,    90,  -320,
    -320,  -320,     5,    59,  -320,   168,   334,  1186,  1068,  -320,
     157,  -320,   789,    -4,    43,   468,   126,   159,   225,  -320,
       4,   159,   120,  1354,  -320,    21,  -320,  -320,  -320,  -320,
     121,   162,  1354,    79,   149,   166,   172,  1021,   174,   205,
     201,   227,  1222,  1374,  -320,  -320,   213,  -320,  -320,  -320,
    -320,   764,  -320,  1394,  1394,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,   249,   329,  1354,  -320,    15,   243,   240,    75,
     246,   219,   247,   221,   239,    63,  -320,  -320,   127,  -320,
    -320,  -320,   422,  -320,  -320,  -320,  -320,  -320,  -320,   690,
    -320,  -320,  -320,  -320,  -320,  -320,   178,   262,   248,  -320,
       7,   251,   946,   924,   445,  -320,  -320,  -320,  -320,  1354,
     129,  -320,   278,  -320,  -320,    22,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,   289,  1021,  1354,  1354,  1354,   284,  1057,
     298,  -320,  -320,  -320,   130,   764,  -320,  1021,    88,   314,
      82,   764,  -320,  -320,  1242,  -320,  -320,   339,  1354,   340,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  1354,  -320,  1354,  1354,  1354,  1354,  1354,  1354,  1354,
    1354,  1354,  1354,  1354,  1354,  1354,  1354,  1354,  1354,  1354,
    1354,  1354,  -320,  1354,  -320,  -320,  1354,   342,  1112,  -320,
     237,  1186,   318,  -320,   178,  -320,   176,  -320,    78,  -320,
     850,  -320,   345,  -320,   946,   321,   322,  -320,  1354,   323,
    -320,  -320,  -320,     4,  1354,  -320,  1021,  -320,    93,    95,
      99,   346,   337,  1057,  -320,  -320,   344,  -320,    88,   347,
    -320,  1262,  -320,   350,  -320,   104,  -320,  -320,   117,  -320,
    -320,  -320,  -320,  -320,    15,    15,   243,   243,   240,   240,
     240,   240,    75,    75,   246,   219,   247,   221,   239,   276,
    -320,   331,  -320,  -320,  -320,   542,  -320,  -320,   352,    78,
     827,  1298,  -320,  -320,  -320,   333,  -320,  -320,   335,  -320,
    -320,  -320,  -320,  1021,  1021,  1021,  1354,  1334,   355,   690,
    -320,   355,  -320,  1354,  -320,  1354,  -320,  -320,  -320,  1186,
    -320,  -320,   354,   351,  -320,   353,  -320,  -320,   390,  -320,
    -320,   107,  1021,   110,   282,  -320,  -320,  -320,  -320,  -320,
    -320,  1021,  -320,  -320,  1021,  -320,   616,  -320,  -320,  -320
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    44,    27,    28,    29,    30,    31,    75,    72,    73,
      74,    41,    36,    38,    33,    37,    39,    40,    34,    35,
      32,    48,    49,     0,     0,     2,     5,     7,     8,     0,
      19,    15,    42,     0,    43,    21,    17,    67,     0,     1,
       6,    78,    91,     0,    13,     0,    23,    25,    76,     0,
      20,    16,    47,     0,    22,    18,     0,    70,     0,    68,
      94,    93,    90,     0,    14,     0,     0,     0,     0,    11,
       0,     9,     0,     0,    77,     0,     0,    55,     0,    50,
       0,    57,     0,     0,    64,     0,    95,    92,    79,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     3,   128,   130,   152,   153,
     151,     0,   220,     0,     0,   213,   150,   155,   154,   129,
     217,   132,   144,   156,     0,   158,   162,   165,   168,   173,
     176,   178,   180,   182,   184,   186,   188,   201,     0,   218,
     209,   204,     0,   215,   205,   206,   207,   208,   128,     0,
      26,   116,    12,    10,   103,    89,   102,     0,    97,    98,
       0,     0,     0,     0,     0,    53,    54,    46,    51,     0,
       0,    58,    60,    56,    63,     0,   156,   203,    71,    66,
      69,   229,   221,     0,     0,     0,     0,     0,     0,     0,
       0,   230,   231,   232,     0,     0,   148,     0,   106,     0,
       0,     0,   145,   146,     0,   138,   139,     0,     0,     0,
     190,   196,   197,   198,   191,   192,   193,   194,   195,   199,
     200,     0,   147,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   219,     0,   214,   216,     0,     0,     0,   120,
       0,     0,     0,   124,     0,   100,   109,   101,   108,    87,
       0,    88,     0,    86,     0,     0,   151,    81,     0,     0,
      45,    62,    52,     0,     0,    65,     0,   212,     0,     0,
       0,     0,     0,     0,   234,   233,     0,   210,     0,   109,
     105,     0,   131,     0,   134,     0,   142,   137,     0,   136,
     189,   159,   160,   161,   163,   164,   167,   166,   171,   172,
     169,   170,   174,   175,   177,   179,   181,   183,   185,     0,
     202,     0,   127,   125,   117,     0,   119,   123,     0,   107,
       0,     0,    96,    99,   104,     0,    83,    85,     0,    80,
      59,    61,   211,     0,     0,     0,     0,     0,   149,     0,
     157,     0,   135,     0,   133,     0,   126,   118,   122,     0,
     110,   115,     0,   151,   112,     0,    82,    84,   222,   224,
     225,     0,     0,     0,     0,   143,   187,   121,   114,   113,
     111,     0,   226,   227,     0,   140,     0,   223,   228,   141
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -320,  -320,  -320,  -320,   373,  -320,   377,     9,     0,  -320,
     363,  -320,   -25,  -320,  -320,   370,   -58,   -35,  -320,   175,
    -320,   394,   -71,    67,  -320,   -22,   -34,   -30,   -62,   122,
    -320,   191,  -320,  -150,  -137,  -235,   -64,   106,  -319,  -320,
     208,  -320,  -320,  -320,   -19,  -320,  -108,   100,   105,    84,
      94,   222,   220,   223,   226,   224,  -320,   -79,   -66,  -320,
     -94,   -82,   -95,  -320,   -24,  -320,   317,  -184,  -320,  -320,
    -320
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,   119,    25,    26,    27,   248,    69,    70,    45,
      46,    30,    31,    32,    33,    78,    79,    80,   170,   171,
      34,    58,    59,    35,    36,    63,    48,    49,    62,   157,
     158,   159,   160,   199,   328,   258,   249,   250,   251,   252,
     253,   121,   122,   295,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   221,
     138,   178,   139,   140,   141,   142,   143,   144,   145,   146,
     147
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      29,   151,   188,   150,   177,   283,   359,    47,   194,    28,
     183,   163,    61,   177,   180,    74,   222,   200,   161,   257,
     168,   329,    41,    71,    39,    29,    42,    42,    77,    43,
      50,    51,    87,   261,    28,    54,    55,   223,   224,    57,
      57,    56,   166,    90,   153,   286,   173,   169,    90,   262,
      77,   293,    77,    77,   329,    57,    77,    75,   172,    37,
      52,   290,   179,   275,   176,   162,   225,   359,    72,     8,
       9,    10,   156,   176,    83,   120,   198,   152,     8,     9,
      10,    38,    53,   151,   196,    88,    77,   271,    73,   277,
     177,   278,   279,   280,   202,   203,   265,   269,   240,   347,
     264,   200,   287,   330,   180,   176,   168,   200,   292,    60,
      42,   230,   231,   288,   298,   301,   302,   303,   241,   343,
      81,   344,   184,   331,   243,   345,   256,   232,   233,    86,
     352,    84,    85,   382,   255,   243,   384,   243,   296,    77,
      60,   243,    81,    64,    81,    81,   353,   319,    81,   243,
     176,   120,   243,   165,   242,   300,   272,   285,    65,   243,
     198,   174,   175,   354,   321,    67,   198,   177,   289,   243,
      77,   273,   243,    41,   185,    41,    77,   320,    81,    42,
      43,   342,    43,   350,    44,   151,    41,   326,   181,   182,
      42,   186,   341,    43,    41,   177,    41,   187,   335,   189,
      42,   254,   338,   254,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,    74,   190,   256,     1,    76,   176,   191,    60,
      86,    81,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   368,   369,
     370,   172,   371,   373,   192,   176,   197,   152,   289,   151,
     156,   358,    81,   226,   227,   365,   167,   236,    81,   228,
     229,   237,   176,   239,   204,   238,   376,   383,   324,   325,
     205,   206,   207,   151,   234,   235,   387,   375,   259,   388,
     260,     1,   281,   151,   208,   377,   209,   263,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   308,   309,   310,   311,   243,   355,
     151,   274,   358,   385,   386,   284,   304,   305,   312,   313,
     156,    86,   276,   306,   307,    91,   176,    92,    93,    94,
     291,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   297,   299,   111,
     322,   112,   327,   334,   182,   113,   114,   336,   337,   339,
     348,   346,   288,   210,    66,   115,   351,   356,   360,   366,
     378,   367,   116,   117,   118,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   349,   381,   379,    40,   380,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    91,    68,    92,    93,    94,    89,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   164,    76,   111,   340,   112,
      82,   333,   362,   113,   114,   374,   323,   315,   314,   245,
       0,   316,    66,   244,   318,   317,     0,     0,     0,    76,
     116,   117,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   270,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     1,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     1,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   103,   104,   105,
     148,   107,   108,   109,   110,     0,     0,   111,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,     0,   149,   357,     0,     0,     0,   246,     0,   247,
     116,   117,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,   103,   104,   105,   148,   107,   108,   109,   110,     0,
       0,   111,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,     0,   149,   389,     0,     0,
       0,   246,     0,   247,   116,   117,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   103,   104,   105,   148,   107,
     108,   109,   110,     0,     0,   111,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,     0,
     149,     0,     0,     0,     0,   246,     0,   247,   116,   117,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   103,
     104,   105,   148,   107,   108,   109,   110,     0,     0,   111,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   154,     0,     0,
       0,     0,   116,   117,   118,   155,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   361,     0,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   332,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   103,
     104,   105,   148,   107,   108,   109,   266,     0,     0,   111,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,   103,   104,   105,   148,   107,   108,   109,   110,     0,
     267,   111,   116,   117,   118,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   268,   116,   117,   118,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    91,     0,    92,    93,    94,     0,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     0,     0,   111,     0,   112,     0,
       0,     0,   113,   114,     0,     0,     0,     0,   282,     0,
       0,    66,     0,     0,     0,     0,     0,     0,     0,   116,
     117,   118,   103,   104,   105,   148,   107,   108,   109,   110,
       0,     0,   111,    66,   112,     0,     0,    67,   113,   114,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,   117,   118,    66,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   246,     0,   247,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,   103,   104,   105,   148,   107,   108,   109,   110,     0,
       0,   111,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,     0,   149,     0,     0,     0,
       0,     0,     0,     0,   116,   117,   118,   103,   104,   105,
     148,   107,   108,   109,   110,     0,     0,   111,     0,   193,
       0,     0,     0,   113,   114,     0,     0,   103,   104,   105,
     148,   107,   108,   109,   110,     0,     0,   111,   294,     0,
     116,   117,   118,   113,   114,     0,     0,   103,   104,   105,
     148,   107,   108,   109,   110,     0,     0,   111,     0,     0,
     116,   117,   118,   113,   114,     0,     0,     0,     0,     0,
       0,     0,   349,     0,     0,     0,     0,     0,     0,     0,
     116,   117,   118,   103,   104,   105,   148,   107,   108,   109,
     363,     0,     0,   111,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   364,     0,   116,   117,   118,   103,
     104,   105,   148,   107,   108,   109,   110,     0,     0,   111,
     372,     0,     0,     0,     0,   113,   114,     0,     0,   103,
     104,   105,   148,   107,   108,   109,   110,     0,     0,   111,
       0,     0,   116,   117,   118,   113,   114,     0,     0,   103,
     104,   105,   148,   107,   108,   109,   110,     0,     0,   195,
       0,     0,   116,   117,   118,   113,   114,     0,     0,   103,
     104,   105,   148,   107,   108,   109,   110,     0,     0,   201,
       0,     0,   116,   117,   118,   113,   114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   116,   117,   118,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23
};

static const yytype_int16 yycheck[] =
{
       0,    67,    97,    67,    83,   189,   325,    29,   102,     0,
      92,    73,    42,    92,    85,    49,   124,   111,    22,   156,
      78,   256,    18,    47,     0,    25,    22,    22,    53,    25,
      30,    31,    62,    26,    25,    35,    36,    22,    23,    18,
      18,    40,    77,    65,    68,   195,    81,    43,    70,    42,
      75,   201,    77,    78,   289,    18,    81,    40,    80,    18,
      18,   198,    41,    41,    83,    69,    51,   386,    25,    73,
      74,    75,    72,    92,    44,    66,   111,    68,    73,    74,
      75,    40,    40,   149,   103,    26,   111,   169,    45,   184,
     169,   185,   186,   187,   113,   114,   162,   163,    35,   283,
     162,   195,   197,    25,   175,   124,   164,   201,    26,    42,
      22,    36,    37,    25,   208,   223,   224,   225,    55,    26,
      53,    26,    43,    45,    42,    26,   156,    52,    53,    62,
      26,    41,    42,    26,   156,    42,    26,    42,   204,   164,
      73,    42,    75,    27,    77,    78,    42,   241,    81,    42,
     169,   142,    42,    27,    27,   221,    27,    27,    42,    42,
     195,    41,    42,    46,   246,    44,   201,   246,   198,    42,
     195,    42,    42,    18,    25,    18,   201,   243,   111,    22,
      25,   276,    25,   291,    27,   251,    18,   251,    26,    27,
      22,    25,   274,    25,    18,   274,    18,    25,   264,    25,
      22,    25,   268,    25,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   256,    18,   254,    66,     1,   246,    27,   162,
     163,   164,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,   343,   344,
     345,   273,   346,   347,    27,   274,    43,   248,   288,   325,
     260,   325,   195,    20,    21,   331,    41,    48,   201,    29,
      30,    24,   291,    34,    25,    54,   355,   372,    41,    42,
      31,    32,    33,   349,    38,    39,   381,   353,    26,   384,
      42,    66,     8,   359,    45,   359,    47,    46,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,   230,   231,   232,   233,    42,    43,
     386,    43,   386,    41,    42,    27,   226,   227,   234,   235,
     330,   264,    43,   228,   229,     1,   355,     3,     4,     5,
      26,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    18,    18,    25,
      18,    27,    44,    18,    27,    31,    32,    46,    46,    46,
      26,    25,    25,    44,    40,    41,    26,    46,    26,    46,
      26,    46,    48,    49,    50,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    40,     6,    46,    25,    46,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     1,    47,     3,     4,     5,    65,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    75,     1,    25,   273,    27,
      56,   260,   330,    31,    32,   349,   248,   237,   236,   142,
      -1,   238,    40,    41,   240,   239,    -1,    -1,    -1,     1,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    45,    -1,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    45,    -1,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    48,    49,    50,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    26,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      46,    25,    48,    49,    50,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    48,    49,    50,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    25,    -1,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    25,    40,    27,    -1,    -1,    44,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    40,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    45,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    25,    -1,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,
      48,    49,    50,    31,    32,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      48,    49,    50,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    48,    49,    50,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    48,    49,    50,    31,    32,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    48,    49,    50,    31,    32,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    48,    49,    50,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    90,    92,    93,    94,    96,    97,
     100,   101,   102,   103,   109,   112,   113,    18,    40,     0,
      93,    18,    22,    25,    27,    98,    99,   114,   115,   116,
      97,    97,    18,    40,    97,    97,    40,    18,   110,   111,
     112,   116,   117,   114,    27,    42,    40,    44,    95,    96,
      97,   153,    25,    45,   115,    40,     1,   101,   104,   105,
     106,   112,   110,    44,    41,    42,   112,   116,    26,    99,
     114,     1,     3,     4,     5,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    25,    27,    31,    32,    41,    48,    49,    50,    91,
      96,   130,   131,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   149,   151,
     152,   153,   154,   155,   156,   157,   158,   159,    18,    40,
     125,   147,    96,   153,    18,    26,    97,   118,   119,   120,
     121,    22,    69,   117,   104,    27,   106,    41,   105,    43,
     107,   108,   114,   106,    41,    42,   133,   146,   150,    41,
     111,    26,    27,   150,    43,    25,    25,    25,   151,    25,
      18,    27,    27,    27,   149,    25,   133,    43,   106,   122,
     149,    25,   133,   133,    25,    31,    32,    33,    45,    47,
      44,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,   148,   135,    22,    23,    51,    20,    21,    29,    30,
      36,    37,    52,    53,    38,    39,    48,    24,    54,    34,
      35,    55,    27,    42,    41,   155,    45,    47,    95,   125,
     126,   127,   128,   129,    25,   114,   116,   123,   124,    26,
      42,    26,    42,    46,   117,   147,    22,    46,    69,   147,
      41,   150,    27,    42,    43,    41,    43,   151,   149,   149,
     149,     8,     1,   156,    27,    27,   122,   151,    25,   116,
     123,    26,    26,   122,    26,   132,   147,    18,   149,    18,
     147,   135,   135,   135,   136,   136,   137,   137,   138,   138,
     138,   138,   139,   139,   140,   141,   142,   143,   144,   149,
     147,   150,    18,   129,    41,    42,   125,    44,   123,   124,
      25,    45,    28,   120,    18,   147,    46,    46,   147,    46,
     108,   150,   151,    26,    26,    26,    25,   156,    26,    40,
     135,    26,    26,    42,    46,    43,    46,    41,   125,   127,
      26,    26,   118,    22,    46,   147,    46,    46,   151,   151,
     151,   149,    26,   149,   126,   147,   146,   125,    26,    46,
      46,     6,    26,   151,    26,    41,    42,   151,   151,    41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    91,    92,    92,    93,    93,    94,
      94,    95,    95,    96,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    98,    98,    99,    99,   100,   100,   100,
     100,   100,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   102,   102,   102,   103,   103,
     104,   104,   105,   105,   106,   106,   106,   106,   107,   107,
     108,   108,   108,   109,   109,   109,   109,   109,   110,   110,
     111,   111,   112,   112,   112,   113,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   116,   116,   117,   117,   118,   118,   119,   119,
     120,   120,   120,   121,   121,   122,   122,   123,   123,   123,
     124,   124,   124,   124,   124,   124,   125,   125,   125,   126,
     126,   126,   126,   127,   128,   128,   129,   129,   130,   130,
     130,   130,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   132,   132,   133,   133,   133,   133,   133,   133,
     134,   134,   134,   134,   134,   134,   135,   135,   136,   136,
     136,   136,   137,   137,   137,   138,   138,   138,   139,   139,
     139,   139,   139,   140,   140,   140,   141,   141,   142,   142,
     143,   143,   144,   144,   145,   145,   146,   146,   147,   147,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   149,   149,   150,   151,   151,   151,   151,   151,   151,
     152,   152,   152,   153,   153,   154,   154,   155,   155,   156,
     156,   156,   157,   157,   157,   158,   158,   158,   158,   158,
     159,   159,   159,   159,   159
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     1,     1,     3,
       4,     1,     2,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     2,     1,     2,     1,     1,     3,
       1,     3,     2,     5,     4,     6,     5,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     2,     1,     3,
       5,     4,     6,     5,     6,     5,     4,     4,     4,     3,
       2,     1,     3,     2,     1,     2,     3,     1,     1,     3,
       2,     2,     1,     1,     3,     2,     1,     2,     1,     1,
       3,     4,     3,     4,     4,     3,     1,     3,     4,     2,
       1,     4,     3,     2,     1,     2,     3,     2,     1,     1,
       1,     3,     1,     4,     3,     4,     3,     3,     2,     2,
       6,     7,     1,     3,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     1,     2,     1,     1,     2,
       1,     2,     5,     7,     5,     5,     6,     6,     7,     2,
       2,     2,     2,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 59 "compiler.y" /* yacc.c:1646  */
    {
        root = make_node(NULL, PROGRAM, 1, (yyvsp[0].tree));
        print_tree(root);
    }
#line 1835 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 66 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.f = (yyvsp[0].val_float);
        v.type = "float";
        (yyval.tree) = make_node(&v, CONSTANT, 0);
    }
#line 1846 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 72 "compiler.y" /* yacc.c:1646  */
    { 
        value v;
        v.v.i = (yyvsp[0].val_int);
        v.type = "integer";
        (yyval.tree) = make_node(&v, CONSTANT, 0);
    }
#line 1857 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 83 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, TRANSLATION_UNIT, 1, (yyvsp[0].tree));
    }
#line 1865 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 86 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, TRANSLATION_UNIT, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 1873 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 92 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, EXTERNAL_DECLARATION, 1, (yyvsp[0].tree));
    }
#line 1881 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 95 "compiler.y" /* yacc.c:1646  */
    { 
        (yyval.tree) = make_node(NULL, EXTERNAL_DECLARATION, 1, (yyvsp[0].tree));
    }
#line 1889 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 101 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, FUNCTION_DEFINITION, 3, (yyvsp[-2].tree), (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 1897 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 104 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, FUNCTION_DEFINITION, 4, (yyvsp[-3].tree), (yyvsp[-2].tree), (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 1905 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 110 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_LIST, 1, (yyvsp[0].tree));
    }
#line 1913 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 113 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_LIST, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 1921 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 121 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION, 1, (yyvsp[-1].tree));
    }
#line 1929 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 124 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION, 2, (yyvsp[-2].tree), (yyvsp[-1].tree));
        // type check
    }
#line 1938 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 131 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_SPECIFIERS, 1, (yyvsp[0].tree));
    }
#line 1946 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 134 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_SPECIFIERS, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 1954 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 137 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_SPECIFIERS, 1, (yyvsp[0].tree));
    }
#line 1962 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 140 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_SPECIFIERS, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 1970 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 143 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_SPECIFIERS, 1, (yyvsp[0].tree));
    }
#line 1978 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 146 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_SPECIFIERS, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 1986 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 149 "compiler.y" /* yacc.c:1646  */
    {  
        (yyval.tree) = make_node(NULL, DECLARATION_SPECIFIERS, 1, (yyvsp[0].tree));
    }
#line 1994 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 152 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_SPECIFIERS, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2002 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 158 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INIT_DECLARATOR_LIST, 1, (yyvsp[0].tree));
    }
#line 2010 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 161 "compiler.y" /* yacc.c:1646  */
    {  
        (yyval.tree) = make_node(NULL, INIT_DECLARATOR_LIST, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 2018 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 167 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INIT_DECLARATOR, 1, (yyvsp[0].tree));
    }
#line 2026 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 170 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "=";
        v.type = "string";
        (yyval.tree) = make_node(&v, INIT_DECLARATOR, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 2037 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 179 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "typedef";
        v.type = "string";
        (yyval.tree) = make_node(&v, STORAGE_CLASS_SPECIFIER, 0);
    }
#line 2048 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 185 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "extern";
        v.type = "string";
        (yyval.tree) = make_node(&v, STORAGE_CLASS_SPECIFIER, 0);
    }
#line 2059 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 191 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "static";
        v.type = "string";
        (yyval.tree) = make_node(&v, STORAGE_CLASS_SPECIFIER, 0);
    }
#line 2070 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 197 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "auto";
        v.type = "string";
        (yyval.tree) = make_node(&v, STORAGE_CLASS_SPECIFIER, 0);
    }
#line 2081 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 203 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "register";
        v.type = "string";
        (yyval.tree) = make_node(&v, STORAGE_CLASS_SPECIFIER, 0);
    }
#line 2092 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 212 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "void";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2103 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 218 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "int";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2114 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 224 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "float";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2125 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 230 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "double";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2136 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 236 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "char";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2147 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 242 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "long";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2158 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 248 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "short";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2169 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 254 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "signed";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2180 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 260 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "unsigned";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2191 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 266 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "bool";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2202 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 272 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, TYPE_SPECIFIER, 1, (yyvsp[0].tree));
    }
#line 2210 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 275 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "enum";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 1, (yyvsp[0].tree));
    }
#line 2221 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 281 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "typdef_name";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2232 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 290 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[-3].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, STRUCT_OR_UNION_SPECIFIER, 2, (yyvsp[-4].tree), (yyvsp[-1].tree));
    }
#line 2243 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 296 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_OR_UNION_SPECIFIER, 2, (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 2251 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 299 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, STRUCT_OR_UNION_SPECIFIER, 1, (yyvsp[-1].tree));
    }
#line 2262 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 308 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "struct";
        v.type = "identifier";
        (yyval.tree) = make_node(&v, STRUCT_OR_UNION, 0);
    }
#line 2273 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 314 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "union";
        v.type = "identifier";
        (yyval.tree) = make_node(&v, STRUCT_OR_UNION, 0);
    }
#line 2284 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 323 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_DECLARATION_LIST, 1, (yyvsp[0].tree));
    }
#line 2292 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 326 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_DECLARATION_LIST, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2300 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 332 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_DECLARATION, 2, (yyvsp[-2].tree), (yyvsp[-1].tree));
    }
#line 2308 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 335 "compiler.y" /* yacc.c:1646  */
    {
        
    }
#line 2316 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 341 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, SPECIFIER_QUALIFIER_LIST, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2324 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 344 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, SPECIFIER_QUALIFIER_LIST, 1, (yyvsp[0].tree));
    }
#line 2332 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 347 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, SPECIFIER_QUALIFIER_LIST, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2340 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 350 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, SPECIFIER_QUALIFIER_LIST, 1, (yyvsp[0].tree));
    }
#line 2348 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 356 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_DECLARATOR_LIST, 1, (yyvsp[0].tree));
    }
#line 2356 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 359 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_DECLARATOR_LIST, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 2364 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 365 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_DECLARATOR, 1, (yyvsp[0].tree));
    }
#line 2372 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 368 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_DECLARATOR, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 2380 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 371 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_DECLARATOR, 1, (yyvsp[0].tree));
    }
#line 2388 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 377 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[-3].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, ENUM_SPECIFIER, 1, (yyvsp[-1].tree));
    }
#line 2399 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 383 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ENUM_SPECIFIER, 1, (yyvsp[-1].tree));
    }
#line 2407 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 386 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[-4].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, ENUM_SPECIFIER, 1, (yyvsp[-2].tree));
    }
#line 2418 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 392 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ENUM_SPECIFIER, 1, (yyvsp[-2].tree));
    }
#line 2426 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 395 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, ENUM_SPECIFIER, 0);
    }
#line 2437 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 404 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ENUMERATOR_LIST, 1, (yyvsp[0].tree));
    }
#line 2445 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 407 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ENUMERATOR_LIST, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 2453 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 413 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, ENUMERATOR, 0);
    }
#line 2464 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 419 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[-2].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, ENUMERATOR, 0);
    }
#line 2475 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 428 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "const";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_QUALIFIER, 0);
    }
#line 2486 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 434 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "restrict";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_QUALIFIER, 0);
    }
#line 2497 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 440 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "volatile";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_QUALIFIER, 0);
    }
#line 2508 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 449 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "inline";
        v.type = "string";
        (yyval.tree) = make_node(&v, FUNCTION_SPECIFIER, 0);
    }
#line 2519 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 458 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATOR, 1, (yyvsp[0].tree));
    }
#line 2527 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 461 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATOR, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2535 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 467 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, DIRECT_DECLARATOR, 0);
    }
#line 2546 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 473 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 1, (yyvsp[-1].tree));
    }
#line 2554 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 476 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 3, (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[-1].tree));
    }
#line 2562 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 479 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 2, (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 2570 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 482 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 3, (yyvsp[-5].tree), (yyvsp[-2].tree), (yyvsp[-1].tree));
    }
#line 2578 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 485 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 2, (yyvsp[-4].tree), (yyvsp[-1].tree));
    }
#line 2586 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 488 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 3, (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 2594 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 491 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 2, (yyvsp[-4].tree), (yyvsp[-2].tree));
    }
#line 2602 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 494 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 1, (yyvsp[-3].tree));
    }
#line 2610 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 497 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 2, (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 2618 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 500 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 2, (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 2626 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 503 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 1, (yyvsp[-2].tree));
    }
#line 2634 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 509 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POINTER, 1, (yyvsp[0].tree));
    }
#line 2642 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 512 "compiler.y" /* yacc.c:1646  */
    {

    }
#line 2650 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 515 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POINTER, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2658 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 518 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POINTER, 1, (yyvsp[0].tree));
    }
#line 2666 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 524 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, TYPE_QUALIFIER_LIST, 1, (yyvsp[0].tree));
    }
#line 2674 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 527 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, TYPE_QUALIFIER_LIST, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2682 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 533 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PARAMETER_TYPE_LIST, 1, (yyvsp[-2].tree));
    }
#line 2690 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 536 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PARAMETER_TYPE_LIST, 1, (yyvsp[0].tree));
    }
#line 2698 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 542 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PARAMETER_LIST, 1, (yyvsp[0].tree));
    }
#line 2706 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 545 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PARAMETER_LIST, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 2714 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 551 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PARAMETER_DECLARATION, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
        // type check
    }
#line 2723 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 555 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PARAMETER_DECLARATION, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2731 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 558 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PARAMETER_DECLARATION, 1, (yyvsp[0].tree));
    }
#line 2739 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 564 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, IDENTIFIER_LIST, 0);
    }
#line 2750 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 570 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, IDENTIFIER_LIST, 1, (yyvsp[-2].tree));
    }
#line 2761 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 579 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, TYPE_NAME, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2769 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 582 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, TYPE_NAME, 1, (yyvsp[0].tree));
    }
#line 2777 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 588 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ABSTRACT_DECLARATOR, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2785 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 591 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ABSTRACT_DECLARATOR, 1, (yyvsp[0].tree));
    }
#line 2793 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 594 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ABSTRACT_DECLARATOR, 1, (yyvsp[0].tree));
    }
#line 2801 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 600 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 1, (yyvsp[-1].tree));
    }
#line 2809 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 603 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 2, (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 2817 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 606 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 1, (yyvsp[-2].tree));
    }
#line 2825 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 609 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 1, (yyvsp[-3].tree));
    }
#line 2833 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 612 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 2, (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 2841 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 615 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 1, (yyvsp[-2].tree));
    }
#line 2849 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 621 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INITIALIZER, 1, (yyvsp[0].tree));
    }
#line 2857 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 624 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INITIALIZER, 1, (yyvsp[-1].tree));
    }
#line 2865 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 627 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INITIALIZER, 1, (yyvsp[-2].tree));
    }
#line 2873 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 633 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INITIALIZER_LIST, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2881 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 636 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INITIALIZER_LIST, 1, (yyvsp[0].tree));
    }
#line 2889 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 639 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INITIALIZER_LIST, 3, (yyvsp[-3].tree), (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2897 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 642 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INITIALIZER_LIST, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 2905 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 648 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DESIGNATION, 1, (yyvsp[-1].tree));
    }
#line 2913 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 654 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DESIGNATOR_LIST, 1, (yyvsp[0].tree));
    }
#line 2921 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 657 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DESIGNATOR_LIST, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2929 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 663 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DESIGNATOR, 1, (yyvsp[-1].tree));
    }
#line 2937 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 666 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, DESIGNATOR, 0);
    }
#line 2948 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 677 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, PRIMARY_EXPRESSION, 0);
    }
#line 2959 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 683 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PRIMARY_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 2967 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 686 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "string";
        (yyval.tree) = make_node(&v, PRIMARY_EXPRESSION, 0);
    }
#line 2978 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 692 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PRIMARY_EXPRESSION, 1, (yyvsp[-1].tree));
    }
#line 2986 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 698 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POSTFIX_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 2994 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 701 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POSTFIX_EXPRESSION, 2, (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 3002 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 704 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POSTFIX_EXPRESSION, 1, (yyvsp[-2].tree));
    }
#line 3010 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 707 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POSTFIX_EXPRESSION, 2, (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 3018 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 710 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION, 1, (yyvsp[-2].tree));
    }
#line 3029 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 716 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION, 1, (yyvsp[-2].tree));
    }
#line 3040 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 722 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POSTFIX_EXPRESSION, 1, (yyvsp[-1].tree));
    }
#line 3048 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 725 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POSTFIX_EXPRESSION, 1, (yyvsp[-1].tree));
    }
#line 3056 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 728 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POSTFIX_EXPRESSION, 2, (yyvsp[-4].tree), (yyvsp[-1].tree));
    }
#line 3064 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 731 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POSTFIX_EXPRESSION, 2, (yyvsp[-5].tree), (yyvsp[-2].tree));
    }
#line 3072 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 737 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ARGUMENT_EXPRESSION_LIST, 1, (yyvsp[0].tree));
    }
#line 3080 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 740 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ARGUMENT_EXPRESSION_LIST, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3088 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 746 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, UNARY_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3096 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 749 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, UNARY_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3104 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 752 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, UNARY_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3112 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 755 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, UNARY_EXPRESSION, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 3120 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 758 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, UNARY_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3128 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 761 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, UNARY_EXPRESSION, 1, (yyvsp[-1].tree));
    }
#line 3136 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 767 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "&";
        v.type = "string";
        (yyval.tree) = make_node(&v, UNARY_OPERATOR, 0);
    }
#line 3147 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 773 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "*";
        v.type = "string";
        (yyval.tree) = make_node(&v, UNARY_OPERATOR, 0);
    }
#line 3158 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 779 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "+";
        v.type = "string";
        (yyval.tree) = make_node(&v, UNARY_OPERATOR, 0);
    }
#line 3169 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 785 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "-";
        v.type = "string";
        (yyval.tree) = make_node(&v, UNARY_OPERATOR, 0);
    }
#line 3180 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 791 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "~";
        v.type = "string";
        (yyval.tree) = make_node(&v, UNARY_OPERATOR, 0);
    }
#line 3191 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 797 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "!";
        v.type = "string";
        (yyval.tree) = make_node(&v, UNARY_OPERATOR, 0);
    }
#line 3202 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 806 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, CAST_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3210 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 809 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, CAST_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3218 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 815 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, MULTIPLICATIVE_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3226 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 818 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "*";
        v.type = "string";
        (yyval.tree) = make_node(&v, MULTIPLICATIVE_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3237 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 824 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "/";
        v.type = "string";
        (yyval.tree) = make_node(&v, MULTIPLICATIVE_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3248 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 830 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "%";
        v.type = "string";
        (yyval.tree) = make_node(&v, MULTIPLICATIVE_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3259 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 839 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ADDITIVE_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3267 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 842 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "+";
        v.type = "string";
        (yyval.tree) = make_node(&v, ADDITIVE_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3278 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 848 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "-";
        v.type = "string";
        (yyval.tree) = make_node(&v, ADDITIVE_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3289 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 857 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, SHIFT_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3297 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 860 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "<<";
        v.type = "string";
        (yyval.tree) = make_node(&v, SHIFT_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3308 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 866 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = ">>";
        v.type = "string";
        (yyval.tree) = make_node(&v, SHIFT_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3319 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 875 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, RELATIONAL_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3327 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 878 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "<";
        v.type = "string";
        (yyval.tree) = make_node(&v, RELATIONAL_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3338 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 884 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = ">";
        v.type = "string";
        (yyval.tree) = make_node(&v, RELATIONAL_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3349 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 890 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "<=";
        v.type = "string";
        (yyval.tree) = make_node(&v, RELATIONAL_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3360 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 896 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = ">=";
        v.type = "string";
        (yyval.tree) = make_node(&v, RELATIONAL_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3371 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 905 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, EQUALITY_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3379 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 908 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "==";
        v.type = "string";
        (yyval.tree) = make_node(&v, EQUALITY_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3390 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 914 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "!=";
        v.type = "string";
        (yyval.tree) = make_node(&v, EQUALITY_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3401 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 923 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, AND_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3409 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 926 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "&";
        v.type = "string";
        (yyval.tree) = make_node(&v, AND_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3420 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 935 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, EXCLUSIVE_OR_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3428 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 938 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "^";
        v.type = "string";
        (yyval.tree) = make_node(&v, EXCLUSIVE_OR_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3439 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 947 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INCLUSIVE_OR_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3447 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 950 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "|";
        v.type = "string";
        (yyval.tree) = make_node(&v, INCLUSIVE_OR_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3458 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 959 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, LOGICAL_AND_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3466 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 962 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "&&";
        v.type = "string";
        (yyval.tree) = make_node(&v, LOGICAL_AND_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3477 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 971 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, LOGICAL_OR_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3485 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 974 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "||";
        v.type = "string";
        (yyval.tree) = make_node(&v, LOGICAL_OR_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3496 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 983 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, CONDITIONAL_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3504 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 986 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, CONDITIONAL_EXPRESSION, 2, (yyvsp[-4].tree), (yyvsp[-2].tree));
    }
#line 3512 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 992 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ASSIGNMENT_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3520 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 995 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ASSIGNMENT_EXPRESSION, 3, (yyvsp[-2].tree), (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 3528 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1001 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3539 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1007 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "*=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3550 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1013 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "/=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3561 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1019 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "%=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3572 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1025 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "+=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3583 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1031 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "-=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3594 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1037 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "<<=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3605 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1043 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = ">>=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3616 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1049 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "&=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3627 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1055 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "^=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3638 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1061 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "|=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3649 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1070 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3657 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1073 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3665 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1079 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, CONSTANT_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3673 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1087 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STATEMENT, 1, (yyvsp[0].tree));
    }
#line 3681 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1090 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STATEMENT, 1, (yyvsp[0].tree));
    }
#line 3689 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1093 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STATEMENT, 1, (yyvsp[0].tree));
    }
#line 3697 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1096 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STATEMENT, 1, (yyvsp[0].tree));
    }
#line 3705 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1099 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STATEMENT, 1, (yyvsp[0].tree));
    }
#line 3713 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1102 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STATEMENT, 1, (yyvsp[0].tree));
    }
#line 3721 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1108 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[-2].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, LABELED_STATEMENT, 1, (yyvsp[0].tree));
    }
#line 3732 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1114 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, LABELED_STATEMENT, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3740 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1117 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, LABELED_STATEMENT, 1, (yyvsp[0].tree));
    }
#line 3748 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1123 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = NULL;
    }
#line 3756 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1126 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, COMPOUND_STATEMENT, 1, (yyvsp[-1].tree));
    }
#line 3764 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1132 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, BLOCK_ITEM_LIST, 1, (yyvsp[0].tree));
    }
#line 3772 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1135 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, BLOCK_ITEM_LIST, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 3780 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1141 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, BLOCK_ITEM, 1, (yyvsp[0].tree));
    }
#line 3788 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1144 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, BLOCK_ITEM, 1, (yyvsp[0].tree));
    }
#line 3796 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1150 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL,EXPRESSION_STATEMENT, 1, (yyvsp[-1].tree));
    }
#line 3804 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1153 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = NULL;
    }
#line 3812 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1156 "compiler.y" /* yacc.c:1646  */
    {

    }
#line 3820 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1162 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "if";
        v.type = "string";
        (yyval.tree) = make_node(&v, SELECTION_STATEMENT, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3831 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1168 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "if";
        v.type = "string";
        (yyval.tree) = make_node(&v, SELECTION_STATEMENT, 3, (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3842 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1174 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "switch";
        v.type = "string";
        (yyval.tree) = make_node(&v, SELECTION_STATEMENT, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3853 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1183 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ITERATION_STATEMENT, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3861 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1186 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ITERATION_STATEMENT, 2, (yyvsp[-4].tree), (yyvsp[-1].tree));
    }
#line 3869 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1189 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ITERATION_STATEMENT, 3, (yyvsp[-3].tree), (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3877 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1192 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ITERATION_STATEMENT, 4, (yyvsp[-4].tree), (yyvsp[-3].tree), (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3885 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1195 "compiler.y" /* yacc.c:1646  */
    {

    }
#line 3893 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1201 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, JUMP_STATEMENT, 0);
    }
#line 3901 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1204 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, JUMP_STATEMENT, 0);
    }
#line 3909 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1207 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, JUMP_STATEMENT, 0);
    }
#line 3917 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1210 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, JUMP_STATEMENT, 1, (yyvsp[-1].tree));
    }
#line 3925 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1213 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[-1].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, JUMP_STATEMENT, 0);
    }
#line 3936 "compiler.tab.c" /* yacc.c:1646  */
    break;


#line 3940 "compiler.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1221 "compiler.y" /* yacc.c:1906  */


int main(int argc, char *argv[])
{
    extern FILE *yyin, *yyout;
    char output[256];
    yyin = fopen(argv[1], "r");
    sscanf(argv[1], "%s", output);
    strcat(output, ".out");
    yyout = fopen(output, "w");
    printf("parsing...\n");
    yyparse();   
    printf("parsing done.\n");
    translate(root);
    fclose(yyin);
    fclose(yyout);
    return 0;
}

int yyerror(const char *s)
{
    fflush(stdout);
	fprintf(stderr, "*** %d: %s near '%s'\n", yylineno, s, yytext);
}
