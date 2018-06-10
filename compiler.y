%{
    #include "AST.h"
    yyerror(const char *s);  
    extern int yylex(void);
%}

%union { int val_int; float val_float; String val_str; int type; }

%token	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO 
%token  CONTINUE BREAK RETURN SIZEOF

%token	INT_CONST FLOAT_CONST IDENTIFIER STRING 

%token  ADD SUB MUL DIV BIT_XOR LPAREN RPAREN SEMICOLON ELLIPSIS
%token	SHIFT_RIGHT SHIFT_LEFT INC DEC PTR AND OR LE GE EQ NE
%token  LBRACE RBRACE COMMA COLON ASSIGN LBRACKET RBRACKET DOT
%token  BIT_AND NOT NEGATION MOD LT GT BIT_OR QM
%token  SHIFT_LEFT_ASSIGN SHIFT_RIGHT_ASSIGN AND_ASSIGN 
%token  MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN
%token	XOR_ASSIGN OR_ASSIGN
%token  TYPEDEF_NAME

%token	TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token	CONST RESTRICT VOLATILE
%token	BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token	STRUCT UNION ENUM

%type <val_int> INT_CONST 
%type <val_float> FLOAT_CONST
%type <val_str>  IDENTIFIER STRING
%type <type> INT FLOAT DOUBLE CHAR

%left COMMA
%right ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN SHIFT_LEFT_ASSIGN SHIFT_RIGHT_ASSIGN AND_ASSIGN 
%left OR
%left AND
%left BIT_OR
%left BIT_XOR
%left BIT_AND
%left EQ NE
%left LT GT LE GE
%left SHIFT_RIGHT SHIFT_LEFT
%left ADD SUB 
%left MUL DIV
%right NOT NEGATION
%left LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET DOT PTR
%right ELSE

%start program

%%  

program
    : translation_unit {
        AST *root = make_node(NULL, PROGRAM, 1, $1);
    }
    ;

constant
    : FLOAT_CONST  { printf("%s", $1->text); }
    | INT_CONST { printf("%s", $1->text); }
    ;

// external definitions

translation_unit
    : external_declaration {
        $$ = make_node(NULL, TRANSLATION_UNIT, 1, $1);
    }
    | translation_unit external_declaration {
        $$ = make_node(NULL, TRANSLATION_UNIT, 2, $1, $2);
    }
    ;

external_declaration
	: function_definition {
        $$ = make_node(NULL, EXTERNAL_DECLARATION, 1, $1);
    }
	| declaration { 
        $$ = make_node(NULL, EXTERNAL_DECLARATION, 1, $1);
    }
    ;

function_definition
    : declaration_specifiers declarator compound_statement {
        $$ = make_node(NULL, FUNCTION_DEFINITION, 4, $1, $2, $3, $4);
    }
    | declaration_specifiers declarator declaration_list compound_statement {
        $$ = make_node(NULL, FUNCTION_DEFINITION, 3, $1, $2, $3);
    }
    ; 

declaration_list
    : declaration {
        $$ = make_node(NULL, DECLARATION_LIST, 1, $1);
    }
    | declaration_list declaration {
        $$ = make_node(NULL, DECLARATION_LIST, 2, $1, $2);
    }
    ;

// declarations

declaration
	: declaration_specifiers SEMICOLON {
        $$ = make_node(NULL, DECLARATION, 1, $1);
    }
	| declaration_specifiers init_declarator_list SEMICOLON {
        $$ = make_node(NULL, DECLARATION_LIST, 2, $1, $2);
        // type check
    }
    ;

