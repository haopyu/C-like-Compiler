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
    yyerror(const char *s);  
    extern int yylex(void);
    AST *root;

#line 74 "compiler.tab.c" /* yacc.c:339  */

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
#line 9 "compiler.y" /* yacc.c:355  */
 int val_int; float val_float; String val_str; int type; AST * tree; 

#line 206 "compiler.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 223 "compiler.tab.c" /* yacc.c:358  */

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
#define YYLAST   1398

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  384

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
       0,    57,    57,    64,    70,    81,    84,    90,    93,    99,
     102,   108,   111,   119,   122,   129,   132,   135,   138,   141,
     144,   147,   150,   156,   159,   165,   168,   177,   183,   189,
     195,   201,   210,   216,   222,   228,   234,   240,   246,   252,
     258,   264,   270,   273,   279,   288,   294,   297,   306,   312,
     321,   324,   330,   336,   339,   342,   345,   351,   354,   360,
     363,   366,   372,   378,   381,   387,   390,   399,   402,   408,
     414,   423,   429,   435,   444,   453,   456,   462,   468,   471,
     474,   477,   480,   483,   486,   489,   492,   495,   498,   504,
     507,   510,   513,   519,   522,   528,   531,   537,   540,   546,
     550,   553,   559,   565,   574,   577,   583,   586,   589,   595,
     598,   601,   604,   607,   610,   616,   619,   622,   628,   631,
     634,   637,   643,   649,   652,   658,   661,   672,   678,   681,
     687,   693,   696,   699,   702,   705,   711,   717,   720,   723,
     726,   732,   735,   741,   744,   747,   750,   753,   756,   762,
     768,   774,   780,   786,   792,   801,   804,   810,   813,   816,
     819,   825,   828,   831,   837,   840,   843,   849,   852,   855,
     858,   861,   867,   870,   873,   879,   882,   888,   891,   897,
     900,   906,   909,   915,   918,   924,   927,   933,   936,   942,
     948,   954,   960,   966,   972,   978,   984,   990,   996,  1002,
    1011,  1014,  1020,  1028,  1031,  1034,  1037,  1040,  1043,  1049,
    1055,  1058,  1064,  1067,  1073,  1076,  1082,  1085,  1091,  1094,
    1098,  1101,  1104,  1110,  1113,  1116,  1119,  1125,  1128,  1131,
    1134,  1137
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

