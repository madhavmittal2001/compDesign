%{
#include "A1.tab.h"
#include <stdio.h>
#include <string.h>
%}

%%

"//".* {}

"#defineExpr0" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return DEFEXPR0;}
"#defineExpr1" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return DEFEXPR1;}
"#defineExpr2" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return DEFEXPR2;}
"#defineExpr" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return DEFEXPR;}
"#defineStmt0" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return DEFSTMT0;}
"#defineStmt1" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return DEFSTMT1;}
"#defineStmt2" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return DEFSTMT2;}
"#defineStmt" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return DEFSTMT;}

"if" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return IF;}
"else" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return ELSE;}
"while" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return WHILE;}
"new" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return NEW;}
"class" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return CLASS;}
"public" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return PUBLIC;}
"static void main" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return STATICVOIDMAIN;}
"this" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return THIS;}
"return" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return RETURN;}
"extends" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return EXTENDS;}

"length" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return LENGTH;}
"System.out.println" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return SYSOUT;}

"int" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return INT;}
"boolean" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return BOOLEAN;}
"String" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return STRING;}
"true" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return TRUE;}
"false" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return FALSE;}

"&&"|"||"|"!="|"<="|"+"|"-"|"*"|"/" {
	int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return OP;
};

"0"|[1-9][0-9]* {
	int len = strlen(yytext); //number of digits in the integer 
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return INTEGER;
}

"." {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return DOT;}
"," {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return COMMA;}
";" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return SEMI;}
"!" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return BANG;}
"=" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return EQ;}
"(" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return LROUND;}
")" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return RROUND;}
"{" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return LCURLY;}
"}" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return RCURLY;}
"[" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return LBOX;}
"]" {int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return RBOX;}

[a-zA-Z][a-zA-Z0-9_$]* {
	int len = strlen(yytext);
	yylval.s = (char*) malloc((len + 1) * sizeof(char));
	yylval.s[0] = '\0';
	strcat(yylval.s,yytext);
	return ID;
}

[ \t\n\r\f] {}
. { printf("//Failed to parse input code");}

%%
