%{
#include<stdio.h>
#include<string.h>

char* macroID[20];
char* macroVal[20];
int numMacros = 0;
void defMacro(char*,char*);
int valMacro(char*);
%}

%union {
	char *s;
}


%token<s> DEFEXPR DEFEXPR0 DEFEXPR1 DEFEXPR2
%token<s> DEFSTMT DEFSTMT0 DEFSTMT1 DEFSTMT2
%token<s> IF ELSE WHILE NEW CLASS PUBLIC STATICVOIDMAIN THIS RETURN EXTENDS
%token<s> LENGTH SYSOUT
%token<s> INT BOOLEAN STRING TRUE FALSE
%token<s> ID INTEGER
%token<s> OP
%token<s> DOT COMMA SEMI BANG EQ LROUND RROUND LCURLY RCURLY LBOX RBOX

%type<s> Goal MacroDefinitions MacroDefinition MainClass
%type<s> TypeDeclarations TypeDeclaration TypeDeclarationBody
%type<s> MacroDefExpression MacroDefStatement
%type<s> Expression Expressions Statements Statement
%type<s> PrimaryExpression
%type<s> TypeIDs Type
%type<s> MethodDeclarations MethodDeclaration MethodDeclarationBody
%type<s> IDs

%% 

Goal : MacroDefinitions MainClass TypeDeclarations {
		int len = strlen($2) + strlen($3);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$2);
		strcat($$,$3);
		printf("%s", $$);
	};

MacroDefinitions : {	$$ = (char*) malloc(sizeof(char));
						$$[0] = '\0'; }
	| MacroDefinition MacroDefinitions {
		int len = strlen($1) + strlen($2) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,"\n");
		strcat($$,$2);
	};

MacroDefinition : MacroDefExpression {
		int len = strlen($1);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1); }
	| MacroDefStatement {
		int len = strlen($1);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
	};

MainClass : CLASS ID LCURLY PUBLIC STATICVOIDMAIN LROUND STRING LBOX RBOX ID RROUND LCURLY SYSOUT LROUND Expression RROUND SEMI RCURLY RCURLY {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + strlen($6) + strlen($7) + strlen($8) + strlen($9) + strlen($10) + strlen($11) + strlen($12) + strlen($13) + strlen($14) + strlen($15) + strlen($16) + strlen($17) + strlen($18) + strlen($19) + 6;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,"\n");
		strcat($$,$4);
		strcat($$," ");
		strcat($$,$5);
		strcat($$,$6);
		strcat($$,$7);
		strcat($$,$8);
		strcat($$,$9);
		strcat($$," ");
		strcat($$,$10);
		strcat($$,$11);
		strcat($$,$12);
		strcat($$,"\n");
		strcat($$,$13);
		strcat($$,$14);
		strcat($$,$15);
		strcat($$,$16);
		strcat($$,$17);
		strcat($$,"\n");
		strcat($$,$18);
		strcat($$,"\n");
		strcat($$,$19);
		strcat($$,"\n");
	};

TypeDeclarations : {	$$ = (char*) malloc(sizeof(char));
						$$[0] = '\0'; }
	| TypeDeclaration TypeDeclarations {
		int len = strlen($1) + strlen($2);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
	};

TypeDeclaration : CLASS ID LCURLY TypeDeclarationBody RCURLY {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + 4;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,"\n");
		strcat($$,$4);
		strcat($$,"\n");
		strcat($$,$5);
		strcat($$,"\n"); }
	| CLASS ID EXTENDS ID LCURLY TypeDeclarationBody RCURLY {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + strlen($6) + strlen($7) + 6;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$," ");
		strcat($$,$3);
		strcat($$," ");
		strcat($$,$4);
		strcat($$,$5);
		strcat($$,"\n");
		strcat($$,$6);
		strcat($$,"\n");
		strcat($$,$7);
		strcat($$,"\n");
	};

TypeDeclarationBody : Type ID SEMI TypeDeclarationBody {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,"\n");
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4); }
	| MethodDeclarations {
		int len = strlen($1);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
	};

MethodDeclarations : {	$$ = (char*) malloc(sizeof(char));
						$$[0] = '\0'; }
	| MethodDeclaration MethodDeclarations {
		int len = strlen($1) + strlen($2);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
	};