#define YYPACT_NINF -311

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-311)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1287,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,     3,    13,  1287,  -311,  -311,  -311,   245,
    1287,  1287,  -311,    19,  -311,  1287,  1287,    44,    29,  -311,
    -311,  -311,     4,    58,  -311,    12,  -311,   919,    24,   121,
    -311,  -311,    87,  1310,  -311,  -311,    29,   134,    77,  -311,
    -311,  -311,     4,   160,  -311,    58,   341,   212,   942,  -311,
     245,  -311,   748,    -8,    24,  1310,  1310,   223,  -311,    46,
    1310,   103,  1262,  -311,     1,  -311,  -311,  -311,  -311,   146,
    1262,   157,   179,   199,   201,  1028,   217,   230,   229,   244,
    1110,  1282,  -311,  -311,   235,  -311,  -311,  -311,  -311,   723,
    -311,  1302,  1302,  -311,  -311,  -311,  -311,  -311,  -311,  -311,
      84,   273,  1262,  -311,     5,   156,   185,   158,   197,   225,
     256,   238,   259,    50,  -311,  -311,    65,  -311,  -311,  -311,
     427,  -311,  -311,  -311,  -311,  -311,  -311,   649,  -311,  -311,
    -311,  -311,  -311,  -311,   195,   269,   270,  -311,    15,   267,
     905,   883,  1013,  -311,  -311,  -311,  1262,    83,  -311,   275,
    -311,  -311,    22,  -311,  -311,  -311,  -311,  -311,   276,  1028,
    1262,  1262,  1262,   308,  1130,   294,  -311,  -311,  -311,   161,
     723,  -311,  1028,   194,   297,    64,   723,  -311,  -311,  1150,
    -311,  -311,   307,  1262,   309,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,  1262,  -311,  1262,  1262,
    1262,  1262,  1262,  1262,  1262,  1262,  1262,  1262,  1262,  1262,
    1262,  1262,  1262,  1262,  1262,  1262,  1262,  -311,  1262,  -311,
    -311,  1262,   321,  1036,  -311,   198,   212,   282,  -311,   195,
    -311,   171,  -311,    63,  -311,   809,  -311,   322,  -311,   905,
     295,   301,  -311,  1262,   318,  -311,  -311,  -311,    46,  1262,
    -311,  1028,  -311,    71,    86,    98,   340,  1130,  -311,  -311,
     343,  -311,   194,   342,  -311,  1170,  -311,   344,  -311,   100,
    -311,  -311,    40,  -311,  -311,  -311,  -311,  -311,     5,     5,
     156,   156,   185,   185,   185,   185,   158,   158,   197,   225,
     256,   238,   259,   226,  -311,   325,  -311,  -311,  -311,   501,
    -311,  -311,   348,    63,   786,  1206,  -311,  -311,  -311,   333,
    -311,  -311,   334,  -311,  -311,  -311,  -311,  1028,  1028,  1028,
    1262,  1242,   345,   649,  -311,   345,  -311,  1262,  -311,  1262,
    -311,  -311,  -311,   212,  -311,  -311,   357,   338,  -311,   346,
    -311,  -311,   380,  -311,  -311,   106,  1028,   149,   224,  -311,
    -311,  -311,  -311,  -311,  -311,  1028,  -311,  -311,  1028,  -311,
     575,  -311,  -311,  -311
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    44,    27,    28,    29,    30,    31,    74,    71,    72,
      73,    41,    36,    38,    33,    37,    39,    40,    34,    35,
      32,    48,    49,     0,     0,     2,     5,     7,     8,     0,
      19,    15,    42,     0,    43,    21,    17,    66,     0,     1,
       6,    77,    90,     0,    13,     0,    23,    25,    75,     0,
      20,    16,    47,     0,    22,    18,     0,    69,     0,    67,
      93,    92,    89,     0,    14,     0,     0,     0,     0,    11,
       0,     9,     0,     0,    76,     0,    54,     0,    50,     0,
      56,     0,     0,    63,     0,    94,    91,    78,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     3,   127,   129,   151,   152,   150,     0,
     219,     0,     0,   212,   149,   154,   153,   128,   216,   131,
     143,   155,     0,   157,   161,   164,   167,   172,   175,   177,
     179,   181,   183,   185,   187,   200,     0,   217,   208,   203,
       0,   214,   204,   205,   206,   207,   127,     0,    26,   115,
      12,    10,   102,    88,   101,     0,    96,    97,     0,     0,
       0,     0,     0,    53,    46,    51,     0,     0,    57,    59,
      55,    62,     0,   155,   202,    70,    65,    68,     0,     0,
       0,     0,     0,     0,     0,     0,   227,   228,   229,     0,
       0,   147,     0,   105,     0,     0,     0,   144,   145,     0,
     137,   138,     0,     0,     0,   189,   195,   196,   197,   190,
     191,   192,   193,   194,   198,   199,     0,   146,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,   213,
     215,     0,     0,     0,   119,     0,     0,     0,   123,     0,
      99,   108,   100,   107,    86,     0,    87,     0,    85,     0,
       0,   150,    80,     0,     0,    45,    61,    52,     0,     0,
      64,     0,   211,     0,     0,     0,     0,     0,   231,   230,
       0,   209,     0,   108,   104,     0,   130,     0,   133,     0,
     141,   136,     0,   135,   188,   158,   159,   160,   162,   163,
     166,   165,   170,   171,   168,   169,   173,   174,   176,   178,
     180,   182,   184,     0,   201,     0,   126,   124,   116,     0,
     118,   122,     0,   106,     0,     0,    95,    98,   103,     0,
      82,    84,     0,    79,    58,    60,   210,     0,     0,     0,
       0,     0,   148,     0,   156,     0,   134,     0,   132,     0,
     125,   117,   121,     0,   109,   114,     0,   150,   111,     0,
      81,    83,   220,   222,   223,     0,     0,     0,     0,   142,
     186,   120,   113,   112,   110,     0,   224,   225,     0,   139,
       0,   221,   226,   140
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -311,  -311,  -311,  -311,   362,  -311,   347,     7,     0,  -311,
     323,  -311,   132,  -311,  -311,   320,   -71,   -47,  -311,   125,
    -311,   349,   -79,    61,  -311,   -19,   -45,   -24,   -56,    72,
    -311,   142,  -311,  -138,  -143,  -235,   -65,    56,  -310,  -311,
     155,  -311,  -311,  -311,   -67,  -311,   -98,    54,    67,   150,
      55,   169,   170,   168,   172,   215,  -311,   -70,   -66,  -311,
       2,   -68,   -92,  -311,     6,  -311,   263,  -176,  -311,  -311,
    -311
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,   117,    25,    26,    27,   243,    69,    70,    45,
      46,    30,    31,    32,    33,    77,    78,    79,   167,   168,
      34,    58,    59,    35,    36,    63,    48,    49,    62,   155,
     156,   157,   158,   194,   322,   253,   244,   245,   246,   247,
     248,   119,   120,   289,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   216,
     136,   175,   137,   138,   139,   140,   141,   142,   143,   144,
     145
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      29,   149,   148,   183,    74,   177,   165,    28,   277,   353,
      47,   252,   174,    39,   159,   173,   323,   161,    61,    57,
     174,    37,   178,   173,   217,    29,    42,   218,   219,   163,
      50,    51,    28,   170,   191,    54,    55,    52,    86,    64,
      57,   256,   176,    38,   197,   198,    89,    57,   323,    72,
     284,    89,   280,    71,    65,   173,   220,   257,   287,    53,
     169,   160,   193,   270,    41,     8,     9,    10,    42,    73,
     353,    43,   154,   118,   151,   150,    41,     8,     9,    10,
      42,   149,   238,    43,    56,   235,   348,   272,   324,   166,
     286,   165,   237,   177,   260,   264,   174,   337,   266,   173,
     281,   341,   189,    60,   259,   236,   238,   238,   325,   199,
     267,   195,   338,   238,    80,   200,   201,   202,    83,    84,
     295,   296,   297,    85,   339,   268,   346,    75,   238,   203,
     251,   204,   376,   290,    60,   250,    80,    80,    80,    41,
     238,    80,   347,   193,   171,   172,    43,   118,   238,   193,
     294,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   283,
      80,   174,   314,   315,   173,   378,   221,   222,    82,   336,
     149,   320,   273,   274,   275,    76,    87,   344,   279,    41,
      67,   238,   195,   329,   225,   226,   249,   332,   195,   174,
     179,   335,   173,   238,   180,   292,    74,    76,    76,    76,
     227,   228,    76,    41,   223,   224,    42,    42,   173,   282,
     249,    60,    85,    80,   181,   251,   182,   101,   102,   103,
     146,   105,   106,   107,   108,   229,   230,   109,   313,   318,
     319,    76,   184,   111,   112,   362,   363,   364,   185,   169,
     150,    80,   147,   149,   352,   154,   186,    80,   283,   359,
     114,   115,   116,    41,   164,   379,   380,    42,   238,   349,
      43,   187,    44,   231,   377,   298,   299,   149,   192,   370,
     232,   369,   173,   381,   306,   307,   382,   149,   371,     1,
     300,   301,   233,   234,    76,   254,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   255,   258,   149,   352,   276,   205,   269,   271,
      85,   278,    76,   285,   154,   291,   321,   293,    76,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   316,
     328,   330,   365,   367,    90,    91,    92,   331,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   333,   340,   109,   282,   110,   342,
     345,   350,   111,   112,   354,   302,   303,   304,   305,   360,
     361,    66,   113,   372,   373,   343,   375,    40,    88,   114,
     115,   116,   374,   334,    68,   162,   356,   327,   317,   368,
     308,   310,   309,   240,     0,    81,   311,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      90,    91,    92,     0,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     312,     0,   109,     0,   110,     0,     0,     0,   111,   112,
       0,     0,     0,     0,     0,     0,     0,    66,   239,     0,
       0,     0,     0,     0,     0,   114,   115,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   101,   102,   103,   146,
     105,   106,   107,   108,     0,     0,   109,     0,     0,     0,
       0,     0,   111,   112,     0,     0,     0,     0,     0,     0,
       0,   147,   351,     0,     0,     0,   241,     0,   242,   114,
     115,   116,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     101,   102,   103,   146,   105,   106,   107,   108,     0,     0,
     109,     0,     0,     0,     0,     0,   111,   112,     0,     0,
       0,     0,     0,     0,     0,   147,   383,     0,     0,     0,
     241,     0,   242,   114,   115,   116,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   101,   102,   103,   146,   105,   106,
     107,   108,     0,     0,   109,     0,     0,     0,     0,     0,
     111,   112,     0,     0,     0,     0,     0,     0,     0,   147,
       0,     0,     0,     0,   241,     0,   242,   114,   115,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   101,   102,
     103,   146,   105,   106,   107,   108,     0,     0,   109,     0,
       0,     0,     0,     0,   111,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,     0,     0,     0,
       0,   114,   115,   116,   153,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   355,     0,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   101,   102,
     103,   146,   105,   106,   107,   261,     0,     0,   109,     0,
       0,     0,     0,     0,   111,   112,     0,     0,     0,     0,
     101,   102,   103,   146,   105,   106,   107,   108,     0,   262,
     109,   114,   115,   116,     0,     0,   111,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   263,   114,   115,   116,     8,     9,    10,    66,
       0,     0,     0,    67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,     0,    66,     0,     0,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    90,    91,    92,     0,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,     0,     0,   109,   265,   110,     0,     0,     0,   111,
     112,     0,     0,     0,     0,     0,     0,     0,    66,     0,
       0,     0,     0,     0,     0,     0,   114,   115,   116,     1,
       0,   241,     0,   242,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   101,   102,   103,   146,   105,
     106,   107,   108,     0,     0,   109,     0,   188,     0,     0,
       0,   111,   112,     0,     0,   101,   102,   103,   146,   105,
     106,   107,   108,     0,     0,   109,     0,   110,   114,   115,
     116,   111,   112,     0,     0,   101,   102,   103,   146,   105,
     106,   107,   108,     0,     0,   109,   288,     0,   114,   115,
     116,   111,   112,     0,     0,   101,   102,   103,   146,   105,
     106,   107,   108,     0,     0,   109,     0,     0,   114,   115,
     116,   111,   112,     0,     0,     0,     0,     0,     0,     0,
     343,     0,     0,     0,     0,     0,     0,     0,   114,   115,
     116,   101,   102,   103,   146,   105,   106,   107,   357,     0,
       0,   109,     0,     0,     0,     0,     0,   111,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   358,     0,   114,   115,   116,   101,   102,   103,
     146,   105,   106,   107,   108,     0,     0,   109,   366,     0,
       0,     0,     0,   111,   112,     0,     0,   101,   102,   103,
     146,   105,   106,   107,   108,     0,     0,   109,     0,     0,
     114,   115,   116,   111,   112,     0,     0,   101,   102,   103,
     146,   105,   106,   107,   108,     0,     0,   190,     0,     0,
     114,   115,   116,   111,   112,     0,     0,   101,   102,   103,
     146,   105,   106,   107,   108,     0,     0,   196,     0,     0,
     114,   115,   116,   111,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   115,   116,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     1,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

