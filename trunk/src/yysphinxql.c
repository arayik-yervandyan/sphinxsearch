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
     TOK_IDENT = 258,
     TOK_ATIDENT = 259,
     TOK_CONST_INT = 260,
     TOK_CONST_FLOAT = 261,
     TOK_CONST_MVA = 262,
     TOK_QUOTED_STRING = 263,
     TOK_USERVAR = 264,
     TOK_SYSVAR = 265,
     TOK_AS = 266,
     TOK_ASC = 267,
     TOK_AVG = 268,
     TOK_BEGIN = 269,
     TOK_BETWEEN = 270,
     TOK_BY = 271,
     TOK_CALL = 272,
     TOK_COLLATION = 273,
     TOK_COMMIT = 274,
     TOK_COUNT = 275,
     TOK_CREATE = 276,
     TOK_DELETE = 277,
     TOK_DESC = 278,
     TOK_DESCRIBE = 279,
     TOK_DISTINCT = 280,
     TOK_DIV = 281,
     TOK_DROP = 282,
     TOK_FALSE = 283,
     TOK_FLOAT = 284,
     TOK_FROM = 285,
     TOK_FUNCTION = 286,
     TOK_GLOBAL = 287,
     TOK_GROUP = 288,
     TOK_ID = 289,
     TOK_IN = 290,
     TOK_INSERT = 291,
     TOK_INT = 292,
     TOK_INTO = 293,
     TOK_LIMIT = 294,
     TOK_MATCH = 295,
     TOK_MAX = 296,
     TOK_META = 297,
     TOK_MIN = 298,
     TOK_MOD = 299,
     TOK_NAMES = 300,
     TOK_NULL = 301,
     TOK_OPTION = 302,
     TOK_ORDER = 303,
     TOK_REPLACE = 304,
     TOK_RETURNS = 305,
     TOK_ROLLBACK = 306,
     TOK_SELECT = 307,
     TOK_SET = 308,
     TOK_SHOW = 309,
     TOK_SONAME = 310,
     TOK_START = 311,
     TOK_STATUS = 312,
     TOK_SUM = 313,
     TOK_TABLES = 314,
     TOK_TRANSACTION = 315,
     TOK_TRUE = 316,
     TOK_UPDATE = 317,
     TOK_VALUES = 318,
     TOK_VARIABLES = 319,
     TOK_WARNINGS = 320,
     TOK_WEIGHT = 321,
     TOK_WHERE = 322,
     TOK_WITHIN = 323,
     TOK_OR = 324,
     TOK_AND = 325,
     TOK_NE = 326,
     TOK_GTE = 327,
     TOK_LTE = 328,
     TOK_NOT = 329,
     TOK_NEG = 330
   };
#endif
#define TOK_IDENT 258
#define TOK_ATIDENT 259
#define TOK_CONST_INT 260
#define TOK_CONST_FLOAT 261
#define TOK_CONST_MVA 262
#define TOK_QUOTED_STRING 263
#define TOK_USERVAR 264
#define TOK_SYSVAR 265
#define TOK_AS 266
#define TOK_ASC 267
#define TOK_AVG 268
#define TOK_BEGIN 269
#define TOK_BETWEEN 270
#define TOK_BY 271
#define TOK_CALL 272
#define TOK_COLLATION 273
#define TOK_COMMIT 274
#define TOK_COUNT 275
#define TOK_CREATE 276
#define TOK_DELETE 277
#define TOK_DESC 278
#define TOK_DESCRIBE 279
#define TOK_DISTINCT 280
#define TOK_DIV 281
#define TOK_DROP 282
#define TOK_FALSE 283
#define TOK_FLOAT 284
#define TOK_FROM 285
#define TOK_FUNCTION 286
#define TOK_GLOBAL 287
#define TOK_GROUP 288
#define TOK_ID 289
#define TOK_IN 290
#define TOK_INSERT 291
#define TOK_INT 292
#define TOK_INTO 293
#define TOK_LIMIT 294
#define TOK_MATCH 295
#define TOK_MAX 296
#define TOK_META 297
#define TOK_MIN 298
#define TOK_MOD 299
#define TOK_NAMES 300
#define TOK_NULL 301
#define TOK_OPTION 302
#define TOK_ORDER 303
#define TOK_REPLACE 304
#define TOK_RETURNS 305
#define TOK_ROLLBACK 306
#define TOK_SELECT 307
#define TOK_SET 308
#define TOK_SHOW 309
#define TOK_SONAME 310
#define TOK_START 311
#define TOK_STATUS 312
#define TOK_SUM 313
#define TOK_TABLES 314
#define TOK_TRANSACTION 315
#define TOK_TRUE 316
#define TOK_UPDATE 317
#define TOK_VALUES 318
#define TOK_VARIABLES 319
#define TOK_WARNINGS 320
#define TOK_WEIGHT 321
#define TOK_WHERE 322
#define TOK_WITHIN 323
#define TOK_OR 324
#define TOK_AND 325
#define TOK_NE 326
#define TOK_GTE 327
#define TOK_LTE 328
#define TOK_NOT 329
#define TOK_NEG 330




/* Copy the first part of user declarations.  */


#if USE_WINDOWS
#pragma warning(push,1)
#pragma warning(disable:4702) // unreachable code
#endif