declaration_specifiers
    : type_specifier {
        $$ = make_node(NULL, DECLARATION_SPECIFIERS, 1, $1);
    }
    | type_specifier declaration_specifiers {
        $$ = make_node(NULL, DECLARATION_SPECIFIERS, 2, $1, $2);
    }
    | function_specifier {
        $$ = make_node(NULL, DECLARATION_SPECIFIERS, 1, $1);
    }
    | function_specifier declaration_specifiers {
        $$ = make_node(NULL, DECLARATION_SPECIFIERS, 2, $1, $2);
    }
    | storage_class_specifier {
        $$ = make_node(NULL, DECLARATION_SPECIFIERS, 1, $1);
    }
	| storage_class_specifier declaration_specifiers {
        $$ = make_node(NULL, DECLARATION_SPECIFIERS, 2, $1, $2);
    }
    | type_qualifier {  
        $$ = make_node(NULL, DECLARATION_SPECIFIERS, 1, $1);
    }
    | type_qualifier declaration_specifiers {
        $$ = make_node(NULL, DECLARATION_SPECIFIERS, 2, $1, $2);
    }
    ;

init_declarator_list
    : init_declarator {
        $$ = make_node(NULL, INIT_DECLARATOR_LIST, 1, $1);
    }
    | init_declarator_list COMMA init_declarator {  
        $$ = make_node(NULL, INIT_DECLARATOR_LIST, 2, $1, $3);
    }
    ;

init_declarator
    : declarator {
        $$ = make_node(NULL, INIT_DECLARATOR, 1, $1);
    }
    | declarator ASSIGN initializer {
        value v;
        v.v.s = "=";
        v.type = "string";
        $$ = make_node(&v, INIT_DECLARATOR, 2, $1, $3);
    }
    ;

storage_class_specifier
    : TYPEDEF {
        value v;
        v.v.s = "typedef";
        v.type = "string";
        $$ = make_node(&v, STORAGE_CLASS_SPECIFIER, 0);
    }
    | EXTERN {
        value v;
        v.v.s = "extern";
        v.type = "string";
        $$ = make_node(&v, STORAGE_CLASS_SPECIFIER, 0);
    }
    | STATIC {
        value v;
        v.v.s = "static";
        v.type = "string";
        $$ = make_node(&v, STORAGE_CLASS_SPECIFIER, 0);
    }
    | AUTO {
        value v;
        v.v.s = "auto";
        v.type = "string";
        $$ = make_node(&v, STORAGE_CLASS_SPECIFIER, 0);
    }
    | REGISTER {
        value v;
        v.v.s = "register";
        v.type = "string";
        $$ = make_node(&v, STORAGE_CLASS_SPECIFIER, 0);
    }
    ;

type_specifier 
    : VOID {
        value v;
        v.v.s = "void";
        v.type = "string";
        $$ = make_node(&v, TYPE_SPECIFIER, 0);
    }
    | INT {
        value v;
        v.v.s = "int";
        v.type = "string";
        $$ = make_node(&v, TYPE_SPECIFIER, 0);
    }
    | FLOAT {
        value v;
        v.v.s = "float";
        v.type = "string";
        $$ = make_node(&v, TYPE_SPECIFIER, 0);
    }
    | DOUBLE {
        value v;
        v.v.s = "double";
        v.type = "string";
        $$ = make_node(&v, TYPE_SPECIFIER, 0);
    }
    | CHAR {
        value v;
        v.v.s = "char";
        v.type = "string";
        $$ = make_node(&v, TYPE_SPECIFIER, 0);
    }
    | LONG {
        value v;
        v.v.s = "long";
        v.type = "string";
        $$ = make_node(&v, TYPE_SPECIFIER, 0);
    }
    | SHORT {
        value v;
        v.v.s = "short";
        v.type = "string";
        $$ = make_node(&v, TYPE_SPECIFIER, 0);
    }
    | SIGNED {
        value v;
        v.v.s = "signed";
        v.type = "string";
        $$ = make_node(&v, TYPE_SPECIFIER, 0);
    }
    | UNSIGNED {
        value v;
        v.v.s = "unsigned";
        v.type = "string";
        $$ = make_node(&v, TYPE_SPECIFIER, 0);
    }
    | BOOL {
        value v;
        v.v.s = "bool";
        v.type = "string";
        $$ = make_node(&v, TYPE_SPECIFIER, 0);
    }
    | struct_or_union_specifier {
        $$ = make_node(NULL, TYPE_SPECIFIER, 1, $1);
    }
    | enum_specifier {
        value v;
        v.v.s = "enum";
        v.type = "string";
        $$ = make_node(&v, TYPE_SPECIFIER, 1, $1);
    }
    | TYPEDEF_NAME {
        value v;
        v.v.s = "typdef_name";
        v.type = "string";
        $$ = make_node(&v, TYPE_SPECIFIER, 0);
    }
    ;