MethodDeclaration : PUBLIC Type ID LROUND RROUND LCURLY MethodDeclarationBody RETURN Expression SEMI RCURLY {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + strlen($6) + strlen($7) + strlen($8) + strlen($9) + strlen($10) + strlen($11) + 7;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$," ");
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5);
		strcat($$,$6);
		strcat($$,"\n");
		strcat($$,$7);
		strcat($$,"\n");
		strcat($$,$8);
		strcat($$," ");
		strcat($$,$9);
		strcat($$,$10);
		strcat($$,"\n");
		strcat($$,$11);
		strcat($$,"\n"); }
	| PUBLIC Type ID LROUND Type ID TypeIDs RROUND LCURLY MethodDeclarationBody RETURN Expression SEMI RCURLY {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + strlen($6) + strlen($7) + strlen($8) + strlen($9) + strlen($10) + strlen($11) + strlen($12) + strlen($13) + strlen($14) + 7;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$," ");
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5);
		strcat($$," ");
		strcat($$,$6);
		strcat($$,$7);
		strcat($$,$8);
		strcat($$,$9);
		strcat($$,"\n");
		strcat($$,$10);
		strcat($$,"\n");
		strcat($$,$11);
		strcat($$," ");
		strcat($$,$12);
		strcat($$,$13);
		strcat($$,"\n");
		strcat($$,$14);
		strcat($$,"\n");
	};

MethodDeclarationBody : Type ID SEMI MethodDeclarationBody {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,"\n");
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4); }
	| Statements {
		int len = strlen($1) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,"\n");
		strcat($$,$1);
	};

MacroDefExpression : DEFEXPR0 ID LROUND RROUND LROUND Expression RROUND {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + strlen($6) + strlen($7) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5);
		strcat($$,$6);
		strcat($$,$7); 
		
		defMacro($2, $6); }
	| DEFEXPR1 ID LROUND ID RROUND LROUND Expression RROUND {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + strlen($6) + strlen($7) + strlen($8) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5);
		strcat($$,$6);
		strcat($$,$7);
		strcat($$,$8); }
	| DEFEXPR2 ID LROUND ID COMMA ID RROUND LROUND Expression RROUND {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + strlen($6) + strlen($7) + strlen($8) + strlen($9) + strlen($10) + 2;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5);
		strcat($$," ");
		strcat($$,$6);
		strcat($$,$7);
		strcat($$,$8);
		strcat($$,$9);
		strcat($$,$10); }
	| DEFEXPR ID LROUND ID COMMA ID COMMA ID IDs RROUND LROUND Expression RROUND {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + strlen($6) + strlen($7) + strlen($8) + strlen($9) + strlen($10) + strlen($11) + strlen($12) + strlen($13) + 3;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5);
		strcat($$," ");
		strcat($$,$6);
		strcat($$,$7);
		strcat($$," ");
		strcat($$,$8);
		strcat($$,$9);
		strcat($$,$10);
		strcat($$,$11);
		strcat($$,$12);
		strcat($$,$13);
	};

MacroDefStatement : DEFSTMT0 ID LROUND RROUND LCURLY Statements RCURLY {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + strlen($6) + strlen($7) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5);
		strcat($$,$6);
		strcat($$,$7);
		
		defMacro($2, $6); }
	| DEFSTMT1 ID LROUND ID RROUND LCURLY Statements RCURLY {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + strlen($6) + strlen($7) + strlen($8) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5);
		strcat($$,$6);
		strcat($$,$7);
		strcat($$,$8); }
	| DEFSTMT2 ID LROUND ID COMMA ID RROUND LCURLY Statements RCURLY {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + strlen($6) + strlen($7) + strlen($8) + strlen($9) + strlen($10) + 2;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5);
		strcat($$," ");
		strcat($$,$6);
		strcat($$,$7);
		strcat($$,$8);
		strcat($$,$9);
		strcat($$,$10); }
	| DEFSTMT ID LROUND ID COMMA ID COMMA ID IDs RROUND LCURLY Statements RCURLY {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + strlen($6) + strlen($7) + strlen($8) + strlen($9) + strlen($10) + strlen($11) + strlen($12) + strlen($13) + 3;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5);
		strcat($$," ");
		strcat($$,$6);
		strcat($$,$7);
		strcat($$," ");
		strcat($$,$8);
		strcat($$,$9);
		strcat($$,$10);
		strcat($$,$11);
		strcat($$,$12);
		strcat($$,$13);
	};

Statements : {	$$ = (char*) malloc(sizeof(char));
				$$[0] = '\0'; }
	| Statement Statements {
		int len = strlen($1) + strlen($2);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
	};

