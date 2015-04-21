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
     TOK_CONST_STRINGS = 266,
     TOK_BAD_NUMERIC = 267,
     TOK_SUBKEY = 268,
     TOK_DOT_NUMBER = 269,
     TOK_ADD = 270,
     TOK_AGENT = 271,
     TOK_ALTER = 272,
     TOK_AS = 273,
     TOK_ASC = 274,
     TOK_ATTACH = 275,
     TOK_ATTRIBUTES = 276,
     TOK_AVG = 277,
     TOK_BEGIN = 278,
     TOK_BETWEEN = 279,
     TOK_BIGINT = 280,
     TOK_BOOL = 281,
     TOK_BY = 282,
     TOK_CALL = 283,
     TOK_CHARACTER = 284,
     TOK_CHUNK = 285,
     TOK_COLLATION = 286,
     TOK_COLUMN = 287,
     TOK_COMMIT = 288,
     TOK_COMMITTED = 289,
     TOK_COUNT = 290,
     TOK_CREATE = 291,
     TOK_DATABASES = 292,
     TOK_DELETE = 293,
     TOK_DESC = 294,
     TOK_DESCRIBE = 295,
     TOK_DISTINCT = 296,
     TOK_DIV = 297,
     TOK_DOUBLE = 298,
     TOK_DROP = 299,
     TOK_FACET = 300,
     TOK_FALSE = 301,
     TOK_FLOAT = 302,
     TOK_FLUSH = 303,
     TOK_FOR = 304,
     TOK_FROM = 305,
     TOK_FUNCTION = 306,
     TOK_GLOBAL = 307,
     TOK_GROUP = 308,
     TOK_GROUPBY = 309,
     TOK_GROUP_CONCAT = 310,
     TOK_HAVING = 311,
     TOK_ID = 312,
     TOK_IN = 313,
     TOK_INDEX = 314,
     TOK_INSERT = 315,
     TOK_INT = 316,
     TOK_INTEGER = 317,
     TOK_INTO = 318,
     TOK_IS = 319,
     TOK_ISOLATION = 320,
     TOK_JSON = 321,
     TOK_LEVEL = 322,
     TOK_LIKE = 323,
     TOK_LIMIT = 324,
     TOK_MATCH = 325,
     TOK_MAX = 326,
     TOK_META = 327,
     TOK_MIN = 328,
     TOK_MOD = 329,
     TOK_MULTI = 330,
     TOK_MULTI64 = 331,
     TOK_NAMES = 332,
     TOK_NULL = 333,
     TOK_OPTION = 334,
     TOK_ORDER = 335,
     TOK_OPTIMIZE = 336,
     TOK_PLAN = 337,
     TOK_PLUGIN = 338,
     TOK_PLUGINS = 339,
     TOK_PROFILE = 340,
     TOK_RAND = 341,
     TOK_RAMCHUNK = 342,
     TOK_READ = 343,
     TOK_RECONFIGURE = 344,
     TOK_RELOAD = 345,
     TOK_REPEATABLE = 346,
     TOK_REPLACE = 347,
     TOK_REMAP = 348,
     TOK_RETURNS = 349,
     TOK_ROLLBACK = 350,
     TOK_RTINDEX = 351,
     TOK_SELECT = 352,
     TOK_SERIALIZABLE = 353,
     TOK_SET = 354,
     TOK_SETTINGS = 355,
     TOK_SESSION = 356,
     TOK_SHOW = 357,
     TOK_SONAME = 358,
     TOK_START = 359,
     TOK_STATUS = 360,
     TOK_STRING = 361,
     TOK_SUM = 362,
     TOK_TABLE = 363,
     TOK_TABLES = 364,
     TOK_THREADS = 365,
     TOK_TO = 366,
     TOK_TRANSACTION = 367,
     TOK_TRUE = 368,
     TOK_TRUNCATE = 369,
     TOK_TYPE = 370,
     TOK_UNCOMMITTED = 371,
     TOK_UPDATE = 372,
     TOK_VALUES = 373,
     TOK_VARIABLES = 374,
     TOK_WARNINGS = 375,
     TOK_WEIGHT = 376,
     TOK_WHERE = 377,
     TOK_WITHIN = 378,
     TOK_OR = 379,
     TOK_AND = 380,
     TOK_NE = 381,
     TOK_GTE = 382,
     TOK_LTE = 383,
     TOK_NOT = 384,
     TOK_NEG = 385
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
#define TOK_CONST_STRINGS 266
#define TOK_BAD_NUMERIC 267
#define TOK_SUBKEY 268
#define TOK_DOT_NUMBER 269
#define TOK_ADD 270
#define TOK_AGENT 271
#define TOK_ALTER 272
#define TOK_AS 273
#define TOK_ASC 274
#define TOK_ATTACH 275
#define TOK_ATTRIBUTES 276
#define TOK_AVG 277
#define TOK_BEGIN 278
#define TOK_BETWEEN 279
#define TOK_BIGINT 280
#define TOK_BOOL 281
#define TOK_BY 282
#define TOK_CALL 283
#define TOK_CHARACTER 284
#define TOK_CHUNK 285
#define TOK_COLLATION 286
#define TOK_COLUMN 287
#define TOK_COMMIT 288
#define TOK_COMMITTED 289
#define TOK_COUNT 290
#define TOK_CREATE 291
#define TOK_DATABASES 292
#define TOK_DELETE 293
#define TOK_DESC 294
#define TOK_DESCRIBE 295
#define TOK_DISTINCT 296
#define TOK_DIV 297
#define TOK_DOUBLE 298
#define TOK_DROP 299
#define TOK_FACET 300
#define TOK_FALSE 301
#define TOK_FLOAT 302
#define TOK_FLUSH 303
#define TOK_FOR 304
#define TOK_FROM 305
#define TOK_FUNCTION 306
#define TOK_GLOBAL 307
#define TOK_GROUP 308
#define TOK_GROUPBY 309
#define TOK_GROUP_CONCAT 310
#define TOK_HAVING 311
#define TOK_ID 312
#define TOK_IN 313
#define TOK_INDEX 314
#define TOK_INSERT 315
#define TOK_INT 316
#define TOK_INTEGER 317
#define TOK_INTO 318
#define TOK_IS 319
#define TOK_ISOLATION 320
#define TOK_JSON 321
#define TOK_LEVEL 322
#define TOK_LIKE 323
#define TOK_LIMIT 324
#define TOK_MATCH 325
#define TOK_MAX 326
#define TOK_META 327
#define TOK_MIN 328
#define TOK_MOD 329
#define TOK_MULTI 330
#define TOK_MULTI64 331
#define TOK_NAMES 332
#define TOK_NULL 333
#define TOK_OPTION 334
#define TOK_ORDER 335
#define TOK_OPTIMIZE 336
#define TOK_PLAN 337
#define TOK_PLUGIN 338
#define TOK_PLUGINS 339
#define TOK_PROFILE 340
#define TOK_RAND 341
#define TOK_RAMCHUNK 342
#define TOK_READ 343
#define TOK_RECONFIGURE 344
#define TOK_RELOAD 345
#define TOK_REPEATABLE 346
#define TOK_REPLACE 347
#define TOK_REMAP 348
#define TOK_RETURNS 349
#define TOK_ROLLBACK 350
#define TOK_RTINDEX 351
#define TOK_SELECT 352
#define TOK_SERIALIZABLE 353
#define TOK_SET 354
#define TOK_SETTINGS 355
#define TOK_SESSION 356
#define TOK_SHOW 357
#define TOK_SONAME 358
#define TOK_START 359
#define TOK_STATUS 360
#define TOK_STRING 361
#define TOK_SUM 362
#define TOK_TABLE 363
#define TOK_TABLES 364
#define TOK_THREADS 365
#define TOK_TO 366
#define TOK_TRANSACTION 367
#define TOK_TRUE 368
#define TOK_TRUNCATE 369
#define TOK_TYPE 370
#define TOK_UNCOMMITTED 371
#define TOK_UPDATE 372
#define TOK_VALUES 373
#define TOK_VARIABLES 374
#define TOK_WARNINGS 375
#define TOK_WEIGHT 376
#define TOK_WHERE 377
#define TOK_WITHIN 378
#define TOK_OR 379
#define TOK_AND 380
#define TOK_NE 381
#define TOK_GTE 382
#define TOK_LTE 383
#define TOK_NOT 384
#define TOK_NEG 385




/* Copy the first part of user declarations.  */


#if USE_WINDOWS
#pragma warning(push,1)
#pragma warning(disable:4702) // unreachable code
#endif



// some helpers
#include <float.h> // for FLT_MAX

static void AddInsval ( SqlParser_c * pParser, CSphVector<SqlInsert_t> & dVec, const SqlNode_t & tNode )
{
	SqlInsert_t & tIns = dVec.Add();
	tIns.m_iType = tNode.m_iType;
	tIns.m_iVal = tNode.m_iValue; // OPTIMIZE? copy conditionally based on type?
	tIns.m_fVal = tNode.m_fValue;
	if ( tIns.m_iType==TOK_QUOTED_STRING )
		pParser->ToStringUnescape ( tIns.m_sVal, tNode );
	tIns.m_pVals = tNode.m_pValues;
}

