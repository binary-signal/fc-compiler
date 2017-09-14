%{
  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>
  #include "cgen.h"

  extern int yylex(void);
  extern int lineNum;
%}

%union {
  char* str;
}

%define parse.trace
%debug

/* Bison declarations */

%token <str> TK_ID
%token <str> TK_INT_POS_CONST
%token <str> TK_REAL_POST_CONST
%token TK_ASSGN
%token TK_OPEN_PARENTHESIS
%token TK_CLOSE_PARENTHESIS

%token <str> TK_SEMICOLON

%token <str> TK_CONST_STR
%token <str> TK_CONST_CHAR

%token <str> TK_KW_STATIC
%token <str> TK_KW_BOOLEAN
%token <str> TK_KW_INTEGER
%token <str>TK_KW_CHARACTER
%token <str> TK_KW_REAL
%token TK_KW_VOID
%token TK_KW_MAIN
%token <str> TK_KW_TRUE
%token <str> TK_KW_FALSE
%token <str>TK_KW_STRING
%token <str>TK_KW_WHILE
%token <str>TK_KW_DO
%token <str>TK_KW_BREAK
%token <str>TK_KW_CONTINUE
%token <str>TK_KW_RETURN
%token <str>TK_KW_BEGIN
%token <str> TK_KW_IF
%token <str> TK_KW_ELSE
%token <str>TK_KW_FOR
%token TK_KW_END
%token TK_KW_OR
%token <str> TK_KW_NOT
%token TK_KW_AND
%token TK_KW_MOD


%token TK_OP_EQUAL
%token TK_OP_EQUAL_GREATER
%token TK_OP_EQUAL_SMALLER
%token TK_OP_GREATER
%token TK_OP_SMALLER
%token TK_OP_EQUAL_NOT
%token TK_OP_LO_AND
%token TK_OP_LO_OR
%token <str> TK_OP_LO_NOT

%token TK_OPEN_BRACKET
%token TK_CLOSE_BRACKET

%token <str> TK_COMMA

%token FCLIB_READ_STRING
%token FCLIB_READ_INTEGER
%token FCLIB_READ_REAL
%token FCLIB_WRITE_STRING
%token FCLIB_WRITE_INTEGER
%token FCLIB_WRITE_REAL

%left TK_KW_OR
%left TK_OP_LO_OR
%left TK_KW_AND
%left TK_OP_LO_AND

%left TK_OP_EQUAL
%left TK_OP_EQUAL_NOT
%left TK_OP_EQUAL_GREATER
%left TK_OP_EQUAL_SMALLER
%left TK_OP_SMALLER
%left TK_OP_GREATER

%right <str> TK_OP_PLUS
%right <str> TK_OP_MINUS
%left TK_OP_MULT
%left TK_OP_DIV
%left TK_KW_MOD

%left UNARYMINUS
%left UNARYPLUS
%right TK_KW_NOT
%right TK_OP_LO_NOT

%nonassoc NO_ELSE
%nonassoc TK_KW_ELSE

%start fc_body



%type <str> variables
%type <str> more_variables
%type <str> sign
%type <str> type
%type <str> boolean
%type <str> assignment
%type <str> characters
%type <str> function

%type <str> function_variables
%type <str> function_variables_list
%type <str> function_body
%type <str> statement
%type <str> statements
%type <str> TK_KW_VOID
%type <str> expressions
%type <str> expression

%type <str> variables_declaration
%type <str> functio_declaration
%%
fc_body : variables_declaration functio_declaration  {
                            if( yyerror_count==0 ) {
                                puts(c_prologue);
                                printf("%s %s", $1, $2);
                                printf("\n/*Your program is correct*/\n");
                            }
                          }
;

functio_declaration : function { $$ = template("%s", $1);}
                    | functio_declaration function { $$ = template("%s %s", $1, $2);}
                    ;

variables_declaration : /* empty */ { $$ = template("");}
                      | variables_declaration variables { $$ = template("%s %s", $1, $2);}
                      ;

variables : type TK_ID more_variables TK_SEMICOLON                 { $$ = template("%s %s %s;\n", $1, $2, $3); }
          | type TK_ID assignment more_variables TK_SEMICOLON      { $$ = template("%s %s %s %s;\n", $1, $2, $3, $4); }
          | TK_KW_STATIC type TK_ID more_variables TK_SEMICOLON    { $$ = template("static %s %s %s ;\n", $2, $3, $4); }
          | TK_KW_STATIC type TK_ID assignment more_variables TK_SEMICOLON { $$ = template("static %s %s %s %s\n", $2, $3, $4, $5); }
          ;

