%{
	#include "AST.h"
    #include "compiler.tab.h"
    extern yyerror(const char *s); 
    int yywrap(void);  
    int yylex(void);
%}

%option yylineno

INT_SUF                    (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
FLOAT_SUF                  (f|F|l|L)
CHA_PRF                    (u8|u|U|L)
ES                         (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))
STR_PRF                    (u8|u|U|L)
EXP                        [eE][+-]?[0-9]+ 

%%

"/*"                       { annotation(); }
"//".*                     { /* annotation */ }

"auto"					   { return AUTO ; }
"break"					   { return BREAK; }
"case"					   { return CASE; }
"char"					   { yylval.type = CHAR; return CHAR; }
"const"					   { return CONST; }
"continue"				   { return CONTINUE; }
"default"				   { return DEFAULT; }
"do"					   { return DO; }
"double"				   { yylval.type = DOUBLE; return DOUBLE; }
"else"					   { return ELSE; }
"enum"					   { return ENUM; }
"extern"				   { return EXTERN; }
"float"					   { yylval.type = FLOAT; return FLOAT; }
"for"					   { return FOR; }
"goto"					   { return GOTO; }
"if"					   { return IF; }
"inline"				   { return INLINE; }
"int"					   { yylval.type = INT; return INT; }
"long"					   { yylval.type = LONG; return LONG; }
"register"				   { return REGISTER; }
"restrict"				   { return RESTRICT; }
"return"				   { return RETURN; }
"short"					   { yylval.type = SHORT; return SHORT; }
"signed"				   { return SIGNED; }
"sizeof"				   { return SIZEOF; }
"static"			       { return STATIC; }
"struct"				   { return STRUCT; }
"switch"				   { return SWITCH; }
"typedef"				   { return TYPEDEF; }
"union"					   { return UNION; }
"unsigned"				   { return UNSIGNED; }
"void"					   { yylval.type = VOID; return VOID; }
"volatile"				   { return VOLATILE; }
"while"					   { return WHILE; }
"_Bool"					   { yylval.type = BOOL; return BOOL; }

[1-9][0-9]*{INT_SUF}?             { yylval.val = NewNode(yytext); return INT_CONST; /* decimal */ }
0[xX][a-fA-F0-9]+{INT_SUF}?       { yylval.val = NewNode(yytext); return INT_CONST; /* hexadecimal */ }
0[0-7]*{INT_SUF}?                 { yylval.val = NewNode(yytext); return INT_CONST; /* octal */ }
{CHA_PRF}?"'"([^'\\\n]|{ES})+"'"  { yylval.val = NewNode(yytext); return INT_CONST; /* char */ }

[0-9]*[.][0-9]+{EXP}?{FLOAT_SUF}? { yylval.val = NewNode(yytext); return FLOAT_CONST; }
[0-9]+[.]{EXP}?{FLOAT_SUF}?       { yylval.val = NewNode(yytext); return FLOAT_CONST; }
[0-9]+{EXP}{FLOAT_SUF}?           { yylval.val = NewNode(yytext); return FLOAT_CONST; }

[a-zA-Z_][0-9a-zA-Z_]*            { yylval.val = NewNode(yytext); return IDENTIFIER; }
({STR_PRF}?\"[^"\\\n]*\")+        { yylval.val = NewNode(yytext); return STRING; }

"..."					   ATOMIC{ return ELLIPSIS; }
"+"                        { return ADD; }
"-"                        { return SUB; }
"*"                        { return MUL; }
"/"                        { return DIV; }
"^"                        { return BIT_XOR; }
"("                        { return LPAREN; }
")"                        { return RPAREN; }
";"                        { return SEMICOLON;}
">>="					   { return SHIFT_RIGHT_ASSIGN; }
"<<="					   { return SHIFT_LEFT_ASSIGN; }
"+="					   { return ADD_ASSIGN; }
"-="					   { return SUB_ASSIGN; }
"*="					   { return MUL_ASSIGN; }
"/="					   { return DIV_ASSIGN; }
"%="					   { return MOD_ASSIGN; }
"&="					   { return AND_ASSIGN; }
"^="					   { return XOR_ASSIGN; }
"|="					   { return OR_ASSIGN; }
">>"					   { return SHIFT_RIGHT; }
"<<"					   { return SHIFT_LEFT; }
"++"					   { return INC; }
"--"					   { return DEC; }
"->"					   { return PTR; }
"&&"				       { return AND; }
"||"				       { return OR; }
"<="				       { return LE; }
">="					   { return GE; }
"=="					   { return EQ; }
"!="					   { return NE; }
"{"|"<%"			       { return LBRACE; }
"}"|"%>"				   { return RBRACE; }
","					       { return COMMA; }
":"					       { return COLON; }
"="					       { return ASSIGN; }
"["|"<:"				   { return LBRACKET; }
"]"|":>"				   { return RBRACKET; }
"."				       	   { return DOT; }
"&"					       { return BIT_AND; }
"!"					       { return NOT; }
"~"					       { return NEGATION; }
"%"					       { return MOD; }
"<"					       { return LT; }
">"					       { return GT; }
"|"					       { return BIT_OR; }
"?"					       { return QM; }

[\t" "\n\f\v]              { /* blank */ }
.                          { /* discard others */ }

%%

int yywrap() { return 1; }

void annotation() {
    char c;

	while ((c = input()) != '\0') {
		if (c == '*') {
			while ((c = input()) == '*');
			if (c == '/') return;
			if (c == '\0') break;
		}
	}
	yyerror("Unclosed annotation!\n");
}