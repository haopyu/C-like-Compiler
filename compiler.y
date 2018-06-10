<<<<<<< HEAD
%{
    #include "AST.h"
    #include "IR.h"
    yyerror(const char *s);  
    extern int yylex(void);
    AST *root;
%}

%union { int val_int; float val_float; String val_str; int type; AST * tree; }

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
%type <tree> unary_operator unary_expression type_specifier type_qualifier_list type_qualifier type_name translation_unit struct_declarator struct_declarator_list specifier_qualifier_list struct_declaration struct_declaration_list struct_or_union struct_or_union_specifier storage_class_specifier statement  shift_expression selection_statement relational_expression program primary_expression postfix_expression pointer parameter_declaration parameter_list parameter_type_list multiplicative_expression logical_or_expression logical_and_expression labeled_statement jump_statement iteration_statement initializer_list initializer init_declarator init_declarator_list inclusive_or_expression identifier_list function_specifier function_definition external_declaration expression_statement expression exclusive_or_expression equality_expression enumerator enumerator_list enum_specifier direct_abstract_declarator direct_declarator designator designator_list designation declaration_list declarator declaration_specifiers declaration constant_expression constant conditional_expression compound_statement cast_expression block_item block_item_list assignment_operator assignment_expression argument_expression_list and_expression additive_expression abstract_declarator

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
        root = make_node(NULL, PROGRAM, 1, $1);
        print_tree(root);
    }
    ;

