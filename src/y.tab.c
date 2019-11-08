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
    0,    4,    4,    5,    6,    9,    9,   11,   12,   12,
   13,   15,    3,   18,   18,   18,   21,   21,   21,   21,
   21,   21,   22,   22,   20,   23,   23,   23,   23,   24,
   24,   25,   25,   26,   26,   27,   27,   28,   28,   29,
   29,   30,   30,   30,   30,   30,   33,   31,   35,   35,
   36,   37,   38,   17,   17,   39,   39,   40,   40,   40,
   40,   40,   40,   40,    1,    1,   41,   41,   42,   42,
    2,    2,   43,   43,    7,    7,   44,   44,   45,   10,
   10,   19,   19,   32,   47,   47,   48,   34,   34,   49,
   49,    8,    8,    8,    8,   46,   46,   14,   14,   16,
   16,   16,   16,   16,   16,
};
static const short yylen[] = {                            2,
    7,    1,    1,   10,    8,    5,    5,    2,    2,    1,
    5,    5,    4,    4,    3,    3,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    3,    3,    2,    1,    3,
    1,    3,    1,    3,    1,    3,    1,    3,    1,    2,
    1,    3,    1,    1,    1,    1,    2,    4,    8,    6,
    6,   10,    3,    1,    0,    2,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    0,    2,    1,    1,    1,
    1,    0,    2,    1,    1,    0,    3,    1,    3,    3,
    1,    1,    1,    2,    2,    1,    3,    1,    0,    3,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,   69,   70,    0,   68,   81,
    0,    0,    0,   74,    2,    3,    0,   67,    0,    0,
    0,    0,    0,   73,   80,    0,   95,  105,   92,   93,
   94,  104,   98,   99,  102,  101,  103,    0,    0,    0,
   10,  100,    0,    0,    0,    0,   78,    0,    0,    0,
    6,    7,    8,    9,   12,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   58,    0,   59,    0,    0,
   83,   64,   60,   61,   62,   63,    0,   57,    1,    0,
    0,    0,   97,   96,   79,   77,    0,    0,    0,    0,
    0,   43,    0,    0,    0,    0,    0,    0,    0,   39,
   41,   45,   46,    0,    0,    0,    0,    0,    0,    0,
    0,   86,   13,    0,   47,   56,    0,    0,    0,    0,
    0,   40,   28,    0,    0,    0,   17,   18,   19,   20,
   21,   22,    0,   23,   24,    0,    0,    0,    0,   15,
   16,   53,    0,   91,    0,    0,    0,   85,    0,   11,
    0,    0,    0,   42,    0,    0,    0,    0,    0,    0,
    0,   38,    0,   48,    0,   87,   14,    5,    0,    0,
    0,    0,    0,   90,    0,    0,    0,   50,   51,    4,
    0,    0,    0,   49,    0,   52,
};
static const short yydgoto[] = {                          2,
    5,   13,   66,   14,   15,   16,   44,   38,    6,   45,
   39,   40,   41,   42,    7,   92,   67,   68,   69,   93,
  133,  136,   94,   95,   96,   97,   98,   99,  100,  101,
  102,  103,   72,  145,   73,   74,   75,   76,   77,   78,
    8,    9,   17,   46,   47,   85,  111,  112,  146,
};
static const short yysindex[] = {                      -295,
 -233,    0, -286, -268, -262,    0,    0, -286,    0,    0,
 -245, -217, -223,    0,    0,    0, -262,    0, -256,  168,
 -268, -286, -214,    0,    0, -267,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -196, -181, -264,
    0,    0, -178, -168, -239, -163,    0,  227, -201, -197,
    0,    0,    0,    0,    0, -221, -117, -268, -195, -238,
 -238, -191, -238, -238, -241,    0, -162,    0, -165, -136,
    0,    0,    0,    0,    0,    0,  227,    0,    0, -267,
 -223, -185,    0,    0,    0,    0, -145, -238, -216, -238,
 -241,    0, -161, -235, -142, -194, -129, -127, -121,    0,
    0,    0,    0, -112,  -99,  -93,  -92, -115, -238, -238,
  -99,    0,    0, -238,    0,    0, -118,  -90,  -89, -267,
  -91,    0,    0,  227, -216, -216,    0,    0,    0,    0,
    0,    0, -216,    0,    0, -216, -216, -216, -216,    0,
    0,    0,  227,    0,  -88,  -71,  -67,    0,  -61,    0,
 -103, -223,  -97,    0, -209, -142, -142, -194, -129, -127,
 -121,    0,  -84,    0, -238,    0,    0,    0,  -82, -267,
  227,  -87,  -79,    0,  -94,  -75,  -68,    0,    0,    0,
  227,  -63,  -58,    0,  -73,    0,
};
static const short yyrindex[] = {                         0,
    0,    0, -275,    0,  -51,    0,    0,  195,    0,    0,
    0,    0,    0,    0,    0,    0,  -50,    0,    0,    0,
  -33,  212,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -28,    0,  -53,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -35,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -202,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -83,    0,    0, -211,  145, -156,   68,    9,  -52,    0,
    0,    0,    0,    0,  -23,    0,    0,    0,  -22,    0,
 -116,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -193,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -53,    0,    0,  -20,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  153,  174,  124,   97,   39,
  -21,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -53,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -53,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  216,    0,  -12,  231,    0,    0,    0,  -29,    0,  253,
    0,    0,  218,  -26,    0,  239, -120,    0,  198,  -54,
    0,    0,  171,  -13,  130,  128,  131,  127,  -81,    0,
  -45,  -46,    0,    0,    0,    0,    0,    0,    0,  192,
    0,  263,    0,    0,  215,    0,    0,  167,    0,
};
#define YYTABLESIZE 528
static const short yytable[] = {                         50,
   23,   71,   70,  155,   66,    1,  104,  122,  107,  108,
   53,   19,    4,   20,   26,   71,   27,   19,  109,   57,
  110,   88,  163,   29,    3,   66,   89,   84,   30,   31,
   71,   70,   10,  121,   33,   34,   81,   82,   12,   90,
  125,  126,   21,   88,   25,   25,   25,   28,   89,   25,
  177,   25,  119,  117,  144,  147,   22,  162,   32,  149,
  183,   51,   91,   33,   34,   35,   36,   37,  118,   28,
   49,   25,  134,  135,  171,  172,   52,   71,   70,   55,
   32,   54,   54,   25,   91,   33,   34,   35,   36,   37,
   55,   55,   56,  153,   58,   27,   71,   70,   80,   79,
   31,   31,   29,  114,   31,   87,   31,   30,   31,  105,
  174,  156,  157,   31,   31,   31,   31,   31,   31,   31,
   31,  115,  113,  120,   71,   70,   31,  127,  128,  129,
  130,  131,  132,  124,   71,   70,  137,  138,   31,  169,
   84,   84,  139,  176,   84,  140,   84,   84,   84,   84,
   84,   84,   84,   84,   84,   84,   84,   84,   84,   84,
   84,   83,  110,   27,  141,  142,   84,  143,  152,  154,
   29,  150,  164,   44,   44,   30,   31,   44,   84,   44,
   44,   44,   44,   44,   44,  165,   44,   44,   44,   44,
   44,   44,   44,   44,  151,  166,  167,  168,  170,   44,
  173,  178,  175,  179,   37,   37,  180,  181,   37,  186,
   37,   44,   37,   37,   37,   37,  182,   37,   37,   37,
   37,   37,   37,   37,   37,  184,  185,   76,   72,   71,
   37,   55,   75,   82,   82,   36,   36,   48,   89,   36,
   88,   36,   37,   36,   36,   36,   36,   24,   36,   36,
   36,   36,   36,   36,   36,   36,   11,   54,   43,  106,
  123,   36,  158,  159,  161,   35,   35,  160,  116,   35,
   18,   35,   86,   36,   35,   35,   35,  148,   35,   35,
   35,   35,   35,   35,   35,   35,    0,    0,    0,    0,
    0,   35,    0,    0,    0,   34,   34,    0,    0,   34,
    0,   34,    0,   35,   34,   34,   34,    0,   34,   34,
   34,   34,   34,   34,   34,   34,    0,    0,    0,    0,
    0,   34,    0,    0,   33,   33,    0,    0,   33,    0,
   33,    0,    0,   34,   33,   33,    0,   33,   33,   33,
   33,   33,   33,   33,   33,    0,    0,    0,    0,    0,
   33,    0,    0,   32,   32,    0,    0,   32,    0,   32,
    0,    0,   33,   32,   32,    0,   32,   32,   32,   32,
   32,   32,   32,   32,    0,    0,    0,    0,    0,   32,
   30,   30,    0,    0,   30,    0,   30,    0,    0,    0,
    0,   32,    0,   30,   30,   30,   30,   30,   30,   30,
   30,   29,   29,    0,    0,   29,   30,   29,    0,   26,
   26,    0,    0,   26,    0,   26,    0,    0,   30,    0,
   29,   29,    0,    0,    0,    0,    0,   29,   26,   26,
   27,   27,    0,    0,   27,   26,   27,    0,    0,   29,
    0,    0,    0,    0,    0,    0,   26,   26,   27,   27,
   27,    0,    0,   28,    0,   29,   27,    0,    0,    0,
   30,   31,    0,    0,   32,    0,    0,    0,   27,   33,
   34,   35,   36,   37,   65,    0,    0,    0,    0,   65,
    0,   65,    0,   65,    0,   65,   65,    0,    0,    0,
    0,   66,   65,    0,   65,   65,   66,    0,   66,    0,
   66,    0,   66,   66,    0,    0,   22,    0,    0,   66,
    0,   66,   66,   59,    0,   60,    0,   61,   62,    0,
    0,    0,    0,    0,   63,    0,   64,   65,
};
static const short yycheck[] = {                         26,
   13,   48,   48,  124,  280,  301,   61,   89,   63,   64,
   40,  257,  299,  259,  279,   62,  281,  257,  260,  259,
  262,  260,  143,  288,  258,  301,  265,   57,  293,  294,
   77,   77,  301,   88,  302,  303,  258,  259,  301,  278,
  276,  277,  260,  260,  301,  257,  258,  286,  265,  261,
  171,  263,   82,   80,  109,  110,  280,  139,  297,  114,
  181,  258,  301,  302,  303,  304,  305,  306,   81,  286,
  285,  283,  267,  268,  284,  285,  258,  124,  124,  258,
  297,  284,  285,  295,  301,  302,  303,  304,  305,  306,
  284,  285,  261,  120,  258,  281,  143,  143,  296,  301,
  257,  258,  288,  269,  261,  301,  263,  293,  294,  301,
  165,  125,  126,  270,  271,  272,  273,  274,  275,  276,
  277,  258,  285,  269,  171,  171,  283,  270,  271,  272,
  273,  274,  275,  295,  181,  181,  266,  265,  295,  152,
  257,  258,  264,  170,  261,  258,  263,  264,  265,  266,
  267,  268,  269,  270,  271,  272,  273,  274,  275,  276,
  277,  279,  262,  281,  258,  258,  283,  283,  258,  261,
  288,  290,  261,  257,  258,  293,  294,  261,  295,  263,
  264,  265,  266,  267,  268,  257,  270,  271,  272,  273,
  274,  275,  276,  277,  285,  263,  258,  301,  296,  283,
  285,  289,  285,  283,  257,  258,  301,  283,  261,  283,
  263,  295,  265,  266,  267,  268,  285,  270,  271,  272,
  273,  274,  275,  276,  277,  289,  285,  261,  280,  280,
  283,  285,  261,  269,  258,  257,  258,   22,  261,  261,
  261,  263,  295,  265,  266,  267,  268,   17,  270,  271,
  272,  273,  274,  275,  276,  277,    4,   40,   20,   62,
   90,  283,  133,  136,  138,  257,  258,  137,   77,  261,
    8,  263,   58,  295,  266,  267,  268,  111,  270,  271,
  272,  273,  274,  275,  276,  277,   -1,   -1,   -1,   -1,
   -1,  283,   -1,   -1,   -1,  257,  258,   -1,   -1,  261,
   -1,  263,   -1,  295,  266,  267,  268,   -1,  270,  271,
  272,  273,  274,  275,  276,  277,   -1,   -1,   -1,   -1,
   -1,  283,   -1,   -1,  257,  258,   -1,   -1,  261,   -1,
  263,   -1,   -1,  295,  267,  268,   -1,  270,  271,  272,
  273,  274,  275,  276,  277,   -1,   -1,   -1,   -1,   -1,
  283,   -1,   -1,  257,  258,   -1,   -1,  261,   -1,  263,
   -1,   -1,  295,  267,  268,   -1,  270,  271,  272,  273,
  274,  275,  276,  277,   -1,   -1,   -1,   -1,   -1,  283,
  257,  258,   -1,   -1,  261,   -1,  263,   -1,   -1,   -1,
   -1,  295,   -1,  270,  271,  272,  273,  274,  275,  276,
  277,  257,  258,   -1,   -1,  261,  283,  263,   -1,  257,
  258,   -1,   -1,  261,   -1,  263,   -1,   -1,  295,   -1,
  276,  277,   -1,   -1,   -1,   -1,   -1,  283,  276,  277,
  257,  258,   -1,   -1,  261,  283,  263,   -1,   -1,  295,
   -1,   -1,   -1,   -1,   -1,   -1,  279,  295,  281,  276,
  277,   -1,   -1,  286,   -1,  288,  283,   -1,   -1,   -1,
  293,  294,   -1,   -1,  297,   -1,   -1,   -1,  295,  302,
  303,  304,  305,  306,  280,   -1,   -1,   -1,   -1,  285,
   -1,  287,   -1,  289,   -1,  291,  292,   -1,   -1,   -1,
   -1,  280,  298,   -1,  300,  301,  285,   -1,  287,   -1,
  289,   -1,  291,  292,   -1,   -1,  280,   -1,   -1,  298,
   -1,  300,  301,  287,   -1,  289,   -1,  291,  292,   -1,
   -1,   -1,   -1,   -1,  298,   -1,  300,  301,
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
"$accept : program_name",
"program_name : ID SEMICOLON opt_variable_constant_declaration opt_function_declaration one_compound_statement KWend ID",
"function : normal_function",
"function : procedure_function",
"normal_function : ID L_PARENTHESES opt_formal_arguments R_PARENTHESES COLON scalar_type SEMICOLON one_compound_statement KWend ID",
"procedure_function : ID L_PARENTHESES opt_formal_arguments R_PARENTHESES SEMICOLON one_compound_statement KWend ID",
"variable : KWvar identifier_list COLON scalar_type SEMICOLON",
"variable : KWvar identifier_list COLON dimension_array_declaration SEMICOLON",
"dimension_array_declaration : array_declaration_without_type_list scalar_type",
"array_declaration_without_type_list : array_declaration_without_type_list array_declaration_without_type",
"array_declaration_without_type_list : array_declaration_without_type",
"array_declaration_without_type : KWarray integer_constant KWto integer_constant KWof",
"constant : KWvar identifier_list COLON literal_constant SEMICOLON",
"one_compound_statement : KWbegin opt_variable_constant_declaration opt_statements KWend",
"simple_statement : variable_reference ASSIGN expression SEMICOLON",
"simple_statement : KWprint expression SEMICOLON",
"simple_statement : KWread variable_reference SEMICOLON",
"relational_operators : LT",
"relational_operators : LE",
"relational_operators : NEQ",
"relational_operators : GE",
"relational_operators : GT",
"relational_operators : EQ",
"division_operators : SLASH",
"division_operators : MOD",
"expression : level_6",
"level_6 : level_6 AND level_5",
"level_6 : level_6 OR level_5",
"level_6 : NOT level_6",
"level_6 : level_5",
"level_5 : level_5 relational_operators level_4",
"level_5 : level_4",
"level_4 : level_4 division_operators level_3",
"level_4 : level_3",
"level_3 : level_3 STAR level_2",
"level_3 : level_2",
"level_2 : level_2 MINUS level_1",
"level_2 : level_1",
"level_1 : level_1 PLUS level_0",
"level_1 : level_0",
"level_0 : MINUS level_0",
"level_0 : valid_component",
"valid_component : L_PARENTHESES expression R_PARENTHESES",
"valid_component : literal_constant",
"valid_component : ID",
"valid_component : function_name",
"valid_component : array_reference",
"function_invocation : function_name SEMICOLON",
"function_name : ID L_PARENTHESES opt_expression_separated_by_opt_comma R_PARENTHESES",
"conditional : KWif expression KWthen opt_statements KWelse opt_statements KWend KWif",
"conditional : KWif expression KWthen opt_statements KWend KWif",
"while : KWwhile expression KWdo opt_statements KWend KWdo",
"for : KWfor ID ASSIGN integer_constant KWto integer_constant KWdo opt_statements KWend KWdo",
"return : KWreturn expression SEMICOLON",
"opt_statements : statements_general_list",
"opt_statements :",
"statements_general_list : statements_general_list statements_general",
"statements_general_list : statements_general",
"statements_general : one_compound_statement",
"statements_general : simple_statement",
"statements_general : conditional",
"statements_general : while",
"statements_general : for",
"statements_general : return",
"statements_general : function_invocation",
"opt_variable_constant_declaration : variable_constant_list",
"opt_variable_constant_declaration :",
"variable_constant_list : variable_constant_list variable_constant",
"variable_constant_list : variable_constant",
"variable_constant : variable",
"variable_constant : constant",
"opt_function_declaration : function_declaration_list",
"opt_function_declaration :",
"function_declaration_list : function_declaration_list function",
"function_declaration_list : function",
"opt_formal_arguments : formal_arguments_list",
"opt_formal_arguments :",
"formal_arguments_list : formal_arguments_list SEMICOLON formal_arguments",
"formal_arguments_list : formal_arguments",
"formal_arguments : identifier_list COLON type",
"identifier_list : identifier_list COMMA ID",
"identifier_list : ID",
"variable_reference : ID",
"variable_reference : array_reference",
"array_reference : ID expression_with_brackets_list",
"expression_with_brackets_list : expression_with_brackets_list expression_with_brackets",
"expression_with_brackets_list : expression_with_brackets",
"expression_with_brackets : L_BRACKETS expression R_BRACKETS",
"opt_expression_separated_by_opt_comma : expression_separated_by_opt_comma",
"opt_expression_separated_by_opt_comma :",
"expression_separated_by_opt_comma : expression_separated_by_opt_comma COMMA expression",
"expression_separated_by_opt_comma : expression",
"scalar_type : KWinteger",
"scalar_type : KWreal",
"scalar_type : KWstring",
"scalar_type : KWboolean",
"type : scalar_type",
"type : KWarray",
"integer_constant : DEC_INT",
"integer_constant : OCT_INT",
"literal_constant : integer_constant",
"literal_constant : SCIENTIFIC",
"literal_constant : FLOAT",
"literal_constant : STRING",
"literal_constant : KWtrue",
"literal_constant : KWfalse",

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
#line 149 "parser.y"

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
#line 532 "y.tab.c"

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