// some helpers
#include <float.h> // for FLT_MAX



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
typedef int YYSTYPE;
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
#define YYFINAL  78
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   654

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  74
/* YYNRULES -- Number of rules. */
#define YYNRULES  207
/* YYNRULES -- Number of states. */
#define YYNSTATES  389

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    83,    72,     2,
      88,    89,    81,    79,    87,    80,     2,    82,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    86,
      75,    73,    76,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    71,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    74,    77,    78,    84,
      85
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      42,    44,    46,    57,    59,    63,    65,    68,    69,    71,
      74,    76,    81,    86,    91,    96,   101,   105,   111,   113,
     117,   118,   120,   123,   125,   129,   134,   138,   142,   148,
     155,   159,   164,   170,   174,   178,   182,   186,   190,   194,
     198,   202,   208,   212,   216,   218,   220,   225,   229,   231,
     233,   236,   238,   241,   243,   247,   248,   250,   254,   255,
     257,   263,   264,   266,   270,   272,   276,   278,   281,   284,
     285,   287,   290,   295,   296,   298,   301,   303,   307,   311,
     315,   321,   323,   327,   331,   333,   335,   337,   339,   341,
     343,   346,   349,   353,   357,   361,   365,   369,   373,   377,
     381,   385,   389,   393,   397,   401,   405,   409,   413,   417,
     421,   423,   428,   433,   437,   444,   451,   453,   457,   459,
     461,   464,   466,   468,   470,   472,   474,   476,   478,   480,
     485,   490,   495,   499,   504,   512,   518,   520,   522,   524,
     526,   528,   530,   532,   534,   536,   539,   546,   548,   550,
     551,   555,   557,   561,   563,   567,   571,   573,   577,   579,
     581,   583,   587,   595,   605,   612,   613,   616,   618,   622,
     626,   627,   629,   631,   633,   636,   638,   640,   643,   652,
     654,   658,   662,   665,   668,   676,   678,   680
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
      91,     0,    -1,    92,    -1,    93,    -1,    93,    86,    -1,
     138,    -1,   146,    -1,   132,    -1,   133,    -1,   136,    -1,
     147,    -1,   153,    -1,   155,    -1,   156,    -1,   159,    -1,
     160,    -1,   161,    -1,   163,    -1,    94,    -1,    93,    86,
      94,    -1,    95,    -1,   129,    -1,    52,    96,    30,   100,
     101,   109,   111,   113,   117,   119,    -1,    97,    -1,    96,
      87,    97,    -1,    81,    -1,    99,    98,    -1,    -1,     3,
      -1,    11,     3,    -1,   125,    -1,    13,    88,   125,    89,
      -1,    41,    88,   125,    89,    -1,    43,    88,   125,    89,
      -1,    58,    88,   125,    89,    -1,    20,    88,    81,    89,
      -1,    66,    88,    89,    -1,    20,    88,    25,     3,    89,
      -1,     3,    -1,   100,    87,     3,    -1,    -1,   102,    -1,
      67,   103,    -1,   104,    -1,   103,    70,   104,    -1,    40,
      88,     8,    89,    -1,   105,    73,   106,    -1,   105,    74,
     106,    -1,   105,    35,    88,   108,    89,    -1,   105,    84,
      35,    88,   108,    89,    -1,   105,    35,     9,    -1,   105,
      84,    35,     9,    -1,   105,    15,   106,    70,   106,    -1,
     105,    76,   106,    -1,   105,    75,   106,    -1,   105,    77,
     106,    -1,   105,    78,   106,    -1,   105,    73,   107,    -1,
     105,    74,   107,    -1,   105,    76,   107,    -1,   105,    75,
     107,    -1,   105,    15,   107,    70,   107,    -1,   105,    77,
     107,    -1,   105,    78,   107,    -1,     3,    -1,     4,    -1,
      20,    88,    81,    89,    -1,    66,    88,    89,    -1,    34,
      -1,     5,    -1,    80,     5,    -1,     6,    -1,    80,     6,
      -1,   106,    -1,   108,    87,   106,    -1,    -1,   110,    -1,
      33,    16,   105,    -1,    -1,   112,    -1,    68,    33,    48,
      16,   115,    -1,    -1,   114,    -1,    48,    16,   115,    -1,
     116,    -1,   115,    87,   116,    -1,   105,    -1,   105,    12,
      -1,   105,    23,    -1,    -1,   118,    -1,    39,     5,    -1,
      39,     5,    87,     5,    -1,    -1,   120,    -1,    47,   121,
      -1,   122,    -1,   121,    87,   122,    -1,     3,    73,     3,
      -1,     3,    73,     5,    -1,     3,    73,    88,   123,    89,
      -1,   124,    -1,   123,    87,   124,    -1,     3,    73,   106,
      -1,     3,    -1,     4,    -1,    34,    -1,     5,    -1,     6,
      -1,     9,    -1,    80,   125,    -1,    84,   125,    -1,   125,
      79,   125,    -1,   125,    80,   125,    -1,   125,    81,   125,
      -1,   125,    82,   125,    -1,   125,    75,   125,    -1,   125,
      76,   125,    -1,   125,    72,   125,    -1,   125,    71,   125,
      -1,   125,    83,   125,    -1,   125,    26,   125,    -1,   125,
      44,   125,    -1,   125,    78,   125,    -1,   125,    77,   125,
      -1,   125,    73,   125,    -1,   125,    74,   125,    -1,   125,
      70,   125,    -1,   125,    69,   125,    -1,    88,   125,    89,
      -1,   126,    -1,     3,    88,   127,    89,    -1,    35,    88,
     127,    89,    -1,     3,    88,    89,    -1,    43,    88,   125,
      87,   125,    89,    -1,    41,    88,   125,    87,   125,    89,
      -1,   128,    -1,   127,    87,   128,    -1,   125,    -1,     8,
      -1,    54,   130,    -1,    65,    -1,    57,    -1,    42,    -1,
       3,    -1,    46,    -1,     8,    -1,     5,    -1,     6,    -1,
      53,     3,    73,   135,    -1,    53,     3,    73,   134,    -1,
      53,     3,    73,    46,    -1,    53,    45,   131,    -1,    53,
      10,    73,   131,    -1,    53,    32,     9,    73,    88,   108,
      89,    -1,    53,    32,     3,    73,   134,    -1,     3,    -1,
       8,    -1,    61,    -1,    28,    -1,   106,    -1,    19,    -1,
      51,    -1,   137,    -1,    14,    -1,    56,    60,    -1,   139,
      38,     3,   140,    63,   142,    -1,    36,    -1,    49,    -1,
      -1,    88,   141,    89,    -1,   105,    -1,   141,    87,   105,
      -1,   143,    -1,   142,    87,   143,    -1,    88,   144,    89,
      -1,   145,    -1,   144,    87,   145,    -1,   106,    -1,   107,
      -1,     8,    -1,    88,   108,    89,    -1,    22,    30,     3,
      67,    34,    73,   106,    -1,    22,    30,     3,    67,    34,
      35,    88,   108,    89,    -1,    17,     3,    88,   144,   148,
      89,    -1,    -1,    87,   149,    -1,   150,    -1,   149,    87,
     150,    -1,   145,   151,   152,    -1,    -1,    11,    -1,     3,
      -1,    39,    -1,   154,     3,    -1,    24,    -1,    23,    -1,
      54,    59,    -1,    62,     3,    53,   157,    67,    34,    73,
     106,    -1,   158,    -1,   157,    87,   158,    -1,     3,    73,
     106,    -1,    54,    64,    -1,    54,    18,    -1,    21,    31,
       3,    50,   162,    55,     8,    -1,    37,    -1,    29,    -1,
      27,    31,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   104,   104,   105,   106,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   128,   129,
     133,   134,   138,   153,   154,   158,   159,   162,   164,   165,
     169,   170,   171,   172,   173,   174,   175,   176,   180,   181,
     184,   186,   190,   194,   195,   199,   204,   211,   219,   227,
     236,   241,   246,   251,   256,   261,   266,   271,   272,   273,
     274,   279,   284,   289,   297,   298,   303,   309,   315,   324,
     325,   329,   330,   334,   340,   346,   348,   352,   359,   361,
     365,   371,   373,   377,   384,   385,   389,   390,   391,   394,
     396,   400,   405,   412,   414,   418,   422,   423,   427,   432,
     437,   446,   451,   458,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   498,   499,   500,   501,   502,   506,   507,   511,   512,
     518,   522,   523,   524,   530,   531,   532,   533,   534,   538,
     543,   548,   553,   554,   558,   563,   571,   572,   576,   577,
     578,   592,   593,   594,   598,   599,   605,   613,   614,   617,
     619,   623,   624,   628,   629,   633,   637,   638,   642,   643,
     644,   645,   651,   657,   669,   676,   678,   682,   687,   691,
     698,   700,   704,   705,   711,   719,   720,   726,   732,   743,
     744,   748,   762,   766,   772,   783,   784,   788
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_IDENT", "TOK_ATIDENT", 
  "TOK_CONST_INT", "TOK_CONST_FLOAT", "TOK_CONST_MVA", 
  "TOK_QUOTED_STRING", "TOK_USERVAR", "TOK_SYSVAR", "TOK_AS", "TOK_ASC", 
  "TOK_AVG", "TOK_BEGIN", "TOK_BETWEEN", "TOK_BY", "TOK_CALL", 
  "TOK_COLLATION", "TOK_COMMIT", "TOK_COUNT", "TOK_CREATE", "TOK_DELETE", 
  "TOK_DESC", "TOK_DESCRIBE", "TOK_DISTINCT", "TOK_DIV", "TOK_DROP", 
  "TOK_FALSE", "TOK_FLOAT", "TOK_FROM", "TOK_FUNCTION", "TOK_GLOBAL", 
  "TOK_GROUP", "TOK_ID", "TOK_IN", "TOK_INSERT", "TOK_INT", "TOK_INTO", 
  "TOK_LIMIT", "TOK_MATCH", "TOK_MAX", "TOK_META", "TOK_MIN", "TOK_MOD", 
  "TOK_NAMES", "TOK_NULL", "TOK_OPTION", "TOK_ORDER", "TOK_REPLACE", 
  "TOK_RETURNS", "TOK_ROLLBACK", "TOK_SELECT", "TOK_SET", "TOK_SHOW", 
  "TOK_SONAME", "TOK_START", "TOK_STATUS", "TOK_SUM", "TOK_TABLES", 
  "TOK_TRANSACTION", "TOK_TRUE", "TOK_UPDATE", "TOK_VALUES", 
  "TOK_VARIABLES", "TOK_WARNINGS", "TOK_WEIGHT", "TOK_WHERE", 
  "TOK_WITHIN", "TOK_OR", "TOK_AND", "'|'", "'&'", "'='", "TOK_NE", "'<'", 
  "'>'", "TOK_GTE", "TOK_LTE", "'+'", "'-'", "'*'", "'/'", "'%'", 
  "TOK_NOT", "TOK_NEG", "';'", "','", "'('", "')'", "$accept", "request", 
  "statement", "multi_stmt_list", "multi_stmt", "select_from", 
  "select_items_list", "select_item", "opt_alias", "select_expr", 
  "ident_list", "opt_where_clause", "where_clause", "where_expr", 
  "where_item", "expr_ident", "const_int", "const_float", "const_list", 
  "opt_group_clause", "group_clause", "opt_group_order_clause", 
  "group_order_clause", "opt_order_clause", "order_clause", 
  "order_items_list", "order_item", "opt_limit_clause", "limit_clause", 
  "opt_option_clause", "option_clause", "option_list", "option_item", 
  "named_const_list", "named_const", "expr", "function", "arglist", "arg", 
  "show_clause", "show_variable", "set_value", "set_clause", 
  "set_global_clause", "set_string_value", "boolean_value", "transact_op", 
  "start_transaction", "insert_into", "insert_or_replace", 
  "opt_column_list", "column_list", "insert_rows_list", "insert_row", 
  "insert_vals_list", "insert_val", "delete_from", "call_proc", 
  "opt_call_opts_list", "call_opts_list", "call_opt", "opt_as", 
  "call_opt_name", "describe", "describe_tok", "show_tables", "update", 
  "update_items_list", "update_item", "show_variables", "show_collation", 
  "create_function", "udf_type", "drop_function", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   124,    38,    61,   326,    60,    62,   327,   328,    43,
      45,    42,    47,    37,   329,   330,    59,    44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    90,    91,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    93,    93,
      94,    94,    95,    96,    96,    97,    97,    98,    98,    98,
      99,    99,    99,    99,    99,    99,    99,    99,   100,   100,
     101,   101,   102,   103,   103,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   105,   105,   105,   105,   105,   106,
     106,   107,   107,   108,   108,   109,   109,   110,   111,   111,
     112,   113,   113,   114,   115,   115,   116,   116,   116,   117,
     117,   118,   118,   119,   119,   120,   121,   121,   122,   122,
     122,   123,   123,   124,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   126,   126,   126,   126,   126,   127,   127,   128,   128,
     129,   130,   130,   130,   131,   131,   131,   131,   131,   132,
     132,   132,   132,   132,   133,   133,   134,   134,   135,   135,
     135,   136,   136,   136,   137,   137,   138,   139,   139,   140,
     140,   141,   141,   142,   142,   143,   144,   144,   145,   145,
     145,   145,   146,   146,   147,   148,   148,   149,   149,   150,
     151,   151,   152,   152,   153,   154,   154,   155,   156,   157,
     157,   158,   159,   160,   161,   162,   162,   163
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,    10,     1,     3,     1,     2,     0,     1,     2,
       1,     4,     4,     4,     4,     4,     3,     5,     1,     3,
       0,     1,     2,     1,     3,     4,     3,     3,     5,     6,
       3,     4,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     3,     3,     1,     1,     4,     3,     1,     1,
       2,     1,     2,     1,     3,     0,     1,     3,     0,     1,
       5,     0,     1,     3,     1,     3,     1,     2,     2,     0,
       1,     2,     4,     0,     1,     2,     1,     3,     3,     3,
       5,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     4,     4,     3,     6,     6,     1,     3,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     3,     4,     7,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     6,     1,     1,     0,
       3,     1,     3,     1,     3,     3,     1,     3,     1,     1,
       1,     3,     7,     9,     6,     0,     2,     1,     3,     3,
       0,     1,     1,     1,     2,     1,     1,     2,     8,     1,
       3,     3,     2,     2,     7,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,   164,     0,   161,     0,     0,   196,   195,     0,   167,
     168,   162,     0,     0,     0,     0,     0,     0,     2,     3,
      18,    20,    21,     7,     8,     9,   163,     5,     0,     6,
      10,    11,     0,    12,    13,    14,    15,    16,    17,     0,
       0,     0,     0,   104,   105,   107,   108,   109,     0,     0,
     106,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,    23,    27,    30,   130,     0,     0,     0,     0,   203,
     143,   142,   197,   202,   141,   140,   165,     0,     1,     4,
       0,   194,     0,     0,     0,   207,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,   111,     0,     0,
       0,    28,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   144,   147,   148,   146,   145,
     152,     0,     0,    19,   169,    69,    71,   180,     0,     0,
     178,   179,   185,   176,     0,     0,   139,   133,   138,     0,
     136,     0,     0,     0,     0,     0,     0,     0,    36,     0,
       0,   129,    38,    40,    24,    29,   121,   122,   128,   127,
     119,   118,   125,   126,   116,   117,   124,   123,   112,   113,
     114,   115,   120,   156,   157,   159,   151,   158,     0,   160,
     150,   149,   153,     0,     0,     0,     0,   199,     0,     0,
      70,    72,    73,     0,     0,     0,   206,   205,     0,     0,
       0,   131,    31,     0,    35,   132,     0,    32,     0,    33,
      34,     0,     0,     0,     0,    75,    41,   155,     0,     0,
       0,     0,    64,    65,     0,    68,     0,   171,     0,     0,
       0,   181,   177,   186,   187,   184,     0,     0,     0,   137,
      37,     0,     0,     0,    42,    43,     0,    39,     0,    78,
      76,     0,   201,     0,   200,     0,     0,     0,   170,     0,
     166,   173,    74,   191,     0,     0,   204,     0,   182,   135,
     134,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,    79,   154,     0,     0,    67,
     172,     0,     0,   192,   193,   189,   190,   188,     0,     0,
      44,     0,     0,    50,     0,    46,    57,    47,    58,    54,
      60,    53,    59,    55,    62,    56,    63,     0,    77,     0,
       0,    89,    82,   198,    66,     0,   175,   174,   183,    45,
       0,     0,     0,    51,     0,     0,     0,     0,    93,    90,
     177,    52,     0,    61,    48,     0,     0,    86,    83,    84,
      91,     0,    22,    94,    49,    80,    87,    88,     0,     0,
       0,    95,    96,    85,    92,     0,     0,    98,    99,     0,
      97,     0,     0,   101,     0,     0,   100,   103,   102
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    17,    18,    19,    20,    21,    60,    61,   103,    62,
     163,   225,   226,   254,   255,   357,   140,   141,   203,   259,
     260,   294,   295,   331,   332,   358,   359,   348,   349,   362,
     363,   371,   372,   382,   383,   148,    64,   149,   150,    22,
      75,   130,    23,    24,   190,   191,    25,    26,    27,    28,
     199,   238,   270,   271,   142,   143,    29,    30,   205,   243,
     244,   274,   305,    31,    32,    33,    34,   196,   197,    35,
      36,    37,   208,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -228
