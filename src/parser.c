#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 381
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 33
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 68

enum ts_symbol_identifiers {
  anon_sym_generic = 1,
  anon_sym_COMMA = 2,
  anon_sym_enum = 3,
  anon_sym_EQ = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_COLON = 7,
  anon_sym_record = 8,
  anon_sym_export = 9,
  anon_sym_import = 10,
  anon_sym_module = 11,
  anon_sym_define = 12,
  anon_sym_test = 13,
  anon_sym_for = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_COLON_EQ = 17,
  anon_sym_repeat = 18,
  anon_sym_until = 19,
  anon_sym_while = 20,
  anon_sym_var = 21,
  anon_sym_if = 22,
  anon_sym_then = 23,
  anon_sym_elsif = 24,
  anon_sym_else = 25,
  anon_sym_from = 26,
  anon_sym_to = 27,
  anon_sym_constants = 28,
  anon_sym_SEMI = 29,
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
  sym_real = 45,
  sym_string = 46,
  sym_character = 47,
  anon_sym_integer = 48,
  anon_sym_real = 49,
  anon_sym_string = 50,
  anon_sym_character = 51,
  anon_sym_boolean = 52,
  anon_sym_array = 53,
  anon_sym_of = 54,
  sym_refersTo = 55,
  aux_sym_comment_token1 = 56,
  sym_identifier = 57,
  anon_sym_DOT = 58,
  sym_true = 59,
  sym_false = 60,
  anon_sym_RBRACE = 61,
  sym__newline = 62,
  sym__indent = 63,
  sym__dedent = 64,
  sym_program = 65,
  sym_generics = 66,
  sym_enum = 67,
  sym_record_item = 68,
  sym_record = 69,
  sym_export = 70,
  sym_imports = 71,
  sym_import = 72,
  sym_module = 73,
  sym_function_definition = 74,
  sym__function_header = 75,
  sym_function_header = 76,
  sym_test = 77,
  sym_parameters = 78,
  sym_call_statement = 79,
  sym_assignment = 80,
  sym_expression = 81,
  sym__simple_statement = 82,
  sym__compound_statement = 83,
  sym_repeat_statement = 84,
  sym_while_statement = 85,
  sym_argument = 86,
  sym_if_then_statement = 87,
  sym_elsif = 88,
  sym_else = 89,
  sym_range = 90,
  sym_for = 91,
  sym_constant = 92,
  sym_block = 93,
  sym__parameters = 94,
  sym_var = 95,
  sym_parameter = 96,
  sym_variable = 97,
  sym_primary_expression = 98,
  sym_not_operator = 99,
  sym_boolean_operator = 100,
  sym_binary_operator = 101,
  sym_comparison_operator = 102,
  sym_parenthesized_expression = 103,
  sym_basis_type = 104,
  sym_array_type = 105,
  sym__generic = 106,
  sym_simple_custom_type = 107,
  sym_simple_reference_type = 108,
  sym__generics = 109,
  sym__type_name = 110,
  sym__custom_type = 111,
  sym__custom_generic_type = 112,
  sym_custom_type = 113,
  sym_reference_type = 114,
  sym_type = 115,
  sym_comment = 116,
  sym__end_line = 117,
  sym_variable_access = 118,
  aux_sym_program_repeat1 = 119,
  aux_sym_generics_repeat1 = 120,
  aux_sym_enum_repeat1 = 121,
  aux_sym_record_repeat1 = 122,
  aux_sym_export_repeat1 = 123,
  aux_sym_function_definition_repeat1 = 124,
  aux_sym_call_statement_repeat1 = 125,
  aux_sym_if_then_statement_repeat1 = 126,
  aux_sym_constant_repeat1 = 127,
  aux_sym_block_repeat1 = 128,
  aux_sym__parameters_repeat1 = 129,
  aux_sym_parameter_repeat1 = 130,
  aux_sym_comparison_operator_repeat1 = 131,
  aux_sym__generics_repeat1 = 132,
  aux_sym_variable_access_repeat1 = 133,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_generic] = "generic",
  [anon_sym_COMMA] = ",",
  [anon_sym_enum] = "enum",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
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
  [sym_real] = "real",
  [sym_string] = "string",
  [sym_character] = "character",
  [anon_sym_integer] = "integer",
  [anon_sym_real] = "real",
  [anon_sym_string] = "string",
  [anon_sym_character] = "character",
  [anon_sym_boolean] = "boolean",
  [anon_sym_array] = "array",
  [anon_sym_of] = "of",
  [sym_refersTo] = "refersTo",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [sym_true] = "true",
  [sym_false] = "false",
  [anon_sym_RBRACE] = "}",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_program] = "program",
  [sym_generics] = "generics",
  [sym_enum] = "enum",
  [sym_record_item] = "record_item",
  [sym_record] = "record",
  [sym_export] = "export",
  [sym_imports] = "imports",
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
  [sym_range] = "range",
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
  [sym__generic] = "_generic",
  [sym_simple_custom_type] = "custom_type",
  [sym_simple_reference_type] = "reference_type",
  [sym__generics] = "_generics",
  [sym__type_name] = "_type_name",
  [sym__custom_type] = "_custom_type",
  [sym__custom_generic_type] = "_custom_generic_type",
  [sym_custom_type] = "custom_type",
  [sym_reference_type] = "reference_type",
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
  [aux_sym_call_statement_repeat1] = "call_statement_repeat1",
  [aux_sym_if_then_statement_repeat1] = "if_then_statement_repeat1",
  [aux_sym_constant_repeat1] = "constant_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__parameters_repeat1] = "_parameters_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
  [aux_sym_comparison_operator_repeat1] = "comparison_operator_repeat1",
  [aux_sym__generics_repeat1] = "_generics_repeat1",
  [aux_sym_variable_access_repeat1] = "variable_access_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_generic] = anon_sym_generic,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_real] = sym_real,
  [sym_string] = sym_string,
  [sym_character] = sym_character,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_real] = anon_sym_real,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_character] = anon_sym_character,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_of] = anon_sym_of,
  [sym_refersTo] = sym_refersTo,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_program] = sym_program,
  [sym_generics] = sym_generics,
  [sym_enum] = sym_enum,
  [sym_record_item] = sym_record_item,
  [sym_record] = sym_record,
  [sym_export] = sym_export,
  [sym_imports] = sym_imports,
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
  [sym_range] = sym_range,
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
  [sym__generic] = sym__generic,
  [sym_simple_custom_type] = sym_custom_type,
  [sym_simple_reference_type] = sym_reference_type,
  [sym__generics] = sym__generics,
  [sym__type_name] = sym__type_name,
  [sym__custom_type] = sym__custom_type,
  [sym__custom_generic_type] = sym__custom_generic_type,
  [sym_custom_type] = sym_custom_type,
  [sym_reference_type] = sym_reference_type,
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
  [aux_sym_call_statement_repeat1] = aux_sym_call_statement_repeat1,
  [aux_sym_if_then_statement_repeat1] = aux_sym_if_then_statement_repeat1,
  [aux_sym_constant_repeat1] = aux_sym_constant_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__parameters_repeat1] = aux_sym__parameters_repeat1,
  [aux_sym_parameter_repeat1] = aux_sym_parameter_repeat1,
  [aux_sym_comparison_operator_repeat1] = aux_sym_comparison_operator_repeat1,
  [aux_sym__generics_repeat1] = aux_sym__generics_repeat1,
  [aux_sym_variable_access_repeat1] = aux_sym_variable_access_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_generic] = {
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
  [anon_sym_COLON] = {
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
  [sym_real] = {
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
  [anon_sym_character] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
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
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
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
  [sym_imports] = {
    .visible = true,
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
  [sym_range] = {
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
  [sym__generic] = {
    .visible = false,
    .named = true,
  },
  [sym_simple_custom_type] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_reference_type] = {
    .visible = true,
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
  [sym_custom_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_type] = {
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
  [aux_sym_parameter_repeat1] = {
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
  [aux_sym_variable_access_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_arguements = 2,
  field_argument = 3,
  field_array_access = 4,
  field_body = 5,
  field_condition = 6,
  field_consequent = 7,
  field_control = 8,
  field_default_value = 9,
  field_end = 10,
  field_field = 11,
  field_field_acces = 12,
  field_from = 13,
  field_function = 14,
  field_generic = 15,
  field_imports = 16,
  field_index = 17,
  field_left = 18,
  field_module = 19,
  field_name = 20,
  field_operator = 21,
  field_operators = 22,
  field_parameters = 23,
  field_range = 24,
  field_reference = 25,
  field_right = 26,
  field_start = 27,
  field_to = 28,
  field_type = 29,
  field_type_name = 30,
  field_value = 31,
  field_var = 32,
  field_variant = 33,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arguements] = "arguements",
  [field_argument] = "argument",
  [field_array_access] = "array_access",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequent] = "consequent",
  [field_control] = "control",
  [field_default_value] = "default_value",
  [field_end] = "end",
  [field_field] = "field",
  [field_field_acces] = "field_acces",
  [field_from] = "from",
  [field_function] = "function",
  [field_generic] = "generic",
  [field_imports] = "imports",
  [field_index] = "index",
  [field_left] = "left",
  [field_module] = "module",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_operators] = "operators",
  [field_parameters] = "parameters",
  [field_range] = "range",
  [field_reference] = "reference",
  [field_right] = "right",
  [field_start] = "start",
  [field_to] = "to",
  [field_type] = "type",
  [field_type_name] = "type_name",
  [field_value] = "value",
  [field_var] = "var",
  [field_variant] = "variant",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 2},
  [17] = {.index = 26, .length = 1},
  [18] = {.index = 27, .length = 2},
  [19] = {.index = 29, .length = 4},
  [20] = {.index = 33, .length = 2},
  [21] = {.index = 35, .length = 4},
  [22] = {.index = 39, .length = 1},
  [23] = {.index = 40, .length = 1},
  [24] = {.index = 41, .length = 1},
  [25] = {.index = 42, .length = 2},
  [26] = {.index = 44, .length = 2},
  [27] = {.index = 46, .length = 2},
  [28] = {.index = 48, .length = 2},
  [29] = {.index = 50, .length = 2},
  [30] = {.index = 52, .length = 2},
  [31] = {.index = 54, .length = 2},
  [32] = {.index = 56, .length = 1},
  [33] = {.index = 57, .length = 2},
  [34] = {.index = 59, .length = 1},
  [35] = {.index = 60, .length = 1},
  [36] = {.index = 61, .length = 2},
  [37] = {.index = 63, .length = 3},
  [38] = {.index = 66, .length = 8},
  [39] = {.index = 74, .length = 2},
  [40] = {.index = 76, .length = 3},
  [41] = {.index = 79, .length = 4},
  [42] = {.index = 83, .length = 3},
  [43] = {.index = 86, .length = 1},
  [44] = {.index = 87, .length = 3},
  [45] = {.index = 90, .length = 2},
  [46] = {.index = 92, .length = 3},
  [47] = {.index = 95, .length = 2},
  [48] = {.index = 97, .length = 2},
  [49] = {.index = 99, .length = 1},
  [50] = {.index = 100, .length = 2},
  [51] = {.index = 102, .length = 2},
  [52] = {.index = 104, .length = 3},
  [53] = {.index = 107, .length = 3},
  [54] = {.index = 110, .length = 1},
  [55] = {.index = 111, .length = 4},
  [56] = {.index = 115, .length = 3},
  [57] = {.index = 118, .length = 1},
  [58] = {.index = 119, .length = 3},
  [59] = {.index = 122, .length = 3},
  [60] = {.index = 125, .length = 2},
  [61] = {.index = 127, .length = 5},
  [62] = {.index = 132, .length = 4},
  [63] = {.index = 136, .length = 2},
  [64] = {.index = 138, .length = 1},
  [65] = {.index = 139, .length = 4},
  [66] = {.index = 143, .length = 2},
  [67] = {.index = 145, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_module, 1},
  [2] =
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
  [4] =
    {field_field, 0},
  [5] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [7] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [9] =
    {field_imports, 2},
    {field_module, 1},
  [11] =
    {field_name, 0},
    {field_parameters, 1},
  [13] =
    {field_function, 0},
  [14] =
    {field_name, 0, .inherited = true},
    {field_parameters, 0, .inherited = true},
  [16] =
    {field_name, 1},
    {field_value, 3},
  [18] =
    {field_type_name, 0},
  [19] =
    {field_type_name, 0, .inherited = true},
  [20] =
    {field_generic, 0, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [22] =
    {field_field, 3, .inherited = true},
    {field_name, 1},
  [24] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [26] =
    {field_generic, 1},
  [27] =
    {field_arguements, 1},
    {field_function, 0},
  [29] =
    {field_array_access, 1, .inherited = true},
    {field_field, 1, .inherited = true},
    {field_field_acces, 1, .inherited = true},
    {field_index, 1, .inherited = true},
  [33] =
    {field_function, 3},
    {field_name, 1},
  [35] =
    {field_name, 1},
    {field_name, 4, .inherited = true},
    {field_value, 3},
    {field_value, 4, .inherited = true},
  [39] =
    {field_reference, 0},
  [40] =
    {field_generic, 0},
  [41] =
    {field_generic, 0, .inherited = true},
  [42] =
    {field_generic, 1, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [44] =
    {field_name, 1},
    {field_type, 3},
  [46] =
    {field_name, 1},
    {field_variant, 4},
  [48] =
    {field_generic, 1},
    {field_generic, 2, .inherited = true},
  [50] =
    {field_generic, 0, .inherited = true},
    {field_generic, 1, .inherited = true},
  [52] =
    {field_field, 4, .inherited = true},
    {field_name, 1},
  [54] =
    {field_name, 0},
    {field_type, 2},
  [56] =
    {field_argument, 1},
  [57] =
    {field_body, 2},
    {field_condition, 1},
  [59] =
    {field_operators, 1, .inherited = true},
  [60] =
    {field_var, 0},
  [61] =
    {field_field, 1},
    {field_field_acces, 0},
  [63] =
    {field_arguements, 1},
    {field_arguements, 2},
    {field_function, 0},
  [66] =
    {field_array_access, 0, .inherited = true},
    {field_array_access, 1, .inherited = true},
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
    {field_field_acces, 0, .inherited = true},
    {field_field_acces, 1, .inherited = true},
    {field_index, 0, .inherited = true},
    {field_index, 1, .inherited = true},
  [74] =
    {field_left, 0},
    {field_right, 2},
  [76] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [79] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [83] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
    {field_type, 4},
  [86] =
    {field_variant, 1},
  [87] =
    {field_name, 1},
    {field_variant, 4},
    {field_variant, 5, .inherited = true},
  [90] =
    {field_variant, 0, .inherited = true},
    {field_variant, 1, .inherited = true},
  [92] =
    {field_name, 0},
    {field_name, 1},
    {field_type, 3},
  [95] =
    {field_control, 1},
    {field_range, 2},
  [97] =
    {field_body, 3},
    {field_condition, 2},
  [99] =
    {field_operators, 0},
  [100] =
    {field_operators, 0, .inherited = true},
    {field_operators, 1, .inherited = true},
  [102] =
    {field_condition, 1},
    {field_consequent, 3},
  [104] =
    {field_array_access, 0},
    {field_array_access, 2},
    {field_index, 1},
  [107] =
    {field_generic, 0},
    {field_generic, 1},
    {field_generic, 2},
  [110] =
    {field_generic, 1, .inherited = true},
  [111] =
    {field_default_value, 3},
    {field_default_value, 4},
    {field_name, 0},
    {field_type, 2},
  [115] =
    {field_name, 1},
    {field_name, 2},
    {field_type, 4},
  [118] =
    {field_alternative, 0},
  [119] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequent, 3},
  [122] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequent, 3},
  [125] =
    {field_from, 2},
    {field_to, 4},
  [127] =
    {field_default_value, 4},
    {field_default_value, 5},
    {field_name, 0},
    {field_name, 1},
    {field_type, 3},
  [132] =
    {field_default_value, 4},
    {field_default_value, 5},
    {field_name, 1},
    {field_type, 3},
  [136] =
    {field_end, 3},
    {field_start, 1},
  [138] =
    {field_body, 1},
  [139] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequent, 3},
  [143] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [145] =
    {field_default_value, 5},
    {field_default_value, 6},
    {field_name, 1},
    {field_name, 2},
    {field_type, 4},
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
  [12] = 2,
  [13] = 5,
  [14] = 3,
  [15] = 15,
  [16] = 6,
  [17] = 4,
  [18] = 3,
  [19] = 19,
  [20] = 20,
  [21] = 5,
  [22] = 2,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 6,
  [28] = 28,
  [29] = 10,
  [30] = 9,
  [31] = 8,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 26,
  [39] = 35,
  [40] = 33,
  [41] = 41,
  [42] = 42,
  [43] = 26,
  [44] = 34,
  [45] = 28,
  [46] = 4,
  [47] = 47,
  [48] = 28,
  [49] = 7,
  [50] = 34,
  [51] = 35,
  [52] = 33,
  [53] = 53,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 37,
  [60] = 23,
  [61] = 61,
  [62] = 61,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 63,
  [67] = 67,
  [68] = 65,
  [69] = 54,
  [70] = 70,
  [71] = 71,
  [72] = 71,
  [73] = 57,
  [74] = 57,
  [75] = 75,
  [76] = 76,
  [77] = 53,
  [78] = 8,
  [79] = 9,
  [80] = 7,
  [81] = 10,
  [82] = 82,
  [83] = 37,
  [84] = 84,
  [85] = 85,
  [86] = 53,
  [87] = 85,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 91,
  [93] = 93,
  [94] = 90,
  [95] = 93,
  [96] = 90,
  [97] = 93,
  [98] = 91,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 99,
  [105] = 105,
  [106] = 100,
  [107] = 107,
  [108] = 108,
  [109] = 103,
  [110] = 105,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 56,
  [115] = 103,
  [116] = 116,
  [117] = 89,
  [118] = 105,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 82,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 128,
  [140] = 132,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 144,
  [152] = 152,
  [153] = 132,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 128,
  [162] = 130,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 111,
  [168] = 168,
  [169] = 169,
  [170] = 113,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 172,
  [182] = 182,
  [183] = 176,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 174,
  [194] = 171,
  [195] = 195,
  [196] = 196,
  [197] = 178,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 121,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 176,
  [211] = 211,
  [212] = 211,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 211,
  [217] = 213,
  [218] = 218,
  [219] = 209,
  [220] = 220,
  [221] = 221,
  [222] = 168,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 208,
  [229] = 174,
  [230] = 171,
  [231] = 231,
  [232] = 232,
  [233] = 195,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 169,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 175,
  [243] = 177,
  [244] = 124,
  [245] = 245,
  [246] = 213,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 130,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 173,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 172,
  [267] = 267,
  [268] = 268,
  [269] = 130,
  [270] = 180,
  [271] = 271,
  [272] = 272,
  [273] = 189,
  [274] = 204,
  [275] = 275,
  [276] = 276,
  [277] = 201,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 184,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 272,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 255,
  [295] = 295,
  [296] = 205,
  [297] = 297,
  [298] = 275,
  [299] = 202,
  [300] = 187,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 268,
  [307] = 267,
  [308] = 265,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 236,
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
  [338] = 332,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 309,
  [346] = 330,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 339,
  [354] = 304,
  [355] = 321,
  [356] = 311,
  [357] = 357,
  [358] = 358,
  [359] = 330,
  [360] = 352,
  [361] = 361,
  [362] = 340,
  [363] = 264,
  [364] = 263,
  [365] = 365,
  [366] = 366,
  [367] = 337,
  [368] = 368,
  [369] = 351,
  [370] = 347,
  [371] = 320,
  [372] = 372,
  [373] = 373,
  [374] = 350,
  [375] = 349,
  [376] = 342,
  [377] = 358,
  [378] = 305,
  [379] = 361,
  [380] = 380,
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
                ? (c < 'd'
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

static inline bool sym_identifier_character_set_5(int32_t c) {
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
      if (eof) ADVANCE(150);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '(') ADVANCE(167);
      if (lookahead == ')') ADVANCE(168);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == ';') ADVANCE(187);
      if (lookahead == '<') ADVANCE(198);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '>') ADVANCE(201);
      if (lookahead == '[') ADVANCE(155);
      if (lookahead == ']') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(81);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(55);
      if (lookahead == '{') ADVANCE(134);
      if (lookahead == '}') ADVANCE(295);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(208);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(146);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 7:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'h') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(213);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 133:
      if (lookahead == 'y') ADVANCE(219);
      END_STATE();
    case 134:
      if (lookahead == '}') ADVANCE(224);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 135:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(135)
      if (lookahead == '\r') SKIP(135)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '(') ADVANCE(167);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '[') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(229);
      if (lookahead == '{') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 136:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(136)
      if (lookahead == '\r') SKIP(136)
      if (lookahead == '(') ADVANCE(167);
      if (lookahead == ')') ADVANCE(168);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == ';') ADVANCE(187);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == 'b') ADVANCE(266);
      if (lookahead == 'c') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == '{') ADVANCE(134);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 137:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(137)
      if (lookahead == '\r') SKIP(137)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '(') ADVANCE(167);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '{') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 138:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(138)
      if (lookahead == '\r') SKIP(138)
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(239);
      if (lookahead == 'w') ADVANCE(251);
      if (lookahead == '{') ADVANCE(134);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 139:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(139)
      if (lookahead == '\r') SKIP(139)
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == 'b') ADVANCE(266);
      if (lookahead == 'c') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == '{') ADVANCE(134);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(289);
      END_STATE();
    case 140:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(140)
      if (lookahead == '\r') SKIP(140)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '(') ADVANCE(167);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '{') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 141:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(141)
      if (lookahead == '\r') SKIP(141)
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(239);
      if (lookahead == 'w') ADVANCE(251);
      if (lookahead == '{') ADVANCE(134);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 142:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(142)
      if (lookahead == '\r') SKIP(142)
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == '{') ADVANCE(134);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(289);
      END_STATE();
    case 143:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(143)
      if (lookahead == '\r') SKIP(143)
      if (lookahead == ')') ADVANCE(168);
      if (lookahead == 'v') ADVANCE(229);
      if (lookahead == '{') ADVANCE(134);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 144:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(144)
      if (lookahead == '\r') SKIP(144)
      if (lookahead == '{') ADVANCE(134);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(289);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 147:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(2);
      END_STATE();
    case 148:
      if (eof) ADVANCE(150);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(148)
      if (lookahead == '\r') SKIP(148)
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == ']') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '{') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 149:
      if (eof) ADVANCE(150);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(149)
      if (lookahead == '\r') SKIP(149)
      if (lookahead == ')') ADVANCE(168);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == ';') ADVANCE(187);
      if (lookahead == '<') ADVANCE(198);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '>') ADVANCE(201);
      if (lookahead == '[') ADVANCE(155);
      if (lookahead == ']') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '{') ADVANCE(134);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_generic);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_elsif);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_constants);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == '>') ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(200);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(146);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '_') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == '_') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_integer);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_real);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_string);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_character);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_character);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_array);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_refersTo);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_refersTo);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(264);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(255);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(289);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(234);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(289);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(288);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(289);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(270);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(289);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(244);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(289);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(260);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(289);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(276);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(289);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(283);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(289);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(286);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(292);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(294);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(230);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(250);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(268);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(174);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(248);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(231);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(233);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(272);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(273);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(178);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(181);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(214);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(245);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(254);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(232);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(261);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(259);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(281);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(212);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(280);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(242);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(240);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(218);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(249);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(285);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(282);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(223);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(258);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(265);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(274);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(243);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(287);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(176);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(253);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(210);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(216);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(166);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(279);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(227);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(228);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(277);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(225);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(241);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(236);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(190);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(171);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(271);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(238);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(246);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(235);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(220);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(289);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 148},
  [2] = {.lex_state = 149},
  [3] = {.lex_state = 149},
  [4] = {.lex_state = 149},
  [5] = {.lex_state = 149},
  [6] = {.lex_state = 149},
  [7] = {.lex_state = 149},
  [8] = {.lex_state = 149},
  [9] = {.lex_state = 149},
  [10] = {.lex_state = 149},
  [11] = {.lex_state = 135, .external_lex_state = 2},
  [12] = {.lex_state = 149, .external_lex_state = 3},
  [13] = {.lex_state = 149, .external_lex_state = 3},
  [14] = {.lex_state = 149, .external_lex_state = 3},
  [15] = {.lex_state = 135},
  [16] = {.lex_state = 149, .external_lex_state = 3},
  [17] = {.lex_state = 149, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 148},
  [20] = {.lex_state = 148},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 136},
  [24] = {.lex_state = 148},
  [25] = {.lex_state = 148},
  [26] = {.lex_state = 137},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 137},
  [29] = {.lex_state = 149, .external_lex_state = 3},
  [30] = {.lex_state = 149, .external_lex_state = 3},
  [31] = {.lex_state = 149, .external_lex_state = 3},
  [32] = {.lex_state = 137},
  [33] = {.lex_state = 137},
  [34] = {.lex_state = 137},
  [35] = {.lex_state = 137},
  [36] = {.lex_state = 137},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 137},
  [39] = {.lex_state = 137},
  [40] = {.lex_state = 137},
  [41] = {.lex_state = 137},
  [42] = {.lex_state = 137},
  [43] = {.lex_state = 137},
  [44] = {.lex_state = 137},
  [45] = {.lex_state = 137},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 137},
  [48] = {.lex_state = 137},
  [49] = {.lex_state = 149, .external_lex_state = 3},
  [50] = {.lex_state = 137},
  [51] = {.lex_state = 137},
  [52] = {.lex_state = 137},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 138, .external_lex_state = 4},
  [55] = {.lex_state = 138, .external_lex_state = 4},
  [56] = {.lex_state = 149},
  [57] = {.lex_state = 138, .external_lex_state = 4},
  [58] = {.lex_state = 139},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 136, .external_lex_state = 2},
  [61] = {.lex_state = 139},
  [62] = {.lex_state = 139},
  [63] = {.lex_state = 139},
  [64] = {.lex_state = 139},
  [65] = {.lex_state = 139},
  [66] = {.lex_state = 139},
  [67] = {.lex_state = 139},
  [68] = {.lex_state = 139},
  [69] = {.lex_state = 138, .external_lex_state = 4},
  [70] = {.lex_state = 139},
  [71] = {.lex_state = 139},
  [72] = {.lex_state = 139},
  [73] = {.lex_state = 138, .external_lex_state = 4},
  [74] = {.lex_state = 138, .external_lex_state = 4},
  [75] = {.lex_state = 138, .external_lex_state = 4},
  [76] = {.lex_state = 139},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 149},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 136},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 136},
  [88] = {.lex_state = 140},
  [89] = {.lex_state = 136},
  [90] = {.lex_state = 140},
  [91] = {.lex_state = 140},
  [92] = {.lex_state = 140},
  [93] = {.lex_state = 140},
  [94] = {.lex_state = 140},
  [95] = {.lex_state = 140},
  [96] = {.lex_state = 140},
  [97] = {.lex_state = 140},
  [98] = {.lex_state = 140},
  [99] = {.lex_state = 140},
  [100] = {.lex_state = 140},
  [101] = {.lex_state = 140},
  [102] = {.lex_state = 140},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 140},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 140},
  [107] = {.lex_state = 140},
  [108] = {.lex_state = 141, .external_lex_state = 4},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 148},
  [112] = {.lex_state = 141, .external_lex_state = 4},
  [113] = {.lex_state = 148},
  [114] = {.lex_state = 149, .external_lex_state = 3},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 141, .external_lex_state = 4},
  [117] = {.lex_state = 136, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 148},
  [120] = {.lex_state = 148},
  [121] = {.lex_state = 148},
  [122] = {.lex_state = 148},
  [123] = {.lex_state = 148},
  [124] = {.lex_state = 148},
  [125] = {.lex_state = 148},
  [126] = {.lex_state = 148},
  [127] = {.lex_state = 148},
  [128] = {.lex_state = 148},
  [129] = {.lex_state = 148},
  [130] = {.lex_state = 148},
  [131] = {.lex_state = 148},
  [132] = {.lex_state = 148},
  [133] = {.lex_state = 148},
  [134] = {.lex_state = 148},
  [135] = {.lex_state = 149, .external_lex_state = 3},
  [136] = {.lex_state = 148},
  [137] = {.lex_state = 148},
  [138] = {.lex_state = 148},
  [139] = {.lex_state = 141, .external_lex_state = 4},
  [140] = {.lex_state = 141, .external_lex_state = 4},
  [141] = {.lex_state = 141, .external_lex_state = 4},
  [142] = {.lex_state = 141, .external_lex_state = 4},
  [143] = {.lex_state = 148, .external_lex_state = 3},
  [144] = {.lex_state = 142},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 148, .external_lex_state = 3},
  [147] = {.lex_state = 148, .external_lex_state = 3},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 148, .external_lex_state = 3},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 142},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 138, .external_lex_state = 4},
  [154] = {.lex_state = 138, .external_lex_state = 4},
  [155] = {.lex_state = 138, .external_lex_state = 4},
  [156] = {.lex_state = 138, .external_lex_state = 4},
  [157] = {.lex_state = 138, .external_lex_state = 4},
  [158] = {.lex_state = 138, .external_lex_state = 4},
  [159] = {.lex_state = 138, .external_lex_state = 4},
  [160] = {.lex_state = 138, .external_lex_state = 4},
  [161] = {.lex_state = 138, .external_lex_state = 4},
  [162] = {.lex_state = 138, .external_lex_state = 4},
  [163] = {.lex_state = 143},
  [164] = {.lex_state = 138, .external_lex_state = 4},
  [165] = {.lex_state = 148, .external_lex_state = 3},
  [166] = {.lex_state = 138, .external_lex_state = 4},
  [167] = {.lex_state = 148, .external_lex_state = 3},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 148, .external_lex_state = 3},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 144},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 144, .external_lex_state = 4},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0, .external_lex_state = 3},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 144, .external_lex_state = 4},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 144, .external_lex_state = 4},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 148},
  [196] = {.lex_state = 0, .external_lex_state = 3},
  [197] = {.lex_state = 144},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 143},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 148, .external_lex_state = 3},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 148},
  [209] = {.lex_state = 148},
  [210] = {.lex_state = 0, .external_lex_state = 3},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0, .external_lex_state = 3},
  [219] = {.lex_state = 148},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 144},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 148, .external_lex_state = 3},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 144},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 148},
  [229] = {.lex_state = 0, .external_lex_state = 3},
  [230] = {.lex_state = 0, .external_lex_state = 3},
  [231] = {.lex_state = 144},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 148},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 148, .external_lex_state = 3},
  [241] = {.lex_state = 148, .external_lex_state = 3},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 148, .external_lex_state = 3},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 148},
  [249] = {.lex_state = 148},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 148, .external_lex_state = 3},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 148},
  [254] = {.lex_state = 148, .external_lex_state = 3},
  [255] = {.lex_state = 148},
  [256] = {.lex_state = 148},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 148, .external_lex_state = 3},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0, .external_lex_state = 2},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0, .external_lex_state = 3},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 144, .external_lex_state = 4},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 0, .external_lex_state = 3},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 0, .external_lex_state = 2},
  [275] = {.lex_state = 0, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 3},
  [277] = {.lex_state = 0, .external_lex_state = 2},
  [278] = {.lex_state = 0, .external_lex_state = 2},
  [279] = {.lex_state = 144},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0, .external_lex_state = 2},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0, .external_lex_state = 2},
  [284] = {.lex_state = 144, .external_lex_state = 4},
  [285] = {.lex_state = 144},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0, .external_lex_state = 2},
  [289] = {.lex_state = 0, .external_lex_state = 2},
  [290] = {.lex_state = 0, .external_lex_state = 2},
  [291] = {.lex_state = 144, .external_lex_state = 4},
  [292] = {.lex_state = 0, .external_lex_state = 2},
  [293] = {.lex_state = 148},
  [294] = {.lex_state = 0, .external_lex_state = 2},
  [295] = {.lex_state = 0, .external_lex_state = 2},
  [296] = {.lex_state = 0, .external_lex_state = 2},
  [297] = {.lex_state = 0, .external_lex_state = 3},
  [298] = {.lex_state = 0, .external_lex_state = 2},
  [299] = {.lex_state = 0, .external_lex_state = 2},
  [300] = {.lex_state = 0, .external_lex_state = 2},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0, .external_lex_state = 3},
  [303] = {.lex_state = 0, .external_lex_state = 2},
  [304] = {.lex_state = 148},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0, .external_lex_state = 2},
  [307] = {.lex_state = 0, .external_lex_state = 2},
  [308] = {.lex_state = 0, .external_lex_state = 2},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0, .external_lex_state = 3},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 149},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 144},
  [315] = {.lex_state = 148},
  [316] = {.lex_state = 144},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 144},
  [319] = {.lex_state = 144},
  [320] = {.lex_state = 148},
  [321] = {.lex_state = 148},
  [322] = {.lex_state = 0, .external_lex_state = 2},
  [323] = {.lex_state = 0, .external_lex_state = 2},
  [324] = {.lex_state = 144},
  [325] = {.lex_state = 148},
  [326] = {.lex_state = 144},
  [327] = {.lex_state = 0, .external_lex_state = 2},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 148},
  [330] = {.lex_state = 144},
  [331] = {.lex_state = 144},
  [332] = {.lex_state = 144},
  [333] = {.lex_state = 0, .external_lex_state = 3},
  [334] = {.lex_state = 144},
  [335] = {.lex_state = 0, .external_lex_state = 2},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 144},
  [338] = {.lex_state = 144},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 148},
  [343] = {.lex_state = 144},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 144},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 144},
  [350] = {.lex_state = 144},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 148},
  [355] = {.lex_state = 148},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 144},
  [358] = {.lex_state = 148},
  [359] = {.lex_state = 144},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 148},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0, .external_lex_state = 2},
  [364] = {.lex_state = 0, .external_lex_state = 2},
  [365] = {.lex_state = 144},
  [366] = {.lex_state = 144},
  [367] = {.lex_state = 144},
  [368] = {.lex_state = 144},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 148},
  [372] = {.lex_state = 144},
  [373] = {.lex_state = 144},
  [374] = {.lex_state = 144},
  [375] = {.lex_state = 144},
  [376] = {.lex_state = 148},
  [377] = {.lex_state = 148},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 148},
  [380] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_generic] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_string] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_real] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_character] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [sym_refersTo] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(348),
    [sym_enum] = STATE(129),
    [sym_record] = STATE(129),
    [sym_export] = STATE(129),
    [sym_import] = STATE(129),
    [sym_module] = STATE(20),
    [sym_function_definition] = STATE(129),
    [sym_test] = STATE(129),
    [sym_constant] = STATE(129),
    [sym_variable] = STATE(129),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(7),
    [anon_sym_record] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_module] = ACTIONS(15),
    [anon_sym_define] = ACTIONS(17),
    [anon_sym_test] = ACTIONS(19),
    [anon_sym_constants] = ACTIONS(21),
    [anon_sym_variables] = ACTIONS(23),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 26,
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
      anon_sym_SEMI,
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
  [48] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_DOT,
    ACTIONS(38), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(3), 2,
      sym_comment,
      aux_sym_variable_access_repeat1,
    ACTIONS(33), 26,
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
      anon_sym_SEMI,
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
  [94] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(4), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 28,
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
      anon_sym_SEMI,
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
  [135] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_variable_access_repeat1,
    STATE(5), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 25,
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
      anon_sym_SEMI,
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
  [182] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 28,
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
      anon_sym_SEMI,
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
  [223] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(7), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 25,
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
      anon_sym_SEMI,
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
  [261] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 25,
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
      anon_sym_SEMI,
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
  [299] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(63), 22,
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
      anon_sym_SEMI,
      anon_sym_variables,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [339] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 25,
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
      anon_sym_SEMI,
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
  [377] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_EQ,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_var,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym__newline,
    STATE(2), 1,
      aux_sym_variable_access_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(59), 1,
      sym_primary_expression,
    STATE(84), 1,
      sym_variable_access,
    STATE(200), 1,
      sym_expression,
    STATE(207), 1,
      sym_argument,
    STATE(80), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(75), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(77), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(181), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [442] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_DOT,
    STATE(12), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 15,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
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
  [479] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_variable_access_repeat1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 15,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
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
  [516] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      anon_sym_DOT,
    ACTIONS(38), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(14), 2,
      sym_comment,
      aux_sym_variable_access_repeat1,
    ACTIONS(33), 15,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
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
  [551] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_var,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(15), 1,
      sym_comment,
    STATE(59), 1,
      sym_primary_expression,
    STATE(84), 1,
      sym_variable_access,
    STATE(200), 1,
      sym_expression,
    STATE(288), 1,
      sym_argument,
    STATE(80), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(75), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(77), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(181), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [601] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 17,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LBRACK,
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
  [631] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 17,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LBRACK,
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
  [661] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_DOT,
    ACTIONS(38), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(18), 2,
      sym_comment,
      aux_sym_variable_access_repeat1,
    ACTIONS(33), 13,
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
  [694] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_enum,
    ACTIONS(9), 1,
      anon_sym_record,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(19), 1,
      anon_sym_test,
    ACTIONS(21), 1,
      anon_sym_constants,
    ACTIONS(23), 1,
      anon_sym_variables,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_program_repeat1,
    STATE(129), 8,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_constant,
      sym_variable,
  [741] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_enum,
    ACTIONS(9), 1,
      anon_sym_record,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(19), 1,
      anon_sym_test,
    ACTIONS(21), 1,
      anon_sym_constants,
    ACTIONS(23), 1,
      anon_sym_variables,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_program_repeat1,
    STATE(129), 8,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_constant,
      sym_variable,
  [788] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_DOT,
    STATE(21), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 13,
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
  [823] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym_variable_access_repeat1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 13,
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
  [858] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym_real,
    ACTIONS(113), 1,
      anon_sym_boolean,
    ACTIONS(115), 1,
      sym_refersTo,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(23), 1,
      sym_comment,
    STATE(173), 1,
      sym__generic,
    STATE(189), 1,
      sym__custom_type,
    STATE(204), 1,
      sym__type_name,
    STATE(263), 1,
      sym__generics,
    ACTIONS(105), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(109), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(201), 3,
      sym_basis_type,
      sym_simple_custom_type,
      sym_simple_reference_type,
  [907] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_enum,
    ACTIONS(9), 1,
      anon_sym_record,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(19), 1,
      anon_sym_test,
    ACTIONS(21), 1,
      anon_sym_constants,
    ACTIONS(23), 1,
      anon_sym_variables,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_program_repeat1,
    STATE(129), 8,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_constant,
      sym_variable,
  [954] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_enum,
    ACTIONS(126), 1,
      anon_sym_record,
    ACTIONS(129), 1,
      anon_sym_export,
    ACTIONS(132), 1,
      anon_sym_import,
    ACTIONS(135), 1,
      anon_sym_define,
    ACTIONS(138), 1,
      anon_sym_test,
    ACTIONS(141), 1,
      anon_sym_constants,
    ACTIONS(144), 1,
      anon_sym_variables,
    STATE(25), 2,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(129), 8,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_constant,
      sym_variable,
  [999] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(26), 1,
      sym_comment,
    STATE(59), 1,
      sym_primary_expression,
    STATE(183), 1,
      sym_expression,
    ACTIONS(75), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(77), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(80), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(181), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1041] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 15,
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
      anon_sym_DOT,
  [1069] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_not,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(28), 1,
      sym_comment,
    STATE(37), 1,
      sym_primary_expression,
    STATE(211), 1,
      sym_expression,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(172), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1111] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 15,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
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
  [1139] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(63), 12,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_constants,
      anon_sym_variables,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1169] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 15,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
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
  [1197] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(32), 1,
      sym_comment,
    STATE(59), 1,
      sym_primary_expression,
    STATE(215), 1,
      sym_expression,
    ACTIONS(75), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(77), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(80), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(181), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1239] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_not,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(33), 1,
      sym_comment,
    STATE(37), 1,
      sym_primary_expression,
    STATE(171), 1,
      sym_expression,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(172), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1281] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_not,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(34), 1,
      sym_comment,
    STATE(37), 1,
      sym_primary_expression,
    STATE(246), 1,
      sym_expression,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(172), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1323] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_not,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(35), 1,
      sym_comment,
    STATE(37), 1,
      sym_primary_expression,
    STATE(174), 1,
      sym_expression,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(172), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1365] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_not,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(36), 1,
      sym_comment,
    STATE(37), 1,
      sym_primary_expression,
    STATE(245), 1,
      sym_expression,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(172), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1407] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(159), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(161), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [1443] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_not,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(37), 1,
      sym_primary_expression,
    STATE(38), 1,
      sym_comment,
    STATE(176), 1,
      sym_expression,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(172), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1485] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(39), 1,
      sym_comment,
    STATE(59), 1,
      sym_primary_expression,
    STATE(193), 1,
      sym_expression,
    ACTIONS(75), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(77), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(80), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(181), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1527] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(40), 1,
      sym_comment,
    STATE(59), 1,
      sym_primary_expression,
    STATE(194), 1,
      sym_expression,
    ACTIONS(75), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(77), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(80), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(181), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1569] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_not,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(41), 1,
      sym_comment,
    STATE(83), 1,
      sym_primary_expression,
    STATE(185), 1,
      sym_expression,
    ACTIONS(171), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(173), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(266), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1611] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_not,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(37), 1,
      sym_primary_expression,
    STATE(42), 1,
      sym_comment,
    STATE(260), 1,
      sym_expression,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(172), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1653] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_not,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(43), 1,
      sym_comment,
    STATE(83), 1,
      sym_primary_expression,
    STATE(210), 1,
      sym_expression,
    ACTIONS(171), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(173), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(266), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1695] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_not,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(37), 1,
      sym_primary_expression,
    STATE(44), 1,
      sym_comment,
    STATE(217), 1,
      sym_expression,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(172), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1737] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_not,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(37), 1,
      sym_primary_expression,
    STATE(45), 1,
      sym_comment,
    STATE(216), 1,
      sym_expression,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(172), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1779] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 15,
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
      anon_sym_DOT,
  [1807] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_not,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(47), 1,
      sym_comment,
    STATE(83), 1,
      sym_primary_expression,
    STATE(196), 1,
      sym_expression,
    ACTIONS(171), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(173), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(266), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1849] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_not,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(37), 1,
      sym_primary_expression,
    STATE(48), 1,
      sym_comment,
    STATE(212), 1,
      sym_expression,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(172), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1891] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 15,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
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
  [1919] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_not,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(37), 1,
      sym_primary_expression,
    STATE(50), 1,
      sym_comment,
    STATE(213), 1,
      sym_expression,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(172), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1961] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_not,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(51), 1,
      sym_comment,
    STATE(83), 1,
      sym_primary_expression,
    STATE(229), 1,
      sym_expression,
    ACTIONS(171), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(173), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(266), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2003] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_not,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(52), 1,
      sym_comment,
    STATE(83), 1,
      sym_primary_expression,
    STATE(230), 1,
      sym_expression,
    ACTIONS(171), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(173), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(266), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2045] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(179), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(177), 9,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2076] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(181), 1,
      anon_sym_for,
    ACTIONS(183), 1,
      anon_sym_repeat,
    ACTIONS(185), 1,
      anon_sym_while,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      sym__dedent,
    STATE(54), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_block_repeat1,
    STATE(312), 1,
      sym_variable_access,
    STATE(158), 2,
      sym__simple_statement,
      sym__compound_statement,
    STATE(303), 2,
      sym_call_statement,
      sym_assignment,
    STATE(154), 4,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
  [2121] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(181), 1,
      anon_sym_for,
    ACTIONS(183), 1,
      anon_sym_repeat,
    ACTIONS(185), 1,
      anon_sym_while,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym__dedent,
    STATE(55), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_block_repeat1,
    STATE(312), 1,
      sym_variable_access,
    STATE(158), 2,
      sym__simple_statement,
      sym__compound_statement,
    STATE(303), 2,
      sym_call_statement,
      sym_assignment,
    STATE(154), 4,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
  [2166] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_constant_repeat1,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(195), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [2199] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(181), 1,
      anon_sym_for,
    ACTIONS(183), 1,
      anon_sym_repeat,
    ACTIONS(185), 1,
      anon_sym_while,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(199), 1,
      sym__dedent,
    STATE(55), 1,
      aux_sym_block_repeat1,
    STATE(57), 1,
      sym_comment,
    STATE(312), 1,
      sym_variable_access,
    STATE(158), 2,
      sym__simple_statement,
      sym__compound_statement,
    STATE(303), 2,
      sym_call_statement,
      sym_assignment,
    STATE(154), 4,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
  [2244] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(111), 1,
      anon_sym_real,
    ACTIONS(113), 1,
      anon_sym_boolean,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_array,
    ACTIONS(203), 1,
      sym_refersTo,
    STATE(23), 1,
      sym__type_name,
    STATE(58), 1,
      sym_comment,
    STATE(239), 1,
      sym_type,
    STATE(267), 1,
      sym__custom_type,
    STATE(268), 1,
      sym__custom_generic_type,
    ACTIONS(109), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(265), 4,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
      sym_reference_type,
  [2289] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(59), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(207), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(211), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(161), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(205), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2324] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(105), 1,
      sym__newline,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_real,
    ACTIONS(219), 1,
      anon_sym_boolean,
    ACTIONS(221), 1,
      sym_refersTo,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(60), 1,
      sym_comment,
    STATE(262), 1,
      sym__generic,
    STATE(273), 1,
      sym__custom_type,
    STATE(274), 1,
      sym__type_name,
    STATE(364), 1,
      sym__generics,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(277), 3,
      sym_basis_type,
      sym_simple_custom_type,
      sym_simple_reference_type,
  [2371] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(111), 1,
      anon_sym_real,
    ACTIONS(113), 1,
      anon_sym_boolean,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_array,
    ACTIONS(203), 1,
      sym_refersTo,
    STATE(23), 1,
      sym__type_name,
    STATE(61), 1,
      sym_comment,
    STATE(267), 1,
      sym__custom_type,
    STATE(268), 1,
      sym__custom_generic_type,
    STATE(353), 1,
      sym_type,
    ACTIONS(109), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(265), 4,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
      sym_reference_type,
  [2416] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(111), 1,
      anon_sym_real,
    ACTIONS(113), 1,
      anon_sym_boolean,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_array,
    ACTIONS(203), 1,
      sym_refersTo,
    STATE(23), 1,
      sym__type_name,
    STATE(62), 1,
      sym_comment,
    STATE(267), 1,
      sym__custom_type,
    STATE(268), 1,
      sym__custom_generic_type,
    STATE(339), 1,
      sym_type,
    ACTIONS(109), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(265), 4,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
      sym_reference_type,
  [2461] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(217), 1,
      anon_sym_real,
    ACTIONS(219), 1,
      anon_sym_boolean,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_array,
    ACTIONS(227), 1,
      sym_refersTo,
    STATE(60), 1,
      sym__type_name,
    STATE(63), 1,
      sym_comment,
    STATE(286), 1,
      sym_type,
    STATE(306), 1,
      sym__custom_generic_type,
    STATE(307), 1,
      sym__custom_type,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(308), 4,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
      sym_reference_type,
  [2506] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(111), 1,
      anon_sym_real,
    ACTIONS(113), 1,
      anon_sym_boolean,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_array,
    ACTIONS(203), 1,
      sym_refersTo,
    STATE(23), 1,
      sym__type_name,
    STATE(64), 1,
      sym_comment,
    STATE(227), 1,
      sym_type,
    STATE(267), 1,
      sym__custom_type,
    STATE(268), 1,
      sym__custom_generic_type,
    ACTIONS(109), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(265), 4,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
      sym_reference_type,
  [2551] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(111), 1,
      anon_sym_real,
    ACTIONS(113), 1,
      anon_sym_boolean,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_array,
    ACTIONS(203), 1,
      sym_refersTo,
    STATE(23), 1,
      sym__type_name,
    STATE(65), 1,
      sym_comment,
    STATE(236), 1,
      sym_type,
    STATE(267), 1,
      sym__custom_type,
    STATE(268), 1,
      sym__custom_generic_type,
    ACTIONS(109), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(265), 4,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
      sym_reference_type,
  [2596] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(217), 1,
      anon_sym_real,
    ACTIONS(219), 1,
      anon_sym_boolean,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_array,
    ACTIONS(227), 1,
      sym_refersTo,
    STATE(60), 1,
      sym__type_name,
    STATE(66), 1,
      sym_comment,
    STATE(272), 1,
      sym_type,
    STATE(306), 1,
      sym__custom_generic_type,
    STATE(307), 1,
      sym__custom_type,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(308), 4,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
      sym_reference_type,
  [2641] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(111), 1,
      anon_sym_real,
    ACTIONS(113), 1,
      anon_sym_boolean,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_array,
    ACTIONS(203), 1,
      sym_refersTo,
    STATE(23), 1,
      sym__type_name,
    STATE(67), 1,
      sym_comment,
    STATE(226), 1,
      sym_type,
    STATE(267), 1,
      sym__custom_type,
    STATE(268), 1,
      sym__custom_generic_type,
    ACTIONS(109), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(265), 4,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
      sym_reference_type,
  [2686] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(217), 1,
      anon_sym_real,
    ACTIONS(219), 1,
      anon_sym_boolean,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_array,
    ACTIONS(227), 1,
      sym_refersTo,
    STATE(60), 1,
      sym__type_name,
    STATE(68), 1,
      sym_comment,
    STATE(306), 1,
      sym__custom_generic_type,
    STATE(307), 1,
      sym__custom_type,
    STATE(322), 1,
      sym_type,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(308), 4,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
      sym_reference_type,
  [2731] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(181), 1,
      anon_sym_for,
    ACTIONS(183), 1,
      anon_sym_repeat,
    ACTIONS(185), 1,
      anon_sym_while,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(229), 1,
      sym__dedent,
    STATE(69), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_block_repeat1,
    STATE(312), 1,
      sym_variable_access,
    STATE(158), 2,
      sym__simple_statement,
      sym__compound_statement,
    STATE(303), 2,
      sym_call_statement,
      sym_assignment,
    STATE(154), 4,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
  [2776] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(111), 1,
      anon_sym_real,
    ACTIONS(113), 1,
      anon_sym_boolean,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_array,
    ACTIONS(203), 1,
      sym_refersTo,
    STATE(23), 1,
      sym__type_name,
    STATE(70), 1,
      sym_comment,
    STATE(250), 1,
      sym_type,
    STATE(267), 1,
      sym__custom_type,
    STATE(268), 1,
      sym__custom_generic_type,
    ACTIONS(109), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(265), 4,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
      sym_reference_type,
  [2821] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(217), 1,
      anon_sym_real,
    ACTIONS(219), 1,
      anon_sym_boolean,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_array,
    ACTIONS(227), 1,
      sym_refersTo,
    STATE(60), 1,
      sym__type_name,
    STATE(71), 1,
      sym_comment,
    STATE(298), 1,
      sym_type,
    STATE(306), 1,
      sym__custom_generic_type,
    STATE(307), 1,
      sym__custom_type,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(308), 4,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
      sym_reference_type,
  [2866] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(217), 1,
      anon_sym_real,
    ACTIONS(219), 1,
      anon_sym_boolean,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_array,
    ACTIONS(227), 1,
      sym_refersTo,
    STATE(60), 1,
      sym__type_name,
    STATE(72), 1,
      sym_comment,
    STATE(275), 1,
      sym_type,
    STATE(306), 1,
      sym__custom_generic_type,
    STATE(307), 1,
      sym__custom_type,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(308), 4,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
      sym_reference_type,
  [2911] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(181), 1,
      anon_sym_for,
    ACTIONS(183), 1,
      anon_sym_repeat,
    ACTIONS(185), 1,
      anon_sym_while,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym__dedent,
    STATE(54), 1,
      aux_sym_block_repeat1,
    STATE(73), 1,
      sym_comment,
    STATE(312), 1,
      sym_variable_access,
    STATE(158), 2,
      sym__simple_statement,
      sym__compound_statement,
    STATE(303), 2,
      sym_call_statement,
      sym_assignment,
    STATE(154), 4,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
  [2956] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(181), 1,
      anon_sym_for,
    ACTIONS(183), 1,
      anon_sym_repeat,
    ACTIONS(185), 1,
      anon_sym_while,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(233), 1,
      sym__dedent,
    STATE(69), 1,
      aux_sym_block_repeat1,
    STATE(74), 1,
      sym_comment,
    STATE(312), 1,
      sym_variable_access,
    STATE(158), 2,
      sym__simple_statement,
      sym__compound_statement,
    STATE(303), 2,
      sym_call_statement,
      sym_assignment,
    STATE(154), 4,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
  [3001] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(235), 1,
      anon_sym_for,
    ACTIONS(238), 1,
      anon_sym_repeat,
    ACTIONS(241), 1,
      anon_sym_while,
    ACTIONS(244), 1,
      anon_sym_if,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(250), 1,
      sym__dedent,
    STATE(312), 1,
      sym_variable_access,
    STATE(75), 2,
      sym_comment,
      aux_sym_block_repeat1,
    STATE(158), 2,
      sym__simple_statement,
      sym__compound_statement,
    STATE(303), 2,
      sym_call_statement,
      sym_assignment,
    STATE(154), 4,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
  [3044] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(217), 1,
      anon_sym_real,
    ACTIONS(219), 1,
      anon_sym_boolean,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_array,
    ACTIONS(227), 1,
      sym_refersTo,
    STATE(60), 1,
      sym__type_name,
    STATE(76), 1,
      sym_comment,
    STATE(292), 1,
      sym_type,
    STATE(306), 1,
      sym__custom_generic_type,
    STATE(307), 1,
      sym__custom_type,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(308), 4,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
      sym_reference_type,
  [3089] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(77), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(207), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(209), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(177), 8,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3119] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(78), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 13,
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
  [3145] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(79), 1,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(63), 10,
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
  [3173] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(80), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 13,
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
  [3199] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(81), 1,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 13,
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
  [3225] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(82), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(252), 10,
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
  [3253] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(83), 1,
      sym_comment,
    STATE(118), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(258), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(161), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(254), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3287] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(84), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(260), 2,
      sym__newline,
      anon_sym_COMMA,
    ACTIONS(55), 11,
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
  [3315] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_real,
    ACTIONS(219), 1,
      anon_sym_boolean,
    ACTIONS(221), 1,
      sym_refersTo,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(85), 1,
      sym_comment,
    STATE(273), 1,
      sym__custom_type,
    STATE(274), 1,
      sym__type_name,
    STATE(299), 1,
      sym__generic,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(277), 3,
      sym_basis_type,
      sym_simple_custom_type,
      sym_simple_reference_type,
  [3356] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(86), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(177), 7,
      sym__indent,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3385] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym_real,
    ACTIONS(113), 1,
      anon_sym_boolean,
    ACTIONS(115), 1,
      sym_refersTo,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(87), 1,
      sym_comment,
    STATE(189), 1,
      sym__custom_type,
    STATE(202), 1,
      sym__generic,
    STATE(204), 1,
      sym__type_name,
    ACTIONS(109), 3,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_character,
    STATE(201), 3,
      sym_basis_type,
      sym_simple_custom_type,
      sym_simple_reference_type,
  [3426] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(88), 1,
      sym_comment,
    STATE(152), 1,
      sym_primary_expression,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3457] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(89), 1,
      sym_comment,
    ACTIONS(263), 5,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(265), 7,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_character,
      anon_sym_boolean,
      sym_refersTo,
      sym_identifier,
  [3480] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(30), 1,
      sym_primary_expression,
    STATE(90), 1,
      sym_comment,
    ACTIONS(171), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(173), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3511] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(86), 1,
      sym_primary_expression,
    STATE(91), 1,
      sym_comment,
    ACTIONS(171), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(173), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3542] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(77), 1,
      sym_primary_expression,
    STATE(92), 1,
      sym_comment,
    ACTIONS(75), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(77), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(80), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3573] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(10), 1,
      sym_primary_expression,
    STATE(93), 1,
      sym_comment,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3604] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(79), 1,
      sym_primary_expression,
    STATE(94), 1,
      sym_comment,
    ACTIONS(75), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(77), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(80), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3635] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(81), 1,
      sym_primary_expression,
    STATE(95), 1,
      sym_comment,
    ACTIONS(75), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(77), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(80), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3666] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(9), 1,
      sym_primary_expression,
    STATE(96), 1,
      sym_comment,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3697] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(29), 1,
      sym_primary_expression,
    STATE(97), 1,
      sym_comment,
    ACTIONS(171), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(173), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3728] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(53), 1,
      sym_primary_expression,
    STATE(98), 1,
      sym_comment,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3759] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(56), 1,
      sym_primary_expression,
    STATE(99), 1,
      sym_comment,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3790] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(100), 1,
      sym_comment,
    STATE(135), 1,
      sym_primary_expression,
    ACTIONS(171), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(173), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3821] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(101), 1,
      sym_comment,
    STATE(145), 1,
      sym_primary_expression,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3852] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(102), 1,
      sym_comment,
    STATE(150), 1,
      sym_primary_expression,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3883] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(103), 2,
      sym_comment,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(267), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(270), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [3908] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(104), 1,
      sym_comment,
    STATE(114), 1,
      sym_primary_expression,
    ACTIONS(171), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(173), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3939] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(103), 1,
      aux_sym_comparison_operator_repeat1,
    STATE(105), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(275), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [3966] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(82), 1,
      sym_primary_expression,
    STATE(106), 1,
      sym_comment,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3997] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(107), 1,
      sym_comment,
    STATE(148), 1,
      sym_primary_expression,
    ACTIONS(151), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(153), 3,
      sym_real,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [4028] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(279), 1,
      anon_sym_elsif,
    ACTIONS(281), 1,
      anon_sym_else,
    ACTIONS(283), 1,
      sym__dedent,
    STATE(108), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym_if_then_statement_repeat1,
    STATE(142), 1,
      sym_elsif,
    STATE(155), 1,
      sym_else,
    ACTIONS(277), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [4060] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(109), 2,
      sym_comment,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(270), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4084] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(109), 1,
      aux_sym_comparison_operator_repeat1,
    STATE(110), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(275), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
  [4110] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(111), 2,
      sym_comment,
      aux_sym_constant_repeat1,
    ACTIONS(291), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4132] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(279), 1,
      anon_sym_elsif,
    ACTIONS(281), 1,
      anon_sym_else,
    ACTIONS(298), 1,
      sym__dedent,
    STATE(112), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_if_then_statement_repeat1,
    STATE(142), 1,
      sym_elsif,
    STATE(166), 1,
      sym_else,
    ACTIONS(296), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [4164] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_constant_repeat1,
    STATE(113), 1,
      sym_comment,
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
  [4188] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      sym_comment,
    STATE(170), 1,
      aux_sym_constant_repeat1,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(195), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4215] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(115), 2,
      sym_comment,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(270), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(304), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4238] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(312), 1,
      anon_sym_elsif,
    ACTIONS(315), 1,
      sym__dedent,
    STATE(142), 1,
      sym_elsif,
    STATE(116), 2,
      sym_comment,
      aux_sym_if_then_statement_repeat1,
    ACTIONS(310), 6,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
  [4263] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(117), 1,
      sym_comment,
    ACTIONS(263), 3,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_LPAREN,
    ACTIONS(265), 7,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_character,
      anon_sym_boolean,
      sym_refersTo,
      sym_identifier,
  [4284] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(115), 1,
      aux_sym_comparison_operator_repeat1,
    STATE(118), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(254), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4309] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(119), 1,
      sym_comment,
    ACTIONS(317), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4327] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(120), 1,
      sym_comment,
    ACTIONS(319), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4345] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(121), 1,
      sym_comment,
    ACTIONS(321), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4363] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(122), 1,
      sym_comment,
    ACTIONS(323), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4381] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(123), 1,
      sym_comment,
    ACTIONS(325), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4399] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(124), 1,
      sym_comment,
    ACTIONS(327), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4417] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(125), 1,
      sym_comment,
    ACTIONS(329), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4435] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(126), 1,
      sym_comment,
    ACTIONS(331), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4453] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(127), 1,
      sym_comment,
    ACTIONS(333), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4471] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(128), 1,
      sym_comment,
    ACTIONS(335), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4489] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(129), 1,
      sym_comment,
    ACTIONS(337), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4507] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(130), 1,
      sym_comment,
    ACTIONS(339), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4525] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(131), 1,
      sym_comment,
    ACTIONS(341), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4543] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(132), 1,
      sym_comment,
    ACTIONS(343), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4561] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(133), 1,
      sym_comment,
    ACTIONS(345), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4579] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(134), 1,
      sym_comment,
    ACTIONS(347), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4597] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(135), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(252), 4,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
      anon_sym_variables,
  [4619] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(136), 1,
      sym_comment,
    ACTIONS(349), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4637] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(137), 1,
      sym_comment,
    ACTIONS(351), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4655] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(138), 1,
      sym_comment,
    ACTIONS(353), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4673] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(335), 1,
      sym__dedent,
    STATE(139), 1,
      sym_comment,
    ACTIONS(355), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [4692] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(343), 1,
      sym__dedent,
    STATE(140), 1,
      sym_comment,
    ACTIONS(357), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [4711] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(361), 1,
      sym__dedent,
    STATE(141), 1,
      sym_comment,
    ACTIONS(359), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [4730] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(365), 1,
      sym__dedent,
    STATE(142), 1,
      sym_comment,
    ACTIONS(363), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [4749] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(367), 1,
      anon_sym_constants,
    ACTIONS(369), 1,
      anon_sym_variables,
    ACTIONS(371), 1,
      sym__indent,
    STATE(127), 1,
      sym_block,
    STATE(143), 1,
      sym_comment,
    STATE(165), 1,
      aux_sym_function_definition_repeat1,
    STATE(223), 2,
      sym_constant,
      sym_variable,
  [4775] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_array,
    STATE(60), 1,
      sym__type_name,
    STATE(144), 1,
      sym_comment,
    STATE(306), 1,
      sym__custom_generic_type,
    STATE(307), 1,
      sym__custom_type,
    STATE(363), 2,
      sym_array_type,
      sym_custom_type,
  [4801] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(145), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(373), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
  [4821] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(367), 1,
      anon_sym_constants,
    ACTIONS(369), 1,
      anon_sym_variables,
    ACTIONS(371), 1,
      sym__indent,
    STATE(136), 1,
      sym_block,
    STATE(146), 1,
      sym_comment,
    STATE(165), 1,
      aux_sym_function_definition_repeat1,
    STATE(223), 2,
      sym_constant,
      sym_variable,
  [4847] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(367), 1,
      anon_sym_constants,
    ACTIONS(369), 1,
      anon_sym_variables,
    ACTIONS(371), 1,
      sym__indent,
    STATE(134), 1,
      sym_block,
    STATE(146), 1,
      aux_sym_function_definition_repeat1,
    STATE(147), 1,
      sym_comment,
    STATE(223), 2,
      sym_constant,
      sym_variable,
  [4873] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(148), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
  [4893] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(367), 1,
      anon_sym_constants,
    ACTIONS(369), 1,
      anon_sym_variables,
    ACTIONS(371), 1,
      sym__indent,
    STATE(137), 1,
      sym_block,
    STATE(143), 1,
      aux_sym_function_definition_repeat1,
    STATE(149), 1,
      sym_comment,
    STATE(223), 2,
      sym_constant,
      sym_variable,
  [4919] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(150), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(377), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
  [4939] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_array,
    STATE(23), 1,
      sym__type_name,
    STATE(151), 1,
      sym_comment,
    STATE(267), 1,
      sym__custom_type,
    STATE(268), 1,
      sym__custom_generic_type,
    STATE(264), 2,
      sym_array_type,
      sym_custom_type,
  [4965] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(152), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(379), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
  [4985] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(343), 1,
      sym__dedent,
    STATE(153), 1,
      sym_comment,
    ACTIONS(357), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [5002] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      sym__dedent,
    STATE(154), 1,
      sym_comment,
    ACTIONS(381), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [5019] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(387), 1,
      sym__dedent,
    STATE(155), 1,
      sym_comment,
    ACTIONS(385), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [5036] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(391), 1,
      sym__dedent,
    STATE(156), 1,
      sym_comment,
    ACTIONS(389), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [5053] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(395), 1,
      sym__dedent,
    STATE(157), 1,
      sym_comment,
    ACTIONS(393), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [5070] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      sym__dedent,
    STATE(158), 1,
      sym_comment,
    ACTIONS(397), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [5087] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(403), 1,
      sym__dedent,
    STATE(159), 1,
      sym_comment,
    ACTIONS(401), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [5104] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(407), 1,
      sym__dedent,
    STATE(160), 1,
      sym_comment,
    ACTIONS(405), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [5121] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(335), 1,
      sym__dedent,
    STATE(161), 1,
      sym_comment,
    ACTIONS(355), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [5138] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(339), 1,
      sym__dedent,
    STATE(162), 1,
      sym_comment,
    ACTIONS(409), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [5155] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      anon_sym_var,
    ACTIONS(415), 1,
      sym_identifier,
    STATE(163), 1,
      sym_comment,
    STATE(237), 1,
      sym_parameter,
    STATE(316), 1,
      sym_var,
    STATE(317), 1,
      sym__parameters,
  [5180] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(419), 1,
      sym__dedent,
    STATE(164), 1,
      sym_comment,
    ACTIONS(417), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [5197] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      anon_sym_constants,
    ACTIONS(424), 1,
      anon_sym_variables,
    ACTIONS(427), 1,
      sym__indent,
    STATE(165), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
    STATE(223), 2,
      sym_constant,
      sym_variable,
  [5218] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(431), 1,
      sym__dedent,
    STATE(166), 1,
      sym_comment,
    ACTIONS(429), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [5235] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    STATE(167), 2,
      sym_comment,
      aux_sym_constant_repeat1,
    ACTIONS(291), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [5251] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      sym_comment,
    STATE(169), 1,
      aux_sym__generics_repeat1,
    ACTIONS(438), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5269] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    STATE(169), 2,
      sym_comment,
      aux_sym__generics_repeat1,
    ACTIONS(443), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5285] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_constant_repeat1,
    STATE(170), 1,
      sym_comment,
    ACTIONS(300), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [5303] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(447), 1,
      anon_sym_and,
    STATE(171), 1,
      sym_comment,
    ACTIONS(445), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_or,
  [5319] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(172), 1,
      sym_comment,
    ACTIONS(161), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [5333] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym__generics_repeat1,
    STATE(173), 1,
      sym_comment,
    ACTIONS(449), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5351] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(174), 1,
      sym_comment,
    ACTIONS(445), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [5365] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(453), 1,
      anon_sym_from,
    STATE(175), 1,
      sym_comment,
    ACTIONS(451), 4,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5381] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(176), 1,
      sym_comment,
    ACTIONS(455), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [5395] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(457), 1,
      anon_sym_from,
    STATE(177), 1,
      sym_comment,
    ACTIONS(451), 4,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5411] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(459), 1,
      sym_identifier,
    STATE(178), 1,
      sym_comment,
    STATE(273), 1,
      sym__custom_type,
    STATE(274), 1,
      sym__type_name,
    STATE(281), 1,
      sym_simple_custom_type,
  [5430] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      sym__newline,
    STATE(179), 1,
      sym_comment,
    STATE(257), 1,
      aux_sym_generics_repeat1,
    STATE(258), 1,
      sym__end_line,
  [5449] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(180), 1,
      sym_comment,
    ACTIONS(451), 4,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5462] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(181), 1,
      sym_comment,
    ACTIONS(161), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
  [5475] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(465), 1,
      sym_identifier,
    ACTIONS(467), 1,
      sym__dedent,
    STATE(182), 1,
      sym_comment,
    STATE(188), 1,
      aux_sym_record_repeat1,
    STATE(291), 1,
      sym_record_item,
  [5494] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(183), 1,
      sym_comment,
    ACTIONS(455), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
  [5507] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(184), 1,
      sym_comment,
    ACTIONS(469), 4,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5520] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(471), 1,
      anon_sym_and,
    ACTIONS(473), 1,
      anon_sym_or,
    ACTIONS(475), 1,
      sym__indent,
    STATE(159), 1,
      sym_block,
    STATE(185), 1,
      sym_comment,
  [5539] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(463), 1,
      sym__newline,
    ACTIONS(477), 1,
      anon_sym_generic,
    STATE(186), 1,
      sym_comment,
    STATE(240), 2,
      sym_generics,
      sym__end_line,
  [5556] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(187), 1,
      sym_comment,
    ACTIONS(479), 4,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5569] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(484), 1,
      sym__dedent,
    STATE(291), 1,
      sym_record_item,
    STATE(188), 2,
      sym_comment,
      aux_sym_record_repeat1,
  [5586] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(189), 1,
      sym_comment,
    ACTIONS(486), 4,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5599] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      sym__newline,
    STATE(138), 1,
      sym__end_line,
    STATE(190), 1,
      sym_comment,
    STATE(233), 1,
      aux_sym_export_repeat1,
  [5618] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      sym__newline,
    STATE(179), 1,
      aux_sym_generics_repeat1,
    STATE(191), 1,
      sym_comment,
    STATE(251), 1,
      sym__end_line,
  [5637] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(465), 1,
      sym_identifier,
    ACTIONS(492), 1,
      sym__dedent,
    STATE(188), 1,
      aux_sym_record_repeat1,
    STATE(192), 1,
      sym_comment,
    STATE(291), 1,
      sym_record_item,
  [5656] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(193), 1,
      sym_comment,
    ACTIONS(445), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
  [5669] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(494), 1,
      anon_sym_and,
    STATE(194), 1,
      sym_comment,
    ACTIONS(445), 3,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_or,
  [5684] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(499), 2,
      anon_sym_RBRACK,
      anon_sym_COLON,
    STATE(195), 2,
      sym_comment,
      aux_sym_export_repeat1,
  [5699] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(471), 1,
      anon_sym_and,
    ACTIONS(473), 1,
      anon_sym_or,
    ACTIONS(475), 1,
      sym__indent,
    STATE(156), 1,
      sym_block,
    STATE(196), 1,
      sym_comment,
  [5718] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(501), 1,
      sym_identifier,
    STATE(184), 1,
      sym_simple_custom_type,
    STATE(189), 1,
      sym__custom_type,
    STATE(197), 1,
      sym_comment,
    STATE(204), 1,
      sym__type_name,
  [5737] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      sym__newline,
    ACTIONS(503), 1,
      anon_sym_LBRACK,
    STATE(133), 1,
      sym__end_line,
    STATE(198), 1,
      sym_comment,
    STATE(283), 1,
      sym_imports,
  [5756] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      sym__newline,
    STATE(131), 1,
      sym__end_line,
    STATE(190), 1,
      aux_sym_export_repeat1,
    STATE(199), 1,
      sym_comment,
  [5775] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(494), 1,
      anon_sym_and,
    ACTIONS(507), 1,
      anon_sym_or,
    STATE(200), 1,
      sym_comment,
    ACTIONS(505), 2,
      sym__newline,
      anon_sym_COMMA,
  [5792] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(201), 1,
      sym_comment,
    ACTIONS(509), 4,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5805] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(202), 1,
      sym_comment,
    ACTIONS(511), 4,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5818] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_var,
    ACTIONS(415), 1,
      sym_identifier,
    STATE(203), 1,
      sym_comment,
    STATE(301), 1,
      sym_parameter,
    STATE(316), 1,
      sym_var,
  [5837] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(204), 1,
      sym_comment,
    ACTIONS(105), 4,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5850] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(205), 1,
      sym_comment,
    ACTIONS(513), 4,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5863] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(206), 1,
      sym_comment,
    ACTIONS(321), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [5875] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      sym__newline,
    STATE(207), 1,
      sym_comment,
    STATE(214), 1,
      aux_sym_call_statement_repeat1,
  [5891] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_COLON,
    STATE(195), 1,
      aux_sym_export_repeat1,
    STATE(208), 1,
      sym_comment,
  [5907] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_COLON,
    STATE(208), 1,
      aux_sym_export_repeat1,
    STATE(209), 1,
      sym_comment,
  [5923] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(210), 1,
      sym_comment,
    ACTIONS(455), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [5935] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(447), 1,
      anon_sym_and,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
    ACTIONS(527), 1,
      anon_sym_or,
    STATE(211), 1,
      sym_comment,
  [5951] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(447), 1,
      anon_sym_and,
    ACTIONS(527), 1,
      anon_sym_or,
    ACTIONS(529), 1,
      anon_sym_RBRACK,
    STATE(212), 1,
      sym_comment,
  [5967] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(447), 1,
      anon_sym_and,
    ACTIONS(527), 1,
      anon_sym_or,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      sym_comment,
  [5983] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    ACTIONS(533), 1,
      sym__newline,
    STATE(214), 1,
      sym_comment,
    STATE(232), 1,
      aux_sym_call_statement_repeat1,
  [5999] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(494), 1,
      anon_sym_and,
    ACTIONS(507), 1,
      anon_sym_or,
    ACTIONS(535), 1,
      sym__newline,
    STATE(215), 1,
      sym_comment,
  [6015] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(447), 1,
      anon_sym_and,
    ACTIONS(527), 1,
      anon_sym_or,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym_comment,
  [6031] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(447), 1,
      anon_sym_and,
    ACTIONS(527), 1,
      anon_sym_or,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      sym_comment,
  [6047] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(477), 1,
      anon_sym_generic,
    ACTIONS(541), 1,
      sym__indent,
    STATE(218), 1,
      sym_comment,
    STATE(333), 1,
      sym_generics,
  [6063] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_COLON,
    STATE(219), 1,
      sym_comment,
    STATE(228), 1,
      aux_sym_export_repeat1,
  [6079] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    ACTIONS(547), 1,
      anon_sym_SEMI,
    STATE(220), 2,
      sym_comment,
      aux_sym__parameters_repeat1,
  [6093] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(465), 1,
      sym_identifier,
    STATE(182), 1,
      aux_sym_record_repeat1,
    STATE(221), 1,
      sym_comment,
    STATE(291), 1,
      sym_record_item,
  [6109] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(438), 1,
      sym__newline,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      sym_comment,
    STATE(238), 1,
      aux_sym__generics_repeat1,
  [6125] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(223), 1,
      sym_comment,
    ACTIONS(552), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [6137] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RBRACK,
    STATE(224), 2,
      sym_comment,
      aux_sym_enum_repeat1,
  [6151] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(559), 1,
      sym_identifier,
    STATE(147), 1,
      sym_function_header,
    STATE(225), 1,
      sym_comment,
    STATE(241), 1,
      sym__function_header,
  [6167] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(561), 1,
      anon_sym_EQ,
    STATE(226), 1,
      sym_comment,
    ACTIONS(563), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6181] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(565), 1,
      anon_sym_EQ,
    STATE(227), 1,
      sym_comment,
    ACTIONS(567), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6195] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      anon_sym_COLON,
    STATE(195), 1,
      aux_sym_export_repeat1,
    STATE(228), 1,
      sym_comment,
  [6211] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(229), 1,
      sym_comment,
    ACTIONS(445), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [6223] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(471), 1,
      anon_sym_and,
    STATE(230), 1,
      sym_comment,
    ACTIONS(445), 2,
      sym__indent,
      anon_sym_or,
  [6237] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(465), 1,
      sym_identifier,
    STATE(192), 1,
      aux_sym_record_repeat1,
    STATE(231), 1,
      sym_comment,
    STATE(291), 1,
      sym_record_item,
  [6253] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(574), 1,
      sym__newline,
    STATE(232), 2,
      sym_comment,
      aux_sym_call_statement_repeat1,
  [6267] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      sym__newline,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    STATE(233), 2,
      sym_comment,
      aux_sym_export_repeat1,
  [6281] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(579), 1,
      anon_sym_RBRACK,
    STATE(234), 1,
      sym_comment,
    STATE(252), 1,
      aux_sym_export_repeat1,
  [6297] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_COLON,
    STATE(235), 1,
      sym_comment,
    STATE(253), 1,
      aux_sym_parameter_repeat1,
  [6313] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(236), 1,
      sym_comment,
    ACTIONS(585), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6325] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    ACTIONS(589), 1,
      anon_sym_SEMI,
    STATE(237), 1,
      sym_comment,
    STATE(259), 1,
      aux_sym__parameters_repeat1,
  [6341] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      sym__newline,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(238), 2,
      sym_comment,
      aux_sym__generics_repeat1,
  [6355] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(594), 1,
      anon_sym_EQ,
    STATE(239), 1,
      sym_comment,
    ACTIONS(596), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6369] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(240), 1,
      sym_comment,
    ACTIONS(598), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [6381] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(241), 1,
      sym_comment,
    ACTIONS(600), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [6393] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(602), 1,
      anon_sym_from,
    STATE(242), 1,
      sym_comment,
    ACTIONS(451), 2,
      sym__newline,
      anon_sym_COMMA,
  [6407] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(604), 1,
      anon_sym_from,
    STATE(243), 1,
      sym_comment,
    ACTIONS(451), 2,
      sym__newline,
      anon_sym_COMMA,
  [6421] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(244), 1,
      sym_comment,
    ACTIONS(327), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [6433] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(447), 1,
      anon_sym_and,
    ACTIONS(527), 1,
      anon_sym_or,
    ACTIONS(606), 1,
      anon_sym_then,
    STATE(245), 1,
      sym_comment,
  [6449] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(447), 1,
      anon_sym_and,
    ACTIONS(527), 1,
      anon_sym_or,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      sym_comment,
  [6465] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      sym_comment,
    STATE(261), 1,
      aux_sym_enum_repeat1,
  [6481] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      anon_sym_COLON,
    STATE(248), 1,
      sym_comment,
    STATE(249), 1,
      aux_sym_parameter_repeat1,
  [6497] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    ACTIONS(619), 1,
      anon_sym_COLON,
    STATE(249), 2,
      sym_comment,
      aux_sym_parameter_repeat1,
  [6511] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(621), 1,
      anon_sym_EQ,
    STATE(250), 1,
      sym_comment,
    ACTIONS(623), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6525] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(251), 1,
      sym_comment,
    ACTIONS(625), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [6537] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      aux_sym_export_repeat1,
    STATE(252), 1,
      sym_comment,
  [6553] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(629), 1,
      anon_sym_COLON,
    STATE(249), 1,
      aux_sym_parameter_repeat1,
    STATE(253), 1,
      sym_comment,
  [6569] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(254), 1,
      sym_comment,
    ACTIONS(339), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [6581] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(255), 1,
      sym_comment,
    ACTIONS(631), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [6593] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_COLON,
    STATE(248), 1,
      aux_sym_parameter_repeat1,
    STATE(256), 1,
      sym_comment,
  [6609] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    ACTIONS(638), 1,
      sym__newline,
    STATE(257), 2,
      sym_comment,
      aux_sym_generics_repeat1,
  [6623] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(258), 1,
      sym_comment,
    ACTIONS(640), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [6635] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(589), 1,
      anon_sym_SEMI,
    ACTIONS(642), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym__parameters_repeat1,
    STATE(259), 1,
      sym_comment,
  [6651] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(447), 1,
      anon_sym_and,
    ACTIONS(527), 1,
      anon_sym_or,
    ACTIONS(644), 1,
      anon_sym_then,
    STATE(260), 1,
      sym_comment,
  [6667] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      anon_sym_RBRACK,
    STATE(224), 1,
      aux_sym_enum_repeat1,
    STATE(261), 1,
      sym_comment,
  [6683] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      sym__newline,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      aux_sym__generics_repeat1,
    STATE(262), 1,
      sym_comment,
  [6699] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(263), 1,
      sym_comment,
    ACTIONS(648), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6711] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(264), 1,
      sym_comment,
    ACTIONS(650), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6723] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(265), 1,
      sym_comment,
    ACTIONS(652), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6735] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(266), 1,
      sym_comment,
    ACTIONS(161), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [6747] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(267), 1,
      sym_comment,
    ACTIONS(654), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6759] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(268), 1,
      sym_comment,
    ACTIONS(656), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [6771] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(269), 1,
      sym_comment,
    ACTIONS(339), 2,
      sym__dedent,
      sym_identifier,
  [6782] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(270), 1,
      sym_comment,
    ACTIONS(451), 2,
      sym__newline,
      anon_sym_COMMA,
  [6793] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(475), 1,
      sym__indent,
    STATE(157), 1,
      sym_block,
    STATE(271), 1,
      sym_comment,
  [6806] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      sym__newline,
    STATE(124), 1,
      sym__end_line,
    STATE(272), 1,
      sym_comment,
  [6819] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(273), 1,
      sym_comment,
    ACTIONS(486), 2,
      sym__newline,
      anon_sym_COMMA,
  [6830] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(274), 1,
      sym_comment,
    ACTIONS(105), 2,
      sym__newline,
      anon_sym_COMMA,
  [6841] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(463), 1,
      sym__newline,
    STATE(206), 1,
      sym__end_line,
    STATE(275), 1,
      sym_comment,
  [6854] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(658), 1,
      sym__indent,
    STATE(108), 1,
      sym_block,
    STATE(276), 1,
      sym_comment,
  [6867] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(277), 1,
      sym_comment,
    ACTIONS(509), 2,
      sym__newline,
      anon_sym_COMMA,
  [6878] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(278), 1,
      sym_comment,
    ACTIONS(660), 2,
      sym__newline,
      anon_sym_COMMA,
  [6889] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(559), 1,
      sym_identifier,
    STATE(149), 1,
      sym__function_header,
    STATE(279), 1,
      sym_comment,
  [6902] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_parameters,
    STATE(280), 1,
      sym_comment,
  [6915] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(281), 1,
      sym_comment,
    ACTIONS(469), 2,
      sym__newline,
      anon_sym_COMMA,
  [6926] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(282), 1,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6937] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      sym__newline,
    STATE(120), 1,
      sym__end_line,
    STATE(283), 1,
      sym_comment,
  [6950] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(284), 1,
      sym_comment,
    ACTIONS(666), 2,
      sym__dedent,
      sym_identifier,
  [6961] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(668), 1,
      sym_identifier,
    STATE(278), 1,
      sym_variable_access,
    STATE(285), 1,
      sym_comment,
  [6974] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(463), 1,
      sym__newline,
    STATE(244), 1,
      sym__end_line,
    STATE(286), 1,
      sym_comment,
  [6987] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(670), 1,
      anon_sym_from,
    STATE(271), 1,
      sym_range,
    STATE(287), 1,
      sym_comment,
  [7000] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(288), 1,
      sym_comment,
    ACTIONS(574), 2,
      sym__newline,
      anon_sym_COMMA,
  [7011] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(289), 1,
      sym_comment,
    ACTIONS(672), 2,
      sym__newline,
      anon_sym_COMMA,
  [7022] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(290), 1,
      sym_comment,
    ACTIONS(674), 2,
      sym__newline,
      anon_sym_generic,
  [7033] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(291), 1,
      sym_comment,
    ACTIONS(676), 2,
      sym__dedent,
      sym_identifier,
  [7044] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(678), 1,
      sym__newline,
    STATE(284), 1,
      sym__end_line,
    STATE(292), 1,
      sym_comment,
  [7057] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(293), 1,
      sym_comment,
    ACTIONS(619), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [7068] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(294), 1,
      sym_comment,
    ACTIONS(631), 2,
      sym__newline,
      anon_sym_COMMA,
  [7079] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(295), 1,
      sym_comment,
    ACTIONS(680), 2,
      sym__newline,
      anon_sym_generic,
  [7090] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(296), 1,
      sym_comment,
    ACTIONS(513), 2,
      sym__newline,
      anon_sym_COMMA,
  [7101] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(658), 1,
      sym__indent,
    STATE(141), 1,
      sym_block,
    STATE(297), 1,
      sym_comment,
  [7114] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      sym__newline,
    STATE(121), 1,
      sym__end_line,
    STATE(298), 1,
      sym_comment,
  [7127] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(299), 1,
      sym_comment,
    ACTIONS(511), 2,
      sym__newline,
      anon_sym_COMMA,
  [7138] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(300), 1,
      sym_comment,
    ACTIONS(479), 2,
      sym__newline,
      anon_sym_COMMA,
  [7149] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(301), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [7160] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(475), 1,
      sym__indent,
    STATE(164), 1,
      sym_block,
    STATE(302), 1,
      sym_comment,
  [7173] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(682), 1,
      sym__newline,
    STATE(160), 1,
      sym__end_line,
    STATE(303), 1,
      sym_comment,
  [7186] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(684), 1,
      sym_integer,
    STATE(304), 1,
      sym_comment,
  [7196] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(686), 1,
      anon_sym_to,
    STATE(305), 1,
      sym_comment,
  [7206] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(656), 1,
      sym__newline,
    STATE(306), 1,
      sym_comment,
  [7216] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(654), 1,
      sym__newline,
    STATE(307), 1,
      sym_comment,
  [7226] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(652), 1,
      sym__newline,
    STATE(308), 1,
      sym_comment,
  [7236] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(688), 1,
      anon_sym_from,
    STATE(309), 1,
      sym_comment,
  [7246] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(690), 1,
      sym__indent,
    STATE(310), 1,
      sym_comment,
  [7256] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(692), 1,
      anon_sym_of,
    STATE(311), 1,
      sym_comment,
  [7266] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(694), 1,
      anon_sym_COLON_EQ,
    STATE(312), 1,
      sym_comment,
  [7276] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(696), 1,
      anon_sym_until,
    STATE(313), 1,
      sym_comment,
  [7286] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(698), 1,
      sym_identifier,
    STATE(314), 1,
      sym_comment,
  [7296] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(700), 1,
      sym_integer,
    STATE(315), 1,
      sym_comment,
  [7306] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(702), 1,
      sym_identifier,
    STATE(316), 1,
      sym_comment,
  [7316] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      sym_comment,
  [7326] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(706), 1,
      sym_identifier,
    STATE(318), 1,
      sym_comment,
  [7336] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(319), 1,
      sym_comment,
  [7346] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(710), 1,
      sym_integer,
    STATE(320), 1,
      sym_comment,
  [7356] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(684), 1,
      sym_real,
    STATE(321), 1,
      sym_comment,
  [7366] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(585), 1,
      sym__newline,
    STATE(322), 1,
      sym_comment,
  [7376] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(712), 1,
      sym__newline,
    STATE(323), 1,
      sym_comment,
  [7386] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(714), 1,
      sym_identifier,
    STATE(324), 1,
      sym_comment,
  [7396] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(716), 1,
      anon_sym_COLON,
    STATE(325), 1,
      sym_comment,
  [7406] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(718), 1,
      sym_identifier,
    STATE(326), 1,
      sym_comment,
  [7416] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(720), 1,
      sym__newline,
    STATE(327), 1,
      sym_comment,
  [7426] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(722), 1,
      anon_sym_to,
    STATE(328), 1,
      sym_comment,
  [7436] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(724), 1,
      sym_integer,
    STATE(329), 1,
      sym_comment,
  [7446] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(330), 1,
      sym_comment,
  [7456] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(728), 1,
      sym_identifier,
    STATE(331), 1,
      sym_comment,
  [7466] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(730), 1,
      sym_identifier,
    STATE(332), 1,
      sym_comment,
  [7476] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(732), 1,
      sym__indent,
    STATE(333), 1,
      sym_comment,
  [7486] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(734), 1,
      sym_identifier,
    STATE(334), 1,
      sym_comment,
  [7496] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(736), 1,
      sym__newline,
    STATE(335), 1,
      sym_comment,
  [7506] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(738), 1,
      anon_sym_LBRACK,
    STATE(336), 1,
      sym_comment,
  [7516] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(740), 1,
      sym_identifier,
    STATE(337), 1,
      sym_comment,
  [7526] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(742), 1,
      sym_identifier,
    STATE(338), 1,
      sym_comment,
  [7536] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_comment,
  [7546] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(746), 1,
      anon_sym_EQ,
    STATE(340), 1,
      sym_comment,
  [7556] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(748), 1,
      anon_sym_for,
    STATE(341), 1,
      sym_comment,
  [7566] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(750), 1,
      sym_integer,
    STATE(342), 1,
      sym_comment,
  [7576] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(752), 1,
      sym_identifier,
    STATE(343), 1,
      sym_comment,
  [7586] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(754), 1,
      anon_sym_EQ,
    STATE(344), 1,
      sym_comment,
  [7596] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(756), 1,
      anon_sym_from,
    STATE(345), 1,
      sym_comment,
  [7606] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(758), 1,
      sym_identifier,
    STATE(346), 1,
      sym_comment,
  [7616] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(760), 1,
      anon_sym_to,
    STATE(347), 1,
      sym_comment,
  [7626] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(762), 1,
      ts_builtin_sym_end,
    STATE(348), 1,
      sym_comment,
  [7636] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(764), 1,
      sym_identifier,
    STATE(349), 1,
      sym_comment,
  [7646] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(766), 1,
      sym_identifier,
    STATE(350), 1,
      sym_comment,
  [7656] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(768), 1,
      anon_sym_to,
    STATE(351), 1,
      sym_comment,
  [7666] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(770), 1,
      anon_sym_EQ,
    STATE(352), 1,
      sym_comment,
  [7676] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      sym_comment,
  [7686] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(774), 1,
      sym_integer,
    STATE(354), 1,
      sym_comment,
  [7696] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(774), 1,
      sym_real,
    STATE(355), 1,
      sym_comment,
  [7706] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(776), 1,
      anon_sym_of,
    STATE(356), 1,
      sym_comment,
  [7716] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(778), 1,
      sym_identifier,
    STATE(357), 1,
      sym_comment,
  [7726] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(780), 1,
      sym_real,
    STATE(358), 1,
      sym_comment,
  [7736] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(782), 1,
      sym_identifier,
    STATE(359), 1,
      sym_comment,
  [7746] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(784), 1,
      anon_sym_EQ,
    STATE(360), 1,
      sym_comment,
  [7756] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(786), 1,
      sym_integer,
    STATE(361), 1,
      sym_comment,
  [7766] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(788), 1,
      anon_sym_EQ,
    STATE(362), 1,
      sym_comment,
  [7776] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(650), 1,
      sym__newline,
    STATE(363), 1,
      sym_comment,
  [7786] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(648), 1,
      sym__newline,
    STATE(364), 1,
      sym_comment,
  [7796] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(790), 1,
      sym_identifier,
    STATE(365), 1,
      sym_comment,
  [7806] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(792), 1,
      sym_identifier,
    STATE(366), 1,
      sym_comment,
  [7816] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(794), 1,
      sym_identifier,
    STATE(367), 1,
      sym_comment,
  [7826] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(796), 1,
      sym_identifier,
    STATE(368), 1,
      sym_comment,
  [7836] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(798), 1,
      anon_sym_to,
    STATE(369), 1,
      sym_comment,
  [7846] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(800), 1,
      anon_sym_to,
    STATE(370), 1,
      sym_comment,
  [7856] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(802), 1,
      sym_integer,
    STATE(371), 1,
      sym_comment,
  [7866] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(804), 1,
      sym_identifier,
    STATE(372), 1,
      sym_comment,
  [7876] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(806), 1,
      sym_identifier,
    STATE(373), 1,
      sym_comment,
  [7886] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(808), 1,
      sym_identifier,
    STATE(374), 1,
      sym_comment,
  [7896] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(810), 1,
      sym_identifier,
    STATE(375), 1,
      sym_comment,
  [7906] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(812), 1,
      sym_integer,
    STATE(376), 1,
      sym_comment,
  [7916] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(814), 1,
      sym_real,
    STATE(377), 1,
      sym_comment,
  [7926] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(816), 1,
      anon_sym_to,
    STATE(378), 1,
      sym_comment,
  [7936] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(818), 1,
      sym_integer,
    STATE(379), 1,
      sym_comment,
  [7946] = 1,
    ACTIONS(820), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 182,
  [SMALL_STATE(7)] = 223,
  [SMALL_STATE(8)] = 261,
  [SMALL_STATE(9)] = 299,
  [SMALL_STATE(10)] = 339,
  [SMALL_STATE(11)] = 377,
  [SMALL_STATE(12)] = 442,
  [SMALL_STATE(13)] = 479,
  [SMALL_STATE(14)] = 516,
  [SMALL_STATE(15)] = 551,
  [SMALL_STATE(16)] = 601,
  [SMALL_STATE(17)] = 631,
  [SMALL_STATE(18)] = 661,
  [SMALL_STATE(19)] = 694,
  [SMALL_STATE(20)] = 741,
  [SMALL_STATE(21)] = 788,
  [SMALL_STATE(22)] = 823,
  [SMALL_STATE(23)] = 858,
  [SMALL_STATE(24)] = 907,
  [SMALL_STATE(25)] = 954,
  [SMALL_STATE(26)] = 999,
  [SMALL_STATE(27)] = 1041,
  [SMALL_STATE(28)] = 1069,
  [SMALL_STATE(29)] = 1111,
  [SMALL_STATE(30)] = 1139,
  [SMALL_STATE(31)] = 1169,
  [SMALL_STATE(32)] = 1197,
  [SMALL_STATE(33)] = 1239,
  [SMALL_STATE(34)] = 1281,
  [SMALL_STATE(35)] = 1323,
  [SMALL_STATE(36)] = 1365,
  [SMALL_STATE(37)] = 1407,
  [SMALL_STATE(38)] = 1443,
  [SMALL_STATE(39)] = 1485,
  [SMALL_STATE(40)] = 1527,
  [SMALL_STATE(41)] = 1569,
  [SMALL_STATE(42)] = 1611,
  [SMALL_STATE(43)] = 1653,
  [SMALL_STATE(44)] = 1695,
  [SMALL_STATE(45)] = 1737,
  [SMALL_STATE(46)] = 1779,
  [SMALL_STATE(47)] = 1807,
  [SMALL_STATE(48)] = 1849,
  [SMALL_STATE(49)] = 1891,
  [SMALL_STATE(50)] = 1919,
  [SMALL_STATE(51)] = 1961,
  [SMALL_STATE(52)] = 2003,
  [SMALL_STATE(53)] = 2045,
  [SMALL_STATE(54)] = 2076,
  [SMALL_STATE(55)] = 2121,
  [SMALL_STATE(56)] = 2166,
  [SMALL_STATE(57)] = 2199,
  [SMALL_STATE(58)] = 2244,
  [SMALL_STATE(59)] = 2289,
  [SMALL_STATE(60)] = 2324,
  [SMALL_STATE(61)] = 2371,
  [SMALL_STATE(62)] = 2416,
  [SMALL_STATE(63)] = 2461,
  [SMALL_STATE(64)] = 2506,
  [SMALL_STATE(65)] = 2551,
  [SMALL_STATE(66)] = 2596,
  [SMALL_STATE(67)] = 2641,
  [SMALL_STATE(68)] = 2686,
  [SMALL_STATE(69)] = 2731,
  [SMALL_STATE(70)] = 2776,
  [SMALL_STATE(71)] = 2821,
  [SMALL_STATE(72)] = 2866,
  [SMALL_STATE(73)] = 2911,
  [SMALL_STATE(74)] = 2956,
  [SMALL_STATE(75)] = 3001,
  [SMALL_STATE(76)] = 3044,
  [SMALL_STATE(77)] = 3089,
  [SMALL_STATE(78)] = 3119,
  [SMALL_STATE(79)] = 3145,
  [SMALL_STATE(80)] = 3173,
  [SMALL_STATE(81)] = 3199,
  [SMALL_STATE(82)] = 3225,
  [SMALL_STATE(83)] = 3253,
  [SMALL_STATE(84)] = 3287,
  [SMALL_STATE(85)] = 3315,
  [SMALL_STATE(86)] = 3356,
  [SMALL_STATE(87)] = 3385,
  [SMALL_STATE(88)] = 3426,
  [SMALL_STATE(89)] = 3457,
  [SMALL_STATE(90)] = 3480,
  [SMALL_STATE(91)] = 3511,
  [SMALL_STATE(92)] = 3542,
  [SMALL_STATE(93)] = 3573,
  [SMALL_STATE(94)] = 3604,
  [SMALL_STATE(95)] = 3635,
  [SMALL_STATE(96)] = 3666,
  [SMALL_STATE(97)] = 3697,
  [SMALL_STATE(98)] = 3728,
  [SMALL_STATE(99)] = 3759,
  [SMALL_STATE(100)] = 3790,
  [SMALL_STATE(101)] = 3821,
  [SMALL_STATE(102)] = 3852,
  [SMALL_STATE(103)] = 3883,
  [SMALL_STATE(104)] = 3908,
  [SMALL_STATE(105)] = 3939,
  [SMALL_STATE(106)] = 3966,
  [SMALL_STATE(107)] = 3997,
  [SMALL_STATE(108)] = 4028,
  [SMALL_STATE(109)] = 4060,
  [SMALL_STATE(110)] = 4084,
  [SMALL_STATE(111)] = 4110,
  [SMALL_STATE(112)] = 4132,
  [SMALL_STATE(113)] = 4164,
  [SMALL_STATE(114)] = 4188,
  [SMALL_STATE(115)] = 4215,
  [SMALL_STATE(116)] = 4238,
  [SMALL_STATE(117)] = 4263,
  [SMALL_STATE(118)] = 4284,
  [SMALL_STATE(119)] = 4309,
  [SMALL_STATE(120)] = 4327,
  [SMALL_STATE(121)] = 4345,
  [SMALL_STATE(122)] = 4363,
  [SMALL_STATE(123)] = 4381,
  [SMALL_STATE(124)] = 4399,
  [SMALL_STATE(125)] = 4417,
  [SMALL_STATE(126)] = 4435,
  [SMALL_STATE(127)] = 4453,
  [SMALL_STATE(128)] = 4471,
  [SMALL_STATE(129)] = 4489,
  [SMALL_STATE(130)] = 4507,
  [SMALL_STATE(131)] = 4525,
  [SMALL_STATE(132)] = 4543,
  [SMALL_STATE(133)] = 4561,
  [SMALL_STATE(134)] = 4579,
  [SMALL_STATE(135)] = 4597,
  [SMALL_STATE(136)] = 4619,
  [SMALL_STATE(137)] = 4637,
  [SMALL_STATE(138)] = 4655,
  [SMALL_STATE(139)] = 4673,
  [SMALL_STATE(140)] = 4692,
  [SMALL_STATE(141)] = 4711,
  [SMALL_STATE(142)] = 4730,
  [SMALL_STATE(143)] = 4749,
  [SMALL_STATE(144)] = 4775,
  [SMALL_STATE(145)] = 4801,
  [SMALL_STATE(146)] = 4821,
  [SMALL_STATE(147)] = 4847,
  [SMALL_STATE(148)] = 4873,
  [SMALL_STATE(149)] = 4893,
  [SMALL_STATE(150)] = 4919,
  [SMALL_STATE(151)] = 4939,
  [SMALL_STATE(152)] = 4965,
  [SMALL_STATE(153)] = 4985,
  [SMALL_STATE(154)] = 5002,
  [SMALL_STATE(155)] = 5019,
  [SMALL_STATE(156)] = 5036,
  [SMALL_STATE(157)] = 5053,
  [SMALL_STATE(158)] = 5070,
  [SMALL_STATE(159)] = 5087,
  [SMALL_STATE(160)] = 5104,
  [SMALL_STATE(161)] = 5121,
  [SMALL_STATE(162)] = 5138,
  [SMALL_STATE(163)] = 5155,
  [SMALL_STATE(164)] = 5180,
  [SMALL_STATE(165)] = 5197,
  [SMALL_STATE(166)] = 5218,
  [SMALL_STATE(167)] = 5235,
  [SMALL_STATE(168)] = 5251,
  [SMALL_STATE(169)] = 5269,
  [SMALL_STATE(170)] = 5285,
  [SMALL_STATE(171)] = 5303,
  [SMALL_STATE(172)] = 5319,
  [SMALL_STATE(173)] = 5333,
  [SMALL_STATE(174)] = 5351,
  [SMALL_STATE(175)] = 5365,
  [SMALL_STATE(176)] = 5381,
  [SMALL_STATE(177)] = 5395,
  [SMALL_STATE(178)] = 5411,
  [SMALL_STATE(179)] = 5430,
  [SMALL_STATE(180)] = 5449,
  [SMALL_STATE(181)] = 5462,
  [SMALL_STATE(182)] = 5475,
  [SMALL_STATE(183)] = 5494,
  [SMALL_STATE(184)] = 5507,
  [SMALL_STATE(185)] = 5520,
  [SMALL_STATE(186)] = 5539,
  [SMALL_STATE(187)] = 5556,
  [SMALL_STATE(188)] = 5569,
  [SMALL_STATE(189)] = 5586,
  [SMALL_STATE(190)] = 5599,
  [SMALL_STATE(191)] = 5618,
  [SMALL_STATE(192)] = 5637,
  [SMALL_STATE(193)] = 5656,
  [SMALL_STATE(194)] = 5669,
  [SMALL_STATE(195)] = 5684,
  [SMALL_STATE(196)] = 5699,
  [SMALL_STATE(197)] = 5718,
  [SMALL_STATE(198)] = 5737,
  [SMALL_STATE(199)] = 5756,
  [SMALL_STATE(200)] = 5775,
  [SMALL_STATE(201)] = 5792,
  [SMALL_STATE(202)] = 5805,
  [SMALL_STATE(203)] = 5818,
  [SMALL_STATE(204)] = 5837,
  [SMALL_STATE(205)] = 5850,
  [SMALL_STATE(206)] = 5863,
  [SMALL_STATE(207)] = 5875,
  [SMALL_STATE(208)] = 5891,
  [SMALL_STATE(209)] = 5907,
  [SMALL_STATE(210)] = 5923,
  [SMALL_STATE(211)] = 5935,
  [SMALL_STATE(212)] = 5951,
  [SMALL_STATE(213)] = 5967,
  [SMALL_STATE(214)] = 5983,
  [SMALL_STATE(215)] = 5999,
  [SMALL_STATE(216)] = 6015,
  [SMALL_STATE(217)] = 6031,
  [SMALL_STATE(218)] = 6047,
  [SMALL_STATE(219)] = 6063,
  [SMALL_STATE(220)] = 6079,
  [SMALL_STATE(221)] = 6093,
  [SMALL_STATE(222)] = 6109,
  [SMALL_STATE(223)] = 6125,
  [SMALL_STATE(224)] = 6137,
  [SMALL_STATE(225)] = 6151,
  [SMALL_STATE(226)] = 6167,
  [SMALL_STATE(227)] = 6181,
  [SMALL_STATE(228)] = 6195,
  [SMALL_STATE(229)] = 6211,
  [SMALL_STATE(230)] = 6223,
  [SMALL_STATE(231)] = 6237,
  [SMALL_STATE(232)] = 6253,
  [SMALL_STATE(233)] = 6267,
  [SMALL_STATE(234)] = 6281,
  [SMALL_STATE(235)] = 6297,
  [SMALL_STATE(236)] = 6313,
  [SMALL_STATE(237)] = 6325,
  [SMALL_STATE(238)] = 6341,
  [SMALL_STATE(239)] = 6355,
  [SMALL_STATE(240)] = 6369,
  [SMALL_STATE(241)] = 6381,
  [SMALL_STATE(242)] = 6393,
  [SMALL_STATE(243)] = 6407,
  [SMALL_STATE(244)] = 6421,
  [SMALL_STATE(245)] = 6433,
  [SMALL_STATE(246)] = 6449,
  [SMALL_STATE(247)] = 6465,
  [SMALL_STATE(248)] = 6481,
  [SMALL_STATE(249)] = 6497,
  [SMALL_STATE(250)] = 6511,
  [SMALL_STATE(251)] = 6525,
  [SMALL_STATE(252)] = 6537,
  [SMALL_STATE(253)] = 6553,
  [SMALL_STATE(254)] = 6569,
  [SMALL_STATE(255)] = 6581,
  [SMALL_STATE(256)] = 6593,
  [SMALL_STATE(257)] = 6609,
  [SMALL_STATE(258)] = 6623,
  [SMALL_STATE(259)] = 6635,
  [SMALL_STATE(260)] = 6651,
  [SMALL_STATE(261)] = 6667,
  [SMALL_STATE(262)] = 6683,
  [SMALL_STATE(263)] = 6699,
  [SMALL_STATE(264)] = 6711,
  [SMALL_STATE(265)] = 6723,
  [SMALL_STATE(266)] = 6735,
  [SMALL_STATE(267)] = 6747,
  [SMALL_STATE(268)] = 6759,
  [SMALL_STATE(269)] = 6771,
  [SMALL_STATE(270)] = 6782,
  [SMALL_STATE(271)] = 6793,
  [SMALL_STATE(272)] = 6806,
  [SMALL_STATE(273)] = 6819,
  [SMALL_STATE(274)] = 6830,
  [SMALL_STATE(275)] = 6841,
  [SMALL_STATE(276)] = 6854,
  [SMALL_STATE(277)] = 6867,
  [SMALL_STATE(278)] = 6878,
  [SMALL_STATE(279)] = 6889,
  [SMALL_STATE(280)] = 6902,
  [SMALL_STATE(281)] = 6915,
  [SMALL_STATE(282)] = 6926,
  [SMALL_STATE(283)] = 6937,
  [SMALL_STATE(284)] = 6950,
  [SMALL_STATE(285)] = 6961,
  [SMALL_STATE(286)] = 6974,
  [SMALL_STATE(287)] = 6987,
  [SMALL_STATE(288)] = 7000,
  [SMALL_STATE(289)] = 7011,
  [SMALL_STATE(290)] = 7022,
  [SMALL_STATE(291)] = 7033,
  [SMALL_STATE(292)] = 7044,
  [SMALL_STATE(293)] = 7057,
  [SMALL_STATE(294)] = 7068,
  [SMALL_STATE(295)] = 7079,
  [SMALL_STATE(296)] = 7090,
  [SMALL_STATE(297)] = 7101,
  [SMALL_STATE(298)] = 7114,
  [SMALL_STATE(299)] = 7127,
  [SMALL_STATE(300)] = 7138,
  [SMALL_STATE(301)] = 7149,
  [SMALL_STATE(302)] = 7160,
  [SMALL_STATE(303)] = 7173,
  [SMALL_STATE(304)] = 7186,
  [SMALL_STATE(305)] = 7196,
  [SMALL_STATE(306)] = 7206,
  [SMALL_STATE(307)] = 7216,
  [SMALL_STATE(308)] = 7226,
  [SMALL_STATE(309)] = 7236,
  [SMALL_STATE(310)] = 7246,
  [SMALL_STATE(311)] = 7256,
  [SMALL_STATE(312)] = 7266,
  [SMALL_STATE(313)] = 7276,
  [SMALL_STATE(314)] = 7286,
  [SMALL_STATE(315)] = 7296,
  [SMALL_STATE(316)] = 7306,
  [SMALL_STATE(317)] = 7316,
  [SMALL_STATE(318)] = 7326,
  [SMALL_STATE(319)] = 7336,
  [SMALL_STATE(320)] = 7346,
  [SMALL_STATE(321)] = 7356,
  [SMALL_STATE(322)] = 7366,
  [SMALL_STATE(323)] = 7376,
  [SMALL_STATE(324)] = 7386,
  [SMALL_STATE(325)] = 7396,
  [SMALL_STATE(326)] = 7406,
  [SMALL_STATE(327)] = 7416,
  [SMALL_STATE(328)] = 7426,
  [SMALL_STATE(329)] = 7436,
  [SMALL_STATE(330)] = 7446,
  [SMALL_STATE(331)] = 7456,
  [SMALL_STATE(332)] = 7466,
  [SMALL_STATE(333)] = 7476,
  [SMALL_STATE(334)] = 7486,
  [SMALL_STATE(335)] = 7496,
  [SMALL_STATE(336)] = 7506,
  [SMALL_STATE(337)] = 7516,
  [SMALL_STATE(338)] = 7526,
  [SMALL_STATE(339)] = 7536,
  [SMALL_STATE(340)] = 7546,
  [SMALL_STATE(341)] = 7556,
  [SMALL_STATE(342)] = 7566,
  [SMALL_STATE(343)] = 7576,
  [SMALL_STATE(344)] = 7586,
  [SMALL_STATE(345)] = 7596,
  [SMALL_STATE(346)] = 7606,
  [SMALL_STATE(347)] = 7616,
  [SMALL_STATE(348)] = 7626,
  [SMALL_STATE(349)] = 7636,
  [SMALL_STATE(350)] = 7646,
  [SMALL_STATE(351)] = 7656,
  [SMALL_STATE(352)] = 7666,
  [SMALL_STATE(353)] = 7676,
  [SMALL_STATE(354)] = 7686,
  [SMALL_STATE(355)] = 7696,
  [SMALL_STATE(356)] = 7706,
  [SMALL_STATE(357)] = 7716,
  [SMALL_STATE(358)] = 7726,
  [SMALL_STATE(359)] = 7736,
  [SMALL_STATE(360)] = 7746,
  [SMALL_STATE(361)] = 7756,
  [SMALL_STATE(362)] = 7766,
  [SMALL_STATE(363)] = 7776,
  [SMALL_STATE(364)] = 7786,
  [SMALL_STATE(365)] = 7796,
  [SMALL_STATE(366)] = 7806,
  [SMALL_STATE(367)] = 7816,
  [SMALL_STATE(368)] = 7826,
  [SMALL_STATE(369)] = 7836,
  [SMALL_STATE(370)] = 7846,
  [SMALL_STATE(371)] = 7856,
  [SMALL_STATE(372)] = 7866,
  [SMALL_STATE(373)] = 7876,
  [SMALL_STATE(374)] = 7886,
  [SMALL_STATE(375)] = 7896,
  [SMALL_STATE(376)] = 7906,
  [SMALL_STATE(377)] = 7916,
  [SMALL_STATE(378)] = 7926,
  [SMALL_STATE(379)] = 7936,
  [SMALL_STATE(380)] = 7946,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 2, .production_id = 19),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 2, .production_id = 19),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 38),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 38), SHIFT_REPEAT(48),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 38),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 38), SHIFT_REPEAT(330),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 36),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 36),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 52),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 52),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 40),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 40),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 1, .production_id = 9),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 38), SHIFT_REPEAT(45),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 38), SHIFT_REPEAT(346),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 38), SHIFT_REPEAT(28),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 38), SHIFT_REPEAT(359),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 13),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(373),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(372),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(368),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(366),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(279),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(357),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(350),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(349),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 49),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 49),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4, .production_id = 11),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(314),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(313),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(47),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(42),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 4, .production_id = 11),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_argument, 1), REDUCE(sym_primary_expression, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_name, 1, .production_id = 12),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_name, 1, .production_id = 12),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 50), SHIFT_REPEAT(98),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 50),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 50), SHIFT_REPEAT(98),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 2, .production_id = 34),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 4, .production_id = 51),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 4, .production_id = 51),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 50), SHIFT_REPEAT(92),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 50), SHIFT_REPEAT(92),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2, .production_id = 41),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2, .production_id = 41), SHIFT_REPEAT(337),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 5, .production_id = 59),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 5, .production_id = 59),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 5, .production_id = 21),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 50), SHIFT_REPEAT(91),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 50), SHIFT_REPEAT(91),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_then_statement_repeat1, 2, .production_id = 66),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_then_statement_repeat1, 2, .production_id = 66), SHIFT_REPEAT(36),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2, .production_id = 66),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5, .production_id = 15),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 7),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 26),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7, .production_id = 44),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, .production_id = 27),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 42),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6, .production_id = 30),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_line, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3, .production_id = 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, .production_id = 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, .production_id = 20),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, .production_id = 20),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 4, .production_id = 5),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elsif, 4, .production_id = 51),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif, 4, .production_id = 51),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_then_statement_repeat1, 1, .production_id = 57),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 1, .production_id = 57),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5, .production_id = 55),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 7, .production_id = 67),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 6, .production_id = 62),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 6, .production_id = 61),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_statement, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 5, .production_id = 58),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 5, .production_id = 58),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 33),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 33),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 4, .production_id = 47),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 4, .production_id = 47),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 4, .production_id = 48),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, .production_id = 48),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statement, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statement, 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end_line, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else, 2, .production_id = 64),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2, .production_id = 64),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(374),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(375),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 6, .production_id = 65),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 6, .production_id = 65),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2, .production_id = 41), SHIFT_REPEAT(367),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 2, .production_id = 29),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 29), SHIFT_REPEAT(87),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 29),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 40),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 1, .production_id = 24),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 32),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_reference_type, 2, .production_id = 22),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 5, .production_id = 60),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 16), SHIFT_REPEAT(325),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 16),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_custom_type, 1, .production_id = 13),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2, .production_id = 6), SHIFT_REPEAT(338),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2, .production_id = 6),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic, 1, .production_id = 23),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 54),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic, 3, .production_id = 53),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 18),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 37),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 39),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(203),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 45), SHIFT_REPEAT(319),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 45),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 46),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 26),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2), SHIFT_REPEAT(15),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2, .production_id = 6), SHIFT_REPEAT(332),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 7, .production_id = 60),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 29), SHIFT_REPEAT(85),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5, .production_id = 56),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_header, 3, .production_id = 8),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 1, .production_id = 10),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(324),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 31),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 3, .production_id = 17),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2, .production_id = 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 29), SHIFT_REPEAT(343),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 29),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 4, .production_id = 28),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_type, 2, .production_id = 25),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2, .production_id = 22),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 13),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 14),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 35),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 43),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 4, .production_id = 31),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 17),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 1, .production_id = 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4, .production_id = 63),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 3, .production_id = 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 4, .production_id = 5),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [762] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token_RBRACE = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token_RBRACE] = anon_sym_RBRACE,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_RBRACE] = true,
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