type : TK_KW_INTEGER    { $$ = template("int"); }
     | TK_KW_BOOLEAN    { $$ = template("int"); }
     | TK_KW_CHARACTER  { $$ = template("char"); }
     | TK_KW_REAL       { $$ = template("double"); }
     | TK_KW_STRING     { $$ = template("char *"); }
     ;

assignment : TK_ASSGN sign TK_INT_POS_CONST     { $$ = template("= %s %s", $2, $3); }
           | TK_ASSGN boolean                   { $$ = template("= %s", $2); }
           | TK_ASSGN characters                { $$ = template("= %s", $2); }
           | TK_ASSGN sign TK_REAL_POST_CONST   { $$ = template("= %s%s", $2, $3); }

           ;

boolean : TK_KW_TRUE   { $$ = template("1"); }
        | TK_KW_FALSE  { $$ = template("0"); }
        ;

sign : /* empty */   { $$ = template(""); }
     | TK_OP_PLUS    { $$ = template("+"); }
     | TK_OP_MINUS   { $$ = template("-"); }
     ;

characters : TK_CONST_CHAR { $$ = template("%s", $1); }
           | TK_CONST_STR  { $$ = template("%s", $1); }
           ;

more_variables : /* empty */                                  { $$ = template(""); }
               | TK_COMMA TK_ID assignment more_variables     { $$ = template(", %s %s %s", $2, $3, $4); }
               | TK_COMMA TK_ID more_variables                { $$ = template(", %s  %s", $2, $3); }
               ;


function : type TK_ID TK_OPEN_PARENTHESIS function_variables TK_CLOSE_PARENTHESIS TK_KW_BEGIN function_body TK_KW_END         {
           $$ = template("%s %s(%s){ \n %s} \n", $1, $2, $4, $7); }
         | TK_KW_VOID TK_ID TK_OPEN_PARENTHESIS function_variables TK_CLOSE_PARENTHESIS TK_KW_BEGIN function_body TK_KW_END   {
           $$ = template("void %s(%s){ \n %s} \n", $2, $4, $7); }
         ;

function_variables : /* empty */                            { $$ = template(""); }
                   | type TK_ID function_variables_list     { $$ = template("%s %s %s", $1, $2, $3); }
                   ;

function_variables_list : /* empty */                                     { $$ = template(""); }
                        | TK_COMMA type TK_ID function_variables_list     { $$ = template(", %s %s %s", $2, $3, $4); }
                        ;

function_body : variables function_body   { $$ = template("%s%s", $1, $2); }
              | statements                { $$ = template("%s", $1); }
              ;

expression : TK_INT_POS_CONST { $$ = template("%s", $1); }
           | TK_KW_TRUE { $$ = template("%s", $1); }
           | TK_KW_FALSE { $$ = template("%s", $1); }
           | TK_CONST_CHAR { $$ = template("%s", $1); }
           | TK_REAL_POST_CONST { $$ = template("%s", $1); }
           | TK_CONST_STR { $$ = template("%s", $1); }
           | TK_KW_NOT expression { $$ = template("not %s", $2); }
           | TK_OP_LO_NOT expression { $$ = template("!%s", $2); }
           | TK_OP_PLUS expression %prec UNARYPLUS { $$ = template("+%s", $2); }
           | TK_OP_MINUS expression %prec UNARYMINUS{ $$ = template("-%s", $2); }
           | expression TK_OP_MULT expression{ $$ = template("%s*%s", $1, $3); }
           | expression TK_OP_DIV expression{ $$ = template("%s/%s", $1, $3); }
           | expression TK_KW_MOD expression{ $$ = template("%s %% %s", $1, $3); }
           | expression TK_OP_PLUS expression { $$ = template("%s+%s", $1, $3); }
           | expression TK_OP_MINUS expression { $$ = template("%s-%s", $1, $3); }
           | expression TK_OP_EQUAL expression { $$ = template("%s==%s", $1, $3); }
           | expression TK_OP_EQUAL_NOT expression { $$ = template("%s != %s", $1, $3);}
           | expression TK_OP_SMALLER expression { $$ = template("%s<%s", $1, $3); }
           | expression TK_OP_GREATER expression { $$ = template("%s>%s", $1, $3); }
           | expression TK_OP_EQUAL_SMALLER expression { $$ = template("%s<=%s", $1, $3); }
           | expression TK_OP_EQUAL_GREATER expression { $$ = template("%s>=%s", $1, $3); }
           | expression TK_KW_AND expression { $$ = template("%s and %s", $1, $3); }
           | expression TK_OP_LO_AND expression { $$ = template("%s && %s", $1, $3); }
           | expression TK_KW_OR expression { $$ = template("%s or %s", $1, $3); }
           | expression TK_OP_LO_OR expression { $$ = template("%s || %s", $1, $3); }
           | TK_ID { $$ = template("%s", $1); }
           | TK_OPEN_PARENTHESIS expression TK_CLOSE_PARENTHESIS { $$ = template("(%s)", $2);}
           | TK_ID TK_OPEN_PARENTHESIS expressions TK_CLOSE_PARENTHESIS { $$ = template("%s(%s)", $1, $3); }
           | FCLIB_READ_STRING TK_OPEN_PARENTHESIS TK_CLOSE_PARENTHESIS { $$ = template("readString()");}
           | FCLIB_READ_INTEGER TK_OPEN_PARENTHESIS TK_CLOSE_PARENTHESIS { $$ = template("readInteger()"); }
           | FCLIB_READ_REAL TK_OPEN_PARENTHESIS TK_CLOSE_PARENTHESIS { $$ = template("readReal()");}



           ;