static const short yypact[] =
{
     592,  -228,    41,  -228,    28,    33,  -228,  -228,    64,  -228,
    -228,  -228,   168,    25,   527,    42,   119,   121,  -228,    68,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,   109,  -228,
    -228,  -228,   156,  -228,  -228,  -228,  -228,  -228,  -228,    82,
     175,   176,   179,    98,  -228,  -228,  -228,  -228,   111,   112,
    -228,   132,   144,   145,   150,   162,    69,  -228,    69,    69,
      -6,  -228,    43,   481,  -228,   133,   184,   143,   155,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,   177,  -228,    46,
     252,  -228,    11,   208,   193,  -228,     4,    69,   -20,    17,
      69,    69,    69,   191,   211,   212,  -228,  -228,   257,   278,
     168,  -228,   300,  -228,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,   182,   155,   246,   248,  -228,  -228,  -228,  -228,  -228,
    -228,   322,   147,  -228,   254,  -228,  -228,  -228,    50,    29,
    -228,  -228,   256,  -228,    89,   311,  -228,  -228,   481,    36,
    -228,   297,   357,   272,    61,   195,   235,   318,  -228,    69,
      69,  -228,  -228,   -38,  -228,  -228,  -228,  -228,   215,   276,
     358,   500,   522,   522,   399,   399,   399,   399,   154,   154,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,   359,  -228,
    -228,  -228,  -228,    34,   275,   308,   -34,  -228,   188,   319,
    -228,  -228,  -228,   107,    11,   296,  -228,  -228,   348,    78,
      17,  -228,  -228,   315,  -228,  -228,    69,  -228,    69,  -228,
    -228,   441,   460,   443,   403,   391,  -228,  -228,    29,    29,
     392,   322,  -228,  -228,   341,  -228,   354,  -228,   108,   356,
      29,  -228,    37,   340,  -228,  -228,   437,   376,    29,  -228,
    -228,   339,   379,   377,   396,  -228,   140,  -228,   453,   402,
    -228,   118,  -228,   398,  -228,   393,   383,   188,  -228,    11,
     386,  -228,  -228,  -228,    40,    11,  -228,    29,  -228,  -228,
    -228,   467,   443,    26,     2,    26,    26,    26,    26,    26,
      26,   449,   188,   454,   428,  -228,  -228,    29,   400,  -228,
    -228,   138,   356,  -228,  -228,  -228,   477,  -228,   142,   401,
    -228,   421,   422,  -228,    29,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,     6,  -228,   445,
     478,   456,  -228,  -228,  -228,    11,  -228,  -228,  -228,  -228,
      29,    -3,   157,  -228,    29,   480,   188,   492,   451,  -228,
    -228,  -228,   493,  -228,  -228,   158,   188,    18,   413,  -228,
     414,   499,  -228,  -228,  -228,   413,  -228,  -228,   188,   498,
     432,   419,  -228,  -228,  -228,     1,   499,  -228,  -228,   505,
    -228,   473,   164,  -228,    29,   505,  -228,  -228,  -228
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -228,  -228,  -228,  -228,   448,  -228,  -228,   465,  -228,  -228,
    -228,  -228,  -228,  -228,   267,  -196,  -121,  -221,  -227,  -228,
    -228,  -228,  -228,  -228,  -228,   214,   199,  -228,  -228,  -228,
    -228,  -228,   192,  -228,   186,    24,  -228,   483,   375,  -228,
    -228,   466,  -228,  -228,   394,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,   287,   321,  -190,  -228,  -228,  -228,  -228,
     320,  -228,  -228,  -228,  -228,  -228,  -228,  -228,   362,  -228,
    -228,  -228,  -228,  -228
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -191
static const short yytable[] =
{
     189,   261,   237,   136,   377,   152,   378,    43,    44,    45,
      46,   313,   146,    47,   242,   343,   135,   136,   202,   137,
      43,    44,    45,    46,    99,   146,    47,   256,    65,   223,
     366,   135,   136,   230,   135,    66,    63,   183,    50,    51,
    -190,   367,   184,   303,    39,    94,   101,    95,   273,   224,
     308,    50,    51,   231,   102,   200,   201,    67,    94,    40,
      95,   153,   312,    41,   316,   318,   320,   322,   324,   326,
      68,   300,    43,    44,    45,    46,  -190,   352,    47,   304,
      96,   100,    97,    98,    56,   306,   256,   342,    58,   379,
     314,   138,    59,   147,   344,    42,   328,    56,    12,   139,
     132,    58,    76,    50,    51,    59,   138,   202,   262,   188,
      94,   151,    95,   247,   155,   156,   157,   355,   206,   272,
     353,    78,    77,   210,    63,   211,   207,   278,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   350,   123,    80,   210,    56,
     215,   248,   124,    58,    79,   283,   202,    59,   125,    81,
     126,   127,   311,   128,   315,   317,   319,   321,   323,   325,
      82,    43,    44,    45,    46,   284,   333,    47,    83,    84,
     104,    48,    85,   221,   222,   183,    86,   135,    49,    70,
     184,   232,   233,   202,   240,   267,   241,   268,   105,    87,
      88,   129,    50,    51,    71,   240,   121,   296,   234,    52,
     185,    53,    74,   285,   286,   287,   288,   289,   290,   351,
      89,   104,   235,   202,   291,   335,    54,   336,   186,   240,
     131,   338,    90,    91,    55,   118,   119,   120,    92,   105,
     251,   104,   252,   187,   240,   240,   354,   364,    56,    57,
      93,   385,    58,   386,   236,   134,    59,   122,   144,   105,
     145,   104,   188,   387,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   105,
     158,   162,   216,   104,   217,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   159,
     160,   105,   104,   165,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   193,
     105,   194,   218,   104,   219,   195,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   105,   198,   204,   104,   209,   161,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     213,   214,   105,   228,   200,   104,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   229,   239,   105,   104,   245,   212,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   105,   246,   250,   104,   257,   220,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   105,   258,   104,   263,   275,   279,   265,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   266,   105,   269,   276,   232,   233,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   234,   277,   281,   282,   104,   280,   292,
     293,   297,   299,   302,   298,   309,   330,   235,   116,   117,
     118,   119,   120,   253,   327,   105,   104,   329,   273,   334,
     339,   340,   341,   345,   346,   347,   356,   360,   361,   201,
     368,   369,   370,   374,   105,   375,   376,   104,   381,   236,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   105,   104,   133,   216,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   105,    69,   384,   218,   104,   310,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   164,   105,   373,   380,    70,
     365,   388,   154,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,    71,   249,    72,   227,   192,   337,
     301,    73,    74,   264,     0,   307,     0,   112,   113,   114,
     115,   116,   117,   118,   119,   120,     1,     0,     0,     2,
       0,     3,     0,     4,     5,     6,     7,     0,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,    11,    12,    13,    14,     0,    15,     0,
       0,     0,     0,     0,    16
};

static const short yycheck[] =
{
     121,   228,   198,     6,     3,    25,     5,     3,     4,     5,
       6,     9,     8,     9,   204,     9,     5,     6,   139,     8,
       3,     4,     5,     6,    30,     8,     9,   223,     3,    67,
      12,     5,     6,    67,     5,    10,    12,     3,    34,    35,
       3,    23,     8,     3,     3,    41,     3,    43,    11,    87,
     277,    34,    35,    87,    11,     5,     6,    32,    41,    31,
      43,    81,   283,    30,   285,   286,   287,   288,   289,   290,
      45,   267,     3,     4,     5,     6,    39,    80,     9,    39,
      56,    87,    58,    59,    80,   275,   282,   314,    84,    88,
      88,    80,    88,    89,    88,    31,   292,    80,    52,    88,
      54,    84,    60,    34,    35,    88,    80,   228,   229,    80,
      41,    87,    43,    35,    90,    91,    92,   344,    29,   240,
     341,     0,     3,    87,   100,    89,    37,   248,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   335,     3,    38,    87,    80,
      89,    73,     9,    84,    86,    15,   277,    88,     3,     3,
       5,     6,   283,     8,   285,   286,   287,   288,   289,   290,
      88,     3,     4,     5,     6,    35,   297,     9,     3,     3,
      26,    13,     3,   159,   160,     3,    88,     5,    20,    42,
       8,     3,     4,   314,    87,    87,    89,    89,    44,    88,
      88,    46,    34,    35,    57,    87,    73,    89,    20,    41,
      28,    43,    65,    73,    74,    75,    76,    77,    78,   340,
      88,    26,    34,   344,    84,    87,    58,    89,    46,    87,
      53,    89,    88,    88,    66,    81,    82,    83,    88,    44,
     216,    26,   218,    61,    87,    87,    89,    89,    80,    81,
      88,    87,    84,    89,    66,     3,    88,    73,    50,    44,
      67,    26,    80,   384,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    44,
      89,     3,    87,    26,    89,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    88,
      88,    44,    26,     3,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    73,
      44,    73,    87,    26,    89,     3,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    44,    88,    87,    26,    34,    89,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       3,    89,    44,    88,     5,    26,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    73,    63,    44,    26,    89,    89,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    44,    55,    89,    26,     3,    89,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    44,    33,    26,    34,    87,    89,    88,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    88,    44,    88,     8,     3,     4,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    20,    88,    88,    70,    26,    89,    16,
      68,    73,    89,    87,    81,     8,    48,    34,    79,    80,
      81,    82,    83,    40,    35,    44,    26,    33,    11,    89,
      89,    70,    70,    48,    16,    39,    16,     5,    47,     6,
      87,    87,     3,     5,    44,    73,    87,    26,     3,    66,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    44,    26,    79,    87,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    44,    18,    73,    87,    26,   282,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,   100,    44,   368,   376,    42,
     356,   385,    89,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    57,   210,    59,   193,   122,   302,
     269,    64,    65,   231,    -1,   275,    -1,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    14,    -1,    -1,    17,
      -1,    19,    -1,    21,    22,    23,    24,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    53,    54,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    62
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    14,    17,    19,    21,    22,    23,    24,    27,    36,
      49,    51,    52,    53,    54,    56,    62,    91,    92,    93,
      94,    95,   129,   132,   133,   136,   137,   138,   139,   146,
     147,   153,   154,   155,   156,   159,   160,   161,   163,     3,
      31,    30,    31,     3,     4,     5,     6,     9,    13,    20,
      34,    35,    41,    43,    58,    66,    80,    81,    84,    88,
      96,    97,    99,   125,   126,     3,    10,    32,    45,    18,
      42,    57,    59,    64,    65,   130,    60,     3,     0,    86,
      38,     3,    88,     3,     3,     3,    88,    88,    88,    88,
      88,    88,    88,    88,    41,    43,   125,   125,   125,    30,
      87,     3,    11,    98,    26,    44,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    73,    73,     3,     9,     3,     5,     6,     8,    46,
     131,    53,    54,    94,     3,     5,     6,     8,    80,    88,
     106,   107,   144,   145,    50,    67,     8,    89,   125,   127,
     128,   125,    25,    81,   127,   125,   125,   125,    89,    88,
      88,    89,     3,   100,    97,     3,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,     3,     8,    28,    46,    61,    80,   106,
     134,   135,   131,    73,    73,     3,   157,   158,    88,   140,
       5,     6,   106,   108,    87,   148,    29,    37,   162,    34,
      87,    89,    89,     3,    89,    89,    87,    89,    87,    89,
      89,   125,   125,    67,    87,   101,   102,   134,    88,    73,
      67,    87,     3,     4,    20,    34,    66,   105,   141,    63,
      87,    89,   145,   149,   150,    89,    55,    35,    73,   128,
      89,   125,   125,    40,   103,   104,   105,     3,    33,   109,
     110,   108,   106,    34,   158,    88,    88,    87,    89,    88,
     142,   143,   106,    11,   151,    87,     8,    88,   106,    89,
      89,    88,    70,    15,    35,    73,    74,    75,    76,    77,
      78,    84,    16,    68,   111,   112,    89,    73,    81,    89,
     105,   144,    87,     3,    39,   152,   145,   150,   108,     8,
     104,   106,   107,     9,    88,   106,   107,   106,   107,   106,
     107,   106,   107,   106,   107,   106,   107,    35,   105,    33,
      48,   113,   114,   106,    89,    87,    89,   143,    89,    89,
      70,    70,   108,     9,    88,    48,    16,    39,   117,   118,
     145,   106,    80,   107,    89,   108,    16,   105,   115,   116,
       5,    47,   119,   120,    89,   115,    12,    23,    87,    87,
       3,   121,   122,   116,     5,    73,    87,     3,     5,    88,
     122,     3,   123,   124,    73,    87,    89,   106,   124
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
int yyparse ( SqlParser_c * pParser );
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
yyparse ( SqlParser_c * pParser )
#else
int
yyparse (pParser)
     SqlParser_c * pParser ;
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

    { pParser->PushQuery(); ;}
    break;

  case 18:

    { pParser->PushQuery(); ;}
    break;

  case 19:

    { pParser->PushQuery(); ;}
    break;

  case 22:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT;
			pParser->m_pQuery->m_sIndexes.SetBinary ( pParser->m_pBuf+yyvsp[-6].m_iStart, yyvsp[-6].m_iEnd-yyvsp[-6].m_iStart );
		;}
    break;

  case 25:

    { pParser->AddItem ( &yyvsp[0] ); ;}
    break;

  case 28:

    { pParser->AliasLastItem ( &yyvsp[0] ); ;}
    break;

  case 29:

    { pParser->AliasLastItem ( &yyvsp[0] ); ;}
    break;

  case 30:

    { pParser->AddItem ( &yyvsp[0] ); ;}
    break;

  case 31:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_AVG, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 32:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MAX, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 33:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MIN, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 34:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_SUM, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 35:

    { if ( !pParser->AddItem ( "count(*)", &yyvsp[-3], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 36:

    { if ( !pParser->AddItem ( "weight()", &yyvsp[-2], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 37:

    { if ( !pParser->AddDistinct ( &yyvsp[-1], &yyvsp[-4], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 39:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 45:

    {
			if ( !pParser->SetMatch(yyvsp[-1]) )
				YYERROR;
		;}
    break;

  case 46:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 47:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].m_iValue );
			pFilter->m_bExclude = true;
		;}
    break;

  case 48:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-4] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_dValues.Sort();
		;}
    break;

  case 49:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-5] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_bExclude = true;
			pFilter->m_dValues.Sort();
		;}
    break;

  case 50:

    {
			if ( !pParser->AddUservarFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_sValue, false ) )
				YYERROR;
		;}
    break;

  case 51:

    {
			if ( !pParser->AddUservarFilter ( yyvsp[-3].m_sValue, yyvsp[-1].m_sValue, true ) )
				YYERROR;
		;}
    break;

  case 52:

    {
			if ( !pParser->AddUintRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_iValue, yyvsp[0].m_iValue ) )
				YYERROR;
		;}
    break;

  case 53:

    {
			if ( !pParser->AddUintRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue+1, UINT_MAX ) )
				YYERROR;
		;}
    break;

  case 54:

    {
			if ( !pParser->AddUintRangeFilter ( yyvsp[-2].m_sValue, 0, yyvsp[0].m_iValue-1 ) )
				YYERROR;
		;}
    break;

  case 55:

    {
			if ( !pParser->AddUintRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue, UINT_MAX ) )
				YYERROR;
		;}
    break;

  case 56:

    {
			if ( !pParser->AddUintRangeFilter ( yyvsp[-2].m_sValue, 0, yyvsp[0].m_iValue ) )
				YYERROR;
		;}
    break;

  case 60:

    {
			yyerror ( pParser, "only >=, <=, and BETWEEN floating-point filter types are supported in this version" );
			YYERROR;
		;}
    break;

  case 61:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_fValue, yyvsp[0].m_fValue ) )
				YYERROR;
		;}
    break;

  case 62:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, FLT_MAX ) )
				YYERROR;
		;}
    break;

  case 63:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, -FLT_MAX, yyvsp[0].m_fValue ) )
				YYERROR;
		;}
    break;

  case 65:

    {
			if ( !pParser->SetOldSyntax() )
				YYERROR;
		;}
    break;

  case 66:

    {
			yyval.m_sValue = "@count";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 67:

    {
			yyval.m_sValue = "@weight";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 68:

    {
			yyval.m_sValue = "@id";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 69:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 70:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = -yyvsp[0].m_iValue; ;}
    break;

  case 71:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 72:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = -yyvsp[0].m_fValue; ;}
    break;

  case 73:

    {
			assert ( !yyval.m_pValues.Ptr() );
			yyval.m_pValues = new RefcountedVector_c<SphAttr_t> ();
			yyval.m_pValues->Add ( yyvsp[0].m_iValue ); 
		;}
    break;

  case 74:

    {
			yyval.m_pValues->Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 77:

    {
			pParser->m_pQuery->m_eGroupFunc = SPH_GROUPBY_ATTR;
			pParser->m_pQuery->m_sGroupBy = yyvsp[0].m_sValue;
		;}
    break;

  case 80:

    {
			pParser->m_pQuery->m_sSortBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 83:

    {
			pParser->m_pQuery->m_sOrderBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 85:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 87:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 88:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 91:

    {
			pParser->m_pQuery->m_iOffset = 0;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 92:

    {
			pParser->m_pQuery->m_iOffset = yyvsp[-2].m_iValue;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 98:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 99:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 100:

    {
			if ( !pParser->AddOption ( yyvsp[-4], pParser->GetNamedVec ( yyvsp[-1].m_iValue ) ) )
				YYERROR;
			pParser->FreeNamedVec ( yyvsp[-1].m_iValue );
		;}
    break;

  case 101:

    {
			yyval.m_iValue = pParser->AllocNamedVec ();
			pParser->AddConst ( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 102:

    {
			pParser->AddConst( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 103:

    {
			yyval.m_sValue = yyvsp[-2].m_sValue;
			yyval.m_iValue = yyvsp[0].m_iValue;
		;}
    break;

  case 105:

    { if ( !pParser->SetOldSyntax() ) YYERROR; ;}
    break;

  case 106:

    { if ( !pParser->SetNewSyntax() ) YYERROR; ;}
    break;

  case 110:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 111:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 112:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 113:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 114:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 115:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 116:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 117:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 118:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 119:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 120:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 121:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 122:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 123:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 124:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 125:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 126:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 127:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 128:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 129:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 131:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 132:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 133:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 134:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 135:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 141:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; ;}
    break;

  case 142:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; ;}
    break;

  case 143:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; ;}
    break;

  case 149:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_iSetValue = yyvsp[0].m_iValue;
		;}
    break;

  case 150:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 151:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_bSetNull = true;
		;}
    break;

  case 152:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 153:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 154:

    {
			pParser->SetStatement ( yyvsp[-4], SET_GLOBAL_UVAR );
			pParser->m_pStmt->m_dSetValues = *yyvsp[-1].m_pValues.Ptr();
		;}
    break;

  case 155:

    {
			pParser->SetStatement ( yyvsp[-2], SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 158:

    { yyval.m_iValue = 1; ;}
    break;

  case 159:

    { yyval.m_iValue = 0; ;}
    break;

  case 160:

    {
			yyval.m_iValue = yyvsp[0].m_iValue;
			if ( yyval.m_iValue!=0 && yyval.m_iValue!=1 )
			{
				yyerror ( pParser, "only 0 and 1 could be used as boolean values" );
				YYERROR;
			}
		;}
    break;

  case 161:

    { pParser->m_pStmt->m_eStmt = STMT_COMMIT; ;}
    break;

  case 162:

    { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; ;}
    break;

  case 163:

    { pParser->m_pStmt->m_eStmt = STMT_BEGIN; ;}
    break;

  case 166:

    {
			// everything else is pushed directly into parser within the rules
			pParser->m_pStmt->m_sIndex = yyvsp[-3].m_sValue;
		;}
    break;

  case 167:

    { pParser->m_pStmt->m_eStmt = STMT_INSERT; ;}
    break;

  case 168:

    { pParser->m_pStmt->m_eStmt = STMT_REPLACE; ;}
    break;

  case 171:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 172:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 175:

    { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } ;}
    break;

  case 176:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 177:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 178:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 179:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 180:

    { yyval.m_iInstype = TOK_QUOTED_STRING; yyval.m_sValue = yyvsp[0].m_sValue; ;}
    break;

  case 181:

    { yyval.m_iInstype = TOK_CONST_MVA; yyval.m_iValue = yyvsp[-1].m_pValues->GetLength(); yyval.m_pValues = yyvsp[-1].m_pValues; ;}
    break;

  case 182:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-4].m_sValue;
			pParser->m_pStmt->m_dDeleteIds.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 183:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-6].m_sValue;
			for ( int i=0; i<yyvsp[-1].m_pValues.Ptr()->GetLength(); i++ )
				pParser->m_pStmt->m_dDeleteIds.Add ( (*yyvsp[-1].m_pValues.Ptr())[i] );
		;}
    break;

  case 184:

    {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->m_pStmt->m_sCallProc = yyvsp[-4].m_sValue;
		;}
    break;

  case 187:

    {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		;}
    break;

  case 189:

    {
			pParser->m_pStmt->m_dCallOptNames.Add ( yyvsp[0].m_sValue );
			AddInsval ( pParser->m_pStmt->m_dCallOptValues, yyvsp[-2] );
		;}
    break;

  case 193:

    { yyval.m_sValue = "limit"; ;}
    break;

  case 194:

    {
			pParser->m_pStmt->m_eStmt = STMT_DESC;
			pParser->m_pStmt->m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 197:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES; ;}
    break;

  case 198:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_UPDATE;
			tStmt.m_sIndex = yyvsp[-6].m_sValue;	
			tStmt.m_tUpdate.m_dDocids.Add ( (SphDocID_t) yyvsp[0].m_iValue );
			tStmt.m_tUpdate.m_dRowOffset.Add ( 0 );
		;}
    break;

  case 201:

    {
			CSphAttrUpdate & tUpd = pParser->m_pStmt->m_tUpdate;
			CSphColumnInfo & tAttr = tUpd.m_dAttrs.Add();
			tAttr.m_sName = yyvsp[-2].m_sValue;
			tAttr.m_sName.ToLower();
			tAttr.m_eAttrType = SPH_ATTR_INTEGER; // sorry, ints only for now, riding on legacy shit!
			tUpd.m_dPool.Add ( (DWORD) yyvsp[0].m_iValue );
		;}
    break;

  case 202:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 203:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 204:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNC;
			tStmt.m_sUdfName = yyvsp[-4].m_sValue;
			tStmt.m_sUdfLib = yyvsp[0].m_sValue;
			tStmt.m_eUdfType = (ESphAttr) yyvsp[-2].m_iValue;
		;}
    break;

  case 205:

    { yyval.m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 206:

    { yyval.m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 207:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNC;
			tStmt.m_sUdfName = yyvsp[0].m_sValue;
		;}
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
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 4)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      else
		{
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			snprintf (yyp, (int)(yysize - (yyp - yymsg)), ", expecting %s (or %d other tokens)", yytname[yyx], yycount - 1);
			while (*yyp++);
			break;
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





#if USE_WINDOWS
#pragma warning(pop)
#endif

