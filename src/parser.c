#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 391
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 58

enum ts_symbol_identifiers {
  anon_sym_generics = 1,
  anon_sym_COMMA = 2,
  anon_sym_enum = 3,
  anon_sym_EQ = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_record = 7,
  anon_sym_export = 8,
  anon_sym_import = 9,
  anon_sym_module = 10,
  anon_sym_define = 11,
  anon_sym_test = 12,
  anon_sym_for = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_COLON_EQ = 16,
  anon_sym_repeat = 17,
  anon_sym_until = 18,
  anon_sym_while = 19,
  anon_sym_var = 20,
  anon_sym_if = 21,
  anon_sym_then = 22,
  anon_sym_elsif = 23,
  anon_sym_else = 24,
  anon_sym_from = 25,
  anon_sym_to = 26,
  anon_sym_constants = 27,
  anon_sym_SEMI = 28,
  anon_sym_COLON = 29,
  anon_sym_variables = 30,
  anon_sym_not = 31,
  anon_sym_and = 32,
  anon_sym_or = 33,
  anon_sym_PLUS = 34,
  anon_sym_DASH = 35,
  anon_sym_STAR = 36,
  anon_sym_SLASH = 37,
  anon_sym_mod = 38,
  anon_sym_LT = 39,
  anon_sym_LT_EQ = 40,
  anon_sym_GT_EQ = 41,
  anon_sym_GT = 42,
  anon_sym_LT_GT = 43,
  sym_integer = 44,
  sym_float = 45,
  sym_string = 46,
  sym_character = 47,
  anon_sym_integer = 48,
  anon_sym_real = 49,
  anon_sym_string = 50,
  anon_sym_array = 51,
  anon_sym_of = 52,
  anon_sym_boolean = 53,
  sym_refersTo = 54,
  aux_sym_comment_token1 = 55,
  sym_identifier = 56,
  anon_sym_DOT = 57,
  sym_true = 58,
  sym_false = 59,
  sym__newline = 60,
  sym__indent = 61,
  sym__dedent = 62,
  sym_program = 63,
  sym_generics = 64,
  sym_enum = 65,
  sym_record_item = 66,
  sym_record = 67,
  sym_export = 68,
  sym__multiple_import = 69,
  sym_import = 70,
  sym_module = 71,
  sym_function_definition = 72,
  sym__function_header = 73,
  sym_function_header = 74,
  sym_test = 75,
  sym_parameters = 76,
  sym_call_statement = 77,
  sym_assignment = 78,
  sym_expression = 79,
  sym__simple_statement = 80,
  sym__compound_statement = 81,
  sym_repeat_statement = 82,
  sym_while_statement = 83,
  sym_argument = 84,
  sym_if_then_statement = 85,
  sym_elsif = 86,
  sym_else = 87,
  sym_for = 88,
  sym_constant = 89,
  sym_block = 90,
  sym__parameters = 91,
  sym_var = 92,
  sym_parameter = 93,
  sym_variable = 94,
  sym_primary_expression = 95,
  sym_not_operator = 96,
  sym_boolean_operator = 97,
  sym_binary_operator = 98,
  sym_comparison_operator = 99,
  sym_parenthesized_expression = 100,
  sym_basis_type = 101,
  sym_array_type = 102,
  sym_delclaration_array_type = 103,
  sym_declaration_type = 104,
  sym__generic = 105,
  sym__generics = 106,
  sym__type_name = 107,
  sym__custom_type = 108,
  sym__custom_generic_type = 109,
  sym__custom_generic_instantiated_type = 110,
  sym_custom_type = 111,
  sym_type = 112,
  sym_comment = 113,
  sym__end_line = 114,
  sym_variable_access = 115,
  aux_sym_program_repeat1 = 116,
  aux_sym_generics_repeat1 = 117,
  aux_sym_enum_repeat1 = 118,
  aux_sym_record_repeat1 = 119,
  aux_sym_export_repeat1 = 120,
  aux_sym_function_definition_repeat1 = 121,
  aux_sym_function_definition_repeat2 = 122,
  aux_sym_call_statement_repeat1 = 123,
  aux_sym_if_then_statement_repeat1 = 124,
  aux_sym_constant_repeat1 = 125,
  aux_sym_block_repeat1 = 126,
  aux_sym__parameters_repeat1 = 127,
  aux_sym_comparison_operator_repeat1 = 128,
  aux_sym__generics_repeat1 = 129,
  aux_sym__custom_generic_instantiated_type_repeat1 = 130,
  aux_sym_variable_access_repeat1 = 131,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_generics] = "generics",
  [anon_sym_COMMA] = ",",
  [anon_sym_enum] = "enum",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_record] = "record",
  [anon_sym_export] = "export",
  [anon_sym_import] = "import",
  [anon_sym_module] = "module",
  [anon_sym_define] = "define",
  [anon_sym_test] = "test",
  [anon_sym_for] = "for",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_repeat] = "repeat",
  [anon_sym_until] = "until",
  [anon_sym_while] = "while",
  [anon_sym_var] = "var",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_elsif] = "elsif",
  [anon_sym_else] = "else",
  [anon_sym_from] = "from",
  [anon_sym_to] = "to",
  [anon_sym_constants] = "constants",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_variables] = "variables",
  [anon_sym_not] = "not",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_mod] = "mod",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_LT_GT] = "<>",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_character] = "character",
  [anon_sym_integer] = "integer",
  [anon_sym_real] = "real",
  [anon_sym_string] = "string",
  [anon_sym_array] = "array",
  [anon_sym_of] = "of",
  [anon_sym_boolean] = "boolean",
  [sym_refersTo] = "refersTo",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_program] = "program",
  [sym_generics] = "generics",
  [sym_enum] = "enum",
  [sym_record_item] = "record_item",
  [sym_record] = "record",
  [sym_export] = "export",
  [sym__multiple_import] = "_multiple_import",
  [sym_import] = "import",
  [sym_module] = "module",
  [sym_function_definition] = "function_definition",
  [sym__function_header] = "_function_header",
  [sym_function_header] = "function_header",
  [sym_test] = "test",
  [sym_parameters] = "parameters",
  [sym_call_statement] = "call_statement",
  [sym_assignment] = "assignment",
  [sym_expression] = "expression",
  [sym__simple_statement] = "_simple_statement",
  [sym__compound_statement] = "_compound_statement",
  [sym_repeat_statement] = "repeat_statement",
  [sym_while_statement] = "while_statement",
  [sym_argument] = "argument",
  [sym_if_then_statement] = "if_then_statement",
  [sym_elsif] = "elsif",
  [sym_else] = "else",
  [sym_for] = "for",
  [sym_constant] = "constant",
  [sym_block] = "block",
  [sym__parameters] = "_parameters",
  [sym_var] = "var",
  [sym_parameter] = "parameter",
  [sym_variable] = "variable",
  [sym_primary_expression] = "primary_expression",
  [sym_not_operator] = "not_operator",
  [sym_boolean_operator] = "boolean_operator",
  [sym_binary_operator] = "binary_operator",
  [sym_comparison_operator] = "comparison_operator",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_basis_type] = "basis_type",
  [sym_array_type] = "array_type",
  [sym_delclaration_array_type] = "delclaration_array_type",
  [sym_declaration_type] = "declaration_type",
  [sym__generic] = "_generic",
  [sym__generics] = "_generics",
  [sym__type_name] = "_type_name",
  [sym__custom_type] = "_custom_type",
  [sym__custom_generic_type] = "_custom_generic_type",
  [sym__custom_generic_instantiated_type] = "_custom_generic_instantiated_type",
  [sym_custom_type] = "custom_type",
  [sym_type] = "type",
  [sym_comment] = "comment",
  [sym__end_line] = "_end_line",
  [sym_variable_access] = "variable_access",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_generics_repeat1] = "generics_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_record_repeat1] = "record_repeat1",
  [aux_sym_export_repeat1] = "export_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_function_definition_repeat2] = "function_definition_repeat2",
  [aux_sym_call_statement_repeat1] = "call_statement_repeat1",
  [aux_sym_if_then_statement_repeat1] = "if_then_statement_repeat1",
  [aux_sym_constant_repeat1] = "constant_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__parameters_repeat1] = "_parameters_repeat1",
  [aux_sym_comparison_operator_repeat1] = "comparison_operator_repeat1",
  [aux_sym__generics_repeat1] = "_generics_repeat1",
  [aux_sym__custom_generic_instantiated_type_repeat1] = "_custom_generic_instantiated_type_repeat1",
  [aux_sym_variable_access_repeat1] = "variable_access_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_generics] = anon_sym_generics,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_until] = anon_sym_until,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_elsif] = anon_sym_elsif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_constants] = anon_sym_constants,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_variables] = anon_sym_variables,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_character] = sym_character,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_real] = anon_sym_real,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_boolean] = anon_sym_boolean,
  [sym_refersTo] = sym_refersTo,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_program] = sym_program,
  [sym_generics] = sym_generics,
  [sym_enum] = sym_enum,
  [sym_record_item] = sym_record_item,
  [sym_record] = sym_record,
  [sym_export] = sym_export,
  [sym__multiple_import] = sym__multiple_import,
  [sym_import] = sym_import,
  [sym_module] = sym_module,
  [sym_function_definition] = sym_function_definition,
  [sym__function_header] = sym__function_header,
  [sym_function_header] = sym_function_header,
  [sym_test] = sym_test,
  [sym_parameters] = sym_parameters,
  [sym_call_statement] = sym_call_statement,
  [sym_assignment] = sym_assignment,
  [sym_expression] = sym_expression,
  [sym__simple_statement] = sym__simple_statement,
  [sym__compound_statement] = sym__compound_statement,
  [sym_repeat_statement] = sym_repeat_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_argument] = sym_argument,
  [sym_if_then_statement] = sym_if_then_statement,
  [sym_elsif] = sym_elsif,
  [sym_else] = sym_else,
  [sym_for] = sym_for,
  [sym_constant] = sym_constant,
  [sym_block] = sym_block,
  [sym__parameters] = sym__parameters,
  [sym_var] = sym_var,
  [sym_parameter] = sym_parameter,
  [sym_variable] = sym_variable,
  [sym_primary_expression] = sym_primary_expression,
  [sym_not_operator] = sym_not_operator,
  [sym_boolean_operator] = sym_boolean_operator,
  [sym_binary_operator] = sym_binary_operator,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_basis_type] = sym_basis_type,
  [sym_array_type] = sym_array_type,
  [sym_delclaration_array_type] = sym_delclaration_array_type,
  [sym_declaration_type] = sym_declaration_type,
  [sym__generic] = sym__generic,
  [sym__generics] = sym__generics,
  [sym__type_name] = sym__type_name,
  [sym__custom_type] = sym__custom_type,
  [sym__custom_generic_type] = sym__custom_generic_type,
  [sym__custom_generic_instantiated_type] = sym__custom_generic_instantiated_type,
  [sym_custom_type] = sym_custom_type,
  [sym_type] = sym_type,
  [sym_comment] = sym_comment,
  [sym__end_line] = sym__end_line,
  [sym_variable_access] = sym_variable_access,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_generics_repeat1] = aux_sym_generics_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_record_repeat1] = aux_sym_record_repeat1,
  [aux_sym_export_repeat1] = aux_sym_export_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_function_definition_repeat2] = aux_sym_function_definition_repeat2,
  [aux_sym_call_statement_repeat1] = aux_sym_call_statement_repeat1,
  [aux_sym_if_then_statement_repeat1] = aux_sym_if_then_statement_repeat1,
  [aux_sym_constant_repeat1] = aux_sym_constant_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__parameters_repeat1] = aux_sym__parameters_repeat1,
  [aux_sym_comparison_operator_repeat1] = aux_sym_comparison_operator_repeat1,
  [aux_sym__generics_repeat1] = aux_sym__generics_repeat1,
  [aux_sym__custom_generic_instantiated_type_repeat1] = aux_sym__custom_generic_instantiated_type_repeat1,
  [aux_sym_variable_access_repeat1] = aux_sym_variable_access_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_generics] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_until] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elsif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constants] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variables] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_real] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [sym_refersTo] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_generics] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_record_item] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
    .visible = true,
    .named = true,
  },
  [sym__multiple_import] = {
    .visible = false,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__function_header] = {
    .visible = false,
    .named = true,
  },
  [sym_function_header] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__compound_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_repeat_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_if_then_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elsif] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__parameters] = {
    .visible = false,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_not_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_basis_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_delclaration_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_type] = {
    .visible = true,
    .named = true,
  },
  [sym__generic] = {
    .visible = false,
    .named = true,
  },
  [sym__generics] = {
    .visible = false,
    .named = true,
  },
  [sym__type_name] = {
    .visible = false,
    .named = true,
  },
  [sym__custom_type] = {
    .visible = false,
    .named = true,
  },
  [sym__custom_generic_type] = {
    .visible = false,
    .named = true,
  },
  [sym__custom_generic_instantiated_type] = {
    .visible = false,
    .named = true,
  },
  [sym_custom_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__end_line] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_access] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generics_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_export_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_then_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comparison_operator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__generics_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__custom_generic_instantiated_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_access_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_argument = 2,
  field_array_access = 3,
  field_body = 4,
  field_condition = 5,
  field_consequent = 6,
  field_constants = 7,
  field_field = 8,
  field_field_acces = 9,
  field_function = 10,
  field_generic = 11,
  field_instatiated_generic = 12,
  field_left = 13,
  field_name = 14,
  field_operator = 15,
  field_operators = 16,
  field_parameters = 17,
  field_reference = 18,
  field_right = 19,
  field_type_name = 20,
  field_var = 21,
  field_variables = 22,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_array_access] = "array_access",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequent] = "consequent",
  [field_constants] = "constants",
  [field_field] = "field",
  [field_field_acces] = "field_acces",
  [field_function] = "function",
  [field_generic] = "generic",
  [field_instatiated_generic] = "instatiated_generic",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_operators] = "operators",
  [field_parameters] = "parameters",
  [field_reference] = "reference",
  [field_right] = "right",
  [field_type_name] = "type_name",
  [field_var] = "var",
  [field_variables] = "variables",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 3},
  [12] = {.index = 20, .length = 4},
  [13] = {.index = 24, .length = 1},
  [14] = {.index = 25, .length = 1},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 2},
  [17] = {.index = 30, .length = 2},
  [18] = {.index = 32, .length = 1},
  [19] = {.index = 33, .length = 1},
  [20] = {.index = 34, .length = 3},
  [21] = {.index = 37, .length = 3},
  [22] = {.index = 40, .length = 2},
  [23] = {.index = 42, .length = 2},
  [24] = {.index = 44, .length = 2},
  [25] = {.index = 46, .length = 3},
  [26] = {.index = 49, .length = 2},
  [27] = {.index = 51, .length = 2},
  [28] = {.index = 53, .length = 4},
  [29] = {.index = 57, .length = 2},
  [30] = {.index = 59, .length = 1},
  [31] = {.index = 60, .length = 1},
  [32] = {.index = 61, .length = 2},
  [33] = {.index = 63, .length = 4},
  [34] = {.index = 67, .length = 3},
  [35] = {.index = 70, .length = 3},
  [36] = {.index = 73, .length = 2},
  [37] = {.index = 75, .length = 1},
  [38] = {.index = 76, .length = 4},
  [39] = {.index = 80, .length = 2},
  [40] = {.index = 82, .length = 1},
  [41] = {.index = 83, .length = 2},
  [42] = {.index = 85, .length = 3},
  [43] = {.index = 88, .length = 3},
  [44] = {.index = 91, .length = 1},
  [45] = {.index = 92, .length = 2},
  [46] = {.index = 94, .length = 3},
  [47] = {.index = 97, .length = 1},
  [48] = {.index = 98, .length = 2},
  [49] = {.index = 100, .length = 2},
  [50] = {.index = 102, .length = 2},
  [51] = {.index = 104, .length = 4},
  [52] = {.index = 108, .length = 1},
  [53] = {.index = 109, .length = 3},
  [54] = {.index = 112, .length = 3},
  [55] = {.index = 115, .length = 1},
  [56] = {.index = 116, .length = 4},
  [57] = {.index = 120, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
    {field_parameters, 1},
  [3] =
    {field_type_name, 0},
  [4] =
    {field_field, 0},
  [5] =
    {field_type_name, 0, .inherited = true},
  [6] =
    {field_generic, 0, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [8] =
    {field_generic, 0, .inherited = true},
    {field_instatiated_generic, 0, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [11] =
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
  [13] =
    {field_name, 0, .inherited = true},
    {field_parameters, 0, .inherited = true},
  [15] =
    {field_reference, 0},
    {field_type_name, 1, .inherited = true},
  [17] =
    {field_generic, 1, .inherited = true},
    {field_reference, 0},
    {field_type_name, 1, .inherited = true},
  [20] =
    {field_generic, 1, .inherited = true},
    {field_instatiated_generic, 1, .inherited = true},
    {field_reference, 0},
    {field_type_name, 1, .inherited = true},
  [24] =
    {field_generic, 0},
  [25] =
    {field_generic, 0, .inherited = true},
  [26] =
    {field_generic, 1, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [28] =
    {field_field, 3, .inherited = true},
    {field_name, 1},
  [30] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [32] =
    {field_generic, 1},
  [33] =
    {field_function, 0},
  [34] =
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
    {field_variables, 3},
  [37] =
    {field_constants, 3},
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
  [40] =
    {field_array_access, 1, .inherited = true},
    {field_field_acces, 1, .inherited = true},
  [42] =
    {field_name, 1},
    {field_name, 4},
  [44] =
    {field_generic, 0, .inherited = true},
    {field_generic, 1, .inherited = true},
  [46] =
    {field_generic, 1, .inherited = true},
    {field_instatiated_generic, 2},
    {field_type_name, 0, .inherited = true},
  [49] =
    {field_generic, 1},
    {field_generic, 2, .inherited = true},
  [51] =
    {field_field, 4, .inherited = true},
    {field_name, 1},
  [53] =
    {field_constants, 4},
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
    {field_variables, 3},
  [57] =
    {field_function, 3},
    {field_name, 1},
  [59] =
    {field_argument, 1},
  [60] =
    {field_operators, 1, .inherited = true},
  [61] =
    {field_field_acces, 0},
    {field_field_acces, 1},
  [63] =
    {field_array_access, 0, .inherited = true},
    {field_array_access, 1, .inherited = true},
    {field_field_acces, 0, .inherited = true},
    {field_field_acces, 1, .inherited = true},
  [67] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [70] =
    {field_name, 1},
    {field_name, 4},
    {field_name, 5, .inherited = true},
  [73] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [75] =
    {field_generic, 1, .inherited = true},
  [76] =
    {field_generic, 1, .inherited = true},
    {field_instatiated_generic, 2},
    {field_instatiated_generic, 3, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [80] =
    {field_body, 2},
    {field_condition, 1},
  [82] =
    {field_var, 0},
  [83] =
    {field_left, 0},
    {field_right, 2},
  [85] =
    {field_function, 3},
    {field_name, 1},
    {field_variables, 5},
  [88] =
    {field_constants, 5},
    {field_function, 3},
    {field_name, 1},
  [91] =
    {field_operators, 0},
  [92] =
    {field_operators, 0, .inherited = true},
    {field_operators, 1, .inherited = true},
  [94] =
    {field_array_access, 0},
    {field_array_access, 1},
    {field_array_access, 2},
  [97] =
    {field_instatiated_generic, 1},
  [98] =
    {field_instatiated_generic, 0, .inherited = true},
    {field_instatiated_generic, 1, .inherited = true},
  [100] =
    {field_body, 3},
    {field_condition, 2},
  [102] =
    {field_condition, 1},
    {field_consequent, 3},
  [104] =
    {field_constants, 6},
    {field_function, 3},
    {field_name, 1},
    {field_variables, 5},
  [108] =
    {field_alternative, 0},
  [109] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequent, 3},
  [112] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequent, 3},
  [115] =
    {field_body, 1},
  [116] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequent, 3},
  [120] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 3,
  [13] = 6,
  [14] = 2,
  [15] = 2,
  [16] = 6,
  [17] = 3,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 4,
  [22] = 4,
  [23] = 5,
  [24] = 24,
  [25] = 25,
  [26] = 5,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 31,
  [35] = 35,
  [36] = 36,
  [37] = 27,
  [38] = 38,
  [39] = 30,
  [40] = 28,
  [41] = 30,
  [42] = 33,
  [43] = 43,
  [44] = 31,
  [45] = 45,
  [46] = 46,
  [47] = 33,
  [48] = 48,
  [49] = 49,
  [50] = 28,
  [51] = 48,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 55,
  [56] = 52,
  [57] = 8,
  [58] = 10,
  [59] = 9,
  [60] = 60,
  [61] = 8,
  [62] = 62,
  [63] = 9,
  [64] = 54,
  [65] = 65,
  [66] = 54,
  [67] = 7,
  [68] = 62,
  [69] = 69,
  [70] = 10,
  [71] = 7,
  [72] = 72,
  [73] = 48,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 78,
  [82] = 62,
  [83] = 83,
  [84] = 84,
  [85] = 83,
  [86] = 86,
  [87] = 83,
  [88] = 88,
  [89] = 86,
  [90] = 84,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 92,
  [95] = 93,
  [96] = 88,
  [97] = 92,
  [98] = 91,
  [99] = 86,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 93,
  [105] = 91,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 65,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 120,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 74,
  [143] = 143,
  [144] = 121,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 133,
  [149] = 149,
  [150] = 120,
  [151] = 121,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 161,
  [178] = 170,
  [179] = 172,
  [180] = 163,
  [181] = 166,
  [182] = 174,
  [183] = 183,
  [184] = 183,
  [185] = 185,
  [186] = 175,
  [187] = 172,
  [188] = 164,
  [189] = 165,
  [190] = 176,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 171,
  [199] = 199,
  [200] = 101,
  [201] = 173,
  [202] = 202,
  [203] = 162,
  [204] = 204,
  [205] = 205,
  [206] = 196,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 102,
  [215] = 202,
  [216] = 216,
  [217] = 113,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 221,
  [225] = 225,
  [226] = 223,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 221,
  [234] = 234,
  [235] = 235,
  [236] = 219,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 218,
  [241] = 241,
  [242] = 242,
  [243] = 183,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 193,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 223,
  [258] = 255,
  [259] = 253,
  [260] = 241,
  [261] = 192,
  [262] = 262,
  [263] = 263,
  [264] = 165,
  [265] = 265,
  [266] = 225,
  [267] = 164,
  [268] = 133,
  [269] = 269,
  [270] = 270,
  [271] = 230,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 175,
  [276] = 250,
  [277] = 131,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 176,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 274,
  [289] = 289,
  [290] = 285,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 255,
  [298] = 253,
  [299] = 216,
  [300] = 273,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 133,
  [309] = 248,
  [310] = 247,
  [311] = 311,
  [312] = 265,
  [313] = 245,
  [314] = 246,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 342,
  [350] = 338,
  [351] = 351,
  [352] = 250,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 296,
  [359] = 319,
  [360] = 360,
  [361] = 287,
  [362] = 317,
  [363] = 341,
  [364] = 337,
  [365] = 316,
  [366] = 338,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 286,
  [371] = 319,
  [372] = 372,
  [373] = 338,
  [374] = 347,
  [375] = 344,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 320,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 369,
  [386] = 382,
  [387] = 381,
  [388] = 334,
  [389] = 336,
  [390] = 368,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'b'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(138);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == '*') ADVANCE(184);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == ';') ADVANCE(174);
      if (lookahead == '<') ADVANCE(187);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == '>') ADVANCE(190);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(57);
      if (lookahead == '{') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == 'f') ADVANCE(212);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == 'v') ADVANCE(214);
      if (lookahead == '{') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(264);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(212);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 't') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(264);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(212);
      if (lookahead == 't') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(264);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(197);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == ';') ADVANCE(174);
      if (lookahead == '{') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(264);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == 'v') ADVANCE(214);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(264);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(155);
      END_STATE();
    case 9:
      if (lookahead == 'T') ADVANCE(86);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 's') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 'w') ADVANCE(231);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(264);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 'w') ADVANCE(231);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(264);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(253);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(264);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(202);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'x') ADVANCE(97);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'x') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 132:
      if (lookahead == 'y') ADVANCE(204);
      END_STATE();
    case 133:
      if (lookahead == '}') ADVANCE(210);
      if (lookahead != 0) ADVANCE(133);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 135:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(5);
      END_STATE();
    case 136:
      if (eof) ADVANCE(138);
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == '*') ADVANCE(184);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(187);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == '>') ADVANCE(190);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'm') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'v') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(136)
      END_STATE();
    case 137:
      if (eof) ADVANCE(138);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == 'v') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(137)
      END_STATE();
    case 138:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_generics);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_elsif);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_from);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_constants);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(155);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(188);
      if (lookahead == '>') ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == '_') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_integer);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_real);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_string);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_array);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_refersTo);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_refersTo);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(242);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(234);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(264);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(263);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(264);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(247);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(264);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'f') ADVANCE(225);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(264);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(259);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(264);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(267);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(215);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(230);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(245);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(228);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(216);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(251);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(249);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(164);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(167);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(203);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(226);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(233);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(239);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(237);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(257);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(201);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(256);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(222);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(171);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(229);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(260);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(258);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(209);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(238);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(250);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(224);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(262);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(162);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(232);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(199);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(152);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(255);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(213);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(243);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(252);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(211);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(223);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(218);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(179);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(157);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(220);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(248);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(217);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(205);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 137},
  [2] = {.lex_state = 136},
  [3] = {.lex_state = 136},
  [4] = {.lex_state = 136},
  [5] = {.lex_state = 136},
  [6] = {.lex_state = 136},
  [7] = {.lex_state = 136},
  [8] = {.lex_state = 136},
  [9] = {.lex_state = 136},
  [10] = {.lex_state = 136},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 137},
  [20] = {.lex_state = 137},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 137},
  [25] = {.lex_state = 137},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 14, .external_lex_state = 4},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 14, .external_lex_state = 4},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 14, .external_lex_state = 4},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 53, .external_lex_state = 4},
  [53] = {.lex_state = 53, .external_lex_state = 4},
  [54] = {.lex_state = 53, .external_lex_state = 4},
  [55] = {.lex_state = 53, .external_lex_state = 4},
  [56] = {.lex_state = 53, .external_lex_state = 4},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 53, .external_lex_state = 4},
  [65] = {.lex_state = 136},
  [66] = {.lex_state = 53, .external_lex_state = 4},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 136},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 48, .external_lex_state = 4},
  [101] = {.lex_state = 137},
  [102] = {.lex_state = 137},
  [103] = {.lex_state = 48, .external_lex_state = 4},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 48, .external_lex_state = 4},
  [107] = {.lex_state = 137},
  [108] = {.lex_state = 137},
  [109] = {.lex_state = 137},
  [110] = {.lex_state = 137},
  [111] = {.lex_state = 137},
  [112] = {.lex_state = 137},
  [113] = {.lex_state = 137},
  [114] = {.lex_state = 137},
  [115] = {.lex_state = 137},
  [116] = {.lex_state = 137},
  [117] = {.lex_state = 137},
  [118] = {.lex_state = 137},
  [119] = {.lex_state = 137},
  [120] = {.lex_state = 137},
  [121] = {.lex_state = 137},
  [122] = {.lex_state = 137},
  [123] = {.lex_state = 137},
  [124] = {.lex_state = 137},
  [125] = {.lex_state = 137},
  [126] = {.lex_state = 137},
  [127] = {.lex_state = 0, .external_lex_state = 3},
  [128] = {.lex_state = 137},
  [129] = {.lex_state = 137},
  [130] = {.lex_state = 137},
  [131] = {.lex_state = 137},
  [132] = {.lex_state = 137},
  [133] = {.lex_state = 137},
  [134] = {.lex_state = 137, .external_lex_state = 3},
  [135] = {.lex_state = 48, .external_lex_state = 4},
  [136] = {.lex_state = 48, .external_lex_state = 4},
  [137] = {.lex_state = 137, .external_lex_state = 3},
  [138] = {.lex_state = 48, .external_lex_state = 4},
  [139] = {.lex_state = 137, .external_lex_state = 3},
  [140] = {.lex_state = 137, .external_lex_state = 3},
  [141] = {.lex_state = 137, .external_lex_state = 3},
  [142] = {.lex_state = 0, .external_lex_state = 3},
  [143] = {.lex_state = 137, .external_lex_state = 3},
  [144] = {.lex_state = 48, .external_lex_state = 4},
  [145] = {.lex_state = 14, .external_lex_state = 4},
  [146] = {.lex_state = 14, .external_lex_state = 4},
  [147] = {.lex_state = 53, .external_lex_state = 4},
  [148] = {.lex_state = 53, .external_lex_state = 4},
  [149] = {.lex_state = 53, .external_lex_state = 4},
  [150] = {.lex_state = 53, .external_lex_state = 4},
  [151] = {.lex_state = 53, .external_lex_state = 4},
  [152] = {.lex_state = 53, .external_lex_state = 4},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 53, .external_lex_state = 4},
  [155] = {.lex_state = 53, .external_lex_state = 4},
  [156] = {.lex_state = 53, .external_lex_state = 4},
  [157] = {.lex_state = 53, .external_lex_state = 4},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 0, .external_lex_state = 3},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 137, .external_lex_state = 3},
  [168] = {.lex_state = 0, .external_lex_state = 3},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 6, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 6, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 6, .external_lex_state = 2},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 6, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 3},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0, .external_lex_state = 3},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 137},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 6, .external_lex_state = 2},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0, .external_lex_state = 3},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 6, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 3},
  [211] = {.lex_state = 0, .external_lex_state = 3},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 3},
  [214] = {.lex_state = 0, .external_lex_state = 3},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 137, .external_lex_state = 3},
  [218] = {.lex_state = 137},
  [219] = {.lex_state = 137},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 137},
  [228] = {.lex_state = 0, .external_lex_state = 3},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 137},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 137},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 6},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 6},
  [246] = {.lex_state = 6},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 6, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 137},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0, .external_lex_state = 3},
  [265] = {.lex_state = 137},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 0, .external_lex_state = 3},
  [268] = {.lex_state = 137, .external_lex_state = 3},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 0, .external_lex_state = 3},
  [276] = {.lex_state = 6, .external_lex_state = 2},
  [277] = {.lex_state = 137, .external_lex_state = 3},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 137},
  [281] = {.lex_state = 0, .external_lex_state = 3},
  [282] = {.lex_state = 0, .external_lex_state = 2},
  [283] = {.lex_state = 137},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 6},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 0, .external_lex_state = 2},
  [288] = {.lex_state = 0, .external_lex_state = 2},
  [289] = {.lex_state = 6},
  [290] = {.lex_state = 6},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 6},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0, .external_lex_state = 2},
  [297] = {.lex_state = 54},
  [298] = {.lex_state = 54},
  [299] = {.lex_state = 0, .external_lex_state = 2},
  [300] = {.lex_state = 0, .external_lex_state = 2},
  [301] = {.lex_state = 0, .external_lex_state = 2},
  [302] = {.lex_state = 0, .external_lex_state = 3},
  [303] = {.lex_state = 0, .external_lex_state = 2},
  [304] = {.lex_state = 0, .external_lex_state = 3},
  [305] = {.lex_state = 0, .external_lex_state = 2},
  [306] = {.lex_state = 0, .external_lex_state = 3},
  [307] = {.lex_state = 0, .external_lex_state = 2},
  [308] = {.lex_state = 0, .external_lex_state = 2},
  [309] = {.lex_state = 0, .external_lex_state = 2},
  [310] = {.lex_state = 0, .external_lex_state = 2},
  [311] = {.lex_state = 0, .external_lex_state = 3},
  [312] = {.lex_state = 0, .external_lex_state = 2},
  [313] = {.lex_state = 0, .external_lex_state = 2},
  [314] = {.lex_state = 0, .external_lex_state = 2},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 6},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 6},
  [319] = {.lex_state = 6},
  [320] = {.lex_state = 6},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 6},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 6},
  [325] = {.lex_state = 6},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 6},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 6},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 6},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0, .external_lex_state = 2},
  [339] = {.lex_state = 0, .external_lex_state = 2},
  [340] = {.lex_state = 6},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 6},
  [343] = {.lex_state = 0, .external_lex_state = 3},
  [344] = {.lex_state = 6},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 136},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 6},
  [350] = {.lex_state = 0, .external_lex_state = 2},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 6},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0, .external_lex_state = 2},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0, .external_lex_state = 3},
  [359] = {.lex_state = 6},
  [360] = {.lex_state = 0, .external_lex_state = 2},
  [361] = {.lex_state = 0, .external_lex_state = 3},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 6},
  [366] = {.lex_state = 0, .external_lex_state = 2},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 6},
  [369] = {.lex_state = 6},
  [370] = {.lex_state = 0, .external_lex_state = 3},
  [371] = {.lex_state = 6},
  [372] = {.lex_state = 6},
  [373] = {.lex_state = 0, .external_lex_state = 2},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 6},
  [376] = {.lex_state = 6},
  [377] = {.lex_state = 0, .external_lex_state = 2},
  [378] = {.lex_state = 6},
  [379] = {.lex_state = 6},
  [380] = {.lex_state = 6},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 6},
  [384] = {.lex_state = 6},
  [385] = {.lex_state = 6},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_generics] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_until] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_elsif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_constants] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_real] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [sym_refersTo] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(367),
    [sym_enum] = STATE(19),
    [sym_record] = STATE(19),
    [sym_export] = STATE(19),
    [sym_import] = STATE(19),
    [sym_module] = STATE(20),
    [sym_function_definition] = STATE(19),
    [sym_test] = STATE(19),
    [sym_constant] = STATE(19),
    [sym_variable] = STATE(19),
    [aux_sym_program_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_record] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(13),
    [anon_sym_define] = ACTIONS(15),
    [anon_sym_test] = ACTIONS(17),
    [anon_sym_constants] = ACTIONS(19),
    [anon_sym_variables] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 25,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_enum,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      anon_sym_then,
      anon_sym_constants,
      anon_sym_variables,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [41] = 5,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(36), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 25,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_enum,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      anon_sym_then,
      anon_sym_constants,
      anon_sym_variables,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [82] = 2,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 27,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_enum,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      anon_sym_then,
      anon_sym_constants,
      anon_sym_variables,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_DOT,
  [116] = 2,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 27,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_enum,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      anon_sym_then,
      anon_sym_constants,
      anon_sym_variables,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_DOT,
  [150] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_enum,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_constants,
      anon_sym_variables,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [190] = 3,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(53), 21,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_enum,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_constants,
      anon_sym_variables,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [223] = 2,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_enum,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_constants,
      anon_sym_variables,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [254] = 2,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_enum,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_constants,
      anon_sym_variables,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [285] = 2,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_enum,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_constants,
      anon_sym_variables,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [316] = 17,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_COLON_EQ,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_var,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(2), 1,
      aux_sym_variable_access_repeat1,
    STATE(51), 1,
      sym_primary_expression,
    STATE(72), 1,
      sym_variable_access,
    STATE(158), 1,
      sym_expression,
    STATE(207), 1,
      sym_argument,
    ACTIONS(77), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(61), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(176), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [376] = 5,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(36), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 14,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [406] = 5,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 14,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [436] = 5,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 14,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [466] = 5,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 14,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [496] = 5,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 14,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [526] = 5,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(36), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 14,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [556] = 12,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_var,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(51), 1,
      sym_primary_expression,
    STATE(72), 1,
      sym_variable_access,
    STATE(158), 1,
      sym_expression,
    STATE(249), 1,
      sym_argument,
    STATE(61), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(176), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [600] = 10,
    ACTIONS(5), 1,
      anon_sym_enum,
    ACTIONS(7), 1,
      anon_sym_record,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(15), 1,
      anon_sym_define,
    ACTIONS(17), 1,
      anon_sym_test,
    ACTIONS(19), 1,
      anon_sym_constants,
    ACTIONS(21), 1,
      anon_sym_variables,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(25), 9,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_constant,
      sym_variable,
      aux_sym_program_repeat1,
  [639] = 10,
    ACTIONS(5), 1,
      anon_sym_enum,
    ACTIONS(7), 1,
      anon_sym_record,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(15), 1,
      anon_sym_define,
    ACTIONS(17), 1,
      anon_sym_test,
    ACTIONS(19), 1,
      anon_sym_constants,
    ACTIONS(21), 1,
      anon_sym_variables,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(24), 9,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_constant,
      sym_variable,
      aux_sym_program_repeat1,
  [678] = 2,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 16,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_DOT,
  [701] = 2,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 16,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
      anon_sym_DOT,
  [724] = 2,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 16,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
      anon_sym_DOT,
  [747] = 10,
    ACTIONS(5), 1,
      anon_sym_enum,
    ACTIONS(7), 1,
      anon_sym_record,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(15), 1,
      anon_sym_define,
    ACTIONS(17), 1,
      anon_sym_test,
    ACTIONS(19), 1,
      anon_sym_constants,
    ACTIONS(21), 1,
      anon_sym_variables,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    STATE(25), 9,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_constant,
      sym_variable,
      aux_sym_program_repeat1,
  [786] = 10,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      anon_sym_enum,
    ACTIONS(110), 1,
      anon_sym_record,
    ACTIONS(113), 1,
      anon_sym_export,
    ACTIONS(116), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_define,
    ACTIONS(122), 1,
      anon_sym_test,
    ACTIONS(125), 1,
      anon_sym_constants,
    ACTIONS(128), 1,
      anon_sym_variables,
    STATE(25), 9,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_constant,
      sym_variable,
      aux_sym_program_repeat1,
  [825] = 2,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 16,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_DOT,
  [848] = 9,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(51), 1,
      sym_primary_expression,
    STATE(189), 1,
      sym_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(61), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(176), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [884] = 9,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(51), 1,
      sym_primary_expression,
    STATE(175), 1,
      sym_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(61), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(176), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [920] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(48), 1,
      sym_primary_expression,
    STATE(165), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(190), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [956] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(48), 1,
      sym_primary_expression,
    STATE(223), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(190), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [992] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(48), 1,
      sym_primary_expression,
    STATE(164), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(190), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1028] = 14,
    ACTIONS(144), 1,
      anon_sym_real,
    ACTIONS(147), 1,
      anon_sym_array,
    ACTIONS(150), 1,
      sym_refersTo,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(156), 1,
      sym__dedent,
    STATE(32), 1,
      aux_sym_record_repeat1,
    STATE(145), 1,
      sym_record_item,
    STATE(243), 1,
      sym__type_name,
    STATE(245), 1,
      sym__custom_type,
    STATE(247), 1,
      sym__custom_generic_type,
    STATE(248), 1,
      sym__custom_generic_instantiated_type,
    STATE(328), 1,
      sym_type,
    ACTIONS(141), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(242), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1074] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(48), 1,
      sym_primary_expression,
    STATE(224), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(190), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1110] = 9,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_not,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(73), 1,
      sym_primary_expression,
    STATE(267), 1,
      sym_expression,
    ACTIONS(162), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(164), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(57), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(281), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1146] = 14,
    ACTIONS(170), 1,
      anon_sym_real,
    ACTIONS(172), 1,
      anon_sym_array,
    ACTIONS(174), 1,
      sym_refersTo,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__dedent,
    STATE(32), 1,
      aux_sym_record_repeat1,
    STATE(145), 1,
      sym_record_item,
    STATE(243), 1,
      sym__type_name,
    STATE(245), 1,
      sym__custom_type,
    STATE(247), 1,
      sym__custom_generic_type,
    STATE(248), 1,
      sym__custom_generic_instantiated_type,
    STATE(328), 1,
      sym_type,
    ACTIONS(168), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(242), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1192] = 9,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(51), 1,
      sym_primary_expression,
    STATE(209), 1,
      sym_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(61), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(176), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1228] = 9,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_not,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(73), 1,
      sym_primary_expression,
    STATE(264), 1,
      sym_expression,
    ACTIONS(162), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(164), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(57), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(281), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1264] = 9,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_not,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(73), 1,
      sym_primary_expression,
    STATE(213), 1,
      sym_expression,
    ACTIONS(162), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(164), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(57), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(281), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1300] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(48), 1,
      sym_primary_expression,
    STATE(226), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(190), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1336] = 9,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_not,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(73), 1,
      sym_primary_expression,
    STATE(275), 1,
      sym_expression,
    ACTIONS(162), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(164), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(57), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(281), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1372] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(48), 1,
      sym_primary_expression,
    STATE(257), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(190), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1408] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(48), 1,
      sym_primary_expression,
    STATE(221), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(190), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1444] = 9,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_not,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(73), 1,
      sym_primary_expression,
    STATE(211), 1,
      sym_expression,
    ACTIONS(162), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(164), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(57), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(281), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1480] = 9,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(51), 1,
      sym_primary_expression,
    STATE(188), 1,
      sym_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(61), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(176), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1516] = 14,
    ACTIONS(170), 1,
      anon_sym_real,
    ACTIONS(172), 1,
      anon_sym_array,
    ACTIONS(174), 1,
      sym_refersTo,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(180), 1,
      sym__dedent,
    STATE(32), 1,
      aux_sym_record_repeat1,
    STATE(145), 1,
      sym_record_item,
    STATE(243), 1,
      sym__type_name,
    STATE(245), 1,
      sym__custom_type,
    STATE(247), 1,
      sym__custom_generic_type,
    STATE(248), 1,
      sym__custom_generic_instantiated_type,
    STATE(328), 1,
      sym_type,
    ACTIONS(168), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(242), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1562] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(48), 1,
      sym_primary_expression,
    STATE(254), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(190), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1598] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(48), 1,
      sym_primary_expression,
    STATE(233), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(190), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1634] = 6,
    STATE(93), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(186), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(188), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(182), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(184), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [1664] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(48), 1,
      sym_primary_expression,
    STATE(231), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(190), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1700] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(48), 1,
      sym_primary_expression,
    STATE(186), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(190), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1736] = 6,
    STATE(95), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(192), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(194), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(190), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(184), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [1766] = 9,
    ACTIONS(198), 1,
      anon_sym_for,
    ACTIONS(200), 1,
      anon_sym_repeat,
    ACTIONS(202), 1,
      anon_sym_while,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      sym__dedent,
    STATE(346), 1,
      sym_variable_access,
    STATE(208), 2,
      sym_call_statement,
      sym_assignment,
    STATE(54), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [1801] = 9,
    ACTIONS(198), 1,
      anon_sym_for,
    ACTIONS(200), 1,
      anon_sym_repeat,
    ACTIONS(202), 1,
      anon_sym_while,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym__dedent,
    STATE(346), 1,
      sym_variable_access,
    STATE(208), 2,
      sym_call_statement,
      sym_assignment,
    STATE(64), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [1836] = 9,
    ACTIONS(198), 1,
      anon_sym_for,
    ACTIONS(200), 1,
      anon_sym_repeat,
    ACTIONS(202), 1,
      anon_sym_while,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__dedent,
    STATE(346), 1,
      sym_variable_access,
    STATE(208), 2,
      sym_call_statement,
      sym_assignment,
    STATE(55), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [1871] = 9,
    ACTIONS(214), 1,
      anon_sym_for,
    ACTIONS(217), 1,
      anon_sym_repeat,
    ACTIONS(220), 1,
      anon_sym_while,
    ACTIONS(223), 1,
      anon_sym_if,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(229), 1,
      sym__dedent,
    STATE(346), 1,
      sym_variable_access,
    STATE(208), 2,
      sym_call_statement,
      sym_assignment,
    STATE(55), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [1906] = 9,
    ACTIONS(198), 1,
      anon_sym_for,
    ACTIONS(200), 1,
      anon_sym_repeat,
    ACTIONS(202), 1,
      anon_sym_while,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym__dedent,
    STATE(346), 1,
      sym_variable_access,
    STATE(208), 2,
      sym_call_statement,
      sym_assignment,
    STATE(66), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [1941] = 2,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 14,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1962] = 2,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 14,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [1983] = 2,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 14,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2004] = 13,
    ACTIONS(170), 1,
      anon_sym_real,
    ACTIONS(172), 1,
      anon_sym_array,
    ACTIONS(174), 1,
      sym_refersTo,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_record_repeat1,
    STATE(145), 1,
      sym_record_item,
    STATE(243), 1,
      sym__type_name,
    STATE(245), 1,
      sym__custom_type,
    STATE(247), 1,
      sym__custom_generic_type,
    STATE(248), 1,
      sym__custom_generic_instantiated_type,
    STATE(328), 1,
      sym_type,
    ACTIONS(168), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(242), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2047] = 2,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 14,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [2068] = 4,
    ACTIONS(186), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(233), 9,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2093] = 2,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 14,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [2114] = 9,
    ACTIONS(198), 1,
      anon_sym_for,
    ACTIONS(200), 1,
      anon_sym_repeat,
    ACTIONS(202), 1,
      anon_sym_while,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(237), 1,
      sym__dedent,
    STATE(346), 1,
      sym_variable_access,
    STATE(208), 2,
      sym_call_statement,
      sym_assignment,
    STATE(55), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [2149] = 5,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_constant_repeat1,
    ACTIONS(186), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(239), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [2176] = 9,
    ACTIONS(198), 1,
      anon_sym_for,
    ACTIONS(200), 1,
      anon_sym_repeat,
    ACTIONS(202), 1,
      anon_sym_while,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(243), 1,
      sym__dedent,
    STATE(346), 1,
      sym_variable_access,
    STATE(208), 2,
      sym_call_statement,
      sym_assignment,
    STATE(55), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [2211] = 3,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(245), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(53), 11,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2234] = 4,
    ACTIONS(192), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(194), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(233), 9,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [2259] = 13,
    ACTIONS(170), 1,
      anon_sym_real,
    ACTIONS(172), 1,
      anon_sym_array,
    ACTIONS(174), 1,
      sym_refersTo,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(45), 1,
      aux_sym_record_repeat1,
    STATE(145), 1,
      sym_record_item,
    STATE(243), 1,
      sym__type_name,
    STATE(245), 1,
      sym__custom_type,
    STATE(247), 1,
      sym__custom_generic_type,
    STATE(248), 1,
      sym__custom_generic_instantiated_type,
    STATE(328), 1,
      sym_type,
    ACTIONS(168), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(242), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2302] = 2,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 14,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2323] = 3,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(194), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(53), 11,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [2346] = 3,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
    ACTIONS(59), 11,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2369] = 6,
    STATE(104), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(252), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(254), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(184), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(245), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(250), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2397] = 3,
    ACTIONS(186), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(256), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [2419] = 11,
    ACTIONS(172), 1,
      anon_sym_array,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_real,
    ACTIONS(262), 1,
      sym_refersTo,
    STATE(183), 1,
      sym__type_name,
    STATE(245), 1,
      sym__custom_type,
    STATE(247), 1,
      sym__custom_generic_type,
    STATE(248), 1,
      sym__custom_generic_instantiated_type,
    STATE(284), 1,
      sym_type,
    ACTIONS(258), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(242), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2456] = 11,
    ACTIONS(172), 1,
      anon_sym_array,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_real,
    ACTIONS(262), 1,
      sym_refersTo,
    STATE(183), 1,
      sym__type_name,
    STATE(245), 1,
      sym__custom_type,
    STATE(247), 1,
      sym__custom_generic_type,
    STATE(248), 1,
      sym__custom_generic_instantiated_type,
    STATE(315), 1,
      sym_type,
    ACTIONS(258), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(242), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2493] = 11,
    ACTIONS(172), 1,
      anon_sym_array,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_real,
    ACTIONS(262), 1,
      sym_refersTo,
    STATE(183), 1,
      sym__type_name,
    STATE(245), 1,
      sym__custom_type,
    STATE(247), 1,
      sym__custom_generic_type,
    STATE(248), 1,
      sym__custom_generic_instantiated_type,
    STATE(291), 1,
      sym_type,
    ACTIONS(258), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(242), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2530] = 11,
    ACTIONS(266), 1,
      anon_sym_real,
    ACTIONS(268), 1,
      anon_sym_array,
    ACTIONS(270), 1,
      sym_refersTo,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(184), 1,
      sym__type_name,
    STATE(266), 1,
      sym_declaration_type,
    STATE(309), 1,
      sym__custom_generic_instantiated_type,
    STATE(310), 1,
      sym__custom_generic_type,
    STATE(313), 1,
      sym__custom_type,
    ACTIONS(264), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(301), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2567] = 11,
    ACTIONS(266), 1,
      anon_sym_real,
    ACTIONS(268), 1,
      anon_sym_array,
    ACTIONS(270), 1,
      sym_refersTo,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(184), 1,
      sym__type_name,
    STATE(271), 1,
      sym_declaration_type,
    STATE(309), 1,
      sym__custom_generic_instantiated_type,
    STATE(310), 1,
      sym__custom_generic_type,
    STATE(313), 1,
      sym__custom_type,
    ACTIONS(264), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(301), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2604] = 11,
    ACTIONS(266), 1,
      anon_sym_real,
    ACTIONS(268), 1,
      anon_sym_array,
    ACTIONS(270), 1,
      sym_refersTo,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(184), 1,
      sym__type_name,
    STATE(230), 1,
      sym_declaration_type,
    STATE(309), 1,
      sym__custom_generic_instantiated_type,
    STATE(310), 1,
      sym__custom_generic_type,
    STATE(313), 1,
      sym__custom_type,
    ACTIONS(264), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(301), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2641] = 11,
    ACTIONS(266), 1,
      anon_sym_real,
    ACTIONS(268), 1,
      anon_sym_array,
    ACTIONS(270), 1,
      sym_refersTo,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(184), 1,
      sym__type_name,
    STATE(225), 1,
      sym_declaration_type,
    STATE(309), 1,
      sym__custom_generic_instantiated_type,
    STATE(310), 1,
      sym__custom_generic_type,
    STATE(313), 1,
      sym__custom_type,
    ACTIONS(264), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(301), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2678] = 4,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(252), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(233), 7,
      sym__indent,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2701] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(59), 1,
      sym_primary_expression,
    ACTIONS(162), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(164), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(57), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2726] = 6,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(65), 1,
      sym_primary_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2751] = 6,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(9), 1,
      sym_primary_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2776] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(61), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2801] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(63), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(61), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2826] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(142), 1,
      sym_primary_expression,
    ACTIONS(162), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(164), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(57), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2851] = 6,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(7), 1,
      sym_primary_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2876] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(127), 1,
      sym_primary_expression,
    ACTIONS(162), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(164), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(57), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2901] = 4,
    STATE(91), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(279), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(274), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [2922] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(82), 1,
      sym_primary_expression,
    ACTIONS(162), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(164), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(57), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2947] = 4,
    STATE(98), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(188), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(182), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(282), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [2968] = 6,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(62), 1,
      sym_primary_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2993] = 4,
    STATE(91), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(190), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(282), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3014] = 6,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(74), 1,
      sym_primary_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3039] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(68), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(61), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3064] = 4,
    STATE(98), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(287), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(284), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(274), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [3085] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(67), 1,
      sym_primary_expression,
    ACTIONS(162), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(164), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(57), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3110] = 7,
    ACTIONS(292), 1,
      anon_sym_elsif,
    ACTIONS(294), 1,
      anon_sym_else,
    ACTIONS(296), 1,
      sym__dedent,
    STATE(106), 1,
      aux_sym_if_then_statement_repeat1,
    STATE(138), 1,
      sym_elsif,
    STATE(147), 1,
      sym_else,
    ACTIONS(290), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3136] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_constant_repeat1,
    ACTIONS(298), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3154] = 3,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_constant_repeat1,
    ACTIONS(300), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3172] = 7,
    ACTIONS(292), 1,
      anon_sym_elsif,
    ACTIONS(294), 1,
      anon_sym_else,
    ACTIONS(307), 1,
      sym__dedent,
    STATE(100), 1,
      aux_sym_if_then_statement_repeat1,
    STATE(138), 1,
      sym_elsif,
    STATE(155), 1,
      sym_else,
    ACTIONS(305), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3198] = 4,
    STATE(105), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(254), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(250), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3217] = 4,
    STATE(105), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(312), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(309), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3236] = 5,
    ACTIONS(317), 1,
      anon_sym_elsif,
    ACTIONS(320), 1,
      sym__dedent,
    STATE(106), 1,
      aux_sym_if_then_statement_repeat1,
    STATE(138), 1,
      sym_elsif,
    ACTIONS(315), 6,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
  [3257] = 1,
    ACTIONS(322), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3269] = 1,
    ACTIONS(324), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3281] = 1,
    ACTIONS(326), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3293] = 1,
    ACTIONS(328), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3305] = 1,
    ACTIONS(330), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3317] = 1,
    ACTIONS(332), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3329] = 1,
    ACTIONS(334), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3341] = 1,
    ACTIONS(336), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3353] = 1,
    ACTIONS(338), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3365] = 1,
    ACTIONS(340), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3377] = 1,
    ACTIONS(342), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3389] = 1,
    ACTIONS(342), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3401] = 1,
    ACTIONS(344), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3413] = 1,
    ACTIONS(346), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3425] = 1,
    ACTIONS(348), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3437] = 1,
    ACTIONS(338), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3449] = 1,
    ACTIONS(350), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3461] = 1,
    ACTIONS(352), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3473] = 1,
    ACTIONS(354), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3485] = 1,
    ACTIONS(356), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3497] = 5,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_constant_repeat1,
    ACTIONS(239), 2,
      sym__indent,
      anon_sym_constants,
    ACTIONS(252), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
  [3517] = 1,
    ACTIONS(360), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3529] = 1,
    ACTIONS(324), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3541] = 1,
    ACTIONS(362), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3553] = 1,
    ACTIONS(364), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3565] = 1,
    ACTIONS(360), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3577] = 1,
    ACTIONS(366), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3589] = 6,
    ACTIONS(368), 1,
      anon_sym_constants,
    ACTIONS(370), 1,
      anon_sym_variables,
    ACTIONS(372), 1,
      sym__indent,
    STATE(122), 1,
      sym_block,
    STATE(139), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(169), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3610] = 2,
    ACTIONS(376), 1,
      sym__dedent,
    ACTIONS(374), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [3623] = 2,
    ACTIONS(346), 1,
      sym__dedent,
    ACTIONS(378), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [3636] = 6,
    ACTIONS(368), 1,
      anon_sym_constants,
    ACTIONS(370), 1,
      anon_sym_variables,
    ACTIONS(372), 1,
      sym__indent,
    STATE(115), 1,
      sym_block,
    STATE(143), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(191), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3657] = 2,
    ACTIONS(382), 1,
      sym__dedent,
    ACTIONS(380), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [3670] = 6,
    ACTIONS(368), 1,
      anon_sym_constants,
    ACTIONS(370), 1,
      anon_sym_variables,
    ACTIONS(372), 1,
      sym__indent,
    STATE(108), 1,
      sym_block,
    STATE(159), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
    STATE(167), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [3691] = 6,
    ACTIONS(368), 1,
      anon_sym_constants,
    ACTIONS(370), 1,
      anon_sym_variables,
    ACTIONS(372), 1,
      sym__indent,
    STATE(130), 1,
      sym_block,
    STATE(160), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
    STATE(167), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [3712] = 6,
    ACTIONS(368), 1,
      anon_sym_constants,
    ACTIONS(370), 1,
      anon_sym_variables,
    ACTIONS(372), 1,
      sym__indent,
    STATE(107), 1,
      sym_block,
    STATE(140), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(185), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3733] = 3,
    ACTIONS(252), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(256), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [3748] = 6,
    ACTIONS(368), 1,
      anon_sym_constants,
    ACTIONS(370), 1,
      anon_sym_variables,
    ACTIONS(372), 1,
      sym__indent,
    STATE(129), 1,
      sym_block,
    STATE(167), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(168), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3769] = 2,
    ACTIONS(348), 1,
      sym__dedent,
    ACTIONS(384), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [3782] = 2,
    ACTIONS(388), 1,
      sym__dedent,
    ACTIONS(386), 6,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
      sym_refersTo,
      sym_identifier,
  [3794] = 2,
    ACTIONS(392), 1,
      sym__dedent,
    ACTIONS(390), 6,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
      sym_refersTo,
      sym_identifier,
  [3806] = 2,
    ACTIONS(396), 1,
      sym__dedent,
    ACTIONS(394), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3817] = 2,
    ACTIONS(366), 1,
      sym__dedent,
    ACTIONS(398), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3828] = 2,
    ACTIONS(402), 1,
      sym__dedent,
    ACTIONS(400), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3839] = 2,
    ACTIONS(346), 1,
      sym__dedent,
    ACTIONS(378), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3850] = 2,
    ACTIONS(348), 1,
      sym__dedent,
    ACTIONS(384), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3861] = 2,
    ACTIONS(406), 1,
      sym__dedent,
    ACTIONS(404), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3872] = 6,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 1,
      anon_sym_var,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(263), 1,
      sym_parameter,
    STATE(322), 1,
      sym_var,
    STATE(323), 1,
      sym__parameters,
  [3891] = 2,
    ACTIONS(416), 1,
      sym__dedent,
    ACTIONS(414), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3902] = 2,
    ACTIONS(420), 1,
      sym__dedent,
    ACTIONS(418), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3913] = 2,
    ACTIONS(424), 1,
      sym__dedent,
    ACTIONS(422), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3924] = 2,
    ACTIONS(428), 1,
      sym__dedent,
    ACTIONS(426), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3935] = 3,
    ACTIONS(432), 1,
      anon_sym_and,
    ACTIONS(434), 1,
      anon_sym_or,
    ACTIONS(430), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [3947] = 4,
    ACTIONS(368), 1,
      anon_sym_constants,
    ACTIONS(372), 1,
      sym__indent,
    STATE(117), 1,
      sym_block,
    STATE(210), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3961] = 4,
    ACTIONS(368), 1,
      anon_sym_constants,
    ACTIONS(372), 1,
      sym__indent,
    STATE(109), 1,
      sym_block,
    STATE(210), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3975] = 3,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym__generics_repeat1,
    ACTIONS(438), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [3987] = 3,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(442), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [3999] = 3,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym__generics_repeat1,
    ACTIONS(444), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4011] = 1,
    ACTIONS(446), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [4019] = 2,
    ACTIONS(448), 1,
      anon_sym_and,
    ACTIONS(446), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_or,
  [4029] = 5,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      aux_sym_comment_token1,
    ACTIONS(454), 1,
      sym__newline,
    STATE(194), 1,
      aux_sym_generics_repeat1,
    STATE(287), 1,
      sym_comment,
  [4045] = 3,
    ACTIONS(458), 1,
      anon_sym_variables,
    ACTIONS(456), 2,
      sym__indent,
      anon_sym_constants,
    STATE(167), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [4057] = 4,
    ACTIONS(368), 1,
      anon_sym_constants,
    ACTIONS(372), 1,
      sym__indent,
    STATE(118), 1,
      sym_block,
    STATE(210), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4071] = 4,
    ACTIONS(368), 1,
      anon_sym_constants,
    ACTIONS(372), 1,
      sym__indent,
    STATE(128), 1,
      sym_block,
    STATE(210), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4085] = 5,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      aux_sym_comment_token1,
    ACTIONS(461), 1,
      sym__newline,
    STATE(166), 1,
      aux_sym_generics_repeat1,
    STATE(296), 1,
      sym_comment,
  [4101] = 3,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(463), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4113] = 5,
    ACTIONS(465), 1,
      sym_identifier,
    STATE(184), 1,
      sym__type_name,
    STATE(288), 1,
      sym__custom_generic_instantiated_type,
    STATE(299), 1,
      sym__custom_generic_type,
    STATE(300), 1,
      sym__custom_type,
  [4129] = 3,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(470), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4141] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym__generics_repeat1,
    ACTIONS(475), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4153] = 1,
    ACTIONS(477), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4161] = 1,
    ACTIONS(184), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4169] = 3,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym__generics_repeat1,
    ACTIONS(438), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4181] = 5,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      aux_sym_comment_token1,
    ACTIONS(483), 1,
      sym__newline,
    STATE(181), 1,
      aux_sym_generics_repeat1,
    STATE(358), 1,
      sym_comment,
  [4197] = 5,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(216), 1,
      sym__custom_generic_type,
    STATE(243), 1,
      sym__type_name,
    STATE(273), 1,
      sym__custom_type,
    STATE(274), 1,
      sym__custom_generic_instantiated_type,
  [4213] = 3,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym__generics_repeat1,
    ACTIONS(444), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4225] = 5,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      aux_sym_comment_token1,
    ACTIONS(487), 1,
      sym__newline,
    STATE(194), 1,
      aux_sym_generics_repeat1,
    STATE(361), 1,
      sym_comment,
  [4241] = 3,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym__generics_repeat1,
    ACTIONS(475), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4253] = 4,
    ACTIONS(494), 1,
      sym_identifier,
    STATE(163), 1,
      sym__generic,
    STATE(250), 1,
      sym__generics,
    ACTIONS(492), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4267] = 4,
    ACTIONS(496), 1,
      sym_identifier,
    STATE(180), 1,
      sym__generic,
    STATE(276), 1,
      sym__generics,
    ACTIONS(492), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4281] = 4,
    ACTIONS(368), 1,
      anon_sym_constants,
    ACTIONS(372), 1,
      sym__indent,
    STATE(125), 1,
      sym_block,
    STATE(210), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4295] = 1,
    ACTIONS(477), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [4303] = 5,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(183), 1,
      sym__type_name,
    STATE(216), 1,
      sym__custom_generic_type,
    STATE(273), 1,
      sym__custom_type,
    STATE(274), 1,
      sym__custom_generic_instantiated_type,
  [4319] = 1,
    ACTIONS(446), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4327] = 2,
    ACTIONS(432), 1,
      anon_sym_and,
    ACTIONS(446), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_or,
      aux_sym_comment_token1,
  [4337] = 1,
    ACTIONS(184), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [4345] = 4,
    ACTIONS(368), 1,
      anon_sym_constants,
    ACTIONS(372), 1,
      sym__indent,
    STATE(132), 1,
      sym_block,
    STATE(210), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4359] = 1,
    ACTIONS(498), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4366] = 3,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_export_repeat1,
    ACTIONS(503), 2,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4377] = 3,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_generics_repeat1,
    ACTIONS(508), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4388] = 1,
    ACTIONS(510), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4395] = 1,
    ACTIONS(512), 4,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
      sym_identifier,
  [4402] = 4,
    ACTIONS(410), 1,
      anon_sym_var,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(292), 1,
      sym_parameter,
    STATE(322), 1,
      sym_var,
  [4415] = 3,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(463), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4426] = 1,
    ACTIONS(516), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4433] = 3,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_constant_repeat1,
    ACTIONS(298), 2,
      sym__indent,
      anon_sym_constants,
  [4444] = 3,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(470), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4455] = 1,
    ACTIONS(521), 4,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
      sym_identifier,
  [4462] = 3,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(442), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4473] = 3,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(526), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4484] = 3,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(530), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4495] = 1,
    ACTIONS(512), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4502] = 3,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(532), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4513] = 3,
    ACTIONS(534), 1,
      aux_sym_comment_token1,
    ACTIONS(536), 1,
      sym__newline,
    STATE(152), 2,
      sym_comment,
      sym__end_line,
  [4524] = 3,
    ACTIONS(432), 1,
      anon_sym_and,
    ACTIONS(434), 1,
      anon_sym_or,
    ACTIONS(538), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4535] = 3,
    ACTIONS(540), 1,
      anon_sym_constants,
    ACTIONS(543), 1,
      sym__indent,
    STATE(210), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4546] = 4,
    ACTIONS(545), 1,
      anon_sym_and,
    ACTIONS(547), 1,
      anon_sym_or,
    ACTIONS(549), 1,
      sym__indent,
    STATE(157), 1,
      sym_block,
  [4559] = 3,
    ACTIONS(551), 1,
      anon_sym_generics,
    STATE(307), 1,
      sym_generics,
    ACTIONS(553), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4570] = 4,
    ACTIONS(545), 1,
      anon_sym_and,
    ACTIONS(547), 1,
      anon_sym_or,
    ACTIONS(549), 1,
      sym__indent,
    STATE(149), 1,
      sym_block,
  [4583] = 3,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_constant_repeat1,
    ACTIONS(300), 2,
      sym__indent,
      anon_sym_constants,
  [4594] = 1,
    ACTIONS(521), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4601] = 1,
    ACTIONS(558), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4607] = 1,
    ACTIONS(334), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4613] = 3,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_COLON,
    STATE(193), 1,
      aux_sym_export_repeat1,
  [4623] = 3,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      anon_sym_COLON,
    STATE(218), 1,
      aux_sym_export_repeat1,
  [4633] = 1,
    ACTIONS(566), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4639] = 3,
    ACTIONS(448), 1,
      anon_sym_and,
    ACTIONS(568), 1,
      anon_sym_RBRACK,
    ACTIONS(570), 1,
      anon_sym_or,
  [4649] = 1,
    ACTIONS(572), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4655] = 3,
    ACTIONS(448), 1,
      anon_sym_and,
    ACTIONS(570), 1,
      anon_sym_or,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
  [4665] = 3,
    ACTIONS(448), 1,
      anon_sym_and,
    ACTIONS(570), 1,
      anon_sym_or,
    ACTIONS(576), 1,
      anon_sym_RBRACK,
  [4675] = 3,
    ACTIONS(481), 1,
      aux_sym_comment_token1,
    ACTIONS(578), 1,
      sym__newline,
    STATE(217), 1,
      sym_comment,
  [4685] = 3,
    ACTIONS(448), 1,
      anon_sym_and,
    ACTIONS(570), 1,
      anon_sym_or,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
  [4695] = 3,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      anon_sym_COLON,
    STATE(193), 1,
      aux_sym_export_repeat1,
  [4705] = 3,
    ACTIONS(584), 1,
      anon_sym_generics,
    ACTIONS(586), 1,
      sym__indent,
    STATE(343), 1,
      sym_generics,
  [4715] = 3,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    STATE(229), 1,
      aux_sym__parameters_repeat1,
  [4725] = 3,
    ACTIONS(481), 1,
      aux_sym_comment_token1,
    ACTIONS(593), 1,
      sym__newline,
    STATE(277), 1,
      sym_comment,
  [4735] = 3,
    ACTIONS(448), 1,
      anon_sym_and,
    ACTIONS(570), 1,
      anon_sym_or,
    ACTIONS(595), 1,
      anon_sym_then,
  [4745] = 3,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym_export_repeat1,
  [4755] = 3,
    ACTIONS(448), 1,
      anon_sym_and,
    ACTIONS(570), 1,
      anon_sym_or,
    ACTIONS(601), 1,
      anon_sym_RBRACK,
  [4765] = 3,
    ACTIONS(603), 1,
      anon_sym_LBRACK,
    ACTIONS(605), 1,
      sym__newline,
    STATE(339), 1,
      sym__multiple_import,
  [4775] = 3,
    ACTIONS(481), 1,
      aux_sym_comment_token1,
    ACTIONS(607), 1,
      sym__newline,
    STATE(134), 1,
      sym_comment,
  [4785] = 3,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(609), 1,
      anon_sym_COLON,
    STATE(240), 1,
      aux_sym_export_repeat1,
  [4795] = 3,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      anon_sym_RBRACK,
    STATE(237), 1,
      aux_sym_enum_repeat1,
  [4805] = 3,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(616), 1,
      sym__newline,
    STATE(251), 1,
      aux_sym_export_repeat1,
  [4815] = 3,
    ACTIONS(618), 1,
      sym_identifier,
    STATE(270), 1,
      sym_function_header,
    STATE(305), 1,
      sym__function_header,
  [4825] = 3,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      anon_sym_COLON,
    STATE(193), 1,
      aux_sym_export_repeat1,
  [4835] = 1,
    ACTIONS(622), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4841] = 1,
    ACTIONS(624), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4847] = 3,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(163), 1,
      sym__generic,
    STATE(352), 1,
      sym__generics,
  [4857] = 1,
    ACTIONS(629), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4863] = 1,
    ACTIONS(631), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4869] = 1,
    ACTIONS(633), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4875] = 1,
    ACTIONS(635), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4881] = 1,
    ACTIONS(637), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4887] = 1,
    ACTIONS(526), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4893] = 2,
    ACTIONS(641), 1,
      sym_identifier,
    ACTIONS(639), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4901] = 3,
    ACTIONS(503), 1,
      sym__newline,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_export_repeat1,
  [4911] = 3,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      anon_sym_RBRACK,
    STATE(278), 1,
      aux_sym_export_repeat1,
  [4921] = 2,
    ACTIONS(650), 1,
      anon_sym_from,
    ACTIONS(648), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4929] = 3,
    ACTIONS(448), 1,
      anon_sym_and,
    ACTIONS(570), 1,
      anon_sym_or,
    ACTIONS(652), 1,
      anon_sym_then,
  [4939] = 2,
    ACTIONS(654), 1,
      anon_sym_from,
    ACTIONS(648), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4947] = 1,
    ACTIONS(656), 3,
      sym__newline,
      anon_sym_generics,
      aux_sym_comment_token1,
  [4953] = 3,
    ACTIONS(448), 1,
      anon_sym_and,
    ACTIONS(570), 1,
      anon_sym_or,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
  [4963] = 2,
    ACTIONS(660), 1,
      anon_sym_from,
    ACTIONS(648), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4971] = 2,
    ACTIONS(662), 1,
      anon_sym_from,
    ACTIONS(648), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4979] = 1,
    ACTIONS(622), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4985] = 1,
    ACTIONS(498), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4991] = 3,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(664), 1,
      anon_sym_COLON,
    STATE(283), 1,
      aux_sym_export_repeat1,
  [5001] = 3,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
    ACTIONS(668), 1,
      anon_sym_SEMI,
    STATE(279), 1,
      aux_sym__parameters_repeat1,
  [5011] = 2,
    ACTIONS(545), 1,
      anon_sym_and,
    ACTIONS(446), 2,
      sym__indent,
      anon_sym_or,
  [5019] = 1,
    ACTIONS(503), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [5025] = 3,
    ACTIONS(670), 1,
      aux_sym_comment_token1,
    ACTIONS(672), 1,
      sym__newline,
    STATE(113), 1,
      sym_comment,
  [5035] = 1,
    ACTIONS(446), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [5041] = 1,
    ACTIONS(366), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [5047] = 3,
    ACTIONS(674), 1,
      anon_sym_COMMA,
    ACTIONS(676), 1,
      anon_sym_RBRACK,
    STATE(237), 1,
      aux_sym_enum_repeat1,
  [5057] = 3,
    ACTIONS(481), 1,
      aux_sym_comment_token1,
    ACTIONS(678), 1,
      sym__newline,
    STATE(141), 1,
      sym_comment,
  [5067] = 3,
    ACTIONS(670), 1,
      aux_sym_comment_token1,
    ACTIONS(680), 1,
      sym__newline,
    STATE(131), 1,
      sym_comment,
  [5077] = 3,
    ACTIONS(674), 1,
      anon_sym_COMMA,
    ACTIONS(682), 1,
      anon_sym_RBRACK,
    STATE(269), 1,
      aux_sym_enum_repeat1,
  [5087] = 1,
    ACTIONS(684), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5093] = 1,
    ACTIONS(686), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5099] = 1,
    ACTIONS(477), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [5105] = 2,
    ACTIONS(688), 1,
      sym_identifier,
    ACTIONS(639), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5113] = 1,
    ACTIONS(364), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [5119] = 3,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(690), 1,
      anon_sym_RBRACK,
    STATE(193), 1,
      aux_sym_export_repeat1,
  [5129] = 3,
    ACTIONS(668), 1,
      anon_sym_SEMI,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      aux_sym__parameters_repeat1,
  [5139] = 3,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_COLON,
    STATE(227), 1,
      aux_sym_export_repeat1,
  [5149] = 1,
    ACTIONS(184), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [5155] = 1,
    ACTIONS(696), 3,
      sym__newline,
      anon_sym_generics,
      aux_sym_comment_token1,
  [5161] = 3,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_COLON,
    STATE(193), 1,
      aux_sym_export_repeat1,
  [5171] = 1,
    ACTIONS(698), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5176] = 2,
    ACTIONS(496), 1,
      sym_identifier,
    STATE(196), 1,
      sym__generic,
  [5183] = 1,
    ACTIONS(700), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5188] = 1,
    ACTIONS(700), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5193] = 1,
    ACTIONS(686), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5198] = 2,
    ACTIONS(618), 1,
      sym_identifier,
    STATE(235), 1,
      sym__function_header,
  [5205] = 2,
    ACTIONS(494), 1,
      sym_identifier,
    STATE(206), 1,
      sym__generic,
  [5212] = 1,
    ACTIONS(702), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5217] = 1,
    ACTIONS(588), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5222] = 2,
    ACTIONS(704), 1,
      sym_identifier,
    STATE(244), 1,
      sym_variable_access,
  [5229] = 2,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
    STATE(212), 1,
      sym_parameters,
  [5236] = 1,
    ACTIONS(708), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5241] = 1,
    ACTIONS(710), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5246] = 2,
    ACTIONS(712), 1,
      anon_sym_from,
    ACTIONS(714), 1,
      sym_identifier,
  [5253] = 2,
    ACTIONS(714), 1,
      sym_identifier,
    ACTIONS(716), 1,
      anon_sym_from,
  [5260] = 1,
    ACTIONS(558), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5265] = 1,
    ACTIONS(684), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5270] = 1,
    ACTIONS(718), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5275] = 2,
    ACTIONS(720), 1,
      sym__indent,
    STATE(135), 1,
      sym_block,
  [5282] = 1,
    ACTIONS(722), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5287] = 2,
    ACTIONS(549), 1,
      sym__indent,
    STATE(154), 1,
      sym_block,
  [5294] = 1,
    ACTIONS(724), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5299] = 2,
    ACTIONS(549), 1,
      sym__indent,
    STATE(156), 1,
      sym_block,
  [5306] = 1,
    ACTIONS(726), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5311] = 1,
    ACTIONS(366), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5316] = 1,
    ACTIONS(637), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5321] = 1,
    ACTIONS(635), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5326] = 2,
    ACTIONS(720), 1,
      sym__indent,
    STATE(103), 1,
      sym_block,
  [5333] = 1,
    ACTIONS(503), 2,
      sym__newline,
      anon_sym_COMMA,
  [5338] = 1,
    ACTIONS(631), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5343] = 1,
    ACTIONS(633), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5348] = 1,
    ACTIONS(728), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5353] = 1,
    ACTIONS(730), 1,
      sym_identifier,
  [5357] = 1,
    ACTIONS(732), 1,
      anon_sym_EQ,
  [5361] = 1,
    ACTIONS(734), 1,
      sym_identifier,
  [5365] = 1,
    ACTIONS(736), 1,
      sym_identifier,
  [5369] = 1,
    ACTIONS(738), 1,
      sym_identifier,
  [5373] = 1,
    ACTIONS(740), 1,
      sym_integer,
  [5377] = 1,
    ACTIONS(742), 1,
      sym_identifier,
  [5381] = 1,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
  [5385] = 1,
    ACTIONS(746), 1,
      sym_identifier,
  [5389] = 1,
    ACTIONS(748), 1,
      sym_identifier,
  [5393] = 1,
    ACTIONS(750), 1,
      sym_integer,
  [5397] = 1,
    ACTIONS(752), 1,
      anon_sym_of,
  [5401] = 1,
    ACTIONS(754), 1,
      sym_identifier,
  [5405] = 1,
    ACTIONS(756), 1,
      anon_sym_to,
  [5409] = 1,
    ACTIONS(758), 1,
      sym_integer,
  [5413] = 1,
    ACTIONS(760), 1,
      sym_integer,
  [5417] = 1,
    ACTIONS(762), 1,
      anon_sym_of,
  [5421] = 1,
    ACTIONS(764), 1,
      sym_identifier,
  [5425] = 1,
    ACTIONS(766), 1,
      sym_integer,
  [5429] = 1,
    ACTIONS(768), 1,
      sym_identifier,
  [5433] = 1,
    ACTIONS(770), 1,
      sym_float,
  [5437] = 1,
    ACTIONS(772), 1,
      sym_float,
  [5441] = 1,
    ACTIONS(774), 1,
      sym__newline,
  [5445] = 1,
    ACTIONS(776), 1,
      sym__newline,
  [5449] = 1,
    ACTIONS(778), 1,
      sym_identifier,
  [5453] = 1,
    ACTIONS(772), 1,
      sym_integer,
  [5457] = 1,
    ACTIONS(780), 1,
      sym_identifier,
  [5461] = 1,
    ACTIONS(782), 1,
      sym__indent,
  [5465] = 1,
    ACTIONS(784), 1,
      sym_identifier,
  [5469] = 1,
    ACTIONS(786), 1,
      anon_sym_LBRACK,
  [5473] = 1,
    ACTIONS(788), 1,
      anon_sym_COLON_EQ,
  [5477] = 1,
    ACTIONS(790), 1,
      anon_sym_EQ,
  [5481] = 1,
    ACTIONS(792), 1,
      anon_sym_for,
  [5485] = 1,
    ACTIONS(794), 1,
      sym_identifier,
  [5489] = 1,
    ACTIONS(796), 1,
      sym__newline,
  [5493] = 1,
    ACTIONS(798), 1,
      anon_sym_to,
  [5497] = 1,
    ACTIONS(800), 1,
      sym_identifier,
  [5501] = 1,
    ACTIONS(803), 1,
      anon_sym_from,
  [5505] = 1,
    ACTIONS(805), 1,
      anon_sym_until,
  [5509] = 1,
    ACTIONS(807), 1,
      anon_sym_from,
  [5513] = 1,
    ACTIONS(809), 1,
      sym__newline,
  [5517] = 1,
    ACTIONS(811), 1,
      anon_sym_EQ,
  [5521] = 1,
    ACTIONS(710), 1,
      sym__indent,
  [5525] = 1,
    ACTIONS(813), 1,
      sym_identifier,
  [5529] = 1,
    ACTIONS(815), 1,
      sym__newline,
  [5533] = 1,
    ACTIONS(700), 1,
      sym__indent,
  [5537] = 1,
    ACTIONS(817), 1,
      anon_sym_EQ,
  [5541] = 1,
    ACTIONS(819), 1,
      sym_integer,
  [5545] = 1,
    ACTIONS(819), 1,
      sym_float,
  [5549] = 1,
    ACTIONS(821), 1,
      sym_identifier,
  [5553] = 1,
    ACTIONS(823), 1,
      sym__newline,
  [5557] = 1,
    ACTIONS(825), 1,
      ts_builtin_sym_end,
  [5561] = 1,
    ACTIONS(827), 1,
      sym_identifier,
  [5565] = 1,
    ACTIONS(829), 1,
      sym_identifier,
  [5569] = 1,
    ACTIONS(700), 1,
      sym__indent,
  [5573] = 1,
    ACTIONS(831), 1,
      sym_identifier,
  [5577] = 1,
    ACTIONS(833), 1,
      sym_identifier,
  [5581] = 1,
    ACTIONS(835), 1,
      sym__newline,
  [5585] = 1,
    ACTIONS(837), 1,
      anon_sym_EQ,
  [5589] = 1,
    ACTIONS(839), 1,
      sym_identifier,
  [5593] = 1,
    ACTIONS(841), 1,
      sym_identifier,
  [5597] = 1,
    ACTIONS(843), 1,
      sym__newline,
  [5601] = 1,
    ACTIONS(845), 1,
      sym_identifier,
  [5605] = 1,
    ACTIONS(847), 1,
      sym_identifier,
  [5609] = 1,
    ACTIONS(849), 1,
      sym_identifier,
  [5613] = 1,
    ACTIONS(851), 1,
      anon_sym_to,
  [5617] = 1,
    ACTIONS(853), 1,
      anon_sym_to,
  [5621] = 1,
    ACTIONS(855), 1,
      sym_identifier,
  [5625] = 1,
    ACTIONS(857), 1,
      sym_identifier,
  [5629] = 1,
    ACTIONS(859), 1,
      sym_identifier,
  [5633] = 1,
    ACTIONS(861), 1,
      anon_sym_to,
  [5637] = 1,
    ACTIONS(863), 1,
      anon_sym_to,
  [5641] = 1,
    ACTIONS(865), 1,
      sym_integer,
  [5645] = 1,
    ACTIONS(867), 1,
      sym_float,
  [5649] = 1,
    ACTIONS(869), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 150,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 254,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 316,
  [SMALL_STATE(12)] = 376,
  [SMALL_STATE(13)] = 406,
  [SMALL_STATE(14)] = 436,
  [SMALL_STATE(15)] = 466,
  [SMALL_STATE(16)] = 496,
  [SMALL_STATE(17)] = 526,
  [SMALL_STATE(18)] = 556,
  [SMALL_STATE(19)] = 600,
  [SMALL_STATE(20)] = 639,
  [SMALL_STATE(21)] = 678,
  [SMALL_STATE(22)] = 701,
  [SMALL_STATE(23)] = 724,
  [SMALL_STATE(24)] = 747,
  [SMALL_STATE(25)] = 786,
  [SMALL_STATE(26)] = 825,
  [SMALL_STATE(27)] = 848,
  [SMALL_STATE(28)] = 884,
  [SMALL_STATE(29)] = 920,
  [SMALL_STATE(30)] = 956,
  [SMALL_STATE(31)] = 992,
  [SMALL_STATE(32)] = 1028,
  [SMALL_STATE(33)] = 1074,
  [SMALL_STATE(34)] = 1110,
  [SMALL_STATE(35)] = 1146,
  [SMALL_STATE(36)] = 1192,
  [SMALL_STATE(37)] = 1228,
  [SMALL_STATE(38)] = 1264,
  [SMALL_STATE(39)] = 1300,
  [SMALL_STATE(40)] = 1336,
  [SMALL_STATE(41)] = 1372,
  [SMALL_STATE(42)] = 1408,
  [SMALL_STATE(43)] = 1444,
  [SMALL_STATE(44)] = 1480,
  [SMALL_STATE(45)] = 1516,
  [SMALL_STATE(46)] = 1562,
  [SMALL_STATE(47)] = 1598,
  [SMALL_STATE(48)] = 1634,
  [SMALL_STATE(49)] = 1664,
  [SMALL_STATE(50)] = 1700,
  [SMALL_STATE(51)] = 1736,
  [SMALL_STATE(52)] = 1766,
  [SMALL_STATE(53)] = 1801,
  [SMALL_STATE(54)] = 1836,
  [SMALL_STATE(55)] = 1871,
  [SMALL_STATE(56)] = 1906,
  [SMALL_STATE(57)] = 1941,
  [SMALL_STATE(58)] = 1962,
  [SMALL_STATE(59)] = 1983,
  [SMALL_STATE(60)] = 2004,
  [SMALL_STATE(61)] = 2047,
  [SMALL_STATE(62)] = 2068,
  [SMALL_STATE(63)] = 2093,
  [SMALL_STATE(64)] = 2114,
  [SMALL_STATE(65)] = 2149,
  [SMALL_STATE(66)] = 2176,
  [SMALL_STATE(67)] = 2211,
  [SMALL_STATE(68)] = 2234,
  [SMALL_STATE(69)] = 2259,
  [SMALL_STATE(70)] = 2302,
  [SMALL_STATE(71)] = 2323,
  [SMALL_STATE(72)] = 2346,
  [SMALL_STATE(73)] = 2369,
  [SMALL_STATE(74)] = 2397,
  [SMALL_STATE(75)] = 2419,
  [SMALL_STATE(76)] = 2456,
  [SMALL_STATE(77)] = 2493,
  [SMALL_STATE(78)] = 2530,
  [SMALL_STATE(79)] = 2567,
  [SMALL_STATE(80)] = 2604,
  [SMALL_STATE(81)] = 2641,
  [SMALL_STATE(82)] = 2678,
  [SMALL_STATE(83)] = 2701,
  [SMALL_STATE(84)] = 2726,
  [SMALL_STATE(85)] = 2751,
  [SMALL_STATE(86)] = 2776,
  [SMALL_STATE(87)] = 2801,
  [SMALL_STATE(88)] = 2826,
  [SMALL_STATE(89)] = 2851,
  [SMALL_STATE(90)] = 2876,
  [SMALL_STATE(91)] = 2901,
  [SMALL_STATE(92)] = 2922,
  [SMALL_STATE(93)] = 2947,
  [SMALL_STATE(94)] = 2968,
  [SMALL_STATE(95)] = 2993,
  [SMALL_STATE(96)] = 3014,
  [SMALL_STATE(97)] = 3039,
  [SMALL_STATE(98)] = 3064,
  [SMALL_STATE(99)] = 3085,
  [SMALL_STATE(100)] = 3110,
  [SMALL_STATE(101)] = 3136,
  [SMALL_STATE(102)] = 3154,
  [SMALL_STATE(103)] = 3172,
  [SMALL_STATE(104)] = 3198,
  [SMALL_STATE(105)] = 3217,
  [SMALL_STATE(106)] = 3236,
  [SMALL_STATE(107)] = 3257,
  [SMALL_STATE(108)] = 3269,
  [SMALL_STATE(109)] = 3281,
  [SMALL_STATE(110)] = 3293,
  [SMALL_STATE(111)] = 3305,
  [SMALL_STATE(112)] = 3317,
  [SMALL_STATE(113)] = 3329,
  [SMALL_STATE(114)] = 3341,
  [SMALL_STATE(115)] = 3353,
  [SMALL_STATE(116)] = 3365,
  [SMALL_STATE(117)] = 3377,
  [SMALL_STATE(118)] = 3389,
  [SMALL_STATE(119)] = 3401,
  [SMALL_STATE(120)] = 3413,
  [SMALL_STATE(121)] = 3425,
  [SMALL_STATE(122)] = 3437,
  [SMALL_STATE(123)] = 3449,
  [SMALL_STATE(124)] = 3461,
  [SMALL_STATE(125)] = 3473,
  [SMALL_STATE(126)] = 3485,
  [SMALL_STATE(127)] = 3497,
  [SMALL_STATE(128)] = 3517,
  [SMALL_STATE(129)] = 3529,
  [SMALL_STATE(130)] = 3541,
  [SMALL_STATE(131)] = 3553,
  [SMALL_STATE(132)] = 3565,
  [SMALL_STATE(133)] = 3577,
  [SMALL_STATE(134)] = 3589,
  [SMALL_STATE(135)] = 3610,
  [SMALL_STATE(136)] = 3623,
  [SMALL_STATE(137)] = 3636,
  [SMALL_STATE(138)] = 3657,
  [SMALL_STATE(139)] = 3670,
  [SMALL_STATE(140)] = 3691,
  [SMALL_STATE(141)] = 3712,
  [SMALL_STATE(142)] = 3733,
  [SMALL_STATE(143)] = 3748,
  [SMALL_STATE(144)] = 3769,
  [SMALL_STATE(145)] = 3782,
  [SMALL_STATE(146)] = 3794,
  [SMALL_STATE(147)] = 3806,
  [SMALL_STATE(148)] = 3817,
  [SMALL_STATE(149)] = 3828,
  [SMALL_STATE(150)] = 3839,
  [SMALL_STATE(151)] = 3850,
  [SMALL_STATE(152)] = 3861,
  [SMALL_STATE(153)] = 3872,
  [SMALL_STATE(154)] = 3891,
  [SMALL_STATE(155)] = 3902,
  [SMALL_STATE(156)] = 3913,
  [SMALL_STATE(157)] = 3924,
  [SMALL_STATE(158)] = 3935,
  [SMALL_STATE(159)] = 3947,
  [SMALL_STATE(160)] = 3961,
  [SMALL_STATE(161)] = 3975,
  [SMALL_STATE(162)] = 3987,
  [SMALL_STATE(163)] = 3999,
  [SMALL_STATE(164)] = 4011,
  [SMALL_STATE(165)] = 4019,
  [SMALL_STATE(166)] = 4029,
  [SMALL_STATE(167)] = 4045,
  [SMALL_STATE(168)] = 4057,
  [SMALL_STATE(169)] = 4071,
  [SMALL_STATE(170)] = 4085,
  [SMALL_STATE(171)] = 4101,
  [SMALL_STATE(172)] = 4113,
  [SMALL_STATE(173)] = 4129,
  [SMALL_STATE(174)] = 4141,
  [SMALL_STATE(175)] = 4153,
  [SMALL_STATE(176)] = 4161,
  [SMALL_STATE(177)] = 4169,
  [SMALL_STATE(178)] = 4181,
  [SMALL_STATE(179)] = 4197,
  [SMALL_STATE(180)] = 4213,
  [SMALL_STATE(181)] = 4225,
  [SMALL_STATE(182)] = 4241,
  [SMALL_STATE(183)] = 4253,
  [SMALL_STATE(184)] = 4267,
  [SMALL_STATE(185)] = 4281,
  [SMALL_STATE(186)] = 4295,
  [SMALL_STATE(187)] = 4303,
  [SMALL_STATE(188)] = 4319,
  [SMALL_STATE(189)] = 4327,
  [SMALL_STATE(190)] = 4337,
  [SMALL_STATE(191)] = 4345,
  [SMALL_STATE(192)] = 4359,
  [SMALL_STATE(193)] = 4366,
  [SMALL_STATE(194)] = 4377,
  [SMALL_STATE(195)] = 4388,
  [SMALL_STATE(196)] = 4395,
  [SMALL_STATE(197)] = 4402,
  [SMALL_STATE(198)] = 4415,
  [SMALL_STATE(199)] = 4426,
  [SMALL_STATE(200)] = 4433,
  [SMALL_STATE(201)] = 4444,
  [SMALL_STATE(202)] = 4455,
  [SMALL_STATE(203)] = 4462,
  [SMALL_STATE(204)] = 4473,
  [SMALL_STATE(205)] = 4484,
  [SMALL_STATE(206)] = 4495,
  [SMALL_STATE(207)] = 4502,
  [SMALL_STATE(208)] = 4513,
  [SMALL_STATE(209)] = 4524,
  [SMALL_STATE(210)] = 4535,
  [SMALL_STATE(211)] = 4546,
  [SMALL_STATE(212)] = 4559,
  [SMALL_STATE(213)] = 4570,
  [SMALL_STATE(214)] = 4583,
  [SMALL_STATE(215)] = 4594,
  [SMALL_STATE(216)] = 4601,
  [SMALL_STATE(217)] = 4607,
  [SMALL_STATE(218)] = 4613,
  [SMALL_STATE(219)] = 4623,
  [SMALL_STATE(220)] = 4633,
  [SMALL_STATE(221)] = 4639,
  [SMALL_STATE(222)] = 4649,
  [SMALL_STATE(223)] = 4655,
  [SMALL_STATE(224)] = 4665,
  [SMALL_STATE(225)] = 4675,
  [SMALL_STATE(226)] = 4685,
  [SMALL_STATE(227)] = 4695,
  [SMALL_STATE(228)] = 4705,
  [SMALL_STATE(229)] = 4715,
  [SMALL_STATE(230)] = 4725,
  [SMALL_STATE(231)] = 4735,
  [SMALL_STATE(232)] = 4745,
  [SMALL_STATE(233)] = 4755,
  [SMALL_STATE(234)] = 4765,
  [SMALL_STATE(235)] = 4775,
  [SMALL_STATE(236)] = 4785,
  [SMALL_STATE(237)] = 4795,
  [SMALL_STATE(238)] = 4805,
  [SMALL_STATE(239)] = 4815,
  [SMALL_STATE(240)] = 4825,
  [SMALL_STATE(241)] = 4835,
  [SMALL_STATE(242)] = 4841,
  [SMALL_STATE(243)] = 4847,
  [SMALL_STATE(244)] = 4857,
  [SMALL_STATE(245)] = 4863,
  [SMALL_STATE(246)] = 4869,
  [SMALL_STATE(247)] = 4875,
  [SMALL_STATE(248)] = 4881,
  [SMALL_STATE(249)] = 4887,
  [SMALL_STATE(250)] = 4893,
  [SMALL_STATE(251)] = 4901,
  [SMALL_STATE(252)] = 4911,
  [SMALL_STATE(253)] = 4921,
  [SMALL_STATE(254)] = 4929,
  [SMALL_STATE(255)] = 4939,
  [SMALL_STATE(256)] = 4947,
  [SMALL_STATE(257)] = 4953,
  [SMALL_STATE(258)] = 4963,
  [SMALL_STATE(259)] = 4971,
  [SMALL_STATE(260)] = 4979,
  [SMALL_STATE(261)] = 4985,
  [SMALL_STATE(262)] = 4991,
  [SMALL_STATE(263)] = 5001,
  [SMALL_STATE(264)] = 5011,
  [SMALL_STATE(265)] = 5019,
  [SMALL_STATE(266)] = 5025,
  [SMALL_STATE(267)] = 5035,
  [SMALL_STATE(268)] = 5041,
  [SMALL_STATE(269)] = 5047,
  [SMALL_STATE(270)] = 5057,
  [SMALL_STATE(271)] = 5067,
  [SMALL_STATE(272)] = 5077,
  [SMALL_STATE(273)] = 5087,
  [SMALL_STATE(274)] = 5093,
  [SMALL_STATE(275)] = 5099,
  [SMALL_STATE(276)] = 5105,
  [SMALL_STATE(277)] = 5113,
  [SMALL_STATE(278)] = 5119,
  [SMALL_STATE(279)] = 5129,
  [SMALL_STATE(280)] = 5139,
  [SMALL_STATE(281)] = 5149,
  [SMALL_STATE(282)] = 5155,
  [SMALL_STATE(283)] = 5161,
  [SMALL_STATE(284)] = 5171,
  [SMALL_STATE(285)] = 5176,
  [SMALL_STATE(286)] = 5183,
  [SMALL_STATE(287)] = 5188,
  [SMALL_STATE(288)] = 5193,
  [SMALL_STATE(289)] = 5198,
  [SMALL_STATE(290)] = 5205,
  [SMALL_STATE(291)] = 5212,
  [SMALL_STATE(292)] = 5217,
  [SMALL_STATE(293)] = 5222,
  [SMALL_STATE(294)] = 5229,
  [SMALL_STATE(295)] = 5236,
  [SMALL_STATE(296)] = 5241,
  [SMALL_STATE(297)] = 5246,
  [SMALL_STATE(298)] = 5253,
  [SMALL_STATE(299)] = 5260,
  [SMALL_STATE(300)] = 5265,
  [SMALL_STATE(301)] = 5270,
  [SMALL_STATE(302)] = 5275,
  [SMALL_STATE(303)] = 5282,
  [SMALL_STATE(304)] = 5287,
  [SMALL_STATE(305)] = 5294,
  [SMALL_STATE(306)] = 5299,
  [SMALL_STATE(307)] = 5306,
  [SMALL_STATE(308)] = 5311,
  [SMALL_STATE(309)] = 5316,
  [SMALL_STATE(310)] = 5321,
  [SMALL_STATE(311)] = 5326,
  [SMALL_STATE(312)] = 5333,
  [SMALL_STATE(313)] = 5338,
  [SMALL_STATE(314)] = 5343,
  [SMALL_STATE(315)] = 5348,
  [SMALL_STATE(316)] = 5353,
  [SMALL_STATE(317)] = 5357,
  [SMALL_STATE(318)] = 5361,
  [SMALL_STATE(319)] = 5365,
  [SMALL_STATE(320)] = 5369,
  [SMALL_STATE(321)] = 5373,
  [SMALL_STATE(322)] = 5377,
  [SMALL_STATE(323)] = 5381,
  [SMALL_STATE(324)] = 5385,
  [SMALL_STATE(325)] = 5389,
  [SMALL_STATE(326)] = 5393,
  [SMALL_STATE(327)] = 5397,
  [SMALL_STATE(328)] = 5401,
  [SMALL_STATE(329)] = 5405,
  [SMALL_STATE(330)] = 5409,
  [SMALL_STATE(331)] = 5413,
  [SMALL_STATE(332)] = 5417,
  [SMALL_STATE(333)] = 5421,
  [SMALL_STATE(334)] = 5425,
  [SMALL_STATE(335)] = 5429,
  [SMALL_STATE(336)] = 5433,
  [SMALL_STATE(337)] = 5437,
  [SMALL_STATE(338)] = 5441,
  [SMALL_STATE(339)] = 5445,
  [SMALL_STATE(340)] = 5449,
  [SMALL_STATE(341)] = 5453,
  [SMALL_STATE(342)] = 5457,
  [SMALL_STATE(343)] = 5461,
  [SMALL_STATE(344)] = 5465,
  [SMALL_STATE(345)] = 5469,
  [SMALL_STATE(346)] = 5473,
  [SMALL_STATE(347)] = 5477,
  [SMALL_STATE(348)] = 5481,
  [SMALL_STATE(349)] = 5485,
  [SMALL_STATE(350)] = 5489,
  [SMALL_STATE(351)] = 5493,
  [SMALL_STATE(352)] = 5497,
  [SMALL_STATE(353)] = 5501,
  [SMALL_STATE(354)] = 5505,
  [SMALL_STATE(355)] = 5509,
  [SMALL_STATE(356)] = 5513,
  [SMALL_STATE(357)] = 5517,
  [SMALL_STATE(358)] = 5521,
  [SMALL_STATE(359)] = 5525,
  [SMALL_STATE(360)] = 5529,
  [SMALL_STATE(361)] = 5533,
  [SMALL_STATE(362)] = 5537,
  [SMALL_STATE(363)] = 5541,
  [SMALL_STATE(364)] = 5545,
  [SMALL_STATE(365)] = 5549,
  [SMALL_STATE(366)] = 5553,
  [SMALL_STATE(367)] = 5557,
  [SMALL_STATE(368)] = 5561,
  [SMALL_STATE(369)] = 5565,
  [SMALL_STATE(370)] = 5569,
  [SMALL_STATE(371)] = 5573,
  [SMALL_STATE(372)] = 5577,
  [SMALL_STATE(373)] = 5581,
  [SMALL_STATE(374)] = 5585,
  [SMALL_STATE(375)] = 5589,
  [SMALL_STATE(376)] = 5593,
  [SMALL_STATE(377)] = 5597,
  [SMALL_STATE(378)] = 5601,
  [SMALL_STATE(379)] = 5605,
  [SMALL_STATE(380)] = 5609,
  [SMALL_STATE(381)] = 5613,
  [SMALL_STATE(382)] = 5617,
  [SMALL_STATE(383)] = 5621,
  [SMALL_STATE(384)] = 5625,
  [SMALL_STATE(385)] = 5629,
  [SMALL_STATE(386)] = 5633,
  [SMALL_STATE(387)] = 5637,
  [SMALL_STATE(388)] = 5641,
  [SMALL_STATE(389)] = 5645,
  [SMALL_STATE(390)] = 5649,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 2, .production_id = 22),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 2, .production_id = 22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 33),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 33), SHIFT_REPEAT(47),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 33),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 33), SHIFT_REPEAT(319),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 46),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 46),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 32),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 32),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 34),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 34),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 1, .production_id = 19),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 33), SHIFT_REPEAT(33),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 33), SHIFT_REPEAT(359),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 33), SHIFT_REPEAT(42),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 33), SHIFT_REPEAT(371),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(318),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(384),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(383),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(379),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(289),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(376),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(369),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(368),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 17), SHIFT_REPEAT(297),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 17), SHIFT_REPEAT(298),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 17), SHIFT_REPEAT(332),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 17), SHIFT_REPEAT(179),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 17), SHIFT_REPEAT(241),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 17),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(333),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(354),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(43),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(49),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 44),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 44),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_argument, 1), REDUCE(sym_primary_expression, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 4),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 45),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 45), SHIFT_REPEAT(97),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 45), SHIFT_REPEAT(97),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 2, .production_id = 31),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 45), SHIFT_REPEAT(94),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 45), SHIFT_REPEAT(94),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 5, .production_id = 54),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 5, .production_id = 54),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2), SHIFT_REPEAT(320),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 4, .production_id = 50),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 4, .production_id = 50),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 45), SHIFT_REPEAT(92),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 45), SHIFT_REPEAT(92),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_then_statement_repeat1, 2, .production_id = 57),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_then_statement_repeat1, 2, .production_id = 57), SHIFT_REPEAT(46),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2, .production_id = 57),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, .production_id = 29),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 20),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 8, .production_id = 51),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7, .production_id = 35),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5, .production_id = 16),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2, .production_id = 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 28),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, .production_id = 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6, .production_id = 27),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7, .production_id = 43),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, .production_id = 23),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 21),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7, .production_id = 42),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elsif, 4, .production_id = 50),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif, 4, .production_id = 50),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_then_statement_repeat1, 1, .production_id = 52),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 1, .production_id = 52),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 1, .production_id = 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 1, .production_id = 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 3, .production_id = 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 3, .production_id = 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 6, .production_id = 56),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 6, .production_id = 56),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 4, .production_id = 49),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, .production_id = 49),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statement, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statement, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 7),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 5, .production_id = 53),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 5, .production_id = 53),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else, 2, .production_id = 55),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2, .production_id = 55),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 39),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 39),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 2, .production_id = 24),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_instantiated_type, 3, .production_id = 25),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 1, .production_id = 14),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 34),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(390),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_instantiated_type, 4, .production_id = 38),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 48), SHIFT_REPEAT(316),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 48),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 24), SHIFT_REPEAT(290),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 24),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 30),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 24), SHIFT_REPEAT(285),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 5),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 47),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(349),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 24), SHIFT_REPEAT(372),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 24),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 37),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 48), SHIFT_REPEAT(365),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic, 1, .production_id = 13),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2), SHIFT_REPEAT(18),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 19),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 19),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 41),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(385),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_header, 2, .production_id = 2),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2), SHIFT_REPEAT(380),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 11),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 18),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(197),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 36), SHIFT_REPEAT(324),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 36),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_name, 1, .production_id = 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 5), SHIFT(215),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 40),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 5),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 5),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 6),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 7),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_type, 2, .production_id = 15),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(342),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 10),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 12),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 4, .production_id = 26),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 3, .production_id = 18),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_type, 1),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delclaration_array_type, 7),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 1, .production_id = 9),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_header, 3, .production_id = 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__custom_generic_type, 2, .production_id = 15), SHIFT(162),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 4),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [825] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 3),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__dedent] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_shank_external_scanner_create(void);
void tree_sitter_shank_external_scanner_destroy(void *);
bool tree_sitter_shank_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_shank_external_scanner_serialize(void *, char *);
void tree_sitter_shank_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_shank(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_shank_external_scanner_create,
      tree_sitter_shank_external_scanner_destroy,
      tree_sitter_shank_external_scanner_scan,
      tree_sitter_shank_external_scanner_serialize,
      tree_sitter_shank_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
