#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 410
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 130
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
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
  sym_assignment = 77,
  sym_expression = 78,
  sym_statement = 79,
  sym_repeat_statement = 80,
  sym_while_statement = 81,
  sym_call_statement = 82,
  sym_argument = 83,
  sym_if_then_statement = 84,
  sym_if = 85,
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
  sym_variable_access = 114,
  aux_sym_program_repeat1 = 115,
  aux_sym_generics_repeat1 = 116,
  aux_sym_enum_repeat1 = 117,
  aux_sym_record_repeat1 = 118,
  aux_sym_function_definition_repeat1 = 119,
  aux_sym_function_definition_repeat2 = 120,
  aux_sym_call_statement_repeat1 = 121,
  aux_sym_if_then_statement_repeat1 = 122,
  aux_sym_constant_repeat1 = 123,
  aux_sym_block_repeat1 = 124,
  aux_sym__parameters_repeat1 = 125,
  aux_sym_comparison_operator_repeat1 = 126,
  aux_sym__generics_repeat1 = 127,
  aux_sym__custom_generic_instantiated_type_repeat1 = 128,
  aux_sym_variable_access_repeat1 = 129,
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
  [19] = {.index = 36, .length = 2},
  [20] = {.index = 38, .length = 3},
  [21] = {.index = 41, .length = 2},
  [22] = {.index = 43, .length = 4},
  [23] = {.index = 47, .length = 2},
  [24] = {.index = 49, .length = 1},
  [25] = {.index = 50, .length = 1},
  [26] = {.index = 51, .length = 2},
  [27] = {.index = 53, .length = 4},
  [28] = {.index = 57, .length = 3},
  [29] = {.index = 60, .length = 1},
  [30] = {.index = 61, .length = 4},
  [31] = {.index = 65, .length = 1},
  [32] = {.index = 66, .length = 3},
  [33] = {.index = 69, .length = 3},
  [34] = {.index = 72, .length = 1},
  [35] = {.index = 73, .length = 2},
  [36] = {.index = 75, .length = 3},
  [37] = {.index = 78, .length = 1},
  [38] = {.index = 79, .length = 2},
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
    {field_array_access, 1, .inherited = true},
    {field_field_access, 1, .inherited = true},
  [36] =
    {field_generic, 0, .inherited = true},
    {field_generic, 1, .inherited = true},
  [38] =
    {field_generic, 1, .inherited = true},
    {field_instatiated_generic, 2},
    {field_type_name, 0, .inherited = true},
  [41] =
    {field_generic, 1},
    {field_generic, 2, .inherited = true},
  [43] =
    {field_constants, 4},
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
    {field_variables, 3},
  [47] =
    {field_function, 3},
    {field_test_name, 1},
  [49] =
    {field_argument, 1},
  [50] =
    {field_operators, 1, .inherited = true},
  [51] =
    {field_field_access, 0},
    {field_field_access, 1},
  [53] =
    {field_array_access, 0, .inherited = true},
    {field_array_access, 1, .inherited = true},
    {field_field_access, 0, .inherited = true},
    {field_field_access, 1, .inherited = true},
  [57] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [60] =
    {field_generic, 1, .inherited = true},
  [61] =
    {field_generic, 1, .inherited = true},
    {field_instatiated_generic, 2},
    {field_instatiated_generic, 3, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [65] =
    {field_var, 0},
  [66] =
    {field_function, 3},
    {field_test_name, 1},
    {field_variables, 5},
  [69] =
    {field_constants, 5},
    {field_function, 3},
    {field_test_name, 1},
  [72] =
    {field_operators, 0},
  [73] =
    {field_operators, 0, .inherited = true},
    {field_operators, 1, .inherited = true},
  [75] =
    {field_array_access, 0},
    {field_array_access, 1},
    {field_array_access, 2},
  [78] =
    {field_instatiated_generic, 1},
  [79] =
    {field_instatiated_generic, 0, .inherited = true},
    {field_instatiated_generic, 1, .inherited = true},
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
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 2,
  [12] = 12,
  [13] = 6,
  [14] = 14,
  [15] = 5,
  [16] = 4,
  [17] = 17,
  [18] = 18,
  [19] = 12,
  [20] = 8,
  [21] = 10,
  [22] = 9,
  [23] = 6,
  [24] = 3,
  [25] = 2,
  [26] = 4,
  [27] = 5,
  [28] = 17,
  [29] = 6,
  [30] = 3,
  [31] = 2,
  [32] = 5,
  [33] = 12,
  [34] = 10,
  [35] = 9,
  [36] = 18,
  [37] = 37,
  [38] = 4,
  [39] = 8,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 57,
  [59] = 56,
  [60] = 60,
  [61] = 55,
  [62] = 62,
  [63] = 50,
  [64] = 48,
  [65] = 50,
  [66] = 66,
  [67] = 57,
  [68] = 10,
  [69] = 9,
  [70] = 48,
  [71] = 17,
  [72] = 56,
  [73] = 12,
  [74] = 57,
  [75] = 55,
  [76] = 56,
  [77] = 8,
  [78] = 50,
  [79] = 79,
  [80] = 55,
  [81] = 48,
  [82] = 17,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 83,
  [87] = 87,
  [88] = 88,
  [89] = 18,
  [90] = 87,
  [91] = 91,
  [92] = 18,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 46,
  [97] = 97,
  [98] = 98,
  [99] = 45,
  [100] = 94,
  [101] = 95,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 102,
  [106] = 104,
  [107] = 103,
  [108] = 103,
  [109] = 109,
  [110] = 102,
  [111] = 109,
  [112] = 109,
  [113] = 103,
  [114] = 109,
  [115] = 115,
  [116] = 102,
  [117] = 115,
  [118] = 45,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 46,
  [125] = 125,
  [126] = 79,
  [127] = 45,
  [128] = 46,
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
  [153] = 91,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 119,
  [164] = 164,
  [165] = 121,
  [166] = 166,
  [167] = 120,
  [168] = 123,
  [169] = 169,
  [170] = 170,
  [171] = 145,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 177,
  [186] = 186,
  [187] = 187,
  [188] = 176,
  [189] = 189,
  [190] = 190,
  [191] = 177,
  [192] = 179,
  [193] = 184,
  [194] = 175,
  [195] = 174,
  [196] = 196,
  [197] = 190,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 125,
  [203] = 203,
  [204] = 120,
  [205] = 198,
  [206] = 206,
  [207] = 207,
  [208] = 141,
  [209] = 182,
  [210] = 210,
  [211] = 180,
  [212] = 122,
  [213] = 146,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 123,
  [219] = 207,
  [220] = 119,
  [221] = 121,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 200,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 136,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
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
  [258] = 256,
  [259] = 259,
  [260] = 260,
  [261] = 233,
  [262] = 262,
  [263] = 184,
  [264] = 242,
  [265] = 234,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 233,
  [270] = 215,
  [271] = 271,
  [272] = 271,
  [273] = 257,
  [274] = 274,
  [275] = 275,
  [276] = 121,
  [277] = 277,
  [278] = 255,
  [279] = 254,
  [280] = 233,
  [281] = 147,
  [282] = 257,
  [283] = 245,
  [284] = 257,
  [285] = 224,
  [286] = 286,
  [287] = 253,
  [288] = 120,
  [289] = 289,
  [290] = 290,
  [291] = 145,
  [292] = 292,
  [293] = 293,
  [294] = 123,
  [295] = 119,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 243,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 300,
  [314] = 314,
  [315] = 315,
  [316] = 145,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 260,
  [323] = 266,
  [324] = 324,
  [325] = 325,
  [326] = 239,
  [327] = 240,
  [328] = 241,
  [329] = 329,
  [330] = 268,
  [331] = 267,
  [332] = 332,
  [333] = 255,
  [334] = 254,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 310,
  [342] = 342,
  [343] = 311,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 349,
  [366] = 342,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 369,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 377,
  [381] = 376,
  [382] = 342,
  [383] = 379,
  [384] = 384,
  [385] = 369,
  [386] = 271,
  [387] = 342,
  [388] = 388,
  [389] = 369,
  [390] = 320,
  [391] = 356,
  [392] = 335,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 368,
  [398] = 350,
  [399] = 347,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 394,
  [405] = 378,
  [406] = 406,
  [407] = 338,
  [408] = 351,
  [409] = 393,
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
      if (eof) ADVANCE(136);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '+') ADVANCE(179);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(186);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(80);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(56);
      if (lookahead == '{') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '+') ADVANCE(179);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '<') ADVANCE(186);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 'm') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == 't') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(264);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == 'v') ADVANCE(214);
      if (lookahead == '{') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == '<') ADVANCE(186);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == 't') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(264);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 't') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 't') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(196);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '{') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == 'v') ADVANCE(214);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(153);
      END_STATE();
    case 11:
      if (lookahead == 'T') ADVANCE(84);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(264);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(163);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == 'w') ADVANCE(230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(201);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(95);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 130:
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 131:
      if (lookahead == '}') ADVANCE(209);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 133:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(7);
      END_STATE();
    case 134:
      if (eof) ADVANCE(136);
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '+') ADVANCE(179);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(186);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'v') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(134)
      END_STATE();
    case 135:
      if (eof) ADVANCE(136);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'v') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(135)
      END_STATE();
    case 136:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_generics);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_from);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_constants);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(153);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(185);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_mod);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '>') ADVANCE(190);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(188);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_integer);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_real);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_string);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_array);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_refersTo);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_refersTo);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(241);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(233);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(264);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(263);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(264);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'f') ADVANCE(225);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(264);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(248);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(264);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(259);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(264);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(176);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(184);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(267);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(213);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(229);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(245);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(158);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(215);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(252);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(250);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(162);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(202);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(226);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(232);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(238);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(235);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(257);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(200);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(223);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(166);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(216);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(228);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(260);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(258);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(208);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(236);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(217);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(251);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(224);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(178);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(262);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(160);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(231);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(198);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(150);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(256);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(212);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(242);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(253);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(210);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(219);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(174);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(155);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(221);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(249);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(218);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(204);
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
  [1] = {.lex_state = 135},
  [2] = {.lex_state = 134},
  [3] = {.lex_state = 134},
  [4] = {.lex_state = 134},
  [5] = {.lex_state = 134},
  [6] = {.lex_state = 134},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 134},
  [9] = {.lex_state = 134},
  [10] = {.lex_state = 134},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 134},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2, .external_lex_state = 2},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 3},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 135},
  [42] = {.lex_state = 135},
  [43] = {.lex_state = 135},
  [44] = {.lex_state = 135},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 17, .external_lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 17, .external_lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 17, .external_lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 134},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 52, .external_lex_state = 4},
  [84] = {.lex_state = 52, .external_lex_state = 4},
  [85] = {.lex_state = 17},
  [86] = {.lex_state = 52, .external_lex_state = 4},
  [87] = {.lex_state = 52, .external_lex_state = 4},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 52, .external_lex_state = 4},
  [91] = {.lex_state = 134},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 17},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 17},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 135},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 135},
  [126] = {.lex_state = 0, .external_lex_state = 3},
  [127] = {.lex_state = 0, .external_lex_state = 3},
  [128] = {.lex_state = 0, .external_lex_state = 3},
  [129] = {.lex_state = 135},
  [130] = {.lex_state = 135},
  [131] = {.lex_state = 135},
  [132] = {.lex_state = 135},
  [133] = {.lex_state = 135},
  [134] = {.lex_state = 135},
  [135] = {.lex_state = 135},
  [136] = {.lex_state = 135},
  [137] = {.lex_state = 135},
  [138] = {.lex_state = 135},
  [139] = {.lex_state = 135},
  [140] = {.lex_state = 135},
  [141] = {.lex_state = 135},
  [142] = {.lex_state = 135},
  [143] = {.lex_state = 135},
  [144] = {.lex_state = 135},
  [145] = {.lex_state = 135},
  [146] = {.lex_state = 135},
  [147] = {.lex_state = 135},
  [148] = {.lex_state = 135},
  [149] = {.lex_state = 135},
  [150] = {.lex_state = 135},
  [151] = {.lex_state = 135},
  [152] = {.lex_state = 135},
  [153] = {.lex_state = 0, .external_lex_state = 3},
  [154] = {.lex_state = 135},
  [155] = {.lex_state = 135},
  [156] = {.lex_state = 135, .external_lex_state = 3},
  [157] = {.lex_state = 135, .external_lex_state = 3},
  [158] = {.lex_state = 135, .external_lex_state = 3},
  [159] = {.lex_state = 135, .external_lex_state = 3},
  [160] = {.lex_state = 135, .external_lex_state = 3},
  [161] = {.lex_state = 135, .external_lex_state = 3},
  [162] = {.lex_state = 17, .external_lex_state = 4},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 52, .external_lex_state = 4},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 52, .external_lex_state = 4},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 8, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 8, .external_lex_state = 2},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 8, .external_lex_state = 2},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 0, .external_lex_state = 3},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 135, .external_lex_state = 3},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 0, .external_lex_state = 3},
  [187] = {.lex_state = 0, .external_lex_state = 3},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 0, .external_lex_state = 3},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 8, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 0, .external_lex_state = 3},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 0, .external_lex_state = 3},
  [200] = {.lex_state = 8, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 3},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 3},
  [207] = {.lex_state = 8, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 3},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 3},
  [215] = {.lex_state = 135},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 3},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 8},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 3},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 3},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 135, .external_lex_state = 3},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 8},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 135},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 135},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 8, .external_lex_state = 2},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 135},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0, .external_lex_state = 2},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 0, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 8, .external_lex_state = 2},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 3},
  [277] = {.lex_state = 135},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 135, .external_lex_state = 3},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 135},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0, .external_lex_state = 2},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 135},
  [288] = {.lex_state = 0, .external_lex_state = 3},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 135, .external_lex_state = 3},
  [292] = {.lex_state = 135},
  [293] = {.lex_state = 0, .external_lex_state = 2},
  [294] = {.lex_state = 0, .external_lex_state = 3},
  [295] = {.lex_state = 0, .external_lex_state = 3},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 135},
  [298] = {.lex_state = 135},
  [299] = {.lex_state = 0, .external_lex_state = 2},
  [300] = {.lex_state = 8},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 0, .external_lex_state = 2},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0, .external_lex_state = 2},
  [305] = {.lex_state = 0, .external_lex_state = 2},
  [306] = {.lex_state = 0, .external_lex_state = 2},
  [307] = {.lex_state = 0, .external_lex_state = 2},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0, .external_lex_state = 2},
  [310] = {.lex_state = 0, .external_lex_state = 2},
  [311] = {.lex_state = 0, .external_lex_state = 2},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 8},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0, .external_lex_state = 2},
  [316] = {.lex_state = 0, .external_lex_state = 2},
  [317] = {.lex_state = 0, .external_lex_state = 2},
  [318] = {.lex_state = 8},
  [319] = {.lex_state = 0, .external_lex_state = 2},
  [320] = {.lex_state = 0, .external_lex_state = 2},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0, .external_lex_state = 2},
  [323] = {.lex_state = 0, .external_lex_state = 2},
  [324] = {.lex_state = 0, .external_lex_state = 2},
  [325] = {.lex_state = 0, .external_lex_state = 3},
  [326] = {.lex_state = 0, .external_lex_state = 2},
  [327] = {.lex_state = 0, .external_lex_state = 2},
  [328] = {.lex_state = 0, .external_lex_state = 2},
  [329] = {.lex_state = 0, .external_lex_state = 2},
  [330] = {.lex_state = 0, .external_lex_state = 2},
  [331] = {.lex_state = 0, .external_lex_state = 2},
  [332] = {.lex_state = 0, .external_lex_state = 3},
  [333] = {.lex_state = 53},
  [334] = {.lex_state = 53},
  [335] = {.lex_state = 8},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 8},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 0, .external_lex_state = 3},
  [342] = {.lex_state = 0, .external_lex_state = 2},
  [343] = {.lex_state = 0, .external_lex_state = 3},
  [344] = {.lex_state = 0, .external_lex_state = 2},
  [345] = {.lex_state = 8},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 8},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0, .external_lex_state = 3},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 8},
  [360] = {.lex_state = 8},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 134},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0, .external_lex_state = 2},
  [365] = {.lex_state = 8},
  [366] = {.lex_state = 0, .external_lex_state = 2},
  [367] = {.lex_state = 8},
  [368] = {.lex_state = 8},
  [369] = {.lex_state = 8},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0, .external_lex_state = 2},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 8},
  [375] = {.lex_state = 8},
  [376] = {.lex_state = 8},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 8},
  [382] = {.lex_state = 0, .external_lex_state = 2},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 8},
  [386] = {.lex_state = 8},
  [387] = {.lex_state = 0, .external_lex_state = 2},
  [388] = {.lex_state = 0, .external_lex_state = 2},
  [389] = {.lex_state = 8},
  [390] = {.lex_state = 0, .external_lex_state = 3},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 8},
  [393] = {.lex_state = 8},
  [394] = {.lex_state = 8},
  [395] = {.lex_state = 8},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 8},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 8},
  [401] = {.lex_state = 8},
  [402] = {.lex_state = 8},
  [403] = {.lex_state = 8},
  [404] = {.lex_state = 8},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 8},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 8},
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
    [sym_program] = STATE(373),
    [sym_enum] = STATE(41),
    [sym_record] = STATE(41),
    [sym_export] = STATE(41),
    [sym_import] = STATE(41),
    [sym_module] = STATE(44),
    [sym_function_definition] = STATE(41),
    [sym_test] = STATE(41),
    [sym_constant] = STATE(41),
    [sym_variable] = STATE(41),
    [aux_sym_program_repeat1] = STATE(41),
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
    ACTIONS(27), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 24,
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
      anon_sym_constants,
      anon_sym_variables,
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
  [41] = 5,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(36), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 24,
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
      anon_sym_constants,
      anon_sym_variables,
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
  [82] = 2,
    ACTIONS(43), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 26,
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
      anon_sym_constants,
      anon_sym_variables,
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
  [116] = 2,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 26,
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
      anon_sym_constants,
      anon_sym_variables,
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
  [150] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(51), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 23,
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
      anon_sym_constants,
      anon_sym_variables,
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
  [190] = 5,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(36), 11,
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
    ACTIONS(31), 12,
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
      sym_string,
      sym_character,
  [227] = 2,
    ACTIONS(61), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 23,
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
      anon_sym_constants,
      anon_sym_variables,
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
  [258] = 4,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(63), 20,
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
      anon_sym_constants,
      anon_sym_variables,
      anon_sym_and,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [293] = 2,
    ACTIONS(69), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 23,
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
      anon_sym_constants,
      anon_sym_variables,
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
  [324] = 5,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(27), 11,
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
    ACTIONS(23), 12,
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
      sym_string,
      sym_character,
  [361] = 2,
    ACTIONS(77), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 23,
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
      anon_sym_constants,
      anon_sym_variables,
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
  [392] = 5,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(51), 11,
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
    ACTIONS(49), 12,
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
      sym_string,
      sym_character,
  [429] = 17,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_COLON_EQ,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_var,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(2), 1,
      aux_sym_variable_access_repeat1,
    STATE(28), 1,
      sym_primary_expression,
    STATE(53), 1,
      sym_variable_access,
    STATE(178), 1,
      sym_expression,
    STATE(210), 1,
      sym_argument,
    ACTIONS(89), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(33), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(85), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(87), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(165), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [489] = 2,
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
    ACTIONS(45), 14,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
      sym_string,
      sym_character,
      anon_sym_DOT,
  [519] = 2,
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
    ACTIONS(41), 14,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
      sym_string,
      sym_character,
      anon_sym_DOT,
  [549] = 8,
    STATE(46), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(99), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(101), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(103), 2,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(95), 4,
      anon_sym_LPAREN,
      sym_float,
      sym_string,
      sym_character,
    ACTIONS(97), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [590] = 5,
    ACTIONS(99), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(101), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(103), 2,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(107), 8,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
      sym_string,
      sym_character,
    ACTIONS(109), 9,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [624] = 2,
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
    ACTIONS(75), 12,
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
      sym_string,
      sym_character,
  [652] = 2,
    ACTIONS(61), 11,
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
    ACTIONS(59), 12,
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
      sym_string,
      sym_character,
  [680] = 2,
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
    ACTIONS(63), 12,
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
      sym_string,
      sym_character,
  [708] = 4,
    ACTIONS(101), 2,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(103), 2,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(69), 9,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
    ACTIONS(63), 10,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_float,
      sym_string,
      sym_character,
  [740] = 5,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(51), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 16,
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
  [773] = 5,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(36), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 16,
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
  [806] = 5,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(27), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 16,
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
  [839] = 2,
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
  [865] = 2,
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
  [891] = 7,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    STATE(96), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(95), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [926] = 5,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(51), 3,
      anon_sym_SLASH,
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
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [957] = 5,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(36), 3,
      anon_sym_SLASH,
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
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [988] = 5,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(27), 3,
      anon_sym_SLASH,
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
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1019] = 2,
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
  [1043] = 2,
    ACTIONS(77), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 16,
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
  [1067] = 2,
    ACTIONS(69), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 16,
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
  [1091] = 4,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(63), 13,
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
  [1119] = 5,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(125), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(107), 11,
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
  [1149] = 12,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_var,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(28), 1,
      sym_primary_expression,
    STATE(53), 1,
      sym_variable_access,
    STATE(178), 1,
      sym_expression,
    STATE(247), 1,
      sym_argument,
    STATE(33), 2,
      sym_binary_operator,
      sym_parenthesized_expression,
    ACTIONS(85), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(87), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(165), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1193] = 2,
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
  [1217] = 2,
    ACTIONS(61), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 16,
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
  [1241] = 11,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_and,
    ACTIONS(143), 1,
      anon_sym_or,
    STATE(28), 1,
      sym_primary_expression,
    STATE(170), 1,
      sym_expression,
    ACTIONS(85), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(87), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(33), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(165), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1283] = 10,
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
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(43), 9,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_constant,
      sym_variable,
      aux_sym_program_repeat1,
  [1322] = 10,
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
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    STATE(43), 9,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_constant,
      sym_variable,
      aux_sym_program_repeat1,
  [1361] = 10,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      anon_sym_enum,
    ACTIONS(154), 1,
      anon_sym_record,
    ACTIONS(157), 1,
      anon_sym_export,
    ACTIONS(160), 1,
      anon_sym_import,
    ACTIONS(163), 1,
      anon_sym_define,
    ACTIONS(166), 1,
      anon_sym_test,
    ACTIONS(169), 1,
      anon_sym_constants,
    ACTIONS(172), 1,
      anon_sym_variables,
    STATE(43), 9,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_constant,
      sym_variable,
      aux_sym_program_repeat1,
  [1400] = 10,
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
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(42), 9,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_constant,
      sym_variable,
      aux_sym_program_repeat1,
  [1439] = 5,
    STATE(45), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(182), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(178), 4,
      anon_sym_LPAREN,
      sym_float,
      sym_string,
      sym_character,
    ACTIONS(180), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [1468] = 5,
    STATE(45), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(185), 4,
      anon_sym_LPAREN,
      sym_float,
      sym_string,
      sym_character,
    ACTIONS(187), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [1497] = 9,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(28), 1,
      sym_primary_expression,
    STATE(201), 1,
      sym_expression,
    ACTIONS(85), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(87), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(33), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(165), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1533] = 9,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_not,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    STATE(257), 1,
      sym_expression,
    ACTIONS(193), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(195), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(221), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1569] = 9,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_not,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primary_expression,
    STATE(40), 1,
      sym_expression,
    ACTIONS(203), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(205), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(19), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(121), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1605] = 9,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(28), 1,
      sym_primary_expression,
    STATE(167), 1,
      sym_expression,
    ACTIONS(85), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(87), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(33), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(165), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1641] = 9,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_not,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(82), 1,
      sym_primary_expression,
    STATE(206), 1,
      sym_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(215), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(73), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(276), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1677] = 9,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_not,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(82), 1,
      sym_primary_expression,
    STATE(223), 1,
      sym_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(215), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(73), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(276), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1713] = 3,
    ACTIONS(77), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(219), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
    ACTIONS(75), 11,
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
  [1737] = 9,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_not,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(82), 1,
      sym_primary_expression,
    STATE(228), 1,
      sym_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(215), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(73), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(276), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1773] = 9,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_not,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primary_expression,
    STATE(119), 1,
      sym_expression,
    ACTIONS(203), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(205), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(19), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(121), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1809] = 9,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_not,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primary_expression,
    STATE(123), 1,
      sym_expression,
    ACTIONS(203), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(205), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(19), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(121), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1845] = 9,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_not,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    STATE(261), 1,
      sym_expression,
    ACTIONS(193), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(195), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(221), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1881] = 9,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_not,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    STATE(269), 1,
      sym_expression,
    ACTIONS(193), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(195), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(221), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1917] = 9,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_not,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    STATE(218), 1,
      sym_expression,
    ACTIONS(193), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(195), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(221), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1953] = 13,
    ACTIONS(224), 1,
      anon_sym_real,
    ACTIONS(226), 1,
      anon_sym_array,
    ACTIONS(228), 1,
      sym_refersTo,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym__dedent,
    STATE(263), 1,
      sym__type_name,
    STATE(266), 1,
      sym__custom_type,
    STATE(267), 1,
      sym__custom_generic_type,
    STATE(268), 1,
      sym__custom_generic_instantiated_type,
    STATE(337), 1,
      sym_type,
    ACTIONS(222), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(66), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(259), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1997] = 9,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_not,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    STATE(220), 1,
      sym_expression,
    ACTIONS(193), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(195), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(221), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2033] = 13,
    ACTIONS(224), 1,
      anon_sym_real,
    ACTIONS(226), 1,
      anon_sym_array,
    ACTIONS(228), 1,
      sym_refersTo,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym__dedent,
    STATE(263), 1,
      sym__type_name,
    STATE(266), 1,
      sym__custom_type,
    STATE(267), 1,
      sym__custom_generic_type,
    STATE(268), 1,
      sym__custom_generic_instantiated_type,
    STATE(337), 1,
      sym_type,
    ACTIONS(222), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(66), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(259), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2077] = 9,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_not,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primary_expression,
    STATE(120), 1,
      sym_expression,
    ACTIONS(203), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(205), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(19), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(121), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2113] = 9,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_not,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    STATE(273), 1,
      sym_expression,
    ACTIONS(193), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(195), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(221), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2149] = 9,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_not,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    STATE(204), 1,
      sym_expression,
    ACTIONS(193), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(195), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(221), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2185] = 13,
    ACTIONS(239), 1,
      anon_sym_real,
    ACTIONS(242), 1,
      anon_sym_array,
    ACTIONS(245), 1,
      sym_refersTo,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(251), 1,
      sym__dedent,
    STATE(263), 1,
      sym__type_name,
    STATE(266), 1,
      sym__custom_type,
    STATE(267), 1,
      sym__custom_generic_type,
    STATE(268), 1,
      sym__custom_generic_instantiated_type,
    STATE(337), 1,
      sym_type,
    ACTIONS(236), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(66), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(259), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2229] = 9,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_not,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    STATE(233), 1,
      sym_expression,
    ACTIONS(193), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(195), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(221), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2265] = 2,
    ACTIONS(69), 3,
      anon_sym_SLASH,
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
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2287] = 4,
    ACTIONS(255), 1,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(253), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(63), 11,
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
  [2313] = 9,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_not,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    STATE(282), 1,
      sym_expression,
    ACTIONS(193), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(195), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(221), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2349] = 7,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    STATE(124), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(259), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(95), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(257), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2381] = 9,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(28), 1,
      sym_primary_expression,
    STATE(168), 1,
      sym_expression,
    ACTIONS(85), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(87), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(33), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(165), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2417] = 2,
    ACTIONS(77), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 14,
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
  [2439] = 9,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_not,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    STATE(280), 1,
      sym_expression,
    ACTIONS(193), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(195), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(221), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2475] = 9,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_not,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(82), 1,
      sym_primary_expression,
    STATE(295), 1,
      sym_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(215), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(73), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(276), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2511] = 9,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_not,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(82), 1,
      sym_primary_expression,
    STATE(294), 1,
      sym_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(215), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(73), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(276), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2547] = 2,
    ACTIONS(61), 3,
      anon_sym_SLASH,
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
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2569] = 9,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_not,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(82), 1,
      sym_primary_expression,
    STATE(288), 1,
      sym_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(215), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(73), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(276), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2605] = 6,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_constant_repeat1,
    ACTIONS(259), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(263), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [2635] = 9,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(28), 1,
      sym_primary_expression,
    STATE(163), 1,
      sym_expression,
    ACTIONS(85), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(87), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(33), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(165), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2671] = 9,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_not,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    STATE(284), 1,
      sym_expression,
    ACTIONS(193), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(195), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(221), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [2707] = 7,
    ACTIONS(255), 1,
      anon_sym_SLASH,
    STATE(128), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(269), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(271), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(253), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(267), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2738] = 11,
    ACTIONS(273), 1,
      anon_sym_for,
    ACTIONS(275), 1,
      anon_sym_repeat,
    ACTIONS(277), 1,
      anon_sym_while,
    ACTIONS(279), 1,
      anon_sym_if,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym__dedent,
    STATE(84), 1,
      aux_sym_block_repeat1,
    STATE(166), 1,
      sym_if,
    STATE(262), 1,
      sym_statement,
    STATE(362), 1,
      sym_variable_access,
    STATE(302), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [2777] = 11,
    ACTIONS(285), 1,
      anon_sym_for,
    ACTIONS(288), 1,
      anon_sym_repeat,
    ACTIONS(291), 1,
      anon_sym_while,
    ACTIONS(294), 1,
      anon_sym_if,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(300), 1,
      sym__dedent,
    STATE(84), 1,
      aux_sym_block_repeat1,
    STATE(166), 1,
      sym_if,
    STATE(262), 1,
      sym_statement,
    STATE(362), 1,
      sym_variable_access,
    STATE(302), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [2816] = 12,
    ACTIONS(224), 1,
      anon_sym_real,
    ACTIONS(226), 1,
      anon_sym_array,
    ACTIONS(228), 1,
      sym_refersTo,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(263), 1,
      sym__type_name,
    STATE(266), 1,
      sym__custom_type,
    STATE(267), 1,
      sym__custom_generic_type,
    STATE(268), 1,
      sym__custom_generic_instantiated_type,
    STATE(337), 1,
      sym_type,
    ACTIONS(222), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(62), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(259), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2857] = 11,
    ACTIONS(273), 1,
      anon_sym_for,
    ACTIONS(275), 1,
      anon_sym_repeat,
    ACTIONS(277), 1,
      anon_sym_while,
    ACTIONS(279), 1,
      anon_sym_if,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(302), 1,
      sym__dedent,
    STATE(84), 1,
      aux_sym_block_repeat1,
    STATE(166), 1,
      sym_if,
    STATE(262), 1,
      sym_statement,
    STATE(362), 1,
      sym_variable_access,
    STATE(302), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [2896] = 11,
    ACTIONS(273), 1,
      anon_sym_for,
    ACTIONS(275), 1,
      anon_sym_repeat,
    ACTIONS(277), 1,
      anon_sym_while,
    ACTIONS(279), 1,
      anon_sym_if,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(304), 1,
      sym__dedent,
    STATE(86), 1,
      aux_sym_block_repeat1,
    STATE(166), 1,
      sym_if,
    STATE(262), 1,
      sym_statement,
    STATE(362), 1,
      sym_variable_access,
    STATE(302), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [2935] = 12,
    ACTIONS(224), 1,
      anon_sym_real,
    ACTIONS(226), 1,
      anon_sym_array,
    ACTIONS(228), 1,
      sym_refersTo,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(263), 1,
      sym__type_name,
    STATE(266), 1,
      sym__custom_type,
    STATE(267), 1,
      sym__custom_generic_type,
    STATE(268), 1,
      sym__custom_generic_instantiated_type,
    STATE(337), 1,
      sym_type,
    ACTIONS(222), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(60), 2,
      sym_record_item,
      aux_sym_record_repeat1,
    STATE(259), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2976] = 5,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(107), 8,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3003] = 11,
    ACTIONS(273), 1,
      anon_sym_for,
    ACTIONS(275), 1,
      anon_sym_repeat,
    ACTIONS(277), 1,
      anon_sym_while,
    ACTIONS(279), 1,
      anon_sym_if,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(306), 1,
      sym__dedent,
    STATE(83), 1,
      aux_sym_block_repeat1,
    STATE(166), 1,
      sym_if,
    STATE(262), 1,
      sym_statement,
    STATE(362), 1,
      sym_variable_access,
    STATE(302), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [3042] = 4,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    ACTIONS(259), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(308), 10,
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
  [3067] = 5,
    ACTIONS(255), 1,
      anon_sym_SLASH,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(269), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(253), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(107), 7,
      sym__indent,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3093] = 11,
    ACTIONS(226), 1,
      anon_sym_array,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(312), 1,
      anon_sym_real,
    ACTIONS(314), 1,
      sym_refersTo,
    STATE(184), 1,
      sym__type_name,
    STATE(266), 1,
      sym__custom_type,
    STATE(267), 1,
      sym__custom_generic_type,
    STATE(268), 1,
      sym__custom_generic_instantiated_type,
    STATE(303), 1,
      sym_type,
    ACTIONS(310), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(259), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [3130] = 11,
    ACTIONS(318), 1,
      anon_sym_real,
    ACTIONS(320), 1,
      anon_sym_array,
    ACTIONS(322), 1,
      sym_refersTo,
    ACTIONS(324), 1,
      sym_identifier,
    STATE(193), 1,
      sym__type_name,
    STATE(265), 1,
      sym_declaration_type,
    STATE(323), 1,
      sym__custom_type,
    STATE(330), 1,
      sym__custom_generic_instantiated_type,
    STATE(331), 1,
      sym__custom_generic_type,
    ACTIONS(316), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(319), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [3167] = 11,
    ACTIONS(318), 1,
      anon_sym_real,
    ACTIONS(320), 1,
      anon_sym_array,
    ACTIONS(322), 1,
      sym_refersTo,
    ACTIONS(324), 1,
      sym_identifier,
    STATE(193), 1,
      sym__type_name,
    STATE(242), 1,
      sym_declaration_type,
    STATE(323), 1,
      sym__custom_type,
    STATE(330), 1,
      sym__custom_generic_instantiated_type,
    STATE(331), 1,
      sym__custom_generic_type,
    ACTIONS(316), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(319), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [3204] = 4,
    STATE(99), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(185), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3227] = 11,
    ACTIONS(226), 1,
      anon_sym_array,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(312), 1,
      anon_sym_real,
    ACTIONS(314), 1,
      sym_refersTo,
    STATE(184), 1,
      sym__type_name,
    STATE(266), 1,
      sym__custom_type,
    STATE(267), 1,
      sym__custom_generic_type,
    STATE(268), 1,
      sym__custom_generic_instantiated_type,
    STATE(308), 1,
      sym_type,
    ACTIONS(310), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(259), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [3264] = 11,
    ACTIONS(226), 1,
      anon_sym_array,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(312), 1,
      anon_sym_real,
    ACTIONS(314), 1,
      sym_refersTo,
    STATE(184), 1,
      sym__type_name,
    STATE(266), 1,
      sym__custom_type,
    STATE(267), 1,
      sym__custom_generic_type,
    STATE(268), 1,
      sym__custom_generic_instantiated_type,
    STATE(321), 1,
      sym_type,
    ACTIONS(310), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(259), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [3301] = 4,
    STATE(99), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(329), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(178), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3324] = 11,
    ACTIONS(318), 1,
      anon_sym_real,
    ACTIONS(320), 1,
      anon_sym_array,
    ACTIONS(322), 1,
      sym_refersTo,
    ACTIONS(324), 1,
      sym_identifier,
    STATE(193), 1,
      sym__type_name,
    STATE(234), 1,
      sym_declaration_type,
    STATE(323), 1,
      sym__custom_type,
    STATE(330), 1,
      sym__custom_generic_instantiated_type,
    STATE(331), 1,
      sym__custom_generic_type,
    ACTIONS(316), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(319), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [3361] = 11,
    ACTIONS(318), 1,
      anon_sym_real,
    ACTIONS(320), 1,
      anon_sym_array,
    ACTIONS(322), 1,
      sym_refersTo,
    ACTIONS(324), 1,
      sym_identifier,
    STATE(193), 1,
      sym__type_name,
    STATE(264), 1,
      sym_declaration_type,
    STATE(323), 1,
      sym__custom_type,
    STATE(330), 1,
      sym__custom_generic_instantiated_type,
    STATE(331), 1,
      sym__custom_generic_type,
    ACTIONS(316), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(319), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [3398] = 6,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(69), 1,
      sym_primary_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(215), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(73), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3423] = 6,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    ACTIONS(85), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(87), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(33), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3448] = 6,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(91), 1,
      sym_primary_expression,
    ACTIONS(193), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(195), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3473] = 6,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(9), 1,
      sym_primary_expression,
    ACTIONS(193), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(195), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3498] = 6,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(153), 1,
      sym_primary_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(215), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(73), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3523] = 6,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(89), 1,
      sym_primary_expression,
    ACTIONS(193), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(195), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3548] = 6,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(92), 1,
      sym_primary_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(215), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(73), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3573] = 6,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(10), 1,
      sym_primary_expression,
    ACTIONS(193), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(195), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3598] = 6,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(22), 1,
      sym_primary_expression,
    ACTIONS(203), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(205), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(19), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3623] = 6,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(34), 1,
      sym_primary_expression,
    ACTIONS(85), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(87), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(33), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3648] = 6,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(21), 1,
      sym_primary_expression,
    ACTIONS(203), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(205), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(19), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3673] = 6,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(18), 1,
      sym_primary_expression,
    ACTIONS(203), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(205), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(19), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3698] = 6,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(68), 1,
      sym_primary_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(215), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(73), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3723] = 6,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(79), 1,
      sym_primary_expression,
    ACTIONS(193), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(195), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3748] = 6,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(35), 1,
      sym_primary_expression,
    ACTIONS(85), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(87), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(33), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3773] = 6,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(126), 1,
      sym_primary_expression,
    ACTIONS(213), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(215), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(73), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3798] = 4,
    STATE(118), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(335), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(178), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(332), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3818] = 3,
    ACTIONS(141), 1,
      anon_sym_and,
    ACTIONS(338), 4,
      anon_sym_LPAREN,
      sym_float,
      sym_string,
      sym_character,
    ACTIONS(340), 6,
      anon_sym_not,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3836] = 2,
    ACTIONS(342), 4,
      anon_sym_LPAREN,
      sym_float,
      sym_string,
      sym_character,
    ACTIONS(344), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3852] = 2,
    ACTIONS(95), 4,
      anon_sym_LPAREN,
      sym_float,
      sym_string,
      sym_character,
    ACTIONS(97), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3868] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym_constant_repeat1,
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
  [3886] = 2,
    ACTIONS(338), 4,
      anon_sym_LPAREN,
      sym_float,
      sym_string,
      sym_character,
    ACTIONS(340), 7,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [3902] = 4,
    STATE(118), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(257), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3922] = 3,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym_constant_repeat1,
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
  [3940] = 6,
    ACTIONS(255), 1,
      anon_sym_SLASH,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_constant_repeat1,
    ACTIONS(263), 2,
      sym__indent,
      anon_sym_constants,
    ACTIONS(269), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(253), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
  [3963] = 4,
    STATE(127), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(178), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(355), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3982] = 4,
    STATE(127), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(271), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(267), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4001] = 1,
    ACTIONS(361), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4013] = 1,
    ACTIONS(363), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4025] = 1,
    ACTIONS(365), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4037] = 1,
    ACTIONS(367), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4049] = 1,
    ACTIONS(369), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4061] = 1,
    ACTIONS(371), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4073] = 1,
    ACTIONS(373), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4085] = 1,
    ACTIONS(375), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4097] = 1,
    ACTIONS(369), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4109] = 1,
    ACTIONS(377), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4121] = 1,
    ACTIONS(379), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4133] = 1,
    ACTIONS(379), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4145] = 1,
    ACTIONS(381), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4157] = 1,
    ACTIONS(383), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4169] = 1,
    ACTIONS(365), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4181] = 1,
    ACTIONS(385), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4193] = 1,
    ACTIONS(387), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4205] = 1,
    ACTIONS(389), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4217] = 1,
    ACTIONS(391), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4229] = 1,
    ACTIONS(393), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4241] = 1,
    ACTIONS(395), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4253] = 1,
    ACTIONS(397), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4265] = 1,
    ACTIONS(399), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4277] = 1,
    ACTIONS(397), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4289] = 4,
    ACTIONS(255), 1,
      anon_sym_SLASH,
    ACTIONS(269), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(253), 3,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_SLASH_SLASH,
    ACTIONS(308), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [4307] = 1,
    ACTIONS(401), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4319] = 1,
    ACTIONS(403), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [4331] = 6,
    ACTIONS(405), 1,
      anon_sym_constants,
    ACTIONS(407), 1,
      anon_sym_variables,
    ACTIONS(409), 1,
      sym__indent,
    STATE(152), 1,
      sym_block,
    STATE(160), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(181), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4352] = 6,
    ACTIONS(405), 1,
      anon_sym_constants,
    ACTIONS(407), 1,
      anon_sym_variables,
    ACTIONS(409), 1,
      sym__indent,
    STATE(150), 1,
      sym_block,
    STATE(161), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(187), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4373] = 6,
    ACTIONS(405), 1,
      anon_sym_constants,
    ACTIONS(407), 1,
      anon_sym_variables,
    ACTIONS(409), 1,
      sym__indent,
    STATE(138), 1,
      sym_block,
    STATE(159), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(189), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4394] = 6,
    ACTIONS(405), 1,
      anon_sym_constants,
    ACTIONS(407), 1,
      anon_sym_variables,
    ACTIONS(409), 1,
      sym__indent,
    STATE(134), 1,
      sym_block,
    STATE(183), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(196), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4415] = 6,
    ACTIONS(405), 1,
      anon_sym_constants,
    ACTIONS(407), 1,
      anon_sym_variables,
    ACTIONS(409), 1,
      sym__indent,
    STATE(143), 1,
      sym_block,
    STATE(183), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(186), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4436] = 6,
    ACTIONS(405), 1,
      anon_sym_constants,
    ACTIONS(407), 1,
      anon_sym_variables,
    ACTIONS(409), 1,
      sym__indent,
    STATE(131), 1,
      sym_block,
    STATE(183), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(199), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4457] = 2,
    ACTIONS(413), 1,
      sym__dedent,
    ACTIONS(411), 6,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
      sym_refersTo,
      sym_identifier,
  [4469] = 2,
    ACTIONS(415), 1,
      anon_sym_and,
    ACTIONS(338), 6,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_or,
      aux_sym_comment_token1,
  [4481] = 5,
    ACTIONS(417), 1,
      anon_sym_elsif,
    ACTIONS(419), 1,
      anon_sym_else,
    STATE(307), 1,
      sym_else,
    ACTIONS(421), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(172), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [4499] = 1,
    ACTIONS(95), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4509] = 5,
    ACTIONS(417), 1,
      anon_sym_elsif,
    ACTIONS(419), 1,
      anon_sym_else,
    STATE(329), 1,
      sym_else,
    ACTIONS(423), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(164), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [4527] = 1,
    ACTIONS(342), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4537] = 1,
    ACTIONS(338), 7,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4547] = 2,
    ACTIONS(300), 1,
      sym__dedent,
    ACTIONS(425), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [4558] = 3,
    ACTIONS(415), 1,
      anon_sym_and,
    ACTIONS(429), 1,
      anon_sym_or,
    ACTIONS(427), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [4571] = 2,
    ACTIONS(387), 1,
      sym__dedent,
    ACTIONS(431), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [4582] = 3,
    ACTIONS(433), 1,
      anon_sym_elsif,
    STATE(172), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
    ACTIONS(436), 3,
      sym__newline,
      anon_sym_else,
      aux_sym_comment_token1,
  [4595] = 6,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    ACTIONS(440), 1,
      anon_sym_var,
    ACTIONS(442), 1,
      sym_identifier,
    STATE(296), 1,
      sym_parameter,
    STATE(371), 1,
      sym__parameters,
    STATE(374), 1,
      sym_var,
  [4614] = 3,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym__generics_repeat1,
    ACTIONS(447), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4626] = 5,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      aux_sym_comment_token1,
    ACTIONS(453), 1,
      sym__newline,
    STATE(190), 1,
      aux_sym_generics_repeat1,
    STATE(320), 1,
      sym_comment,
  [4642] = 3,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym__generics_repeat1,
    ACTIONS(457), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4654] = 5,
    ACTIONS(459), 1,
      sym_identifier,
    STATE(239), 1,
      sym__custom_generic_instantiated_type,
    STATE(240), 1,
      sym__custom_generic_type,
    STATE(241), 1,
      sym__custom_type,
    STATE(263), 1,
      sym__type_name,
  [4670] = 3,
    ACTIONS(415), 1,
      anon_sym_and,
    ACTIONS(429), 1,
      anon_sym_or,
    ACTIONS(461), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4682] = 3,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym__generics_repeat1,
    ACTIONS(463), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4694] = 3,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(468), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4706] = 4,
    ACTIONS(405), 1,
      anon_sym_constants,
    ACTIONS(409), 1,
      sym__indent,
    STATE(137), 1,
      sym_block,
    STATE(214), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4720] = 3,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(472), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4732] = 3,
    ACTIONS(476), 1,
      anon_sym_variables,
    ACTIONS(474), 2,
      sym__indent,
      anon_sym_constants,
    STATE(183), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [4744] = 4,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(188), 1,
      sym__generic,
    STATE(272), 1,
      sym__generics,
    ACTIONS(479), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4758] = 5,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(193), 1,
      sym__type_name,
    STATE(326), 1,
      sym__custom_generic_instantiated_type,
    STATE(327), 1,
      sym__custom_generic_type,
    STATE(328), 1,
      sym__custom_type,
  [4774] = 4,
    ACTIONS(405), 1,
      anon_sym_constants,
    ACTIONS(409), 1,
      sym__indent,
    STATE(140), 1,
      sym_block,
    STATE(214), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4788] = 4,
    ACTIONS(405), 1,
      anon_sym_constants,
    ACTIONS(409), 1,
      sym__indent,
    STATE(133), 1,
      sym_block,
    STATE(214), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4802] = 3,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym__generics_repeat1,
    ACTIONS(457), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4814] = 4,
    ACTIONS(405), 1,
      anon_sym_constants,
    ACTIONS(409), 1,
      sym__indent,
    STATE(132), 1,
      sym_block,
    STATE(214), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4828] = 5,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      aux_sym_comment_token1,
    ACTIONS(487), 1,
      sym__newline,
    STATE(216), 1,
      aux_sym_generics_repeat1,
    STATE(310), 1,
      sym_comment,
  [4844] = 5,
    ACTIONS(459), 1,
      sym_identifier,
    STATE(184), 1,
      sym__type_name,
    STATE(239), 1,
      sym__custom_generic_instantiated_type,
    STATE(240), 1,
      sym__custom_generic_type,
    STATE(241), 1,
      sym__custom_type,
  [4860] = 3,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym__generics_repeat1,
    ACTIONS(463), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4872] = 4,
    ACTIONS(489), 1,
      sym_identifier,
    STATE(176), 1,
      sym__generic,
    STATE(271), 1,
      sym__generics,
    ACTIONS(479), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4886] = 5,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      aux_sym_comment_token1,
    ACTIONS(493), 1,
      sym__newline,
    STATE(197), 1,
      aux_sym_generics_repeat1,
    STATE(390), 1,
      sym_comment,
  [4902] = 3,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym__generics_repeat1,
    ACTIONS(447), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4914] = 4,
    ACTIONS(405), 1,
      anon_sym_constants,
    ACTIONS(409), 1,
      sym__indent,
    STATE(144), 1,
      sym_block,
    STATE(214), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4928] = 5,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      aux_sym_comment_token1,
    ACTIONS(498), 1,
      sym__newline,
    STATE(216), 1,
      aux_sym_generics_repeat1,
    STATE(341), 1,
      sym_comment,
  [4944] = 3,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(500), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [4956] = 4,
    ACTIONS(405), 1,
      anon_sym_constants,
    ACTIONS(409), 1,
      sym__indent,
    STATE(139), 1,
      sym_block,
    STATE(214), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4970] = 1,
    ACTIONS(502), 4,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
      sym_identifier,
  [4977] = 3,
    ACTIONS(415), 1,
      anon_sym_and,
    ACTIONS(429), 1,
      anon_sym_or,
    ACTIONS(504), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4988] = 3,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_constant_repeat1,
    ACTIONS(348), 2,
      sym__indent,
      anon_sym_constants,
  [4999] = 4,
    ACTIONS(440), 1,
      anon_sym_var,
    ACTIONS(442), 1,
      sym_identifier,
    STATE(312), 1,
      sym_parameter,
    STATE(374), 1,
      sym_var,
  [5012] = 1,
    ACTIONS(342), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [5019] = 3,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(500), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5030] = 4,
    ACTIONS(511), 1,
      anon_sym_and,
    ACTIONS(513), 1,
      anon_sym_or,
    ACTIONS(515), 1,
      sym__indent,
    STATE(305), 1,
      sym_block,
  [5043] = 1,
    ACTIONS(517), 4,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
      sym_identifier,
  [5050] = 1,
    ACTIONS(381), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [5057] = 3,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(472), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5068] = 3,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(521), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5079] = 3,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym__custom_generic_instantiated_type_repeat1,
    ACTIONS(468), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5090] = 3,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_constant_repeat1,
    ACTIONS(346), 2,
      sym__indent,
      anon_sym_constants,
  [5101] = 1,
    ACTIONS(389), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [5108] = 3,
    ACTIONS(526), 1,
      anon_sym_constants,
    ACTIONS(529), 1,
      sym__indent,
    STATE(214), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [5119] = 3,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_enum_repeat1,
    ACTIONS(534), 2,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [5130] = 3,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_generics_repeat1,
    ACTIONS(539), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5141] = 1,
    ACTIONS(541), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [5148] = 1,
    ACTIONS(338), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [5155] = 1,
    ACTIONS(517), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5162] = 2,
    ACTIONS(543), 1,
      anon_sym_and,
    ACTIONS(338), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_or,
  [5171] = 1,
    ACTIONS(95), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [5178] = 1,
    ACTIONS(545), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [5185] = 4,
    ACTIONS(511), 1,
      anon_sym_and,
    ACTIONS(513), 1,
      anon_sym_or,
    ACTIONS(515), 1,
      sym__indent,
    STATE(317), 1,
      sym_block,
  [5198] = 1,
    ACTIONS(547), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5205] = 3,
    ACTIONS(549), 1,
      anon_sym_generics,
    STATE(304), 1,
      sym_generics,
    ACTIONS(551), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5216] = 1,
    ACTIONS(502), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5223] = 3,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(553), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5234] = 4,
    ACTIONS(511), 1,
      anon_sym_and,
    ACTIONS(513), 1,
      anon_sym_or,
    ACTIONS(515), 1,
      sym__indent,
    STATE(222), 1,
      sym_block,
  [5247] = 1,
    ACTIONS(555), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [5254] = 3,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(560), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5265] = 3,
    ACTIONS(562), 1,
      anon_sym_generics,
    ACTIONS(564), 1,
      sym__indent,
    STATE(352), 1,
      sym_generics,
  [5275] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      aux_sym_enum_repeat1,
  [5285] = 3,
    ACTIONS(543), 1,
      anon_sym_and,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(572), 1,
      anon_sym_or,
  [5295] = 3,
    ACTIONS(491), 1,
      aux_sym_comment_token1,
    ACTIONS(574), 1,
      sym__newline,
    STATE(281), 1,
      sym_comment,
  [5305] = 1,
    ACTIONS(375), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [5311] = 1,
    ACTIONS(576), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [5317] = 3,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_enum_repeat1,
  [5327] = 3,
    ACTIONS(582), 1,
      anon_sym_LBRACK,
    ACTIONS(584), 1,
      sym__newline,
    STATE(344), 1,
      sym__multiple_import,
  [5337] = 1,
    ACTIONS(586), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5343] = 1,
    ACTIONS(588), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5349] = 1,
    ACTIONS(590), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5355] = 3,
    ACTIONS(592), 1,
      aux_sym_comment_token1,
    ACTIONS(594), 1,
      sym__newline,
    STATE(136), 1,
      sym_comment,
  [5365] = 1,
    ACTIONS(596), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5371] = 3,
    ACTIONS(491), 1,
      aux_sym_comment_token1,
    ACTIONS(598), 1,
      sym__newline,
    STATE(157), 1,
      sym_comment,
  [5381] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(600), 1,
      anon_sym_COLON,
    STATE(253), 1,
      aux_sym_enum_repeat1,
  [5391] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_RBRACK,
    STATE(215), 1,
      aux_sym_enum_repeat1,
  [5401] = 1,
    ACTIONS(560), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [5407] = 3,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      sym__newline,
    STATE(270), 1,
      aux_sym_enum_repeat1,
  [5417] = 1,
    ACTIONS(606), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5423] = 3,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    ACTIONS(610), 1,
      anon_sym_SEMI,
    STATE(290), 1,
      aux_sym__parameters_repeat1,
  [5433] = 1,
    ACTIONS(612), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [5439] = 3,
    ACTIONS(614), 1,
      sym_identifier,
    STATE(275), 1,
      sym_function_header,
    STATE(315), 1,
      sym__function_header,
  [5449] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(616), 1,
      anon_sym_COLON,
    STATE(215), 1,
      aux_sym_enum_repeat1,
  [5459] = 2,
    ACTIONS(618), 1,
      anon_sym_from,
    ACTIONS(620), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5467] = 2,
    ACTIONS(622), 1,
      anon_sym_from,
    ACTIONS(620), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5475] = 1,
    ACTIONS(624), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [5481] = 3,
    ACTIONS(543), 1,
      anon_sym_and,
    ACTIONS(572), 1,
      anon_sym_or,
    ACTIONS(626), 1,
      anon_sym_RBRACK,
  [5491] = 1,
    ACTIONS(624), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5497] = 1,
    ACTIONS(628), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5503] = 1,
    ACTIONS(534), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [5509] = 3,
    ACTIONS(543), 1,
      anon_sym_and,
    ACTIONS(572), 1,
      anon_sym_or,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
  [5519] = 3,
    ACTIONS(632), 1,
      aux_sym_comment_token1,
    ACTIONS(634), 1,
      sym__newline,
    STATE(169), 1,
      sym_comment,
  [5529] = 3,
    ACTIONS(636), 1,
      sym_identifier,
    STATE(188), 1,
      sym__generic,
    STATE(386), 1,
      sym__generics,
  [5539] = 3,
    ACTIONS(491), 1,
      aux_sym_comment_token1,
    ACTIONS(639), 1,
      sym__newline,
    STATE(235), 1,
      sym_comment,
  [5549] = 3,
    ACTIONS(592), 1,
      aux_sym_comment_token1,
    ACTIONS(641), 1,
      sym__newline,
    STATE(147), 1,
      sym_comment,
  [5559] = 1,
    ACTIONS(643), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5565] = 1,
    ACTIONS(645), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5571] = 1,
    ACTIONS(647), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [5577] = 3,
    ACTIONS(543), 1,
      anon_sym_and,
    ACTIONS(572), 1,
      anon_sym_or,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
  [5587] = 3,
    ACTIONS(534), 1,
      sym__newline,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_enum_repeat1,
  [5597] = 2,
    ACTIONS(656), 1,
      sym_identifier,
    ACTIONS(654), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5605] = 2,
    ACTIONS(658), 1,
      sym_identifier,
    ACTIONS(654), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5613] = 3,
    ACTIONS(543), 1,
      anon_sym_and,
    ACTIONS(572), 1,
      anon_sym_or,
    ACTIONS(660), 1,
      anon_sym_RBRACK,
  [5623] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      aux_sym_enum_repeat1,
  [5633] = 3,
    ACTIONS(491), 1,
      aux_sym_comment_token1,
    ACTIONS(664), 1,
      sym__newline,
    STATE(158), 1,
      sym_comment,
  [5643] = 1,
    ACTIONS(95), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [5649] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_COLON,
    STATE(215), 1,
      aux_sym_enum_repeat1,
  [5659] = 2,
    ACTIONS(668), 1,
      anon_sym_from,
    ACTIONS(620), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5667] = 2,
    ACTIONS(670), 1,
      anon_sym_from,
    ACTIONS(620), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5675] = 3,
    ACTIONS(543), 1,
      anon_sym_and,
    ACTIONS(572), 1,
      anon_sym_or,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
  [5685] = 1,
    ACTIONS(391), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [5691] = 3,
    ACTIONS(543), 1,
      anon_sym_and,
    ACTIONS(572), 1,
      anon_sym_or,
    ACTIONS(674), 1,
      anon_sym_RBRACK,
  [5701] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(676), 1,
      anon_sym_COLON,
    STATE(287), 1,
      aux_sym_enum_repeat1,
  [5711] = 3,
    ACTIONS(543), 1,
      anon_sym_and,
    ACTIONS(572), 1,
      anon_sym_or,
    ACTIONS(678), 1,
      anon_sym_RBRACK,
  [5721] = 1,
    ACTIONS(547), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [5727] = 1,
    ACTIONS(680), 3,
      sym__newline,
      anon_sym_generics,
      aux_sym_comment_token1,
  [5733] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(682), 1,
      anon_sym_COLON,
    STATE(215), 1,
      aux_sym_enum_repeat1,
  [5743] = 1,
    ACTIONS(342), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [5749] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(684), 1,
      anon_sym_RBRACK,
    STATE(215), 1,
      aux_sym_enum_repeat1,
  [5759] = 3,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    ACTIONS(688), 1,
      anon_sym_SEMI,
    STATE(290), 1,
      aux_sym__parameters_repeat1,
  [5769] = 1,
    ACTIONS(387), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [5775] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(691), 1,
      anon_sym_COLON,
    STATE(215), 1,
      aux_sym_enum_repeat1,
  [5785] = 1,
    ACTIONS(693), 3,
      sym__newline,
      anon_sym_generics,
      aux_sym_comment_token1,
  [5791] = 1,
    ACTIONS(338), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [5797] = 2,
    ACTIONS(511), 1,
      anon_sym_and,
    ACTIONS(338), 2,
      sym__indent,
      anon_sym_or,
  [5805] = 3,
    ACTIONS(610), 1,
      anon_sym_SEMI,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      aux_sym__parameters_repeat1,
  [5815] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      anon_sym_COLON,
    STATE(292), 1,
      aux_sym_enum_repeat1,
  [5825] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(691), 1,
      anon_sym_COLON,
    STATE(277), 1,
      aux_sym_enum_repeat1,
  [5835] = 1,
    ACTIONS(699), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5840] = 2,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(219), 1,
      sym__generic,
  [5847] = 2,
    ACTIONS(614), 1,
      sym_identifier,
    STATE(244), 1,
      sym__function_header,
  [5854] = 1,
    ACTIONS(701), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5859] = 1,
    ACTIONS(703), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5864] = 1,
    ACTIONS(705), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5869] = 1,
    ACTIONS(707), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5874] = 1,
    ACTIONS(709), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5879] = 1,
    ACTIONS(711), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5884] = 1,
    ACTIONS(713), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5889] = 1,
    ACTIONS(596), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5894] = 1,
    ACTIONS(715), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5899] = 1,
    ACTIONS(715), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5904] = 1,
    ACTIONS(686), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5909] = 2,
    ACTIONS(489), 1,
      sym_identifier,
    STATE(207), 1,
      sym__generic,
  [5916] = 2,
    ACTIONS(717), 1,
      anon_sym_LPAREN,
    STATE(225), 1,
      sym_parameters,
  [5923] = 1,
    ACTIONS(719), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5928] = 1,
    ACTIONS(387), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5933] = 1,
    ACTIONS(721), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5938] = 2,
    ACTIONS(723), 1,
      sym_identifier,
    STATE(236), 1,
      sym_variable_access,
  [5945] = 1,
    ACTIONS(725), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5950] = 1,
    ACTIONS(727), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5955] = 1,
    ACTIONS(729), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5960] = 1,
    ACTIONS(534), 2,
      sym__newline,
      anon_sym_COMMA,
  [5965] = 1,
    ACTIONS(643), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5970] = 1,
    ACTIONS(731), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5975] = 2,
    ACTIONS(515), 1,
      sym__indent,
    STATE(306), 1,
      sym_block,
  [5982] = 1,
    ACTIONS(586), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5987] = 1,
    ACTIONS(588), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5992] = 1,
    ACTIONS(590), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5997] = 1,
    ACTIONS(421), 2,
      sym__newline,
      aux_sym_comment_token1,
  [6002] = 1,
    ACTIONS(647), 2,
      sym__newline,
      aux_sym_comment_token1,
  [6007] = 1,
    ACTIONS(645), 2,
      sym__newline,
      aux_sym_comment_token1,
  [6012] = 2,
    ACTIONS(515), 1,
      sym__indent,
    STATE(324), 1,
      sym_block,
  [6019] = 2,
    ACTIONS(733), 1,
      anon_sym_from,
    ACTIONS(735), 1,
      sym_identifier,
  [6026] = 2,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_from,
  [6033] = 1,
    ACTIONS(739), 1,
      sym_identifier,
  [6037] = 1,
    ACTIONS(741), 1,
      sym_integer,
  [6041] = 1,
    ACTIONS(743), 1,
      sym_identifier,
  [6045] = 1,
    ACTIONS(745), 1,
      sym_integer,
  [6049] = 1,
    ACTIONS(747), 1,
      anon_sym_of,
  [6053] = 1,
    ACTIONS(749), 1,
      sym_identifier,
  [6057] = 1,
    ACTIONS(715), 1,
      sym__indent,
  [6061] = 1,
    ACTIONS(751), 1,
      sym__newline,
  [6065] = 1,
    ACTIONS(715), 1,
      sym__indent,
  [6069] = 1,
    ACTIONS(753), 1,
      sym__newline,
  [6073] = 1,
    ACTIONS(755), 1,
      sym_identifier,
  [6077] = 1,
    ACTIONS(757), 1,
      sym_integer,
  [6081] = 1,
    ACTIONS(759), 1,
      anon_sym_to,
  [6085] = 1,
    ACTIONS(761), 1,
      anon_sym_of,
  [6089] = 1,
    ACTIONS(763), 1,
      sym_identifier,
  [6093] = 1,
    ACTIONS(765), 1,
      anon_sym_to,
  [6097] = 1,
    ACTIONS(767), 1,
      sym_float,
  [6101] = 1,
    ACTIONS(769), 1,
      sym__indent,
  [6105] = 1,
    ACTIONS(771), 1,
      anon_sym_until,
  [6109] = 1,
    ACTIONS(773), 1,
      anon_sym_LBRACK,
  [6113] = 1,
    ACTIONS(775), 1,
      anon_sym_from,
  [6117] = 1,
    ACTIONS(777), 1,
      anon_sym_EQ,
  [6121] = 1,
    ACTIONS(779), 1,
      anon_sym_for,
  [6125] = 1,
    ACTIONS(781), 1,
      anon_sym_to,
  [6129] = 1,
    ACTIONS(783), 1,
      sym_identifier,
  [6133] = 1,
    ACTIONS(785), 1,
      sym_identifier,
  [6137] = 1,
    ACTIONS(787), 1,
      sym_integer,
  [6141] = 1,
    ACTIONS(789), 1,
      anon_sym_COLON_EQ,
  [6145] = 1,
    ACTIONS(791), 1,
      sym_integer,
  [6149] = 1,
    ACTIONS(793), 1,
      sym__newline,
  [6153] = 1,
    ACTIONS(795), 1,
      sym_identifier,
  [6157] = 1,
    ACTIONS(797), 1,
      sym__newline,
  [6161] = 1,
    ACTIONS(799), 1,
      sym_identifier,
  [6165] = 1,
    ACTIONS(801), 1,
      sym_identifier,
  [6169] = 1,
    ACTIONS(803), 1,
      sym_identifier,
  [6173] = 1,
    ACTIONS(805), 1,
      anon_sym_EQ,
  [6177] = 1,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
  [6181] = 1,
    ACTIONS(809), 1,
      sym__newline,
  [6185] = 1,
    ACTIONS(811), 1,
      ts_builtin_sym_end,
  [6189] = 1,
    ACTIONS(813), 1,
      sym_identifier,
  [6193] = 1,
    ACTIONS(815), 1,
      sym_identifier,
  [6197] = 1,
    ACTIONS(817), 1,
      sym_identifier,
  [6201] = 1,
    ACTIONS(819), 1,
      sym_float,
  [6205] = 1,
    ACTIONS(821), 1,
      anon_sym_EQ,
  [6209] = 1,
    ACTIONS(823), 1,
      sym_integer,
  [6213] = 1,
    ACTIONS(823), 1,
      sym_float,
  [6217] = 1,
    ACTIONS(825), 1,
      sym_identifier,
  [6221] = 1,
    ACTIONS(827), 1,
      sym__newline,
  [6225] = 1,
    ACTIONS(819), 1,
      sym_integer,
  [6229] = 1,
    ACTIONS(829), 1,
      anon_sym_to,
  [6233] = 1,
    ACTIONS(831), 1,
      sym_identifier,
  [6237] = 1,
    ACTIONS(833), 1,
      sym_identifier,
  [6241] = 1,
    ACTIONS(836), 1,
      sym__newline,
  [6245] = 1,
    ACTIONS(838), 1,
      sym__newline,
  [6249] = 1,
    ACTIONS(840), 1,
      sym_identifier,
  [6253] = 1,
    ACTIONS(727), 1,
      sym__indent,
  [6257] = 1,
    ACTIONS(842), 1,
      anon_sym_EQ,
  [6261] = 1,
    ACTIONS(844), 1,
      sym_identifier,
  [6265] = 1,
    ACTIONS(846), 1,
      sym_identifier,
  [6269] = 1,
    ACTIONS(848), 1,
      sym_identifier,
  [6273] = 1,
    ACTIONS(850), 1,
      sym_identifier,
  [6277] = 1,
    ACTIONS(852), 1,
      anon_sym_from,
  [6281] = 1,
    ACTIONS(854), 1,
      sym_identifier,
  [6285] = 1,
    ACTIONS(856), 1,
      anon_sym_to,
  [6289] = 1,
    ACTIONS(858), 1,
      anon_sym_to,
  [6293] = 1,
    ACTIONS(860), 1,
      sym_identifier,
  [6297] = 1,
    ACTIONS(862), 1,
      sym_identifier,
  [6301] = 1,
    ACTIONS(864), 1,
      sym_identifier,
  [6305] = 1,
    ACTIONS(866), 1,
      sym_identifier,
  [6309] = 1,
    ACTIONS(868), 1,
      sym_identifier,
  [6313] = 1,
    ACTIONS(870), 1,
      anon_sym_EQ,
  [6317] = 1,
    ACTIONS(872), 1,
      sym_identifier,
  [6321] = 1,
    ACTIONS(874), 1,
      sym_integer,
  [6325] = 1,
    ACTIONS(876), 1,
      sym_float,
  [6329] = 1,
    ACTIONS(878), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 150,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 227,
  [SMALL_STATE(9)] = 258,
  [SMALL_STATE(10)] = 293,
  [SMALL_STATE(11)] = 324,
  [SMALL_STATE(12)] = 361,
  [SMALL_STATE(13)] = 392,
  [SMALL_STATE(14)] = 429,
  [SMALL_STATE(15)] = 489,
  [SMALL_STATE(16)] = 519,
  [SMALL_STATE(17)] = 549,
  [SMALL_STATE(18)] = 590,
  [SMALL_STATE(19)] = 624,
  [SMALL_STATE(20)] = 652,
  [SMALL_STATE(21)] = 680,
  [SMALL_STATE(22)] = 708,
  [SMALL_STATE(23)] = 740,
  [SMALL_STATE(24)] = 773,
  [SMALL_STATE(25)] = 806,
  [SMALL_STATE(26)] = 839,
  [SMALL_STATE(27)] = 865,
  [SMALL_STATE(28)] = 891,
  [SMALL_STATE(29)] = 926,
  [SMALL_STATE(30)] = 957,
  [SMALL_STATE(31)] = 988,
  [SMALL_STATE(32)] = 1019,
  [SMALL_STATE(33)] = 1043,
  [SMALL_STATE(34)] = 1067,
  [SMALL_STATE(35)] = 1091,
  [SMALL_STATE(36)] = 1119,
  [SMALL_STATE(37)] = 1149,
  [SMALL_STATE(38)] = 1193,
  [SMALL_STATE(39)] = 1217,
  [SMALL_STATE(40)] = 1241,
  [SMALL_STATE(41)] = 1283,
  [SMALL_STATE(42)] = 1322,
  [SMALL_STATE(43)] = 1361,
  [SMALL_STATE(44)] = 1400,
  [SMALL_STATE(45)] = 1439,
  [SMALL_STATE(46)] = 1468,
  [SMALL_STATE(47)] = 1497,
  [SMALL_STATE(48)] = 1533,
  [SMALL_STATE(49)] = 1569,
  [SMALL_STATE(50)] = 1605,
  [SMALL_STATE(51)] = 1641,
  [SMALL_STATE(52)] = 1677,
  [SMALL_STATE(53)] = 1713,
  [SMALL_STATE(54)] = 1737,
  [SMALL_STATE(55)] = 1773,
  [SMALL_STATE(56)] = 1809,
  [SMALL_STATE(57)] = 1845,
  [SMALL_STATE(58)] = 1881,
  [SMALL_STATE(59)] = 1917,
  [SMALL_STATE(60)] = 1953,
  [SMALL_STATE(61)] = 1997,
  [SMALL_STATE(62)] = 2033,
  [SMALL_STATE(63)] = 2077,
  [SMALL_STATE(64)] = 2113,
  [SMALL_STATE(65)] = 2149,
  [SMALL_STATE(66)] = 2185,
  [SMALL_STATE(67)] = 2229,
  [SMALL_STATE(68)] = 2265,
  [SMALL_STATE(69)] = 2287,
  [SMALL_STATE(70)] = 2313,
  [SMALL_STATE(71)] = 2349,
  [SMALL_STATE(72)] = 2381,
  [SMALL_STATE(73)] = 2417,
  [SMALL_STATE(74)] = 2439,
  [SMALL_STATE(75)] = 2475,
  [SMALL_STATE(76)] = 2511,
  [SMALL_STATE(77)] = 2547,
  [SMALL_STATE(78)] = 2569,
  [SMALL_STATE(79)] = 2605,
  [SMALL_STATE(80)] = 2635,
  [SMALL_STATE(81)] = 2671,
  [SMALL_STATE(82)] = 2707,
  [SMALL_STATE(83)] = 2738,
  [SMALL_STATE(84)] = 2777,
  [SMALL_STATE(85)] = 2816,
  [SMALL_STATE(86)] = 2857,
  [SMALL_STATE(87)] = 2896,
  [SMALL_STATE(88)] = 2935,
  [SMALL_STATE(89)] = 2976,
  [SMALL_STATE(90)] = 3003,
  [SMALL_STATE(91)] = 3042,
  [SMALL_STATE(92)] = 3067,
  [SMALL_STATE(93)] = 3093,
  [SMALL_STATE(94)] = 3130,
  [SMALL_STATE(95)] = 3167,
  [SMALL_STATE(96)] = 3204,
  [SMALL_STATE(97)] = 3227,
  [SMALL_STATE(98)] = 3264,
  [SMALL_STATE(99)] = 3301,
  [SMALL_STATE(100)] = 3324,
  [SMALL_STATE(101)] = 3361,
  [SMALL_STATE(102)] = 3398,
  [SMALL_STATE(103)] = 3423,
  [SMALL_STATE(104)] = 3448,
  [SMALL_STATE(105)] = 3473,
  [SMALL_STATE(106)] = 3498,
  [SMALL_STATE(107)] = 3523,
  [SMALL_STATE(108)] = 3548,
  [SMALL_STATE(109)] = 3573,
  [SMALL_STATE(110)] = 3598,
  [SMALL_STATE(111)] = 3623,
  [SMALL_STATE(112)] = 3648,
  [SMALL_STATE(113)] = 3673,
  [SMALL_STATE(114)] = 3698,
  [SMALL_STATE(115)] = 3723,
  [SMALL_STATE(116)] = 3748,
  [SMALL_STATE(117)] = 3773,
  [SMALL_STATE(118)] = 3798,
  [SMALL_STATE(119)] = 3818,
  [SMALL_STATE(120)] = 3836,
  [SMALL_STATE(121)] = 3852,
  [SMALL_STATE(122)] = 3868,
  [SMALL_STATE(123)] = 3886,
  [SMALL_STATE(124)] = 3902,
  [SMALL_STATE(125)] = 3922,
  [SMALL_STATE(126)] = 3940,
  [SMALL_STATE(127)] = 3963,
  [SMALL_STATE(128)] = 3982,
  [SMALL_STATE(129)] = 4001,
  [SMALL_STATE(130)] = 4013,
  [SMALL_STATE(131)] = 4025,
  [SMALL_STATE(132)] = 4037,
  [SMALL_STATE(133)] = 4049,
  [SMALL_STATE(134)] = 4061,
  [SMALL_STATE(135)] = 4073,
  [SMALL_STATE(136)] = 4085,
  [SMALL_STATE(137)] = 4097,
  [SMALL_STATE(138)] = 4109,
  [SMALL_STATE(139)] = 4121,
  [SMALL_STATE(140)] = 4133,
  [SMALL_STATE(141)] = 4145,
  [SMALL_STATE(142)] = 4157,
  [SMALL_STATE(143)] = 4169,
  [SMALL_STATE(144)] = 4181,
  [SMALL_STATE(145)] = 4193,
  [SMALL_STATE(146)] = 4205,
  [SMALL_STATE(147)] = 4217,
  [SMALL_STATE(148)] = 4229,
  [SMALL_STATE(149)] = 4241,
  [SMALL_STATE(150)] = 4253,
  [SMALL_STATE(151)] = 4265,
  [SMALL_STATE(152)] = 4277,
  [SMALL_STATE(153)] = 4289,
  [SMALL_STATE(154)] = 4307,
  [SMALL_STATE(155)] = 4319,
  [SMALL_STATE(156)] = 4331,
  [SMALL_STATE(157)] = 4352,
  [SMALL_STATE(158)] = 4373,
  [SMALL_STATE(159)] = 4394,
  [SMALL_STATE(160)] = 4415,
  [SMALL_STATE(161)] = 4436,
  [SMALL_STATE(162)] = 4457,
  [SMALL_STATE(163)] = 4469,
  [SMALL_STATE(164)] = 4481,
  [SMALL_STATE(165)] = 4499,
  [SMALL_STATE(166)] = 4509,
  [SMALL_STATE(167)] = 4527,
  [SMALL_STATE(168)] = 4537,
  [SMALL_STATE(169)] = 4547,
  [SMALL_STATE(170)] = 4558,
  [SMALL_STATE(171)] = 4571,
  [SMALL_STATE(172)] = 4582,
  [SMALL_STATE(173)] = 4595,
  [SMALL_STATE(174)] = 4614,
  [SMALL_STATE(175)] = 4626,
  [SMALL_STATE(176)] = 4642,
  [SMALL_STATE(177)] = 4654,
  [SMALL_STATE(178)] = 4670,
  [SMALL_STATE(179)] = 4682,
  [SMALL_STATE(180)] = 4694,
  [SMALL_STATE(181)] = 4706,
  [SMALL_STATE(182)] = 4720,
  [SMALL_STATE(183)] = 4732,
  [SMALL_STATE(184)] = 4744,
  [SMALL_STATE(185)] = 4758,
  [SMALL_STATE(186)] = 4774,
  [SMALL_STATE(187)] = 4788,
  [SMALL_STATE(188)] = 4802,
  [SMALL_STATE(189)] = 4814,
  [SMALL_STATE(190)] = 4828,
  [SMALL_STATE(191)] = 4844,
  [SMALL_STATE(192)] = 4860,
  [SMALL_STATE(193)] = 4872,
  [SMALL_STATE(194)] = 4886,
  [SMALL_STATE(195)] = 4902,
  [SMALL_STATE(196)] = 4914,
  [SMALL_STATE(197)] = 4928,
  [SMALL_STATE(198)] = 4944,
  [SMALL_STATE(199)] = 4956,
  [SMALL_STATE(200)] = 4970,
  [SMALL_STATE(201)] = 4977,
  [SMALL_STATE(202)] = 4988,
  [SMALL_STATE(203)] = 4999,
  [SMALL_STATE(204)] = 5012,
  [SMALL_STATE(205)] = 5019,
  [SMALL_STATE(206)] = 5030,
  [SMALL_STATE(207)] = 5043,
  [SMALL_STATE(208)] = 5050,
  [SMALL_STATE(209)] = 5057,
  [SMALL_STATE(210)] = 5068,
  [SMALL_STATE(211)] = 5079,
  [SMALL_STATE(212)] = 5090,
  [SMALL_STATE(213)] = 5101,
  [SMALL_STATE(214)] = 5108,
  [SMALL_STATE(215)] = 5119,
  [SMALL_STATE(216)] = 5130,
  [SMALL_STATE(217)] = 5141,
  [SMALL_STATE(218)] = 5148,
  [SMALL_STATE(219)] = 5155,
  [SMALL_STATE(220)] = 5162,
  [SMALL_STATE(221)] = 5171,
  [SMALL_STATE(222)] = 5178,
  [SMALL_STATE(223)] = 5185,
  [SMALL_STATE(224)] = 5198,
  [SMALL_STATE(225)] = 5205,
  [SMALL_STATE(226)] = 5216,
  [SMALL_STATE(227)] = 5223,
  [SMALL_STATE(228)] = 5234,
  [SMALL_STATE(229)] = 5247,
  [SMALL_STATE(230)] = 5254,
  [SMALL_STATE(231)] = 5265,
  [SMALL_STATE(232)] = 5275,
  [SMALL_STATE(233)] = 5285,
  [SMALL_STATE(234)] = 5295,
  [SMALL_STATE(235)] = 5305,
  [SMALL_STATE(236)] = 5311,
  [SMALL_STATE(237)] = 5317,
  [SMALL_STATE(238)] = 5327,
  [SMALL_STATE(239)] = 5337,
  [SMALL_STATE(240)] = 5343,
  [SMALL_STATE(241)] = 5349,
  [SMALL_STATE(242)] = 5355,
  [SMALL_STATE(243)] = 5365,
  [SMALL_STATE(244)] = 5371,
  [SMALL_STATE(245)] = 5381,
  [SMALL_STATE(246)] = 5391,
  [SMALL_STATE(247)] = 5401,
  [SMALL_STATE(248)] = 5407,
  [SMALL_STATE(249)] = 5417,
  [SMALL_STATE(250)] = 5423,
  [SMALL_STATE(251)] = 5433,
  [SMALL_STATE(252)] = 5439,
  [SMALL_STATE(253)] = 5449,
  [SMALL_STATE(254)] = 5459,
  [SMALL_STATE(255)] = 5467,
  [SMALL_STATE(256)] = 5475,
  [SMALL_STATE(257)] = 5481,
  [SMALL_STATE(258)] = 5491,
  [SMALL_STATE(259)] = 5497,
  [SMALL_STATE(260)] = 5503,
  [SMALL_STATE(261)] = 5509,
  [SMALL_STATE(262)] = 5519,
  [SMALL_STATE(263)] = 5529,
  [SMALL_STATE(264)] = 5539,
  [SMALL_STATE(265)] = 5549,
  [SMALL_STATE(266)] = 5559,
  [SMALL_STATE(267)] = 5565,
  [SMALL_STATE(268)] = 5571,
  [SMALL_STATE(269)] = 5577,
  [SMALL_STATE(270)] = 5587,
  [SMALL_STATE(271)] = 5597,
  [SMALL_STATE(272)] = 5605,
  [SMALL_STATE(273)] = 5613,
  [SMALL_STATE(274)] = 5623,
  [SMALL_STATE(275)] = 5633,
  [SMALL_STATE(276)] = 5643,
  [SMALL_STATE(277)] = 5649,
  [SMALL_STATE(278)] = 5659,
  [SMALL_STATE(279)] = 5667,
  [SMALL_STATE(280)] = 5675,
  [SMALL_STATE(281)] = 5685,
  [SMALL_STATE(282)] = 5691,
  [SMALL_STATE(283)] = 5701,
  [SMALL_STATE(284)] = 5711,
  [SMALL_STATE(285)] = 5721,
  [SMALL_STATE(286)] = 5727,
  [SMALL_STATE(287)] = 5733,
  [SMALL_STATE(288)] = 5743,
  [SMALL_STATE(289)] = 5749,
  [SMALL_STATE(290)] = 5759,
  [SMALL_STATE(291)] = 5769,
  [SMALL_STATE(292)] = 5775,
  [SMALL_STATE(293)] = 5785,
  [SMALL_STATE(294)] = 5791,
  [SMALL_STATE(295)] = 5797,
  [SMALL_STATE(296)] = 5805,
  [SMALL_STATE(297)] = 5815,
  [SMALL_STATE(298)] = 5825,
  [SMALL_STATE(299)] = 5835,
  [SMALL_STATE(300)] = 5840,
  [SMALL_STATE(301)] = 5847,
  [SMALL_STATE(302)] = 5854,
  [SMALL_STATE(303)] = 5859,
  [SMALL_STATE(304)] = 5864,
  [SMALL_STATE(305)] = 5869,
  [SMALL_STATE(306)] = 5874,
  [SMALL_STATE(307)] = 5879,
  [SMALL_STATE(308)] = 5884,
  [SMALL_STATE(309)] = 5889,
  [SMALL_STATE(310)] = 5894,
  [SMALL_STATE(311)] = 5899,
  [SMALL_STATE(312)] = 5904,
  [SMALL_STATE(313)] = 5909,
  [SMALL_STATE(314)] = 5916,
  [SMALL_STATE(315)] = 5923,
  [SMALL_STATE(316)] = 5928,
  [SMALL_STATE(317)] = 5933,
  [SMALL_STATE(318)] = 5938,
  [SMALL_STATE(319)] = 5945,
  [SMALL_STATE(320)] = 5950,
  [SMALL_STATE(321)] = 5955,
  [SMALL_STATE(322)] = 5960,
  [SMALL_STATE(323)] = 5965,
  [SMALL_STATE(324)] = 5970,
  [SMALL_STATE(325)] = 5975,
  [SMALL_STATE(326)] = 5982,
  [SMALL_STATE(327)] = 5987,
  [SMALL_STATE(328)] = 5992,
  [SMALL_STATE(329)] = 5997,
  [SMALL_STATE(330)] = 6002,
  [SMALL_STATE(331)] = 6007,
  [SMALL_STATE(332)] = 6012,
  [SMALL_STATE(333)] = 6019,
  [SMALL_STATE(334)] = 6026,
  [SMALL_STATE(335)] = 6033,
  [SMALL_STATE(336)] = 6037,
  [SMALL_STATE(337)] = 6041,
  [SMALL_STATE(338)] = 6045,
  [SMALL_STATE(339)] = 6049,
  [SMALL_STATE(340)] = 6053,
  [SMALL_STATE(341)] = 6057,
  [SMALL_STATE(342)] = 6061,
  [SMALL_STATE(343)] = 6065,
  [SMALL_STATE(344)] = 6069,
  [SMALL_STATE(345)] = 6073,
  [SMALL_STATE(346)] = 6077,
  [SMALL_STATE(347)] = 6081,
  [SMALL_STATE(348)] = 6085,
  [SMALL_STATE(349)] = 6089,
  [SMALL_STATE(350)] = 6093,
  [SMALL_STATE(351)] = 6097,
  [SMALL_STATE(352)] = 6101,
  [SMALL_STATE(353)] = 6105,
  [SMALL_STATE(354)] = 6109,
  [SMALL_STATE(355)] = 6113,
  [SMALL_STATE(356)] = 6117,
  [SMALL_STATE(357)] = 6121,
  [SMALL_STATE(358)] = 6125,
  [SMALL_STATE(359)] = 6129,
  [SMALL_STATE(360)] = 6133,
  [SMALL_STATE(361)] = 6137,
  [SMALL_STATE(362)] = 6141,
  [SMALL_STATE(363)] = 6145,
  [SMALL_STATE(364)] = 6149,
  [SMALL_STATE(365)] = 6153,
  [SMALL_STATE(366)] = 6157,
  [SMALL_STATE(367)] = 6161,
  [SMALL_STATE(368)] = 6165,
  [SMALL_STATE(369)] = 6169,
  [SMALL_STATE(370)] = 6173,
  [SMALL_STATE(371)] = 6177,
  [SMALL_STATE(372)] = 6181,
  [SMALL_STATE(373)] = 6185,
  [SMALL_STATE(374)] = 6189,
  [SMALL_STATE(375)] = 6193,
  [SMALL_STATE(376)] = 6197,
  [SMALL_STATE(377)] = 6201,
  [SMALL_STATE(378)] = 6205,
  [SMALL_STATE(379)] = 6209,
  [SMALL_STATE(380)] = 6213,
  [SMALL_STATE(381)] = 6217,
  [SMALL_STATE(382)] = 6221,
  [SMALL_STATE(383)] = 6225,
  [SMALL_STATE(384)] = 6229,
  [SMALL_STATE(385)] = 6233,
  [SMALL_STATE(386)] = 6237,
  [SMALL_STATE(387)] = 6241,
  [SMALL_STATE(388)] = 6245,
  [SMALL_STATE(389)] = 6249,
  [SMALL_STATE(390)] = 6253,
  [SMALL_STATE(391)] = 6257,
  [SMALL_STATE(392)] = 6261,
  [SMALL_STATE(393)] = 6265,
  [SMALL_STATE(394)] = 6269,
  [SMALL_STATE(395)] = 6273,
  [SMALL_STATE(396)] = 6277,
  [SMALL_STATE(397)] = 6281,
  [SMALL_STATE(398)] = 6285,
  [SMALL_STATE(399)] = 6289,
  [SMALL_STATE(400)] = 6293,
  [SMALL_STATE(401)] = 6297,
  [SMALL_STATE(402)] = 6301,
  [SMALL_STATE(403)] = 6305,
  [SMALL_STATE(404)] = 6309,
  [SMALL_STATE(405)] = 6313,
  [SMALL_STATE(406)] = 6317,
  [SMALL_STATE(407)] = 6321,
  [SMALL_STATE(408)] = 6325,
  [SMALL_STATE(409)] = 6329,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 2, .production_id = 18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 2, .production_id = 18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 27),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 27), SHIFT_REPEAT(81),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 27),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 27), SHIFT_REPEAT(369),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 26),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 26),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 36),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 36),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 1),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 27), SHIFT_REPEAT(64),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 27), SHIFT_REPEAT(385),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 28),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 28),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 1, .production_id = 15),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 34),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 34),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 27), SHIFT_REPEAT(70),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 27), SHIFT_REPEAT(389),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 27), SHIFT_REPEAT(48),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 27), SHIFT_REPEAT(375),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(359),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(403),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(402),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(401),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(301),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(395),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(394),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(393),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35), SHIFT_REPEAT(113),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35), SHIFT_REPEAT(113),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 2, .production_id = 25),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 2, .production_id = 25),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_argument, 1), REDUCE(sym_primary_expression, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(334),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(333),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(339),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(177),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(258),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(360),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(353),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(51),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(49),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35), SHIFT_REPEAT(103),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35), SHIFT_REPEAT(103),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35), SHIFT_REPEAT(107),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35), SHIFT_REPEAT(107),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 28),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_operator, 3, .production_id = 28),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 24),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_operator, 2, .production_id = 24),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 5),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2), SHIFT_REPEAT(368),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35), SHIFT_REPEAT(108),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 35), SHIFT_REPEAT(108),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7, .production_id = 33),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 17),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7, .production_id = 32),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, .production_id = 23),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 22),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 8, .production_id = 39),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 6),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2), SHIFT_REPEAT(54),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 19), SHIFT_REPEAT(313),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 19),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 1, .production_id = 12),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 2, .production_id = 19),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 38), SHIFT_REPEAT(376),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 38),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_instantiated_type, 3, .production_id = 20),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(409),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 19), SHIFT_REPEAT(300),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_instantiated_type, 4, .production_id = 30),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic, 1, .production_id = 11),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2), SHIFT_REPEAT(397),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 29),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 15),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 38), SHIFT_REPEAT(381),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(404),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(365),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 19), SHIFT_REPEAT(406),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 19),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__custom_generic_instantiated_type_repeat1, 2, .production_id = 37),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_header, 2, .production_id = 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 15),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2), SHIFT_REPEAT(37),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 31),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 10),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 9),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 8),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 5),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 14),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_name, 1, .production_id = 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 3), SHIFT(226),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 4),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 5),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(349),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_type, 2, .production_id = 13),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(203),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delclaration_array_type, 7),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_header, 3, .production_id = 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 4, .production_id = 21),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 1, .production_id = 7),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 3, .production_id = 14),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_type, 1),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 4),
  [811] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__custom_generic_type, 2, .production_id = 13), SHIFT(182),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
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