static const yytype_int16 yycheck[] =
{
       0,    67,    67,    95,    49,    84,    77,     0,   184,   319,
      29,   154,    82,     0,    22,    82,   251,    73,    42,    18,
      90,    18,    90,    90,   122,    25,    22,    22,    23,    76,
      30,    31,    25,    80,   101,    35,    36,    18,    62,    27,
      18,    26,    41,    40,   111,   112,    65,    18,   283,    25,
     193,    70,   190,    47,    42,   122,    51,    42,   196,    40,
      79,    69,   109,    41,    18,    73,    74,    75,    22,    45,
     380,    25,    72,    66,    68,    68,    18,    73,    74,    75,
      22,   147,    42,    25,    40,    35,    46,   179,    25,    43,
      26,   162,    27,   172,   160,   161,   166,    26,   166,   166,
     192,   277,   100,    42,   160,    55,    42,    42,    45,    25,
      27,   109,    26,    42,    53,    31,    32,    33,    41,    42,
     218,   219,   220,    62,    26,    42,    26,    40,    42,    45,
     154,    47,    26,   199,    73,   154,    75,    76,    77,    18,
      42,    80,    42,   190,    41,    42,    25,   140,    42,   196,
     216,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   193,
     109,   241,   238,   241,   241,    26,    20,    21,    44,   271,
     246,   246,   180,   181,   182,    53,    26,   285,    27,    18,
      44,    42,   190,   259,    36,    37,    25,   263,   196,   269,
      43,   269,   269,    42,    25,   203,   251,    75,    76,    77,
      52,    53,    80,    18,    29,    30,    22,    22,   285,    25,
      25,   160,   161,   162,    25,   249,    25,    15,    16,    17,
      18,    19,    20,    21,    22,    38,    39,    25,   236,    41,
      42,   109,    25,    31,    32,   337,   338,   339,    18,   268,
     243,   190,    40,   319,   319,   255,    27,   196,   282,   325,
      48,    49,    50,    18,    41,    41,    42,    22,    42,    43,
      25,    27,    27,    48,   366,   221,   222,   343,    43,   349,
      24,   347,   349,   375,   229,   230,   378,   353,   353,    66,
     223,   224,    54,    34,   162,    26,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    42,    46,   380,   380,     8,    44,    43,    43,
     259,    27,   190,    26,   324,    18,    44,    18,   196,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    18,
      18,    46,   340,   341,     3,     4,     5,    46,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    46,    25,    25,    25,    27,    26,
      26,    46,    31,    32,    26,   225,   226,   227,   228,    46,
      46,    40,    41,    26,    46,    40,     6,    25,    65,    48,
      49,    50,    46,   268,    47,    75,   324,   255,   243,   343,
     231,   233,   232,   140,    -1,    56,   234,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     235,    -1,    25,    -1,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      45,    -1,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    45,    -1,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    48,    49,    50,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    26,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    46,
      25,    48,    49,    50,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    48,    49,    50,    73,    74,    75,    40,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    -1,    40,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    25,    41,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    66,
      -1,    45,    -1,    47,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    25,    -1,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    25,    -1,    27,    48,    49,
      50,    31,    32,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    25,    26,    -1,    48,    49,
      50,    31,    32,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    48,    49,
      50,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    48,    49,    50,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      48,    49,    50,    31,    32,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      48,    49,    50,    31,    32,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      48,    49,    50,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88
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
      97,   153,    25,    45,   115,    40,   101,   104,   105,   106,
     112,   110,    44,    41,    42,   112,   116,    26,    99,   114,
       3,     4,     5,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    25,
      27,    31,    32,    41,    48,    49,    50,    91,    96,   130,
     131,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   149,   151,   152,   153,
     154,   155,   156,   157,   158,   159,    18,    40,   125,   147,
      96,   153,    18,    26,    97,   118,   119,   120,   121,    22,
      69,   117,   104,   106,    41,   105,    43,   107,   108,   114,
     106,    41,    42,   133,   146,   150,    41,   111,   150,    43,
      25,    25,    25,   151,    25,    18,    27,    27,    27,   149,
      25,   133,    43,   106,   122,   149,    25,   133,   133,    25,
      31,    32,    33,    45,    47,    44,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   148,   135,    22,    23,
      51,    20,    21,    29,    30,    36,    37,    52,    53,    38,
      39,    48,    24,    54,    34,    35,    55,    27,    42,    41,
     155,    45,    47,    95,   125,   126,   127,   128,   129,    25,
     114,   116,   123,   124,    26,    42,    26,    42,    46,   117,
     147,    22,    46,    69,   147,    41,   150,    27,    42,    43,
      41,    43,   151,   149,   149,   149,     8,   156,    27,    27,
     122,   151,    25,   116,   123,    26,    26,   122,    26,   132,
     147,    18,   149,    18,   147,   135,   135,   135,   136,   136,
     137,   137,   138,   138,   138,   138,   139,   139,   140,   141,
     142,   143,   144,   149,   147,   150,    18,   129,    41,    42,
     125,    44,   123,   124,    25,    45,    28,   120,    18,   147,
      46,    46,   147,    46,   108,   150,   151,    26,    26,    26,
      25,   156,    26,    40,   135,    26,    26,    42,    46,    43,
      46,    41,   125,   127,    26,    26,   118,    22,    46,   147,
      46,    46,   151,   151,   151,   149,    26,   149,   126,   147,
     146,   125,    26,    46,    46,     6,    26,   151,    26,    41,
      42,   151,   151,    41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    91,    92,    92,    93,    93,    94,
      94,    95,    95,    96,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    98,    98,    99,    99,   100,   100,   100,
     100,   100,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   102,   102,   102,   103,   103,
     104,   104,   105,   106,   106,   106,   106,   107,   107,   108,
     108,   108,   109,   109,   109,   109,   109,   110,   110,   111,
     111,   112,   112,   112,   113,   114,   114,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   116,
     116,   116,   116,   117,   117,   118,   118,   119,   119,   120,
     120,   120,   121,   121,   122,   122,   123,   123,   123,   124,
     124,   124,   124,   124,   124,   125,   125,   125,   126,   126,
     126,   126,   127,   128,   128,   129,   129,   130,   130,   130,
     130,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   132,   132,   133,   133,   133,   133,   133,   133,   134,
     134,   134,   134,   134,   134,   135,   135,   136,   136,   136,
     136,   137,   137,   137,   138,   138,   138,   139,   139,   139,
     139,   139,   140,   140,   140,   141,   141,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     149,   149,   150,   151,   151,   151,   151,   151,   151,   152,
     152,   152,   153,   153,   154,   154,   155,   155,   156,   156,
     157,   157,   157,   158,   158,   158,   158,   159,   159,   159,
     159,   159
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     1,     1,     3,
       4,     1,     2,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       3,     2,     5,     4,     6,     5,     2,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     2,     1,     3,     5,
       4,     6,     5,     6,     5,     4,     4,     4,     3,     2,
       1,     3,     2,     1,     2,     3,     1,     1,     3,     2,
       2,     1,     1,     3,     2,     1,     2,     1,     1,     3,
       4,     3,     4,     4,     3,     1,     3,     4,     2,     1,
       4,     3,     2,     1,     2,     3,     2,     1,     1,     1,
       3,     1,     4,     3,     4,     3,     3,     2,     2,     6,
       7,     1,     3,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     2,     3,     1,     2,     1,     1,     2,     1,
       5,     7,     5,     5,     6,     6,     7,     2,     2,     2,
       3,     3
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
#line 57 "compiler.y" /* yacc.c:1646  */
    {
        root = make_node(NULL, PROGRAM, 1, (yyvsp[0].tree));
        print_tree(root);
    }
#line 1819 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 64 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.f = (yyvsp[0].val_float);
        v.type = "float";
        (yyval.tree) = make_node(&v, CONSTANT, 0);
    }
