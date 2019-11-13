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
#define ASSIGN 264
#define KWarray 265
#define KWbegin 266
#define KWboolean 267
#define KWdef 268
#define KWdo 269
#define KWelse 270
#define KWend 271
#define KWfalse 272
#define KWfor 273
#define KWinteger 274
#define KWif 275
#define KWof 276
#define KWprint 277
#define KWread 278
#define KWreal 279
#define KWstring 280
#define KWthen 281
#define KWto 282
#define KWtrue 283
#define KWreturn 284
#define KWvar 285
#define KWwhile 286
#define ID 287
#define DEC_INT 288
#define OCT_INT 289
#define FLOAT 290
#define SCIENTIFIC 291
#define STRING 292
#define NOT 293
#define AND 294
#define OR 295
#define LT 296
#define LE 297
#define NEQ 298
#define GE 299
#define GT 300
#define EQ 301
#define SLASH 302
#define MOD 303
#define STAR 304
#define MINUS 305
#define PLUS 306
#define UMINUS 307
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    4,    4,    5,    6,    9,    9,    7,    7,   10,
   10,   11,    2,    2,   13,   13,   14,   14,   15,   16,
   16,   17,   18,   18,   12,   12,    8,    8,    8,    8,
   19,   20,   21,   21,   21,   21,   21,   21,   21,    1,
    1,   22,   22,   23,   23,    3,   25,   25,   25,   26,
   26,   28,   29,   29,   30,   27,   27,   27,   27,   27,
   27,   27,   27,   27,   27,   27,   33,   33,   33,   33,
   32,   32,   31,   31,   31,   31,   31,   31,   35,   35,
   36,   37,   38,   34,   40,   39,   39,   41,   41,   24,
   24,   42,   42,   43,   43,   43,   43,   43,   43,   43,
};
static const short yylen[] = {                            2,
    7,    1,    1,   10,    8,    3,    1,    1,    0,    3,
    1,    3,    1,    0,    2,    1,    5,    5,    2,    2,
    1,    5,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    5,    1,    1,    1,    1,    1,    1,    1,    1,
    0,    2,    1,    1,    1,    4,    4,    3,    3,    1,
    1,    2,    2,    1,    3,    3,    3,    2,    3,    3,
    3,    3,    3,    2,    3,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    8,    6,
    6,   10,    3,    4,    2,    1,    0,    3,    1,    1,
    0,    2,    1,    1,    1,    1,    1,    1,    1,    1,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,   44,   45,    0,   43,    7,
    0,    0,    0,   16,    2,    3,    0,   42,    0,    0,
    0,    0,    0,   15,    6,    0,   30,   39,   27,   28,
   29,   38,   33,   34,   35,   36,   37,    0,    0,    0,
   21,    0,    0,    0,    0,   11,    0,    0,   23,   24,
    0,   17,   18,   19,   20,   32,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   94,    0,   95,    0,
   51,    0,   96,   97,   98,   99,  100,    0,   93,    1,
    0,    0,    0,   31,   25,   12,   26,   10,    0,    0,
    0,    0,    0,   67,    0,   70,   66,   69,    0,    0,
    0,    0,    0,    0,    0,    0,   54,   46,    0,   85,
   92,    0,    0,    0,    0,    0,    0,   64,    0,    0,
    0,   73,   74,   75,   76,   77,   78,   71,   72,    0,
    0,    0,    0,    0,   48,   49,   83,    0,    0,    0,
    0,    0,   53,    0,   22,    0,    0,    0,   65,    0,
    0,    0,    0,    0,   63,    0,    0,    0,   84,    0,
   55,   47,    5,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   80,   81,    4,    0,    0,    0,   79,    0,
   82,
};
static const short yydgoto[] = {                          2,
    5,   13,   67,   14,   15,   16,   43,   38,   44,   45,
   46,   86,   17,    6,   39,   40,   41,   51,   87,    7,
   94,    8,    9,   68,   69,   70,   95,   96,  106,  107,
  133,  134,   97,   98,   73,   74,   75,   76,  140,   77,
  141,   78,   79,
};
static const short yysindex[] = {                      -276,
 -242,    0, -266, -256, -253,    0,    0, -266,    0,    0,
 -230, -232, -199,    0,    0,    0, -253,    0, -228, -108,
 -256, -266, -200,    0,    0, -241,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -176, -170, -259,
    0, -163, -162, -187, -149,    0,   46, -178,    0,    0,
 -171,    0,    0,    0,    0,    0, -206,  123, -256, -174,
 -247, -247, -169, -247, -247, -179,    0, -154,    0, -145,
    0, -136,    0,    0,    0,    0,    0,   46,    0,    0,
 -241, -199, -164,    0,    0,    0,    0,    0, -141, -247,
 -179, -247, -247,    0,  143,    0,    0,    0,  -44, -137,
 -132,  -31,  117, -247, -247, -137,    0,    0, -247,    0,
    0, -147, -139, -125, -241,   52,  178,    0,   46, -247,
 -247,    0,    0,    0,    0,    0,    0,    0,    0, -247,
 -247, -247, -247, -247,    0,    0,    0,   46,  178, -126,
 -121,   65,    0,   -9,    0, -135, -199, -129,    0, -207,
  129,  129, -221, -151,    0,  178,  178, -113,    0, -247,
    0,    0,    0, -111, -241,   46, -114, -106,  178, -122,
 -102, -103,    0,    0,    0,   46, -105,  -98,    0, -100,
    0,
};
static const short yyrindex[] = {                         0,
    0,    0, -263,    0,  -90,    0,    0,  114,    0,    0,
    0,    0,    0,    0,    0,    0,  -89,    0,    0,    0,
  -83,  184,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -82,    0,  -86,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -78,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -184,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -107,    0,    0,    0,    0,    0,    0,    0,    0,  -56,
    0,    0,    0,  -58,    0, -157,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -201,    0, -173,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -86, -243,    0,
  -52,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -167,  115,   41,  -57,    0,  -50,   48,    0,    0,    0,
    0,    0,    0,    0,    0,  -86,    0,    0, -235,    0,
    0,    0,    0,    0,    0,  -86,    0,    0,    0,    0,
    0,
};
static const short yygindex[] = {                         0,
  183,    0,  -13,  193,    0,    0,    0,  -28,  211,    0,
  157,    0,    0,    0,    0,    0,  177,  -76,    0,    0,
  198,    0,  212, -115,    0,  158,  -55,  -46,    0,  116,
    0,    0,    0,  -45,    0,    0,    0,    0,    0,    0,
    0,    0,  145,
};
#define YYTABLESIZE 484
static const short yytable[] = {                         23,
   71,   72,   41,  150,  112,   26,   99,   27,  102,  103,
    1,   54,   90,   89,   29,    3,   71,   89,    4,   30,
   31,   88,  158,   41,   28,   88,   19,   21,   20,   85,
   10,   71,   72,   12,  116,   32,  117,  118,  148,   91,
   33,   34,   35,   36,   37,   92,   49,   50,  139,  142,
  172,   82,   83,  144,  114,   58,   58,   93,   25,   58,
  178,   58,  166,  167,  151,  152,   22,   58,  113,   19,
   48,   58,   71,   72,  153,  154,  155,  156,  157,   58,
  104,   52,  105,  131,  132,   90,   90,   53,  171,   56,
   56,   71,   72,   56,   56,   56,   91,   91,   57,   52,
   52,   56,   27,   52,  169,   52,   52,   59,   80,   29,
   81,   52,   89,   56,   30,   31,  108,  100,  109,   71,
   72,  110,  115,   52,  105,  136,   56,   56,  145,   71,
   72,  146,  147,  164,  159,  160,   52,   52,   52,   52,
   52,   52,   52,   52,   52,   52,   52,   52,   52,   68,
   68,  163,  165,   68,  132,   68,   26,  168,   27,  170,
  173,   68,  174,   28,  175,   29,  176,  177,  181,  179,
   30,   31,  180,   68,   32,   14,   13,    9,    8,   33,
   34,   35,   36,   37,   91,   50,   68,   68,   68,   68,
   68,   68,   68,   68,   68,   68,   68,   68,   68,   62,
   62,   50,   87,   62,   47,   62,   59,   59,   86,   24,
   59,   62,   59,  135,   11,   88,   55,   42,   59,   18,
  101,  143,  111,   62,    0,    0,  137,    0,    0,    0,
   59,    0,    0,    0,    0,    0,   62,   62,   62,   62,
   62,   62,   62,   62,   62,   62,   62,   62,  162,  120,
  121,  122,  123,  124,  125,  126,  127,  128,  129,  130,
  131,  132,  120,  121,  122,  123,  124,  125,  126,  127,
  128,  129,  130,  131,  132,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  120,  121,  122,  123,  124,  125,
  126,  127,  128,  129,  130,  131,  132,   61,   61,    0,
    0,   61,    0,   61,   60,   60,    0,    0,   60,   61,
   60,   22,  149,    0,    0,    0,   60,    0,   60,    0,
   61,   61,   62,   63,    0,    0,    0,  161,   60,   64,
    0,   65,   66,    0,   61,   61,   61,   61,   61,   61,
   61,   61,   61,   61,   61,  120,  121,  122,  123,  124,
  125,  126,  127,  128,  129,  130,  131,  132,  120,  121,
  122,  123,  124,  125,  126,  127,  128,  129,  130,  131,
  132,   57,   57,    0,    0,   57,    0,   57,    0,   40,
    0,    0,    0,   57,   40,  138,   40,   84,   40,   27,
   40,   40,    0,    0,    0,   57,   29,   40,    0,   40,
   40,   30,   31,    0,    0,    0,    0,    0,   57,   57,
  120,  121,  122,  123,  124,  125,  126,  127,  128,  129,
  130,  131,  132,  119,  122,  123,  124,  125,  126,  127,
  128,  129,  130,  131,  132,    0,  120,  121,  122,  123,
  124,  125,  126,  127,  128,  129,  130,  131,  132,   41,
    0,    0,    0,    0,   41,    0,   41,    0,   41,    0,
   41,   41,    0,    0,    0,    0,    0,   41,    0,   41,
   41,  120,  121,  122,  123,  124,  125,  126,  127,  128,
  129,  130,  131,  132,
};
static const short yycheck[] = {                         13,
   47,   47,  266,  119,   81,  265,   62,  267,   64,   65,
  287,   40,  260,  257,  274,  258,   63,  261,  285,  279,
  280,  257,  138,  287,  272,  261,  257,  260,  259,   58,
  287,   78,   78,  287,   90,  283,   92,   93,  115,  287,
  288,  289,  290,  291,  292,  293,  288,  289,  104,  105,
  166,  258,  259,  109,   83,  257,  258,  305,  287,  261,
  176,  263,  270,  271,  120,  121,  266,  269,   82,  257,
  271,  259,  119,  119,  130,  131,  132,  133,  134,  281,
  260,  258,  262,  305,  306,  270,  271,  258,  165,  257,
  258,  138,  138,  261,  258,  263,  270,  271,  261,  257,
  258,  269,  267,  261,  160,  263,  264,  257,  287,  274,
  282,  269,  287,  281,  279,  280,  271,  287,  264,  166,
  166,  258,  264,  281,  262,  258,  294,  295,  276,  176,
  176,  271,  258,  147,  261,  257,  294,  295,  296,  297,
  298,  299,  300,  301,  302,  303,  304,  305,  306,  257,
  258,  287,  282,  261,  306,  263,  265,  271,  267,  271,
  275,  269,  269,  272,  287,  274,  269,  271,  269,  275,
  279,  280,  271,  281,  283,  266,  266,  261,  261,  288,
  289,  290,  291,  292,  271,  264,  294,  295,  296,  297,
  298,  299,  300,  301,  302,  303,  304,  305,  306,  257,
  258,  258,  261,  261,   22,  263,  257,  258,  261,   17,
  261,  269,  263,  258,    4,   59,   40,   20,  269,    8,
   63,  106,   78,  281,   -1,   -1,  258,   -1,   -1,   -1,
  281,   -1,   -1,   -1,   -1,   -1,  294,  295,  296,  297,
  298,  299,  300,  301,  302,  303,  304,  305,  258,  294,
  295,  296,  297,  298,  299,  300,  301,  302,  303,  304,
  305,  306,  294,  295,  296,  297,  298,  299,  300,  301,
  302,  303,  304,  305,  306,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  294,  295,  296,  297,  298,  299,
  300,  301,  302,  303,  304,  305,  306,  257,  258,   -1,
   -1,  261,   -1,  263,  257,  258,   -1,   -1,  261,  269,
  263,  266,  261,   -1,   -1,   -1,  269,   -1,  273,   -1,
  275,  281,  277,  278,   -1,   -1,   -1,  263,  281,  284,
   -1,  286,  287,   -1,  294,  295,  296,  297,  298,  299,
  300,  301,  302,  303,  304,  294,  295,  296,  297,  298,
  299,  300,  301,  302,  303,  304,  305,  306,  294,  295,
  296,  297,  298,  299,  300,  301,  302,  303,  304,  305,
  306,  257,  258,   -1,   -1,  261,   -1,  263,   -1,  266,
   -1,   -1,   -1,  269,  271,  269,  273,  265,  275,  267,
  277,  278,   -1,   -1,   -1,  281,  274,  284,   -1,  286,
  287,  279,  280,   -1,   -1,   -1,   -1,   -1,  294,  295,
  294,  295,  296,  297,  298,  299,  300,  301,  302,  303,
  304,  305,  306,  281,  296,  297,  298,  299,  300,  301,
  302,  303,  304,  305,  306,   -1,  294,  295,  296,  297,
  298,  299,  300,  301,  302,  303,  304,  305,  306,  266,
   -1,   -1,   -1,   -1,  271,   -1,  273,   -1,  275,   -1,
  277,  278,   -1,   -1,   -1,   -1,   -1,  284,   -1,  286,
  287,  294,  295,  296,  297,  298,  299,  300,  301,  302,
  303,  304,  305,  306,
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
"L_PARENTHESES","R_PARENTHESES","L_BRACKETS","R_BRACKETS","ASSIGN","KWarray",
"KWbegin","KWboolean","KWdef","KWdo","KWelse","KWend","KWfalse","KWfor",
"KWinteger","KWif","KWof","KWprint","KWread","KWreal","KWstring","KWthen",
"KWto","KWtrue","KWreturn","KWvar","KWwhile","ID","DEC_INT","OCT_INT","FLOAT",
"SCIENTIFIC","STRING","NOT","AND","OR","LT","LE","NEQ","GE","GT","EQ","SLASH",
"MOD","STAR","MINUS","PLUS","UMINUS",
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
"expressions : expressions AND expressions",
"expressions : expressions OR expressions",
"expressions : NOT expressions",
"expressions : expressions relational_op expressions",
"expressions : expressions division_op expressions",
"expressions : expressions STAR expressions",
"expressions : expressions MINUS expressions",
"expressions : expressions PLUS expressions",
"expressions : MINUS expressions",
"expressions : L_PARENTHESES expressions R_PARENTHESES",
"expressions : valid_components",
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
#line 256 "parser.y"

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
#line 518 "y.tab.c"

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
