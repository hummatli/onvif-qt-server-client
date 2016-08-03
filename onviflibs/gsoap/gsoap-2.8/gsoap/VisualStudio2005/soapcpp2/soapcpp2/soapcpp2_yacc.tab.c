/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PRAGMA = 258,
     AUTO = 259,
     DOUBLE = 260,
     INT = 261,
     STRUCT = 262,
     BREAK = 263,
     ELSE = 264,
     LONG = 265,
     SWITCH = 266,
     CASE = 267,
     ENUM = 268,
     REGISTER = 269,
     TYPEDEF = 270,
     CHAR = 271,
     EXTERN = 272,
     RETURN = 273,
     UNION = 274,
     CONST = 275,
     FLOAT = 276,
     SHORT = 277,
     UNSIGNED = 278,
     CONTINUE = 279,
     FOR = 280,
     SIGNED = 281,
     VOID = 282,
     DEFAULT = 283,
     GOTO = 284,
     SIZEOF = 285,
     VOLATILE = 286,
     DO = 287,
     IF = 288,
     STATIC = 289,
     WHILE = 290,
     CLASS = 291,
     PRIVATE = 292,
     PROTECTED = 293,
     PUBLIC = 294,
     VIRTUAL = 295,
     INLINE = 296,
     OPERATOR = 297,
     LLONG = 298,
     BOOL = 299,
     CFALSE = 300,
     CTRUE = 301,
     WCHAR = 302,
     TIME = 303,
     USING = 304,
     NAMESPACE = 305,
     ULLONG = 306,
     MUSTUNDERSTAND = 307,
     SIZE = 308,
     FRIEND = 309,
     TEMPLATE = 310,
     EXPLICIT = 311,
     TYPENAME = 312,
     RESTRICT = 313,
     null = 314,
     UCHAR = 315,
     USHORT = 316,
     UINT = 317,
     ULONG = 318,
     NONE = 319,
     ID = 320,
     LAB = 321,
     TYPE = 322,
     LNG = 323,
     DBL = 324,
     CHR = 325,
     TAG = 326,
     STR = 327,
     RA = 328,
     LA = 329,
     OA = 330,
     XA = 331,
     AA = 332,
     MA = 333,
     DA = 334,
     TA = 335,
     NA = 336,
     PA = 337,
     OR = 338,
     AN = 339,
     NE = 340,
     EQ = 341,
     GE = 342,
     LE = 343,
     RS = 344,
     LS = 345,
     AR = 346,
     PP = 347,
     NN = 348
   };
#endif
/* Tokens.  */
#define PRAGMA 258
#define AUTO 259
#define DOUBLE 260
#define INT 261
#define STRUCT 262
#define BREAK 263
#define ELSE 264
#define LONG 265
#define SWITCH 266
#define CASE 267
#define ENUM 268
#define REGISTER 269
#define TYPEDEF 270
#define CHAR 271
#define EXTERN 272
#define RETURN 273
#define UNION 274
#define CONST 275
#define FLOAT 276
#define SHORT 277
#define UNSIGNED 278
#define CONTINUE 279
#define FOR 280
#define SIGNED 281
#define VOID 282
#define DEFAULT 283
#define GOTO 284
#define SIZEOF 285
#define VOLATILE 286
#define DO 287
#define IF 288
#define STATIC 289
#define WHILE 290
#define CLASS 291
#define PRIVATE 292
#define PROTECTED 293
#define PUBLIC 294
#define VIRTUAL 295
#define INLINE 296
#define OPERATOR 297
#define LLONG 298
#define BOOL 299
#define CFALSE 300
#define CTRUE 301
#define WCHAR 302
#define TIME 303
#define USING 304
#define NAMESPACE 305
#define ULLONG 306
#define MUSTUNDERSTAND 307
#define SIZE 308
#define FRIEND 309
#define TEMPLATE 310
#define EXPLICIT 311
#define TYPENAME 312
#define RESTRICT 313
#define null 314
#define UCHAR 315
#define USHORT 316
#define UINT 317
#define ULONG 318
#define NONE 319
#define ID 320
#define LAB 321
#define TYPE 322
#define LNG 323
#define DBL 324
#define CHR 325
#define TAG 326
#define STR 327
#define RA 328
#define LA 329
#define OA 330
#define XA 331
#define AA 332
#define MA 333
#define DA 334
#define TA 335
#define NA 336
#define PA 337
#define OR 338
#define AN 339
#define NE 340
#define EQ 341
#define GE 342
#define LE 343
#define RS 344
#define LS 345
#define AR 346
#define PP 347
#define NN 348




/* Copy the first part of user declarations.  */
#line 51 "soapcpp2_yacc.y"


#include "soapcpp2.h"

#ifdef WIN32
#ifndef __STDC__
#define __STDC__
#endif
#define YYINCLUDED_STDLIB_H
#ifdef WIN32_WITHOUT_SOLARIS_FLEX
extern int soapcpp2lex(void);
#else
extern int yylex(void);
#endif
#else
extern int yylex(void);
#endif

extern int is_XML(Tnode*);

#define MAXNEST 16	/* max. nesting depth of scopes */

struct Scope
{	Table	*table;
	Entry	*entry;
	Node	node;
	LONG64	val;
	int	offset;
	Bool	grow;	/* true if offset grows with declarations */
	Bool	mask;	/* true if enum is mask */
}	stack[MAXNEST],	/* stack of tables and offsets */
	*sp;		/* current scope stack pointer */

Table	*classtable = (Table*)0,
	*enumtable = (Table*)0,
	*typetable = (Table*)0,
	*booltable = (Table*)0,
	*templatetable = (Table*)0;

const char *namespaceid = NULL;
int	transient = 0;
int	permission = 0;
int	custom_header = 1;
int	custom_fault = 1;
Pragma	*pragmas = NULL;
Tnode	*qname = NULL;
Tnode	*xml = NULL;

/* function prototypes for support routine section */
static Entry		*undefined(Symbol*);
static Tnode		*mgtype(Tnode*, Tnode*);
static Node		op(const char*, Node, Node), iop(const char*, Node, Node), relop(const char*, Node, Node);
static void		mkscope(Table*, int), enterscope(Table*, int), exitscope(void);
static int		integer(Tnode*), real(Tnode*), numeric(Tnode*);
static void		add_soap(void), add_XML(void), add_qname(void), add_header(void), add_fault(void), add_response(Entry*, Entry*), add_result(Tnode*);
extern char		*c_storage(Storage);
extern const char	*c_type(Tnode*);
extern int		is_primitive_or_string(Tnode*), is_stdstr(Tnode*), is_binary(Tnode*), is_external(Tnode*), is_mutable(Tnode*), has_attachment(Tnode*);