#line 1830 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 70 "compiler.y" /* yacc.c:1646  */
    { 
        value v;
        v.v.i = (yyvsp[0].val_int);
        v.type = "integer";
        (yyval.tree) = make_node(&v, CONSTANT, 0);
    }
#line 1841 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 81 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, TRANSLATION_UNIT, 1, (yyvsp[0].tree));
    }
#line 1849 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 84 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, TRANSLATION_UNIT, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 1857 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 90 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, EXTERNAL_DECLARATION, 1, (yyvsp[0].tree));
    }
#line 1865 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 93 "compiler.y" /* yacc.c:1646  */
    { 
        (yyval.tree) = make_node(NULL, EXTERNAL_DECLARATION, 1, (yyvsp[0].tree));
    }
#line 1873 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 99 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, FUNCTION_DEFINITION, 3, (yyvsp[-2].tree), (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 1881 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 102 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, FUNCTION_DEFINITION, 4, (yyvsp[-3].tree), (yyvsp[-2].tree), (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 1889 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 108 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_LIST, 1, (yyvsp[0].tree));
    }
#line 1897 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 111 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_LIST, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 1905 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 119 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION, 1, (yyvsp[-1].tree));
    }
#line 1913 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 122 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION, 2, (yyvsp[-2].tree), (yyvsp[-1].tree));
        // type check
    }
