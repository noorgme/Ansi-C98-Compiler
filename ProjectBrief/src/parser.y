%code requires{
#include <stdio.h>
#include <string.h>
#include "ast.hpp"

#include <cassert>

extern const ASTNode *g_root;
extern FILE *yyin;

int yylex(void);
void yyerror(const char *);

}


%union {
  ASTNode *node;
  int number;
  std::string* string;
  Type* type_;
  makeScope* scoper;
  NodeList* listptr;
  DeclList* declList;
  initDeclarator* initDecl;
  double floatlit;
  char c;

}

%token INT_LITERAL FLOAT_LITERAL HEX_LITERAL

%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME 

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

/* got these type identifiers from Simon-Staal for reference, but have modified the types themselves*/

%type <node> ROOT translation_unit

%type <node> primary_expression postfix_expression unary_expression
%type <node> cast_expression multiplicative_expression additive_expression shift_expression
%type <node> relational_expression equality_expression and_expression
%type <node> exclusive_or_expression inclusive_or_expression logical_and_expression
%type <node> logical_or_expression conditional_expression assignment_expression
%type <node> expression constant_expression

%type <node> declaration
%type <type_> declaration_specifiers type_specifier
%type <initDecl> init_declarator init_declarator_list
%type <declList> parameter_list parameter_declaration parameter_type_list
%type <node> struct_declaration
%type <node> struct_declarator declarator
%type <node> enum_specifier enumerator direct_declarator pointer

%type <node> type_name abstract_declarator direct_abstract_declarator
%type <node> initializer statement labeled_statement 

%type <node> expression_statement selection_statement iteration_statement
%type <node> jump_statement external_declaration function_definition

%type <node> struct_declaration_list argument_expression_list
%type <node> specifier_qualifier_list struct_declarator_list
%type <node> enumerator_list
%type <node> identifier_list initializer_list
%type <listptr> declaration_list statement_list

%type <c> MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN assignment_operator LE_OP

%type <number> INT_LITERAL HEX_LITERAL
%type <floatlit> FLOAT_LITERAL
%type <string> IDENTIFIER


%type <node> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN
%type <scoper> compound_statement

%start ROOT


%%

ROOT:translation_unit {g_root = $1;}

translation_unit
	: external_declaration {$$ = $1;}
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement { $$ = new FunctionDefinition(FunctionDeclaration($1, std::move($2)), $3);}
	| declarator declaration_list compound_statement
	| declarator compound_statement
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier { $$ = $1; }
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

primary_expression
	: IDENTIFIER {$$ = new Identifier(*$1);}
	| INT_LITERAL {$$ = new IntLiteral($1);}
	| HEX_LITERAL {$$ = new IntLiteral($1);}
	| FLOAT_LITERAL {$$ = new FloatLiteral($1);}
	| STRING_LITERAL
	| '(' expression ')' {$$=$2;}
	;

postfix_expression
	: primary_expression { $$ = $1; }
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression { $$ = $1; }

	| INC_OP unary_expression 
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression {$$ = new SizeOf($2);}
	| SIZEOF '(' type_name ')' {$$ = new SizeOf($3);}
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression { $$ = $1; }
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression { $$ = $1; }
	| multiplicative_expression '*' cast_expression {$$ = new BinaryOperator(BinaryOperator::MULTIPLY, $1, $3);}
	| multiplicative_expression '/' cast_expression {$$ = new BinaryOperator(BinaryOperator::DIVIDE, $1, $3); }
	| multiplicative_expression '%' cast_expression {$$ = new BinaryOperator(BinaryOperator::MODULO, $1, $3); }
	;

additive_expression
	: multiplicative_expression { $$ = $1; }
	| additive_expression '+' multiplicative_expression {$$ = new BinaryOperator(BinaryOperator::ADD, $1, $3); }
	| additive_expression '-' multiplicative_expression {$$ = new BinaryOperator(BinaryOperator::SUBTRACT, $1, $3); }
	;

shift_expression
	: additive_expression { $$ = $1; }
	| shift_expression LEFT_OP additive_expression {$$ = new BinaryOperator(BinaryOperator::LEFT_SHIFT, $1, $3); }
	| shift_expression RIGHT_OP additive_expression {$$ = new BinaryOperator(BinaryOperator::RIGHT_SHIFT, $1, $3); }
	;

relational_expression
	: shift_expression { $$ = $1; }
	| relational_expression '<' shift_expression {$$ = new BinaryOperator(BinaryOperator::LESS_THAN, $1, $3); }
	| relational_expression '>' shift_expression {$$ = new BinaryOperator(BinaryOperator::GREATER_THAN, $1, $3); }
	| relational_expression LE_OP shift_expression {$$ = new BinaryOperator(BinaryOperator::LESS_EQ, $1, $3); }
	| relational_expression GE_OP shift_expression {$$ = new BinaryOperator(BinaryOperator::GREATER_EQ, $1, $3); }
	;

equality_expression
	: relational_expression { $$ = $1; }
	| equality_expression EQ_OP relational_expression {$$ = new BinaryOperator(BinaryOperator::EQUAL, $1, $3); }
	| equality_expression NE_OP relational_expression {$$ = new BinaryOperator(BinaryOperator::NEQUAL, $1, $3); }
	;

