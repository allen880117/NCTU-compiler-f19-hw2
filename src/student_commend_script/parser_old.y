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

program_name: ID SEMICOLON 
              opt_variable_constant_declaration 
              opt_function_declaration 
              one_compound_statement 
              KWend ID
              ;

function: normal_function | procedure_function;
normal_function: ID L_PARENTHESES opt_formal_arguments R_PARENTHESES COLON scalar_type SEMICOLON 
                 one_compound_statement 
                 KWend ID
                 ;
procedure_function: ID L_PARENTHESES opt_formal_arguments R_PARENTHESES SEMICOLON 
                    one_compound_statement 
                    KWend ID
                    ;

variable: KWvar identifier_list COLON scalar_type SEMICOLON
          | KWvar identifier_list COLON dimension_array_declaration SEMICOLON;

dimension_array_declaration: array_declaration_without_type_list scalar_type ;
array_declaration_without_type_list: array_declaration_without_type_list array_declaration_without_type 
                                     | array_declaration_without_type;
array_declaration_without_type: KWarray integer_constant KWto integer_constant KWof ;

constant: KWvar identifier_list COLON literal_constant SEMICOLON;

one_compound_statement: KWbegin
                        opt_variable_constant_declaration
                        opt_statements
                        KWend
                        ;

simple_statement: variable_reference ASSIGN expression SEMICOLON
                  | KWprint expression SEMICOLON
                  | KWread variable_reference SEMICOLON
                  ;

relational_operators: LT | LE | NEQ | GE | GT | EQ; 
division_operators: SLASH | MOD;
expression: level_6;
level_6: level_6 AND level_5
       | level_6 OR  level_5
       | NOT level_6
       | level_5 
       ;
level_5: level_5 relational_operators level_4 | level_4;
level_4: level_4 division_operators level_3 | level_3;
level_3: level_3 STAR  level_2 | level_2;
level_2: level_2 MINUS level_1 | level_1;
level_1: level_1 PLUS level_0 | level_0;
level_0: MINUS level_0 | valid_component;
valid_component: L_PARENTHESES expression R_PARENTHESES 
                 | literal_constant | ID | function_name | array_reference;


function_invocation: function_name SEMICOLON ;
function_name: ID L_PARENTHESES opt_expression_separated_by_opt_comma R_PARENTHESES;

conditional: KWif expression KWthen
             opt_statements
             KWelse
             opt_statements
             KWend KWif
             |
             KWif expression KWthen opt_statements KWend KWif
             ;

while: KWwhile expression KWdo
       opt_statements
       KWend KWdo
       ;

for: KWfor ID ASSIGN integer_constant KWto integer_constant KWdo
     opt_statements
     KWend KWdo
     ;

return: KWreturn expression SEMICOLON;

opt_statements: statements_general_list | ;
statements_general_list: statements_general_list statements_general | statements_general ; 
statements_general: one_compound_statement | simple_statement | conditional | while | for | return | function_invocation  ;

opt_variable_constant_declaration: variable_constant_list | ;
variable_constant_list: variable_constant_list variable_constant | variable_constant;
variable_constant: variable | constant;

opt_function_declaration: function_declaration_list | ;
function_declaration_list: function_declaration_list function | function ; 

opt_formal_arguments: formal_arguments_list | ;
formal_arguments_list: formal_arguments_list SEMICOLON formal_arguments | formal_arguments;
formal_arguments: identifier_list COLON type;
identifier_list: identifier_list COMMA ID | ID;

variable_reference: ID | array_reference;
array_reference: ID expression_with_brackets_list;
expression_with_brackets_list: expression_with_brackets_list expression_with_brackets| expression_with_brackets;
expression_with_brackets: L_BRACKETS expression R_BRACKETS;

opt_expression_separated_by_opt_comma: expression_separated_by_opt_comma |  ;
expression_separated_by_opt_comma: expression_separated_by_opt_comma COMMA expression | expression ; 

scalar_type: KWinteger | KWreal | KWstring | KWboolean;
type: scalar_type | KWarray;
integer_constant: DEC_INT | OCT_INT;
literal_constant: integer_constant | SCIENTIFIC | FLOAT | STRING | KWtrue | KWfalse ;

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