#line 1922 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 129 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_SPECIFIERS, 1, (yyvsp[0].tree));
    }
#line 1930 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 132 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_SPECIFIERS, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 1938 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 135 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_SPECIFIERS, 1, (yyvsp[0].tree));
    }
#line 1946 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 138 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_SPECIFIERS, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 1954 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 141 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_SPECIFIERS, 1, (yyvsp[0].tree));
    }
#line 1962 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 144 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_SPECIFIERS, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 1970 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 147 "compiler.y" /* yacc.c:1646  */
    {  
        (yyval.tree) = make_node(NULL, DECLARATION_SPECIFIERS, 1, (yyvsp[0].tree));
    }
#line 1978 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 150 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATION_SPECIFIERS, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 1986 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 156 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INIT_DECLARATOR_LIST, 1, (yyvsp[0].tree));
    }
#line 1994 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 159 "compiler.y" /* yacc.c:1646  */
    {  
        (yyval.tree) = make_node(NULL, INIT_DECLARATOR_LIST, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 2002 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 165 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INIT_DECLARATOR, 1, (yyvsp[0].tree));
    }
#line 2010 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 168 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "=";
        v.type = "string";
        (yyval.tree) = make_node(&v, INIT_DECLARATOR, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 2021 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 177 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "typedef";
        v.type = "string";
        (yyval.tree) = make_node(&v, STORAGE_CLASS_SPECIFIER, 0);
    }
#line 2032 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 183 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "extern";
        v.type = "string";
        (yyval.tree) = make_node(&v, STORAGE_CLASS_SPECIFIER, 0);
    }
#line 2043 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 189 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "static";
        v.type = "string";
        (yyval.tree) = make_node(&v, STORAGE_CLASS_SPECIFIER, 0);
    }
#line 2054 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 195 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "auto";
        v.type = "string";
        (yyval.tree) = make_node(&v, STORAGE_CLASS_SPECIFIER, 0);
    }
#line 2065 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 201 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "register";
        v.type = "string";
        (yyval.tree) = make_node(&v, STORAGE_CLASS_SPECIFIER, 0);
    }
#line 2076 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 210 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "void";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2087 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 216 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "int";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2098 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 222 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "float";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2109 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 228 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "double";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2120 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 234 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "char";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2131 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 240 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "long";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2142 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 246 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "short";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2153 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 252 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "signed";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2164 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 258 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "unsigned";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2175 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 264 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "bool";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2186 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 270 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, TYPE_SPECIFIER, 1, (yyvsp[0].tree));
    }
