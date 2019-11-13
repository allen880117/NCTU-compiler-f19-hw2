#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20130304

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "error.h"

extern int32_t LineNum;   /* declared in scanner.l */
extern char Buffer[512];  /* declared in scanner.l */
extern FILE *yyin;        /* declared by lex */
extern char *yytext;      /* declared by lex */

extern int yylex(void); 
static void yyerror(const char *msg);
#line 33 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define COMMA 257
#define SEMICOLON 258
#define COLON 259
#define L_PARENTHESES 260
#define R_PARENTHESES 261
#define L_BRACKETS 262
#define R_BRACKETS 263
#define PLUS 264
#define MINUS 265
#define STAR 266
#define SLASH 267
#define MOD 268
#define ASSIGN 269
#define LT 270
#define LE 271
#define NEQ 272
#define GE 273
#define GT 274
#define EQ 275
#define AND 276
#define OR 277
#define NOT 278
#define KWarray 279
#define KWbegin 280
#define KWboolean 281
#define KWdef 282
#define KWdo 283
#define KWelse 284
#define KWend 285
#define KWfalse 286
#define KWfor 287
#define KWinteger 288
#define KWif 289
#define KWof 290
#define KWprint 291
#define KWread 292
#define KWreal 293
#define KWstring 294
#define KWthen 295
#define KWto 296
#define KWtrue 297
#define KWreturn 298
#define KWvar 299
#define KWwhile 300
#define ID 301
#define DEC_INT 302
#define OCT_INT 303
#define FLOAT 304
#define SCIENTIFIC 305
#define STRING 306
#define UMINUS 307
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    4,    4,    5,    6,    9,    9,    7,    7,   10,
   10,   11,    2,    2,   13,   13,   14,   14,   15,   16,
   16,   17,   18,   18,   12,   12,    8,    8,    8,    8,
   19,   20,   21,   21,   21,   21,   21,   21,   21,    1,
    1,   22,   22,   23,   23,    3,   25,   25,   25,   26,
   26,   28,   29,   29,   30,   27,   31,   31,   31,   31,
   32,   32,   34,   34,   36,   36,   37,   37,   38,   38,
   39,   39,   40,   41,   41,   41,   41,   41,   35,   35,
   33,   33,   33,   33,   33,   33,   43,   43,   44,   45,
   46,   42,   48,   47,   47,   49,   49,   24,   24,   50,
   50,   51,   51,   51,   51,   51,   51,   51,
};
static const short yylen[] = {                            2,
    7,    1,    1,   10,    8,    3,    1,    1,    0,    3,
    1,    3,    1,    0,    2,    1,    5,    5,    2,    2,
    1,    5,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    5,    1,    1,    1,    1,    1,    1,    1,    1,
    0,    2,    1,    1,    1,    4,    4,    3,    3,    1,
    1,    2,    2,    1,    3,    1,    3,    3,    2,    1,
    3,    1,    3,    1,    3,    1,    3,    1,    3,    1,
    2,    1,    1,    3,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    8,    6,    6,   10,
    3,    4,    2,    1,    0,    3,    1,    1,    0,    2,
    1,    1,    1,    1,    1,    1,    1,    1,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,   44,   45,    0,   43,    7,
    0,    0,    0,   16,    2,    3,    0,   42,    0,    0,
    0,    0,    0,   15,    6,    0,   30,   39,   27,   28,
   29,   38,   33,   34,   35,   36,   37,    0,    0,    0,
   21,    0,    0,    0,    0,   11,    0,    0,   23,   24,
    0,   17,   18,   19,   20,   32,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  102,    0,  103,    0,
   51,    0,  104,  105,  106,  107,  108,    0,  101,    1,
    0,    0,    0,   31,   25,   12,   26,   10,    0,    0,
    0,    0,    0,   75,    0,   78,    0,    0,    0,    0,
    0,    0,   70,   72,   73,   77,    0,    0,    0,    0,
    0,    0,    0,    0,   54,   46,    0,   93,  100,    0,
    0,    0,    0,    0,   71,   59,    0,    0,    0,   81,
   82,   83,   84,   85,   86,    0,   79,   80,    0,    0,
    0,    0,   48,   49,   91,    0,   97,    0,    0,    0,
   53,    0,   22,    0,    0,    0,   74,    0,    0,    0,
    0,    0,    0,    0,   69,    0,   92,    0,   55,   47,
    5,    0,    0,    0,    0,    0,   96,    0,    0,    0,
   88,   89,    4,    0,    0,    0,   87,    0,   90,
};
static const short yydgoto[] = {                          2,
    5,   13,   67,   14,   15,   16,   43,   38,   44,   45,
   46,   86,   17,    6,   39,   40,   41,   51,   87,    7,
   94,    8,    9,   68,   69,   70,   95,   96,  114,  115,
   97,   98,  136,   99,  139,  100,  101,  102,  103,  104,
  105,  106,   73,   74,   75,   76,  148,   77,  149,   78,
   79,
};
static const short yysindex[] = {                      -290,
 -217,    0, -277, -256, -252,    0,    0, -277,    0,    0,
 -247, -209, -223,    0,    0,    0, -252,    0, -242,  166,
 -256, -277, -219,    0,    0, -266,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -188, -178, -190,
    0, -168, -164, -238, -158,    0,  225, -199,    0,    0,
 -191,    0,    0,    0,    0,    0, -220,   67, -256, -193,
 -230, -230, -174, -230, -230, -236,    0, -155,    0, -138,
    0, -147,    0,    0,    0,    0,    0,  225,    0,    0,
 -266, -223, -265,    0,    0,    0,    0,    0, -136, -230,
 -218, -230, -236,    0, -161,    0, -233,  169, -206, -131,
 -129, -127,    0,    0,    0,    0, -118, -121, -115, -111,
 -135, -230, -230, -121,    0,    0, -230,    0,    0, -140,
 -128,  -92, -266,  -94,    0,    0,  225, -218, -218,    0,
    0,    0,    0,    0,    0, -218,    0,    0, -218, -218,
 -218, -218,    0,    0,    0,  225,    0,  -93,  -88,  -91,
    0,  -85,    0, -126, -223, -122,    0, -221,  169,  169,
 -206, -131, -129, -127,    0, -107,    0, -230,    0,    0,
    0, -106, -266,  225, -108, -113,    0, -104,  -95,  -87,
    0,    0,    0,  225,  -90,  -84,    0,  -83,    0,
};
static const short yyrindex[] = {                         0,
    0,    0, -267,    0,  -76,    0,    0,  193,    0,    0,
    0,    0,    0,    0,    0,    0,  -75,    0,    0,    0,
  -58,  210,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -55,    0,  -73,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -60,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -207,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -112,    0,    0,    0, -243,  143,   95,   39,
  -20,  -81,    0,    0,    0,    0,    0,  -48,    0,    0,
    0,  -42,    0, -151,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -192,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -73,    0,    0,  -32,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  151,  172,
  122,   68,   10,  -50,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -73,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -73,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  206,    0,  -13,  213,    0,    0,    0,  -33,  227,    0,
  173,    0,    0,    0,    0,    0,  194,  -77,    0,    0,
  215,    0,  228, -119,    0,  176,  -59,  -46,    0,  126,
  150,  -34,    0,  108,    0,  110,  118,  119,  -82,    0,
    0,  -45,    0,    0,    0,    0,    0,    0,    0,    0,
  181,
};
#define YYTABLESIZE 526
static const short yytable[] = {                         23,
   71,   72,  107,  120,  110,  111,   54,  158,  125,   19,
    1,   20,   41,   56,   56,   27,   71,   56,   19,   56,
   58,    4,   29,  112,   85,  113,  166,   30,   31,   90,
  124,   71,   72,   41,   91,   49,   50,   82,   83,   56,
    3,   90,  128,  129,   10,  156,   91,   92,   12,  122,
   21,   56,  147,  150,  180,   28,   22,  152,   25,  165,
  137,  138,  174,  175,  186,   48,   32,   28,  121,   52,
   93,   33,   34,   35,   36,   37,   98,   98,   32,   53,
   71,   72,   93,   33,   34,   35,   36,   37,   26,   56,
   27,   99,   99,  159,  160,  179,   57,   29,   59,   71,
   72,   80,   30,   31,   81,   52,   52,   89,  177,   52,
  118,   52,   52,   52,   52,   52,   52,   52,   52,   52,
   52,   52,   52,   52,   52,   52,  108,   71,   72,  116,
  117,   52,  123,  127,  140,  141,  142,   71,   72,  143,
  113,  172,  144,   52,   76,   76,  145,  146,   76,  153,
   76,   76,   76,   76,   76,   76,  154,   76,   76,   76,
   76,   76,   76,   76,   76,  155,  157,  167,  168,  182,
   76,  169,  170,  173,  171,   68,   68,  176,  178,   68,
  181,   68,   76,   68,   68,   68,   68,  184,   68,   68,
   68,   68,   68,   68,   68,   68,  183,  185,  187,  189,
  188,   68,    9,   14,   13,    8,   67,   67,   50,   50,
   67,   99,   67,   68,   67,   67,   67,   67,   95,   67,
   67,   67,   67,   67,   67,   67,   67,   47,   94,   24,
   11,   88,   67,   55,   42,   18,   66,   66,  109,  151,
   66,  126,   66,  161,   67,   66,   66,   66,  162,   66,
   66,   66,   66,   66,   66,   66,   66,  163,  119,  164,
    0,    0,   66,    0,    0,    0,   65,   65,    0,    0,
   65,    0,   65,    0,   66,   65,   65,   65,    0,   65,
   65,   65,   65,   65,   65,   65,   65,    0,    0,    0,
    0,    0,   65,    0,    0,   64,   64,    0,    0,   64,
    0,   64,    0,    0,   65,   64,   64,    0,   64,   64,
   64,   64,   64,   64,   64,   64,    0,    0,    0,    0,
    0,   64,    0,    0,   63,   63,    0,    0,   63,    0,
   63,    0,    0,   64,   63,   63,    0,   63,   63,   63,
   63,   63,   63,   63,   63,   84,    0,   27,    0,    0,
   63,   62,   62,    0,   29,   62,    0,   62,    0,   30,
   31,    0,   63,    0,   62,   62,   62,   62,   62,   62,
   62,   62,    0,    0,    0,    0,    0,   62,   61,   61,
    0,    0,   61,    0,   61,    0,    0,    0,    0,   62,
    0,   61,   61,   61,   61,   61,   61,   61,   61,   60,
   60,    0,    0,   60,   61,   60,    0,   57,   57,    0,
    0,   57,    0,   57,    0,    0,   61,    0,   60,   60,
    0,    0,    0,    0,    0,   60,   57,   57,   58,   58,
    0,    0,   58,   57,   58,    0,    0,   60,  130,  131,
  132,  133,  134,  135,   26,   57,   27,   58,   58,    0,
    0,   28,    0,   29,   58,    0,    0,    0,   30,   31,
    0,    0,   32,    0,    0,    0,   58,   33,   34,   35,
   36,   37,   40,    0,    0,    0,    0,   40,    0,   40,
    0,   40,    0,   40,   40,    0,    0,    0,    0,   41,
   40,    0,   40,   40,   41,    0,   41,    0,   41,    0,
   41,   41,    0,    0,   22,    0,    0,   41,    0,   41,
   41,   60,    0,   61,    0,   62,   63,    0,    0,    0,
    0,    0,   64,    0,   65,   66,
};
static const short yycheck[] = {                         13,
   47,   47,   62,   81,   64,   65,   40,  127,   91,  257,
  301,  259,  280,  257,  258,  281,   63,  261,  257,  263,
  259,  299,  288,  260,   58,  262,  146,  293,  294,  260,
   90,   78,   78,  301,  265,  302,  303,  258,  259,  283,
  258,  260,  276,  277,  301,  123,  265,  278,  301,   83,
  260,  295,  112,  113,  174,  286,  280,  117,  301,  142,
  267,  268,  284,  285,  184,  285,  297,  286,   82,  258,
  301,  302,  303,  304,  305,  306,  284,  285,  297,  258,
  127,  127,  301,  302,  303,  304,  305,  306,  279,  258,
  281,  284,  285,  128,  129,  173,  261,  288,  257,  146,
  146,  301,  293,  294,  296,  257,  258,  301,  168,  261,
  258,  263,  264,  265,  266,  267,  268,  269,  270,  271,
  272,  273,  274,  275,  276,  277,  301,  174,  174,  285,
  269,  283,  269,  295,  266,  265,  264,  184,  184,  258,
  262,  155,  258,  295,  257,  258,  258,  283,  261,  290,
  263,  264,  265,  266,  267,  268,  285,  270,  271,  272,
  273,  274,  275,  276,  277,  258,  261,  261,  257,  283,
  283,  263,  258,  296,  301,  257,  258,  285,  285,  261,
  289,  263,  295,  265,  266,  267,  268,  283,  270,  271,
  272,  273,  274,  275,  276,  277,  301,  285,  289,  283,
  285,  283,  261,  280,  280,  261,  257,  258,  269,  258,
  261,  285,  263,  295,  265,  266,  267,  268,  261,  270,
  271,  272,  273,  274,  275,  276,  277,   22,  261,   17,
    4,   59,  283,   40,   20,    8,  257,  258,   63,  114,
  261,   92,  263,  136,  295,  266,  267,  268,  139,  270,
  271,  272,  273,  274,  275,  276,  277,  140,   78,  141,
   -1,   -1,  283,   -1,   -1,   -1,  257,  258,   -1,   -1,
  261,   -1,  263,   -1,  295,  266,  267,  268,   -1,  270,
  271,  272,  273,  274,  275,  276,  277,   -1,   -1,   -1,
   -1,   -1,  283,   -1,   -1,  257,  258,   -1,   -1,  261,
   -1,  263,   -1,   -1,  295,  267,  268,   -1,  270,  271,
  272,  273,  274,  275,  276,  277,   -1,   -1,   -1,   -1,
   -1,  283,   -1,   -1,  257,  258,   -1,   -1,  261,   -1,
  263,   -1,   -1,  295,  267,  268,   -1,  270,  271,  272,
  273,  274,  275,  276,  277,  279,   -1,  281,   -1,   -1,
  283,  257,  258,   -1,  288,  261,   -1,  263,   -1,  293,
  294,   -1,  295,   -1,  270,  271,  272,  273,  274,  275,
  276,  277,   -1,   -1,   -1,   -1,   -1,  283,  257,  258,
   -1,   -1,  261,   -1,  263,   -1,   -1,   -1,   -1,  295,
   -1,  270,  271,  272,  273,  274,  275,  276,  277,  257,
  258,   -1,   -1,  261,  283,  263,   -1,  257,  258,   -1,
   -1,  261,   -1,  263,   -1,   -1,  295,   -1,  276,  277,
   -1,   -1,   -1,   -1,   -1,  283,  276,  277,  257,  258,
   -1,   -1,  261,  283,  263,   -1,   -1,  295,  270,  271,
  272,  273,  274,  275,  279,  295,  281,  276,  277,   -1,
   -1,  286,   -1,  288,  283,   -1,   -1,   -1,  293,  294,
   -1,   -1,  297,   -1,   -1,   -1,  295,  302,  303,  304,
  305,  306,  280,   -1,   -1,   -1,   -1,  285,   -1,  287,
   -1,  289,   -1,  291,  292,   -1,   -1,   -1,   -1,  280,
  298,   -1,  300,  301,  285,   -1,  287,   -1,  289,   -1,
  291,  292,   -1,   -1,  280,   -1,   -1,  298,   -1,  300,
  301,  287,   -1,  289,   -1,  291,  292,   -1,   -1,   -1,
   -1,   -1,  298,   -1,  300,  301,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 307
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"COMMA","SEMICOLON","COLON",
"L_PARENTHESES","R_PARENTHESES","L_BRACKETS","R_BRACKETS","PLUS","MINUS","STAR",
"SLASH","MOD","ASSIGN","LT","LE","NEQ","GE","GT","EQ","AND","OR","NOT",
"KWarray","KWbegin","KWboolean","KWdef","KWdo","KWelse","KWend","KWfalse",
"KWfor","KWinteger","KWif","KWof","KWprint","KWread","KWreal","KWstring",
"KWthen","KWto","KWtrue","KWreturn","KWvar","KWwhile","ID","DEC_INT","OCT_INT",
"FLOAT","SCIENTIFIC","STRING","UMINUS",
};
static const char *yyrule[] = {
"$accept : program",
"program : ID SEMICOLON opt_variable_constant_declaration opt_function_declaration compound_statement KWend ID",
"function : function_normal",
"function : function_procedure",
"function_normal : ID L_PARENTHESES opt_formal_arguments R_PARENTHESES COLON scalar_type SEMICOLON compound_statement KWend ID",
"function_procedure : ID L_PARENTHESES opt_formal_arguments R_PARENTHESES SEMICOLON compound_statement KWend ID",
"identifier_list : identifier_list COMMA ID",
"identifier_list : ID",
"opt_formal_arguments : formal_arguments_list",
"opt_formal_arguments :",
"formal_arguments_list : formal_arguments_list COMMA formal_argument",
"formal_arguments_list : formal_argument",
"formal_argument : identifier_list COLON type",
"opt_function_declaration : function_declaration_list",
"opt_function_declaration :",
"function_declaration_list : function_declaration_list function",
"function_declaration_list : function",
"variable : KWvar identifier_list COLON scalar_type SEMICOLON",
"variable : KWvar identifier_list COLON structed_delcaration SEMICOLON",
"structed_delcaration : array_declaratin_list scalar_type",
"array_declaratin_list : array_declaratin_list array_declaration",
"array_declaratin_list : array_declaration",
"array_declaration : KWarray integer_constant KWto integer_constant KWof",
"integer_constant : DEC_INT",
"integer_constant : OCT_INT",
"type : scalar_type",
"type : structured_type",
"scalar_type : KWinteger",
"scalar_type : KWreal",
"scalar_type : KWstring",
"scalar_type : KWboolean",
"structured_type : KWarray",
"constant : KWvar identifier_list COLON literal_constant SEMICOLON",
"literal_constant : DEC_INT",
"literal_constant : OCT_INT",
"literal_constant : FLOAT",
"literal_constant : SCIENTIFIC",
"literal_constant : STRING",
"literal_constant : KWtrue",
"literal_constant : KWfalse",
"opt_variable_constant_declaration : variable_and_constant_list",
"opt_variable_constant_declaration :",
"variable_and_constant_list : variable_and_constant_list variable_and_constant",
"variable_and_constant_list : variable_and_constant",
"variable_and_constant : variable",
"variable_and_constant : constant",
"compound_statement : KWbegin opt_variable_constant_declaration opt_statements KWend",
"simple_statement : variable_reference ASSIGN expressions SEMICOLON",
"simple_statement : KWprint expressions SEMICOLON",
"simple_statement : KWread variable_reference SEMICOLON",
"variable_reference : ID",
"variable_reference : array_reference",
"array_reference : ID brackets_expressions_list",
"brackets_expressions_list : brackets_expressions_list brackets_expressions",
"brackets_expressions_list : brackets_expressions",
"brackets_expressions : L_BRACKETS expressions R_BRACKETS",
"expressions : level_7",
"level_7 : level_7 AND level_6",
"level_7 : level_7 OR level_6",
"level_7 : NOT level_7",
"level_7 : level_6",
"level_6 : level_6 relational_op level_5",
"level_6 : level_5",
"level_5 : level_5 division_op level_4",
"level_5 : level_4",
"level_4 : level_4 STAR level_3",
"level_4 : level_3",
"level_3 : level_3 MINUS level_2",
"level_3 : level_2",
"level_2 : level_2 PLUS level_1",
"level_2 : level_1",
"level_1 : MINUS level_1",
"level_1 : level_0",
"level_0 : valid_components",
"valid_components : L_PARENTHESES expressions R_PARENTHESES",
"valid_components : literal_constant",
"valid_components : ID",
"valid_components : function_invocation",
"valid_components : array_reference",
"division_op : SLASH",
"division_op : MOD",
"relational_op : LT",
"relational_op : LE",
"relational_op : NEQ",
"relational_op : GE",
"relational_op : GT",
"relational_op : EQ",
"conditional : KWif expressions KWthen opt_statements KWelse opt_statements KWend KWif",
"conditional : KWif expressions KWthen opt_statements KWend KWif",
"while : KWwhile expressions KWdo opt_statements KWend KWdo",
"for : KWfor ID ASSIGN integer_constant KWto integer_constant KWdo opt_statements KWend KWdo",
"return : KWreturn expressions SEMICOLON",
"function_invocation : ID L_PARENTHESES expressions_separated_by_opt_comma R_PARENTHESES",
"procedure_call : function_invocation SEMICOLON",
"expressions_separated_by_opt_comma : expressions_list",
"expressions_separated_by_opt_comma :",
"expressions_list : expressions_list COMMA expressions",
"expressions_list : expressions",
"opt_statements : statements_list",
"opt_statements :",
"statements_list : statements_list statements",
"statements_list : statements",
"statements : compound_statement",
"statements : simple_statement",
"statements : conditional",
"statements : while",
"statements : for",
"statements : return",
"statements : procedure_call",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 271 "parser.y"

void yyerror(const char *msg) {
    fprintf(stderr,
            "\n"
            "|-----------------------------------------------------------------"
            "---------\n"
            "| Error found in Line #%d: %s\n"
            "|\n"
            "| Unmatched token: %s\n"
            "|-----------------------------------------------------------------"
            "---------\n",
            LineNum, Buffer, yytext);
    exit(-1);
}

int main(int argc, const char *argv[]) {
    CHECK(argc == 2, "Usage: ./parser <filename>\n");

    FILE *fp = fopen(argv[1], "r");

    CHECK(fp != NULL, "fopen() fails.\n");
    yyin = fp;
    yyparse();

    printf("\n"
           "|--------------------------------|\n"
           "|  There is no syntactic error!  |\n"
           "|--------------------------------|\n");
    return 0;
}
#line 538 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
