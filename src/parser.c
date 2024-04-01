#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 400
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 40

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
  anon_sym_elsif = 22,
  anon_sym_else = 23,
  anon_sym_from = 24,
  anon_sym_to = 25,
  anon_sym_constants = 26,
  anon_sym_SEMI = 27,
  anon_sym_COLON = 28,
  anon_sym_variables = 29,
  anon_sym_not = 30,
  anon_sym_and = 31,
  anon_sym_or = 32,
  anon_sym_PLUS = 33,
  anon_sym_DASH = 34,
  anon_sym_STAR = 35,
  anon_sym_SLASH = 36,
  anon_sym_mod = 37,
  anon_sym_SLASH_SLASH = 38,
  anon_sym_LT = 39,
  anon_sym_LT_EQ = 40,
  anon_sym_GT_EQ = 41,
  anon_sym_GT = 42,
  anon_sym_LT_GT = 43,
  sym_integer = 44,
  sym_float = 45,
  anon_sym_integer = 46,
  anon_sym_real = 47,
  anon_sym_string = 48,
  anon_sym_array = 49,
  anon_sym_of = 50,
  anon_sym_boolean = 51,
  sym_refersTo = 52,
  aux_sym_comment_token1 = 53,
  sym_identifier = 54,
  anon_sym_DOT = 55,
  sym_true = 56,
  sym_false = 57,
  sym__newline = 58,
  sym__indent = 59,
  sym__dedent = 60,
  sym_program = 61,
  sym_generics = 62,
  sym_enum = 63,
  sym_record_item = 64,
  sym_record = 65,
  sym_export = 66,
  sym__multiple_import = 67,
  sym_import = 68,
  sym_module = 69,
  sym_function_definition = 70,
  sym__function_header = 71,
  sym_function_header = 72,
  sym_test = 73,
  sym_parameters = 74,
  sym_assignment = 75,
  sym_expression = 76,
  sym_statement = 77,
  sym_repeat_statement = 78,
  sym_while_statement = 79,
  sym_call_statement = 80,
  sym_argument = 81,
  sym_if_then_statement = 82,
  sym_if = 83,
  sym_elsif = 84,
  sym_else = 85,
  sym_for = 86,
  sym_constant = 87,
  sym_block = 88,
  sym__parameters = 89,
  sym_var = 90,
  sym_parameter = 91,
  sym_variable = 92,
  sym_primary_expression = 93,
  sym_not_operator = 94,
  sym_boolean_operator = 95,
  sym_binary_operator = 96,
  sym_comparison_operator = 97,
  sym_parenthesized_expression = 98,
  sym_basis_type = 99,
  sym_array_type = 100,
  sym_delclaration_array_type = 101,
  sym_declaration_type = 102,
  sym__generic = 103,
  sym__generics = 104,
  sym__type_name = 105,
  sym__custom_type = 106,
  sym__custom_generic_type = 107,
  sym__custom_generic_instantiated_type = 108,
  sym_custom_type = 109,
  sym_type = 110,
  sym_comment = 111,
  sym_variable_access = 112,
  aux_sym_program_repeat1 = 113,
  aux_sym_generics_repeat1 = 114,
  aux_sym_enum_repeat1 = 115,
  aux_sym_record_repeat1 = 116,
  aux_sym_function_definition_repeat1 = 117,
  aux_sym_function_definition_repeat2 = 118,
  aux_sym_call_statement_repeat1 = 119,
  aux_sym_if_then_statement_repeat1 = 120,
  aux_sym_constant_repeat1 = 121,
  aux_sym_block_repeat1 = 122,
  aux_sym__parameters_repeat1 = 123,
  aux_sym_comparison_operator_repeat1 = 124,
  aux_sym__generics_repeat1 = 125,
  aux_sym__custom_generic_instantiated_type_repeat1 = 126,
  aux_sym_variable_access_repeat1 = 127,
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
  [sym__function_header] = "_function_header",
  [sym_function_header] = "function_header",
  [sym_test] = "test",
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
  [sym__function_header] = sym__function_header,
  [sym_function_header] = sym_function_header,
  [sym_test] = sym_test,
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
  field_test_name = 15,
  field_type_name = 16,
  field_var = 17,
  field_variables = 18,
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
  [field_test_name] = "test_name",
  [field_type_name] = "type_name",
  [field_var] = "var",
  [field_variables] = "variables",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 3},
  [10] = {.index = 18, .length = 4},
  [11] = {.index = 22, .length = 1},
  [12] = {.index = 23, .length = 1},
  [13] = {.index = 24, .length = 2},
  [14] = {.index = 26, .length = 1},
  [15] = {.index = 27, .length = 1},
  [16] = {.index = 28, .length = 3},
  [17] = {.index = 31, .length = 3},
  [18] = {.index = 34, .length = 2},
  [19] = {.index = 36, .length = 3},
  [20] = {.index = 39, .length = 2},
  [21] = {.index = 41, .length = 2},
  [22] = {.index = 43, .length = 4},
  [23] = {.index = 47, .length = 2},
  [24] = {.index = 49, .length = 1},
  [25] = {.index = 50, .length = 4},
  [26] = {.index = 54, .length = 1},
  [27] = {.index = 55, .length = 1},
  [28] = {.index = 56, .length = 1},
  [29] = {.index = 57, .length = 2},
  [30] = {.index = 59, .length = 4},
  [31] = {.index = 63, .length = 3},
  [32] = {.index = 66, .length = 3},
  [33] = {.index = 69, .length = 1},
  [34] = {.index = 70, .length = 2},
  [35] = {.index = 72, .length = 3},
  [36] = {.index = 75, .length = 1},
  [37] = {.index = 76, .length = 2},
  [38] = {.index = 78, .length = 3},
  [39] = {.index = 81, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_parameters, 1},
  [2] =
    {field_type_name, 0},
  [3] =
    {field_type_name, 0, .inherited = true},
  [4] =
    {field_generic, 0, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [6] =
    {field_generic, 0, .inherited = true},
    {field_instatiated_generic, 0, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [9] =
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
  [11] =
    {field_name, 0, .inherited = true},
    {field_parameters, 0, .inherited = true},
  [13] =
    {field_reference, 0},
    {field_type_name, 1, .inherited = true},
  [15] =
    {field_generic, 1, .inherited = true},
    {field_reference, 0},
    {field_type_name, 1, .inherited = true},
  [18] =
    {field_generic, 1, .inherited = true},
    {field_instatiated_generic, 1, .inherited = true},
    {field_reference, 0},
    {field_type_name, 1, .inherited = true},
  [22] =
    {field_generic, 0},
  [23] =
    {field_generic, 0, .inherited = true},
  [24] =
    {field_generic, 1, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [26] =
    {field_generic, 1},
  [27] =
    {field_function, 0},
  [28] =
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
    {field_variables, 3},
  [31] =
    {field_constants, 3},
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
  [34] =
    {field_generic, 0, .inherited = true},
    {field_generic, 1, .inherited = true},
  [36] =
    {field_generic, 1, .inherited = true},
    {field_instatiated_generic, 2},
    {field_type_name, 0, .inherited = true},
  [39] =
    {field_generic, 1},
    {field_generic, 2, .inherited = true},
  [41] =
    {field_array_access, 1, .inherited = true},
    {field_field_access, 1, .inherited = true},
  [43] =
    {field_constants, 4},
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
    {field_variables, 3},
  [47] =
    {field_function, 3},
    {field_test_name, 1},
  [49] =
    {field_generic, 1, .inherited = true},
  [50] =
    {field_generic, 1, .inherited = true},
    {field_instatiated_generic, 2},
    {field_instatiated_generic, 3, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [54] =
    {field_argument, 1},
  [55] =
    {field_operators, 1, .inherited = true},
  [56] =
    {field_var, 0},
  [57] =
    {field_field_access, 0},
    {field_field_access, 1},
  [59] =
    {field_array_access, 0, .inherited = true},
    {field_array_access, 1, .inherited = true},
    {field_field_access, 0, .inherited = true},
    {field_field_access, 1, .inherited = true},
  [63] =
    {field_function, 3},
    {field_test_name, 1},
    {field_variables, 5},
  [66] =
    {field_constants, 5},
    {field_function, 3},
    {field_test_name, 1},
  [69] =
    {field_instatiated_generic, 1},
  [70] =
    {field_instatiated_generic, 0, .inherited = true},
    {field_instatiated_generic, 1, .inherited = true},
  [72] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [75] =
    {field_operators, 0},
  [76] =
    {field_operators, 0, .inherited = true},
    {field_operators, 1, .inherited = true},
  [78] =
    {field_array_access, 0},
    {field_array_access, 1},
    {field_array_access, 2},
  [81] =
    {field_constants, 6},
    {field_function, 3},
    {field_test_name, 1},
    {field_variables, 5},
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
  [8] = 3,
  [9] = 6,
  [10] = 10,
  [11] = 2,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 4,
  [17] = 5,
  [18] = 18,
  [19] = 6,
  [20] = 3,
  [21] = 2,
  [22] = 10,
  [23] = 5,
  [24] = 14,
  [25] = 6,
  [26] = 4,
  [27] = 3,
  [28] = 13,
  [29] = 18,
  [30] = 12,
  [31] = 15,
  [32] = 2,
  [33] = 4,
  [34] = 5,
  [35] = 15,
  [36] = 10,
  [37] = 14,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 18,
  [44] = 13,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 14,
  [49] = 15,
  [50] = 10,
  [51] = 51,
  [52] = 52,
  [53] = 47,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 12,
  [60] = 60,
  [61] = 18,
  [62] = 13,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 65,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 70,
  [72] = 72,
  [73] = 70,
  [74] = 72,
  [75] = 65,
  [76] = 67,
  [77] = 70,
  [78] = 78,
  [79] = 79,
  [80] = 65,
  [81] = 68,
  [82] = 68,
  [83] = 72,
  [84] = 67,
  [85] = 12,
  [86] = 86,
  [87] = 87,
  [88] = 72,
  [89] = 67,
  [90] = 68,
  [91] = 91,
  [92] = 60,
  [93] = 93,
  [94] = 94,
  [95] = 94,
  [96] = 58,
  [97] = 91,
  [98] = 98,
  [99] = 99,
  [100] = 58,
  [101] = 60,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 104,
  [108] = 58,
  [109] = 102,
  [110] = 103,
  [111] = 102,
  [112] = 60,
  [113] = 113,
  [114] = 104,
  [115] = 104,
  [116] = 103,
  [117] = 102,
  [118] = 103,
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
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 121,
  [158] = 158,
  [159] = 122,
  [160] = 160,
  [161] = 119,
  [162] = 120,
  [163] = 163,
  [164] = 164,
  [165] = 152,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 169,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 171,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 175,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 175,
  [186] = 183,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 184,
  [191] = 191,
  [192] = 178,
  [193] = 181,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 177,
  [198] = 140,
  [199] = 155,
  [200] = 195,
  [201] = 201,
  [202] = 188,
  [203] = 203,
  [204] = 204,
  [205] = 174,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 201,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 122,
  [217] = 217,
  [218] = 218,
  [219] = 120,
  [220] = 119,
  [221] = 121,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 231,
  [235] = 233,
  [236] = 119,
  [237] = 121,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 231,
  [243] = 243,
  [244] = 233,
  [245] = 245,
  [246] = 239,
  [247] = 247,
  [248] = 248,
  [249] = 241,
  [250] = 250,
  [251] = 251,
  [252] = 229,
  [253] = 253,
  [254] = 226,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 231,
  [262] = 262,
  [263] = 263,
  [264] = 228,
  [265] = 265,
  [266] = 255,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 171,
  [271] = 131,
  [272] = 272,
  [273] = 273,
  [274] = 120,
  [275] = 275,
  [276] = 122,
  [277] = 277,
  [278] = 204,
  [279] = 233,
  [280] = 280,
  [281] = 281,
  [282] = 268,
  [283] = 130,
  [284] = 224,
  [285] = 285,
  [286] = 286,
  [287] = 253,
  [288] = 288,
  [289] = 152,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 226,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 232,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 272,
  [310] = 310,
  [311] = 152,
  [312] = 312,
  [313] = 313,
  [314] = 225,
  [315] = 315,
  [316] = 273,
  [317] = 253,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 269,
  [322] = 315,
  [323] = 227,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 230,
  [328] = 275,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 293,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 268,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 319,
  [346] = 346,
  [347] = 320,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 329,
  [358] = 339,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 356,
  [368] = 368,
  [369] = 369,
  [370] = 350,
  [371] = 371,
  [372] = 372,
  [373] = 339,
  [374] = 374,
  [375] = 375,
  [376] = 356,
  [377] = 377,
  [378] = 378,
  [379] = 339,
  [380] = 380,
  [381] = 356,
  [382] = 382,
  [383] = 383,
  [384] = 349,
  [385] = 385,
  [386] = 386,
  [387] = 361,
  [388] = 360,
  [389] = 389,
  [390] = 368,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 369,
  [397] = 375,
  [398] = 377,
  [399] = 386,
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
      if (eof) ADVANCE(130);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '+') ADVANCE(173);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == '.') ADVANCE(257);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == ';') ADVANCE(163);
      if (lookahead == '<') ADVANCE(180);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '>') ADVANCE(183);
      if (lookahead == '[') ADVANCE(135);
      if (lookahead == ']') ADVANCE(136);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(54);
      if (lookahead == '{') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '+') ADVANCE(173);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == '.') ADVANCE(257);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(180);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '>') ADVANCE(183);
      if (lookahead == '[') ADVANCE(135);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == 't') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == '.') ADVANCE(257);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '[') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == 'v') ADVANCE(206);
      if (lookahead == '{') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(256);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == '<') ADVANCE(180);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '>') ADVANCE(183);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == 't') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 't') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(256);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 't') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(256);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == ';') ADVANCE(163);
      if (lookahead == '{') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(256);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == 'v') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(256);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(147);
      END_STATE();
    case 9:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 's') ADVANCE(253);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(157);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 'w') ADVANCE(222);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(256);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(256);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(193);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 126:
      if (lookahead == 'y') ADVANCE(195);
      END_STATE();
    case 127:
      if (lookahead == '}') ADVANCE(201);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 129:
      if (eof) ADVANCE(130);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == ']') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == 'v') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(129)
      END_STATE();
    case 130:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_generics);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_from);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_constants);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(147);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_mod);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '>') ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '_') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_integer);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_real);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_string);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_array);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_refersTo);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_refersTo);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(233);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(225);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(256);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(255);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(256);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'f') ADVANCE(217);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(256);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(240);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(256);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(251);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(256);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(170);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(178);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(259);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(261);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(205);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(221);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(237);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(207);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(244);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(156);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(194);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(218);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(224);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(230);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(227);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(249);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(192);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(215);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(160);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(208);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(220);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(252);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(250);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(200);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(228);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(209);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(243);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(216);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(172);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(254);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(154);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(223);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(190);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(144);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(248);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(204);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(234);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(245);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(202);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(211);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(168);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(149);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(213);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(241);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(210);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(196);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 129},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 3},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 15, .external_lex_state = 4},
  [41] = {.lex_state = 15, .external_lex_state = 4},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 15, .external_lex_state = 4},
  [46] = {.lex_state = 129},
  [47] = {.lex_state = 50, .external_lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 50, .external_lex_state = 4},
  [53] = {.lex_state = 50, .external_lex_state = 4},
  [54] = {.lex_state = 129},
  [55] = {.lex_state = 129},
  [56] = {.lex_state = 129},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 50, .external_lex_state = 4},
  [64] = {.lex_state = 50, .external_lex_state = 4},
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
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 15},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 15},
  [94] = {.lex_state = 15},
  [95] = {.lex_state = 15},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 15},
  [99] = {.lex_state = 15},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 0, .external_lex_state = 3},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 0, .external_lex_state = 3},
  [124] = {.lex_state = 129},
  [125] = {.lex_state = 129},
  [126] = {.lex_state = 129},
  [127] = {.lex_state = 129},
  [128] = {.lex_state = 129},
  [129] = {.lex_state = 129, .external_lex_state = 3},
  [130] = {.lex_state = 129},
  [131] = {.lex_state = 129},
  [132] = {.lex_state = 129, .external_lex_state = 3},
  [133] = {.lex_state = 129},
  [134] = {.lex_state = 129},
  [135] = {.lex_state = 129},
  [136] = {.lex_state = 129},
  [137] = {.lex_state = 129},
  [138] = {.lex_state = 129},
  [139] = {.lex_state = 129},
  [140] = {.lex_state = 129},
  [141] = {.lex_state = 129},
  [142] = {.lex_state = 129},
  [143] = {.lex_state = 129},
  [144] = {.lex_state = 129},
  [145] = {.lex_state = 129, .external_lex_state = 3},
  [146] = {.lex_state = 129},
  [147] = {.lex_state = 129},
  [148] = {.lex_state = 129},
  [149] = {.lex_state = 129},
  [150] = {.lex_state = 129, .external_lex_state = 3},
  [151] = {.lex_state = 129, .external_lex_state = 3},
  [152] = {.lex_state = 129},
  [153] = {.lex_state = 129, .external_lex_state = 3},
  [154] = {.lex_state = 129},
  [155] = {.lex_state = 129},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 15, .external_lex_state = 4},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 50, .external_lex_state = 4},
  [166] = {.lex_state = 50, .external_lex_state = 4},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 129, .external_lex_state = 3},
  [173] = {.lex_state = 0, .external_lex_state = 3},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 6, .external_lex_state = 2},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 0, .external_lex_state = 3},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 0, .external_lex_state = 3},
  [183] = {.lex_state = 6, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 0, .external_lex_state = 3},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 0, .external_lex_state = 3},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 3},
  [192] = {.lex_state = 6, .external_lex_state = 2},
  [193] = {.lex_state = 6, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 6, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 3},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 6, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 3},
  [204] = {.lex_state = 129},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 3},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 3},
  [213] = {.lex_state = 0, .external_lex_state = 3},
  [214] = {.lex_state = 0, .external_lex_state = 3},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 6},
  [225] = {.lex_state = 129},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 129},
  [229] = {.lex_state = 129},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0, .external_lex_state = 3},
  [237] = {.lex_state = 0, .external_lex_state = 3},
  [238] = {.lex_state = 0, .external_lex_state = 3},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 129},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 6, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 129},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 6},
  [264] = {.lex_state = 129},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 6},
  [267] = {.lex_state = 6},
  [268] = {.lex_state = 6, .external_lex_state = 2},
  [269] = {.lex_state = 6},
  [270] = {.lex_state = 6},
  [271] = {.lex_state = 129, .external_lex_state = 3},
  [272] = {.lex_state = 6},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 0, .external_lex_state = 3},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 0, .external_lex_state = 3},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0, .external_lex_state = 2},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0, .external_lex_state = 2},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 6},
  [283] = {.lex_state = 129, .external_lex_state = 3},
  [284] = {.lex_state = 0, .external_lex_state = 2},
  [285] = {.lex_state = 0, .external_lex_state = 2},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 129, .external_lex_state = 3},
  [290] = {.lex_state = 129},
  [291] = {.lex_state = 129},
  [292] = {.lex_state = 129},
  [293] = {.lex_state = 0, .external_lex_state = 2},
  [294] = {.lex_state = 51},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0, .external_lex_state = 2},
  [297] = {.lex_state = 6},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0, .external_lex_state = 2},
  [300] = {.lex_state = 0, .external_lex_state = 2},
  [301] = {.lex_state = 0, .external_lex_state = 2},
  [302] = {.lex_state = 0, .external_lex_state = 3},
  [303] = {.lex_state = 0, .external_lex_state = 3},
  [304] = {.lex_state = 0, .external_lex_state = 2},
  [305] = {.lex_state = 0, .external_lex_state = 2},
  [306] = {.lex_state = 0, .external_lex_state = 2},
  [307] = {.lex_state = 0, .external_lex_state = 2},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0, .external_lex_state = 2},
  [310] = {.lex_state = 6},
  [311] = {.lex_state = 0, .external_lex_state = 2},
  [312] = {.lex_state = 0, .external_lex_state = 2},
  [313] = {.lex_state = 0, .external_lex_state = 2},
  [314] = {.lex_state = 0, .external_lex_state = 2},
  [315] = {.lex_state = 6},
  [316] = {.lex_state = 0, .external_lex_state = 2},
  [317] = {.lex_state = 51},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0, .external_lex_state = 2},
  [320] = {.lex_state = 0, .external_lex_state = 2},
  [321] = {.lex_state = 0, .external_lex_state = 2},
  [322] = {.lex_state = 6},
  [323] = {.lex_state = 0, .external_lex_state = 2},
  [324] = {.lex_state = 0, .external_lex_state = 2},
  [325] = {.lex_state = 0, .external_lex_state = 2},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0, .external_lex_state = 2},
  [328] = {.lex_state = 0, .external_lex_state = 2},
  [329] = {.lex_state = 6},
  [330] = {.lex_state = 6},
  [331] = {.lex_state = 6},
  [332] = {.lex_state = 6},
  [333] = {.lex_state = 0, .external_lex_state = 3},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0, .external_lex_state = 2},
  [336] = {.lex_state = 1},
  [337] = {.lex_state = 6},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0, .external_lex_state = 2},
  [340] = {.lex_state = 6},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0, .external_lex_state = 2},
  [343] = {.lex_state = 0, .external_lex_state = 2},
  [344] = {.lex_state = 6},
  [345] = {.lex_state = 0, .external_lex_state = 3},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0, .external_lex_state = 3},
  [348] = {.lex_state = 0, .external_lex_state = 3},
  [349] = {.lex_state = 6},
  [350] = {.lex_state = 6},
  [351] = {.lex_state = 6},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 6},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 6},
  [357] = {.lex_state = 6},
  [358] = {.lex_state = 0, .external_lex_state = 2},
  [359] = {.lex_state = 6},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 6},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 6},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 6},
  [373] = {.lex_state = 0, .external_lex_state = 2},
  [374] = {.lex_state = 6},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 6},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0, .external_lex_state = 2},
  [379] = {.lex_state = 0, .external_lex_state = 2},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 6},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 6},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 6},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 6},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 6},
  [392] = {.lex_state = 6},
  [393] = {.lex_state = 6},
  [394] = {.lex_state = 6},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 6},
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
    [sym_program] = STATE(385),
    [sym_enum] = STATE(56),
    [sym_record] = STATE(56),
    [sym_export] = STATE(56),
    [sym_import] = STATE(56),
    [sym_module] = STATE(46),
    [sym_function_definition] = STATE(56),
    [sym_test] = STATE(56),
    [sym_variable] = STATE(56),
    [aux_sym_program_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_record] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(13),
    [anon_sym_define] = ACTIONS(15),
    [anon_sym_test] = ACTIONS(17),
    [anon_sym_variables] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(21), 11,
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
    ACTIONS(25), 11,
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
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(36), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(29), 11,
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
    ACTIONS(34), 11,
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
    ACTIONS(41), 11,
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
    ACTIONS(39), 13,
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
    ACTIONS(45), 11,
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
    ACTIONS(43), 13,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(47), 10,
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
    ACTIONS(49), 11,
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
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COLON_EQ,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_var,
    ACTIONS(55), 1,
      anon_sym_not,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(2), 1,
      aux_sym_variable_access_repeat1,
    STATE(22), 1,
      sym_primary_expression,
    STATE(39), 1,
      sym_variable_access,
    STATE(168), 1,
      sym_expression,
    STATE(207), 1,
      sym_argument,
    ACTIONS(61), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(24), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(57), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(159), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [223] = 5,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(34), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 16,
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
  [256] = 5,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(49), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 16,
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
  [289] = 8,
    STATE(58), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(77), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(85), 2,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(87), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(79), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [328] = 5,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(25), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 16,
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
  [361] = 5,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(85), 2,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(89), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
    ACTIONS(91), 9,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [393] = 2,
    ACTIONS(93), 10,
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
    ACTIONS(95), 11,
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
  [419] = 2,
    ACTIONS(97), 10,
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
    ACTIONS(99), 11,
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
  [445] = 2,
    ACTIONS(101), 10,
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
    ACTIONS(103), 11,
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
  [471] = 2,
    ACTIONS(41), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 18,
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
  [497] = 2,
    ACTIONS(45), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 18,
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
  [523] = 4,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(85), 2,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(93), 8,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
    ACTIONS(95), 9,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [553] = 5,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(49), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 14,
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
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(34), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 14,
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
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(25), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 14,
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
    ACTIONS(121), 1,
      anon_sym_SLASH,
    STATE(96), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(117), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(77), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [681] = 2,
    ACTIONS(45), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 16,
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
  [705] = 2,
    ACTIONS(99), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 16,
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
  [729] = 5,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(49), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 13,
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
  [759] = 2,
    ACTIONS(41), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 16,
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
  [783] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(34), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 13,
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
  [813] = 2,
    ACTIONS(95), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 16,
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
    ACTIONS(121), 1,
      anon_sym_SLASH,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 13,
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
  [865] = 5,
    ACTIONS(121), 1,
      anon_sym_SLASH,
    ACTIONS(91), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(119), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 11,
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
  [895] = 2,
    ACTIONS(103), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 16,
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
  [919] = 5,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(25), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 13,
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
    ACTIONS(41), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 15,
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
    ACTIONS(45), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 15,
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
    ACTIONS(103), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 14,
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
  [1017] = 7,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    STATE(100), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(137), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(135), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1049] = 2,
    ACTIONS(99), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 14,
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
  [1071] = 11,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_not,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_and,
    ACTIONS(147), 1,
      anon_sym_or,
    STATE(22), 1,
      sym_primary_expression,
    STATE(167), 1,
      sym_expression,
    ACTIONS(57), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(24), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(159), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1111] = 3,
    ACTIONS(99), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
    ACTIONS(97), 11,
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
  [1135] = 13,
    ACTIONS(154), 1,
      anon_sym_real,
    ACTIONS(156), 1,
      anon_sym_array,
    ACTIONS(158), 1,
      sym_refersTo,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym__dedent,
    STATE(270), 1,
      sym__type_name,
    STATE(272), 1,
      sym__custom_type,
    STATE(273), 1,
      sym__custom_generic_type,
    STATE(275), 1,
      sym__custom_generic_instantiated_type,
    STATE(331), 1,
      sym_type,
    ACTIONS(152), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(41), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(267), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1179] = 13,
    ACTIONS(167), 1,
      anon_sym_real,
    ACTIONS(170), 1,
      anon_sym_array,
    ACTIONS(173), 1,
      sym_refersTo,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(179), 1,
      sym__dedent,
    STATE(270), 1,
      sym__type_name,
    STATE(272), 1,
      sym__custom_type,
    STATE(273), 1,
      sym__custom_generic_type,
    STATE(275), 1,
      sym__custom_generic_instantiated_type,
    STATE(331), 1,
      sym_type,
    ACTIONS(164), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(41), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(267), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1223] = 12,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_var,
    ACTIONS(55), 1,
      anon_sym_not,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(22), 1,
      sym_primary_expression,
    STATE(39), 1,
      sym_variable_access,
    STATE(168), 1,
      sym_expression,
    STATE(243), 1,
      sym_argument,
    STATE(24), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(57), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(159), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1265] = 4,
    ACTIONS(183), 1,
      anon_sym_SLASH,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(181), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 11,
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
  [1291] = 2,
    ACTIONS(95), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 14,
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
  [1313] = 13,
    ACTIONS(154), 1,
      anon_sym_real,
    ACTIONS(156), 1,
      anon_sym_array,
    ACTIONS(158), 1,
      sym_refersTo,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym__dedent,
    STATE(270), 1,
      sym__type_name,
    STATE(272), 1,
      sym__custom_type,
    STATE(273), 1,
      sym__custom_generic_type,
    STATE(275), 1,
      sym__custom_generic_instantiated_type,
    STATE(331), 1,
      sym_type,
    ACTIONS(152), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(41), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(267), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1357] = 9,
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
      anon_sym_variables,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    STATE(55), 8,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_variable,
      aux_sym_program_repeat1,
  [1392] = 11,
    ACTIONS(189), 1,
      anon_sym_for,
    ACTIONS(191), 1,
      anon_sym_repeat,
    ACTIONS(193), 1,
      anon_sym_while,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(199), 1,
      sym__dedent,
    STATE(52), 1,
      aux_sym_block_repeat1,
    STATE(160), 1,
      sym_if,
    STATE(265), 1,
      sym_statement,
    STATE(336), 1,
      sym_variable_access,
    STATE(325), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1431] = 2,
    ACTIONS(99), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 13,
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
  [1452] = 2,
    ACTIONS(103), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 13,
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
  [1473] = 7,
    ACTIONS(183), 1,
      anon_sym_SLASH,
    STATE(108), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(203), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(205), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(181), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(201), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1504] = 12,
    ACTIONS(154), 1,
      anon_sym_real,
    ACTIONS(156), 1,
      anon_sym_array,
    ACTIONS(158), 1,
      sym_refersTo,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(270), 1,
      sym__type_name,
    STATE(272), 1,
      sym__custom_type,
    STATE(273), 1,
      sym__custom_generic_type,
    STATE(275), 1,
      sym__custom_generic_instantiated_type,
    STATE(331), 1,
      sym_type,
    ACTIONS(152), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(45), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(267), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1545] = 11,
    ACTIONS(207), 1,
      anon_sym_for,
    ACTIONS(210), 1,
      anon_sym_repeat,
    ACTIONS(213), 1,
      anon_sym_while,
    ACTIONS(216), 1,
      anon_sym_if,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(222), 1,
      sym__dedent,
    STATE(52), 1,
      aux_sym_block_repeat1,
    STATE(160), 1,
      sym_if,
    STATE(265), 1,
      sym_statement,
    STATE(336), 1,
      sym_variable_access,
    STATE(325), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1584] = 11,
    ACTIONS(189), 1,
      anon_sym_for,
    ACTIONS(191), 1,
      anon_sym_repeat,
    ACTIONS(193), 1,
      anon_sym_while,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym__dedent,
    STATE(52), 1,
      aux_sym_block_repeat1,
    STATE(160), 1,
      sym_if,
    STATE(265), 1,
      sym_statement,
    STATE(336), 1,
      sym_variable_access,
    STATE(325), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1623] = 9,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 1,
      anon_sym_enum,
    ACTIONS(231), 1,
      anon_sym_record,
    ACTIONS(234), 1,
      anon_sym_export,
    ACTIONS(237), 1,
      anon_sym_import,
    ACTIONS(240), 1,
      anon_sym_define,
    ACTIONS(243), 1,
      anon_sym_test,
    ACTIONS(246), 1,
      anon_sym_variables,
    STATE(54), 8,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_variable,
      aux_sym_program_repeat1,
  [1658] = 9,
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
      anon_sym_variables,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    STATE(54), 8,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_variable,
      aux_sym_program_repeat1,
  [1693] = 9,
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
      anon_sym_variables,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    STATE(54), 8,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_variable,
      aux_sym_program_repeat1,
  [1728] = 12,
    ACTIONS(154), 1,
      anon_sym_real,
    ACTIONS(156), 1,
      anon_sym_array,
    ACTIONS(158), 1,
      sym_refersTo,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(270), 1,
      sym__type_name,
    STATE(272), 1,
      sym__custom_type,
    STATE(273), 1,
      sym__custom_generic_type,
    STATE(275), 1,
      sym__custom_generic_instantiated_type,
    STATE(331), 1,
      sym_type,
    ACTIONS(152), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(40), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(267), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1769] = 5,
    STATE(60), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(87), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(251), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(75), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(253), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [1796] = 5,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(91), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 8,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1823] = 5,
    STATE(60), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(258), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(262), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(260), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [1850] = 4,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 10,
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
  [1875] = 2,
    ACTIONS(95), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 13,
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
  [1896] = 11,
    ACTIONS(189), 1,
      anon_sym_for,
    ACTIONS(191), 1,
      anon_sym_repeat,
    ACTIONS(193), 1,
      anon_sym_while,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(265), 1,
      sym__dedent,
    STATE(53), 1,
      aux_sym_block_repeat1,
    STATE(160), 1,
      sym_if,
    STATE(265), 1,
      sym_statement,
    STATE(336), 1,
      sym_variable_access,
    STATE(325), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1935] = 11,
    ACTIONS(189), 1,
      anon_sym_for,
    ACTIONS(191), 1,
      anon_sym_repeat,
    ACTIONS(193), 1,
      anon_sym_while,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(267), 1,
      sym__dedent,
    STATE(47), 1,
      aux_sym_block_repeat1,
    STATE(160), 1,
      sym_if,
    STATE(265), 1,
      sym_statement,
    STATE(336), 1,
      sym_variable_access,
    STATE(325), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [1974] = 9,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_not,
    ACTIONS(275), 1,
      sym_float,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(221), 1,
      sym_expression,
    ACTIONS(273), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(48), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2008] = 9,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_not,
    ACTIONS(285), 1,
      sym_float,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(50), 1,
      sym_primary_expression,
    STATE(237), 1,
      sym_expression,
    ACTIONS(283), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(276), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2042] = 9,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_not,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(22), 1,
      sym_primary_expression,
    STATE(161), 1,
      sym_expression,
    ACTIONS(57), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(24), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(159), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2076] = 9,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_not,
    ACTIONS(275), 1,
      sym_float,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(231), 1,
      sym_expression,
    ACTIONS(273), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(48), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2110] = 9,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_not,
    ACTIONS(285), 1,
      sym_float,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(50), 1,
      sym_primary_expression,
    STATE(196), 1,
      sym_expression,
    ACTIONS(283), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(276), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2144] = 9,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_not,
    ACTIONS(295), 1,
      sym_float,
    ACTIONS(297), 1,
      sym_identifier,
    STATE(10), 1,
      sym_primary_expression,
    STATE(120), 1,
      sym_expression,
    ACTIONS(293), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(14), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(122), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2178] = 9,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_not,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(22), 1,
      sym_primary_expression,
    STATE(162), 1,
      sym_expression,
    ACTIONS(57), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(24), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(159), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2212] = 9,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_not,
    ACTIONS(275), 1,
      sym_float,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(279), 1,
      sym_expression,
    ACTIONS(273), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(48), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2246] = 9,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_not,
    ACTIONS(285), 1,
      sym_float,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(50), 1,
      sym_primary_expression,
    STATE(274), 1,
      sym_expression,
    ACTIONS(283), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(276), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2280] = 9,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_not,
    ACTIONS(275), 1,
      sym_float,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(233), 1,
      sym_expression,
    ACTIONS(273), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(48), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2314] = 9,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_not,
    ACTIONS(295), 1,
      sym_float,
    ACTIONS(297), 1,
      sym_identifier,
    STATE(10), 1,
      sym_primary_expression,
    STATE(121), 1,
      sym_expression,
    ACTIONS(293), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(14), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(122), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2348] = 9,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_not,
    ACTIONS(295), 1,
      sym_float,
    ACTIONS(297), 1,
      sym_identifier,
    STATE(10), 1,
      sym_primary_expression,
    STATE(119), 1,
      sym_expression,
    ACTIONS(293), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(14), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(122), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2382] = 9,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_not,
    ACTIONS(275), 1,
      sym_float,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(219), 1,
      sym_expression,
    ACTIONS(273), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(48), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2416] = 9,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_not,
    ACTIONS(295), 1,
      sym_float,
    ACTIONS(297), 1,
      sym_identifier,
    STATE(10), 1,
      sym_primary_expression,
    STATE(38), 1,
      sym_expression,
    ACTIONS(293), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(14), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(122), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2450] = 9,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_not,
    ACTIONS(285), 1,
      sym_float,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(50), 1,
      sym_primary_expression,
    STATE(208), 1,
      sym_expression,
    ACTIONS(283), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(276), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2484] = 9,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_not,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(22), 1,
      sym_primary_expression,
    STATE(157), 1,
      sym_expression,
    ACTIONS(57), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(24), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(159), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2518] = 9,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_not,
    ACTIONS(275), 1,
      sym_float,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(234), 1,
      sym_expression,
    ACTIONS(273), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(48), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2552] = 9,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_not,
    ACTIONS(275), 1,
      sym_float,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(261), 1,
      sym_expression,
    ACTIONS(273), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(48), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2586] = 9,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_not,
    ACTIONS(275), 1,
      sym_float,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(235), 1,
      sym_expression,
    ACTIONS(273), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(48), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2620] = 9,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_not,
    ACTIONS(275), 1,
      sym_float,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(220), 1,
      sym_expression,
    ACTIONS(273), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(48), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2654] = 5,
    ACTIONS(183), 1,
      anon_sym_SLASH,
    ACTIONS(91), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(181), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 7,
      sym__indent,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2680] = 9,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_not,
    ACTIONS(285), 1,
      sym_float,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(50), 1,
      sym_primary_expression,
    STATE(213), 1,
      sym_expression,
    ACTIONS(283), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(276), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2714] = 9,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_not,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(22), 1,
      sym_primary_expression,
    STATE(217), 1,
      sym_expression,
    ACTIONS(57), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(24), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(159), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2748] = 9,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_not,
    ACTIONS(275), 1,
      sym_float,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(244), 1,
      sym_expression,
    ACTIONS(273), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(48), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2782] = 9,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_not,
    ACTIONS(285), 1,
      sym_float,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(50), 1,
      sym_primary_expression,
    STATE(236), 1,
      sym_expression,
    ACTIONS(283), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(276), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2816] = 9,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_not,
    ACTIONS(275), 1,
      sym_float,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(242), 1,
      sym_expression,
    ACTIONS(273), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(48), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(216), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2850] = 11,
    ACTIONS(301), 1,
      anon_sym_real,
    ACTIONS(303), 1,
      anon_sym_array,
    ACTIONS(305), 1,
      sym_refersTo,
    ACTIONS(307), 1,
      sym_identifier,
    STATE(176), 1,
      sym__type_name,
    STATE(246), 1,
      sym_declaration_type,
    STATE(309), 1,
      sym__custom_type,
    STATE(316), 1,
      sym__custom_generic_type,
    STATE(328), 1,
      sym__custom_generic_instantiated_type,
    ACTIONS(299), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(300), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2887] = 4,
    STATE(92), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(312), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(309), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(258), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [2910] = 11,
    ACTIONS(156), 1,
      anon_sym_array,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(317), 1,
      anon_sym_real,
    ACTIONS(319), 1,
      sym_refersTo,
    STATE(171), 1,
      sym__type_name,
    STATE(272), 1,
      sym__custom_type,
    STATE(273), 1,
      sym__custom_generic_type,
    STATE(275), 1,
      sym__custom_generic_instantiated_type,
    STATE(295), 1,
      sym_type,
    ACTIONS(315), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(267), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2947] = 11,
    ACTIONS(301), 1,
      anon_sym_real,
    ACTIONS(303), 1,
      anon_sym_array,
    ACTIONS(305), 1,
      sym_refersTo,
    ACTIONS(307), 1,
      sym_identifier,
    STATE(176), 1,
      sym__type_name,
    STATE(249), 1,
      sym_declaration_type,
    STATE(309), 1,
      sym__custom_type,
    STATE(316), 1,
      sym__custom_generic_type,
    STATE(328), 1,
      sym__custom_generic_instantiated_type,
    ACTIONS(299), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(300), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2984] = 11,
    ACTIONS(301), 1,
      anon_sym_real,
    ACTIONS(303), 1,
      anon_sym_array,
    ACTIONS(305), 1,
      sym_refersTo,
    ACTIONS(307), 1,
      sym_identifier,
    STATE(176), 1,
      sym__type_name,
    STATE(241), 1,
      sym_declaration_type,
    STATE(309), 1,
      sym__custom_type,
    STATE(316), 1,
      sym__custom_generic_type,
    STATE(328), 1,
      sym__custom_generic_instantiated_type,
    ACTIONS(299), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(300), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [3021] = 4,
    STATE(92), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(251), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3044] = 11,
    ACTIONS(301), 1,
      anon_sym_real,
    ACTIONS(303), 1,
      anon_sym_array,
    ACTIONS(305), 1,
      sym_refersTo,
    ACTIONS(307), 1,
      sym_identifier,
    STATE(176), 1,
      sym__type_name,
    STATE(239), 1,
      sym_declaration_type,
    STATE(309), 1,
      sym__custom_type,
    STATE(316), 1,
      sym__custom_generic_type,
    STATE(328), 1,
      sym__custom_generic_instantiated_type,
    ACTIONS(299), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(300), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [3081] = 11,
    ACTIONS(156), 1,
      anon_sym_array,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(317), 1,
      anon_sym_real,
    ACTIONS(319), 1,
      sym_refersTo,
    STATE(171), 1,
      sym__type_name,
    STATE(272), 1,
      sym__custom_type,
    STATE(273), 1,
      sym__custom_generic_type,
    STATE(275), 1,
      sym__custom_generic_instantiated_type,
    STATE(298), 1,
      sym_type,
    ACTIONS(315), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(267), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [3118] = 11,
    ACTIONS(156), 1,
      anon_sym_array,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(317), 1,
      anon_sym_real,
    ACTIONS(319), 1,
      sym_refersTo,
    STATE(171), 1,
      sym__type_name,
    STATE(272), 1,
      sym__custom_type,
    STATE(273), 1,
      sym__custom_generic_type,
    STATE(275), 1,
      sym__custom_generic_instantiated_type,
    STATE(326), 1,
      sym_type,
    ACTIONS(315), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(267), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [3155] = 4,
    STATE(101), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(251), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [3175] = 4,
    STATE(101), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(324), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(321), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3195] = 6,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_float,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(62), 1,
      sym_primary_expression,
    ACTIONS(273), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(48), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3218] = 6,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(29), 1,
      sym_primary_expression,
    ACTIONS(57), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(24), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3241] = 6,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_float,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(59), 1,
      sym_primary_expression,
    ACTIONS(273), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(48), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3264] = 6,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      sym_float,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(106), 1,
      sym_primary_expression,
    ACTIONS(283), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3287] = 6,
    ACTIONS(183), 1,
      anon_sym_SLASH,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_constant_repeat1,
    ACTIONS(203), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(329), 2,
      sym__indent,
      anon_sym_constants,
    ACTIONS(181), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
  [3310] = 6,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(30), 1,
      sym_primary_expression,
    ACTIONS(57), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(24), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3333] = 4,
    STATE(112), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(205), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(251), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(201), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3352] = 6,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(28), 1,
      sym_primary_expression,
    ACTIONS(57), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(24), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3375] = 6,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_float,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(61), 1,
      sym_primary_expression,
    ACTIONS(273), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(48), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3398] = 6,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      sym_float,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(44), 1,
      sym_primary_expression,
    ACTIONS(283), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3421] = 4,
    STATE(112), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(334), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(331), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3440] = 6,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      sym_float,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(123), 1,
      sym_primary_expression,
    ACTIONS(283), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3463] = 6,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      sym_float,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(85), 1,
      sym_primary_expression,
    ACTIONS(283), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3486] = 6,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      sym_float,
    ACTIONS(297), 1,
      sym_identifier,
    STATE(12), 1,
      sym_primary_expression,
    ACTIONS(293), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(14), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3509] = 6,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      sym_float,
    ACTIONS(297), 1,
      sym_identifier,
    STATE(18), 1,
      sym_primary_expression,
    ACTIONS(293), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(14), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3532] = 6,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      sym_float,
    ACTIONS(297), 1,
      sym_identifier,
    STATE(13), 1,
      sym_primary_expression,
    ACTIONS(293), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(14), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3555] = 6,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      sym_float,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(43), 1,
      sym_primary_expression,
    ACTIONS(283), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(37), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3578] = 2,
    ACTIONS(337), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(339), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3592] = 2,
    ACTIONS(341), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(343), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3606] = 3,
    ACTIONS(145), 1,
      anon_sym_and,
    ACTIONS(337), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(339), 6,
      anon_sym_not,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3622] = 2,
    ACTIONS(77), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(79), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3636] = 4,
    ACTIONS(183), 1,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(181), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(345), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [3654] = 1,
    ACTIONS(347), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3665] = 1,
    ACTIONS(349), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3676] = 1,
    ACTIONS(349), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3687] = 1,
    ACTIONS(351), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3698] = 1,
    ACTIONS(353), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3709] = 6,
    ACTIONS(355), 1,
      anon_sym_constants,
    ACTIONS(357), 1,
      anon_sym_variables,
    ACTIONS(359), 1,
      sym__indent,
    STATE(135), 1,
      sym_block,
    STATE(132), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(182), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3730] = 1,
    ACTIONS(361), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3741] = 1,
    ACTIONS(363), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3752] = 6,
    ACTIONS(355), 1,
      anon_sym_constants,
    ACTIONS(357), 1,
      anon_sym_variables,
    ACTIONS(359), 1,
      sym__indent,
    STATE(124), 1,
      sym_block,
    STATE(172), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(179), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3773] = 1,
    ACTIONS(365), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3784] = 1,
    ACTIONS(367), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3795] = 1,
    ACTIONS(369), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3806] = 1,
    ACTIONS(371), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3817] = 1,
    ACTIONS(371), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3828] = 1,
    ACTIONS(373), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3839] = 1,
    ACTIONS(375), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3850] = 1,
    ACTIONS(377), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3861] = 1,
    ACTIONS(379), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3872] = 1,
    ACTIONS(381), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3883] = 1,
    ACTIONS(383), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3894] = 1,
    ACTIONS(385), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3905] = 6,
    ACTIONS(355), 1,
      anon_sym_constants,
    ACTIONS(357), 1,
      anon_sym_variables,
    ACTIONS(359), 1,
      sym__indent,
    STATE(125), 1,
      sym_block,
    STATE(172), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(189), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3926] = 1,
    ACTIONS(387), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3937] = 1,
    ACTIONS(389), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3948] = 1,
    ACTIONS(379), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3959] = 1,
    ACTIONS(353), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [3970] = 6,
    ACTIONS(355), 1,
      anon_sym_constants,
    ACTIONS(357), 1,
      anon_sym_variables,
    ACTIONS(359), 1,
      sym__indent,
    STATE(148), 1,
      sym_block,
    STATE(145), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(173), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3991] = 6,
    ACTIONS(355), 1,
      anon_sym_constants,
    ACTIONS(357), 1,
      anon_sym_variables,
    ACTIONS(359), 1,
      sym__indent,
    STATE(141), 1,
      sym_block,
    STATE(153), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(191), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4012] = 1,
    ACTIONS(391), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [4023] = 6,
    ACTIONS(355), 1,
      anon_sym_constants,
    ACTIONS(357), 1,
      anon_sym_variables,
    ACTIONS(359), 1,
      sym__indent,
    STATE(126), 1,
      sym_block,
    STATE(172), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(187), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4044] = 1,
    ACTIONS(393), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [4055] = 1,
    ACTIONS(395), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_variables,
  [4066] = 5,
    ACTIONS(397), 1,
      anon_sym_elsif,
    ACTIONS(399), 1,
      anon_sym_else,
    STATE(296), 1,
      sym_else,
    ACTIONS(401), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(164), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [4084] = 2,
    ACTIONS(403), 1,
      anon_sym_and,
    ACTIONS(337), 6,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_or,
      aux_sym_comment_token1,
  [4096] = 2,
    ACTIONS(407), 1,
      sym__dedent,
    ACTIONS(405), 6,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
      sym_refersTo,
      sym_identifier,
  [4108] = 1,
    ACTIONS(77), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4118] = 5,
    ACTIONS(397), 1,
      anon_sym_elsif,
    ACTIONS(399), 1,
      anon_sym_else,
    STATE(301), 1,
      sym_else,
    ACTIONS(409), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(156), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [4136] = 1,
    ACTIONS(337), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4146] = 1,
    ACTIONS(341), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4156] = 6,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      anon_sym_var,
    ACTIONS(415), 1,
      sym_identifier,
    STATE(281), 1,
      sym_parameter,
    STATE(330), 1,
      sym_var,
    STATE(362), 1,
      sym__parameters,
  [4175] = 3,
    ACTIONS(417), 1,
      anon_sym_elsif,
    STATE(164), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
    ACTIONS(420), 3,
      sym__newline,
      anon_sym_else,
      aux_sym_comment_token1,
  [4188] = 2,
    ACTIONS(391), 1,
      sym__dedent,
    ACTIONS(422), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [4199] = 2,
    ACTIONS(222), 1,
      sym__dedent,
    ACTIONS(424), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [4210] = 3,
    ACTIONS(403), 1,
      anon_sym_and,
    ACTIONS(428), 1,
      anon_sym_or,
    ACTIONS(426), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [4223] = 3,
    ACTIONS(403), 1,
      anon_sym_and,
    ACTIONS(428), 1,
      anon_sym_or,
    ACTIONS(430), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4235] = 5,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym__newline,
    STATE(184), 1,
      aux_sym_generics_repeat1,
    STATE(293), 1,
      sym_comment,
  [4251] = 5,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      aux_sym_comment_token1,
    ACTIONS(440), 1,
      sym__newline,
    STATE(190), 1,
      aux_sym_generics_repeat1,
    STATE(333), 1,
      sym_comment,
  [4267] = 4,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(181), 1,
      sym__generic,
    STATE(282), 1,
      sym__generics,
    ACTIONS(442), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4281] = 3,
    ACTIONS(448), 1,
      anon_sym_variables,
    ACTIONS(446), 2,
      sym__indent,
      anon_sym_constants,
    STATE(172), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [4293] = 4,
    ACTIONS(355), 1,
      anon_sym_constants,
    ACTIONS(359), 1,
      sym__indent,
    STATE(149), 1,
      sym_block,
    STATE(203), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4307] = 3,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(454), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4319] = 5,
    ACTIONS(456), 1,
      sym_identifier,
    STATE(227), 1,
      sym__custom_generic_type,
    STATE(230), 1,
      sym__custom_type,
    STATE(269), 1,
      sym__custom_generic_instantiated_type,
    STATE(270), 1,
      sym__type_name,
  [4335] = 4,
    ACTIONS(458), 1,
      sym_identifier,
    STATE(193), 1,
      sym__generic,
    STATE(268), 1,
      sym__generics,
    ACTIONS(442), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4349] = 3,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(462), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4361] = 3,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym__generics_repeat1,
    ACTIONS(466), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4373] = 4,
    ACTIONS(355), 1,
      anon_sym_constants,
    ACTIONS(359), 1,
      sym__indent,
    STATE(147), 1,
      sym_block,
    STATE(203), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4387] = 5,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(176), 1,
      sym__type_name,
    STATE(321), 1,
      sym__custom_generic_instantiated_type,
    STATE(323), 1,
      sym__custom_generic_type,
    STATE(327), 1,
      sym__custom_type,
  [4403] = 3,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym__generics_repeat1,
    ACTIONS(470), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4415] = 4,
    ACTIONS(355), 1,
      anon_sym_constants,
    ACTIONS(359), 1,
      sym__indent,
    STATE(139), 1,
      sym_block,
    STATE(203), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4429] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym__generics_repeat1,
    ACTIONS(475), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4441] = 5,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      aux_sym_comment_token1,
    ACTIONS(477), 1,
      sym__newline,
    STATE(194), 1,
      aux_sym_generics_repeat1,
    STATE(319), 1,
      sym_comment,
  [4457] = 5,
    ACTIONS(456), 1,
      sym_identifier,
    STATE(171), 1,
      sym__type_name,
    STATE(227), 1,
      sym__custom_generic_type,
    STATE(230), 1,
      sym__custom_type,
    STATE(269), 1,
      sym__custom_generic_instantiated_type,
  [4473] = 3,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym__generics_repeat1,
    ACTIONS(475), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4485] = 4,
    ACTIONS(355), 1,
      anon_sym_constants,
    ACTIONS(359), 1,
      sym__indent,
    STATE(136), 1,
      sym_block,
    STATE(203), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4499] = 3,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(482), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4511] = 4,
    ACTIONS(355), 1,
      anon_sym_constants,
    ACTIONS(359), 1,
      sym__indent,
    STATE(137), 1,
      sym_block,
    STATE(203), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4525] = 5,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      aux_sym_comment_token1,
    ACTIONS(484), 1,
      sym__newline,
    STATE(194), 1,
      aux_sym_generics_repeat1,
    STATE(345), 1,
      sym_comment,
  [4541] = 4,
    ACTIONS(355), 1,
      anon_sym_constants,
    ACTIONS(359), 1,
      sym__indent,
    STATE(128), 1,
      sym_block,
    STATE(203), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4555] = 3,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym__generics_repeat1,
    ACTIONS(466), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4567] = 3,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym__generics_repeat1,
    ACTIONS(470), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4579] = 3,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_generics_repeat1,
    ACTIONS(491), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4590] = 1,
    ACTIONS(493), 4,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
      sym_identifier,
  [4597] = 4,
    ACTIONS(495), 1,
      anon_sym_and,
    ACTIONS(497), 1,
      anon_sym_or,
    ACTIONS(499), 1,
      sym__indent,
    STATE(299), 1,
      sym_block,
  [4610] = 3,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(462), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4621] = 1,
    ACTIONS(377), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [4628] = 1,
    ACTIONS(395), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [4635] = 1,
    ACTIONS(493), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4642] = 1,
    ACTIONS(503), 4,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
      sym_identifier,
  [4649] = 3,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(482), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4660] = 3,
    ACTIONS(505), 1,
      anon_sym_constants,
    ACTIONS(508), 1,
      sym__indent,
    STATE(203), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4671] = 3,
    ACTIONS(510), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_enum_repeat1,
    ACTIONS(513), 2,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4682] = 3,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(454), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4693] = 4,
    ACTIONS(413), 1,
      anon_sym_var,
    ACTIONS(415), 1,
      sym_identifier,
    STATE(318), 1,
      sym_parameter,
    STATE(330), 1,
      sym_var,
  [4706] = 3,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(520), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4717] = 4,
    ACTIONS(495), 1,
      anon_sym_and,
    ACTIONS(497), 1,
      anon_sym_or,
    ACTIONS(499), 1,
      sym__indent,
    STATE(324), 1,
      sym_block,
  [4730] = 1,
    ACTIONS(503), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4737] = 1,
    ACTIONS(522), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [4744] = 3,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(524), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4755] = 3,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_constant_repeat1,
    ACTIONS(529), 2,
      sym__indent,
      anon_sym_constants,
  [4766] = 4,
    ACTIONS(495), 1,
      anon_sym_and,
    ACTIONS(497), 1,
      anon_sym_or,
    ACTIONS(499), 1,
      sym__indent,
    STATE(210), 1,
      sym_block,
  [4779] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_constant_repeat1,
    ACTIONS(531), 2,
      sym__indent,
      anon_sym_constants,
  [4790] = 1,
    ACTIONS(533), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4797] = 1,
    ACTIONS(77), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [4804] = 3,
    ACTIONS(403), 1,
      anon_sym_and,
    ACTIONS(428), 1,
      anon_sym_or,
    ACTIONS(535), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4815] = 3,
    ACTIONS(537), 1,
      anon_sym_generics,
    STATE(304), 1,
      sym_generics,
    ACTIONS(539), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4826] = 1,
    ACTIONS(341), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [4833] = 1,
    ACTIONS(337), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [4840] = 2,
    ACTIONS(541), 1,
      anon_sym_and,
    ACTIONS(337), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_or,
  [4849] = 1,
    ACTIONS(543), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4856] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(548), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4867] = 1,
    ACTIONS(550), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4874] = 1,
    ACTIONS(513), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4880] = 2,
    ACTIONS(554), 1,
      anon_sym_from,
    ACTIONS(552), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4888] = 1,
    ACTIONS(556), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4894] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_COLON,
    STATE(204), 1,
      aux_sym_enum_repeat1,
  [4904] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_COLON,
    STATE(228), 1,
      aux_sym_enum_repeat1,
  [4914] = 1,
    ACTIONS(564), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4920] = 3,
    ACTIONS(541), 1,
      anon_sym_and,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
    ACTIONS(568), 1,
      anon_sym_or,
  [4930] = 1,
    ACTIONS(570), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4936] = 3,
    ACTIONS(541), 1,
      anon_sym_and,
    ACTIONS(568), 1,
      anon_sym_or,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [4946] = 3,
    ACTIONS(541), 1,
      anon_sym_and,
    ACTIONS(568), 1,
      anon_sym_or,
    ACTIONS(574), 1,
      anon_sym_RBRACK,
  [4956] = 3,
    ACTIONS(541), 1,
      anon_sym_and,
    ACTIONS(568), 1,
      anon_sym_or,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [4966] = 1,
    ACTIONS(337), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4972] = 2,
    ACTIONS(495), 1,
      anon_sym_and,
    ACTIONS(337), 2,
      sym__indent,
      anon_sym_or,
  [4980] = 3,
    ACTIONS(578), 1,
      anon_sym_generics,
    ACTIONS(580), 1,
      sym__indent,
    STATE(348), 1,
      sym_generics,
  [4990] = 3,
    ACTIONS(582), 1,
      aux_sym_comment_token1,
    ACTIONS(584), 1,
      sym__newline,
    STATE(130), 1,
      sym_comment,
  [5000] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      aux_sym_enum_repeat1,
  [5010] = 3,
    ACTIONS(582), 1,
      aux_sym_comment_token1,
    ACTIONS(588), 1,
      sym__newline,
    STATE(131), 1,
      sym_comment,
  [5020] = 3,
    ACTIONS(541), 1,
      anon_sym_and,
    ACTIONS(568), 1,
      anon_sym_or,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
  [5030] = 1,
    ACTIONS(548), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [5036] = 3,
    ACTIONS(541), 1,
      anon_sym_and,
    ACTIONS(568), 1,
      anon_sym_or,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
  [5046] = 3,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_enum_repeat1,
  [5056] = 3,
    ACTIONS(438), 1,
      aux_sym_comment_token1,
    ACTIONS(598), 1,
      sym__newline,
    STATE(283), 1,
      sym_comment,
  [5066] = 3,
    ACTIONS(600), 1,
      anon_sym_LBRACK,
    ACTIONS(602), 1,
      sym__newline,
    STATE(343), 1,
      sym__multiple_import,
  [5076] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      aux_sym_enum_repeat1,
  [5086] = 3,
    ACTIONS(438), 1,
      aux_sym_comment_token1,
    ACTIONS(606), 1,
      sym__newline,
    STATE(271), 1,
      sym_comment,
  [5096] = 1,
    ACTIONS(608), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5102] = 3,
    ACTIONS(438), 1,
      aux_sym_comment_token1,
    ACTIONS(610), 1,
      sym__newline,
    STATE(151), 1,
      sym_comment,
  [5112] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_COLON,
    STATE(264), 1,
      aux_sym_enum_repeat1,
  [5122] = 2,
    ACTIONS(614), 1,
      anon_sym_from,
    ACTIONS(552), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5130] = 2,
    ACTIONS(616), 1,
      anon_sym_from,
    ACTIONS(552), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5138] = 1,
    ACTIONS(618), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [5144] = 1,
    ACTIONS(620), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [5150] = 1,
    ACTIONS(622), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [5156] = 3,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      sym__newline,
    STATE(278), 1,
      aux_sym_enum_repeat1,
  [5166] = 3,
    ACTIONS(438), 1,
      aux_sym_comment_token1,
    ACTIONS(626), 1,
      sym__newline,
    STATE(129), 1,
      sym_comment,
  [5176] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_COLON,
    STATE(204), 1,
      aux_sym_enum_repeat1,
  [5186] = 3,
    ACTIONS(541), 1,
      anon_sym_and,
    ACTIONS(568), 1,
      anon_sym_or,
    ACTIONS(630), 1,
      anon_sym_RBRACK,
  [5196] = 3,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    ACTIONS(634), 1,
      anon_sym_SEMI,
    STATE(262), 1,
      aux_sym__parameters_repeat1,
  [5206] = 3,
    ACTIONS(637), 1,
      sym_identifier,
    STATE(259), 1,
      sym_function_header,
    STATE(313), 1,
      sym__function_header,
  [5216] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_COLON,
    STATE(204), 1,
      aux_sym_enum_repeat1,
  [5226] = 3,
    ACTIONS(641), 1,
      aux_sym_comment_token1,
    ACTIONS(643), 1,
      sym__newline,
    STATE(166), 1,
      sym_comment,
  [5236] = 1,
    ACTIONS(618), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5242] = 1,
    ACTIONS(645), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5248] = 2,
    ACTIONS(649), 1,
      sym_identifier,
    ACTIONS(647), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5256] = 1,
    ACTIONS(651), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5262] = 3,
    ACTIONS(653), 1,
      sym_identifier,
    STATE(181), 1,
      sym__generic,
    STATE(340), 1,
      sym__generics,
  [5272] = 1,
    ACTIONS(363), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [5278] = 1,
    ACTIONS(656), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5284] = 1,
    ACTIONS(658), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5290] = 1,
    ACTIONS(341), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [5296] = 1,
    ACTIONS(660), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5302] = 1,
    ACTIONS(77), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [5308] = 3,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    STATE(262), 1,
      aux_sym__parameters_repeat1,
  [5318] = 3,
    ACTIONS(513), 1,
      sym__newline,
    ACTIONS(666), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_enum_repeat1,
  [5328] = 3,
    ACTIONS(541), 1,
      anon_sym_and,
    ACTIONS(568), 1,
      anon_sym_or,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
  [5338] = 1,
    ACTIONS(671), 3,
      sym__newline,
      anon_sym_generics,
      aux_sym_comment_token1,
  [5344] = 3,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym__parameters_repeat1,
  [5354] = 2,
    ACTIONS(675), 1,
      sym_identifier,
    ACTIONS(647), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5362] = 1,
    ACTIONS(361), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [5368] = 1,
    ACTIONS(550), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [5374] = 1,
    ACTIONS(677), 3,
      sym__newline,
      anon_sym_generics,
      aux_sym_comment_token1,
  [5380] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_enum_repeat1,
  [5390] = 2,
    ACTIONS(681), 1,
      anon_sym_from,
    ACTIONS(552), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5398] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      aux_sym_enum_repeat1,
  [5408] = 1,
    ACTIONS(391), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [5414] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_COLON,
    STATE(204), 1,
      aux_sym_enum_repeat1,
  [5424] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_COLON,
    STATE(260), 1,
      aux_sym_enum_repeat1,
  [5434] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_COLON,
    STATE(290), 1,
      aux_sym_enum_repeat1,
  [5444] = 1,
    ACTIONS(689), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5449] = 2,
    ACTIONS(691), 1,
      anon_sym_from,
    ACTIONS(693), 1,
      sym_identifier,
  [5456] = 1,
    ACTIONS(695), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5461] = 1,
    ACTIONS(697), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5466] = 2,
    ACTIONS(637), 1,
      sym_identifier,
    STATE(251), 1,
      sym__function_header,
  [5473] = 1,
    ACTIONS(699), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5478] = 1,
    ACTIONS(701), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5483] = 1,
    ACTIONS(703), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5488] = 1,
    ACTIONS(401), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5493] = 2,
    ACTIONS(499), 1,
      sym__indent,
    STATE(312), 1,
      sym_block,
  [5500] = 2,
    ACTIONS(499), 1,
      sym__indent,
    STATE(307), 1,
      sym_block,
  [5507] = 1,
    ACTIONS(705), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5512] = 1,
    ACTIONS(570), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5517] = 1,
    ACTIONS(707), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5522] = 1,
    ACTIONS(709), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5527] = 2,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    STATE(218), 1,
      sym_parameters,
  [5534] = 1,
    ACTIONS(656), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5539] = 2,
    ACTIONS(713), 1,
      sym_identifier,
    STATE(256), 1,
      sym_variable_access,
  [5546] = 1,
    ACTIONS(391), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5551] = 1,
    ACTIONS(715), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5556] = 1,
    ACTIONS(717), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5561] = 1,
    ACTIONS(513), 2,
      sym__newline,
      anon_sym_COMMA,
  [5566] = 2,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(200), 1,
      sym__generic,
  [5573] = 1,
    ACTIONS(658), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5578] = 2,
    ACTIONS(693), 1,
      sym_identifier,
    ACTIONS(719), 1,
      anon_sym_from,
  [5585] = 1,
    ACTIONS(632), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5590] = 1,
    ACTIONS(721), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5595] = 1,
    ACTIONS(721), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5600] = 1,
    ACTIONS(651), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5605] = 2,
    ACTIONS(458), 1,
      sym_identifier,
    STATE(195), 1,
      sym__generic,
  [5612] = 1,
    ACTIONS(556), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5617] = 1,
    ACTIONS(723), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5622] = 1,
    ACTIONS(725), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5627] = 1,
    ACTIONS(727), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5632] = 1,
    ACTIONS(564), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5637] = 1,
    ACTIONS(660), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5642] = 1,
    ACTIONS(729), 1,
      sym_identifier,
  [5646] = 1,
    ACTIONS(731), 1,
      sym_identifier,
  [5650] = 1,
    ACTIONS(733), 1,
      sym_identifier,
  [5654] = 1,
    ACTIONS(735), 1,
      sym_identifier,
  [5658] = 1,
    ACTIONS(689), 1,
      sym__indent,
  [5662] = 1,
    ACTIONS(737), 1,
      anon_sym_of,
  [5666] = 1,
    ACTIONS(739), 1,
      sym__newline,
  [5670] = 1,
    ACTIONS(741), 1,
      anon_sym_COLON_EQ,
  [5674] = 1,
    ACTIONS(743), 1,
      sym_identifier,
  [5678] = 1,
    ACTIONS(745), 1,
      anon_sym_from,
  [5682] = 1,
    ACTIONS(747), 1,
      sym__newline,
  [5686] = 1,
    ACTIONS(749), 1,
      sym_identifier,
  [5690] = 1,
    ACTIONS(752), 1,
      anon_sym_EQ,
  [5694] = 1,
    ACTIONS(754), 1,
      sym__newline,
  [5698] = 1,
    ACTIONS(756), 1,
      sym__newline,
  [5702] = 1,
    ACTIONS(758), 1,
      sym_identifier,
  [5706] = 1,
    ACTIONS(721), 1,
      sym__indent,
  [5710] = 1,
    ACTIONS(760), 1,
      sym_integer,
  [5714] = 1,
    ACTIONS(721), 1,
      sym__indent,
  [5718] = 1,
    ACTIONS(762), 1,
      sym__indent,
  [5722] = 1,
    ACTIONS(764), 1,
      sym_identifier,
  [5726] = 1,
    ACTIONS(766), 1,
      sym_identifier,
  [5730] = 1,
    ACTIONS(768), 1,
      sym_identifier,
  [5734] = 1,
    ACTIONS(770), 1,
      anon_sym_LBRACK,
  [5738] = 1,
    ACTIONS(772), 1,
      sym_identifier,
  [5742] = 1,
    ACTIONS(774), 1,
      anon_sym_for,
  [5746] = 1,
    ACTIONS(776), 1,
      sym_integer,
  [5750] = 1,
    ACTIONS(778), 1,
      sym_identifier,
  [5754] = 1,
    ACTIONS(780), 1,
      sym_identifier,
  [5758] = 1,
    ACTIONS(782), 1,
      sym__newline,
  [5762] = 1,
    ACTIONS(784), 1,
      sym_identifier,
  [5766] = 1,
    ACTIONS(786), 1,
      anon_sym_to,
  [5770] = 1,
    ACTIONS(788), 1,
      anon_sym_to,
  [5774] = 1,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
  [5778] = 1,
    ACTIONS(792), 1,
      anon_sym_from,
  [5782] = 1,
    ACTIONS(794), 1,
      anon_sym_until,
  [5786] = 1,
    ACTIONS(796), 1,
      anon_sym_EQ,
  [5790] = 1,
    ACTIONS(798), 1,
      sym_integer,
  [5794] = 1,
    ACTIONS(800), 1,
      sym_identifier,
  [5798] = 1,
    ACTIONS(802), 1,
      sym_integer,
  [5802] = 1,
    ACTIONS(802), 1,
      sym_float,
  [5806] = 1,
    ACTIONS(804), 1,
      sym_identifier,
  [5810] = 1,
    ACTIONS(806), 1,
      anon_sym_of,
  [5814] = 1,
    ACTIONS(808), 1,
      sym_identifier,
  [5818] = 1,
    ACTIONS(810), 1,
      sym__newline,
  [5822] = 1,
    ACTIONS(812), 1,
      sym_identifier,
  [5826] = 1,
    ACTIONS(814), 1,
      sym_integer,
  [5830] = 1,
    ACTIONS(816), 1,
      sym_identifier,
  [5834] = 1,
    ACTIONS(818), 1,
      sym_float,
  [5838] = 1,
    ACTIONS(820), 1,
      sym__newline,
  [5842] = 1,
    ACTIONS(822), 1,
      sym__newline,
  [5846] = 1,
    ACTIONS(824), 1,
      anon_sym_EQ,
  [5850] = 1,
    ACTIONS(826), 1,
      sym_identifier,
  [5854] = 1,
    ACTIONS(828), 1,
      anon_sym_to,
  [5858] = 1,
    ACTIONS(830), 1,
      anon_sym_to,
  [5862] = 1,
    ACTIONS(832), 1,
      sym_identifier,
  [5866] = 1,
    ACTIONS(834), 1,
      ts_builtin_sym_end,
  [5870] = 1,
    ACTIONS(836), 1,
      sym_identifier,
  [5874] = 1,
    ACTIONS(838), 1,
      anon_sym_to,
  [5878] = 1,
    ACTIONS(840), 1,
      anon_sym_to,
  [5882] = 1,
    ACTIONS(842), 1,
      sym_identifier,
  [5886] = 1,
    ACTIONS(844), 1,
      sym_integer,
  [5890] = 1,
    ACTIONS(846), 1,
      sym_identifier,
  [5894] = 1,
    ACTIONS(848), 1,
      sym_identifier,
  [5898] = 1,
    ACTIONS(850), 1,
      sym_identifier,
  [5902] = 1,
    ACTIONS(852), 1,
      sym_identifier,
  [5906] = 1,
    ACTIONS(854), 1,
      sym_integer,
  [5910] = 1,
    ACTIONS(844), 1,
      sym_float,
  [5914] = 1,
    ACTIONS(856), 1,
      sym_integer,
  [5918] = 1,
    ACTIONS(858), 1,
      sym_float,
  [5922] = 1,
    ACTIONS(860), 1,
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
  [SMALL_STATE(11)] = 328,
  [SMALL_STATE(12)] = 361,
  [SMALL_STATE(13)] = 393,
  [SMALL_STATE(14)] = 419,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 471,
  [SMALL_STATE(17)] = 497,
  [SMALL_STATE(18)] = 523,
  [SMALL_STATE(19)] = 553,
  [SMALL_STATE(20)] = 584,
  [SMALL_STATE(21)] = 615,
  [SMALL_STATE(22)] = 646,
  [SMALL_STATE(23)] = 681,
  [SMALL_STATE(24)] = 705,
  [SMALL_STATE(25)] = 729,
  [SMALL_STATE(26)] = 759,
  [SMALL_STATE(27)] = 783,
  [SMALL_STATE(28)] = 813,
  [SMALL_STATE(29)] = 837,
  [SMALL_STATE(30)] = 865,
  [SMALL_STATE(31)] = 895,
  [SMALL_STATE(32)] = 919,
  [SMALL_STATE(33)] = 949,
  [SMALL_STATE(34)] = 972,
  [SMALL_STATE(35)] = 995,
  [SMALL_STATE(36)] = 1017,
  [SMALL_STATE(37)] = 1049,
  [SMALL_STATE(38)] = 1071,
  [SMALL_STATE(39)] = 1111,
  [SMALL_STATE(40)] = 1135,
  [SMALL_STATE(41)] = 1179,
  [SMALL_STATE(42)] = 1223,
  [SMALL_STATE(43)] = 1265,
  [SMALL_STATE(44)] = 1291,
  [SMALL_STATE(45)] = 1313,
  [SMALL_STATE(46)] = 1357,
  [SMALL_STATE(47)] = 1392,
  [SMALL_STATE(48)] = 1431,
  [SMALL_STATE(49)] = 1452,
  [SMALL_STATE(50)] = 1473,
  [SMALL_STATE(51)] = 1504,
  [SMALL_STATE(52)] = 1545,
  [SMALL_STATE(53)] = 1584,
  [SMALL_STATE(54)] = 1623,
  [SMALL_STATE(55)] = 1658,
  [SMALL_STATE(56)] = 1693,
  [SMALL_STATE(57)] = 1728,
  [SMALL_STATE(58)] = 1769,
  [SMALL_STATE(59)] = 1796,
  [SMALL_STATE(60)] = 1823,
  [SMALL_STATE(61)] = 1850,
  [SMALL_STATE(62)] = 1875,
  [SMALL_STATE(63)] = 1896,
  [SMALL_STATE(64)] = 1935,
  [SMALL_STATE(65)] = 1974,
  [SMALL_STATE(66)] = 2008,
  [SMALL_STATE(67)] = 2042,
  [SMALL_STATE(68)] = 2076,
  [SMALL_STATE(69)] = 2110,
  [SMALL_STATE(70)] = 2144,
  [SMALL_STATE(71)] = 2178,
  [SMALL_STATE(72)] = 2212,
  [SMALL_STATE(73)] = 2246,
  [SMALL_STATE(74)] = 2280,
  [SMALL_STATE(75)] = 2314,
  [SMALL_STATE(76)] = 2348,
  [SMALL_STATE(77)] = 2382,
  [SMALL_STATE(78)] = 2416,
  [SMALL_STATE(79)] = 2450,
  [SMALL_STATE(80)] = 2484,
  [SMALL_STATE(81)] = 2518,
  [SMALL_STATE(82)] = 2552,
  [SMALL_STATE(83)] = 2586,
  [SMALL_STATE(84)] = 2620,
  [SMALL_STATE(85)] = 2654,
  [SMALL_STATE(86)] = 2680,
  [SMALL_STATE(87)] = 2714,
  [SMALL_STATE(88)] = 2748,
  [SMALL_STATE(89)] = 2782,
  [SMALL_STATE(90)] = 2816,
  [SMALL_STATE(91)] = 2850,
  [SMALL_STATE(92)] = 2887,
  [SMALL_STATE(93)] = 2910,
  [SMALL_STATE(94)] = 2947,
  [SMALL_STATE(95)] = 2984,
  [SMALL_STATE(96)] = 3021,
  [SMALL_STATE(97)] = 3044,
  [SMALL_STATE(98)] = 3081,
  [SMALL_STATE(99)] = 3118,
  [SMALL_STATE(100)] = 3155,
  [SMALL_STATE(101)] = 3175,
  [SMALL_STATE(102)] = 3195,
  [SMALL_STATE(103)] = 3218,
  [SMALL_STATE(104)] = 3241,
  [SMALL_STATE(105)] = 3264,
  [SMALL_STATE(106)] = 3287,
  [SMALL_STATE(107)] = 3310,
  [SMALL_STATE(108)] = 3333,
  [SMALL_STATE(109)] = 3352,
  [SMALL_STATE(110)] = 3375,
  [SMALL_STATE(111)] = 3398,
  [SMALL_STATE(112)] = 3421,
  [SMALL_STATE(113)] = 3440,
  [SMALL_STATE(114)] = 3463,
  [SMALL_STATE(115)] = 3486,
  [SMALL_STATE(116)] = 3509,
  [SMALL_STATE(117)] = 3532,
  [SMALL_STATE(118)] = 3555,
  [SMALL_STATE(119)] = 3578,
  [SMALL_STATE(120)] = 3592,
  [SMALL_STATE(121)] = 3606,
  [SMALL_STATE(122)] = 3622,
  [SMALL_STATE(123)] = 3636,
  [SMALL_STATE(124)] = 3654,
  [SMALL_STATE(125)] = 3665,
  [SMALL_STATE(126)] = 3676,
  [SMALL_STATE(127)] = 3687,
  [SMALL_STATE(128)] = 3698,
  [SMALL_STATE(129)] = 3709,
  [SMALL_STATE(130)] = 3730,
  [SMALL_STATE(131)] = 3741,
  [SMALL_STATE(132)] = 3752,
  [SMALL_STATE(133)] = 3773,
  [SMALL_STATE(134)] = 3784,
  [SMALL_STATE(135)] = 3795,
  [SMALL_STATE(136)] = 3806,
  [SMALL_STATE(137)] = 3817,
  [SMALL_STATE(138)] = 3828,
  [SMALL_STATE(139)] = 3839,
  [SMALL_STATE(140)] = 3850,
  [SMALL_STATE(141)] = 3861,
  [SMALL_STATE(142)] = 3872,
  [SMALL_STATE(143)] = 3883,
  [SMALL_STATE(144)] = 3894,
  [SMALL_STATE(145)] = 3905,
  [SMALL_STATE(146)] = 3926,
  [SMALL_STATE(147)] = 3937,
  [SMALL_STATE(148)] = 3948,
  [SMALL_STATE(149)] = 3959,
  [SMALL_STATE(150)] = 3970,
  [SMALL_STATE(151)] = 3991,
  [SMALL_STATE(152)] = 4012,
  [SMALL_STATE(153)] = 4023,
  [SMALL_STATE(154)] = 4044,
  [SMALL_STATE(155)] = 4055,
  [SMALL_STATE(156)] = 4066,
  [SMALL_STATE(157)] = 4084,
  [SMALL_STATE(158)] = 4096,
  [SMALL_STATE(159)] = 4108,
  [SMALL_STATE(160)] = 4118,
  [SMALL_STATE(161)] = 4136,
  [SMALL_STATE(162)] = 4146,
  [SMALL_STATE(163)] = 4156,
  [SMALL_STATE(164)] = 4175,
  [SMALL_STATE(165)] = 4188,
  [SMALL_STATE(166)] = 4199,
  [SMALL_STATE(167)] = 4210,
  [SMALL_STATE(168)] = 4223,
  [SMALL_STATE(169)] = 4235,
  [SMALL_STATE(170)] = 4251,
  [SMALL_STATE(171)] = 4267,
  [SMALL_STATE(172)] = 4281,
  [SMALL_STATE(173)] = 4293,
  [SMALL_STATE(174)] = 4307,
  [SMALL_STATE(175)] = 4319,
  [SMALL_STATE(176)] = 4335,
  [SMALL_STATE(177)] = 4349,
  [SMALL_STATE(178)] = 4361,
  [SMALL_STATE(179)] = 4373,
  [SMALL_STATE(180)] = 4387,
  [SMALL_STATE(181)] = 4403,
  [SMALL_STATE(182)] = 4415,
  [SMALL_STATE(183)] = 4429,
  [SMALL_STATE(184)] = 4441,
  [SMALL_STATE(185)] = 4457,
  [SMALL_STATE(186)] = 4473,
  [SMALL_STATE(187)] = 4485,
  [SMALL_STATE(188)] = 4499,
  [SMALL_STATE(189)] = 4511,
  [SMALL_STATE(190)] = 4525,
  [SMALL_STATE(191)] = 4541,
  [SMALL_STATE(192)] = 4555,
  [SMALL_STATE(193)] = 4567,
  [SMALL_STATE(194)] = 4579,
  [SMALL_STATE(195)] = 4590,
  [SMALL_STATE(196)] = 4597,
  [SMALL_STATE(197)] = 4610,
  [SMALL_STATE(198)] = 4621,
  [SMALL_STATE(199)] = 4628,
  [SMALL_STATE(200)] = 4635,
  [SMALL_STATE(201)] = 4642,
  [SMALL_STATE(202)] = 4649,
  [SMALL_STATE(203)] = 4660,
  [SMALL_STATE(204)] = 4671,
  [SMALL_STATE(205)] = 4682,
  [SMALL_STATE(206)] = 4693,
  [SMALL_STATE(207)] = 4706,
  [SMALL_STATE(208)] = 4717,
  [SMALL_STATE(209)] = 4730,
  [SMALL_STATE(210)] = 4737,
  [SMALL_STATE(211)] = 4744,
  [SMALL_STATE(212)] = 4755,
  [SMALL_STATE(213)] = 4766,
  [SMALL_STATE(214)] = 4779,
  [SMALL_STATE(215)] = 4790,
  [SMALL_STATE(216)] = 4797,
  [SMALL_STATE(217)] = 4804,
  [SMALL_STATE(218)] = 4815,
  [SMALL_STATE(219)] = 4826,
  [SMALL_STATE(220)] = 4833,
  [SMALL_STATE(221)] = 4840,
  [SMALL_STATE(222)] = 4849,
  [SMALL_STATE(223)] = 4856,
  [SMALL_STATE(224)] = 4867,
  [SMALL_STATE(225)] = 4874,
  [SMALL_STATE(226)] = 4880,
  [SMALL_STATE(227)] = 4888,
  [SMALL_STATE(228)] = 4894,
  [SMALL_STATE(229)] = 4904,
  [SMALL_STATE(230)] = 4914,
  [SMALL_STATE(231)] = 4920,
  [SMALL_STATE(232)] = 4930,
  [SMALL_STATE(233)] = 4936,
  [SMALL_STATE(234)] = 4946,
  [SMALL_STATE(235)] = 4956,
  [SMALL_STATE(236)] = 4966,
  [SMALL_STATE(237)] = 4972,
  [SMALL_STATE(238)] = 4980,
  [SMALL_STATE(239)] = 4990,
  [SMALL_STATE(240)] = 5000,
  [SMALL_STATE(241)] = 5010,
  [SMALL_STATE(242)] = 5020,
  [SMALL_STATE(243)] = 5030,
  [SMALL_STATE(244)] = 5036,
  [SMALL_STATE(245)] = 5046,
  [SMALL_STATE(246)] = 5056,
  [SMALL_STATE(247)] = 5066,
  [SMALL_STATE(248)] = 5076,
  [SMALL_STATE(249)] = 5086,
  [SMALL_STATE(250)] = 5096,
  [SMALL_STATE(251)] = 5102,
  [SMALL_STATE(252)] = 5112,
  [SMALL_STATE(253)] = 5122,
  [SMALL_STATE(254)] = 5130,
  [SMALL_STATE(255)] = 5138,
  [SMALL_STATE(256)] = 5144,
  [SMALL_STATE(257)] = 5150,
  [SMALL_STATE(258)] = 5156,
  [SMALL_STATE(259)] = 5166,
  [SMALL_STATE(260)] = 5176,
  [SMALL_STATE(261)] = 5186,
  [SMALL_STATE(262)] = 5196,
  [SMALL_STATE(263)] = 5206,
  [SMALL_STATE(264)] = 5216,
  [SMALL_STATE(265)] = 5226,
  [SMALL_STATE(266)] = 5236,
  [SMALL_STATE(267)] = 5242,
  [SMALL_STATE(268)] = 5248,
  [SMALL_STATE(269)] = 5256,
  [SMALL_STATE(270)] = 5262,
  [SMALL_STATE(271)] = 5272,
  [SMALL_STATE(272)] = 5278,
  [SMALL_STATE(273)] = 5284,
  [SMALL_STATE(274)] = 5290,
  [SMALL_STATE(275)] = 5296,
  [SMALL_STATE(276)] = 5302,
  [SMALL_STATE(277)] = 5308,
  [SMALL_STATE(278)] = 5318,
  [SMALL_STATE(279)] = 5328,
  [SMALL_STATE(280)] = 5338,
  [SMALL_STATE(281)] = 5344,
  [SMALL_STATE(282)] = 5354,
  [SMALL_STATE(283)] = 5362,
  [SMALL_STATE(284)] = 5368,
  [SMALL_STATE(285)] = 5374,
  [SMALL_STATE(286)] = 5380,
  [SMALL_STATE(287)] = 5390,
  [SMALL_STATE(288)] = 5398,
  [SMALL_STATE(289)] = 5408,
  [SMALL_STATE(290)] = 5414,
  [SMALL_STATE(291)] = 5424,
  [SMALL_STATE(292)] = 5434,
  [SMALL_STATE(293)] = 5444,
  [SMALL_STATE(294)] = 5449,
  [SMALL_STATE(295)] = 5456,
  [SMALL_STATE(296)] = 5461,
  [SMALL_STATE(297)] = 5466,
  [SMALL_STATE(298)] = 5473,
  [SMALL_STATE(299)] = 5478,
  [SMALL_STATE(300)] = 5483,
  [SMALL_STATE(301)] = 5488,
  [SMALL_STATE(302)] = 5493,
  [SMALL_STATE(303)] = 5500,
  [SMALL_STATE(304)] = 5507,
  [SMALL_STATE(305)] = 5512,
  [SMALL_STATE(306)] = 5517,
  [SMALL_STATE(307)] = 5522,
  [SMALL_STATE(308)] = 5527,
  [SMALL_STATE(309)] = 5534,
  [SMALL_STATE(310)] = 5539,
  [SMALL_STATE(311)] = 5546,
  [SMALL_STATE(312)] = 5551,
  [SMALL_STATE(313)] = 5556,
  [SMALL_STATE(314)] = 5561,
  [SMALL_STATE(315)] = 5566,
  [SMALL_STATE(316)] = 5573,
  [SMALL_STATE(317)] = 5578,
  [SMALL_STATE(318)] = 5585,
  [SMALL_STATE(319)] = 5590,
  [SMALL_STATE(320)] = 5595,
  [SMALL_STATE(321)] = 5600,
  [SMALL_STATE(322)] = 5605,
  [SMALL_STATE(323)] = 5612,
  [SMALL_STATE(324)] = 5617,
  [SMALL_STATE(325)] = 5622,
  [SMALL_STATE(326)] = 5627,
  [SMALL_STATE(327)] = 5632,
  [SMALL_STATE(328)] = 5637,
  [SMALL_STATE(329)] = 5642,
  [SMALL_STATE(330)] = 5646,
  [SMALL_STATE(331)] = 5650,
  [SMALL_STATE(332)] = 5654,
  [SMALL_STATE(333)] = 5658,
  [SMALL_STATE(334)] = 5662,
  [SMALL_STATE(335)] = 5666,
  [SMALL_STATE(336)] = 5670,
  [SMALL_STATE(337)] = 5674,
  [SMALL_STATE(338)] = 5678,
  [SMALL_STATE(339)] = 5682,
  [SMALL_STATE(340)] = 5686,
  [SMALL_STATE(341)] = 5690,
  [SMALL_STATE(342)] = 5694,
  [SMALL_STATE(343)] = 5698,
  [SMALL_STATE(344)] = 5702,
  [SMALL_STATE(345)] = 5706,
  [SMALL_STATE(346)] = 5710,
  [SMALL_STATE(347)] = 5714,
  [SMALL_STATE(348)] = 5718,
  [SMALL_STATE(349)] = 5722,
  [SMALL_STATE(350)] = 5726,
  [SMALL_STATE(351)] = 5730,
  [SMALL_STATE(352)] = 5734,
  [SMALL_STATE(353)] = 5738,
  [SMALL_STATE(354)] = 5742,
  [SMALL_STATE(355)] = 5746,
  [SMALL_STATE(356)] = 5750,
  [SMALL_STATE(357)] = 5754,
  [SMALL_STATE(358)] = 5758,
  [SMALL_STATE(359)] = 5762,
  [SMALL_STATE(360)] = 5766,
  [SMALL_STATE(361)] = 5770,
  [SMALL_STATE(362)] = 5774,
  [SMALL_STATE(363)] = 5778,
  [SMALL_STATE(364)] = 5782,
  [SMALL_STATE(365)] = 5786,
  [SMALL_STATE(366)] = 5790,
  [SMALL_STATE(367)] = 5794,
  [SMALL_STATE(368)] = 5798,
  [SMALL_STATE(369)] = 5802,
  [SMALL_STATE(370)] = 5806,
  [SMALL_STATE(371)] = 5810,
  [SMALL_STATE(372)] = 5814,
  [SMALL_STATE(373)] = 5818,
  [SMALL_STATE(374)] = 5822,
  [SMALL_STATE(375)] = 5826,
  [SMALL_STATE(376)] = 5830,
  [SMALL_STATE(377)] = 5834,
  [SMALL_STATE(378)] = 5838,
  [SMALL_STATE(379)] = 5842,
  [SMALL_STATE(380)] = 5846,
  [SMALL_STATE(381)] = 5850,
  [SMALL_STATE(382)] = 5854,
  [SMALL_STATE(383)] = 5858,
  [SMALL_STATE(384)] = 5862,
  [SMALL_STATE(385)] = 5866,
  [SMALL_STATE(386)] = 5870,
  [SMALL_STATE(387)] = 5874,
  [SMALL_STATE(388)] = 5878,
  [SMALL_STATE(389)] = 5882,
  [SMALL_STATE(390)] = 5886,
  [SMALL_STATE(391)] = 5890,
  [SMALL_STATE(392)] = 5894,
  [SMALL_STATE(393)] = 5898,
  [SMALL_STATE(394)] = 5902,
  [SMALL_STATE(395)] = 5906,
  [SMALL_STATE(396)] = 5910,
  [SMALL_STATE(397)] = 5914,
  [SMALL_STATE(398)] = 5918,
  [SMALL_STATE(399)] = 5922,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 2, .production_id = 21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 2, .production_id = 21),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 30),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 30), SHIFT_REPEAT(82),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 30),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 30), SHIFT_REPEAT(356),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 29),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 29),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 38),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 38),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 1, .production_id = 15),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 30), SHIFT_REPEAT(81),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 30), SHIFT_REPEAT(376),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 36),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 36),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 35),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 35),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 30), SHIFT_REPEAT(90),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 30), SHIFT_REPEAT(367),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 30), SHIFT_REPEAT(68),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 30), SHIFT_REPEAT(381),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_argument, 1), REDUCE(sym_primary_expression, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(317),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(294),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(334),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(175),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(266),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(351),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(364),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(79),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(353),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(394),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(393),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(392),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(297),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(389),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(386),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 2, .production_id = 27),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 2, .production_id = 27),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 37), SHIFT_REPEAT(115),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 37),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 37),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 37), SHIFT_REPEAT(115),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 37), SHIFT_REPEAT(107),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 37), SHIFT_REPEAT(107),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 37), SHIFT_REPEAT(104),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 37), SHIFT_REPEAT(104),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 37), SHIFT_REPEAT(114),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 37), SHIFT_REPEAT(114),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 35),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_operator, 3, .production_id = 35),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 26),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_operator, 2, .production_id = 26),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7, .production_id = 31),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 17),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, .production_id = 23),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 22),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7, .production_id = 32),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 6),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 8, .production_id = 39),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2), SHIFT_REPEAT(86),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(399),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 34), SHIFT_REPEAT(350),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 34),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_instantiated_type, 3, .production_id = 19),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 2, .production_id = 18),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 1, .production_id = 12),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 18), SHIFT_REPEAT(322),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 18),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 18), SHIFT_REPEAT(315),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_instantiated_type, 4, .production_id = 25),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 18), SHIFT_REPEAT(332),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 18),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 24),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic, 1, .production_id = 11),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(374),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(357),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 34), SHIFT_REPEAT(370),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 15),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 15),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2), SHIFT_REPEAT(372),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 5),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_header, 2, .production_id = 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2), SHIFT_REPEAT(42),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 33),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 9),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 8),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 5),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_name, 1, .production_id = 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 28),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 14),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(206),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_type, 2, .production_id = 13),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 10),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 3), SHIFT(209),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 4),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 5),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(329),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 3, .production_id = 14),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_type, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_header, 3, .production_id = 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delclaration_array_type, 7),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 1, .production_id = 7),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 4, .production_id = 20),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__custom_generic_type, 2, .production_id = 13), SHIFT(177),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 4),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 3),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [834] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
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