#line 2194 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 273 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "enum";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 1, (yyvsp[0].tree));
    }
#line 2205 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 279 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "typdef_name";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_SPECIFIER, 0);
    }
#line 2216 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 288 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[-3].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, STRUCT_OR_UNION_SPECIFIER, 2, (yyvsp[-4].tree), (yyvsp[-1].tree));
    }
#line 2227 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 294 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_OR_UNION_SPECIFIER, 2, (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 2235 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 297 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, STRUCT_OR_UNION_SPECIFIER, 1, (yyvsp[-1].tree));
    }
#line 2246 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 306 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "struct";
        v.type = "identifier";
        (yyval.tree) = make_node(&v, STRUCT_OR_UNION, 0);
    }
#line 2257 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 312 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "union";
        v.type = "identifier";
        (yyval.tree) = make_node(&v, STRUCT_OR_UNION, 0);
    }
#line 2268 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 321 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_DECLARATION_LIST, 1, (yyvsp[0].tree));
    }
#line 2276 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 324 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_DECLARATION_LIST, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2284 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 330 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_DECLARATION, 2, (yyvsp[-2].tree), (yyvsp[-1].tree));
    }
#line 2292 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 336 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, SPECIFIER_QUALIFIER_LIST, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2300 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 339 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, SPECIFIER_QUALIFIER_LIST, 1, (yyvsp[0].tree));
    }
#line 2308 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 342 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, SPECIFIER_QUALIFIER_LIST, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2316 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 345 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, SPECIFIER_QUALIFIER_LIST, 1, (yyvsp[0].tree));
    }
#line 2324 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 351 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_DECLARATOR_LIST, 1, (yyvsp[0].tree));
    }
#line 2332 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 354 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_DECLARATOR_LIST, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 2340 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 360 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_DECLARATOR, 1, (yyvsp[0].tree));
    }
#line 2348 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 363 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_DECLARATOR, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 2356 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 366 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STRUCT_DECLARATOR, 1, (yyvsp[0].tree));
    }
#line 2364 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 372 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[-3].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, ENUM_SPECIFIER, 1, (yyvsp[-1].tree));
    }
#line 2375 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 378 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ENUM_SPECIFIER, 1, (yyvsp[-1].tree));
    }
#line 2383 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 381 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[-4].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, ENUM_SPECIFIER, 1, (yyvsp[-2].tree));
    }
#line 2394 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 387 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ENUM_SPECIFIER, 1, (yyvsp[-2].tree));
    }
#line 2402 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 390 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, ENUM_SPECIFIER, 0);
    }
#line 2413 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 399 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ENUMERATOR_LIST, 1, (yyvsp[0].tree));
    }
#line 2421 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 402 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ENUMERATOR_LIST, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 2429 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 408 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, ENUMERATOR, 0);
    }
#line 2440 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 414 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[-2].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, ENUMERATOR, 0);
    }
#line 2451 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 423 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "const";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_QUALIFIER, 0);
    }
#line 2462 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 429 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "restrict";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_QUALIFIER, 0);
    }
#line 2473 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 435 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "volatile";
        v.type = "string";
        (yyval.tree) = make_node(&v, TYPE_QUALIFIER, 0);
    }
#line 2484 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 444 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "inline";
        v.type = "string";
        (yyval.tree) = make_node(&v, FUNCTION_SPECIFIER, 0);
    }
#line 2495 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 453 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATOR, 1, (yyvsp[0].tree));
    }
#line 2503 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 456 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DECLARATOR, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2511 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 462 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, DIRECT_DECLARATOR, 0);
    }
#line 2522 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 468 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 1, (yyvsp[-1].tree));
    }
#line 2530 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 471 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 3, (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[-1].tree));
    }
#line 2538 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 474 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 2, (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 2546 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 477 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 3, (yyvsp[-5].tree), (yyvsp[-2].tree), (yyvsp[-1].tree));
    }
#line 2554 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 480 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 2, (yyvsp[-4].tree), (yyvsp[-1].tree));
    }
#line 2562 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 483 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 3, (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 2570 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 486 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 2, (yyvsp[-4].tree), (yyvsp[-2].tree));
    }
#line 2578 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 489 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 1, (yyvsp[-3].tree));
    }
#line 2586 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 492 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 2, (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 2594 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 495 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 2, (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 2602 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 498 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_DECLARATOR, 1, (yyvsp[-2].tree));
    }
#line 2610 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 504 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POINTER, 1, (yyvsp[0].tree));
    }
#line 2618 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 507 "compiler.y" /* yacc.c:1646  */
    {

    }
#line 2626 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 510 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POINTER, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2634 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 513 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POINTER, 1, (yyvsp[0].tree));
    }
#line 2642 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 519 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, TYPE_QUALIFIER_LIST, 1, (yyvsp[0].tree));
    }
#line 2650 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 522 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, TYPE_QUALIFIER_LIST, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2658 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 528 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PARAMETER_TYPE_LIST, 1, (yyvsp[-2].tree));
    }
#line 2666 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 531 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PARAMETER_TYPE_LIST, 1, (yyvsp[0].tree));
    }
#line 2674 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 537 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PARAMETER_LIST, 1, (yyvsp[0].tree));
    }
#line 2682 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 540 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PARAMETER_LIST, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 2690 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 546 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PARAMETER_DECLARATION, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
        // type check
    }
