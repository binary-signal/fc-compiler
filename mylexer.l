/*                              Definition Section                            */
%{

   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>
   #include <math.h>
   #include "cgen.h"

   #include "myanalyzer.tab.h"

   int lineNum = 1;
%}

/* mute warnings during compilation */
%option nounput
%option noinput

white	[\t\r\v]
letter [A-Za-z]
alphanumeric [a-zA-Z0-9]
digit	[0-9]
digit2 [1-9]
number {digit}{digit}*

under [\_]
dot	[\.]
sign	[\+\-]
exp	[Ee]{sign}?{digit}{1,3}


const_char            ([\']([^\n'"\\]|[\\][n]|[\\][t]|[\\][r]|[\\][\\]|[\\][']|[\\]["])?[\'])

%x C_COMMENT




/*                            Rule Section                                    */
%%
\n 					 { ++lineNum; }

{white}*     { /* nothing */ }


"("  { return TK_OPEN_PARENTHESIS;}
")"   { return TK_CLOSE_PARENTHESIS;}
";"   { return TK_SEMICOLON;}
"["		{ return TK_OPEN_BRACKET;}
"]"		{ return TK_CLOSE_BRACKET;}
","		{ return TK_COMMA;}

":="  { return TK_ASSGN; }

"+"   { return TK_OP_PLUS;}
"-"   { return TK_OP_MINUS;}
"/"   { return TK_OP_DIV;}
"*"   { return TK_OP_MULT;}

"="   { return TK_OP_EQUAL;}
"!="  { return TK_OP_EQUAL_NOT;}
"<="  { return TK_OP_EQUAL_SMALLER;}
">="  { return TK_OP_EQUAL_GREATER;}
"<"   { return TK_OP_SMALLER;}
">"   { return TK_OP_GREATER;}

"||"  { return TK_OP_LO_OR;}
"&&"  { return TK_OP_LO_AND;}
"!"   { return TK_OP_LO_NOT;}

(?-i:readString) 		  { return FCLIB_READ_STRING; }
(?-i:readInteger) 		{ return FCLIB_READ_INTEGER; }
(?-i:readReal) 			  { return FCLIB_READ_REAL; }
(?-i:writeString) 		{ return FCLIB_WRITE_STRING; }
(?-i:writeInteger)		{ return FCLIB_WRITE_INTEGER; }
(?-i:writeReal) 		  { return FCLIB_WRITE_REAL; }



(?-i:static)       { return TK_KW_STATIC;}
(?-i:boolean)      { return TK_KW_BOOLEAN;}
(?-i:integer)      { return TK_KW_INTEGER;}
(?-i:character)    { return TK_KW_CHARACTER;}
(?-i:real)         { return TK_KW_REAL;}
(?-i:void)         { return TK_KW_VOID;}
(?-i:true)         { return TK_KW_TRUE;}
(?-i:false)        { return TK_KW_FALSE;}
(?-i:string)       { return TK_KW_STRING;}
(?-i:while)        { return TK_KW_WHILE;}
(?-i:do)           { return TK_KW_DO;}
(?-i:break)        { return TK_KW_BREAK;}
(?-i:continue)     { return TK_KW_CONTINUE;}
(?-i:return)       { return TK_KW_RETURN;}
(?-i:begin)        { return TK_KW_BEGIN;}
(?-i:if)           { return TK_KW_IF;}
(?-i:else)         { return TK_KW_ELSE;}
(?-i:for)          { return TK_KW_FOR;}
(?-i:end)          { return TK_KW_END;}
(?-i:or)           { return TK_KW_OR;}
(?-i:not)          { return TK_KW_NOT;}
(?-i:and)          { return TK_KW_AND;}
(?-i:mod)          { return TK_KW_MOD;}


{letter}({alphanumeric}|{under})*  { yylval.str = strdup(yytext); return TK_ID; }

\"(\\.|[^\\"])*\"                  { yylval.str = strdup(yytext); return TK_CONST_STR; }

{const_char}                       { yylval.str = strdup(yytext); return TK_CONST_CHAR; }

[0]|{digit2}{digit}*                           { yylval.str = strdup(yytext); return TK_INT_POS_CONST; }

{digit}+{dot}{digit}*{exp}?   |
{digit}*{dot}{digit}+{exp}?        { yylval.str = strdup(yytext); return TK_REAL_POST_CONST; }

"//".*                             {  ++lineNum; /* skip inline comment */ }

"/*"                               { BEGIN(C_COMMENT); }
<C_COMMENT>"*/"                    { BEGIN(INITIAL); }
<C_COMMENT>.                       { /* skip multiline comment */ }
<C_COMMENT>\n                      { ++lineNum; }

[\r\t ]                            /* skip white space character */


. 				                         { printf("ERROR: Found Unknown Token %s in line: %d", yytext, lineNum); return -1;}

%%
int yywrap(void) {
  return 1;
}
