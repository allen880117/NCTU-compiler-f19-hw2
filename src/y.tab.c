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
    0,    0,    0,    0,   71,    0,    0,    0,    0,   81,
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
 -239,    0, -262, -260, -256,    0,    0, -262,    0,    0,
 -247, -221, -231,    0,    0,    0, -256,    0, -250,  194,
 -260, -262, -228,    0,    0, -274,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -197, -194, -189,
    0, -192, -191, -233, -179,    0,  253, -212,    0,    0,
 -216,    0,    0,    0,    0,    0, -215, -118, -260, -210,
 -230, -230, -206, -230, -230, -224,    0, -175,    0, -167,
    0, -152,    0,    0,    0,    0,    0,  253,    0,    0,
 -274, -231, -272,    0,    0,    0,    0,    0, -157, -230,
 -183, -218, -224,    0, -178,    0, -214,  197, -174, -136,
 -134, -132,    0,    0,    0,    0, -124, -127, -122, -121,
 -140, -230, -230, -127,    0,    0, -230,    0,    0, -128,
 -120,  -94, -274,  -93,    0,  197,  253, -218, -218,    0,
    0,    0,    0,    0,    0, -218,    0,    0, -218, -218,
 -218, -218,    0,    0,    0,  253,    0,  -92,  -90,  -91,
    0,  -87,    0, -116, -231, -102,    0, -187,  197,  197,
 -174, -136, -134, -132,    0,  -89,    0, -230,    0,    0,
    0,  -88, -274,  253,  -86,  -85,    0, -106,  -83,  -79,
    0,    0,    0,  253,  -82,  -76,    0,  -81,    0,
};
static const short yyrindex[] = {                         0,
    0,    0, -267,    0,  -64,    0,    0,  221,    0,    0,
    0,    0,    0,    0,    0,    0,  -55,    0,    0,    0,
  -60,  238,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -35,    0,  -58,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -41,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -169,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -84,    0,    0,    0, -243, -150,  123,   67,
    8,  -53,    0,    0,    0,    0,    0,  -29,    0,    0,
    0,  -30,    0, -117,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  171, -160,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -58,    0,    0,  -28,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  179,  200,
  150,   96,   38,  -22,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -58,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -58,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  210,    0,  -13,  217,    0,    0,    0,  -33,  233,    0,
  181,    0,    0,    0,    0,    0,  198,  -77,    0,    0,
  227,    0,  248, -119,    0,  195,  -59,  -46,    0,  143,
    0,  -69,    0,  124,    0,  120,  122,  126,  121,  173,
    0,  -45,    0,    0,    0,    0,    0,    0,    0,    0,
  190,
};
#define YYTABLESIZE 554
static const short yytable[] = {                         23,
   71,   72,  107,  120,  110,  111,   54,  158,   27,   19,
    1,   20,   41,   56,   56,   29,   71,   56,    3,   56,
   30,   31,  126,   19,   85,   58,  166,   49,   50,   90,
  124,   71,   72,   41,   91,  112,    4,  113,   21,   56,
   10,   90,   82,   83,   12,  156,   91,   92,   22,  122,
   25,   56,  147,  150,  180,   28,   48,  152,  159,  160,
   52,  128,  129,   53,  186,   56,   32,   28,  121,   57,
   93,   33,   34,   35,   36,   37,   90,   59,   32,   81,
   71,   72,   93,   33,   34,   35,   36,   37,   80,   26,
   89,   27,  137,  138,  108,  179,  174,  175,   29,   71,
   72,  117,   28,   30,   31,  118,   60,   60,  177,  116,
   60,  123,   60,   32,   98,   98,  127,   93,   33,   34,
   35,   36,   37,   99,   99,   60,   60,   71,   72,  140,
  141,  142,   60,  143,  113,  144,  145,   71,   72,   52,
   52,  172,  146,   52,   60,   52,   52,   52,   52,   52,
   52,   52,   52,   52,   52,   52,   52,   52,   52,   52,
   84,  153,   27,  155,  154,   52,  168,  157,  167,   29,
  170,  169,   76,   76,   30,   31,   76,   52,   76,   76,
   76,   76,   76,   76,  171,   76,   76,   76,   76,   76,
   76,   76,   76,  173,  183,  176,  178,  182,   76,  184,
    9,  189,  181,   68,   68,  185,  187,   68,  188,   68,
   76,   68,   68,   68,   68,   14,   68,   68,   68,   68,
   68,   68,   68,   68,   13,    8,   99,   50,   50,   68,
   95,   47,   94,   24,   67,   67,   11,   55,   67,   88,
   67,   68,   67,   67,   67,   67,   42,   67,   67,   67,
   67,   67,   67,   67,   67,   18,  151,  109,  162,  161,
   67,  163,  165,  125,   66,   66,  164,  119,   66,    0,
   66,    0,   67,   66,   66,   66,    0,   66,   66,   66,
   66,   66,   66,   66,   66,    0,    0,    0,    0,    0,
   66,    0,    0,    0,   65,   65,    0,    0,   65,    0,
   65,    0,   66,   65,   65,   65,    0,   65,   65,   65,
   65,   65,   65,   65,   65,    0,    0,    0,    0,    0,
   65,    0,    0,   64,   64,    0,    0,   64,    0,   64,
    0,    0,   65,   64,   64,    0,   64,   64,   64,   64,
   64,   64,   64,   64,    0,    0,    0,    0,    0,   64,
    0,    0,   63,   63,    0,    0,   63,    0,   63,    0,
    0,   64,   63,   63,    0,   63,   63,   63,   63,   63,
   63,   63,   63,    0,    0,    0,    0,    0,   63,   62,
   62,    0,    0,   62,    0,   62,    0,    0,    0,    0,
   63,    0,   62,   62,   62,   62,   62,   62,   62,   62,
    0,    0,    0,    0,    0,   62,   61,   61,    0,    0,
   61,    0,   61,    0,    0,    0,    0,   62,    0,   61,
   61,   61,   61,   61,   61,   61,   61,   59,   59,    0,
    0,   59,   61,   59,    0,   57,   57,    0,    0,   57,
    0,   57,    0,    0,   61,    0,   59,   59,    0,    0,
    0,    0,    0,   59,   57,   57,   58,   58,    0,    0,
   58,   57,   58,    0,    0,   59,  130,  131,  132,  133,
  134,  135,   26,   57,   27,   58,   58,    0,    0,   28,
    0,   29,   58,    0,    0,    0,   30,   31,    0,    0,
   32,    0,    0,    0,   58,   33,   34,   35,   36,   37,
   40,    0,    0,    0,    0,   40,    0,   40,    0,   40,
    0,   40,   40,    0,    0,    0,    0,   41,   40,    0,
   40,   40,   41,    0,   41,    0,   41,    0,   41,   41,
    0,    0,   22,    0,    0,   41,    0,   41,   41,   60,
    0,   61,    0,   62,   63,    0,    0,    0,    0,    0,
   64,    0,   65,   66,
};
static const short yycheck[] = {                         13,
   47,   47,   62,   81,   64,   65,   40,  127,  281,  257,
  301,  259,  280,  257,  258,  288,   63,  261,  258,  263,
  293,  294,   92,  257,   58,  259,  146,  302,  303,  260,
   90,   78,   78,  301,  265,  260,  299,  262,  260,  283,
  301,  260,  258,  259,  301,  123,  265,  278,  280,   83,
  301,  295,  112,  113,  174,  286,  285,  117,  128,  129,
  258,  276,  277,  258,  184,  258,  297,  286,   82,  261,
  301,  302,  303,  304,  305,  306,  260,  257,  297,  296,
  127,  127,  301,  302,  303,  304,  305,  306,  301,  279,
  301,  281,  267,  268,  301,  173,  284,  285,  288,  146,
  146,  269,  286,  293,  294,  258,  257,  258,  168,  285,
  261,  269,  263,  297,  284,  285,  295,  301,  302,  303,
  304,  305,  306,  284,  285,  276,  277,  174,  174,  266,
  265,  264,  283,  258,  262,  258,  258,  184,  184,  257,
  258,  155,  283,  261,  295,  263,  264,  265,  266,  267,
  268,  269,  270,  271,  272,  273,  274,  275,  276,  277,
  279,  290,  281,  258,  285,  283,  257,  261,  261,  288,
  258,  263,  257,  258,  293,  294,  261,  295,  263,  264,
  265,  266,  267,  268,  301,  270,  271,  272,  273,  274,
  275,  276,  277,  296,  301,  285,  285,  283,  283,  283,
  261,  283,  289,  257,  258,  285,  289,  261,  285,  263,
  295,  265,  266,  267,  268,  280,  270,  271,  272,  273,
  274,  275,  276,  277,  280,  261,  285,  269,  258,  283,
  261,   22,  261,   17,  257,  258,    4,   40,  261,   59,
  263,  295,  265,  266,  267,  268,   20,  270,  271,  272,
  273,  274,  275,  276,  277,    8,  114,   63,  139,  136,
  283,  140,  142,   91,  257,  258,  141,   78,  261,   -1,
  263,   -1,  295,  266,  267,  268,   -1,  270,  271,  272,
  273,  274,  275,  276,  277,   -1,   -1,   -1,   -1,   -1,
  283,   -1,   -1,   -1,  257,  258,   -1,   -1,  261,   -1,
  263,   -1,  295,  266,  267,  268,   -1,  270,  271,  272,
  273,  274,  275,  276,  277,   -1,   -1,   -1,   -1,   -1,
  283,   -1,   -1,  257,  258,   -1,   -1,  261,   -1,  263,
   -1,   -1,  295,  267,  268,   -1,  270,  271,  272,  273,
  274,  275,  276,  277,   -1,   -1,   -1,   -1,   -1,  283,
   -1,   -1,  257,  258,   -1,   -1,  261,   -1,  263,   -1,
   -1,  295,  267,  268,   -1,  270,  271,  272,  273,  274,
  275,  276,  277,   -1,   -1,   -1,   -1,   -1,  283,  257,
  258,   -1,   -1,  261,   -1,  263,   -1,   -1,   -1,   -1,
  295,   -1,  270,  271,  272,  273,  274,  275,  276,  277,
   -1,   -1,   -1,   -1,   -1,  283,  257,  258,   -1,   -1,
  261,   -1,  263,   -1,   -1,   -1,   -1,  295,   -1,  270,
  271,  272,  273,  274,  275,  276,  277,  257,  258,   -1,
   -1,  261,  283,  263,   -1,  257,  258,   -1,   -1,  261,
   -1,  263,   -1,   -1,  295,   -1,  276,  277,   -1,   -1,
   -1,   -1,   -1,  283,  276,  277,  257,  258,   -1,   -1,
  261,  283,  263,   -1,   -1,  295,  270,  271,  272,  273,
  274,  275,  279,  295,  281,  276,  277,   -1,   -1,  286,
   -1,  288,  283,   -1,   -1,   -1,  293,  294,   -1,   -1,
  297,   -1,   -1,   -1,  295,  302,  303,  304,  305,  306,
  280,   -1,   -1,   -1,   -1,  285,   -1,  287,   -1,  289,
   -1,  291,  292,   -1,   -1,   -1,   -1,  280,  298,   -1,
  300,  301,  285,   -1,  287,   -1,  289,   -1,  291,  292,
   -1,   -1,  280,   -1,   -1,  298,   -1,  300,  301,  287,
   -1,  289,   -1,  291,  292,   -1,   -1,   -1,   -1,   -1,
  298,   -1,  300,  301,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 306
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
"FLOAT","SCIENTIFIC","STRING",
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
"level_7 : NOT level_6",
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
"level_1 : MINUS level_0",
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
#line 267 "parser.y"

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
#line 543 "y.tab.c"

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
