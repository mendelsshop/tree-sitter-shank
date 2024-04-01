#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 377
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 34

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
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_COLON_EQ = 14,
  anon_sym_repeat = 15,
  anon_sym_until = 16,
  anon_sym_while = 17,
  anon_sym_var = 18,
  anon_sym_if = 19,
  anon_sym_elsif = 20,
  anon_sym_else = 21,
  anon_sym_for = 22,
  anon_sym_from = 23,
  anon_sym_to = 24,
  anon_sym_constants = 25,
  anon_sym_SEMI = 26,
  anon_sym_COLON = 27,
  anon_sym_variables = 28,
  anon_sym_not = 29,
  anon_sym_and = 30,
  anon_sym_or = 31,
  anon_sym_PLUS = 32,
  anon_sym_DASH = 33,
  anon_sym_STAR = 34,
  anon_sym_SLASH = 35,
  anon_sym_mod = 36,
  anon_sym_SLASH_SLASH = 37,
  anon_sym_LT = 38,
  anon_sym_LT_EQ = 39,
  anon_sym_GT_EQ = 40,
  anon_sym_GT = 41,
  anon_sym_LT_GT = 42,
  sym_integer = 43,
  sym_float = 44,
  anon_sym_integer = 45,
  anon_sym_real = 46,
  anon_sym_string = 47,
  anon_sym_array = 48,
  anon_sym_of = 49,
  anon_sym_boolean = 50,
  aux_sym_comment_token1 = 51,
  sym_identifier = 52,
  anon_sym_DOT = 53,
  sym_true = 54,
  sym_false = 55,
  sym__newline = 56,
  sym__indent = 57,
  sym__dedent = 58,
  sym_program = 59,
  sym_generics = 60,
  sym_enum = 61,
  sym_record_item = 62,
  sym_record = 63,
  sym_export = 64,
  sym__multiple_import = 65,
  sym_import = 66,
  sym_module = 67,
  sym_function_definition = 68,
  sym_parameters = 69,
  sym_assignment = 70,
  sym_expression = 71,
  sym_statement = 72,
  sym_repeat_statement = 73,
  sym_while_statement = 74,
  sym_call_statement = 75,
  sym_argument = 76,
  sym_if_then_statement = 77,
  sym_if = 78,
  sym_elsif = 79,
  sym_else = 80,
  sym_for = 81,
  sym_constant = 82,
  sym_block = 83,
  sym__parameters = 84,
  sym_var = 85,
  sym_parameter = 86,
  sym_variable = 87,
  sym_primary_expression = 88,
  sym_not_operator = 89,
  sym_boolean_operator = 90,
  sym_binary_operator = 91,
  sym_comparison_operator = 92,
  sym_parenthesized_expression = 93,
  sym_basis_type = 94,
  sym_array_type = 95,
  sym_delclaration_array_type = 96,
  sym_declaration_type = 97,
  sym__generic = 98,
  sym__generics = 99,
  sym__type_name = 100,
  sym__custom_type = 101,
  sym__custom_generic_type = 102,
  sym__custom_generic_instantiated_type = 103,
  sym_custom_type = 104,
  sym_type = 105,
  sym_comment = 106,
  sym_variable_access = 107,
  aux_sym_program_repeat1 = 108,
  aux_sym_generics_repeat1 = 109,
  aux_sym_enum_repeat1 = 110,
  aux_sym_record_repeat1 = 111,
  aux_sym_function_definition_repeat1 = 112,
  aux_sym_function_definition_repeat2 = 113,
  aux_sym_call_statement_repeat1 = 114,
  aux_sym_if_then_statement_repeat1 = 115,
  aux_sym_constant_repeat1 = 116,
  aux_sym_block_repeat1 = 117,
  aux_sym__parameters_repeat1 = 118,
  aux_sym_comparison_operator_repeat1 = 119,
  aux_sym__generics_repeat1 = 120,
  aux_sym__custom_generic_instantiated_type_repeat1 = 121,
  aux_sym_variable_access_repeat1 = 122,
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
  [sym_generics] = "generics",
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
  [aux_sym_generics_repeat1] = "generics_repeat1",
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
  [sym_generics] = sym_generics,
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
  [aux_sym_generics_repeat1] = aux_sym_generics_repeat1,
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
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 1},
  [14] = {.index = 22, .length = 3},
  [15] = {.index = 25, .length = 3},
  [16] = {.index = 28, .length = 1},
  [17] = {.index = 29, .length = 4},
  [18] = {.index = 33, .length = 2},
  [19] = {.index = 35, .length = 4},
  [20] = {.index = 39, .length = 3},
  [21] = {.index = 42, .length = 3},
  [22] = {.index = 45, .length = 1},
  [23] = {.index = 46, .length = 2},
  [24] = {.index = 48, .length = 1},
  [25] = {.index = 49, .length = 1},
  [26] = {.index = 50, .length = 1},
  [27] = {.index = 51, .length = 2},
  [28] = {.index = 53, .length = 4},
  [29] = {.index = 57, .length = 4},
  [30] = {.index = 61, .length = 3},
  [31] = {.index = 64, .length = 1},
  [32] = {.index = 65, .length = 2},
  [33] = {.index = 67, .length = 3},
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
    {field_generic, 1},
  [12] =
    {field_name, 1},
    {field_parameters, 2},
  [14] =
    {field_generic, 0, .inherited = true},
    {field_generic, 1, .inherited = true},
  [16] =
    {field_generic, 1, .inherited = true},
    {field_instatiated_generic, 2},
    {field_type_name, 0, .inherited = true},
  [19] =
    {field_generic, 1},
    {field_generic, 2, .inherited = true},
  [21] =
    {field_function, 0},
  [22] =
    {field_name, 1},
    {field_parameters, 2},
    {field_variables, 4},
  [25] =
    {field_constants, 4},
    {field_name, 1},
    {field_parameters, 2},
  [28] =
    {field_generic, 1, .inherited = true},
  [29] =
    {field_generic, 1, .inherited = true},
    {field_instatiated_generic, 2},
    {field_instatiated_generic, 3, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [33] =
    {field_array_access, 1, .inherited = true},
    {field_field_access, 1, .inherited = true},
  [35] =
    {field_constants, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_variables, 4},
  [39] =
    {field_name, 1},
    {field_parameters, 2},
    {field_variables, 5},
  [42] =
    {field_constants, 5},
    {field_name, 1},
    {field_parameters, 2},
  [45] =
    {field_instatiated_generic, 1},
  [46] =
    {field_instatiated_generic, 0, .inherited = true},
    {field_instatiated_generic, 1, .inherited = true},
  [48] =
    {field_argument, 1},
  [49] =
    {field_operators, 1, .inherited = true},
  [50] =
    {field_var, 0},
  [51] =
    {field_field_access, 0},
    {field_field_access, 1},
  [53] =
    {field_array_access, 0, .inherited = true},
    {field_array_access, 1, .inherited = true},
    {field_field_access, 0, .inherited = true},
    {field_field_access, 1, .inherited = true},
  [57] =
    {field_constants, 6},
    {field_name, 1},
    {field_parameters, 2},
    {field_variables, 5},
  [61] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [64] =
    {field_operators, 0},
  [65] =
    {field_operators, 0, .inherited = true},
    {field_operators, 1, .inherited = true},
  [67] =
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
  [9] = 4,
  [10] = 3,
  [11] = 2,
  [12] = 12,
  [13] = 13,
  [14] = 6,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 5,
  [19] = 4,
  [20] = 8,
  [21] = 2,
  [22] = 3,
  [23] = 4,
  [24] = 15,
  [25] = 13,
  [26] = 12,
  [27] = 6,
  [28] = 17,
  [29] = 16,
  [30] = 5,
  [31] = 2,
  [32] = 3,
  [33] = 6,
  [34] = 5,
  [35] = 35,
  [36] = 12,
  [37] = 37,
  [38] = 38,
  [39] = 8,
  [40] = 17,
  [41] = 16,
  [42] = 13,
  [43] = 12,
  [44] = 13,
  [45] = 15,
  [46] = 46,
  [47] = 16,
  [48] = 48,
  [49] = 17,
  [50] = 50,
  [51] = 51,
  [52] = 8,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 51,
  [58] = 54,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 61,
  [64] = 62,
  [65] = 15,
  [66] = 61,
  [67] = 62,
  [68] = 68,
  [69] = 59,
  [70] = 70,
  [71] = 71,
  [72] = 70,
  [73] = 70,
  [74] = 74,
  [75] = 62,
  [76] = 76,
  [77] = 77,
  [78] = 68,
  [79] = 59,
  [80] = 80,
  [81] = 70,
  [82] = 59,
  [83] = 68,
  [84] = 61,
  [85] = 68,
  [86] = 86,
  [87] = 50,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 53,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 95,
  [99] = 96,
  [100] = 53,
  [101] = 50,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 105,
  [107] = 103,
  [108] = 102,
  [109] = 53,
  [110] = 103,
  [111] = 50,
  [112] = 112,
  [113] = 103,
  [114] = 102,
  [115] = 115,
  [116] = 102,
  [117] = 105,
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
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 120,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 121,
  [148] = 148,
  [149] = 122,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 123,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 130,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 166,
  [171] = 171,
  [172] = 171,
  [173] = 165,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 176,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 169,
  [182] = 168,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 163,
  [190] = 135,
  [191] = 191,
  [192] = 192,
  [193] = 164,
  [194] = 121,
  [195] = 192,
  [196] = 145,
  [197] = 122,
  [198] = 198,
  [199] = 199,
  [200] = 178,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 123,
  [205] = 205,
  [206] = 120,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 185,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 123,
  [226] = 120,
  [227] = 227,
  [228] = 168,
  [229] = 229,
  [230] = 223,
  [231] = 231,
  [232] = 232,
  [233] = 227,
  [234] = 223,
  [235] = 227,
  [236] = 236,
  [237] = 237,
  [238] = 222,
  [239] = 239,
  [240] = 240,
  [241] = 215,
  [242] = 242,
  [243] = 243,
  [244] = 121,
  [245] = 245,
  [246] = 205,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 151,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 140,
  [257] = 257,
  [258] = 219,
  [259] = 259,
  [260] = 243,
  [261] = 261,
  [262] = 130,
  [263] = 236,
  [264] = 264,
  [265] = 265,
  [266] = 122,
  [267] = 186,
  [268] = 242,
  [269] = 223,
  [270] = 270,
  [271] = 248,
  [272] = 272,
  [273] = 273,
  [274] = 227,
  [275] = 275,
  [276] = 217,
  [277] = 277,
  [278] = 247,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 237,
  [291] = 291,
  [292] = 130,
  [293] = 224,
  [294] = 218,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 215,
  [301] = 273,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 277,
  [306] = 242,
  [307] = 248,
  [308] = 308,
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
  [322] = 322,
  [323] = 323,
  [324] = 297,
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
  [337] = 336,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 318,
  [345] = 311,
  [346] = 346,
  [347] = 347,
  [348] = 326,
  [349] = 304,
  [350] = 350,
  [351] = 338,
  [352] = 352,
  [353] = 326,
  [354] = 354,
  [355] = 355,
  [356] = 338,
  [357] = 357,
  [358] = 326,
  [359] = 359,
  [360] = 360,
  [361] = 330,
  [362] = 303,
  [363] = 363,
  [364] = 310,
  [365] = 309,
  [366] = 366,
  [367] = 367,
  [368] = 338,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 346,
  [374] = 352,
  [375] = 347,
  [376] = 331,
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
      if (eof) ADVANCE(122);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == ',') ADVANCE(124);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == ';') ADVANCE(154);
      if (lookahead == '<') ADVANCE(171);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '>') ADVANCE(174);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == ']') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(74);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(50);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(171);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '>') ADVANCE(174);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == 't') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == 'v') ADVANCE(194);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(240);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == '<') ADVANCE(171);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '>') ADVANCE(174);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == 't') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == 't') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(240);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 't') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(240);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(124);
      if (lookahead == ';') ADVANCE(154);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(240);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == 'v') ADVANCE(194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(240);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == 's') ADVANCE(237);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(146);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == 'w') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(240);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(231);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(240);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(88);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 118:
      if (lookahead == 'y') ADVANCE(186);
      END_STATE();
    case 119:
      if (lookahead == '}') ADVANCE(190);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 121:
      if (eof) ADVANCE(122);
      if (lookahead == ',') ADVANCE(124);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == ']') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'v') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(121)
      END_STATE();
    case 122:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_generics);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_from);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_constants);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(170);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_mod);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(172);
      if (lookahead == '>') ADVANCE(175);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '_') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_integer);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_real);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_string);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_array);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(212);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(240);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(239);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(240);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(240);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(226);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(240);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(235);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(240);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(161);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(169);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(243);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(245);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(208);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(223);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(141);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(195);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(228);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(145);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(185);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(204);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(211);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(217);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(214);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(233);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(183);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(202);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(151);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(196);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(207);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(236);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(234);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(215);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(197);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(229);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(203);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(163);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(238);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(143);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(210);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(181);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(149);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(192);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(220);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(230);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(199);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(159);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(138);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(200);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(227);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(198);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(187);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(240);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 121},
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
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0, .external_lex_state = 3},
  [41] = {.lex_state = 0, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 14, .external_lex_state = 4},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 46, .external_lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 46, .external_lex_state = 4},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 46, .external_lex_state = 4},
  [55] = {.lex_state = 14, .external_lex_state = 4},
  [56] = {.lex_state = 14, .external_lex_state = 4},
  [57] = {.lex_state = 46, .external_lex_state = 4},
  [58] = {.lex_state = 46, .external_lex_state = 4},
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
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 121},
  [89] = {.lex_state = 121},
  [90] = {.lex_state = 121},
  [91] = {.lex_state = 121},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 121, .external_lex_state = 3},
  [125] = {.lex_state = 121, .external_lex_state = 3},
  [126] = {.lex_state = 121, .external_lex_state = 3},
  [127] = {.lex_state = 121, .external_lex_state = 3},
  [128] = {.lex_state = 121},
  [129] = {.lex_state = 121},
  [130] = {.lex_state = 121},
  [131] = {.lex_state = 121},
  [132] = {.lex_state = 121},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 121},
  [135] = {.lex_state = 121},
  [136] = {.lex_state = 121},
  [137] = {.lex_state = 121},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 121},
  [140] = {.lex_state = 121},
  [141] = {.lex_state = 121},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 121},
  [144] = {.lex_state = 121},
  [145] = {.lex_state = 121},
  [146] = {.lex_state = 121},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 121},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 121},
  [151] = {.lex_state = 121},
  [152] = {.lex_state = 121},
  [153] = {.lex_state = 121},
  [154] = {.lex_state = 121},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 46, .external_lex_state = 4},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 14, .external_lex_state = 4},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 46, .external_lex_state = 4},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 3},
  [168] = {.lex_state = 6, .external_lex_state = 2},
  [169] = {.lex_state = 6, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 6, .external_lex_state = 2},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 121, .external_lex_state = 3},
  [176] = {.lex_state = 6, .external_lex_state = 2},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 0, .external_lex_state = 3},
  [180] = {.lex_state = 0, .external_lex_state = 3},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 0, .external_lex_state = 3},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 6, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 3},
  [203] = {.lex_state = 0, .external_lex_state = 3},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 121},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 3},
  [209] = {.lex_state = 0, .external_lex_state = 3},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 6, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 3},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 121},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 121},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 6},
  [225] = {.lex_state = 0, .external_lex_state = 3},
  [226] = {.lex_state = 0, .external_lex_state = 3},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 6, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 3},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 121},
  [248] = {.lex_state = 6, .external_lex_state = 2},
  [249] = {.lex_state = 0, .external_lex_state = 3},
  [250] = {.lex_state = 121},
  [251] = {.lex_state = 121, .external_lex_state = 3},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 121},
  [256] = {.lex_state = 121, .external_lex_state = 3},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 121},
  [259] = {.lex_state = 121},
  [260] = {.lex_state = 6},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 121, .external_lex_state = 3},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 0, .external_lex_state = 3},
  [267] = {.lex_state = 0, .external_lex_state = 2},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 6},
  [272] = {.lex_state = 121},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0, .external_lex_state = 2},
  [276] = {.lex_state = 121},
  [277] = {.lex_state = 6},
  [278] = {.lex_state = 0, .external_lex_state = 2},
  [279] = {.lex_state = 0, .external_lex_state = 2},
  [280] = {.lex_state = 0, .external_lex_state = 2},
  [281] = {.lex_state = 0, .external_lex_state = 2},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0, .external_lex_state = 2},
  [285] = {.lex_state = 0, .external_lex_state = 2},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 0, .external_lex_state = 2},
  [288] = {.lex_state = 0, .external_lex_state = 3},
  [289] = {.lex_state = 0, .external_lex_state = 2},
  [290] = {.lex_state = 0, .external_lex_state = 2},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0, .external_lex_state = 2},
  [293] = {.lex_state = 0, .external_lex_state = 2},
  [294] = {.lex_state = 0, .external_lex_state = 2},
  [295] = {.lex_state = 6},
  [296] = {.lex_state = 0, .external_lex_state = 2},
  [297] = {.lex_state = 0, .external_lex_state = 2},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0, .external_lex_state = 3},
  [300] = {.lex_state = 47},
  [301] = {.lex_state = 0, .external_lex_state = 2},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0, .external_lex_state = 2},
  [304] = {.lex_state = 0, .external_lex_state = 2},
  [305] = {.lex_state = 6},
  [306] = {.lex_state = 47},
  [307] = {.lex_state = 6},
  [308] = {.lex_state = 0, .external_lex_state = 2},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 6},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 6},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0, .external_lex_state = 2},
  [323] = {.lex_state = 6},
  [324] = {.lex_state = 0, .external_lex_state = 3},
  [325] = {.lex_state = 0, .external_lex_state = 2},
  [326] = {.lex_state = 6},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 6},
  [331] = {.lex_state = 6},
  [332] = {.lex_state = 6},
  [333] = {.lex_state = 6},
  [334] = {.lex_state = 0, .external_lex_state = 3},
  [335] = {.lex_state = 6},
  [336] = {.lex_state = 6},
  [337] = {.lex_state = 6},
  [338] = {.lex_state = 0, .external_lex_state = 2},
  [339] = {.lex_state = 6},
  [340] = {.lex_state = 1},
  [341] = {.lex_state = 6},
  [342] = {.lex_state = 6},
  [343] = {.lex_state = 6},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 6},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 6},
  [349] = {.lex_state = 0, .external_lex_state = 3},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0, .external_lex_state = 2},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 6},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 6},
  [356] = {.lex_state = 0, .external_lex_state = 2},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 6},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 6},
  [361] = {.lex_state = 6},
  [362] = {.lex_state = 0, .external_lex_state = 3},
  [363] = {.lex_state = 6},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0, .external_lex_state = 2},
  [369] = {.lex_state = 6},
  [370] = {.lex_state = 6},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0, .external_lex_state = 2},
  [373] = {.lex_state = 6},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 6},
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
    [sym_program] = STATE(328),
    [sym_enum] = STATE(90),
    [sym_record] = STATE(90),
    [sym_export] = STATE(90),
    [sym_import] = STATE(90),
    [sym_module] = STATE(91),
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
    STATE(20), 1,
      sym_primary_expression,
    STATE(38), 1,
      sym_variable_access,
    STATE(174), 1,
      sym_expression,
    STATE(184), 1,
      sym_argument,
    ACTIONS(59), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(26), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(147), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [223] = 8,
    STATE(53), 1,
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
    ACTIONS(79), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(39), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 16,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
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
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(32), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 16,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
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
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(23), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 16,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
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
  [413] = 2,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 18,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LBRACK,
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
  [471] = 4,
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
    ACTIONS(43), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 18,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LBRACK,
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
    STATE(21), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(39), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 14,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
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
  [584] = 7,
    ACTIONS(113), 1,
      anon_sym_SLASH,
    STATE(92), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(107), 4,
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
  [619] = 5,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(23), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 14,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
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
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(32), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 14,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
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
    ACTIONS(125), 1,
      anon_sym_DOT,
    STATE(31), 1,
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
  [711] = 5,
    ACTIONS(113), 1,
      anon_sym_SLASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(111), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(95), 11,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [741] = 2,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 16,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
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
  [765] = 2,
    ACTIONS(89), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 16,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
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
  [789] = 2,
    ACTIONS(47), 3,
      anon_sym_SLASH,
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
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_DOT,
  [813] = 2,
    ACTIONS(101), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 16,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
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
  [837] = 4,
    ACTIONS(113), 1,
      anon_sym_SLASH,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 13,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
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
    ACTIONS(43), 3,
      anon_sym_SLASH,
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
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_DOT,
  [889] = 5,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_DOT,
    STATE(32), 1,
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
  [919] = 5,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      anon_sym_DOT,
    STATE(32), 1,
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
  [949] = 2,
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
    STATE(20), 1,
      sym_primary_expression,
    STATE(38), 1,
      sym_variable_access,
    STATE(174), 1,
      sym_expression,
    STATE(232), 1,
      sym_argument,
    STATE(26), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(147), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1037] = 2,
    ACTIONS(89), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 14,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
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
  [1059] = 11,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_and,
    ACTIONS(135), 1,
      anon_sym_or,
    STATE(20), 1,
      sym_primary_expression,
    STATE(159), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(26), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(147), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1099] = 3,
    ACTIONS(89), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 3,
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
  [1123] = 7,
    ACTIONS(146), 1,
      anon_sym_SLASH,
    STATE(100), 1,
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
  [1155] = 2,
    ACTIONS(101), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 14,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
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
  [1203] = 2,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 14,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_EQ,
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
  [1225] = 2,
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
  [1246] = 2,
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
  [1267] = 5,
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
  [1294] = 12,
    ACTIONS(156), 1,
      anon_sym_real,
    ACTIONS(158), 1,
      anon_sym_array,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym__dedent,
    STATE(218), 1,
      sym__custom_generic_instantiated_type,
    STATE(224), 1,
      sym__custom_generic_type,
    STATE(228), 1,
      sym__type_name,
    STATE(237), 1,
      sym__custom_type,
    STATE(342), 1,
      sym_type,
    ACTIONS(154), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(56), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(231), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1335] = 4,
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
  [1360] = 11,
    ACTIONS(164), 1,
      anon_sym_repeat,
    ACTIONS(167), 1,
      anon_sym_while,
    ACTIONS(170), 1,
      anon_sym_if,
    ACTIONS(173), 1,
      anon_sym_for,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(179), 1,
      sym__dedent,
    STATE(48), 1,
      aux_sym_block_repeat1,
    STATE(133), 1,
      sym_if,
    STATE(240), 1,
      sym_statement,
    STATE(340), 1,
      sym_variable_access,
    STATE(286), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1399] = 2,
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
  [1420] = 5,
    STATE(50), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(184), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(188), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(181), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(186), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [1447] = 11,
    ACTIONS(191), 1,
      anon_sym_repeat,
    ACTIONS(193), 1,
      anon_sym_while,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_for,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym__dedent,
    STATE(58), 1,
      aux_sym_block_repeat1,
    STATE(133), 1,
      sym_if,
    STATE(240), 1,
      sym_statement,
    STATE(340), 1,
      sym_variable_access,
    STATE(286), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1486] = 7,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    STATE(109), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
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
    ACTIONS(203), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1517] = 5,
    STATE(50), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(63), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(211), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [1544] = 11,
    ACTIONS(191), 1,
      anon_sym_repeat,
    ACTIONS(193), 1,
      anon_sym_while,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_for,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym__dedent,
    STATE(48), 1,
      aux_sym_block_repeat1,
    STATE(133), 1,
      sym_if,
    STATE(240), 1,
      sym_statement,
    STATE(340), 1,
      sym_variable_access,
    STATE(286), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1583] = 12,
    ACTIONS(156), 1,
      anon_sym_real,
    ACTIONS(158), 1,
      anon_sym_array,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(215), 1,
      sym__dedent,
    STATE(218), 1,
      sym__custom_generic_instantiated_type,
    STATE(224), 1,
      sym__custom_generic_type,
    STATE(228), 1,
      sym__type_name,
    STATE(237), 1,
      sym__custom_type,
    STATE(342), 1,
      sym_type,
    ACTIONS(154), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(56), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(231), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1624] = 12,
    ACTIONS(220), 1,
      anon_sym_real,
    ACTIONS(223), 1,
      anon_sym_array,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(229), 1,
      sym__dedent,
    STATE(218), 1,
      sym__custom_generic_instantiated_type,
    STATE(224), 1,
      sym__custom_generic_type,
    STATE(228), 1,
      sym__type_name,
    STATE(237), 1,
      sym__custom_type,
    STATE(342), 1,
      sym_type,
    ACTIONS(217), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(56), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(231), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1665] = 11,
    ACTIONS(191), 1,
      anon_sym_repeat,
    ACTIONS(193), 1,
      anon_sym_while,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_for,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym__dedent,
    STATE(54), 1,
      aux_sym_block_repeat1,
    STATE(133), 1,
      sym_if,
    STATE(240), 1,
      sym_statement,
    STATE(340), 1,
      sym_variable_access,
    STATE(286), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1704] = 11,
    ACTIONS(191), 1,
      anon_sym_repeat,
    ACTIONS(193), 1,
      anon_sym_while,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_for,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(233), 1,
      sym__dedent,
    STATE(48), 1,
      aux_sym_block_repeat1,
    STATE(133), 1,
      sym_if,
    STATE(240), 1,
      sym_statement,
    STATE(340), 1,
      sym_variable_access,
    STATE(286), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1743] = 9,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_not,
    ACTIONS(241), 1,
      sym_float,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(52), 1,
      sym_primary_expression,
    STATE(226), 1,
      sym_expression,
    ACTIONS(239), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(36), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(244), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1777] = 9,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(20), 1,
      sym_primary_expression,
    STATE(207), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(26), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(147), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1811] = 9,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_not,
    ACTIONS(251), 1,
      sym_float,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(223), 1,
      sym_expression,
    ACTIONS(249), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(43), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(194), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1845] = 9,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_not,
    ACTIONS(251), 1,
      sym_float,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(227), 1,
      sym_expression,
    ACTIONS(249), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(43), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(194), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1879] = 9,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_not,
    ACTIONS(251), 1,
      sym_float,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(230), 1,
      sym_expression,
    ACTIONS(249), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(43), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(194), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1913] = 9,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_not,
    ACTIONS(251), 1,
      sym_float,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(233), 1,
      sym_expression,
    ACTIONS(249), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(43), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(194), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1947] = 5,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
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
  [1973] = 9,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_not,
    ACTIONS(251), 1,
      sym_float,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(234), 1,
      sym_expression,
    ACTIONS(249), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(43), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(194), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2007] = 9,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_not,
    ACTIONS(251), 1,
      sym_float,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(235), 1,
      sym_expression,
    ACTIONS(249), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(43), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(194), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2041] = 9,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(20), 1,
      sym_primary_expression,
    STATE(155), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(26), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(147), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2075] = 9,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(20), 1,
      sym_primary_expression,
    STATE(142), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(26), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(147), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2109] = 9,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_not,
    ACTIONS(251), 1,
      sym_float,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(197), 1,
      sym_expression,
    ACTIONS(249), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(43), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(194), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2143] = 9,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_not,
    ACTIONS(241), 1,
      sym_float,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(52), 1,
      sym_primary_expression,
    STATE(187), 1,
      sym_expression,
    ACTIONS(239), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(36), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(244), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2177] = 9,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(20), 1,
      sym_primary_expression,
    STATE(149), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(26), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(147), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2211] = 9,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_not,
    ACTIONS(261), 1,
      sym_float,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expression,
    STATE(122), 1,
      sym_expression,
    ACTIONS(259), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(121), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2245] = 9,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_not,
    ACTIONS(261), 1,
      sym_float,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expression,
    STATE(37), 1,
      sym_expression,
    ACTIONS(259), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(121), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2279] = 9,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_not,
    ACTIONS(251), 1,
      sym_float,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(274), 1,
      sym_expression,
    ACTIONS(249), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(43), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(194), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2313] = 11,
    ACTIONS(156), 1,
      anon_sym_real,
    ACTIONS(158), 1,
      anon_sym_array,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(218), 1,
      sym__custom_generic_instantiated_type,
    STATE(224), 1,
      sym__custom_generic_type,
    STATE(228), 1,
      sym__type_name,
    STATE(237), 1,
      sym__custom_type,
    STATE(342), 1,
      sym_type,
    ACTIONS(154), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(46), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(231), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2351] = 9,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_not,
    ACTIONS(241), 1,
      sym_float,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(52), 1,
      sym_primary_expression,
    STATE(209), 1,
      sym_expression,
    ACTIONS(239), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(36), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(244), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2385] = 9,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_not,
    ACTIONS(261), 1,
      sym_float,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expression,
    STATE(123), 1,
      sym_expression,
    ACTIONS(259), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(121), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2419] = 9,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_not,
    ACTIONS(261), 1,
      sym_float,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expression,
    STATE(120), 1,
      sym_expression,
    ACTIONS(259), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(121), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2453] = 11,
    ACTIONS(156), 1,
      anon_sym_real,
    ACTIONS(158), 1,
      anon_sym_array,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(218), 1,
      sym__custom_generic_instantiated_type,
    STATE(224), 1,
      sym__custom_generic_type,
    STATE(228), 1,
      sym__type_name,
    STATE(237), 1,
      sym__custom_type,
    STATE(342), 1,
      sym_type,
    ACTIONS(154), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(55), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(231), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2491] = 9,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_not,
    ACTIONS(241), 1,
      sym_float,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(52), 1,
      sym_primary_expression,
    STATE(266), 1,
      sym_expression,
    ACTIONS(239), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(36), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(244), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2525] = 9,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_not,
    ACTIONS(251), 1,
      sym_float,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(206), 1,
      sym_expression,
    ACTIONS(249), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(43), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(194), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2559] = 9,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_not,
    ACTIONS(251), 1,
      sym_float,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(204), 1,
      sym_expression,
    ACTIONS(249), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(43), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(194), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2593] = 9,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_not,
    ACTIONS(251), 1,
      sym_float,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(269), 1,
      sym_expression,
    ACTIONS(249), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(43), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(194), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2627] = 9,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_not,
    ACTIONS(241), 1,
      sym_float,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(52), 1,
      sym_primary_expression,
    STATE(225), 1,
      sym_expression,
    ACTIONS(239), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(36), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(244), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2661] = 9,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_not,
    ACTIONS(241), 1,
      sym_float,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(52), 1,
      sym_primary_expression,
    STATE(203), 1,
      sym_expression,
    ACTIONS(239), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(36), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(244), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2695] = 4,
    STATE(87), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(268), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(184), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [2718] = 8,
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
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    STATE(89), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2749] = 8,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 1,
      anon_sym_enum,
    ACTIONS(278), 1,
      anon_sym_record,
    ACTIONS(281), 1,
      anon_sym_export,
    ACTIONS(284), 1,
      anon_sym_import,
    ACTIONS(287), 1,
      anon_sym_define,
    ACTIONS(290), 1,
      anon_sym_variables,
    STATE(89), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2780] = 8,
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
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    STATE(89), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2811] = 8,
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
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    STATE(88), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2842] = 4,
    STATE(87), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(209), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [2865] = 10,
    ACTIONS(158), 1,
      anon_sym_array,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(297), 1,
      anon_sym_real,
    STATE(182), 1,
      sym__type_name,
    STATE(218), 1,
      sym__custom_generic_instantiated_type,
    STATE(224), 1,
      sym__custom_generic_type,
    STATE(237), 1,
      sym__custom_type,
    STATE(283), 1,
      sym_type,
    ACTIONS(295), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(231), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2899] = 10,
    ACTIONS(158), 1,
      anon_sym_array,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(297), 1,
      anon_sym_real,
    STATE(182), 1,
      sym__type_name,
    STATE(218), 1,
      sym__custom_generic_instantiated_type,
    STATE(224), 1,
      sym__custom_generic_type,
    STATE(237), 1,
      sym__custom_type,
    STATE(302), 1,
      sym_type,
    ACTIONS(295), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(231), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2933] = 10,
    ACTIONS(301), 1,
      anon_sym_real,
    ACTIONS(303), 1,
      anon_sym_array,
    ACTIONS(305), 1,
      sym_identifier,
    STATE(168), 1,
      sym__type_name,
    STATE(222), 1,
      sym_declaration_type,
    STATE(290), 1,
      sym__custom_type,
    STATE(293), 1,
      sym__custom_generic_type,
    STATE(294), 1,
      sym__custom_generic_instantiated_type,
    ACTIONS(299), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(284), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2967] = 10,
    ACTIONS(301), 1,
      anon_sym_real,
    ACTIONS(303), 1,
      anon_sym_array,
    ACTIONS(305), 1,
      sym_identifier,
    STATE(168), 1,
      sym__type_name,
    STATE(263), 1,
      sym_declaration_type,
    STATE(290), 1,
      sym__custom_type,
    STATE(293), 1,
      sym__custom_generic_type,
    STATE(294), 1,
      sym__custom_generic_instantiated_type,
    ACTIONS(299), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(284), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [3001] = 10,
    ACTIONS(158), 1,
      anon_sym_array,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(297), 1,
      anon_sym_real,
    STATE(182), 1,
      sym__type_name,
    STATE(218), 1,
      sym__custom_generic_instantiated_type,
    STATE(224), 1,
      sym__custom_generic_type,
    STATE(237), 1,
      sym__custom_type,
    STATE(291), 1,
      sym_type,
    ACTIONS(295), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(231), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [3035] = 10,
    ACTIONS(301), 1,
      anon_sym_real,
    ACTIONS(303), 1,
      anon_sym_array,
    ACTIONS(305), 1,
      sym_identifier,
    STATE(168), 1,
      sym__type_name,
    STATE(238), 1,
      sym_declaration_type,
    STATE(290), 1,
      sym__custom_type,
    STATE(293), 1,
      sym__custom_generic_type,
    STATE(294), 1,
      sym__custom_generic_instantiated_type,
    ACTIONS(299), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(284), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [3069] = 10,
    ACTIONS(301), 1,
      anon_sym_real,
    ACTIONS(303), 1,
      anon_sym_array,
    ACTIONS(305), 1,
      sym_identifier,
    STATE(168), 1,
      sym__type_name,
    STATE(236), 1,
      sym_declaration_type,
    STATE(290), 1,
      sym__custom_type,
    STATE(293), 1,
      sym__custom_generic_type,
    STATE(294), 1,
      sym__custom_generic_instantiated_type,
    ACTIONS(299), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(284), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [3103] = 4,
    STATE(101), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(148), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(140), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(209), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [3123] = 4,
    STATE(101), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(310), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(184), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(307), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3143] = 6,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym_float,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primary_expression,
    ACTIONS(259), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3166] = 6,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      sym_float,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(47), 1,
      sym_primary_expression,
    ACTIONS(249), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(43), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3189] = 6,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      sym_float,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(115), 1,
      sym_primary_expression,
    ACTIONS(239), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(36), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3212] = 6,
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
    STATE(26), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3235] = 6,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      sym_float,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(65), 1,
      sym_primary_expression,
    ACTIONS(239), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(36), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3258] = 6,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      sym_float,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(41), 1,
      sym_primary_expression,
    ACTIONS(239), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(36), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3281] = 6,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      sym_float,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(40), 1,
      sym_primary_expression,
    ACTIONS(239), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(36), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3304] = 4,
    STATE(111), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(203), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3323] = 6,
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
    STATE(26), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3346] = 4,
    STATE(111), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(184), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(313), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3365] = 6,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      sym_float,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(119), 1,
      sym_primary_expression,
    ACTIONS(239), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(36), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3388] = 6,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym_float,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(16), 1,
      sym_primary_expression,
    ACTIONS(259), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3411] = 6,
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
    STATE(26), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3434] = 6,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym_constant_repeat1,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(321), 2,
      sym__indent,
      anon_sym_constants,
    ACTIONS(150), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
  [3457] = 6,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      sym_float,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(49), 1,
      sym_primary_expression,
    ACTIONS(249), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(43), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3480] = 6,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym_float,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(15), 1,
      sym_primary_expression,
    ACTIONS(259), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3503] = 6,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      sym_float,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(45), 1,
      sym_primary_expression,
    ACTIONS(249), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(43), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3526] = 4,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(150), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(323), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [3544] = 3,
    ACTIONS(133), 1,
      anon_sym_and,
    ACTIONS(325), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(327), 6,
      anon_sym_not,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3560] = 2,
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
  [3574] = 2,
    ACTIONS(329), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(331), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3588] = 2,
    ACTIONS(325), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(327), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3602] = 6,
    ACTIONS(333), 1,
      anon_sym_constants,
    ACTIONS(335), 1,
      anon_sym_variables,
    ACTIONS(337), 1,
      sym__indent,
    STATE(131), 1,
      sym_block,
    STATE(167), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
    STATE(175), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [3623] = 6,
    ACTIONS(333), 1,
      anon_sym_constants,
    ACTIONS(335), 1,
      anon_sym_variables,
    ACTIONS(337), 1,
      sym__indent,
    STATE(143), 1,
      sym_block,
    STATE(175), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(180), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3644] = 6,
    ACTIONS(333), 1,
      anon_sym_constants,
    ACTIONS(335), 1,
      anon_sym_variables,
    ACTIONS(337), 1,
      sym__indent,
    STATE(136), 1,
      sym_block,
    STATE(125), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(162), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3665] = 6,
    ACTIONS(333), 1,
      anon_sym_constants,
    ACTIONS(335), 1,
      anon_sym_variables,
    ACTIONS(337), 1,
      sym__indent,
    STATE(152), 1,
      sym_block,
    STATE(124), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(179), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3686] = 1,
    ACTIONS(339), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3696] = 1,
    ACTIONS(341), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3706] = 1,
    ACTIONS(343), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3716] = 1,
    ACTIONS(345), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3726] = 1,
    ACTIONS(347), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3736] = 5,
    ACTIONS(349), 1,
      anon_sym_elsif,
    ACTIONS(351), 1,
      anon_sym_else,
    STATE(296), 1,
      sym_else,
    ACTIONS(353), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(138), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [3754] = 1,
    ACTIONS(355), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3764] = 1,
    ACTIONS(357), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3774] = 1,
    ACTIONS(359), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3784] = 1,
    ACTIONS(361), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3794] = 5,
    ACTIONS(349), 1,
      anon_sym_elsif,
    ACTIONS(351), 1,
      anon_sym_else,
    STATE(281), 1,
      sym_else,
    ACTIONS(363), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(160), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [3812] = 1,
    ACTIONS(365), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3822] = 1,
    ACTIONS(367), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3832] = 1,
    ACTIONS(369), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3842] = 2,
    ACTIONS(371), 1,
      anon_sym_and,
    ACTIONS(325), 6,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_or,
      aux_sym_comment_token1,
  [3854] = 1,
    ACTIONS(373), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3864] = 1,
    ACTIONS(375), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3874] = 1,
    ACTIONS(377), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3884] = 1,
    ACTIONS(379), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3894] = 1,
    ACTIONS(65), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3904] = 1,
    ACTIONS(381), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3914] = 1,
    ACTIONS(329), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3924] = 1,
    ACTIONS(383), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3934] = 1,
    ACTIONS(385), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3944] = 1,
    ACTIONS(387), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3954] = 1,
    ACTIONS(389), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3964] = 1,
    ACTIONS(391), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3974] = 1,
    ACTIONS(325), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3984] = 2,
    ACTIONS(179), 1,
      sym__dedent,
    ACTIONS(393), 5,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [3995] = 6,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    ACTIONS(397), 1,
      anon_sym_var,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(220), 1,
      sym_parameter,
    STATE(370), 1,
      sym_var,
    STATE(371), 1,
      sym__parameters,
  [4014] = 2,
    ACTIONS(403), 1,
      sym__dedent,
    ACTIONS(401), 5,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
      sym_identifier,
  [4025] = 3,
    ACTIONS(371), 1,
      anon_sym_and,
    ACTIONS(407), 1,
      anon_sym_or,
    ACTIONS(405), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [4038] = 3,
    ACTIONS(409), 1,
      anon_sym_elsif,
    STATE(160), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
    ACTIONS(412), 3,
      sym__newline,
      anon_sym_else,
      aux_sym_comment_token1,
  [4051] = 2,
    ACTIONS(343), 1,
      sym__dedent,
    ACTIONS(414), 5,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [4062] = 4,
    ACTIONS(333), 1,
      anon_sym_constants,
    ACTIONS(337), 1,
      sym__indent,
    STATE(146), 1,
      sym_block,
    STATE(208), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4076] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(419), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4088] = 3,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(423), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4100] = 5,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      sym__newline,
    STATE(188), 1,
      aux_sym_generics_repeat1,
    STATE(303), 1,
      sym_comment,
  [4116] = 5,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      aux_sym_comment_token1,
    ACTIONS(431), 1,
      sym__newline,
    STATE(165), 1,
      aux_sym_generics_repeat1,
    STATE(297), 1,
      sym_comment,
  [4132] = 4,
    ACTIONS(333), 1,
      anon_sym_constants,
    ACTIONS(337), 1,
      sym__indent,
    STATE(148), 1,
      sym_block,
    STATE(208), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4146] = 4,
    ACTIONS(435), 1,
      sym_identifier,
    STATE(171), 1,
      sym__generic,
    STATE(248), 1,
      sym__generics,
    ACTIONS(433), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4160] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym__generics_repeat1,
    ACTIONS(439), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4172] = 5,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      sym__newline,
    STATE(173), 1,
      aux_sym_generics_repeat1,
    STATE(324), 1,
      sym_comment,
  [4188] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym__generics_repeat1,
    ACTIONS(445), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4200] = 3,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym__generics_repeat1,
    ACTIONS(445), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4212] = 5,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      sym__newline,
    STATE(188), 1,
      aux_sym_generics_repeat1,
    STATE(362), 1,
      sym_comment,
  [4228] = 3,
    ACTIONS(371), 1,
      anon_sym_and,
    ACTIONS(407), 1,
      anon_sym_or,
    ACTIONS(451), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4240] = 3,
    ACTIONS(455), 1,
      anon_sym_variables,
    ACTIONS(453), 2,
      sym__indent,
      anon_sym_constants,
    STATE(175), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [4252] = 3,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym__generics_repeat1,
    ACTIONS(461), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4264] = 3,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym__generics_repeat1,
    ACTIONS(461), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4276] = 3,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(466), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4288] = 4,
    ACTIONS(333), 1,
      anon_sym_constants,
    ACTIONS(337), 1,
      sym__indent,
    STATE(134), 1,
      sym_block,
    STATE(208), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4302] = 4,
    ACTIONS(333), 1,
      anon_sym_constants,
    ACTIONS(337), 1,
      sym__indent,
    STATE(132), 1,
      sym_block,
    STATE(208), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4316] = 3,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym__generics_repeat1,
    ACTIONS(439), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4328] = 4,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(172), 1,
      sym__generic,
    STATE(271), 1,
      sym__generics,
    ACTIONS(433), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4342] = 5,
    ACTIONS(441), 1,
      aux_sym_comment_token1,
    ACTIONS(470), 1,
      anon_sym_generics,
    ACTIONS(472), 1,
      sym__newline,
    STATE(127), 1,
      sym_comment,
    STATE(221), 1,
      sym_generics,
  [4358] = 3,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(476), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4369] = 1,
    ACTIONS(478), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4376] = 1,
    ACTIONS(480), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4383] = 4,
    ACTIONS(482), 1,
      anon_sym_and,
    ACTIONS(484), 1,
      anon_sym_or,
    ACTIONS(486), 1,
      sym__indent,
    STATE(285), 1,
      sym_block,
  [4396] = 3,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_generics_repeat1,
    ACTIONS(491), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4407] = 3,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(419), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4418] = 1,
    ACTIONS(357), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [4425] = 1,
    ACTIONS(496), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4432] = 1,
    ACTIONS(498), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4439] = 3,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(423), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4450] = 1,
    ACTIONS(65), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [4457] = 1,
    ACTIONS(498), 4,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
      sym_identifier,
  [4464] = 1,
    ACTIONS(377), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [4471] = 1,
    ACTIONS(329), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [4478] = 1,
    ACTIONS(502), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4485] = 4,
    ACTIONS(397), 1,
      anon_sym_var,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(282), 1,
      sym_parameter,
    STATE(370), 1,
      sym_var,
  [4498] = 3,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(466), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4509] = 3,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(504), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4520] = 3,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_constant_repeat1,
    ACTIONS(509), 2,
      sym__indent,
      anon_sym_constants,
  [4531] = 4,
    ACTIONS(482), 1,
      anon_sym_and,
    ACTIONS(484), 1,
      anon_sym_or,
    ACTIONS(486), 1,
      sym__indent,
    STATE(211), 1,
      sym_block,
  [4544] = 1,
    ACTIONS(325), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [4551] = 3,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_enum_repeat1,
    ACTIONS(514), 2,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4562] = 2,
    ACTIONS(516), 1,
      anon_sym_and,
    ACTIONS(325), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_or,
  [4571] = 3,
    ACTIONS(371), 1,
      anon_sym_and,
    ACTIONS(407), 1,
      anon_sym_or,
    ACTIONS(518), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4582] = 3,
    ACTIONS(520), 1,
      anon_sym_constants,
    ACTIONS(523), 1,
      sym__indent,
    STATE(208), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4593] = 4,
    ACTIONS(482), 1,
      anon_sym_and,
    ACTIONS(484), 1,
      anon_sym_or,
    ACTIONS(486), 1,
      sym__indent,
    STATE(279), 1,
      sym_block,
  [4606] = 3,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(528), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4617] = 1,
    ACTIONS(530), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [4624] = 1,
    ACTIONS(478), 4,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
      sym_identifier,
  [4631] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_constant_repeat1,
    ACTIONS(532), 2,
      sym__indent,
      anon_sym_constants,
  [4642] = 3,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 1,
      anon_sym_SEMI,
    STATE(214), 1,
      aux_sym__parameters_repeat1,
  [4652] = 2,
    ACTIONS(541), 1,
      anon_sym_from,
    ACTIONS(539), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4660] = 1,
    ACTIONS(543), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4666] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_COLON,
    STATE(205), 1,
      aux_sym_enum_repeat1,
  [4676] = 1,
    ACTIONS(549), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4682] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_COLON,
    STATE(217), 1,
      aux_sym_enum_repeat1,
  [4692] = 3,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(555), 1,
      anon_sym_SEMI,
    STATE(261), 1,
      aux_sym__parameters_repeat1,
  [4702] = 3,
    ACTIONS(441), 1,
      aux_sym_comment_token1,
    ACTIONS(557), 1,
      sym__newline,
    STATE(126), 1,
      sym_comment,
  [4712] = 3,
    ACTIONS(559), 1,
      aux_sym_comment_token1,
    ACTIONS(561), 1,
      sym__newline,
    STATE(151), 1,
      sym_comment,
  [4722] = 3,
    ACTIONS(516), 1,
      anon_sym_and,
    ACTIONS(563), 1,
      anon_sym_RBRACK,
    ACTIONS(565), 1,
      anon_sym_or,
  [4732] = 1,
    ACTIONS(567), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4738] = 1,
    ACTIONS(325), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4744] = 2,
    ACTIONS(482), 1,
      anon_sym_and,
    ACTIONS(325), 2,
      sym__indent,
      anon_sym_or,
  [4752] = 3,
    ACTIONS(516), 1,
      anon_sym_and,
    ACTIONS(565), 1,
      anon_sym_or,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
  [4762] = 3,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(172), 1,
      sym__generic,
    STATE(307), 1,
      sym__generics,
  [4772] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(574), 1,
      anon_sym_RBRACK,
    STATE(264), 1,
      aux_sym_enum_repeat1,
  [4782] = 3,
    ACTIONS(516), 1,
      anon_sym_and,
    ACTIONS(565), 1,
      anon_sym_or,
    ACTIONS(576), 1,
      anon_sym_RBRACK,
  [4792] = 1,
    ACTIONS(578), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4798] = 1,
    ACTIONS(528), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4804] = 3,
    ACTIONS(516), 1,
      anon_sym_and,
    ACTIONS(565), 1,
      anon_sym_or,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
  [4814] = 3,
    ACTIONS(516), 1,
      anon_sym_and,
    ACTIONS(565), 1,
      anon_sym_or,
    ACTIONS(582), 1,
      anon_sym_RBRACK,
  [4824] = 3,
    ACTIONS(516), 1,
      anon_sym_and,
    ACTIONS(565), 1,
      anon_sym_or,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
  [4834] = 3,
    ACTIONS(441), 1,
      aux_sym_comment_token1,
    ACTIONS(586), 1,
      sym__newline,
    STATE(256), 1,
      sym_comment,
  [4844] = 1,
    ACTIONS(588), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4850] = 3,
    ACTIONS(441), 1,
      aux_sym_comment_token1,
    ACTIONS(590), 1,
      sym__newline,
    STATE(251), 1,
      sym_comment,
  [4860] = 1,
    ACTIONS(592), 3,
      sym__newline,
      anon_sym_generics,
      aux_sym_comment_token1,
  [4866] = 3,
    ACTIONS(594), 1,
      aux_sym_comment_token1,
    ACTIONS(596), 1,
      sym__newline,
    STATE(156), 1,
      sym_comment,
  [4876] = 2,
    ACTIONS(598), 1,
      anon_sym_from,
    ACTIONS(539), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4884] = 2,
    ACTIONS(600), 1,
      anon_sym_from,
    ACTIONS(539), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4892] = 1,
    ACTIONS(602), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4898] = 1,
    ACTIONS(65), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4904] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_RBRACK,
    STATE(254), 1,
      aux_sym_enum_repeat1,
  [4914] = 3,
    ACTIONS(514), 1,
      sym__newline,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym_enum_repeat1,
  [4924] = 1,
    ACTIONS(514), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4930] = 2,
    ACTIONS(611), 1,
      sym_identifier,
    ACTIONS(609), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4938] = 3,
    ACTIONS(613), 1,
      anon_sym_generics,
    ACTIONS(615), 1,
      sym__indent,
    STATE(334), 1,
      sym_generics,
  [4948] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_COLON,
    STATE(255), 1,
      aux_sym_enum_repeat1,
  [4958] = 1,
    ACTIONS(385), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4964] = 3,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      sym__newline,
    STATE(275), 1,
      aux_sym_enum_repeat1,
  [4974] = 3,
    ACTIONS(623), 1,
      anon_sym_LBRACK,
    ACTIONS(625), 1,
      sym__newline,
    STATE(308), 1,
      sym__multiple_import,
  [4984] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
    STATE(205), 1,
      aux_sym_enum_repeat1,
  [4994] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(629), 1,
      anon_sym_COLON,
    STATE(205), 1,
      aux_sym_enum_repeat1,
  [5004] = 1,
    ACTIONS(367), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [5010] = 1,
    ACTIONS(631), 3,
      sym__newline,
      anon_sym_generics,
      aux_sym_comment_token1,
  [5016] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_COLON,
    STATE(276), 1,
      aux_sym_enum_repeat1,
  [5026] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(629), 1,
      anon_sym_COLON,
    STATE(272), 1,
      aux_sym_enum_repeat1,
  [5036] = 1,
    ACTIONS(602), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5042] = 3,
    ACTIONS(555), 1,
      anon_sym_SEMI,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      aux_sym__parameters_repeat1,
  [5052] = 1,
    ACTIONS(343), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [5058] = 3,
    ACTIONS(559), 1,
      aux_sym_comment_token1,
    ACTIONS(637), 1,
      sym__newline,
    STATE(140), 1,
      sym_comment,
  [5068] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_RBRACK,
    STATE(205), 1,
      aux_sym_enum_repeat1,
  [5078] = 1,
    ACTIONS(641), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5084] = 1,
    ACTIONS(329), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [5090] = 1,
    ACTIONS(480), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [5096] = 2,
    ACTIONS(643), 1,
      anon_sym_from,
    ACTIONS(539), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5104] = 3,
    ACTIONS(516), 1,
      anon_sym_and,
    ACTIONS(565), 1,
      anon_sym_or,
    ACTIONS(645), 1,
      anon_sym_RBRACK,
  [5114] = 1,
    ACTIONS(647), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [5120] = 2,
    ACTIONS(649), 1,
      sym_identifier,
    ACTIONS(609), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5128] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_COLON,
    STATE(205), 1,
      aux_sym_enum_repeat1,
  [5138] = 1,
    ACTIONS(653), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5144] = 3,
    ACTIONS(516), 1,
      anon_sym_and,
    ACTIONS(565), 1,
      anon_sym_or,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
  [5154] = 3,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      sym__newline,
    STATE(246), 1,
      aux_sym_enum_repeat1,
  [5164] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_COLON,
    STATE(205), 1,
      aux_sym_enum_repeat1,
  [5174] = 2,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(192), 1,
      sym__generic,
  [5181] = 1,
    ACTIONS(514), 2,
      sym__newline,
      anon_sym_COMMA,
  [5186] = 1,
    ACTIONS(661), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5191] = 1,
    ACTIONS(663), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5196] = 1,
    ACTIONS(665), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5201] = 1,
    ACTIONS(534), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5206] = 1,
    ACTIONS(667), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5211] = 1,
    ACTIONS(669), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5216] = 1,
    ACTIONS(671), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5221] = 1,
    ACTIONS(673), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5226] = 1,
    ACTIONS(675), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5231] = 2,
    ACTIONS(486), 1,
      sym__indent,
    STATE(289), 1,
      sym_block,
  [5238] = 1,
    ACTIONS(677), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5243] = 1,
    ACTIONS(588), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5248] = 1,
    ACTIONS(679), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5253] = 1,
    ACTIONS(343), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5258] = 1,
    ACTIONS(567), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5263] = 1,
    ACTIONS(549), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5268] = 2,
    ACTIONS(681), 1,
      sym_identifier,
    STATE(216), 1,
      sym_variable_access,
  [5275] = 1,
    ACTIONS(363), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5280] = 1,
    ACTIONS(683), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5285] = 2,
    ACTIONS(685), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym_parameters,
  [5292] = 2,
    ACTIONS(486), 1,
      sym__indent,
    STATE(280), 1,
      sym_block,
  [5299] = 2,
    ACTIONS(687), 1,
      anon_sym_from,
    ACTIONS(689), 1,
      sym_identifier,
  [5306] = 1,
    ACTIONS(653), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5311] = 1,
    ACTIONS(691), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5316] = 1,
    ACTIONS(693), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5321] = 1,
    ACTIONS(693), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5326] = 2,
    ACTIONS(435), 1,
      sym_identifier,
    STATE(195), 1,
      sym__generic,
  [5333] = 2,
    ACTIONS(689), 1,
      sym_identifier,
    ACTIONS(695), 1,
      anon_sym_from,
  [5340] = 1,
    ACTIONS(697), 1,
      sym_identifier,
  [5344] = 1,
    ACTIONS(700), 1,
      sym__newline,
  [5348] = 1,
    ACTIONS(702), 1,
      anon_sym_to,
  [5352] = 1,
    ACTIONS(704), 1,
      anon_sym_to,
  [5356] = 1,
    ACTIONS(706), 1,
      sym_float,
  [5360] = 1,
    ACTIONS(708), 1,
      sym_integer,
  [5364] = 1,
    ACTIONS(710), 1,
      sym_identifier,
  [5368] = 1,
    ACTIONS(712), 1,
      sym_integer,
  [5372] = 1,
    ACTIONS(714), 1,
      anon_sym_LBRACK,
  [5376] = 1,
    ACTIONS(716), 1,
      sym_identifier,
  [5380] = 1,
    ACTIONS(718), 1,
      anon_sym_of,
  [5384] = 1,
    ACTIONS(706), 1,
      sym_integer,
  [5388] = 1,
    ACTIONS(720), 1,
      anon_sym_to,
  [5392] = 1,
    ACTIONS(722), 1,
      sym_integer,
  [5396] = 1,
    ACTIONS(724), 1,
      anon_sym_EQ,
  [5400] = 1,
    ACTIONS(726), 1,
      sym__newline,
  [5404] = 1,
    ACTIONS(728), 1,
      sym_identifier,
  [5408] = 1,
    ACTIONS(683), 1,
      sym__indent,
  [5412] = 1,
    ACTIONS(730), 1,
      sym__newline,
  [5416] = 1,
    ACTIONS(732), 1,
      sym_identifier,
  [5420] = 1,
    ACTIONS(734), 1,
      anon_sym_until,
  [5424] = 1,
    ACTIONS(736), 1,
      ts_builtin_sym_end,
  [5428] = 1,
    ACTIONS(738), 1,
      anon_sym_from,
  [5432] = 1,
    ACTIONS(740), 1,
      sym_identifier,
  [5436] = 1,
    ACTIONS(742), 1,
      sym_identifier,
  [5440] = 1,
    ACTIONS(744), 1,
      sym_identifier,
  [5444] = 1,
    ACTIONS(746), 1,
      sym_identifier,
  [5448] = 1,
    ACTIONS(748), 1,
      sym__indent,
  [5452] = 1,
    ACTIONS(750), 1,
      sym_identifier,
  [5456] = 1,
    ACTIONS(752), 1,
      sym_identifier,
  [5460] = 1,
    ACTIONS(754), 1,
      sym_identifier,
  [5464] = 1,
    ACTIONS(756), 1,
      sym__newline,
  [5468] = 1,
    ACTIONS(758), 1,
      sym_identifier,
  [5472] = 1,
    ACTIONS(760), 1,
      anon_sym_COLON_EQ,
  [5476] = 1,
    ACTIONS(762), 1,
      sym_identifier,
  [5480] = 1,
    ACTIONS(764), 1,
      sym_identifier,
  [5484] = 1,
    ACTIONS(766), 1,
      sym_identifier,
  [5488] = 1,
    ACTIONS(768), 1,
      sym_integer,
  [5492] = 1,
    ACTIONS(768), 1,
      sym_float,
  [5496] = 1,
    ACTIONS(770), 1,
      sym_identifier,
  [5500] = 1,
    ACTIONS(772), 1,
      sym_float,
  [5504] = 1,
    ACTIONS(774), 1,
      sym_identifier,
  [5508] = 1,
    ACTIONS(693), 1,
      sym__indent,
  [5512] = 1,
    ACTIONS(776), 1,
      anon_sym_EQ,
  [5516] = 1,
    ACTIONS(778), 1,
      sym__newline,
  [5520] = 1,
    ACTIONS(780), 1,
      sym_integer,
  [5524] = 1,
    ACTIONS(782), 1,
      sym_identifier,
  [5528] = 1,
    ACTIONS(784), 1,
      sym_integer,
  [5532] = 1,
    ACTIONS(786), 1,
      sym_identifier,
  [5536] = 1,
    ACTIONS(788), 1,
      sym__newline,
  [5540] = 1,
    ACTIONS(790), 1,
      anon_sym_to,
  [5544] = 1,
    ACTIONS(792), 1,
      sym_identifier,
  [5548] = 1,
    ACTIONS(794), 1,
      anon_sym_EQ,
  [5552] = 1,
    ACTIONS(796), 1,
      sym_identifier,
  [5556] = 1,
    ACTIONS(798), 1,
      sym_identifier,
  [5560] = 1,
    ACTIONS(693), 1,
      sym__indent,
  [5564] = 1,
    ACTIONS(800), 1,
      sym_identifier,
  [5568] = 1,
    ACTIONS(802), 1,
      anon_sym_to,
  [5572] = 1,
    ACTIONS(804), 1,
      anon_sym_to,
  [5576] = 1,
    ACTIONS(806), 1,
      anon_sym_from,
  [5580] = 1,
    ACTIONS(808), 1,
      anon_sym_of,
  [5584] = 1,
    ACTIONS(810), 1,
      sym__newline,
  [5588] = 1,
    ACTIONS(812), 1,
      sym_identifier,
  [5592] = 1,
    ACTIONS(814), 1,
      sym_identifier,
  [5596] = 1,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
  [5600] = 1,
    ACTIONS(818), 1,
      sym__newline,
  [5604] = 1,
    ACTIONS(820), 1,
      sym_identifier,
  [5608] = 1,
    ACTIONS(822), 1,
      sym_integer,
  [5612] = 1,
    ACTIONS(824), 1,
      sym_float,
  [5616] = 1,
    ACTIONS(826), 1,
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
  [SMALL_STATE(15)] = 439,
  [SMALL_STATE(16)] = 471,
  [SMALL_STATE(17)] = 501,
  [SMALL_STATE(18)] = 527,
  [SMALL_STATE(19)] = 553,
  [SMALL_STATE(20)] = 584,
  [SMALL_STATE(21)] = 619,
  [SMALL_STATE(22)] = 650,
  [SMALL_STATE(23)] = 681,
  [SMALL_STATE(24)] = 711,
  [SMALL_STATE(25)] = 741,
  [SMALL_STATE(26)] = 765,
  [SMALL_STATE(27)] = 789,
  [SMALL_STATE(28)] = 813,
  [SMALL_STATE(29)] = 837,
  [SMALL_STATE(30)] = 865,
  [SMALL_STATE(31)] = 889,
  [SMALL_STATE(32)] = 919,
  [SMALL_STATE(33)] = 949,
  [SMALL_STATE(34)] = 972,
  [SMALL_STATE(35)] = 995,
  [SMALL_STATE(36)] = 1037,
  [SMALL_STATE(37)] = 1059,
  [SMALL_STATE(38)] = 1099,
  [SMALL_STATE(39)] = 1123,
  [SMALL_STATE(40)] = 1155,
  [SMALL_STATE(41)] = 1177,
  [SMALL_STATE(42)] = 1203,
  [SMALL_STATE(43)] = 1225,
  [SMALL_STATE(44)] = 1246,
  [SMALL_STATE(45)] = 1267,
  [SMALL_STATE(46)] = 1294,
  [SMALL_STATE(47)] = 1335,
  [SMALL_STATE(48)] = 1360,
  [SMALL_STATE(49)] = 1399,
  [SMALL_STATE(50)] = 1420,
  [SMALL_STATE(51)] = 1447,
  [SMALL_STATE(52)] = 1486,
  [SMALL_STATE(53)] = 1517,
  [SMALL_STATE(54)] = 1544,
  [SMALL_STATE(55)] = 1583,
  [SMALL_STATE(56)] = 1624,
  [SMALL_STATE(57)] = 1665,
  [SMALL_STATE(58)] = 1704,
  [SMALL_STATE(59)] = 1743,
  [SMALL_STATE(60)] = 1777,
  [SMALL_STATE(61)] = 1811,
  [SMALL_STATE(62)] = 1845,
  [SMALL_STATE(63)] = 1879,
  [SMALL_STATE(64)] = 1913,
  [SMALL_STATE(65)] = 1947,
  [SMALL_STATE(66)] = 1973,
  [SMALL_STATE(67)] = 2007,
  [SMALL_STATE(68)] = 2041,
  [SMALL_STATE(69)] = 2075,
  [SMALL_STATE(70)] = 2109,
  [SMALL_STATE(71)] = 2143,
  [SMALL_STATE(72)] = 2177,
  [SMALL_STATE(73)] = 2211,
  [SMALL_STATE(74)] = 2245,
  [SMALL_STATE(75)] = 2279,
  [SMALL_STATE(76)] = 2313,
  [SMALL_STATE(77)] = 2351,
  [SMALL_STATE(78)] = 2385,
  [SMALL_STATE(79)] = 2419,
  [SMALL_STATE(80)] = 2453,
  [SMALL_STATE(81)] = 2491,
  [SMALL_STATE(82)] = 2525,
  [SMALL_STATE(83)] = 2559,
  [SMALL_STATE(84)] = 2593,
  [SMALL_STATE(85)] = 2627,
  [SMALL_STATE(86)] = 2661,
  [SMALL_STATE(87)] = 2695,
  [SMALL_STATE(88)] = 2718,
  [SMALL_STATE(89)] = 2749,
  [SMALL_STATE(90)] = 2780,
  [SMALL_STATE(91)] = 2811,
  [SMALL_STATE(92)] = 2842,
  [SMALL_STATE(93)] = 2865,
  [SMALL_STATE(94)] = 2899,
  [SMALL_STATE(95)] = 2933,
  [SMALL_STATE(96)] = 2967,
  [SMALL_STATE(97)] = 3001,
  [SMALL_STATE(98)] = 3035,
  [SMALL_STATE(99)] = 3069,
  [SMALL_STATE(100)] = 3103,
  [SMALL_STATE(101)] = 3123,
  [SMALL_STATE(102)] = 3143,
  [SMALL_STATE(103)] = 3166,
  [SMALL_STATE(104)] = 3189,
  [SMALL_STATE(105)] = 3212,
  [SMALL_STATE(106)] = 3235,
  [SMALL_STATE(107)] = 3258,
  [SMALL_STATE(108)] = 3281,
  [SMALL_STATE(109)] = 3304,
  [SMALL_STATE(110)] = 3323,
  [SMALL_STATE(111)] = 3346,
  [SMALL_STATE(112)] = 3365,
  [SMALL_STATE(113)] = 3388,
  [SMALL_STATE(114)] = 3411,
  [SMALL_STATE(115)] = 3434,
  [SMALL_STATE(116)] = 3457,
  [SMALL_STATE(117)] = 3480,
  [SMALL_STATE(118)] = 3503,
  [SMALL_STATE(119)] = 3526,
  [SMALL_STATE(120)] = 3544,
  [SMALL_STATE(121)] = 3560,
  [SMALL_STATE(122)] = 3574,
  [SMALL_STATE(123)] = 3588,
  [SMALL_STATE(124)] = 3602,
  [SMALL_STATE(125)] = 3623,
  [SMALL_STATE(126)] = 3644,
  [SMALL_STATE(127)] = 3665,
  [SMALL_STATE(128)] = 3686,
  [SMALL_STATE(129)] = 3696,
  [SMALL_STATE(130)] = 3706,
  [SMALL_STATE(131)] = 3716,
  [SMALL_STATE(132)] = 3726,
  [SMALL_STATE(133)] = 3736,
  [SMALL_STATE(134)] = 3754,
  [SMALL_STATE(135)] = 3764,
  [SMALL_STATE(136)] = 3774,
  [SMALL_STATE(137)] = 3784,
  [SMALL_STATE(138)] = 3794,
  [SMALL_STATE(139)] = 3812,
  [SMALL_STATE(140)] = 3822,
  [SMALL_STATE(141)] = 3832,
  [SMALL_STATE(142)] = 3842,
  [SMALL_STATE(143)] = 3854,
  [SMALL_STATE(144)] = 3864,
  [SMALL_STATE(145)] = 3874,
  [SMALL_STATE(146)] = 3884,
  [SMALL_STATE(147)] = 3894,
  [SMALL_STATE(148)] = 3904,
  [SMALL_STATE(149)] = 3914,
  [SMALL_STATE(150)] = 3924,
  [SMALL_STATE(151)] = 3934,
  [SMALL_STATE(152)] = 3944,
  [SMALL_STATE(153)] = 3954,
  [SMALL_STATE(154)] = 3964,
  [SMALL_STATE(155)] = 3974,
  [SMALL_STATE(156)] = 3984,
  [SMALL_STATE(157)] = 3995,
  [SMALL_STATE(158)] = 4014,
  [SMALL_STATE(159)] = 4025,
  [SMALL_STATE(160)] = 4038,
  [SMALL_STATE(161)] = 4051,
  [SMALL_STATE(162)] = 4062,
  [SMALL_STATE(163)] = 4076,
  [SMALL_STATE(164)] = 4088,
  [SMALL_STATE(165)] = 4100,
  [SMALL_STATE(166)] = 4116,
  [SMALL_STATE(167)] = 4132,
  [SMALL_STATE(168)] = 4146,
  [SMALL_STATE(169)] = 4160,
  [SMALL_STATE(170)] = 4172,
  [SMALL_STATE(171)] = 4188,
  [SMALL_STATE(172)] = 4200,
  [SMALL_STATE(173)] = 4212,
  [SMALL_STATE(174)] = 4228,
  [SMALL_STATE(175)] = 4240,
  [SMALL_STATE(176)] = 4252,
  [SMALL_STATE(177)] = 4264,
  [SMALL_STATE(178)] = 4276,
  [SMALL_STATE(179)] = 4288,
  [SMALL_STATE(180)] = 4302,
  [SMALL_STATE(181)] = 4316,
  [SMALL_STATE(182)] = 4328,
  [SMALL_STATE(183)] = 4342,
  [SMALL_STATE(184)] = 4358,
  [SMALL_STATE(185)] = 4369,
  [SMALL_STATE(186)] = 4376,
  [SMALL_STATE(187)] = 4383,
  [SMALL_STATE(188)] = 4396,
  [SMALL_STATE(189)] = 4407,
  [SMALL_STATE(190)] = 4418,
  [SMALL_STATE(191)] = 4425,
  [SMALL_STATE(192)] = 4432,
  [SMALL_STATE(193)] = 4439,
  [SMALL_STATE(194)] = 4450,
  [SMALL_STATE(195)] = 4457,
  [SMALL_STATE(196)] = 4464,
  [SMALL_STATE(197)] = 4471,
  [SMALL_STATE(198)] = 4478,
  [SMALL_STATE(199)] = 4485,
  [SMALL_STATE(200)] = 4498,
  [SMALL_STATE(201)] = 4509,
  [SMALL_STATE(202)] = 4520,
  [SMALL_STATE(203)] = 4531,
  [SMALL_STATE(204)] = 4544,
  [SMALL_STATE(205)] = 4551,
  [SMALL_STATE(206)] = 4562,
  [SMALL_STATE(207)] = 4571,
  [SMALL_STATE(208)] = 4582,
  [SMALL_STATE(209)] = 4593,
  [SMALL_STATE(210)] = 4606,
  [SMALL_STATE(211)] = 4617,
  [SMALL_STATE(212)] = 4624,
  [SMALL_STATE(213)] = 4631,
  [SMALL_STATE(214)] = 4642,
  [SMALL_STATE(215)] = 4652,
  [SMALL_STATE(216)] = 4660,
  [SMALL_STATE(217)] = 4666,
  [SMALL_STATE(218)] = 4676,
  [SMALL_STATE(219)] = 4682,
  [SMALL_STATE(220)] = 4692,
  [SMALL_STATE(221)] = 4702,
  [SMALL_STATE(222)] = 4712,
  [SMALL_STATE(223)] = 4722,
  [SMALL_STATE(224)] = 4732,
  [SMALL_STATE(225)] = 4738,
  [SMALL_STATE(226)] = 4744,
  [SMALL_STATE(227)] = 4752,
  [SMALL_STATE(228)] = 4762,
  [SMALL_STATE(229)] = 4772,
  [SMALL_STATE(230)] = 4782,
  [SMALL_STATE(231)] = 4792,
  [SMALL_STATE(232)] = 4798,
  [SMALL_STATE(233)] = 4804,
  [SMALL_STATE(234)] = 4814,
  [SMALL_STATE(235)] = 4824,
  [SMALL_STATE(236)] = 4834,
  [SMALL_STATE(237)] = 4844,
  [SMALL_STATE(238)] = 4850,
  [SMALL_STATE(239)] = 4860,
  [SMALL_STATE(240)] = 4866,
  [SMALL_STATE(241)] = 4876,
  [SMALL_STATE(242)] = 4884,
  [SMALL_STATE(243)] = 4892,
  [SMALL_STATE(244)] = 4898,
  [SMALL_STATE(245)] = 4904,
  [SMALL_STATE(246)] = 4914,
  [SMALL_STATE(247)] = 4924,
  [SMALL_STATE(248)] = 4930,
  [SMALL_STATE(249)] = 4938,
  [SMALL_STATE(250)] = 4948,
  [SMALL_STATE(251)] = 4958,
  [SMALL_STATE(252)] = 4964,
  [SMALL_STATE(253)] = 4974,
  [SMALL_STATE(254)] = 4984,
  [SMALL_STATE(255)] = 4994,
  [SMALL_STATE(256)] = 5004,
  [SMALL_STATE(257)] = 5010,
  [SMALL_STATE(258)] = 5016,
  [SMALL_STATE(259)] = 5026,
  [SMALL_STATE(260)] = 5036,
  [SMALL_STATE(261)] = 5042,
  [SMALL_STATE(262)] = 5052,
  [SMALL_STATE(263)] = 5058,
  [SMALL_STATE(264)] = 5068,
  [SMALL_STATE(265)] = 5078,
  [SMALL_STATE(266)] = 5084,
  [SMALL_STATE(267)] = 5090,
  [SMALL_STATE(268)] = 5096,
  [SMALL_STATE(269)] = 5104,
  [SMALL_STATE(270)] = 5114,
  [SMALL_STATE(271)] = 5120,
  [SMALL_STATE(272)] = 5128,
  [SMALL_STATE(273)] = 5138,
  [SMALL_STATE(274)] = 5144,
  [SMALL_STATE(275)] = 5154,
  [SMALL_STATE(276)] = 5164,
  [SMALL_STATE(277)] = 5174,
  [SMALL_STATE(278)] = 5181,
  [SMALL_STATE(279)] = 5186,
  [SMALL_STATE(280)] = 5191,
  [SMALL_STATE(281)] = 5196,
  [SMALL_STATE(282)] = 5201,
  [SMALL_STATE(283)] = 5206,
  [SMALL_STATE(284)] = 5211,
  [SMALL_STATE(285)] = 5216,
  [SMALL_STATE(286)] = 5221,
  [SMALL_STATE(287)] = 5226,
  [SMALL_STATE(288)] = 5231,
  [SMALL_STATE(289)] = 5238,
  [SMALL_STATE(290)] = 5243,
  [SMALL_STATE(291)] = 5248,
  [SMALL_STATE(292)] = 5253,
  [SMALL_STATE(293)] = 5258,
  [SMALL_STATE(294)] = 5263,
  [SMALL_STATE(295)] = 5268,
  [SMALL_STATE(296)] = 5275,
  [SMALL_STATE(297)] = 5280,
  [SMALL_STATE(298)] = 5285,
  [SMALL_STATE(299)] = 5292,
  [SMALL_STATE(300)] = 5299,
  [SMALL_STATE(301)] = 5306,
  [SMALL_STATE(302)] = 5311,
  [SMALL_STATE(303)] = 5316,
  [SMALL_STATE(304)] = 5321,
  [SMALL_STATE(305)] = 5326,
  [SMALL_STATE(306)] = 5333,
  [SMALL_STATE(307)] = 5340,
  [SMALL_STATE(308)] = 5344,
  [SMALL_STATE(309)] = 5348,
  [SMALL_STATE(310)] = 5352,
  [SMALL_STATE(311)] = 5356,
  [SMALL_STATE(312)] = 5360,
  [SMALL_STATE(313)] = 5364,
  [SMALL_STATE(314)] = 5368,
  [SMALL_STATE(315)] = 5372,
  [SMALL_STATE(316)] = 5376,
  [SMALL_STATE(317)] = 5380,
  [SMALL_STATE(318)] = 5384,
  [SMALL_STATE(319)] = 5388,
  [SMALL_STATE(320)] = 5392,
  [SMALL_STATE(321)] = 5396,
  [SMALL_STATE(322)] = 5400,
  [SMALL_STATE(323)] = 5404,
  [SMALL_STATE(324)] = 5408,
  [SMALL_STATE(325)] = 5412,
  [SMALL_STATE(326)] = 5416,
  [SMALL_STATE(327)] = 5420,
  [SMALL_STATE(328)] = 5424,
  [SMALL_STATE(329)] = 5428,
  [SMALL_STATE(330)] = 5432,
  [SMALL_STATE(331)] = 5436,
  [SMALL_STATE(332)] = 5440,
  [SMALL_STATE(333)] = 5444,
  [SMALL_STATE(334)] = 5448,
  [SMALL_STATE(335)] = 5452,
  [SMALL_STATE(336)] = 5456,
  [SMALL_STATE(337)] = 5460,
  [SMALL_STATE(338)] = 5464,
  [SMALL_STATE(339)] = 5468,
  [SMALL_STATE(340)] = 5472,
  [SMALL_STATE(341)] = 5476,
  [SMALL_STATE(342)] = 5480,
  [SMALL_STATE(343)] = 5484,
  [SMALL_STATE(344)] = 5488,
  [SMALL_STATE(345)] = 5492,
  [SMALL_STATE(346)] = 5496,
  [SMALL_STATE(347)] = 5500,
  [SMALL_STATE(348)] = 5504,
  [SMALL_STATE(349)] = 5508,
  [SMALL_STATE(350)] = 5512,
  [SMALL_STATE(351)] = 5516,
  [SMALL_STATE(352)] = 5520,
  [SMALL_STATE(353)] = 5524,
  [SMALL_STATE(354)] = 5528,
  [SMALL_STATE(355)] = 5532,
  [SMALL_STATE(356)] = 5536,
  [SMALL_STATE(357)] = 5540,
  [SMALL_STATE(358)] = 5544,
  [SMALL_STATE(359)] = 5548,
  [SMALL_STATE(360)] = 5552,
  [SMALL_STATE(361)] = 5556,
  [SMALL_STATE(362)] = 5560,
  [SMALL_STATE(363)] = 5564,
  [SMALL_STATE(364)] = 5568,
  [SMALL_STATE(365)] = 5572,
  [SMALL_STATE(366)] = 5576,
  [SMALL_STATE(367)] = 5580,
  [SMALL_STATE(368)] = 5584,
  [SMALL_STATE(369)] = 5588,
  [SMALL_STATE(370)] = 5592,
  [SMALL_STATE(371)] = 5596,
  [SMALL_STATE(372)] = 5600,
  [SMALL_STATE(373)] = 5604,
  [SMALL_STATE(374)] = 5608,
  [SMALL_STATE(375)] = 5612,
  [SMALL_STATE(376)] = 5616,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 2, .production_id = 18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 2, .production_id = 18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 28),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 28), SHIFT_REPEAT(84),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 28),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 28), SHIFT_REPEAT(326),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 27),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 27),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 33),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 33),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 1, .production_id = 13),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 28), SHIFT_REPEAT(63),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 28), SHIFT_REPEAT(353),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 31),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 31),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 30),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 30),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 28), SHIFT_REPEAT(66),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 28), SHIFT_REPEAT(348),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 28), SHIFT_REPEAT(61),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 28), SHIFT_REPEAT(358),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_argument, 1), REDUCE(sym_primary_expression, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(327),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(313),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 32), SHIFT_REPEAT(117),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 32),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 32),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 32), SHIFT_REPEAT(117),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 2, .production_id = 25),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 2, .production_id = 25),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(300),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(306),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(317),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(260),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 32), SHIFT_REPEAT(105),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 32), SHIFT_REPEAT(105),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(360),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(343),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(341),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(335),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(332),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(331),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 32), SHIFT_REPEAT(118),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 32), SHIFT_REPEAT(118),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 32), SHIFT_REPEAT(106),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 32), SHIFT_REPEAT(106),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 30),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_operator, 3, .production_id = 30),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 24),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_operator, 2, .production_id = 24),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 14),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 29),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 15),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 9),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 20),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 21),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 19),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 9),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2), SHIFT_REPEAT(86),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 23), SHIFT_REPEAT(373),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 23),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_instantiated_type, 4, .production_id = 17),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 2, .production_id = 10),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 1, .production_id = 6),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(376),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 10), SHIFT_REPEAT(305),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 10),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 10), SHIFT_REPEAT(277),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_instantiated_type, 3, .production_id = 11),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 13),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic, 1, .production_id = 5),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 22),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 10), SHIFT_REPEAT(323),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 10),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 23), SHIFT_REPEAT(346),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 16),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 13),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2), SHIFT_REPEAT(355),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(336),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(316),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2), SHIFT_REPEAT(35),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 5),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(199),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 26),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 4),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 2), SHIFT(185),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_name, 1, .production_id = 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(337),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_type, 2, .production_id = 7),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 8),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 5),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delclaration_array_type, 7),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 3, .production_id = 8),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_type, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 4, .production_id = 12),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__custom_generic_type, 2, .production_id = 7), SHIFT(178),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 3),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [736] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 4),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
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