struct_or_union_specifier
    : struct_or_union IDENTIFIER LBRACE struct_declaration_list RBRACE {
        value v;
        v.v.s = $2;
        v.type = "identifier";
        $$ = make_node(&v, STRUCT_OR_UNION_SPECIFIER, 2, $1, $4);
    }
    | struct_or_union LBRACE struct_declaration_list RBRACE {
        $$ = make_node(NULL, STRUCT_OR_UNION_SPECIFIER, 2, $1, $3);
    }
    | struct_or_union IDENTIFIER {
        value v;
        v.v.s = $2;
        v.type = "identifier";
        $$ = make_node(&v, STRUCT_OR_UNION_SPECIFIER, 1, $1);
    }
    ;

struct_or_union
    : STRUCT {
        value v;
        v.v.s = "struct";
        v.type = "identifier";
        $$ = make_node(&v, STRUCT_OR_UNION, 0);
    }
    | UNION {
        value v;
        v.v.s = "union";
        v.type = "identifier";
        $$ = make_node(&v, STRUCT_OR_UNION, 0);
    }
    ;

struct_declaration_list
    : struct_declaration {
        $$ = make_node(NULL, STRUCT_DECLARATION_LIST, 1, $1);
    }
    | struct_declaration_list struct_declaration {
        $$ = make_node(NULL, STRUCT_DECLARATION_LIST, 2, $1, $2);
    }
    ;

struct_declaration
    : specifier_qualifier_list struct_declarator_list SEMICOLON {
        $$ = make_node(NULL, STRUCT_DECLARATION, 2, $1, $2);
    }
    ;

specifier_qualifier_list
    : type_specifier specifier_qualifier_list {
        $$ = make_node(NULL, SPECIFIER_QUALIFIER_LIST, 2, $1, $2);
    }
    | type_specifier {
        $$ = make_node(NULL, SPECIFIER_QUALIFIER_LIST, 1, $1);
    }
    | type_qualifier specifier_qualifier_list {
        $$ = make_node(NULL, SPECIFIER_QUALIFIER_LIST, 2, $1, $2);
    }
    | type_qualifier {
        $$ = make_node(NULL, SPECIFIER_QUALIFIER_LIST, 1, $1);
    }
    ;

struct_declarator_list
    : struct_declarator {
        $$ = make_node(NULL, STRUCT_DECLARATOR_LIST, 1, $1);
    }
    | struct_declarator_list COMMA struct_declarator {
        $$ = make_node(NULL, STRUCT_DECLARATOR_LIST, 2, $1, $3);
    }
    ;

struct_declarator
    : declarator {
        $$ = make_node(NULL, STRUCT_DECLARATOR, 1, $1);
    }
    | declarator COLON constant_expression {
        $$ = make_node(NULL, STRUCT_DECLARATOR, 2, $1, $3);
    }
    | COLON constant_expression {
        $$ = make_node(NULL, STRUCT_DECLARATOR, 1, $2);
    }
    ;

enum_specifier
    : ENUM IDENTIFIER LBRACE enumerator_list RBRACE {
        value v;
        v.v.s = $2;
        v.type = "identifier";
        $$ = make_node(&v, ENUM_SPECIFIER, 1, $4);
    }
    | ENUM LBRACE enumerator_list RBRACE {
        $$ = make_node(NULL, ENUM_SPECIFIER, 1, $3);
    }
    | ENUM IDENTIFIER LBRACE enumerator_list COMMA RBRACE {
        value v;
        v.v.s = $2;
        v.type = "identifier";
        $$ = make_node(&v, ENUM_SPECIFIER, 1, $4);
    }
    | ENUM LBRACE enumerator_list COMMA RBRACE {
        $$ = make_node(NULL, ENUM_SPECIFIER, 1, $3);
    }
    | ENUM IDENTIFIER {
        value v;
        v.v.s = $2;
        v.type = "identifier";
        $$ = make_node(&v, ENUM_SPECIFIER, 0);
    }
    ; 

