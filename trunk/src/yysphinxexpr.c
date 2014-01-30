/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_CONST_INT = 258,
     TOK_CONST_FLOAT = 259,
     TOK_CONST_STRING = 260,
     TOK_SUBKEY = 261,
     TOK_DOT_NUMBER = 262,
     TOK_ATTR_INT = 263,
     TOK_ATTR_BITS = 264,
     TOK_ATTR_FLOAT = 265,
     TOK_ATTR_MVA32 = 266,
     TOK_ATTR_MVA64 = 267,
     TOK_ATTR_STRING = 268,
     TOK_ATTR_FACTORS = 269,
     TOK_FUNC = 270,
     TOK_FUNC_IN = 271,
     TOK_FUNC_REMAP = 272,
     TOK_FUNC_PF = 273,
     TOK_USERVAR = 274,
     TOK_UDF = 275,
     TOK_HOOK_IDENT = 276,
     TOK_HOOK_FUNC = 277,
     TOK_IDENT = 278,
     TOK_ATTR_JSON = 279,
     TOK_ATID = 280,
     TOK_ATWEIGHT = 281,
     TOK_ID = 282,
     TOK_GROUPBY = 283,
     TOK_WEIGHT = 284,
     TOK_COUNT = 285,
     TOK_DISTINCT = 286,
     TOK_CONST_LIST = 287,
     TOK_ATTR_SINT = 288,
     TOK_MAP_ARG = 289,
     TOK_FOR = 290,
     TOK_ITERATOR = 291,
     TOK_IS = 292,
     TOK_NULL = 293,
     TOK_IS_NULL = 294,
     TOK_IS_NOT_NULL = 295,
     TOK_OR = 296,
     TOK_AND = 297,
     TOK_NE = 298,
     TOK_EQ = 299,
     TOK_GTE = 300,
     TOK_LTE = 301,
     TOK_MOD = 302,
     TOK_DIV = 303,
     TOK_NOT = 304,
     TOK_NEG = 305
   };
#endif
#define TOK_CONST_INT 258
#define TOK_CONST_FLOAT 259
#define TOK_CONST_STRING 260
#define TOK_SUBKEY 261
#define TOK_DOT_NUMBER 262
#define TOK_ATTR_INT 263
#define TOK_ATTR_BITS 264
#define TOK_ATTR_FLOAT 265
#define TOK_ATTR_MVA32 266
#define TOK_ATTR_MVA64 267
#define TOK_ATTR_STRING 268
#define TOK_ATTR_FACTORS 269
#define TOK_FUNC 270
#define TOK_FUNC_IN 271
#define TOK_FUNC_REMAP 272
#define TOK_FUNC_PF 273
#define TOK_USERVAR 274
#define TOK_UDF 275
#define TOK_HOOK_IDENT 276
#define TOK_HOOK_FUNC 277
#define TOK_IDENT 278
#define TOK_ATTR_JSON 279
#define TOK_ATID 280
#define TOK_ATWEIGHT 281
#define TOK_ID 282
#define TOK_GROUPBY 283
#define TOK_WEIGHT 284
#define TOK_COUNT 285
#define TOK_DISTINCT 286
#define TOK_CONST_LIST 287
#define TOK_ATTR_SINT 288
#define TOK_MAP_ARG 289
#define TOK_FOR 290
#define TOK_ITERATOR 291
#define TOK_IS 292
#define TOK_NULL 293
#define TOK_IS_NULL 294
#define TOK_IS_NOT_NULL 295
#define TOK_OR 296
#define TOK_AND 297
#define TOK_NE 298
#define TOK_EQ 299
#define TOK_GTE 300
#define TOK_LTE 301
#define TOK_MOD 302
#define TOK_DIV 303
#define TOK_NOT 304
#define TOK_NEG 305




/* Copy the first part of user declarations.  */


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)

typedef union YYSTYPE {
	int64_t			iConst;			// constant value
	float			fConst;			// constant value
	uint64_t		iAttrLocator;	// attribute locator (rowitem for int/float; offset+size for bits)
	int				iFunc;			// function id
	int				iNode;			// node, or uservar, or udf index
	const char *	sIdent;			// generic identifier (token does NOT own ident storage; ie values are managed by parser)
} YYSTYPE;
/* Line 186 of yacc.c.  */

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */


#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  49
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   514

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  20
/* YYNRULES -- Number of rules. */
#define YYNRULES  97
/* YYNRULES -- Number of states. */
#define YYNSTATES  178

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    55,    44,     2,
      60,    61,    53,    51,    62,    52,     2,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      47,     2,    48,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,    43,    64,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    45,    46,
      49,    50,    56,    57,    58,    59
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    33,    35,    38,    41,
      45,    49,    53,    57,    61,    65,    69,    73,    77,    81,
      85,    89,    93,    97,   101,   105,   109,   113,   115,   117,
     119,   123,   128,   132,   136,   142,   148,   150,   152,   154,
     156,   160,   162,   164,   166,   168,   170,   172,   176,   178,
     181,   183,   186,   190,   195,   199,   204,   206,   210,   212,
     214,   216,   218,   220,   225,   229,   234,   238,   245,   250,
     256,   271,   275,   280,   283,   285,   288,   292,   294,   296,
     300,   304,   309,   311,   314,   318,   322,   324
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      68,     0,    -1,    70,    -1,     8,    -1,     9,    -1,    10,
      -1,    24,    -1,    69,    -1,    79,    -1,     3,    -1,     4,
      -1,     7,    -1,    25,    -1,    26,    -1,    27,    -1,    29,
      60,    61,    -1,    21,    -1,    52,    70,    -1,    58,    70,
      -1,    70,    51,    70,    -1,    70,    52,    70,    -1,    70,
      53,    70,    -1,    70,    54,    70,    -1,    70,    47,    70,
      -1,    70,    48,    70,    -1,    70,    44,    70,    -1,    70,
      43,    70,    -1,    70,    55,    70,    -1,    70,    57,    70,
      -1,    70,    56,    70,    -1,    70,    50,    70,    -1,    70,
      49,    70,    -1,    70,    46,    70,    -1,    70,    45,    70,
      -1,    70,    42,    70,    -1,    70,    41,    70,    -1,    60,
      70,    61,    -1,    80,    -1,    84,    -1,    85,    -1,    80,
      37,    38,    -1,    80,    37,    58,    38,    -1,    72,    46,
       3,    -1,    72,    46,    23,    -1,    71,    62,    72,    46,
       3,    -1,    71,    62,    72,    46,    23,    -1,    78,    -1,
      13,    -1,    16,    -1,    70,    -1,    63,    71,    64,    -1,
      13,    -1,    11,    -1,    12,    -1,    14,    -1,     5,    -1,
      73,    -1,    74,    62,    73,    -1,     3,    -1,    52,     3,
      -1,     4,    -1,    52,     4,    -1,    75,    62,     3,    -1,
      75,    62,    52,     3,    -1,    75,    62,     4,    -1,    75,
      62,    52,     4,    -1,     5,    -1,    76,    62,     5,    -1,
      75,    -1,    76,    -1,    19,    -1,     8,    -1,    23,    -1,
      15,    60,    74,    61,    -1,    15,    60,    61,    -1,    20,
      60,    74,    61,    -1,    20,    60,    61,    -1,    16,    60,
      73,    62,    77,    61,    -1,    22,    60,    74,    61,    -1,
      15,    60,    70,    83,    61,    -1,    17,    60,    70,    62,
      70,    62,    60,    75,    61,    62,    60,    75,    61,    61,
      -1,    18,    60,    61,    -1,    18,    60,    73,    61,    -1,
      24,    81,    -1,    82,    -1,    81,    82,    -1,    65,    70,
      66,    -1,     6,    -1,     7,    -1,    65,     5,    66,    -1,
      65,    13,    66,    -1,    35,    23,    16,    80,    -1,    23,
      -1,    23,    81,    -1,    70,    46,    86,    -1,    86,    46,
      70,    -1,     5,    -1,    13,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned char yyrline[] =
{
       0,    92,    92,    96,    97,    98,    99,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   141,   142,   143,   144,   148,   149,   150,   154,
     155,   156,   157,   158,   159,   160,   164,   165,   169,   170,
     171,   172,   173,   174,   175,   176,   180,   181,   185,   186,
     187,   191,   192,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   209,   212,   213,   217,   218,   219,   220,
     221,   225,   229,   230,   234,   235,   239,   240
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_CONST_INT", "TOK_CONST_FLOAT", 
  "TOK_CONST_STRING", "TOK_SUBKEY", "TOK_DOT_NUMBER", "TOK_ATTR_INT", 
  "TOK_ATTR_BITS", "TOK_ATTR_FLOAT", "TOK_ATTR_MVA32", "TOK_ATTR_MVA64", 
  "TOK_ATTR_STRING", "TOK_ATTR_FACTORS", "TOK_FUNC", "TOK_FUNC_IN", 
  "TOK_FUNC_REMAP", "TOK_FUNC_PF", "TOK_USERVAR", "TOK_UDF", 
  "TOK_HOOK_IDENT", "TOK_HOOK_FUNC", "TOK_IDENT", "TOK_ATTR_JSON", 
  "TOK_ATID", "TOK_ATWEIGHT", "TOK_ID", "TOK_GROUPBY", "TOK_WEIGHT", 
  "TOK_COUNT", "TOK_DISTINCT", "TOK_CONST_LIST", "TOK_ATTR_SINT", 
  "TOK_MAP_ARG", "TOK_FOR", "TOK_ITERATOR", "TOK_IS", "TOK_NULL", 
  "TOK_IS_NULL", "TOK_IS_NOT_NULL", "TOK_OR", "TOK_AND", "'|'", "'&'", 
  "TOK_NE", "TOK_EQ", "'<'", "'>'", "TOK_GTE", "TOK_LTE", "'+'", "'-'", 
  "'*'", "'/'", "'%'", "TOK_MOD", "TOK_DIV", "TOK_NOT", "TOK_NEG", "'('", 
  "')'", "','", "'{'", "'}'", "'['", "']'", "$accept", "exprline", "attr", 
  "expr", "maparg", "map_key", "arg", "arglist", "constlist", 
  "stringlist", "constlist_or_uservar", "ident", "function", "json_field", 
  "subscript", "subkey", "for_loop", "iterator", "streq", "strval", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   124,    38,   298,   299,    60,    62,   300,
     301,    43,    45,    42,    47,    37,   302,   303,   304,   305,
      40,    41,    44,   123,   125,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    67,    68,    69,    69,    69,    69,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    71,    71,    72,    72,    72,    73,
      73,    73,    73,    73,    73,    73,    74,    74,    75,    75,
      75,    75,    75,    75,    75,    75,    76,    76,    77,    77,
      77,    78,    78,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    80,    81,    81,    82,    82,    82,    82,
      82,    83,    84,    84,    85,    85,    86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       3,     4,     3,     3,     5,     5,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       1,     2,     3,     4,     3,     4,     1,     3,     1,     1,
       1,     1,     1,     4,     3,     4,     3,     6,     4,     5,
      14,     3,     4,     2,     1,     2,     3,     1,     1,     3,
       3,     4,     1,     2,     3,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     9,    10,    96,    11,     3,     4,     5,    97,     0,
       0,     0,     0,     0,    16,     0,    92,     6,    12,    13,
      14,     0,     0,     0,     0,     0,     7,     2,     8,    37,
      38,    39,     0,     0,     0,     0,     0,     0,     0,    87,
      88,     0,    93,    84,    83,     0,    17,    18,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      52,    53,    51,    54,    74,     0,    49,    56,     0,    49,
       0,     0,    81,     0,    76,     0,     0,    96,    97,     0,
      85,    15,    36,    35,    34,    26,    25,    33,    32,    94,
      23,    24,    31,    30,    19,    20,    21,    22,    27,    29,
      28,    40,     0,    95,    71,    47,    48,    72,     0,     0,
      46,     0,     0,    73,     0,     0,     0,    82,    75,    78,
      89,    90,    86,    41,     0,    50,     0,     0,    79,    57,
      58,    60,    66,    70,     0,    68,    69,     0,     0,     0,
      42,    43,     0,    59,    61,     0,     0,    77,     0,     0,
       0,    91,    62,    64,     0,    67,     0,    44,    45,    63,
      65,     0,     0,     0,     0,     0,     0,    80
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    25,    26,    79,   118,   119,    77,    78,   145,   146,
     147,   120,    28,    29,    44,    43,   122,    30,    31,    32
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -165
static const short yypact[] =
{
     316,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,   -55,
     -49,   -47,   -32,   -23,  -165,   -16,     2,     2,  -165,  -165,
    -165,    40,   316,   316,   316,   123,  -165,   305,  -165,    88,
    -165,  -165,    82,    72,   255,   316,   133,   194,   255,  -165,
    -165,   362,     2,  -165,     2,    68,  -165,  -165,   351,  -165,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   -31,   316,    85,
    -165,  -165,    93,  -165,  -165,   431,   126,  -165,   -22,   305,
      90,   183,  -165,    73,  -165,   -19,   -15,    97,    98,    61,
    -165,  -165,  -165,   381,   412,   426,   439,   450,   450,  -165,
     457,   457,   457,   457,   -38,   -38,  -165,  -165,  -165,  -165,
    -165,  -165,   127,   450,  -165,  -165,  -165,  -165,   -58,   120,
    -165,   161,   125,  -165,   255,    26,   316,  -165,  -165,  -165,
    -165,  -165,  -165,  -165,   431,  -165,     9,   171,  -165,  -165,
    -165,  -165,  -165,  -165,    45,   128,   130,   134,   244,   142,
    -165,  -165,   165,  -165,  -165,    17,   195,  -165,   153,    11,
       2,  -165,  -165,  -165,    67,  -165,    22,  -165,  -165,  -165,
    -165,    58,   160,   181,    22,    60,   182,  -165
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -165,  -165,  -165,     0,  -165,   108,   -33,    35,  -164,  -165,
    -165,  -165,  -165,    92,   231,    -6,  -165,  -165,  -165,   193
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -98
static const short yytable[] =
{
      27,    80,   171,    83,   134,    33,   135,   111,    39,    40,
     175,    34,   150,    35,   167,    62,    63,    64,    65,    66,
     162,   163,    46,    47,    48,   140,   141,   112,    36,   140,
     141,   142,   151,    76,   168,    81,    90,    37,    90,   123,
     124,    89,   128,   124,    38,   143,   129,   124,   153,   154,
      93,    94,    95,    96,    97,    98,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    41,   113,   164,
     169,   170,    85,    86,   144,     1,     2,    69,   144,     4,
       5,     6,     7,    70,    71,    72,    73,     9,    10,    11,
      12,   139,    13,    14,    15,    16,    17,    18,    19,    20,
      45,    21,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,   172,
     155,   176,   155,    49,    22,    67,   148,   132,    68,    91,
      23,   -96,    24,    74,   127,    75,     1,     2,    69,   -97,
       4,     5,     6,     7,    70,    71,    72,    73,     9,    10,
      11,    12,   125,    13,    14,    15,    16,    17,    18,    19,
      20,   121,    21,   130,   131,   133,   136,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,   137,    22,   138,   152,   159,   160,
     155,    23,   156,    24,    82,   157,    75,     1,     2,    69,
     165,     4,     5,     6,     7,    70,    71,    72,    73,     9,
      10,    11,    12,   166,    13,    14,    15,    16,    17,    18,
      19,    20,   173,    21,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,   174,   149,   177,   161,   126,    22,    42,    99,     0,
       0,     0,    23,     0,    24,    84,     0,    75,     1,     2,
      69,     0,     4,     5,     6,     7,    70,    71,    72,    73,
       9,    10,    11,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,     0,    21,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,     0,   158,    22,     0,     0,
       0,     0,     0,    23,     0,    24,     0,     0,    75,     1,
       2,     3,     0,     4,     5,     6,     7,     0,     0,     8,
       0,     9,    10,    11,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,     0,    21,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     1,     2,    87,    22,     4,
       5,     6,     7,     0,    23,    88,    24,     9,    10,    11,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
       0,    21,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,    92,     0,    22,     0,     0,     0,     0,     0,
      23,     0,    24,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,   114,
       0,     0,     0,     0,   115,     0,     0,   116,     0,     0,
       0,     0,     0,     0,   117,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    60,    61,
      62,    63,    64,    65,    66
};

static const short yycheck[] =
{
       0,    34,   166,    36,    62,    60,    64,    38,     6,     7,
     174,    60,     3,    60,     3,    53,    54,    55,    56,    57,
       3,     4,    22,    23,    24,     3,     4,    58,    60,     3,
       4,     5,    23,    33,    23,    35,    42,    60,    44,    61,
      62,    41,    61,    62,    60,    19,    61,    62,     3,     4,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    65,    68,    52,
       3,     4,    37,    38,    52,     3,     4,     5,    52,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,   124,    20,    21,    22,    23,    24,    25,    26,    27,
      60,    29,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    61,
      62,    61,    62,     0,    52,    37,   126,    66,    46,    61,
      58,    46,    60,    61,    61,    63,     3,     4,     5,    46,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    62,    20,    21,    22,    23,    24,    25,    26,
      27,    35,    29,    66,    66,    38,    46,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    23,    52,    61,    16,    46,    24,
      62,    58,    62,    60,    61,    61,    63,     3,     4,     5,
       5,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    60,    20,    21,    22,    23,    24,    25,
      26,    27,    62,    29,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    60,   134,    61,   152,    62,    52,    16,    55,    -1,
      -1,    -1,    58,    -1,    60,    61,    -1,    63,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    29,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    52,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    60,    -1,    -1,    63,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    29,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,     3,     4,     5,    52,     7,
       8,     9,    10,    -1,    58,    13,    60,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    29,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    60,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,     8,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    51,    52,
      53,    54,    55,    56,    57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    10,    13,    15,
      16,    17,    18,    20,    21,    22,    23,    24,    25,    26,
      27,    29,    52,    58,    60,    68,    69,    70,    79,    80,
      84,    85,    86,    60,    60,    60,    60,    60,    60,     6,
       7,    65,    81,    82,    81,    60,    70,    70,    70,     0,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    37,    46,     5,
      11,    12,    13,    14,    61,    63,    70,    73,    74,    70,
      73,    70,    61,    73,    61,    74,    74,     5,    13,    70,
      82,    61,    61,    70,    70,    70,    70,    70,    70,    86,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    38,    58,    70,     8,    13,    16,    23,    71,    72,
      78,    35,    83,    61,    62,    62,    62,    61,    61,    61,
      66,    66,    66,    38,    62,    64,    46,    23,    61,    73,
       3,     4,     5,    19,    52,    75,    76,    77,    70,    72,
       3,    23,    16,     3,     4,    62,    62,    61,    62,    46,
      24,    80,     3,     4,    52,     5,    60,     3,    23,     3,
       4,    75,    61,    62,    60,    75,    61,    61
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror (pParser, "syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, pParser)
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
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
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
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse ( ExprParser_t * pParser );
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse ( ExprParser_t * pParser )
#else
int
yyparse (pParser)
     ExprParser_t * pParser ;
#endif
#endif
{
  /* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
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

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
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

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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

    { pParser->m_iParsed = yyvsp[0].iNode; ;}
    break;

  case 3:

    { yyval.iNode = pParser->AddNodeAttr ( TOK_ATTR_INT, yyvsp[0].iAttrLocator ); ;}
    break;

  case 4:

    { yyval.iNode = pParser->AddNodeAttr ( TOK_ATTR_BITS, yyvsp[0].iAttrLocator ); ;}
    break;

  case 5:

    { yyval.iNode = pParser->AddNodeAttr ( TOK_ATTR_FLOAT, yyvsp[0].iAttrLocator ); ;}
    break;

  case 6:

    { yyval.iNode = pParser->AddNodeAttr ( TOK_ATTR_JSON, yyvsp[0].iAttrLocator ); ;}
    break;

  case 9:

    { yyval.iNode = pParser->AddNodeInt ( yyvsp[0].iConst ); ;}
    break;

  case 10:

    { yyval.iNode = pParser->AddNodeFloat ( yyvsp[0].fConst ); ;}
    break;

  case 11:

    { yyval.iNode = pParser->AddNodeDotNumber ( yyvsp[0].iConst ); ;}
    break;

  case 12:

    { yyval.iNode = pParser->AddNodeID(); ;}
    break;

  case 13:

    { yyval.iNode = pParser->AddNodeWeight(); ;}
    break;

  case 14:

    { yyval.iNode = pParser->AddNodeID(); ;}
    break;

  case 15:

    { yyval.iNode = pParser->AddNodeWeight(); ;}
    break;

  case 16:

    { yyval.iNode = pParser->AddNodeHookIdent ( yyvsp[0].iNode ); ;}
    break;

  case 17:

    { yyval.iNode = pParser->AddNodeOp ( TOK_NEG, yyvsp[0].iNode, -1 ); ;}
    break;

  case 18:

    { yyval.iNode = pParser->AddNodeOp ( TOK_NOT, yyvsp[0].iNode, -1 ); if ( yyval.iNode<0 ) YYERROR; ;}
    break;

  case 19:

    { yyval.iNode = pParser->AddNodeOp ( '+', yyvsp[-2].iNode, yyvsp[0].iNode ); ;}
    break;

  case 20:

    { yyval.iNode = pParser->AddNodeOp ( '-', yyvsp[-2].iNode, yyvsp[0].iNode ); ;}
    break;

  case 21:

    { yyval.iNode = pParser->AddNodeOp ( '*', yyvsp[-2].iNode, yyvsp[0].iNode ); ;}
    break;

  case 22:

    { yyval.iNode = pParser->AddNodeOp ( '/', yyvsp[-2].iNode, yyvsp[0].iNode ); ;}
    break;

  case 23:

    { yyval.iNode = pParser->AddNodeOp ( '<', yyvsp[-2].iNode, yyvsp[0].iNode ); ;}
    break;

  case 24:

    { yyval.iNode = pParser->AddNodeOp ( '>', yyvsp[-2].iNode, yyvsp[0].iNode ); ;}
    break;

  case 25:

    { yyval.iNode = pParser->AddNodeOp ( '&', yyvsp[-2].iNode, yyvsp[0].iNode ); ;}
    break;

  case 26:

    { yyval.iNode = pParser->AddNodeOp ( '|', yyvsp[-2].iNode, yyvsp[0].iNode ); ;}
    break;

  case 27:

    { yyval.iNode = pParser->AddNodeOp ( '%', yyvsp[-2].iNode, yyvsp[0].iNode ); ;}
    break;

  case 28:

    { yyval.iNode = pParser->AddNodeFunc ( FUNC_IDIV, pParser->AddNodeOp ( ',', yyvsp[-2].iNode, yyvsp[0].iNode ) ); ;}
    break;

  case 29:

    { yyval.iNode = pParser->AddNodeOp ( '%', yyvsp[-2].iNode, yyvsp[0].iNode ); ;}
    break;

  case 30:

    { yyval.iNode = pParser->AddNodeOp ( TOK_LTE, yyvsp[-2].iNode, yyvsp[0].iNode ); ;}
    break;

  case 31:

    { yyval.iNode = pParser->AddNodeOp ( TOK_GTE, yyvsp[-2].iNode, yyvsp[0].iNode ); ;}
    break;

  case 32:

    { yyval.iNode = pParser->AddNodeOp ( TOK_EQ, yyvsp[-2].iNode, yyvsp[0].iNode ); ;}
    break;

  case 33:

    { yyval.iNode = pParser->AddNodeOp ( TOK_NE, yyvsp[-2].iNode, yyvsp[0].iNode ); ;}
    break;

  case 34:

    { yyval.iNode = pParser->AddNodeOp ( TOK_AND, yyvsp[-2].iNode, yyvsp[0].iNode ); if ( yyval.iNode<0 ) YYERROR; ;}
    break;

  case 35:

    { yyval.iNode = pParser->AddNodeOp ( TOK_OR, yyvsp[-2].iNode, yyvsp[0].iNode ); if ( yyval.iNode<0 ) YYERROR; ;}
    break;

  case 36:

    { yyval.iNode = yyvsp[-1].iNode; ;}
    break;

  case 40:

    { yyval.iNode = pParser->AddNodeOp ( TOK_IS_NULL, yyvsp[-2].iNode, -1); ;}
    break;

  case 41:

    { yyval.iNode = pParser->AddNodeOp ( TOK_IS_NOT_NULL, yyvsp[-3].iNode, -1); ;}
    break;

  case 42:

    { yyval.iNode = pParser->AddNodeMapArg ( yyvsp[-2].sIdent, NULL, yyvsp[0].iConst ); ;}
    break;

  case 43:

    { yyval.iNode = pParser->AddNodeMapArg ( yyvsp[-2].sIdent, yyvsp[0].sIdent, 0 ); ;}
    break;

  case 44:

    { pParser->AppendToMapArg ( yyval.iNode, yyvsp[-2].sIdent, NULL, yyvsp[0].iConst ); ;}
    break;

  case 45:

    { pParser->AppendToMapArg ( yyval.iNode, yyvsp[-2].sIdent, yyvsp[0].sIdent, 0 ); ;}
    break;

  case 46:

    { yyval.sIdent = yyvsp[0].sIdent; ;}
    break;

  case 47:

    { yyval.sIdent = pParser->Attr2Ident(yyvsp[0].iAttrLocator); ;}
    break;

  case 48:

    { yyval.sIdent = strdup("in"); ;}
    break;

  case 50:

    { yyval.iNode = yyvsp[-1].iNode; ;}
    break;

  case 51:

    { yyval.iNode = pParser->AddNodeAttr ( TOK_ATTR_STRING, yyvsp[0].iAttrLocator ); ;}
    break;

  case 52:

    { yyval.iNode = pParser->AddNodeAttr ( TOK_ATTR_MVA32, yyvsp[0].iAttrLocator ); ;}
    break;

  case 53:

    { yyval.iNode = pParser->AddNodeAttr ( TOK_ATTR_MVA64, yyvsp[0].iAttrLocator ); ;}
    break;

  case 54:

    { yyval.iNode = pParser->AddNodeAttr ( TOK_ATTR_FACTORS, yyvsp[0].iAttrLocator ); ;}
    break;

  case 55:

    { yyval.iNode = pParser->AddNodeString ( yyvsp[0].iConst ); ;}
    break;

  case 56:

    { yyval.iNode = yyvsp[0].iNode; ;}
    break;

  case 57:

    { yyval.iNode = pParser->AddNodeOp ( ',', yyvsp[-2].iNode, yyvsp[0].iNode ); ;}
    break;

  case 58:

    { yyval.iNode = pParser->AddNodeConstlist ( yyvsp[0].iConst ); ;}
    break;

  case 59:

    { yyval.iNode = pParser->AddNodeConstlist ( -yyvsp[0].iConst );;}
    break;

  case 60:

    { yyval.iNode = pParser->AddNodeConstlist ( yyvsp[0].fConst ); ;}
    break;

  case 61:

    { yyval.iNode = pParser->AddNodeConstlist ( -yyvsp[0].fConst );;}
    break;

  case 62:

    { pParser->AppendToConstlist ( yyval.iNode, yyvsp[0].iConst ); ;}
    break;

  case 63:

    { pParser->AppendToConstlist ( yyval.iNode, -yyvsp[0].iConst );;}
    break;

  case 64:

    { pParser->AppendToConstlist ( yyval.iNode, yyvsp[0].fConst ); ;}
    break;

  case 65:

    { pParser->AppendToConstlist ( yyval.iNode, -yyvsp[0].fConst );;}
    break;

  case 66:

    { yyval.iNode = pParser->AddNodeConstlist ( yyvsp[0].iConst ); ;}
    break;

  case 67:

    { pParser->AppendToConstlist ( yyval.iNode, yyvsp[0].iConst ); ;}
    break;

  case 70:

    { yyval.iNode = pParser->AddNodeUservar ( yyvsp[0].iNode ); ;}
    break;

  case 71:

    { yyval.sIdent = pParser->Attr2Ident ( yyvsp[0].iAttrLocator ); ;}
    break;

  case 73:

    { yyval.iNode = pParser->AddNodeFunc ( yyvsp[-3].iFunc, yyvsp[-1].iNode ); if ( yyval.iNode<0 ) YYERROR; ;}
    break;

  case 74:

    { yyval.iNode = pParser->AddNodeFunc ( yyvsp[-2].iFunc, -1 ); if ( yyval.iNode<0 ) YYERROR; ;}
    break;

  case 75:

    { yyval.iNode = pParser->AddNodeUdf ( yyvsp[-3].iNode, yyvsp[-1].iNode ); if ( yyval.iNode<0 ) YYERROR; ;}
    break;

  case 76:

    { yyval.iNode = pParser->AddNodeUdf ( yyvsp[-2].iNode, -1 ); if ( yyval.iNode<0 ) YYERROR; ;}
    break;

  case 77:

    { yyval.iNode = pParser->AddNodeFunc ( yyvsp[-5].iFunc, yyvsp[-3].iNode, yyvsp[-1].iNode ); ;}
    break;

  case 78:

    { yyval.iNode = pParser->AddNodeHookFunc ( yyvsp[-3].iNode, yyvsp[-1].iNode ); if ( yyval.iNode<0 ) YYERROR; ;}
    break;

  case 79:

    { yyval.iNode = pParser->AddNodeFunc ( yyvsp[-4].iFunc, yyvsp[-2].iNode, yyvsp[-1].iNode ); ;}
    break;

  case 80:

    { yyval.iNode = pParser->AddNodeFunc ( yyvsp[-13].iFunc, yyvsp[-11].iNode, yyvsp[-9].iNode, yyvsp[-6].iNode, yyvsp[-2].iNode ); ;}
    break;

  case 81:

    { yyval.iNode = pParser->AddNodePF ( yyvsp[-2].iNode, -1 ); ;}
    break;

  case 82:

    { yyval.iNode = pParser->AddNodePF ( yyvsp[-3].iNode, yyvsp[-1].iNode ); ;}
    break;

  case 83:

    { yyval.iNode = pParser->AddNodeJsonField ( yyvsp[-1].iAttrLocator, yyvsp[0].iNode ); ;}
    break;

  case 85:

    { yyval.iNode = pParser->AddNodeOp ( ',', yyvsp[-1].iNode, yyvsp[0].iNode ); ;}
    break;

  case 86:

    { yyval.iNode = yyvsp[-1].iNode; ;}
    break;

  case 87:

    { yyval.iNode = pParser->AddNodeJsonSubkey ( yyvsp[0].iConst ); ;}
    break;

  case 88:

    { yyval.iNode = pParser->AddNodeJsonSubkey ( yyvsp[0].iConst ); ;}
    break;

  case 89:

    { yyval.iNode = pParser->AddNodeString ( yyvsp[-1].iConst ); ;}
    break;

  case 90:

    { yyval.iNode = pParser->AddNodeAttr ( TOK_ATTR_STRING, yyvsp[-1].iAttrLocator ); ;}
    break;

  case 91:

    { yyval.iNode = pParser->AddNodeIdent ( yyvsp[-2].sIdent, yyvsp[0].iNode ); ;}
    break;

  case 92:

    { yyval.iNode = pParser->AddNodeIdent ( yyvsp[0].sIdent, -1 ); ;}
    break;

  case 93:

    { yyval.iNode = pParser->AddNodeIdent ( yyvsp[-1].sIdent, yyvsp[0].iNode ); ;}
    break;

  case 94:

    { yyval.iNode = pParser->AddNodeOp ( TOK_EQ, yyvsp[-2].iNode, yyvsp[0].iNode ); ;}
    break;

  case 95:

    { yyval.iNode = pParser->AddNodeOp ( TOK_EQ, yyvsp[0].iNode, yyvsp[-2].iNode ); ;}
    break;

  case 96:

    { yyval.iNode = pParser->AddNodeString ( yyvsp[0].iConst ); ;}
    break;

  case 97:

    { yyval.iNode = pParser->AddNodeAttr ( TOK_ATTR_STRING, yyvsp[0].iAttrLocator ); ;}
    break;


    }

/* Line 991 of yacc.c.  */


  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yyx+yyn<int(sizeof(yycheck)/sizeof(yycheck[0])) && yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yyx+yyn<int(sizeof(yycheck)/sizeof(yycheck[0])) && yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (pParser, yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror (pParser, "syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (pParser, "syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab2;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:

  /* Suppress GCC warning that yyerrlab1 is unused when no action
     invokes YYERROR.  */
#if defined (__GNUC_MINOR__) && 2093 <= (__GNUC__ * 1000 + __GNUC_MINOR__)
//  __attribute__ ((__unused__))
#endif


  goto yyerrlab2;


/*---------------------------------------------------------------.
| yyerrlab2 -- pop states until the error token can be shifted.  |
`---------------------------------------------------------------*/
yyerrlab2:
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror (pParser, "parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}