#define TRACK_BOUNDS(_res,_left,_right) \
	_res = _left; \
	_res.m_iEnd = _right.m_iEnd; \
	_res.m_iType = 0;



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
#define YYFINAL  201
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4652

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  150
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  139
/* YYNRULES -- Number of rules. */
#define YYNRULES  444
/* YYNRULES -- Number of states. */
#define YYNSTATES  807

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   385

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   138,   127,     2,
     142,   143,   136,   134,   144,   135,   147,   137,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   141,
     130,   128,   131,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   148,     2,   149,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   145,   126,   146,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   129,   132,   133,   139,   140
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    66,    68,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    90,    92,    94,    96,    98,
     100,   102,   104,   106,   108,   110,   112,   114,   116,   118,
     120,   122,   124,   126,   128,   130,   132,   134,   136,   138,
     140,   142,   144,   146,   148,   150,   152,   154,   156,   158,
     160,   162,   164,   166,   168,   170,   172,   174,   178,   181,
     183,   185,   187,   196,   198,   208,   209,   212,   214,   218,
     220,   222,   224,   225,   229,   230,   233,   238,   250,   252,
     256,   258,   261,   262,   264,   267,   269,   274,   279,   284,
     289,   294,   299,   303,   309,   311,   315,   316,   318,   321,
     323,   327,   331,   336,   338,   342,   346,   352,   359,   363,
     368,   374,   378,   382,   386,   390,   394,   396,   402,   408,
     414,   418,   422,   426,   430,   434,   438,   442,   447,   451,
     453,   455,   460,   464,   468,   470,   472,   477,   482,   487,
     491,   493,   496,   498,   501,   503,   505,   509,   510,   515,
     516,   518,   520,   524,   525,   528,   529,   531,   537,   538,
     540,   544,   550,   552,   556,   558,   561,   564,   565,   567,
     570,   575,   576,   578,   581,   583,   587,   589,   593,   597,
     603,   610,   614,   616,   620,   624,   626,   628,   630,   632,
     634,   636,   638,   641,   644,   648,   652,   656,   660,   664,
     668,   672,   676,   680,   684,   688,   692,   696,   700,   704,
     708,   712,   716,   720,   722,   724,   726,   730,   735,   740,
     745,   750,   755,   760,   765,   769,   776,   783,   787,   796,
     811,   815,   820,   822,   826,   828,   830,   834,   840,   842,
     844,   846,   848,   851,   852,   855,   857,   860,   863,   867,
     869,   871,   873,   876,   881,   886,   890,   895,   900,   902,
     904,   905,   908,   913,   918,   923,   927,   932,   937,   945,
     951,   957,   967,   969,   971,   973,   975,   977,   979,   983,
     985,   987,   989,   991,   993,   995,   997,   999,  1001,  1004,
    1012,  1014,  1016,  1017,  1021,  1023,  1025,  1027,  1031,  1033,
    1037,  1041,  1043,  1047,  1049,  1051,  1053,  1057,  1060,  1061,
    1064,  1066,  1070,  1074,  1079,  1086,  1088,  1092,  1094,  1098,
    1100,  1104,  1105,  1108,  1110,  1114,  1118,  1119,  1121,  1123,
    1125,  1129,  1131,  1133,  1137,  1141,  1148,  1150,  1154,  1158,
    1162,  1168,  1173,  1177,  1181,  1183,  1185,  1187,  1189,  1191,
    1193,  1195,  1197,  1205,  1212,  1217,  1222,  1228,  1229,  1231,
    1234,  1236,  1240,  1244,  1247,  1251,  1258,  1259,  1261,  1263,
    1266,  1269,  1272,  1274,  1282,  1284,  1286,  1288,  1290,  1294,
    1301,  1305,  1309,  1312,  1316,  1318,  1322,  1325,  1329,  1333,
    1341,  1347,  1353,  1355,  1357,  1360,  1362,  1365,  1367,  1369,
    1373,  1377,  1381,  1385,  1387,  1388,  1391,  1393,  1396,  1398,
    1400,  1404,  1410,  1411,  1414
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     151,     0,    -1,   152,    -1,   155,    -1,   155,   141,    -1,
     219,    -1,   231,    -1,   211,    -1,   212,    -1,   217,    -1,
     232,    -1,   241,    -1,   243,    -1,   244,    -1,   245,    -1,
     250,    -1,   255,    -1,   256,    -1,   260,    -1,   262,    -1,
     263,    -1,   264,    -1,   265,    -1,   266,    -1,   257,    -1,
     267,    -1,   269,    -1,   270,    -1,   271,    -1,   249,    -1,
     272,    -1,   273,    -1,   274,    -1,   288,    -1,     3,    -1,
      16,    -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,
      26,    -1,    31,    -1,    35,    -1,    48,    -1,    51,    -1,
      52,    -1,    53,    -1,    54,    -1,    55,    -1,    65,    -1,
      67,    -1,    68,    -1,    70,    -1,    71,    -1,    72,    -1,
      82,    -1,    83,    -1,    84,    -1,    85,    -1,    87,    -1,
      86,    -1,    88,    -1,    90,    -1,    91,    -1,    94,    -1,
      95,    -1,    96,    -1,    98,    -1,   101,    -1,   104,    -1,
     105,    -1,   106,    -1,   107,    -1,   109,    -1,   110,    -1,
     114,    -1,   115,    -1,   116,    -1,   119,    -1,   120,    -1,
     121,    -1,   123,    -1,    66,    -1,   153,    -1,    77,    -1,
     112,    -1,   156,    -1,   155,   141,   156,    -1,   155,   286,
      -1,   157,    -1,   206,    -1,   158,    -1,    97,     3,   142,
     142,   158,   143,   159,   143,    -1,   165,    -1,    97,   166,
      50,   142,   162,   165,   143,   163,   164,    -1,    -1,   144,
     160,    -1,   161,    -1,   160,   144,   161,    -1,   154,    -1,
       5,    -1,    57,    -1,    -1,    80,    27,   189,    -1,    -1,
      69,     5,    -1,    69,     5,   144,     5,    -1,    97,   166,
      50,   170,   171,   181,   185,   184,   187,   191,   193,    -1,
     167,    -1,   166,   144,   167,    -1,   136,    -1,   169,   168,
      -1,    -1,   154,    -1,    18,   154,    -1,   199,    -1,    22,
     142,   199,   143,    -1,    71,   142,   199,   143,    -1,    73,
     142,   199,   143,    -1,   107,   142,   199,   143,    -1,    55,
     142,   199,   143,    -1,    35,   142,   136,   143,    -1,    54,
     142,   143,    -1,    35,   142,    41,   154,   143,    -1,   154,
      -1,   170,   144,   154,    -1,    -1,   172,    -1,   122,   173,
      -1,   174,    -1,   173,   125,   173,    -1,   142,   173,   143,
      -1,    70,   142,     8,   143,    -1,   175,    -1,   177,   128,
     178,    -1,   177,   129,   178,    -1,   177,    58,   142,   180,
     143,    -1,   177,   139,    58,   142,   180,   143,    -1,   177,
      58,     9,    -1,   177,   139,    58,     9,    -1,   177,    24,
     178,   125,   178,    -1,   177,   131,   178,    -1,   177,   130,
     178,    -1,   177,   132,   178,    -1,   177,   133,   178,    -1,
     177,   128,   179,    -1,   176,    -1,   177,    24,   179,   125,
     179,    -1,   177,    24,   178,   125,   179,    -1,   177,    24,
     179,   125,   178,    -1,   177,   131,   179,    -1,   177,   130,
     179,    -1,   177,   132,   179,    -1,   177,   133,   179,    -1,
     177,   128,     8,    -1,   177,   129,     8,    -1,   177,    64,
      78,    -1,   177,    64,   139,    78,    -1,   177,   129,   179,
      -1,   154,    -1,     4,    -1,    35,   142,   136,   143,    -1,
      54,   142,   143,    -1,   121,   142,   143,    -1,    57,    -1,
     276,    -1,    62,   142,   276,   143,    -1,    43,   142,   276,
     143,    -1,    25,   142,   276,   143,    -1,    45,   142,   143,
      -1,     5,    -1,   135,     5,    -1,     6,    -1,   135,     6,
      -1,    14,    -1,   178,    -1,   180,   144,   178,    -1,    -1,
      53,   182,    27,   183,    -1,    -1,     5,    -1,   177,    -1,
     183,   144,   177,    -1,    -1,    56,   175,    -1,    -1,   186,
      -1,   123,    53,    80,    27,   189,    -1,    -1,   188,    -1,
      80,    27,   189,    -1,    80,    27,    86,   142,   143,    -1,
     190,    -1,   189,   144,   190,    -1,   177,    -1,   177,    19,
      -1,   177,    39,    -1,    -1,   192,    -1,    69,     5,    -1,
      69,     5,   144,     5,    -1,    -1,   194,    -1,    79,   195,
      -1,   196,    -1,   195,   144,   196,    -1,   154,    -1,   154,
     128,   154,    -1,   154,   128,     5,    -1,   154,   128,   142,
     197,   143,    -1,   154,   128,   154,   142,     8,   143,    -1,
     154,   128,     8,    -1,   198,    -1,   197,   144,   198,    -1,
     154,   128,   178,    -1,   154,    -1,     4,    -1,    57,    -1,
       5,    -1,     6,    -1,    14,    -1,     9,    -1,   135,   199,
      -1,   139,   199,    -1,   199,   134,   199,    -1,   199,   135,
     199,    -1,   199,   136,   199,    -1,   199,   137,   199,    -1,
     199,   130,   199,    -1,   199,   131,   199,    -1,   199,   127,
     199,    -1,   199,   126,   199,    -1,   199,   138,   199,    -1,
     199,    42,   199,    -1,   199,    74,   199,    -1,   199,   133,
     199,    -1,   199,   132,   199,    -1,   199,   128,   199,    -1,
     199,   129,   199,    -1,   199,   125,   199,    -1,   199,   124,
     199,    -1,   142,   199,   143,    -1,   145,   203,   146,    -1,
     200,    -1,   276,    -1,   279,    -1,   275,    64,    78,    -1,
     275,    64,   139,    78,    -1,     3,   142,   201,   143,    -1,
      58,   142,   201,   143,    -1,    62,   142,   201,   143,    -1,
      25,   142,   201,   143,    -1,    47,   142,   201,   143,    -1,
      43,   142,   201,   143,    -1,     3,   142,   143,    -1,    73,
     142,   199,   144,   199,   143,    -1,    71,   142,   199,   144,
     199,   143,    -1,   121,   142,   143,    -1,     3,   142,   199,
      49,   154,    58,   275,   143,    -1,    93,   142,   199,   144,
     199,   144,   142,   201,   143,   144,   142,   201,   143,   143,
      -1,    86,   142,   143,    -1,    86,   142,   201,   143,    -1,
     202,    -1,   201,   144,   202,    -1,   199,    -1,     8,    -1,
     204,   128,   205,    -1,   203,   144,   204,   128,   205,    -1,
     154,    -1,    58,    -1,   178,    -1,   154,    -1,   102,   208,
      -1,    -1,    68,     8,    -1,   120,    -1,   105,   207,    -1,
      72,   207,    -1,    16,   105,   207,    -1,    85,    -1,    82,
      -1,    84,    -1,   110,   193,    -1,    16,     8,   105,   207,
      -1,    16,   154,   105,   207,    -1,   209,   154,   105,    -1,
     209,   154,   210,   100,    -1,   209,   154,    14,   100,    -1,
      59,    -1,   108,    -1,    -1,    30,     5,    -1,    99,   153,
     128,   214,    -1,    99,   153,   128,   213,    -1,    99,   153,
     128,    78,    -1,    99,    77,   215,    -1,    99,    10,   128,
     215,    -1,    99,    29,    99,   215,    -1,    99,    52,     9,
     128,   142,   180,   143,    -1,    99,    52,   153,   128,   213,
      -1,    99,    52,   153,   128,     5,    -1,    99,    59,   154,
      52,     9,   128,   142,   180,   143,    -1,   154,    -1,     8,
      -1,   113,    -1,    46,    -1,   178,    -1,   216,    -1,   215,
     135,   216,    -1,   154,    -1,    78,    -1,     8,    -1,     5,
      -1,     6,    -1,    33,    -1,    95,    -1,   218,    -1,    23,
      -1,   104,   112,    -1,   220,    63,   154,   221,   118,   224,
     228,    -1,    60,    -1,    92,    -1,    -1,   142,   223,   143,
      -1,   154,    -1,    57,    -1,   222,    -1,   223,   144,   222,
      -1,   225,    -1,   224,   144,   225,    -1,   142,   226,   143,
      -1,   227,    -1,   226,   144,   227,    -1,   178,    -1,   179,
      -1,     8,    -1,   142,   180,   143,    -1,   142,   143,    -1,
      -1,    79,   229,    -1,   230,    -1,   229,   144,   230,    -1,
       3,   128,     8,    -1,    38,    50,   170,   172,    -1,    28,
     154,   142,   233,   236,   143,    -1,   234,    -1,   233,   144,
     234,    -1,   227,    -1,   142,   235,   143,    -1,     8,    -1,
     235,   144,     8,    -1,    -1,   144,   237,    -1,   238,    -1,
     237,   144,   238,    -1,   227,   239,   240,    -1,    -1,    18,
      -1,   154,    -1,    69,    -1,   242,   154,   207,    -1,    40,
      -1,    39,    -1,   102,   109,   207,    -1,   102,    37,   207,
      -1,   117,   170,    99,   246,   172,   193,    -1,   247,    -1,
     246,   144,   247,    -1,   154,   128,   178,    -1,   154,   128,
     179,    -1,   154,   128,   142,   180,   143,    -1,   154,   128,
     142,   143,    -1,   276,   128,   178,    -1,   276,   128,   179,
      -1,    62,    -1,    25,    -1,    47,    -1,    26,    -1,    75,
      -1,    76,    -1,    66,    -1,   106,    -1,    17,   108,   154,
      15,    32,   154,   248,    -1,    17,   108,   154,    44,    32,
     154,    -1,    17,    96,   154,    89,    -1,   102,   258,   119,
     251,    -1,   102,   258,   119,    68,     8,    -1,    -1,   252,
      -1,   122,   253,    -1,   254,    -1,   253,   124,   254,    -1,
     154,   128,     8,    -1,   102,    31,    -1,   102,    29,    99,
      -1,    99,   258,   112,    65,    67,   259,    -1,    -1,    52,
      -1,   101,    -1,    88,   116,    -1,    88,    34,    -1,    91,
      88,    -1,    98,    -1,    36,    51,   154,    94,   261,   103,
       8,    -1,    61,    -1,    25,    -1,    47,    -1,   106,    -1,
      44,    51,   154,    -1,    20,    59,   154,   111,    96,   154,
      -1,    48,    96,   154,    -1,    48,    87,   154,    -1,    48,
      21,    -1,    97,   268,   191,    -1,    10,    -1,    10,   147,
     154,    -1,    97,   199,    -1,   114,    96,   154,    -1,    81,
      59,   154,    -1,    36,    83,   154,   115,     8,   103,     8,
      -1,    44,    83,   154,   115,     8,    -1,    90,    84,    50,
     103,     8,    -1,   276,    -1,   154,    -1,   154,   277,    -1,
     278,    -1,   277,   278,    -1,    13,    -1,    14,    -1,   148,
     199,   149,    -1,   148,     8,   149,    -1,   199,   128,   280,
      -1,   280,   128,   199,    -1,     8,    -1,    -1,   282,   285,
      -1,    27,    -1,   284,   168,    -1,   199,    -1,   283,    -1,
     285,   144,   283,    -1,    45,   285,   281,   187,   191,    -1,
      -1,    50,     8,    -1,    90,    59,   154,   287,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   176,   176,   177,   178,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   221,   222,   222,   222,   222,   222,
     222,   223,   223,   223,   223,   224,   224,   224,   224,   224,
     225,   225,   225,   225,   225,   226,   226,   226,   226,   226,
     226,   226,   227,   227,   227,   227,   227,   228,   228,   228,
     228,   228,   229,   229,   229,   229,   229,   229,   230,   230,
     230,   230,   231,   235,   235,   235,   241,   242,   243,   247,
     248,   252,   253,   261,   262,   269,   271,   275,   279,   286,
     287,   288,   292,   305,   312,   314,   319,   328,   344,   345,
     349,   350,   353,   355,   356,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   372,   373,   376,   378,   382,   386,
     387,   388,   392,   397,   401,   408,   416,   424,   433,   438,
     443,   448,   453,   458,   463,   468,   473,   478,   483,   488,
     493,   498,   503,   508,   513,   518,   523,   528,   536,   540,
     541,   546,   552,   558,   564,   570,   571,   572,   573,   574,
     578,   579,   590,   591,   592,   596,   602,   608,   610,   613,
     615,   622,   626,   632,   634,   640,   642,   646,   657,   659,
     663,   667,   674,   675,   679,   680,   681,   684,   686,   690,
     695,   702,   704,   708,   712,   713,   717,   722,   727,   732,
     738,   743,   751,   756,   763,   773,   774,   775,   776,   777,
     778,   779,   780,   781,   783,   784,   785,   786,   787,   788,
     789,   790,   791,   792,   793,   794,   795,   796,   797,   798,
     799,   800,   801,   802,   803,   804,   805,   806,   810,   811,
     812,   813,   814,   815,   816,   817,   818,   819,   820,   821,
     822,   823,   827,   828,   832,   833,   837,   838,   842,   843,
     847,   848,   854,   857,   859,   863,   864,   865,   866,   867,
     868,   869,   870,   871,   876,   881,   886,   891,   900,   901,
     904,   906,   914,   919,   924,   929,   930,   931,   935,   940,
     945,   950,   959,   960,   964,   965,   966,   978,   979,   983,
     984,   985,   986,   987,   994,   995,   996,  1000,  1001,  1007,
    1015,  1016,  1019,  1021,  1025,  1026,  1030,  1031,  1035,  1036,
    1040,  1044,  1045,  1049,  1050,  1051,  1052,  1053,  1056,  1057,
    1061,  1062,  1066,  1072,  1082,  1090,  1094,  1101,  1102,  1109,
    1119,  1125,  1127,  1131,  1136,  1140,  1147,  1149,  1153,  1154,
    1160,  1168,  1169,  1175,  1179,  1185,  1193,  1194,  1198,  1212,
    1218,  1222,  1227,  1241,  1252,  1253,  1254,  1255,  1256,  1257,
    1258,  1259,  1263,  1271,  1278,  1289,  1293,  1300,  1301,  1305,
    1309,  1310,  1314,  1318,  1325,  1332,  1338,  1339,  1340,  1344,
    1345,  1346,  1347,  1353,  1364,  1365,  1366,  1367,  1372,  1383,
    1395,  1404,  1413,  1423,  1431,  1432,  1436,  1446,  1457,  1468,
    1479,  1489,  1500,  1501,  1505,  1508,  1509,  1513,  1514,  1515,
    1516,  1520,  1521,  1525,  1530,  1532,  1536,  1545,  1549,  1557,
    1558,  1562,  1573,  1575,  1582
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_IDENT", "TOK_ATIDENT", 
  "TOK_CONST_INT", "TOK_CONST_FLOAT", "TOK_CONST_MVA", 
  "TOK_QUOTED_STRING", "TOK_USERVAR", "TOK_SYSVAR", "TOK_CONST_STRINGS", 
  "TOK_BAD_NUMERIC", "TOK_SUBKEY", "TOK_DOT_NUMBER", "TOK_ADD", 
  "TOK_AGENT", "TOK_ALTER", "TOK_AS", "TOK_ASC", "TOK_ATTACH", 
  "TOK_ATTRIBUTES", "TOK_AVG", "TOK_BEGIN", "TOK_BETWEEN", "TOK_BIGINT", 
  "TOK_BOOL", "TOK_BY", "TOK_CALL", "TOK_CHARACTER", "TOK_CHUNK", 
  "TOK_COLLATION", "TOK_COLUMN", "TOK_COMMIT", "TOK_COMMITTED", 
  "TOK_COUNT", "TOK_CREATE", "TOK_DATABASES", "TOK_DELETE", "TOK_DESC", 
  "TOK_DESCRIBE", "TOK_DISTINCT", "TOK_DIV", "TOK_DOUBLE", "TOK_DROP", 
  "TOK_FACET", "TOK_FALSE", "TOK_FLOAT", "TOK_FLUSH", "TOK_FOR", 
  "TOK_FROM", "TOK_FUNCTION", "TOK_GLOBAL", "TOK_GROUP", "TOK_GROUPBY", 
  "TOK_GROUP_CONCAT", "TOK_HAVING", "TOK_ID", "TOK_IN", "TOK_INDEX", 
  "TOK_INSERT", "TOK_INT", "TOK_INTEGER", "TOK_INTO", "TOK_IS", 
  "TOK_ISOLATION", "TOK_JSON", "TOK_LEVEL", "TOK_LIKE", "TOK_LIMIT", 
  "TOK_MATCH", "TOK_MAX", "TOK_META", "TOK_MIN", "TOK_MOD", "TOK_MULTI", 
  "TOK_MULTI64", "TOK_NAMES", "TOK_NULL", "TOK_OPTION", "TOK_ORDER", 
  "TOK_OPTIMIZE", "TOK_PLAN", "TOK_PLUGIN", "TOK_PLUGINS", "TOK_PROFILE", 
  "TOK_RAND", "TOK_RAMCHUNK", "TOK_READ", "TOK_RECONFIGURE", "TOK_RELOAD", 
  "TOK_REPEATABLE", "TOK_REPLACE", "TOK_REMAP", "TOK_RETURNS", 
  "TOK_ROLLBACK", "TOK_RTINDEX", "TOK_SELECT", "TOK_SERIALIZABLE", 
  "TOK_SET", "TOK_SETTINGS", "TOK_SESSION", "TOK_SHOW", "TOK_SONAME", 
  "TOK_START", "TOK_STATUS", "TOK_STRING", "TOK_SUM", "TOK_TABLE", 
  "TOK_TABLES", "TOK_THREADS", "TOK_TO", "TOK_TRANSACTION", "TOK_TRUE", 
  "TOK_TRUNCATE", "TOK_TYPE", "TOK_UNCOMMITTED", "TOK_UPDATE", 
  "TOK_VALUES", "TOK_VARIABLES", "TOK_WARNINGS", "TOK_WEIGHT", 
  "TOK_WHERE", "TOK_WITHIN", "TOK_OR", "TOK_AND", "'|'", "'&'", "'='", 
  "TOK_NE", "'<'", "'>'", "TOK_GTE", "TOK_LTE", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "TOK_NOT", "TOK_NEG", "';'", "'('", "')'", "','", "'{'", 
  "'}'", "'.'", "'['", "']'", "$accept", "request", "statement", 
  "ident_set", "ident", "multi_stmt_list", "multi_stmt", "select", 
  "select1", "opt_tablefunc_args", "tablefunc_args_list", "tablefunc_arg", 
  "subselect_start", "opt_outer_order", "opt_outer_limit", "select_from", 
  "select_items_list", "select_item", "opt_alias", "select_expr", 
  "ident_list", "opt_where_clause", "where_clause", "where_expr", 
  "where_item", "filter_item", "expr_float_unhandled", "expr_ident", 
  "const_int", "const_float", "const_list", "opt_group_clause", "opt_int", 
  "group_items_list", "opt_having_clause", "opt_group_order_clause", 
  "group_order_clause", "opt_order_clause", "order_clause", 
  "order_items_list", "order_item", "opt_limit_clause", "limit_clause", 
  "opt_option_clause", "option_clause", "option_list", "option_item", 
  "named_const_list", "named_const", "expr", "function", "arglist", "arg", 
  "consthash", "hash_key", "hash_val", "show_stmt", "like_filter", 
  "show_what", "index_or_table", "opt_chunk", "set_stmt", 
  "set_global_stmt", "set_string_value", "boolean_value", "set_value", 
  "simple_set_value", "transact_op", "start_transaction", "insert_into", 
  "insert_or_replace", "opt_column_list", "column_ident", "column_list", 
  "insert_rows_list", "insert_row", "insert_vals_list", "insert_val", 
  "opt_insert_options", "insert_options_list", "insert_option", 
  "delete_from", "call_proc", "call_args_list", "call_arg", 
  "const_string_list", "opt_call_opts_list", "call_opts_list", "call_opt", 
  "opt_as", "call_opt_name", "describe", "describe_tok", "show_tables", 
  "show_databases", "update", "update_items_list", "update_item", 
  "alter_col_type", "alter", "show_variables", "opt_show_variables_where", 
  "show_variables_where", "show_variables_where_list", 
  "show_variables_where_entry", "show_collation", "show_character_set", 
  "set_transaction", "opt_scope", "isolation_level", "create_function", 
  "udf_type", "drop_function", "attach_index", "flush_rtindex", 
  "flush_ramchunk", "flush_index", "select_sysvar", "sysvar_name", 
  "select_dual", "truncate", "optimize_index", "create_plugin", 
  "drop_plugin", "reload_plugins", "json_field", "json_expr", "subscript", 
  "subkey", "streq", "strval", "opt_facet_by_items_list", "facet_by", 
  "facet_item", "facet_expr", "facet_items_list", "facet_stmt", 
  "opt_reload_index_from", "reload_index", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   124,    38,    61,   381,
      60,    62,   382,   383,    43,    45,    42,    47,    37,   384,
     385,    59,    40,    41,    44,   123,   125,    46,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   150,   151,   151,   151,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   154,   154,   154,   155,   155,   155,   156,
     156,   157,   157,   158,   158,   159,   159,   160,   160,   161,
     161,   161,   162,   163,   164,   164,   164,   165,   166,   166,
     167,   167,   168,   168,   168,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   170,   170,   171,   171,   172,   173,
     173,   173,   174,   174,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   176,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     178,   178,   179,   179,   179,   180,   180,   181,   181,   182,
     182,   183,   183,   184,   184,   185,   185,   186,   187,   187,
     188,   188,   189,   189,   190,   190,   190,   191,   191,   192,
     192,   193,   193,   194,   195,   195,   196,   196,   196,   196,
     196,   196,   197,   197,   198,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   201,   201,   202,   202,   203,   203,   204,   204,
     205,   205,   206,   207,   207,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   209,   209,
     210,   210,   211,   211,   211,   211,   211,   211,   212,   212,
     212,   212,   213,   213,   214,   214,   214,   215,   215,   216,
     216,   216,   216,   216,   217,   217,   217,   218,   218,   219,
     220,   220,   221,   221,   222,   222,   223,   223,   224,   224,
     225,   226,   226,   227,   227,   227,   227,   227,   228,   228,
     229,   229,   230,   231,   232,   233,   233,   234,   234,   235,
     235,   236,   236,   237,   237,   238,   239,   239,   240,   240,
     241,   242,   242,   243,   244,   245,   246,   246,   247,   247,
     247,   247,   247,   247,   248,   248,   248,   248,   248,   248,
     248,   248,   249,   249,   249,   250,   250,   251,   251,   252,
     253,   253,   254,   255,   256,   257,   258,   258,   258,   259,
     259,   259,   259,   260,   261,   261,   261,   261,   262,   263,
     264,   265,   266,   267,   268,   268,   269,   270,   271,   272,
     273,   274,   275,   275,   276,   277,   277,   278,   278,   278,
     278,   279,   279,   280,   281,   281,   282,   283,   284,   285,
     285,   286,   287,   287,   288
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     1,
       1,     1,     8,     1,     9,     0,     2,     1,     3,     1,
       1,     1,     0,     3,     0,     2,     4,    11,     1,     3,
       1,     2,     0,     1,     2,     1,     4,     4,     4,     4,
       4,     4,     3,     5,     1,     3,     0,     1,     2,     1,
       3,     3,     4,     1,     3,     3,     5,     6,     3,     4,
       5,     3,     3,     3,     3,     3,     1,     5,     5,     5,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     1,
       1,     4,     3,     3,     1,     1,     4,     4,     4,     3,
       1,     2,     1,     2,     1,     1,     3,     0,     4,     0,
       1,     1,     3,     0,     2,     0,     1,     5,     0,     1,
       3,     5,     1,     3,     1,     2,     2,     0,     1,     2,
       4,     0,     1,     2,     1,     3,     1,     3,     3,     5,
       6,     3,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     3,     4,     4,     4,
       4,     4,     4,     4,     3,     6,     6,     3,     8,    14,
       3,     4,     1,     3,     1,     1,     3,     5,     1,     1,
       1,     1,     2,     0,     2,     1,     2,     2,     3,     1,
       1,     1,     2,     4,     4,     3,     4,     4,     1,     1,
       0,     2,     4,     4,     4,     3,     4,     4,     7,     5,
       5,     9,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     7,
       1,     1,     0,     3,     1,     1,     1,     3,     1,     3,
       3,     1,     3,     1,     1,     1,     3,     2,     0,     2,
       1,     3,     3,     4,     6,     1,     3,     1,     3,     1,
       3,     0,     2,     1,     3,     3,     0,     1,     1,     1,
       3,     1,     1,     3,     3,     6,     1,     3,     3,     3,
       5,     4,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     7,     6,     4,     4,     5,     0,     1,     2,
       1,     3,     3,     2,     3,     6,     0,     1,     1,     2,
       2,     2,     1,     7,     1,     1,     1,     1,     3,     6,
       3,     3,     2,     3,     1,     3,     2,     3,     3,     7,
       5,     5,     1,     1,     2,     1,     2,     1,     1,     3,
       3,     3,     3,     1,     0,     2,     1,     2,     1,     1,
       3,     5,     0,     2,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       0,     0,     0,   317,     0,   314,     0,     0,   362,   361,
       0,     0,   320,     0,     0,   321,   315,     0,   396,   396,
       0,     0,     0,     0,     2,     3,    86,    89,    91,    93,
      90,     7,     8,     9,   316,     5,     0,     6,    10,    11,
       0,    12,    13,    14,    29,    15,    16,    17,    24,    18,
      19,    20,    21,    22,    23,    25,    26,    27,    28,    30,
      31,    32,    33,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    82,    50,    51,    52,    53,    54,    84,    55,
      56,    57,    58,    60,    59,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    85,
      75,    76,    77,    78,    79,    80,    81,    83,     0,     0,
       0,     0,     0,     0,   412,     0,     0,     0,     0,     0,
      34,   216,   218,   219,   433,   221,   414,   220,    38,     0,
      42,     0,     0,    47,    48,   217,     0,     0,    53,     0,
      60,     0,    72,    80,     0,   110,     0,     0,     0,   215,
       0,   108,   112,   115,   243,   197,     0,   244,   245,     0,
       0,     0,    45,     0,     0,    68,     0,     0,     0,     0,
     393,   273,   397,   288,   273,   280,   281,   279,   398,   273,
     289,   273,   201,   275,   272,     0,     0,   318,     0,   124,
       0,     1,     0,     4,    88,     0,   273,     0,     0,     0,
       0,     0,     0,     0,   408,     0,   411,   410,   418,   442,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    53,
       0,   222,   223,     0,   269,   268,     0,     0,   427,   428,
       0,   424,   425,     0,     0,     0,   113,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   413,   198,     0,     0,
       0,     0,     0,     0,     0,   312,   313,   311,   310,   309,
     295,   307,     0,     0,     0,   273,     0,   394,     0,   364,
     277,   276,   363,     0,   282,   202,   290,   387,   417,     0,
       0,   438,   439,   112,   434,     0,     0,    87,   322,   360,
     384,     0,     0,     0,   170,   172,   335,   174,     0,     0,
     333,   334,   347,   351,   345,     0,     0,     0,   343,     0,
       0,   444,     0,   265,     0,   254,   264,     0,   262,   415,
       0,   264,     0,     0,     0,     0,     0,   122,     0,     0,
       0,     0,     0,   260,     0,     0,     0,   257,     0,     0,
       0,   241,     0,   242,     0,   433,     0,   426,   102,   126,
     109,   115,   114,   233,   234,   240,   239,   231,   230,   237,
     431,   238,   228,   229,   236,   235,   224,   225,   226,   227,
     232,   199,   246,     0,   432,   296,   297,     0,     0,     0,
       0,   303,   305,   294,   304,     0,   302,   306,   293,   292,
       0,   273,   278,   273,   274,   206,   203,   204,     0,     0,
     285,     0,     0,     0,   385,   388,     0,     0,   366,     0,
     125,   437,   436,     0,   188,     0,     0,     0,     0,     0,
       0,   171,   173,   349,   337,   175,     0,     0,     0,     0,
     405,   406,   404,   407,     0,     0,   160,     0,    42,     0,
       0,    47,   164,     0,    52,    80,     0,   159,   128,   129,
     133,   146,     0,   165,   420,   443,   421,     0,     0,     0,
     248,     0,   116,   251,     0,   121,   253,   252,   120,   249,
     250,   117,     0,   118,     0,   261,     0,   119,     0,     0,
       0,   271,   270,   266,   430,   429,     0,   177,   127,     0,
     247,     0,   300,   299,     0,   308,     0,   283,   284,     0,
       0,   287,   291,   286,   386,     0,   389,   390,     0,     0,
     201,     0,   440,     0,   197,   189,   435,   325,   324,   326,
       0,     0,     0,   383,   409,   336,     0,   348,     0,   356,
     346,   352,   353,   344,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,     0,   263,   123,
       0,     0,     0,     0,     0,     0,   179,   185,   200,     0,
       0,     0,     0,   402,   395,   208,   211,     0,   207,   205,
       0,     0,     0,   368,   369,   367,   365,   372,   373,     0,
     441,   323,     0,     0,   338,   328,   375,   377,   376,   374,
     380,   378,   379,   381,   382,   176,   350,   357,     0,     0,
     403,   419,     0,     0,     0,     0,   169,   162,     0,     0,
     163,   131,   130,     0,     0,   138,     0,   156,     0,   154,
     134,   145,   155,   135,   158,   142,   151,   141,   150,   143,
     152,   144,   153,     0,     0,     0,     0,   256,   255,     0,
     267,     0,     0,   180,     0,     0,   183,   186,   298,     0,
     400,   399,   401,     0,     0,   212,     0,   392,   391,   371,
       0,    60,   194,   190,   192,   327,     0,     0,   331,     0,
       0,   319,   359,   358,   355,   356,   354,   168,   161,   167,
     166,   132,     0,     0,     0,   157,   139,     0,   100,   101,
      99,    96,    97,    92,   423,     0,   422,     0,     0,     0,
     104,     0,     0,     0,   188,     0,     0,   209,     0,     0,
     370,     0,   195,   196,     0,   330,     0,     0,   339,   340,
     329,   140,   148,   149,   147,   136,     0,     0,   258,     0,
       0,     0,    94,   181,   178,     0,   184,   197,   301,   214,
     213,   210,   191,   193,   332,     0,     0,   137,    98,     0,
     103,   105,     0,     0,   201,   342,   341,     0,     0,   182,
     187,   107,     0,   106,     0,     0,   259
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    23,    24,   117,   159,    25,    26,    27,    28,   675,
     731,   732,   516,   740,   772,    29,   160,   161,   257,   162,
     379,   517,   338,   478,   479,   480,   481,   482,   455,   331,
     456,   597,   684,   774,   744,   686,   687,   544,   545,   703,
     704,   276,   277,   304,   305,   426,   427,   694,   695,   351,
     164,   347,   348,   246,   247,   513,    30,   299,   194,   195,
     431,    31,    32,   418,   419,   290,   291,    33,    34,    35,
      36,   447,   549,   550,   624,   625,   707,   332,   711,   758,
     759,    37,    38,   333,   334,   457,   459,   561,   562,   638,
     714,    39,    40,    41,    42,    43,   437,   438,   634,    44,
      45,   434,   435,   536,   537,    46,    47,    48,   177,   604,
      49,   464,    50,    51,    52,    53,    54,    55,   165,    56,
      57,    58,    59,    60,    61,   166,   167,   251,   252,   168,
     169,   444,   445,   312,   313,   314,   204,   341,    62
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -688
static const short yypact[] =
{
    4483,    -6,    74,  -688,  3855,  -688,    31,    37,  -688,  -688,
      48,    33,  -688,    89,    21,  -688,  -688,   748,  2978,   419,
     107,    60,  3855,   237,  -688,    10,  -688,  -688,  -688,  -688,
    -688,  -688,  -688,  -688,  -688,  -688,   152,  -688,  -688,  -688,
    3855,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,
    -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,
    -688,  -688,  -688,  3855,  3855,  3855,  -688,  -688,  -688,  -688,
    -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,
    -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,
    -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,
    -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,
    -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,   106,  3855,
    3855,  3855,  3855,  3855,  -688,  3855,  3855,  3855,  3855,   190,
     108,  -688,  -688,  -688,  -688,  -688,   111,  -688,   113,   130,
     143,   145,   149,   156,   162,  -688,   166,   172,   197,   208,
     220,   225,   227,   232,  1749,  -688,  1749,  1749,  3313,    28,
      -7,  -688,  3421,    98,  -688,   184,   205,   230,  -688,   133,
     204,   259,  3963,  3855,  2870,   264,   249,   273,  3531,   287,
    -688,   320,  -688,  -688,   320,  -688,  -688,  -688,  -688,   320,
    -688,   320,   311,  -688,  -688,  3855,   272,  -688,  3855,  -688,
     -36,  -688,  1749,    -8,  -688,  3855,   320,   304,    56,   283,
      20,   301,   281,   -12,  -688,   282,  -688,  -688,  -688,   348,
     305,   891,  3855,  1749,  1892,    45,  1892,  1892,   267,  1749,
    1892,  1892,  1749,  1749,  1034,  1749,  1749,   268,   265,   270,
     271,  -688,  -688,  4196,  -688,  -688,    97,   286,  -688,  -688,
    2035,    39,  -688,  2393,  1177,  3855,  -688,  -688,  1749,  1749,
    1749,  1749,  1749,  1749,  1749,  1749,  1749,  1749,  1749,  1749,
    1749,  1749,  1749,  1749,  1749,   410,  -688,  -688,   -27,  1749,
    2870,  2870,   288,   289,   366,  -688,  -688,  -688,  -688,  -688,
     284,  -688,  2516,   355,   316,    25,   318,  -688,   416,  -688,
    -688,  -688,  -688,  3855,  -688,  -688,    83,   -11,  -688,  3855,
    3855,  4500,  -688,  3421,     6,  1320,   279,  -688,   292,  -688,
    -688,   396,   398,   335,  -688,  -688,  -688,  -688,    90,     9,
    -688,  -688,  -688,   293,  -688,   195,   428,  2162,  -688,   431,
     432,  -688,   433,   315,  1463,  -688,  4484,   -16,  -688,  -688,
    4229,  4500,    49,  3855,   306,   101,   103,  -688,  4262,   122,
     124,  3997,  4032,  -688,   127,  4062,  4295,  -688,  1606,  1749,
    1749,  -688,  3313,  -688,   626,   298,  3964,  -688,  -688,   -12,
    -688,  4500,  -688,  -688,  -688,  4514,   464,  3440,   329,   743,
    -688,   743,    61,    61,    61,    61,   126,   126,  -688,  -688,
    -688,   307,  -688,   374,   743,   284,   284,   313,  3097,   459,
    2870,  -688,  -688,  -688,  -688,   465,  -688,  -688,  -688,  -688,
     408,   320,  -688,   320,  -688,   346,   332,  -688,   377,   474,
    -688,   380,   473,  3855,  -688,  -688,    32,    68,  -688,   356,
    -688,  -688,  -688,  1749,   406,  1749,  3639,   369,  3855,  3855,
    3855,  -688,  -688,  -688,  -688,  -688,   131,   138,    20,   345,
    -688,  -688,  -688,  -688,   386,   387,  -688,   350,   351,   352,
     353,   354,  -688,   357,   363,   365,  2162,    39,   372,  -688,
    -688,  -688,   215,  -688,  -688,  -688,  -688,  1177,   368,  3855,
    -688,  1892,  -688,  -688,   373,  -688,  -688,  -688,  -688,  -688,
    -688,  -688,  1749,  -688,  1749,  -688,  1749,  -688,  4097,  4130,
     370,  -688,  -688,  -688,  -688,  -688,   411,   456,  -688,   507,
    -688,    30,  -688,  -688,   389,  -688,   119,  -688,  -688,  2285,
    3855,  -688,  -688,  -688,  -688,   390,   391,  -688,    42,  3855,
     311,    44,  -688,   492,   184,  -688,   379,  -688,  -688,  -688,
     140,   388,   407,  -688,  -688,  -688,    30,  -688,   523,    -2,
    -688,   392,  -688,  -688,   524,   525,  3855,   401,  3855,   397,
     399,  3855,   526,   400,    78,  2162,    44,     4,   -14,    67,
      71,    44,    44,    44,    44,   483,   402,   489,  -688,  -688,
    4328,  4361,  4163,   626,  1177,   405,   544,   427,  -688,   153,
     409,    73,   466,  -688,  -688,  -688,  -688,  3855,   414,  -688,
     545,  3855,    14,  -688,  -688,  -688,  -688,  -688,  -688,  2637,
    -688,  -688,  3639,    24,   -35,  -688,  -688,  -688,  -688,  -688,
    -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  3747,    24,
    -688,  -688,    39,   415,   417,   422,  -688,  -688,   423,   425,
    -688,  -688,  -688,   444,   445,  -688,    30,  -688,   479,  -688,
    -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,
    -688,  -688,  -688,    22,  3205,   429,  3855,  -688,  -688,   434,
    -688,    38,   472,  -688,   546,   521,   522,  -688,  -688,    30,
    -688,  -688,  -688,   452,   159,  -688,   573,  -688,  -688,  -688,
     169,   440,    65,   439,  -688,  -688,    18,   191,  -688,   581,
     388,  -688,  -688,  -688,  -688,   567,  -688,  -688,  -688,  -688,
    -688,  -688,    44,    44,   198,  -688,  -688,    30,  -688,  -688,
    -688,   442,  -688,  -688,    39,   462,  -688,  1892,  3855,   560,
     537,  2751,   528,  2751,   406,   209,    30,  -688,  3855,   467,
    -688,   468,  -688,  -688,  2751,  -688,    24,   481,   469,  -688,
    -688,  -688,  -688,  -688,  -688,  -688,   213,  3205,  -688,   216,
    2751,   607,  -688,  -688,   470,   589,  -688,   184,  -688,  -688,
    -688,  -688,  -688,  -688,  -688,   609,   581,  -688,  -688,   475,
     439,   476,  2751,  2751,   311,  -688,  -688,   480,   616,  -688,
     439,  -688,  1892,  -688,   222,   482,  -688
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -688,  -688,  -688,     3,    -4,  -688,   420,  -688,   280,  -688,
    -688,  -139,  -688,  -688,  -688,   114,    41,   378,   323,  -688,
      17,  -688,  -301,  -436,  -688,  -110,  -688,  -607,  -201,  -514,
    -511,  -688,  -688,  -688,  -688,  -688,  -688,  -107,  -688,  -687,
    -116,  -539,  -688,  -534,  -688,  -688,   109,  -688,  -108,    57,
    -688,  -223,   150,  -688,   278,    50,  -688,  -169,  -688,  -688,
    -688,  -688,  -688,   236,  -688,   -76,   235,  -688,  -688,  -688,
    -688,  -688,    34,  -688,  -688,   -57,  -688,  -456,  -688,  -688,
    -132,  -688,  -688,  -688,   200,  -688,  -688,  -688,    16,  -688,
    -688,  -688,  -688,  -688,  -688,  -688,  -688,   120,  -688,  -688,
    -688,  -688,  -688,  -688,    51,  -688,  -688,  -688,   641,  -688,
    -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,  -688,
    -688,  -688,  -688,  -688,  -688,   -13,  -166,  -688,   413,  -688,
     403,  -688,  -688,   223,  -688,   224,  -688,  -688,  -688
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -434
static const short yytable[] =
{
     118,   352,   559,   355,   356,   620,   616,   359,   360,   330,
     599,   364,   702,   655,   324,   300,   637,   453,   199,   324,
     301,   176,   302,   324,   614,   324,   325,   618,   326,   324,
     325,   726,   326,   442,   327,   324,   206,   319,   327,   200,
     574,   248,   249,   253,   709,   248,   249,   324,   325,   324,
     325,   402,   248,   249,   124,   202,   327,   432,   327,   207,
     208,   209,   654,   309,   657,   661,   664,   666,   668,   670,
     672,   321,   324,   325,   163,   659,   324,   325,   518,   662,
     128,   327,   119,   790,   752,   327,   353,   121,   738,   315,
      63,   417,  -423,   298,   316,   451,   452,   428,  -416,   122,
     322,   700,    64,   258,   753,   129,   800,   690,   310,   710,
     337,   433,   403,   429,   120,   211,   212,   199,   214,   215,
     125,   216,   217,   218,   219,   658,   422,   490,   491,   126,
     -70,   123,   310,    65,   773,   259,   540,   254,   213,   652,
     258,  -347,  -347,   439,   415,   724,   656,   702,   127,   415,
     443,   203,   454,   415,   245,   328,   198,   699,   256,   328,
     538,   454,   329,   702,   727,   415,   706,   708,   258,   284,
     289,   483,   259,   512,   296,   283,   250,   328,   745,   328,
     250,   354,   254,   715,   612,   799,   702,   250,   430,   691,
     337,   306,   493,   491,   308,   270,   271,   272,   273,   274,
     259,   318,   328,   575,   405,   406,   328,   601,   762,   764,
     602,   241,   539,   242,   243,   205,   766,   603,   349,   197,
     460,   651,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   201,   794,   576,
     220,   372,   461,   373,   496,   491,   497,   491,   210,   199,
     221,   382,   527,   275,   528,   223,   462,   330,   222,   311,
     801,   279,   272,   273,   274,   499,   491,   500,   491,   278,
     505,   491,   224,   577,   555,   556,   289,   289,   346,   578,
     350,   557,   558,   621,   622,   225,   358,   226,   416,   361,
     362,   227,   365,   366,  -422,   178,   688,   556,   228,   425,
     784,   463,   747,   748,   229,   436,   440,   376,   230,   256,
     483,   381,   750,   556,   231,   383,   384,   385,   386,   387,
     388,   389,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   280,   477,   755,   756,   404,   613,   183,   232,
     617,   765,   556,   579,   580,   581,   582,   583,   584,   494,
     233,   184,   778,   556,   585,   635,   787,   556,   281,   789,
     491,   185,   234,   186,   187,   805,   491,   235,   245,   236,
     511,   258,   381,   439,   237,   653,  -398,   292,   660,   663,
     665,   667,   669,   671,   189,   293,   297,   190,   298,   192,
     303,   307,   512,   320,   323,   335,   336,   339,   340,   193,
     643,   243,   645,   259,   416,   648,   289,   368,   342,   483,
     357,   367,   369,   370,   374,   401,   407,   408,   409,   410,
     420,   421,   330,   423,   424,   346,   508,   509,   448,   535,
     449,   450,   626,   627,   446,   178,   465,   458,   330,   484,
     485,   486,   548,  -433,   552,   553,   554,   514,   179,   495,
     180,   519,   520,   483,   628,   521,   181,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   524,   629,
     451,   182,   477,   630,   529,   526,   530,   531,   183,   532,
     533,   534,   631,   632,   541,   587,   543,   551,   563,   564,
     565,   184,   566,   567,   568,   569,   570,   575,   593,   571,
     311,   185,   311,   186,   187,   572,   258,   573,   594,   596,
     736,   586,   598,   633,   769,   611,   589,   600,   610,   619,
     188,   761,   763,   443,   189,   608,   425,   190,   191,   192,
     623,   636,   640,   641,   649,   436,   639,   644,   259,   193,
     646,   673,   647,   650,   381,   779,   674,   676,   682,   683,
     685,   689,   739,   697,   692,   330,   696,   725,   717,   590,
     718,   591,   642,   592,   642,   719,   720,   642,   721,   722,
     723,   477,   733,   741,   742,   483,   737,   483,   743,   804,
     746,   749,   751,   754,   757,   637,   767,   770,   483,   511,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   693,   483,   768,   771,   535,   775,   785,
     781,   782,   791,   786,   792,   477,   793,   795,   548,   797,
     798,   803,   802,   317,   488,   806,   483,   483,   788,    66,
     595,   324,   380,   776,   713,   681,   441,   777,   783,   609,
     780,   588,    67,   680,   523,   525,    68,    69,    70,    71,
     510,   381,    72,   760,   796,   716,   705,    73,   560,   615,
     196,    74,   698,   735,   377,     0,   542,   390,     0,   546,
     730,     0,   734,     0,    75,     0,     0,    76,    77,    78,
      79,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,    82,    83,    84,     0,    85,    86,    87,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,    92,    93,    94,    95,     0,    96,    97,     0,     0,
      98,    99,   100,     0,   101,     0,     0,   102,     0,     0,
     103,   104,   105,   106,   199,   107,   108,   477,   109,   477,
     110,   111,   112,     0,   693,   113,   114,   115,     0,   116,
     477,   130,   131,   132,   133,     0,   134,   135,   136,     0,
       0,   415,   137,   730,    67,     0,   477,     0,    68,    69,
     138,    71,     0,   139,    72,     0,     0,     0,     0,    73,
       0,     0,     0,   140,     0,   258,     0,     0,   477,   477,
       0,   141,     0,     0,     0,   142,    75,     0,     0,    76,
      77,    78,   143,   144,     0,   145,   146,     0,     0,     0,
     147,     0,     0,    81,    82,    83,    84,   259,    85,   148,
      87,   149,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,    92,   150,    94,    95,     0,    96,    97,
       0,   151,    98,    99,   100,     0,   101,     0,     0,   102,
       0,     0,   103,   104,   105,   152,     0,   107,   108,     0,
     109,     0,   110,   111,   112,     0,     0,   113,   114,   153,
       0,   116,     0,   266,   267,   268,   269,   270,   271,   272,
     273,   274,     0,   154,   155,     0,     0,   156,     0,     0,
     157,     0,     0,   158,   238,   131,   132,   133,     0,   343,
     135,     0,     0,     0,     0,   137,     0,    67,     0,     0,
       0,    68,    69,    70,    71,     0,   139,    72,     0,     0,
       0,     0,    73,     0,     0,     0,    74,     0,     0,     0,
       0,     0,     0,     0,   141,     0,     0,     0,   142,    75,
       0,     0,    76,    77,    78,    79,    80,     0,   145,   146,
       0,     0,     0,   147,     0,     0,    81,    82,    83,    84,
       0,    85,   239,    87,   240,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,    92,   150,    94,    95,
       0,    96,    97,     0,   151,    98,    99,   100,     0,   101,
       0,     0,   102,     0,     0,   103,   104,   105,   106,     0,
     107,   108,     0,   109,     0,   110,   111,   112,     0,     0,
     113,   114,   153,     0,   116,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   154,     0,     0,     0,
     156,     0,     0,   344,   345,     0,   158,   238,   131,   132,
     133,     0,   343,   135,     0,     0,     0,     0,   137,     0,
      67,     0,     0,     0,    68,    69,    70,    71,     0,   139,
      72,     0,     0,     0,     0,    73,     0,     0,     0,    74,
       0,     0,     0,     0,     0,     0,     0,   141,     0,     0,
       0,   142,    75,     0,     0,    76,    77,    78,    79,    80,
       0,   145,   146,     0,     0,     0,   147,     0,     0,    81,
      82,    83,    84,     0,    85,   239,    87,   240,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,    92,
     150,    94,    95,     0,    96,    97,     0,   151,    98,    99,
     100,     0,   101,     0,     0,   102,     0,     0,   103,   104,
     105,   106,     0,   107,   108,     0,   109,     0,   110,   111,
     112,     0,     0,   113,   114,   153,     0,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   154,
       0,     0,     0,   156,     0,     0,   157,   363,     0,   158,
     238,   131,   132,   133,     0,   134,   135,     0,     0,     0,
       0,   137,     0,    67,     0,     0,     0,    68,    69,   138,
      71,     0,   139,    72,     0,     0,     0,     0,    73,     0,
       0,     0,   140,     0,     0,     0,     0,     0,     0,     0,
     141,     0,     0,     0,   142,    75,     0,     0,    76,    77,
      78,   143,   144,     0,   145,   146,     0,     0,     0,   147,
       0,     0,    81,    82,    83,    84,     0,    85,   148,    87,
     149,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,    92,   150,    94,    95,     0,    96,    97,     0,
     151,    98,    99,   100,     0,   101,     0,     0,   102,     0,
       0,   103,   104,   105,   152,     0,   107,   108,     0,   109,
       0,   110,   111,   112,     0,     0,   113,   114,   153,     0,
     116,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   154,   155,     0,     0,   156,     0,     0,   157,
       0,     0,   158,   130,   131,   132,   133,     0,   134,   135,
       0,     0,     0,     0,   137,     0,    67,     0,     0,     0,
      68,    69,   138,    71,     0,   139,    72,     0,     0,     0,
       0,    73,     0,     0,     0,   140,     0,     0,     0,     0,
       0,     0,     0,   141,     0,     0,     0,   142,    75,     0,
       0,    76,    77,    78,   143,   144,     0,   145,   146,     0,
       0,     0,   147,     0,     0,    81,    82,    83,    84,     0,
      85,   148,    87,   149,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,    92,   150,    94,    95,     0,
      96,    97,     0,   151,    98,    99,   100,     0,   101,     0,
       0,   102,     0,     0,   103,   104,   105,   152,     0,   107,
     108,     0,   109,     0,   110,   111,   112,     0,     0,   113,
     114,   153,     0,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   154,   155,     0,     0,   156,
       0,     0,   157,     0,     0,   158,   238,   131,   132,   133,
       0,   134,   135,     0,     0,     0,     0,   137,     0,    67,
       0,     0,     0,    68,    69,    70,    71,     0,   139,    72,
       0,     0,     0,     0,    73,     0,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,   141,     0,     0,     0,
     142,    75,     0,     0,    76,    77,    78,    79,    80,     0,
     145,   146,     0,     0,     0,   147,     0,     0,    81,    82,
      83,    84,     0,    85,   239,    87,   240,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,    92,   150,
      94,    95,     0,    96,    97,     0,   151,    98,    99,   100,
     487,   101,     0,     0,   102,     0,     0,   103,   104,   105,
     106,     0,   107,   108,     0,   109,     0,   110,   111,   112,
       0,     0,   113,   114,   153,     0,   116,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   154,     0,
       0,     0,   156,     0,     0,   157,     0,     0,   158,   238,
     131,   132,   133,     0,   343,   135,     0,     0,     0,     0,
     137,     0,    67,     0,     0,     0,    68,    69,    70,    71,
       0,   139,    72,     0,     0,     0,     0,    73,     0,     0,
       0,    74,     0,     0,     0,     0,     0,     0,     0,   141,
       0,     0,     0,   142,    75,     0,     0,    76,    77,    78,
      79,    80,     0,   145,   146,     0,     0,     0,   147,     0,
       0,    81,    82,    83,    84,     0,    85,   239,    87,   240,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,    92,   150,    94,    95,     0,    96,    97,     0,   151,
      98,    99,   100,     0,   101,     0,     0,   102,     0,     0,
     103,   104,   105,   106,     0,   107,   108,     0,   109,     0,
     110,   111,   112,     0,     0,   113,   114,   153,     0,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   154,     0,     0,     0,   156,     0,     0,   157,   345,
       0,   158,   238,   131,   132,   133,     0,   134,   135,     0,
       0,     0,     0,   137,     0,    67,     0,     0,     0,    68,
      69,    70,    71,     0,   139,    72,     0,     0,     0,     0,
      73,     0,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,   141,     0,     0,     0,   142,    75,     0,     0,
      76,    77,    78,    79,    80,     0,   145,   146,     0,     0,
       0,   147,     0,     0,    81,    82,    83,    84,     0,    85,
     239,    87,   240,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,    92,   150,    94,    95,     0,    96,
      97,     0,   151,    98,    99,   100,     0,   101,     0,     0,
     102,     0,     0,   103,   104,   105,   106,     0,   107,   108,
       0,   109,     0,   110,   111,   112,     0,     0,   113,   114,
     153,     0,   116,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   154,     0,     0,     0,   156,     0,
       0,   157,     0,     0,   158,   238,   131,   132,   133,     0,
     343,   135,     0,     0,     0,     0,   137,     0,    67,     0,
       0,     0,    68,    69,    70,    71,     0,   139,    72,     0,
       0,     0,     0,    73,     0,     0,     0,    74,     0,     0,
       0,     0,     0,     0,     0,   141,     0,     0,     0,   142,
      75,     0,     0,    76,    77,    78,    79,    80,     0,   145,
     146,     0,     0,     0,   147,     0,     0,    81,    82,    83,
      84,     0,    85,   239,    87,   240,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,    92,   150,    94,
      95,     0,    96,    97,     0,   151,    98,    99,   100,     0,
     101,     0,     0,   102,     0,     0,   103,   104,   105,   106,
       0,   107,   108,     0,   109,     0,   110,   111,   112,     0,
       0,   113,   114,   153,     0,   116,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   154,     0,     0,
       0,   156,     0,     0,   157,     0,     0,   158,   238,   131,
     132,   133,     0,   375,   135,     0,     0,     0,     0,   137,
       0,    67,     0,     0,     0,    68,    69,    70,    71,     0,
     139,    72,     0,     0,     0,     0,    73,     0,     0,     0,
      74,     0,     0,     0,     0,     0,     0,     0,   141,     0,
       0,     0,   142,    75,     0,     0,    76,    77,    78,    79,
      80,     0,   145,   146,     0,     0,     0,   147,     0,     0,
      81,    82,    83,    84,     0,    85,   239,    87,   240,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
      92,   150,    94,    95,     0,    96,    97,     0,   151,    98,
      99,   100,     0,   101,     0,     0,   102,     0,     0,   103,
     104,   105,   106,     0,   107,   108,     0,   109,     0,   110,
     111,   112,     0,     0,   113,   114,   153,     0,   116,     0,
       0,     0,     0,     0,     0,    66,   466,     0,     0,     0,
     154,     0,     0,     0,   156,     0,     0,   157,    67,     0,
     158,     0,    68,    69,    70,    71,     0,   467,    72,     0,
       0,     0,     0,    73,     0,     0,     0,   468,     0,     0,
       0,     0,     0,     0,     0,   469,     0,   470,     0,     0,
      75,     0,     0,    76,    77,    78,   471,    80,     0,   472,
       0,     0,     0,     0,   473,     0,     0,    81,    82,    83,
      84,     0,   474,    86,    87,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,    92,    93,    94,
      95,     0,    96,    97,     0,     0,    98,    99,   100,     0,
     101,     0,     0,   102,     0,     0,   103,   104,   105,   106,
       0,   107,   108,     0,   109,     0,   110,   111,   112,     0,
       0,   113,   114,   475,     0,   116,     0,     0,    66,     0,
     605,     0,     0,   606,     0,     0,     0,     0,     0,     0,
       0,    67,     0,     0,   476,    68,    69,    70,    71,     0,
       0,    72,     0,     0,     0,     0,    73,     0,     0,     0,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    76,    77,    78,    79,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,    82,    83,    84,     0,    85,    86,    87,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
      92,    93,    94,    95,     0,    96,    97,     0,     0,    98,
      99,   100,     0,   101,     0,     0,   102,     0,     0,   103,
     104,   105,   106,     0,   107,   108,    66,   109,     0,   110,
     111,   112,     0,     0,   113,   114,   115,     0,   116,    67,
       0,     0,     0,    68,    69,    70,    71,     0,     0,    72,
       0,     0,     0,     0,    73,     0,     0,   607,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,    76,    77,    78,    79,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,    82,
      83,    84,     0,    85,    86,    87,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,    92,    93,
      94,    95,     0,    96,    97,     0,     0,    98,    99,   100,
       0,   101,     0,     0,   102,     0,     0,   103,   104,   105,
     106,     0,   107,   108,     0,   109,     0,   110,   111,   112,
       0,     0,   113,   114,   115,     0,   116,     0,     0,    66,
       0,   324,     0,     0,   411,     0,     0,     0,     0,     0,
       0,     0,    67,     0,     0,   378,    68,    69,    70,    71,
       0,     0,    72,     0,     0,     0,     0,    73,     0,     0,
       0,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   412,     0,    75,     0,     0,    76,    77,    78,
      79,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,    82,    83,    84,     0,    85,    86,    87,     0,
       0,     0,     0,    88,   413,     0,     0,     0,    89,    90,
      91,    92,    93,    94,    95,     0,    96,    97,     0,     0,
      98,    99,   100,     0,   101,     0,     0,   102,     0,     0,
     103,   104,   105,   106,     0,   107,   108,     0,   109,   414,
     110,   111,   112,     0,     0,   113,   114,   115,     0,   116,
      66,   466,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   415,     0,    67,     0,     0,     0,    68,    69,    70,
      71,     0,   467,    72,     0,     0,     0,     0,    73,     0,
       0,     0,   468,     0,     0,     0,     0,     0,     0,     0,
     469,     0,   470,     0,     0,    75,     0,     0,    76,    77,
      78,   471,    80,     0,   472,     0,     0,     0,     0,   473,
       0,     0,    81,    82,    83,    84,     0,    85,    86,    87,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,    92,   701,    94,    95,     0,    96,    97,     0,
       0,    98,    99,   100,     0,   101,     0,     0,   102,     0,
       0,   103,   104,   105,   106,     0,   107,   108,     0,   109,
       0,   110,   111,   112,    66,   466,   113,   114,   475,     0,
     116,     0,     0,     0,     0,     0,     0,    67,     0,     0,
       0,    68,    69,    70,    71,     0,   467,    72,     0,     0,
       0,     0,    73,     0,     0,     0,   468,     0,     0,     0,
       0,     0,     0,     0,   469,     0,   470,     0,     0,    75,
       0,     0,    76,    77,    78,   471,    80,     0,   472,     0,
       0,     0,     0,   473,     0,     0,    81,    82,    83,    84,
       0,    85,    86,    87,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,    92,    93,    94,    95,
       0,    96,    97,     0,     0,    98,    99,   100,     0,   101,
       0,     0,   102,     0,     0,   103,   104,   105,   106,     0,
     107,   108,     0,   109,     0,   110,   111,   112,     0,     0,
     113,   114,   475,    66,   116,   285,   286,     0,   287,     0,
       0,     0,     0,     0,     0,     0,    67,     0,     0,     0,
      68,    69,    70,    71,     0,     0,    72,     0,     0,     0,
       0,    73,     0,     0,     0,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,     0,
       0,    76,    77,    78,    79,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,    82,    83,    84,     0,
      85,    86,    87,     0,     0,     0,     0,    88,   288,     0,
       0,     0,    89,    90,    91,    92,    93,    94,    95,     0,
      96,    97,     0,     0,    98,    99,   100,     0,   101,     0,
       0,   102,     0,     0,   103,   104,   105,   106,     0,   107,
     108,    66,   109,     0,   110,   111,   112,     0,   170,   113,
     114,   115,     0,   116,    67,     0,     0,     0,    68,    69,
      70,    71,     0,     0,    72,     0,     0,   171,     0,    73,
       0,     0,     0,    74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,    76,
     172,    78,    79,    80,     0,     0,     0,   173,     0,     0,
       0,     0,     0,    81,    82,    83,    84,     0,    85,    86,
      87,     0,     0,     0,     0,   174,     0,     0,     0,     0,
      89,    90,    91,    92,    93,    94,    95,     0,    96,    97,
       0,     0,    98,    99,   100,     0,   101,     0,     0,   175,
       0,     0,   103,   104,   105,   106,     0,   107,   108,     0,
       0,     0,   110,   111,   112,     0,     0,   113,   114,   115,
      66,   116,   522,     0,     0,   411,     0,     0,     0,     0,
       0,     0,     0,    67,     0,     0,     0,    68,    69,    70,
      71,     0,     0,    72,     0,     0,     0,     0,    73,     0,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,     0,    76,    77,
      78,    79,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,    82,    83,    84,     0,    85,    86,    87,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,    92,    93,    94,    95,     0,    96,    97,     0,
       0,    98,    99,   100,     0,   101,     0,     0,   102,     0,
       0,   103,   104,   105,   106,     0,   107,   108,    66,   109,
     728,   110,   111,   112,     0,     0,   113,   114,   115,     0,
     116,    67,     0,     0,     0,    68,    69,    70,    71,     0,
       0,    72,     0,     0,     0,     0,    73,     0,     0,     0,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    76,    77,    78,    79,
      80,     0,   729,     0,     0,     0,     0,     0,     0,     0,
      81,    82,    83,    84,     0,    85,    86,    87,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
      92,    93,    94,    95,     0,    96,    97,     0,     0,    98,
      99,   100,     0,   101,     0,     0,   102,     0,     0,   103,
     104,   105,   106,     0,   107,   108,    66,   109,     0,   110,
     111,   112,     0,     0,   113,   114,   115,     0,   116,    67,
       0,     0,     0,    68,    69,    70,    71,     0,     0,    72,
       0,     0,     0,     0,    73,     0,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,    76,    77,    78,    79,    80,     0,
       0,   244,     0,     0,     0,     0,     0,     0,    81,    82,
      83,    84,     0,    85,    86,    87,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,    92,    93,
      94,    95,     0,    96,    97,     0,     0,    98,    99,   100,
       0,   101,     0,     0,   102,     0,     0,   103,   104,   105,
     106,     0,   107,   108,    66,   109,     0,   110,   111,   112,
       0,     0,   113,   114,   115,     0,   116,    67,     0,   255,
       0,    68,    69,    70,    71,     0,     0,    72,     0,     0,
       0,     0,    73,     0,     0,     0,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
       0,     0,    76,    77,    78,    79,    80,     0,     0,     0,
       0,     0,   258,     0,     0,     0,    81,    82,    83,    84,
       0,    85,    86,    87,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,    92,    93,    94,    95,
       0,    96,    97,     0,   259,    98,    99,   100,     0,   101,
       0,     0,   102,     0,     0,   103,   104,   105,   106,     0,
     107,   108,     0,   109,    66,   110,   111,   112,     0,   294,
     113,   114,   115,     0,   116,     0,     0,    67,     0,     0,
       0,    68,    69,    70,    71,     0,     0,    72,     0,     0,
       0,     0,    73,     0,     0,     0,    74,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,    75,
       0,     0,    76,    77,    78,    79,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,    82,    83,    84,
       0,    85,    86,    87,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,    92,    93,    94,    95,
       0,    96,    97,     0,     0,    98,    99,   100,     0,   101,
       0,     0,   102,     0,     0,   103,   295,   105,   106,     0,
     107,   108,    66,   109,     0,   110,   111,   112,     0,     0,
     113,   114,   115,     0,   116,    67,     0,     0,     0,    68,
      69,    70,    71,     0,     0,    72,     0,     0,     0,     0,
      73,     0,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,     0,     0,
      76,    77,    78,    79,    80,     0,   547,     0,     0,     0,
       0,     0,     0,     0,    81,    82,    83,    84,     0,    85,
      86,    87,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,    92,    93,    94,    95,     0,    96,
      97,     0,     0,    98,    99,   100,     0,   101,     0,     0,
     102,     0,     0,   103,   104,   105,   106,     0,   107,   108,
      66,   109,     0,   110,   111,   112,     0,     0,   113,   114,
     115,     0,   116,    67,     0,     0,     0,    68,    69,    70,
      71,     0,     0,    72,     0,     0,     0,     0,    73,     0,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,     0,    76,    77,
      78,    79,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,    82,    83,    84,   712,    85,    86,    87,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,    92,    93,    94,    95,     0,    96,    97,     0,
       0,    98,    99,   100,     0,   101,     0,     0,   102,     0,
       0,   103,   104,   105,   106,     0,   107,   108,    66,   109,
       0,   110,   111,   112,     0,     0,   113,   114,   115,     0,
     116,    67,     0,     0,     0,    68,    69,    70,    71,     0,
       0,    72,     0,     0,     0,     0,    73,     0,     0,     0,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    76,    77,    78,    79,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,    82,    83,    84,     0,    85,    86,    87,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
      92,    93,    94,    95,     0,    96,    97,     0,     0,    98,
      99,   100,     0,   101,     0,     0,   102,     0,     0,   103,
     104,   105,   106,     0,   107,   108,    66,   109,     0,   110,
     111,   112,   282,     0,   113,   114,   115,     0,   116,    67,
       0,     0,     0,    68,    69,    70,    71,     0,     0,    72,
       0,     0,     0,     0,    73,     0,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,   258,     0,     0,     0,
       0,    75,     0,     0,    76,    77,    78,    79,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,    82,
      83,    84,     0,    85,    86,    87,     0,     0,   259,   258,
       0,     0,     0,     0,     0,    89,    90,    91,    92,    93,
      94,    95,     0,    96,    97,     0,     0,    98,    99,   100,
       0,   101,     0,     0,   102,     0,     0,   103,   104,   105,
     106,   259,   107,   108,   258,  -397,     0,   110,   111,   112,
       0,     0,   113,   114,   115,     0,   116,     0,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,     0,   258,     0,   259,     0,     0,     0,
       0,     0,     0,   515,     0,     0,     0,     0,     0,     0,
       0,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   259,     0,     0,   258,
     501,   502,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   259,   258,     0,     0,   503,   504,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,     0,     0,     0,   259,   258,   506,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,     0,   259,   258,     0,
       0,   502,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,     0,
     259,   258,     0,     0,   504,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,     0,   259,   258,     0,     0,   679,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,     0,   259,   258,     0,   371,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,     0,   259,
     258,     0,   492,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,     0,   259,   258,     0,   498,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,     0,   259,     0,     0,   507,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,     0,     0,     0,
       0,   677,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
       1,     0,     0,     2,   678,     0,     3,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     5,     0,     0,     6,
       0,     7,     8,     9,     0,     0,   258,    10,     0,     0,
       0,    11,     0,   489,     0,     0,     0,     0,     0,     0,
       0,     0,   258,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   258,     0,   259,     0,
       0,     0,     0,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,    14,   259,    15,     0,     0,    16,     0,
      17,     0,    18,     0,     0,    19,     0,    20,   259,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,     0,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274
};

static const short yycheck[] =
{
       4,   224,   458,   226,   227,   544,   540,   230,   231,   210,
     521,   234,   619,     9,     5,   184,    18,     8,    22,     5,
     189,    18,   191,     5,   538,     5,     6,   541,     8,     5,
       6,     9,     8,    27,    14,     5,    40,   206,    14,    22,
     476,    13,    14,    50,    79,    13,    14,     5,     6,     5,
       6,    78,    13,    14,    21,    45,    14,    68,    14,    63,
      64,    65,   576,    99,    78,   579,   580,   581,   582,   583,
     584,    15,     5,     6,    17,     8,     5,     6,   379,     8,
      59,    14,    51,   770,    19,    14,    41,    50,    50,    97,
      96,   292,    64,    68,   102,     5,     6,    14,     0,    51,
      44,   612,   108,    42,    39,    84,   793,    34,   144,   144,
     122,   122,   139,    30,    83,   119,   120,   121,   122,   123,
      87,   125,   126,   127,   128,   139,   295,   143,   144,    96,
     105,    83,   144,    59,   741,    74,   437,   144,   121,   575,
      42,   143,   144,   309,   135,   656,   142,   754,    59,   135,
     144,   141,   143,   135,   158,   135,    96,   143,   162,   135,
     128,   143,   142,   770,   142,   135,   142,   623,    42,   173,
     174,   337,    74,   374,   178,   172,   148,   135,   689,   135,
     148,   136,   144,   639,   142,   792,   793,   148,   105,   116,
     122,   195,   143,   144,   198,   134,   135,   136,   137,   138,
      74,   205,   135,   125,   280,   281,   135,    88,   722,   723,
      91,   154,   144,   156,   157,    63,   727,    98,   222,   112,
      25,   143,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,     0,   777,    24,
      50,   144,    47,   146,   143,   144,   143,   144,   142,   253,
     142,   255,   421,    69,   423,   142,    61,   458,   147,   202,
     794,   128,   136,   137,   138,   143,   144,   143,   144,    64,
     143,   144,   142,    58,   143,   144,   280,   281,   221,    64,
     223,   143,   144,   143,   144,   142,   229,   142,   292,   232,
     233,   142,   235,   236,    64,    16,   143,   144,   142,   303,
     756,   106,   143,   144,   142,   309,   310,   250,   142,   313,
     476,   254,   143,   144,   142,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   128,   337,   143,   144,   279,   538,    59,   142,
     541,   143,   144,   128,   129,   130,   131,   132,   133,   353,
     142,    72,   143,   144,   139,   556,   143,   144,    99,   143,
     144,    82,   142,    84,    85,   143,   144,   142,   372,   142,
     374,    42,   315,   539,   142,   576,   112,   128,   579,   580,
     581,   582,   583,   584,   105,   112,    99,   108,    68,   110,
      79,   119,   593,    89,   111,    94,   115,   115,    50,   120,
     566,   344,   568,    74,   408,   571,   410,   142,   103,   575,
     143,   143,   142,   142,   128,     5,   128,   128,    52,   135,
      65,   105,   623,   105,     8,   368,   369,   370,    32,   433,
      32,    96,    25,    26,   142,    16,     8,   144,   639,     8,
       8,     8,   446,   128,   448,   449,   450,   149,    29,   143,
      31,   144,    78,   619,    47,   142,    37,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,     9,    62,
       5,    52,   476,    66,   128,    67,   144,   100,    59,     5,
     100,     8,    75,    76,   128,   489,    80,   118,   143,   103,
     103,    72,   142,   142,   142,   142,   142,   125,   128,   142,
     443,    82,   445,    84,    85,   142,    42,   142,    97,    53,
     676,   143,     5,   106,   737,   124,   143,   128,   128,    27,
     101,   722,   723,   144,   105,   529,   530,   108,   109,   110,
     142,     8,     8,     8,     8,   539,   144,   136,    74,   120,
     143,    58,   143,   143,   487,   746,   144,    58,   143,     5,
     123,   142,    80,     8,    88,   756,   142,    78,   143,   502,
     143,   504,   566,   506,   568,   143,   143,   571,   143,   125,
     125,   575,   143,    27,    53,   741,   142,   743,    56,   802,
     128,     8,   142,   144,     3,    18,   144,    27,   754,   593,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   607,   770,   143,    69,   611,    80,   128,
     143,   143,     5,   144,   144,   619,    27,     8,   622,   144,
     144,     5,   142,   203,   344,   143,   792,   793,   767,     3,
     516,     5,   254,   743,   638,   594,   313,   744,   754,   530,
     748,   491,    16,   593,   408,   410,    20,    21,    22,    23,
     372,   594,    26,   710,   786,   639,   622,    31,   458,   539,
      19,    35,   611,   676,   251,    -1,   443,   264,    -1,   445,
     674,    -1,   676,    -1,    48,    -1,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    -1,    70,    71,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    -1,    -1,
      94,    95,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,
     104,   105,   106,   107,   738,   109,   110,   741,   112,   743,
     114,   115,   116,    -1,   748,   119,   120,   121,    -1,   123,
     754,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      -1,   135,    14,   767,    16,    -1,   770,    -1,    20,    21,
      22,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    35,    -1,    42,    -1,    -1,   792,   793,
      -1,    43,    -1,    -1,    -1,    47,    48,    -1,    -1,    51,
      52,    53,    54,    55,    -1,    57,    58,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,    67,    68,    74,    70,    71,
      72,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      -1,    93,    94,    95,    96,    -1,    98,    -1,    -1,   101,
      -1,    -1,   104,   105,   106,   107,    -1,   109,   110,    -1,
     112,    -1,   114,   115,   116,    -1,    -1,   119,   120,   121,
      -1,   123,    -1,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,   135,   136,    -1,    -1,   139,    -1,    -1,
     142,    -1,    -1,   145,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,
      -1,    20,    21,    22,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,
      -1,    -1,    51,    52,    53,    54,    55,    -1,    57,    58,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      -1,    70,    71,    72,    73,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    -1,    93,    94,    95,    96,    -1,    98,
      -1,    -1,   101,    -1,    -1,   104,   105,   106,   107,    -1,
     109,   110,    -1,   112,    -1,   114,   115,   116,    -1,    -1,
     119,   120,   121,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,
     139,    -1,    -1,   142,   143,    -1,   145,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    14,    -1,
      16,    -1,    -1,    -1,    20,    21,    22,    23,    -1,    25,
      26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    47,    48,    -1,    -1,    51,    52,    53,    54,    55,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    -1,    93,    94,    95,
      96,    -1,    98,    -1,    -1,   101,    -1,    -1,   104,   105,
     106,   107,    -1,   109,   110,    -1,   112,    -1,   114,   115,
     116,    -1,    -1,   119,   120,   121,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
      -1,    -1,    -1,   139,    -1,    -1,   142,   143,    -1,   145,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    14,    -1,    16,    -1,    -1,    -1,    20,    21,    22,
      23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    47,    48,    -1,    -1,    51,    52,
      53,    54,    55,    -1,    57,    58,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    -1,
      93,    94,    95,    96,    -1,    98,    -1,    -1,   101,    -1,
      -1,   104,   105,   106,   107,    -1,   109,   110,    -1,   112,
      -1,   114,   115,   116,    -1,    -1,   119,   120,   121,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,    -1,    -1,   139,    -1,    -1,   142,
      -1,    -1,   145,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,
      20,    21,    22,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,    -1,
      -1,    51,    52,    53,    54,    55,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    -1,    93,    94,    95,    96,    -1,    98,    -1,
      -1,   101,    -1,    -1,   104,   105,   106,   107,    -1,   109,
     110,    -1,   112,    -1,   114,   115,   116,    -1,    -1,   119,
     120,   121,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,    -1,    -1,   139,
      -1,    -1,   142,    -1,    -1,   145,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    14,    -1,    16,
      -1,    -1,    -1,    20,    21,    22,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      47,    48,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    -1,    70,    71,    72,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    -1,    -1,   101,    -1,    -1,   104,   105,   106,
     107,    -1,   109,   110,    -1,   112,    -1,   114,   115,   116,
      -1,    -1,   119,   120,   121,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,
      -1,    -1,   139,    -1,    -1,   142,    -1,    -1,   145,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      14,    -1,    16,    -1,    -1,    -1,    20,    21,    22,    23,
      -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    47,    48,    -1,    -1,    51,    52,    53,
      54,    55,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    -1,    93,
      94,    95,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,
     104,   105,   106,   107,    -1,   109,   110,    -1,   112,    -1,
     114,   115,   116,    -1,    -1,   119,   120,   121,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,    -1,    -1,    -1,   139,    -1,    -1,   142,   143,
      -1,   145,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,    20,
      21,    22,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    48,    -1,    -1,
      51,    52,    53,    54,    55,    -1,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    -1,    93,    94,    95,    96,    -1,    98,    -1,    -1,
     101,    -1,    -1,   104,   105,   106,   107,    -1,   109,   110,
      -1,   112,    -1,   114,   115,   116,    -1,    -1,   119,   120,
     121,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,   139,    -1,
      -1,   142,    -1,    -1,   145,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    14,    -1,    16,    -1,
      -1,    -1,    20,    21,    22,    23,    -1,    25,    26,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,
      48,    -1,    -1,    51,    52,    53,    54,    55,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    -1,    93,    94,    95,    96,    -1,
      98,    -1,    -1,   101,    -1,    -1,   104,   105,   106,   107,
      -1,   109,   110,    -1,   112,    -1,   114,   115,   116,    -1,
      -1,   119,   120,   121,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,
      -1,   139,    -1,    -1,   142,    -1,    -1,   145,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    14,
      -1,    16,    -1,    -1,    -1,    20,    21,    22,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,    48,    -1,    -1,    51,    52,    53,    54,
      55,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    68,    -1,    70,    71,    72,    73,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    -1,    93,    94,
      95,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,   104,
     105,   106,   107,    -1,   109,   110,    -1,   112,    -1,   114,
     115,   116,    -1,    -1,   119,   120,   121,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,
     135,    -1,    -1,    -1,   139,    -1,    -1,   142,    16,    -1,
     145,    -1,    20,    21,    22,    23,    -1,    25,    26,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    -1,    -1,
      48,    -1,    -1,    51,    52,    53,    54,    55,    -1,    57,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,
      68,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    -1,    -1,    94,    95,    96,    -1,
      98,    -1,    -1,   101,    -1,    -1,   104,   105,   106,   107,
      -1,   109,   110,    -1,   112,    -1,   114,   115,   116,    -1,
      -1,   119,   120,   121,    -1,   123,    -1,    -1,     3,    -1,
       5,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    -1,   142,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    -1,    -1,    94,
      95,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,   104,
     105,   106,   107,    -1,   109,   110,     3,   112,    -1,   114,
     115,   116,    -1,    -1,   119,   120,   121,    -1,   123,    16,
      -1,    -1,    -1,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,   142,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    -1,    -1,    94,    95,    96,
      -1,    98,    -1,    -1,   101,    -1,    -1,   104,   105,   106,
     107,    -1,   109,   110,    -1,   112,    -1,   114,   115,   116,
      -1,    -1,   119,   120,   121,    -1,   123,    -1,    -1,     3,
      -1,     5,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    -1,   142,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    48,    -1,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    -1,    70,    71,    72,    -1,
      -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    -1,    -1,
      94,    95,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,
     104,   105,   106,   107,    -1,   109,   110,    -1,   112,   113,
     114,   115,   116,    -1,    -1,   119,   120,   121,    -1,   123,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,    -1,    16,    -1,    -1,    -1,    20,    21,    22,
      23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    -1,    -1,    48,    -1,    -1,    51,    52,
      53,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    68,    -1,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    -1,
      -1,    94,    95,    96,    -1,    98,    -1,    -1,   101,    -1,
      -1,   104,   105,   106,   107,    -1,   109,   110,    -1,   112,
      -1,   114,   115,   116,     3,     4,   119,   120,   121,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,
      -1,    20,    21,    22,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    -1,    -1,    48,
      -1,    -1,    51,    52,    53,    54,    55,    -1,    57,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      -1,    70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    -1,    -1,    94,    95,    96,    -1,    98,
      -1,    -1,   101,    -1,    -1,   104,   105,   106,   107,    -1,
     109,   110,    -1,   112,    -1,   114,   115,   116,    -1,    -1,
     119,   120,   121,     3,   123,     5,     6,    -1,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    -1,
      70,    71,    72,    -1,    -1,    -1,    -1,    77,    78,    -1,
      -1,    -1,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    -1,    -1,    94,    95,    96,    -1,    98,    -1,
      -1,   101,    -1,    -1,   104,   105,   106,   107,    -1,   109,
     110,     3,   112,    -1,   114,   115,   116,    -1,    10,   119,
     120,   121,    -1,   123,    16,    -1,    -1,    -1,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    -1,    70,    71,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      -1,    -1,    94,    95,    96,    -1,    98,    -1,    -1,   101,
      -1,    -1,   104,   105,   106,   107,    -1,   109,   110,    -1,
      -1,    -1,   114,   115,   116,    -1,    -1,   119,   120,   121,
       3,   123,     5,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    -1,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    -1,
      -1,    94,    95,    96,    -1,    98,    -1,    -1,   101,    -1,
      -1,   104,   105,   106,   107,    -1,   109,   110,     3,   112,
       5,   114,   115,   116,    -1,    -1,   119,   120,   121,    -1,
     123,    16,    -1,    -1,    -1,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,    54,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    -1,    -1,    94,
      95,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,   104,
     105,   106,   107,    -1,   109,   110,     3,   112,    -1,   114,
     115,   116,    -1,    -1,   119,   120,   121,    -1,   123,    16,
      -1,    -1,    -1,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    -1,    -1,    94,    95,    96,
      -1,    98,    -1,    -1,   101,    -1,    -1,   104,   105,   106,
     107,    -1,   109,   110,     3,   112,    -1,   114,   115,   116,
      -1,    -1,   119,   120,   121,    -1,   123,    16,    -1,    18,
      -1,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    -1,    74,    94,    95,    96,    -1,    98,
      -1,    -1,   101,    -1,    -1,   104,   105,   106,   107,    -1,
     109,   110,    -1,   112,     3,   114,   115,   116,    -1,     8,
     119,   120,   121,    -1,   123,    -1,    -1,    16,    -1,    -1,
      -1,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    35,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    48,
      -1,    -1,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    -1,    -1,    94,    95,    96,    -1,    98,
      -1,    -1,   101,    -1,    -1,   104,   105,   106,   107,    -1,
     109,   110,     3,   112,    -1,   114,   115,   116,    -1,    -1,
     119,   120,   121,    -1,   123,    16,    -1,    -1,    -1,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    52,    53,    54,    55,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    70,
      71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    -1,    -1,    94,    95,    96,    -1,    98,    -1,    -1,
     101,    -1,    -1,   104,   105,   106,   107,    -1,   109,   110,
       3,   112,    -1,   114,   115,   116,    -1,    -1,   119,   120,
     121,    -1,   123,    16,    -1,    -1,    -1,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    -1,
      -1,    94,    95,    96,    -1,    98,    -1,    -1,   101,    -1,
      -1,   104,   105,   106,   107,    -1,   109,   110,     3,   112,
      -1,   114,   115,   116,    -1,    -1,   119,   120,   121,    -1,
     123,    16,    -1,    -1,    -1,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    -1,    -1,    94,
      95,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,   104,
     105,   106,   107,    -1,   109,   110,     3,   112,    -1,   114,
     115,   116,     9,    -1,   119,   120,   121,    -1,   123,    16,
      -1,    -1,    -1,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    -1,    70,    71,    72,    -1,    -1,    74,    42,
      -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    -1,    -1,    94,    95,    96,
      -1,    98,    -1,    -1,   101,    -1,    -1,   104,   105,   106,
     107,    74,   109,   110,    42,   112,    -1,   114,   115,   116,
      -1,    -1,   119,   120,   121,    -1,   123,    -1,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,    -1,    42,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    74,    -1,    -1,    42,
     143,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    74,    42,    -1,    -1,   143,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    74,    42,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,    74,    42,    -1,
      -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
      74,    42,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,    74,    42,    -1,    -1,   144,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,    74,    42,    -1,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,    74,
      42,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,    74,    42,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,    74,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      17,    -1,    -1,    20,   143,    -1,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    -1,    36,
      -1,    38,    39,    40,    -1,    -1,    42,    44,    -1,    -1,
      -1,    48,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    74,    92,    -1,    -1,    95,    -1,
      97,    -1,    99,    -1,    -1,   102,    -1,   104,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,    17,    20,    23,    28,    33,    36,    38,    39,    40,
      44,    48,    60,    81,    90,    92,    95,    97,    99,   102,
     104,   114,   117,   151,   152,   155,   156,   157,   158,   165,
     206,   211,   212,   217,   218,   219,   220,   231,   232,   241,
     242,   243,   244,   245,   249,   250,   255,   256,   257,   260,
     262,   263,   264,   265,   266,   267,   269,   270,   271,   272,
     273,   274,   288,    96,   108,    59,     3,    16,    20,    21,
      22,    23,    26,    31,    35,    48,    51,    52,    53,    54,
      55,    65,    66,    67,    68,    70,    71,    72,    77,    82,
      83,    84,    85,    86,    87,    88,    90,    91,    94,    95,
      96,    98,   101,   104,   105,   106,   107,   109,   110,   112,
     114,   115,   116,   119,   120,   121,   123,   153,   154,    51,
      83,    50,    51,    83,    21,    87,    96,    59,    59,    84,
       3,     4,     5,     6,     8,     9,    10,    14,    22,    25,
      35,    43,    47,    54,    55,    57,    58,    62,    71,    73,
      86,    93,   107,   121,   135,   136,   139,   142,   145,   154,
     166,   167,   169,   199,   200,   268,   275,   276,   279,   280,
      10,    29,    52,    59,    77,   101,   153,   258,    16,    29,
      31,    37,    52,    59,    72,    82,    84,    85,   101,   105,
     108,   109,   110,   120,   208,   209,   258,   112,    96,   154,
     170,     0,    45,   141,   286,    63,   154,   154,   154,   154,
     142,   154,   154,   170,   154,   154,   154,   154,   154,   154,
      50,   142,   147,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,     3,    71,
      73,   199,   199,   199,    58,   154,   203,   204,    13,    14,
     148,   277,   278,    50,   144,    18,   154,   168,    42,    74,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    69,   191,   192,    64,   128,
     128,    99,     9,   153,   154,     5,     6,     8,    78,   154,
     215,   216,   128,   112,     8,   105,   154,    99,    68,   207,
     207,   207,   207,    79,   193,   194,   154,   119,   154,    99,
     144,   199,   283,   284,   285,    97,   102,   156,   154,   207,
      89,    15,    44,   111,     5,     6,     8,    14,   135,   142,
     178,   179,   227,   233,   234,    94,   115,   122,   172,   115,
      50,   287,   103,     8,   142,   143,   199,   201,   202,   154,
     199,   199,   201,    41,   136,   201,   201,   143,   199,   201,
     201,   199,   199,   143,   201,   199,   199,   143,   142,   142,
     142,   143,   144,   146,   128,     8,   199,   278,   142,   170,
     167,   199,   154,   199,   199,   199,   199,   199,   199,   199,
     280,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,     5,    78,   139,   199,   215,   215,   128,   128,    52,
     135,     8,    46,    78,   113,   135,   154,   178,   213,   214,
      65,   105,   207,   105,     8,   154,   195,   196,    14,    30,
     105,   210,    68,   122,   251,   252,   154,   246,   247,   276,
     154,   168,    27,   144,   281,   282,   142,   221,    32,    32,
      96,     5,     6,     8,   143,   178,   180,   235,   144,   236,
      25,    47,    61,   106,   261,     8,     4,    25,    35,    43,
      45,    54,    57,    62,    70,   121,   142,   154,   173,   174,
     175,   176,   177,   276,     8,     8,     8,    97,   158,    49,
     143,   144,   143,   143,   154,   143,   143,   143,   143,   143,
     143,   143,   144,   143,   144,   143,   144,   143,   199,   199,
     204,   154,   178,   205,   149,   149,   162,   171,   172,   144,
      78,   142,     5,   213,     9,   216,    67,   207,   207,   128,
     144,   100,     5,   100,     8,   154,   253,   254,   128,   144,
     172,   128,   283,    80,   187,   188,   285,    57,   154,   222,
     223,   118,   154,   154,   154,   143,   144,   143,   144,   227,
     234,   237,   238,   143,   103,   103,   142,   142,   142,   142,
     142,   142,   142,   142,   173,   125,    24,    58,    64,   128,
     129,   130,   131,   132,   133,   139,   143,   154,   202,   143,
     199,   199,   199,   128,    97,   165,    53,   181,     5,   180,
     128,    88,    91,    98,   259,     5,     8,   142,   154,   196,
     128,   124,   142,   178,   179,   247,   193,   178,   179,    27,
     191,   143,   144,   142,   224,   225,    25,    26,    47,    62,
      66,    75,    76,   106,   248,   178,     8,    18,   239,   144,
       8,     8,   154,   276,   136,   276,   143,   143,   276,     8,
     143,   143,   173,   178,   179,     9,   142,    78,   139,     8,
     178,   179,     8,   178,   179,   178,   179,   178,   179,   178,
     179,   178,   179,    58,   144,   159,    58,   143,   143,   144,
     205,   166,   143,     5,   182,   123,   185,   186,   143,   142,
      34,   116,    88,   154,   197,   198,   142,     8,   254,   143,
     180,    86,   177,   189,   190,   222,   142,   226,   227,    79,
     144,   228,    69,   154,   240,   227,   238,   143,   143,   143,
     143,   143,   125,   125,   180,    78,     9,   142,     5,    57,
     154,   160,   161,   143,   154,   275,   276,   142,    50,    80,
     163,    27,    53,    56,   184,   180,   128,   143,   144,     8,
     143,   142,    19,    39,   144,   143,   144,     3,   229,   230,
     225,   178,   179,   178,   179,   143,   180,   144,   143,   201,
      27,    69,   164,   177,   183,    80,   175,   187,   143,   178,
     198,   143,   143,   190,   227,   128,   144,   143,   161,   143,
     189,     5,   144,    27,   191,     8,   230,   144,   144,   177,
     189,   193,   142,     5,   201,   143,   143
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

  case 86:

    { pParser->PushQuery(); ;}
    break;

  case 87:

    { pParser->PushQuery(); ;}
    break;

  case 88:

    { pParser->PushQuery(); ;}
    break;

  case 92:

    {
			assert ( pParser->m_pStmt->m_eStmt==STMT_SELECT ); // set by table argument
			pParser->ToString ( pParser->m_pStmt->m_sTableFunc, yyvsp[-6] );
		;}
    break;

  case 94:

    {
			assert ( pParser->m_pStmt->m_eStmt==STMT_SELECT ); // set by subselect
		;}
    break;

  case 97:

    {
			pParser->ToString ( pParser->m_pStmt->m_dTableFuncArgs.Add(), yyvsp[0] );
		;}
    break;

  case 98:

    {
			pParser->ToString ( pParser->m_pStmt->m_dTableFuncArgs.Add(), yyvsp[0] );
		;}
    break;

  case 102:

    {
		CSphVector<CSphQueryItem> & dItems = pParser->m_pQuery->m_dItems;
		if ( dItems.GetLength()!=1 || dItems[0].m_sExpr!="*" )
		{
			yyerror ( pParser, "outer select list must be a single star" );
			YYERROR;
		}
		dItems.Reset();
		pParser->ResetSelect();
	;}
    break;

  case 103:

    {
			pParser->ToString ( pParser->m_pQuery->m_sOuterOrderBy, yyvsp[0] );
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 105:

    {
			pParser->m_pQuery->m_iOuterLimit = yyvsp[0].m_iValue;
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 106:

    {
			pParser->m_pQuery->m_iOuterOffset = yyvsp[-2].m_iValue;
			pParser->m_pQuery->m_iOuterLimit = yyvsp[0].m_iValue;
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 107:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT;
			pParser->ToString ( pParser->m_pQuery->m_sIndexes, yyvsp[-7] );
		;}
    break;

  case 110:

    { pParser->AddItem ( &yyvsp[0] ); ;}
    break;

  case 113:

    { pParser->AliasLastItem ( &yyvsp[0] ); ;}
    break;

  case 114:

    { pParser->AliasLastItem ( &yyvsp[0] ); ;}
    break;

  case 115:

    { pParser->AddItem ( &yyvsp[0] ); ;}
    break;

  case 116:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_AVG, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 117:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MAX, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 118:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MIN, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 119:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_SUM, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 120:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_CAT, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 121:

    { if ( !pParser->AddItem ( "count(*)", &yyvsp[-3], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 122:

    { if ( !pParser->AddItem ( "groupby()", &yyvsp[-2], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 123:

    { if ( !pParser->AddDistinct ( &yyvsp[-1], &yyvsp[-4], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 125:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 132:

    {
			if ( !pParser->SetMatch(yyvsp[-1]) )
				YYERROR;
		;}
    break;

  case 134:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 135:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].m_iValue );
			pFilter->m_bExclude = true;
		;}
    break;

  case 136:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-4] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_dValues.Uniq();
		;}
    break;

  case 137:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-5] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_bExclude = true;
			pFilter->m_dValues.Uniq();
		;}
    break;

  case 138:

    {
			if ( !pParser->AddUservarFilter ( yyvsp[-2], yyvsp[0], false ) )
				YYERROR;
		;}
    break;

  case 139:

    {
			if ( !pParser->AddUservarFilter ( yyvsp[-3], yyvsp[0], true ) )
				YYERROR;
		;}
    break;

  case 140:

    {
			if ( !pParser->AddIntRangeFilter ( yyvsp[-4], yyvsp[-2].m_iValue, yyvsp[0].m_iValue ) )
				YYERROR;
		;}
    break;

  case 141:

    {
			if ( !pParser->AddIntFilterGreater ( yyvsp[-2], yyvsp[0].m_iValue, false ) )
				YYERROR;
		;}
    break;

  case 142:

    {
			if ( !pParser->AddIntFilterLesser ( yyvsp[-2], yyvsp[0].m_iValue, false ) )
				YYERROR;
		;}
    break;

  case 143:

    {
			if ( !pParser->AddIntFilterGreater ( yyvsp[-2], yyvsp[0].m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 144:

    {
			if ( !pParser->AddIntFilterLesser ( yyvsp[-2], yyvsp[0].m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 145:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2], yyvsp[0].m_fValue, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 146:

    {
			yyerror ( pParser, "NEQ filter on floats is not (yet?) supported" );
			YYERROR;
		;}
    break;

  case 147:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4], yyvsp[-2].m_fValue, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 148:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4], yyvsp[-2].m_iValue, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 149:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4], yyvsp[-2].m_fValue, yyvsp[0].m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 150:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2], yyvsp[0].m_fValue, FLT_MAX, false ) )
				YYERROR;
		;}
    break;

  case 151:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2], -FLT_MAX, yyvsp[0].m_fValue, false ) )
				YYERROR;
		;}
    break;

  case 152:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2], yyvsp[0].m_fValue, FLT_MAX, true ) )
				YYERROR;
		;}
    break;

  case 153:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2], -FLT_MAX, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 154:

    {
			if ( !pParser->AddStringFilter ( yyvsp[-2], yyvsp[0], false ) )
				YYERROR;
		;}
    break;

  case 155:

    {
			if ( !pParser->AddStringFilter ( yyvsp[-2], yyvsp[0], true ) )
				YYERROR;
		;}
    break;

  case 156:

    {
			if ( !pParser->AddNullFilter ( yyvsp[-2], true ) )
				YYERROR;
		;}
    break;

  case 157:

    {
			if ( !pParser->AddNullFilter ( yyvsp[-3], false ) )
				YYERROR;
		;}
    break;

  case 160:

    {
			if ( !pParser->SetOldSyntax() )
				YYERROR;
		;}
    break;

  case 161:

    {
			yyval.m_iType = SPHINXQL_TOK_COUNT;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 162:

    {
			yyval.m_iType = SPHINXQL_TOK_GROUPBY;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 163:

    {
			yyval.m_iType = SPHINXQL_TOK_WEIGHT;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 164:

    {
			yyval.m_iType = SPHINXQL_TOK_ID;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 170:

    { yyval.m_iType = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 171:

    {
			yyval.m_iType = TOK_CONST_INT;
			if ( (uint64_t)yyvsp[0].m_iValue > (uint64_t)LLONG_MAX )
				yyval.m_iValue = LLONG_MIN;
			else
				yyval.m_iValue = -yyvsp[0].m_iValue;
		;}
    break;

  case 172:

    { yyval.m_iType = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 173:

    { yyval.m_iType = TOK_CONST_FLOAT; yyval.m_fValue = -yyvsp[0].m_fValue; ;}
    break;

  case 174:

    { yyval.m_iType = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 175:

    {
			assert ( !yyval.m_pValues.Ptr() );
			yyval.m_pValues = new RefcountedVector_c<SphAttr_t> ();
			yyval.m_pValues->Add ( yyvsp[0].m_iValue ); 
		;}
    break;

  case 176:

    {
			yyval.m_pValues->Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 180:

    {
			pParser->SetGroupbyLimit ( yyvsp[0].m_iValue );
		;}
    break;

  case 181:

    {
			pParser->AddGroupBy ( yyvsp[0] );
		;}
    break;

  case 182:

    {
			pParser->AddGroupBy ( yyvsp[0] );
		;}
    break;

  case 184:

    {
			pParser->AddHaving();
		;}
    break;

  case 187:

    {
			if ( pParser->m_pQuery->m_sGroupBy.IsEmpty() )
			{
				yyerror ( pParser, "you must specify GROUP BY element in order to use WITHIN GROUP ORDER BY clause" );
				YYERROR;
			}
			pParser->ToString ( pParser->m_pQuery->m_sSortBy, yyvsp[0] );
		;}
    break;

  case 190:

    {
			pParser->ToString ( pParser->m_pQuery->m_sOrderBy, yyvsp[0] );
		;}
    break;

  case 191:

    {
			pParser->m_pQuery->m_sOrderBy = "@random";
		;}
    break;

  case 193:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 195:

    { TRACK_BOUNDS ( yyval, yyvsp[-1], yyvsp[0] ); ;}
    break;

  case 196:

    { TRACK_BOUNDS ( yyval, yyvsp[-1], yyvsp[0] ); ;}
    break;

  case 199:

    {
			pParser->m_pQuery->m_iOffset = 0;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 200:

    {
			pParser->m_pQuery->m_iOffset = yyvsp[-2].m_iValue;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 206:

    {
			if ( !pParser->AddOption ( yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 207:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 208:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 209:

    {
			if ( !pParser->AddOption ( yyvsp[-4], pParser->GetNamedVec ( yyvsp[-1].m_iValue ) ) )
				YYERROR;
			pParser->FreeNamedVec ( yyvsp[-1].m_iValue );
		;}
    break;

  case 210:

    {
			if ( !pParser->AddOption ( yyvsp[-5], yyvsp[-3], yyvsp[-1] ) )
				YYERROR;
		;}
    break;

  case 211:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 212:

    {
			yyval.m_iValue = pParser->AllocNamedVec ();
			pParser->AddConst ( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 213:

    {
			pParser->AddConst( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 214:

    {
			yyval = yyvsp[-2];
			yyval.m_iValue = yyvsp[0].m_iValue;
		;}
    break;

  case 216:

    { if ( !pParser->SetOldSyntax() ) YYERROR; ;}
    break;

  case 217:

    { if ( !pParser->SetNewSyntax() ) YYERROR; ;}
    break;

  case 222:

    { TRACK_BOUNDS ( yyval, yyvsp[-1], yyvsp[0] ); ;}
    break;

  case 223:

    { TRACK_BOUNDS ( yyval, yyvsp[-1], yyvsp[0] ); ;}
    break;

  case 224:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 225:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 226:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 227:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 228:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 229:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 230:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 231:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 232:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 233:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 234:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 235:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 236:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 237:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 238:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 239:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 240:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 241:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 242:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 246:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 247:

    { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); ;}
    break;

  case 248:

    { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); ;}
    break;

  case 249:

    { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); ;}
    break;

  case 250:

    { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); ;}
    break;

  case 251:

    { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); ;}
    break;

  case 252:

    { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); ;}
    break;

  case 253:

    { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); ;}
    break;

  case 254:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 255:

    { TRACK_BOUNDS ( yyval, yyvsp[-5], yyvsp[0] ); ;}
    break;

  case 256:

    { TRACK_BOUNDS ( yyval, yyvsp[-5], yyvsp[0] ); ;}
    break;

  case 257:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 258:

    { TRACK_BOUNDS ( yyval, yyvsp[-7], yyvsp[0] ); ;}
    break;

  case 259:

    { TRACK_BOUNDS ( yyval, yyvsp[-13], yyvsp[0] ); ;}
    break;

  case 260:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 261:

    { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); ;}
    break;

  case 266:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 267:

    { TRACK_BOUNDS ( yyval, yyvsp[-4], yyvsp[0] ); ;}
    break;

  case 274:

    { pParser->ToStringUnescape ( pParser->m_pStmt->m_sStringParam, yyvsp[0] ); ;}
    break;

  case 275:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; ;}
    break;

  case 276:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; ;}
    break;

  case 277:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; ;}
    break;

  case 278:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS; ;}
    break;

  case 279:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PROFILE; ;}
    break;

  case 280:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PLAN; ;}
    break;

  case 281:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PLUGINS; ;}
    break;

  case 282:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_THREADS; ;}
    break;

  case 283:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->ToStringUnescape ( pParser->m_pStmt->m_sIndex, yyvsp[-2] );
		;}
    break;

  case 284:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, yyvsp[-2] );
		;}
    break;

  case 285:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_STATUS;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, yyvsp[-1] );
		;}
    break;

  case 286:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_SETTINGS;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, yyvsp[-2] );
		;}
    break;

  case 287:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_SETTINGS;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, yyvsp[-2] );
			pParser->m_pStmt->m_iIntParam = int(yyvsp[-1].m_fValue*10);
		;}
    break;

  case 291:

    {
			pParser->m_pStmt->m_iIntParam = yyvsp[0].m_iValue;
		;}
    break;

  case 292:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_iSetValue = yyvsp[0].m_iValue;
		;}
    break;

  case 293:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->ToString ( pParser->m_pStmt->m_sSetValue, yyvsp[0] );
		;}
    break;

  case 294:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_bSetNull = true;
		;}
    break;

  case 295:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 296:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 297:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 298:

    {
			pParser->SetStatement ( yyvsp[-4], SET_GLOBAL_UVAR );
			pParser->m_pStmt->m_dSetValues = *yyvsp[-1].m_pValues.Ptr();
		;}
    break;

  case 299:

    {
			pParser->SetStatement ( yyvsp[-2], SET_GLOBAL_SVAR );
			pParser->ToString ( pParser->m_pStmt->m_sSetValue, yyvsp[0] ).Unquote();
		;}
    break;

  case 300:

    {
			pParser->SetStatement ( yyvsp[-2], SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_iSetValue = yyvsp[0].m_iValue;
		;}
    break;

  case 301:

    {
			pParser->SetStatement ( yyvsp[-4], SET_INDEX_UVAR );
			pParser->m_pStmt->m_dSetValues = *yyvsp[-1].m_pValues.Ptr();
			pParser->ToString ( pParser->m_pStmt->m_sIndex, yyvsp[-6] );
		;}
    break;

  case 304:

    { yyval.m_iValue = 1; ;}
    break;

  case 305:

    { yyval.m_iValue = 0; ;}
    break;

  case 306:

    {
			yyval.m_iValue = yyvsp[0].m_iValue;
			if ( yyval.m_iValue!=0 && yyval.m_iValue!=1 )
			{
				yyerror ( pParser, "only 0 and 1 could be used as boolean values" );
				YYERROR;
			}
		;}
    break;

  case 314:

    { pParser->m_pStmt->m_eStmt = STMT_COMMIT; ;}
    break;

  case 315:

    { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; ;}
    break;

  case 316:

    { pParser->m_pStmt->m_eStmt = STMT_BEGIN; ;}
    break;

  case 319:

    {
			// everything else is pushed directly into parser within the rules
			pParser->ToString ( pParser->m_pStmt->m_sIndex, yyvsp[-4] );
		;}
    break;

  case 320:

    { pParser->m_pStmt->m_eStmt = STMT_INSERT; ;}
    break;

  case 321:

    { pParser->m_pStmt->m_eStmt = STMT_REPLACE; ;}
    break;

  case 326:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 327:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 330:

    { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } ;}
    break;

  case 331:

    { AddInsval ( pParser, pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 332:

    { AddInsval ( pParser, pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 333:

    { yyval.m_iType = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 334:

    { yyval.m_iType = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 335:

    { yyval.m_iType = TOK_QUOTED_STRING; yyval.m_iStart = yyvsp[0].m_iStart; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 336:

    { yyval.m_iType = TOK_CONST_MVA; yyval.m_pValues = yyvsp[-1].m_pValues; ;}
    break;

  case 337:

    { yyval.m_iType = TOK_CONST_MVA; ;}
    break;

  case 342:

    { if ( !pParser->AddInsertOption ( yyvsp[-2], yyvsp[0] ) ) YYERROR; ;}
    break;

  case 343:

    {
		if ( !pParser->DeleteStatement ( &yyvsp[-1] ) )
			YYERROR;
	;}
    break;

  case 344:

    {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->ToString ( pParser->m_pStmt->m_sCallProc, yyvsp[-4] );
		;}
    break;

  case 345:

    {
			AddInsval ( pParser, pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 346:

    {
			AddInsval ( pParser, pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 348:

    {
			yyval.m_iType = TOK_CONST_STRINGS;
		;}
    break;

  case 349:

    {
			// FIXME? for now, one such array per CALL statement, tops
			if ( pParser->m_pStmt->m_dCallStrings.GetLength() )
			{
				yyerror ( pParser, "unexpected constant string list" );
				YYERROR;
			}
			pParser->ToStringUnescape ( pParser->m_pStmt->m_dCallStrings.Add(), yyvsp[0] );
		;}
    break;

  case 350:

    {
			pParser->ToStringUnescape ( pParser->m_pStmt->m_dCallStrings.Add(), yyvsp[0] );
		;}
    break;

  case 353:

    {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		;}
    break;

  case 355:

    {
			pParser->ToString ( pParser->m_pStmt->m_dCallOptNames.Add(), yyvsp[0] );
			AddInsval ( pParser, pParser->m_pStmt->m_dCallOptValues, yyvsp[-2] );
		;}
    break;

  case 360:

    {
			pParser->m_pStmt->m_eStmt = STMT_DESCRIBE;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, yyvsp[-1] );
		;}
    break;

  case 363:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES; ;}
    break;

  case 364:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_DATABASES; ;}
    break;

  case 365:

    {
			if ( !pParser->UpdateStatement ( &yyvsp[-4] ) )
				YYERROR;
		;}
    break;

  case 368:

    {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->m_tUpdate.m_dPool.Add ( (DWORD)yyvsp[0].m_iValue );
			DWORD uHi = (DWORD)( yyvsp[0].m_iValue>>32 );
			if ( uHi )
			{
				pParser->m_pStmt->m_tUpdate.m_dPool.Add ( uHi );
				pParser->AddUpdatedAttr ( yyvsp[-2], SPH_ATTR_BIGINT );
			} else
			{
				pParser->AddUpdatedAttr ( yyvsp[-2], SPH_ATTR_INTEGER );
			}
		;}
    break;

  case 369:

    {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->m_tUpdate.m_dPool.Add ( sphF2DW ( yyvsp[0].m_fValue ) );
			pParser->AddUpdatedAttr ( yyvsp[-2], SPH_ATTR_FLOAT );
		;}
    break;

  case 370:

    {
			pParser->UpdateMVAAttr ( yyvsp[-4], yyvsp[-1] );
		;}
    break;

  case 371:

    {
			SqlNode_t tNoValues;
			pParser->UpdateMVAAttr ( yyvsp[-3], tNoValues );
		;}
    break;

  case 372:

    {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->m_tUpdate.m_dPool.Add ( (DWORD)yyvsp[0].m_iValue );
			DWORD uHi = (DWORD)( yyvsp[0].m_iValue>>32 );
			if ( uHi )
			{
				pParser->m_pStmt->m_tUpdate.m_dPool.Add ( uHi );
				pParser->AddUpdatedAttr ( yyvsp[-2], SPH_ATTR_BIGINT );
			} else
			{
				pParser->AddUpdatedAttr ( yyvsp[-2], SPH_ATTR_INTEGER );
			}
		;}
    break;

  case 373:

    {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->m_tUpdate.m_dPool.Add ( sphF2DW ( yyvsp[0].m_fValue ) );
			pParser->AddUpdatedAttr ( yyvsp[-2], SPH_ATTR_FLOAT );
		;}
    break;

  case 374:

    { yyval.m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 375:

    { yyval.m_iValue = SPH_ATTR_BIGINT; ;}
    break;

  case 376:

    { yyval.m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 377:

    { yyval.m_iValue = SPH_ATTR_BOOL; ;}
    break;

  case 378:

    { yyval.m_iValue = SPH_ATTR_UINT32SET; ;}
    break;

  case 379:

    { yyval.m_iValue = SPH_ATTR_INT64SET; ;}
    break;

  case 380:

    { yyval.m_iValue = SPH_ATTR_JSON; ;}
    break;

  case 381:

    { yyval.m_iValue = SPH_ATTR_STRING; ;}
    break;

  case 382:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ALTER_ADD;
			pParser->ToString ( tStmt.m_sIndex, yyvsp[-4] );
			pParser->ToString ( tStmt.m_sAlterAttr, yyvsp[-1] );
			tStmt.m_eAlterColType = (ESphAttr)yyvsp[0].m_iValue;
		;}
    break;

  case 383:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ALTER_DROP;
			pParser->ToString ( tStmt.m_sIndex, yyvsp[-3] );
			pParser->ToString ( tStmt.m_sAlterAttr, yyvsp[0] );
		;}
    break;

  case 384:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ALTER_RECONFIGURE;
			pParser->ToString ( tStmt.m_sIndex, yyvsp[-1] );
		;}
    break;

  case 385:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
		;}
    break;

  case 386:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
			pParser->ToStringUnescape ( pParser->m_pStmt->m_sStringParam, yyvsp[0] );
		;}
    break;

  case 393:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_COLLATION;
		;}
    break;

  case 394:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_CHARACTER_SET;
		;}
    break;

  case 395:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 403:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNCTION;
			pParser->ToString ( tStmt.m_sUdfName, yyvsp[-4] );
			pParser->ToStringUnescape ( tStmt.m_sUdfLib, yyvsp[0] );
			tStmt.m_eUdfType = (ESphAttr) yyvsp[-2].m_iValue;
		;}
    break;

  case 404:

    { yyval.m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 405:

    { yyval.m_iValue = SPH_ATTR_BIGINT; ;}
    break;

  case 406:

    { yyval.m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 407:

    { yyval.m_iValue = SPH_ATTR_STRINGPTR; ;}
    break;

  case 408:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNCTION;
			pParser->ToString ( tStmt.m_sUdfName, yyvsp[0] );
		;}
    break;

  case 409:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ATTACH_INDEX;
			pParser->ToString ( tStmt.m_sIndex, yyvsp[-3] );
			pParser->ToString ( tStmt.m_sStringParam, yyvsp[0] );
		;}
    break;

  case 410:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RTINDEX;
			pParser->ToString ( tStmt.m_sIndex, yyvsp[0] );
		;}
    break;

  case 411:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RAMCHUNK;
			pParser->ToString ( tStmt.m_sIndex, yyvsp[0] );
		;}
    break;

  case 412:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_INDEX;
		;}
    break;

  case 413:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT_SYSVAR;
			pParser->ToString ( pParser->m_pStmt->m_tQuery.m_sQuery, yyvsp[-1] );
		;}
    break;

  case 416:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT_DUAL;
			pParser->ToString ( pParser->m_pStmt->m_tQuery.m_sQuery, yyvsp[0] );
		;}
    break;

  case 417:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_TRUNCATE_RTINDEX;
			pParser->ToString ( tStmt.m_sIndex, yyvsp[0] );
		;}
    break;

  case 418:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_OPTIMIZE_INDEX;
			pParser->ToString ( tStmt.m_sIndex, yyvsp[0] );
		;}
    break;

  case 419:

    {
			SqlStmt_t & s = *pParser->m_pStmt;
			s.m_eStmt = STMT_CREATE_PLUGIN;
			pParser->ToString ( s.m_sUdfName, yyvsp[-4] );
			pParser->ToStringUnescape ( s.m_sStringParam, yyvsp[-2] );
			pParser->ToStringUnescape ( s.m_sUdfLib, yyvsp[0] );
		;}
    break;

  case 420:

    {
			SqlStmt_t & s = *pParser->m_pStmt;
			s.m_eStmt = STMT_DROP_PLUGIN;
			pParser->ToString ( s.m_sUdfName, yyvsp[-2] );
			pParser->ToStringUnescape ( s.m_sStringParam, yyvsp[0] );
		;}
    break;

  case 421:

    {
			SqlStmt_t & s = *pParser->m_pStmt;
			s.m_eStmt = STMT_RELOAD_PLUGINS;
			pParser->ToStringUnescape ( s.m_sUdfLib, yyvsp[0] );
		;}
    break;

  case 424:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 426:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 427:

    { yyval = yyvsp[0]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 428:

    { yyval = yyvsp[0]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 429:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 430:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 431:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 432:

    { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); ;}
    break;

  case 436:

    {
			pParser->m_pQuery->m_sFacetBy = pParser->m_pQuery->m_sGroupBy;
			pParser->m_pQuery->m_sGroupBy = "";
			pParser->AddCount ();
		;}
    break;

  case 438:

    {
			pParser->AddItem ( &yyvsp[0] );
			pParser->AddGroupBy ( yyvsp[0] );
		;}
    break;

  case 441:

    {
			pParser->m_pStmt->m_eStmt = STMT_FACET;
			if ( pParser->m_pQuery->m_sFacetBy.IsEmpty() )
			{
				pParser->m_pQuery->m_sFacetBy = pParser->m_pQuery->m_sGroupBy;
				pParser->AddCount ();
			}
		;}
    break;

  case 443:

    {
			pParser->ToStringUnescape ( pParser->m_pStmt->m_sStringParam, yyvsp[0] );
		;}
    break;

  case 444:

    {
			pParser->m_pStmt->m_eStmt = STMT_RELOAD_INDEX;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, yyvsp[-1]);
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
	    if (yyx+yyn<int(sizeof(yycheck)/sizeof(yycheck[0])) && yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
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
		    if (yyx+yyn<int(sizeof(yycheck)/sizeof(yycheck[0])) && yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
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
		    if (yyx+yyn<int(sizeof(yycheck)/sizeof(yycheck[0])) && yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
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