#line 2699 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 550 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PARAMETER_DECLARATION, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2707 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 553 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PARAMETER_DECLARATION, 1, (yyvsp[0].tree));
    }
#line 2715 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 559 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, IDENTIFIER_LIST, 0);
    }
#line 2726 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 565 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, IDENTIFIER_LIST, 1, (yyvsp[-2].tree));
    }
#line 2737 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 574 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, TYPE_NAME, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2745 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 577 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, TYPE_NAME, 1, (yyvsp[0].tree));
    }
#line 2753 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 583 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ABSTRACT_DECLARATOR, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2761 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 586 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ABSTRACT_DECLARATOR, 1, (yyvsp[0].tree));
    }
#line 2769 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 589 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ABSTRACT_DECLARATOR, 1, (yyvsp[0].tree));
    }
#line 2777 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 595 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 1, (yyvsp[-1].tree));
    }
#line 2785 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 598 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 2, (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 2793 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 601 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 1, (yyvsp[-2].tree));
    }
#line 2801 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 604 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 1, (yyvsp[-3].tree));
    }
#line 2809 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 607 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 2, (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 2817 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 610 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 1, (yyvsp[-2].tree));
    }
#line 2825 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 616 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INITIALIZER, 1, (yyvsp[0].tree));
    }
#line 2833 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 619 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INITIALIZER, 1, (yyvsp[-1].tree));
    }
#line 2841 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 622 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INITIALIZER, 1, (yyvsp[-2].tree));
    }
#line 2849 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 628 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INITIALIZER_LIST, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2857 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 631 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INITIALIZER_LIST, 1, (yyvsp[0].tree));
    }
#line 2865 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 634 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INITIALIZER_LIST, 3, (yyvsp[-3].tree), (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2873 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 637 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INITIALIZER_LIST, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 2881 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 643 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DESIGNATION, 1, (yyvsp[-1].tree));
    }
#line 2889 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 649 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DESIGNATOR_LIST, 1, (yyvsp[0].tree));
    }
#line 2897 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 652 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DESIGNATOR_LIST, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 2905 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 658 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, DESIGNATOR, 1, (yyvsp[-1].tree));
    }
#line 2913 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 661 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, DESIGNATOR, 0);
    }
#line 2924 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 672 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, PRIMARY_EXPRESSION, 0);
    }
#line 2935 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 678 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PRIMARY_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 2943 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 681 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "string";
        (yyval.tree) = make_node(&v, PRIMARY_EXPRESSION, 0);
    }
#line 2954 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 687 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, PRIMARY_EXPRESSION, 1, (yyvsp[-1].tree));
    }
#line 2962 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 693 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POSTFIX_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 2970 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 696 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POSTFIX_EXPRESSION, 2, (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 2978 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 699 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POSTFIX_EXPRESSION, 1, (yyvsp[-2].tree));
    }
#line 2986 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 702 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POSTFIX_EXPRESSION, 2, (yyvsp[-3].tree), (yyvsp[-1].tree));
    }
#line 2994 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 705 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION, 1, (yyvsp[-2].tree));
    }
#line 3005 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 711 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[0].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION, 1, (yyvsp[-2].tree));
    }
#line 3016 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 717 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POSTFIX_EXPRESSION, 1, (yyvsp[-1].tree));
    }
#line 3024 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 720 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POSTFIX_EXPRESSION, 1, (yyvsp[-1].tree));
    }
#line 3032 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 723 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POSTFIX_EXPRESSION, 2, (yyvsp[-4].tree), (yyvsp[-1].tree));
    }
#line 3040 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 726 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, POSTFIX_EXPRESSION, 2, (yyvsp[-5].tree), (yyvsp[-2].tree));
    }
#line 3048 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 732 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ARGUMENT_EXPRESSION_LIST, 1, (yyvsp[0].tree));
    }
#line 3056 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 735 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ARGUMENT_EXPRESSION_LIST, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3064 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 741 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, UNARY_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3072 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 744 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, UNARY_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3080 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 747 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, UNARY_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3088 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 750 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, UNARY_EXPRESSION, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 3096 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 753 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, UNARY_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3104 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 756 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, UNARY_EXPRESSION, 1, (yyvsp[-1].tree));
    }
#line 3112 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 762 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "&";
        v.type = "string";
        (yyval.tree) = make_node(&v, UNARY_OPERATOR, 0);
    }
#line 3123 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 768 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "*";
        v.type = "string";
        (yyval.tree) = make_node(&v, UNARY_OPERATOR, 0);
    }
#line 3134 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 774 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "+";
        v.type = "string";
        (yyval.tree) = make_node(&v, UNARY_OPERATOR, 0);
    }
#line 3145 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 780 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "-";
        v.type = "string";
        (yyval.tree) = make_node(&v, UNARY_OPERATOR, 0);
    }
#line 3156 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 786 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "~";
        v.type = "string";
        (yyval.tree) = make_node(&v, UNARY_OPERATOR, 0);
    }
#line 3167 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 792 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "!";
        v.type = "string";
        (yyval.tree) = make_node(&v, UNARY_OPERATOR, 0);
    }
