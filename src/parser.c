#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 350
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 29

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
  sym_basis_type = 91,
  sym_array_type = 92,
  sym_delclaration_array_type = 93,
  sym_declaration_type = 94,
  sym__generic = 95,
  sym__generics = 96,
  sym__type_name = 97,
  sym__custom_type = 98,
  sym__custom_generic_type = 99,
  sym__custom_generic_instantiated_type = 100,
  sym_custom_type = 101,
  sym_type = 102,
  sym_comment = 103,
  sym_variable_access = 104,
  aux_sym_program_repeat1 = 105,
  aux_sym_enum_repeat1 = 106,
  aux_sym_record_repeat1 = 107,
  aux_sym_function_definition_repeat1 = 108,
  aux_sym_function_definition_repeat2 = 109,
  aux_sym_call_statement_repeat1 = 110,
  aux_sym_if_then_statement_repeat1 = 111,
  aux_sym_constant_repeat1 = 112,
  aux_sym_block_repeat1 = 113,
  aux_sym__parameters_repeat1 = 114,
  aux_sym_comparison_operator_repeat1 = 115,
  aux_sym__generics_repeat1 = 116,
  aux_sym__custom_generic_instantiated_type_repeat1 = 117,
  aux_sym_variable_access_repeat1 = 118,
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
  [aux_sym__generics_repeat1] = "_generics_repeat1",
  [aux_sym__custom_generic_instantiated_type_repeat1] = "_custom_generic_instantiated_type_repeat1",
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
  [aux_sym__generics_repeat1] = aux_sym__generics_repeat1,
  [aux_sym__custom_generic_instantiated_type_repeat1] = aux_sym__custom_generic_instantiated_type_repeat1,
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
  field_argument = 1,
  field_array_access = 2,
  field_constants = 3,
  field_field_access = 4,
  field_function = 5,
  field_generic = 6,
  field_instatiated_generic = 7,
  field_left = 8,
  field_name = 9,
  field_operator = 10,
  field_operators = 11,
  field_parameters = 12,
  field_right = 13,
  field_type_name = 14,
  field_var = 15,
  field_variables = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_array_access] = "array_access",
  [field_constants] = "constants",
  [field_field_access] = "field_access",
  [field_function] = "function",
  [field_generic] = "generic",
  [field_instatiated_generic] = "instatiated_generic",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_operators] = "operators",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_type_name] = "type_name",
  [field_var] = "var",
  [field_variables] = "variables",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 1},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 1},
  [15] = {.index = 26, .length = 4},
  [16] = {.index = 30, .length = 2},
  [17] = {.index = 32, .length = 4},
  [18] = {.index = 36, .length = 1},
  [19] = {.index = 37, .length = 2},
  [20] = {.index = 39, .length = 1},
  [21] = {.index = 40, .length = 1},
  [22] = {.index = 41, .length = 1},
  [23] = {.index = 42, .length = 2},
  [24] = {.index = 44, .length = 4},
  [25] = {.index = 48, .length = 3},
  [26] = {.index = 51, .length = 1},
  [27] = {.index = 52, .length = 2},
  [28] = {.index = 54, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type_name, 0},
  [1] =
    {field_type_name, 0, .inherited = true},
  [2] =
    {field_generic, 0, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [4] =
    {field_generic, 0, .inherited = true},
    {field_instatiated_generic, 0, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [7] =
    {field_generic, 0},
  [8] =
    {field_generic, 0, .inherited = true},
  [9] =
    {field_generic, 1, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [11] =
    {field_name, 1},
    {field_parameters, 2},
  [13] =
    {field_generic, 0, .inherited = true},
    {field_generic, 1, .inherited = true},
  [15] =
    {field_generic, 1, .inherited = true},
    {field_instatiated_generic, 2},
    {field_type_name, 0, .inherited = true},
  [18] =
    {field_function, 0},
  [19] =
    {field_name, 1},
    {field_parameters, 2},
    {field_variables, 4},
  [22] =
    {field_constants, 4},
    {field_name, 1},
    {field_parameters, 2},
  [25] =
    {field_generic, 1, .inherited = true},
  [26] =
    {field_generic, 1, .inherited = true},
    {field_instatiated_generic, 2},
    {field_instatiated_generic, 3, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [30] =
    {field_array_access, 1, .inherited = true},
    {field_field_access, 1, .inherited = true},
  [32] =
    {field_constants, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_variables, 4},
  [36] =
    {field_instatiated_generic, 1},
  [37] =
    {field_instatiated_generic, 0, .inherited = true},
    {field_instatiated_generic, 1, .inherited = true},
  [39] =
    {field_argument, 1},
  [40] =
    {field_operators, 1, .inherited = true},
  [41] =
    {field_var, 0},
  [42] =
    {field_field_access, 0},
    {field_field_access, 1},
  [44] =
    {field_array_access, 0, .inherited = true},
    {field_array_access, 1, .inherited = true},
    {field_field_access, 0, .inherited = true},
    {field_field_access, 1, .inherited = true},
  [48] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [51] =
    {field_operators, 0},
  [52] =
    {field_operators, 0, .inherited = true},
    {field_operators, 1, .inherited = true},
  [54] =
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
  [8] = 8,
  [9] = 3,
  [10] = 4,
  [11] = 2,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 6,
  [18] = 5,
  [19] = 2,
  [20] = 3,
  [21] = 4,
  [22] = 8,
  [23] = 12,
  [24] = 13,
  [25] = 5,
  [26] = 6,
  [27] = 3,
  [28] = 14,
  [29] = 15,
  [30] = 16,
  [31] = 4,
  [32] = 2,
  [33] = 5,
  [34] = 6,
  [35] = 35,
  [36] = 13,
  [37] = 37,
  [38] = 38,
  [39] = 12,
  [40] = 16,
  [41] = 8,
  [42] = 15,
  [43] = 43,
  [44] = 44,
  [45] = 12,
  [46] = 8,
  [47] = 47,
  [48] = 15,
  [49] = 13,
  [50] = 50,
  [51] = 16,
  [52] = 52,
  [53] = 14,
  [54] = 52,
  [55] = 55,
  [56] = 55,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 58,
  [64] = 58,
  [65] = 65,
  [66] = 66,
  [67] = 14,
  [68] = 59,
  [69] = 59,
  [70] = 58,
  [71] = 71,
  [72] = 71,
  [73] = 59,
  [74] = 65,
  [75] = 65,
  [76] = 76,
  [77] = 76,
  [78] = 78,
  [79] = 79,
  [80] = 65,
  [81] = 71,
  [82] = 76,
  [83] = 71,
  [84] = 76,
  [85] = 50,
  [86] = 57,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 50,
  [95] = 57,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 57,
  [101] = 96,
  [102] = 98,
  [103] = 97,
  [104] = 98,
  [105] = 105,
  [106] = 97,
  [107] = 50,
  [108] = 96,
  [109] = 96,
  [110] = 98,
  [111] = 111,
  [112] = 97,
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
  [123] = 114,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 115,
  [130] = 130,
  [131] = 122,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 128,
  [142] = 142,
  [143] = 143,
  [144] = 117,
  [145] = 145,
  [146] = 116,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 113,
  [151] = 151,
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
  [164] = 132,
  [165] = 165,
  [166] = 117,
  [167] = 167,
  [168] = 168,
  [169] = 142,
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
  [180] = 180,
  [181] = 180,
  [182] = 114,
  [183] = 183,
  [184] = 184,
  [185] = 115,
  [186] = 186,
  [187] = 116,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 115,
  [195] = 114,
  [196] = 196,
  [197] = 156,
  [198] = 173,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 113,
  [206] = 206,
  [207] = 170,
  [208] = 117,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 203,
  [213] = 116,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 155,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 219,
  [223] = 223,
  [224] = 215,
  [225] = 225,
  [226] = 226,
  [227] = 137,
  [228] = 228,
  [229] = 157,
  [230] = 163,
  [231] = 126,
  [232] = 217,
  [233] = 190,
  [234] = 234,
  [235] = 167,
  [236] = 219,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 158,
  [241] = 196,
  [242] = 203,
  [243] = 219,
  [244] = 203,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 168,
  [251] = 251,
  [252] = 252,
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
  [264] = 171,
  [265] = 265,
  [266] = 221,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 226,
  [274] = 188,
  [275] = 275,
  [276] = 252,
  [277] = 238,
  [278] = 278,
  [279] = 279,
  [280] = 248,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 246,
  [285] = 206,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 247,
  [294] = 255,
  [295] = 251,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 225,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 253,
  [310] = 310,
  [311] = 303,
  [312] = 290,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 314,
  [323] = 323,
  [324] = 320,
  [325] = 290,
  [326] = 326,
  [327] = 314,
  [328] = 319,
  [329] = 318,
  [330] = 330,
  [331] = 314,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 286,
  [336] = 336,
  [337] = 317,
  [338] = 310,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 281,
  [348] = 323,
  [349] = 339,
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
      if (eof) ADVANCE(115);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(155);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(47);
      if (lookahead == '{') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(155);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'm') ADVANCE(212);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == 't') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(231);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == 'v') ADVANCE(185);
      if (lookahead == '{') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(231);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == 't') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(231);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 't') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(231);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 't') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(231);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == 'v') ADVANCE(185);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(231);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '{') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(231);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == 's') ADVANCE(228);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(231);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(138);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == 'w') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(231);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(222);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(231);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(83);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 111:
      if (lookahead == 'y') ADVANCE(177);
      END_STATE();
    case 112:
      if (lookahead == '}') ADVANCE(181);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 114:
      if (eof) ADVANCE(115);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == ':') ADVANCE(146);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 'v') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(114)
      END_STATE();
    case 115:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_from);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_constants);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(161);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_mod);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(166);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '_') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_integer);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_real);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_string);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_array);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(203);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(231);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(230);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(231);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(204);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(231);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(217);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(231);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(226);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(231);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(152);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(160);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(234);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(236);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(199);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(214);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(133);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(186);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(219);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(137);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(176);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(195);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(202);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(208);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(205);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(224);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(174);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(193);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(143);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(187);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(198);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(227);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(225);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(206);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(188);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(220);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(194);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(154);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(229);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(135);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(201);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(172);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(141);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(183);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(211);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(221);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(190);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(150);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(130);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(191);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(218);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(189);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(178);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(231);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 114},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2, .external_lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 3},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0, .external_lex_state = 3},
  [40] = {.lex_state = 0, .external_lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 14, .external_lex_state = 4},
  [44] = {.lex_state = 14, .external_lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 43, .external_lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 43, .external_lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 43, .external_lex_state = 4},
  [55] = {.lex_state = 43, .external_lex_state = 4},
  [56] = {.lex_state = 43, .external_lex_state = 4},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 0, .external_lex_state = 3},
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
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 114},
  [88] = {.lex_state = 114},
  [89] = {.lex_state = 114},
  [90] = {.lex_state = 114},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 114},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 114, .external_lex_state = 3},
  [120] = {.lex_state = 114, .external_lex_state = 3},
  [121] = {.lex_state = 114},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 114},
  [125] = {.lex_state = 114},
  [126] = {.lex_state = 114},
  [127] = {.lex_state = 114},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 114},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 114},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 114},
  [136] = {.lex_state = 114},
  [137] = {.lex_state = 114},
  [138] = {.lex_state = 114},
  [139] = {.lex_state = 114},
  [140] = {.lex_state = 114},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 114},
  [143] = {.lex_state = 114},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 114},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 43, .external_lex_state = 4},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 43, .external_lex_state = 4},
  [151] = {.lex_state = 14, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 3},
  [155] = {.lex_state = 7, .external_lex_state = 2},
  [156] = {.lex_state = 7, .external_lex_state = 2},
  [157] = {.lex_state = 7, .external_lex_state = 2},
  [158] = {.lex_state = 7, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 114, .external_lex_state = 3},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 7, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 7, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 3},
  [173] = {.lex_state = 114},
  [174] = {.lex_state = 0, .external_lex_state = 3},
  [175] = {.lex_state = 0, .external_lex_state = 3},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0, .external_lex_state = 3},
  [178] = {.lex_state = 0, .external_lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 3},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 114},
  [191] = {.lex_state = 114},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 3},
  [195] = {.lex_state = 0, .external_lex_state = 3},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 114},
  [205] = {.lex_state = 114, .external_lex_state = 3},
  [206] = {.lex_state = 7, .external_lex_state = 2},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 0, .external_lex_state = 3},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 114},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0, .external_lex_state = 3},
  [214] = {.lex_state = 114},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 114},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 114},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 7, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 114, .external_lex_state = 3},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 7},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 114, .external_lex_state = 3},
  [232] = {.lex_state = 114},
  [233] = {.lex_state = 114},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 7},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 7},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 7},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 3},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 0, .external_lex_state = 3},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 7},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 7},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 0, .external_lex_state = 2},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0, .external_lex_state = 2},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 44},
  [274] = {.lex_state = 44},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 7},
  [277] = {.lex_state = 7},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 7},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 7},
  [283] = {.lex_state = 7},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 7},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 7},
  [289] = {.lex_state = 7},
  [290] = {.lex_state = 0, .external_lex_state = 2},
  [291] = {.lex_state = 7},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 7},
  [294] = {.lex_state = 7},
  [295] = {.lex_state = 7},
  [296] = {.lex_state = 0, .external_lex_state = 2},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 7},
  [300] = {.lex_state = 7},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 7},
  [303] = {.lex_state = 7},
  [304] = {.lex_state = 0, .external_lex_state = 2},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0, .external_lex_state = 2},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 7},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 7},
  [312] = {.lex_state = 0, .external_lex_state = 2},
  [313] = {.lex_state = 7},
  [314] = {.lex_state = 7},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 7},
  [321] = {.lex_state = 0, .external_lex_state = 3},
  [322] = {.lex_state = 7},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 7},
  [325] = {.lex_state = 0, .external_lex_state = 2},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 7},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 7},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 1},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 7},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 7},
  [340] = {.lex_state = 7},
  [341] = {.lex_state = 7},
  [342] = {.lex_state = 7},
  [343] = {.lex_state = 7},
  [344] = {.lex_state = 7},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0, .external_lex_state = 2},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 7},
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
    [sym_program] = STATE(330),
    [sym_enum] = STATE(90),
    [sym_record] = STATE(90),
    [sym_export] = STATE(90),
    [sym_import] = STATE(90),
    [sym_module] = STATE(89),
    [sym_function_definition] = STATE(90),
    [sym_variable] = STATE(90),
    [aux_sym_program_repeat1] = STATE(90),
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
  [72] = 5,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(37), 10,
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
  [107] = 2,
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
  [136] = 2,
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
    ACTIONS(45), 13,
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
  [165] = 17,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
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
    STATE(22), 1,
      sym_primary_expression,
    STATE(37), 1,
      sym_variable_access,
    STATE(153), 1,
      sym_expression,
    STATE(186), 1,
      sym_argument,
    ACTIONS(59), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(23), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(144), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [223] = 8,
    STATE(57), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(65), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(73), 2,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(67), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [262] = 5,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_DOT,
    STATE(9), 1,
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
  [295] = 5,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(39), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 16,
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
  [328] = 5,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_DOT,
    STATE(9), 1,
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
  [413] = 5,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(73), 2,
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
  [445] = 4,
    ACTIONS(71), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(73), 2,
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
  [475] = 2,
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
  [501] = 2,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 18,
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
  [527] = 2,
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
  [553] = 5,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
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
  [584] = 5,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
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
  [615] = 5,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(39), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 14,
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
  [646] = 7,
    ACTIONS(119), 1,
      anon_sym_SLASH,
    STATE(86), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(115), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(65), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [681] = 2,
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
  [705] = 2,
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
  [729] = 2,
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
  [753] = 2,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 16,
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
  [777] = 5,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(27), 1,
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
  [807] = 5,
    ACTIONS(119), 1,
      anon_sym_SLASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(117), 3,
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
  [837] = 4,
    ACTIONS(119), 1,
      anon_sym_SLASH,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 3,
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
  [865] = 2,
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
  [889] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(39), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 13,
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
  [919] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_DOT,
    STATE(27), 1,
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
  [949] = 2,
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
  [972] = 2,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 15,
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
  [995] = 12,
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
    STATE(22), 1,
      sym_primary_expression,
    STATE(37), 1,
      sym_variable_access,
    STATE(153), 1,
      sym_expression,
    STATE(202), 1,
      sym_argument,
    STATE(23), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(144), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1037] = 2,
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
  [1059] = 3,
    ACTIONS(89), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
    ACTIONS(87), 11,
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
  [1083] = 11,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(136), 1,
      anon_sym_and,
    ACTIONS(138), 1,
      anon_sym_or,
    STATE(22), 1,
      sym_primary_expression,
    STATE(152), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(23), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(144), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1123] = 2,
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
  [1145] = 2,
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
  [1167] = 7,
    ACTIONS(146), 1,
      anon_sym_SLASH,
    STATE(95), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(142), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(148), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(144), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(140), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1199] = 4,
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
  [1225] = 12,
    ACTIONS(157), 1,
      anon_sym_real,
    ACTIONS(160), 1,
      anon_sym_array,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(166), 1,
      sym__dedent,
    STATE(218), 1,
      sym__type_name,
    STATE(280), 1,
      sym__custom_type,
    STATE(288), 1,
      sym_type,
    STATE(293), 1,
      sym__custom_generic_instantiated_type,
    STATE(294), 1,
      sym__custom_generic_type,
    ACTIONS(154), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(43), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(284), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1266] = 12,
    ACTIONS(170), 1,
      anon_sym_real,
    ACTIONS(172), 1,
      anon_sym_array,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym__dedent,
    STATE(218), 1,
      sym__type_name,
    STATE(280), 1,
      sym__custom_type,
    STATE(288), 1,
      sym_type,
    STATE(293), 1,
      sym__custom_generic_instantiated_type,
    STATE(294), 1,
      sym__custom_generic_type,
    ACTIONS(168), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(43), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(284), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1307] = 2,
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
  [1328] = 7,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    STATE(100), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(180), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(182), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(150), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(178), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1359] = 11,
    ACTIONS(184), 1,
      anon_sym_repeat,
    ACTIONS(187), 1,
      anon_sym_while,
    ACTIONS(190), 1,
      anon_sym_if,
    ACTIONS(193), 1,
      anon_sym_for,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(199), 1,
      sym__dedent,
    STATE(47), 1,
      aux_sym_block_repeat1,
    STATE(134), 1,
      sym_if,
    STATE(211), 1,
      sym_statement,
    STATE(334), 1,
      sym_variable_access,
    STATE(263), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1398] = 4,
    ACTIONS(146), 1,
      anon_sym_SLASH,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(144), 3,
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
  [1423] = 2,
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
  [1444] = 5,
    STATE(50), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(204), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(208), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(206), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [1471] = 2,
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
  [1492] = 11,
    ACTIONS(211), 1,
      anon_sym_repeat,
    ACTIONS(213), 1,
      anon_sym_while,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      anon_sym_for,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      sym__dedent,
    STATE(56), 1,
      aux_sym_block_repeat1,
    STATE(134), 1,
      sym_if,
    STATE(211), 1,
      sym_statement,
    STATE(334), 1,
      sym_variable_access,
    STATE(263), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1531] = 5,
    ACTIONS(146), 1,
      anon_sym_SLASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(142), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(144), 3,
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
  [1558] = 11,
    ACTIONS(211), 1,
      anon_sym_repeat,
    ACTIONS(213), 1,
      anon_sym_while,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      anon_sym_for,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(223), 1,
      sym__dedent,
    STATE(55), 1,
      aux_sym_block_repeat1,
    STATE(134), 1,
      sym_if,
    STATE(211), 1,
      sym_statement,
    STATE(334), 1,
      sym_variable_access,
    STATE(263), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1597] = 11,
    ACTIONS(211), 1,
      anon_sym_repeat,
    ACTIONS(213), 1,
      anon_sym_while,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      anon_sym_for,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(225), 1,
      sym__dedent,
    STATE(47), 1,
      aux_sym_block_repeat1,
    STATE(134), 1,
      sym_if,
    STATE(211), 1,
      sym_statement,
    STATE(334), 1,
      sym_variable_access,
    STATE(263), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1636] = 11,
    ACTIONS(211), 1,
      anon_sym_repeat,
    ACTIONS(213), 1,
      anon_sym_while,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      anon_sym_for,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(227), 1,
      sym__dedent,
    STATE(47), 1,
      aux_sym_block_repeat1,
    STATE(134), 1,
      sym_if,
    STATE(211), 1,
      sym_statement,
    STATE(334), 1,
      sym_variable_access,
    STATE(263), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1675] = 5,
    STATE(50), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(229), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(63), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(231), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [1702] = 9,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_not,
    ACTIONS(239), 1,
      sym_float,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expression,
    STATE(116), 1,
      sym_expression,
    ACTIONS(237), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(117), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1736] = 9,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_not,
    ACTIONS(249), 1,
      sym_float,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(41), 1,
      sym_primary_expression,
    STATE(219), 1,
      sym_expression,
    ACTIONS(247), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1770] = 11,
    ACTIONS(170), 1,
      anon_sym_real,
    ACTIONS(172), 1,
      anon_sym_array,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(218), 1,
      sym__type_name,
    STATE(280), 1,
      sym__custom_type,
    STATE(288), 1,
      sym_type,
    STATE(293), 1,
      sym__custom_generic_instantiated_type,
    STATE(294), 1,
      sym__custom_generic_type,
    ACTIONS(168), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(44), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(284), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1808] = 9,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_not,
    ACTIONS(239), 1,
      sym_float,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expression,
    STATE(38), 1,
      sym_expression,
    ACTIONS(237), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(117), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1842] = 9,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_not,
    ACTIONS(259), 1,
      sym_float,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(46), 1,
      sym_primary_expression,
    STATE(174), 1,
      sym_expression,
    ACTIONS(257), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(208), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1876] = 9,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(22), 1,
      sym_primary_expression,
    STATE(146), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(23), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(144), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1910] = 9,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_not,
    ACTIONS(249), 1,
      sym_float,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(41), 1,
      sym_primary_expression,
    STATE(187), 1,
      sym_expression,
    ACTIONS(247), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1944] = 9,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_not,
    ACTIONS(239), 1,
      sym_float,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expression,
    STATE(114), 1,
      sym_expression,
    ACTIONS(237), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(117), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1978] = 9,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_not,
    ACTIONS(259), 1,
      sym_float,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(46), 1,
      sym_primary_expression,
    STATE(172), 1,
      sym_expression,
    ACTIONS(257), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(208), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2012] = 5,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 2,
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
  [2038] = 9,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_not,
    ACTIONS(249), 1,
      sym_float,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(41), 1,
      sym_primary_expression,
    STATE(222), 1,
      sym_expression,
    ACTIONS(247), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2072] = 9,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_not,
    ACTIONS(249), 1,
      sym_float,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(41), 1,
      sym_primary_expression,
    STATE(236), 1,
      sym_expression,
    ACTIONS(247), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2106] = 9,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_not,
    ACTIONS(259), 1,
      sym_float,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(46), 1,
      sym_primary_expression,
    STATE(213), 1,
      sym_expression,
    ACTIONS(257), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(208), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2140] = 9,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_not,
    ACTIONS(249), 1,
      sym_float,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(41), 1,
      sym_primary_expression,
    STATE(212), 1,
      sym_expression,
    ACTIONS(247), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2174] = 9,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_not,
    ACTIONS(249), 1,
      sym_float,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(41), 1,
      sym_primary_expression,
    STATE(242), 1,
      sym_expression,
    ACTIONS(247), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2208] = 9,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_not,
    ACTIONS(249), 1,
      sym_float,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(41), 1,
      sym_primary_expression,
    STATE(243), 1,
      sym_expression,
    ACTIONS(247), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2242] = 9,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_not,
    ACTIONS(249), 1,
      sym_float,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(41), 1,
      sym_primary_expression,
    STATE(182), 1,
      sym_expression,
    ACTIONS(247), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2276] = 9,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_not,
    ACTIONS(259), 1,
      sym_float,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(46), 1,
      sym_primary_expression,
    STATE(195), 1,
      sym_expression,
    ACTIONS(257), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(208), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2310] = 9,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_not,
    ACTIONS(259), 1,
      sym_float,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(46), 1,
      sym_primary_expression,
    STATE(194), 1,
      sym_expression,
    ACTIONS(257), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(208), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2344] = 9,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(22), 1,
      sym_primary_expression,
    STATE(129), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(23), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(144), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2378] = 9,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(22), 1,
      sym_primary_expression,
    STATE(161), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(23), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(144), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2412] = 9,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_not,
    ACTIONS(259), 1,
      sym_float,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(46), 1,
      sym_primary_expression,
    STATE(184), 1,
      sym_expression,
    ACTIONS(257), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(208), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2446] = 9,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(22), 1,
      sym_primary_expression,
    STATE(123), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(23), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(144), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2480] = 9,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_not,
    ACTIONS(249), 1,
      sym_float,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(41), 1,
      sym_primary_expression,
    STATE(244), 1,
      sym_expression,
    ACTIONS(247), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2514] = 9,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_not,
    ACTIONS(239), 1,
      sym_float,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expression,
    STATE(115), 1,
      sym_expression,
    ACTIONS(237), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(117), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2548] = 9,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_not,
    ACTIONS(249), 1,
      sym_float,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(41), 1,
      sym_primary_expression,
    STATE(203), 1,
      sym_expression,
    ACTIONS(247), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2582] = 9,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_not,
    ACTIONS(249), 1,
      sym_float,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(41), 1,
      sym_primary_expression,
    STATE(185), 1,
      sym_expression,
    ACTIONS(247), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2616] = 4,
    STATE(85), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(266), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(263), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(204), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [2639] = 4,
    STATE(85), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [2662] = 8,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 1,
      anon_sym_enum,
    ACTIONS(274), 1,
      anon_sym_record,
    ACTIONS(277), 1,
      anon_sym_export,
    ACTIONS(280), 1,
      anon_sym_import,
    ACTIONS(283), 1,
      anon_sym_define,
    ACTIONS(286), 1,
      anon_sym_variables,
    STATE(87), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2693] = 8,
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
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    STATE(87), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2724] = 8,
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
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    STATE(88), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2755] = 8,
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
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    STATE(87), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2786] = 10,
    ACTIONS(295), 1,
      anon_sym_real,
    ACTIONS(297), 1,
      anon_sym_array,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(155), 1,
      sym__type_name,
    STATE(216), 1,
      sym_type,
    STATE(247), 1,
      sym__custom_generic_instantiated_type,
    STATE(248), 1,
      sym__custom_type,
    STATE(255), 1,
      sym__custom_generic_type,
    ACTIONS(293), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(246), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2820] = 10,
    ACTIONS(295), 1,
      anon_sym_real,
    ACTIONS(297), 1,
      anon_sym_array,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(155), 1,
      sym__type_name,
    STATE(223), 1,
      sym_type,
    STATE(247), 1,
      sym__custom_generic_instantiated_type,
    STATE(248), 1,
      sym__custom_type,
    STATE(255), 1,
      sym__custom_generic_type,
    ACTIONS(293), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(246), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2854] = 10,
    ACTIONS(295), 1,
      anon_sym_real,
    ACTIONS(297), 1,
      anon_sym_array,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(155), 1,
      sym__type_name,
    STATE(228), 1,
      sym_type,
    STATE(247), 1,
      sym__custom_generic_instantiated_type,
    STATE(248), 1,
      sym__custom_type,
    STATE(255), 1,
      sym__custom_generic_type,
    ACTIONS(293), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(246), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2888] = 4,
    STATE(94), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(304), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(204), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(301), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2908] = 4,
    STATE(94), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(148), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(140), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [2928] = 6,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_float,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(40), 1,
      sym_primary_expression,
    ACTIONS(257), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2951] = 6,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_float,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(48), 1,
      sym_primary_expression,
    ACTIONS(247), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2974] = 6,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_float,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(67), 1,
      sym_primary_expression,
    ACTIONS(257), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2997] = 6,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_float,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(105), 1,
      sym_primary_expression,
    ACTIONS(257), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3020] = 4,
    STATE(107), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(182), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(229), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(178), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3039] = 6,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(30), 1,
      sym_primary_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(23), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3062] = 6,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_float,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(14), 1,
      sym_primary_expression,
    ACTIONS(237), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3085] = 6,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(29), 1,
      sym_primary_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(23), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3108] = 6,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(28), 1,
      sym_primary_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(23), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3131] = 6,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_constant_repeat1,
    ACTIONS(180), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(309), 2,
      sym__indent,
      anon_sym_constants,
    ACTIONS(150), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
  [3154] = 6,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_float,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(42), 1,
      sym_primary_expression,
    ACTIONS(257), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3177] = 4,
    STATE(107), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(314), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(204), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(311), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3196] = 6,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_float,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(51), 1,
      sym_primary_expression,
    ACTIONS(247), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3219] = 6,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_float,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(16), 1,
      sym_primary_expression,
    ACTIONS(237), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3242] = 6,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_float,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(53), 1,
      sym_primary_expression,
    ACTIONS(247), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(45), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3265] = 6,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_float,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(118), 1,
      sym_primary_expression,
    ACTIONS(257), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(39), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3288] = 6,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_float,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(15), 1,
      sym_primary_expression,
    ACTIONS(237), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3311] = 1,
    ACTIONS(317), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_variables,
  [3323] = 3,
    ACTIONS(136), 1,
      anon_sym_and,
    ACTIONS(319), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(321), 6,
      anon_sym_not,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3339] = 2,
    ACTIONS(319), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(321), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3353] = 2,
    ACTIONS(323), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(325), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3367] = 2,
    ACTIONS(65), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(67), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3381] = 4,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(180), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(150), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(327), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [3399] = 6,
    ACTIONS(329), 1,
      anon_sym_constants,
    ACTIONS(331), 1,
      anon_sym_variables,
    ACTIONS(333), 1,
      sym__indent,
    STATE(140), 1,
      sym_block,
    STATE(159), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
    STATE(160), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [3420] = 6,
    ACTIONS(329), 1,
      anon_sym_constants,
    ACTIONS(331), 1,
      anon_sym_variables,
    ACTIONS(333), 1,
      sym__indent,
    STATE(143), 1,
      sym_block,
    STATE(119), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(154), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3441] = 1,
    ACTIONS(335), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3451] = 5,
    ACTIONS(339), 1,
      anon_sym_real,
    ACTIONS(341), 1,
      anon_sym_array,
    STATE(196), 1,
      sym_declaration_type,
    ACTIONS(337), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(249), 2,
      sym_basis_type,
      sym_delclaration_array_type,
  [3469] = 2,
    ACTIONS(343), 1,
      anon_sym_and,
    ACTIONS(319), 6,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_or,
      aux_sym_comment_token1,
  [3481] = 1,
    ACTIONS(345), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3491] = 1,
    ACTIONS(347), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3501] = 1,
    ACTIONS(349), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3511] = 1,
    ACTIONS(351), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3521] = 5,
    ACTIONS(339), 1,
      anon_sym_real,
    ACTIONS(341), 1,
      anon_sym_array,
    STATE(215), 1,
      sym_declaration_type,
    ACTIONS(337), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(249), 2,
      sym_basis_type,
      sym_delclaration_array_type,
  [3539] = 1,
    ACTIONS(319), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3549] = 1,
    ACTIONS(353), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3559] = 5,
    ACTIONS(339), 1,
      anon_sym_real,
    ACTIONS(341), 1,
      anon_sym_array,
    STATE(241), 1,
      sym_declaration_type,
    ACTIONS(337), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(249), 2,
      sym_basis_type,
      sym_delclaration_array_type,
  [3577] = 1,
    ACTIONS(355), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3587] = 5,
    ACTIONS(357), 1,
      anon_sym_elsif,
    ACTIONS(359), 1,
      anon_sym_else,
    STATE(269), 1,
      sym_else,
    ACTIONS(361), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(147), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [3605] = 5,
    ACTIONS(357), 1,
      anon_sym_elsif,
    ACTIONS(359), 1,
      anon_sym_else,
    STATE(256), 1,
      sym_else,
    ACTIONS(363), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(133), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [3623] = 1,
    ACTIONS(365), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3633] = 1,
    ACTIONS(367), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3643] = 1,
    ACTIONS(369), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3653] = 1,
    ACTIONS(371), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3663] = 1,
    ACTIONS(373), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3673] = 1,
    ACTIONS(375), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3683] = 5,
    ACTIONS(339), 1,
      anon_sym_real,
    ACTIONS(341), 1,
      anon_sym_array,
    STATE(224), 1,
      sym_declaration_type,
    ACTIONS(337), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(249), 2,
      sym_basis_type,
      sym_delclaration_array_type,
  [3701] = 1,
    ACTIONS(377), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3711] = 1,
    ACTIONS(379), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3721] = 1,
    ACTIONS(65), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3731] = 1,
    ACTIONS(381), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3741] = 1,
    ACTIONS(323), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3751] = 3,
    ACTIONS(383), 1,
      anon_sym_elsif,
    STATE(147), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
    ACTIONS(386), 3,
      sym__newline,
      anon_sym_else,
      aux_sym_comment_token1,
  [3764] = 2,
    ACTIONS(199), 1,
      sym__dedent,
    ACTIONS(388), 5,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [3775] = 6,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    ACTIONS(392), 1,
      anon_sym_var,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(245), 1,
      sym_parameter,
    STATE(291), 1,
      sym_var,
    STATE(292), 1,
      sym__parameters,
  [3794] = 2,
    ACTIONS(317), 1,
      sym__dedent,
    ACTIONS(396), 5,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [3805] = 2,
    ACTIONS(400), 1,
      sym__dedent,
    ACTIONS(398), 5,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
      sym_identifier,
  [3816] = 3,
    ACTIONS(343), 1,
      anon_sym_and,
    ACTIONS(404), 1,
      anon_sym_or,
    ACTIONS(402), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [3829] = 3,
    ACTIONS(343), 1,
      anon_sym_and,
    ACTIONS(404), 1,
      anon_sym_or,
    ACTIONS(406), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [3841] = 4,
    ACTIONS(329), 1,
      anon_sym_constants,
    ACTIONS(333), 1,
      sym__indent,
    STATE(125), 1,
      sym_block,
    STATE(178), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3855] = 4,
    ACTIONS(410), 1,
      sym_identifier,
    STATE(156), 1,
      sym__generic,
    STATE(225), 1,
      sym__generics,
    ACTIONS(408), 2,
      sym__newline,
      aux_sym_comment_token1,
  [3869] = 3,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym__generics_repeat1,
    ACTIONS(414), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [3881] = 3,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym__generics_repeat1,
    ACTIONS(416), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [3893] = 3,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym__generics_repeat1,
    ACTIONS(421), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [3905] = 4,
    ACTIONS(329), 1,
      anon_sym_constants,
    ACTIONS(333), 1,
      sym__indent,
    STATE(124), 1,
      sym_block,
    STATE(178), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3919] = 3,
    ACTIONS(425), 1,
      anon_sym_variables,
    ACTIONS(423), 2,
      sym__indent,
      anon_sym_constants,
    STATE(160), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [3931] = 3,
    ACTIONS(343), 1,
      anon_sym_and,
    ACTIONS(404), 1,
      anon_sym_or,
    ACTIONS(428), 2,
      sym__newline,
      aux_sym_comment_token1,
  [3942] = 1,
    ACTIONS(430), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [3949] = 3,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(435), 2,
      sym__newline,
      aux_sym_comment_token1,
  [3960] = 1,
    ACTIONS(355), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [3967] = 4,
    ACTIONS(392), 1,
      anon_sym_var,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(265), 1,
      sym_parameter,
    STATE(291), 1,
      sym_var,
  [3980] = 1,
    ACTIONS(65), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [3987] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(439), 2,
      sym__newline,
      aux_sym_comment_token1,
  [3998] = 1,
    ACTIONS(441), 4,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
      sym_identifier,
  [4005] = 1,
    ACTIONS(377), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [4012] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(443), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4023] = 1,
    ACTIONS(445), 4,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
      sym_identifier,
  [4030] = 4,
    ACTIONS(447), 1,
      anon_sym_and,
    ACTIONS(449), 1,
      anon_sym_or,
    ACTIONS(451), 1,
      sym__indent,
    STATE(267), 1,
      sym_block,
  [4043] = 3,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_enum_repeat1,
    ACTIONS(456), 2,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4054] = 4,
    ACTIONS(447), 1,
      anon_sym_and,
    ACTIONS(449), 1,
      anon_sym_or,
    ACTIONS(451), 1,
      sym__indent,
    STATE(271), 1,
      sym_block,
  [4067] = 3,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_constant_repeat1,
    ACTIONS(461), 2,
      sym__indent,
      anon_sym_constants,
  [4078] = 1,
    ACTIONS(463), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4085] = 3,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_constant_repeat1,
    ACTIONS(465), 2,
      sym__indent,
      anon_sym_constants,
  [4096] = 3,
    ACTIONS(467), 1,
      anon_sym_constants,
    ACTIONS(470), 1,
      sym__indent,
    STATE(178), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4107] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(475), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4118] = 1,
    ACTIONS(477), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4125] = 1,
    ACTIONS(479), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4132] = 2,
    ACTIONS(481), 1,
      anon_sym_and,
    ACTIONS(319), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_or,
  [4141] = 3,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(485), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4152] = 4,
    ACTIONS(447), 1,
      anon_sym_and,
    ACTIONS(449), 1,
      anon_sym_or,
    ACTIONS(451), 1,
      sym__indent,
    STATE(162), 1,
      sym_block,
  [4165] = 1,
    ACTIONS(319), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [4172] = 3,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(487), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4183] = 1,
    ACTIONS(323), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [4190] = 2,
    ACTIONS(489), 1,
      anon_sym_from,
    ACTIONS(491), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4198] = 3,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      sym__newline,
    STATE(193), 1,
      aux_sym_enum_repeat1,
  [4208] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_COLON,
    STATE(217), 1,
      aux_sym_enum_repeat1,
  [4218] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_COLON,
    STATE(173), 1,
      aux_sym_enum_repeat1,
  [4228] = 3,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      aux_sym__parameters_repeat1,
  [4238] = 3,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      sym__newline,
    STATE(198), 1,
      aux_sym_enum_repeat1,
  [4248] = 1,
    ACTIONS(319), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4254] = 2,
    ACTIONS(447), 1,
      anon_sym_and,
    ACTIONS(319), 2,
      sym__indent,
      anon_sym_or,
  [4262] = 3,
    ACTIONS(510), 1,
      aux_sym_comment_token1,
    ACTIONS(512), 1,
      sym__newline,
    STATE(227), 1,
      sym_comment,
  [4272] = 3,
    ACTIONS(414), 1,
      sym_identifier,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym__generics_repeat1,
  [4282] = 3,
    ACTIONS(456), 1,
      sym__newline,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_enum_repeat1,
  [4292] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
    STATE(200), 1,
      aux_sym_enum_repeat1,
  [4302] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      aux_sym_enum_repeat1,
  [4312] = 1,
    ACTIONS(523), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4318] = 1,
    ACTIONS(475), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4324] = 3,
    ACTIONS(481), 1,
      anon_sym_and,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
    ACTIONS(527), 1,
      anon_sym_or,
  [4334] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_COLON,
    STATE(173), 1,
      aux_sym_enum_repeat1,
  [4344] = 1,
    ACTIONS(317), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4350] = 1,
    ACTIONS(531), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4356] = 3,
    ACTIONS(443), 1,
      sym_identifier,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
  [4366] = 1,
    ACTIONS(65), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4372] = 3,
    ACTIONS(535), 1,
      anon_sym_LBRACK,
    ACTIONS(537), 1,
      sym__newline,
    STATE(296), 1,
      sym__multiple_import,
  [4382] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_COLON,
    STATE(191), 1,
      aux_sym_enum_repeat1,
  [4392] = 3,
    ACTIONS(539), 1,
      aux_sym_comment_token1,
    ACTIONS(541), 1,
      sym__newline,
    STATE(148), 1,
      sym_comment,
  [4402] = 3,
    ACTIONS(481), 1,
      anon_sym_and,
    ACTIONS(527), 1,
      anon_sym_or,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
  [4412] = 1,
    ACTIONS(323), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4418] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      anon_sym_COLON,
    STATE(204), 1,
      aux_sym_enum_repeat1,
  [4428] = 3,
    ACTIONS(547), 1,
      aux_sym_comment_token1,
    ACTIONS(549), 1,
      sym__newline,
    STATE(126), 1,
      sym_comment,
  [4438] = 3,
    ACTIONS(547), 1,
      aux_sym_comment_token1,
    ACTIONS(551), 1,
      sym__newline,
    STATE(254), 1,
      sym_comment,
  [4448] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_COLON,
    STATE(173), 1,
      aux_sym_enum_repeat1,
  [4458] = 3,
    ACTIONS(555), 1,
      sym_identifier,
    STATE(197), 1,
      sym__generic,
    STATE(302), 1,
      sym__generics,
  [4468] = 3,
    ACTIONS(481), 1,
      anon_sym_and,
    ACTIONS(527), 1,
      anon_sym_or,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
  [4478] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      aux_sym_enum_repeat1,
  [4488] = 1,
    ACTIONS(456), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4494] = 3,
    ACTIONS(481), 1,
      anon_sym_and,
    ACTIONS(527), 1,
      anon_sym_or,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
  [4504] = 3,
    ACTIONS(547), 1,
      aux_sym_comment_token1,
    ACTIONS(564), 1,
      sym__newline,
    STATE(268), 1,
      sym_comment,
  [4514] = 3,
    ACTIONS(510), 1,
      aux_sym_comment_token1,
    ACTIONS(566), 1,
      sym__newline,
    STATE(231), 1,
      sym_comment,
  [4524] = 2,
    ACTIONS(570), 1,
      sym_identifier,
    ACTIONS(568), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4532] = 2,
    ACTIONS(572), 1,
      anon_sym_from,
    ACTIONS(491), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4540] = 1,
    ACTIONS(369), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4546] = 3,
    ACTIONS(547), 1,
      aux_sym_comment_token1,
    ACTIONS(574), 1,
      sym__newline,
    STATE(275), 1,
      sym_comment,
  [4556] = 3,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__generics_repeat1,
  [4566] = 3,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
  [4576] = 1,
    ACTIONS(349), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4582] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(579), 1,
      anon_sym_COLON,
    STATE(173), 1,
      aux_sym_enum_repeat1,
  [4592] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_COLON,
    STATE(232), 1,
      aux_sym_enum_repeat1,
  [4602] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_RBRACK,
    STATE(220), 1,
      aux_sym_enum_repeat1,
  [4612] = 3,
    ACTIONS(439), 1,
      sym_identifier,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
  [4622] = 3,
    ACTIONS(481), 1,
      anon_sym_and,
    ACTIONS(527), 1,
      anon_sym_or,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
  [4632] = 3,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      aux_sym__parameters_repeat1,
  [4642] = 1,
    ACTIONS(591), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4648] = 3,
    ACTIONS(510), 1,
      aux_sym_comment_token1,
    ACTIONS(593), 1,
      sym__newline,
    STATE(120), 1,
      sym_comment,
  [4658] = 3,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__generics_repeat1,
  [4668] = 3,
    ACTIONS(547), 1,
      aux_sym_comment_token1,
    ACTIONS(598), 1,
      sym__newline,
    STATE(137), 1,
      sym_comment,
  [4678] = 3,
    ACTIONS(481), 1,
      anon_sym_and,
    ACTIONS(527), 1,
      anon_sym_or,
    ACTIONS(600), 1,
      anon_sym_RBRACK,
  [4688] = 3,
    ACTIONS(481), 1,
      anon_sym_and,
    ACTIONS(527), 1,
      anon_sym_or,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
  [4698] = 3,
    ACTIONS(481), 1,
      anon_sym_and,
    ACTIONS(527), 1,
      anon_sym_or,
    ACTIONS(604), 1,
      anon_sym_RBRACK,
  [4708] = 3,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym__parameters_repeat1,
  [4718] = 1,
    ACTIONS(608), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4723] = 1,
    ACTIONS(610), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4728] = 1,
    ACTIONS(612), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4733] = 1,
    ACTIONS(614), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4738] = 1,
    ACTIONS(441), 2,
      anon_sym_COMMA,
      sym_identifier,
  [4743] = 1,
    ACTIONS(616), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4748] = 2,
    ACTIONS(410), 1,
      sym_identifier,
    STATE(168), 1,
      sym__generic,
  [4755] = 1,
    ACTIONS(618), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4760] = 1,
    ACTIONS(620), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4765] = 1,
    ACTIONS(622), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4770] = 1,
    ACTIONS(361), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4775] = 2,
    ACTIONS(451), 1,
      sym__indent,
    STATE(270), 1,
      sym_block,
  [4782] = 1,
    ACTIONS(624), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4787] = 1,
    ACTIONS(626), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4792] = 2,
    ACTIONS(451), 1,
      sym__indent,
    STATE(259), 1,
      sym_block,
  [4799] = 1,
    ACTIONS(628), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4804] = 2,
    ACTIONS(630), 1,
      sym_identifier,
    STATE(201), 1,
      sym_variable_access,
  [4811] = 1,
    ACTIONS(632), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4816] = 1,
    ACTIONS(445), 2,
      anon_sym_COMMA,
      sym_identifier,
  [4821] = 1,
    ACTIONS(506), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4826] = 1,
    ACTIONS(456), 2,
      sym__newline,
      anon_sym_COMMA,
  [4831] = 1,
    ACTIONS(634), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4836] = 1,
    ACTIONS(636), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4841] = 1,
    ACTIONS(638), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4846] = 1,
    ACTIONS(640), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4851] = 1,
    ACTIONS(642), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4856] = 1,
    ACTIONS(644), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4861] = 2,
    ACTIONS(646), 1,
      anon_sym_from,
    ACTIONS(648), 1,
      sym_identifier,
  [4868] = 2,
    ACTIONS(648), 1,
      sym_identifier,
    ACTIONS(650), 1,
      anon_sym_from,
  [4875] = 1,
    ACTIONS(652), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4880] = 2,
    ACTIONS(654), 1,
      sym_identifier,
    STATE(250), 1,
      sym__generic,
  [4887] = 1,
    ACTIONS(591), 2,
      anon_sym_COMMA,
      sym_identifier,
  [4892] = 2,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    STATE(239), 1,
      sym_parameters,
  [4899] = 1,
    ACTIONS(658), 1,
      sym_integer,
  [4903] = 1,
    ACTIONS(612), 1,
      sym_identifier,
  [4907] = 1,
    ACTIONS(660), 1,
      sym_integer,
  [4911] = 1,
    ACTIONS(662), 1,
      sym_identifier,
  [4915] = 1,
    ACTIONS(664), 1,
      sym_identifier,
  [4919] = 1,
    ACTIONS(608), 1,
      sym_identifier,
  [4923] = 1,
    ACTIONS(531), 1,
      sym_identifier,
  [4927] = 1,
    ACTIONS(666), 1,
      anon_sym_of,
  [4931] = 1,
    ACTIONS(668), 1,
      anon_sym_from,
  [4935] = 1,
    ACTIONS(670), 1,
      sym_identifier,
  [4939] = 1,
    ACTIONS(672), 1,
      sym_identifier,
  [4943] = 1,
    ACTIONS(674), 1,
      sym__newline,
  [4947] = 1,
    ACTIONS(676), 1,
      sym_identifier,
  [4951] = 1,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
  [4955] = 1,
    ACTIONS(610), 1,
      sym_identifier,
  [4959] = 1,
    ACTIONS(622), 1,
      sym_identifier,
  [4963] = 1,
    ACTIONS(616), 1,
      sym_identifier,
  [4967] = 1,
    ACTIONS(680), 1,
      sym__newline,
  [4971] = 1,
    ACTIONS(682), 1,
      anon_sym_EQ,
  [4975] = 1,
    ACTIONS(684), 1,
      sym_integer,
  [4979] = 1,
    ACTIONS(686), 1,
      sym_identifier,
  [4983] = 1,
    ACTIONS(688), 1,
      sym_identifier,
  [4987] = 1,
    ACTIONS(690), 1,
      anon_sym_to,
  [4991] = 1,
    ACTIONS(692), 1,
      sym_identifier,
  [4995] = 1,
    ACTIONS(695), 1,
      sym_identifier,
  [4999] = 1,
    ACTIONS(697), 1,
      sym__newline,
  [5003] = 1,
    ACTIONS(699), 1,
      anon_sym_of,
  [5007] = 1,
    ACTIONS(701), 1,
      sym__newline,
  [5011] = 1,
    ACTIONS(703), 1,
      anon_sym_LBRACK,
  [5015] = 1,
    ACTIONS(705), 1,
      sym_integer,
  [5019] = 1,
    ACTIONS(618), 1,
      sym_identifier,
  [5023] = 1,
    ACTIONS(707), 1,
      anon_sym_to,
  [5027] = 1,
    ACTIONS(709), 1,
      sym_identifier,
  [5031] = 1,
    ACTIONS(711), 1,
      sym__newline,
  [5035] = 1,
    ACTIONS(713), 1,
      sym_identifier,
  [5039] = 1,
    ACTIONS(715), 1,
      sym_identifier,
  [5043] = 1,
    ACTIONS(717), 1,
      anon_sym_from,
  [5047] = 1,
    ACTIONS(719), 1,
      sym_integer,
  [5051] = 1,
    ACTIONS(721), 1,
      anon_sym_to,
  [5055] = 1,
    ACTIONS(723), 1,
      sym_integer,
  [5059] = 1,
    ACTIONS(723), 1,
      sym_float,
  [5063] = 1,
    ACTIONS(725), 1,
      sym_identifier,
  [5067] = 1,
    ACTIONS(727), 1,
      sym__indent,
  [5071] = 1,
    ACTIONS(729), 1,
      sym_identifier,
  [5075] = 1,
    ACTIONS(731), 1,
      sym_float,
  [5079] = 1,
    ACTIONS(733), 1,
      sym_identifier,
  [5083] = 1,
    ACTIONS(735), 1,
      sym__newline,
  [5087] = 1,
    ACTIONS(737), 1,
      anon_sym_EQ,
  [5091] = 1,
    ACTIONS(739), 1,
      sym_identifier,
  [5095] = 1,
    ACTIONS(741), 1,
      sym_float,
  [5099] = 1,
    ACTIONS(741), 1,
      sym_integer,
  [5103] = 1,
    ACTIONS(743), 1,
      ts_builtin_sym_end,
  [5107] = 1,
    ACTIONS(745), 1,
      sym_identifier,
  [5111] = 1,
    ACTIONS(747), 1,
      anon_sym_to,
  [5115] = 1,
    ACTIONS(749), 1,
      anon_sym_EQ,
  [5119] = 1,
    ACTIONS(751), 1,
      anon_sym_COLON_EQ,
  [5123] = 1,
    ACTIONS(753), 1,
      anon_sym_of,
  [5127] = 1,
    ACTIONS(755), 1,
      sym_identifier,
  [5131] = 1,
    ACTIONS(757), 1,
      anon_sym_to,
  [5135] = 1,
    ACTIONS(759), 1,
      anon_sym_to,
  [5139] = 1,
    ACTIONS(761), 1,
      sym_identifier,
  [5143] = 1,
    ACTIONS(763), 1,
      sym_identifier,
  [5147] = 1,
    ACTIONS(765), 1,
      sym_identifier,
  [5151] = 1,
    ACTIONS(767), 1,
      sym_identifier,
  [5155] = 1,
    ACTIONS(769), 1,
      sym_identifier,
  [5159] = 1,
    ACTIONS(771), 1,
      sym_identifier,
  [5163] = 1,
    ACTIONS(773), 1,
      anon_sym_until,
  [5167] = 1,
    ACTIONS(775), 1,
      sym__newline,
  [5171] = 1,
    ACTIONS(777), 1,
      sym_integer,
  [5175] = 1,
    ACTIONS(779), 1,
      sym_float,
  [5179] = 1,
    ACTIONS(781), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 107,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 262,
  [SMALL_STATE(10)] = 295,
  [SMALL_STATE(11)] = 328,
  [SMALL_STATE(12)] = 361,
  [SMALL_STATE(13)] = 387,
  [SMALL_STATE(14)] = 413,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 475,
  [SMALL_STATE(17)] = 501,
  [SMALL_STATE(18)] = 527,
  [SMALL_STATE(19)] = 553,
  [SMALL_STATE(20)] = 584,
  [SMALL_STATE(21)] = 615,
  [SMALL_STATE(22)] = 646,
  [SMALL_STATE(23)] = 681,
  [SMALL_STATE(24)] = 705,
  [SMALL_STATE(25)] = 729,
  [SMALL_STATE(26)] = 753,
  [SMALL_STATE(27)] = 777,
  [SMALL_STATE(28)] = 807,
  [SMALL_STATE(29)] = 837,
  [SMALL_STATE(30)] = 865,
  [SMALL_STATE(31)] = 889,
  [SMALL_STATE(32)] = 919,
  [SMALL_STATE(33)] = 949,
  [SMALL_STATE(34)] = 972,
  [SMALL_STATE(35)] = 995,
  [SMALL_STATE(36)] = 1037,
  [SMALL_STATE(37)] = 1059,
  [SMALL_STATE(38)] = 1083,
  [SMALL_STATE(39)] = 1123,
  [SMALL_STATE(40)] = 1145,
  [SMALL_STATE(41)] = 1167,
  [SMALL_STATE(42)] = 1199,
  [SMALL_STATE(43)] = 1225,
  [SMALL_STATE(44)] = 1266,
  [SMALL_STATE(45)] = 1307,
  [SMALL_STATE(46)] = 1328,
  [SMALL_STATE(47)] = 1359,
  [SMALL_STATE(48)] = 1398,
  [SMALL_STATE(49)] = 1423,
  [SMALL_STATE(50)] = 1444,
  [SMALL_STATE(51)] = 1471,
  [SMALL_STATE(52)] = 1492,
  [SMALL_STATE(53)] = 1531,
  [SMALL_STATE(54)] = 1558,
  [SMALL_STATE(55)] = 1597,
  [SMALL_STATE(56)] = 1636,
  [SMALL_STATE(57)] = 1675,
  [SMALL_STATE(58)] = 1702,
  [SMALL_STATE(59)] = 1736,
  [SMALL_STATE(60)] = 1770,
  [SMALL_STATE(61)] = 1808,
  [SMALL_STATE(62)] = 1842,
  [SMALL_STATE(63)] = 1876,
  [SMALL_STATE(64)] = 1910,
  [SMALL_STATE(65)] = 1944,
  [SMALL_STATE(66)] = 1978,
  [SMALL_STATE(67)] = 2012,
  [SMALL_STATE(68)] = 2038,
  [SMALL_STATE(69)] = 2072,
  [SMALL_STATE(70)] = 2106,
  [SMALL_STATE(71)] = 2140,
  [SMALL_STATE(72)] = 2174,
  [SMALL_STATE(73)] = 2208,
  [SMALL_STATE(74)] = 2242,
  [SMALL_STATE(75)] = 2276,
  [SMALL_STATE(76)] = 2310,
  [SMALL_STATE(77)] = 2344,
  [SMALL_STATE(78)] = 2378,
  [SMALL_STATE(79)] = 2412,
  [SMALL_STATE(80)] = 2446,
  [SMALL_STATE(81)] = 2480,
  [SMALL_STATE(82)] = 2514,
  [SMALL_STATE(83)] = 2548,
  [SMALL_STATE(84)] = 2582,
  [SMALL_STATE(85)] = 2616,
  [SMALL_STATE(86)] = 2639,
  [SMALL_STATE(87)] = 2662,
  [SMALL_STATE(88)] = 2693,
  [SMALL_STATE(89)] = 2724,
  [SMALL_STATE(90)] = 2755,
  [SMALL_STATE(91)] = 2786,
  [SMALL_STATE(92)] = 2820,
  [SMALL_STATE(93)] = 2854,
  [SMALL_STATE(94)] = 2888,
  [SMALL_STATE(95)] = 2908,
  [SMALL_STATE(96)] = 2928,
  [SMALL_STATE(97)] = 2951,
  [SMALL_STATE(98)] = 2974,
  [SMALL_STATE(99)] = 2997,
  [SMALL_STATE(100)] = 3020,
  [SMALL_STATE(101)] = 3039,
  [SMALL_STATE(102)] = 3062,
  [SMALL_STATE(103)] = 3085,
  [SMALL_STATE(104)] = 3108,
  [SMALL_STATE(105)] = 3131,
  [SMALL_STATE(106)] = 3154,
  [SMALL_STATE(107)] = 3177,
  [SMALL_STATE(108)] = 3196,
  [SMALL_STATE(109)] = 3219,
  [SMALL_STATE(110)] = 3242,
  [SMALL_STATE(111)] = 3265,
  [SMALL_STATE(112)] = 3288,
  [SMALL_STATE(113)] = 3311,
  [SMALL_STATE(114)] = 3323,
  [SMALL_STATE(115)] = 3339,
  [SMALL_STATE(116)] = 3353,
  [SMALL_STATE(117)] = 3367,
  [SMALL_STATE(118)] = 3381,
  [SMALL_STATE(119)] = 3399,
  [SMALL_STATE(120)] = 3420,
  [SMALL_STATE(121)] = 3441,
  [SMALL_STATE(122)] = 3451,
  [SMALL_STATE(123)] = 3469,
  [SMALL_STATE(124)] = 3481,
  [SMALL_STATE(125)] = 3491,
  [SMALL_STATE(126)] = 3501,
  [SMALL_STATE(127)] = 3511,
  [SMALL_STATE(128)] = 3521,
  [SMALL_STATE(129)] = 3539,
  [SMALL_STATE(130)] = 3549,
  [SMALL_STATE(131)] = 3559,
  [SMALL_STATE(132)] = 3577,
  [SMALL_STATE(133)] = 3587,
  [SMALL_STATE(134)] = 3605,
  [SMALL_STATE(135)] = 3623,
  [SMALL_STATE(136)] = 3633,
  [SMALL_STATE(137)] = 3643,
  [SMALL_STATE(138)] = 3653,
  [SMALL_STATE(139)] = 3663,
  [SMALL_STATE(140)] = 3673,
  [SMALL_STATE(141)] = 3683,
  [SMALL_STATE(142)] = 3701,
  [SMALL_STATE(143)] = 3711,
  [SMALL_STATE(144)] = 3721,
  [SMALL_STATE(145)] = 3731,
  [SMALL_STATE(146)] = 3741,
  [SMALL_STATE(147)] = 3751,
  [SMALL_STATE(148)] = 3764,
  [SMALL_STATE(149)] = 3775,
  [SMALL_STATE(150)] = 3794,
  [SMALL_STATE(151)] = 3805,
  [SMALL_STATE(152)] = 3816,
  [SMALL_STATE(153)] = 3829,
  [SMALL_STATE(154)] = 3841,
  [SMALL_STATE(155)] = 3855,
  [SMALL_STATE(156)] = 3869,
  [SMALL_STATE(157)] = 3881,
  [SMALL_STATE(158)] = 3893,
  [SMALL_STATE(159)] = 3905,
  [SMALL_STATE(160)] = 3919,
  [SMALL_STATE(161)] = 3931,
  [SMALL_STATE(162)] = 3942,
  [SMALL_STATE(163)] = 3949,
  [SMALL_STATE(164)] = 3960,
  [SMALL_STATE(165)] = 3967,
  [SMALL_STATE(166)] = 3980,
  [SMALL_STATE(167)] = 3987,
  [SMALL_STATE(168)] = 3998,
  [SMALL_STATE(169)] = 4005,
  [SMALL_STATE(170)] = 4012,
  [SMALL_STATE(171)] = 4023,
  [SMALL_STATE(172)] = 4030,
  [SMALL_STATE(173)] = 4043,
  [SMALL_STATE(174)] = 4054,
  [SMALL_STATE(175)] = 4067,
  [SMALL_STATE(176)] = 4078,
  [SMALL_STATE(177)] = 4085,
  [SMALL_STATE(178)] = 4096,
  [SMALL_STATE(179)] = 4107,
  [SMALL_STATE(180)] = 4118,
  [SMALL_STATE(181)] = 4125,
  [SMALL_STATE(182)] = 4132,
  [SMALL_STATE(183)] = 4141,
  [SMALL_STATE(184)] = 4152,
  [SMALL_STATE(185)] = 4165,
  [SMALL_STATE(186)] = 4172,
  [SMALL_STATE(187)] = 4183,
  [SMALL_STATE(188)] = 4190,
  [SMALL_STATE(189)] = 4198,
  [SMALL_STATE(190)] = 4208,
  [SMALL_STATE(191)] = 4218,
  [SMALL_STATE(192)] = 4228,
  [SMALL_STATE(193)] = 4238,
  [SMALL_STATE(194)] = 4248,
  [SMALL_STATE(195)] = 4254,
  [SMALL_STATE(196)] = 4262,
  [SMALL_STATE(197)] = 4272,
  [SMALL_STATE(198)] = 4282,
  [SMALL_STATE(199)] = 4292,
  [SMALL_STATE(200)] = 4302,
  [SMALL_STATE(201)] = 4312,
  [SMALL_STATE(202)] = 4318,
  [SMALL_STATE(203)] = 4324,
  [SMALL_STATE(204)] = 4334,
  [SMALL_STATE(205)] = 4344,
  [SMALL_STATE(206)] = 4350,
  [SMALL_STATE(207)] = 4356,
  [SMALL_STATE(208)] = 4366,
  [SMALL_STATE(209)] = 4372,
  [SMALL_STATE(210)] = 4382,
  [SMALL_STATE(211)] = 4392,
  [SMALL_STATE(212)] = 4402,
  [SMALL_STATE(213)] = 4412,
  [SMALL_STATE(214)] = 4418,
  [SMALL_STATE(215)] = 4428,
  [SMALL_STATE(216)] = 4438,
  [SMALL_STATE(217)] = 4448,
  [SMALL_STATE(218)] = 4458,
  [SMALL_STATE(219)] = 4468,
  [SMALL_STATE(220)] = 4478,
  [SMALL_STATE(221)] = 4488,
  [SMALL_STATE(222)] = 4494,
  [SMALL_STATE(223)] = 4504,
  [SMALL_STATE(224)] = 4514,
  [SMALL_STATE(225)] = 4524,
  [SMALL_STATE(226)] = 4532,
  [SMALL_STATE(227)] = 4540,
  [SMALL_STATE(228)] = 4546,
  [SMALL_STATE(229)] = 4556,
  [SMALL_STATE(230)] = 4566,
  [SMALL_STATE(231)] = 4576,
  [SMALL_STATE(232)] = 4582,
  [SMALL_STATE(233)] = 4592,
  [SMALL_STATE(234)] = 4602,
  [SMALL_STATE(235)] = 4612,
  [SMALL_STATE(236)] = 4622,
  [SMALL_STATE(237)] = 4632,
  [SMALL_STATE(238)] = 4642,
  [SMALL_STATE(239)] = 4648,
  [SMALL_STATE(240)] = 4658,
  [SMALL_STATE(241)] = 4668,
  [SMALL_STATE(242)] = 4678,
  [SMALL_STATE(243)] = 4688,
  [SMALL_STATE(244)] = 4698,
  [SMALL_STATE(245)] = 4708,
  [SMALL_STATE(246)] = 4718,
  [SMALL_STATE(247)] = 4723,
  [SMALL_STATE(248)] = 4728,
  [SMALL_STATE(249)] = 4733,
  [SMALL_STATE(250)] = 4738,
  [SMALL_STATE(251)] = 4743,
  [SMALL_STATE(252)] = 4748,
  [SMALL_STATE(253)] = 4755,
  [SMALL_STATE(254)] = 4760,
  [SMALL_STATE(255)] = 4765,
  [SMALL_STATE(256)] = 4770,
  [SMALL_STATE(257)] = 4775,
  [SMALL_STATE(258)] = 4782,
  [SMALL_STATE(259)] = 4787,
  [SMALL_STATE(260)] = 4792,
  [SMALL_STATE(261)] = 4799,
  [SMALL_STATE(262)] = 4804,
  [SMALL_STATE(263)] = 4811,
  [SMALL_STATE(264)] = 4816,
  [SMALL_STATE(265)] = 4821,
  [SMALL_STATE(266)] = 4826,
  [SMALL_STATE(267)] = 4831,
  [SMALL_STATE(268)] = 4836,
  [SMALL_STATE(269)] = 4841,
  [SMALL_STATE(270)] = 4846,
  [SMALL_STATE(271)] = 4851,
  [SMALL_STATE(272)] = 4856,
  [SMALL_STATE(273)] = 4861,
  [SMALL_STATE(274)] = 4868,
  [SMALL_STATE(275)] = 4875,
  [SMALL_STATE(276)] = 4880,
  [SMALL_STATE(277)] = 4887,
  [SMALL_STATE(278)] = 4892,
  [SMALL_STATE(279)] = 4899,
  [SMALL_STATE(280)] = 4903,
  [SMALL_STATE(281)] = 4907,
  [SMALL_STATE(282)] = 4911,
  [SMALL_STATE(283)] = 4915,
  [SMALL_STATE(284)] = 4919,
  [SMALL_STATE(285)] = 4923,
  [SMALL_STATE(286)] = 4927,
  [SMALL_STATE(287)] = 4931,
  [SMALL_STATE(288)] = 4935,
  [SMALL_STATE(289)] = 4939,
  [SMALL_STATE(290)] = 4943,
  [SMALL_STATE(291)] = 4947,
  [SMALL_STATE(292)] = 4951,
  [SMALL_STATE(293)] = 4955,
  [SMALL_STATE(294)] = 4959,
  [SMALL_STATE(295)] = 4963,
  [SMALL_STATE(296)] = 4967,
  [SMALL_STATE(297)] = 4971,
  [SMALL_STATE(298)] = 4975,
  [SMALL_STATE(299)] = 4979,
  [SMALL_STATE(300)] = 4983,
  [SMALL_STATE(301)] = 4987,
  [SMALL_STATE(302)] = 4991,
  [SMALL_STATE(303)] = 4995,
  [SMALL_STATE(304)] = 4999,
  [SMALL_STATE(305)] = 5003,
  [SMALL_STATE(306)] = 5007,
  [SMALL_STATE(307)] = 5011,
  [SMALL_STATE(308)] = 5015,
  [SMALL_STATE(309)] = 5019,
  [SMALL_STATE(310)] = 5023,
  [SMALL_STATE(311)] = 5027,
  [SMALL_STATE(312)] = 5031,
  [SMALL_STATE(313)] = 5035,
  [SMALL_STATE(314)] = 5039,
  [SMALL_STATE(315)] = 5043,
  [SMALL_STATE(316)] = 5047,
  [SMALL_STATE(317)] = 5051,
  [SMALL_STATE(318)] = 5055,
  [SMALL_STATE(319)] = 5059,
  [SMALL_STATE(320)] = 5063,
  [SMALL_STATE(321)] = 5067,
  [SMALL_STATE(322)] = 5071,
  [SMALL_STATE(323)] = 5075,
  [SMALL_STATE(324)] = 5079,
  [SMALL_STATE(325)] = 5083,
  [SMALL_STATE(326)] = 5087,
  [SMALL_STATE(327)] = 5091,
  [SMALL_STATE(328)] = 5095,
  [SMALL_STATE(329)] = 5099,
  [SMALL_STATE(330)] = 5103,
  [SMALL_STATE(331)] = 5107,
  [SMALL_STATE(332)] = 5111,
  [SMALL_STATE(333)] = 5115,
  [SMALL_STATE(334)] = 5119,
  [SMALL_STATE(335)] = 5123,
  [SMALL_STATE(336)] = 5127,
  [SMALL_STATE(337)] = 5131,
  [SMALL_STATE(338)] = 5135,
  [SMALL_STATE(339)] = 5139,
  [SMALL_STATE(340)] = 5143,
  [SMALL_STATE(341)] = 5147,
  [SMALL_STATE(342)] = 5151,
  [SMALL_STATE(343)] = 5155,
  [SMALL_STATE(344)] = 5159,
  [SMALL_STATE(345)] = 5163,
  [SMALL_STATE(346)] = 5167,
  [SMALL_STATE(347)] = 5171,
  [SMALL_STATE(348)] = 5175,
  [SMALL_STATE(349)] = 5179,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 2, .production_id = 16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 2, .production_id = 16),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 24),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 24), SHIFT_REPEAT(83),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 24),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 24), SHIFT_REPEAT(314),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 23),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 23),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 28),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 28),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 1, .production_id = 11),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 24), SHIFT_REPEAT(81),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 24), SHIFT_REPEAT(327),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 26),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 26),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 25),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 25),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 24), SHIFT_REPEAT(72),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 24), SHIFT_REPEAT(322),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 24), SHIFT_REPEAT(71),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 24), SHIFT_REPEAT(331),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_argument, 1), REDUCE(sym_primary_expression, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(274),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(273),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(286),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(285),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(345),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(336),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 27), SHIFT_REPEAT(102),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 27),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 27),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 27), SHIFT_REPEAT(102),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 2, .production_id = 21),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 2, .production_id = 21),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 27), SHIFT_REPEAT(104),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 27), SHIFT_REPEAT(104),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(283),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(344),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(343),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(342),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(340),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(339),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 27), SHIFT_REPEAT(110),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 27), SHIFT_REPEAT(110),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 27), SHIFT_REPEAT(98),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 27), SHIFT_REPEAT(98),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 25),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_operator, 3, .production_id = 25),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 20),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_operator, 2, .production_id = 20),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 17),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 13),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 12),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 8),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 4),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2), SHIFT_REPEAT(79),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 1, .production_id = 6),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 2, .production_id = 9),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 9), SHIFT_REPEAT(252),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 9),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(349),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif, 3),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 19), SHIFT_REPEAT(320),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 19),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_instantiated_type, 4, .production_id = 15),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 14),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_instantiated_type, 3, .production_id = 10),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic, 1, .production_id = 5),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(311),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2), SHIFT_REPEAT(299),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 5),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(313),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2), SHIFT_REPEAT(35),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 11),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 11),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(165),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(303),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 22),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_name, 1, .production_id = 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 2), SHIFT(264),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_type, 2, .production_id = 7),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 19), SHIFT_REPEAT(324),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 18),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 9), SHIFT_REPEAT(276),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 4),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 5),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delclaration_array_type, 7),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 6),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_type, 1),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__custom_generic_type, 2, .production_id = 7), SHIFT(207),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [743] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 4),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
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
