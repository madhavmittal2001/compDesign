%{
 // enum yytokentype {
 // 	NUMBER = 258,
 // 	ADD = 259,
 // 	SUB = 260,
 // 	MUL = 261,
 // 	DIV = 262,
 // 	EOL = 263
 // };
 //  	int yylval;

#include "lab2.tab.h"

#include <string.h>
%}

%%

"+" { return ADD; }
"-" { return SUB; }
"*" { return MUL; }
"/" { return DIV; }
[0-9]+ { 

	//yylval = atoi(yytext);
	int len = strlen(yytext); //number of digits in the interger 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return NUMBER;
}
\n { return EOL; }
[ \t] { }
. { printf("Mystery character %s\n", yytext); }

%%

/*
int main()
{
	int tok;

	while(tok = yylex())
	{
		printf("%d:",tok);
		if(tok == NUMBER) printf(" = %d\n", yylval);
		else printf("\n");
	}

	printf("All tokens read\n");

	return 0;
}
*/
// 2 + 3 * 5