expressions : /* empty */ { $$ = template(""); }
            | expression { $$ = template("%s", $1); }
            | expression TK_COMMA expressions { $$ = template("%s, %s", $1, $3); }
            ;


statements : /* empty */            { $$ = template(""); }
           | statement statements   { $$ = template("%s %s", $1, $2); }
           ;

statement : TK_SEMICOLON { $$ = template(";\n"); }
          | TK_KW_BEGIN statements TK_KW_END { $$ = template("%s", $2); }
          | TK_KW_FOR TK_OPEN_PARENTHESIS TK_ID TK_ASSGN expression TK_SEMICOLON TK_ID TK_ASSGN expression  TK_CLOSE_PARENTHESIS statement {
            $$ = template("for(%s= %s; %s= %s){\n\t%s}", $3, $5, $7, $9);
           }

          | TK_KW_FOR TK_OPEN_PARENTHESIS TK_ID TK_ASSGN expression TK_SEMICOLON expression TK_SEMICOLON TK_ID TK_ASSGN expression  TK_CLOSE_PARENTHESIS statement {
            $$ = template("for(%s= %s; %s; %s= %s){\n\t%s}", $3, $5, $7, $9, $11,  $13);
           }
          | TK_KW_WHILE TK_OPEN_PARENTHESIS expression TK_CLOSE_PARENTHESIS statement {$$ = template("while(%s){\n%s}", $3, $5);}
          | TK_KW_DO statement TK_KW_WHILE TK_OPEN_PARENTHESIS expression TK_CLOSE_PARENTHESIS TK_SEMICOLON {
            $$ = template("do {\n%s}while(%)}", $2, $5);}
          | TK_KW_IF TK_OPEN_PARENTHESIS expression TK_CLOSE_PARENTHESIS statement %prec NO_ELSE {
            $$ = template("if(%s){\n\t%s}\n", $3, $5); }

          | TK_KW_IF TK_OPEN_PARENTHESIS expression TK_CLOSE_PARENTHESIS statement TK_KW_ELSE statement  {
            $$ = template("if(%s){\n\t%s} \nelse{\t%s}\n", $3, $5,$7); }

          | TK_KW_BREAK TK_SEMICOLON { $$ = template("%s;\n", $1); }
          | TK_KW_CONTINUE TK_SEMICOLON { $$ = template("%s;\n", $1); }
          | TK_KW_RETURN expression TK_SEMICOLON { $$ = template("return %s;\n", $2); }
          | TK_ID TK_OPEN_PARENTHESIS expressions TK_CLOSE_PARENTHESIS TK_SEMICOLON { $$ = template("%s(%s);\n", $1, $3); }
          | TK_ID TK_ASSGN expression TK_SEMICOLON { $$ = template("%s = %s;\n", $1, $3); }
          | FCLIB_WRITE_STRING TK_OPEN_PARENTHESIS characters TK_CLOSE_PARENTHESIS { $$ = template("writeString(%s)", $3);}
          | FCLIB_WRITE_INTEGER TK_OPEN_PARENTHESIS expression TK_CLOSE_PARENTHESIS  { $$ = template("writeInteger(%s)", $3);}
          | FCLIB_WRITE_REAL TK_OPEN_PARENTHESIS expression TK_CLOSE_PARENTHESIS  { $$ = template("writeReal(%s)", $3);}




%%
int main ()
{
  if ( yyparse() == 0)
     printf("\n//Accepted!\n");
  else
     printf("\n//Rejected!\n");
}
