#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 355
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 33
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 73

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
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 3},
  [12] = {.index = 20, .length = 2},
  [13] = {.index = 22, .length = 2},
  [14] = {.index = 24, .length = 1},
  [15] = {.index = 25, .length = 1},
  [16] = {.index = 26, .length = 2},
  [17] = {.index = 28, .length = 2},
  [18] = {.index = 30, .length = 2},
  [19] = {.index = 32, .length = 1},
  [20] = {.index = 33, .length = 2},
  [21] = {.index = 35, .length = 4},
  [22] = {.index = 39, .length = 4},
  [23] = {.index = 43, .length = 2},
  [24] = {.index = 45, .length = 4},
  [25] = {.index = 49, .length = 2},
  [26] = {.index = 51, .length = 3},
  [27] = {.index = 54, .length = 2},
  [28] = {.index = 56, .length = 1},
  [29] = {.index = 57, .length = 1},
  [30] = {.index = 58, .length = 2},
  [31] = {.index = 60, .length = 2},
  [32] = {.index = 62, .length = 2},
  [33] = {.index = 64, .length = 2},
  [34] = {.index = 66, .length = 2},
  [35] = {.index = 68, .length = 1},
  [36] = {.index = 69, .length = 2},
  [37] = {.index = 71, .length = 1},
  [38] = {.index = 72, .length = 1},
  [39] = {.index = 73, .length = 2},
  [40] = {.index = 75, .length = 3},
  [41] = {.index = 78, .length = 8},
  [42] = {.index = 86, .length = 2},
  [43] = {.index = 88, .length = 3},
  [44] = {.index = 91, .length = 3},
  [45] = {.index = 94, .length = 3},
  [46] = {.index = 97, .length = 4},
  [47] = {.index = 101, .length = 3},
  [48] = {.index = 104, .length = 1},
  [49] = {.index = 105, .length = 3},
  [50] = {.index = 108, .length = 2},
  [51] = {.index = 110, .length = 2},
  [52] = {.index = 112, .length = 2},
  [53] = {.index = 114, .length = 2},
  [54] = {.index = 116, .length = 1},
  [55] = {.index = 117, .length = 2},
  [56] = {.index = 119, .length = 2},
  [57] = {.index = 121, .length = 3},
  [58] = {.index = 124, .length = 4},
  [59] = {.index = 128, .length = 1},
  [60] = {.index = 129, .length = 3},
  [61] = {.index = 132, .length = 1},
  [62] = {.index = 133, .length = 3},
  [63] = {.index = 136, .length = 3},
  [64] = {.index = 139, .length = 4},
  [65] = {.index = 143, .length = 3},
  [66] = {.index = 146, .length = 2},
  [67] = {.index = 148, .length = 1},
  [68] = {.index = 149, .length = 4},
  [69] = {.index = 153, .length = 2},
  [70] = {.index = 155, .length = 5},
  [71] = {.index = 160, .length = 4},
  [72] = {.index = 164, .length = 5},
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
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
    {field_variables, 2},
  [17] =
    {field_constants, 2},
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
  [20] =
    {field_name, 0, .inherited = true},
    {field_parameters, 0, .inherited = true},
  [22] =
    {field_name, 1},
    {field_value, 3},
  [24] =
    {field_type_name, 0},
  [25] =
    {field_type_name, 0, .inherited = true},
  [26] =
    {field_generic, 0, .inherited = true},
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
    {field_arguements, 1},
    {field_function, 0},
  [35] =
    {field_array_access, 1, .inherited = true},
    {field_field, 1, .inherited = true},
    {field_field_acces, 1, .inherited = true},
    {field_index, 1, .inherited = true},
  [39] =
    {field_constants, 3},
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
    {field_variables, 2},
  [43] =
    {field_function, 3},
    {field_name, 1},
  [45] =
    {field_name, 1},
    {field_name, 4, .inherited = true},
    {field_value, 3},
    {field_value, 4, .inherited = true},
  [49] =
    {field_reference, 0},
    {field_type_name, 1, .inherited = true},
  [51] =
    {field_generic, 1, .inherited = true},
    {field_reference, 0},
    {field_type_name, 1, .inherited = true},
  [54] =
    {field_name, 1},
    {field_type, 3},
  [56] =
    {field_generic, 0},
  [57] =
    {field_generic, 0, .inherited = true},
  [58] =
    {field_generic, 1, .inherited = true},
    {field_type_name, 0, .inherited = true},
  [60] =
    {field_name, 1},
    {field_variant, 4},
  [62] =
    {field_generic, 1},
    {field_generic, 2, .inherited = true},
  [64] =
    {field_generic, 0, .inherited = true},
    {field_generic, 1, .inherited = true},
  [66] =
    {field_field, 4, .inherited = true},
    {field_name, 1},
  [68] =
    {field_argument, 1},
  [69] =
    {field_body, 2},
    {field_condition, 1},
  [71] =
    {field_operators, 1, .inherited = true},
  [72] =
    {field_var, 0},
  [73] =
    {field_field, 1},
    {field_field_acces, 0},
  [75] =
    {field_arguements, 1},
    {field_arguements, 2},
    {field_function, 0},
  [78] =
    {field_array_access, 0, .inherited = true},
    {field_array_access, 1, .inherited = true},
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
    {field_field_acces, 0, .inherited = true},
    {field_field_acces, 1, .inherited = true},
    {field_index, 0, .inherited = true},
    {field_index, 1, .inherited = true},
  [86] =
    {field_left, 0},
    {field_right, 2},
  [88] =
    {field_function, 3},
    {field_name, 1},
    {field_variables, 4},
  [91] =
    {field_constants, 4},
    {field_function, 3},
    {field_name, 1},
  [94] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [97] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [101] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
    {field_type, 4},
  [104] =
    {field_variant, 1},
  [105] =
    {field_name, 1},
    {field_variant, 4},
    {field_variant, 5, .inherited = true},
  [108] =
    {field_variant, 0, .inherited = true},
    {field_variant, 1, .inherited = true},
  [110] =
    {field_name, 0},
    {field_type, 2},
  [112] =
    {field_control, 1},
    {field_range, 2},
  [114] =
    {field_body, 3},
    {field_condition, 2},
  [116] =
    {field_operators, 0},
  [117] =
    {field_operators, 0, .inherited = true},
    {field_operators, 1, .inherited = true},
  [119] =
    {field_condition, 1},
    {field_consequent, 3},
  [121] =
    {field_array_access, 0},
    {field_array_access, 2},
    {field_index, 1},
  [124] =
    {field_constants, 5},
    {field_function, 3},
    {field_name, 1},
    {field_variables, 4},
  [128] =
    {field_generic, 1, .inherited = true},
  [129] =
    {field_name, 0},
    {field_name, 1},
    {field_type, 3},
  [132] =
    {field_alternative, 0},
  [133] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequent, 3},
  [136] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequent, 3},
  [139] =
    {field_default_value, 3},
    {field_default_value, 4},
    {field_name, 0},
    {field_type, 2},
  [143] =
    {field_name, 1},
    {field_name, 2},
    {field_type, 4},
  [146] =
    {field_end, 3},
    {field_start, 1},
  [148] =
    {field_body, 1},
  [149] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequent, 3},
  [153] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [155] =
    {field_default_value, 4},
    {field_default_value, 5},
    {field_name, 0},
    {field_name, 1},
    {field_type, 3},
  [160] =
    {field_default_value, 4},
    {field_default_value, 5},
    {field_name, 1},
    {field_type, 3},
  [164] =
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
  [12] = 6,
  [13] = 2,
  [14] = 14,
  [15] = 6,
  [16] = 3,
  [17] = 2,
  [18] = 3,
  [19] = 19,
  [20] = 5,
  [21] = 5,
  [22] = 22,
  [23] = 4,
  [24] = 24,
  [25] = 25,
  [26] = 4,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 28,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 31,
  [35] = 33,
  [36] = 31,
  [37] = 37,
  [38] = 38,
  [39] = 27,
  [40] = 40,
  [41] = 28,
  [42] = 42,
  [43] = 29,
  [44] = 38,
  [45] = 33,
  [46] = 46,
  [47] = 38,
  [48] = 29,
  [49] = 10,
  [50] = 9,
  [51] = 10,
  [52] = 52,
  [53] = 8,
  [54] = 54,
  [55] = 55,
  [56] = 55,
  [57] = 54,
  [58] = 58,
  [59] = 7,
  [60] = 7,
  [61] = 55,
  [62] = 9,
  [63] = 8,
  [64] = 64,
  [65] = 54,
  [66] = 66,
  [67] = 66,
  [68] = 68,
  [69] = 27,
  [70] = 66,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 74,
  [78] = 75,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 81,
  [85] = 85,
  [86] = 86,
  [87] = 85,
  [88] = 80,
  [89] = 82,
  [90] = 90,
  [91] = 91,
  [92] = 86,
  [93] = 93,
  [94] = 94,
  [95] = 91,
  [96] = 86,
  [97] = 93,
  [98] = 98,
  [99] = 93,
  [100] = 81,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 91,
  [108] = 82,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 64,
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
  [135] = 131,
  [136] = 68,
  [137] = 137,
  [138] = 134,
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
  [155] = 134,
  [156] = 156,
  [157] = 157,
  [158] = 131,
  [159] = 105,
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
  [177] = 177,
  [178] = 178,
  [179] = 171,
  [180] = 170,
  [181] = 164,
  [182] = 166,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 104,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 185,
  [196] = 101,
  [197] = 197,
  [198] = 198,
  [199] = 194,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 200,
  [210] = 210,
  [211] = 211,
  [212] = 212,
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
  [224] = 170,
  [225] = 164,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 217,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 122,
  [236] = 229,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 214,
  [241] = 241,
  [242] = 217,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 171,
  [253] = 216,
  [254] = 254,
  [255] = 255,
  [256] = 128,
  [257] = 257,
  [258] = 166,
  [259] = 250,
  [260] = 105,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 216,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
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
  [289] = 105,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
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
  [323] = 317,
  [324] = 316,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 308,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 316,
  [339] = 339,
  [340] = 340,
  [341] = 308,
  [342] = 342,
  [343] = 337,
  [344] = 316,
  [345] = 326,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 313,
  [351] = 351,
  [352] = 352,
  [353] = 335,
  [354] = 334,
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
      if (eof) ADVANCE(136);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '+') ADVANCE(179);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '<') ADVANCE(184);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(187);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(81);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(56);
      if (lookahead == '{') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == 'v') ADVANCE(211);
      if (lookahead == '{') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(258);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == 't') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(258);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead == 't') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(258);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(194);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == 'v') ADVANCE(211);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(258);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '{') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(258);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(155);
      END_STATE();
    case 9:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 's') ADVANCE(254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(129);
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
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(262);
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
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == 'w') ADVANCE(228);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(258);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == 'w') ADVANCE(228);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(258);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(199);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(116);
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
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(205);
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
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 130:
      if (lookahead == 'y') ADVANCE(201);
      END_STATE();
    case 131:
      if (lookahead == '}') ADVANCE(207);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 133:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(5);
      END_STATE();
    case 134:
      if (eof) ADVANCE(136);
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '+') ADVANCE(179);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(184);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(187);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'v') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(134)
      END_STATE();
    case 135:
      if (eof) ADVANCE(136);
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == 'v') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(135)
      END_STATE();
    case 136:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_generic);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(155);
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
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
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
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_elsif);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_from);
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
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_or);
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
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead == '>') ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '_') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_integer);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_real);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_string);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_array);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_refersTo);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_refersTo);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(238);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(231);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(258);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(257);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(258);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(242);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(258);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(253);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(258);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(222);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(258);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(261);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(263);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(213);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(227);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(225);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(212);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(245);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(244);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(164);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(167);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(200);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(223);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(229);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(234);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(235);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(251);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(198);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(250);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(217);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(226);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(255);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(252);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(206);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(243);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(221);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(256);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(162);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(152);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(196);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(249);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(230);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(210);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(247);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(208);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(220);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(215);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(176);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(157);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(246);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(219);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(214);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(202);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(258);
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
  [7] = {.lex_state = 134},
  [8] = {.lex_state = 134},
  [9] = {.lex_state = 134},
  [10] = {.lex_state = 134},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 3},
  [19] = {.lex_state = 135},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 135},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 135},
  [25] = {.lex_state = 135},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 53, .external_lex_state = 4},
  [55] = {.lex_state = 53, .external_lex_state = 4},
  [56] = {.lex_state = 53, .external_lex_state = 4},
  [57] = {.lex_state = 53, .external_lex_state = 4},
  [58] = {.lex_state = 53, .external_lex_state = 4},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 53, .external_lex_state = 4},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 134},
  [65] = {.lex_state = 53, .external_lex_state = 4},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 134},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 15},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 135},
  [102] = {.lex_state = 48, .external_lex_state = 4},
  [103] = {.lex_state = 48, .external_lex_state = 4},
  [104] = {.lex_state = 135},
  [105] = {.lex_state = 135},
  [106] = {.lex_state = 48, .external_lex_state = 4},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 0, .external_lex_state = 3},
  [109] = {.lex_state = 135},
  [110] = {.lex_state = 135},
  [111] = {.lex_state = 135},
  [112] = {.lex_state = 135},
  [113] = {.lex_state = 135},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 135},
  [116] = {.lex_state = 135},
  [117] = {.lex_state = 135},
  [118] = {.lex_state = 135},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 135},
  [121] = {.lex_state = 135},
  [122] = {.lex_state = 135},
  [123] = {.lex_state = 135},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 135},
  [127] = {.lex_state = 135},
  [128] = {.lex_state = 135},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 135},
  [131] = {.lex_state = 135},
  [132] = {.lex_state = 135},
  [133] = {.lex_state = 135},
  [134] = {.lex_state = 135},
  [135] = {.lex_state = 48, .external_lex_state = 4},
  [136] = {.lex_state = 0, .external_lex_state = 3},
  [137] = {.lex_state = 48, .external_lex_state = 4},
  [138] = {.lex_state = 48, .external_lex_state = 4},
  [139] = {.lex_state = 135, .external_lex_state = 3},
  [140] = {.lex_state = 48, .external_lex_state = 4},
  [141] = {.lex_state = 135, .external_lex_state = 3},
  [142] = {.lex_state = 135, .external_lex_state = 3},
  [143] = {.lex_state = 135, .external_lex_state = 3},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 53, .external_lex_state = 4},
  [147] = {.lex_state = 53, .external_lex_state = 4},
  [148] = {.lex_state = 53, .external_lex_state = 4},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 53, .external_lex_state = 4},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 53, .external_lex_state = 4},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 53, .external_lex_state = 4},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 7, .external_lex_state = 2},
  [158] = {.lex_state = 53, .external_lex_state = 4},
  [159] = {.lex_state = 53, .external_lex_state = 4},
  [160] = {.lex_state = 53, .external_lex_state = 4},
  [161] = {.lex_state = 53, .external_lex_state = 4},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 3},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 3},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 3},
  [177] = {.lex_state = 135, .external_lex_state = 3},
  [178] = {.lex_state = 0, .external_lex_state = 3},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 3},
  [188] = {.lex_state = 0, .external_lex_state = 3},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 7, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 3},
  [197] = {.lex_state = 7, .external_lex_state = 4},
  [198] = {.lex_state = 7, .external_lex_state = 4},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 135},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 0, .external_lex_state = 3},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0, .external_lex_state = 3},
  [205] = {.lex_state = 7, .external_lex_state = 4},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 135},
  [215] = {.lex_state = 135, .external_lex_state = 3},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 135},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0, .external_lex_state = 3},
  [224] = {.lex_state = 0, .external_lex_state = 3},
  [225] = {.lex_state = 0, .external_lex_state = 3},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 135, .external_lex_state = 3},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 135},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 135, .external_lex_state = 3},
  [236] = {.lex_state = 135},
  [237] = {.lex_state = 7},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 135},
  [241] = {.lex_state = 135},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 7},
  [247] = {.lex_state = 135, .external_lex_state = 3},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0, .external_lex_state = 3},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 135},
  [256] = {.lex_state = 135, .external_lex_state = 3},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0, .external_lex_state = 3},
  [259] = {.lex_state = 135},
  [260] = {.lex_state = 135, .external_lex_state = 3},
  [261] = {.lex_state = 135},
  [262] = {.lex_state = 0, .external_lex_state = 2},
  [263] = {.lex_state = 135},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 135, .external_lex_state = 3},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0, .external_lex_state = 3},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0, .external_lex_state = 3},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 7},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0, .external_lex_state = 3},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 135},
  [282] = {.lex_state = 0, .external_lex_state = 2},
  [283] = {.lex_state = 0, .external_lex_state = 2},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 7},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 7, .external_lex_state = 4},
  [288] = {.lex_state = 0, .external_lex_state = 3},
  [289] = {.lex_state = 7, .external_lex_state = 4},
  [290] = {.lex_state = 7},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 7, .external_lex_state = 4},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 7},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 7},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 134},
  [302] = {.lex_state = 7},
  [303] = {.lex_state = 7},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 7},
  [306] = {.lex_state = 7},
  [307] = {.lex_state = 0, .external_lex_state = 3},
  [308] = {.lex_state = 7},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 135},
  [311] = {.lex_state = 7},
  [312] = {.lex_state = 7},
  [313] = {.lex_state = 7},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 0, .external_lex_state = 2},
  [317] = {.lex_state = 7},
  [318] = {.lex_state = 0, .external_lex_state = 3},
  [319] = {.lex_state = 7},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 7},
  [324] = {.lex_state = 0, .external_lex_state = 2},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 7},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 7},
  [335] = {.lex_state = 7},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0, .external_lex_state = 2},
  [339] = {.lex_state = 7},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 7},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0, .external_lex_state = 2},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 7},
  [349] = {.lex_state = 7},
  [350] = {.lex_state = 7},
  [351] = {.lex_state = 7},
  [352] = {.lex_state = 7},
  [353] = {.lex_state = 7},
  [354] = {.lex_state = 7},
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
    [sym_program] = STATE(333),
    [sym_enum] = STATE(22),
    [sym_record] = STATE(22),
    [sym_export] = STATE(22),
    [sym_import] = STATE(22),
    [sym_module] = STATE(19),
    [sym_function_definition] = STATE(22),
    [sym_test] = STATE(22),
    [sym_constant] = STATE(22),
    [sym_variable] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
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
  [221] = 3,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(57), 21,
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
  [254] = 2,
    ACTIONS(61), 2,
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
    STATE(39), 1,
      sym_primary_expression,
    STATE(52), 1,
      sym_variable_access,
    STATE(162), 1,
      sym_expression,
    STATE(206), 1,
      sym_argument,
    ACTIONS(77), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(49), 2,
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
    STATE(171), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [376] = 5,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DOT,
    STATE(17), 1,
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
  [406] = 5,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DOT,
    STATE(16), 1,
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
  [436] = 12,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_var,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(52), 1,
      sym_variable_access,
    STATE(162), 1,
      sym_expression,
    STATE(226), 1,
      sym_argument,
    STATE(49), 2,
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
    STATE(171), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [480] = 5,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DOT,
    STATE(13), 1,
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
  [510] = 5,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      anon_sym_DOT,
    STATE(16), 1,
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
  [540] = 5,
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
  [685] = 10,
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
  [724] = 2,
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
  [848] = 6,
    STATE(91), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(133), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [878] = 9,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(164), 1,
      sym_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(171), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [914] = 9,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_not,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(27), 1,
      sym_primary_expression,
    STATE(230), 1,
      sym_expression,
    ACTIONS(143), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(145), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(179), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [950] = 9,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_not,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(69), 1,
      sym_primary_expression,
    STATE(225), 1,
      sym_expression,
    ACTIONS(153), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(155), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(51), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(252), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [986] = 9,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_not,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(27), 1,
      sym_primary_expression,
    STATE(180), 1,
      sym_expression,
    ACTIONS(143), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(145), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(179), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1022] = 9,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_not,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(27), 1,
      sym_primary_expression,
    STATE(248), 1,
      sym_expression,
    ACTIONS(143), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(145), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(179), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1058] = 9,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_not,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(27), 1,
      sym_primary_expression,
    STATE(166), 1,
      sym_expression,
    ACTIONS(143), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(145), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(179), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1094] = 9,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_not,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(69), 1,
      sym_primary_expression,
    STATE(224), 1,
      sym_expression,
    ACTIONS(153), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(155), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(51), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(252), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1130] = 9,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(182), 1,
      sym_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(171), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1166] = 9,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(170), 1,
      sym_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(171), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1202] = 9,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_not,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(27), 1,
      sym_primary_expression,
    STATE(251), 1,
      sym_expression,
    ACTIONS(143), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(145), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(179), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1238] = 9,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_not,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(27), 1,
      sym_primary_expression,
    STATE(264), 1,
      sym_expression,
    ACTIONS(143), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(145), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(179), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1274] = 6,
    STATE(95), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(161), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(159), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(133), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [1304] = 9,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(39), 1,
      sym_primary_expression,
    STATE(208), 1,
      sym_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(171), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1340] = 9,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_not,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(27), 1,
      sym_primary_expression,
    STATE(181), 1,
      sym_expression,
    ACTIONS(143), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(145), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(179), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1376] = 9,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_not,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(69), 1,
      sym_primary_expression,
    STATE(204), 1,
      sym_expression,
    ACTIONS(153), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(155), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(51), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(252), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1412] = 9,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_not,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(27), 1,
      sym_primary_expression,
    STATE(217), 1,
      sym_expression,
    ACTIONS(143), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(145), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(179), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1448] = 9,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_not,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(27), 1,
      sym_primary_expression,
    STATE(253), 1,
      sym_expression,
    ACTIONS(143), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(145), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(179), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1484] = 9,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_not,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(69), 1,
      sym_primary_expression,
    STATE(258), 1,
      sym_expression,
    ACTIONS(153), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(155), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(51), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(252), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1520] = 9,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_not,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(69), 1,
      sym_primary_expression,
    STATE(202), 1,
      sym_expression,
    ACTIONS(153), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(155), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(51), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(252), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1556] = 9,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_not,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(27), 1,
      sym_primary_expression,
    STATE(216), 1,
      sym_expression,
    ACTIONS(143), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(145), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(179), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1592] = 9,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_not,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(27), 1,
      sym_primary_expression,
    STATE(242), 1,
      sym_expression,
    ACTIONS(143), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(145), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(179), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1628] = 2,
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
  [1649] = 2,
    ACTIONS(61), 2,
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
  [1670] = 2,
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
  [1691] = 3,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 3,
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
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1714] = 3,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(170), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(57), 11,
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
  [1737] = 9,
    ACTIONS(172), 1,
      anon_sym_for,
    ACTIONS(174), 1,
      anon_sym_repeat,
    ACTIONS(176), 1,
      anon_sym_while,
    ACTIONS(178), 1,
      anon_sym_if,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(182), 1,
      sym__dedent,
    STATE(301), 1,
      sym_variable_access,
    STATE(186), 2,
      sym_call_statement,
      sym_assignment,
    STATE(56), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [1772] = 9,
    ACTIONS(172), 1,
      anon_sym_for,
    ACTIONS(174), 1,
      anon_sym_repeat,
    ACTIONS(176), 1,
      anon_sym_while,
    ACTIONS(178), 1,
      anon_sym_if,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(184), 1,
      sym__dedent,
    STATE(301), 1,
      sym_variable_access,
    STATE(186), 2,
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
  [1807] = 9,
    ACTIONS(172), 1,
      anon_sym_for,
    ACTIONS(174), 1,
      anon_sym_repeat,
    ACTIONS(176), 1,
      anon_sym_while,
    ACTIONS(178), 1,
      anon_sym_if,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(186), 1,
      sym__dedent,
    STATE(301), 1,
      sym_variable_access,
    STATE(186), 2,
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
  [1842] = 9,
    ACTIONS(172), 1,
      anon_sym_for,
    ACTIONS(174), 1,
      anon_sym_repeat,
    ACTIONS(176), 1,
      anon_sym_while,
    ACTIONS(178), 1,
      anon_sym_if,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(188), 1,
      sym__dedent,
    STATE(301), 1,
      sym_variable_access,
    STATE(186), 2,
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
  [1877] = 9,
    ACTIONS(190), 1,
      anon_sym_for,
    ACTIONS(193), 1,
      anon_sym_repeat,
    ACTIONS(196), 1,
      anon_sym_while,
    ACTIONS(199), 1,
      anon_sym_if,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(205), 1,
      sym__dedent,
    STATE(301), 1,
      sym_variable_access,
    STATE(186), 2,
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
  [1912] = 2,
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
  [1933] = 2,
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
  [1954] = 9,
    ACTIONS(172), 1,
      anon_sym_for,
    ACTIONS(174), 1,
      anon_sym_repeat,
    ACTIONS(176), 1,
      anon_sym_while,
    ACTIONS(178), 1,
      anon_sym_if,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__dedent,
    STATE(301), 1,
      sym_variable_access,
    STATE(186), 2,
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
  [1989] = 2,
    ACTIONS(61), 2,
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
  [2010] = 3,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(57), 11,
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
  [2033] = 5,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_constant_repeat1,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(209), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [2060] = 9,
    ACTIONS(172), 1,
      anon_sym_for,
    ACTIONS(174), 1,
      anon_sym_repeat,
    ACTIONS(176), 1,
      anon_sym_while,
    ACTIONS(178), 1,
      anon_sym_if,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym__dedent,
    STATE(301), 1,
      sym_variable_access,
    STATE(186), 2,
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
  [2095] = 4,
    ACTIONS(161), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(217), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(215), 9,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [2120] = 4,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(217), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(215), 9,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2145] = 3,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(219), 10,
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
  [2167] = 6,
    STATE(107), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(223), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(225), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(170), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(221), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2195] = 4,
    ACTIONS(217), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(170), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(215), 7,
      sym__indent,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2218] = 10,
    ACTIONS(229), 1,
      anon_sym_real,
    ACTIONS(231), 1,
      anon_sym_array,
    ACTIONS(233), 1,
      sym_refersTo,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(157), 1,
      sym__type_name,
    STATE(167), 1,
      sym_type,
    STATE(249), 1,
      sym__custom_type,
    STATE(254), 1,
      sym__custom_generic_type,
    ACTIONS(227), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(238), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2252] = 10,
    ACTIONS(229), 1,
      anon_sym_real,
    ACTIONS(231), 1,
      anon_sym_array,
    ACTIONS(233), 1,
      sym_refersTo,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(157), 1,
      sym__type_name,
    STATE(175), 1,
      sym_type,
    STATE(249), 1,
      sym__custom_type,
    STATE(254), 1,
      sym__custom_generic_type,
    ACTIONS(227), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(238), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2286] = 10,
    ACTIONS(229), 1,
      anon_sym_real,
    ACTIONS(231), 1,
      anon_sym_array,
    ACTIONS(233), 1,
      sym_refersTo,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(157), 1,
      sym__type_name,
    STATE(168), 1,
      sym_type,
    STATE(249), 1,
      sym__custom_type,
    STATE(254), 1,
      sym__custom_generic_type,
    ACTIONS(227), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(238), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2320] = 10,
    ACTIONS(229), 1,
      anon_sym_real,
    ACTIONS(233), 1,
      sym_refersTo,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_array,
    STATE(157), 1,
      sym__type_name,
    STATE(199), 1,
      sym_declaration_type,
    STATE(249), 1,
      sym__custom_type,
    STATE(254), 1,
      sym__custom_generic_type,
    ACTIONS(227), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(282), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2354] = 10,
    ACTIONS(229), 1,
      anon_sym_real,
    ACTIONS(233), 1,
      sym_refersTo,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_array,
    STATE(157), 1,
      sym__type_name,
    STATE(185), 1,
      sym_declaration_type,
    STATE(249), 1,
      sym__custom_type,
    STATE(254), 1,
      sym__custom_generic_type,
    ACTIONS(227), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(282), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2388] = 10,
    ACTIONS(229), 1,
      anon_sym_real,
    ACTIONS(231), 1,
      anon_sym_array,
    ACTIONS(233), 1,
      sym_refersTo,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(157), 1,
      sym__type_name,
    STATE(190), 1,
      sym_type,
    STATE(249), 1,
      sym__custom_type,
    STATE(254), 1,
      sym__custom_generic_type,
    ACTIONS(227), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(238), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2422] = 10,
    ACTIONS(229), 1,
      anon_sym_real,
    ACTIONS(233), 1,
      sym_refersTo,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_array,
    STATE(157), 1,
      sym__type_name,
    STATE(194), 1,
      sym_declaration_type,
    STATE(249), 1,
      sym__custom_type,
    STATE(254), 1,
      sym__custom_generic_type,
    ACTIONS(227), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(282), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2456] = 10,
    ACTIONS(229), 1,
      anon_sym_real,
    ACTIONS(233), 1,
      sym_refersTo,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_array,
    STATE(157), 1,
      sym__type_name,
    STATE(195), 1,
      sym_declaration_type,
    STATE(249), 1,
      sym__custom_type,
    STATE(254), 1,
      sym__custom_generic_type,
    ACTIONS(227), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(282), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2490] = 10,
    ACTIONS(229), 1,
      anon_sym_real,
    ACTIONS(231), 1,
      anon_sym_array,
    ACTIONS(233), 1,
      sym_refersTo,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(157), 1,
      sym__type_name,
    STATE(163), 1,
      sym_type,
    STATE(249), 1,
      sym__custom_type,
    STATE(254), 1,
      sym__custom_generic_type,
    ACTIONS(227), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(238), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2524] = 6,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(64), 1,
      sym_primary_expression,
    ACTIONS(143), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(145), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2549] = 6,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(62), 1,
      sym_primary_expression,
    ACTIONS(153), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(155), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(51), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2574] = 4,
    STATE(82), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(244), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(242), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [2595] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(129), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2620] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(50), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2645] = 6,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(136), 1,
      sym_primary_expression,
    ACTIONS(153), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(155), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(51), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2670] = 6,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(70), 1,
      sym_primary_expression,
    ACTIONS(153), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(155), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(51), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2695] = 6,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(68), 1,
      sym_primary_expression,
    ACTIONS(143), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(145), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2720] = 6,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(114), 1,
      sym_primary_expression,
    ACTIONS(153), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(155), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(51), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2745] = 4,
    STATE(89), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(250), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(242), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [2766] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(119), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2791] = 4,
    STATE(82), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(253), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [2812] = 6,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(67), 1,
      sym_primary_expression,
    ACTIONS(143), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(145), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2837] = 6,
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
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2862] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(125), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2887] = 4,
    STATE(89), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(253), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [2908] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(66), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2933] = 6,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(53), 1,
      sym_primary_expression,
    ACTIONS(153), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(155), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(51), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2958] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(124), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(49), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2983] = 6,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expression,
    ACTIONS(143), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(145), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3008] = 6,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(9), 1,
      sym_primary_expression,
    ACTIONS(143), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(145), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3033] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_constant_repeat1,
    ACTIONS(255), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3051] = 7,
    ACTIONS(259), 1,
      anon_sym_elsif,
    ACTIONS(261), 1,
      anon_sym_else,
    ACTIONS(263), 1,
      sym__dedent,
    STATE(106), 1,
      aux_sym_if_then_statement_repeat1,
    STATE(137), 1,
      sym_elsif,
    STATE(152), 1,
      sym_else,
    ACTIONS(257), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3077] = 7,
    ACTIONS(259), 1,
      anon_sym_elsif,
    ACTIONS(261), 1,
      anon_sym_else,
    ACTIONS(267), 1,
      sym__dedent,
    STATE(102), 1,
      aux_sym_if_then_statement_repeat1,
    STATE(137), 1,
      sym_elsif,
    STATE(148), 1,
      sym_else,
    ACTIONS(265), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3103] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_constant_repeat1,
    ACTIONS(269), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3121] = 1,
    ACTIONS(274), 11,
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
  [3135] = 5,
    ACTIONS(278), 1,
      anon_sym_elsif,
    ACTIONS(281), 1,
      sym__dedent,
    STATE(106), 1,
      aux_sym_if_then_statement_repeat1,
    STATE(137), 1,
      sym_elsif,
    ACTIONS(276), 6,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
  [3156] = 4,
    STATE(108), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(225), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(253), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(221), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3175] = 4,
    STATE(108), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(242), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(283), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3194] = 1,
    ACTIONS(289), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3206] = 1,
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
  [3218] = 1,
    ACTIONS(293), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3230] = 1,
    ACTIONS(295), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3242] = 1,
    ACTIONS(297), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3254] = 5,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_constant_repeat1,
    ACTIONS(209), 2,
      sym__indent,
      anon_sym_constants,
    ACTIONS(223), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(170), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
  [3274] = 1,
    ACTIONS(301), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3286] = 1,
    ACTIONS(303), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3298] = 1,
    ACTIONS(305), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3310] = 1,
    ACTIONS(307), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3322] = 5,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(311), 1,
      sym__newline,
    ACTIONS(161), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(272), 2,
      sym_comment,
      sym__end_line,
    ACTIONS(163), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
  [3342] = 1,
    ACTIONS(313), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3354] = 1,
    ACTIONS(315), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3366] = 1,
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
  [3378] = 1,
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
  [3390] = 5,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      sym__newline,
    ACTIONS(161), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(273), 2,
      sym_comment,
      sym__end_line,
    ACTIONS(163), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
  [3410] = 5,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(323), 1,
      sym__newline,
    ACTIONS(161), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(278), 2,
      sym_comment,
      sym__end_line,
    ACTIONS(163), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
  [3430] = 1,
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
  [3442] = 1,
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
  [3454] = 1,
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
  [3466] = 5,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(331), 1,
      sym__newline,
    ACTIONS(161), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(286), 2,
      sym_comment,
      sym__end_line,
    ACTIONS(163), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
  [3486] = 1,
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
  [3498] = 1,
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
  [3510] = 1,
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
  [3522] = 1,
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
  [3534] = 1,
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
  [3546] = 2,
    ACTIONS(335), 1,
      sym__dedent,
    ACTIONS(343), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [3559] = 3,
    ACTIONS(223), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(170), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(219), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [3574] = 2,
    ACTIONS(347), 1,
      sym__dedent,
    ACTIONS(345), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [3587] = 2,
    ACTIONS(341), 1,
      sym__dedent,
    ACTIONS(349), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [3600] = 6,
    ACTIONS(351), 1,
      anon_sym_constants,
    ACTIONS(353), 1,
      anon_sym_variables,
    ACTIONS(355), 1,
      sym__indent,
    STATE(133), 1,
      sym_block,
    STATE(143), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(176), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3621] = 2,
    ACTIONS(359), 1,
      sym__dedent,
    ACTIONS(357), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [3634] = 6,
    ACTIONS(351), 1,
      anon_sym_constants,
    ACTIONS(353), 1,
      anon_sym_variables,
    ACTIONS(355), 1,
      sym__indent,
    STATE(127), 1,
      sym_block,
    STATE(173), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
    STATE(177), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [3655] = 6,
    ACTIONS(351), 1,
      anon_sym_constants,
    ACTIONS(353), 1,
      anon_sym_variables,
    ACTIONS(355), 1,
      sym__indent,
    STATE(109), 1,
      sym_block,
    STATE(141), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(178), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3676] = 6,
    ACTIONS(351), 1,
      anon_sym_constants,
    ACTIONS(353), 1,
      anon_sym_variables,
    ACTIONS(355), 1,
      sym__indent,
    STATE(120), 1,
      sym_block,
    STATE(165), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
    STATE(177), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [3697] = 5,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(361), 1,
      anon_sym_LBRACK,
    ACTIONS(363), 1,
      sym__newline,
    STATE(213), 1,
      sym_imports,
    STATE(117), 2,
      sym_comment,
      sym__end_line,
  [3714] = 4,
    ACTIONS(365), 1,
      anon_sym_generic,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym__newline,
    STATE(227), 3,
      sym_generics,
      sym_comment,
      sym__end_line,
  [3729] = 2,
    ACTIONS(373), 1,
      sym__dedent,
    ACTIONS(371), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3740] = 2,
    ACTIONS(377), 1,
      sym__dedent,
    ACTIONS(375), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3751] = 2,
    ACTIONS(381), 1,
      sym__dedent,
    ACTIONS(379), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3762] = 6,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 1,
      anon_sym_var,
    ACTIONS(387), 1,
      sym_identifier,
    STATE(222), 1,
      sym_parameter,
    STATE(299), 1,
      sym_var,
    STATE(300), 1,
      sym__parameters,
  [3781] = 2,
    ACTIONS(391), 1,
      sym__dedent,
    ACTIONS(389), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3792] = 5,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      sym__newline,
    STATE(153), 1,
      aux_sym_generics_repeat1,
    STATE(267), 2,
      sym_comment,
      sym__end_line,
  [3809] = 2,
    ACTIONS(399), 1,
      sym__dedent,
    ACTIONS(397), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3820] = 5,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      sym__newline,
    STATE(193), 1,
      aux_sym_generics_repeat1,
    STATE(247), 2,
      sym_comment,
      sym__end_line,
  [3837] = 5,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      sym__newline,
    STATE(209), 1,
      aux_sym_export_repeat1,
    STATE(115), 2,
      sym_comment,
      sym__end_line,
  [3854] = 2,
    ACTIONS(341), 1,
      sym__dedent,
    ACTIONS(349), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3865] = 5,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      sym__newline,
    STATE(154), 1,
      aux_sym_export_repeat1,
    STATE(116), 2,
      sym_comment,
      sym__end_line,
  [3882] = 4,
    ACTIONS(411), 1,
      sym_identifier,
    STATE(172), 1,
      sym__generic,
    STATE(228), 1,
      sym__generics,
    ACTIONS(409), 3,
      sym__newline,
      anon_sym_EQ,
      aux_sym_comment_token1,
  [3897] = 2,
    ACTIONS(335), 1,
      sym__dedent,
    ACTIONS(343), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3908] = 2,
    ACTIONS(274), 1,
      sym__dedent,
    ACTIONS(413), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3919] = 2,
    ACTIONS(417), 1,
      sym__dedent,
    ACTIONS(415), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3930] = 2,
    ACTIONS(421), 1,
      sym__dedent,
    ACTIONS(419), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3941] = 3,
    ACTIONS(425), 1,
      anon_sym_and,
    ACTIONS(427), 1,
      anon_sym_or,
    ACTIONS(423), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [3953] = 4,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_EQ,
    ACTIONS(431), 1,
      sym__newline,
    STATE(293), 2,
      sym_comment,
      sym__end_line,
  [3967] = 2,
    ACTIONS(425), 1,
      anon_sym_and,
    ACTIONS(433), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_or,
      aux_sym_comment_token1,
  [3977] = 4,
    ACTIONS(351), 1,
      anon_sym_constants,
    ACTIONS(355), 1,
      sym__indent,
    STATE(123), 1,
      sym_block,
    STATE(188), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3991] = 1,
    ACTIONS(435), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [3999] = 4,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(437), 1,
      anon_sym_EQ,
    ACTIONS(439), 1,
      sym__newline,
    STATE(291), 2,
      sym_comment,
      sym__end_line,
  [4013] = 4,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      anon_sym_EQ,
    ACTIONS(443), 1,
      sym__newline,
    STATE(269), 2,
      sym_comment,
      sym__end_line,
  [4027] = 3,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym__generics_repeat1,
    ACTIONS(447), 3,
      sym__newline,
      anon_sym_EQ,
      aux_sym_comment_token1,
  [4039] = 1,
    ACTIONS(433), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4047] = 1,
    ACTIONS(133), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4055] = 3,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym__generics_repeat1,
    ACTIONS(449), 3,
      sym__newline,
      anon_sym_EQ,
      aux_sym_comment_token1,
  [4067] = 4,
    ACTIONS(351), 1,
      anon_sym_constants,
    ACTIONS(355), 1,
      sym__indent,
    STATE(132), 1,
      sym_block,
    STATE(188), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4081] = 3,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym__generics_repeat1,
    ACTIONS(454), 3,
      sym__newline,
      anon_sym_EQ,
      aux_sym_comment_token1,
  [4093] = 4,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(456), 1,
      anon_sym_EQ,
    ACTIONS(458), 1,
      sym__newline,
    STATE(284), 2,
      sym_comment,
      sym__end_line,
  [4107] = 4,
    ACTIONS(351), 1,
      anon_sym_constants,
    ACTIONS(355), 1,
      sym__indent,
    STATE(118), 1,
      sym_block,
    STATE(188), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4121] = 3,
    ACTIONS(462), 1,
      anon_sym_variables,
    ACTIONS(460), 2,
      sym__indent,
      anon_sym_constants,
    STATE(177), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [4133] = 4,
    ACTIONS(351), 1,
      anon_sym_constants,
    ACTIONS(355), 1,
      sym__indent,
    STATE(111), 1,
      sym_block,
    STATE(188), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4147] = 1,
    ACTIONS(133), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [4155] = 1,
    ACTIONS(433), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [4163] = 2,
    ACTIONS(465), 1,
      anon_sym_and,
    ACTIONS(433), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_or,
  [4173] = 1,
    ACTIONS(435), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4181] = 4,
    ACTIONS(467), 1,
      sym_identifier,
    STATE(157), 1,
      sym__type_name,
    STATE(232), 1,
      sym__custom_generic_type,
    STATE(234), 1,
      sym__custom_type,
  [4194] = 3,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(472), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4205] = 3,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(474), 1,
      sym__newline,
    STATE(122), 2,
      sym_comment,
      sym__end_line,
  [4216] = 3,
    ACTIONS(476), 1,
      aux_sym_comment_token1,
    ACTIONS(478), 1,
      sym__newline,
    STATE(146), 2,
      sym_comment,
      sym__end_line,
  [4227] = 3,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_constant_repeat1,
    ACTIONS(269), 2,
      sym__indent,
      anon_sym_constants,
  [4238] = 3,
    ACTIONS(483), 1,
      anon_sym_constants,
    ACTIONS(486), 1,
      sym__indent,
    STATE(188), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4249] = 2,
    ACTIONS(490), 1,
      anon_sym_from,
    ACTIONS(488), 3,
      sym__newline,
      anon_sym_EQ,
      aux_sym_comment_token1,
  [4258] = 3,
    ACTIONS(492), 1,
      aux_sym_comment_token1,
    ACTIONS(494), 1,
      sym__newline,
    STATE(294), 2,
      sym_comment,
      sym__end_line,
  [4269] = 2,
    ACTIONS(496), 1,
      anon_sym_from,
    ACTIONS(488), 3,
      sym__newline,
      anon_sym_EQ,
      aux_sym_comment_token1,
  [4278] = 1,
    ACTIONS(498), 4,
      sym__newline,
      anon_sym_EQ,
      aux_sym_comment_token1,
      sym_identifier,
  [4285] = 3,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_generics_repeat1,
    ACTIONS(503), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4296] = 3,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(505), 1,
      sym__newline,
    STATE(128), 2,
      sym_comment,
      sym__end_line,
  [4307] = 3,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(507), 1,
      sym__newline,
    STATE(235), 2,
      sym_comment,
      sym__end_line,
  [4318] = 3,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_constant_repeat1,
    ACTIONS(255), 2,
      sym__indent,
      anon_sym_constants,
  [4329] = 4,
    ACTIONS(509), 1,
      sym_identifier,
    ACTIONS(512), 1,
      sym__dedent,
    STATE(197), 1,
      aux_sym_record_repeat1,
    STATE(287), 1,
      sym_record_item,
  [4342] = 4,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(516), 1,
      sym__dedent,
    STATE(197), 1,
      aux_sym_record_repeat1,
    STATE(287), 1,
      sym_record_item,
  [4355] = 3,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(518), 1,
      sym__newline,
    STATE(256), 2,
      sym_comment,
      sym__end_line,
  [4366] = 3,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_export_repeat1,
    ACTIONS(523), 2,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4377] = 4,
    ACTIONS(385), 1,
      anon_sym_var,
    ACTIONS(387), 1,
      sym_identifier,
    STATE(274), 1,
      sym_parameter,
    STATE(299), 1,
      sym_var,
  [4390] = 4,
    ACTIONS(525), 1,
      anon_sym_and,
    ACTIONS(527), 1,
      anon_sym_or,
    ACTIONS(529), 1,
      sym__indent,
    STATE(161), 1,
      sym_block,
  [4403] = 1,
    ACTIONS(531), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4410] = 4,
    ACTIONS(525), 1,
      anon_sym_and,
    ACTIONS(527), 1,
      anon_sym_or,
    ACTIONS(529), 1,
      sym__indent,
    STATE(147), 1,
      sym_block,
  [4423] = 4,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(533), 1,
      sym__dedent,
    STATE(197), 1,
      aux_sym_record_repeat1,
    STATE(287), 1,
      sym_record_item,
  [4436] = 3,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(537), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4447] = 3,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(539), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4458] = 3,
    ACTIONS(425), 1,
      anon_sym_and,
    ACTIONS(427), 1,
      anon_sym_or,
    ACTIONS(541), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4469] = 3,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_export_repeat1,
    ACTIONS(523), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4480] = 1,
    ACTIONS(546), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      aux_sym_comment_token1,
  [4487] = 1,
    ACTIONS(548), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4494] = 1,
    ACTIONS(550), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      aux_sym_comment_token1,
  [4501] = 3,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(552), 1,
      sym__newline,
    STATE(113), 2,
      sym_comment,
      sym__end_line,
  [4512] = 3,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_COLON,
    STATE(200), 1,
      aux_sym_export_repeat1,
  [4522] = 1,
    ACTIONS(558), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4528] = 3,
    ACTIONS(465), 1,
      anon_sym_and,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
    ACTIONS(562), 1,
      anon_sym_or,
  [4538] = 3,
    ACTIONS(465), 1,
      anon_sym_and,
    ACTIONS(562), 1,
      anon_sym_or,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
  [4548] = 3,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      aux_sym_export_repeat1,
  [4558] = 1,
    ACTIONS(568), 3,
      sym__newline,
      anon_sym_generic,
      aux_sym_comment_token1,
  [4564] = 3,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_RBRACK,
    STATE(220), 1,
      aux_sym_enum_repeat1,
  [4574] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_COLON,
    STATE(263), 1,
      aux_sym_parameter_repeat1,
  [4584] = 3,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(581), 1,
      anon_sym_SEMI,
    STATE(257), 1,
      aux_sym__parameters_repeat1,
  [4594] = 3,
    ACTIONS(365), 1,
      anon_sym_generic,
    ACTIONS(583), 1,
      sym__indent,
    STATE(318), 1,
      sym_generics,
  [4604] = 1,
    ACTIONS(433), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4610] = 2,
    ACTIONS(525), 1,
      anon_sym_and,
    ACTIONS(433), 2,
      sym__indent,
      anon_sym_or,
  [4618] = 1,
    ACTIONS(472), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4624] = 1,
    ACTIONS(585), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4630] = 1,
    ACTIONS(587), 3,
      sym__newline,
      anon_sym_EQ,
      aux_sym_comment_token1,
  [4636] = 3,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_COLON,
    STATE(214), 1,
      aux_sym_export_repeat1,
  [4646] = 3,
    ACTIONS(465), 1,
      anon_sym_and,
    ACTIONS(562), 1,
      anon_sym_or,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [4656] = 1,
    ACTIONS(593), 3,
      sym__newline,
      anon_sym_EQ,
      aux_sym_comment_token1,
  [4662] = 1,
    ACTIONS(595), 3,
      sym__newline,
      anon_sym_EQ,
      aux_sym_comment_token1,
  [4668] = 3,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    STATE(220), 1,
      aux_sym_enum_repeat1,
  [4678] = 1,
    ACTIONS(601), 3,
      sym__newline,
      anon_sym_EQ,
      aux_sym_comment_token1,
  [4684] = 1,
    ACTIONS(317), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4690] = 3,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_COLON,
    STATE(240), 1,
      aux_sym_export_repeat1,
  [4700] = 3,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(205), 1,
      aux_sym_record_repeat1,
    STATE(287), 1,
      sym_record_item,
  [4710] = 1,
    ACTIONS(605), 3,
      sym__newline,
      anon_sym_EQ,
      aux_sym_comment_token1,
  [4716] = 3,
    ACTIONS(607), 1,
      sym_identifier,
    STATE(139), 1,
      sym_function_header,
    STATE(215), 1,
      sym__function_header,
  [4726] = 3,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(609), 1,
      anon_sym_COLON,
    STATE(200), 1,
      aux_sym_export_repeat1,
  [4736] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      anon_sym_COLON,
    STATE(255), 1,
      aux_sym_parameter_repeat1,
  [4746] = 3,
    ACTIONS(465), 1,
      anon_sym_and,
    ACTIONS(562), 1,
      anon_sym_or,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
  [4756] = 1,
    ACTIONS(615), 3,
      sym__newline,
      anon_sym_EQ,
      aux_sym_comment_token1,
  [4762] = 1,
    ACTIONS(617), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4768] = 1,
    ACTIONS(619), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4774] = 3,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(198), 1,
      aux_sym_record_repeat1,
    STATE(287), 1,
      sym_record_item,
  [4784] = 1,
    ACTIONS(621), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4790] = 3,
    ACTIONS(465), 1,
      anon_sym_and,
    ACTIONS(562), 1,
      anon_sym_or,
    ACTIONS(623), 1,
      anon_sym_then,
  [4800] = 1,
    ACTIONS(625), 3,
      sym__newline,
      anon_sym_EQ,
      aux_sym_comment_token1,
  [4806] = 1,
    ACTIONS(627), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4812] = 3,
    ACTIONS(465), 1,
      anon_sym_and,
    ACTIONS(562), 1,
      anon_sym_or,
    ACTIONS(629), 1,
      anon_sym_then,
  [4822] = 1,
    ACTIONS(133), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4828] = 3,
    ACTIONS(465), 1,
      anon_sym_and,
    ACTIONS(562), 1,
      anon_sym_or,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
  [4838] = 1,
    ACTIONS(633), 3,
      sym__newline,
      anon_sym_EQ,
      aux_sym_comment_token1,
  [4844] = 3,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    ACTIONS(638), 1,
      anon_sym_COLON,
    STATE(255), 1,
      aux_sym_parameter_repeat1,
  [4854] = 1,
    ACTIONS(329), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4860] = 3,
    ACTIONS(581), 1,
      anon_sym_SEMI,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      aux_sym__parameters_repeat1,
  [4870] = 1,
    ACTIONS(435), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4876] = 1,
    ACTIONS(627), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4882] = 1,
    ACTIONS(274), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4888] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_COLON,
    STATE(241), 1,
      aux_sym_parameter_repeat1,
  [4898] = 1,
    ACTIONS(644), 3,
      sym__newline,
      anon_sym_generic,
      aux_sym_comment_token1,
  [4904] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      anon_sym_COLON,
    STATE(255), 1,
      aux_sym_parameter_repeat1,
  [4914] = 3,
    ACTIONS(465), 1,
      anon_sym_and,
    ACTIONS(562), 1,
      anon_sym_or,
    ACTIONS(648), 1,
      anon_sym_RBRACK,
  [4924] = 3,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_RBRACK,
    STATE(200), 1,
      aux_sym_export_repeat1,
  [4934] = 3,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    ACTIONS(654), 1,
      anon_sym_SEMI,
    STATE(266), 1,
      aux_sym__parameters_repeat1,
  [4944] = 1,
    ACTIONS(657), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4950] = 3,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      aux_sym_enum_repeat1,
  [4960] = 1,
    ACTIONS(661), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4965] = 2,
    ACTIONS(529), 1,
      sym__indent,
    STATE(160), 1,
      sym_block,
  [4972] = 1,
    ACTIONS(663), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4977] = 1,
    ACTIONS(665), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4982] = 1,
    ACTIONS(667), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4987] = 1,
    ACTIONS(652), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4992] = 2,
    ACTIONS(669), 1,
      sym__indent,
    STATE(140), 1,
      sym_block,
  [4999] = 1,
    ACTIONS(671), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5004] = 2,
    ACTIONS(411), 1,
      sym_identifier,
    STATE(210), 1,
      sym__generic,
  [5011] = 1,
    ACTIONS(673), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5016] = 2,
    ACTIONS(669), 1,
      sym__indent,
    STATE(103), 1,
      sym_block,
  [5023] = 2,
    ACTIONS(675), 1,
      anon_sym_from,
    STATE(270), 1,
      sym_range,
  [5030] = 1,
    ACTIONS(638), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [5035] = 1,
    ACTIONS(677), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5040] = 1,
    ACTIONS(679), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5045] = 1,
    ACTIONS(681), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5050] = 2,
    ACTIONS(683), 1,
      sym_identifier,
    STATE(244), 1,
      sym_variable_access,
  [5057] = 1,
    ACTIONS(685), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5062] = 1,
    ACTIONS(687), 2,
      sym__dedent,
      sym_identifier,
  [5067] = 2,
    ACTIONS(529), 1,
      sym__indent,
    STATE(150), 1,
      sym_block,
  [5074] = 1,
    ACTIONS(274), 2,
      sym__dedent,
      sym_identifier,
  [5079] = 2,
    ACTIONS(607), 1,
      sym_identifier,
    STATE(142), 1,
      sym__function_header,
  [5086] = 1,
    ACTIONS(689), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5091] = 2,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_parameters,
  [5098] = 1,
    ACTIONS(693), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5103] = 1,
    ACTIONS(695), 2,
      sym__dedent,
      sym_identifier,
  [5108] = 1,
    ACTIONS(697), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5113] = 1,
    ACTIONS(699), 1,
      sym_float,
  [5117] = 1,
    ACTIONS(701), 1,
      sym_identifier,
  [5121] = 1,
    ACTIONS(703), 1,
      anon_sym_from,
  [5125] = 1,
    ACTIONS(705), 1,
      sym_identifier,
  [5129] = 1,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
  [5133] = 1,
    ACTIONS(709), 1,
      anon_sym_COLON_EQ,
  [5137] = 1,
    ACTIONS(711), 1,
      sym_identifier,
  [5141] = 1,
    ACTIONS(713), 1,
      sym_identifier,
  [5145] = 1,
    ACTIONS(715), 1,
      anon_sym_until,
  [5149] = 1,
    ACTIONS(717), 1,
      sym_identifier,
  [5153] = 1,
    ACTIONS(719), 1,
      sym_identifier,
  [5157] = 1,
    ACTIONS(721), 1,
      sym__indent,
  [5161] = 1,
    ACTIONS(723), 1,
      sym_identifier,
  [5165] = 1,
    ACTIONS(725), 1,
      anon_sym_of,
  [5169] = 1,
    ACTIONS(727), 1,
      anon_sym_COLON,
  [5173] = 1,
    ACTIONS(729), 1,
      sym_identifier,
  [5177] = 1,
    ACTIONS(731), 1,
      sym_identifier,
  [5181] = 1,
    ACTIONS(733), 1,
      sym_identifier,
  [5185] = 1,
    ACTIONS(735), 1,
      sym_integer,
  [5189] = 1,
    ACTIONS(737), 1,
      sym_identifier,
  [5193] = 1,
    ACTIONS(739), 1,
      sym__newline,
  [5197] = 1,
    ACTIONS(741), 1,
      sym_identifier,
  [5201] = 1,
    ACTIONS(743), 1,
      sym__indent,
  [5205] = 1,
    ACTIONS(745), 1,
      sym_identifier,
  [5209] = 1,
    ACTIONS(747), 1,
      sym_float,
  [5213] = 1,
    ACTIONS(749), 1,
      anon_sym_LBRACK,
  [5217] = 1,
    ACTIONS(751), 1,
      sym_integer,
  [5221] = 1,
    ACTIONS(753), 1,
      sym_identifier,
  [5225] = 1,
    ACTIONS(755), 1,
      sym__newline,
  [5229] = 1,
    ACTIONS(757), 1,
      sym_integer,
  [5233] = 1,
    ACTIONS(759), 1,
      anon_sym_EQ,
  [5237] = 1,
    ACTIONS(761), 1,
      anon_sym_for,
  [5241] = 1,
    ACTIONS(763), 1,
      sym_integer,
  [5245] = 1,
    ACTIONS(699), 1,
      sym_integer,
  [5249] = 1,
    ACTIONS(765), 1,
      anon_sym_EQ,
  [5253] = 1,
    ACTIONS(767), 1,
      sym_identifier,
  [5257] = 1,
    ACTIONS(769), 1,
      anon_sym_to,
  [5261] = 1,
    ACTIONS(771), 1,
      ts_builtin_sym_end,
  [5265] = 1,
    ACTIONS(773), 1,
      sym_identifier,
  [5269] = 1,
    ACTIONS(775), 1,
      sym_identifier,
  [5273] = 1,
    ACTIONS(777), 1,
      anon_sym_to,
  [5277] = 1,
    ACTIONS(779), 1,
      anon_sym_EQ,
  [5281] = 1,
    ACTIONS(781), 1,
      sym__newline,
  [5285] = 1,
    ACTIONS(783), 1,
      sym_identifier,
  [5289] = 1,
    ACTIONS(785), 1,
      anon_sym_to,
  [5293] = 1,
    ACTIONS(787), 1,
      sym_identifier,
  [5297] = 1,
    ACTIONS(789), 1,
      anon_sym_to,
  [5301] = 1,
    ACTIONS(791), 1,
      anon_sym_EQ,
  [5305] = 1,
    ACTIONS(793), 1,
      sym__newline,
  [5309] = 1,
    ACTIONS(795), 1,
      anon_sym_EQ,
  [5313] = 1,
    ACTIONS(797), 1,
      sym_integer,
  [5317] = 1,
    ACTIONS(799), 1,
      anon_sym_of,
  [5321] = 1,
    ACTIONS(801), 1,
      sym_identifier,
  [5325] = 1,
    ACTIONS(803), 1,
      sym_identifier,
  [5329] = 1,
    ACTIONS(805), 1,
      sym_identifier,
  [5333] = 1,
    ACTIONS(807), 1,
      sym_identifier,
  [5337] = 1,
    ACTIONS(809), 1,
      sym_identifier,
  [5341] = 1,
    ACTIONS(811), 1,
      sym_identifier,
  [5345] = 1,
    ACTIONS(813), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 150,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 221,
  [SMALL_STATE(9)] = 254,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 316,
  [SMALL_STATE(12)] = 376,
  [SMALL_STATE(13)] = 406,
  [SMALL_STATE(14)] = 436,
  [SMALL_STATE(15)] = 480,
  [SMALL_STATE(16)] = 510,
  [SMALL_STATE(17)] = 540,
  [SMALL_STATE(18)] = 570,
  [SMALL_STATE(19)] = 600,
  [SMALL_STATE(20)] = 639,
  [SMALL_STATE(21)] = 662,
  [SMALL_STATE(22)] = 685,
  [SMALL_STATE(23)] = 724,
  [SMALL_STATE(24)] = 747,
  [SMALL_STATE(25)] = 786,
  [SMALL_STATE(26)] = 825,
  [SMALL_STATE(27)] = 848,
  [SMALL_STATE(28)] = 878,
  [SMALL_STATE(29)] = 914,
  [SMALL_STATE(30)] = 950,
  [SMALL_STATE(31)] = 986,
  [SMALL_STATE(32)] = 1022,
  [SMALL_STATE(33)] = 1058,
  [SMALL_STATE(34)] = 1094,
  [SMALL_STATE(35)] = 1130,
  [SMALL_STATE(36)] = 1166,
  [SMALL_STATE(37)] = 1202,
  [SMALL_STATE(38)] = 1238,
  [SMALL_STATE(39)] = 1274,
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
  [SMALL_STATE(50)] = 1649,
  [SMALL_STATE(51)] = 1670,
  [SMALL_STATE(52)] = 1691,
  [SMALL_STATE(53)] = 1714,
  [SMALL_STATE(54)] = 1737,
  [SMALL_STATE(55)] = 1772,
  [SMALL_STATE(56)] = 1807,
  [SMALL_STATE(57)] = 1842,
  [SMALL_STATE(58)] = 1877,
  [SMALL_STATE(59)] = 1912,
  [SMALL_STATE(60)] = 1933,
  [SMALL_STATE(61)] = 1954,
  [SMALL_STATE(62)] = 1989,
  [SMALL_STATE(63)] = 2010,
  [SMALL_STATE(64)] = 2033,
  [SMALL_STATE(65)] = 2060,
  [SMALL_STATE(66)] = 2095,
  [SMALL_STATE(67)] = 2120,
  [SMALL_STATE(68)] = 2145,
  [SMALL_STATE(69)] = 2167,
  [SMALL_STATE(70)] = 2195,
  [SMALL_STATE(71)] = 2218,
  [SMALL_STATE(72)] = 2252,
  [SMALL_STATE(73)] = 2286,
  [SMALL_STATE(74)] = 2320,
  [SMALL_STATE(75)] = 2354,
  [SMALL_STATE(76)] = 2388,
  [SMALL_STATE(77)] = 2422,
  [SMALL_STATE(78)] = 2456,
  [SMALL_STATE(79)] = 2490,
  [SMALL_STATE(80)] = 2524,
  [SMALL_STATE(81)] = 2549,
  [SMALL_STATE(82)] = 2574,
  [SMALL_STATE(83)] = 2595,
  [SMALL_STATE(84)] = 2620,
  [SMALL_STATE(85)] = 2645,
  [SMALL_STATE(86)] = 2670,
  [SMALL_STATE(87)] = 2695,
  [SMALL_STATE(88)] = 2720,
  [SMALL_STATE(89)] = 2745,
  [SMALL_STATE(90)] = 2766,
  [SMALL_STATE(91)] = 2791,
  [SMALL_STATE(92)] = 2812,
  [SMALL_STATE(93)] = 2837,
  [SMALL_STATE(94)] = 2862,
  [SMALL_STATE(95)] = 2887,
  [SMALL_STATE(96)] = 2908,
  [SMALL_STATE(97)] = 2933,
  [SMALL_STATE(98)] = 2958,
  [SMALL_STATE(99)] = 2983,
  [SMALL_STATE(100)] = 3008,
  [SMALL_STATE(101)] = 3033,
  [SMALL_STATE(102)] = 3051,
  [SMALL_STATE(103)] = 3077,
  [SMALL_STATE(104)] = 3103,
  [SMALL_STATE(105)] = 3121,
  [SMALL_STATE(106)] = 3135,
  [SMALL_STATE(107)] = 3156,
  [SMALL_STATE(108)] = 3175,
  [SMALL_STATE(109)] = 3194,
  [SMALL_STATE(110)] = 3206,
  [SMALL_STATE(111)] = 3218,
  [SMALL_STATE(112)] = 3230,
  [SMALL_STATE(113)] = 3242,
  [SMALL_STATE(114)] = 3254,
  [SMALL_STATE(115)] = 3274,
  [SMALL_STATE(116)] = 3286,
  [SMALL_STATE(117)] = 3298,
  [SMALL_STATE(118)] = 3310,
  [SMALL_STATE(119)] = 3322,
  [SMALL_STATE(120)] = 3342,
  [SMALL_STATE(121)] = 3354,
  [SMALL_STATE(122)] = 3366,
  [SMALL_STATE(123)] = 3378,
  [SMALL_STATE(124)] = 3390,
  [SMALL_STATE(125)] = 3410,
  [SMALL_STATE(126)] = 3430,
  [SMALL_STATE(127)] = 3442,
  [SMALL_STATE(128)] = 3454,
  [SMALL_STATE(129)] = 3466,
  [SMALL_STATE(130)] = 3486,
  [SMALL_STATE(131)] = 3498,
  [SMALL_STATE(132)] = 3510,
  [SMALL_STATE(133)] = 3522,
  [SMALL_STATE(134)] = 3534,
  [SMALL_STATE(135)] = 3546,
  [SMALL_STATE(136)] = 3559,
  [SMALL_STATE(137)] = 3574,
  [SMALL_STATE(138)] = 3587,
  [SMALL_STATE(139)] = 3600,
  [SMALL_STATE(140)] = 3621,
  [SMALL_STATE(141)] = 3634,
  [SMALL_STATE(142)] = 3655,
  [SMALL_STATE(143)] = 3676,
  [SMALL_STATE(144)] = 3697,
  [SMALL_STATE(145)] = 3714,
  [SMALL_STATE(146)] = 3729,
  [SMALL_STATE(147)] = 3740,
  [SMALL_STATE(148)] = 3751,
  [SMALL_STATE(149)] = 3762,
  [SMALL_STATE(150)] = 3781,
  [SMALL_STATE(151)] = 3792,
  [SMALL_STATE(152)] = 3809,
  [SMALL_STATE(153)] = 3820,
  [SMALL_STATE(154)] = 3837,
  [SMALL_STATE(155)] = 3854,
  [SMALL_STATE(156)] = 3865,
  [SMALL_STATE(157)] = 3882,
  [SMALL_STATE(158)] = 3897,
  [SMALL_STATE(159)] = 3908,
  [SMALL_STATE(160)] = 3919,
  [SMALL_STATE(161)] = 3930,
  [SMALL_STATE(162)] = 3941,
  [SMALL_STATE(163)] = 3953,
  [SMALL_STATE(164)] = 3967,
  [SMALL_STATE(165)] = 3977,
  [SMALL_STATE(166)] = 3991,
  [SMALL_STATE(167)] = 3999,
  [SMALL_STATE(168)] = 4013,
  [SMALL_STATE(169)] = 4027,
  [SMALL_STATE(170)] = 4039,
  [SMALL_STATE(171)] = 4047,
  [SMALL_STATE(172)] = 4055,
  [SMALL_STATE(173)] = 4067,
  [SMALL_STATE(174)] = 4081,
  [SMALL_STATE(175)] = 4093,
  [SMALL_STATE(176)] = 4107,
  [SMALL_STATE(177)] = 4121,
  [SMALL_STATE(178)] = 4133,
  [SMALL_STATE(179)] = 4147,
  [SMALL_STATE(180)] = 4155,
  [SMALL_STATE(181)] = 4163,
  [SMALL_STATE(182)] = 4173,
  [SMALL_STATE(183)] = 4181,
  [SMALL_STATE(184)] = 4194,
  [SMALL_STATE(185)] = 4205,
  [SMALL_STATE(186)] = 4216,
  [SMALL_STATE(187)] = 4227,
  [SMALL_STATE(188)] = 4238,
  [SMALL_STATE(189)] = 4249,
  [SMALL_STATE(190)] = 4258,
  [SMALL_STATE(191)] = 4269,
  [SMALL_STATE(192)] = 4278,
  [SMALL_STATE(193)] = 4285,
  [SMALL_STATE(194)] = 4296,
  [SMALL_STATE(195)] = 4307,
  [SMALL_STATE(196)] = 4318,
  [SMALL_STATE(197)] = 4329,
  [SMALL_STATE(198)] = 4342,
  [SMALL_STATE(199)] = 4355,
  [SMALL_STATE(200)] = 4366,
  [SMALL_STATE(201)] = 4377,
  [SMALL_STATE(202)] = 4390,
  [SMALL_STATE(203)] = 4403,
  [SMALL_STATE(204)] = 4410,
  [SMALL_STATE(205)] = 4423,
  [SMALL_STATE(206)] = 4436,
  [SMALL_STATE(207)] = 4447,
  [SMALL_STATE(208)] = 4458,
  [SMALL_STATE(209)] = 4469,
  [SMALL_STATE(210)] = 4480,
  [SMALL_STATE(211)] = 4487,
  [SMALL_STATE(212)] = 4494,
  [SMALL_STATE(213)] = 4501,
  [SMALL_STATE(214)] = 4512,
  [SMALL_STATE(215)] = 4522,
  [SMALL_STATE(216)] = 4528,
  [SMALL_STATE(217)] = 4538,
  [SMALL_STATE(218)] = 4548,
  [SMALL_STATE(219)] = 4558,
  [SMALL_STATE(220)] = 4564,
  [SMALL_STATE(221)] = 4574,
  [SMALL_STATE(222)] = 4584,
  [SMALL_STATE(223)] = 4594,
  [SMALL_STATE(224)] = 4604,
  [SMALL_STATE(225)] = 4610,
  [SMALL_STATE(226)] = 4618,
  [SMALL_STATE(227)] = 4624,
  [SMALL_STATE(228)] = 4630,
  [SMALL_STATE(229)] = 4636,
  [SMALL_STATE(230)] = 4646,
  [SMALL_STATE(231)] = 4656,
  [SMALL_STATE(232)] = 4662,
  [SMALL_STATE(233)] = 4668,
  [SMALL_STATE(234)] = 4678,
  [SMALL_STATE(235)] = 4684,
  [SMALL_STATE(236)] = 4690,
  [SMALL_STATE(237)] = 4700,
  [SMALL_STATE(238)] = 4710,
  [SMALL_STATE(239)] = 4716,
  [SMALL_STATE(240)] = 4726,
  [SMALL_STATE(241)] = 4736,
  [SMALL_STATE(242)] = 4746,
  [SMALL_STATE(243)] = 4756,
  [SMALL_STATE(244)] = 4762,
  [SMALL_STATE(245)] = 4768,
  [SMALL_STATE(246)] = 4774,
  [SMALL_STATE(247)] = 4784,
  [SMALL_STATE(248)] = 4790,
  [SMALL_STATE(249)] = 4800,
  [SMALL_STATE(250)] = 4806,
  [SMALL_STATE(251)] = 4812,
  [SMALL_STATE(252)] = 4822,
  [SMALL_STATE(253)] = 4828,
  [SMALL_STATE(254)] = 4838,
  [SMALL_STATE(255)] = 4844,
  [SMALL_STATE(256)] = 4854,
  [SMALL_STATE(257)] = 4860,
  [SMALL_STATE(258)] = 4870,
  [SMALL_STATE(259)] = 4876,
  [SMALL_STATE(260)] = 4882,
  [SMALL_STATE(261)] = 4888,
  [SMALL_STATE(262)] = 4898,
  [SMALL_STATE(263)] = 4904,
  [SMALL_STATE(264)] = 4914,
  [SMALL_STATE(265)] = 4924,
  [SMALL_STATE(266)] = 4934,
  [SMALL_STATE(267)] = 4944,
  [SMALL_STATE(268)] = 4950,
  [SMALL_STATE(269)] = 4960,
  [SMALL_STATE(270)] = 4965,
  [SMALL_STATE(271)] = 4972,
  [SMALL_STATE(272)] = 4977,
  [SMALL_STATE(273)] = 4982,
  [SMALL_STATE(274)] = 4987,
  [SMALL_STATE(275)] = 4992,
  [SMALL_STATE(276)] = 4999,
  [SMALL_STATE(277)] = 5004,
  [SMALL_STATE(278)] = 5011,
  [SMALL_STATE(279)] = 5016,
  [SMALL_STATE(280)] = 5023,
  [SMALL_STATE(281)] = 5030,
  [SMALL_STATE(282)] = 5035,
  [SMALL_STATE(283)] = 5040,
  [SMALL_STATE(284)] = 5045,
  [SMALL_STATE(285)] = 5050,
  [SMALL_STATE(286)] = 5057,
  [SMALL_STATE(287)] = 5062,
  [SMALL_STATE(288)] = 5067,
  [SMALL_STATE(289)] = 5074,
  [SMALL_STATE(290)] = 5079,
  [SMALL_STATE(291)] = 5086,
  [SMALL_STATE(292)] = 5091,
  [SMALL_STATE(293)] = 5098,
  [SMALL_STATE(294)] = 5103,
  [SMALL_STATE(295)] = 5108,
  [SMALL_STATE(296)] = 5113,
  [SMALL_STATE(297)] = 5117,
  [SMALL_STATE(298)] = 5121,
  [SMALL_STATE(299)] = 5125,
  [SMALL_STATE(300)] = 5129,
  [SMALL_STATE(301)] = 5133,
  [SMALL_STATE(302)] = 5137,
  [SMALL_STATE(303)] = 5141,
  [SMALL_STATE(304)] = 5145,
  [SMALL_STATE(305)] = 5149,
  [SMALL_STATE(306)] = 5153,
  [SMALL_STATE(307)] = 5157,
  [SMALL_STATE(308)] = 5161,
  [SMALL_STATE(309)] = 5165,
  [SMALL_STATE(310)] = 5169,
  [SMALL_STATE(311)] = 5173,
  [SMALL_STATE(312)] = 5177,
  [SMALL_STATE(313)] = 5181,
  [SMALL_STATE(314)] = 5185,
  [SMALL_STATE(315)] = 5189,
  [SMALL_STATE(316)] = 5193,
  [SMALL_STATE(317)] = 5197,
  [SMALL_STATE(318)] = 5201,
  [SMALL_STATE(319)] = 5205,
  [SMALL_STATE(320)] = 5209,
  [SMALL_STATE(321)] = 5213,
  [SMALL_STATE(322)] = 5217,
  [SMALL_STATE(323)] = 5221,
  [SMALL_STATE(324)] = 5225,
  [SMALL_STATE(325)] = 5229,
  [SMALL_STATE(326)] = 5233,
  [SMALL_STATE(327)] = 5237,
  [SMALL_STATE(328)] = 5241,
  [SMALL_STATE(329)] = 5245,
  [SMALL_STATE(330)] = 5249,
  [SMALL_STATE(331)] = 5253,
  [SMALL_STATE(332)] = 5257,
  [SMALL_STATE(333)] = 5261,
  [SMALL_STATE(334)] = 5265,
  [SMALL_STATE(335)] = 5269,
  [SMALL_STATE(336)] = 5273,
  [SMALL_STATE(337)] = 5277,
  [SMALL_STATE(338)] = 5281,
  [SMALL_STATE(339)] = 5285,
  [SMALL_STATE(340)] = 5289,
  [SMALL_STATE(341)] = 5293,
  [SMALL_STATE(342)] = 5297,
  [SMALL_STATE(343)] = 5301,
  [SMALL_STATE(344)] = 5305,
  [SMALL_STATE(345)] = 5309,
  [SMALL_STATE(346)] = 5313,
  [SMALL_STATE(347)] = 5317,
  [SMALL_STATE(348)] = 5321,
  [SMALL_STATE(349)] = 5325,
  [SMALL_STATE(350)] = 5329,
  [SMALL_STATE(351)] = 5333,
  [SMALL_STATE(352)] = 5337,
  [SMALL_STATE(353)] = 5341,
  [SMALL_STATE(354)] = 5345,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 2, .production_id = 21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 2, .production_id = 21),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 41),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 41), SHIFT_REPEAT(44),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 41),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 41), SHIFT_REPEAT(308),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 57),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 57),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 39),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 39),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 45),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 45),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 1, .production_id = 9),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 41), SHIFT_REPEAT(38),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 41), SHIFT_REPEAT(341),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 41), SHIFT_REPEAT(47),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 41), SHIFT_REPEAT(331),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(312),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(352),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(351),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(349),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(290),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(339),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(335),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(334),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_argument, 1), REDUCE(sym_primary_expression, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(305),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(304),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(42),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4, .production_id = 13),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 54),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 54),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 4, .production_id = 13),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 55), SHIFT_REPEAT(92),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 55),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 55), SHIFT_REPEAT(92),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 55), SHIFT_REPEAT(96),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 55), SHIFT_REPEAT(96),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 2, .production_id = 37),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 5, .production_id = 24),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 5, .production_id = 63),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 5, .production_id = 63),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 4, .production_id = 56),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 4, .production_id = 56),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2, .production_id = 46),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2, .production_id = 46), SHIFT_REPEAT(313),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_then_statement_repeat1, 2, .production_id = 69),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_then_statement_repeat1, 2, .production_id = 69), SHIFT_REPEAT(37),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2, .production_id = 69),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 55), SHIFT_REPEAT(86),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 55), SHIFT_REPEAT(86),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2, .production_id = 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 11),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6, .production_id = 34),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 7),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 4, .production_id = 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3, .production_id = 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, .production_id = 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, .production_id = 44),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, .production_id = 43),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, .production_id = 31),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 47),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7, .production_id = 58),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7, .production_id = 49),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 10),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 27),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5, .production_id = 17),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 22),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, .production_id = 23),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_then_statement_repeat1, 1, .production_id = 61),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 1, .production_id = 61),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elsif, 4, .production_id = 56),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif, 4, .production_id = 56),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statement, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statement, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 36),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 36),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 5, .production_id = 62),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 5, .production_id = 62),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else, 2, .production_id = 67),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2, .production_id = 67),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 6, .production_id = 68),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 6, .production_id = 68),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 15),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 4, .production_id = 52),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 4, .production_id = 52),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 4, .production_id = 53),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, .production_id = 53),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 45),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 35),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 2, .production_id = 33),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 1, .production_id = 29),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 33), SHIFT_REPEAT(277),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 33),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(354),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2), SHIFT_REPEAT(14),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2, .production_id = 46), SHIFT_REPEAT(350),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(353),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_name, 1, .production_id = 14),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 33), SHIFT_REPEAT(297),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 33),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 18), SHIFT_REPEAT(310),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 18),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2, .production_id = 6), SHIFT_REPEAT(323),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2, .production_id = 6),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 20),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 40),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 42),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2, .production_id = 6), SHIFT_REPEAT(317),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 59),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic, 1, .production_id = 28),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 1, .production_id = 12),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 50), SHIFT_REPEAT(306),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 50),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_header, 3, .production_id = 8),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_type, 2, .production_id = 30),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 26),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 25),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 5),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 38),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 19),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 4, .production_id = 32),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 15),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2, .production_id = 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 16),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(303),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(201),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 3, .production_id = 19),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5, .production_id = 27),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 3, .production_id = 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 8, .production_id = 72),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 7, .production_id = 71),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delclaration_array_type, 7),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 7, .production_id = 70),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 4, .production_id = 5),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 6, .production_id = 65),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 6, .production_id = 64),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 1, .production_id = 4),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5, .production_id = 60),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 51),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 4, .production_id = 51),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 48),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4, .production_id = 66),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [771] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
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