/* Temporaries used in semantic rules */
int		i;
char		*s, *s1;
const char 	*s2;
Symbol		*sym;
Entry		*p, *q;
Tnode		*t;
Node		tmp, c;
Pragma		**pp;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 127 "soapcpp2_yacc.y"
{	Symbol	*sym;
	LONG64	i;
	double	r;
	char	c;
	char	*s;
	Tnode	*typ;
	Storage	sto;
	Node	rec;
	Entry	*e;
}
/* Line 193 of yacc.c.  */
#line 364 "soapcpp2_yacc.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 377 "soapcpp2_yacc.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1101

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  119
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  241
/* YYNRULES -- Number of states.  */
#define YYNSTATES  374

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   348

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   113,     2,     2,   118,   104,    91,     2,
     115,   116,   102,   100,    73,   101,     2,   103,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,   110,
      94,    74,    95,    85,   117,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   111,     2,   112,    90,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   108,    89,   109,   114,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    87,    88,
      92,    93,    96,    97,    98,    99,   105,   106,   107
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    13,    15,    16,    19,    22,
      24,    27,    29,    31,    33,    34,    38,    43,    48,    53,
      58,    61,    63,    65,    66,    67,    68,    70,    73,    77,
      80,    83,    87,    92,    99,   102,   104,   106,   108,   111,
     114,   117,   120,   123,   126,   129,   132,   135,   138,   141,
     144,   147,   150,   153,   156,   159,   162,   165,   168,   171,
     174,   177,   180,   183,   186,   189,   192,   195,   198,   201,
     204,   207,   210,   214,   218,   221,   223,   227,   235,   236,
     237,   239,   241,   245,   252,   253,   255,   259,   264,   265,
     268,   271,   273,   275,   278,   281,   283,   285,   287,   289,
     291,   293,   295,   297,   299,   301,   303,   305,   307,   309,
     311,   313,   315,   317,   319,   327,   333,   339,   347,   349,
     353,   359,   365,   368,   371,   377,   384,   387,   390,   397,
     404,   413,   416,   419,   421,   426,   430,   434,   438,   442,
     445,   448,   451,   453,   455,   458,   461,   464,   466,   469,
     470,   471,   472,   473,   475,   476,   478,   480,   482,   484,
     486,   488,   490,   492,   494,   496,   498,   500,   502,   504,
     506,   507,   509,   510,   513,   514,   516,   517,   520,   523,
     524,   529,   533,   535,   536,   539,   540,   542,   544,   547,
     551,   556,   560,   561,   563,   565,   568,   571,   575,   577,
     583,   585,   587,   591,   593,   595,   599,   601,   603,   607,
     611,   615,   619,   623,   627,   631,   635,   639,   643,   647,
     651,   655,   659,   663,   667,   669,   672,   675,   678,   681,
     684,   687,   692,   694,   698,   700,   702,   704,   706,   708,
     710,   712
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     120,     0,    -1,   121,   122,    -1,    -1,    50,    65,   108,
     123,   109,    -1,   123,    -1,    -1,   123,   124,    -1,   132,
     110,    -1,   125,    -1,     1,   110,    -1,   127,    -1,   128,
      -1,     3,    -1,    -1,   132,   110,   126,    -1,    37,    86,
     129,   126,    -1,    38,    86,   130,   126,    -1,    39,    86,
     131,   126,    -1,   127,   126,   128,   126,    -1,     1,   110,
      -1,   111,    -1,   112,    -1,    -1,    -1,    -1,   146,    -1,
     146,   133,    -1,   146,   134,   139,    -1,   137,   139,    -1,
     138,   139,    -1,   132,    73,   133,    -1,   132,    73,   134,
     139,    -1,   163,    65,   165,   167,   168,   166,    -1,   163,
     136,    -1,    65,    -1,    67,    -1,    65,    -1,    42,   113,
      -1,    42,   114,    -1,    42,    74,    -1,    42,    84,    -1,
      42,    83,    -1,    42,    82,    -1,    42,    81,    -1,    42,
      80,    -1,    42,    79,    -1,    42,    78,    -1,    42,    77,
      -1,    42,    76,    -1,    42,    75,    -1,    42,    87,    -1,
      42,    88,    -1,    42,    89,    -1,    42,    90,    -1,    42,
      91,    -1,    42,    93,    -1,    42,    92,    -1,    42,    94,
      -1,    42,    97,    -1,    42,    95,    -1,    42,    96,    -1,
      42,    99,    -1,    42,    98,    -1,    42,   100,    -1,    42,
     101,    -1,    42,   102,    -1,    42,   103,    -1,    42,   104,
      -1,    42,   106,    -1,    42,   107,    -1,    42,   105,    -1,
      42,   111,   112,    -1,    42,   115,   116,    -1,    42,   145,
      -1,    67,    -1,   162,   114,    67,    -1,   140,   115,   158,
     141,   116,   160,   161,    -1,    -1,    -1,   142,    -1,   143,
      -1,   143,    73,   142,    -1,   147,   163,   144,   165,   168,
     166,    -1,    -1,    65,    -1,   147,   163,   164,    -1,   147,
     163,    65,   164,    -1,    -1,   159,   146,    -1,   148,   146,
      -1,   159,    -1,   148,    -1,   159,   147,    -1,   148,   147,
      -1,    27,    -1,    44,    -1,    16,    -1,    47,    -1,    22,
      -1,     6,    -1,    10,    -1,    43,    -1,    51,    -1,    53,
      -1,    21,    -1,     5,    -1,    26,    -1,    23,    -1,    60,
      -1,    61,    -1,    62,    -1,    63,    -1,    48,    -1,    55,
      94,   152,   135,    95,    36,   135,    -1,    36,   108,   154,
     126,   109,    -1,   150,   108,   154,   126,   109,    -1,   150,
      86,   153,   108,   154,   126,   109,    -1,   150,    -1,   150,
      86,   153,    -1,     7,   108,   154,   126,   109,    -1,   149,
     108,   154,   126,   109,    -1,     7,    65,    -1,     7,    67,
      -1,    19,   108,   155,   126,   109,    -1,    19,   135,   108,
     155,   126,   109,    -1,    19,    65,    -1,    19,    67,    -1,
      13,   108,   154,   132,   157,   109,    -1,   151,   108,   154,
     132,   157,   109,    -1,    13,   102,   135,   108,   156,   132,
     157,   109,    -1,    13,    65,    -1,    13,    67,    -1,    67,
      -1,    67,    94,   145,    95,    -1,    36,     1,   109,    -1,
       7,     1,   109,    -1,    19,     1,   109,    -1,    13,     1,
     109,    -1,     7,   135,    -1,    36,   135,    -1,    13,   135,
      -1,    36,    -1,    57,    -1,    38,   153,    -1,    37,   153,
      -1,    39,   153,    -1,    67,    -1,     7,    65,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,     4,    -1,    14,    -1,
      34,    -1,    56,    -1,    17,    -1,    15,    -1,    40,    -1,
      20,    -1,    54,    -1,    41,    -1,    52,    -1,    18,    -1,
     117,    -1,   118,    -1,    31,    -1,    -1,    20,    -1,    -1,
      74,    68,    -1,    -1,    40,    -1,    -1,   163,   102,    -1,
     163,    91,    -1,    -1,   111,   172,   112,   164,    -1,   111,
     112,   164,    -1,   164,    -1,    -1,    74,   172,    -1,    -1,
      71,    -1,   169,    -1,   169,   170,    -1,   169,   170,    86,
      -1,   169,   170,    86,   170,    -1,   169,    86,   170,    -1,
      -1,    72,    -1,    68,    -1,   100,    68,    -1,   101,    68,
      -1,   171,    73,   171,    -1,   172,    -1,   175,    85,   173,
      86,   172,    -1,   174,    -1,   171,    -1,   175,    87,   176,
      -1,   176,    -1,   174,    -1,   177,    88,   178,    -1,   178,
      -1,   176,    -1,   178,    89,   178,    -1,   178,    90,   178,
      -1,   178,    91,   178,    -1,   178,    93,   178,    -1,   178,
      92,   178,    -1,   178,    94,   178,    -1,   178,    97,   178,
      -1,   178,    95,   178,    -1,   178,    96,   178,    -1,   178,
      99,   178,    -1,   178,    98,   178,    -1,   178,   100,   178,
      -1,   178,   101,   178,    -1,   178,   102,   178,    -1,   178,
     103,   178,    -1,   178,   104,   178,    -1,   179,    -1,   113,
     179,    -1,   114,   179,    -1,   101,   179,    -1,   100,   179,
      -1,   102,   179,    -1,    91,   179,    -1,    30,   115,   145,
     116,    -1,   180,    -1,   115,   171,   116,    -1,    65,    -1,
      68,    -1,    59,    -1,    69,    -1,    70,    -1,    72,    -1,
      45,    -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   201,   201,   217,   231,   233,   235,   239,   241,   242,
     243,   250,   251,   253,   278,   281,   283,   285,   287,   289,
     291,   293,   296,   299,   302,   305,   308,   309,   310,   312,
     313,   314,   315,   318,   436,   452,   453,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   503,   513,   530,   588,   590,
     591,   593,   594,   596,   675,   682,   697,   699,   702,   706,
     719,   766,   772,   776,   786,   833,   834,   835,   836,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     848,   849,   850,   851,   852,   860,   882,   893,   912,   915,
     928,   950,   969,   984,   999,  1022,  1042,  1057,  1072,  1094,
    1113,  1132,  1140,  1148,  1169,  1183,  1188,  1193,  1198,  1204,
    1221,  1240,  1257,  1258,  1260,  1261,  1262,  1263,  1270,  1272,
    1279,  1287,  1293,  1294,  1296,  1304,  1305,  1306,  1307,  1308,
    1309,  1310,  1311,  1312,  1313,  1314,  1315,  1316,  1320,  1321,
    1323,  1324,  1326,  1327,  1329,  1330,  1332,  1333,  1340,  1345,
    1347,  1360,  1364,  1372,  1373,  1384,  1385,  1387,  1394,  1401,
    1408,  1415,  1423,  1424,  1426,  1427,  1428,  1437,  1438,  1441,
    1446,  1449,  1452,  1455,  1457,  1460,  1463,  1465,  1468,  1469,
    1470,  1471,  1472,  1473,  1474,  1475,  1476,  1477,  1478,  1479,
    1480,  1481,  1482,  1483,  1484,  1487,  1492,  1497,  1507,  1508,
    1515,  1519,  1524,  1527,  1528,  1535,  1539,  1543,  1547,  1551,
    1555,  1559
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRAGMA", "AUTO", "DOUBLE", "INT",
  "STRUCT", "BREAK", "ELSE", "LONG", "SWITCH", "CASE", "ENUM", "REGISTER",
  "TYPEDEF", "CHAR", "EXTERN", "RETURN", "UNION", "CONST", "FLOAT",
  "SHORT", "UNSIGNED", "CONTINUE", "FOR", "SIGNED", "VOID", "DEFAULT",
  "GOTO", "SIZEOF", "VOLATILE", "DO", "IF", "STATIC", "WHILE", "CLASS",
  "PRIVATE", "PROTECTED", "PUBLIC", "VIRTUAL", "INLINE", "OPERATOR",
  "LLONG", "BOOL", "CFALSE", "CTRUE", "WCHAR", "TIME", "USING",
  "NAMESPACE", "ULLONG", "MUSTUNDERSTAND", "SIZE", "FRIEND", "TEMPLATE",
  "EXPLICIT", "TYPENAME", "RESTRICT", "null", "UCHAR", "USHORT", "UINT",
  "ULONG", "NONE", "ID", "LAB", "TYPE", "LNG", "DBL", "CHR", "TAG", "STR",
  "','", "'='", "RA", "LA", "OA", "XA", "AA", "MA", "DA", "TA", "NA", "PA",
  "'?'", "':'", "OR", "AN", "'|'", "'^'", "'&'", "NE", "EQ", "'<'", "'>'",
  "GE", "LE", "RS", "LS", "'+'", "'-'", "'*'", "'/'", "'%'", "AR", "PP",
  "NN", "'{'", "'}'", "';'", "'['", "']'", "'!'", "'~'", "'('", "')'",
  "'@'", "'$'", "$accept", "prog", "s1", "exts", "exts1", "ext", "pragma",
  "decls", "t1", "t2", "t3", "t4", "t5", "dclrs", "dclr", "fdclr", "id",
  "name", "constr", "destr", "func", "fname", "fargso", "fargs", "farg",
  "arg", "texp", "spec", "tspec", "type", "struct", "class", "enum",
  "tname", "base", "s2", "s3", "s4", "s5", "s6", "store", "constobj",
  "abstract", "virtual", "ptrs", "array", "arrayck", "init", "tag",
  "occurs", "patt", "cint", "expr", "cexp", "qexp", "oexp", "obex", "aexp",
  "abex", "rexp", "lexp", "pexp", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,    44,    61,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,    63,    58,   338,   339,   124,
      94,    38,   340,   341,    60,    62,   342,   343,   344,   345,
      43,    45,    42,    47,    37,   346,   347,   348,   123,   125,
      59,    91,    93,    33,   126,    40,    41,    64,    36
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   119,   120,   121,   122,   122,   123,   123,   124,   124,
     124,   124,   124,   125,   126,   126,   126,   126,   126,   126,
     126,   127,   128,   129,   130,   131,   132,   132,   132,   132,
     132,   132,   132,   133,   134,   135,   135,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   137,   138,   139,   140,   141,
     141,   142,   142,   143,   144,   144,   145,   145,   146,   146,
     146,   147,   147,   147,   147,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   149,
     150,   151,   152,   152,   153,   153,   153,   153,   153,   154,
     155,   156,   157,   157,   158,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     160,   160,   161,   161,   162,   162,   163,   163,   163,   164,
     164,   164,   165,   166,   166,   167,   167,   168,   168,   168,
     168,   168,   169,   169,   170,   170,   170,   171,   171,   172,
     172,   173,   174,   174,   175,   176,   176,   177,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   179,   179,   179,   179,   179,
     179,   179,   179,   180,   180,   180,   180,   180,   180,   180,
     180,   180
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     5,     1,     0,     2,     2,     1,
       2,     1,     1,     1,     0,     3,     4,     4,     4,     4,
       2,     1,     1,     0,     0,     0,     1,     2,     3,     2,
       2,     3,     4,     6,     2,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     2,     1,     3,     7,     0,     0,
       1,     1,     3,     6,     0,     1,     3,     4,     0,     2,
       2,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     7,     5,     5,     7,     1,     3,
       5,     5,     2,     2,     5,     6,     2,     2,     6,     6,
       8,     2,     2,     1,     4,     3,     3,     3,     3,     2,
       2,     2,     1,     1,     2,     2,     2,     1,     2,     0,
       0,     0,     0,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     2,     0,     1,     0,     2,     2,     0,
       4,     3,     1,     0,     2,     0,     1,     1,     2,     3,
       4,     3,     0,     1,     1,     2,     2,     3,     1,     5,
       1,     1,     3,     1,     1,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     2,     2,     2,     2,     2,
       2,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     6,     1,     0,     2,     0,     0,     0,    13,
     155,   106,   100,     0,   101,     0,   156,   160,    97,   159,
     166,     0,   162,   105,    99,   108,   107,    95,   169,   157,
       0,   161,   164,   102,    96,    98,   113,   103,   165,   104,
     163,     0,   158,   109,   110,   111,   112,   133,    21,    22,
     167,   168,     7,     9,    11,    12,     0,    78,    78,   176,
      88,     0,   118,     0,    88,     0,     6,    10,     0,   122,
     123,   149,   139,     0,   131,   132,     0,   149,   141,     0,
     126,   127,   150,     0,     0,    35,    36,   149,   140,     0,
       0,   176,     8,    29,     0,    30,    27,    78,     0,   161,
     133,    90,   149,     0,   149,   149,    89,     0,     0,   136,
       0,   138,     0,    88,   137,     0,   150,   135,     0,   142,
     143,     0,     0,   176,    92,    91,    31,    78,   154,    28,
       0,   179,   178,   177,    34,     0,     0,     0,     0,     0,
     147,   119,     0,    88,    76,     4,     0,     0,     0,     0,
       0,     0,     0,   151,   152,     0,     0,     0,     0,   134,
     179,    94,    93,    32,    79,    40,    50,    49,    48,    47,
      46,    45,    44,    43,    42,    41,    51,    52,    53,    54,
      55,    57,    56,    58,    60,    61,    59,    63,    62,    64,
      65,    66,    67,    68,    71,    69,    70,     0,    38,    39,
       0,    74,     0,   182,   185,     0,   148,   145,   144,   146,
     149,     0,   152,    20,    23,    24,    25,   120,     0,     0,
      88,   176,     0,   124,     0,   115,     0,   179,    86,     0,
      80,    81,   176,    72,    73,     0,   240,   241,   236,   234,
     235,   237,   238,   239,     0,     0,     0,     0,   179,     0,
       0,     0,     0,   200,     0,   203,     0,   206,   224,   232,
     186,   192,   121,     0,   116,     0,     0,     0,     0,     0,
      15,   152,   128,   125,     0,    87,   170,     0,    84,     0,
     230,   228,   227,   229,   181,   225,   226,     0,   198,   179,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   193,
     183,   187,     0,   129,    16,    17,    18,    19,     0,   114,
     171,   172,    82,    85,   179,     0,     0,   233,   180,   201,
       0,   202,   205,   208,   209,   210,   212,   211,   213,   215,
     216,   214,   218,   217,   219,   220,   221,   222,   223,     0,
      33,   194,     0,     0,     0,   188,   117,   130,     0,    77,
     192,   231,   197,     0,   184,   191,   195,   196,   189,   173,
     183,   199,   190,    83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,     6,    52,    53,   150,   151,    55,
     266,   267,   268,   152,   126,   127,    72,   134,    57,    58,
      93,    94,   229,   230,   231,   324,   122,    59,   123,    60,
      61,    62,    63,   121,   141,   110,   115,   220,   222,   164,
      64,   321,   359,    65,    98,   203,   204,   350,   261,   310,
     311,   355,   287,   288,   330,   253,   254,   255,   256,   257,
     258,   259
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -256
static const yytype_int16 yypact[] =
{
    -256,    24,   -17,  -256,   -10,  -256,   213,   -70,   -60,  -256,
    -256,  -256,  -256,    16,  -256,    13,  -256,  -256,  -256,  -256,
    -256,    17,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,
      20,   -50,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,
    -256,   -31,  -256,  -256,  -256,  -256,  -256,   -24,  -256,  -256,
    -256,  -256,  -256,  -256,  -256,  -256,   -57,  -256,  -256,   -43,
     974,   -11,   -54,    11,   974,   -22,  -256,  -256,    14,    18,
      21,  -256,  -256,    33,    18,    21,    42,  -256,  -256,    45,
      18,    21,  -256,    48,    54,  -256,  -256,  -256,  -256,    36,
     974,  -256,  -256,  -256,     7,  -256,  -256,  -256,   -14,  -256,
      63,  -256,  -256,    19,  -256,  -256,  -256,    60,   676,  -256,
     443,  -256,    58,   906,  -256,   443,  -256,  -256,   443,  -256,
    -256,    42,    75,  -256,   974,   974,  -256,  -256,  -256,  -256,
     791,   -16,  -256,  -256,  -256,   443,   116,    19,    19,    19,
    -256,    74,   443,   906,  -256,  -256,    77,   102,   104,   107,
     103,   558,   -48,  -256,   148,   113,   443,   115,   130,  -256,
     -42,  -256,  -256,  -256,   974,  -256,  -256,  -256,  -256,  -256,
    -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,
    -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,
    -256,  -256,  -256,  -256,  -256,  -256,  -256,   125,  -256,  -256,
     122,  -256,    71,  -256,   170,   133,  -256,  -256,  -256,  -256,
    -256,   134,   148,  -256,  -256,  -256,  -256,  -256,   136,   328,
     906,   137,   141,  -256,   142,  -256,   209,   147,  -256,   146,
    -256,   179,  -256,  -256,  -256,   155,  -256,  -256,  -256,  -256,
    -256,  -256,  -256,  -256,   986,   986,   986,   986,   147,   986,
     986,   986,   151,    25,    64,   183,   184,   198,  -256,  -256,
    -256,   205,  -256,   443,  -256,   172,   328,   328,   328,   328,
    -256,   148,  -256,  -256,    42,  -256,   259,   974,     3,   974,
    -256,  -256,  -256,  -256,  -256,  -256,  -256,   -51,  -256,   147,
     986,   986,   986,   986,   986,   986,   986,   986,   986,   986,
     986,   986,   986,   986,   986,   986,   986,   986,   986,  -256,
     208,    34,   174,  -256,  -256,  -256,  -256,  -256,   175,  -256,
    -256,   211,  -256,  -256,   147,   187,   986,  -256,  -256,   236,
     226,   183,   198,   312,   426,   540,   656,   656,    76,    76,
      76,    76,    44,    44,    29,    29,  -256,  -256,  -256,   986,
    -256,  -256,   -27,   245,   246,   230,  -256,  -256,   249,  -256,
     205,  -256,  -256,   986,  -256,  -256,  -256,  -256,   -27,  -256,
     208,  -256,  -256,  -256
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -256,  -256,  -256,  -256,   252,  -256,  -256,  -108,     5,   101,
    -256,  -256,  -256,    -5,   261,   262,   -15,  -256,  -256,  -256,
     -38,  -256,  -256,    49,  -256,  -256,  -126,    40,  -112,   -88,
    -256,  -256,  -256,  -256,    30,   -58,   206,  -256,  -181,  -256,
     -85,  -256,  -256,  -256,  -114,  -152,     4,   -34,  -256,   -23,
    -256,  -254,  -255,  -199,  -256,  -256,  -256,    62,  -256,   -97,
      61,  -256
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -208
static const yytype_int16 yytable[] =
{
      78,    56,   124,   252,   201,   125,    83,   155,   228,   160,
     157,    54,   161,   162,    73,    88,    91,    68,    79,   113,
      95,    84,   326,   227,     3,    91,   136,   205,   130,   118,
     -26,   265,   103,     4,   211,   329,   124,   124,    66,   125,
     125,   351,   124,   218,   135,   125,   142,   143,   224,   132,
      67,   131,   232,    92,   104,     7,   137,   138,   139,   129,
     133,   112,   219,    89,  -175,   327,   -26,   -26,   323,   202,
      90,   362,   119,   353,   354,   275,   124,   132,    74,   125,
      75,    69,    80,    70,    81,    85,   140,    86,   133,   163,
     318,   -75,   107,   120,   132,   202,   284,   102,   365,   -37,
     101,   235,   351,    56,   106,   133,   158,    85,   154,    86,
    -204,   270,  -204,    54,   372,    76,   236,   237,   278,   105,
     352,    77,   128,   109,    71,    82,   -35,   144,    87,   -36,
     238,   306,   307,   308,   353,   354,   239,   328,   212,   240,
     241,   242,   111,   243,   304,   305,   306,   307,   308,   290,
     364,   291,   263,   325,   114,   312,   116,    90,   314,   315,
     316,   317,   244,   117,   371,   232,   153,   207,   208,   209,
     159,   245,   246,   247,   302,   303,   304,   305,   306,   307,
     308,   206,   210,   248,   249,   250,   251,   213,   214,   124,
     215,   124,   125,   216,   125,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   217,    -5,     8,   271,     9,    10,    11,    12,
      13,   221,   223,    14,   225,   226,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   233,   234,    26,
      27,   260,   262,   264,    28,   274,  -153,    29,    49,    30,
     272,   273,   277,    31,    32,   -88,    33,    34,   202,   319,
      35,    36,   276,   289,    37,    38,    39,    40,    41,    42,
     279,  -207,   292,    43,    44,    45,    46,   309,   -88,   320,
      47,   313,   349,   356,   357,   358,   -88,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   361,   -88,   280,   281,   282,   283,   326,
     285,   286,   363,   366,   367,   -88,   368,   369,   108,   269,
      96,    97,   156,   -88,    48,    49,   322,  -174,   360,   146,
      50,    51,    10,    11,    12,    13,   373,   370,    14,     0,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,   331,    26,    27,     0,     0,     0,    28,
       0,     0,    29,     0,    30,   147,   148,   149,    31,    32,
     -88,    33,    34,     0,     0,    35,    36,     0,     0,    37,
      38,    39,    40,    41,    42,     0,     0,     0,    43,    44,
      45,    46,     0,   -88,     0,    47,     0,     0,     0,     0,
       0,   -88,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,     0,     0,   -88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -88,     0,     0,     0,     0,     0,     0,   -14,   -88,    48,
     -14,     0,  -174,     0,   146,    50,    51,    10,    11,    12,
      13,     0,     0,    14,     0,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,    26,
      27,     0,     0,     0,    28,     0,     0,    29,     0,    30,
     147,   148,   149,    31,    32,   -88,    33,    34,     0,     0,
      35,    36,     0,     0,    37,    38,    39,    40,    41,    42,
       0,     0,     0,    43,    44,    45,    46,     0,   -88,     0,
      47,     0,     0,     0,     0,     0,   -88,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,     0,     0,     0,   -88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -88,     0,     0,     0,     0,
       0,     0,   -14,   -88,    48,     0,     0,  -174,     0,   146,
      50,    51,    10,    11,    12,    13,     0,     0,    14,     0,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,    26,    27,     0,     0,     0,    28,
       0,     0,    29,     0,    30,   147,   148,   149,    31,    32,
     -88,    33,    34,     0,     0,    35,    36,     0,     0,    37,
      38,    39,    40,    41,    42,     0,     0,     0,    43,    44,
      45,    46,     0,   -88,     0,    47,     0,     0,     0,     0,
       0,   -88,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,     0,     0,     0,     0,   -88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -88,     0,     0,     0,     0,     0,     0,     0,   -88,    48,
     -14,     0,  -174,     0,     0,    50,    51,     8,     0,     9,
      10,    11,    12,    13,     0,     0,    14,     0,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,    26,    27,     0,     0,     0,    28,     0,     0,
      29,     0,    30,     0,     0,     0,    31,    32,   -88,    33,
      34,     0,     0,    35,    36,     0,     0,    37,    38,    39,
      40,    41,    42,     0,     0,     0,    43,    44,    45,    46,
       0,   -88,     0,    47,     0,     0,     0,     0,     0,   -88,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,     0,     0,     0,     0,     0,     0,   -88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -88,     0,
       0,     0,     0,     0,     0,   145,   -88,    48,    49,     0,
    -174,     0,     0,    50,    51,    10,    11,    12,    13,     0,
       0,    14,     0,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,    26,    27,     0,
       0,     0,    28,     0,     0,    29,     0,    30,     0,     0,
       0,    99,    32,     0,    33,    34,     0,     0,    35,    36,
       0,     0,    37,    38,    39,    40,    41,    42,     0,     0,
       0,    43,    44,    45,    46,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,     0,     0,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,     0,
       0,     0,   197,     0,   198,   199,   200,     0,    50,    51,
      10,    11,    12,    13,     0,     0,    14,     0,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,    26,    27,     0,     0,     0,    28,     0,     0,
      29,     0,    30,     0,     0,     0,    31,    32,     0,    33,
      34,     0,     0,    35,    36,     0,     0,    37,    38,    39,
      40,    41,    42,     0,     0,     0,    43,    44,    45,    46,
       0,     0,     0,    47,     0,     0,     0,     0,    10,    11,
      12,    13,     0,     0,    14,     0,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
      26,    27,     0,     0,     0,    28,     0,     0,    29,     0,
      30,     0,     0,     0,    99,    32,   235,    33,    34,     0,
    -174,    35,    36,    50,    51,    37,    38,    39,    40,    41,
      42,   236,   237,     0,    43,    44,    45,    46,     0,     0,
       0,   100,     0,     0,     0,   238,     0,     0,     0,     0,
       0,   239,     0,     0,   240,   241,   242,     0,   243,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   244,     0,     0,
       0,     0,     0,     0,     0,     0,   245,   246,   247,     0,
       0,    50,    51,     0,     0,     0,     0,     0,     0,   249,
     250,   251
};

static const yytype_int16 yycheck[] =
{
      15,     6,    90,   202,   130,    90,    21,   115,   160,   123,
     118,     6,   124,   125,     1,    30,    73,     1,     1,    77,
      58,     1,    73,    65,     0,    73,     7,   135,    42,    87,
      73,   212,    86,    50,   142,   290,   124,   125,   108,   124,
     125,    68,   130,   151,   102,   130,   104,   105,   156,    91,
     110,    65,   164,   110,   108,    65,    37,    38,    39,    97,
     102,    76,   110,    94,   114,   116,   109,   110,    65,   111,
      94,   326,    36,   100,   101,   227,   164,    91,    65,   164,
      67,    65,    65,    67,    67,    65,    67,    67,   102,   127,
     271,   115,   114,    57,    91,   111,   248,   108,   352,   115,
      60,    30,    68,   108,    64,   102,   121,    65,   113,    67,
      85,   219,    87,   108,   368,   102,    45,    46,   232,   108,
      86,   108,   115,   109,   108,   108,   108,    67,   108,   108,
      59,   102,   103,   104,   100,   101,    65,   289,   143,    68,
      69,    70,   109,    72,   100,   101,   102,   103,   104,    85,
     349,    87,   210,   279,   109,   263,   108,    94,   266,   267,
     268,   269,    91,   109,   363,   277,   108,   137,   138,   139,
      95,   100,   101,   102,    98,    99,   100,   101,   102,   103,
     104,    65,   108,   112,   113,   114,   115,   110,    86,   277,
      86,   279,   277,    86,   279,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   109,     0,     1,   220,     3,     4,     5,     6,
       7,    73,   109,    10,   109,    95,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   112,   116,    26,
      27,    71,   109,   109,    31,    36,   109,    34,   112,    36,
     109,   109,    73,    40,    41,    42,    43,    44,   111,   274,
      47,    48,   116,   112,    51,    52,    53,    54,    55,    56,
     115,    88,    88,    60,    61,    62,    63,    72,    65,    20,
      67,   109,    74,   109,   109,    74,    73,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   116,    91,   244,   245,   246,   247,    73,
     249,   250,    86,    68,    68,   102,    86,    68,    66,   218,
      59,    59,   116,   110,   111,   112,   277,   114,   324,     1,
     117,   118,     4,     5,     6,     7,   370,   360,    10,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,   291,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    47,    48,    -1,    -1,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    60,    61,
      62,    63,    -1,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,
     112,    -1,   114,    -1,     1,   117,   118,     4,     5,     6,
       7,    -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      47,    48,    -1,    -1,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    60,    61,    62,    63,    -1,    65,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    73,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,   109,   110,   111,    -1,    -1,   114,    -1,     1,
     117,   118,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    47,    48,    -1,    -1,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    60,    61,
      62,    63,    -1,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,
     112,    -1,   114,    -1,    -1,   117,   118,     1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      34,    -1,    36,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    -1,    -1,    47,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    60,    61,    62,    63,
      -1,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,   112,    -1,
     114,    -1,    -1,   117,   118,     4,     5,     6,     7,    -1,
      -1,    10,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,    36,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    -1,    -1,    47,    48,
      -1,    -1,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    60,    61,    62,    63,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    -1,
      -1,    -1,   111,    -1,   113,   114,   115,    -1,   117,   118,
       4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      34,    -1,    36,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    -1,    -1,    47,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    60,    61,    62,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,     4,     5,
       6,     7,    -1,    -1,    10,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,
      36,    -1,    -1,    -1,    40,    41,    30,    43,    44,    -1,
     114,    47,    48,   117,   118,    51,    52,    53,    54,    55,
      56,    45,    46,    -1,    60,    61,    62,    63,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    68,    69,    70,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,    -1,
      -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,   115
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   120,   121,     0,    50,   122,   123,    65,     1,     3,
       4,     5,     6,     7,    10,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    26,    27,    31,    34,
      36,    40,    41,    43,    44,    47,    48,    51,    52,    53,
      54,    55,    56,    60,    61,    62,    63,    67,   111,   112,
     117,   118,   124,   125,   127,   128,   132,   137,   138,   146,
     148,   149,   150,   151,   159,   162,   108,   110,     1,    65,
      67,   108,   135,     1,    65,    67,   102,   108,   135,     1,
      65,    67,   108,   135,     1,    65,    67,   108,   135,    94,
      94,    73,   110,   139,   140,   139,   133,   134,   163,    40,
      67,   146,   108,    86,   108,   108,   146,   114,   123,   109,
     154,   109,   135,   154,   109,   155,   108,   109,   154,    36,
      57,   152,   145,   147,   148,   159,   133,   134,   115,   139,
      42,    65,    91,   102,   136,   154,     7,    37,    38,    39,
      67,   153,   154,   154,    67,   109,     1,    37,    38,    39,
     126,   127,   132,   108,   132,   126,   155,   126,   135,    95,
     163,   147,   147,   139,   158,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   111,   113,   114,
     115,   145,   111,   164,   165,   126,    65,   153,   153,   153,
     108,   126,   132,   110,    86,    86,    86,   109,   126,   110,
     156,    73,   157,   109,   126,   109,    95,    65,   164,   141,
     142,   143,   147,   112,   116,    30,    45,    46,    59,    65,
      68,    69,    70,    72,    91,   100,   101,   102,   112,   113,
     114,   115,   172,   174,   175,   176,   177,   178,   179,   180,
      71,   167,   109,   154,   109,   157,   129,   130,   131,   128,
     126,   132,   109,   109,    36,   164,   116,    73,   163,   115,
     179,   179,   179,   179,   164,   179,   179,   171,   172,   112,
      85,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    72,
     168,   169,   126,   109,   126,   126,   126,   126,   157,   135,
      20,   160,   142,    65,   144,   145,    73,   116,   164,   171,
     173,   176,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,    74,
     166,    68,    86,   100,   101,   170,   109,   109,    74,   161,
     165,   116,   171,    86,   172,   170,    68,    68,    86,    68,
     168,   172,   170,   166
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 201 "soapcpp2_yacc.y"
    { if (lflag)
    			  {	custom_header = 0;
    			  	custom_fault = 0;
			  }
			  else
			  {	add_header();
			  	add_fault();
			  }
			  compile(sp->table);
			  freetable(classtable);
			  freetable(enumtable);
			  freetable(typetable);
			  freetable(booltable);
			  freetable(templatetable);
			;}
    break;

  case 3:
#line 217 "soapcpp2_yacc.y"
    { classtable = mktable((Table*)0);
			  enumtable = mktable((Table*)0);
			  typetable = mktable((Table*)0);
			  booltable = mktable((Table*)0);
			  templatetable = mktable((Table*)0);
			  p = enter(booltable, lookup("false"));
			  p->info.typ = mkint();
			  p->info.val.i = 0;
			  p = enter(booltable, lookup("true"));
			  p->info.typ = mkint();
			  p->info.val.i = 1;
			  mkscope(mktable(mktable((Table*)0)), 0);
			;}
    break;

  case 4:
#line 232 "soapcpp2_yacc.y"
    { namespaceid = (yyvsp[(2) - (5)].sym)->name; ;}
    break;

  case 5:
#line 233 "soapcpp2_yacc.y"
    { ;}
    break;

  case 6:
#line 235 "soapcpp2_yacc.y"
    { add_soap();
			  add_qname();
			  add_XML();
			;}
    break;

  case 7:
#line 239 "soapcpp2_yacc.y"
    { ;}
    break;

  case 8:
#line 241 "soapcpp2_yacc.y"
    { ;}
    break;

  case 9:
#line 242 "soapcpp2_yacc.y"
    { ;}
    break;

  case 10:
#line 243 "soapcpp2_yacc.y"
    { synerror("input before ; skipped");
			  while (sp > stack)
			  {	freetable(sp->table);
			  	exitscope();
			  }
			  yyerrok;
			;}
    break;

  case 11:
#line 250 "soapcpp2_yacc.y"
    { ;}
    break;

  case 12:
#line 251 "soapcpp2_yacc.y"
    { ;}
    break;

  case 13:
#line 253 "soapcpp2_yacc.y"
    { if ((yyvsp[(1) - (1)].s)[1] >= 'a' && (yyvsp[(1) - (1)].s)[1] <= 'z')
			  {	char *s;
				for (pp = &pragmas; *pp; pp = &(*pp)->next)
			          ;
				*pp = (Pragma*)emalloc(sizeof(Pragma));
				s = (char*)emalloc(strlen((yyvsp[(1) - (1)].s))+1);
				strcpy(s, (yyvsp[(1) - (1)].s));
				(*pp)->pragma = s;
				(*pp)->next = NULL;
			  }
			  else if ((i = atoi((yyvsp[(1) - (1)].s)+2)) > 0)
				yylineno = i;
			  else
			  {	sprintf(errbuf, "directive '%s' ignored (use #import to import files)", (yyvsp[(1) - (1)].s));
			  	semwarn(errbuf);
			  }
			;}
    break;

  case 14:
#line 278 "soapcpp2_yacc.y"
    { transient &= ~6;
			  permission = 0;
			;}
    break;

  case 15:
#line 282 "soapcpp2_yacc.y"
    { ;}
    break;

  case 16:
#line 284 "soapcpp2_yacc.y"
    { ;}
    break;

  case 17:
#line 286 "soapcpp2_yacc.y"
    { ;}
    break;

  case 18:
#line 288 "soapcpp2_yacc.y"
    { ;}
    break;

  case 19:
#line 290 "soapcpp2_yacc.y"
    { ;}
    break;

  case 20:
#line 291 "soapcpp2_yacc.y"
    { synerror("declaration expected"); yyerrok; ;}
    break;

  case 21:
#line 293 "soapcpp2_yacc.y"
    { transient |= 1;
			;}
    break;

  case 22:
#line 296 "soapcpp2_yacc.y"
    { transient &= ~1;
			;}
    break;

  case 23:
#line 299 "soapcpp2_yacc.y"
    { permission = Sprivate;
			;}
    break;

  case 24:
#line 302 "soapcpp2_yacc.y"
    { permission = Sprotected;
			;}
    break;

  case 25:
#line 305 "soapcpp2_yacc.y"
    { permission = 0;
			;}
    break;

  case 26:
#line 308 "soapcpp2_yacc.y"
    { ;}
    break;

  case 27:
#line 309 "soapcpp2_yacc.y"
    { ;}
    break;

  case 28:
#line 311 "soapcpp2_yacc.y"
    { ;}
    break;

  case 29:
#line 312 "soapcpp2_yacc.y"
    { ;}
    break;

  case 30:
#line 313 "soapcpp2_yacc.y"
    { ;}
    break;

  case 31:
#line 314 "soapcpp2_yacc.y"
    { ;}
    break;

  case 32:
#line 316 "soapcpp2_yacc.y"
    { ;}
    break;

  case 33:
#line 319 "soapcpp2_yacc.y"
    { if (((yyvsp[(3) - (6)].rec).sto & Stypedef) && sp->table->level == GLOBAL)
			  {	if (((yyvsp[(3) - (6)].rec).typ->type != Tstruct && (yyvsp[(3) - (6)].rec).typ->type != Tunion && (yyvsp[(3) - (6)].rec).typ->type != Tenum) || strcmp((yyvsp[(2) - (6)].sym)->name, (yyvsp[(3) - (6)].rec).typ->id->name))
				{	p = enter(typetable, (yyvsp[(2) - (6)].sym));
					p->info.typ = mksymtype((yyvsp[(3) - (6)].rec).typ, (yyvsp[(2) - (6)].sym));
			  		if ((yyvsp[(3) - (6)].rec).sto & Sextern)
						p->info.typ->transient = -1;
					else
						p->info.typ->transient = (yyvsp[(3) - (6)].rec).typ->transient;
			  		p->info.sto = (yyvsp[(3) - (6)].rec).sto;
					p->info.typ->pattern = (yyvsp[(5) - (6)].rec).pattern;
					p->info.typ->minLength = (yyvsp[(5) - (6)].rec).minLength;
					p->info.typ->maxLength = (yyvsp[(5) - (6)].rec).maxLength;
				}
				(yyvsp[(2) - (6)].sym)->token = TYPE;
			  }
			  else
			  {	p = enter(sp->table, (yyvsp[(2) - (6)].sym));
			  	p->tag = (yyvsp[(4) - (6)].s);
			  	p->info.typ = (yyvsp[(3) - (6)].rec).typ;
			  	p->info.sto = (Storage)((int)(yyvsp[(3) - (6)].rec).sto | permission);
				if ((yyvsp[(6) - (6)].rec).hasval)
				{	p->info.hasval = True;
					switch ((yyvsp[(3) - (6)].rec).typ->type)
					{	case Tchar:
						case Tuchar:
						case Tshort:
						case Tushort:
						case Tint:
						case Tuint:
						case Tlong:
						case Tulong:
						case Tllong:
						case Tullong:
						case Tenum:
						case Ttime:
							if ((yyvsp[(6) - (6)].rec).typ->type == Tint || (yyvsp[(6) - (6)].rec).typ->type == Tchar || (yyvsp[(6) - (6)].rec).typ->type == Tenum)
								sp->val = p->info.val.i = (yyvsp[(6) - (6)].rec).val.i;
							else
							{	semerror("type error in initialization constant");
								p->info.hasval = False;
							}
							break;
						case Tfloat:
						case Tdouble:
						case Tldouble:
							if ((yyvsp[(6) - (6)].rec).typ->type == Tfloat || (yyvsp[(6) - (6)].rec).typ->type == Tdouble || (yyvsp[(6) - (6)].rec).typ->type == Tldouble)
								p->info.val.r = (yyvsp[(6) - (6)].rec).val.r;
							else if ((yyvsp[(6) - (6)].rec).typ->type == Tint)
								p->info.val.r = (double)(yyvsp[(6) - (6)].rec).val.i;
							else
							{	semerror("type error in initialization constant");
								p->info.hasval = False;
							}
							break;
						default:
							if ((yyvsp[(3) - (6)].rec).typ->type == Tpointer
							 && (((Tnode*)(yyvsp[(3) - (6)].rec).typ->ref)->type == Tchar || ((Tnode*)(yyvsp[(3) - (6)].rec).typ->ref)->type == Twchar)
							 && (yyvsp[(6) - (6)].rec).typ->type == Tpointer
							 && ((Tnode*)(yyvsp[(6) - (6)].rec).typ->ref)->type == Tchar)
								p->info.val.s = (yyvsp[(6) - (6)].rec).val.s;
							else if (bflag
							 && (yyvsp[(3) - (6)].rec).typ->type == Tarray
							 && ((Tnode*)(yyvsp[(3) - (6)].rec).typ->ref)->type == Tchar
							 && (yyvsp[(6) - (6)].rec).typ->type == Tpointer
							 && ((Tnode*)(yyvsp[(6) - (6)].rec).typ->ref)->type == Tchar)
							{	if ((yyvsp[(3) - (6)].rec).typ->width / ((Tnode*)(yyvsp[(3) - (6)].rec).typ->ref)->width - 1 < (int)strlen((yyvsp[(6) - (6)].rec).val.s))
								{	semerror("char[] initialization constant too long");
									p->info.val.s = "";
								}

								else
									p->info.val.s = (yyvsp[(6) - (6)].rec).val.s;
							}
							else if ((yyvsp[(3) - (6)].rec).typ->type == Tpointer
							      && (((Tnode*)(yyvsp[(3) - (6)].rec).typ->ref)->id == lookup("std::string") || ((Tnode*)(yyvsp[(3) - (6)].rec).typ->ref)->id == lookup("std::wstring")))
							      	p->info.val.s = (yyvsp[(6) - (6)].rec).val.s;
							else if ((yyvsp[(3) - (6)].rec).typ->id == lookup("std::string") || (yyvsp[(3) - (6)].rec).typ->id == lookup("std::wstring"))
							      	p->info.val.s = (yyvsp[(6) - (6)].rec).val.s;
							else if ((yyvsp[(3) - (6)].rec).typ->type == Tpointer
							      && (yyvsp[(6) - (6)].rec).typ->type == Tint
							      && (yyvsp[(6) - (6)].rec).val.i == 0)
								p->info.val.i = 0;
							else
							{	semerror("type error in initialization constant");
								p->info.hasval = False;
							}
							break;
					}
				}
				else
					p->info.val.i = sp->val;
			        if ((yyvsp[(5) - (6)].rec).minOccurs < 0)
			        {	if ((yyvsp[(6) - (6)].rec).hasval || ((yyvsp[(3) - (6)].rec).sto & Sattribute) || (yyvsp[(3) - (6)].rec).typ->type == Tpointer || (yyvsp[(3) - (6)].rec).typ->type == Ttemplate || !strncmp((yyvsp[(2) - (6)].sym)->name, "__size", 6))
			        		p->info.minOccurs = 0;
			        	else
			        		p->info.minOccurs = 1;
				}
				else
					p->info.minOccurs = (yyvsp[(5) - (6)].rec).minOccurs;
				p->info.maxOccurs = (yyvsp[(5) - (6)].rec).maxOccurs;
				if (sp->mask)
					sp->val <<= 1;
				else
					sp->val++;
			  	p->info.offset = sp->offset;
				if ((yyvsp[(3) - (6)].rec).sto & Sextern)
					p->level = GLOBAL;
				else if ((yyvsp[(3) - (6)].rec).sto & Stypedef)
					;
			  	else if (sp->grow)
					sp->offset += p->info.typ->width;
				else if (p->info.typ->width > sp->offset)
					sp->offset = p->info.typ->width;
			  }
			  sp->entry = p;
			;}
    break;

  case 34:
#line 436 "soapcpp2_yacc.y"
    { if ((yyvsp[(1) - (2)].rec).sto & Stypedef)
			  {	sprintf(errbuf, "invalid typedef qualifier for '%s'", (yyvsp[(2) - (2)].sym)->name);
				semwarn(errbuf);
			  }
			  p = enter(sp->table, (yyvsp[(2) - (2)].sym));
			  p->info.typ = (yyvsp[(1) - (2)].rec).typ;
			  p->info.sto = (yyvsp[(1) - (2)].rec).sto;
			  p->info.hasval = False;
			  p->info.offset = sp->offset;
			  if (sp->grow)
				sp->offset += p->info.typ->width;
			  else if (p->info.typ->width > sp->offset)
				sp->offset = p->info.typ->width;
			  sp->entry = p;
			;}
    break;

  case 35:
#line 452 "soapcpp2_yacc.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); ;}
    break;

  case 36:
#line 453 "soapcpp2_yacc.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); ;}
    break;

  case 37:
#line 455 "soapcpp2_yacc.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); ;}
    break;

  case 38:
#line 456 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator!"); ;}
    break;

  case 39:
#line 457 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator~"); ;}
    break;

  case 40:
#line 458 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator="); ;}
    break;

  case 41:
#line 459 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator+="); ;}
    break;

  case 42:
#line 460 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator-="); ;}
    break;

  case 43:
#line 461 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator*="); ;}
    break;

  case 44:
#line 462 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator/="); ;}
    break;

  case 45:
#line 463 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator%="); ;}
    break;

  case 46:
#line 464 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator&="); ;}
    break;

  case 47:
#line 465 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator^="); ;}
    break;

  case 48:
#line 466 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator|="); ;}
    break;

  case 49:
#line 467 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator<<="); ;}
    break;

  case 50:
#line 468 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator>>="); ;}
    break;

  case 51:
#line 469 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator||"); ;}
    break;

  case 52:
#line 470 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator&&"); ;}
    break;

  case 53:
#line 471 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator|"); ;}
    break;

  case 54:
#line 472 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator^"); ;}
    break;

  case 55:
#line 473 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator&"); ;}
    break;

  case 56:
#line 474 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator=="); ;}
    break;

  case 57:
#line 475 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator!="); ;}
    break;

  case 58:
#line 476 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator<"); ;}
    break;

  case 59:
#line 477 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator<="); ;}
    break;

  case 60:
#line 478 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator>"); ;}
    break;

  case 61:
#line 479 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator>="); ;}
    break;

  case 62:
#line 480 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator<<"); ;}
    break;

  case 63:
#line 481 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator>>"); ;}
    break;

  case 64:
#line 482 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator+"); ;}
    break;

  case 65:
#line 483 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator-"); ;}
    break;

  case 66:
#line 484 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator*"); ;}
    break;

  case 67:
#line 485 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator/"); ;}
    break;

  case 68:
#line 486 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator%"); ;}
    break;

  case 69:
#line 487 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator++"); ;}
    break;

  case 70:
#line 488 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator--"); ;}
    break;

  case 71:
#line 489 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator->"); ;}
    break;

  case 72:
#line 490 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator[]"); ;}
    break;

  case 73:
#line 491 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator()"); ;}
    break;

  case 74:
#line 492 "soapcpp2_yacc.y"
    { s1 = c_storage((yyvsp[(2) - (2)].rec).sto);
			  s2 = c_type((yyvsp[(2) - (2)].rec).typ);
			  s = (char*)emalloc(strlen(s1) + strlen(s2) + 10);
			  strcpy(s, "operator ");
			  strcat(s, s1);
			  strcat(s, s2);
			  (yyval.sym) = lookup(s);
			  if (!(yyval.sym))
				(yyval.sym) = install(s, ID);
			;}
    break;

  case 75:
#line 503 "soapcpp2_yacc.y"
    { if (!(p = entry(classtable, (yyvsp[(1) - (1)].sym))))
			  	semerror("invalid constructor");
			  sp->entry = enter(sp->table, (yyvsp[(1) - (1)].sym));
			  sp->entry->info.typ = mknone();
			  sp->entry->info.sto = Snone;
			  sp->entry->info.offset = sp->offset;
			  sp->node.typ = mkvoid();
			  sp->node.sto = Snone;
			;}
    break;

  case 76:
#line 514 "soapcpp2_yacc.y"
    { if (!(p = entry(classtable, (yyvsp[(3) - (3)].sym))))
			  	semerror("invalid destructor");
			  s = (char*)emalloc(strlen((yyvsp[(3) - (3)].sym)->name) + 2);
			  strcpy(s, "~");
			  strcat(s, (yyvsp[(3) - (3)].sym)->name);
			  sym = lookup(s);
			  if (!sym)
				sym = install(s, ID);
			  sp->entry = enter(sp->table, sym);
			  sp->entry->info.typ = mknone();
			  sp->entry->info.sto = (yyvsp[(1) - (3)].sto);
			  sp->entry->info.offset = sp->offset;
			  sp->node.typ = mkvoid();
			  sp->node.sto = Snone;
			;}
    break;

  case 77:
#line 531 "soapcpp2_yacc.y"
    { if ((yyvsp[(1) - (7)].e)->level == GLOBAL)
			  {	if (!((yyvsp[(1) - (7)].e)->info.sto & Sextern) && sp->entry && sp->entry->info.typ->type == Tpointer && ((Tnode*)sp->entry->info.typ->ref)->type == Tchar)
			  	{	sprintf(errbuf, "last output parameter of remote method function prototype '%s' is a pointer to a char which will only return one byte: use char** instead to return a string", (yyvsp[(1) - (7)].e)->sym->name);
					semwarn(errbuf);
				}
				if ((yyvsp[(1) - (7)].e)->info.sto & Sextern)
				 	(yyvsp[(1) - (7)].e)->info.typ = mkmethod((yyvsp[(1) - (7)].e)->info.typ, sp->table);
			  	else if (sp->entry && (sp->entry->info.typ->type == Tpointer || sp->entry->info.typ->type == Treference || sp->entry->info.typ->type == Tarray || is_transient(sp->entry->info.typ)))
				{	if ((yyvsp[(1) - (7)].e)->info.typ->type == Tint)
					{	sp->entry->info.sto = (Storage)((int)sp->entry->info.sto | (int)Sreturn);
						(yyvsp[(1) - (7)].e)->info.typ = mkfun(sp->entry);
						(yyvsp[(1) - (7)].e)->info.typ->id = (yyvsp[(1) - (7)].e)->sym;
						if (!is_transient(sp->entry->info.typ))
						{	if (!is_response(sp->entry->info.typ))
							{	if (!is_XML(sp->entry->info.typ))
									add_response((yyvsp[(1) - (7)].e), sp->entry);
							}
							else
								add_result(sp->entry->info.typ);
						}
					}
					else
					{	sprintf(errbuf, "return type of remote method function prototype '%s' must be integer", (yyvsp[(1) - (7)].e)->sym->name);
						semerror(errbuf);
					}
				}
			  	else
			  	{	sprintf(errbuf, "last output parameter of remote method function prototype '%s' is a return parameter and must be a pointer or reference, or use %s(..., void) for one-way sends", (yyvsp[(1) - (7)].e)->sym->name, (yyvsp[(1) - (7)].e)->sym->name);
					semerror(errbuf);
			  	}
				if (!((yyvsp[(1) - (7)].e)->info.sto & Sextern))
			  	{	unlinklast(sp->table);
			  		if ((p = entry(classtable, (yyvsp[(1) - (7)].e)->sym)))
					{	if (p->info.typ->ref)
						{	sprintf(errbuf, "remote method name clash: struct/class '%s' already declared at line %d", (yyvsp[(1) - (7)].e)->sym->name, p->lineno);
							semerror(errbuf);
						}
						else
						{	p->info.typ->ref = sp->table;
							p->info.typ->width = sp->offset;
						}
					}
			  		else
			  		{	p = enter(classtable, (yyvsp[(1) - (7)].e)->sym);
						p->info.typ = mkstruct(sp->table, sp->offset);
						p->info.typ->id = (yyvsp[(1) - (7)].e)->sym;
			  		}
			  	}
			  }
			  else if ((yyvsp[(1) - (7)].e)->level == INTERNAL)
			  {	(yyvsp[(1) - (7)].e)->info.typ = mkmethod((yyvsp[(1) - (7)].e)->info.typ, sp->table);
				(yyvsp[(1) - (7)].e)->info.sto = (Storage)((int)(yyvsp[(1) - (7)].e)->info.sto | (int)(yyvsp[(6) - (7)].sto) | (int)(yyvsp[(7) - (7)].sto));
			  	transient &= ~1;
			  }
			  exitscope();
			;}
    break;

  case 78:
#line 588 "soapcpp2_yacc.y"
    { (yyval.e) = sp->entry; ;}
    break;

  case 79:
#line 590 "soapcpp2_yacc.y"
    { ;}
    break;

  case 80:
#line 591 "soapcpp2_yacc.y"
    { ;}
    break;

  case 81:
#line 593 "soapcpp2_yacc.y"
    { ;}
    break;

  case 82:
#line 594 "soapcpp2_yacc.y"
    { ;}
    break;

  case 83:
#line 597 "soapcpp2_yacc.y"
    { if ((yyvsp[(4) - (6)].rec).sto & Stypedef)
			  	semwarn("typedef in function argument");
			  p = enter(sp->table, (yyvsp[(3) - (6)].sym));
			  p->info.typ = (yyvsp[(4) - (6)].rec).typ;
			  p->info.sto = (yyvsp[(4) - (6)].rec).sto;
			  if ((yyvsp[(5) - (6)].rec).minOccurs < 0)
			  {	if ((yyvsp[(6) - (6)].rec).hasval || ((yyvsp[(4) - (6)].rec).sto & Sattribute) || (yyvsp[(4) - (6)].rec).typ->type == Tpointer)
			        	p->info.minOccurs = 0;
			       	else
			        	p->info.minOccurs = 1;
			  }
			  else
				p->info.minOccurs = (yyvsp[(5) - (6)].rec).minOccurs;
			  p->info.maxOccurs = (yyvsp[(5) - (6)].rec).maxOccurs;
			  if ((yyvsp[(6) - (6)].rec).hasval)
			  {	p->info.hasval = True;
				switch ((yyvsp[(4) - (6)].rec).typ->type)
				{	case Tchar:
					case Tuchar:
					case Tshort:
					case Tushort:
					case Tint:
					case Tuint:
					case Tlong:
					case Tulong:
					case Tenum:
					case Ttime:
						if ((yyvsp[(6) - (6)].rec).typ->type == Tint || (yyvsp[(6) - (6)].rec).typ->type == Tchar || (yyvsp[(6) - (6)].rec).typ->type == Tenum)
							sp->val = p->info.val.i = (yyvsp[(6) - (6)].rec).val.i;
						else
						{	semerror("type error in initialization constant");
							p->info.hasval = False;
						}
						break;
					case Tfloat:
					case Tdouble:
					case Tldouble:
						if ((yyvsp[(6) - (6)].rec).typ->type == Tfloat || (yyvsp[(6) - (6)].rec).typ->type == Tdouble || (yyvsp[(6) - (6)].rec).typ->type == Tldouble)
							p->info.val.r = (yyvsp[(6) - (6)].rec).val.r;
						else if ((yyvsp[(6) - (6)].rec).typ->type == Tint)
							p->info.val.r = (double)(yyvsp[(6) - (6)].rec).val.i;
						else
						{	semerror("type error in initialization constant");
							p->info.hasval = False;
						}
						break;
					default:
						if ((yyvsp[(4) - (6)].rec).typ->type == Tpointer
						 && (((Tnode*)(yyvsp[(4) - (6)].rec).typ->ref)->type == Tchar || ((Tnode*)(yyvsp[(4) - (6)].rec).typ->ref)->type == Twchar)
						 && (yyvsp[(6) - (6)].rec).typ->type == Tpointer
						 && ((Tnode*)(yyvsp[(6) - (6)].rec).typ->ref)->type == Tchar)
							p->info.val.s = (yyvsp[(6) - (6)].rec).val.s;
						else if ((yyvsp[(4) - (6)].rec).typ->type == Tpointer
						      && (((Tnode*)(yyvsp[(4) - (6)].rec).typ->ref)->id == lookup("std::string") || ((Tnode*)(yyvsp[(4) - (6)].rec).typ->ref)->id == lookup("std::wstring")))
						      	p->info.val.s = (yyvsp[(6) - (6)].rec).val.s;
						else if ((yyvsp[(4) - (6)].rec).typ->id == lookup("std::string") || (yyvsp[(4) - (6)].rec).typ->id == lookup("std::wstring"))
						      	p->info.val.s = (yyvsp[(6) - (6)].rec).val.s;
						else if ((yyvsp[(4) - (6)].rec).typ->type == Tpointer
						      && (yyvsp[(6) - (6)].rec).typ->type == Tint
						      && (yyvsp[(6) - (6)].rec).val.i == 0)
							p->info.val.i = 0;
						else
						{	semerror("type error in initialization constant");
							p->info.hasval = False;
						}
						break;
				}
			  }
			  p->info.offset = sp->offset;
			  if ((yyvsp[(4) - (6)].rec).sto & Sextern)
				p->level = GLOBAL;
			  else if (sp->grow)
				sp->offset += p->info.typ->width;
			  else if (p->info.typ->width > sp->offset)
				sp->offset = p->info.typ->width;
			  sp->entry = p;
			;}
    break;

  case 84:
#line 675 "soapcpp2_yacc.y"
    { if (sp->table->level != PARAM)
				(yyval.sym) = gensymidx("param", (int)++sp->val);
			  else if (eflag)
				(yyval.sym) = gensymidx("_param", (int)++sp->val);
			  else
				(yyval.sym) = gensym("_param");
			;}
    break;

  case 85:
#line 682 "soapcpp2_yacc.y"
    { if (vflag == 2 && *(yyvsp[(1) - (1)].sym)->name == '_' && sp->table->level == GLOBAL)
			  { sprintf(errbuf, "SOAP 1.2 does not support anonymous parameters '%s'", (yyvsp[(1) - (1)].sym)->name);
			    semwarn(errbuf);
			  }
			  (yyval.sym) = (yyvsp[(1) - (1)].sym);
			;}
    break;

  case 86:
#line 698 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(3) - (3)].rec); ;}
    break;

  case 87:
#line 700 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(4) - (4)].rec); ;}
    break;

  case 88:
#line 702 "soapcpp2_yacc.y"
    { (yyval.rec).typ = mkint();
			  (yyval.rec).sto = Snone;
			  sp->node = (yyval.rec);
			;}
    break;

  case 89:
#line 706 "soapcpp2_yacc.y"
    { if (((yyvsp[(1) - (2)].sto) & Stypedef) && is_external((yyvsp[(2) - (2)].rec).typ) && (yyvsp[(2) - (2)].rec).typ->type != Tstruct && (yyvsp[(2) - (2)].rec).typ->type != Tclass)
			  	(yyval.rec).typ = mktype((yyvsp[(2) - (2)].rec).typ->type, (yyvsp[(2) - (2)].rec).typ->ref, (yyvsp[(2) - (2)].rec).typ->width);
			  else
			  	(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
			  (yyval.rec).sto = (Storage)((int)(yyvsp[(1) - (2)].sto) | ((int)((yyvsp[(2) - (2)].rec).sto)));
			  if (((yyval.rec).sto & Sattribute) && !is_primitive_or_string((yyvsp[(2) - (2)].rec).typ) && !is_stdstr((yyvsp[(2) - (2)].rec).typ) && !is_binary((yyvsp[(2) - (2)].rec).typ) && !is_external((yyvsp[(2) - (2)].rec).typ))
			  {	semwarn("invalid attribute type");
			  	(yyval.rec).sto = (Storage)((int)(yyval.rec).sto & ~Sattribute);
			  }
			  sp->node = (yyval.rec);
			  if ((yyvsp[(1) - (2)].sto) & Sextern)
				transient = 0;
			;}
    break;

  case 90:
#line 719 "soapcpp2_yacc.y"
    { if ((yyvsp[(1) - (2)].typ)->type == Tint)
				switch ((yyvsp[(2) - (2)].rec).typ->type)
				{ case Tchar:	(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ; break;
				  case Tshort:	(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ; break;
				  case Tint:	(yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
				  case Tlong:	(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ; break;
				  case Tllong:	(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ; break;
				  default:	semwarn("illegal use of 'signed'");
						(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
				}
			  else if ((yyvsp[(1) - (2)].typ)->type == Tuint)
				switch ((yyvsp[(2) - (2)].rec).typ->type)
				{ case Tchar:	(yyval.rec).typ = mkuchar(); break;
				  case Tshort:	(yyval.rec).typ = mkushort(); break;
				  case Tint:	(yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
				  case Tlong:	(yyval.rec).typ = mkulong(); break;
				  case Tllong:	(yyval.rec).typ = mkullong(); break;
				  default:	semwarn("illegal use of 'unsigned'");
						(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
				}
			  else if ((yyvsp[(1) - (2)].typ)->type == Tlong)
				switch ((yyvsp[(2) - (2)].rec).typ->type)
				{ case Tint:	(yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
				  case Tlong:	(yyval.rec).typ = mkllong(); break;
				  case Tuint:	(yyval.rec).typ = mkulong(); break;
				  case Tulong:	(yyval.rec).typ = mkullong(); break;
				  case Tdouble:	(yyval.rec).typ = mkldouble(); break;
				  default:	semwarn("illegal use of 'long'");
						(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
				}
			  else if ((yyvsp[(1) - (2)].typ)->type == Tulong)
				switch ((yyvsp[(2) - (2)].rec).typ->type)
				{ case Tint:	(yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
				  case Tlong:	(yyval.rec).typ = mkullong(); break;
				  case Tuint:	(yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
				  case Tulong:	(yyval.rec).typ = mkullong(); break;
				  default:	semwarn("illegal use of 'long'");
						(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
				}
			  else if ((yyvsp[(2) - (2)].rec).typ->type == Tint)
				(yyval.rec).typ = (yyvsp[(1) - (2)].typ);
			  else
			  	semwarn("invalid type (missing ';' or type name used as non-type identifier?)");
			  (yyval.rec).sto = (yyvsp[(2) - (2)].rec).sto;
			  sp->node = (yyval.rec);
			;}
    break;

  case 91:
#line 766 "soapcpp2_yacc.y"
    { (yyval.rec).typ = mkint();
			  (yyval.rec).sto = (yyvsp[(1) - (1)].sto);
			  sp->node = (yyval.rec);
			  if ((yyvsp[(1) - (1)].sto) & Sextern)
				transient = 0;
			;}
    break;

  case 92:
#line 772 "soapcpp2_yacc.y"
    { (yyval.rec).typ = (yyvsp[(1) - (1)].typ);
			  (yyval.rec).sto = Snone;
			  sp->node = (yyval.rec);
			;}
    break;

  case 93:
#line 776 "soapcpp2_yacc.y"
    { (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
			  (yyval.rec).sto = (Storage)((int)(yyvsp[(1) - (2)].sto) | (int)(yyvsp[(2) - (2)].rec).sto);
			  if (((yyval.rec).sto & Sattribute) && !is_primitive_or_string((yyvsp[(2) - (2)].rec).typ) && !is_stdstr((yyvsp[(2) - (2)].rec).typ) && !is_binary((yyvsp[(2) - (2)].rec).typ) && !is_external((yyvsp[(2) - (2)].rec).typ))
			  {	semwarn("invalid attribute type");
			  	(yyval.rec).sto = (Storage)((int)(yyval.rec).sto & ~Sattribute);
			  }
			  sp->node = (yyval.rec);
			  if ((yyvsp[(1) - (2)].sto) & Sextern)
				transient = 0;
			;}
    break;

  case 94:
#line 786 "soapcpp2_yacc.y"
    { if ((yyvsp[(1) - (2)].typ)->type == Tint)
				switch ((yyvsp[(2) - (2)].rec).typ->type)
				{ case Tchar:	(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ; break;
				  case Tshort:	(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ; break;
				  case Tint:	(yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
				  case Tlong:	(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ; break;
				  case Tllong:	(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ; break;
				  default:	semwarn("illegal use of 'signed'");
						(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
				}
			  else if ((yyvsp[(1) - (2)].typ)->type == Tuint)
				switch ((yyvsp[(2) - (2)].rec).typ->type)
				{ case Tchar:	(yyval.rec).typ = mkuchar(); break;
				  case Tshort:	(yyval.rec).typ = mkushort(); break;
				  case Tint:	(yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
				  case Tlong:	(yyval.rec).typ = mkulong(); break;
				  case Tllong:	(yyval.rec).typ = mkullong(); break;
				  default:	semwarn("illegal use of 'unsigned'");
						(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
				}
			  else if ((yyvsp[(1) - (2)].typ)->type == Tlong)
				switch ((yyvsp[(2) - (2)].rec).typ->type)
				{ case Tint:	(yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
				  case Tlong:	(yyval.rec).typ = mkllong(); break;
				  case Tuint:	(yyval.rec).typ = mkulong(); break;
				  case Tulong:	(yyval.rec).typ = mkullong(); break;
				  case Tdouble:	(yyval.rec).typ = mkldouble(); break;
				  default:	semwarn("illegal use of 'long'");
						(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
				}
			  else if ((yyvsp[(1) - (2)].typ)->type == Tulong)
				switch ((yyvsp[(2) - (2)].rec).typ->type)
				{ case Tint:	(yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
				  case Tlong:	(yyval.rec).typ = mkullong(); break;
				  case Tuint:	(yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
				  case Tulong:	(yyval.rec).typ = mkullong(); break;
				  default:	semwarn("illegal use of 'long'");
						(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
				}
			  else if ((yyvsp[(2) - (2)].rec).typ->type == Tint)
				(yyval.rec).typ = (yyvsp[(1) - (2)].typ);
			  else
			  	semwarn("invalid type");
			  (yyval.rec).sto = (yyvsp[(2) - (2)].rec).sto;
			  sp->node = (yyval.rec);
			;}
    break;

  case 95:
#line 833 "soapcpp2_yacc.y"
    { (yyval.typ) = mkvoid(); ;}
    break;

  case 96:
#line 834 "soapcpp2_yacc.y"
    { (yyval.typ) = mkbool(); ;}
    break;

  case 97:
#line 835 "soapcpp2_yacc.y"
    { (yyval.typ) = mkchar(); ;}
    break;

  case 98:
#line 836 "soapcpp2_yacc.y"
    { (yyval.typ) = mkwchart(); ;}
    break;

  case 99:
#line 837 "soapcpp2_yacc.y"
    { (yyval.typ) = mkshort(); ;}
    break;

  case 100:
#line 838 "soapcpp2_yacc.y"
    { (yyval.typ) = mkint(); ;}
    break;

  case 101:
#line 839 "soapcpp2_yacc.y"
    { (yyval.typ) = mklong(); ;}
    break;

  case 102:
#line 840 "soapcpp2_yacc.y"
    { (yyval.typ) = mkllong(); ;}
    break;

  case 103:
#line 841 "soapcpp2_yacc.y"
    { (yyval.typ) = mkullong(); ;}
    break;

  case 104:
#line 842 "soapcpp2_yacc.y"
    { (yyval.typ) = mkulong(); ;}
    break;

  case 105:
#line 843 "soapcpp2_yacc.y"
    { (yyval.typ) = mkfloat(); ;}
    break;

  case 106:
#line 844 "soapcpp2_yacc.y"
    { (yyval.typ) = mkdouble(); ;}
    break;

  case 107:
#line 845 "soapcpp2_yacc.y"
    { (yyval.typ) = mkint(); ;}
    break;

  case 108:
#line 846 "soapcpp2_yacc.y"
    { (yyval.typ) = mkuint(); ;}
    break;

  case 109:
#line 847 "soapcpp2_yacc.y"
    { (yyval.typ) = mkuchar(); ;}
    break;

  case 110:
#line 848 "soapcpp2_yacc.y"
    { (yyval.typ) = mkushort(); ;}
    break;

  case 111:
#line 849 "soapcpp2_yacc.y"
    { (yyval.typ) = mkuint(); ;}
    break;

  case 112:
#line 850 "soapcpp2_yacc.y"
    { (yyval.typ) = mkulong(); ;}
    break;

  case 113:
#line 851 "soapcpp2_yacc.y"
    { (yyval.typ) = mktimet(); ;}
    break;

  case 114:
#line 853 "soapcpp2_yacc.y"
    { if (!(p = entry(templatetable, (yyvsp[(7) - (7)].sym))))
			  {	p = enter(templatetable, (yyvsp[(7) - (7)].sym));
			  	p->info.typ = mktemplate(NULL, (yyvsp[(7) - (7)].sym));
			  	(yyvsp[(7) - (7)].sym)->token = TYPE;
			  }
			  (yyval.typ) = p->info.typ;
			;}
    break;

  case 115:
#line 861 "soapcpp2_yacc.y"
    { sym = gensym("_Struct");
			  sprintf(errbuf, "anonymous class will be named '%s'", sym->name);
			  semwarn(errbuf);
			  if ((p = entry(classtable, sym)))
			  {	if (p->info.typ->ref || p->info.typ->type != Tclass)
				{	sprintf(errbuf, "class '%s' already declared at line %d", sym->name, p->lineno);
					semerror(errbuf);
				}
			  }
			  else
			  {	p = enter(classtable, sym);
				p->info.typ = mkclass((Table*)0, 0);
			  }
			  sym->token = TYPE;
			  sp->table->sym = sym;
			  p->info.typ->ref = sp->table;
			  p->info.typ->width = sp->offset;
			  p->info.typ->id = sym;
			  (yyval.typ) = p->info.typ;
			  exitscope();
			;}
    break;

  case 116:
#line 883 "soapcpp2_yacc.y"
    { p = reenter(classtable, (yyvsp[(1) - (5)].e)->sym);
			  sp->table->sym = p->sym;
			  p->info.typ->ref = sp->table;
			  p->info.typ->width = sp->offset;
			  p->info.typ->id = p->sym;
			  if (p->info.typ->base)
			  	sp->table->prev = (Table*)entry(classtable, p->info.typ->base)->info.typ->ref;
			  (yyval.typ) = p->info.typ;
			  exitscope();
			;}
    break;

  case 117:
#line 894 "soapcpp2_yacc.y"
    { p = reenter(classtable, (yyvsp[(1) - (7)].e)->sym);
			  sp->table->sym = p->sym;
			  if (!(yyvsp[(3) - (7)].e))
				semerror("invalid base class");
			  else
			  {	sp->table->prev = (Table*)(yyvsp[(3) - (7)].e)->info.typ->ref;
				if (!sp->table->prev && !(yyvsp[(3) - (7)].e)->info.typ->transient)
				{	sprintf(errbuf, "class '%s' has incomplete type", (yyvsp[(3) - (7)].e)->sym->name);
					semerror(errbuf);
				}
			  	p->info.typ->base = (yyvsp[(3) - (7)].e)->info.typ->id;
			  }
			  p->info.typ->ref = sp->table;
			  p->info.typ->width = sp->offset;
			  p->info.typ->id = p->sym;
			  (yyval.typ) = p->info.typ;
			  exitscope();
			;}
    break;

  case 118:
#line 912 "soapcpp2_yacc.y"
    { (yyvsp[(1) - (1)].e)->info.typ->id = (yyvsp[(1) - (1)].e)->sym;
			  (yyval.typ) = (yyvsp[(1) - (1)].e)->info.typ;
			;}
    break;

  case 119:
#line 916 "soapcpp2_yacc.y"
    { if (!(yyvsp[(3) - (3)].e))
				semerror("invalid base class");
			  else
			  {	if (!(yyvsp[(3) - (3)].e)->info.typ->ref && !(yyvsp[(3) - (3)].e)->info.typ->transient)
				{	sprintf(errbuf, "class '%s' has incomplete type", (yyvsp[(3) - (3)].e)->sym->name);
					semerror(errbuf);
				}
			  	(yyvsp[(1) - (3)].e)->info.typ->base = (yyvsp[(3) - (3)].e)->info.typ->id;
			  }
			  (yyvsp[(1) - (3)].e)->info.typ->id = (yyvsp[(1) - (3)].e)->sym;
			  (yyval.typ) = (yyvsp[(1) - (3)].e)->info.typ;
			;}
    break;

  case 120:
#line 929 "soapcpp2_yacc.y"
    { sym = gensym("_Struct");
			  sprintf(errbuf, "anonymous struct will be named '%s'", sym->name);
			  semwarn(errbuf);
			  if ((p = entry(classtable, sym)))
			  {	if (p->info.typ->ref || p->info.typ->type != Tstruct)
				{	sprintf(errbuf, "struct '%s' already declared at line %d", sym->name, p->lineno);
					semerror(errbuf);
				}
				else
				{	p->info.typ->ref = sp->table;
					p->info.typ->width = sp->offset;
				}
			  }
			  else
			  {	p = enter(classtable, sym);
				p->info.typ = mkstruct(sp->table, sp->offset);
			  }
			  p->info.typ->id = sym;
			  (yyval.typ) = p->info.typ;
			  exitscope();
			;}
    break;

  case 121:
#line 951 "soapcpp2_yacc.y"
    { if ((p = entry(classtable, (yyvsp[(1) - (5)].e)->sym)) && p->info.typ->ref)
			  {	if (is_mutable(p->info.typ))
			  	{	if (merge((Table*)p->info.typ->ref, sp->table))
					{	sprintf(errbuf, "member name clash in struct '%s' declared at line %d", (yyvsp[(1) - (5)].e)->sym->name, p->lineno);
						semerror(errbuf);
					}
			  		p->info.typ->width += sp->offset;
				}
			  }
			  else
			  {	p = reenter(classtable, (yyvsp[(1) - (5)].e)->sym);
			  	p->info.typ->ref = sp->table;
			  	p->info.typ->width = sp->offset;
			  	p->info.typ->id = p->sym;
			  }
			  (yyval.typ) = p->info.typ;
			  exitscope();
			;}
    break;

  case 122:
#line 969 "soapcpp2_yacc.y"
    { if ((p = entry(classtable, (yyvsp[(2) - (2)].sym))))
			  {	if (p->info.typ->type == Tstruct)
			  		(yyval.typ) = p->info.typ;
			  	else
				{	sprintf(errbuf, "'struct %s' redeclaration (line %d)", (yyvsp[(2) - (2)].sym)->name, p->lineno);
			  		semerror(errbuf);
			  		(yyval.typ) = mkint();
				}
			  }
			  else
			  {	p = enter(classtable, (yyvsp[(2) - (2)].sym));
			  	(yyval.typ) = p->info.typ = mkstruct((Table*)0, 0);
				p->info.typ->id = (yyvsp[(2) - (2)].sym);
			  }
			;}
    break;

  case 123:
#line 984 "soapcpp2_yacc.y"
    { if ((p = entry(classtable, (yyvsp[(2) - (2)].sym))))
			  {	if (p->info.typ->type == Tstruct)
					(yyval.typ) = p->info.typ;
			  	else
				{	sprintf(errbuf, "'struct %s' redeclaration (line %d)", (yyvsp[(2) - (2)].sym)->name, p->lineno);
			  		semerror(errbuf);
			  		(yyval.typ) = mkint();
				}
			  }
			  else
			  {	p = enter(classtable, (yyvsp[(2) - (2)].sym));
			  	(yyval.typ) = p->info.typ = mkstruct((Table*)0, 0);
				p->info.typ->id = (yyvsp[(2) - (2)].sym);
			  }
			;}
    break;

  case 124:
#line 1000 "soapcpp2_yacc.y"
    { sym = gensym("_Union");
			  sprintf(errbuf, "anonymous union will be named '%s'", sym->name);
			  semwarn(errbuf);
			  (yyval.typ) = mkunion(sp->table, sp->offset);
			  if ((p = entry(classtable, sym)))
			  {	if (p->info.typ->ref)
				{	sprintf(errbuf, "union or struct '%s' already declared at line %d", sym->name, p->lineno);
					semerror(errbuf);
				}
				else
				{	p->info.typ->ref = sp->table;
					p->info.typ->width = sp->offset;
				}
			  }
			  else
			  {	p = enter(classtable, sym);
				p->info.typ = mkunion(sp->table, sp->offset);
			  }
			  p->info.typ->id = sym;
			  (yyval.typ) = p->info.typ;
			  exitscope();
			;}
    break;

  case 125:
#line 1023 "soapcpp2_yacc.y"
    { if ((p = entry(classtable, (yyvsp[(2) - (6)].sym))))
			  {	if (p->info.typ->ref || p->info.typ->type != Tunion)
			  	{	sprintf(errbuf, "union '%s' already declared at line %d", (yyvsp[(2) - (6)].sym)->name, p->lineno);
					semerror(errbuf);
				}
				else
				{	p = reenter(classtable, (yyvsp[(2) - (6)].sym));
					p->info.typ->ref = sp->table;
					p->info.typ->width = sp->offset;
				}
			  }
			  else
			  {	p = enter(classtable, (yyvsp[(2) - (6)].sym));
				p->info.typ = mkunion(sp->table, sp->offset);
			  }
			  p->info.typ->id = (yyvsp[(2) - (6)].sym);
			  (yyval.typ) = p->info.typ;
			  exitscope();
			;}
    break;

  case 126:
#line 1042 "soapcpp2_yacc.y"
    { if ((p = entry(classtable, (yyvsp[(2) - (2)].sym))))
			  {	if (p->info.typ->type == Tunion)
					(yyval.typ) = p->info.typ;
			  	else
				{	sprintf(errbuf, "'union %s' redeclaration (line %d)", (yyvsp[(2) - (2)].sym)->name, p->lineno);
			  		semerror(errbuf);
			  		(yyval.typ) = mkint();
				}
			  }
			  else
			  {	p = enter(classtable, (yyvsp[(2) - (2)].sym));
			  	(yyval.typ) = p->info.typ = mkunion((Table*) 0, 0);
				p->info.typ->id = (yyvsp[(2) - (2)].sym);
			  }
			;}
    break;

  case 127:
#line 1057 "soapcpp2_yacc.y"
    { if ((p = entry(classtable, (yyvsp[(2) - (2)].sym))))
			  {	if (p->info.typ->type == Tunion)
					(yyval.typ) = p->info.typ;
			  	else
				{	sprintf(errbuf, "'union %s' redeclaration (line %d)", (yyvsp[(2) - (2)].sym)->name, p->lineno);
			  		semerror(errbuf);
			  		(yyval.typ) = mkint();
				}
			  }
			  else
			  {	p = enter(classtable, (yyvsp[(2) - (2)].sym));
			  	(yyval.typ) = p->info.typ = mkunion((Table*) 0, 0);
				p->info.typ->id = (yyvsp[(2) - (2)].sym);
			  }
			;}
    break;

  case 128:
#line 1073 "soapcpp2_yacc.y"
    { sym = gensym("_Enum");
			  sprintf(errbuf, "anonymous enum will be named '%s'", sym->name);
			  semwarn(errbuf);
			  if ((p = entry(enumtable, sym)))
			  {	if (p->info.typ->ref)
				{	sprintf(errbuf, "enum '%s' already declared at line %d", sym->name, p->lineno);
					semerror(errbuf);
				}
				else
				{	p->info.typ->ref = sp->table;
					p->info.typ->width = 4; /* 4 = enum */
				}
			  }
			  else
			  {	p = enter(enumtable, sym);
				p->info.typ = mkenum(sp->table);
			  }
			  p->info.typ->id = sym;
			  (yyval.typ) = p->info.typ;
			  exitscope();
			;}
    break;

  case 129:
#line 1095 "soapcpp2_yacc.y"
    { if ((p = entry(enumtable, (yyvsp[(1) - (6)].e)->sym)))
			  {	if (p->info.typ->ref)
				{	sprintf(errbuf, "enum '%s' already declared at line %d", (yyvsp[(1) - (6)].e)->sym->name, p->lineno);
					semerror(errbuf);
				}
				else
				{	p->info.typ->ref = sp->table;
					p->info.typ->width = 4; /* 4 = enum */
				}
			  }
			  else
			  {	p = enter(enumtable, (yyvsp[(1) - (6)].e)->sym);
				p->info.typ = mkenum(sp->table);
			  }
			  p->info.typ->id = (yyvsp[(1) - (6)].e)->sym;
			  (yyval.typ) = p->info.typ;
			  exitscope();
			;}
    break;

  case 130:
#line 1114 "soapcpp2_yacc.y"
    { if ((p = entry(enumtable, (yyvsp[(3) - (8)].sym))))
			  {	if (p->info.typ->ref)
				{	sprintf(errbuf, "enum '%s' already declared at line %d", (yyvsp[(3) - (8)].sym)->name, p->lineno);
					semerror(errbuf);
				}
				else
				{	p->info.typ->ref = sp->table;
					p->info.typ->width = 8; /* 8 = mask */
				}
			  }
			  else
			  {	p = enter(enumtable, (yyvsp[(3) - (8)].sym));
				p->info.typ = mkmask(sp->table);
			  }
			  p->info.typ->id = (yyvsp[(3) - (8)].sym);
			  (yyval.typ) = p->info.typ;
			  exitscope();
			;}
    break;

  case 131:
#line 1132 "soapcpp2_yacc.y"
    { if ((p = entry(enumtable, (yyvsp[(2) - (2)].sym))))
			  	(yyval.typ) = p->info.typ;
			  else
			  {	p = enter(enumtable, (yyvsp[(2) - (2)].sym));
			  	(yyval.typ) = p->info.typ = mkenum((Table*)0);
				p->info.typ->id = (yyvsp[(2) - (2)].sym);
			  }
			;}
    break;

  case 132:
#line 1140 "soapcpp2_yacc.y"
    { if ((p = entry(enumtable, (yyvsp[(2) - (2)].sym))))
				(yyval.typ) = p->info.typ;
			  else
			  {	p = enter(enumtable, (yyvsp[(2) - (2)].sym));
			  	(yyval.typ) = p->info.typ = mkenum((Table*)0);
				p->info.typ->id = (yyvsp[(2) - (2)].sym);
			  }
			;}
    break;

  case 133:
#line 1148 "soapcpp2_yacc.y"
    { if ((p = entry(typetable, (yyvsp[(1) - (1)].sym))))
			  	(yyval.typ) = p->info.typ;
			  else if ((p = entry(classtable, (yyvsp[(1) - (1)].sym))))
			  	(yyval.typ) = p->info.typ;
			  else if ((p = entry(enumtable, (yyvsp[(1) - (1)].sym))))
			  	(yyval.typ) = p->info.typ;
			  else if ((yyvsp[(1) - (1)].sym) == lookup("std::string") || (yyvsp[(1) - (1)].sym) == lookup("std::wstring"))
			  {	p = enter(classtable, (yyvsp[(1) - (1)].sym));
				(yyval.typ) = p->info.typ = mkclass((Table*)0, 0);
			  	p->info.typ->id = (yyvsp[(1) - (1)].sym);
				if (cflag)
			  		p->info.typ->transient = 1;	/* make std::string transient in C */
				else
			  		p->info.typ->transient = -2;
			  }
			  else
			  {	sprintf(errbuf, "unknown type '%s'", (yyvsp[(1) - (1)].sym)->name);
				semerror(errbuf);
				(yyval.typ) = mkint();
			  }
			;}
    break;

  case 134:
#line 1170 "soapcpp2_yacc.y"
    { if ((p = entry(templatetable, (yyvsp[(1) - (4)].sym))))
			  {	(yyval.typ) = mktemplate((yyvsp[(3) - (4)].rec).typ, (yyvsp[(1) - (4)].sym));
			  	if (has_attachment((yyvsp[(3) - (4)].rec).typ))
				{	sprintf(errbuf, "template type '%s<%s>' of attachment objects may lead to deserialization failures, use '%s<*%s>' instead", (yyvsp[(1) - (4)].sym)->name, (yyvsp[(3) - (4)].rec).typ->id ? (yyvsp[(3) - (4)].rec).typ->id->name : "", (yyvsp[(1) - (4)].sym)->name, (yyvsp[(3) - (4)].rec).typ->id ? (yyvsp[(3) - (4)].rec).typ->id->name : "");
					semwarn(errbuf);
				}
			  }
			  else
			  {	sprintf(errbuf, "invalid template '%s'", (yyvsp[(1) - (4)].sym)->name);
				semerror(errbuf);
				(yyval.typ) = mkint();
			  }
			;}
    break;

  case 135:
#line 1184 "soapcpp2_yacc.y"
    { synerror("malformed class definition (use spacing around ':' to separate derived : base)");
			  yyerrok;
			  (yyval.typ) = mkint();
			;}
    break;

  case 136:
#line 1189 "soapcpp2_yacc.y"
    { synerror("malformed struct definition");
			  yyerrok;
			  (yyval.typ) = mkint();
			;}
    break;

  case 137:
#line 1194 "soapcpp2_yacc.y"
    { synerror("malformed union definition");
			  yyerrok;
			  (yyval.typ) = mkint();
			;}
    break;

  case 138:
#line 1199 "soapcpp2_yacc.y"
    { synerror("malformed enum definition");
			  yyerrok;
			  (yyval.typ) = mkint();
			;}
    break;

  case 139:
#line 1204 "soapcpp2_yacc.y"
    { if ((p = entry(classtable, (yyvsp[(2) - (2)].sym))))
			  {	if (p->info.typ->ref)
			   	{	if (!is_mutable(p->info.typ))
					{	sprintf(errbuf, "struct '%s' already declared at line %d", (yyvsp[(2) - (2)].sym)->name, p->lineno);
						semerror(errbuf);
					}
				}
				else
					p = reenter(classtable, (yyvsp[(2) - (2)].sym));
			  }
			  else
			  {	p = enter(classtable, (yyvsp[(2) - (2)].sym));
				p->info.typ = mkstruct((Table*)0, 0);
			  }
			  (yyval.e) = p;
			;}
    break;

  case 140:
#line 1221 "soapcpp2_yacc.y"
    { if ((p = entry(classtable, (yyvsp[(2) - (2)].sym))))
			  {	if (p->info.typ->ref)
			   	{	if (!is_mutable(p->info.typ))
					{	sprintf(errbuf, "class '%s' already declared at line %d (redundant 'class' specifier here?)", (yyvsp[(2) - (2)].sym)->name, p->lineno);
						semerror(errbuf);
					}
				}
				else
					p = reenter(classtable, (yyvsp[(2) - (2)].sym));
			  }
			  else
			  {	p = enter(classtable, (yyvsp[(2) - (2)].sym));
				p->info.typ = mkclass((Table*)0, 0);
				p->info.typ->id = p->sym;
			  }
			  (yyvsp[(2) - (2)].sym)->token = TYPE;
			  (yyval.e) = p;
			;}
    break;

  case 141:
#line 1240 "soapcpp2_yacc.y"
    { if ((p = entry(enumtable, (yyvsp[(2) - (2)].sym))))
			  {	if (p->info.typ->ref)
				{	sprintf(errbuf, "enum '%s' already declared at line %d", (yyvsp[(2) - (2)].sym)->name, p->lineno);
					semerror(errbuf);
				}
				/*
				else
					p = reenter(classtable, $2);
			  	*/
			  }
			  else
			  {	p = enter(enumtable, (yyvsp[(2) - (2)].sym));
				p->info.typ = mkenum(0);
			  }
			  (yyval.e) = p;
			;}
    break;

  case 142:
#line 1257 "soapcpp2_yacc.y"
    { ;}
    break;

  case 143:
#line 1258 "soapcpp2_yacc.y"
    { ;}
    break;

  case 144:
#line 1260 "soapcpp2_yacc.y"
    { (yyval.e) = (yyvsp[(2) - (2)].e); ;}
    break;

  case 145:
#line 1261 "soapcpp2_yacc.y"
    { (yyval.e) = (yyvsp[(2) - (2)].e); ;}
    break;

  case 146:
#line 1262 "soapcpp2_yacc.y"
    { (yyval.e) = (yyvsp[(2) - (2)].e); ;}
    break;

  case 147:
#line 1263 "soapcpp2_yacc.y"
    { (yyval.e) = entry(classtable, (yyvsp[(1) - (1)].sym));
			  if (!(yyval.e))
			  {	p = entry(typetable, (yyvsp[(1) - (1)].sym));
			  	if (p && (p->info.typ->type == Tclass || p->info.typ->type == Tstruct))
					(yyval.e) = p;
			  }
			;}
    break;

  case 148:
#line 1270 "soapcpp2_yacc.y"
    { (yyval.e) = entry(classtable, (yyvsp[(2) - (2)].sym)); ;}
    break;

  case 149:
#line 1272 "soapcpp2_yacc.y"
    { if (transient == -2)
			  	transient = 0;
			  permission = 0;
			  enterscope(mktable(NULL), 0);
			  sp->entry = NULL;
			;}
    break;

  case 150:
#line 1279 "soapcpp2_yacc.y"
    { if (transient == -2)
			  	transient = 0;
			  permission = 0;
			  enterscope(mktable(NULL), 0);
			  sp->entry = NULL;
			  sp->grow = False;
			;}
    break;

  case 151:
#line 1287 "soapcpp2_yacc.y"
    { enterscope(mktable(NULL), 0);
			  sp->entry = NULL;
			  sp->mask = True;
			  sp->val = 1;
			;}
    break;

  case 152:
#line 1293 "soapcpp2_yacc.y"
    { ;}
    break;

  case 153:
#line 1294 "soapcpp2_yacc.y"
    { ;}
    break;

  case 154:
#line 1296 "soapcpp2_yacc.y"
    { if (sp->table->level == INTERNAL)
			  	transient |= 1;
			  permission = 0;
			  enterscope(mktable(NULL), 0);
			  sp->entry = NULL;
			  sp->table->level = PARAM;
			;}
    break;

  case 155:
#line 1304 "soapcpp2_yacc.y"
    { (yyval.sto) = Sauto; ;}
    break;

  case 156:
#line 1305 "soapcpp2_yacc.y"
    { (yyval.sto) = Sregister; ;}
    break;

  case 157:
#line 1306 "soapcpp2_yacc.y"
    { (yyval.sto) = Sstatic; ;}
    break;

  case 158:
#line 1307 "soapcpp2_yacc.y"
    { (yyval.sto) = Sexplicit; ;}
    break;

  case 159:
#line 1308 "soapcpp2_yacc.y"
    { (yyval.sto) = Sextern; transient = 1; ;}
    break;

  case 160:
#line 1309 "soapcpp2_yacc.y"
    { (yyval.sto) = Stypedef; ;}
    break;

  case 161:
#line 1310 "soapcpp2_yacc.y"
    { (yyval.sto) = Svirtual; ;}
    break;

  case 162:
#line 1311 "soapcpp2_yacc.y"
    { (yyval.sto) = Sconst; ;}
    break;

  case 163:
#line 1312 "soapcpp2_yacc.y"
    { (yyval.sto) = Sfriend; ;}
    break;

  case 164:
#line 1313 "soapcpp2_yacc.y"
    { (yyval.sto) = Sinline; ;}
    break;

  case 165:
#line 1314 "soapcpp2_yacc.y"
    { (yyval.sto) = SmustUnderstand; ;}
    break;

  case 166:
#line 1315 "soapcpp2_yacc.y"
    { (yyval.sto) = Sreturn; ;}
    break;

  case 167:
#line 1316 "soapcpp2_yacc.y"
    { (yyval.sto) = Sattribute;
			  if (eflag)
			   	semwarn("SOAP RPC encoding does not support XML attributes");
			;}
    break;

  case 168:
#line 1320 "soapcpp2_yacc.y"
    { (yyval.sto) = Sspecial; ;}
    break;

  case 169:
#line 1321 "soapcpp2_yacc.y"
    { (yyval.sto) = Sextern; transient = -2; ;}
    break;

  case 170:
#line 1323 "soapcpp2_yacc.y"
    { (yyval.sto) = Snone; ;}
    break;

  case 171:
#line 1324 "soapcpp2_yacc.y"
    { (yyval.sto) = Sconstobj; ;}
    break;

  case 172:
#line 1326 "soapcpp2_yacc.y"
    { (yyval.sto) = Snone; ;}
    break;

  case 173:
#line 1327 "soapcpp2_yacc.y"
    { (yyval.sto) = Sabstract; ;}
    break;

  case 174:
#line 1329 "soapcpp2_yacc.y"
    { (yyval.sto) = Snone; ;}
    break;

  case 175:
#line 1330 "soapcpp2_yacc.y"
    { (yyval.sto) = Svirtual; ;}
    break;

  case 176:
#line 1332 "soapcpp2_yacc.y"
    { (yyval.rec) = tmp = sp->node; ;}
    break;

  case 177:
#line 1333 "soapcpp2_yacc.y"
    { /* handle const pointers, such as const char* */
			  if ((tmp.sto & Sconst))
			  	tmp.sto = (Storage)(((int)tmp.sto & ~Sconst) | Sconstptr);
			  tmp.typ = mkpointer(tmp.typ);
			  tmp.typ->transient = transient;
			  (yyval.rec) = tmp;
			;}
    break;

  case 178:
#line 1340 "soapcpp2_yacc.y"
    { tmp.typ = mkreference(tmp.typ);
			  tmp.typ->transient = transient;
			  (yyval.rec) = tmp;
			;}
    break;

  case 179:
#line 1345 "soapcpp2_yacc.y"
    { (yyval.rec) = tmp;	/* tmp is inherited */
			;}
    break;

  case 180:
#line 1348 "soapcpp2_yacc.y"
    { if (!bflag && (yyvsp[(4) - (4)].rec).typ->type == Tchar)
			  {	sprintf(errbuf, "char[" SOAP_LONG_FORMAT "] will be serialized as an array of " SOAP_LONG_FORMAT " bytes: use soapcpp2 option -b to enable char[] string serialization or use char* for strings", (yyvsp[(2) - (4)].rec).val.i, (yyvsp[(2) - (4)].rec).val.i);
			  	semwarn(errbuf);
			  }
			  if ((yyvsp[(2) - (4)].rec).hasval && (yyvsp[(2) - (4)].rec).typ->type == Tint && (yyvsp[(2) - (4)].rec).val.i > 0 && (yyvsp[(4) - (4)].rec).typ->width > 0)
				(yyval.rec).typ = mkarray((yyvsp[(4) - (4)].rec).typ, (int) (yyvsp[(2) - (4)].rec).val.i * (yyvsp[(4) - (4)].rec).typ->width);
			  else
			  {	(yyval.rec).typ = mkarray((yyvsp[(4) - (4)].rec).typ, 0);
			  	semerror("undetermined array size");
			  }
			  (yyval.rec).sto = (yyvsp[(4) - (4)].rec).sto;
			;}
    break;

  case 181:
#line 1360 "soapcpp2_yacc.y"
    { (yyval.rec).typ = mkpointer((yyvsp[(3) - (3)].rec).typ); /* zero size array = pointer */
			  (yyval.rec).sto = (yyvsp[(3) - (3)].rec).sto;
			;}
    break;

  case 182:
#line 1364 "soapcpp2_yacc.y"
    { if ((yyvsp[(1) - (1)].rec).typ->type == Tstruct || (yyvsp[(1) - (1)].rec).typ->type == Tclass)
				if (!(yyvsp[(1) - (1)].rec).typ->ref && !(yyvsp[(1) - (1)].rec).typ->transient && !((yyvsp[(1) - (1)].rec).sto & Stypedef))
			   	{	sprintf(errbuf, "struct/class '%s' has incomplete type", (yyvsp[(1) - (1)].rec).typ->id->name);
					semerror(errbuf);
				}
			  (yyval.rec) = (yyvsp[(1) - (1)].rec);
			;}
    break;

  case 183:
#line 1372 "soapcpp2_yacc.y"
    { (yyval.rec).hasval = False; ;}
    break;

  case 184:
#line 1373 "soapcpp2_yacc.y"
    { if ((yyvsp[(2) - (2)].rec).hasval)
			  {	(yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
				(yyval.rec).hasval = True;
				(yyval.rec).val = (yyvsp[(2) - (2)].rec).val;
			  }
			  else
			  {	(yyval.rec).hasval = False;
				semerror("initialization expression not constant");
			  }
			;}
    break;

  case 185:
#line 1384 "soapcpp2_yacc.y"
    { (yyval.s) = NULL; ;}
    break;

  case 186:
#line 1385 "soapcpp2_yacc.y"
    { (yyval.s) = (yyvsp[(1) - (1)].s); ;}
    break;

  case 187:
#line 1388 "soapcpp2_yacc.y"
    { (yyval.rec).minOccurs = -1;
			  (yyval.rec).maxOccurs = 1;
			  (yyval.rec).minLength = MINLONG64;
			  (yyval.rec).maxLength = MAXLONG64;
			  (yyval.rec).pattern = (yyvsp[(1) - (1)].s);
			;}
    break;

  case 188:
#line 1395 "soapcpp2_yacc.y"
    { (yyval.rec).minOccurs = (LONG64)(yyvsp[(2) - (2)].i);
			  (yyval.rec).maxOccurs = 1;
			  (yyval.rec).minLength = (LONG64)(yyvsp[(2) - (2)].i);
			  (yyval.rec).maxLength = MAXLONG64;
			  (yyval.rec).pattern = (yyvsp[(1) - (2)].s);
			;}
    break;

  case 189:
#line 1402 "soapcpp2_yacc.y"
    { (yyval.rec).minOccurs = (LONG64)(yyvsp[(2) - (3)].i);
			  (yyval.rec).maxOccurs = 1;
			  (yyval.rec).minLength = (LONG64)(yyvsp[(2) - (3)].i);
			  (yyval.rec).maxLength = MAXLONG64;
			  (yyval.rec).pattern = (yyvsp[(1) - (3)].s);
			;}
    break;

  case 190:
#line 1409 "soapcpp2_yacc.y"
    { (yyval.rec).minOccurs = (LONG64)(yyvsp[(2) - (4)].i);
			  (yyval.rec).maxOccurs = (LONG64)(yyvsp[(4) - (4)].i);
			  (yyval.rec).minLength = (LONG64)(yyvsp[(2) - (4)].i);
			  (yyval.rec).maxLength = (LONG64)(yyvsp[(4) - (4)].i);
			  (yyval.rec).pattern = (yyvsp[(1) - (4)].s);
			;}
    break;

  case 191:
#line 1416 "soapcpp2_yacc.y"
    { (yyval.rec).minOccurs = -1;
			  (yyval.rec).maxOccurs = (LONG64)(yyvsp[(3) - (3)].i);
			  (yyval.rec).minLength = MINLONG64;
			  (yyval.rec).maxLength = (LONG64)(yyvsp[(3) - (3)].i);
			  (yyval.rec).pattern = (yyvsp[(1) - (3)].s);
			;}
    break;

  case 192:
#line 1423 "soapcpp2_yacc.y"
    { (yyval.s) = NULL; ;}
    break;

  case 193:
#line 1424 "soapcpp2_yacc.y"
    { (yyval.s) = (yyvsp[(1) - (1)].s); ;}
    break;

  case 194:
#line 1426 "soapcpp2_yacc.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 195:
#line 1427 "soapcpp2_yacc.y"
    { (yyval.i) = (yyvsp[(2) - (2)].i); ;}
    break;

  case 196:
#line 1428 "soapcpp2_yacc.y"
    { (yyval.i) = -(yyvsp[(2) - (2)].i); ;}
    break;

  case 197:
#line 1437 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(3) - (3)].rec); ;}
    break;

  case 198:
#line 1438 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 199:
#line 1442 "soapcpp2_yacc.y"
    { (yyval.rec).typ = (yyvsp[(3) - (5)].rec).typ;
			  (yyval.rec).sto = Snone;
			  (yyval.rec).hasval = False;
			;}
    break;

  case 201:
#line 1449 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 202:
#line 1452 "soapcpp2_yacc.y"
    { (yyval.rec).hasval = False;
			  (yyval.rec).typ = mkint();
			;}
    break;

  case 203:
#line 1455 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 204:
#line 1457 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 205:
#line 1460 "soapcpp2_yacc.y"
    { (yyval.rec).hasval = False;
			  (yyval.rec).typ = mkint();
			;}
    break;

  case 206:
#line 1463 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 207:
#line 1465 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 208:
#line 1468 "soapcpp2_yacc.y"
    { (yyval.rec) = iop("|", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 209:
#line 1469 "soapcpp2_yacc.y"
    { (yyval.rec) = iop("^", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 210:
#line 1470 "soapcpp2_yacc.y"
    { (yyval.rec) = iop("&", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 211:
#line 1471 "soapcpp2_yacc.y"
    { (yyval.rec) = relop("==", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 212:
#line 1472 "soapcpp2_yacc.y"
    { (yyval.rec) = relop("!=", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 213:
#line 1473 "soapcpp2_yacc.y"
    { (yyval.rec) = relop("<", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 214:
#line 1474 "soapcpp2_yacc.y"
    { (yyval.rec) = relop("<=", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 215:
#line 1475 "soapcpp2_yacc.y"
    { (yyval.rec) = relop(">", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 216:
#line 1476 "soapcpp2_yacc.y"
    { (yyval.rec) = relop(">=", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 217:
#line 1477 "soapcpp2_yacc.y"
    { (yyval.rec) = iop("<<", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 218:
#line 1478 "soapcpp2_yacc.y"
    { (yyval.rec) = iop(">>", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 219:
#line 1479 "soapcpp2_yacc.y"
    { (yyval.rec) = op("+", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 220:
#line 1480 "soapcpp2_yacc.y"
    { (yyval.rec) = op("-", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 221:
#line 1481 "soapcpp2_yacc.y"
    { (yyval.rec) = op("*", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 222:
#line 1482 "soapcpp2_yacc.y"
    { (yyval.rec) = op("/", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 223:
#line 1483 "soapcpp2_yacc.y"
    { (yyval.rec) = iop("%", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 224:
#line 1484 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 225:
#line 1487 "soapcpp2_yacc.y"
    { if ((yyvsp[(2) - (2)].rec).hasval)
				(yyval.rec).val.i = !(yyvsp[(2) - (2)].rec).val.i;
			  (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
			  (yyval.rec).hasval = (yyvsp[(2) - (2)].rec).hasval;
			;}
    break;

  case 226:
#line 1492 "soapcpp2_yacc.y"
    { if ((yyvsp[(2) - (2)].rec).hasval)
				(yyval.rec).val.i = ~(yyvsp[(2) - (2)].rec).val.i;
			  (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
			  (yyval.rec).hasval = (yyvsp[(2) - (2)].rec).hasval;
			;}
    break;

  case 227:
#line 1497 "soapcpp2_yacc.y"
    { if ((yyvsp[(2) - (2)].rec).hasval) {
				if (integer((yyvsp[(2) - (2)].rec).typ))
					(yyval.rec).val.i = -(yyvsp[(2) - (2)].rec).val.i;
				else if (real((yyvsp[(2) - (2)].rec).typ))
					(yyval.rec).val.r = -(yyvsp[(2) - (2)].rec).val.r;
				else	typerror("string?");
			  }
			  (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
			  (yyval.rec).hasval = (yyvsp[(2) - (2)].rec).hasval;
			;}
    break;

  case 228:
#line 1507 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(2) - (2)].rec); ;}
    break;

  case 229:
#line 1508 "soapcpp2_yacc.y"
    { if ((yyvsp[(2) - (2)].rec).typ->type == Tpointer) {
			  	(yyval.rec).typ = (Tnode*)(yyvsp[(2) - (2)].rec).typ->ref;
			  } else
			  	typerror("dereference of non-pointer type");
			  (yyval.rec).sto = Snone;
			  (yyval.rec).hasval = False;
			;}
    break;

  case 230:
#line 1515 "soapcpp2_yacc.y"
    { (yyval.rec).typ = mkpointer((yyvsp[(2) - (2)].rec).typ);
			  (yyval.rec).sto = Snone;
			  (yyval.rec).hasval = False;
			;}
    break;

  case 231:
#line 1520 "soapcpp2_yacc.y"
    { (yyval.rec).hasval = True;
			  (yyval.rec).typ = mkint();
			  (yyval.rec).val.i = (yyvsp[(3) - (4)].rec).typ->width;
			;}
    break;

  case 232:
#line 1524 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 233:
#line 1527 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(2) - (3)].rec); ;}
    break;

  case 234:
#line 1528 "soapcpp2_yacc.y"
    { if ((p = enumentry((yyvsp[(1) - (1)].sym))) == (Entry*) 0)
				p = undefined((yyvsp[(1) - (1)].sym));
			  else
			  	(yyval.rec).hasval = True;
			  (yyval.rec).typ = p->info.typ;
			  (yyval.rec).val = p->info.val;
			;}
    break;

  case 235:
#line 1535 "soapcpp2_yacc.y"
    { (yyval.rec).typ = mkint();
			  (yyval.rec).hasval = True;
			  (yyval.rec).val.i = (yyvsp[(1) - (1)].i);
			;}
    break;

  case 236:
#line 1539 "soapcpp2_yacc.y"
    { (yyval.rec).typ = mkint();
			  (yyval.rec).hasval = True;
			  (yyval.rec).val.i = 0;
			;}
    break;

  case 237:
#line 1543 "soapcpp2_yacc.y"
    { (yyval.rec).typ = mkfloat();
			  (yyval.rec).hasval = True;
			  (yyval.rec).val.r = (yyvsp[(1) - (1)].r);
			;}
    break;

  case 238:
#line 1547 "soapcpp2_yacc.y"
    { (yyval.rec).typ = mkchar();
			  (yyval.rec).hasval = True;
			  (yyval.rec).val.i = (yyvsp[(1) - (1)].c);
			;}
    break;

  case 239:
#line 1551 "soapcpp2_yacc.y"
    { (yyval.rec).typ = mkstring();
			  (yyval.rec).hasval = True;
			  (yyval.rec).val.s = (yyvsp[(1) - (1)].s);
			;}
    break;

  case 240:
#line 1555 "soapcpp2_yacc.y"
    { (yyval.rec).typ = mkbool();
			  (yyval.rec).hasval = True;
			  (yyval.rec).val.i = 0;
			;}
    break;

  case 241:
#line 1559 "soapcpp2_yacc.y"
    { (yyval.rec).typ = mkbool();
			  (yyval.rec).hasval = True;
			  (yyval.rec).val.i = 1;
			;}
    break;


/* Line 1267 of yacc.c.  */
#line 4295 "soapcpp2_yacc.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1565 "soapcpp2_yacc.y"


/*
 * ???
 */
int
yywrap(void)
{	return 1;
}

/******************************************************************************\

	Support routines

\******************************************************************************/

static Node
op(const char *op, Node p, Node q)
{	Node	r;
	Tnode	*typ;
	r.typ = p.typ;
	r.sto = Snone;
	if (p.hasval && q.hasval) {
		if (integer(p.typ) && integer(q.typ))
			switch (op[0]) {
			case '|':	r.val.i = p.val.i |  q.val.i; break;
			case '^':	r.val.i = p.val.i ^  q.val.i; break;
			case '&':	r.val.i = p.val.i &  q.val.i; break;
			case '<':	r.val.i = p.val.i << q.val.i; break;
			case '>':	r.val.i = p.val.i >> q.val.i; break;
			case '+':	r.val.i = p.val.i +  q.val.i; break;
			case '-':	r.val.i = p.val.i -  q.val.i; break;
			case '*':	r.val.i = p.val.i *  q.val.i; break;
			case '/':	r.val.i = p.val.i /  q.val.i; break;
			case '%':	r.val.i = p.val.i %  q.val.i; break;
			default:	typerror(op);
			}
		else if (real(p.typ) && real(q.typ))
			switch (op[0]) {
			case '+':	r.val.r = p.val.r + q.val.r; break;
			case '-':	r.val.r = p.val.r - q.val.r; break;
			case '*':	r.val.r = p.val.r * q.val.r; break;
			case '/':	r.val.r = p.val.r / q.val.r; break;
			default:	typerror(op);
			}
		else	semerror("illegal constant operation");
		r.hasval = True;
	} else {
		typ = mgtype(p.typ, q.typ);
		r.hasval = False;
	}
	return r;
}

static Node
iop(const char *iop, Node p, Node q)
{	if (integer(p.typ) && integer(q.typ))
		return op(iop, p, q);
	typerror("integer operands only");
	return p;
}

static Node
relop(const char *op, Node p, Node q)
{	Node	r;
	Tnode	*typ;
	r.typ = mkint();
	r.sto = Snone;
	r.hasval = True;
	r.val.i = 1;
	sprintf(errbuf, "comparison '%s' not evaluated and considered true", op);
	semwarn(errbuf);
	if (p.typ->type != Tpointer || p.typ != q.typ)
		typ = mgtype(p.typ, q.typ);
	return r;
}

/******************************************************************************\

	Scope management

\******************************************************************************/

/*
mkscope - initialize scope stack with a new table and offset
*/
static void
mkscope(Table *table, int offset)
{	sp = stack-1;
	enterscope(table, offset);
}

/*
enterscope - enter a new scope by pushing a new table and offset on the stack
*/
static void
enterscope(Table *table, int offset)
{	if (++sp == stack+MAXNEST)
		execerror("maximum scope depth exceeded");
	sp->table = table;
	sp->val = 0;
	sp->offset = offset;
	sp->grow = True;	/* by default, offset grows */
	sp->mask = False;
}

/*
exitscope - exit a scope by popping the table and offset from the stack
*/
static void
exitscope(void)
{	check(sp-- != stack, "exitscope() has no matching enterscope()");
}

/******************************************************************************\

	Undefined symbol

\******************************************************************************/

static Entry*
undefined(Symbol *sym)
{	Entry	*p;
	sprintf(errbuf, "undefined identifier '%s'", sym->name);
	semwarn(errbuf);
	p = enter(sp->table, sym);
	p->level = GLOBAL;
	p->info.typ = mkint();
	p->info.sto = Sextern;
	p->info.hasval = False;
	return p;
}

/*
mgtype - return most general type among two numerical types
*/
Tnode*
mgtype(Tnode *typ1, Tnode *typ2)
{	if (numeric(typ1) && numeric(typ2)) {
		if (typ1->type < typ2->type)
			return typ2;
	} else	typerror("non-numeric type");
	return typ1;
}

/******************************************************************************\

	Type checks

\******************************************************************************/

static int
integer(Tnode *typ)
{	switch (typ->type) {
	case Tchar:
	case Tshort:
	case Tint:
	case Tlong:	return True;
	default:	break;
	}
	return False;
}

static int
real(Tnode *typ)
{	switch (typ->type) {
	case Tfloat:
	case Tdouble:
	case Tldouble:	return True;
	default:	break;
	}
	return False;
}

static int
numeric(Tnode *typ)
{	return integer(typ) || real(typ);
}

static void
add_fault(void)
{ Table *t;
  Entry *p1, *p2, *p3, *p4;
  Symbol *s1, *s2, *s3, *s4;
  imported = NULL;
  s1 = lookup("SOAP_ENV__Code");
  p1 = entry(classtable, s1);
  if (!p1 || !p1->info.typ->ref)
  { t = mktable((Table*)0);
    if (!p1)
    { p1 = enter(classtable, s1);
      p1->info.typ = mkstruct(t, 3*4);
      p1->info.typ->id = s1;
    }
    else
      p1->info.typ->ref = t;
    p2 = enter(t, lookup("SOAP_ENV__Value"));
    p2->info.typ = qname;
    p2->info.minOccurs = 0;
    p2 = enter(t, lookup("SOAP_ENV__Subcode"));
    p2->info.typ = mkpointer(p1->info.typ);
    p2->info.minOccurs = 0;
  }
  s2 = lookup("SOAP_ENV__Detail");
  p2 = entry(classtable, s2);
  if (!p2 || !p2->info.typ->ref)
  { t = mktable((Table*)0);
    if (!p2)
    { p2 = enter(classtable, s2);
      p2->info.typ = mkstruct(t, 3*4);
      p2->info.typ->id = s2;
    }
    else
      p2->info.typ->ref = t;
    p3 = enter(t, lookup("__any"));
    p3->info.typ = xml;
    p3->info.minOccurs = 0;
    p3 = enter(t, lookup("__type"));
    p3->info.typ = mkint();
    p3->info.minOccurs = 0;
    p3 = enter(t, lookup("fault"));
    p3->info.typ = mkpointer(mkvoid());
    p3->info.minOccurs = 0;
    custom_fault = 0;
  }
  s4 = lookup("SOAP_ENV__Reason");
  p4 = entry(classtable, s4);
  if (!p4 || !p4->info.typ->ref)
  { t = mktable((Table*)0);
    if (!p4)
    { p4 = enter(classtable, s4);
      p4->info.typ = mkstruct(t, 4);
      p4->info.typ->id = s4;
    }
    else
      p4->info.typ->ref = t;
    p3 = enter(t, lookup("SOAP_ENV__Text"));
    p3->info.typ = mkstring();
    p3->info.minOccurs = 0;
  }
  s3 = lookup("SOAP_ENV__Fault");
  p3 = entry(classtable, s3);
  if (!p3 || !p3->info.typ->ref)
  { t = mktable(NULL);
    if (!p3)
    { p3 = enter(classtable, s3);
      p3->info.typ = mkstruct(t, 9*4);
      p3->info.typ->id = s3;
    }
    else
      p3->info.typ->ref = t;
    p3 = enter(t, lookup("faultcode"));
    p3->info.typ = qname;
    p3->info.minOccurs = 0;
    p3 = enter(t, lookup("faultstring"));
    p3->info.typ = mkstring();
    p3->info.minOccurs = 0;
    p3 = enter(t, lookup("faultactor"));
    p3->info.typ = mkstring();
    p3->info.minOccurs = 0;
    p3 = enter(t, lookup("detail"));
    p3->info.typ = mkpointer(p2->info.typ);
    p3->info.minOccurs = 0;
    p3 = enter(t, s1);
    p3->info.typ = mkpointer(p1->info.typ);
    p3->info.minOccurs = 0;
    p3 = enter(t, s4);
    p3->info.typ = mkpointer(p4->info.typ);
    p3->info.minOccurs = 0;
    p3 = enter(t, lookup("SOAP_ENV__Node"));
    p3->info.typ = mkstring();
    p3->info.minOccurs = 0;
    p3 = enter(t, lookup("SOAP_ENV__Role"));
    p3->info.typ = mkstring();
    p3->info.minOccurs = 0;
    p3 = enter(t, lookup("SOAP_ENV__Detail"));
    p3->info.typ = mkpointer(p2->info.typ);
    p3->info.minOccurs = 0;
  }
}

static void
add_soap(void)
{ Symbol *s = lookup("soap");
  p = enter(classtable, s);
  p->info.typ = mkstruct(NULL, 0);
  p->info.typ->transient = -2;
  p->info.typ->id = s;
}

static void
add_XML(void)
{ Symbol *s = lookup("_XML");
  s->token = TYPE;
  p = enter(typetable, s);
  xml = p->info.typ = mksymtype(mkstring(), s);
  p->info.sto = Stypedef;
}

static void
add_qname(void)
{ Symbol *s = lookup("_QName");
  s->token = TYPE;
  p = enter(typetable, s);
  qname = p->info.typ = mksymtype(mkstring(), s);
  p->info.sto = Stypedef;
}

static void
add_header(void)
{ Table *t;
  Entry *p;
  Symbol *s = lookup("SOAP_ENV__Header");
  imported = NULL;
  p = entry(classtable, s);
  if (!p || !p->info.typ->ref)
  { t = mktable((Table*)0);
    if (!p)
      p = enter(classtable, s);
    p->info.typ = mkstruct(t, 0);
    p->info.typ->id = s;
    custom_header = 0;
  }
}

static void
add_response(Entry *fun, Entry *ret)
{ Table *t;
  Entry *p, *q;
  Symbol *s;
  size_t i = 0, j, n = strlen(fun->sym->name);
  char *r = (char*)emalloc(n+100);
  strcpy(r, fun->sym->name);
  strcat(r, "Response");
  do
  { for (j = 0; j < i; j++)
      r[n+j+8] = '_';
    r[n+i+8] = '\0';
    if (!(s = lookup(r)))
      s = install(r, ID);
    i++;
  } while (entry(classtable, s));
  free(r);
  t = mktable((Table*)0);
  q = enter(t, ret->sym);
  q->info = ret->info;
  if (q->info.typ->type == Treference)
    q->info.typ = (Tnode*)q->info.typ->ref;
  p = enter(classtable, s);
  p->info.typ = mkstruct(t, 4);
  p->info.typ->id = s;
  fun->info.typ->response = p;
}

static void
add_result(Tnode *typ)
{ Entry *p;
  if (!typ->ref || !((Tnode*)typ->ref)->ref)
  { semwarn("response struct/class must be declared before used in function prototype");
    return;
  }
  for (p = ((Table*)((Tnode*)typ->ref)->ref)->list; p; p = p->next)
    if (p->info.sto & Sreturn)
      return;
  for (p = ((Table*)((Tnode*)typ->ref)->ref)->list; p; p = p->next)
  { if (p->info.typ->type != Tfun && !(p->info.sto & Sattribute) && !is_transient(p->info.typ) && !(p->info.sto & (Sprivate|Sprotected)))
      p->info.sto = (Storage)((int)p->info.sto | (int)Sreturn);
      return;
  }
}