enumerator_list
    : enumerator {
        $$ = make_node(NULL, ENUMERATOR_LIST, 1, $1);
    }
    | enumerator_list COMMA enumerator {
        $$ = make_node(NULL, ENUMERATOR_LIST, 2, $1, $3);
    }
    ;

enumerator
    : IDENTIFIER {
        value v;
        v.v.s = $1;
        v.type = "identifier";
        $$ = make_node(&v, ENUMERATOR, 0);
    }
    | IDENTIFIER ASSIGN constant_expression {
        value v;
        v.v.s = $1;
        v.type = "identifier";
        $$ = make_node(&v, ENUMERATOR, 0);
    }
    ;

type_qualifier
	: CONST {
        value v;
        v.v.s = "const";
        v.type = "string";
        $$ = make_node(&v, TYPE_QUALIFIER, 0);
    }
	| RESTRICT {
        value v;
        v.v.s = "restrict";
        v.type = "string";
        $$ = make_node(&v, TYPE_QUALIFIER, 0);
    }
	| VOLATILE {
        value v;
        v.v.s = "volatile";
        v.type = "string";
        $$ = make_node(&v, TYPE_QUALIFIER, 0);
    }
	;

function_specifier
    : INLINE {
        value v;
        v.v.s = "inline";
        v.type = "string";
        $$ = make_node(&v, FUNCTION_SPECIFIER, 0);
    }
    ;

declarator
    : direct_declarator {
        $$ = make_node(NULL, DECLARATOR, 1, $1);
    }
    | pointer direct_declarator {
        $$ = make_node(NULL, DECLARATOR, 2, $1, $2);
    }
    ;

direct_declarator
    : IDENTIFIER {
        value v;
        v.v.s = $1;
        v.type = "identifier";
        $$ = make_node(&v, DIRECT_DECLARATOR, 0);
    }
    | LPAREN declarator RPAREN {
        $$ = make_node(NULL, DIRECT_DECLARATOR, 1, $1);
    }
    | direct_declarator LBRACKET type_qualifier_list assignment_expression RBRACKET {
        $$ = make_node(NULL, DIRECT_DECLARATOR, 3, $1, $3, $4);
    }
    | direct_declarator LBRACKET type_qualifier_list RBRACKET {
        $$ = make_node(NULL, DIRECT_DECLARATOR, 2, $1, $3);
    }
    | direct_declarator LBRACKET STATIC type_qualifier_list assignment_expression RBRACKET {
        $$ = make_node(NULL, DIRECT_DECLARATOR, 3, $1, $4, $5);
    }
    | direct_declarator LBRACKET STATIC assignment_expression RBRACKET {
        $$ = make_node(NULL, DIRECT_DECLARATOR, 2, $1, $4);
    }
    | direct_declarator LBRACKET type_qualifier_list STATIC assignment_expression RBRACKET {
        $$ = make_node(NULL, DIRECT_DECLARATOR, 3, $1, $3, $5);
    }
    | direct_declarator LBRACKET type_qualifier_list MUL RBRACKET {
        $$ = make_node(NULL, DIRECT_DECLARATOR, 2, $1, $3);
    }
    | direct_declarator LBRACKET MUL RBRACKET {
        $$ = make_node(NULL, DIRECT_DECLARATOR, 1, $1);
    }
    | direct_declarator LPAREN parameter_type_list RPAREN {
        $$ = make_node(NULL, DIRECT_DECLARATOR, 2, $1, $3);
    }
    | direct_declarator LPAREN  identifier_list RPAREN {
        $$ = make_node(NULL, DIRECT_DECLARATOR, 2, $1, $3);
    }
    ;   