constant
    : FLOAT_CONST  {
        value v;
        v.v.f = $1;
        v.type = "float";
        $$ = make_node(&v, CONSTANT, 0);
    }
    | INT_CONST { 
        value v;
        v.v.i = $1;
        v.type = "integer";
        $$ = make_node(&v, CONSTANT, 0);
    }
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
        $$ = make_node(NULL, FUNCTION_DEFINITION, 3, $1, $2, $3);
    }
    | declaration_specifiers declarator declaration_list compound_statement {
        $$ = make_node(NULL, FUNCTION_DEFINITION, 4, $1, $2, $3, $4);
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
        $$ = make_node(NULL, DECLARATION, 2, $1, $2);
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
        $$ = make_node(NULL, DIRECT_DECLARATOR, 1, $2);
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
    | direct_declarator LPAREN identifier_list RPAREN {
        $$ = make_node(NULL, DIRECT_DECLARATOR, 2, $1, $3);
    }
    | direct_declarator LPAREN RPAREN {
        $$ = make_node(NULL, DIRECT_DECLARATOR, 1, $1);
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
        v.v.s = $3;
        v.type = "identifier";
        $$ = make_node(&v, POSTFIX_EXPRESSION, 1, $1);
    }
    | postfix_expression PTR IDENTIFIER {
        value v;
        v.v.s = $3;
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
    : BIT_AND {
        value v;
        v.v.s = "&";
        v.type = "string";
        $$ = make_node(&v, UNARY_OPERATOR, 0);
    }
    | MUL {
        value v;
        v.v.s = "*";
        v.type = "string";
        $$ = make_node(&v, UNARY_OPERATOR, 0);
    }
    | ADD {
        value v;
        v.v.s = "+";
        v.type = "string";
        $$ = make_node(&v, UNARY_OPERATOR, 0);
    }
    | SUB {
        value v;
        v.v.s = "-";
        v.type = "string";
        $$ = make_node(&v, UNARY_OPERATOR, 0);
    }
    | NEGATION {
        value v;
        v.v.s = "~";
        v.type = "string";
        $$ = make_node(&v, UNARY_OPERATOR, 0);
    }
    | NOT {
        value v;
        v.v.s = "!";
        v.type = "string";
        $$ = make_node(&v, UNARY_OPERATOR, 0);
    }
    ;

cast_expression
    : unary_expression {
        $$ = make_node(NULL, CAST_EXPRESSION, 1, $1);
    }
    | LPAREN type_name RPAREN cast_expression {
        $$ = make_node(NULL, CAST_EXPRESSION, 2, $2, $4);
    }
    ;

multiplicative_expression
    : cast_expression {
        $$ = make_node(NULL, MULTIPLICATIVE_EXPRESSION, 1, $1);
    }
    | multiplicative_expression MUL cast_expression {
        $$ = make_node(NULL, MULTIPLICATIVE_EXPRESSION, 2, $1, $3);
    }
    | multiplicative_expression DIV cast_expression {
        $$ = make_node(NULL, MULTIPLICATIVE_EXPRESSION, 2, $1, $3);
    }
    | multiplicative_expression MOD cast_expression {
        $$ = make_node(NULL, MULTIPLICATIVE_EXPRESSION, 2, $1, $3);
    }
    ;

additive_expression
    : multiplicative_expression {
        $$ = make_node(NULL, ADDITIVE_EXPRESSION, 1, $1);
    }
    | additive_expression ADD multiplicative_expression {
        $$ = make_node(NULL, ADDITIVE_EXPRESSION, 2, $1, $3);
    }
    | additive_expression SUB multiplicative_expression {
        $$ = make_node(NULL, ADDITIVE_EXPRESSION, 2, $1, $3);
    }
    ;

shift_expression
    : additive_expression {
        $$ = make_node(NULL, SHIFT_EXPRESSION, 1, $1);
    }
    | shift_expression SHIFT_LEFT additive_expression {
        $$ = make_node(NULL, SHIFT_EXPRESSION, 2, $1, $3);
    }
    | shift_expression SHIFT_RIGHT additive_expression {
        $$ = make_node(NULL, SHIFT_EXPRESSION, 2, $1, $3);
    }
    ;

relational_expression
    : shift_expression {
        $$ = make_node(NULL, RELATIONAL_EXPRESSION, 1, $1);
    }
    | relational_expression LT shift_expression {
        $$ = make_node(NULL, RELATIONAL_EXPRESSION, 2, $1, $3);
    }
    | relational_expression GT shift_expression {
        $$ = make_node(NULL, RELATIONAL_EXPRESSION, 2, $1, $3);
    }
    | relational_expression LE shift_expression {
        $$ = make_node(NULL, RELATIONAL_EXPRESSION, 2, $1, $3);
    }
    | relational_expression GE shift_expression {
        $$ = make_node(NULL, RELATIONAL_EXPRESSION, 2, $1, $3);
    }
    ;

equality_expression
    : relational_expression {
        $$ = make_node(NULL, EQUALITY_EXPRESSION, 1, $1);
    }
    | equality_expression EQ relational_expression {
        $$ = make_node(NULL, EQUALITY_EXPRESSION, 2, $1, $3);
    }
    | equality_expression NE relational_expression {
        $$ = make_node(NULL, EQUALITY_EXPRESSION, 2, $1, $3);
    }
    ;

and_expression
    : equality_expression {
        $$ = make_node(NULL, AND_EXPRESSION, 1, $1);
    }
    | and_expression BIT_AND equality_expression {
        $$ = make_node(NULL, AND_EXPRESSION, 2, $1, $3);
    }
    ;
 
exclusive_or_expression
    : and_expression {
        $$ = make_node(NULL, EXCLUSIVE_OR_EXPRESSION, 1, $1);
    }
    | exclusive_or_expression BIT_XOR and_expression {
        $$ = make_node(NULL, EXCLUSIVE_OR_EXPRESSION, 2, $1, $3);
    }
    ;

inclusive_or_expression
    : exclusive_or_expression {
        $$ = make_node(NULL, INCLUSIVE_OR_EXPRESSION, 1, $1);
    }
    | inclusive_or_expression BIT_OR exclusive_or_expression {
        $$ = make_node(NULL, INCLUSIVE_OR_EXPRESSION, 2, $1, $3);
    }
    ;

logical_and_expression
    : inclusive_or_expression {
        $$ = make_node(NULL, LOGICAL_AND_EXPRESSION, 1, $1);
    }
    | logical_and_expression AND inclusive_or_expression {
        $$ = make_node(NULL, LOGICAL_AND_EXPRESSION, 2, $1, $3);
    }
    ;

logical_or_expression
    : logical_and_expression {
        $$ = make_node(NULL, LOGICAL_OR_EXPRESSION, 1, $1);
    }
    | logical_or_expression OR logical_and_expression {
        $$ = make_node(NULL, LOGICAL_OR_EXPRESSION, 2, $1, $3);
    }
    ;

conditional_expression
    : logical_or_expression {
        $$ = make_node(NULL, CONDITIONAL_EXPRESSION, 1, $1);
    }
    | logical_or_expression QM expression COLON conditional_expression {
        $$ = make_node(NULL, CONDITIONAL_EXPRESSION, 2, $1, $3);
    }
    ;

assignment_expression
    : conditional_expression {
        $$ = make_node(NULL, ASSIGNMENT_EXPRESSION, 1, $1);
    }
    | unary_expression assignment_operator assignment_expression {
        $$ = make_node(NULL, ASSIGNMENT_EXPRESSION, 2, $1, $3);
    }
    ;

assignment_operator
    : ASSIGN {
        value v;
        v.v.s = "=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | MUL_ASSIGN {
        value v;
        v.v.s = "*=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | DIV_ASSIGN {
        value v;
        v.v.s = "/=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | MOD_ASSIGN {
        value v;
        v.v.s = "%=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | ADD_ASSIGN {
        value v;
        v.v.s = "+=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | SUB_ASSIGN {
        value v;
        v.v.s = "-=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | SHIFT_LEFT_ASSIGN {
        value v;
        v.v.s = "<<=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | SHIFT_RIGHT_ASSIGN {
        value v;
        v.v.s = ">>=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | AND_ASSIGN {
        value v;
        v.v.s = "&=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | XOR_ASSIGN {
        value v;
        v.v.s = "^=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | OR_ASSIGN {
        value v;
        v.v.s = "|=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    ;

expression
    : assignment_expression {
        $$ = make_node(NULL, EXPRESSION, 1, $1);
    }
    | expression COMMA assignment_expression {
        $$ = make_node(NULL, EXPRESSION, 2, $1, $3);
    }
    ;

constant_expression
    : conditional_expression {
        $$ = make_node(NULL, CONSTANT_EXPRESSION, 1, $1);
    }
    ;

// statements

statement
    : compound_statement {
        $$ = make_node(NULL, STATEMENT, 1, $1);
    }
    | expression_statement {
        $$ = make_node(NULL, STATEMENT, 1, $1);
    }
    | selection_statement {
        $$ = make_node(NULL, STATEMENT, 1, $1);
    }
    | iteration_statement {
        $$ = make_node(NULL, STATEMENT, 1, $1);
    }
    | jump_statement {
        $$ = make_node(NULL, STATEMENT, 1, $1);
    }
    | labeled_statement {
        $$ = make_node(NULL, STATEMENT, 1, $1);
    }
    ;   

labeled_statement
    : IDENTIFIER COLON statement {
        value v;
        v.v.s = $1;
        v.type = "identifier";
        $$ = make_node(&v, LABELED_STATEMENT, 1, $3);
    }
    | CASE constant_expression COLON statement {
        $$ = make_node(NULL, LABELED_STATEMENT, 2, $2, $4);
    }
    | DEFAULT COLON statement {
        $$ = make_node(NULL, LABELED_STATEMENT, 1, $3);
    }
    ;

compound_statement
    : LBRACE RBRACE {
        $$ = NULL;
    }
    | LBRACE block_item_list RBRACE {
        $$ = make_node(NULL, COMPOUND_STATEMENT, 1, $2);
    }
    ;

block_item_list
    : block_item {
        $$ = make_node(NULL, BLOCK_ITEM_LIST, 1, $1);
    }
    | block_item_list block_item {
        $$ = make_node(NULL, BLOCK_ITEM_LIST, 2, $1, $2);
    }
    ;

block_item
    : declaration {
        $$ = make_node(NULL, BLOCK_ITEM, 1, $1);
    } 
    | statement {
        $$ = make_node(NULL, BLOCK_ITEM, 1, $1);
    }
    ;

expression_statement
    : expression SEMICOLON {
        $$ = make_node(NULL,EXPRESSION_STATEMENT, 1, $1);
    }
    | SEMICOLON
    ;
 
selection_statement
    : IF LPAREN expression RPAREN statement {
        $$ = make_node(NULL, SELECTION_STATEMENT, 2, $3, $5);
    }
    | IF LPAREN expression RPAREN statement ELSE statement {
        $$ = make_node(NULL, SELECTION_STATEMENT, 3, $3, $5, $7);
    }
    | SWITCH LPAREN expression RPAREN statement {
        $$ = make_node(NULL, SELECTION_STATEMENT, 2, $3, $5);
    }
    ;

iteration_statement
    : WHILE LPAREN expression RPAREN statement {
        $$ = make_node(NULL, ITERATION_STATEMENT, 2, $3, $5);
    }
    | DO statement WHILE LPAREN expression RPAREN {
        $$ = make_node(NULL, ITERATION_STATEMENT, 2, $2, $5);
    }
    | FOR LPAREN expression_statement expression_statement RPAREN statement {
        $$ = make_node(NULL, ITERATION_STATEMENT, 3, $3, $4, $6);
    }
    | FOR LPAREN expression_statement expression_statement expression RPAREN statement {
        $$ = make_node(NULL, ITERATION_STATEMENT, 4, $3, $4, $5, $7);
    }
    ;

jump_statement
    : CONTINUE SEMICOLON {
        $$ = make_node(NULL, JUMP_STATEMENT, 0);
    }
    | BREAK SEMICOLON {
        $$ = make_node(NULL, JUMP_STATEMENT, 0);
    }
    | RETURN SEMICOLON {
        $$ = make_node(NULL, JUMP_STATEMENT, 0);
    }
    | RETURN expression SEMICOLON {
        $$ = make_node(NULL, JUMP_STATEMENT, 1, $2);
    }
    | GOTO IDENTIFIER SEMICOLON {
        value v;
        v.v.s = $2;
        v.type = "identifier";
        $$ = make_node(&v, JUMP_STATEMENT, 0);
    }
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
    printf("parsing...\n");
    yyparse();   
    printf("parsing done.\n");
    translate(root);
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
=======
%{
    #include "AST.h"
    yyerror(const char *s);  
    extern int yylex(void);
    AST *root;
%}

%union { int val_int; float val_float; String val_str; int type; AST * tree; }

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
%type <tree> unary_operator unary_expression type_specifier type_qualifier_list type_qualifier type_name translation_unit struct_declarator struct_declarator_list specifier_qualifier_list struct_declaration struct_declaration_list struct_or_union struct_or_union_specifier storage_class_specifier statement  shift_expression selection_statement relational_expression program primary_expression postfix_expression pointer parameter_declaration parameter_list parameter_type_list multiplicative_expression logical_or_expression logical_and_expression labeled_statement jump_statement iteration_statement initializer_list initializer init_declarator init_declarator_list inclusive_or_expression identifier_list function_specifier function_definition external_declaration expression_statement expression exclusive_or_expression equality_expression enumerator enumerator_list enum_specifier direct_abstract_declarator direct_declarator designator designator_list designation declaration_list declarator declaration_specifiers declaration constant_expression constant conditional_expression compound_statement cast_expression block_item block_item_list assignment_operator assignment_expression argument_expression_list and_expression additive_expression abstract_declarator

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
        root = make_node(NULL, PROGRAM, 1, $1);
        print_tree(root);
    }
    ;

constant
    : FLOAT_CONST  {
        value v;
        v.v.f = $1;
        v.type = "float";
        $$ = make_node(&v, CONSTANT, 0);
    }
    | INT_CONST { 
        value v;
        v.v.i = $1;
        v.type = "integer";
        $$ = make_node(&v, CONSTANT, 0);
    }
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
        $$ = make_node(NULL, FUNCTION_DEFINITION, 3, $1, $2, $3);
    }
    | declaration_specifiers declarator declaration_list compound_statement {
        $$ = make_node(NULL, FUNCTION_DEFINITION, 4, $1, $2, $3, $4);
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
        $$ = make_node(NULL, DECLARATION, 2, $1, $2);
        printf("###$1type is: ", $1.value->type);
        printf("###$2type is: ", $2.value->type);
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
        $$ = make_node(NULL, DIRECT_DECLARATOR, 1, $2);
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
    | direct_declarator LPAREN identifier_list RPAREN {
        $$ = make_node(NULL, DIRECT_DECLARATOR, 2, $1, $3);
    }
    | direct_declarator LPAREN RPAREN {
        $$ = make_node(NULL, DIRECT_DECLARATOR, 1, $1);
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
        v.v.s = $3;
        v.type = "identifier";
        $$ = make_node(&v, POSTFIX_EXPRESSION, 1, $1);
    }
    | postfix_expression PTR IDENTIFIER {
        value v;
        v.v.s = $3;
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
    : BIT_AND {
        value v;
        v.v.s = "&";
        v.type = "string";
        $$ = make_node(&v, UNARY_OPERATOR, 0);
    }
    | MUL {
        value v;
        v.v.s = "*";
        v.type = "string";
        $$ = make_node(&v, UNARY_OPERATOR, 0);
    }
    | ADD {
        value v;
        v.v.s = "+";
        v.type = "string";
        $$ = make_node(&v, UNARY_OPERATOR, 0);
    }
    | SUB {
        value v;
        v.v.s = "-";
        v.type = "string";
        $$ = make_node(&v, UNARY_OPERATOR, 0);
    }
    | NEGATION {
        value v;
        v.v.s = "~";
        v.type = "string";
        $$ = make_node(&v, UNARY_OPERATOR, 0);
    }
    | NOT {
        value v;
        v.v.s = "!";
        v.type = "string";
        $$ = make_node(&v, UNARY_OPERATOR, 0);
    }
    ;

cast_expression
    : unary_expression {
        $$ = make_node(NULL, CAST_EXPRESSION, 1, $1);
    }
    | LPAREN type_name RPAREN cast_expression {
        $$ = make_node(NULL, CAST_EXPRESSION, 2, $2, $4);
    }
    ;

multiplicative_expression
    : cast_expression {
        $$ = make_node(NULL, MULTIPLICATIVE_EXPRESSION, 1, $1);
    }
    | multiplicative_expression MUL cast_expression {
        $$ = make_node(NULL, MULTIPLICATIVE_EXPRESSION, 2, $1, $3);
    }
    | multiplicative_expression DIV cast_expression {
        $$ = make_node(NULL, MULTIPLICATIVE_EXPRESSION, 2, $1, $3);
    }
    | multiplicative_expression MOD cast_expression {
        $$ = make_node(NULL, MULTIPLICATIVE_EXPRESSION, 2, $1, $3);
    }
    ;

additive_expression
    : multiplicative_expression {
        $$ = make_node(NULL, ADDITIVE_EXPRESSION, 1, $1);
    }
    | additive_expression ADD multiplicative_expression {
        $$ = make_node(NULL, ADDITIVE_EXPRESSION, 2, $1, $3);
    }
    | additive_expression SUB multiplicative_expression {
        $$ = make_node(NULL, ADDITIVE_EXPRESSION, 2, $1, $3);
    }
    ;

shift_expression
    : additive_expression {
        $$ = make_node(NULL, SHIFT_EXPRESSION, 1, $1);
    }
    | shift_expression SHIFT_LEFT additive_expression {
        $$ = make_node(NULL, SHIFT_EXPRESSION, 2, $1, $3);
    }
    | shift_expression SHIFT_RIGHT additive_expression {
        $$ = make_node(NULL, SHIFT_EXPRESSION, 2, $1, $3);
    }
    ;

relational_expression
    : shift_expression {
        $$ = make_node(NULL, RELATIONAL_EXPRESSION, 1, $1);
    }
    | relational_expression LT shift_expression {
        $$ = make_node(NULL, RELATIONAL_EXPRESSION, 2, $1, $3);
    }
    | relational_expression GT shift_expression {
        $$ = make_node(NULL, RELATIONAL_EXPRESSION, 2, $1, $3);
    }
    | relational_expression LE shift_expression {
        $$ = make_node(NULL, RELATIONAL_EXPRESSION, 2, $1, $3);
    }
    | relational_expression GE shift_expression {
        $$ = make_node(NULL, RELATIONAL_EXPRESSION, 2, $1, $3);
    }
    ;

equality_expression
    : relational_expression {
        $$ = make_node(NULL, EQUALITY_EXPRESSION, 1, $1);
    }
    | equality_expression EQ relational_expression {
        $$ = make_node(NULL, EQUALITY_EXPRESSION, 2, $1, $3);
    }
    | equality_expression NE relational_expression {
        $$ = make_node(NULL, EQUALITY_EXPRESSION, 2, $1, $3);
    }
    ;

and_expression
    : equality_expression {
        $$ = make_node(NULL, AND_EXPRESSION, 1, $1);
    }
    | and_expression BIT_AND equality_expression {
        $$ = make_node(NULL, AND_EXPRESSION, 2, $1, $3);
    }
    ;
 
exclusive_or_expression
    : and_expression {
        $$ = make_node(NULL, EXCLUSIVE_OR_EXPRESSION, 1, $1);
    }
    | exclusive_or_expression BIT_XOR and_expression {
        $$ = make_node(NULL, EXCLUSIVE_OR_EXPRESSION, 2, $1, $3);
    }
    ;

inclusive_or_expression
    : exclusive_or_expression {
        $$ = make_node(NULL, INCLUSIVE_OR_EXPRESSION, 1, $1);
    }
    | inclusive_or_expression BIT_OR exclusive_or_expression {
        $$ = make_node(NULL, INCLUSIVE_OR_EXPRESSION, 2, $1, $3);
    }
    ;

logical_and_expression
    : inclusive_or_expression {
        $$ = make_node(NULL, LOGICAL_AND_EXPRESSION, 1, $1);
    }
    | logical_and_expression AND inclusive_or_expression {
        $$ = make_node(NULL, LOGICAL_AND_EXPRESSION, 2, $1, $3);
    }
    ;

logical_or_expression
    : logical_and_expression {
        $$ = make_node(NULL, LOGICAL_OR_EXPRESSION, 1, $1);
    }
    | logical_or_expression OR logical_and_expression {
        $$ = make_node(NULL, LOGICAL_OR_EXPRESSION, 2, $1, $3);
    }
    ;

conditional_expression
    : logical_or_expression {
        $$ = make_node(NULL, CONDITIONAL_EXPRESSION, 1, $1);
    }
    | logical_or_expression QM expression COLON conditional_expression {
        $$ = make_node(NULL, CONDITIONAL_EXPRESSION, 2, $1, $3);
    }
    ;

assignment_expression
    : conditional_expression {
        $$ = make_node(NULL, ASSIGNMENT_EXPRESSION, 1, $1);
    }
    | unary_expression assignment_operator assignment_expression {
        $$ = make_node(NULL, ASSIGNMENT_EXPRESSION, 2, $1, $3);
    }
    ;

assignment_operator
    : ASSIGN {
        value v;
        v.v.s = "=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | MUL_ASSIGN {
        value v;
        v.v.s = "*=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | DIV_ASSIGN {
        value v;
        v.v.s = "/=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | MOD_ASSIGN {
        value v;
        v.v.s = "%=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | ADD_ASSIGN {
        value v;
        v.v.s = "+=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | SUB_ASSIGN {
        value v;
        v.v.s = "-=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | SHIFT_LEFT_ASSIGN {
        value v;
        v.v.s = "<<=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | SHIFT_RIGHT_ASSIGN {
        value v;
        v.v.s = ">>=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | AND_ASSIGN {
        value v;
        v.v.s = "&=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | XOR_ASSIGN {
        value v;
        v.v.s = "^=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    | OR_ASSIGN {
        value v;
        v.v.s = "|=";
        v.type = "string";
        $$ = make_node(&v, POSTFIX_EXPRESSION,0);
    }
    ;

expression
    : assignment_expression {
        $$ = make_node(NULL, EXPRESSION, 1, $1);
    }
    | expression COMMA assignment_expression {
        $$ = make_node(NULL, EXPRESSION, 2, $1, $3);
    }
    ;

constant_expression
    : conditional_expression {
        $$ = make_node(NULL, CONSTANT_EXPRESSION, 1, $1);
    }
    ;

// statements

statement
    : compound_statement {
        $$ = make_node(NULL, STATEMENT, 1, $1);
    }
    | expression_statement {
        $$ = make_node(NULL, STATEMENT, 1, $1);
    }
    | selection_statement {
        $$ = make_node(NULL, STATEMENT, 1, $1);
    }
    | iteration_statement {
        $$ = make_node(NULL, STATEMENT, 1, $1);
    }
    | jump_statement {
        $$ = make_node(NULL, STATEMENT, 1, $1);
    }
    | labeled_statement {
        $$ = make_node(NULL, STATEMENT, 1, $1);
    }
    ;   

labeled_statement
    : IDENTIFIER COLON statement {
        value v;
        v.v.s = $1;
        v.type = "identifier";
        $$ = make_node(&v, LABELED_STATEMENT, 1, $3);
    }
    | CASE constant_expression COLON statement {
        $$ = make_node(NULL, LABELED_STATEMENT, 2, $2, $4);
    }
    | DEFAULT COLON statement {
        $$ = make_node(NULL, LABELED_STATEMENT, 1, $3);
    }
    ;

compound_statement
    : LBRACE RBRACE
    | LBRACE block_item_list RBRACE {
        $$ = make_node(NULL, COMPOUND_STATEMENT, 1, $2);
    }
    ;

block_item_list
    : block_item {
        $$ = make_node(NULL, BLOCK_ITEM_LIST, 1, $1);
    }
    | block_item_list block_item {
        $$ = make_node(NULL, BLOCK_ITEM_LIST, 2, $1, $2);
    }
    ;

block_item
    : declaration {
        $$ = make_node(NULL, BLOCK_ITEM, 1, $1);
    } 
    | statement {
        $$ = make_node(NULL, BLOCK_ITEM, 1, $1);
    }
    ;

expression_statement
    : expression SEMICOLON {
        $$ = make_node(NULL,EXPRESSION_STATEMENT, 1, $1);
    }
    | SEMICOLON
    ;
 
selection_statement
    : IF LPAREN expression RPAREN statement {
        $$ = make_node(NULL, SELECTION_STATEMENT, 2, $3, $5);
    }
    | IF LPAREN expression RPAREN statement ELSE statement {
        $$ = make_node(NULL, SELECTION_STATEMENT, 3, $3, $5, $7);
    }
    | SWITCH LPAREN expression RPAREN statement {
        $$ = make_node(NULL, SELECTION_STATEMENT, 2, $3, $5);
    }
    ;

iteration_statement
    : WHILE LPAREN expression RPAREN statement {
        $$ = make_node(NULL, ITERATION_STATEMENT, 2, $3, $5);
    }
    | DO statement WHILE LPAREN expression RPAREN {
        $$ = make_node(NULL, ITERATION_STATEMENT, 2, $2, $5);
    }
    | FOR LPAREN expression_statement expression_statement RPAREN statement {
        $$ = make_node(NULL, ITERATION_STATEMENT, 3, $3, $4, $6);
    }
    | FOR LPAREN expression_statement expression_statement expression RPAREN statement {
        $$ = make_node(NULL, ITERATION_STATEMENT, 4, $3, $4, $5, $7);
    }
    ;

jump_statement
    : CONTINUE SEMICOLON {
        $$ = make_node(NULL, JUMP_STATEMENT, 0);
    }
    | BREAK SEMICOLON {
        $$ = make_node(NULL, JUMP_STATEMENT, 0);
    }
    | RETURN SEMICOLON {
        $$ = make_node(NULL, JUMP_STATEMENT, 0);
    }
    | RETURN expression SEMICOLON {
        $$ = make_node(NULL, JUMP_STATEMENT, 1, $2);
    }
    | GOTO IDENTIFIER SEMICOLON {
        value v;
        v.v.s = $2;
        v.type = "identifier";
        $$ = make_node(&v, JUMP_STATEMENT, 0);
    }
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
    printf("parsing...\n");
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
>>>>>>> 180b3b8b2b18337b8005ac05be1a40cd5a6fb3d7
}