#line 3178 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 801 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, CAST_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3186 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 804 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, CAST_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3194 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 810 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, MULTIPLICATIVE_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3202 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 813 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, MULTIPLICATIVE_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3210 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 816 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, MULTIPLICATIVE_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3218 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 819 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, MULTIPLICATIVE_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3226 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 825 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ADDITIVE_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3234 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 828 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ADDITIVE_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3242 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 831 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ADDITIVE_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3250 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 837 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, SHIFT_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3258 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 840 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, SHIFT_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3266 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 843 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, SHIFT_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3274 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 849 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, RELATIONAL_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3282 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 852 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, RELATIONAL_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3290 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 855 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, RELATIONAL_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3298 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 858 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, RELATIONAL_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3306 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 861 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, RELATIONAL_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3314 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 867 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, EQUALITY_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3322 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 870 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, EQUALITY_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3330 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 873 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, EQUALITY_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3338 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 879 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, AND_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3346 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 882 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, AND_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3354 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 888 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, EXCLUSIVE_OR_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3362 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 891 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, EXCLUSIVE_OR_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3370 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 897 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INCLUSIVE_OR_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3378 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 900 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, INCLUSIVE_OR_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3386 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 906 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, LOGICAL_AND_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3394 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 909 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, LOGICAL_AND_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3402 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 915 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, LOGICAL_OR_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3410 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 918 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, LOGICAL_OR_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3418 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 924 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, CONDITIONAL_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3426 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 927 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, CONDITIONAL_EXPRESSION, 2, (yyvsp[-4].tree), (yyvsp[-2].tree));
    }
#line 3434 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 933 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ASSIGNMENT_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3442 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 936 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ASSIGNMENT_EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3450 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 942 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3461 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 948 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "*=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3472 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 954 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "/=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3483 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 960 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "%=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3494 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 966 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "+=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3505 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 972 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "-=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3516 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 978 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "<<=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3527 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 984 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = ">>=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3538 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 990 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "&=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3549 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 996 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "^=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3560 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1002 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = "|=";
        v.type = "string";
        (yyval.tree) = make_node(&v, POSTFIX_EXPRESSION,0);
    }
#line 3571 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1011 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3579 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1014 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, EXPRESSION, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3587 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1020 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, CONSTANT_EXPRESSION, 1, (yyvsp[0].tree));
    }
#line 3595 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1028 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STATEMENT, 1, (yyvsp[0].tree));
    }
#line 3603 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1031 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STATEMENT, 1, (yyvsp[0].tree));
    }
#line 3611 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1034 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STATEMENT, 1, (yyvsp[0].tree));
    }
#line 3619 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1037 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STATEMENT, 1, (yyvsp[0].tree));
    }
#line 3627 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1040 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STATEMENT, 1, (yyvsp[0].tree));
    }
#line 3635 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1043 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, STATEMENT, 1, (yyvsp[0].tree));
    }
#line 3643 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1049 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[-2].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, LABELED_STATEMENT, 1, (yyvsp[0].tree));
    }
#line 3654 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1055 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, LABELED_STATEMENT, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3662 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1058 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, LABELED_STATEMENT, 1, (yyvsp[0].tree));
    }
#line 3670 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1064 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = NULL;
    }
#line 3678 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1067 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, COMPOUND_STATEMENT, 1, (yyvsp[-1].tree));
    }
#line 3686 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1073 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, BLOCK_ITEM_LIST, 1, (yyvsp[0].tree));
    }
#line 3694 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1076 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, BLOCK_ITEM_LIST, 2, (yyvsp[-1].tree), (yyvsp[0].tree));
    }
#line 3702 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1082 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, BLOCK_ITEM, 1, (yyvsp[0].tree));
    }
#line 3710 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1085 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, BLOCK_ITEM, 1, (yyvsp[0].tree));
    }
#line 3718 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1091 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL,EXPRESSION_STATEMENT, 1, (yyvsp[-1].tree));
    }
#line 3726 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1098 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, SELECTION_STATEMENT, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3734 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1101 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, SELECTION_STATEMENT, 3, (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3742 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1104 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, SELECTION_STATEMENT, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3750 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1110 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ITERATION_STATEMENT, 2, (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3758 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1113 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ITERATION_STATEMENT, 2, (yyvsp[-4].tree), (yyvsp[-1].tree));
    }
#line 3766 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1116 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ITERATION_STATEMENT, 3, (yyvsp[-3].tree), (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3774 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1119 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, ITERATION_STATEMENT, 4, (yyvsp[-4].tree), (yyvsp[-3].tree), (yyvsp[-2].tree), (yyvsp[0].tree));
    }
#line 3782 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1125 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, JUMP_STATEMENT, 0);
    }
#line 3790 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1128 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, JUMP_STATEMENT, 0);
    }
#line 3798 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1131 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, JUMP_STATEMENT, 0);
    }
#line 3806 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1134 "compiler.y" /* yacc.c:1646  */
    {
        (yyval.tree) = make_node(NULL, JUMP_STATEMENT, 1, (yyvsp[-1].tree));
    }
#line 3814 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1137 "compiler.y" /* yacc.c:1646  */
    {
        value v;
        v.v.s = (yyvsp[-1].val_str);
        v.type = "identifier";
        (yyval.tree) = make_node(&v, JUMP_STATEMENT, 0);
    }
#line 3825 "compiler.tab.c" /* yacc.c:1646  */
    break;


#line 3829 "compiler.tab.c" /* yacc.c:1646  */
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
#line 1146 "compiler.y" /* yacc.c:1906  */


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

yyerror(const char *s)
{
    // fflush(stdout);
	// fprintf(stderr, "\033[1m\033[31m");
	// fprintf(stderr, "*** %d: %s near '%s'\n", yylineno, s, yytext);
	// fprintf(stderr, "\033[0m");
}