pointer
    : MUL type_qualifier_list {
        $$ = make_node(NULL, POINTER, 1, $2);
    }
    | MUL {

    }
    | MUL type_qualifier_list pointer {
        $$ = make_node(NULL, POINTER, 2, $2, $3);
    }
    | MUL pointer {
        $$ = make_node(NULL, POINTER, 1, $2);
    }
    ;

type_qualifier_list
	: type_qualifier {
        $$ = make_node(NULL, TYPE_QUALIFIER_LIST, 1, $1);
    }
	| type_qualifier_list type_qualifier {
        $$ = make_node(NULL, TYPE_QUALIFIER_LIST, 2, $1, $2);
    }
	;

parameter_type_list
	: parameter_list COMMA ELLIPSIS {
        $$ = make_node(NULL, PARAMETER_TYPE_LIST, 1, $1);
    }
	| parameter_list {
        $$ = make_node(NULL, PARAMETER_TYPE_LIST, 1, $1);
    }
	;
    
parameter_list
    : parameter_declaration {
        $$ = make_node(NULL, PARAMETER_LIST, 1, $1);
    }
    | parameter_list COMMA parameter_declaration {
        $$ = make_node(NULL, PARAMETER_LIST, 2, $1, $3);
    }
    ;

parameter_declaration
    : declaration_specifiers  declarator {
        $$ = make_node(NULL, PARAMETER_DECLARATION, 2, $1, $2);
        // type check
    }
    | declaration_specifiers abstract_declarator {
        $$ = make_node(NULL, PARAMETER_DECLARATION, 2, $1, $2);
    }
    | declaration_specifiers {
        $$ = make_node(NULL, PARAMETER_DECLARATION, 1, $1);
    }
    ;

identifier_list
    : IDENTIFIER {
        value v;
        v.v.s = $1;
        v.type = "identifier";
        $$ = make_node(&v, IDENTIFIER_LIST, 0);
    }
    | identifier_list COMMA IDENTIFIER {
        value v;
        v.v.s = $3;
        v.type = "identifier";
        $$ = make_node(&v, IDENTIFIER_LIST, 1, $1);
    }
    ;

type_name
	: specifier_qualifier_list abstract_declarator {
        $$ = make_node(NULL, TYPE_NAME, 2, $1, $2);
    }
    | specifier_qualifier_list {
        $$ = make_node(NULL, TYPE_NAME, 1, $1);
    }
	;

abstract_declarator
	: pointer direct_abstract_declarator {
        $$ = make_node(NULL, ABSTRACT_DECLARATOR, 2, $1, $2);
    }
    | direct_abstract_declarator {
        $$ = make_node(NULL, ABSTRACT_DECLARATOR, 1, $1);
    }
	| pointer {
        $$ = make_node(NULL, ABSTRACT_DECLARATOR, 1, $1);
    }
	;

direct_abstract_declarator
	: LPAREN abstract_declarator RPAREN {
        $$ = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 1, $2);
    }
    | direct_abstract_declarator LBRACKET assignment_expression RBRACKET {
        $$ = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 2, $1, $3);
    }
    | direct_abstract_declarator LBRACKET RBRACKET {
        $$ = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 1, $1);
    }
    | direct_abstract_declarator LBRACKET MUL RBRACKET {
        $$ = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 1, $1);
    }
	| direct_abstract_declarator LPAREN parameter_type_list RPAREN {
        $$ = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 2, $1, $3);
    }
    | direct_abstract_declarator LPAREN RPAREN {
        $$ = make_node(NULL, DIRECT_ABSTRACT_DECLARATOR, 1, $1);
    }
	;

initializer
    : assignment_expression {
        $$ = make_node(NULL, INITIALIZER, 1, $1);
    }
    | LBRACE initializer_list RBRACE {
        $$ = make_node(NULL, INITIALIZER, 1, $2);
    }
    | LBRACE initializer_list COMMA RBRACE {
        $$ = make_node(NULL, INITIALIZER, 1, $2);
    }
    ;

