#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 312
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 12

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
  sym_array_access = 97,
  sym_record_access = 98,
  sym_variable_access = 99,
  aux_sym_program_repeat1 = 100,
  aux_sym_enum_repeat1 = 101,
  aux_sym_record_repeat1 = 102,
  aux_sym_function_definition_repeat1 = 103,
  aux_sym_function_definition_repeat2 = 104,
  aux_sym_call_statement_repeat1 = 105,
  aux_sym_if_then_statement_repeat1 = 106,
  aux_sym_constant_repeat1 = 107,
  aux_sym_block_repeat1 = 108,
  aux_sym__parameters_repeat1 = 109,
  aux_sym_comparison_operator_repeat1 = 110,
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
  [sym_array_access] = "array_access",
  [sym_record_access] = "record_access",
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
  [sym_array_access] = sym_array_access,
  [sym_record_access] = sym_record_access,
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
  [sym_array_access] = {
    .visible = true,
    .named = true,
  },
  [sym_record_access] = {
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
};

enum ts_field_identifiers {
  field_argument = 1,
  field_constants = 2,
  field_function = 3,
  field_left = 4,
  field_name = 5,
  field_operator = 6,
  field_operators = 7,
  field_parameters = 8,
  field_right = 9,
  field_var = 10,
  field_variables = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_constants] = "constants",
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
  [5] = {.index = 9, .length = 4},
  [6] = {.index = 13, .length = 1},
  [7] = {.index = 14, .length = 1},
  [8] = {.index = 15, .length = 1},
  [9] = {.index = 16, .length = 3},
  [10] = {.index = 19, .length = 1},
  [11] = {.index = 20, .length = 2},
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
    {field_constants, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_variables, 4},
  [13] =
    {field_argument, 1},
  [14] =
    {field_operators, 1, .inherited = true},
  [15] =
    {field_var, 0},
  [16] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [19] =
    {field_operators, 0},
  [20] =
    {field_operators, 0, .inherited = true},
    {field_operators, 1, .inherited = true},
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
  [12] = 12,
  [13] = 3,
  [14] = 7,
  [15] = 4,
  [16] = 11,
  [17] = 3,
  [18] = 18,
  [19] = 10,
  [20] = 9,
  [21] = 5,
  [22] = 8,
  [23] = 23,
  [24] = 6,
  [25] = 12,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 26,
  [30] = 3,
  [31] = 27,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 35,
  [36] = 7,
  [37] = 37,
  [38] = 38,
  [39] = 8,
  [40] = 40,
  [41] = 32,
  [42] = 35,
  [43] = 43,
  [44] = 44,
  [45] = 6,
  [46] = 44,
  [47] = 40,
  [48] = 48,
  [49] = 5,
  [50] = 43,
  [51] = 43,
  [52] = 35,
  [53] = 53,
  [54] = 40,
  [55] = 40,
  [56] = 4,
  [57] = 44,
  [58] = 12,
  [59] = 11,
  [60] = 60,
  [61] = 9,
  [62] = 35,
  [63] = 43,
  [64] = 44,
  [65] = 32,
  [66] = 11,
  [67] = 9,
  [68] = 5,
  [69] = 12,
  [70] = 7,
  [71] = 71,
  [72] = 72,
  [73] = 6,
  [74] = 10,
  [75] = 4,
  [76] = 8,
  [77] = 10,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 71,
  [83] = 72,
  [84] = 84,
  [85] = 84,
  [86] = 86,
  [87] = 84,
  [88] = 88,
  [89] = 89,
  [90] = 86,
  [91] = 84,
  [92] = 92,
  [93] = 92,
  [94] = 86,
  [95] = 92,
  [96] = 92,
  [97] = 86,
  [98] = 72,
  [99] = 71,
  [100] = 71,
  [101] = 101,
  [102] = 72,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 107,
  [115] = 115,
  [116] = 116,
  [117] = 111,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 116,
  [123] = 110,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 106,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 129,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 108,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 141,
  [154] = 106,
  [155] = 155,
  [156] = 156,
  [157] = 111,
  [158] = 115,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 155,
  [163] = 163,
  [164] = 110,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 107,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 108,
  [181] = 110,
  [182] = 111,
  [183] = 183,
  [184] = 184,
  [185] = 183,
  [186] = 184,
  [187] = 183,
  [188] = 188,
  [189] = 184,
  [190] = 190,
  [191] = 177,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 179,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 183,
  [204] = 127,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 124,
  [209] = 209,
  [210] = 193,
  [211] = 211,
  [212] = 178,
  [213] = 213,
  [214] = 214,
  [215] = 106,
  [216] = 107,
  [217] = 161,
  [218] = 184,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 176,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 201,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 199,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 244,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 246,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 263,
  [275] = 275,
  [276] = 275,
  [277] = 240,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 254,
  [282] = 251,
  [283] = 283,
  [284] = 273,
  [285] = 285,
  [286] = 286,
  [287] = 275,
  [288] = 288,
  [289] = 273,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 273,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 253,
  [298] = 298,
  [299] = 272,
  [300] = 248,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 286,
  [310] = 291,
  [311] = 301,
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
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead == 't') ADVANCE(199);
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
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == 'v') ADVANCE(178);
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
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead == 't') ADVANCE(199);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(208);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 't') ADVANCE(199);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 't') ADVANCE(199);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == 'v') ADVANCE(178);
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
      if (lookahead == 'a') ADVANCE(200);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(208);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(206);
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
      if (lookahead == 'e') ADVANCE(179);
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
      if (lookahead == 'r') ADVANCE(207);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(134);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(153);
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
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 41, .external_lex_state = 4},
  [27] = {.lex_state = 41, .external_lex_state = 4},
  [28] = {.lex_state = 41, .external_lex_state = 4},
  [29] = {.lex_state = 41, .external_lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 41, .external_lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0, .external_lex_state = 3},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 113},
  [79] = {.lex_state = 113},
  [80] = {.lex_state = 113},
  [81] = {.lex_state = 113},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 0, .external_lex_state = 4},
  [104] = {.lex_state = 0, .external_lex_state = 4},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 113},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 113, .external_lex_state = 3},
  [113] = {.lex_state = 113, .external_lex_state = 3},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 113},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 113},
  [119] = {.lex_state = 113},
  [120] = {.lex_state = 113},
  [121] = {.lex_state = 113},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 113},
  [125] = {.lex_state = 113},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 113},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 113},
  [131] = {.lex_state = 113},
  [132] = {.lex_state = 113},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 113},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 113},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 113},
  [141] = {.lex_state = 113},
  [142] = {.lex_state = 113},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 41, .external_lex_state = 4},
  [145] = {.lex_state = 41, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 113, .external_lex_state = 3},
  [150] = {.lex_state = 0, .external_lex_state = 3},
  [151] = {.lex_state = 0, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 3},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 111},
  [160] = {.lex_state = 0, .external_lex_state = 3},
  [161] = {.lex_state = 113},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0, .external_lex_state = 3},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 3},
  [167] = {.lex_state = 0, .external_lex_state = 3},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0, .external_lex_state = 3},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 113},
  [179] = {.lex_state = 113},
  [180] = {.lex_state = 113, .external_lex_state = 3},
  [181] = {.lex_state = 0, .external_lex_state = 3},
  [182] = {.lex_state = 0, .external_lex_state = 3},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 113},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 113},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 113},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 113, .external_lex_state = 3},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 113, .external_lex_state = 3},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 113},
  [213] = {.lex_state = 113},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 3},
  [216] = {.lex_state = 0, .external_lex_state = 3},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 113},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 113},
  [224] = {.lex_state = 42},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0, .external_lex_state = 3},
  [234] = {.lex_state = 0, .external_lex_state = 3},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 42},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 111},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 111},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 111},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 111},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 111},
  [263] = {.lex_state = 111},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 111},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 111},
  [274] = {.lex_state = 111},
  [275] = {.lex_state = 0, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 111},
  [278] = {.lex_state = 111},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0, .external_lex_state = 3},
  [284] = {.lex_state = 111},
  [285] = {.lex_state = 111},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0, .external_lex_state = 2},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 111},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 111},
  [294] = {.lex_state = 111},
  [295] = {.lex_state = 0, .external_lex_state = 2},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 111},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 111},
  [302] = {.lex_state = 111},
  [303] = {.lex_state = 111},
  [304] = {.lex_state = 111},
  [305] = {.lex_state = 111},
  [306] = {.lex_state = 111},
  [307] = {.lex_state = 111},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 111},
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
    [sym_program] = STATE(292),
    [sym_enum] = STATE(80),
    [sym_record] = STATE(80),
    [sym_export] = STATE(80),
    [sym_import] = STATE(80),
    [sym_module] = STATE(78),
    [sym_function_definition] = STATE(80),
    [sym_variable] = STATE(80),
    [aux_sym_program_repeat1] = STATE(80),
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
  [0] = 17,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_COLON_EQ,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DOT,
    STATE(14), 1,
      sym_primary_expression,
    STATE(53), 1,
      sym_variable_access,
    STATE(148), 1,
      sym_expression,
    STATE(156), 1,
      sym_argument,
    ACTIONS(33), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(15), 2,
      sym_array_access,
      sym_record_access,
    STATE(22), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(29), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(114), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [59] = 4,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(23), 10,
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
  [91] = 2,
    ACTIONS(23), 11,
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
  [118] = 2,
    ACTIONS(41), 11,
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
  [145] = 2,
    ACTIONS(45), 11,
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
  [172] = 8,
    STATE(71), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(51), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(55), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(53), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [211] = 2,
    ACTIONS(63), 10,
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
    ACTIONS(65), 11,
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
  [237] = 2,
    ACTIONS(67), 10,
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
    ACTIONS(69), 11,
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
  [263] = 5,
    ACTIONS(55), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(71), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
    ACTIONS(73), 9,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [295] = 4,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(75), 8,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
    ACTIONS(77), 9,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [325] = 2,
    ACTIONS(75), 10,
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
    ACTIONS(77), 11,
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
  [351] = 4,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_DOT,
    ACTIONS(39), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 16,
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
  [381] = 7,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    STATE(82), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(83), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(51), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [416] = 2,
    ACTIONS(39), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 16,
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
  [440] = 4,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(75), 13,
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
  [468] = 4,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(39), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 14,
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
  [496] = 13,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(14), 1,
      sym_primary_expression,
    STATE(53), 1,
      sym_variable_access,
    STATE(148), 1,
      sym_expression,
    STATE(188), 1,
      sym_argument,
    STATE(15), 2,
      sym_array_access,
      sym_record_access,
    STATE(22), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(29), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(114), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [542] = 5,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(71), 11,
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
  [572] = 2,
    ACTIONS(69), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 16,
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
  [596] = 2,
    ACTIONS(43), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 16,
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
  [620] = 2,
    ACTIONS(65), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 16,
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
  [644] = 12,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_and,
    ACTIONS(99), 1,
      anon_sym_or,
    STATE(14), 1,
      sym_primary_expression,
    STATE(147), 1,
      sym_expression,
    STATE(15), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(29), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(22), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(114), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [688] = 2,
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
  [712] = 2,
    ACTIONS(77), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 16,
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
  [736] = 12,
    ACTIONS(101), 1,
      anon_sym_repeat,
    ACTIONS(103), 1,
      anon_sym_while,
    ACTIONS(105), 1,
      anon_sym_if,
    ACTIONS(107), 1,
      anon_sym_for,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      sym__dedent,
    STATE(28), 1,
      aux_sym_block_repeat1,
    STATE(137), 1,
      sym_if,
    STATE(206), 1,
      sym_statement,
    STATE(258), 1,
      sym_variable_access,
    STATE(4), 2,
      sym_array_access,
      sym_record_access,
    STATE(242), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [779] = 12,
    ACTIONS(101), 1,
      anon_sym_repeat,
    ACTIONS(103), 1,
      anon_sym_while,
    ACTIONS(105), 1,
      anon_sym_if,
    ACTIONS(107), 1,
      anon_sym_for,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(113), 1,
      sym__dedent,
    STATE(26), 1,
      aux_sym_block_repeat1,
    STATE(137), 1,
      sym_if,
    STATE(206), 1,
      sym_statement,
    STATE(258), 1,
      sym_variable_access,
    STATE(4), 2,
      sym_array_access,
      sym_record_access,
    STATE(242), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [822] = 12,
    ACTIONS(115), 1,
      anon_sym_repeat,
    ACTIONS(118), 1,
      anon_sym_while,
    ACTIONS(121), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_for,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__dedent,
    STATE(28), 1,
      aux_sym_block_repeat1,
    STATE(137), 1,
      sym_if,
    STATE(206), 1,
      sym_statement,
    STATE(258), 1,
      sym_variable_access,
    STATE(4), 2,
      sym_array_access,
      sym_record_access,
    STATE(242), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [865] = 12,
    ACTIONS(101), 1,
      anon_sym_repeat,
    ACTIONS(103), 1,
      anon_sym_while,
    ACTIONS(105), 1,
      anon_sym_if,
    ACTIONS(107), 1,
      anon_sym_for,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(132), 1,
      sym__dedent,
    STATE(28), 1,
      aux_sym_block_repeat1,
    STATE(137), 1,
      sym_if,
    STATE(206), 1,
      sym_statement,
    STATE(258), 1,
      sym_variable_access,
    STATE(4), 2,
      sym_array_access,
      sym_record_access,
    STATE(242), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [908] = 4,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DOT,
    ACTIONS(39), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 13,
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
  [935] = 12,
    ACTIONS(101), 1,
      anon_sym_repeat,
    ACTIONS(103), 1,
      anon_sym_while,
    ACTIONS(105), 1,
      anon_sym_if,
    ACTIONS(107), 1,
      anon_sym_for,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(138), 1,
      sym__dedent,
    STATE(29), 1,
      aux_sym_block_repeat1,
    STATE(137), 1,
      sym_if,
    STATE(206), 1,
      sym_statement,
    STATE(258), 1,
      sym_variable_access,
    STATE(4), 2,
      sym_array_access,
      sym_record_access,
    STATE(242), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [978] = 10,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_not,
    ACTIONS(146), 1,
      sym_float,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(7), 1,
      sym_primary_expression,
    STATE(111), 1,
      sym_expression,
    STATE(4), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(144), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(107), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1016] = 10,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_not,
    ACTIONS(156), 1,
      sym_float,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(70), 1,
      sym_primary_expression,
    STATE(166), 1,
      sym_expression,
    STATE(56), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(154), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1054] = 10,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(166), 1,
      sym_float,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(157), 1,
      sym_expression,
    STATE(75), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(164), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(76), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(169), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1092] = 10,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(166), 1,
      sym_float,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(164), 1,
      sym_expression,
    STATE(75), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(164), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(76), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(169), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1130] = 7,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(172), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(174), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(51), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(170), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1162] = 10,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_not,
    ACTIONS(146), 1,
      sym_float,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(7), 1,
      sym_primary_expression,
    STATE(23), 1,
      sym_expression,
    STATE(4), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(144), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(107), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1200] = 10,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_not,
    ACTIONS(156), 1,
      sym_float,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(70), 1,
      sym_primary_expression,
    STATE(160), 1,
      sym_expression,
    STATE(56), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(154), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1238] = 2,
    ACTIONS(65), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 14,
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
  [1260] = 10,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_not,
    ACTIONS(156), 1,
      sym_float,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(70), 1,
      sym_primary_expression,
    STATE(215), 1,
      sym_expression,
    STATE(56), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(154), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1298] = 10,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(14), 1,
      sym_primary_expression,
    STATE(117), 1,
      sym_expression,
    STATE(15), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(29), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(22), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(114), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1336] = 10,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(14), 1,
      sym_primary_expression,
    STATE(123), 1,
      sym_expression,
    STATE(15), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(29), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(22), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(114), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1374] = 10,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(166), 1,
      sym_float,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(183), 1,
      sym_expression,
    STATE(75), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(164), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(76), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(169), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1412] = 10,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(166), 1,
      sym_float,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(218), 1,
      sym_expression,
    STATE(75), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(164), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(76), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(169), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1450] = 2,
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
  [1472] = 10,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(166), 1,
      sym_float,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(184), 1,
      sym_expression,
    STATE(75), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(164), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(76), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(169), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1510] = 10,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_not,
    ACTIONS(146), 1,
      sym_float,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(7), 1,
      sym_primary_expression,
    STATE(106), 1,
      sym_expression,
    STATE(4), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(144), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(107), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1548] = 10,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_not,
    ACTIONS(156), 1,
      sym_float,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(70), 1,
      sym_primary_expression,
    STATE(171), 1,
      sym_expression,
    STATE(56), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(154), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1586] = 2,
    ACTIONS(43), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 14,
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
  [1608] = 10,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(166), 1,
      sym_float,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(203), 1,
      sym_expression,
    STATE(75), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(164), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(76), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(169), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1646] = 10,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(166), 1,
      sym_float,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(185), 1,
      sym_expression,
    STATE(75), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(164), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(76), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(169), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1684] = 10,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_not,
    ACTIONS(146), 1,
      sym_float,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(7), 1,
      sym_primary_expression,
    STATE(110), 1,
      sym_expression,
    STATE(4), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(144), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(107), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1722] = 3,
    ACTIONS(65), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
    ACTIONS(63), 11,
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
  [1746] = 10,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(14), 1,
      sym_primary_expression,
    STATE(128), 1,
      sym_expression,
    STATE(15), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(29), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(22), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(114), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1784] = 10,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(166), 1,
      sym_float,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(154), 1,
      sym_expression,
    STATE(75), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(164), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(76), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(169), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1822] = 2,
    ACTIONS(39), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 14,
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
  [1844] = 10,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(166), 1,
      sym_float,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(189), 1,
      sym_expression,
    STATE(75), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(164), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(76), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(169), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1882] = 2,
    ACTIONS(77), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 14,
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
  [1904] = 4,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(75), 11,
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
  [1930] = 10,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(14), 1,
      sym_primary_expression,
    STATE(170), 1,
      sym_expression,
    STATE(15), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(29), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(22), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(114), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1968] = 2,
    ACTIONS(69), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 14,
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
  [1990] = 10,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_not,
    ACTIONS(156), 1,
      sym_float,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(70), 1,
      sym_primary_expression,
    STATE(181), 1,
      sym_expression,
    STATE(56), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(154), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2028] = 10,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(166), 1,
      sym_float,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(187), 1,
      sym_expression,
    STATE(75), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(164), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(76), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(169), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2066] = 10,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(166), 1,
      sym_float,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(186), 1,
      sym_expression,
    STATE(75), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(164), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(76), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(169), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2104] = 10,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_not,
    ACTIONS(156), 1,
      sym_float,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(70), 1,
      sym_primary_expression,
    STATE(182), 1,
      sym_expression,
    STATE(56), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(154), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2142] = 4,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(174), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(75), 10,
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
  [2167] = 2,
    ACTIONS(69), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 13,
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
  [2188] = 2,
    ACTIONS(43), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 13,
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
  [2209] = 2,
    ACTIONS(77), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 13,
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
  [2230] = 7,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    STATE(100), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(191), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(183), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2261] = 5,
    STATE(72), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(195), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [2288] = 5,
    STATE(72), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(200), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(202), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [2315] = 2,
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
  [2336] = 5,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(174), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(71), 8,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2363] = 2,
    ACTIONS(39), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 13,
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
  [2384] = 2,
    ACTIONS(65), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 13,
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
  [2405] = 5,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(183), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(71), 7,
      sym__indent,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2431] = 8,
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
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    STATE(81), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2462] = 8,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      anon_sym_enum,
    ACTIONS(214), 1,
      anon_sym_record,
    ACTIONS(217), 1,
      anon_sym_export,
    ACTIONS(220), 1,
      anon_sym_import,
    ACTIONS(223), 1,
      anon_sym_define,
    ACTIONS(226), 1,
      anon_sym_variables,
    STATE(79), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2493] = 8,
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
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    STATE(79), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2524] = 8,
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
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    STATE(79), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2555] = 4,
    STATE(83), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(91), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(193), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [2578] = 4,
    STATE(83), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(234), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(200), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [2601] = 7,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      sym_float,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(59), 1,
      sym_primary_expression,
    STATE(56), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(154), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2628] = 7,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_float,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(11), 1,
      sym_primary_expression,
    STATE(4), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(144), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2655] = 7,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(19), 1,
      sym_primary_expression,
    STATE(15), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(29), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(22), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2682] = 7,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(16), 1,
      sym_primary_expression,
    STATE(15), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(29), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(22), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2709] = 7,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      sym_float,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(101), 1,
      sym_primary_expression,
    STATE(56), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(154), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2736] = 7,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      sym_float,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(109), 1,
      sym_primary_expression,
    STATE(56), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(154), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2763] = 7,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      sym_float,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(74), 1,
      sym_primary_expression,
    STATE(75), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(164), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(76), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2790] = 7,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      sym_float,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(66), 1,
      sym_primary_expression,
    STATE(75), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(164), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(76), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2817] = 7,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(25), 1,
      sym_primary_expression,
    STATE(15), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(29), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(22), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2844] = 7,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      sym_float,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(58), 1,
      sym_primary_expression,
    STATE(56), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(154), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2871] = 7,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      sym_float,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(77), 1,
      sym_primary_expression,
    STATE(56), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(154), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2898] = 7,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      sym_float,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(69), 1,
      sym_primary_expression,
    STATE(75), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(164), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(76), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2925] = 7,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_float,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(12), 1,
      sym_primary_expression,
    STATE(4), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(144), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2952] = 7,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_float,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(10), 1,
      sym_primary_expression,
    STATE(4), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(144), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(8), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2979] = 4,
    STATE(98), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(240), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(237), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2999] = 4,
    STATE(98), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(170), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(193), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [3019] = 4,
    STATE(102), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(191), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3038] = 6,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_constant_repeat1,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 2,
      sym__indent,
      anon_sym_constants,
    ACTIONS(183), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
  [3061] = 4,
    STATE(102), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(250), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(247), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3080] = 7,
    ACTIONS(256), 1,
      anon_sym_real,
    ACTIONS(259), 1,
      anon_sym_array,
    ACTIONS(262), 1,
      sym__dedent,
    STATE(250), 1,
      sym_type,
    ACTIONS(253), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(103), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(252), 2,
      sym_basic_type,
      sym_array_type,
  [3105] = 7,
    ACTIONS(266), 1,
      anon_sym_real,
    ACTIONS(268), 1,
      anon_sym_array,
    ACTIONS(270), 1,
      sym__dedent,
    STATE(250), 1,
      sym_type,
    ACTIONS(264), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(103), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(252), 2,
      sym_basic_type,
      sym_array_type,
  [3130] = 6,
    ACTIONS(266), 1,
      anon_sym_real,
    ACTIONS(268), 1,
      anon_sym_array,
    STATE(250), 1,
      sym_type,
    ACTIONS(264), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(104), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(252), 2,
      sym_basic_type,
      sym_array_type,
  [3152] = 2,
    ACTIONS(272), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(274), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3166] = 2,
    ACTIONS(51), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(53), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3180] = 1,
    ACTIONS(276), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_variables,
  [3192] = 4,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(183), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [3210] = 2,
    ACTIONS(280), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(282), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3224] = 3,
    ACTIONS(97), 1,
      anon_sym_and,
    ACTIONS(280), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(282), 6,
      anon_sym_not,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3240] = 6,
    ACTIONS(284), 1,
      anon_sym_constants,
    ACTIONS(286), 1,
      anon_sym_variables,
    ACTIONS(288), 1,
      sym__indent,
    STATE(120), 1,
      sym_block,
    STATE(113), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(152), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3261] = 6,
    ACTIONS(284), 1,
      anon_sym_constants,
    ACTIONS(286), 1,
      anon_sym_variables,
    ACTIONS(288), 1,
      sym__indent,
    STATE(118), 1,
      sym_block,
    STATE(149), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(150), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3282] = 1,
    ACTIONS(51), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3292] = 1,
    ACTIONS(290), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3302] = 5,
    ACTIONS(294), 1,
      anon_sym_real,
    ACTIONS(296), 1,
      anon_sym_array,
    STATE(210), 1,
      sym_declaration_type,
    ACTIONS(292), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(243), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [3320] = 2,
    ACTIONS(298), 1,
      anon_sym_and,
    ACTIONS(280), 6,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_or,
      aux_sym_comment_token1,
  [3332] = 1,
    ACTIONS(300), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3342] = 1,
    ACTIONS(302), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3352] = 1,
    ACTIONS(304), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3362] = 1,
    ACTIONS(306), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3372] = 5,
    ACTIONS(294), 1,
      anon_sym_real,
    ACTIONS(296), 1,
      anon_sym_array,
    STATE(193), 1,
      sym_declaration_type,
    ACTIONS(292), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(243), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [3390] = 1,
    ACTIONS(280), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3400] = 1,
    ACTIONS(308), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3410] = 1,
    ACTIONS(310), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3420] = 5,
    ACTIONS(294), 1,
      anon_sym_real,
    ACTIONS(312), 1,
      anon_sym_array,
    STATE(219), 1,
      sym_type,
    ACTIONS(292), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(244), 2,
      sym_basic_type,
      sym_array_type,
  [3438] = 1,
    ACTIONS(314), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3448] = 1,
    ACTIONS(272), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3458] = 5,
    ACTIONS(294), 1,
      anon_sym_real,
    ACTIONS(296), 1,
      anon_sym_array,
    STATE(191), 1,
      sym_declaration_type,
    ACTIONS(292), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(243), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [3476] = 1,
    ACTIONS(316), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3486] = 1,
    ACTIONS(318), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3496] = 1,
    ACTIONS(320), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3506] = 5,
    ACTIONS(294), 1,
      anon_sym_real,
    ACTIONS(296), 1,
      anon_sym_array,
    STATE(177), 1,
      sym_declaration_type,
    ACTIONS(292), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(243), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [3524] = 5,
    ACTIONS(294), 1,
      anon_sym_real,
    ACTIONS(312), 1,
      anon_sym_array,
    STATE(196), 1,
      sym_type,
    ACTIONS(292), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(244), 2,
      sym_basic_type,
      sym_array_type,
  [3542] = 1,
    ACTIONS(322), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3552] = 5,
    ACTIONS(294), 1,
      anon_sym_real,
    ACTIONS(312), 1,
      anon_sym_array,
    STATE(214), 1,
      sym_type,
    ACTIONS(292), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(244), 2,
      sym_basic_type,
      sym_array_type,
  [3570] = 5,
    ACTIONS(324), 1,
      anon_sym_elsif,
    ACTIONS(326), 1,
      anon_sym_else,
    STATE(231), 1,
      sym_else,
    ACTIONS(328), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(139), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [3588] = 1,
    ACTIONS(330), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3598] = 5,
    ACTIONS(324), 1,
      anon_sym_elsif,
    ACTIONS(326), 1,
      anon_sym_else,
    STATE(228), 1,
      sym_else,
    ACTIONS(332), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(146), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [3616] = 1,
    ACTIONS(334), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3626] = 1,
    ACTIONS(336), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3636] = 1,
    ACTIONS(338), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3646] = 6,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(342), 1,
      anon_sym_var,
    ACTIONS(344), 1,
      sym_identifier,
    STATE(222), 1,
      sym_parameter,
    STATE(270), 1,
      sym__parameters,
    STATE(307), 1,
      sym_var,
  [3665] = 2,
    ACTIONS(276), 1,
      sym__dedent,
    ACTIONS(346), 5,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [3676] = 2,
    ACTIONS(130), 1,
      sym__dedent,
    ACTIONS(348), 5,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [3687] = 3,
    ACTIONS(350), 1,
      anon_sym_elsif,
    STATE(146), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
    ACTIONS(353), 3,
      sym__newline,
      anon_sym_else,
      aux_sym_comment_token1,
  [3700] = 3,
    ACTIONS(298), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(355), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [3713] = 3,
    ACTIONS(298), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(359), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [3725] = 3,
    ACTIONS(363), 1,
      anon_sym_variables,
    ACTIONS(361), 2,
      sym__indent,
      anon_sym_constants,
    STATE(149), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [3737] = 4,
    ACTIONS(284), 1,
      anon_sym_constants,
    ACTIONS(288), 1,
      sym__indent,
    STATE(140), 1,
      sym_block,
    STATE(163), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3751] = 1,
    ACTIONS(366), 5,
      sym__dedent,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
  [3759] = 4,
    ACTIONS(284), 1,
      anon_sym_constants,
    ACTIONS(288), 1,
      sym__indent,
    STATE(121), 1,
      sym_block,
    STATE(163), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3773] = 1,
    ACTIONS(336), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [3780] = 1,
    ACTIONS(272), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [3787] = 1,
    ACTIONS(368), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [3794] = 3,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(372), 2,
      sym__newline,
      aux_sym_comment_token1,
  [3805] = 2,
    ACTIONS(374), 1,
      anon_sym_and,
    ACTIONS(280), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_or,
  [3814] = 1,
    ACTIONS(290), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [3821] = 3,
    ACTIONS(376), 1,
      sym_identifier,
    STATE(202), 1,
      sym_variable_access,
    STATE(15), 2,
      sym_array_access,
      sym_record_access,
  [3832] = 4,
    ACTIONS(378), 1,
      anon_sym_and,
    ACTIONS(380), 1,
      anon_sym_or,
    ACTIONS(382), 1,
      sym__indent,
    STATE(239), 1,
      sym_block,
  [3845] = 3,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_enum_repeat1,
    ACTIONS(387), 2,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [3856] = 1,
    ACTIONS(389), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [3863] = 3,
    ACTIONS(391), 1,
      anon_sym_constants,
    ACTIONS(394), 1,
      sym__indent,
    STATE(163), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3874] = 1,
    ACTIONS(280), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [3881] = 3,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(396), 2,
      sym__newline,
      aux_sym_comment_token1,
  [3892] = 4,
    ACTIONS(378), 1,
      anon_sym_and,
    ACTIONS(380), 1,
      anon_sym_or,
    ACTIONS(382), 1,
      sym__indent,
    STATE(168), 1,
      sym_block,
  [3905] = 3,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_constant_repeat1,
    ACTIONS(401), 2,
      sym__indent,
      anon_sym_constants,
  [3916] = 1,
    ACTIONS(403), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [3923] = 1,
    ACTIONS(51), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [3930] = 3,
    ACTIONS(298), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(405), 2,
      sym__newline,
      aux_sym_comment_token1,
  [3941] = 4,
    ACTIONS(378), 1,
      anon_sym_and,
    ACTIONS(380), 1,
      anon_sym_or,
    ACTIONS(382), 1,
      sym__indent,
    STATE(227), 1,
      sym_block,
  [3954] = 1,
    ACTIONS(407), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [3961] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_constant_repeat1,
    ACTIONS(409), 2,
      sym__indent,
      anon_sym_constants,
  [3972] = 3,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(414), 2,
      sym__newline,
      aux_sym_comment_token1,
  [3983] = 4,
    ACTIONS(342), 1,
      anon_sym_var,
    ACTIONS(344), 1,
      sym_identifier,
    STATE(247), 1,
      sym_parameter,
    STATE(307), 1,
      sym_var,
  [3996] = 2,
    ACTIONS(416), 1,
      anon_sym_from,
    ACTIONS(418), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4004] = 3,
    ACTIONS(420), 1,
      aux_sym_comment_token1,
    ACTIONS(422), 1,
      sym__newline,
    STATE(124), 1,
      sym_comment,
  [4014] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_COLON,
    STATE(161), 1,
      aux_sym_enum_repeat1,
  [4024] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_COLON,
    STATE(178), 1,
      aux_sym_enum_repeat1,
  [4034] = 1,
    ACTIONS(276), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4040] = 1,
    ACTIONS(280), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4046] = 2,
    ACTIONS(378), 1,
      anon_sym_and,
    ACTIONS(280), 2,
      sym__indent,
      anon_sym_or,
  [4054] = 3,
    ACTIONS(374), 1,
      anon_sym_and,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
    ACTIONS(432), 1,
      anon_sym_or,
  [4064] = 3,
    ACTIONS(374), 1,
      anon_sym_and,
    ACTIONS(432), 1,
      anon_sym_or,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
  [4074] = 3,
    ACTIONS(374), 1,
      anon_sym_and,
    ACTIONS(432), 1,
      anon_sym_or,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
  [4084] = 3,
    ACTIONS(374), 1,
      anon_sym_and,
    ACTIONS(432), 1,
      anon_sym_or,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
  [4094] = 3,
    ACTIONS(374), 1,
      anon_sym_and,
    ACTIONS(432), 1,
      anon_sym_or,
    ACTIONS(440), 1,
      anon_sym_RBRACK,
  [4104] = 1,
    ACTIONS(414), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4110] = 3,
    ACTIONS(374), 1,
      anon_sym_and,
    ACTIONS(432), 1,
      anon_sym_or,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
  [4120] = 3,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      sym__newline,
    STATE(205), 1,
      aux_sym_enum_repeat1,
  [4130] = 3,
    ACTIONS(448), 1,
      aux_sym_comment_token1,
    ACTIONS(450), 1,
      sym__newline,
    STATE(208), 1,
      sym_comment,
  [4140] = 3,
    ACTIONS(452), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      sym__newline,
    STATE(259), 1,
      sym__multiple_import,
  [4150] = 3,
    ACTIONS(448), 1,
      aux_sym_comment_token1,
    ACTIONS(456), 1,
      sym__newline,
    STATE(204), 1,
      sym_comment,
  [4160] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      aux_sym_enum_repeat1,
  [4170] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      anon_sym_COLON,
    STATE(212), 1,
      aux_sym_enum_repeat1,
  [4180] = 3,
    ACTIONS(420), 1,
      aux_sym_comment_token1,
    ACTIONS(462), 1,
      sym__newline,
    STATE(241), 1,
      sym_comment,
  [4190] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_COLON,
    STATE(161), 1,
      aux_sym_enum_repeat1,
  [4200] = 3,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym__parameters_repeat1,
  [4210] = 2,
    ACTIONS(470), 1,
      anon_sym_from,
    ACTIONS(418), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4218] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym__parameters_repeat1,
  [4228] = 1,
    ACTIONS(387), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4234] = 1,
    ACTIONS(477), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4240] = 3,
    ACTIONS(374), 1,
      anon_sym_and,
    ACTIONS(432), 1,
      anon_sym_or,
    ACTIONS(479), 1,
      anon_sym_RBRACK,
  [4250] = 1,
    ACTIONS(314), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4256] = 3,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      sym__newline,
    STATE(217), 1,
      aux_sym_enum_repeat1,
  [4266] = 3,
    ACTIONS(483), 1,
      aux_sym_comment_token1,
    ACTIONS(485), 1,
      sym__newline,
    STATE(145), 1,
      sym_comment,
  [4276] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      aux_sym_enum_repeat1,
  [4286] = 1,
    ACTIONS(308), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4292] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      aux_sym_enum_repeat1,
  [4302] = 3,
    ACTIONS(420), 1,
      aux_sym_comment_token1,
    ACTIONS(491), 1,
      sym__newline,
    STATE(127), 1,
      sym_comment,
  [4312] = 3,
    ACTIONS(448), 1,
      aux_sym_comment_token1,
    ACTIONS(493), 1,
      sym__newline,
    STATE(112), 1,
      sym_comment,
  [4322] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_COLON,
    STATE(161), 1,
      aux_sym_enum_repeat1,
  [4332] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_COLON,
    STATE(161), 1,
      aux_sym_enum_repeat1,
  [4342] = 3,
    ACTIONS(420), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      sym__newline,
    STATE(232), 1,
      sym_comment,
  [4352] = 1,
    ACTIONS(272), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4358] = 1,
    ACTIONS(51), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4364] = 3,
    ACTIONS(387), 1,
      sym__newline,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_enum_repeat1,
  [4374] = 3,
    ACTIONS(374), 1,
      anon_sym_and,
    ACTIONS(432), 1,
      anon_sym_or,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
  [4384] = 3,
    ACTIONS(420), 1,
      aux_sym_comment_token1,
    ACTIONS(506), 1,
      sym__newline,
    STATE(226), 1,
      sym_comment,
  [4394] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_RBRACK,
    STATE(209), 1,
      aux_sym_enum_repeat1,
  [4404] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_COLON,
    STATE(197), 1,
      aux_sym_enum_repeat1,
  [4414] = 3,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      aux_sym__parameters_repeat1,
  [4424] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_COLON,
    STATE(213), 1,
      aux_sym_enum_repeat1,
  [4434] = 2,
    ACTIONS(514), 1,
      anon_sym_from,
    ACTIONS(516), 1,
      sym_identifier,
  [4441] = 1,
    ACTIONS(518), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4446] = 1,
    ACTIONS(520), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4451] = 1,
    ACTIONS(522), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4456] = 1,
    ACTIONS(524), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4461] = 1,
    ACTIONS(526), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4466] = 1,
    ACTIONS(528), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4471] = 1,
    ACTIONS(332), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4476] = 1,
    ACTIONS(530), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4481] = 2,
    ACTIONS(382), 1,
      sym__indent,
    STATE(238), 1,
      sym_block,
  [4488] = 2,
    ACTIONS(382), 1,
      sym__indent,
    STATE(237), 1,
      sym_block,
  [4495] = 1,
    ACTIONS(387), 2,
      sym__newline,
      anon_sym_COMMA,
  [4500] = 2,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    STATE(211), 1,
      sym_parameters,
  [4507] = 1,
    ACTIONS(534), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4512] = 1,
    ACTIONS(536), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4517] = 1,
    ACTIONS(538), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4522] = 1,
    ACTIONS(540), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4527] = 1,
    ACTIONS(542), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4532] = 1,
    ACTIONS(544), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4537] = 1,
    ACTIONS(546), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4542] = 1,
    ACTIONS(548), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4547] = 2,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(550), 1,
      anon_sym_from,
  [4554] = 1,
    ACTIONS(552), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4559] = 1,
    ACTIONS(475), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4564] = 1,
    ACTIONS(554), 1,
      anon_sym_to,
  [4568] = 1,
    ACTIONS(556), 1,
      anon_sym_EQ,
  [4572] = 1,
    ACTIONS(558), 1,
      sym_identifier,
  [4576] = 1,
    ACTIONS(560), 1,
      sym_float,
  [4580] = 1,
    ACTIONS(548), 1,
      sym_identifier,
  [4584] = 1,
    ACTIONS(562), 1,
      anon_sym_of,
  [4588] = 1,
    ACTIONS(560), 1,
      sym_integer,
  [4592] = 1,
    ACTIONS(564), 1,
      anon_sym_to,
  [4596] = 1,
    ACTIONS(566), 1,
      sym_identifier,
  [4600] = 1,
    ACTIONS(568), 1,
      anon_sym_EQ,
  [4604] = 1,
    ACTIONS(570), 1,
      anon_sym_COLON_EQ,
  [4608] = 1,
    ACTIONS(572), 1,
      sym__newline,
  [4612] = 1,
    ACTIONS(574), 1,
      sym_identifier,
  [4616] = 1,
    ACTIONS(576), 1,
      sym_integer,
  [4620] = 1,
    ACTIONS(578), 1,
      sym_identifier,
  [4624] = 1,
    ACTIONS(580), 1,
      sym_identifier,
  [4628] = 1,
    ACTIONS(582), 1,
      anon_sym_until,
  [4632] = 1,
    ACTIONS(584), 1,
      sym__newline,
  [4636] = 1,
    ACTIONS(586), 1,
      sym__newline,
  [4640] = 1,
    ACTIONS(552), 1,
      sym_identifier,
  [4644] = 1,
    ACTIONS(588), 1,
      sym_integer,
  [4648] = 1,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
  [4652] = 1,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
  [4656] = 1,
    ACTIONS(594), 1,
      anon_sym_from,
  [4660] = 1,
    ACTIONS(596), 1,
      anon_sym_to,
  [4664] = 1,
    ACTIONS(598), 1,
      sym_identifier,
  [4668] = 1,
    ACTIONS(600), 1,
      sym_identifier,
  [4672] = 1,
    ACTIONS(602), 1,
      sym__newline,
  [4676] = 1,
    ACTIONS(604), 1,
      sym__newline,
  [4680] = 1,
    ACTIONS(540), 1,
      sym_identifier,
  [4684] = 1,
    ACTIONS(606), 1,
      sym_identifier,
  [4688] = 1,
    ACTIONS(608), 1,
      anon_sym_from,
  [4692] = 1,
    ACTIONS(610), 1,
      sym_integer,
  [4696] = 1,
    ACTIONS(612), 1,
      sym_integer,
  [4700] = 1,
    ACTIONS(612), 1,
      sym_float,
  [4704] = 1,
    ACTIONS(614), 1,
      sym__indent,
  [4708] = 1,
    ACTIONS(616), 1,
      sym_identifier,
  [4712] = 1,
    ACTIONS(618), 1,
      sym_identifier,
  [4716] = 1,
    ACTIONS(620), 1,
      sym_integer,
  [4720] = 1,
    ACTIONS(622), 1,
      sym__newline,
  [4724] = 1,
    ACTIONS(624), 1,
      anon_sym_EQ,
  [4728] = 1,
    ACTIONS(626), 1,
      sym_identifier,
  [4732] = 1,
    ACTIONS(628), 1,
      anon_sym_to,
  [4736] = 1,
    ACTIONS(630), 1,
      sym_float,
  [4740] = 1,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
  [4744] = 1,
    ACTIONS(634), 1,
      sym_identifier,
  [4748] = 1,
    ACTIONS(636), 1,
      sym_identifier,
  [4752] = 1,
    ACTIONS(638), 1,
      sym__newline,
  [4756] = 1,
    ACTIONS(640), 1,
      sym_integer,
  [4760] = 1,
    ACTIONS(642), 1,
      anon_sym_of,
  [4764] = 1,
    ACTIONS(644), 1,
      sym_identifier,
  [4768] = 1,
    ACTIONS(646), 1,
      anon_sym_to,
  [4772] = 1,
    ACTIONS(648), 1,
      anon_sym_to,
  [4776] = 1,
    ACTIONS(650), 1,
      sym_identifier,
  [4780] = 1,
    ACTIONS(652), 1,
      sym_identifier,
  [4784] = 1,
    ACTIONS(654), 1,
      sym_identifier,
  [4788] = 1,
    ACTIONS(656), 1,
      sym_identifier,
  [4792] = 1,
    ACTIONS(658), 1,
      sym_identifier,
  [4796] = 1,
    ACTIONS(660), 1,
      sym_identifier,
  [4800] = 1,
    ACTIONS(662), 1,
      sym_identifier,
  [4804] = 1,
    ACTIONS(664), 1,
      anon_sym_of,
  [4808] = 1,
    ACTIONS(666), 1,
      sym_integer,
  [4812] = 1,
    ACTIONS(668), 1,
      sym_float,
  [4816] = 1,
    ACTIONS(670), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 91,
  [SMALL_STATE(5)] = 118,
  [SMALL_STATE(6)] = 145,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 211,
  [SMALL_STATE(9)] = 237,
  [SMALL_STATE(10)] = 263,
  [SMALL_STATE(11)] = 295,
  [SMALL_STATE(12)] = 325,
  [SMALL_STATE(13)] = 351,
  [SMALL_STATE(14)] = 381,
  [SMALL_STATE(15)] = 416,
  [SMALL_STATE(16)] = 440,
  [SMALL_STATE(17)] = 468,
  [SMALL_STATE(18)] = 496,
  [SMALL_STATE(19)] = 542,
  [SMALL_STATE(20)] = 572,
  [SMALL_STATE(21)] = 596,
  [SMALL_STATE(22)] = 620,
  [SMALL_STATE(23)] = 644,
  [SMALL_STATE(24)] = 688,
  [SMALL_STATE(25)] = 712,
  [SMALL_STATE(26)] = 736,
  [SMALL_STATE(27)] = 779,
  [SMALL_STATE(28)] = 822,
  [SMALL_STATE(29)] = 865,
  [SMALL_STATE(30)] = 908,
  [SMALL_STATE(31)] = 935,
  [SMALL_STATE(32)] = 978,
  [SMALL_STATE(33)] = 1016,
  [SMALL_STATE(34)] = 1054,
  [SMALL_STATE(35)] = 1092,
  [SMALL_STATE(36)] = 1130,
  [SMALL_STATE(37)] = 1162,
  [SMALL_STATE(38)] = 1200,
  [SMALL_STATE(39)] = 1238,
  [SMALL_STATE(40)] = 1260,
  [SMALL_STATE(41)] = 1298,
  [SMALL_STATE(42)] = 1336,
  [SMALL_STATE(43)] = 1374,
  [SMALL_STATE(44)] = 1412,
  [SMALL_STATE(45)] = 1450,
  [SMALL_STATE(46)] = 1472,
  [SMALL_STATE(47)] = 1510,
  [SMALL_STATE(48)] = 1548,
  [SMALL_STATE(49)] = 1586,
  [SMALL_STATE(50)] = 1608,
  [SMALL_STATE(51)] = 1646,
  [SMALL_STATE(52)] = 1684,
  [SMALL_STATE(53)] = 1722,
  [SMALL_STATE(54)] = 1746,
  [SMALL_STATE(55)] = 1784,
  [SMALL_STATE(56)] = 1822,
  [SMALL_STATE(57)] = 1844,
  [SMALL_STATE(58)] = 1882,
  [SMALL_STATE(59)] = 1904,
  [SMALL_STATE(60)] = 1930,
  [SMALL_STATE(61)] = 1968,
  [SMALL_STATE(62)] = 1990,
  [SMALL_STATE(63)] = 2028,
  [SMALL_STATE(64)] = 2066,
  [SMALL_STATE(65)] = 2104,
  [SMALL_STATE(66)] = 2142,
  [SMALL_STATE(67)] = 2167,
  [SMALL_STATE(68)] = 2188,
  [SMALL_STATE(69)] = 2209,
  [SMALL_STATE(70)] = 2230,
  [SMALL_STATE(71)] = 2261,
  [SMALL_STATE(72)] = 2288,
  [SMALL_STATE(73)] = 2315,
  [SMALL_STATE(74)] = 2336,
  [SMALL_STATE(75)] = 2363,
  [SMALL_STATE(76)] = 2384,
  [SMALL_STATE(77)] = 2405,
  [SMALL_STATE(78)] = 2431,
  [SMALL_STATE(79)] = 2462,
  [SMALL_STATE(80)] = 2493,
  [SMALL_STATE(81)] = 2524,
  [SMALL_STATE(82)] = 2555,
  [SMALL_STATE(83)] = 2578,
  [SMALL_STATE(84)] = 2601,
  [SMALL_STATE(85)] = 2628,
  [SMALL_STATE(86)] = 2655,
  [SMALL_STATE(87)] = 2682,
  [SMALL_STATE(88)] = 2709,
  [SMALL_STATE(89)] = 2736,
  [SMALL_STATE(90)] = 2763,
  [SMALL_STATE(91)] = 2790,
  [SMALL_STATE(92)] = 2817,
  [SMALL_STATE(93)] = 2844,
  [SMALL_STATE(94)] = 2871,
  [SMALL_STATE(95)] = 2898,
  [SMALL_STATE(96)] = 2925,
  [SMALL_STATE(97)] = 2952,
  [SMALL_STATE(98)] = 2979,
  [SMALL_STATE(99)] = 2999,
  [SMALL_STATE(100)] = 3019,
  [SMALL_STATE(101)] = 3038,
  [SMALL_STATE(102)] = 3061,
  [SMALL_STATE(103)] = 3080,
  [SMALL_STATE(104)] = 3105,
  [SMALL_STATE(105)] = 3130,
  [SMALL_STATE(106)] = 3152,
  [SMALL_STATE(107)] = 3166,
  [SMALL_STATE(108)] = 3180,
  [SMALL_STATE(109)] = 3192,
  [SMALL_STATE(110)] = 3210,
  [SMALL_STATE(111)] = 3224,
  [SMALL_STATE(112)] = 3240,
  [SMALL_STATE(113)] = 3261,
  [SMALL_STATE(114)] = 3282,
  [SMALL_STATE(115)] = 3292,
  [SMALL_STATE(116)] = 3302,
  [SMALL_STATE(117)] = 3320,
  [SMALL_STATE(118)] = 3332,
  [SMALL_STATE(119)] = 3342,
  [SMALL_STATE(120)] = 3352,
  [SMALL_STATE(121)] = 3362,
  [SMALL_STATE(122)] = 3372,
  [SMALL_STATE(123)] = 3390,
  [SMALL_STATE(124)] = 3400,
  [SMALL_STATE(125)] = 3410,
  [SMALL_STATE(126)] = 3420,
  [SMALL_STATE(127)] = 3438,
  [SMALL_STATE(128)] = 3448,
  [SMALL_STATE(129)] = 3458,
  [SMALL_STATE(130)] = 3476,
  [SMALL_STATE(131)] = 3486,
  [SMALL_STATE(132)] = 3496,
  [SMALL_STATE(133)] = 3506,
  [SMALL_STATE(134)] = 3524,
  [SMALL_STATE(135)] = 3542,
  [SMALL_STATE(136)] = 3552,
  [SMALL_STATE(137)] = 3570,
  [SMALL_STATE(138)] = 3588,
  [SMALL_STATE(139)] = 3598,
  [SMALL_STATE(140)] = 3616,
  [SMALL_STATE(141)] = 3626,
  [SMALL_STATE(142)] = 3636,
  [SMALL_STATE(143)] = 3646,
  [SMALL_STATE(144)] = 3665,
  [SMALL_STATE(145)] = 3676,
  [SMALL_STATE(146)] = 3687,
  [SMALL_STATE(147)] = 3700,
  [SMALL_STATE(148)] = 3713,
  [SMALL_STATE(149)] = 3725,
  [SMALL_STATE(150)] = 3737,
  [SMALL_STATE(151)] = 3751,
  [SMALL_STATE(152)] = 3759,
  [SMALL_STATE(153)] = 3773,
  [SMALL_STATE(154)] = 3780,
  [SMALL_STATE(155)] = 3787,
  [SMALL_STATE(156)] = 3794,
  [SMALL_STATE(157)] = 3805,
  [SMALL_STATE(158)] = 3814,
  [SMALL_STATE(159)] = 3821,
  [SMALL_STATE(160)] = 3832,
  [SMALL_STATE(161)] = 3845,
  [SMALL_STATE(162)] = 3856,
  [SMALL_STATE(163)] = 3863,
  [SMALL_STATE(164)] = 3874,
  [SMALL_STATE(165)] = 3881,
  [SMALL_STATE(166)] = 3892,
  [SMALL_STATE(167)] = 3905,
  [SMALL_STATE(168)] = 3916,
  [SMALL_STATE(169)] = 3923,
  [SMALL_STATE(170)] = 3930,
  [SMALL_STATE(171)] = 3941,
  [SMALL_STATE(172)] = 3954,
  [SMALL_STATE(173)] = 3961,
  [SMALL_STATE(174)] = 3972,
  [SMALL_STATE(175)] = 3983,
  [SMALL_STATE(176)] = 3996,
  [SMALL_STATE(177)] = 4004,
  [SMALL_STATE(178)] = 4014,
  [SMALL_STATE(179)] = 4024,
  [SMALL_STATE(180)] = 4034,
  [SMALL_STATE(181)] = 4040,
  [SMALL_STATE(182)] = 4046,
  [SMALL_STATE(183)] = 4054,
  [SMALL_STATE(184)] = 4064,
  [SMALL_STATE(185)] = 4074,
  [SMALL_STATE(186)] = 4084,
  [SMALL_STATE(187)] = 4094,
  [SMALL_STATE(188)] = 4104,
  [SMALL_STATE(189)] = 4110,
  [SMALL_STATE(190)] = 4120,
  [SMALL_STATE(191)] = 4130,
  [SMALL_STATE(192)] = 4140,
  [SMALL_STATE(193)] = 4150,
  [SMALL_STATE(194)] = 4160,
  [SMALL_STATE(195)] = 4170,
  [SMALL_STATE(196)] = 4180,
  [SMALL_STATE(197)] = 4190,
  [SMALL_STATE(198)] = 4200,
  [SMALL_STATE(199)] = 4210,
  [SMALL_STATE(200)] = 4218,
  [SMALL_STATE(201)] = 4228,
  [SMALL_STATE(202)] = 4234,
  [SMALL_STATE(203)] = 4240,
  [SMALL_STATE(204)] = 4250,
  [SMALL_STATE(205)] = 4256,
  [SMALL_STATE(206)] = 4266,
  [SMALL_STATE(207)] = 4276,
  [SMALL_STATE(208)] = 4286,
  [SMALL_STATE(209)] = 4292,
  [SMALL_STATE(210)] = 4302,
  [SMALL_STATE(211)] = 4312,
  [SMALL_STATE(212)] = 4322,
  [SMALL_STATE(213)] = 4332,
  [SMALL_STATE(214)] = 4342,
  [SMALL_STATE(215)] = 4352,
  [SMALL_STATE(216)] = 4358,
  [SMALL_STATE(217)] = 4364,
  [SMALL_STATE(218)] = 4374,
  [SMALL_STATE(219)] = 4384,
  [SMALL_STATE(220)] = 4394,
  [SMALL_STATE(221)] = 4404,
  [SMALL_STATE(222)] = 4414,
  [SMALL_STATE(223)] = 4424,
  [SMALL_STATE(224)] = 4434,
  [SMALL_STATE(225)] = 4441,
  [SMALL_STATE(226)] = 4446,
  [SMALL_STATE(227)] = 4451,
  [SMALL_STATE(228)] = 4456,
  [SMALL_STATE(229)] = 4461,
  [SMALL_STATE(230)] = 4466,
  [SMALL_STATE(231)] = 4471,
  [SMALL_STATE(232)] = 4476,
  [SMALL_STATE(233)] = 4481,
  [SMALL_STATE(234)] = 4488,
  [SMALL_STATE(235)] = 4495,
  [SMALL_STATE(236)] = 4500,
  [SMALL_STATE(237)] = 4507,
  [SMALL_STATE(238)] = 4512,
  [SMALL_STATE(239)] = 4517,
  [SMALL_STATE(240)] = 4522,
  [SMALL_STATE(241)] = 4527,
  [SMALL_STATE(242)] = 4532,
  [SMALL_STATE(243)] = 4537,
  [SMALL_STATE(244)] = 4542,
  [SMALL_STATE(245)] = 4547,
  [SMALL_STATE(246)] = 4554,
  [SMALL_STATE(247)] = 4559,
  [SMALL_STATE(248)] = 4564,
  [SMALL_STATE(249)] = 4568,
  [SMALL_STATE(250)] = 4572,
  [SMALL_STATE(251)] = 4576,
  [SMALL_STATE(252)] = 4580,
  [SMALL_STATE(253)] = 4584,
  [SMALL_STATE(254)] = 4588,
  [SMALL_STATE(255)] = 4592,
  [SMALL_STATE(256)] = 4596,
  [SMALL_STATE(257)] = 4600,
  [SMALL_STATE(258)] = 4604,
  [SMALL_STATE(259)] = 4608,
  [SMALL_STATE(260)] = 4612,
  [SMALL_STATE(261)] = 4616,
  [SMALL_STATE(262)] = 4620,
  [SMALL_STATE(263)] = 4624,
  [SMALL_STATE(264)] = 4628,
  [SMALL_STATE(265)] = 4632,
  [SMALL_STATE(266)] = 4636,
  [SMALL_STATE(267)] = 4640,
  [SMALL_STATE(268)] = 4644,
  [SMALL_STATE(269)] = 4648,
  [SMALL_STATE(270)] = 4652,
  [SMALL_STATE(271)] = 4656,
  [SMALL_STATE(272)] = 4660,
  [SMALL_STATE(273)] = 4664,
  [SMALL_STATE(274)] = 4668,
  [SMALL_STATE(275)] = 4672,
  [SMALL_STATE(276)] = 4676,
  [SMALL_STATE(277)] = 4680,
  [SMALL_STATE(278)] = 4684,
  [SMALL_STATE(279)] = 4688,
  [SMALL_STATE(280)] = 4692,
  [SMALL_STATE(281)] = 4696,
  [SMALL_STATE(282)] = 4700,
  [SMALL_STATE(283)] = 4704,
  [SMALL_STATE(284)] = 4708,
  [SMALL_STATE(285)] = 4712,
  [SMALL_STATE(286)] = 4716,
  [SMALL_STATE(287)] = 4720,
  [SMALL_STATE(288)] = 4724,
  [SMALL_STATE(289)] = 4728,
  [SMALL_STATE(290)] = 4732,
  [SMALL_STATE(291)] = 4736,
  [SMALL_STATE(292)] = 4740,
  [SMALL_STATE(293)] = 4744,
  [SMALL_STATE(294)] = 4748,
  [SMALL_STATE(295)] = 4752,
  [SMALL_STATE(296)] = 4756,
  [SMALL_STATE(297)] = 4760,
  [SMALL_STATE(298)] = 4764,
  [SMALL_STATE(299)] = 4768,
  [SMALL_STATE(300)] = 4772,
  [SMALL_STATE(301)] = 4776,
  [SMALL_STATE(302)] = 4780,
  [SMALL_STATE(303)] = 4784,
  [SMALL_STATE(304)] = 4788,
  [SMALL_STATE(305)] = 4792,
  [SMALL_STATE(306)] = 4796,
  [SMALL_STATE(307)] = 4800,
  [SMALL_STATE(308)] = 4804,
  [SMALL_STATE(309)] = 4808,
  [SMALL_STATE(310)] = 4812,
  [SMALL_STATE(311)] = 4816,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 1, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_access, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_access, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 10),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 10),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 9),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 9),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(264),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(262),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_argument, 1), REDUCE(sym_primary_expression, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 2, .production_id = 7),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 2, .production_id = 7),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 11), SHIFT_REPEAT(97),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 11),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 11),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 11), SHIFT_REPEAT(97),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(294),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(306),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(305),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(304),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(302),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(301),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 11), SHIFT_REPEAT(86),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 11), SHIFT_REPEAT(86),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 11), SHIFT_REPEAT(90),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 11), SHIFT_REPEAT(90),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 11), SHIFT_REPEAT(94),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 11), SHIFT_REPEAT(94),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(224),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(245),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(253),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 6),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_operator, 2, .production_id = 6),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 9),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_operator, 3, .production_id = 9),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2), SHIFT_REPEAT(33),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(311),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(274),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(278),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 2),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2), SHIFT_REPEAT(285),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 5),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2), SHIFT_REPEAT(18),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(175),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 8),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(263),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 6),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delclaration_array_type, 7),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 5),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 4),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [632] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
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