and_expression
	: equality_expression { $$ = $1; }
	| and_expression '&' equality_expression {$$ = new BinaryOperator(BinaryOperator::AND, $1, $3); }
	;

exclusive_or_expression
	: and_expression { $$ = $1; }
	| exclusive_or_expression '^' and_expression {$$ = new BinaryOperator(BinaryOperator::XOR, $1, $3); }
	;

inclusive_or_expression
	: exclusive_or_expression { $$ = $1; }
	| inclusive_or_expression '|' exclusive_or_expression {$$ = new BinaryOperator(BinaryOperator::OR, $1, $3); }
	;

logical_and_expression
	: inclusive_or_expression { $$ = $1; }
	| logical_and_expression AND_OP inclusive_or_expression {$$ = new BinaryOperator(BinaryOperator::LOGICAL_AND, $1, $3); }
	;

logical_or_expression
	: logical_and_expression { $$ = $1; }
	| logical_or_expression OR_OP logical_and_expression {$$ = new BinaryOperator(BinaryOperator::LOGICAL_OR, $1, $3); }
	;

conditional_expression
	: logical_or_expression { $$ = $1; }
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression { $$ = $1; }
	| unary_expression assignment_operator assignment_expression {$$ = new Assign($1, $2, $3);}
	;

assignment_operator
	: '=' {$$ = '=' ;}
	| MUL_ASSIGN {$$ = '*';}
	| DIV_ASSIGN  {$$ = '/';}
	| MOD_ASSIGN  {$$ = '%'; }
	| ADD_ASSIGN {$$ = '+';}
	| SUB_ASSIGN  {$$ = '-';}
	| LEFT_ASSIGN  {$$ = '<';}
	| RIGHT_ASSIGN {$$ = '>';}
	| AND_ASSIGN  {$$ = '&';}
	| XOR_ASSIGN  {$$ = 'x';}
	| OR_ASSIGN  {$$ = '|';}
	| LE_OP {$$ = 'l';}  	//!!!!!!	//is this supposed to be here? implmented in binary op?
	;

expression
	: assignment_expression { $$ = $1; }
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';' 
	| declaration_specifiers init_declarator_list ';' {$$ = new varDeclarator($1, $2);}
	;

init_declarator_list
	: init_declarator {$$ = $1;}
	| init_declarator_list ',' init_declarator {$$ = $1;}
	;

init_declarator
	: declarator {std::cout << "initDeclarator($1, nullptr)" << std::endl; $$ = new initDeclarator($1, nullptr);}
	| declarator '=' initializer {$$ = new initDeclarator($1, $3);}
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR {$$ = new Type(Type::CHAR);}
	| SHORT
	| INT {$$ = new Type(Type::INT);}
	| LONG
	| FLOAT {$$ = new Type(Type::FLOAT);}
	| DOUBLE {$$ = new Type(Type::DOUBLE);}
	| SIGNED
	| UNSIGNED {$$ = new Type(Type::UNSIGNED_INT);}
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier {$$=$1;}
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST
	| VOLATILE
	;

declarator
	: pointer direct_declarator
	| direct_declarator {$$=$1;}
	;

direct_declarator
	: IDENTIFIER { $$ = new Identifier(*$1);}
	| '(' declarator ')'
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')' {$$ = new FuncWithArgs($1, $3); }
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')' { $$ = $1; } 
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list {$$ = $1;}
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration {$$=$1;}
	| parameter_list ',' parameter_declaration {$$ = appendArgList($1, $3);}
	;

parameter_declaration
	: declaration_specifiers declarator {$$ = makeArgList(new varDeclarator($1, new initDeclarator($2, nullptr)));}
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list {$$=$1;}
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression {$$=$1;}
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer {$$=$1;}
	| initializer_list ',' initializer
	;

statement
	: labeled_statement { $$ = $1; }
	| compound_statement { $$ = $1; }
	| expression_statement {$$=$1;}
	| selection_statement { $$ = $1; }
	| iteration_statement { $$ = $1; }
	| jump_statement {$$ = $1;}
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}' { $$ = new makeScope(new NodeList(), new NodeList()); }
	| '{' statement_list '}' { $$ = new makeScope(new NodeList(), $2); }
	| '{' declaration_list '}' { $$ = new makeScope($2, new NodeList()); }
	| '{' declaration_list statement_list '}' { $$ = new makeScope($2, $3); }
	;


declaration_list
	: declaration {$$ = makeList($1); }
	| declaration_list declaration {$$ = appendList($1, $2);}
	;

statement_list
	: statement {$$ = makeList($1); } /*make a new statement class instance, add to some global vector (scope?). this vector will be passed up to compound statement as $2 */
	| statement_list statement {$$ = appendList($1, $2);}
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';' {$$ = new Return($2);} 
	;

%%

const ASTNode *g_root; // Definition of variable (to match declaration earlier)

const ASTNode *parseAST(){
	g_root=0;
	yyparse();
	return g_root;
	
};