Statement : LCURLY Statements RCURLY {
		int len = strlen($1) + strlen($2) + strlen($3) + 2;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,"\n");
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,"\n"); }
    | SYSOUT LROUND Expression RROUND SEMI {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5);
		strcat($$,"\n"); }
    | ID EQ Expression SEMI {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,"\n"); }
    | ID LBOX Expression RBOX EQ Expression SEMI {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + strlen($6) + strlen($7) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5);
		strcat($$,$6);
		strcat($$,$7);
		strcat($$,"\n"); }
    | IF LROUND Expression RROUND Statement {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + 2;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,"\n");
		strcat($$,$5);
		strcat($$,"\n"); }
    | IF LROUND Expression RROUND Statement ELSE Statement {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + strlen($6) + strlen($7) + 4;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,"\n");
		strcat($$,$5);
		strcat($$,"\n");
		strcat($$,$6);
		strcat($$," ");
		strcat($$,$7);
		strcat($$,"\n"); }
    | WHILE LROUND Expression RROUND Statement {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5);
		strcat($$,"\n"); }
    | ID LROUND RROUND SEMI {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4); 
		strcat($$,"\n"); }
    | ID LROUND Expression Expressions RROUND SEMI {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + strlen($6) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5);
		strcat($$,$6);
		strcat($$,"\n");
	};

Expressions : { $$ = (char*) malloc(sizeof(char));
				$$[0] = '\0'; }
	| COMMA Expression Expressions {
		int len = strlen($1) + strlen($2) + strlen($3) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$,$3);
	};

Expression : PrimaryExpression OP PrimaryExpression {
		int len = strlen($1) + strlen($2) + strlen($3);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3); }
    | PrimaryExpression LBOX PrimaryExpression RBOX {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4); }
    | PrimaryExpression DOT LENGTH {
		int len = strlen($1) + strlen($2) + strlen($3);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3); }
    | PrimaryExpression {
		int len = strlen($1);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1); }
    | PrimaryExpression DOT ID LROUND RROUND {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5); }
    | PrimaryExpression DOT ID LROUND Expression Expressions RROUND {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + strlen($6) + strlen($7);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5);
		strcat($$,$6);
		strcat($$,$7); }
    | ID LROUND RROUND {
		int macroNum = valMacro($1);
		int len = strlen(macroVal[macroNum]) + strlen($2) + strlen($3);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$2);
		strcat($$,macroVal[macroNum]);
		strcat($$,$3); }
    | ID LROUND Expression Expressions RROUND {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5);
	};

PrimaryExpression : INTEGER {
		int len = strlen($1);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1); }
    | TRUE {
		int len = strlen($1);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1); }
    | FALSE {
		int len = strlen($1);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1); }
    | ID {
		int len = strlen($1);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1); }
    | THIS {
		int len = strlen($1);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1); }
    | NEW INT LBOX Expression RBOX {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + strlen($5) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4);
		strcat($$,$5); }
    | NEW ID LROUND RROUND {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$,$3);
		strcat($$,$4); }
    | BANG Expression {
		int len = strlen($1) + strlen($2);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2); }
    | LROUND Expression RROUND {
		int len = strlen($1) + strlen($2) + strlen($3);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3);
	};

TypeIDs : { $$ = (char*) malloc(sizeof(char));
			$$[0] = '\0'; }
	| COMMA Type ID TypeIDs {
		int len = strlen($1) + strlen($2) + strlen($3) + strlen($4) + 2;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$," ");
		strcat($$,$3);
		strcat($$,$4);
	};

Type : INT LBOX RBOX {
		int len = strlen($1) + strlen($2) + strlen($3) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$,$2);
		strcat($$,$3); 
		strcat($$," "); }
    | BOOLEAN {
		int len = strlen($1) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," "); }
    | INT {
		int len = strlen($1) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1); 
		strcat($$," "); }
    | ID {
		int len = strlen($1) + 1;
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
	};

IDs : { $$ = (char*) malloc(sizeof(char));
		$$[0] = '\0'; }
	| COMMA ID IDs {
		int len = strlen($1) + strlen($2) + 1 + strlen($3);
		$$ = (char*) malloc((len + 1) * sizeof(char));
		$$[0] = '\0';
		strcat($$,$1);
		strcat($$," ");
		strcat($$,$2);
		strcat($$,$3);
	};

%% 

int yyerror(char *s)
{
	printf("//Failed to parse input code");
	return 0;
}

void defMacro(char* id,char* val){
	macroID[numMacros] = (char*)malloc(strlen(id)+1);
	strcpy(macroID[numMacros], id);
	macroVal[numMacros] = (char*)malloc(strlen(val)+1);
	strcpy(macroVal[numMacros], val);
	numMacros++;
}

int valMacro(char* id){
	for(int i = 0; i < numMacros; i++) {
		if(strcmp(macroID[i],id) == 0){		
			return i;
		}
	}
	return 0;
}

int main(int argc, char **argv)
{
	/* #ifdef YYDEBUG
    yydebug = 1;  
    #endif */
	yyparse();
	return 0;
}