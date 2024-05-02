#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 377
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 33
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 71

enum ts_symbol_identifiers {
  anon_sym_generic = 1,
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
  sym_imports = 69,
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
  sym_range = 88,
  sym_for = 89,
  sym_constant = 90,
  sym_block = 91,
  sym__parameters = 92,
  sym_var = 93,
  sym_parameter = 94,
  sym_variable = 95,
  sym_primary_expression = 96,
  sym_not_operator = 97,
  sym_boolean_operator = 98,
  sym_binary_operator = 99,
  sym_comparison_operator = 100,
  sym_parenthesized_expression = 101,
  sym_basis_type = 102,
  sym_array_type = 103,
  sym_delclaration_array_type = 104,
  sym_declaration_type = 105,
  sym__generic = 106,
  sym__generics = 107,
  sym__type_name = 108,
  sym__custom_type = 109,
  sym__custom_generic_type = 110,
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
  aux_sym_parameter_repeat1 = 128,
  aux_sym_comparison_operator_repeat1 = 129,
  aux_sym__generics_repeat1 = 130,
  aux_sym_variable_access_repeat1 = 131,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_generic] = "generic",
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
  [sym_delclaration_array_type] = "delclaration_array_type",
  [sym_declaration_type] = "declaration_type",
  [sym__generic] = "_generic",
  [sym__generics] = "_generics",
  [sym__type_name] = "_type_name",
  [sym__custom_type] = "_custom_type",
  [sym__custom_generic_type] = "_custom_generic_type",
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
  [sym_delclaration_array_type] = sym_delclaration_array_type,
  [sym_declaration_type] = sym_declaration_type,
  [sym__generic] = sym__generic,
  [sym__generics] = sym__generics,
  [sym__type_name] = sym__type_name,
  [sym__custom_type] = sym__custom_type,
  [sym__custom_generic_type] = sym__custom_generic_type,
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
  field_constants = 8,
  field_control = 9,
  field_default_value = 10,
  field_end = 11,
  field_field = 12,
  field_field_acces = 13,
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
  field_type = 28,
  field_type_name = 29,
  field_value = 30,
  field_var = 31,
  field_variables = 32,
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
  [field_constants] = "constants",
  [field_control] = "control",
  [field_default_value] = "default_value",
  [field_end] = "end",
  [field_field] = "field",
  [field_field_acces] = "field_acces",
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
  [field_type] = "type",
  [field_type_name] = "type_name",
  [field_value] = "value",
  [field_var] = "var",
  [field_variables] = "variables",
  [field_variant] = "variant",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 1},
  [13] = {.index = 18, .length = 3},
  [14] = {.index = 21, .length = 3},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 2},
  [17] = {.index = 28, .length = 2},
  [18] = {.index = 30, .length = 3},
  [19] = {.index = 33, .length = 1},
  [20] = {.index = 34, .length = 1},
  [21] = {.index = 35, .length = 2},
  [22] = {.index = 37, .length = 2},
  [23] = {.index = 39, .length = 2},
  [24] = {.index = 41, .length = 1},
  [25] = {.index = 42, .length = 2},
  [26] = {.index = 44, .length = 4},
  [27] = {.index = 48, .length = 4},
  [28] = {.index = 52, .length = 2},
  [29] = {.index = 54, .length = 4},
  [30] = {.index = 58, .length = 2},
  [31] = {.index = 60, .length = 2},
  [32] = {.index = 62, .length = 2},
  [33] = {.index = 64, .length = 2},
  [34] = {.index = 66, .length = 2},
  [35] = {.index = 68, .length = 2},
  [36] = {.index = 70, .length = 1},
  [37] = {.index = 71, .length = 2},
  [38] = {.index = 73, .length = 1},
  [39] = {.index = 74, .length = 1},
  [40] = {.index = 75, .length = 2},
  [41] = {.index = 77, .length = 3},
  [42] = {.index = 80, .length = 8},
  [43] = {.index = 88, .length = 2},
  [44] = {.index = 90, .length = 3},
  [45] = {.index = 93, .length = 3},
  [46] = {.index = 96, .length = 3},
  [47] = {.index = 99, .length = 4},
  [48] = {.index = 103, .length = 3},
  [49] = {.index = 106, .length = 1},
  [50] = {.index = 107, .length = 3},
  [51] = {.index = 110, .length = 2},
  [52] = {.index = 112, .length = 1},
  [53] = {.index = 113, .length = 2},
  [54] = {.index = 115, .length = 2},
  [55] = {.index = 117, .length = 1},
  [56] = {.index = 118, .length = 2},
  [57] = {.index = 120, .length = 2},
  [58] = {.index = 122, .length = 3},
  [59] = {.index = 125, .length = 4},
  [60] = {.index = 129, .length = 1},
  [61] = {.index = 130, .length = 3},
  [62] = {.index = 133, .length = 3},
  [63] = {.index = 136, .length = 4},
  [64] = {.index = 140, .length = 2},
  [65] = {.index = 142, .length = 1},
  [66] = {.index = 143, .length = 4},
  [67] = {.index = 147, .length = 2},
  [68] = {.index = 149, .length = 5},
  [69] = {.index = 154, .length = 4},
  [70] = {.index = 158, .length = 5},
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
    {field_type_name, 0},
  [5] =
    {field_field, 0},
  [6] =
    {field_type_name, 0, .inherited = true},
  [7] =
    {field_generic, 0, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [9] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [11] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [13] =
    {field_imports, 2},
    {field_module, 1},
  [15] =
    {field_name, 0},
    {field_parameters, 1},
  [17] =
    {field_function, 0},
  [18] =
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
    {field_variables, 2},
  [21] =
    {field_constants, 2},
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
  [24] =
    {field_name, 0, .inherited = true},
    {field_parameters, 0, .inherited = true},
  [26] =
    {field_name, 1},
    {field_value, 3},
  [28] =
    {field_reference, 0},
    {field_type_name, 1, .inherited = true},
  [30] =
    {field_generic, 1, .inherited = true},
    {field_reference, 0},
    {field_type_name, 1, .inherited = true},
  [33] =
    {field_generic, 0},
  [34] =
    {field_generic, 0, .inherited = true},
  [35] =
    {field_generic, 1, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [37] =
    {field_field, 3, .inherited = true},
    {field_name, 1},
  [39] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [41] =
    {field_generic, 1},
  [42] =
    {field_arguements, 1},
    {field_function, 0},
  [44] =
    {field_array_access, 1, .inherited = true},
    {field_field, 1, .inherited = true},
    {field_field_acces, 1, .inherited = true},
    {field_index, 1, .inherited = true},
  [48] =
    {field_constants, 3},
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
    {field_variables, 2},
  [52] =
    {field_function, 3},
    {field_name, 1},
  [54] =
    {field_name, 1},
    {field_name, 4, .inherited = true},
    {field_value, 3},
    {field_value, 4, .inherited = true},
  [58] =
    {field_name, 1},
    {field_type, 3},
  [60] =
    {field_name, 1},
    {field_variant, 4},
  [62] =
    {field_generic, 0, .inherited = true},
    {field_generic, 1, .inherited = true},
  [64] =
    {field_name, 1},
    {field_type, 0},
  [66] =
    {field_generic, 1},
    {field_generic, 2, .inherited = true},
  [68] =
    {field_field, 4, .inherited = true},
    {field_name, 1},
  [70] =
    {field_argument, 1},
  [71] =
    {field_body, 2},
    {field_condition, 1},
  [73] =
    {field_operators, 1, .inherited = true},
  [74] =
    {field_var, 0},
  [75] =
    {field_field, 1},
    {field_field_acces, 0},
  [77] =
    {field_arguements, 1},
    {field_arguements, 2},
    {field_function, 0},
  [80] =
    {field_array_access, 0, .inherited = true},
    {field_array_access, 1, .inherited = true},
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
    {field_field_acces, 0, .inherited = true},
    {field_field_acces, 1, .inherited = true},
    {field_index, 0, .inherited = true},
    {field_index, 1, .inherited = true},
  [88] =
    {field_left, 0},
    {field_right, 2},
  [90] =
    {field_function, 3},
    {field_name, 1},
    {field_variables, 4},
  [93] =
    {field_constants, 4},
    {field_function, 3},
    {field_name, 1},
  [96] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [99] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [103] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
    {field_type, 4},
  [106] =
    {field_variant, 1},
  [107] =
    {field_name, 1},
    {field_variant, 4},
    {field_variant, 5, .inherited = true},
  [110] =
    {field_variant, 0, .inherited = true},
    {field_variant, 1, .inherited = true},
  [112] =
    {field_generic, 1, .inherited = true},
  [113] =
    {field_control, 1},
    {field_range, 2},
  [115] =
    {field_body, 3},
    {field_condition, 2},
  [117] =
    {field_operators, 0},
  [118] =
    {field_operators, 0, .inherited = true},
    {field_operators, 1, .inherited = true},
  [120] =
    {field_condition, 1},
    {field_consequent, 3},
  [122] =
    {field_array_access, 0},
    {field_array_access, 2},
    {field_index, 1},
  [125] =
    {field_constants, 5},
    {field_function, 3},
    {field_name, 1},
    {field_variables, 4},
  [129] =
    {field_alternative, 0},
  [130] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequent, 3},
  [133] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequent, 3},
  [136] =
    {field_default_value, 3},
    {field_default_value, 4},
    {field_name, 0},
    {field_type, 2},
  [140] =
    {field_end, 3},
    {field_start, 1},
  [142] =
    {field_body, 1},
  [143] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequent, 3},
  [147] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [149] =
    {field_default_value, 4},
    {field_default_value, 5},
    {field_name, 0},
    {field_name, 1},
    {field_type, 3},
  [154] =
    {field_default_value, 4},
    {field_default_value, 5},
    {field_name, 1},
    {field_type, 3},
  [158] =
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
  [13] = 13,
  [14] = 3,
  [15] = 2,
  [16] = 4,
  [17] = 4,
  [18] = 3,
  [19] = 19,
  [20] = 5,
  [21] = 6,
  [22] = 5,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 6,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 30,
  [34] = 34,
  [35] = 31,
  [36] = 29,
  [37] = 34,
  [38] = 38,
  [39] = 34,
  [40] = 27,
  [41] = 29,
  [42] = 42,
  [43] = 43,
  [44] = 32,
  [45] = 27,
  [46] = 32,
  [47] = 47,
  [48] = 31,
  [49] = 49,
  [50] = 9,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 8,
  [55] = 7,
  [56] = 7,
  [57] = 57,
  [58] = 52,
  [59] = 53,
  [60] = 10,
  [61] = 52,
  [62] = 62,
  [63] = 62,
  [64] = 8,
  [65] = 53,
  [66] = 10,
  [67] = 67,
  [68] = 68,
  [69] = 9,
  [70] = 70,
  [71] = 30,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 62,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 76,
  [82] = 80,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 89,
  [92] = 90,
  [93] = 87,
  [94] = 94,
  [95] = 86,
  [96] = 96,
  [97] = 89,
  [98] = 85,
  [99] = 88,
  [100] = 85,
  [101] = 101,
  [102] = 96,
  [103] = 87,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 96,
  [112] = 88,
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
  [138] = 49,
  [139] = 139,
  [140] = 124,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 74,
  [145] = 135,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 109,
  [151] = 151,
  [152] = 152,
  [153] = 135,
  [154] = 154,
  [155] = 124,
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
  [167] = 109,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 175,
  [177] = 177,
  [178] = 173,
  [179] = 174,
  [180] = 180,
  [181] = 181,
  [182] = 171,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 193,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 186,
  [203] = 190,
  [204] = 106,
  [205] = 185,
  [206] = 191,
  [207] = 108,
  [208] = 181,
  [209] = 201,
  [210] = 193,
  [211] = 211,
  [212] = 189,
  [213] = 213,
  [214] = 214,
  [215] = 117,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 175,
  [221] = 173,
  [222] = 171,
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
  [234] = 129,
  [235] = 235,
  [236] = 236,
  [237] = 232,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 181,
  [242] = 229,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 240,
  [248] = 229,
  [249] = 240,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 238,
  [255] = 109,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 236,
  [262] = 174,
  [263] = 259,
  [264] = 264,
  [265] = 258,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 250,
  [275] = 251,
  [276] = 276,
  [277] = 277,
  [278] = 252,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 273,
  [287] = 269,
  [288] = 277,
  [289] = 289,
  [290] = 290,
  [291] = 271,
  [292] = 292,
  [293] = 272,
  [294] = 276,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 292,
  [300] = 300,
  [301] = 301,
  [302] = 250,
  [303] = 251,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
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
  [337] = 332,
  [338] = 312,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 308,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 313,
  [353] = 310,
  [354] = 343,
  [355] = 312,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 308,
  [360] = 360,
  [361] = 361,
  [362] = 312,
  [363] = 349,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 322,
  [369] = 319,
  [370] = 318,
  [371] = 371,
  [372] = 372,
  [373] = 345,
  [374] = 335,
  [375] = 336,
  [376] = 334,
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
      if (eof) ADVANCE(137);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(134);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '+') ADVANCE(181);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '<') ADVANCE(186);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == ']') ADVANCE(143);
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
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(57);
      if (lookahead == '{') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(134);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(213);
      if (lookahead == '{') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(263);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(134);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 't') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(263);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(134);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 't') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(263);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(196);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == 'v') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(263);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '{') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(263);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(154);
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
      if (lookahead == 'a') ADVANCE(131);
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
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(263);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(122);
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
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(129);
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
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 'w') ADVANCE(230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(263);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(165);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 'w') ADVANCE(230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(263);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(252);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(263);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(201);
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
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(97);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(117);
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
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(169);
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
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(207);
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
      if (lookahead == 'o') ADVANCE(118);
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
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(197);
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
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(121);
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
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 131:
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 132:
      if (lookahead == '}') ADVANCE(209);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 134:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(5);
      END_STATE();
    case 135:
      if (eof) ADVANCE(137);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '+') ADVANCE(181);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(186);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == ']') ADVANCE(143);
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
          lookahead == ' ') SKIP(135)
      END_STATE();
    case 136:
      if (eof) ADVANCE(137);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == 'v') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(136)
      END_STATE();
    case 137:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_generic);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_elsif);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_from);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_constants);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(154);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_mod);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(133);
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
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_real);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_string);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_array);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
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
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
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
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(233);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(263);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(262);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(263);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(246);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(263);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(258);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(263);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'f') ADVANCE(224);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(263);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(266);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(268);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(244);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(215);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(229);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(227);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(214);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(249);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(248);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(163);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(166);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(202);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(225);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(231);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(236);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(238);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(256);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(200);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(255);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(219);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(170);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(228);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(260);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(257);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(208);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(237);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(247);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(223);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(261);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(161);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(151);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(198);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(254);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(232);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(212);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(242);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(251);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(210);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(222);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(217);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(178);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(156);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(250);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(221);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(216);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(204);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(263);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 136},
  [2] = {.lex_state = 135},
  [3] = {.lex_state = 135},
  [4] = {.lex_state = 135},
  [5] = {.lex_state = 135},
  [6] = {.lex_state = 135},
  [7] = {.lex_state = 135},
  [8] = {.lex_state = 135},
  [9] = {.lex_state = 135},
  [10] = {.lex_state = 135},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 3},
  [19] = {.lex_state = 136},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 136},
  [24] = {.lex_state = 136},
  [25] = {.lex_state = 136},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 135},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 53, .external_lex_state = 4},
  [52] = {.lex_state = 53, .external_lex_state = 4},
  [53] = {.lex_state = 53, .external_lex_state = 4},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 53, .external_lex_state = 4},
  [59] = {.lex_state = 53, .external_lex_state = 4},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 53, .external_lex_state = 4},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 53, .external_lex_state = 4},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 15, .external_lex_state = 4},
  [68] = {.lex_state = 15, .external_lex_state = 4},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 15, .external_lex_state = 4},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 135},
  [75] = {.lex_state = 0, .external_lex_state = 3},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 15},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 15},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 48, .external_lex_state = 4},
  [106] = {.lex_state = 136},
  [107] = {.lex_state = 48, .external_lex_state = 4},
  [108] = {.lex_state = 136},
  [109] = {.lex_state = 136},
  [110] = {.lex_state = 48, .external_lex_state = 4},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 136},
  [114] = {.lex_state = 136},
  [115] = {.lex_state = 136},
  [116] = {.lex_state = 136},
  [117] = {.lex_state = 136},
  [118] = {.lex_state = 136},
  [119] = {.lex_state = 136},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 136},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 136},
  [125] = {.lex_state = 136},
  [126] = {.lex_state = 136},
  [127] = {.lex_state = 136},
  [128] = {.lex_state = 136},
  [129] = {.lex_state = 136},
  [130] = {.lex_state = 136},
  [131] = {.lex_state = 136},
  [132] = {.lex_state = 136},
  [133] = {.lex_state = 136},
  [134] = {.lex_state = 136},
  [135] = {.lex_state = 136},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 136},
  [138] = {.lex_state = 0, .external_lex_state = 3},
  [139] = {.lex_state = 48, .external_lex_state = 4},
  [140] = {.lex_state = 48, .external_lex_state = 4},
  [141] = {.lex_state = 136, .external_lex_state = 3},
  [142] = {.lex_state = 136, .external_lex_state = 3},
  [143] = {.lex_state = 136, .external_lex_state = 3},
  [144] = {.lex_state = 0, .external_lex_state = 3},
  [145] = {.lex_state = 48, .external_lex_state = 4},
  [146] = {.lex_state = 136, .external_lex_state = 3},
  [147] = {.lex_state = 48, .external_lex_state = 4},
  [148] = {.lex_state = 15, .external_lex_state = 4},
  [149] = {.lex_state = 15, .external_lex_state = 4},
  [150] = {.lex_state = 15, .external_lex_state = 4},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 53, .external_lex_state = 4},
  [153] = {.lex_state = 53, .external_lex_state = 4},
  [154] = {.lex_state = 53, .external_lex_state = 4},
  [155] = {.lex_state = 53, .external_lex_state = 4},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 53, .external_lex_state = 4},
  [161] = {.lex_state = 53, .external_lex_state = 4},
  [162] = {.lex_state = 53, .external_lex_state = 4},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 53, .external_lex_state = 4},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 53, .external_lex_state = 4},
  [167] = {.lex_state = 53, .external_lex_state = 4},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 136, .external_lex_state = 3},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0, .external_lex_state = 3},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0, .external_lex_state = 3},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0, .external_lex_state = 3},
  [181] = {.lex_state = 7, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0, .external_lex_state = 3},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 0, .external_lex_state = 3},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 136},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 3},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 3},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 3},
  [215] = {.lex_state = 136, .external_lex_state = 3},
  [216] = {.lex_state = 136, .external_lex_state = 3},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 136, .external_lex_state = 3},
  [219] = {.lex_state = 136},
  [220] = {.lex_state = 0, .external_lex_state = 3},
  [221] = {.lex_state = 0, .external_lex_state = 3},
  [222] = {.lex_state = 0, .external_lex_state = 3},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 136, .external_lex_state = 3},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 136},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 136, .external_lex_state = 3},
  [235] = {.lex_state = 136},
  [236] = {.lex_state = 7},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 136, .external_lex_state = 3},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 7},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 7, .external_lex_state = 2},
  [253] = {.lex_state = 136},
  [254] = {.lex_state = 136},
  [255] = {.lex_state = 136, .external_lex_state = 3},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 136},
  [259] = {.lex_state = 136},
  [260] = {.lex_state = 136},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 3},
  [263] = {.lex_state = 136},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 136},
  [266] = {.lex_state = 0, .external_lex_state = 3},
  [267] = {.lex_state = 7},
  [268] = {.lex_state = 7},
  [269] = {.lex_state = 7},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 54},
  [275] = {.lex_state = 54},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 0, .external_lex_state = 2},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 0, .external_lex_state = 3},
  [280] = {.lex_state = 0, .external_lex_state = 2},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 7},
  [284] = {.lex_state = 0, .external_lex_state = 3},
  [285] = {.lex_state = 0, .external_lex_state = 3},
  [286] = {.lex_state = 7},
  [287] = {.lex_state = 7},
  [288] = {.lex_state = 7},
  [289] = {.lex_state = 7},
  [290] = {.lex_state = 0, .external_lex_state = 2},
  [291] = {.lex_state = 7},
  [292] = {.lex_state = 7},
  [293] = {.lex_state = 7},
  [294] = {.lex_state = 7},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0, .external_lex_state = 2},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0, .external_lex_state = 2},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 7},
  [305] = {.lex_state = 136},
  [306] = {.lex_state = 0, .external_lex_state = 2},
  [307] = {.lex_state = 0, .external_lex_state = 3},
  [308] = {.lex_state = 7},
  [309] = {.lex_state = 7},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0, .external_lex_state = 2},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 7},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 7},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 7},
  [323] = {.lex_state = 7},
  [324] = {.lex_state = 7},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 7},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 7},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 7},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 7},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 7},
  [338] = {.lex_state = 0, .external_lex_state = 2},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 135},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 7},
  [345] = {.lex_state = 7},
  [346] = {.lex_state = 7},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 7},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 7},
  [351] = {.lex_state = 7},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0, .external_lex_state = 2},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0, .external_lex_state = 3},
  [359] = {.lex_state = 7},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0, .external_lex_state = 2},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0, .external_lex_state = 3},
  [366] = {.lex_state = 7},
  [367] = {.lex_state = 7},
  [368] = {.lex_state = 7},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 7},
  [372] = {.lex_state = 7},
  [373] = {.lex_state = 7},
  [374] = {.lex_state = 7},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_generic] = ACTIONS(1),
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
    [sym_program] = STATE(327),
    [sym_enum] = STATE(24),
    [sym_record] = STATE(24),
    [sym_export] = STATE(24),
    [sym_import] = STATE(24),
    [sym_module] = STATE(23),
    [sym_function_definition] = STATE(24),
    [sym_test] = STATE(24),
    [sym_constant] = STATE(24),
    [sym_variable] = STATE(24),
    [aux_sym_program_repeat1] = STATE(24),
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
  [82] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 24,
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
  [122] = 2,
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
  [156] = 2,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 27,
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
  [190] = 2,
    ACTIONS(55), 2,
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
  [221] = 2,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 24,
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
  [252] = 3,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(61), 21,
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
  [285] = 2,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 24,
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
    ACTIONS(41), 1,
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
    STATE(30), 1,
      sym_primary_expression,
    STATE(57), 1,
      sym_variable_access,
    STATE(168), 1,
      sym_expression,
    STATE(194), 1,
      sym_argument,
    ACTIONS(77), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(55), 2,
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
    STATE(182), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [376] = 5,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DOT,
    STATE(18), 1,
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
  [406] = 12,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_var,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(30), 1,
      sym_primary_expression,
    STATE(57), 1,
      sym_variable_access,
    STATE(168), 1,
      sym_expression,
    STATE(224), 1,
      sym_argument,
    STATE(55), 2,
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
    STATE(182), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [450] = 5,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DOT,
    STATE(14), 1,
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
  [480] = 5,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOT,
    STATE(14), 1,
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
  [510] = 5,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 14,
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
  [540] = 5,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 14,
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
  [570] = 5,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      anon_sym_DOT,
    STATE(18), 1,
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
  [639] = 2,
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
  [662] = 2,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 16,
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
  [685] = 2,
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
  [708] = 10,
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
    STATE(19), 9,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_test,
      sym_constant,
      sym_variable,
      aux_sym_program_repeat1,
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
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 16,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(33), 1,
      sym_primary_expression,
    STATE(249), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(171), 3,
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
    STATE(30), 1,
      sym_primary_expression,
    STATE(198), 1,
      sym_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(55), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(182), 3,
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
    STATE(33), 1,
      sym_primary_expression,
    STATE(173), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(171), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [956] = 6,
    STATE(99), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(145), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(141), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [986] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(33), 1,
      sym_primary_expression,
    STATE(179), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(171), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1022] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(33), 1,
      sym_primary_expression,
    STATE(242), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(171), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1058] = 6,
    STATE(88), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(151), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(141), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [1088] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(33), 1,
      sym_primary_expression,
    STATE(176), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(171), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1124] = 9,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(30), 1,
      sym_primary_expression,
    STATE(174), 1,
      sym_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(55), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(182), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1160] = 9,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_not,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    STATE(221), 1,
      sym_expression,
    ACTIONS(161), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(163), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(56), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(222), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1196] = 9,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_not,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    STATE(220), 1,
      sym_expression,
    ACTIONS(161), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(163), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(56), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(222), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1232] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(33), 1,
      sym_primary_expression,
    STATE(243), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(171), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1268] = 9,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(30), 1,
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
    STATE(55), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(182), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1304] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(33), 1,
      sym_primary_expression,
    STATE(247), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(171), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1340] = 9,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(30), 1,
      sym_primary_expression,
    STATE(178), 1,
      sym_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(55), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(182), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1376] = 9,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_not,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    STATE(184), 1,
      sym_expression,
    ACTIONS(161), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(163), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(56), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(222), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1412] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(33), 1,
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
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(171), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1448] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(33), 1,
      sym_primary_expression,
    STATE(229), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(171), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1484] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(33), 1,
      sym_primary_expression,
    STATE(240), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(171), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1520] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(33), 1,
      sym_primary_expression,
    STATE(248), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(171), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1556] = 9,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_not,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    STATE(188), 1,
      sym_expression,
    ACTIONS(161), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(163), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(56), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(222), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1592] = 9,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_not,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(71), 1,
      sym_primary_expression,
    STATE(262), 1,
      sym_expression,
    ACTIONS(161), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(163), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(56), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(222), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1628] = 5,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_constant_repeat1,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(167), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [1655] = 3,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(61), 11,
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
  [1678] = 9,
    ACTIONS(173), 1,
      anon_sym_for,
    ACTIONS(176), 1,
      anon_sym_repeat,
    ACTIONS(179), 1,
      anon_sym_while,
    ACTIONS(182), 1,
      anon_sym_if,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(188), 1,
      sym__dedent,
    STATE(341), 1,
      sym_variable_access,
    STATE(213), 2,
      sym_call_statement,
      sym_assignment,
    STATE(51), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [1713] = 9,
    ACTIONS(190), 1,
      anon_sym_for,
    ACTIONS(192), 1,
      anon_sym_repeat,
    ACTIONS(194), 1,
      anon_sym_while,
    ACTIONS(196), 1,
      anon_sym_if,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      sym__dedent,
    STATE(341), 1,
      sym_variable_access,
    STATE(213), 2,
      sym_call_statement,
      sym_assignment,
    STATE(51), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [1748] = 9,
    ACTIONS(190), 1,
      anon_sym_for,
    ACTIONS(192), 1,
      anon_sym_repeat,
    ACTIONS(194), 1,
      anon_sym_while,
    ACTIONS(196), 1,
      anon_sym_if,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(202), 1,
      sym__dedent,
    STATE(341), 1,
      sym_variable_access,
    STATE(213), 2,
      sym_call_statement,
      sym_assignment,
    STATE(58), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [1783] = 2,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 14,
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
  [1804] = 2,
    ACTIONS(55), 2,
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
  [1825] = 2,
    ACTIONS(55), 2,
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
  [1846] = 3,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(204), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
    ACTIONS(53), 11,
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
  [1869] = 9,
    ACTIONS(190), 1,
      anon_sym_for,
    ACTIONS(192), 1,
      anon_sym_repeat,
    ACTIONS(194), 1,
      anon_sym_while,
    ACTIONS(196), 1,
      anon_sym_if,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__dedent,
    STATE(341), 1,
      sym_variable_access,
    STATE(213), 2,
      sym_call_statement,
      sym_assignment,
    STATE(51), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [1904] = 9,
    ACTIONS(190), 1,
      anon_sym_for,
    ACTIONS(192), 1,
      anon_sym_repeat,
    ACTIONS(194), 1,
      anon_sym_while,
    ACTIONS(196), 1,
      anon_sym_if,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(209), 1,
      sym__dedent,
    STATE(341), 1,
      sym_variable_access,
    STATE(213), 2,
      sym_call_statement,
      sym_assignment,
    STATE(52), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [1939] = 2,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 14,
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
  [1960] = 9,
    ACTIONS(190), 1,
      anon_sym_for,
    ACTIONS(192), 1,
      anon_sym_repeat,
    ACTIONS(194), 1,
      anon_sym_while,
    ACTIONS(196), 1,
      anon_sym_if,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym__dedent,
    STATE(341), 1,
      sym_variable_access,
    STATE(213), 2,
      sym_call_statement,
      sym_assignment,
    STATE(51), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [1995] = 4,
    ACTIONS(145), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(213), 9,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [2020] = 4,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(213), 9,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2045] = 2,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 14,
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
  [2066] = 9,
    ACTIONS(190), 1,
      anon_sym_for,
    ACTIONS(192), 1,
      anon_sym_repeat,
    ACTIONS(194), 1,
      anon_sym_while,
    ACTIONS(196), 1,
      anon_sym_if,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(217), 1,
      sym__dedent,
    STATE(341), 1,
      sym_variable_access,
    STATE(213), 2,
      sym_call_statement,
      sym_assignment,
    STATE(61), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [2101] = 2,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 14,
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
  [2122] = 13,
    ACTIONS(221), 1,
      anon_sym_real,
    ACTIONS(223), 1,
      anon_sym_array,
    ACTIONS(225), 1,
      sym_refersTo,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      sym__dedent,
    STATE(70), 1,
      aux_sym_record_repeat1,
    STATE(149), 1,
      sym_record_item,
    STATE(241), 1,
      sym__type_name,
    STATE(286), 1,
      sym__custom_type,
    STATE(288), 1,
      sym__custom_generic_type,
    STATE(351), 1,
      sym_type,
    ACTIONS(219), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(283), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2165] = 13,
    ACTIONS(221), 1,
      anon_sym_real,
    ACTIONS(223), 1,
      anon_sym_array,
    ACTIONS(225), 1,
      sym_refersTo,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym__dedent,
    STATE(70), 1,
      aux_sym_record_repeat1,
    STATE(149), 1,
      sym_record_item,
    STATE(241), 1,
      sym__type_name,
    STATE(286), 1,
      sym__custom_type,
    STATE(288), 1,
      sym__custom_generic_type,
    STATE(351), 1,
      sym_type,
    ACTIONS(219), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(283), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2208] = 3,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(61), 11,
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
  [2231] = 13,
    ACTIONS(236), 1,
      anon_sym_real,
    ACTIONS(239), 1,
      anon_sym_array,
    ACTIONS(242), 1,
      sym_refersTo,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(248), 1,
      sym__dedent,
    STATE(70), 1,
      aux_sym_record_repeat1,
    STATE(149), 1,
      sym_record_item,
    STATE(241), 1,
      sym__type_name,
    STATE(286), 1,
      sym__custom_type,
    STATE(288), 1,
      sym__custom_generic_type,
    STATE(351), 1,
      sym_type,
    ACTIONS(233), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(283), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2274] = 6,
    STATE(112), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(252), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(254), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(171), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(250), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2302] = 12,
    ACTIONS(221), 1,
      anon_sym_real,
    ACTIONS(223), 1,
      anon_sym_array,
    ACTIONS(225), 1,
      sym_refersTo,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(67), 1,
      aux_sym_record_repeat1,
    STATE(149), 1,
      sym_record_item,
    STATE(241), 1,
      sym__type_name,
    STATE(286), 1,
      sym__custom_type,
    STATE(288), 1,
      sym__custom_generic_type,
    STATE(351), 1,
      sym_type,
    ACTIONS(219), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(283), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2342] = 12,
    ACTIONS(221), 1,
      anon_sym_real,
    ACTIONS(223), 1,
      anon_sym_array,
    ACTIONS(225), 1,
      sym_refersTo,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(68), 1,
      aux_sym_record_repeat1,
    STATE(149), 1,
      sym_record_item,
    STATE(241), 1,
      sym__type_name,
    STATE(286), 1,
      sym__custom_type,
    STATE(288), 1,
      sym__custom_generic_type,
    STATE(351), 1,
      sym_type,
    ACTIONS(219), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(283), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2382] = 3,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 3,
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
  [2404] = 4,
    ACTIONS(215), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(252), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(171), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(213), 7,
      sym__indent,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2427] = 10,
    ACTIONS(260), 1,
      anon_sym_real,
    ACTIONS(262), 1,
      anon_sym_array,
    ACTIONS(264), 1,
      sym_refersTo,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(181), 1,
      sym__type_name,
    STATE(185), 1,
      sym_declaration_type,
    STATE(273), 1,
      sym__custom_type,
    STATE(277), 1,
      sym__custom_generic_type,
    ACTIONS(258), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(290), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2461] = 10,
    ACTIONS(223), 1,
      anon_sym_array,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_real,
    ACTIONS(272), 1,
      sym_refersTo,
    STATE(208), 1,
      sym__type_name,
    STATE(286), 1,
      sym__custom_type,
    STATE(288), 1,
      sym__custom_generic_type,
    STATE(317), 1,
      sym_type,
    ACTIONS(268), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(283), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2495] = 10,
    ACTIONS(223), 1,
      anon_sym_array,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_real,
    ACTIONS(272), 1,
      sym_refersTo,
    STATE(208), 1,
      sym__type_name,
    STATE(286), 1,
      sym__custom_type,
    STATE(288), 1,
      sym__custom_generic_type,
    STATE(329), 1,
      sym_type,
    ACTIONS(268), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(283), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2529] = 10,
    ACTIONS(223), 1,
      anon_sym_array,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_real,
    ACTIONS(272), 1,
      sym_refersTo,
    STATE(208), 1,
      sym__type_name,
    STATE(286), 1,
      sym__custom_type,
    STATE(288), 1,
      sym__custom_generic_type,
    STATE(325), 1,
      sym_type,
    ACTIONS(268), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(283), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2563] = 10,
    ACTIONS(260), 1,
      anon_sym_real,
    ACTIONS(262), 1,
      anon_sym_array,
    ACTIONS(264), 1,
      sym_refersTo,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(181), 1,
      sym__type_name,
    STATE(189), 1,
      sym_declaration_type,
    STATE(273), 1,
      sym__custom_type,
    STATE(277), 1,
      sym__custom_generic_type,
    ACTIONS(258), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(290), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2597] = 10,
    ACTIONS(260), 1,
      anon_sym_real,
    ACTIONS(262), 1,
      anon_sym_array,
    ACTIONS(264), 1,
      sym_refersTo,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(181), 1,
      sym__type_name,
    STATE(205), 1,
      sym_declaration_type,
    STATE(273), 1,
      sym__custom_type,
    STATE(277), 1,
      sym__custom_generic_type,
    ACTIONS(258), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(290), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2631] = 10,
    ACTIONS(260), 1,
      anon_sym_real,
    ACTIONS(262), 1,
      anon_sym_array,
    ACTIONS(264), 1,
      sym_refersTo,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(181), 1,
      sym__type_name,
    STATE(212), 1,
      sym_declaration_type,
    STATE(273), 1,
      sym__custom_type,
    STATE(277), 1,
      sym__custom_generic_type,
    ACTIONS(258), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(290), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2665] = 10,
    ACTIONS(223), 1,
      anon_sym_array,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_real,
    ACTIONS(272), 1,
      sym_refersTo,
    STATE(208), 1,
      sym__type_name,
    STATE(286), 1,
      sym__custom_type,
    STATE(288), 1,
      sym__custom_generic_type,
    STATE(356), 1,
      sym_type,
    ACTIONS(268), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(283), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2699] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(120), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(55), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2724] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(62), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(55), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2749] = 6,
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
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2774] = 6,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(10), 1,
      sym_primary_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2799] = 4,
    STATE(96), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(155), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 4,
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
  [2820] = 6,
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
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2845] = 6,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(49), 1,
      sym_primary_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2870] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(69), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(55), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2895] = 6,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(138), 1,
      sym_primary_expression,
    ACTIONS(161), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(163), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(56), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2920] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(60), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(55), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2945] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(136), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(55), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2970] = 6,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(144), 1,
      sym_primary_expression,
    ACTIONS(161), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(163), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(56), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2995] = 4,
    STATE(96), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(281), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(279), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [3016] = 6,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(50), 1,
      sym_primary_expression,
    ACTIONS(161), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(163), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(56), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3041] = 6,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(75), 1,
      sym_primary_expression,
    ACTIONS(161), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(163), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(56), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3066] = 4,
    STATE(102), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 4,
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
  [3087] = 6,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(63), 1,
      sym_primary_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3112] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(123), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(55), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3137] = 4,
    STATE(102), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(287), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(284), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(279), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3158] = 6,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(66), 1,
      sym_primary_expression,
    ACTIONS(161), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(163), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(56), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3183] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(122), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(55), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3208] = 7,
    ACTIONS(292), 1,
      anon_sym_elsif,
    ACTIONS(294), 1,
      anon_sym_else,
    ACTIONS(296), 1,
      sym__dedent,
    STATE(110), 1,
      aux_sym_if_then_statement_repeat1,
    STATE(147), 1,
      sym_elsif,
    STATE(161), 1,
      sym_else,
    ACTIONS(290), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3234] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(108), 1,
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
  [3252] = 7,
    ACTIONS(292), 1,
      anon_sym_elsif,
    ACTIONS(294), 1,
      anon_sym_else,
    ACTIONS(302), 1,
      sym__dedent,
    STATE(105), 1,
      aux_sym_if_then_statement_repeat1,
    STATE(147), 1,
      sym_elsif,
    STATE(164), 1,
      sym_else,
    ACTIONS(300), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3278] = 3,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_constant_repeat1,
    ACTIONS(304), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3296] = 1,
    ACTIONS(309), 11,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_RPAREN,
      anon_sym_constants,
      anon_sym_SEMI,
      anon_sym_variables,
  [3310] = 5,
    ACTIONS(313), 1,
      anon_sym_elsif,
    ACTIONS(316), 1,
      sym__dedent,
    STATE(110), 1,
      aux_sym_if_then_statement_repeat1,
    STATE(147), 1,
      sym_elsif,
    ACTIONS(311), 6,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
  [3331] = 4,
    STATE(111), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(321), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(318), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3350] = 4,
    STATE(111), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(254), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(250), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3369] = 1,
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
  [3381] = 1,
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
  [3393] = 1,
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
  [3405] = 1,
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
  [3417] = 1,
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
  [3429] = 1,
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
  [3441] = 1,
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
  [3453] = 5,
    ACTIONS(338), 1,
      aux_sym_comment_token1,
    ACTIONS(340), 1,
      sym__newline,
    ACTIONS(145), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(298), 2,
      sym_comment,
      sym__end_line,
    ACTIONS(147), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
  [3473] = 1,
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
  [3485] = 5,
    ACTIONS(338), 1,
      aux_sym_comment_token1,
    ACTIONS(344), 1,
      sym__newline,
    ACTIONS(145), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(270), 2,
      sym_comment,
      sym__end_line,
    ACTIONS(147), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
  [3505] = 5,
    ACTIONS(338), 1,
      aux_sym_comment_token1,
    ACTIONS(346), 1,
      sym__newline,
    ACTIONS(145), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(282), 2,
      sym_comment,
      sym__end_line,
    ACTIONS(147), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
  [3525] = 1,
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
  [3537] = 1,
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
  [3549] = 1,
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
  [3561] = 1,
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
  [3573] = 1,
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
  [3585] = 1,
    ACTIONS(358), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3597] = 1,
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
  [3609] = 1,
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
  [3621] = 1,
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
  [3633] = 1,
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
  [3645] = 1,
    ACTIONS(368), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3657] = 1,
    ACTIONS(370), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3669] = 5,
    ACTIONS(338), 1,
      aux_sym_comment_token1,
    ACTIONS(372), 1,
      sym__newline,
    ACTIONS(145), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(281), 2,
      sym_comment,
      sym__end_line,
    ACTIONS(147), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
  [3689] = 1,
    ACTIONS(374), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3701] = 5,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_constant_repeat1,
    ACTIONS(167), 2,
      sym__indent,
      anon_sym_constants,
    ACTIONS(252), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(171), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
  [3721] = 2,
    ACTIONS(380), 1,
      sym__dedent,
    ACTIONS(378), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [3734] = 2,
    ACTIONS(348), 1,
      sym__dedent,
    ACTIONS(382), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [3747] = 6,
    ACTIONS(384), 1,
      anon_sym_constants,
    ACTIONS(386), 1,
      anon_sym_variables,
    ACTIONS(388), 1,
      sym__indent,
    STATE(133), 1,
      sym_block,
    STATE(169), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
    STATE(170), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [3768] = 6,
    ACTIONS(384), 1,
      anon_sym_constants,
    ACTIONS(386), 1,
      anon_sym_variables,
    ACTIONS(388), 1,
      sym__indent,
    STATE(137), 1,
      sym_block,
    STATE(141), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(180), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3789] = 6,
    ACTIONS(384), 1,
      anon_sym_constants,
    ACTIONS(386), 1,
      anon_sym_variables,
    ACTIONS(388), 1,
      sym__indent,
    STATE(118), 1,
      sym_block,
    STATE(170), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(177), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3810] = 3,
    ACTIONS(252), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(171), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(256), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [3825] = 2,
    ACTIONS(370), 1,
      sym__dedent,
    ACTIONS(390), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [3838] = 6,
    ACTIONS(384), 1,
      anon_sym_constants,
    ACTIONS(386), 1,
      anon_sym_variables,
    ACTIONS(388), 1,
      sym__indent,
    STATE(131), 1,
      sym_block,
    STATE(143), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(172), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3859] = 2,
    ACTIONS(394), 1,
      sym__dedent,
    ACTIONS(392), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [3872] = 2,
    ACTIONS(398), 1,
      sym__dedent,
    ACTIONS(396), 6,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
      sym_refersTo,
      sym_identifier,
  [3884] = 2,
    ACTIONS(402), 1,
      sym__dedent,
    ACTIONS(400), 6,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
      sym_refersTo,
      sym_identifier,
  [3896] = 2,
    ACTIONS(309), 1,
      sym__dedent,
    ACTIONS(404), 6,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
      sym_refersTo,
      sym_identifier,
  [3908] = 5,
    ACTIONS(338), 1,
      aux_sym_comment_token1,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      sym__newline,
    STATE(159), 1,
      aux_sym_export_repeat1,
    STATE(126), 2,
      sym_comment,
      sym__end_line,
  [3925] = 2,
    ACTIONS(412), 1,
      sym__dedent,
    ACTIONS(410), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3936] = 2,
    ACTIONS(370), 1,
      sym__dedent,
    ACTIONS(390), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3947] = 2,
    ACTIONS(416), 1,
      sym__dedent,
    ACTIONS(414), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3958] = 2,
    ACTIONS(348), 1,
      sym__dedent,
    ACTIONS(382), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3969] = 6,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 1,
      anon_sym_var,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(226), 1,
      sym_parameter,
    STATE(344), 1,
      sym_var,
    STATE(347), 1,
      sym__parameters,
  [3988] = 4,
    ACTIONS(424), 1,
      anon_sym_generic,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(428), 1,
      sym__newline,
    STATE(225), 3,
      sym_generics,
      sym_comment,
      sym__end_line,
  [4003] = 5,
    ACTIONS(338), 1,
      aux_sym_comment_token1,
    ACTIONS(430), 1,
      anon_sym_LBRACK,
    ACTIONS(432), 1,
      sym__newline,
    STATE(196), 1,
      sym_imports,
    STATE(113), 2,
      sym_comment,
      sym__end_line,
  [4020] = 5,
    ACTIONS(338), 1,
      aux_sym_comment_token1,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      sym__newline,
    STATE(203), 1,
      aux_sym_export_repeat1,
    STATE(134), 2,
      sym_comment,
      sym__end_line,
  [4037] = 2,
    ACTIONS(438), 1,
      sym__dedent,
    ACTIONS(436), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [4048] = 2,
    ACTIONS(442), 1,
      sym__dedent,
    ACTIONS(440), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [4059] = 2,
    ACTIONS(446), 1,
      sym__dedent,
    ACTIONS(444), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [4070] = 5,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      sym__newline,
    STATE(165), 1,
      aux_sym_generics_repeat1,
    STATE(216), 2,
      sym_comment,
      sym__end_line,
  [4087] = 2,
    ACTIONS(454), 1,
      sym__dedent,
    ACTIONS(452), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [4098] = 5,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      sym__newline,
    STATE(199), 1,
      aux_sym_generics_repeat1,
    STATE(239), 2,
      sym_comment,
      sym__end_line,
  [4115] = 2,
    ACTIONS(460), 1,
      sym__dedent,
    ACTIONS(458), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [4126] = 2,
    ACTIONS(309), 1,
      sym__dedent,
    ACTIONS(404), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [4137] = 3,
    ACTIONS(464), 1,
      anon_sym_and,
    ACTIONS(466), 1,
      anon_sym_or,
    ACTIONS(462), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4149] = 4,
    ACTIONS(384), 1,
      anon_sym_constants,
    ACTIONS(388), 1,
      sym__indent,
    STATE(132), 1,
      sym_block,
    STATE(214), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4163] = 3,
    ACTIONS(470), 1,
      anon_sym_variables,
    ACTIONS(468), 2,
      sym__indent,
      anon_sym_constants,
    STATE(170), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [4175] = 1,
    ACTIONS(141), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [4183] = 4,
    ACTIONS(384), 1,
      anon_sym_constants,
    ACTIONS(388), 1,
      sym__indent,
    STATE(115), 1,
      sym_block,
    STATE(214), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4197] = 2,
    ACTIONS(475), 1,
      anon_sym_and,
    ACTIONS(473), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_or,
  [4207] = 1,
    ACTIONS(477), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4215] = 1,
    ACTIONS(473), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4223] = 1,
    ACTIONS(473), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [4231] = 4,
    ACTIONS(384), 1,
      anon_sym_constants,
    ACTIONS(388), 1,
      sym__indent,
    STATE(121), 1,
      sym_block,
    STATE(214), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4245] = 2,
    ACTIONS(464), 1,
      anon_sym_and,
    ACTIONS(473), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_or,
      aux_sym_comment_token1,
  [4255] = 1,
    ACTIONS(477), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [4263] = 4,
    ACTIONS(384), 1,
      anon_sym_constants,
    ACTIONS(388), 1,
      sym__indent,
    STATE(128), 1,
      sym_block,
    STATE(214), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4277] = 4,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(186), 1,
      sym__generic,
    STATE(276), 1,
      sym__generics,
    ACTIONS(479), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4291] = 1,
    ACTIONS(141), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4299] = 1,
    ACTIONS(483), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4306] = 4,
    ACTIONS(485), 1,
      anon_sym_and,
    ACTIONS(487), 1,
      anon_sym_or,
    ACTIONS(489), 1,
      sym__indent,
    STATE(154), 1,
      sym_block,
  [4319] = 3,
    ACTIONS(338), 1,
      aux_sym_comment_token1,
    ACTIONS(491), 1,
      sym__newline,
    STATE(117), 2,
      sym_comment,
      sym__end_line,
  [4330] = 3,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__generics_repeat1,
    ACTIONS(495), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4341] = 4,
    ACTIONS(420), 1,
      anon_sym_var,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(300), 1,
      sym_parameter,
    STATE(344), 1,
      sym_var,
  [4354] = 4,
    ACTIONS(485), 1,
      anon_sym_and,
    ACTIONS(487), 1,
      anon_sym_or,
    ACTIONS(489), 1,
      sym__indent,
    STATE(152), 1,
      sym_block,
  [4367] = 3,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(497), 1,
      sym__newline,
    STATE(234), 2,
      sym_comment,
      sym__end_line,
  [4378] = 3,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_export_repeat1,
    ACTIONS(502), 2,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4389] = 3,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__generics_repeat1,
    ACTIONS(506), 2,
      anon_sym_EQ,
      sym_identifier,
  [4400] = 1,
    ACTIONS(508), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4407] = 4,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(241), 1,
      sym__type_name,
    STATE(291), 1,
      sym__custom_type,
    STATE(293), 1,
      sym__custom_generic_type,
  [4420] = 3,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(514), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4431] = 4,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(208), 1,
      sym__type_name,
    STATE(291), 1,
      sym__custom_type,
    STATE(293), 1,
      sym__custom_generic_type,
  [4444] = 3,
    ACTIONS(338), 1,
      aux_sym_comment_token1,
    ACTIONS(516), 1,
      sym__newline,
    STATE(119), 2,
      sym_comment,
      sym__end_line,
  [4455] = 3,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(518), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4466] = 3,
    ACTIONS(464), 1,
      anon_sym_and,
    ACTIONS(466), 1,
      anon_sym_or,
    ACTIONS(520), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4477] = 3,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym_generics_repeat1,
    ACTIONS(525), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4488] = 3,
    ACTIONS(527), 1,
      aux_sym_comment_token1,
    ACTIONS(529), 1,
      sym__newline,
    STATE(148), 2,
      sym_comment,
      sym__end_line,
  [4499] = 3,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym__generics_repeat1,
    ACTIONS(534), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4510] = 3,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym__generics_repeat1,
    ACTIONS(495), 2,
      anon_sym_EQ,
      sym_identifier,
  [4521] = 3,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_export_repeat1,
    ACTIONS(502), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4532] = 3,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_constant_repeat1,
    ACTIONS(298), 2,
      sym__indent,
      anon_sym_constants,
  [4543] = 3,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(539), 1,
      sym__newline,
    STATE(215), 2,
      sym_comment,
      sym__end_line,
  [4554] = 3,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym__generics_repeat1,
    ACTIONS(506), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4565] = 3,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_constant_repeat1,
    ACTIONS(304), 2,
      sym__indent,
      anon_sym_constants,
  [4576] = 4,
    ACTIONS(479), 1,
      anon_sym_EQ,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(202), 1,
      sym__generic,
    STATE(294), 1,
      sym__generics,
  [4589] = 3,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__generics_repeat1,
    ACTIONS(534), 2,
      anon_sym_EQ,
      sym_identifier,
  [4600] = 4,
    ACTIONS(549), 1,
      sym_identifier,
    STATE(181), 1,
      sym__type_name,
    STATE(271), 1,
      sym__custom_type,
    STATE(272), 1,
      sym__custom_generic_type,
  [4613] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(554), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4624] = 3,
    ACTIONS(338), 1,
      aux_sym_comment_token1,
    ACTIONS(556), 1,
      sym__newline,
    STATE(129), 2,
      sym_comment,
      sym__end_line,
  [4635] = 3,
    ACTIONS(558), 1,
      aux_sym_comment_token1,
    ACTIONS(560), 1,
      sym__newline,
    STATE(160), 2,
      sym_comment,
      sym__end_line,
  [4646] = 3,
    ACTIONS(562), 1,
      anon_sym_constants,
    ACTIONS(565), 1,
      sym__indent,
    STATE(214), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4657] = 1,
    ACTIONS(332), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4663] = 1,
    ACTIONS(567), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4669] = 3,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_RBRACK,
    STATE(257), 1,
      aux_sym_enum_repeat1,
  [4679] = 1,
    ACTIONS(573), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4685] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    ACTIONS(578), 1,
      anon_sym_COLON,
    STATE(219), 1,
      aux_sym_parameter_repeat1,
  [4695] = 1,
    ACTIONS(473), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4701] = 2,
    ACTIONS(485), 1,
      anon_sym_and,
    ACTIONS(473), 2,
      sym__indent,
      anon_sym_or,
  [4709] = 1,
    ACTIONS(141), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4715] = 3,
    ACTIONS(475), 1,
      anon_sym_and,
    ACTIONS(580), 1,
      anon_sym_then,
    ACTIONS(582), 1,
      anon_sym_or,
  [4725] = 1,
    ACTIONS(554), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4731] = 1,
    ACTIONS(584), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4737] = 3,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    STATE(264), 1,
      aux_sym__parameters_repeat1,
  [4747] = 3,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      anon_sym_COLON,
    STATE(253), 1,
      aux_sym_parameter_repeat1,
  [4757] = 3,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    ACTIONS(596), 1,
      anon_sym_SEMI,
    STATE(228), 1,
      aux_sym__parameters_repeat1,
  [4767] = 3,
    ACTIONS(475), 1,
      anon_sym_and,
    ACTIONS(582), 1,
      anon_sym_or,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
  [4777] = 1,
    ACTIONS(601), 3,
      sym__newline,
      anon_sym_generic,
      aux_sym_comment_token1,
  [4783] = 3,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RBRACK,
    STATE(245), 1,
      aux_sym_export_repeat1,
  [4793] = 1,
    ACTIONS(607), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_identifier,
  [4799] = 3,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      aux_sym_enum_repeat1,
  [4809] = 1,
    ACTIONS(358), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4815] = 3,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      anon_sym_COLON,
    STATE(219), 1,
      aux_sym_parameter_repeat1,
  [4825] = 1,
    ACTIONS(616), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_identifier,
  [4831] = 1,
    ACTIONS(607), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4837] = 1,
    ACTIONS(618), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4843] = 1,
    ACTIONS(620), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4849] = 3,
    ACTIONS(475), 1,
      anon_sym_and,
    ACTIONS(582), 1,
      anon_sym_or,
    ACTIONS(622), 1,
      anon_sym_RBRACK,
  [4859] = 3,
    ACTIONS(624), 1,
      sym_identifier,
    STATE(202), 1,
      sym__generic,
    STATE(294), 1,
      sym__generics,
  [4869] = 3,
    ACTIONS(475), 1,
      anon_sym_and,
    ACTIONS(582), 1,
      anon_sym_or,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
  [4879] = 3,
    ACTIONS(475), 1,
      anon_sym_and,
    ACTIONS(582), 1,
      anon_sym_or,
    ACTIONS(629), 1,
      anon_sym_then,
  [4889] = 1,
    ACTIONS(631), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4895] = 3,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      aux_sym_export_repeat1,
  [4905] = 1,
    ACTIONS(635), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4911] = 3,
    ACTIONS(475), 1,
      anon_sym_and,
    ACTIONS(582), 1,
      anon_sym_or,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
  [4921] = 3,
    ACTIONS(475), 1,
      anon_sym_and,
    ACTIONS(582), 1,
      anon_sym_or,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
  [4931] = 3,
    ACTIONS(475), 1,
      anon_sym_and,
    ACTIONS(582), 1,
      anon_sym_or,
    ACTIONS(641), 1,
      anon_sym_RBRACK,
  [4941] = 2,
    ACTIONS(643), 1,
      anon_sym_from,
    ACTIONS(645), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4949] = 2,
    ACTIONS(647), 1,
      anon_sym_from,
    ACTIONS(645), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4957] = 1,
    ACTIONS(649), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4963] = 3,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_COLON,
    STATE(219), 1,
      aux_sym_parameter_repeat1,
  [4973] = 1,
    ACTIONS(618), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4979] = 1,
    ACTIONS(309), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4985] = 1,
    ACTIONS(653), 3,
      sym__newline,
      anon_sym_generic,
      aux_sym_comment_token1,
  [4991] = 3,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      aux_sym_enum_repeat1,
  [5001] = 3,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_COLON,
    STATE(259), 1,
      aux_sym_export_repeat1,
  [5011] = 3,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_COLON,
    STATE(190), 1,
      aux_sym_export_repeat1,
  [5021] = 3,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_COLON,
    STATE(235), 1,
      aux_sym_parameter_repeat1,
  [5031] = 1,
    ACTIONS(616), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [5037] = 1,
    ACTIONS(477), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [5043] = 3,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      anon_sym_COLON,
    STATE(190), 1,
      aux_sym_export_repeat1,
  [5053] = 3,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym__parameters_repeat1,
  [5063] = 3,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_COLON,
    STATE(263), 1,
      aux_sym_export_repeat1,
  [5073] = 3,
    ACTIONS(424), 1,
      anon_sym_generic,
    ACTIONS(669), 1,
      sym__indent,
    STATE(358), 1,
      sym_generics,
  [5083] = 3,
    ACTIONS(671), 1,
      sym_identifier,
    STATE(146), 1,
      sym_function_header,
    STATE(218), 1,
      sym__function_header,
  [5093] = 2,
    ACTIONS(673), 1,
      sym_identifier,
    STATE(246), 1,
      sym_variable_access,
  [5100] = 2,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(232), 1,
      sym__generic,
  [5107] = 1,
    ACTIONS(675), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5112] = 1,
    ACTIONS(677), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5117] = 1,
    ACTIONS(679), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5122] = 1,
    ACTIONS(681), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5127] = 2,
    ACTIONS(683), 1,
      anon_sym_from,
    ACTIONS(685), 1,
      sym_identifier,
  [5134] = 2,
    ACTIONS(685), 1,
      sym_identifier,
    ACTIONS(687), 1,
      anon_sym_from,
  [5141] = 1,
    ACTIONS(689), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5146] = 1,
    ACTIONS(691), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5151] = 1,
    ACTIONS(649), 2,
      anon_sym_EQ,
      sym_identifier,
  [5156] = 2,
    ACTIONS(693), 1,
      sym__indent,
    STATE(139), 1,
      sym_block,
  [5163] = 1,
    ACTIONS(695), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5168] = 1,
    ACTIONS(697), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5173] = 1,
    ACTIONS(699), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5178] = 1,
    ACTIONS(701), 2,
      anon_sym_EQ,
      sym_identifier,
  [5183] = 2,
    ACTIONS(693), 1,
      sym__indent,
    STATE(107), 1,
      sym_block,
  [5190] = 2,
    ACTIONS(489), 1,
      sym__indent,
    STATE(162), 1,
      sym_block,
  [5197] = 1,
    ACTIONS(681), 2,
      anon_sym_EQ,
      sym_identifier,
  [5202] = 2,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(237), 1,
      sym__generic,
  [5209] = 1,
    ACTIONS(691), 2,
      anon_sym_EQ,
      sym_identifier,
  [5214] = 2,
    ACTIONS(671), 1,
      sym_identifier,
    STATE(142), 1,
      sym__function_header,
  [5221] = 1,
    ACTIONS(703), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5226] = 1,
    ACTIONS(677), 2,
      anon_sym_EQ,
      sym_identifier,
  [5231] = 1,
    ACTIONS(705), 2,
      anon_sym_EQ,
      sym_identifier,
  [5236] = 1,
    ACTIONS(679), 2,
      anon_sym_EQ,
      sym_identifier,
  [5241] = 1,
    ACTIONS(689), 2,
      anon_sym_EQ,
      sym_identifier,
  [5246] = 2,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_parameters,
  [5253] = 1,
    ACTIONS(709), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5258] = 2,
    ACTIONS(711), 1,
      anon_sym_from,
    STATE(307), 1,
      sym_range,
  [5265] = 1,
    ACTIONS(713), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5270] = 1,
    ACTIONS(705), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5275] = 1,
    ACTIONS(594), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5280] = 1,
    ACTIONS(715), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5285] = 2,
    ACTIONS(645), 1,
      anon_sym_EQ,
    ACTIONS(717), 1,
      anon_sym_from,
  [5292] = 2,
    ACTIONS(645), 1,
      anon_sym_EQ,
    ACTIONS(719), 1,
      anon_sym_from,
  [5299] = 1,
    ACTIONS(721), 2,
      anon_sym_EQ,
      sym_identifier,
  [5304] = 1,
    ACTIONS(578), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [5309] = 1,
    ACTIONS(723), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5314] = 2,
    ACTIONS(489), 1,
      sym__indent,
    STATE(166), 1,
      sym_block,
  [5321] = 1,
    ACTIONS(725), 1,
      sym_identifier,
  [5325] = 1,
    ACTIONS(727), 1,
      sym_identifier,
  [5329] = 1,
    ACTIONS(729), 1,
      sym_integer,
  [5333] = 1,
    ACTIONS(731), 1,
      anon_sym_to,
  [5337] = 1,
    ACTIONS(733), 1,
      sym__newline,
  [5341] = 1,
    ACTIONS(735), 1,
      anon_sym_EQ,
  [5345] = 1,
    ACTIONS(737), 1,
      sym_identifier,
  [5349] = 1,
    ACTIONS(739), 1,
      sym_identifier,
  [5353] = 1,
    ACTIONS(741), 1,
      sym_integer,
  [5357] = 1,
    ACTIONS(743), 1,
      anon_sym_EQ,
  [5361] = 1,
    ACTIONS(745), 1,
      anon_sym_to,
  [5365] = 1,
    ACTIONS(747), 1,
      anon_sym_to,
  [5369] = 1,
    ACTIONS(749), 1,
      sym_identifier,
  [5373] = 1,
    ACTIONS(751), 1,
      sym_integer,
  [5377] = 1,
    ACTIONS(753), 1,
      sym_identifier,
  [5381] = 1,
    ACTIONS(755), 1,
      sym_identifier,
  [5385] = 1,
    ACTIONS(757), 1,
      sym_identifier,
  [5389] = 1,
    ACTIONS(759), 1,
      anon_sym_EQ,
  [5393] = 1,
    ACTIONS(761), 1,
      anon_sym_EQ,
  [5397] = 1,
    ACTIONS(763), 1,
      ts_builtin_sym_end,
  [5401] = 1,
    ACTIONS(765), 1,
      sym_identifier,
  [5405] = 1,
    ACTIONS(767), 1,
      anon_sym_EQ,
  [5409] = 1,
    ACTIONS(769), 1,
      sym_identifier,
  [5413] = 1,
    ACTIONS(771), 1,
      anon_sym_to,
  [5417] = 1,
    ACTIONS(773), 1,
      sym_identifier,
  [5421] = 1,
    ACTIONS(775), 1,
      sym_integer,
  [5425] = 1,
    ACTIONS(777), 1,
      sym_float,
  [5429] = 1,
    ACTIONS(779), 1,
      sym_identifier,
  [5433] = 1,
    ACTIONS(781), 1,
      sym_integer,
  [5437] = 1,
    ACTIONS(783), 1,
      sym_identifier,
  [5441] = 1,
    ACTIONS(785), 1,
      sym__newline,
  [5445] = 1,
    ACTIONS(787), 1,
      anon_sym_for,
  [5449] = 1,
    ACTIONS(789), 1,
      anon_sym_from,
  [5453] = 1,
    ACTIONS(791), 1,
      anon_sym_COLON_EQ,
  [5457] = 1,
    ACTIONS(793), 1,
      anon_sym_until,
  [5461] = 1,
    ACTIONS(729), 1,
      sym_float,
  [5465] = 1,
    ACTIONS(795), 1,
      sym_identifier,
  [5469] = 1,
    ACTIONS(797), 1,
      sym_identifier,
  [5473] = 1,
    ACTIONS(799), 1,
      sym_identifier,
  [5477] = 1,
    ACTIONS(801), 1,
      anon_sym_RPAREN,
  [5481] = 1,
    ACTIONS(803), 1,
      sym_identifier,
  [5485] = 1,
    ACTIONS(805), 1,
      anon_sym_EQ,
  [5489] = 1,
    ACTIONS(807), 1,
      sym_identifier,
  [5493] = 1,
    ACTIONS(809), 1,
      sym_identifier,
  [5497] = 1,
    ACTIONS(811), 1,
      anon_sym_EQ,
  [5501] = 1,
    ACTIONS(813), 1,
      sym_integer,
  [5505] = 1,
    ACTIONS(813), 1,
      sym_float,
  [5509] = 1,
    ACTIONS(815), 1,
      sym__newline,
  [5513] = 1,
    ACTIONS(817), 1,
      anon_sym_EQ,
  [5517] = 1,
    ACTIONS(819), 1,
      sym_integer,
  [5521] = 1,
    ACTIONS(821), 1,
      sym__indent,
  [5525] = 1,
    ACTIONS(823), 1,
      sym_identifier,
  [5529] = 1,
    ACTIONS(825), 1,
      anon_sym_of,
  [5533] = 1,
    ACTIONS(827), 1,
      anon_sym_of,
  [5537] = 1,
    ACTIONS(829), 1,
      sym__newline,
  [5541] = 1,
    ACTIONS(831), 1,
      anon_sym_EQ,
  [5545] = 1,
    ACTIONS(833), 1,
      anon_sym_LBRACK,
  [5549] = 1,
    ACTIONS(835), 1,
      sym__indent,
  [5553] = 1,
    ACTIONS(837), 1,
      sym_identifier,
  [5557] = 1,
    ACTIONS(839), 1,
      sym_identifier,
  [5561] = 1,
    ACTIONS(841), 1,
      sym_identifier,
  [5565] = 1,
    ACTIONS(843), 1,
      anon_sym_to,
  [5569] = 1,
    ACTIONS(845), 1,
      anon_sym_to,
  [5573] = 1,
    ACTIONS(847), 1,
      sym_identifier,
  [5577] = 1,
    ACTIONS(849), 1,
      sym_identifier,
  [5581] = 1,
    ACTIONS(851), 1,
      sym_identifier,
  [5585] = 1,
    ACTIONS(853), 1,
      sym_identifier,
  [5589] = 1,
    ACTIONS(855), 1,
      sym_integer,
  [5593] = 1,
    ACTIONS(857), 1,
      sym_float,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 122,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 221,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 316,
  [SMALL_STATE(12)] = 376,
  [SMALL_STATE(13)] = 406,
  [SMALL_STATE(14)] = 450,
  [SMALL_STATE(15)] = 480,
  [SMALL_STATE(16)] = 510,
  [SMALL_STATE(17)] = 540,
  [SMALL_STATE(18)] = 570,
  [SMALL_STATE(19)] = 600,
  [SMALL_STATE(20)] = 639,
  [SMALL_STATE(21)] = 662,
  [SMALL_STATE(22)] = 685,
  [SMALL_STATE(23)] = 708,
  [SMALL_STATE(24)] = 747,
  [SMALL_STATE(25)] = 786,
  [SMALL_STATE(26)] = 825,
  [SMALL_STATE(27)] = 848,
  [SMALL_STATE(28)] = 884,
  [SMALL_STATE(29)] = 920,
  [SMALL_STATE(30)] = 956,
  [SMALL_STATE(31)] = 986,
  [SMALL_STATE(32)] = 1022,
  [SMALL_STATE(33)] = 1058,
  [SMALL_STATE(34)] = 1088,
  [SMALL_STATE(35)] = 1124,
  [SMALL_STATE(36)] = 1160,
  [SMALL_STATE(37)] = 1196,
  [SMALL_STATE(38)] = 1232,
  [SMALL_STATE(39)] = 1268,
  [SMALL_STATE(40)] = 1304,
  [SMALL_STATE(41)] = 1340,
  [SMALL_STATE(42)] = 1376,
  [SMALL_STATE(43)] = 1412,
  [SMALL_STATE(44)] = 1448,
  [SMALL_STATE(45)] = 1484,
  [SMALL_STATE(46)] = 1520,
  [SMALL_STATE(47)] = 1556,
  [SMALL_STATE(48)] = 1592,
  [SMALL_STATE(49)] = 1628,
  [SMALL_STATE(50)] = 1655,
  [SMALL_STATE(51)] = 1678,
  [SMALL_STATE(52)] = 1713,
  [SMALL_STATE(53)] = 1748,
  [SMALL_STATE(54)] = 1783,
  [SMALL_STATE(55)] = 1804,
  [SMALL_STATE(56)] = 1825,
  [SMALL_STATE(57)] = 1846,
  [SMALL_STATE(58)] = 1869,
  [SMALL_STATE(59)] = 1904,
  [SMALL_STATE(60)] = 1939,
  [SMALL_STATE(61)] = 1960,
  [SMALL_STATE(62)] = 1995,
  [SMALL_STATE(63)] = 2020,
  [SMALL_STATE(64)] = 2045,
  [SMALL_STATE(65)] = 2066,
  [SMALL_STATE(66)] = 2101,
  [SMALL_STATE(67)] = 2122,
  [SMALL_STATE(68)] = 2165,
  [SMALL_STATE(69)] = 2208,
  [SMALL_STATE(70)] = 2231,
  [SMALL_STATE(71)] = 2274,
  [SMALL_STATE(72)] = 2302,
  [SMALL_STATE(73)] = 2342,
  [SMALL_STATE(74)] = 2382,
  [SMALL_STATE(75)] = 2404,
  [SMALL_STATE(76)] = 2427,
  [SMALL_STATE(77)] = 2461,
  [SMALL_STATE(78)] = 2495,
  [SMALL_STATE(79)] = 2529,
  [SMALL_STATE(80)] = 2563,
  [SMALL_STATE(81)] = 2597,
  [SMALL_STATE(82)] = 2631,
  [SMALL_STATE(83)] = 2665,
  [SMALL_STATE(84)] = 2699,
  [SMALL_STATE(85)] = 2724,
  [SMALL_STATE(86)] = 2749,
  [SMALL_STATE(87)] = 2774,
  [SMALL_STATE(88)] = 2799,
  [SMALL_STATE(89)] = 2820,
  [SMALL_STATE(90)] = 2845,
  [SMALL_STATE(91)] = 2870,
  [SMALL_STATE(92)] = 2895,
  [SMALL_STATE(93)] = 2920,
  [SMALL_STATE(94)] = 2945,
  [SMALL_STATE(95)] = 2970,
  [SMALL_STATE(96)] = 2995,
  [SMALL_STATE(97)] = 3016,
  [SMALL_STATE(98)] = 3041,
  [SMALL_STATE(99)] = 3066,
  [SMALL_STATE(100)] = 3087,
  [SMALL_STATE(101)] = 3112,
  [SMALL_STATE(102)] = 3137,
  [SMALL_STATE(103)] = 3158,
  [SMALL_STATE(104)] = 3183,
  [SMALL_STATE(105)] = 3208,
  [SMALL_STATE(106)] = 3234,
  [SMALL_STATE(107)] = 3252,
  [SMALL_STATE(108)] = 3278,
  [SMALL_STATE(109)] = 3296,
  [SMALL_STATE(110)] = 3310,
  [SMALL_STATE(111)] = 3331,
  [SMALL_STATE(112)] = 3350,
  [SMALL_STATE(113)] = 3369,
  [SMALL_STATE(114)] = 3381,
  [SMALL_STATE(115)] = 3393,
  [SMALL_STATE(116)] = 3405,
  [SMALL_STATE(117)] = 3417,
  [SMALL_STATE(118)] = 3429,
  [SMALL_STATE(119)] = 3441,
  [SMALL_STATE(120)] = 3453,
  [SMALL_STATE(121)] = 3473,
  [SMALL_STATE(122)] = 3485,
  [SMALL_STATE(123)] = 3505,
  [SMALL_STATE(124)] = 3525,
  [SMALL_STATE(125)] = 3537,
  [SMALL_STATE(126)] = 3549,
  [SMALL_STATE(127)] = 3561,
  [SMALL_STATE(128)] = 3573,
  [SMALL_STATE(129)] = 3585,
  [SMALL_STATE(130)] = 3597,
  [SMALL_STATE(131)] = 3609,
  [SMALL_STATE(132)] = 3621,
  [SMALL_STATE(133)] = 3633,
  [SMALL_STATE(134)] = 3645,
  [SMALL_STATE(135)] = 3657,
  [SMALL_STATE(136)] = 3669,
  [SMALL_STATE(137)] = 3689,
  [SMALL_STATE(138)] = 3701,
  [SMALL_STATE(139)] = 3721,
  [SMALL_STATE(140)] = 3734,
  [SMALL_STATE(141)] = 3747,
  [SMALL_STATE(142)] = 3768,
  [SMALL_STATE(143)] = 3789,
  [SMALL_STATE(144)] = 3810,
  [SMALL_STATE(145)] = 3825,
  [SMALL_STATE(146)] = 3838,
  [SMALL_STATE(147)] = 3859,
  [SMALL_STATE(148)] = 3872,
  [SMALL_STATE(149)] = 3884,
  [SMALL_STATE(150)] = 3896,
  [SMALL_STATE(151)] = 3908,
  [SMALL_STATE(152)] = 3925,
  [SMALL_STATE(153)] = 3936,
  [SMALL_STATE(154)] = 3947,
  [SMALL_STATE(155)] = 3958,
  [SMALL_STATE(156)] = 3969,
  [SMALL_STATE(157)] = 3988,
  [SMALL_STATE(158)] = 4003,
  [SMALL_STATE(159)] = 4020,
  [SMALL_STATE(160)] = 4037,
  [SMALL_STATE(161)] = 4048,
  [SMALL_STATE(162)] = 4059,
  [SMALL_STATE(163)] = 4070,
  [SMALL_STATE(164)] = 4087,
  [SMALL_STATE(165)] = 4098,
  [SMALL_STATE(166)] = 4115,
  [SMALL_STATE(167)] = 4126,
  [SMALL_STATE(168)] = 4137,
  [SMALL_STATE(169)] = 4149,
  [SMALL_STATE(170)] = 4163,
  [SMALL_STATE(171)] = 4175,
  [SMALL_STATE(172)] = 4183,
  [SMALL_STATE(173)] = 4197,
  [SMALL_STATE(174)] = 4207,
  [SMALL_STATE(175)] = 4215,
  [SMALL_STATE(176)] = 4223,
  [SMALL_STATE(177)] = 4231,
  [SMALL_STATE(178)] = 4245,
  [SMALL_STATE(179)] = 4255,
  [SMALL_STATE(180)] = 4263,
  [SMALL_STATE(181)] = 4277,
  [SMALL_STATE(182)] = 4291,
  [SMALL_STATE(183)] = 4299,
  [SMALL_STATE(184)] = 4306,
  [SMALL_STATE(185)] = 4319,
  [SMALL_STATE(186)] = 4330,
  [SMALL_STATE(187)] = 4341,
  [SMALL_STATE(188)] = 4354,
  [SMALL_STATE(189)] = 4367,
  [SMALL_STATE(190)] = 4378,
  [SMALL_STATE(191)] = 4389,
  [SMALL_STATE(192)] = 4400,
  [SMALL_STATE(193)] = 4407,
  [SMALL_STATE(194)] = 4420,
  [SMALL_STATE(195)] = 4431,
  [SMALL_STATE(196)] = 4444,
  [SMALL_STATE(197)] = 4455,
  [SMALL_STATE(198)] = 4466,
  [SMALL_STATE(199)] = 4477,
  [SMALL_STATE(200)] = 4488,
  [SMALL_STATE(201)] = 4499,
  [SMALL_STATE(202)] = 4510,
  [SMALL_STATE(203)] = 4521,
  [SMALL_STATE(204)] = 4532,
  [SMALL_STATE(205)] = 4543,
  [SMALL_STATE(206)] = 4554,
  [SMALL_STATE(207)] = 4565,
  [SMALL_STATE(208)] = 4576,
  [SMALL_STATE(209)] = 4589,
  [SMALL_STATE(210)] = 4600,
  [SMALL_STATE(211)] = 4613,
  [SMALL_STATE(212)] = 4624,
  [SMALL_STATE(213)] = 4635,
  [SMALL_STATE(214)] = 4646,
  [SMALL_STATE(215)] = 4657,
  [SMALL_STATE(216)] = 4663,
  [SMALL_STATE(217)] = 4669,
  [SMALL_STATE(218)] = 4679,
  [SMALL_STATE(219)] = 4685,
  [SMALL_STATE(220)] = 4695,
  [SMALL_STATE(221)] = 4701,
  [SMALL_STATE(222)] = 4709,
  [SMALL_STATE(223)] = 4715,
  [SMALL_STATE(224)] = 4725,
  [SMALL_STATE(225)] = 4731,
  [SMALL_STATE(226)] = 4737,
  [SMALL_STATE(227)] = 4747,
  [SMALL_STATE(228)] = 4757,
  [SMALL_STATE(229)] = 4767,
  [SMALL_STATE(230)] = 4777,
  [SMALL_STATE(231)] = 4783,
  [SMALL_STATE(232)] = 4793,
  [SMALL_STATE(233)] = 4799,
  [SMALL_STATE(234)] = 4809,
  [SMALL_STATE(235)] = 4815,
  [SMALL_STATE(236)] = 4825,
  [SMALL_STATE(237)] = 4831,
  [SMALL_STATE(238)] = 4837,
  [SMALL_STATE(239)] = 4843,
  [SMALL_STATE(240)] = 4849,
  [SMALL_STATE(241)] = 4859,
  [SMALL_STATE(242)] = 4869,
  [SMALL_STATE(243)] = 4879,
  [SMALL_STATE(244)] = 4889,
  [SMALL_STATE(245)] = 4895,
  [SMALL_STATE(246)] = 4905,
  [SMALL_STATE(247)] = 4911,
  [SMALL_STATE(248)] = 4921,
  [SMALL_STATE(249)] = 4931,
  [SMALL_STATE(250)] = 4941,
  [SMALL_STATE(251)] = 4949,
  [SMALL_STATE(252)] = 4957,
  [SMALL_STATE(253)] = 4963,
  [SMALL_STATE(254)] = 4973,
  [SMALL_STATE(255)] = 4979,
  [SMALL_STATE(256)] = 4985,
  [SMALL_STATE(257)] = 4991,
  [SMALL_STATE(258)] = 5001,
  [SMALL_STATE(259)] = 5011,
  [SMALL_STATE(260)] = 5021,
  [SMALL_STATE(261)] = 5031,
  [SMALL_STATE(262)] = 5037,
  [SMALL_STATE(263)] = 5043,
  [SMALL_STATE(264)] = 5053,
  [SMALL_STATE(265)] = 5063,
  [SMALL_STATE(266)] = 5073,
  [SMALL_STATE(267)] = 5083,
  [SMALL_STATE(268)] = 5093,
  [SMALL_STATE(269)] = 5100,
  [SMALL_STATE(270)] = 5107,
  [SMALL_STATE(271)] = 5112,
  [SMALL_STATE(272)] = 5117,
  [SMALL_STATE(273)] = 5122,
  [SMALL_STATE(274)] = 5127,
  [SMALL_STATE(275)] = 5134,
  [SMALL_STATE(276)] = 5141,
  [SMALL_STATE(277)] = 5146,
  [SMALL_STATE(278)] = 5151,
  [SMALL_STATE(279)] = 5156,
  [SMALL_STATE(280)] = 5163,
  [SMALL_STATE(281)] = 5168,
  [SMALL_STATE(282)] = 5173,
  [SMALL_STATE(283)] = 5178,
  [SMALL_STATE(284)] = 5183,
  [SMALL_STATE(285)] = 5190,
  [SMALL_STATE(286)] = 5197,
  [SMALL_STATE(287)] = 5202,
  [SMALL_STATE(288)] = 5209,
  [SMALL_STATE(289)] = 5214,
  [SMALL_STATE(290)] = 5221,
  [SMALL_STATE(291)] = 5226,
  [SMALL_STATE(292)] = 5231,
  [SMALL_STATE(293)] = 5236,
  [SMALL_STATE(294)] = 5241,
  [SMALL_STATE(295)] = 5246,
  [SMALL_STATE(296)] = 5253,
  [SMALL_STATE(297)] = 5258,
  [SMALL_STATE(298)] = 5265,
  [SMALL_STATE(299)] = 5270,
  [SMALL_STATE(300)] = 5275,
  [SMALL_STATE(301)] = 5280,
  [SMALL_STATE(302)] = 5285,
  [SMALL_STATE(303)] = 5292,
  [SMALL_STATE(304)] = 5299,
  [SMALL_STATE(305)] = 5304,
  [SMALL_STATE(306)] = 5309,
  [SMALL_STATE(307)] = 5314,
  [SMALL_STATE(308)] = 5321,
  [SMALL_STATE(309)] = 5325,
  [SMALL_STATE(310)] = 5329,
  [SMALL_STATE(311)] = 5333,
  [SMALL_STATE(312)] = 5337,
  [SMALL_STATE(313)] = 5341,
  [SMALL_STATE(314)] = 5345,
  [SMALL_STATE(315)] = 5349,
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
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 2, .production_id = 26),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 2, .production_id = 26),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 42),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 42), SHIFT_REPEAT(40),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 42),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 42), SHIFT_REPEAT(308),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 40),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 40),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 58),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 58),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 46),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 46),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 1, .production_id = 12),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 42), SHIFT_REPEAT(27),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 42), SHIFT_REPEAT(359),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 42), SHIFT_REPEAT(45),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 42), SHIFT_REPEAT(346),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(323),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(372),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(371),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(367),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(289),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(348),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(345),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(335),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4, .production_id = 16),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(309),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(342),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(42),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(43),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_argument, 1), REDUCE(sym_primary_expression, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 55),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 55),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 23), SHIFT_REPEAT(274),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 23), SHIFT_REPEAT(275),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 23), SHIFT_REPEAT(361),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 23), SHIFT_REPEAT(193),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 23), SHIFT_REPEAT(278),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 23),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 4, .production_id = 16),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 2, .production_id = 38),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 56), SHIFT_REPEAT(100),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 56),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 56), SHIFT_REPEAT(100),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 56), SHIFT_REPEAT(85),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 56), SHIFT_REPEAT(85),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 5, .production_id = 62),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 5, .production_id = 62),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 5, .production_id = 29),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 4, .production_id = 57),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 4, .production_id = 57),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2, .production_id = 47),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2, .production_id = 47), SHIFT_REPEAT(322),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_then_statement_repeat1, 2, .production_id = 67),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_then_statement_repeat1, 2, .production_id = 67), SHIFT_REPEAT(38),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2, .production_id = 67),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 56), SHIFT_REPEAT(98),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 56), SHIFT_REPEAT(98),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, .production_id = 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7, .production_id = 50),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, .production_id = 45),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5, .production_id = 22),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 48),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, .production_id = 44),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 10),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7, .production_id = 59),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2, .production_id = 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3, .production_id = 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, .production_id = 31),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 14),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 30),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6, .production_id = 35),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, .production_id = 28),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 27),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 13),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 4, .production_id = 8),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elsif, 4, .production_id = 57),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif, 4, .production_id = 57),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_then_statement_repeat1, 1, .production_id = 60),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 1, .production_id = 60),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 3, .production_id = 33),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 3, .production_id = 33),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 1, .production_id = 5),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 1, .production_id = 5),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 4, .production_id = 54),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, .production_id = 54),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 37),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 37),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statement, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statement, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 6, .production_id = 66),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 6, .production_id = 66),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else, 2, .production_id = 65),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2, .production_id = 65),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 5, .production_id = 61),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 5, .production_id = 61),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 4, .production_id = 53),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 4, .production_id = 53),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(374),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 46),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 36),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 6),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 1, .production_id = 20),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2, .production_id = 9), SHIFT_REPEAT(337),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2, .production_id = 9),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 2, .production_id = 32),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 25),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 41),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 43),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 32), SHIFT_REPEAT(330),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 32),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 32), SHIFT_REPEAT(287),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 32),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2, .production_id = 9), SHIFT_REPEAT(332),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2, .production_id = 47), SHIFT_REPEAT(368),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 32), SHIFT_REPEAT(269),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2), SHIFT_REPEAT(13),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(373),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 3, .production_id = 24),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 1, .production_id = 15),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(328),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_header, 3, .production_id = 11),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(187),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 52),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 51), SHIFT_REPEAT(320),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 51),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic, 1, .production_id = 19),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2, .production_id = 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 4, .production_id = 34),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 6), SHIFT(236),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 24),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 39),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_name, 1, .production_id = 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 7, .production_id = 69),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 17),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 18),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 6),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_type, 1),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_type, 2, .production_id = 21),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 7),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delclaration_array_type, 7),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 8, .production_id = 70),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 6, .production_id = 63),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 5),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 3, .production_id = 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 7, .production_id = 68),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 49),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 4, .production_id = 8),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [763] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4, .production_id = 64),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
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
