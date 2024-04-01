#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 386
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 37

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
  sym_refersTo = 51,
  aux_sym_comment_token1 = 52,
  sym_identifier = 53,
  anon_sym_DOT = 54,
  sym_true = 55,
  sym_false = 56,
  sym__newline = 57,
  sym__indent = 58,
  sym__dedent = 59,
  sym_program = 60,
  sym_generics = 61,
  sym_enum = 62,
  sym_record_item = 63,
  sym_record = 64,
  sym_export = 65,
  sym__multiple_import = 66,
  sym_import = 67,
  sym_module = 68,
  sym_function_definition = 69,
  sym_parameters = 70,
  sym_assignment = 71,
  sym_expression = 72,
  sym_statement = 73,
  sym_repeat_statement = 74,
  sym_while_statement = 75,
  sym_call_statement = 76,
  sym_argument = 77,
  sym_if_then_statement = 78,
  sym_if = 79,
  sym_elsif = 80,
  sym_else = 81,
  sym_for = 82,
  sym_constant = 83,
  sym_block = 84,
  sym__parameters = 85,
  sym_var = 86,
  sym_parameter = 87,
  sym_variable = 88,
  sym_primary_expression = 89,
  sym_not_operator = 90,
  sym_boolean_operator = 91,
  sym_binary_operator = 92,
  sym_comparison_operator = 93,
  sym_parenthesized_expression = 94,
  sym_basis_type = 95,
  sym_array_type = 96,
  sym_delclaration_array_type = 97,
  sym_declaration_type = 98,
  sym__generic = 99,
  sym__generics = 100,
  sym__type_name = 101,
  sym__custom_type = 102,
  sym__custom_generic_type = 103,
  sym__custom_generic_instantiated_type = 104,
  sym_custom_type = 105,
  sym_type = 106,
  sym_comment = 107,
  sym_variable_access = 108,
  aux_sym_program_repeat1 = 109,
  aux_sym_generics_repeat1 = 110,
  aux_sym_enum_repeat1 = 111,
  aux_sym_record_repeat1 = 112,
  aux_sym_function_definition_repeat1 = 113,
  aux_sym_function_definition_repeat2 = 114,
  aux_sym_call_statement_repeat1 = 115,
  aux_sym_if_then_statement_repeat1 = 116,
  aux_sym_constant_repeat1 = 117,
  aux_sym_block_repeat1 = 118,
  aux_sym__parameters_repeat1 = 119,
  aux_sym_comparison_operator_repeat1 = 120,
  aux_sym__generics_repeat1 = 121,
  aux_sym__custom_generic_instantiated_type_repeat1 = 122,
  aux_sym_variable_access_repeat1 = 123,
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
  field_reference = 13,
  field_right = 14,
  field_type_name = 15,
  field_var = 16,
  field_variables = 17,
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
  [field_reference] = "reference",
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
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 4},
  [8] = {.index = 16, .length = 1},
  [9] = {.index = 17, .length = 1},
  [10] = {.index = 18, .length = 2},
  [11] = {.index = 20, .length = 1},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 2},
  [14] = {.index = 25, .length = 3},
  [15] = {.index = 28, .length = 2},
  [16] = {.index = 30, .length = 1},
  [17] = {.index = 31, .length = 3},
  [18] = {.index = 34, .length = 3},
  [19] = {.index = 37, .length = 1},
  [20] = {.index = 38, .length = 4},
  [21] = {.index = 42, .length = 2},
  [22] = {.index = 44, .length = 4},
  [23] = {.index = 48, .length = 3},
  [24] = {.index = 51, .length = 3},
  [25] = {.index = 54, .length = 1},
  [26] = {.index = 55, .length = 2},
  [27] = {.index = 57, .length = 1},
  [28] = {.index = 58, .length = 1},
  [29] = {.index = 59, .length = 1},
  [30] = {.index = 60, .length = 2},
  [31] = {.index = 62, .length = 4},
  [32] = {.index = 66, .length = 4},
  [33] = {.index = 70, .length = 3},
  [34] = {.index = 73, .length = 1},
  [35] = {.index = 74, .length = 2},
  [36] = {.index = 76, .length = 3},
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
    {field_reference, 0},
    {field_type_name, 1, .inherited = true},
  [9] =
    {field_generic, 1, .inherited = true},
    {field_reference, 0},
    {field_type_name, 1, .inherited = true},
  [12] =
    {field_generic, 1, .inherited = true},
    {field_instatiated_generic, 1, .inherited = true},
    {field_reference, 0},
    {field_type_name, 1, .inherited = true},
  [16] =
    {field_generic, 0},
  [17] =
    {field_generic, 0, .inherited = true},
  [18] =
    {field_generic, 1, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [20] =
    {field_generic, 1},
  [21] =
    {field_name, 1},
    {field_parameters, 2},
  [23] =
    {field_generic, 0, .inherited = true},
    {field_generic, 1, .inherited = true},
  [25] =
    {field_generic, 1, .inherited = true},
    {field_instatiated_generic, 2},
    {field_type_name, 0, .inherited = true},
  [28] =
    {field_generic, 1},
    {field_generic, 2, .inherited = true},
  [30] =
    {field_function, 0},
  [31] =
    {field_name, 1},
    {field_parameters, 2},
    {field_variables, 4},
  [34] =
    {field_constants, 4},
    {field_name, 1},
    {field_parameters, 2},
  [37] =
    {field_generic, 1, .inherited = true},
  [38] =
    {field_generic, 1, .inherited = true},
    {field_instatiated_generic, 2},
    {field_instatiated_generic, 3, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [42] =
    {field_array_access, 1, .inherited = true},
    {field_field_access, 1, .inherited = true},
  [44] =
    {field_constants, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_variables, 4},
  [48] =
    {field_name, 1},
    {field_parameters, 2},
    {field_variables, 5},
  [51] =
    {field_constants, 5},
    {field_name, 1},
    {field_parameters, 2},
  [54] =
    {field_instatiated_generic, 1},
  [55] =
    {field_instatiated_generic, 0, .inherited = true},
    {field_instatiated_generic, 1, .inherited = true},
  [57] =
    {field_argument, 1},
  [58] =
    {field_operators, 1, .inherited = true},
  [59] =
    {field_var, 0},
  [60] =
    {field_field_access, 0},
    {field_field_access, 1},
  [62] =
    {field_array_access, 0, .inherited = true},
    {field_array_access, 1, .inherited = true},
    {field_field_access, 0, .inherited = true},
    {field_field_access, 1, .inherited = true},
  [66] =
    {field_constants, 6},
    {field_name, 1},
    {field_parameters, 2},
    {field_variables, 5},
  [70] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [73] =
    {field_operators, 0},
  [74] =
    {field_operators, 0, .inherited = true},
    {field_operators, 1, .inherited = true},
  [76] =
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
  [8] = 2,
  [9] = 9,
  [10] = 6,
  [11] = 3,
  [12] = 12,
  [13] = 4,
  [14] = 14,
  [15] = 15,
  [16] = 5,
  [17] = 17,
  [18] = 18,
  [19] = 2,
  [20] = 3,
  [21] = 6,
  [22] = 9,
  [23] = 17,
  [24] = 6,
  [25] = 14,
  [26] = 5,
  [27] = 2,
  [28] = 15,
  [29] = 3,
  [30] = 12,
  [31] = 18,
  [32] = 4,
  [33] = 5,
  [34] = 4,
  [35] = 35,
  [36] = 36,
  [37] = 14,
  [38] = 38,
  [39] = 9,
  [40] = 18,
  [41] = 12,
  [42] = 15,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 17,
  [48] = 18,
  [49] = 49,
  [50] = 50,
  [51] = 15,
  [52] = 12,
  [53] = 14,
  [54] = 9,
  [55] = 55,
  [56] = 56,
  [57] = 46,
  [58] = 58,
  [59] = 58,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 63,
  [67] = 64,
  [68] = 63,
  [69] = 64,
  [70] = 70,
  [71] = 71,
  [72] = 61,
  [73] = 62,
  [74] = 62,
  [75] = 62,
  [76] = 71,
  [77] = 63,
  [78] = 71,
  [79] = 79,
  [80] = 61,
  [81] = 64,
  [82] = 82,
  [83] = 83,
  [84] = 61,
  [85] = 71,
  [86] = 17,
  [87] = 55,
  [88] = 88,
  [89] = 89,
  [90] = 89,
  [91] = 56,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 56,
  [101] = 55,
  [102] = 102,
  [103] = 102,
  [104] = 56,
  [105] = 105,
  [106] = 106,
  [107] = 102,
  [108] = 108,
  [109] = 105,
  [110] = 110,
  [111] = 105,
  [112] = 55,
  [113] = 106,
  [114] = 105,
  [115] = 102,
  [116] = 106,
  [117] = 117,
  [118] = 106,
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
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 120,
  [147] = 147,
  [148] = 119,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 122,
  [156] = 123,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 145,
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
  [172] = 168,
  [173] = 170,
  [174] = 174,
  [175] = 175,
  [176] = 174,
  [177] = 177,
  [178] = 165,
  [179] = 169,
  [180] = 168,
  [181] = 181,
  [182] = 164,
  [183] = 183,
  [184] = 184,
  [185] = 171,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 120,
  [192] = 192,
  [193] = 186,
  [194] = 151,
  [195] = 119,
  [196] = 167,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 122,
  [203] = 123,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 181,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 130,
  [213] = 200,
  [214] = 214,
  [215] = 215,
  [216] = 199,
  [217] = 187,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 122,
  [230] = 123,
  [231] = 231,
  [232] = 232,
  [233] = 171,
  [234] = 234,
  [235] = 235,
  [236] = 231,
  [237] = 237,
  [238] = 235,
  [239] = 239,
  [240] = 231,
  [241] = 235,
  [242] = 242,
  [243] = 243,
  [244] = 226,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 120,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 204,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 153,
  [260] = 231,
  [261] = 261,
  [262] = 262,
  [263] = 144,
  [264] = 222,
  [265] = 265,
  [266] = 266,
  [267] = 248,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 145,
  [272] = 243,
  [273] = 273,
  [274] = 220,
  [275] = 246,
  [276] = 276,
  [277] = 277,
  [278] = 247,
  [279] = 119,
  [280] = 235,
  [281] = 281,
  [282] = 256,
  [283] = 283,
  [284] = 242,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 252,
  [290] = 290,
  [291] = 246,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 283,
  [298] = 298,
  [299] = 145,
  [300] = 300,
  [301] = 301,
  [302] = 232,
  [303] = 228,
  [304] = 221,
  [305] = 269,
  [306] = 306,
  [307] = 307,
  [308] = 247,
  [309] = 309,
  [310] = 310,
  [311] = 251,
  [312] = 312,
  [313] = 250,
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
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 314,
  [332] = 332,
  [333] = 256,
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
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 351,
  [353] = 334,
  [354] = 326,
  [355] = 355,
  [356] = 316,
  [357] = 343,
  [358] = 358,
  [359] = 359,
  [360] = 346,
  [361] = 361,
  [362] = 316,
  [363] = 363,
  [364] = 364,
  [365] = 346,
  [366] = 366,
  [367] = 316,
  [368] = 368,
  [369] = 369,
  [370] = 319,
  [371] = 371,
  [372] = 372,
  [373] = 345,
  [374] = 355,
  [375] = 375,
  [376] = 312,
  [377] = 377,
  [378] = 378,
  [379] = 346,
  [380] = 380,
  [381] = 381,
  [382] = 310,
  [383] = 371,
  [384] = 366,
  [385] = 338,
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
      if (eof) ADVANCE(127);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(129);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == ';') ADVANCE(159);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '>') ADVANCE(179);
      if (lookahead == '[') ADVANCE(132);
      if (lookahead == ']') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(52);
      if (lookahead == '{') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '>') ADVANCE(179);
      if (lookahead == '[') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'f') ADVANCE(199);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 't') ADVANCE(235);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(252);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '[') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == 'v') ADVANCE(202);
      if (lookahead == '{') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(252);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '>') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'f') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 't') ADVANCE(235);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(252);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 't') ADVANCE(235);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(252);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(199);
      if (lookahead == 't') ADVANCE(235);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(252);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ',') ADVANCE(129);
      if (lookahead == ';') ADVANCE(159);
      if (lookahead == '{') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(252);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == 'v') ADVANCE(202);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(252);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(141);
      END_STATE();
    case 9:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == 's') ADVANCE(249);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(252);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(66);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(151);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 'w') ADVANCE(218);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(252);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(242);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(252);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 'x') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 'x') ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 123:
      if (lookahead == 'y') ADVANCE(191);
      END_STATE();
    case 124:
      if (lookahead == '}') ADVANCE(197);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 126:
      if (eof) ADVANCE(127);
      if (lookahead == ',') ADVANCE(129);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == ']') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 'v') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(126)
      END_STATE();
    case 127:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_generics);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_from);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_constants);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(141);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(175);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_mod);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(180);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '_') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_integer);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_real);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_string);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_array);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_refersTo);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_refersTo);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(229);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(221);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(252);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(251);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(252);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'f') ADVANCE(213);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(252);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(236);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(252);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(247);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(252);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(166);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(174);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(255);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(257);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(201);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(217);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(233);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(146);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(203);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(238);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(150);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(190);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(214);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(220);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(226);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(223);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(245);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(188);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(211);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(156);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(204);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(216);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(248);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(246);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(196);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(224);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(205);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(239);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(212);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(168);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(250);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(148);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(219);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(186);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(154);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(244);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(200);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(230);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(241);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(198);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(207);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(164);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(143);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(209);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(237);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(206);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(192);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(252);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 126},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 15, .external_lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0, .external_lex_state = 3},
  [41] = {.lex_state = 0, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 15, .external_lex_state = 4},
  [45] = {.lex_state = 15, .external_lex_state = 4},
  [46] = {.lex_state = 48, .external_lex_state = 4},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 48, .external_lex_state = 4},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 48, .external_lex_state = 4},
  [58] = {.lex_state = 48, .external_lex_state = 4},
  [59] = {.lex_state = 48, .external_lex_state = 4},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
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
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 126},
  [89] = {.lex_state = 15},
  [90] = {.lex_state = 15},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 15},
  [93] = {.lex_state = 126},
  [94] = {.lex_state = 126},
  [95] = {.lex_state = 15},
  [96] = {.lex_state = 15},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 15},
  [99] = {.lex_state = 126},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 0, .external_lex_state = 3},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 126, .external_lex_state = 3},
  [125] = {.lex_state = 126, .external_lex_state = 3},
  [126] = {.lex_state = 126, .external_lex_state = 3},
  [127] = {.lex_state = 126, .external_lex_state = 3},
  [128] = {.lex_state = 126},
  [129] = {.lex_state = 126},
  [130] = {.lex_state = 126},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 126},
  [133] = {.lex_state = 126},
  [134] = {.lex_state = 126},
  [135] = {.lex_state = 126},
  [136] = {.lex_state = 126},
  [137] = {.lex_state = 126},
  [138] = {.lex_state = 126},
  [139] = {.lex_state = 15, .external_lex_state = 4},
  [140] = {.lex_state = 126},
  [141] = {.lex_state = 126},
  [142] = {.lex_state = 126},
  [143] = {.lex_state = 126},
  [144] = {.lex_state = 126},
  [145] = {.lex_state = 126},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 126},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 126},
  [151] = {.lex_state = 126},
  [152] = {.lex_state = 126},
  [153] = {.lex_state = 126},
  [154] = {.lex_state = 126},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 48, .external_lex_state = 4},
  [160] = {.lex_state = 48, .external_lex_state = 4},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 6, .external_lex_state = 2},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 126, .external_lex_state = 3},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 6, .external_lex_state = 2},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 6, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 3},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 6, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 0, .external_lex_state = 3},
  [184] = {.lex_state = 0, .external_lex_state = 3},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 0, .external_lex_state = 3},
  [190] = {.lex_state = 0, .external_lex_state = 3},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 3},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6, .external_lex_state = 2},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 126},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 3},
  [207] = {.lex_state = 0, .external_lex_state = 3},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 3},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 6, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 126},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 126},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 0, .external_lex_state = 3},
  [230] = {.lex_state = 0, .external_lex_state = 3},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 126},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 6},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 6, .external_lex_state = 2},
  [249] = {.lex_state = 0, .external_lex_state = 3},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 126},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 3},
  [256] = {.lex_state = 6, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 126, .external_lex_state = 3},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 126},
  [263] = {.lex_state = 126, .external_lex_state = 3},
  [264] = {.lex_state = 126},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 126},
  [267] = {.lex_state = 6},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 6},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 126, .external_lex_state = 3},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 126},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 126},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0, .external_lex_state = 3},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0, .external_lex_state = 2},
  [282] = {.lex_state = 6},
  [283] = {.lex_state = 6},
  [284] = {.lex_state = 0, .external_lex_state = 2},
  [285] = {.lex_state = 0, .external_lex_state = 2},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0, .external_lex_state = 2},
  [289] = {.lex_state = 0, .external_lex_state = 2},
  [290] = {.lex_state = 0, .external_lex_state = 2},
  [291] = {.lex_state = 49},
  [292] = {.lex_state = 0, .external_lex_state = 2},
  [293] = {.lex_state = 0, .external_lex_state = 2},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0, .external_lex_state = 2},
  [296] = {.lex_state = 0, .external_lex_state = 3},
  [297] = {.lex_state = 6},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0, .external_lex_state = 2},
  [300] = {.lex_state = 0, .external_lex_state = 2},
  [301] = {.lex_state = 0, .external_lex_state = 2},
  [302] = {.lex_state = 0, .external_lex_state = 2},
  [303] = {.lex_state = 0, .external_lex_state = 2},
  [304] = {.lex_state = 0, .external_lex_state = 2},
  [305] = {.lex_state = 0, .external_lex_state = 2},
  [306] = {.lex_state = 6},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 49},
  [309] = {.lex_state = 0, .external_lex_state = 3},
  [310] = {.lex_state = 0, .external_lex_state = 2},
  [311] = {.lex_state = 0, .external_lex_state = 2},
  [312] = {.lex_state = 0, .external_lex_state = 2},
  [313] = {.lex_state = 0, .external_lex_state = 2},
  [314] = {.lex_state = 0, .external_lex_state = 2},
  [315] = {.lex_state = 0, .external_lex_state = 2},
  [316] = {.lex_state = 6},
  [317] = {.lex_state = 6},
  [318] = {.lex_state = 6},
  [319] = {.lex_state = 6},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 6},
  [327] = {.lex_state = 0, .external_lex_state = 2},
  [328] = {.lex_state = 6},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 6},
  [331] = {.lex_state = 0, .external_lex_state = 3},
  [332] = {.lex_state = 0, .external_lex_state = 2},
  [333] = {.lex_state = 6},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0, .external_lex_state = 2},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 6},
  [339] = {.lex_state = 6},
  [340] = {.lex_state = 6},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 6},
  [343] = {.lex_state = 6},
  [344] = {.lex_state = 6},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0, .external_lex_state = 2},
  [347] = {.lex_state = 6},
  [348] = {.lex_state = 6},
  [349] = {.lex_state = 6},
  [350] = {.lex_state = 0, .external_lex_state = 3},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 6},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 6},
  [357] = {.lex_state = 6},
  [358] = {.lex_state = 6},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0, .external_lex_state = 2},
  [361] = {.lex_state = 0, .external_lex_state = 2},
  [362] = {.lex_state = 6},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 6},
  [365] = {.lex_state = 0, .external_lex_state = 2},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 6},
  [368] = {.lex_state = 6},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 6},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 1},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0, .external_lex_state = 3},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0, .external_lex_state = 2},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 6},
  [382] = {.lex_state = 0, .external_lex_state = 3},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 6},
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
    [sym_program] = STATE(335),
    [sym_enum] = STATE(99),
    [sym_record] = STATE(99),
    [sym_export] = STATE(99),
    [sym_import] = STATE(99),
    [sym_module] = STATE(88),
    [sym_function_definition] = STATE(99),
    [sym_variable] = STATE(99),
    [aux_sym_program_repeat1] = STATE(99),
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
    STATE(22), 1,
      sym_primary_expression,
    STATE(35), 1,
      sym_variable_access,
    STATE(177), 1,
      sym_expression,
    STATE(197), 1,
      sym_argument,
    ACTIONS(59), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(25), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(146), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [223] = 5,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_DOT,
    STATE(11), 1,
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
  [256] = 8,
    STATE(55), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(69), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 2,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(79), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(71), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [295] = 5,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 16,
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
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_DOT,
    STATE(11), 1,
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
  [361] = 4,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 2,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(87), 8,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
    ACTIONS(89), 9,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [391] = 2,
    ACTIONS(39), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 18,
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
  [417] = 2,
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
  [443] = 2,
    ACTIONS(95), 10,
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
    ACTIONS(97), 11,
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
  [469] = 2,
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
  [495] = 5,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 2,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(99), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
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
  [527] = 2,
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
  [615] = 5,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 14,
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
  [646] = 7,
    ACTIONS(119), 1,
      anon_sym_SLASH,
    STATE(87), 1,
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
    ACTIONS(69), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [681] = 5,
    ACTIONS(119), 1,
      anon_sym_SLASH,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(117), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 11,
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
  [711] = 5,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_DOT,
    STATE(27), 1,
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
  [789] = 5,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_DOT,
    STATE(29), 1,
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
  [819] = 2,
    ACTIONS(97), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 16,
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
  [843] = 5,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      anon_sym_DOT,
    STATE(29), 1,
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
  [873] = 4,
    ACTIONS(119), 1,
      anon_sym_SLASH,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 13,
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
  [901] = 2,
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
  [925] = 2,
    ACTIONS(39), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 16,
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
  [995] = 3,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 3,
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
  [1019] = 11,
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
    STATE(158), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(25), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(146), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1059] = 2,
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
  [1081] = 13,
    ACTIONS(143), 1,
      anon_sym_real,
    ACTIONS(146), 1,
      anon_sym_array,
    ACTIONS(149), 1,
      sym_refersTo,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__dedent,
    STATE(221), 1,
      sym__custom_generic_instantiated_type,
    STATE(228), 1,
      sym__custom_generic_type,
    STATE(232), 1,
      sym__custom_type,
    STATE(233), 1,
      sym__type_name,
    STATE(344), 1,
      sym_type,
    ACTIONS(140), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(38), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(225), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1125] = 7,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    STATE(101), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(159), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(69), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(157), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1157] = 2,
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
  [1179] = 4,
    ACTIONS(169), 1,
      anon_sym_SLASH,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 11,
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
  [1205] = 2,
    ACTIONS(97), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 14,
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
  [1227] = 12,
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
    STATE(35), 1,
      sym_variable_access,
    STATE(177), 1,
      sym_expression,
    STATE(237), 1,
      sym_argument,
    STATE(25), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(146), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1269] = 13,
    ACTIONS(173), 1,
      anon_sym_real,
    ACTIONS(175), 1,
      anon_sym_array,
    ACTIONS(177), 1,
      sym_refersTo,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__dedent,
    STATE(221), 1,
      sym__custom_generic_instantiated_type,
    STATE(228), 1,
      sym__custom_generic_type,
    STATE(232), 1,
      sym__custom_type,
    STATE(233), 1,
      sym__type_name,
    STATE(344), 1,
      sym_type,
    ACTIONS(171), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(38), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(225), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1313] = 13,
    ACTIONS(173), 1,
      anon_sym_real,
    ACTIONS(175), 1,
      anon_sym_array,
    ACTIONS(177), 1,
      sym_refersTo,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym__dedent,
    STATE(221), 1,
      sym__custom_generic_instantiated_type,
    STATE(228), 1,
      sym__custom_generic_type,
    STATE(232), 1,
      sym__custom_type,
    STATE(233), 1,
      sym__type_name,
    STATE(344), 1,
      sym_type,
    ACTIONS(171), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(38), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(225), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1357] = 11,
    ACTIONS(185), 1,
      anon_sym_repeat,
    ACTIONS(187), 1,
      anon_sym_while,
    ACTIONS(189), 1,
      anon_sym_if,
    ACTIONS(191), 1,
      anon_sym_for,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym__dedent,
    STATE(50), 1,
      aux_sym_block_repeat1,
    STATE(131), 1,
      sym_if,
    STATE(234), 1,
      sym_statement,
    STATE(372), 1,
      sym_variable_access,
    STATE(300), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1396] = 5,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(161), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 8,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1423] = 2,
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
  [1444] = 12,
    ACTIONS(173), 1,
      anon_sym_real,
    ACTIONS(175), 1,
      anon_sym_array,
    ACTIONS(177), 1,
      sym_refersTo,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(221), 1,
      sym__custom_generic_instantiated_type,
    STATE(228), 1,
      sym__custom_generic_type,
    STATE(232), 1,
      sym__custom_type,
    STATE(233), 1,
      sym__type_name,
    STATE(344), 1,
      sym_type,
    ACTIONS(171), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(45), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(225), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1485] = 11,
    ACTIONS(197), 1,
      anon_sym_repeat,
    ACTIONS(200), 1,
      anon_sym_while,
    ACTIONS(203), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      anon_sym_for,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__dedent,
    STATE(50), 1,
      aux_sym_block_repeat1,
    STATE(131), 1,
      sym_if,
    STATE(234), 1,
      sym_statement,
    STATE(372), 1,
      sym_variable_access,
    STATE(300), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1524] = 2,
    ACTIONS(97), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 13,
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
  [1545] = 4,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 10,
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
  [1570] = 2,
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
  [1591] = 7,
    ACTIONS(169), 1,
      anon_sym_SLASH,
    STATE(112), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(218), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1622] = 5,
    STATE(56), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(79), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(220), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(67), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(222), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [1649] = 5,
    STATE(56), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(227), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(231), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(224), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [1676] = 11,
    ACTIONS(185), 1,
      anon_sym_repeat,
    ACTIONS(187), 1,
      anon_sym_while,
    ACTIONS(189), 1,
      anon_sym_if,
    ACTIONS(191), 1,
      anon_sym_for,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym__dedent,
    STATE(50), 1,
      aux_sym_block_repeat1,
    STATE(131), 1,
      sym_if,
    STATE(234), 1,
      sym_statement,
    STATE(372), 1,
      sym_variable_access,
    STATE(300), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1715] = 11,
    ACTIONS(185), 1,
      anon_sym_repeat,
    ACTIONS(187), 1,
      anon_sym_while,
    ACTIONS(189), 1,
      anon_sym_if,
    ACTIONS(191), 1,
      anon_sym_for,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(236), 1,
      sym__dedent,
    STATE(57), 1,
      aux_sym_block_repeat1,
    STATE(131), 1,
      sym_if,
    STATE(234), 1,
      sym_statement,
    STATE(372), 1,
      sym_variable_access,
    STATE(300), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1754] = 11,
    ACTIONS(185), 1,
      anon_sym_repeat,
    ACTIONS(187), 1,
      anon_sym_while,
    ACTIONS(189), 1,
      anon_sym_if,
    ACTIONS(191), 1,
      anon_sym_for,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym__dedent,
    STATE(46), 1,
      aux_sym_block_repeat1,
    STATE(131), 1,
      sym_if,
    STATE(234), 1,
      sym_statement,
    STATE(372), 1,
      sym_variable_access,
    STATE(300), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1793] = 12,
    ACTIONS(173), 1,
      anon_sym_real,
    ACTIONS(175), 1,
      anon_sym_array,
    ACTIONS(177), 1,
      sym_refersTo,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(221), 1,
      sym__custom_generic_instantiated_type,
    STATE(228), 1,
      sym__custom_generic_type,
    STATE(232), 1,
      sym__custom_type,
    STATE(233), 1,
      sym__type_name,
    STATE(344), 1,
      sym_type,
    ACTIONS(171), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(44), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(225), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1834] = 9,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_not,
    ACTIONS(246), 1,
      sym_float,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(54), 1,
      sym_primary_expression,
    STATE(230), 1,
      sym_expression,
    ACTIONS(244), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(249), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1868] = 9,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_not,
    ACTIONS(246), 1,
      sym_float,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(54), 1,
      sym_primary_expression,
    STATE(279), 1,
      sym_expression,
    ACTIONS(244), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(249), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1902] = 9,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_not,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(231), 1,
      sym_expression,
    ACTIONS(254), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(53), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(191), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1936] = 9,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_not,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(235), 1,
      sym_expression,
    ACTIONS(254), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(53), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(191), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1970] = 9,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_not,
    ACTIONS(266), 1,
      sym_float,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(9), 1,
      sym_primary_expression,
    STATE(36), 1,
      sym_expression,
    ACTIONS(264), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(14), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(120), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2004] = 9,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_not,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(236), 1,
      sym_expression,
    ACTIONS(254), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(53), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(191), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2038] = 9,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_not,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(238), 1,
      sym_expression,
    ACTIONS(254), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(53), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(191), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2072] = 9,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_not,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(240), 1,
      sym_expression,
    ACTIONS(254), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(53), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(191), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2106] = 9,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_not,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(241), 1,
      sym_expression,
    ACTIONS(254), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(53), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(191), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2140] = 9,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_not,
    ACTIONS(246), 1,
      sym_float,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(54), 1,
      sym_primary_expression,
    STATE(209), 1,
      sym_expression,
    ACTIONS(244), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(249), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2174] = 9,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_not,
    ACTIONS(266), 1,
      sym_float,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(9), 1,
      sym_primary_expression,
    STATE(122), 1,
      sym_expression,
    ACTIONS(264), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(14), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(120), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2208] = 9,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_not,
    ACTIONS(266), 1,
      sym_float,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(9), 1,
      sym_primary_expression,
    STATE(123), 1,
      sym_expression,
    ACTIONS(264), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(14), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(120), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2242] = 9,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_not,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(195), 1,
      sym_expression,
    ACTIONS(254), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(53), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(191), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2276] = 9,
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
    STATE(148), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(25), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(146), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2310] = 9,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_not,
    ACTIONS(266), 1,
      sym_float,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(9), 1,
      sym_primary_expression,
    STATE(119), 1,
      sym_expression,
    ACTIONS(264), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(14), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(120), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2344] = 9,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_not,
    ACTIONS(246), 1,
      sym_float,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(54), 1,
      sym_primary_expression,
    STATE(229), 1,
      sym_expression,
    ACTIONS(244), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(249), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2378] = 9,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_not,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(260), 1,
      sym_expression,
    ACTIONS(254), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(53), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(191), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2412] = 9,
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
    STATE(155), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(25), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(146), 3,
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
    STATE(211), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(25), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(146), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2480] = 9,
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
    STATE(156), 1,
      sym_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(25), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(146), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2514] = 9,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_not,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(280), 1,
      sym_expression,
    ACTIONS(254), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(53), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(191), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2548] = 9,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_not,
    ACTIONS(246), 1,
      sym_float,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(54), 1,
      sym_primary_expression,
    STATE(189), 1,
      sym_expression,
    ACTIONS(244), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(249), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2582] = 9,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_not,
    ACTIONS(246), 1,
      sym_float,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(54), 1,
      sym_primary_expression,
    STATE(207), 1,
      sym_expression,
    ACTIONS(244), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(249), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2616] = 9,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_not,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(203), 1,
      sym_expression,
    ACTIONS(254), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(53), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(191), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2650] = 9,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_not,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(202), 1,
      sym_expression,
    ACTIONS(254), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(53), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(191), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2684] = 5,
    ACTIONS(169), 1,
      anon_sym_SLASH,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 7,
      sym__indent,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2710] = 4,
    STATE(91), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(220), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [2733] = 8,
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
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    STATE(93), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2764] = 11,
    ACTIONS(274), 1,
      anon_sym_real,
    ACTIONS(276), 1,
      anon_sym_array,
    ACTIONS(278), 1,
      sym_refersTo,
    ACTIONS(280), 1,
      sym_identifier,
    STATE(171), 1,
      sym__type_name,
    STATE(243), 1,
      sym_declaration_type,
    STATE(302), 1,
      sym__custom_type,
    STATE(303), 1,
      sym__custom_generic_type,
    STATE(304), 1,
      sym__custom_generic_instantiated_type,
    ACTIONS(272), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(292), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2801] = 11,
    ACTIONS(274), 1,
      anon_sym_real,
    ACTIONS(276), 1,
      anon_sym_array,
    ACTIONS(278), 1,
      sym_refersTo,
    ACTIONS(280), 1,
      sym_identifier,
    STATE(171), 1,
      sym__type_name,
    STATE(272), 1,
      sym_declaration_type,
    STATE(302), 1,
      sym__custom_type,
    STATE(303), 1,
      sym__custom_generic_type,
    STATE(304), 1,
      sym__custom_generic_instantiated_type,
    ACTIONS(272), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(292), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2838] = 4,
    STATE(91), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(285), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(227), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [2861] = 11,
    ACTIONS(175), 1,
      anon_sym_array,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_real,
    ACTIONS(292), 1,
      sym_refersTo,
    STATE(185), 1,
      sym__type_name,
    STATE(221), 1,
      sym__custom_generic_instantiated_type,
    STATE(228), 1,
      sym__custom_generic_type,
    STATE(232), 1,
      sym__custom_type,
    STATE(287), 1,
      sym_type,
    ACTIONS(288), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(225), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2898] = 8,
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
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    STATE(94), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2929] = 8,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      anon_sym_enum,
    ACTIONS(301), 1,
      anon_sym_record,
    ACTIONS(304), 1,
      anon_sym_export,
    ACTIONS(307), 1,
      anon_sym_import,
    ACTIONS(310), 1,
      anon_sym_define,
    ACTIONS(313), 1,
      anon_sym_variables,
    STATE(94), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [2960] = 11,
    ACTIONS(175), 1,
      anon_sym_array,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_real,
    ACTIONS(292), 1,
      sym_refersTo,
    STATE(185), 1,
      sym__type_name,
    STATE(221), 1,
      sym__custom_generic_instantiated_type,
    STATE(228), 1,
      sym__custom_generic_type,
    STATE(232), 1,
      sym__custom_type,
    STATE(294), 1,
      sym_type,
    ACTIONS(288), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(225), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2997] = 11,
    ACTIONS(175), 1,
      anon_sym_array,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_real,
    ACTIONS(292), 1,
      sym_refersTo,
    STATE(185), 1,
      sym__type_name,
    STATE(221), 1,
      sym__custom_generic_instantiated_type,
    STATE(228), 1,
      sym__custom_generic_type,
    STATE(232), 1,
      sym__custom_type,
    STATE(298), 1,
      sym_type,
    ACTIONS(288), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(225), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [3034] = 11,
    ACTIONS(274), 1,
      anon_sym_real,
    ACTIONS(276), 1,
      anon_sym_array,
    ACTIONS(278), 1,
      sym_refersTo,
    ACTIONS(280), 1,
      sym_identifier,
    STATE(171), 1,
      sym__type_name,
    STATE(244), 1,
      sym_declaration_type,
    STATE(302), 1,
      sym__custom_type,
    STATE(303), 1,
      sym__custom_generic_type,
    STATE(304), 1,
      sym__custom_generic_instantiated_type,
    ACTIONS(272), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(292), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [3071] = 11,
    ACTIONS(274), 1,
      anon_sym_real,
    ACTIONS(276), 1,
      anon_sym_array,
    ACTIONS(278), 1,
      sym_refersTo,
    ACTIONS(280), 1,
      sym_identifier,
    STATE(171), 1,
      sym__type_name,
    STATE(226), 1,
      sym_declaration_type,
    STATE(302), 1,
      sym__custom_type,
    STATE(303), 1,
      sym__custom_generic_type,
    STATE(304), 1,
      sym__custom_generic_instantiated_type,
    ACTIONS(272), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(292), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [3108] = 8,
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
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    STATE(94), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [3139] = 4,
    STATE(100), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(319), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(316), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3159] = 4,
    STATE(100), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(220), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [3179] = 6,
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
    STATE(25), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3202] = 6,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      sym_float,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(12), 1,
      sym_primary_expression,
    ACTIONS(264), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(14), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3225] = 4,
    STATE(104), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(325), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(322), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3244] = 6,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(48), 1,
      sym_primary_expression,
    ACTIONS(254), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(53), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3267] = 6,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym_float,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(86), 1,
      sym_primary_expression,
    ACTIONS(244), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3290] = 6,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym_float,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(41), 1,
      sym_primary_expression,
    ACTIONS(244), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3313] = 6,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym_float,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(121), 1,
      sym_primary_expression,
    ACTIONS(244), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3336] = 6,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym_float,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(40), 1,
      sym_primary_expression,
    ACTIONS(244), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3359] = 6,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym_float,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(117), 1,
      sym_primary_expression,
    ACTIONS(244), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3382] = 6,
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
    STATE(25), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3405] = 4,
    STATE(104), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(218), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(220), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3424] = 6,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(47), 1,
      sym_primary_expression,
    ACTIONS(254), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(53), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3447] = 6,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      sym_float,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(18), 1,
      sym_primary_expression,
    ACTIONS(264), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(14), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3470] = 6,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_float,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(52), 1,
      sym_primary_expression,
    ACTIONS(254), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(53), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3493] = 6,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      sym_float,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primary_expression,
    ACTIONS(264), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(14), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3516] = 6,
    ACTIONS(169), 1,
      anon_sym_SLASH,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_constant_repeat1,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(330), 2,
      sym__indent,
      anon_sym_constants,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
  [3539] = 6,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(23), 1,
      sym_primary_expression,
    ACTIONS(55), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(25), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3562] = 2,
    ACTIONS(332), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(334), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3576] = 2,
    ACTIONS(69), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(71), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3590] = 4,
    ACTIONS(169), 1,
      anon_sym_SLASH,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(336), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [3608] = 2,
    ACTIONS(338), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(340), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3622] = 3,
    ACTIONS(136), 1,
      anon_sym_and,
    ACTIONS(338), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(340), 6,
      anon_sym_not,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3638] = 6,
    ACTIONS(342), 1,
      anon_sym_constants,
    ACTIONS(344), 1,
      anon_sym_variables,
    ACTIONS(346), 1,
      sym__indent,
    STATE(140), 1,
      sym_block,
    STATE(126), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(162), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3659] = 6,
    ACTIONS(342), 1,
      anon_sym_constants,
    ACTIONS(344), 1,
      anon_sym_variables,
    ACTIONS(346), 1,
      sym__indent,
    STATE(135), 1,
      sym_block,
    STATE(166), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(175), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3680] = 6,
    ACTIONS(342), 1,
      anon_sym_constants,
    ACTIONS(344), 1,
      anon_sym_variables,
    ACTIONS(346), 1,
      sym__indent,
    STATE(134), 1,
      sym_block,
    STATE(166), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(183), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3701] = 6,
    ACTIONS(342), 1,
      anon_sym_constants,
    ACTIONS(344), 1,
      anon_sym_variables,
    ACTIONS(346), 1,
      sym__indent,
    STATE(154), 1,
      sym_block,
    STATE(125), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(184), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3722] = 1,
    ACTIONS(348), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3732] = 1,
    ACTIONS(350), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3742] = 1,
    ACTIONS(352), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3752] = 5,
    ACTIONS(354), 1,
      anon_sym_elsif,
    ACTIONS(356), 1,
      anon_sym_else,
    STATE(315), 1,
      sym_else,
    ACTIONS(358), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(149), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [3770] = 1,
    ACTIONS(360), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3780] = 1,
    ACTIONS(362), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3790] = 1,
    ACTIONS(364), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3800] = 1,
    ACTIONS(366), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3810] = 1,
    ACTIONS(368), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3820] = 1,
    ACTIONS(370), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3830] = 1,
    ACTIONS(372), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3840] = 2,
    ACTIONS(376), 1,
      sym__dedent,
    ACTIONS(374), 6,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
      sym_refersTo,
      sym_identifier,
  [3852] = 1,
    ACTIONS(378), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3862] = 1,
    ACTIONS(380), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3872] = 1,
    ACTIONS(382), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3882] = 1,
    ACTIONS(384), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3892] = 1,
    ACTIONS(386), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3902] = 1,
    ACTIONS(388), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3912] = 1,
    ACTIONS(69), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3922] = 1,
    ACTIONS(390), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3932] = 1,
    ACTIONS(332), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3942] = 5,
    ACTIONS(354), 1,
      anon_sym_elsif,
    ACTIONS(356), 1,
      anon_sym_else,
    STATE(290), 1,
      sym_else,
    ACTIONS(392), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(161), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [3960] = 1,
    ACTIONS(394), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3970] = 1,
    ACTIONS(396), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3980] = 1,
    ACTIONS(398), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [3990] = 1,
    ACTIONS(400), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [4000] = 1,
    ACTIONS(402), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [4010] = 1,
    ACTIONS(338), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4020] = 2,
    ACTIONS(404), 1,
      anon_sym_and,
    ACTIONS(338), 6,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_or,
      aux_sym_comment_token1,
  [4032] = 6,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    ACTIONS(408), 1,
      anon_sym_var,
    ACTIONS(410), 1,
      sym_identifier,
    STATE(223), 1,
      sym_parameter,
    STATE(324), 1,
      sym__parameters,
    STATE(328), 1,
      sym_var,
  [4051] = 3,
    ACTIONS(404), 1,
      anon_sym_and,
    ACTIONS(414), 1,
      anon_sym_or,
    ACTIONS(412), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [4064] = 2,
    ACTIONS(212), 1,
      sym__dedent,
    ACTIONS(416), 5,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [4075] = 2,
    ACTIONS(388), 1,
      sym__dedent,
    ACTIONS(418), 5,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [4086] = 3,
    ACTIONS(420), 1,
      anon_sym_elsif,
    STATE(161), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
    ACTIONS(423), 3,
      sym__newline,
      anon_sym_else,
      aux_sym_comment_token1,
  [4099] = 4,
    ACTIONS(342), 1,
      anon_sym_constants,
    ACTIONS(346), 1,
      sym__indent,
    STATE(147), 1,
      sym_block,
    STATE(198), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4113] = 5,
    ACTIONS(425), 1,
      anon_sym_generics,
    ACTIONS(427), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      sym__newline,
    STATE(127), 1,
      sym_comment,
    STATE(224), 1,
      sym_generics,
  [4129] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym__generics_repeat1,
    ACTIONS(433), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4141] = 3,
    ACTIONS(435), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__generics_repeat1,
    ACTIONS(438), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4153] = 3,
    ACTIONS(442), 1,
      anon_sym_variables,
    ACTIONS(440), 2,
      sym__indent,
      anon_sym_constants,
    STATE(166), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [4165] = 3,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(447), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4177] = 5,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(185), 1,
      sym__type_name,
    STATE(242), 1,
      sym__custom_type,
    STATE(250), 1,
      sym__custom_generic_type,
    STATE(251), 1,
      sym__custom_generic_instantiated_type,
  [4193] = 5,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      aux_sym_comment_token1,
    ACTIONS(455), 1,
      sym__newline,
    STATE(192), 1,
      aux_sym_generics_repeat1,
    STATE(310), 1,
      sym_comment,
  [4209] = 5,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      aux_sym_comment_token1,
    ACTIONS(457), 1,
      sym__newline,
    STATE(169), 1,
      aux_sym_generics_repeat1,
    STATE(314), 1,
      sym_comment,
  [4225] = 4,
    ACTIONS(461), 1,
      sym_identifier,
    STATE(174), 1,
      sym__generic,
    STATE(256), 1,
      sym__generics,
    ACTIONS(459), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4239] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    STATE(171), 1,
      sym__type_name,
    STATE(284), 1,
      sym__custom_type,
    STATE(311), 1,
      sym__custom_generic_instantiated_type,
    STATE(313), 1,
      sym__custom_generic_type,
  [4255] = 5,
    ACTIONS(427), 1,
      aux_sym_comment_token1,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      sym__newline,
    STATE(179), 1,
      aux_sym_generics_repeat1,
    STATE(331), 1,
      sym_comment,
  [4271] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym__generics_repeat1,
    ACTIONS(467), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4283] = 4,
    ACTIONS(342), 1,
      anon_sym_constants,
    ACTIONS(346), 1,
      sym__indent,
    STATE(136), 1,
      sym_block,
    STATE(198), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4297] = 3,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym__generics_repeat1,
    ACTIONS(467), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4309] = 3,
    ACTIONS(404), 1,
      anon_sym_and,
    ACTIONS(414), 1,
      anon_sym_or,
    ACTIONS(471), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4321] = 3,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym__generics_repeat1,
    ACTIONS(438), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4333] = 5,
    ACTIONS(427), 1,
      aux_sym_comment_token1,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      sym__newline,
    STATE(192), 1,
      aux_sym_generics_repeat1,
    STATE(382), 1,
      sym_comment,
  [4349] = 5,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(233), 1,
      sym__type_name,
    STATE(242), 1,
      sym__custom_type,
    STATE(250), 1,
      sym__custom_generic_type,
    STATE(251), 1,
      sym__custom_generic_instantiated_type,
  [4365] = 3,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(478), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4377] = 3,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__generics_repeat1,
    ACTIONS(433), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4389] = 4,
    ACTIONS(342), 1,
      anon_sym_constants,
    ACTIONS(346), 1,
      sym__indent,
    STATE(132), 1,
      sym_block,
    STATE(198), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4403] = 4,
    ACTIONS(342), 1,
      anon_sym_constants,
    ACTIONS(346), 1,
      sym__indent,
    STATE(138), 1,
      sym_block,
    STATE(198), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4417] = 4,
    ACTIONS(480), 1,
      sym_identifier,
    STATE(176), 1,
      sym__generic,
    STATE(282), 1,
      sym__generics,
    ACTIONS(459), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4431] = 3,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(485), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4443] = 1,
    ACTIONS(487), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4450] = 4,
    ACTIONS(408), 1,
      anon_sym_var,
    ACTIONS(410), 1,
      sym_identifier,
    STATE(286), 1,
      sym_parameter,
    STATE(328), 1,
      sym_var,
  [4463] = 4,
    ACTIONS(489), 1,
      anon_sym_and,
    ACTIONS(491), 1,
      anon_sym_or,
    ACTIONS(493), 1,
      sym__indent,
    STATE(293), 1,
      sym_block,
  [4476] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_constant_repeat1,
    ACTIONS(495), 2,
      sym__indent,
      anon_sym_constants,
  [4487] = 1,
    ACTIONS(69), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [4494] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_generics_repeat1,
    ACTIONS(500), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4505] = 3,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(485), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4516] = 1,
    ACTIONS(396), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [4523] = 1,
    ACTIONS(332), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [4530] = 3,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(447), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4541] = 3,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(509), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4552] = 3,
    ACTIONS(511), 1,
      anon_sym_constants,
    ACTIONS(514), 1,
      sym__indent,
    STATE(198), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4563] = 1,
    ACTIONS(516), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4570] = 1,
    ACTIONS(518), 4,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
      sym_identifier,
  [4577] = 1,
    ACTIONS(520), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4584] = 1,
    ACTIONS(338), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [4591] = 2,
    ACTIONS(522), 1,
      anon_sym_and,
    ACTIONS(338), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_or,
  [4600] = 3,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_enum_repeat1,
    ACTIONS(527), 2,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4611] = 3,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(529), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4622] = 3,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_constant_repeat1,
    ACTIONS(534), 2,
      sym__indent,
      anon_sym_constants,
  [4633] = 4,
    ACTIONS(489), 1,
      anon_sym_and,
    ACTIONS(491), 1,
      anon_sym_or,
    ACTIONS(493), 1,
      sym__indent,
    STATE(215), 1,
      sym_block,
  [4646] = 3,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(478), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4657] = 4,
    ACTIONS(489), 1,
      anon_sym_and,
    ACTIONS(491), 1,
      anon_sym_or,
    ACTIONS(493), 1,
      sym__indent,
    STATE(285), 1,
      sym_block,
  [4670] = 1,
    ACTIONS(536), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4677] = 3,
    ACTIONS(404), 1,
      anon_sym_and,
    ACTIONS(414), 1,
      anon_sym_or,
    ACTIONS(538), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4688] = 1,
    ACTIONS(352), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [4695] = 1,
    ACTIONS(518), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4702] = 3,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(543), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4713] = 1,
    ACTIONS(545), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [4720] = 1,
    ACTIONS(516), 4,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
      sym_identifier,
  [4727] = 1,
    ACTIONS(487), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4733] = 1,
    ACTIONS(547), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4739] = 1,
    ACTIONS(549), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4745] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_COLON,
    STATE(204), 1,
      aux_sym_enum_repeat1,
  [4755] = 1,
    ACTIONS(555), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4761] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_COLON,
    STATE(220), 1,
      aux_sym_enum_repeat1,
  [4771] = 3,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    ACTIONS(561), 1,
      anon_sym_SEMI,
    STATE(268), 1,
      aux_sym__parameters_repeat1,
  [4781] = 3,
    ACTIONS(427), 1,
      aux_sym_comment_token1,
    ACTIONS(563), 1,
      sym__newline,
    STATE(124), 1,
      sym_comment,
  [4791] = 1,
    ACTIONS(565), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4797] = 3,
    ACTIONS(567), 1,
      aux_sym_comment_token1,
    ACTIONS(569), 1,
      sym__newline,
    STATE(153), 1,
      sym_comment,
  [4807] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      aux_sym_enum_repeat1,
  [4817] = 1,
    ACTIONS(573), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4823] = 1,
    ACTIONS(338), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4829] = 2,
    ACTIONS(489), 1,
      anon_sym_and,
    ACTIONS(338), 2,
      sym__indent,
      anon_sym_or,
  [4837] = 3,
    ACTIONS(522), 1,
      anon_sym_and,
    ACTIONS(575), 1,
      anon_sym_RBRACK,
    ACTIONS(577), 1,
      anon_sym_or,
  [4847] = 1,
    ACTIONS(579), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4853] = 3,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(176), 1,
      sym__generic,
    STATE(333), 1,
      sym__generics,
  [4863] = 3,
    ACTIONS(584), 1,
      aux_sym_comment_token1,
    ACTIONS(586), 1,
      sym__newline,
    STATE(159), 1,
      sym_comment,
  [4873] = 3,
    ACTIONS(522), 1,
      anon_sym_and,
    ACTIONS(577), 1,
      anon_sym_or,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
  [4883] = 3,
    ACTIONS(522), 1,
      anon_sym_and,
    ACTIONS(577), 1,
      anon_sym_or,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
  [4893] = 1,
    ACTIONS(543), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4899] = 3,
    ACTIONS(522), 1,
      anon_sym_and,
    ACTIONS(577), 1,
      anon_sym_or,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
  [4909] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_COLON,
    STATE(262), 1,
      aux_sym_enum_repeat1,
  [4919] = 3,
    ACTIONS(522), 1,
      anon_sym_and,
    ACTIONS(577), 1,
      anon_sym_or,
    ACTIONS(596), 1,
      anon_sym_RBRACK,
  [4929] = 3,
    ACTIONS(522), 1,
      anon_sym_and,
    ACTIONS(577), 1,
      anon_sym_or,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
  [4939] = 1,
    ACTIONS(600), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4945] = 3,
    ACTIONS(427), 1,
      aux_sym_comment_token1,
    ACTIONS(602), 1,
      sym__newline,
    STATE(263), 1,
      sym_comment,
  [4955] = 3,
    ACTIONS(427), 1,
      aux_sym_comment_token1,
    ACTIONS(604), 1,
      sym__newline,
    STATE(259), 1,
      sym_comment,
  [4965] = 1,
    ACTIONS(606), 3,
      sym__newline,
      anon_sym_generics,
      aux_sym_comment_token1,
  [4971] = 2,
    ACTIONS(608), 1,
      anon_sym_from,
    ACTIONS(610), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4979] = 2,
    ACTIONS(612), 1,
      anon_sym_from,
    ACTIONS(610), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4987] = 1,
    ACTIONS(614), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4993] = 1,
    ACTIONS(69), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4999] = 1,
    ACTIONS(616), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5005] = 1,
    ACTIONS(618), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5011] = 1,
    ACTIONS(527), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [5017] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      anon_sym_RBRACK,
    STATE(261), 1,
      aux_sym_enum_repeat1,
  [5027] = 3,
    ACTIONS(527), 1,
      sym__newline,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym_enum_repeat1,
  [5037] = 3,
    ACTIONS(625), 1,
      anon_sym_generics,
    ACTIONS(627), 1,
      sym__indent,
    STATE(350), 1,
      sym_generics,
  [5047] = 2,
    ACTIONS(631), 1,
      sym_identifier,
    ACTIONS(629), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5055] = 3,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      sym__newline,
    STATE(281), 1,
      aux_sym_enum_repeat1,
  [5065] = 3,
    ACTIONS(637), 1,
      anon_sym_LBRACK,
    ACTIONS(639), 1,
      sym__newline,
    STATE(361), 1,
      sym__multiple_import,
  [5075] = 1,
    ACTIONS(400), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [5081] = 3,
    ACTIONS(522), 1,
      anon_sym_and,
    ACTIONS(577), 1,
      anon_sym_or,
    ACTIONS(641), 1,
      anon_sym_RBRACK,
  [5091] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      aux_sym_enum_repeat1,
  [5101] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_COLON,
    STATE(204), 1,
      aux_sym_enum_repeat1,
  [5111] = 1,
    ACTIONS(386), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [5117] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_COLON,
    STATE(274), 1,
      aux_sym_enum_repeat1,
  [5127] = 1,
    ACTIONS(649), 3,
      sym__newline,
      anon_sym_generics,
      aux_sym_comment_token1,
  [5133] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_COLON,
    STATE(277), 1,
      aux_sym_enum_repeat1,
  [5143] = 1,
    ACTIONS(614), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5149] = 3,
    ACTIONS(561), 1,
      anon_sym_SEMI,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym__parameters_repeat1,
  [5159] = 1,
    ACTIONS(653), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5165] = 3,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    ACTIONS(657), 1,
      anon_sym_SEMI,
    STATE(270), 1,
      aux_sym__parameters_repeat1,
  [5175] = 1,
    ACTIONS(388), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [5181] = 3,
    ACTIONS(567), 1,
      aux_sym_comment_token1,
    ACTIONS(660), 1,
      sym__newline,
    STATE(144), 1,
      sym_comment,
  [5191] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      aux_sym_enum_repeat1,
  [5201] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(664), 1,
      anon_sym_COLON,
    STATE(204), 1,
      aux_sym_enum_repeat1,
  [5211] = 2,
    ACTIONS(666), 1,
      anon_sym_from,
    ACTIONS(610), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5219] = 1,
    ACTIONS(668), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [5225] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(670), 1,
      anon_sym_COLON,
    STATE(204), 1,
      aux_sym_enum_repeat1,
  [5235] = 2,
    ACTIONS(672), 1,
      anon_sym_from,
    ACTIONS(610), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5243] = 1,
    ACTIONS(332), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [5249] = 3,
    ACTIONS(522), 1,
      anon_sym_and,
    ACTIONS(577), 1,
      anon_sym_or,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
  [5259] = 3,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(676), 1,
      sym__newline,
    STATE(254), 1,
      aux_sym_enum_repeat1,
  [5269] = 2,
    ACTIONS(678), 1,
      sym_identifier,
    ACTIONS(629), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5277] = 2,
    ACTIONS(461), 1,
      sym_identifier,
    STATE(200), 1,
      sym__generic,
  [5284] = 1,
    ACTIONS(600), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5289] = 1,
    ACTIONS(680), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5294] = 1,
    ACTIONS(655), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5299] = 1,
    ACTIONS(682), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5304] = 1,
    ACTIONS(684), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5309] = 1,
    ACTIONS(527), 2,
      sym__newline,
      anon_sym_COMMA,
  [5314] = 1,
    ACTIONS(686), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5319] = 2,
    ACTIONS(688), 1,
      anon_sym_from,
    ACTIONS(690), 1,
      sym_identifier,
  [5326] = 1,
    ACTIONS(692), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5331] = 1,
    ACTIONS(694), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5336] = 1,
    ACTIONS(696), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5341] = 1,
    ACTIONS(698), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5346] = 2,
    ACTIONS(493), 1,
      sym__indent,
    STATE(301), 1,
      sym_block,
  [5353] = 2,
    ACTIONS(480), 1,
      sym_identifier,
    STATE(213), 1,
      sym__generic,
  [5360] = 1,
    ACTIONS(700), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5365] = 1,
    ACTIONS(388), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5370] = 1,
    ACTIONS(702), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5375] = 1,
    ACTIONS(704), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5380] = 1,
    ACTIONS(579), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5385] = 1,
    ACTIONS(573), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5390] = 1,
    ACTIONS(555), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5395] = 1,
    ACTIONS(653), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5400] = 2,
    ACTIONS(706), 1,
      sym_identifier,
    STATE(219), 1,
      sym_variable_access,
  [5407] = 2,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    STATE(163), 1,
      sym_parameters,
  [5414] = 2,
    ACTIONS(690), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_from,
  [5421] = 2,
    ACTIONS(493), 1,
      sym__indent,
    STATE(288), 1,
      sym_block,
  [5428] = 1,
    ACTIONS(712), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5433] = 1,
    ACTIONS(618), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5438] = 1,
    ACTIONS(712), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5443] = 1,
    ACTIONS(616), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5448] = 1,
    ACTIONS(714), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5453] = 1,
    ACTIONS(392), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5458] = 1,
    ACTIONS(716), 1,
      sym_identifier,
  [5462] = 1,
    ACTIONS(718), 1,
      sym_identifier,
  [5466] = 1,
    ACTIONS(720), 1,
      sym_identifier,
  [5470] = 1,
    ACTIONS(722), 1,
      sym_identifier,
  [5474] = 1,
    ACTIONS(724), 1,
      anon_sym_LBRACK,
  [5478] = 1,
    ACTIONS(726), 1,
      anon_sym_of,
  [5482] = 1,
    ACTIONS(728), 1,
      sym_integer,
  [5486] = 1,
    ACTIONS(730), 1,
      anon_sym_to,
  [5490] = 1,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
  [5494] = 1,
    ACTIONS(734), 1,
      sym_integer,
  [5498] = 1,
    ACTIONS(736), 1,
      sym_identifier,
  [5502] = 1,
    ACTIONS(738), 1,
      sym__newline,
  [5506] = 1,
    ACTIONS(740), 1,
      sym_identifier,
  [5510] = 1,
    ACTIONS(742), 1,
      anon_sym_EQ,
  [5514] = 1,
    ACTIONS(744), 1,
      sym_identifier,
  [5518] = 1,
    ACTIONS(714), 1,
      sym__indent,
  [5522] = 1,
    ACTIONS(746), 1,
      sym__newline,
  [5526] = 1,
    ACTIONS(748), 1,
      sym_identifier,
  [5530] = 1,
    ACTIONS(751), 1,
      sym_float,
  [5534] = 1,
    ACTIONS(753), 1,
      ts_builtin_sym_end,
  [5538] = 1,
    ACTIONS(755), 1,
      sym__newline,
  [5542] = 1,
    ACTIONS(757), 1,
      anon_sym_from,
  [5546] = 1,
    ACTIONS(759), 1,
      sym_identifier,
  [5550] = 1,
    ACTIONS(761), 1,
      sym_identifier,
  [5554] = 1,
    ACTIONS(763), 1,
      sym_identifier,
  [5558] = 1,
    ACTIONS(765), 1,
      sym_integer,
  [5562] = 1,
    ACTIONS(767), 1,
      sym_identifier,
  [5566] = 1,
    ACTIONS(769), 1,
      sym_identifier,
  [5570] = 1,
    ACTIONS(771), 1,
      sym_identifier,
  [5574] = 1,
    ACTIONS(773), 1,
      anon_sym_to,
  [5578] = 1,
    ACTIONS(775), 1,
      sym__newline,
  [5582] = 1,
    ACTIONS(777), 1,
      sym_identifier,
  [5586] = 1,
    ACTIONS(779), 1,
      sym_identifier,
  [5590] = 1,
    ACTIONS(781), 1,
      sym_identifier,
  [5594] = 1,
    ACTIONS(783), 1,
      sym__indent,
  [5598] = 1,
    ACTIONS(751), 1,
      sym_integer,
  [5602] = 1,
    ACTIONS(785), 1,
      sym_integer,
  [5606] = 1,
    ACTIONS(785), 1,
      sym_float,
  [5610] = 1,
    ACTIONS(787), 1,
      sym_identifier,
  [5614] = 1,
    ACTIONS(789), 1,
      anon_sym_to,
  [5618] = 1,
    ACTIONS(791), 1,
      sym_identifier,
  [5622] = 1,
    ACTIONS(793), 1,
      sym_identifier,
  [5626] = 1,
    ACTIONS(795), 1,
      sym_identifier,
  [5630] = 1,
    ACTIONS(797), 1,
      anon_sym_EQ,
  [5634] = 1,
    ACTIONS(799), 1,
      sym__newline,
  [5638] = 1,
    ACTIONS(801), 1,
      sym__newline,
  [5642] = 1,
    ACTIONS(803), 1,
      sym_identifier,
  [5646] = 1,
    ACTIONS(805), 1,
      sym_integer,
  [5650] = 1,
    ACTIONS(807), 1,
      sym_identifier,
  [5654] = 1,
    ACTIONS(809), 1,
      sym__newline,
  [5658] = 1,
    ACTIONS(811), 1,
      sym_float,
  [5662] = 1,
    ACTIONS(813), 1,
      sym_identifier,
  [5666] = 1,
    ACTIONS(815), 1,
      sym_identifier,
  [5670] = 1,
    ACTIONS(817), 1,
      anon_sym_to,
  [5674] = 1,
    ACTIONS(819), 1,
      sym_identifier,
  [5678] = 1,
    ACTIONS(821), 1,
      sym_integer,
  [5682] = 1,
    ACTIONS(823), 1,
      anon_sym_COLON_EQ,
  [5686] = 1,
    ACTIONS(825), 1,
      anon_sym_to,
  [5690] = 1,
    ACTIONS(827), 1,
      anon_sym_to,
  [5694] = 1,
    ACTIONS(829), 1,
      anon_sym_until,
  [5698] = 1,
    ACTIONS(712), 1,
      sym__indent,
  [5702] = 1,
    ACTIONS(831), 1,
      anon_sym_from,
  [5706] = 1,
    ACTIONS(833), 1,
      anon_sym_of,
  [5710] = 1,
    ACTIONS(835), 1,
      sym__newline,
  [5714] = 1,
    ACTIONS(837), 1,
      anon_sym_EQ,
  [5718] = 1,
    ACTIONS(839), 1,
      sym_identifier,
  [5722] = 1,
    ACTIONS(712), 1,
      sym__indent,
  [5726] = 1,
    ACTIONS(841), 1,
      sym_integer,
  [5730] = 1,
    ACTIONS(843), 1,
      sym_float,
  [5734] = 1,
    ACTIONS(845), 1,
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
  [SMALL_STATE(10)] = 295,
  [SMALL_STATE(11)] = 328,
  [SMALL_STATE(12)] = 361,
  [SMALL_STATE(13)] = 391,
  [SMALL_STATE(14)] = 417,
  [SMALL_STATE(15)] = 443,
  [SMALL_STATE(16)] = 469,
  [SMALL_STATE(17)] = 495,
  [SMALL_STATE(18)] = 527,
  [SMALL_STATE(19)] = 553,
  [SMALL_STATE(20)] = 584,
  [SMALL_STATE(21)] = 615,
  [SMALL_STATE(22)] = 646,
  [SMALL_STATE(23)] = 681,
  [SMALL_STATE(24)] = 711,
  [SMALL_STATE(25)] = 741,
  [SMALL_STATE(26)] = 765,
  [SMALL_STATE(27)] = 789,
  [SMALL_STATE(28)] = 819,
  [SMALL_STATE(29)] = 843,
  [SMALL_STATE(30)] = 873,
  [SMALL_STATE(31)] = 901,
  [SMALL_STATE(32)] = 925,
  [SMALL_STATE(33)] = 949,
  [SMALL_STATE(34)] = 972,
  [SMALL_STATE(35)] = 995,
  [SMALL_STATE(36)] = 1019,
  [SMALL_STATE(37)] = 1059,
  [SMALL_STATE(38)] = 1081,
  [SMALL_STATE(39)] = 1125,
  [SMALL_STATE(40)] = 1157,
  [SMALL_STATE(41)] = 1179,
  [SMALL_STATE(42)] = 1205,
  [SMALL_STATE(43)] = 1227,
  [SMALL_STATE(44)] = 1269,
  [SMALL_STATE(45)] = 1313,
  [SMALL_STATE(46)] = 1357,
  [SMALL_STATE(47)] = 1396,
  [SMALL_STATE(48)] = 1423,
  [SMALL_STATE(49)] = 1444,
  [SMALL_STATE(50)] = 1485,
  [SMALL_STATE(51)] = 1524,
  [SMALL_STATE(52)] = 1545,
  [SMALL_STATE(53)] = 1570,
  [SMALL_STATE(54)] = 1591,
  [SMALL_STATE(55)] = 1622,
  [SMALL_STATE(56)] = 1649,
  [SMALL_STATE(57)] = 1676,
  [SMALL_STATE(58)] = 1715,
  [SMALL_STATE(59)] = 1754,
  [SMALL_STATE(60)] = 1793,
  [SMALL_STATE(61)] = 1834,
  [SMALL_STATE(62)] = 1868,
  [SMALL_STATE(63)] = 1902,
  [SMALL_STATE(64)] = 1936,
  [SMALL_STATE(65)] = 1970,
  [SMALL_STATE(66)] = 2004,
  [SMALL_STATE(67)] = 2038,
  [SMALL_STATE(68)] = 2072,
  [SMALL_STATE(69)] = 2106,
  [SMALL_STATE(70)] = 2140,
  [SMALL_STATE(71)] = 2174,
  [SMALL_STATE(72)] = 2208,
  [SMALL_STATE(73)] = 2242,
  [SMALL_STATE(74)] = 2276,
  [SMALL_STATE(75)] = 2310,
  [SMALL_STATE(76)] = 2344,
  [SMALL_STATE(77)] = 2378,
  [SMALL_STATE(78)] = 2412,
  [SMALL_STATE(79)] = 2446,
  [SMALL_STATE(80)] = 2480,
  [SMALL_STATE(81)] = 2514,
  [SMALL_STATE(82)] = 2548,
  [SMALL_STATE(83)] = 2582,
  [SMALL_STATE(84)] = 2616,
  [SMALL_STATE(85)] = 2650,
  [SMALL_STATE(86)] = 2684,
  [SMALL_STATE(87)] = 2710,
  [SMALL_STATE(88)] = 2733,
  [SMALL_STATE(89)] = 2764,
  [SMALL_STATE(90)] = 2801,
  [SMALL_STATE(91)] = 2838,
  [SMALL_STATE(92)] = 2861,
  [SMALL_STATE(93)] = 2898,
  [SMALL_STATE(94)] = 2929,
  [SMALL_STATE(95)] = 2960,
  [SMALL_STATE(96)] = 2997,
  [SMALL_STATE(97)] = 3034,
  [SMALL_STATE(98)] = 3071,
  [SMALL_STATE(99)] = 3108,
  [SMALL_STATE(100)] = 3139,
  [SMALL_STATE(101)] = 3159,
  [SMALL_STATE(102)] = 3179,
  [SMALL_STATE(103)] = 3202,
  [SMALL_STATE(104)] = 3225,
  [SMALL_STATE(105)] = 3244,
  [SMALL_STATE(106)] = 3267,
  [SMALL_STATE(107)] = 3290,
  [SMALL_STATE(108)] = 3313,
  [SMALL_STATE(109)] = 3336,
  [SMALL_STATE(110)] = 3359,
  [SMALL_STATE(111)] = 3382,
  [SMALL_STATE(112)] = 3405,
  [SMALL_STATE(113)] = 3424,
  [SMALL_STATE(114)] = 3447,
  [SMALL_STATE(115)] = 3470,
  [SMALL_STATE(116)] = 3493,
  [SMALL_STATE(117)] = 3516,
  [SMALL_STATE(118)] = 3539,
  [SMALL_STATE(119)] = 3562,
  [SMALL_STATE(120)] = 3576,
  [SMALL_STATE(121)] = 3590,
  [SMALL_STATE(122)] = 3608,
  [SMALL_STATE(123)] = 3622,
  [SMALL_STATE(124)] = 3638,
  [SMALL_STATE(125)] = 3659,
  [SMALL_STATE(126)] = 3680,
  [SMALL_STATE(127)] = 3701,
  [SMALL_STATE(128)] = 3722,
  [SMALL_STATE(129)] = 3732,
  [SMALL_STATE(130)] = 3742,
  [SMALL_STATE(131)] = 3752,
  [SMALL_STATE(132)] = 3770,
  [SMALL_STATE(133)] = 3780,
  [SMALL_STATE(134)] = 3790,
  [SMALL_STATE(135)] = 3800,
  [SMALL_STATE(136)] = 3810,
  [SMALL_STATE(137)] = 3820,
  [SMALL_STATE(138)] = 3830,
  [SMALL_STATE(139)] = 3840,
  [SMALL_STATE(140)] = 3852,
  [SMALL_STATE(141)] = 3862,
  [SMALL_STATE(142)] = 3872,
  [SMALL_STATE(143)] = 3882,
  [SMALL_STATE(144)] = 3892,
  [SMALL_STATE(145)] = 3902,
  [SMALL_STATE(146)] = 3912,
  [SMALL_STATE(147)] = 3922,
  [SMALL_STATE(148)] = 3932,
  [SMALL_STATE(149)] = 3942,
  [SMALL_STATE(150)] = 3960,
  [SMALL_STATE(151)] = 3970,
  [SMALL_STATE(152)] = 3980,
  [SMALL_STATE(153)] = 3990,
  [SMALL_STATE(154)] = 4000,
  [SMALL_STATE(155)] = 4010,
  [SMALL_STATE(156)] = 4020,
  [SMALL_STATE(157)] = 4032,
  [SMALL_STATE(158)] = 4051,
  [SMALL_STATE(159)] = 4064,
  [SMALL_STATE(160)] = 4075,
  [SMALL_STATE(161)] = 4086,
  [SMALL_STATE(162)] = 4099,
  [SMALL_STATE(163)] = 4113,
  [SMALL_STATE(164)] = 4129,
  [SMALL_STATE(165)] = 4141,
  [SMALL_STATE(166)] = 4153,
  [SMALL_STATE(167)] = 4165,
  [SMALL_STATE(168)] = 4177,
  [SMALL_STATE(169)] = 4193,
  [SMALL_STATE(170)] = 4209,
  [SMALL_STATE(171)] = 4225,
  [SMALL_STATE(172)] = 4239,
  [SMALL_STATE(173)] = 4255,
  [SMALL_STATE(174)] = 4271,
  [SMALL_STATE(175)] = 4283,
  [SMALL_STATE(176)] = 4297,
  [SMALL_STATE(177)] = 4309,
  [SMALL_STATE(178)] = 4321,
  [SMALL_STATE(179)] = 4333,
  [SMALL_STATE(180)] = 4349,
  [SMALL_STATE(181)] = 4365,
  [SMALL_STATE(182)] = 4377,
  [SMALL_STATE(183)] = 4389,
  [SMALL_STATE(184)] = 4403,
  [SMALL_STATE(185)] = 4417,
  [SMALL_STATE(186)] = 4431,
  [SMALL_STATE(187)] = 4443,
  [SMALL_STATE(188)] = 4450,
  [SMALL_STATE(189)] = 4463,
  [SMALL_STATE(190)] = 4476,
  [SMALL_STATE(191)] = 4487,
  [SMALL_STATE(192)] = 4494,
  [SMALL_STATE(193)] = 4505,
  [SMALL_STATE(194)] = 4516,
  [SMALL_STATE(195)] = 4523,
  [SMALL_STATE(196)] = 4530,
  [SMALL_STATE(197)] = 4541,
  [SMALL_STATE(198)] = 4552,
  [SMALL_STATE(199)] = 4563,
  [SMALL_STATE(200)] = 4570,
  [SMALL_STATE(201)] = 4577,
  [SMALL_STATE(202)] = 4584,
  [SMALL_STATE(203)] = 4591,
  [SMALL_STATE(204)] = 4600,
  [SMALL_STATE(205)] = 4611,
  [SMALL_STATE(206)] = 4622,
  [SMALL_STATE(207)] = 4633,
  [SMALL_STATE(208)] = 4646,
  [SMALL_STATE(209)] = 4657,
  [SMALL_STATE(210)] = 4670,
  [SMALL_STATE(211)] = 4677,
  [SMALL_STATE(212)] = 4688,
  [SMALL_STATE(213)] = 4695,
  [SMALL_STATE(214)] = 4702,
  [SMALL_STATE(215)] = 4713,
  [SMALL_STATE(216)] = 4720,
  [SMALL_STATE(217)] = 4727,
  [SMALL_STATE(218)] = 4733,
  [SMALL_STATE(219)] = 4739,
  [SMALL_STATE(220)] = 4745,
  [SMALL_STATE(221)] = 4755,
  [SMALL_STATE(222)] = 4761,
  [SMALL_STATE(223)] = 4771,
  [SMALL_STATE(224)] = 4781,
  [SMALL_STATE(225)] = 4791,
  [SMALL_STATE(226)] = 4797,
  [SMALL_STATE(227)] = 4807,
  [SMALL_STATE(228)] = 4817,
  [SMALL_STATE(229)] = 4823,
  [SMALL_STATE(230)] = 4829,
  [SMALL_STATE(231)] = 4837,
  [SMALL_STATE(232)] = 4847,
  [SMALL_STATE(233)] = 4853,
  [SMALL_STATE(234)] = 4863,
  [SMALL_STATE(235)] = 4873,
  [SMALL_STATE(236)] = 4883,
  [SMALL_STATE(237)] = 4893,
  [SMALL_STATE(238)] = 4899,
  [SMALL_STATE(239)] = 4909,
  [SMALL_STATE(240)] = 4919,
  [SMALL_STATE(241)] = 4929,
  [SMALL_STATE(242)] = 4939,
  [SMALL_STATE(243)] = 4945,
  [SMALL_STATE(244)] = 4955,
  [SMALL_STATE(245)] = 4965,
  [SMALL_STATE(246)] = 4971,
  [SMALL_STATE(247)] = 4979,
  [SMALL_STATE(248)] = 4987,
  [SMALL_STATE(249)] = 4993,
  [SMALL_STATE(250)] = 4999,
  [SMALL_STATE(251)] = 5005,
  [SMALL_STATE(252)] = 5011,
  [SMALL_STATE(253)] = 5017,
  [SMALL_STATE(254)] = 5027,
  [SMALL_STATE(255)] = 5037,
  [SMALL_STATE(256)] = 5047,
  [SMALL_STATE(257)] = 5055,
  [SMALL_STATE(258)] = 5065,
  [SMALL_STATE(259)] = 5075,
  [SMALL_STATE(260)] = 5081,
  [SMALL_STATE(261)] = 5091,
  [SMALL_STATE(262)] = 5101,
  [SMALL_STATE(263)] = 5111,
  [SMALL_STATE(264)] = 5117,
  [SMALL_STATE(265)] = 5127,
  [SMALL_STATE(266)] = 5133,
  [SMALL_STATE(267)] = 5143,
  [SMALL_STATE(268)] = 5149,
  [SMALL_STATE(269)] = 5159,
  [SMALL_STATE(270)] = 5165,
  [SMALL_STATE(271)] = 5175,
  [SMALL_STATE(272)] = 5181,
  [SMALL_STATE(273)] = 5191,
  [SMALL_STATE(274)] = 5201,
  [SMALL_STATE(275)] = 5211,
  [SMALL_STATE(276)] = 5219,
  [SMALL_STATE(277)] = 5225,
  [SMALL_STATE(278)] = 5235,
  [SMALL_STATE(279)] = 5243,
  [SMALL_STATE(280)] = 5249,
  [SMALL_STATE(281)] = 5259,
  [SMALL_STATE(282)] = 5269,
  [SMALL_STATE(283)] = 5277,
  [SMALL_STATE(284)] = 5284,
  [SMALL_STATE(285)] = 5289,
  [SMALL_STATE(286)] = 5294,
  [SMALL_STATE(287)] = 5299,
  [SMALL_STATE(288)] = 5304,
  [SMALL_STATE(289)] = 5309,
  [SMALL_STATE(290)] = 5314,
  [SMALL_STATE(291)] = 5319,
  [SMALL_STATE(292)] = 5326,
  [SMALL_STATE(293)] = 5331,
  [SMALL_STATE(294)] = 5336,
  [SMALL_STATE(295)] = 5341,
  [SMALL_STATE(296)] = 5346,
  [SMALL_STATE(297)] = 5353,
  [SMALL_STATE(298)] = 5360,
  [SMALL_STATE(299)] = 5365,
  [SMALL_STATE(300)] = 5370,
  [SMALL_STATE(301)] = 5375,
  [SMALL_STATE(302)] = 5380,
  [SMALL_STATE(303)] = 5385,
  [SMALL_STATE(304)] = 5390,
  [SMALL_STATE(305)] = 5395,
  [SMALL_STATE(306)] = 5400,
  [SMALL_STATE(307)] = 5407,
  [SMALL_STATE(308)] = 5414,
  [SMALL_STATE(309)] = 5421,
  [SMALL_STATE(310)] = 5428,
  [SMALL_STATE(311)] = 5433,
  [SMALL_STATE(312)] = 5438,
  [SMALL_STATE(313)] = 5443,
  [SMALL_STATE(314)] = 5448,
  [SMALL_STATE(315)] = 5453,
  [SMALL_STATE(316)] = 5458,
  [SMALL_STATE(317)] = 5462,
  [SMALL_STATE(318)] = 5466,
  [SMALL_STATE(319)] = 5470,
  [SMALL_STATE(320)] = 5474,
  [SMALL_STATE(321)] = 5478,
  [SMALL_STATE(322)] = 5482,
  [SMALL_STATE(323)] = 5486,
  [SMALL_STATE(324)] = 5490,
  [SMALL_STATE(325)] = 5494,
  [SMALL_STATE(326)] = 5498,
  [SMALL_STATE(327)] = 5502,
  [SMALL_STATE(328)] = 5506,
  [SMALL_STATE(329)] = 5510,
  [SMALL_STATE(330)] = 5514,
  [SMALL_STATE(331)] = 5518,
  [SMALL_STATE(332)] = 5522,
  [SMALL_STATE(333)] = 5526,
  [SMALL_STATE(334)] = 5530,
  [SMALL_STATE(335)] = 5534,
  [SMALL_STATE(336)] = 5538,
  [SMALL_STATE(337)] = 5542,
  [SMALL_STATE(338)] = 5546,
  [SMALL_STATE(339)] = 5550,
  [SMALL_STATE(340)] = 5554,
  [SMALL_STATE(341)] = 5558,
  [SMALL_STATE(342)] = 5562,
  [SMALL_STATE(343)] = 5566,
  [SMALL_STATE(344)] = 5570,
  [SMALL_STATE(345)] = 5574,
  [SMALL_STATE(346)] = 5578,
  [SMALL_STATE(347)] = 5582,
  [SMALL_STATE(348)] = 5586,
  [SMALL_STATE(349)] = 5590,
  [SMALL_STATE(350)] = 5594,
  [SMALL_STATE(351)] = 5598,
  [SMALL_STATE(352)] = 5602,
  [SMALL_STATE(353)] = 5606,
  [SMALL_STATE(354)] = 5610,
  [SMALL_STATE(355)] = 5614,
  [SMALL_STATE(356)] = 5618,
  [SMALL_STATE(357)] = 5622,
  [SMALL_STATE(358)] = 5626,
  [SMALL_STATE(359)] = 5630,
  [SMALL_STATE(360)] = 5634,
  [SMALL_STATE(361)] = 5638,
  [SMALL_STATE(362)] = 5642,
  [SMALL_STATE(363)] = 5646,
  [SMALL_STATE(364)] = 5650,
  [SMALL_STATE(365)] = 5654,
  [SMALL_STATE(366)] = 5658,
  [SMALL_STATE(367)] = 5662,
  [SMALL_STATE(368)] = 5666,
  [SMALL_STATE(369)] = 5670,
  [SMALL_STATE(370)] = 5674,
  [SMALL_STATE(371)] = 5678,
  [SMALL_STATE(372)] = 5682,
  [SMALL_STATE(373)] = 5686,
  [SMALL_STATE(374)] = 5690,
  [SMALL_STATE(375)] = 5694,
  [SMALL_STATE(376)] = 5698,
  [SMALL_STATE(377)] = 5702,
  [SMALL_STATE(378)] = 5706,
  [SMALL_STATE(379)] = 5710,
  [SMALL_STATE(380)] = 5714,
  [SMALL_STATE(381)] = 5718,
  [SMALL_STATE(382)] = 5722,
  [SMALL_STATE(383)] = 5726,
  [SMALL_STATE(384)] = 5730,
  [SMALL_STATE(385)] = 5734,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 2, .production_id = 21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 2, .production_id = 21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 31),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 31), SHIFT_REPEAT(77),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 31),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 31), SHIFT_REPEAT(316),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 30),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 30),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 36),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 36),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 1, .production_id = 16),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 31), SHIFT_REPEAT(66),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 31), SHIFT_REPEAT(362),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 33),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 33),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 34),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 34),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 31), SHIFT_REPEAT(68),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 31), SHIFT_REPEAT(356),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 31), SHIFT_REPEAT(63),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 31), SHIFT_REPEAT(367),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_argument, 1), REDUCE(sym_primary_expression, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(291),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(308),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(321),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(180),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(267),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(375),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(347),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 2, .production_id = 28),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 2, .production_id = 28),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35), SHIFT_REPEAT(116),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35), SHIFT_REPEAT(116),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35), SHIFT_REPEAT(118),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35), SHIFT_REPEAT(118),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(368),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(317),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(349),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(342),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(339),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(338),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35), SHIFT_REPEAT(113),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35), SHIFT_REPEAT(113),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35), SHIFT_REPEAT(106),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35), SHIFT_REPEAT(106),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 27),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_operator, 2, .production_id = 27),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 33),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_operator, 3, .production_id = 33),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 32),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 23),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 17),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 22),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 18),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 12),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 24),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 12),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2), SHIFT_REPEAT(83),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 2, .production_id = 13),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 13), SHIFT_REPEAT(297),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 13),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(385),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_instantiated_type, 4, .production_id = 20),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 1, .production_id = 9),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 13), SHIFT_REPEAT(283),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_instantiated_type, 3, .production_id = 14),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 26), SHIFT_REPEAT(326),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 26),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 25),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 5),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 13), SHIFT_REPEAT(330),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 13),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 26), SHIFT_REPEAT(354),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 16),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(318),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic, 1, .production_id = 8),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 19),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(343),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 16),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2), SHIFT_REPEAT(364),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2), SHIFT_REPEAT(43),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 29),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 2),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 2), SHIFT(199),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 5),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_name, 1, .production_id = 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 6),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 7),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(357),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_type, 2, .production_id = 10),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 5),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(188),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 11),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 3),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_type, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delclaration_array_type, 7),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 4, .production_id = 15),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 3, .production_id = 11),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__custom_generic_type, 2, .production_id = 10), SHIFT(181),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [753] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 4),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
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
