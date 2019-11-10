%{
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
%}

%token COMMA SEMICOLON COLON 
%token L_PARENTHESES R_PARENTHESES 
%token L_BRACKETS R_BRACKETS

%token PLUS MINUS STAR SLASH MOD ASSIGN
%token LT LE NEQ GE GT EQ AND OR NOT

%token KWarray  KWbegin   KWboolean KWdef  KWdo     KWelse KWend  KWfalse
%token KWfor    KWinteger KWif      KWof   KWprint  KWread KWreal
%token KWstring KWthen    KWto      KWtrue KWreturn KWvar  KWwhile

%token ID
%token DEC_INT OCT_INT FLOAT SCIENTIFIC

%token STRING

%right ASSIGN 
%left LT LE NEQ GE GT EQ AND OR NOT
%left PLUS MINUS STAR SLASH MOD

%%
    
    /* ============================================================================================ */
    /* ===== PROGRAM UNIT ===== */
    /* ===== PROGRAM UNIT ===== */
    /* ===== PROGRAM UNIT ===== */
    /* ===== PROGRAM UNIT ===== */
    /* ===== PROGRAM UNIT ===== */
    /* ============================================================================================ */
    
    /* ============================================================================================ */
    /* PROGRAM */
program: ID SEMICOLON
         opt_variable_constant_declaration
         opt_function_declaration
         compound_statement
         KWend ID
       ;

    /* ============================================================================================ */
    /* FUNCTION */
function: function_normal
        | function_procedure
        ;
function_normal: ID L_PARENTHESES opt_formal_arguments R_PARENTHESES COLON scalar_type SEMICOLON
                 compound_statement
                 KWend ID
               ;
function_procedure: ID L_PARENTHESES opt_formal_arguments R_PARENTHESES SEMICOLON
                    compound_statement
                    KWend ID
                  ;

identifier_list: identifier_list COMMA ID
               | ID
               ;

opt_formal_arguments: formal_arguments_list
                    |
                    ;
formal_arguments_list: formal_arguments_list COMMA formal_argument
                     | formal_argument
                     ;
formal_argument: identifier_list COLON type
               ;
    
    /* ============================================================================================ */
    /* APPENDIX of PROGRAM UNIT */
opt_function_declaration: function_declaration_list 
                        |
                        ;

function_declaration_list: function_declaration_list function 
                         | function
                         ;
    
    /* ============================================================================================ */
    /* ===== DATA TYPE and DECLARATIONS ===== */
    /* ===== DATA TYPE and DECLARATIONS ===== */
    /* ===== DATA TYPE and DECLARATIONS ===== */
    /* ===== DATA TYPE and DECLARATIONS ===== */
    /* ===== DATA TYPE and DECLARATIONS ===== */
    /* ============================================================================================ */
    
    /* ============================================================================================ */
    /* VARIABLES */
variable: KWvar identifier_list COLON scalar_type          SEMICOLON
        | KWvar identifier_list COLON structed_delcaration SEMICOLON
        ;

structed_delcaration: array_declaratin_list scalar_type
                    ;
array_declaratin_list: array_declaratin_list array_declaration
                     | array_declaration
                     ;
array_declaration: KWarray integer_constant KWto integer_constant KWof
                 ;


integer_constant: DEC_INT | OCT_INT
                ;
type: scalar_type | structured_type
    ;
scalar_type: KWinteger | KWreal | KWstring | KWboolean 
           ;
structured_type: KWarray 
               ;

    /* ============================================================================================ */
    /* CONSTANTS */
constant: KWvar identifier_list COLON literal_constant SEMICOLON
        ;
literal_constant: DEC_INT | OCT_INT | FLOAT | SCIENTIFIC | STRING | KWtrue | KWfalse
                ;

    /* ============================================================================================ */
    /* APPENDIX of DATA TYPE and DECLARATIONS */
opt_variable_constant_declaration: variable_and_constant_list 
                                 |  
                                 ;
variable_and_constant_list: variable_and_constant_list variable_and_constant
                          | variable_and_constant
                          ;
variable_and_constant: variable | constant
                     ;
    
    /* ============================================================================================ */
    /* ===== STATEMENTS ===== */
    /* ===== STATEMENTS ===== */
    /* ===== STATEMENTS ===== */
    /* ===== STATEMENTS ===== */
    /* ===== STATEMENTS ===== */
    /* ============================================================================================ */
    
    /* ============================================================================================ */
    /* COMPOUND */
compound_statement: KWbegin
                    opt_variable_constant_declaration
                    opt_statements
                    KWend
                  ;
    
    /* ============================================================================================ */
    /* SIMPLE */
simple_statement: variable_reference ASSIGN expressions SEMICOLON
                | KWprint expressions        SEMICOLON
                | KWread  variable_reference SEMICOLON
                ; 
variable_reference: ID
                  | array_reference
                  ;
array_reference: ID brackets_expressions_list
               ;
brackets_expressions_list: brackets_expressions_list brackets_expressions
                         | brackets_expressions
                         ;
brackets_expressions: L_BRACKETS expressions R_BRACKETS
                    ;
    /* ============================================================================================ */
    /* EXPRESSIONS */
expressions: level_7
           ;
level_7: level_7 AND level_6
       | level_7 OR  level_6
       | NOT level_6
       | level_6
       ;
level_6: level_6 relational_op level_5
       | level_5
       ;
level_5: level_5 division_op level_4
       | level_4
       ;
level_4: level_4 STAR level_3
       | level_3
       ;
level_3: level_3 MINUS level_2
       | level_2
       ;
level_2: level_2 PLUS level_1
       | level_1
       ;
level_1: MINUS level_0
       | level_0
       ;
level_0: valid_components
       ;
valid_components: L_PARENTHESES expressions R_PARENTHESES 
                | literal_constant
                | ID
                | function_invocation
                | array_reference
                ;
division_op: SLASH | MOD
           ;
relational_op: LT | LE | NEQ | GE | GT | EQ
             ;
    /* ============================================================================================ */
    /* CONDITIONAL */
conditional: KWif expressions KWthen
             opt_statements
             KWelse
             opt_statements
             KWend KWif
           | KWif expressions KWthen opt_statements KWend KWif
           ;
    /* ============================================================================================ */
    /* WHILE */
while: KWwhile expressions KWdo
       opt_statements
       KWend KWdo
     ;
    /* ============================================================================================ */
    /* FOR */
for: KWfor ID ASSIGN integer_constant KWto integer_constant KWdo
     opt_statements
     KWend KWdo
   ;
    /* ============================================================================================ */
    /* RETURN */
return: KWreturn expressions SEMICOLON
      ;
    /* ============================================================================================ */
    /* FUNCTION_INVOCATION and PROCEDURE CALL */
function_invocation: ID L_PARENTHESES expressions_separated_by_opt_comma R_PARENTHESES
                   ;
procedure_call: function_invocation SEMICOLON
              ;
expressions_separated_by_opt_comma: expressions_list 
                                  | 
                                  ;
expressions_list: expressions_list COMMA expressions
                | expressions
                ;
    /* ============================================================================================ */
    /* APPENDIX of STATEMENTS */
opt_statements: statements_list
              |
              ;
statements_list: statements_list statements | statements
               ;
statements: compound_statement
          | simple_statement
          | conditional
          | while
          | for
          | return
          | procedure_call
          ;
%%

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