initializer_list
    : designation initializer {
        $$ = make_node(NULL, INITIALIZER_LIST, 2, $1, $2);
    }
    | initializer {
        $$ = make_node(NULL, INITIALIZER_LIST, 1, $1);
    }
    | initializer_list COMMA designation initializer {
        $$ = make_node(NULL, INITIALIZER_LIST, 3, $1, $3, $4);
    }
    | initializer_list COMMA initializer {
        $$ = make_node(NULL, INITIALIZER_LIST, 2, $1, $3);
    }
    ;

designation
    : designator_list ASSIGN {
        $$ = make_node(NULL, DESIGNATION, 1, $1);
    }
    ;

designator_list
    : designator {
        $$ = make_node(NULL, DESIGNATOR_LIST, 1, $1);
    }
    | declaration_list designator {
        $$ = make_node(NULL, DESIGNATOR_LIST, 2, $1, $2);
    }
    ;

designator
    : LBRACKET constant_expression RBRACKET {
        $$ = make_node(NULL, DESIGNATOR, 1, $2);
    }
    | DOT IDENTIFIER {
        value v;
        v.v.s = $2;
        v.type = "identifier";
        $$ = make_node(&v, DESIGNATOR, 0);
    }
    ;

// expressions

primary_expression
    : IDENTIFIER {
        value v;
        v.v.s = $1;
        v.type = "identifier";
        $$ = make_node(&v, PRIMARY_EXPRESSION, 0);
    }
    | constant {
        $$ = make_node(NULL, PRIMARY_EXPRESSION, 1, $1);
    }
    | STRING {
        value v;
        v.v.s = $1;
        v.type = "string";
        $$ = make_node(&v, PRIMARY_EXPRESSION, 0);
    }
    | LPAREN expression RPAREN {
        $$ = make_node(NULL, PRIMARY_EXPRESSION, 1, $2);
    }
    ;

postfix_expression
    : primary_expression {
        $$ = make_node(NULL, POSTFIX_EXPRESSION, 1, $1);
    }
    | postfix_expression LBRACKET expression RBRACKET {
        $$ = make_node(NULL, POSTFIX_EXPRESSION, 2, $1, $3);
    }
    | postfix_expression LPAREN RPAREN {
        $$ = make_node(NULL, POSTFIX_EXPRESSION, 1, $1);
    }
    | postfix_expression LPAREN argument_expression_list RPAREN {
        $$ = make_node(NULL, POSTFIX_EXPRESSION, 2, $1, $3);
    }
    | postfix_expression DOT IDENTIFIER {
        value v;
        v.v.s = $1;
        v.type = "identifier";
        $$ = make_node(&v, POSTFIX_EXPRESSION, 1, $1);
    }
    | postfix_expression PTR IDENTIFIER {
        value v;
        v.v.s = $1;
        v.type = "identifier";
        $$ = make_node(&v, POSTFIX_EXPRESSION, 1, $1);
    }
    | postfix_expression INC {
        $$ = make_node(NULL, POSTFIX_EXPRESSION, 1, $1);
    }
    | postfix_expression DEC {
        $$ = make_node(NULL, POSTFIX_EXPRESSION, 1, $1);
    }
    | LPAREN type_name RPAREN LBRACE initializer_list RBRACE {
        $$ = make_node(NULL, POSTFIX_EXPRESSION, 2, $2, $5);
    }
	| LPAREN type_name RPAREN LBRACE initializer_list COMMA RBRACE {
        $$ = make_node(NULL, POSTFIX_EXPRESSION, 2, $2, $5);
    }
    ;

argument_expression_list
    : assignment_expression {
        $$ = make_node(NULL, ARGUMENT_EXPRESSION_LIST, 1, $1);
    }
    | argument_expression_list COMMA assignment_expression {
        $$ = make_node(NULL, ARGUMENT_EXPRESSION_LIST, 2, $1, $3);
    }
    ;

unary_expression
    : postfix_expression {
        $$ = make_node(NULL, UNARY_EXPRESSION, 1, $1);
    }
    | INC unary_expression {
        $$ = make_node(NULL, UNARY_EXPRESSION, 1, $2);
    }
    | DEC unary_expression {
        $$ = make_node(NULL, UNARY_EXPRESSION, 1, $2);
    }
    | unary_operator cast_expression {
        $$ = make_node(NULL, UNARY_EXPRESSION, 2, $1, $2);
    }
    | SIZEOF unary_expression {
        $$ = make_node(NULL, UNARY_EXPRESSION, 1, $2);
    }
    | SIZEOF LPAREN type_name RPAREN {
        $$ = make_node(NULL, UNARY_EXPRESSION, 1, $3);
    }
    ;

