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
   13,   15,    3,   18,   18,   18,   20,   20,   20,   22,
   22,   22,   22,   22,   22,   22,   22,   22,   23,   24,
   25,   26,   27,   28,   29,   30,   31,   34,   35,   37,
   37,   38,   39,   40,   17,   17,   41,   41,   42,   42,
   42,   42,   42,   42,   42,    1,    1,   43,   43,   44,
   44,    2,    2,   45,   45,    7,    7,   46,   46,   47,
   10,   10,   19,   19,   49,   50,   50,   51,   36,   36,
   52,   52,    8,    8,    8,    8,   48,   48,   14,   14,
   16,   16,   16,   16,   16,   16,   21,   21,   21,   21,
   32,   32,   33,   33,   33,   33,   33,   33,   53,   53,
   53,
};
static const short yylen[] = {                            2,
    7,    1,    1,   10,    8,    5,    5,    2,    2,    1,
    5,    5,    4,    4,    3,    3,    1,    3,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    2,    3,
    3,    3,    3,    3,    3,    3,    2,    2,    4,    8,
    6,    6,   10,    3,    1,    0,    2,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    0,    2,    1,    1,
    1,    1,    0,    2,    1,    1,    0,    3,    1,    3,
    3,    1,    1,    1,    2,    2,    1,    3,    1,    0,
    3,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,   60,   61,    0,   59,   72,
    0,    0,    0,   65,    2,    3,    0,   58,    0,    0,
    0,    0,    0,   64,   71,    0,   86,   96,   83,   84,
   85,   95,   89,   90,   93,   92,   94,    0,    0,    0,
   10,   91,    0,    0,    0,    0,   69,    0,    0,    0,
    6,    7,    8,    9,   12,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   49,    0,   50,    0,   55,
    0,   51,   52,   53,   54,    0,   48,   74,    1,    0,
    0,    0,   88,   87,   70,   68,    0,    0,    0,    0,
    0,   97,    0,   17,   19,   20,   21,   22,   23,   24,
   25,   26,   27,   28,   99,  100,    0,    0,    0,    0,
    0,    0,    0,    0,   77,   13,    0,   38,   47,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  101,
  102,  103,  104,  105,  106,  107,  108,    0,    0,    0,
    0,    0,   15,   16,   44,    0,    0,    0,    0,    0,
   76,    0,   11,    0,    0,    0,   18,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   39,    0,   78,   14,
    5,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   41,   42,    4,    0,    0,    0,   40,    0,   43,
};
static const short yydgoto[] = {                          2,
    5,   13,   66,   14,   15,   16,   44,   38,    6,   45,
   39,   40,   41,   42,    7,   92,   67,   68,   69,   93,
   94,   95,   96,   97,   98,   99,  100,  101,  102,  103,
  104,  141,  142,   70,  105,  148,   72,   73,   74,   75,
   76,   77,    8,    9,   17,   46,   47,   85,  106,  114,
  115,  149,    0,
};
static const short yysindex[] = {                      -284,
 -229,    0, -263, -255, -250,    0,    0, -263,    0,    0,
 -189, -205, -201,    0,    0,    0, -250,    0, -220,   -7,
 -255, -263, -192,    0,    0, -280,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -162, -160, -244,
    0,    0, -159, -158, -183, -156,    0,   52, -196, -190,
    0,    0,    0,    0,    0, -199, -204, -255, -191, -239,
 -239, -171, -239, -239, -182,    0, -181,    0, -138,    0,
 -149,    0,    0,    0,    0,   52,    0,    0,    0, -280,
 -201, -269,    0,    0,    0,    0, -137, -239, -239, -239,
 -182,    0,   -6,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   90, -128, -123,  110,
  124, -239, -239, -128,    0,    0, -239,    0,    0, -154,
 -148, -118, -280,  161,  190,  190, -239, -239, -239,    0,
    0,    0,    0,    0,    0,    0,    0, -239, -239,   52,
 -239, -239,    0,    0,    0,   52,  190, -120, -115,  176,
    0,  144,    0, -157, -201, -146,    0,  190,  190,  190,
  190,  190, -242,  190,  190, -139,    0, -239,    0,    0,
    0, -134, -280,   52, -129, -130,  190, -122, -112, -113,
    0,    0,    0,   52, -111, -104,    0,  -98,    0,
};
static const short yyrindex[] = {                         0,
    0,    0, -274,    0,  -92,    0,    0,   20,    0,    0,
    0,    0,    0,    0,    0,    0,  -87,    0,    0,    0,
  -69,   37,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -62,    0,  -85,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -63,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -197,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -109,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -47,    0,    0,
    0,  -49,    0, -150,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -243,  -88,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -193,
    0,    0,    0,    0,    0,  -85, -248,    0,  -48,    0,
    0,    0,    0,    0,    0,    0,    0,  -81,  -74,  -67,
  -60,  -53,    0,  -39,  -32,    0,    0,    0,    0,    0,
    0,    0,    0,  -85,    0,    0, -216,    0,    0,    0,
    0,    0,    0,  -85,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  193,    0,  -12,  200,    0,    0,    0,  -29,    0,  216,
    0,    0,  187,  -26,    0,  212, -136,    0,  171,  -56,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -45,    0,    0,    0,    0,    0,
    0,  158,    0,  228,    0,    0,  179,    0,  -46,    0,
  125,    0,    0,
};
#define YYTABLESIZE 467
static const short yytable[] = {                         50,
   23,   78,   71,  163,  107,   57,  110,  111,   82,  166,
   53,   27,   82,   29,   29,   78,    1,   29,   29,   29,
   88,   33,   34,   30,   31,   89,   57,   84,    3,   78,
   71,  124,  125,  126,   26,    4,   27,  180,   90,   29,
   81,  174,  175,   29,   81,   10,   28,  186,   30,   31,
   12,   29,  122,  120,   21,  147,  150,   32,   81,   82,
  152,   91,   33,   34,   35,   36,   37,   19,  121,   20,
  158,  159,  160,   19,   83,   57,   27,  112,   22,  113,
   25,  161,  162,   29,  164,  165,   45,   45,   30,   31,
   46,   46,   49,   78,   71,   51,  156,   52,   55,   78,
   71,   58,   56,  116,   79,   80,   75,   75,  118,   87,
   75,  177,   75,   75,   75,   75,   75,   75,   75,   75,
   75,   75,   75,   75,   75,   75,   75,   78,   71,  108,
  117,  123,   75,  113,  144,  153,  154,   78,   71,  155,
  167,  168,  172,  171,   75,  176,  179,   98,   98,  173,
  178,   98,  182,   98,   98,   98,   98,   98,   98,  181,
   98,   98,   98,   98,   98,   98,   98,   98,   37,   37,
  184,  185,   37,   98,   37,   30,   30,  187,  183,   30,
  188,   30,   31,   31,  189,   98,   31,   63,   31,   32,
   32,   67,   62,   32,   37,   32,   35,   35,   66,   46,
   35,   30,   35,   36,   36,   73,   37,   36,   31,   36,
   73,   80,   79,   30,   48,   32,   24,   33,   33,   11,
   31,   33,   35,   33,   34,   34,   54,   32,   34,   36,
   34,   43,  109,  119,   35,   18,   86,    0,  151,    0,
    0,   36,    0,   33,    0,    0,    0,    0,    0,    0,
   34,    0,    0,    0,    0,   33,    0,  127,  128,  129,
  130,  131,   34,  132,  133,  134,  135,  136,  137,  138,
  139,   26,    0,   27,    0,    0,    0,    0,   28,    0,
   29,    0,    0,    0,    0,   30,   31,    0,  140,   32,
    0,    0,    0,    0,   33,   34,   35,   36,   37,   56,
    0,    0,    0,    0,   56,    0,   56,    0,   56,    0,
   56,   56,    0,    0,    0,    0,   57,   56,    0,   56,
   56,   57,    0,   57,    0,   57,    0,   57,   57,    0,
    0,   22,    0,    0,   57,    0,   57,   57,   59,    0,
   60,    0,   61,   62,    0,    0,    0,  143,    0,   63,
    0,   64,   65,  127,  128,  129,  130,  131,    0,  132,
  133,  134,  135,  136,  137,  138,  139,  145,    0,    0,
    0,    0,    0,  127,  128,  129,  130,  131,    0,  132,
  133,  134,  135,  136,  137,  138,  139,  127,  128,  129,
  130,  131,    0,  132,  133,  134,  135,  136,  137,  138,
  139,  170,    0,    0,    0,    0,  146,  127,  128,  129,
  130,  131,    0,  132,  133,  134,  135,  136,  137,  138,
  139,  157,    0,    0,  127,  128,  129,  130,  131,    0,
  132,  133,  134,  135,  136,  137,  138,  139,  169,  127,
  128,  129,  130,  131,    0,  132,  133,  134,  135,  136,
  137,  138,  139,  127,  128,  129,  130,  131,    0,  132,
  133,  134,  135,  136,  137,  138,  139,
};
static const short yycheck[] = {                         26,
   13,   48,   48,  140,   61,  280,   63,   64,  257,  146,
   40,  281,  261,  257,  258,   62,  301,  261,  288,  263,
  260,  302,  303,  293,  294,  265,  301,   57,  258,   76,
   76,   88,   89,   90,  279,  299,  281,  174,  278,  283,
  257,  284,  285,  288,  261,  301,  286,  184,  293,  294,
  301,  295,   82,   80,  260,  112,  113,  297,  258,  259,
  117,  301,  302,  303,  304,  305,  306,  257,   81,  259,
  127,  128,  129,  257,  279,  259,  281,  260,  280,  262,
  301,  138,  139,  288,  141,  142,  284,  285,  293,  294,
  284,  285,  285,  140,  140,  258,  123,  258,  258,  146,
  146,  258,  261,  285,  301,  296,  257,  258,  258,  301,
  261,  168,  263,  264,  265,  266,  267,  268,  269,  270,
  271,  272,  273,  274,  275,  276,  277,  174,  174,  301,
  269,  269,  283,  262,  258,  290,  285,  184,  184,  258,
  261,  257,  155,  301,  295,  285,  173,  257,  258,  296,
  285,  261,  283,  263,  264,  265,  266,  267,  268,  289,
  270,  271,  272,  273,  274,  275,  276,  277,  257,  258,
  283,  285,  261,  283,  263,  257,  258,  289,  301,  261,
  285,  263,  257,  258,  283,  295,  261,  280,  263,  257,
  258,  261,  280,  261,  283,  263,  257,  258,  261,  285,
  261,  283,  263,  257,  258,  269,  295,  261,  283,  263,
  258,  261,  261,  295,   22,  283,   17,  257,  258,    4,
  295,  261,  283,  263,  257,  258,   40,  295,  261,  283,
  263,   20,   62,   76,  295,    8,   58,   -1,  114,   -1,
   -1,  295,   -1,  283,   -1,   -1,   -1,   -1,   -1,   -1,
  283,   -1,   -1,   -1,   -1,  295,   -1,  264,  265,  266,
  267,  268,  295,  270,  271,  272,  273,  274,  275,  276,
  277,  279,   -1,  281,   -1,   -1,   -1,   -1,  286,   -1,
  288,   -1,   -1,   -1,   -1,  293,  294,   -1,  295,  297,
   -1,   -1,   -1,   -1,  302,  303,  304,  305,  306,  280,
   -1,   -1,   -1,   -1,  285,   -1,  287,   -1,  289,   -1,
  291,  292,   -1,   -1,   -1,   -1,  280,  298,   -1,  300,
  301,  285,   -1,  287,   -1,  289,   -1,  291,  292,   -1,
   -1,  280,   -1,   -1,  298,   -1,  300,  301,  287,   -1,
  289,   -1,  291,  292,   -1,   -1,   -1,  258,   -1,  298,
   -1,  300,  301,  264,  265,  266,  267,  268,   -1,  270,
  271,  272,  273,  274,  275,  276,  277,  258,   -1,   -1,
   -1,   -1,   -1,  264,  265,  266,  267,  268,   -1,  270,
  271,  272,  273,  274,  275,  276,  277,  264,  265,  266,
  267,  268,   -1,  270,  271,  272,  273,  274,  275,  276,
  277,  258,   -1,   -1,   -1,   -1,  283,  264,  265,  266,
  267,  268,   -1,  270,  271,  272,  273,  274,  275,  276,
  277,  261,   -1,   -1,  264,  265,  266,  267,  268,   -1,
  270,  271,  272,  273,  274,  275,  276,  277,  263,  264,
  265,  266,  267,  268,   -1,  270,  271,  272,  273,  274,
  275,  276,  277,  264,  265,  266,  267,  268,   -1,  270,
  271,  272,  273,  274,  275,  276,  277,
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
"expression : valid_component",
"expression : L_PARENTHESES expression R_PARENTHESES",
"expression : expression_general",
"expression_general : negative",
"expression_general : addition",
"expression_general : subtraction",
"expression_general : multiplication",
"expression_general : division",
"expression_general : relational",
"expression_general : logical_and",
"expression_general : logical_or",
"expression_general : logical_not",
"negative : MINUS expression",
"addition : expression PLUS expression",
"subtraction : expression MINUS expression",
"multiplication : expression STAR expression",
"division : expression division_operators expression",
"relational : expression relational_operators expression",
"logical_and : expression AND expression",
"logical_or : expression OR expression",
"logical_not : NOT expression",
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
"valid_component : literal_constant",
"valid_component : ID",
"valid_component : function_name",
"valid_component : array_reference",
"division_operators : SLASH",
"division_operators : MOD",
"relational_operators : LT",
"relational_operators : LE",
"relational_operators : NEQ",
"relational_operators : GE",
"relational_operators : GT",
"relational_operators : EQ",
"logical_operators : AND",
"logical_operators : OR",
"logical_operators : NOT",

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
#line 144 "parser.y"

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
#line 530 "y.tab.c"

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
