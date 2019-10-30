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
   22,   22,   22,   22,   22,   22,   23,   24,   25,   26,
   27,   28,   29,   33,   34,   36,   36,   37,   38,   39,
   17,   17,   40,   40,   41,   41,   41,   41,   41,   41,
   41,    1,    1,   42,   42,   43,   43,    2,    2,   44,
   44,    7,    7,   45,   45,   46,   10,   10,   19,   19,
   48,   49,   49,   50,   35,   35,   51,   51,    8,    8,
    8,    8,   47,   47,   14,   14,   16,   16,   16,   16,
   16,   16,   21,   21,   21,   21,   30,   30,   31,   31,
   31,   31,   31,   31,   32,   32,   32,
};
static const short yylen[] = {                            2,
    7,    1,    1,   10,    8,    5,    5,    2,    2,    1,
    5,    5,    4,    4,    3,    3,    1,    3,    1,    1,
    1,    1,    1,    1,    1,    1,    2,    3,    3,    3,
    3,    3,    3,    2,    4,    8,    6,    6,   10,    3,
    1,    0,    2,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    0,    2,    1,    1,    1,    1,    0,    2,
    1,    1,    0,    3,    1,    3,    3,    1,    1,    1,
    2,    2,    1,    3,    1,    0,    3,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,   56,   57,    0,   55,   68,
    0,    0,    0,   61,    2,    3,    0,   54,    0,    0,
    0,    0,    0,   60,   67,    0,   82,   92,   79,   80,
   81,   91,   85,   86,   89,   88,   90,    0,    0,    0,
   10,   87,    0,    0,    0,    0,   65,    0,    0,    0,
    6,    7,    8,    9,   12,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   45,    0,   46,    0,   51,
    0,   47,   48,   49,   50,    0,   44,   70,    1,    0,
    0,    0,   84,   83,   66,   64,    0,    0,    0,    0,
   93,    0,   17,   19,   20,   21,   22,   23,   24,   25,
   26,   95,   96,    0,    0,    0,    0,    0,    0,    0,
    0,   73,   13,    0,   34,   43,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   97,   98,   99,  100,  101,
  102,  103,  104,  105,  106,  107,    0,    0,    0,    0,
   15,   16,   40,    0,    0,    0,    0,    0,   72,    0,
   11,    0,    0,    0,   18,    0,    0,    0,    0,    0,
    0,    0,    0,   35,    0,   74,   14,    5,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   37,   38,    4,
    0,    0,    0,   36,    0,   39,
};
static const short yydgoto[] = {                          2,
    5,   13,   66,   14,   15,   16,   44,   38,    6,   45,
   39,   40,   41,   42,    7,   91,   67,   68,   69,   92,
   93,   94,   95,   96,   97,   98,   99,  100,  101,  138,
  139,  140,   70,  102,  146,   72,   73,   74,   75,   76,
   77,    8,    9,   17,   46,   47,   85,  103,  111,  112,
  147,
};
static const short yysindex[] = {                      -292,
 -244,    0, -279, -272, -262,    0,    0, -279,    0,    0,
 -225, -200, -206,    0,    0,    0, -262,    0, -213,  -25,
 -272, -279, -188,    0,    0, -257,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -152, -149, -160,
    0,    0, -145, -144, -217, -134,    0, -274, -138, -132,
    0,    0,    0,    0,    0, -191,  -74, -272, -135, -253,
 -253, -133, -253, -253, -179,    0, -115,    0, -102,    0,
  -89,    0,    0,    0,    0, -274,    0,    0,    0, -257,
 -206, -215,    0,    0,    0,    0,  -98, -253, -253, -179,
    0,  -29,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   18,  -88,  -83,   39,   75, -253, -253,
  -88,    0,    0, -253,    0,    0, -106,  -91,  -61, -257,
   95,  126, -253, -253, -253,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -274, -253, -253, -253,
    0,    0,    0, -274,  126,  -49,  -57,  111,    0,   60,
    0,  -84, -206,  -78,    0,  126,  126,  126, -184,  126,
  126,  126,  -59,    0, -253,    0,    0,    0,  -58, -257,
 -274,  -66,  -54,  126,  -71,  -52,  -51,    0,    0,    0,
 -274,  -39,  -34,    0,  -31,    0,
};
static const short yyrindex[] = {                         0,
    0,    0, -276,    0,  -48,    0,    0, -169,    0,    0,
    0,    0,    0,    0,    0,    0,  -27,    0,    0,    0,
   -6,  -76,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   -4,    0,  -23,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -11,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -147,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -85,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    1,    0,    0,    0,   -1,    0,
 -118,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -220,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -123,    0,    0,    0,
    0,    0,    0,  -23, -238,    0,    3,    0,    0,    0,
    0,    0,    0,    0,    0, -199, -181, -168,    0, -153,
  -62,  -55,    0,    0,    0,    0,    0,    0,    0,    0,
  -23,    0,    0, -154,    0,    0,    0,    0,    0,    0,
  -23,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  243,    0,  -12,  250,    0,    0,    0,  -35,    0,  266,
    0,    0,  231,  -26,    0,  253, -116,    0,  212,  -53,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -45,    0,    0,    0,    0,    0,    0,
  199,    0,  279,    0,    0,  240,    0,  -46,    0,  188,
    0,
};
#define YYTABLESIZE 404
static const short yytable[] = {                         50,
   23,   78,   71,   53,   53,   22,   88,  104,    1,  107,
  108,   89,   59,    3,   60,   78,   61,   62,   78,    4,
  159,   84,   78,   63,   53,   64,   65,  163,   10,   78,
   71,   19,   28,   20,  121,  122,   27,   27,   12,   19,
   27,   57,   27,   32,   33,   34,  119,   90,   33,   34,
   35,   36,   37,  117,  177,  145,  148,   28,   28,   21,
  150,   28,   27,   28,  183,   27,   81,   82,  118,  156,
  157,  158,   29,   22,   27,   29,   29,   30,   31,   29,
  109,   29,  110,   28,  160,  161,  162,   25,   30,   30,
   78,   71,   30,  154,   30,   28,   49,   78,   71,  171,
  172,   29,   77,   31,   31,   51,   77,   31,   52,   31,
   52,  174,   55,   29,   30,   52,   56,   52,   26,   52,
   27,   52,   52,   58,   78,   71,   30,   29,   52,   31,
   52,   52,   30,   31,   78,   71,   41,   41,   71,   71,
  169,   31,   71,  176,   71,   71,   71,   71,   71,   71,
   71,   71,   71,   71,   71,   71,   71,   71,   71,   71,
   42,   42,   79,   80,   71,   87,  114,  105,  115,  113,
  120,   94,   94,  110,  142,   94,   71,   94,   94,   94,
   94,   94,   94,  151,   94,   94,   94,   94,   94,   94,
   94,   94,   94,  152,   32,   32,  153,   94,   32,  165,
   32,   33,   33,   53,   83,   33,   27,   33,   53,   94,
   53,  164,   53,   29,   53,   53,  168,  170,   30,   31,
   32,   53,  178,   53,   53,  173,  175,   33,  179,  180,
  181,   59,   32,  182,  123,  124,  125,  126,  127,   33,
  128,  129,  130,  131,  132,  133,  134,  135,  136,  184,
  185,  186,   58,   26,   63,   27,   62,   69,   69,   76,
   28,   42,   29,   75,   48,  137,   24,   30,   31,   11,
   54,   32,   43,  106,  116,  141,   33,   34,   35,   36,
   37,  123,  124,  125,  126,  127,   18,  128,  129,  130,
  131,  132,  133,  134,  135,  136,  143,   86,  149,    0,
    0,    0,  123,  124,  125,  126,  127,    0,  128,  129,
  130,  131,  132,  133,  134,  135,  136,  167,    0,    0,
    0,    0,    0,  123,  124,  125,  126,  127,    0,  128,
  129,  130,  131,  132,  133,  134,  135,  136,  123,  124,
  125,  126,  127,    0,  128,  129,  130,  131,  132,  133,
  134,  135,  136,    0,    0,  155,    0,  144,  123,  124,
  125,  126,  127,    0,  128,  129,  130,  131,  132,  133,
  134,  135,  136,  166,  123,  124,  125,  126,  127,    0,
  128,  129,  130,  131,  132,  133,  134,  135,  136,  123,
  124,  125,  126,  127,    0,  128,  129,  130,  131,  132,
  133,  134,  135,  136,
};
static const short yycheck[] = {                         26,
   13,   48,   48,  280,   40,  280,  260,   61,  301,   63,
   64,  265,  287,  258,  289,   62,  291,  292,  257,  299,
  137,   57,  261,  298,  301,  300,  301,  144,  301,   76,
   76,  257,  286,  259,   88,   89,  257,  258,  301,  257,
  261,  259,  263,  297,  302,  303,   82,  301,  302,  303,
  304,  305,  306,   80,  171,  109,  110,  257,  258,  260,
  114,  261,  283,  263,  181,  281,  258,  259,   81,  123,
  124,  125,  288,  280,  295,  257,  258,  293,  294,  261,
  260,  263,  262,  283,  138,  139,  140,  301,  257,  258,
  137,  137,  261,  120,  263,  295,  285,  144,  144,  284,
  285,  283,  257,  257,  258,  258,  261,  261,  258,  263,
  280,  165,  258,  295,  283,  285,  261,  287,  279,  289,
  281,  291,  292,  258,  171,  171,  295,  288,  298,  283,
  300,  301,  293,  294,  181,  181,  284,  285,  257,  258,
  153,  295,  261,  170,  263,  264,  265,  266,  267,  268,
  269,  270,  271,  272,  273,  274,  275,  276,  277,  278,
  284,  285,  301,  296,  283,  301,  269,  301,  258,  285,
  269,  257,  258,  262,  258,  261,  295,  263,  264,  265,
  266,  267,  268,  290,  270,  271,  272,  273,  274,  275,
  276,  277,  278,  285,  257,  258,  258,  283,  261,  257,
  263,  257,  258,  280,  279,  261,  281,  263,  285,  295,
  287,  261,  289,  288,  291,  292,  301,  296,  293,  294,
  283,  298,  289,  300,  301,  285,  285,  283,  283,  301,
  283,  280,  295,  285,  264,  265,  266,  267,  268,  295,
  270,  271,  272,  273,  274,  275,  276,  277,  278,  289,
  285,  283,  280,  279,  261,  281,  261,  269,  258,  261,
  286,  285,  288,  261,   22,  295,   17,  293,  294,    4,
   40,  297,   20,   62,   76,  258,  302,  303,  304,  305,
  306,  264,  265,  266,  267,  268,    8,  270,  271,  272,
  273,  274,  275,  276,  277,  278,  258,   58,  111,   -1,
   -1,   -1,  264,  265,  266,  267,  268,   -1,  270,  271,
  272,  273,  274,  275,  276,  277,  278,  258,   -1,   -1,
   -1,   -1,   -1,  264,  265,  266,  267,  268,   -1,  270,
  271,  272,  273,  274,  275,  276,  277,  278,  264,  265,
  266,  267,  268,   -1,  270,  271,  272,  273,  274,  275,
  276,  277,  278,   -1,   -1,  261,   -1,  283,  264,  265,
  266,  267,  268,   -1,  270,  271,  272,  273,  274,  275,
  276,  277,  278,  263,  264,  265,  266,  267,  268,   -1,
  270,  271,  272,  273,  274,  275,  276,  277,  278,  264,
  265,  266,  267,  268,   -1,  270,  271,  272,  273,  274,
  275,  276,  277,  278,
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
"expression_general : logical",
"negative : MINUS expression",
"addition : expression PLUS expression",
"subtraction : expression MINUS expression",
"multiplication : expression STAR expression",
"division : expression division_operators expression",
"relational : expression relational_operators expression",
"logical : expression logical_operators expression",
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
#line 142 "parser.y"

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
#line 512 "y.tab.c"

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