unary_operator
    : BIT_AND
    | MUL
    | ADD
    | SUB
    | NEGATION
    | NOT
    ;

cast_expression
    : unary_expression {
        
    }
    | LPAREN type_name RPAREN cast_expression
    ;

multiplicative_expression
    : cast_expression
    | multiplicative_expression MUL cast_expression
    | multiplicative_expression DIV cast_expression
    | multiplicative_expression MOD cast_expression
    ;

additive_expression
    : multiplicative_expression
    | additive_expression ADD multiplicative_expression
    | additive_expression SUB multiplicative_expression
    ;

shift_expression
    : additive_expression
    | shift_expression SHIFT_LEFT additive_expression
    | shift_expression SHIFT_RIGHT additive_expression
    ;

relational_expression
    : shift_expression
    | relational_expression LT shift_expression
    | relational_expression GT shift_expression
    | relational_expression LE shift_expression
    | relational_expression GE shift_expression
    ;

equality_expression
    : relational_expression
    | equality_expression EQ relational_expression
    | equality_expression NE relational_expression
    ;

and_expression
    : equality_expression
    | and_expression BIT_AND equality_expression
    ;
 
exclusive_or_expression
    : and_expression
    | exclusive_or_expression BIT_XOR and_expression
    ;

inclusive_or_expression
    : exclusive_or_expression
    | inclusive_or_expression BIT_OR exclusive_or_expression
    ;

logical_and_expression
    : inclusive_or_expression
    | logical_and_expression AND inclusive_or_expression
    ;

logical_or_expression
    : logical_and_expression
    | logical_or_expression OR logical_and_expression
    ;

conditional_expression
    : logical_or_expression
    | logical_or_expression QM expression COLON conditional_expression
    ;

assignment_expression
    : conditional_expression
    | unary_expression assignment_operator assignment_expression
    ;

assignment_operator
    : ASSIGN
    | MUL_ASSIGN
    | DIV_ASSIGN
    | MOD_ASSIGN
    | ADD_ASSIGN
    | SUB_ASSIGN
    | SHIFT_LEFT_ASSIGN
    | SHIFT_RIGHT_ASSIGN
    | AND_ASSIGN
    | XOR_ASSIGN
    | OR_ASSIGN
    ;

expression
    : assignment_expression
    | expression COMMA assignment_expression
    ;

constant_expression
    : conditional_expression
    ;

// statements

statement
    : compound_statement
    | expression_statement
    | selection_statement
    | iteration_statement
    | jump_statement
    | labeled_statement
    ;   

labeled_statement
    : IDENTIFIER COLON statement
    | CASE constant_expression COLON statement
    | DEFAULT COLON statement
    ;

compound_statement
    : LBRACE RBRACE
    | LBRACE block_item_list RBRACE
    ;

block_item_list
    : block_item
    | block_item_list block_item
    ;

block_item
    : declaration
    | statement
    ;

expression_statement
    : expression SEMICOLON
    | SEMICOLON
    ;
 
selection_statement
    : IF LPAREN expression RPAREN statement
    | IF LPAREN expression RPAREN statement ELSE statement
    | SWITCH LPAREN expression RPAREN statement
    ;

iteration_statement
    : WHILE LPAREN expression RPAREN statement
    | DO statement WHILE LPAREN expression RPAREN
    | FOR LPAREN expression_statement expression_statement RPAREN statement
    | FOR LPAREN expression_statement expression_statement expression RPAREN statement
    ;

jump_statement
    : CONTINUE SEMICOLON
    | BREAK SEMICOLON
    | RETURN SEMICOLON
    | RETURN expression SEMICOLON
    | GOTO IDENTIFIER SEMICOLON
    ;


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