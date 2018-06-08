%{
    #include "AST.h"
    yyerror(const char *s);  
    extern int yylex(void);
%}

%union { AST* val; int type; }

%token	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO 
%token  CONTINUE BREAK RETURN SIZEOF

%token	INT_CONST FLOAT_CONST IDENTIFIER STRING 

%token  ADD SUB MUL DIV POWER LPAREN RPAREN SEMICOLON
%token	SHIFT_RIGHT SHIFT_LEFT INC DEC PTR AND OR LE GE EQ NE
%token  LBRACE RBRACE COMMA COLON ASSIGN LBRACKET RBRACKET DOT
%token  BIT_AND NOT NEGATION MOD LT GT BIT_OR QM
%token  SHIFT_LEFT_ASSIGN SHIFT_RIGHT_ASSIGN AND_ASSIGN 
%token  MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN
%token	XOR_ASSIGN OR_ASSIGN

%token	TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token	CONST RESTRICT VOLATILE
%token	BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token	STRUCT UNION ENUM

%type <val> IDENTIFIER FLOAT_CONST INT_CONST STRING
%type <type> INT FLOAT DOUBLE CHAR

%right ASSIGN
%left LT GT
%left ADD SUB 
%left MUL DIV
%left UMINUS
%right POWER NOT

%start program

%%

program
    : external_declaration
    | program external_declaration
    ;

external_declaration
	: function_definition
	| declaration
    ;

function_definition
    : type_specifier declarator
    ;

type_specifier 
    : VOID
    | INT { printf("%d", $1); }
    | FLOAT { printf("%d", $1); }
    | DOUBLE { printf("%d", $1); }
    | CHAR { printf("%d", $1); }
    | LONG
    | SHORT
    | SIGNED
    | UNSIGNED
    ;

declarator
    : pointer direct_declarator
    | direct_declarator

pointer
    : MUL
    | MUL pointer

direct_declarator
    : IDENTIFIER

    ;

declaration
    : type_specifier IDENTIFIER SEMICOLON { printf("%s", $2->text); }
    | type_specifier IDENTIFIER ASSIGN constant SEMICOLON { printf("%s", $2->text); }
    ; 

constant
    : FLOAT_CONST  { printf("%s", $1->text); }
    | INT_CONST { printf("%s", $1->text); }
    | STRING { printf("%s", $1->text); }

%%

int main(int argc, char *argv[])
{
    extern FILE *yyin, *yyout;
    char output[256];
    yyin = fopen(argv[1], "r");
    sscanf(argv[1], "%s", output);
    strcat(output, ".out");
    yyout = fopen(output, "w");
    yyparse();
    fclose(yyin);
    fclose(yyout);
    return 0;
}
yyerror(const char *s)
{
    // fflush(stdout);
	// fprintf(stderr, "\033[1m\033[31m");
	// fprintf(stderr, "*** %d: %s near '%s'\n", yylineno, s, yytext);
	// fprintf(stderr, "\033[0m");
}