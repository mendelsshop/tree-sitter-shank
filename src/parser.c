#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 316
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  anon_sym_enum = 1,
  anon_sym_EQ = 2,
  anon_sym_LBRACK = 3,
  anon_sym_COMMA = 4,
  anon_sym_RBRACK = 5,
  anon_sym_record = 6,
  anon_sym_export = 7,
  anon_sym_import = 8,
  anon_sym_module = 9,
  anon_sym_define = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_COLON_EQ = 13,
  anon_sym_repeat = 14,
  anon_sym_until = 15,
  anon_sym_while = 16,
  anon_sym_var = 17,
  anon_sym_if = 18,
  anon_sym_elsif = 19,
  anon_sym_else = 20,
  anon_sym_for = 21,
  anon_sym_from = 22,
  anon_sym_to = 23,
  anon_sym_constants = 24,
  anon_sym_COLON = 25,
  anon_sym_variables = 26,
  anon_sym_not = 27,
  anon_sym_and = 28,
  anon_sym_or = 29,
  anon_sym_PLUS = 30,
  anon_sym_DASH = 31,
  anon_sym_STAR = 32,
  anon_sym_SLASH = 33,
  anon_sym_mod = 34,
  anon_sym_SLASH_SLASH = 35,
  anon_sym_LT = 36,
  anon_sym_LT_EQ = 37,
  anon_sym_GT_EQ = 38,
  anon_sym_GT = 39,
  anon_sym_LT_GT = 40,
  sym_integer = 41,
  sym_float = 42,
  anon_sym_integer = 43,
  anon_sym_real = 44,
  anon_sym_string = 45,
  anon_sym_array = 46,
  anon_sym_of = 47,
  anon_sym_boolean = 48,
  aux_sym_comment_token1 = 49,
  sym_identifier = 50,
  anon_sym_DOT = 51,
  sym_true = 52,
  sym_false = 53,
  sym__newline = 54,
  sym__indent = 55,
  sym__dedent = 56,
  sym_program = 57,
  sym_enum = 58,
  sym_record_item = 59,
  sym_record = 60,
  sym_export = 61,
  sym__multiple_import = 62,
  sym_import = 63,
  sym_module = 64,
  sym_function_definition = 65,
  sym_parameters = 66,
  sym_assignment = 67,
  sym_expression = 68,
  sym_statement = 69,
  sym_repeat_statement = 70,
  sym_while_statement = 71,
  sym_call_statement = 72,
  sym_argument = 73,
  sym_if_then_statement = 74,
  sym_if = 75,
  sym_elsif = 76,
  sym_else = 77,
  sym_for = 78,
  sym_constant = 79,
  sym_block = 80,
  sym__parameters = 81,
  sym_var = 82,
  sym_parameter = 83,
  sym_variable = 84,
  sym_primary_expression = 85,
  sym_not_operator = 86,
  sym_boolean_operator = 87,
  sym_binary_operator = 88,
  sym_comparison_operator = 89,
  sym_parenthesized_expression = 90,
  sym_basic_type = 91,
  sym_array_type = 92,
  sym_delclaration_array_type = 93,
  sym_declaration_type = 94,
  sym_type = 95,
  sym_comment = 96,
  sym_variable_access = 97,
  aux_sym_program_repeat1 = 98,
  aux_sym_enum_repeat1 = 99,
  aux_sym_record_repeat1 = 100,
  aux_sym_function_definition_repeat1 = 101,
  aux_sym_function_definition_repeat2 = 102,
  aux_sym_call_statement_repeat1 = 103,
  aux_sym_if_then_statement_repeat1 = 104,
  aux_sym_constant_repeat1 = 105,
  aux_sym_block_repeat1 = 106,
  aux_sym__parameters_repeat1 = 107,
  aux_sym_comparison_operator_repeat1 = 108,
  aux_sym_variable_access_repeat1 = 109,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_enum] = "enum",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_record] = "record",
  [anon_sym_export] = "export",
  [anon_sym_import] = "import",
  [anon_sym_module] = "module",
  [anon_sym_define] = "define",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_repeat] = "repeat",
  [anon_sym_until] = "until",
  [anon_sym_while] = "while",
  [anon_sym_var] = "var",
  [anon_sym_if] = "if",
  [anon_sym_elsif] = "elsif",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_from] = "from",
  [anon_sym_to] = "to",
  [anon_sym_constants] = "constants",
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
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_LT_GT] = "<>",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_integer] = "integer",
  [anon_sym_real] = "real",
  [anon_sym_string] = "string",
  [anon_sym_array] = "array",
  [anon_sym_of] = "of",
  [anon_sym_boolean] = "boolean",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_program] = "program",
  [sym_enum] = "enum",
  [sym_record_item] = "record_item",
  [sym_record] = "record",
  [sym_export] = "export",
  [sym__multiple_import] = "_multiple_import",
  [sym_import] = "import",
  [sym_module] = "module",
  [sym_function_definition] = "function_definition",
  [sym_parameters] = "parameters",
  [sym_assignment] = "assignment",
  [sym_expression] = "expression",
  [sym_statement] = "statement",
  [sym_repeat_statement] = "repeat_statement",
  [sym_while_statement] = "while_statement",
  [sym_call_statement] = "call_statement",
  [sym_argument] = "argument",
  [sym_if_then_statement] = "if_then_statement",
  [sym_if] = "if",
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
  [sym_basic_type] = "basic_type",
  [sym_array_type] = "array_type",
  [sym_delclaration_array_type] = "delclaration_array_type",
  [sym_declaration_type] = "declaration_type",
  [sym_type] = "type",
  [sym_comment] = "comment",
  [sym_variable_access] = "variable_access",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_record_repeat1] = "record_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_function_definition_repeat2] = "function_definition_repeat2",
  [aux_sym_call_statement_repeat1] = "call_statement_repeat1",
  [aux_sym_if_then_statement_repeat1] = "if_then_statement_repeat1",
  [aux_sym_constant_repeat1] = "constant_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__parameters_repeat1] = "_parameters_repeat1",
  [aux_sym_comparison_operator_repeat1] = "comparison_operator_repeat1",
  [aux_sym_variable_access_repeat1] = "variable_access_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_until] = anon_sym_until,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elsif] = anon_sym_elsif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_constants] = anon_sym_constants,
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
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_real] = anon_sym_real,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_boolean] = anon_sym_boolean,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_program] = sym_program,
  [sym_enum] = sym_enum,
  [sym_record_item] = sym_record_item,
  [sym_record] = sym_record,
  [sym_export] = sym_export,
  [sym__multiple_import] = sym__multiple_import,
  [sym_import] = sym_import,
  [sym_module] = sym_module,
  [sym_function_definition] = sym_function_definition,
  [sym_parameters] = sym_parameters,
  [sym_assignment] = sym_assignment,
  [sym_expression] = sym_expression,
  [sym_statement] = sym_statement,
  [sym_repeat_statement] = sym_repeat_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_call_statement] = sym_call_statement,
  [sym_argument] = sym_argument,
  [sym_if_then_statement] = sym_if_then_statement,
  [sym_if] = sym_if,
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
  [sym_basic_type] = sym_basic_type,
  [sym_array_type] = sym_array_type,
  [sym_delclaration_array_type] = sym_delclaration_array_type,
  [sym_declaration_type] = sym_declaration_type,
  [sym_type] = sym_type,
  [sym_comment] = sym_comment,
  [sym_variable_access] = sym_variable_access,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_record_repeat1] = aux_sym_record_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_function_definition_repeat2] = aux_sym_function_definition_repeat2,
  [aux_sym_call_statement_repeat1] = aux_sym_call_statement_repeat1,
  [aux_sym_if_then_statement_repeat1] = aux_sym_if_then_statement_repeat1,
  [aux_sym_constant_repeat1] = aux_sym_constant_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__parameters_repeat1] = aux_sym__parameters_repeat1,
  [aux_sym_comparison_operator_repeat1] = aux_sym_comparison_operator_repeat1,
  [aux_sym_variable_access_repeat1] = aux_sym_variable_access_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_COMMA] = {
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
  [anon_sym_elsif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
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
  [anon_sym_SLASH_SLASH] = {
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
  [sym_parameters] = {
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
  [sym_statement] = {
    .visible = true,
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
  [sym_call_statement] = {
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
  [sym_if] = {
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
  [sym_basic_type] = {
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
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
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
  [aux_sym_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_repeat1] = {
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
  [aux_sym_variable_access_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_argument = 1,
  field_array_access = 2,
  field_constants = 3,
  field_field_access = 4,
  field_function = 5,
  field_left = 6,
  field_name = 7,
  field_operator = 8,
  field_operators = 9,
  field_parameters = 10,
  field_right = 11,
  field_var = 12,
  field_variables = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_array_access] = "array_access",
  [field_constants] = "constants",
  [field_field_access] = "field_access",
  [field_function] = "function",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_operators] = "operators",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_var] = "var",
  [field_variables] = "variables",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 2},
  [6] = {.index = 11, .length = 4},
  [7] = {.index = 15, .length = 1},
  [8] = {.index = 16, .length = 1},
  [9] = {.index = 17, .length = 1},
  [10] = {.index = 18, .length = 2},
  [11] = {.index = 20, .length = 4},
  [12] = {.index = 24, .length = 3},
  [13] = {.index = 27, .length = 1},
  [14] = {.index = 28, .length = 2},
  [15] = {.index = 30, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_parameters, 2},
  [2] =
    {field_function, 0},
  [3] =
    {field_name, 1},
    {field_parameters, 2},
    {field_variables, 4},
  [6] =
    {field_constants, 4},
    {field_name, 1},
    {field_parameters, 2},
  [9] =
    {field_array_access, 1, .inherited = true},
    {field_field_access, 1, .inherited = true},
  [11] =
    {field_constants, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_variables, 4},
  [15] =
    {field_argument, 1},
  [16] =
    {field_operators, 1, .inherited = true},
  [17] =
    {field_var, 0},
  [18] =
    {field_field_access, 0},
    {field_field_access, 1},
  [20] =
    {field_array_access, 0, .inherited = true},
    {field_array_access, 1, .inherited = true},
    {field_field_access, 0, .inherited = true},
    {field_field_access, 1, .inherited = true},
  [24] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [27] =
    {field_operators, 0},
  [28] =
    {field_operators, 0, .inherited = true},
    {field_operators, 1, .inherited = true},
  [30] =
    {field_array_access, 0},
    {field_array_access, 1},
    {field_array_access, 2},
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
  [8] = 6,
  [9] = 2,
  [10] = 3,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 5,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 4,
  [19] = 11,
  [20] = 3,
  [21] = 2,
  [22] = 6,
  [23] = 3,
  [24] = 15,
  [25] = 12,
  [26] = 2,
  [27] = 4,
  [28] = 6,
  [29] = 13,
  [30] = 5,
  [31] = 16,
  [32] = 17,
  [33] = 4,
  [34] = 5,
  [35] = 12,
  [36] = 11,
  [37] = 37,
  [38] = 13,
  [39] = 39,
  [40] = 40,
  [41] = 16,
  [42] = 17,
  [43] = 43,
  [44] = 11,
  [45] = 13,
  [46] = 43,
  [47] = 47,
  [48] = 48,
  [49] = 12,
  [50] = 15,
  [51] = 51,
  [52] = 16,
  [53] = 17,
  [54] = 48,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 57,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 59,
  [63] = 57,
  [64] = 64,
  [65] = 15,
  [66] = 64,
  [67] = 59,
  [68] = 68,
  [69] = 64,
  [70] = 61,
  [71] = 71,
  [72] = 72,
  [73] = 71,
  [74] = 61,
  [75] = 71,
  [76] = 76,
  [77] = 64,
  [78] = 61,
  [79] = 57,
  [80] = 59,
  [81] = 71,
  [82] = 82,
  [83] = 83,
  [84] = 55,
  [85] = 51,
  [86] = 86,
  [87] = 87,
  [88] = 55,
  [89] = 51,
  [90] = 55,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 92,
  [95] = 93,
  [96] = 91,
  [97] = 97,
  [98] = 98,
  [99] = 51,
  [100] = 92,
  [101] = 91,
  [102] = 102,
  [103] = 93,
  [104] = 104,
  [105] = 92,
  [106] = 106,
  [107] = 91,
  [108] = 93,
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
  [123] = 109,
  [124] = 110,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 127,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 111,
  [135] = 135,
  [136] = 112,
  [137] = 131,
  [138] = 138,
  [139] = 139,
  [140] = 140,
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
  [151] = 113,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 110,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 141,
  [164] = 164,
  [165] = 109,
  [166] = 142,
  [167] = 167,
  [168] = 168,
  [169] = 111,
  [170] = 170,
  [171] = 112,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 164,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 111,
  [185] = 112,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 182,
  [192] = 192,
  [193] = 193,
  [194] = 181,
  [195] = 182,
  [196] = 181,
  [197] = 197,
  [198] = 188,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 182,
  [203] = 203,
  [204] = 204,
  [205] = 138,
  [206] = 206,
  [207] = 207,
  [208] = 121,
  [209] = 181,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 193,
  [216] = 167,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 113,
  [221] = 212,
  [222] = 109,
  [223] = 179,
  [224] = 224,
  [225] = 110,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 200,
  [243] = 199,
  [244] = 244,
  [245] = 245,
  [246] = 180,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 244,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 250,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 251,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 269,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 254,
  [286] = 283,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 279,
  [292] = 292,
  [293] = 288,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 288,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 259,
  [302] = 279,
  [303] = 300,
  [304] = 277,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 288,
  [313] = 272,
  [314] = 261,
  [315] = 305,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
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

static inline bool sym_identifier_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(114);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == ':') ADVANCE(146);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '>') ADVANCE(164);
      if (lookahead == '[') ADVANCE(117);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(45);
      if (lookahead == '{') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '>') ADVANCE(164);
      if (lookahead == '[') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == 't') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(208);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '[') ADVANCE(117);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == 'v') ADVANCE(179);
      if (lookahead == '{') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '>') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == 't') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(208);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 't') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 't') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == 'v') ADVANCE(179);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(137);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(188);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'x') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'x') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 109:
      if (lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 110:
      if (lookahead == '}') ADVANCE(176);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 111:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(111)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 113:
      if (eof) ADVANCE(114);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 'v') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(113)
      END_STATE();
    case 114:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_from);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_constants);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(160);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_mod);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(162);
      if (lookahead == '>') ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(190);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(208);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(206);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(208);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(201);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(208);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(151);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(159);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(211);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(213);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(132);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(178);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(136);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(189);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(191);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(204);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(185);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(142);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(180);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(205);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(192);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(181);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(202);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(186);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(153);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(207);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(134);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(140);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(195);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(183);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(149);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(129);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(182);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 113},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 41, .external_lex_state = 4},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 41, .external_lex_state = 4},
  [47] = {.lex_state = 41, .external_lex_state = 4},
  [48] = {.lex_state = 41, .external_lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 41, .external_lex_state = 4},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 113},
  [83] = {.lex_state = 113},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 113},
  [87] = {.lex_state = 113},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0, .external_lex_state = 3},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 0, .external_lex_state = 4},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 0, .external_lex_state = 4},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 113},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 113, .external_lex_state = 3},
  [117] = {.lex_state = 113, .external_lex_state = 3},
  [118] = {.lex_state = 113},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 113},
  [121] = {.lex_state = 113},
  [122] = {.lex_state = 113},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 113},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 113},
  [129] = {.lex_state = 113},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 113},
  [133] = {.lex_state = 113},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 113},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 113},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 113},
  [142] = {.lex_state = 113},
  [143] = {.lex_state = 113},
  [144] = {.lex_state = 113},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 113},
  [147] = {.lex_state = 41, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 41, .external_lex_state = 4},
  [152] = {.lex_state = 113, .external_lex_state = 3},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 3},
  [155] = {.lex_state = 0, .external_lex_state = 3},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 3},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 113},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0, .external_lex_state = 3},
  [173] = {.lex_state = 0, .external_lex_state = 3},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0, .external_lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 113},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 113},
  [184] = {.lex_state = 0, .external_lex_state = 3},
  [185] = {.lex_state = 0, .external_lex_state = 3},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 113},
  [193] = {.lex_state = 113},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 113},
  [204] = {.lex_state = 113},
  [205] = {.lex_state = 113, .external_lex_state = 3},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 113, .external_lex_state = 3},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 113},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 113},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 113, .external_lex_state = 3},
  [221] = {.lex_state = 113},
  [222] = {.lex_state = 0, .external_lex_state = 3},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 3},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 111},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 3},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0, .external_lex_state = 3},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 42},
  [243] = {.lex_state = 42},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 111},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 111},
  [258] = {.lex_state = 111},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 111},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 111},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 111},
  [268] = {.lex_state = 111},
  [269] = {.lex_state = 111},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 111},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 111},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 111},
  [279] = {.lex_state = 0, .external_lex_state = 2},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 111},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0, .external_lex_state = 3},
  [288] = {.lex_state = 111},
  [289] = {.lex_state = 0, .external_lex_state = 2},
  [290] = {.lex_state = 111},
  [291] = {.lex_state = 0, .external_lex_state = 2},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 111},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 111},
  [298] = {.lex_state = 111},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0, .external_lex_state = 2},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 111},
  [306] = {.lex_state = 111},
  [307] = {.lex_state = 111},
  [308] = {.lex_state = 111},
  [309] = {.lex_state = 111},
  [310] = {.lex_state = 111},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 111},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 111},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_until] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elsif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_constants] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_real] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(296),
    [sym_enum] = STATE(87),
    [sym_record] = STATE(87),
    [sym_export] = STATE(87),
    [sym_import] = STATE(87),
    [sym_module] = STATE(86),
    [sym_function_definition] = STATE(87),
    [sym_variable] = STATE(87),
    [aux_sym_program_repeat1] = STATE(87),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_record] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(13),
    [anon_sym_define] = ACTIONS(15),
    [anon_sym_variables] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(19), 11,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
    ACTIONS(23), 11,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [36] = 5,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(34), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(27), 11,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
    ACTIONS(32), 11,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [72] = 2,
    ACTIONS(39), 11,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
    ACTIONS(37), 13,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
      anon_sym_DOT,
  [101] = 2,
    ACTIONS(43), 11,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
    ACTIONS(41), 13,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_COLON_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
      anon_sym_DOT,
  [130] = 5,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(45), 10,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
    ACTIONS(47), 11,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [165] = 17,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      anon_sym_COLON_EQ,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_var,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(2), 1,
      aux_sym_variable_access_repeat1,
    STATE(19), 1,
      sym_primary_expression,
    STATE(39), 1,
      sym_variable_access,
    STATE(156), 1,
      sym_expression,
    STATE(160), 1,
      sym_argument,
    ACTIONS(59), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(29), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(124), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [223] = 5,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 16,
      sym__newline,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [256] = 5,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(23), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 16,
      sym__newline,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [289] = 5,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(32), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 16,
      sym__newline,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [322] = 8,
    STATE(55), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(75), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(81), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(83), 2,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(77), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [361] = 2,
    ACTIONS(87), 10,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
    ACTIONS(89), 11,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [387] = 2,
    ACTIONS(91), 10,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
    ACTIONS(93), 11,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [413] = 2,
    ACTIONS(43), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 18,
      sym__newline,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
      anon_sym_DOT,
  [439] = 5,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(81), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(83), 2,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(95), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
    ACTIONS(97), 9,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [471] = 4,
    ACTIONS(81), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(83), 2,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(99), 8,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
    ACTIONS(101), 9,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [501] = 2,
    ACTIONS(99), 10,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
    ACTIONS(101), 11,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [527] = 2,
    ACTIONS(39), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 18,
      sym__newline,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
      anon_sym_DOT,
  [553] = 7,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    STATE(84), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(105), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(103), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(75), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [588] = 5,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(32), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 14,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [619] = 5,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(23), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 14,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [650] = 5,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 14,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [681] = 5,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(32), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 13,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [711] = 5,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(107), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(95), 11,
      sym__newline,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [741] = 2,
    ACTIONS(89), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 16,
      sym__newline,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [765] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(23), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 13,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [795] = 2,
    ACTIONS(39), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 16,
      sym__indent,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_DOT,
  [819] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 13,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [849] = 2,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 16,
      sym__newline,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [873] = 2,
    ACTIONS(43), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 16,
      sym__indent,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_DOT,
  [897] = 4,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 13,
      sym__newline,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [925] = 2,
    ACTIONS(101), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 16,
      sym__newline,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [949] = 2,
    ACTIONS(39), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 15,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_DOT,
  [972] = 2,
    ACTIONS(43), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 15,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_DOT,
  [995] = 2,
    ACTIONS(89), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 14,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1017] = 7,
    ACTIONS(139), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(75), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1049] = 11,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_and,
    ACTIONS(145), 1,
      anon_sym_or,
    STATE(19), 1,
      sym_primary_expression,
    STATE(148), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(29), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(124), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1089] = 2,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 14,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1111] = 3,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
    ACTIONS(91), 11,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1135] = 12,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_var,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(19), 1,
      sym_primary_expression,
    STATE(39), 1,
      sym_variable_access,
    STATE(156), 1,
      sym_expression,
    STATE(190), 1,
      sym_argument,
    STATE(29), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(124), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1177] = 4,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(150), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 11,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1203] = 2,
    ACTIONS(101), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 14,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_constants,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1225] = 11,
    ACTIONS(154), 1,
      anon_sym_repeat,
    ACTIONS(156), 1,
      anon_sym_while,
    ACTIONS(158), 1,
      anon_sym_if,
    ACTIONS(160), 1,
      anon_sym_for,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(164), 1,
      sym__dedent,
    STATE(47), 1,
      aux_sym_block_repeat1,
    STATE(119), 1,
      sym_if,
    STATE(213), 1,
      sym_statement,
    STATE(252), 1,
      sym_variable_access,
    STATE(248), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1264] = 7,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    STATE(90), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(168), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(150), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(166), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1295] = 2,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 13,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1316] = 11,
    ACTIONS(154), 1,
      anon_sym_repeat,
    ACTIONS(156), 1,
      anon_sym_while,
    ACTIONS(158), 1,
      anon_sym_if,
    ACTIONS(160), 1,
      anon_sym_for,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(172), 1,
      sym__dedent,
    STATE(47), 1,
      aux_sym_block_repeat1,
    STATE(119), 1,
      sym_if,
    STATE(213), 1,
      sym_statement,
    STATE(252), 1,
      sym_variable_access,
    STATE(248), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1355] = 11,
    ACTIONS(174), 1,
      anon_sym_repeat,
    ACTIONS(177), 1,
      anon_sym_while,
    ACTIONS(180), 1,
      anon_sym_if,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(189), 1,
      sym__dedent,
    STATE(47), 1,
      aux_sym_block_repeat1,
    STATE(119), 1,
      sym_if,
    STATE(213), 1,
      sym_statement,
    STATE(252), 1,
      sym_variable_access,
    STATE(248), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1394] = 11,
    ACTIONS(154), 1,
      anon_sym_repeat,
    ACTIONS(156), 1,
      anon_sym_while,
    ACTIONS(158), 1,
      anon_sym_if,
    ACTIONS(160), 1,
      anon_sym_for,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(191), 1,
      sym__dedent,
    STATE(46), 1,
      aux_sym_block_repeat1,
    STATE(119), 1,
      sym_if,
    STATE(213), 1,
      sym_statement,
    STATE(252), 1,
      sym_variable_access,
    STATE(248), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1433] = 2,
    ACTIONS(89), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 13,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1454] = 5,
    ACTIONS(139), 1,
      anon_sym_SLASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(95), 8,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1481] = 5,
    STATE(51), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(196), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(200), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(198), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [1508] = 4,
    ACTIONS(139), 1,
      anon_sym_SLASH,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 10,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1533] = 2,
    ACTIONS(101), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 13,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1554] = 11,
    ACTIONS(154), 1,
      anon_sym_repeat,
    ACTIONS(156), 1,
      anon_sym_while,
    ACTIONS(158), 1,
      anon_sym_if,
    ACTIONS(160), 1,
      anon_sym_for,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(203), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_block_repeat1,
    STATE(119), 1,
      sym_if,
    STATE(213), 1,
      sym_statement,
    STATE(252), 1,
      sym_variable_access,
    STATE(248), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1593] = 5,
    STATE(51), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(73), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(207), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [1620] = 9,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(19), 1,
      sym_primary_expression,
    STATE(175), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(29), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(124), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1654] = 9,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_not,
    ACTIONS(215), 1,
      sym_float,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(44), 1,
      sym_primary_expression,
    STATE(184), 1,
      sym_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(38), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(225), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1688] = 9,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_not,
    ACTIONS(225), 1,
      sym_float,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(11), 1,
      sym_primary_expression,
    STATE(111), 1,
      sym_expression,
    ACTIONS(223), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(13), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(110), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1722] = 9,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_not,
    ACTIONS(225), 1,
      sym_float,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(11), 1,
      sym_primary_expression,
    STATE(109), 1,
      sym_expression,
    ACTIONS(223), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(13), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(110), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1756] = 9,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_not,
    ACTIONS(215), 1,
      sym_float,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(44), 1,
      sym_primary_expression,
    STATE(159), 1,
      sym_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(38), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(225), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1790] = 9,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_not,
    ACTIONS(235), 1,
      sym_float,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(209), 1,
      sym_expression,
    ACTIONS(233), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(157), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1824] = 9,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(19), 1,
      sym_primary_expression,
    STATE(123), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(29), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(124), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1858] = 9,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_not,
    ACTIONS(235), 1,
      sym_float,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(169), 1,
      sym_expression,
    ACTIONS(233), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(157), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1892] = 9,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_not,
    ACTIONS(235), 1,
      sym_float,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(195), 1,
      sym_expression,
    ACTIONS(233), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(157), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1926] = 5,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(168), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(150), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(95), 7,
      sym__indent,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1952] = 9,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_not,
    ACTIONS(235), 1,
      sym_float,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(191), 1,
      sym_expression,
    ACTIONS(233), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(157), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1986] = 9,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_not,
    ACTIONS(235), 1,
      sym_float,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(165), 1,
      sym_expression,
    ACTIONS(233), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(157), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2020] = 9,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_not,
    ACTIONS(225), 1,
      sym_float,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(11), 1,
      sym_primary_expression,
    STATE(37), 1,
      sym_expression,
    ACTIONS(223), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(13), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(110), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2054] = 9,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_not,
    ACTIONS(235), 1,
      sym_float,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(182), 1,
      sym_expression,
    ACTIONS(233), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(157), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2088] = 9,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_not,
    ACTIONS(235), 1,
      sym_float,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(181), 1,
      sym_expression,
    ACTIONS(233), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(157), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2122] = 9,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_not,
    ACTIONS(215), 1,
      sym_float,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(44), 1,
      sym_primary_expression,
    STATE(185), 1,
      sym_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(38), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(225), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2156] = 9,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_not,
    ACTIONS(215), 1,
      sym_float,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(44), 1,
      sym_primary_expression,
    STATE(161), 1,
      sym_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(38), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(225), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2190] = 9,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_not,
    ACTIONS(225), 1,
      sym_float,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(11), 1,
      sym_primary_expression,
    STATE(112), 1,
      sym_expression,
    ACTIONS(223), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(13), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(110), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2224] = 9,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_not,
    ACTIONS(235), 1,
      sym_float,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(194), 1,
      sym_expression,
    ACTIONS(233), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(157), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2258] = 9,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_not,
    ACTIONS(235), 1,
      sym_float,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(171), 1,
      sym_expression,
    ACTIONS(233), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(157), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2292] = 9,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_not,
    ACTIONS(215), 1,
      sym_float,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(44), 1,
      sym_primary_expression,
    STATE(172), 1,
      sym_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(38), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(225), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2326] = 9,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_not,
    ACTIONS(235), 1,
      sym_float,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(202), 1,
      sym_expression,
    ACTIONS(233), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(157), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2360] = 9,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_not,
    ACTIONS(235), 1,
      sym_float,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(196), 1,
      sym_expression,
    ACTIONS(233), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(157), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2394] = 9,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(19), 1,
      sym_primary_expression,
    STATE(134), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(29), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(124), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2428] = 9,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_not,
    ACTIONS(215), 1,
      sym_float,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(44), 1,
      sym_primary_expression,
    STATE(222), 1,
      sym_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(38), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(225), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2462] = 9,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(19), 1,
      sym_primary_expression,
    STATE(136), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(29), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(124), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2496] = 8,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      anon_sym_enum,
    ACTIONS(244), 1,
      anon_sym_record,
    ACTIONS(247), 1,
      anon_sym_export,
    ACTIONS(250), 1,
      anon_sym_import,
    ACTIONS(253), 1,
      anon_sym_define,
    ACTIONS(256), 1,
      anon_sym_variables,
    STATE(82), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2527] = 8,
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
      anon_sym_variables,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    STATE(82), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2558] = 4,
    STATE(85), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(205), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [2581] = 4,
    STATE(85), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(261), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(196), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [2604] = 8,
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
      anon_sym_variables,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    STATE(83), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2635] = 8,
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
      anon_sym_variables,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    STATE(82), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2666] = 4,
    STATE(89), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(205), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [2686] = 4,
    STATE(89), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(196), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(269), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2706] = 4,
    STATE(99), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(166), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2725] = 6,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      sym_float,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(50), 1,
      sym_primary_expression,
    ACTIONS(233), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2748] = 6,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      sym_float,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(53), 1,
      sym_primary_expression,
    ACTIONS(233), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2771] = 6,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      sym_float,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(52), 1,
      sym_primary_expression,
    ACTIONS(233), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2794] = 6,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(32), 1,
      sym_primary_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(29), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2817] = 6,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      sym_float,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(41), 1,
      sym_primary_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(38), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2840] = 6,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      sym_float,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(65), 1,
      sym_primary_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(38), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2863] = 6,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_constant_repeat1,
    ACTIONS(168), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(277), 2,
      sym__indent,
      anon_sym_constants,
    ACTIONS(150), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
  [2886] = 6,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      sym_float,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(114), 1,
      sym_primary_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(38), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2909] = 4,
    STATE(99), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(196), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(279), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2928] = 6,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      sym_float,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(42), 1,
      sym_primary_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(38), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2951] = 6,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(24), 1,
      sym_primary_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(29), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2974] = 6,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      sym_float,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(97), 1,
      sym_primary_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(38), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2997] = 6,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(31), 1,
      sym_primary_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(29), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3020] = 7,
    ACTIONS(287), 1,
      anon_sym_real,
    ACTIONS(289), 1,
      anon_sym_array,
    ACTIONS(291), 1,
      sym__dedent,
    STATE(257), 1,
      sym_type,
    ACTIONS(285), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(106), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(258), 2,
      sym_basic_type,
      sym_array_type,
  [3045] = 6,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      sym_float,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primary_expression,
    ACTIONS(223), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(13), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3068] = 7,
    ACTIONS(296), 1,
      anon_sym_real,
    ACTIONS(299), 1,
      anon_sym_array,
    ACTIONS(302), 1,
      sym__dedent,
    STATE(257), 1,
      sym_type,
    ACTIONS(293), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(106), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(258), 2,
      sym_basic_type,
      sym_array_type,
  [3093] = 6,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      sym_float,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(15), 1,
      sym_primary_expression,
    ACTIONS(223), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(13), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3116] = 6,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      sym_float,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(16), 1,
      sym_primary_expression,
    ACTIONS(223), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(13), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3139] = 2,
    ACTIONS(304), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(306), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3153] = 2,
    ACTIONS(75), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(77), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3167] = 2,
    ACTIONS(308), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(310), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3181] = 3,
    ACTIONS(143), 1,
      anon_sym_and,
    ACTIONS(308), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(310), 6,
      anon_sym_not,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3197] = 1,
    ACTIONS(312), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_variables,
  [3209] = 4,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(168), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(150), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(314), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [3227] = 6,
    ACTIONS(287), 1,
      anon_sym_real,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(257), 1,
      sym_type,
    ACTIONS(285), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(104), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(258), 2,
      sym_basic_type,
      sym_array_type,
  [3249] = 6,
    ACTIONS(316), 1,
      anon_sym_constants,
    ACTIONS(318), 1,
      anon_sym_variables,
    ACTIONS(320), 1,
      sym__indent,
    STATE(129), 1,
      sym_block,
    STATE(152), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(154), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3270] = 6,
    ACTIONS(316), 1,
      anon_sym_constants,
    ACTIONS(318), 1,
      anon_sym_variables,
    ACTIONS(320), 1,
      sym__indent,
    STATE(126), 1,
      sym_block,
    STATE(116), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(155), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3291] = 1,
    ACTIONS(322), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3301] = 5,
    ACTIONS(324), 1,
      anon_sym_elsif,
    ACTIONS(326), 1,
      anon_sym_else,
    STATE(245), 1,
      sym_else,
    ACTIONS(328), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(139), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [3319] = 1,
    ACTIONS(330), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3329] = 1,
    ACTIONS(332), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3339] = 1,
    ACTIONS(334), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3349] = 1,
    ACTIONS(304), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3359] = 1,
    ACTIONS(75), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3369] = 5,
    ACTIONS(338), 1,
      anon_sym_real,
    ACTIONS(340), 1,
      anon_sym_array,
    STATE(224), 1,
      sym_type,
    ACTIONS(336), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(244), 2,
      sym_basic_type,
      sym_array_type,
  [3387] = 1,
    ACTIONS(342), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3397] = 5,
    ACTIONS(338), 1,
      anon_sym_real,
    ACTIONS(344), 1,
      anon_sym_array,
    STATE(188), 1,
      sym_declaration_type,
    ACTIONS(336), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(249), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [3415] = 1,
    ACTIONS(346), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3425] = 1,
    ACTIONS(348), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3435] = 5,
    ACTIONS(338), 1,
      anon_sym_real,
    ACTIONS(344), 1,
      anon_sym_array,
    STATE(198), 1,
      sym_declaration_type,
    ACTIONS(336), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(249), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [3453] = 5,
    ACTIONS(338), 1,
      anon_sym_real,
    ACTIONS(344), 1,
      anon_sym_array,
    STATE(179), 1,
      sym_declaration_type,
    ACTIONS(336), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(249), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [3471] = 1,
    ACTIONS(350), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3481] = 1,
    ACTIONS(352), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3491] = 1,
    ACTIONS(308), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3501] = 1,
    ACTIONS(354), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3511] = 2,
    ACTIONS(356), 1,
      anon_sym_and,
    ACTIONS(308), 6,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_or,
      aux_sym_comment_token1,
  [3523] = 5,
    ACTIONS(338), 1,
      anon_sym_real,
    ACTIONS(344), 1,
      anon_sym_array,
    STATE(223), 1,
      sym_declaration_type,
    ACTIONS(336), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(249), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [3541] = 1,
    ACTIONS(358), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3551] = 5,
    ACTIONS(324), 1,
      anon_sym_elsif,
    ACTIONS(326), 1,
      anon_sym_else,
    STATE(233), 1,
      sym_else,
    ACTIONS(360), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(149), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [3569] = 5,
    ACTIONS(338), 1,
      anon_sym_real,
    ACTIONS(340), 1,
      anon_sym_array,
    STATE(201), 1,
      sym_type,
    ACTIONS(336), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(244), 2,
      sym_basic_type,
      sym_array_type,
  [3587] = 1,
    ACTIONS(362), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3597] = 1,
    ACTIONS(364), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3607] = 1,
    ACTIONS(366), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3617] = 1,
    ACTIONS(368), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3627] = 5,
    ACTIONS(338), 1,
      anon_sym_real,
    ACTIONS(340), 1,
      anon_sym_array,
    STATE(219), 1,
      sym_type,
    ACTIONS(336), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(244), 2,
      sym_basic_type,
      sym_array_type,
  [3645] = 1,
    ACTIONS(370), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3655] = 2,
    ACTIONS(189), 1,
      sym__dedent,
    ACTIONS(372), 5,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [3666] = 3,
    ACTIONS(356), 1,
      anon_sym_and,
    ACTIONS(376), 1,
      anon_sym_or,
    ACTIONS(374), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [3679] = 3,
    ACTIONS(378), 1,
      anon_sym_elsif,
    STATE(149), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
    ACTIONS(381), 3,
      sym__newline,
      anon_sym_else,
      aux_sym_comment_token1,
  [3692] = 6,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 1,
      anon_sym_var,
    ACTIONS(387), 1,
      sym_identifier,
    STATE(226), 1,
      sym_parameter,
    STATE(294), 1,
      sym__parameters,
    STATE(298), 1,
      sym_var,
  [3711] = 2,
    ACTIONS(312), 1,
      sym__dedent,
    ACTIONS(389), 5,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [3722] = 3,
    ACTIONS(393), 1,
      anon_sym_variables,
    ACTIONS(391), 2,
      sym__indent,
      anon_sym_constants,
    STATE(152), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [3734] = 1,
    ACTIONS(396), 5,
      sym__dedent,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
  [3742] = 4,
    ACTIONS(316), 1,
      anon_sym_constants,
    ACTIONS(320), 1,
      sym__indent,
    STATE(143), 1,
      sym_block,
    STATE(162), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3756] = 4,
    ACTIONS(316), 1,
      anon_sym_constants,
    ACTIONS(320), 1,
      sym__indent,
    STATE(120), 1,
      sym_block,
    STATE(162), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3770] = 3,
    ACTIONS(356), 1,
      anon_sym_and,
    ACTIONS(376), 1,
      anon_sym_or,
    ACTIONS(398), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [3782] = 1,
    ACTIONS(75), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [3789] = 3,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(403), 2,
      sym__newline,
      aux_sym_comment_token1,
  [3800] = 4,
    ACTIONS(405), 1,
      anon_sym_and,
    ACTIONS(407), 1,
      anon_sym_or,
    ACTIONS(409), 1,
      sym__indent,
    STATE(235), 1,
      sym_block,
  [3813] = 3,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(413), 2,
      sym__newline,
      aux_sym_comment_token1,
  [3824] = 4,
    ACTIONS(405), 1,
      anon_sym_and,
    ACTIONS(407), 1,
      anon_sym_or,
    ACTIONS(409), 1,
      sym__indent,
    STATE(229), 1,
      sym_block,
  [3837] = 3,
    ACTIONS(415), 1,
      anon_sym_constants,
    ACTIONS(418), 1,
      sym__indent,
    STATE(162), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3848] = 1,
    ACTIONS(362), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [3855] = 1,
    ACTIONS(420), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [3862] = 1,
    ACTIONS(304), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [3869] = 1,
    ACTIONS(364), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [3876] = 3,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_enum_repeat1,
    ACTIONS(425), 2,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [3887] = 4,
    ACTIONS(385), 1,
      anon_sym_var,
    ACTIONS(387), 1,
      sym_identifier,
    STATE(247), 1,
      sym_parameter,
    STATE(298), 1,
      sym_var,
  [3900] = 1,
    ACTIONS(308), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [3907] = 3,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(427), 2,
      sym__newline,
      aux_sym_comment_token1,
  [3918] = 2,
    ACTIONS(429), 1,
      anon_sym_and,
    ACTIONS(308), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_or,
  [3927] = 4,
    ACTIONS(405), 1,
      anon_sym_and,
    ACTIONS(407), 1,
      anon_sym_or,
    ACTIONS(409), 1,
      sym__indent,
    STATE(176), 1,
      sym_block,
  [3940] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_constant_repeat1,
    ACTIONS(434), 2,
      sym__indent,
      anon_sym_constants,
  [3951] = 1,
    ACTIONS(436), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [3958] = 3,
    ACTIONS(356), 1,
      anon_sym_and,
    ACTIONS(376), 1,
      anon_sym_or,
    ACTIONS(438), 2,
      sym__newline,
      aux_sym_comment_token1,
  [3969] = 1,
    ACTIONS(440), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [3976] = 1,
    ACTIONS(442), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [3983] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_constant_repeat1,
    ACTIONS(444), 2,
      sym__indent,
      anon_sym_constants,
  [3994] = 3,
    ACTIONS(446), 1,
      aux_sym_comment_token1,
    ACTIONS(448), 1,
      sym__newline,
    STATE(205), 1,
      sym_comment,
  [4004] = 1,
    ACTIONS(425), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4010] = 3,
    ACTIONS(429), 1,
      anon_sym_and,
    ACTIONS(450), 1,
      anon_sym_RBRACK,
    ACTIONS(452), 1,
      anon_sym_or,
  [4020] = 3,
    ACTIONS(429), 1,
      anon_sym_and,
    ACTIONS(452), 1,
      anon_sym_or,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
  [4030] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_COLON,
    STATE(167), 1,
      aux_sym_enum_repeat1,
  [4040] = 1,
    ACTIONS(308), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4046] = 2,
    ACTIONS(405), 1,
      anon_sym_and,
    ACTIONS(308), 2,
      sym__indent,
      anon_sym_or,
  [4054] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      aux_sym_enum_repeat1,
  [4064] = 3,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      sym__newline,
    STATE(197), 1,
      aux_sym_enum_repeat1,
  [4074] = 3,
    ACTIONS(446), 1,
      aux_sym_comment_token1,
    ACTIONS(466), 1,
      sym__newline,
    STATE(208), 1,
      sym_comment,
  [4084] = 3,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(470), 1,
      sym__newline,
    STATE(266), 1,
      sym__multiple_import,
  [4094] = 1,
    ACTIONS(403), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4100] = 3,
    ACTIONS(429), 1,
      anon_sym_and,
    ACTIONS(452), 1,
      anon_sym_or,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
  [4110] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_COLON,
    STATE(183), 1,
      aux_sym_enum_repeat1,
  [4120] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      anon_sym_COLON,
    STATE(212), 1,
      aux_sym_enum_repeat1,
  [4130] = 3,
    ACTIONS(429), 1,
      anon_sym_and,
    ACTIONS(452), 1,
      anon_sym_or,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
  [4140] = 3,
    ACTIONS(429), 1,
      anon_sym_and,
    ACTIONS(452), 1,
      anon_sym_or,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
  [4150] = 3,
    ACTIONS(429), 1,
      anon_sym_and,
    ACTIONS(452), 1,
      anon_sym_or,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
  [4160] = 3,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    ACTIONS(484), 1,
      sym__newline,
    STATE(216), 1,
      aux_sym_enum_repeat1,
  [4170] = 3,
    ACTIONS(486), 1,
      aux_sym_comment_token1,
    ACTIONS(488), 1,
      sym__newline,
    STATE(121), 1,
      sym_comment,
  [4180] = 2,
    ACTIONS(490), 1,
      anon_sym_from,
    ACTIONS(492), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4188] = 2,
    ACTIONS(494), 1,
      anon_sym_from,
    ACTIONS(492), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4196] = 3,
    ACTIONS(486), 1,
      aux_sym_comment_token1,
    ACTIONS(496), 1,
      sym__newline,
    STATE(239), 1,
      sym_comment,
  [4206] = 3,
    ACTIONS(429), 1,
      anon_sym_and,
    ACTIONS(452), 1,
      anon_sym_or,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
  [4216] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_COLON,
    STATE(204), 1,
      aux_sym_enum_repeat1,
  [4226] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_COLON,
    STATE(167), 1,
      aux_sym_enum_repeat1,
  [4236] = 1,
    ACTIONS(358), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4242] = 3,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      aux_sym__parameters_repeat1,
  [4252] = 1,
    ACTIONS(507), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4258] = 1,
    ACTIONS(332), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4264] = 3,
    ACTIONS(429), 1,
      anon_sym_and,
    ACTIONS(452), 1,
      anon_sym_or,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
  [4274] = 3,
    ACTIONS(446), 1,
      aux_sym_comment_token1,
    ACTIONS(511), 1,
      sym__newline,
    STATE(117), 1,
      sym_comment,
  [4284] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      aux_sym_enum_repeat1,
  [4294] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_COLON,
    STATE(167), 1,
      aux_sym_enum_repeat1,
  [4304] = 3,
    ACTIONS(517), 1,
      aux_sym_comment_token1,
    ACTIONS(519), 1,
      sym__newline,
    STATE(147), 1,
      sym_comment,
  [4314] = 3,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      aux_sym__parameters_repeat1,
  [4324] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_COLON,
    STATE(221), 1,
      aux_sym_enum_repeat1,
  [4334] = 3,
    ACTIONS(425), 1,
      sym__newline,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_enum_repeat1,
  [4344] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(530), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      aux_sym_enum_repeat1,
  [4354] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
    STATE(211), 1,
      aux_sym_enum_repeat1,
  [4364] = 3,
    ACTIONS(486), 1,
      aux_sym_comment_token1,
    ACTIONS(534), 1,
      sym__newline,
    STATE(228), 1,
      sym_comment,
  [4374] = 1,
    ACTIONS(312), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4380] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_COLON,
    STATE(167), 1,
      aux_sym_enum_repeat1,
  [4390] = 1,
    ACTIONS(304), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4396] = 3,
    ACTIONS(486), 1,
      aux_sym_comment_token1,
    ACTIONS(538), 1,
      sym__newline,
    STATE(138), 1,
      sym_comment,
  [4406] = 3,
    ACTIONS(486), 1,
      aux_sym_comment_token1,
    ACTIONS(540), 1,
      sym__newline,
    STATE(234), 1,
      sym_comment,
  [4416] = 1,
    ACTIONS(75), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4422] = 3,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      aux_sym__parameters_repeat1,
  [4432] = 1,
    ACTIONS(544), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4437] = 1,
    ACTIONS(546), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4442] = 1,
    ACTIONS(548), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4447] = 1,
    ACTIONS(550), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4452] = 2,
    ACTIONS(552), 1,
      sym_identifier,
    STATE(207), 1,
      sym_variable_access,
  [4459] = 1,
    ACTIONS(554), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4464] = 1,
    ACTIONS(556), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4469] = 1,
    ACTIONS(558), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4474] = 1,
    ACTIONS(560), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4479] = 2,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_parameters,
  [4486] = 1,
    ACTIONS(564), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4491] = 2,
    ACTIONS(409), 1,
      sym__indent,
    STATE(241), 1,
      sym_block,
  [4498] = 1,
    ACTIONS(566), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4503] = 2,
    ACTIONS(409), 1,
      sym__indent,
    STATE(232), 1,
      sym_block,
  [4510] = 1,
    ACTIONS(568), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4515] = 2,
    ACTIONS(570), 1,
      anon_sym_from,
    ACTIONS(572), 1,
      sym_identifier,
  [4522] = 2,
    ACTIONS(572), 1,
      sym_identifier,
    ACTIONS(574), 1,
      anon_sym_from,
  [4529] = 1,
    ACTIONS(576), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4534] = 1,
    ACTIONS(360), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4539] = 1,
    ACTIONS(425), 2,
      sym__newline,
      anon_sym_COMMA,
  [4544] = 1,
    ACTIONS(505), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4549] = 1,
    ACTIONS(578), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4554] = 1,
    ACTIONS(580), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4559] = 1,
    ACTIONS(582), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4564] = 1,
    ACTIONS(584), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4569] = 1,
    ACTIONS(586), 1,
      anon_sym_COLON_EQ,
  [4573] = 1,
    ACTIONS(588), 1,
      sym_identifier,
  [4577] = 1,
    ACTIONS(590), 1,
      sym_integer,
  [4581] = 1,
    ACTIONS(592), 1,
      anon_sym_to,
  [4585] = 1,
    ACTIONS(594), 1,
      anon_sym_EQ,
  [4589] = 1,
    ACTIONS(596), 1,
      sym_identifier,
  [4593] = 1,
    ACTIONS(576), 1,
      sym_identifier,
  [4597] = 1,
    ACTIONS(598), 1,
      anon_sym_of,
  [4601] = 1,
    ACTIONS(600), 1,
      sym_identifier,
  [4605] = 1,
    ACTIONS(602), 1,
      sym_float,
  [4609] = 1,
    ACTIONS(604), 1,
      sym_integer,
  [4613] = 1,
    ACTIONS(606), 1,
      sym_identifier,
  [4617] = 1,
    ACTIONS(608), 1,
      anon_sym_until,
  [4621] = 1,
    ACTIONS(610), 1,
      sym__newline,
  [4625] = 1,
    ACTIONS(612), 1,
      sym__newline,
  [4629] = 1,
    ACTIONS(614), 1,
      sym_identifier,
  [4633] = 1,
    ACTIONS(582), 1,
      sym_identifier,
  [4637] = 1,
    ACTIONS(616), 1,
      sym_identifier,
  [4641] = 1,
    ACTIONS(618), 1,
      sym__newline,
  [4645] = 1,
    ACTIONS(620), 1,
      anon_sym_from,
  [4649] = 1,
    ACTIONS(622), 1,
      sym_integer,
  [4653] = 1,
    ACTIONS(584), 1,
      sym_identifier,
  [4657] = 1,
    ACTIONS(624), 1,
      anon_sym_LBRACK,
  [4661] = 1,
    ACTIONS(626), 1,
      sym_integer,
  [4665] = 1,
    ACTIONS(628), 1,
      sym_identifier,
  [4669] = 1,
    ACTIONS(630), 1,
      anon_sym_to,
  [4673] = 1,
    ACTIONS(632), 1,
      sym_identifier,
  [4677] = 1,
    ACTIONS(634), 1,
      sym__newline,
  [4681] = 1,
    ACTIONS(636), 1,
      anon_sym_EQ,
  [4685] = 1,
    ACTIONS(638), 1,
      sym_integer,
  [4689] = 1,
    ACTIONS(640), 1,
      sym_identifier,
  [4693] = 1,
    ACTIONS(590), 1,
      sym_float,
  [4697] = 1,
    ACTIONS(642), 1,
      anon_sym_to,
  [4701] = 1,
    ACTIONS(644), 1,
      sym_integer,
  [4705] = 1,
    ACTIONS(644), 1,
      sym_float,
  [4709] = 1,
    ACTIONS(646), 1,
      sym__indent,
  [4713] = 1,
    ACTIONS(648), 1,
      sym_identifier,
  [4717] = 1,
    ACTIONS(650), 1,
      sym__newline,
  [4721] = 1,
    ACTIONS(652), 1,
      sym_identifier,
  [4725] = 1,
    ACTIONS(654), 1,
      sym__newline,
  [4729] = 1,
    ACTIONS(656), 1,
      anon_sym_EQ,
  [4733] = 1,
    ACTIONS(658), 1,
      sym_identifier,
  [4737] = 1,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
  [4741] = 1,
    ACTIONS(662), 1,
      anon_sym_of,
  [4745] = 1,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
  [4749] = 1,
    ACTIONS(666), 1,
      sym_identifier,
  [4753] = 1,
    ACTIONS(668), 1,
      sym_identifier,
  [4757] = 1,
    ACTIONS(670), 1,
      anon_sym_from,
  [4761] = 1,
    ACTIONS(672), 1,
      anon_sym_to,
  [4765] = 1,
    ACTIONS(674), 1,
      anon_sym_of,
  [4769] = 1,
    ACTIONS(676), 1,
      sym__newline,
  [4773] = 1,
    ACTIONS(678), 1,
      anon_sym_to,
  [4777] = 1,
    ACTIONS(680), 1,
      anon_sym_to,
  [4781] = 1,
    ACTIONS(682), 1,
      sym_identifier,
  [4785] = 1,
    ACTIONS(684), 1,
      sym_identifier,
  [4789] = 1,
    ACTIONS(686), 1,
      sym_identifier,
  [4793] = 1,
    ACTIONS(688), 1,
      sym_identifier,
  [4797] = 1,
    ACTIONS(690), 1,
      sym_identifier,
  [4801] = 1,
    ACTIONS(692), 1,
      sym_identifier,
  [4805] = 1,
    ACTIONS(694), 1,
      sym_integer,
  [4809] = 1,
    ACTIONS(696), 1,
      sym_identifier,
  [4813] = 1,
    ACTIONS(698), 1,
      sym_integer,
  [4817] = 1,
    ACTIONS(700), 1,
      sym_float,
  [4821] = 1,
    ACTIONS(702), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 101,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 256,
  [SMALL_STATE(10)] = 289,
  [SMALL_STATE(11)] = 322,
  [SMALL_STATE(12)] = 361,
  [SMALL_STATE(13)] = 387,
  [SMALL_STATE(14)] = 413,
  [SMALL_STATE(15)] = 439,
  [SMALL_STATE(16)] = 471,
  [SMALL_STATE(17)] = 501,
  [SMALL_STATE(18)] = 527,
  [SMALL_STATE(19)] = 553,
  [SMALL_STATE(20)] = 588,
  [SMALL_STATE(21)] = 619,
  [SMALL_STATE(22)] = 650,
  [SMALL_STATE(23)] = 681,
  [SMALL_STATE(24)] = 711,
  [SMALL_STATE(25)] = 741,
  [SMALL_STATE(26)] = 765,
  [SMALL_STATE(27)] = 795,
  [SMALL_STATE(28)] = 819,
  [SMALL_STATE(29)] = 849,
  [SMALL_STATE(30)] = 873,
  [SMALL_STATE(31)] = 897,
  [SMALL_STATE(32)] = 925,
  [SMALL_STATE(33)] = 949,
  [SMALL_STATE(34)] = 972,
  [SMALL_STATE(35)] = 995,
  [SMALL_STATE(36)] = 1017,
  [SMALL_STATE(37)] = 1049,
  [SMALL_STATE(38)] = 1089,
  [SMALL_STATE(39)] = 1111,
  [SMALL_STATE(40)] = 1135,
  [SMALL_STATE(41)] = 1177,
  [SMALL_STATE(42)] = 1203,
  [SMALL_STATE(43)] = 1225,
  [SMALL_STATE(44)] = 1264,
  [SMALL_STATE(45)] = 1295,
  [SMALL_STATE(46)] = 1316,
  [SMALL_STATE(47)] = 1355,
  [SMALL_STATE(48)] = 1394,
  [SMALL_STATE(49)] = 1433,
  [SMALL_STATE(50)] = 1454,
  [SMALL_STATE(51)] = 1481,
  [SMALL_STATE(52)] = 1508,
  [SMALL_STATE(53)] = 1533,
  [SMALL_STATE(54)] = 1554,
  [SMALL_STATE(55)] = 1593,
  [SMALL_STATE(56)] = 1620,
  [SMALL_STATE(57)] = 1654,
  [SMALL_STATE(58)] = 1688,
  [SMALL_STATE(59)] = 1722,
  [SMALL_STATE(60)] = 1756,
  [SMALL_STATE(61)] = 1790,
  [SMALL_STATE(62)] = 1824,
  [SMALL_STATE(63)] = 1858,
  [SMALL_STATE(64)] = 1892,
  [SMALL_STATE(65)] = 1926,
  [SMALL_STATE(66)] = 1952,
  [SMALL_STATE(67)] = 1986,
  [SMALL_STATE(68)] = 2020,
  [SMALL_STATE(69)] = 2054,
  [SMALL_STATE(70)] = 2088,
  [SMALL_STATE(71)] = 2122,
  [SMALL_STATE(72)] = 2156,
  [SMALL_STATE(73)] = 2190,
  [SMALL_STATE(74)] = 2224,
  [SMALL_STATE(75)] = 2258,
  [SMALL_STATE(76)] = 2292,
  [SMALL_STATE(77)] = 2326,
  [SMALL_STATE(78)] = 2360,
  [SMALL_STATE(79)] = 2394,
  [SMALL_STATE(80)] = 2428,
  [SMALL_STATE(81)] = 2462,
  [SMALL_STATE(82)] = 2496,
  [SMALL_STATE(83)] = 2527,
  [SMALL_STATE(84)] = 2558,
  [SMALL_STATE(85)] = 2581,
  [SMALL_STATE(86)] = 2604,
  [SMALL_STATE(87)] = 2635,
  [SMALL_STATE(88)] = 2666,
  [SMALL_STATE(89)] = 2686,
  [SMALL_STATE(90)] = 2706,
  [SMALL_STATE(91)] = 2725,
  [SMALL_STATE(92)] = 2748,
  [SMALL_STATE(93)] = 2771,
  [SMALL_STATE(94)] = 2794,
  [SMALL_STATE(95)] = 2817,
  [SMALL_STATE(96)] = 2840,
  [SMALL_STATE(97)] = 2863,
  [SMALL_STATE(98)] = 2886,
  [SMALL_STATE(99)] = 2909,
  [SMALL_STATE(100)] = 2928,
  [SMALL_STATE(101)] = 2951,
  [SMALL_STATE(102)] = 2974,
  [SMALL_STATE(103)] = 2997,
  [SMALL_STATE(104)] = 3020,
  [SMALL_STATE(105)] = 3045,
  [SMALL_STATE(106)] = 3068,
  [SMALL_STATE(107)] = 3093,
  [SMALL_STATE(108)] = 3116,
  [SMALL_STATE(109)] = 3139,
  [SMALL_STATE(110)] = 3153,
  [SMALL_STATE(111)] = 3167,
  [SMALL_STATE(112)] = 3181,
  [SMALL_STATE(113)] = 3197,
  [SMALL_STATE(114)] = 3209,
  [SMALL_STATE(115)] = 3227,
  [SMALL_STATE(116)] = 3249,
  [SMALL_STATE(117)] = 3270,
  [SMALL_STATE(118)] = 3291,
  [SMALL_STATE(119)] = 3301,
  [SMALL_STATE(120)] = 3319,
  [SMALL_STATE(121)] = 3329,
  [SMALL_STATE(122)] = 3339,
  [SMALL_STATE(123)] = 3349,
  [SMALL_STATE(124)] = 3359,
  [SMALL_STATE(125)] = 3369,
  [SMALL_STATE(126)] = 3387,
  [SMALL_STATE(127)] = 3397,
  [SMALL_STATE(128)] = 3415,
  [SMALL_STATE(129)] = 3425,
  [SMALL_STATE(130)] = 3435,
  [SMALL_STATE(131)] = 3453,
  [SMALL_STATE(132)] = 3471,
  [SMALL_STATE(133)] = 3481,
  [SMALL_STATE(134)] = 3491,
  [SMALL_STATE(135)] = 3501,
  [SMALL_STATE(136)] = 3511,
  [SMALL_STATE(137)] = 3523,
  [SMALL_STATE(138)] = 3541,
  [SMALL_STATE(139)] = 3551,
  [SMALL_STATE(140)] = 3569,
  [SMALL_STATE(141)] = 3587,
  [SMALL_STATE(142)] = 3597,
  [SMALL_STATE(143)] = 3607,
  [SMALL_STATE(144)] = 3617,
  [SMALL_STATE(145)] = 3627,
  [SMALL_STATE(146)] = 3645,
  [SMALL_STATE(147)] = 3655,
  [SMALL_STATE(148)] = 3666,
  [SMALL_STATE(149)] = 3679,
  [SMALL_STATE(150)] = 3692,
  [SMALL_STATE(151)] = 3711,
  [SMALL_STATE(152)] = 3722,
  [SMALL_STATE(153)] = 3734,
  [SMALL_STATE(154)] = 3742,
  [SMALL_STATE(155)] = 3756,
  [SMALL_STATE(156)] = 3770,
  [SMALL_STATE(157)] = 3782,
  [SMALL_STATE(158)] = 3789,
  [SMALL_STATE(159)] = 3800,
  [SMALL_STATE(160)] = 3813,
  [SMALL_STATE(161)] = 3824,
  [SMALL_STATE(162)] = 3837,
  [SMALL_STATE(163)] = 3848,
  [SMALL_STATE(164)] = 3855,
  [SMALL_STATE(165)] = 3862,
  [SMALL_STATE(166)] = 3869,
  [SMALL_STATE(167)] = 3876,
  [SMALL_STATE(168)] = 3887,
  [SMALL_STATE(169)] = 3900,
  [SMALL_STATE(170)] = 3907,
  [SMALL_STATE(171)] = 3918,
  [SMALL_STATE(172)] = 3927,
  [SMALL_STATE(173)] = 3940,
  [SMALL_STATE(174)] = 3951,
  [SMALL_STATE(175)] = 3958,
  [SMALL_STATE(176)] = 3969,
  [SMALL_STATE(177)] = 3976,
  [SMALL_STATE(178)] = 3983,
  [SMALL_STATE(179)] = 3994,
  [SMALL_STATE(180)] = 4004,
  [SMALL_STATE(181)] = 4010,
  [SMALL_STATE(182)] = 4020,
  [SMALL_STATE(183)] = 4030,
  [SMALL_STATE(184)] = 4040,
  [SMALL_STATE(185)] = 4046,
  [SMALL_STATE(186)] = 4054,
  [SMALL_STATE(187)] = 4064,
  [SMALL_STATE(188)] = 4074,
  [SMALL_STATE(189)] = 4084,
  [SMALL_STATE(190)] = 4094,
  [SMALL_STATE(191)] = 4100,
  [SMALL_STATE(192)] = 4110,
  [SMALL_STATE(193)] = 4120,
  [SMALL_STATE(194)] = 4130,
  [SMALL_STATE(195)] = 4140,
  [SMALL_STATE(196)] = 4150,
  [SMALL_STATE(197)] = 4160,
  [SMALL_STATE(198)] = 4170,
  [SMALL_STATE(199)] = 4180,
  [SMALL_STATE(200)] = 4188,
  [SMALL_STATE(201)] = 4196,
  [SMALL_STATE(202)] = 4206,
  [SMALL_STATE(203)] = 4216,
  [SMALL_STATE(204)] = 4226,
  [SMALL_STATE(205)] = 4236,
  [SMALL_STATE(206)] = 4242,
  [SMALL_STATE(207)] = 4252,
  [SMALL_STATE(208)] = 4258,
  [SMALL_STATE(209)] = 4264,
  [SMALL_STATE(210)] = 4274,
  [SMALL_STATE(211)] = 4284,
  [SMALL_STATE(212)] = 4294,
  [SMALL_STATE(213)] = 4304,
  [SMALL_STATE(214)] = 4314,
  [SMALL_STATE(215)] = 4324,
  [SMALL_STATE(216)] = 4334,
  [SMALL_STATE(217)] = 4344,
  [SMALL_STATE(218)] = 4354,
  [SMALL_STATE(219)] = 4364,
  [SMALL_STATE(220)] = 4374,
  [SMALL_STATE(221)] = 4380,
  [SMALL_STATE(222)] = 4390,
  [SMALL_STATE(223)] = 4396,
  [SMALL_STATE(224)] = 4406,
  [SMALL_STATE(225)] = 4416,
  [SMALL_STATE(226)] = 4422,
  [SMALL_STATE(227)] = 4432,
  [SMALL_STATE(228)] = 4437,
  [SMALL_STATE(229)] = 4442,
  [SMALL_STATE(230)] = 4447,
  [SMALL_STATE(231)] = 4452,
  [SMALL_STATE(232)] = 4459,
  [SMALL_STATE(233)] = 4464,
  [SMALL_STATE(234)] = 4469,
  [SMALL_STATE(235)] = 4474,
  [SMALL_STATE(236)] = 4479,
  [SMALL_STATE(237)] = 4486,
  [SMALL_STATE(238)] = 4491,
  [SMALL_STATE(239)] = 4498,
  [SMALL_STATE(240)] = 4503,
  [SMALL_STATE(241)] = 4510,
  [SMALL_STATE(242)] = 4515,
  [SMALL_STATE(243)] = 4522,
  [SMALL_STATE(244)] = 4529,
  [SMALL_STATE(245)] = 4534,
  [SMALL_STATE(246)] = 4539,
  [SMALL_STATE(247)] = 4544,
  [SMALL_STATE(248)] = 4549,
  [SMALL_STATE(249)] = 4554,
  [SMALL_STATE(250)] = 4559,
  [SMALL_STATE(251)] = 4564,
  [SMALL_STATE(252)] = 4569,
  [SMALL_STATE(253)] = 4573,
  [SMALL_STATE(254)] = 4577,
  [SMALL_STATE(255)] = 4581,
  [SMALL_STATE(256)] = 4585,
  [SMALL_STATE(257)] = 4589,
  [SMALL_STATE(258)] = 4593,
  [SMALL_STATE(259)] = 4597,
  [SMALL_STATE(260)] = 4601,
  [SMALL_STATE(261)] = 4605,
  [SMALL_STATE(262)] = 4609,
  [SMALL_STATE(263)] = 4613,
  [SMALL_STATE(264)] = 4617,
  [SMALL_STATE(265)] = 4621,
  [SMALL_STATE(266)] = 4625,
  [SMALL_STATE(267)] = 4629,
  [SMALL_STATE(268)] = 4633,
  [SMALL_STATE(269)] = 4637,
  [SMALL_STATE(270)] = 4641,
  [SMALL_STATE(271)] = 4645,
  [SMALL_STATE(272)] = 4649,
  [SMALL_STATE(273)] = 4653,
  [SMALL_STATE(274)] = 4657,
  [SMALL_STATE(275)] = 4661,
  [SMALL_STATE(276)] = 4665,
  [SMALL_STATE(277)] = 4669,
  [SMALL_STATE(278)] = 4673,
  [SMALL_STATE(279)] = 4677,
  [SMALL_STATE(280)] = 4681,
  [SMALL_STATE(281)] = 4685,
  [SMALL_STATE(282)] = 4689,
  [SMALL_STATE(283)] = 4693,
  [SMALL_STATE(284)] = 4697,
  [SMALL_STATE(285)] = 4701,
  [SMALL_STATE(286)] = 4705,
  [SMALL_STATE(287)] = 4709,
  [SMALL_STATE(288)] = 4713,
  [SMALL_STATE(289)] = 4717,
  [SMALL_STATE(290)] = 4721,
  [SMALL_STATE(291)] = 4725,
  [SMALL_STATE(292)] = 4729,
  [SMALL_STATE(293)] = 4733,
  [SMALL_STATE(294)] = 4737,
  [SMALL_STATE(295)] = 4741,
  [SMALL_STATE(296)] = 4745,
  [SMALL_STATE(297)] = 4749,
  [SMALL_STATE(298)] = 4753,
  [SMALL_STATE(299)] = 4757,
  [SMALL_STATE(300)] = 4761,
  [SMALL_STATE(301)] = 4765,
  [SMALL_STATE(302)] = 4769,
  [SMALL_STATE(303)] = 4773,
  [SMALL_STATE(304)] = 4777,
  [SMALL_STATE(305)] = 4781,
  [SMALL_STATE(306)] = 4785,
  [SMALL_STATE(307)] = 4789,
  [SMALL_STATE(308)] = 4793,
  [SMALL_STATE(309)] = 4797,
  [SMALL_STATE(310)] = 4801,
  [SMALL_STATE(311)] = 4805,
  [SMALL_STATE(312)] = 4809,
  [SMALL_STATE(313)] = 4813,
  [SMALL_STATE(314)] = 4817,
  [SMALL_STATE(315)] = 4821,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 2, .production_id = 5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 2, .production_id = 5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 11),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 11), SHIFT_REPEAT(61),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 11),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 11), SHIFT_REPEAT(312),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 10),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 10),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 15),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 15),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 1, .production_id = 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 11), SHIFT_REPEAT(74),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 11), SHIFT_REPEAT(293),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 13),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 13),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 12),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 12),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 11), SHIFT_REPEAT(70),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 11), SHIFT_REPEAT(288),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 11), SHIFT_REPEAT(78),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 11), SHIFT_REPEAT(297),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_argument, 1), REDUCE(sym_primary_expression, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(264),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(72),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(263),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 14), SHIFT_REPEAT(107),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 14),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 14),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 14), SHIFT_REPEAT(107),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 2, .production_id = 8),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 2, .production_id = 8),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(253),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(310),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(309),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(308),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(306),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(305),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 14), SHIFT_REPEAT(101),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 14), SHIFT_REPEAT(101),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 14), SHIFT_REPEAT(91),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 14), SHIFT_REPEAT(91),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 14), SHIFT_REPEAT(96),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 14), SHIFT_REPEAT(96),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(243),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(242),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(259),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 7),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_operator, 2, .production_id = 7),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 12),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_operator, 3, .production_id = 12),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 6),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2), SHIFT_REPEAT(76),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(315),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2), SHIFT_REPEAT(40),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 2),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(276),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(278),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2), SHIFT_REPEAT(282),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 5),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(168),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 9),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(269),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 6),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delclaration_array_type, 7),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 5),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [664] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
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
