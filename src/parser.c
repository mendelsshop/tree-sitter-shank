#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 369
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 32
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 70

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
  field_end = 10,
  field_field = 11,
  field_field_acces = 12,
  field_function = 13,
  field_generic = 14,
  field_imports = 15,
  field_index = 16,
  field_left = 17,
  field_module = 18,
  field_name = 19,
  field_operator = 20,
  field_operators = 21,
  field_parameters = 22,
  field_range = 23,
  field_reference = 24,
  field_right = 25,
  field_start = 26,
  field_type = 27,
  field_type_name = 28,
  field_value = 29,
  field_var = 30,
  field_variables = 31,
  field_variant = 32,
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
  [55] = {.index = 117, .length = 2},
  [56] = {.index = 119, .length = 1},
  [57] = {.index = 120, .length = 2},
  [58] = {.index = 122, .length = 2},
  [59] = {.index = 124, .length = 3},
  [60] = {.index = 127, .length = 4},
  [61] = {.index = 131, .length = 3},
  [62] = {.index = 134, .length = 1},
  [63] = {.index = 135, .length = 3},
  [64] = {.index = 138, .length = 3},
  [65] = {.index = 141, .length = 3},
  [66] = {.index = 144, .length = 2},
  [67] = {.index = 146, .length = 1},
  [68] = {.index = 147, .length = 4},
  [69] = {.index = 151, .length = 2},
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
    {field_name, 0},
    {field_type, 2},
  [115] =
    {field_control, 1},
    {field_range, 2},
  [117] =
    {field_body, 3},
    {field_condition, 2},
  [119] =
    {field_operators, 0},
  [120] =
    {field_operators, 0, .inherited = true},
    {field_operators, 1, .inherited = true},
  [122] =
    {field_condition, 1},
    {field_consequent, 3},
  [124] =
    {field_array_access, 0},
    {field_array_access, 2},
    {field_index, 1},
  [127] =
    {field_constants, 5},
    {field_function, 3},
    {field_name, 1},
    {field_variables, 4},
  [131] =
    {field_name, 0},
    {field_name, 1},
    {field_type, 3},
  [134] =
    {field_alternative, 0},
  [135] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequent, 3},
  [138] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequent, 3},
  [141] =
    {field_name, 1},
    {field_name, 2},
    {field_type, 4},
  [144] =
    {field_end, 3},
    {field_start, 1},
  [146] =
    {field_body, 1},
  [147] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequent, 3},
  [151] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
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
  [12] = 5,
  [13] = 2,
  [14] = 3,
  [15] = 15,
  [16] = 5,
  [17] = 2,
  [18] = 3,
  [19] = 19,
  [20] = 4,
  [21] = 6,
  [22] = 22,
  [23] = 6,
  [24] = 24,
  [25] = 25,
  [26] = 4,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 28,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 35,
  [38] = 38,
  [39] = 34,
  [40] = 30,
  [41] = 30,
  [42] = 28,
  [43] = 38,
  [44] = 34,
  [45] = 33,
  [46] = 46,
  [47] = 35,
  [48] = 33,
  [49] = 9,
  [50] = 10,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 51,
  [55] = 51,
  [56] = 53,
  [57] = 8,
  [58] = 9,
  [59] = 59,
  [60] = 7,
  [61] = 53,
  [62] = 62,
  [63] = 62,
  [64] = 7,
  [65] = 65,
  [66] = 10,
  [67] = 67,
  [68] = 68,
  [69] = 8,
  [70] = 70,
  [71] = 71,
  [72] = 38,
  [73] = 73,
  [74] = 74,
  [75] = 62,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 80,
  [82] = 76,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 86,
  [88] = 85,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 84,
  [94] = 89,
  [95] = 91,
  [96] = 89,
  [97] = 84,
  [98] = 90,
  [99] = 92,
  [100] = 86,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 85,
  [107] = 107,
  [108] = 90,
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
  [122] = 52,
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
  [136] = 125,
  [137] = 137,
  [138] = 123,
  [139] = 74,
  [140] = 140,
  [141] = 105,
  [142] = 142,
  [143] = 123,
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
  [157] = 105,
  [158] = 158,
  [159] = 125,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 161,
  [167] = 167,
  [168] = 167,
  [169] = 169,
  [170] = 165,
  [171] = 171,
  [172] = 169,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 103,
  [181] = 181,
  [182] = 181,
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
  [193] = 183,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 101,
  [199] = 199,
  [200] = 200,
  [201] = 200,
  [202] = 202,
  [203] = 176,
  [204] = 197,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 161,
  [212] = 189,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 129,
  [217] = 165,
  [218] = 167,
  [219] = 219,
  [220] = 214,
  [221] = 215,
  [222] = 173,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 215,
  [232] = 232,
  [233] = 210,
  [234] = 234,
  [235] = 235,
  [236] = 214,
  [237] = 237,
  [238] = 117,
  [239] = 194,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 169,
  [245] = 245,
  [246] = 246,
  [247] = 202,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 209,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 243,
  [258] = 105,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 255,
  [263] = 263,
  [264] = 264,
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
  [279] = 250,
  [280] = 280,
  [281] = 274,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 251,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 213,
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
  [304] = 280,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 269,
  [313] = 313,
  [314] = 314,
  [315] = 266,
  [316] = 265,
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
  [327] = 275,
  [328] = 308,
  [329] = 307,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 277,
  [335] = 335,
  [336] = 267,
  [337] = 337,
  [338] = 297,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 270,
  [344] = 339,
  [345] = 299,
  [346] = 346,
  [347] = 307,
  [348] = 348,
  [349] = 349,
  [350] = 297,
  [351] = 252,
  [352] = 352,
  [353] = 307,
  [354] = 319,
  [355] = 355,
  [356] = 346,
  [357] = 323,
  [358] = 358,
  [359] = 359,
  [360] = 295,
  [361] = 301,
  [362] = 303,
  [363] = 363,
  [364] = 364,
  [365] = 341,
  [366] = 340,
  [367] = 322,
  [368] = 321,
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
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 136},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 136},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 136},
  [25] = {.lex_state = 136},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 2},
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
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 53, .external_lex_state = 4},
  [52] = {.lex_state = 135},
  [53] = {.lex_state = 53, .external_lex_state = 4},
  [54] = {.lex_state = 53, .external_lex_state = 4},
  [55] = {.lex_state = 53, .external_lex_state = 4},
  [56] = {.lex_state = 53, .external_lex_state = 4},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 15, .external_lex_state = 4},
  [60] = {.lex_state = 0, .external_lex_state = 3},
  [61] = {.lex_state = 53, .external_lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 53, .external_lex_state = 4},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 15, .external_lex_state = 4},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 15, .external_lex_state = 4},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 0, .external_lex_state = 3},
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
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 136},
  [102] = {.lex_state = 48, .external_lex_state = 4},
  [103] = {.lex_state = 136},
  [104] = {.lex_state = 48, .external_lex_state = 4},
  [105] = {.lex_state = 136},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 48, .external_lex_state = 4},
  [108] = {.lex_state = 0, .external_lex_state = 3},
  [109] = {.lex_state = 136},
  [110] = {.lex_state = 136},
  [111] = {.lex_state = 136},
  [112] = {.lex_state = 136},
  [113] = {.lex_state = 136},
  [114] = {.lex_state = 136},
  [115] = {.lex_state = 136},
  [116] = {.lex_state = 136},
  [117] = {.lex_state = 136},
  [118] = {.lex_state = 136},
  [119] = {.lex_state = 136},
  [120] = {.lex_state = 136},
  [121] = {.lex_state = 136},
  [122] = {.lex_state = 0, .external_lex_state = 3},
  [123] = {.lex_state = 136},
  [124] = {.lex_state = 136},
  [125] = {.lex_state = 136},
  [126] = {.lex_state = 136},
  [127] = {.lex_state = 136},
  [128] = {.lex_state = 136},
  [129] = {.lex_state = 136},
  [130] = {.lex_state = 136},
  [131] = {.lex_state = 136, .external_lex_state = 3},
  [132] = {.lex_state = 136, .external_lex_state = 3},
  [133] = {.lex_state = 48, .external_lex_state = 4},
  [134] = {.lex_state = 136, .external_lex_state = 3},
  [135] = {.lex_state = 48, .external_lex_state = 4},
  [136] = {.lex_state = 48, .external_lex_state = 4},
  [137] = {.lex_state = 136, .external_lex_state = 3},
  [138] = {.lex_state = 48, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 3},
  [140] = {.lex_state = 15, .external_lex_state = 4},
  [141] = {.lex_state = 15, .external_lex_state = 4},
  [142] = {.lex_state = 15, .external_lex_state = 4},
  [143] = {.lex_state = 53, .external_lex_state = 4},
  [144] = {.lex_state = 53, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 53, .external_lex_state = 4},
  [148] = {.lex_state = 53, .external_lex_state = 4},
  [149] = {.lex_state = 53, .external_lex_state = 4},
  [150] = {.lex_state = 53, .external_lex_state = 4},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 53, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 53, .external_lex_state = 4},
  [157] = {.lex_state = 53, .external_lex_state = 4},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 53, .external_lex_state = 4},
  [160] = {.lex_state = 0, .external_lex_state = 3},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 0, .external_lex_state = 3},
  [164] = {.lex_state = 136, .external_lex_state = 3},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 7, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0, .external_lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 3},
  [181] = {.lex_state = 136},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 0, .external_lex_state = 3},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 3},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 0, .external_lex_state = 3},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 136},
  [210] = {.lex_state = 136},
  [211] = {.lex_state = 0, .external_lex_state = 3},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 136, .external_lex_state = 3},
  [217] = {.lex_state = 0, .external_lex_state = 3},
  [218] = {.lex_state = 0, .external_lex_state = 3},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0, .external_lex_state = 3},
  [226] = {.lex_state = 136, .external_lex_state = 3},
  [227] = {.lex_state = 136, .external_lex_state = 3},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 136},
  [234] = {.lex_state = 136},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 136},
  [238] = {.lex_state = 136, .external_lex_state = 3},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 136, .external_lex_state = 3},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 3},
  [245] = {.lex_state = 136},
  [246] = {.lex_state = 7},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 7, .external_lex_state = 2},
  [253] = {.lex_state = 136},
  [254] = {.lex_state = 136, .external_lex_state = 3},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 136},
  [258] = {.lex_state = 136, .external_lex_state = 3},
  [259] = {.lex_state = 136},
  [260] = {.lex_state = 136},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 7},
  [263] = {.lex_state = 136},
  [264] = {.lex_state = 0, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 0, .external_lex_state = 2},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0, .external_lex_state = 2},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 3},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 7},
  [275] = {.lex_state = 0, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 3},
  [277] = {.lex_state = 0, .external_lex_state = 2},
  [278] = {.lex_state = 0, .external_lex_state = 3},
  [279] = {.lex_state = 54},
  [280] = {.lex_state = 0, .external_lex_state = 2},
  [281] = {.lex_state = 7},
  [282] = {.lex_state = 0, .external_lex_state = 3},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 7},
  [288] = {.lex_state = 54},
  [289] = {.lex_state = 7},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 7},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 7},
  [295] = {.lex_state = 7},
  [296] = {.lex_state = 7},
  [297] = {.lex_state = 7},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 7},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 7},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 7},
  [305] = {.lex_state = 7},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0, .external_lex_state = 2},
  [308] = {.lex_state = 7},
  [309] = {.lex_state = 0, .external_lex_state = 3},
  [310] = {.lex_state = 7},
  [311] = {.lex_state = 7},
  [312] = {.lex_state = 7},
  [313] = {.lex_state = 0, .external_lex_state = 3},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 7},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 7},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 7},
  [328] = {.lex_state = 7},
  [329] = {.lex_state = 0, .external_lex_state = 2},
  [330] = {.lex_state = 135},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 7},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 7},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 7},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 7},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 7},
  [341] = {.lex_state = 7},
  [342] = {.lex_state = 7},
  [343] = {.lex_state = 7},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0, .external_lex_state = 2},
  [348] = {.lex_state = 7},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 7},
  [351] = {.lex_state = 7},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0, .external_lex_state = 2},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 7},
  [359] = {.lex_state = 7},
  [360] = {.lex_state = 7},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 7},
  [364] = {.lex_state = 7},
  [365] = {.lex_state = 7},
  [366] = {.lex_state = 7},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
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
    [sym_program] = STATE(337),
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
  [116] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 24,
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
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(53), 21,
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
    ACTIONS(45), 1,
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
    STATE(38), 1,
      sym_primary_expression,
    STATE(68), 1,
      sym_variable_access,
    STATE(174), 1,
      sym_expression,
    STATE(179), 1,
      sym_argument,
    ACTIONS(77), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(50), 2,
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
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [376] = 5,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(47), 2,
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
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [406] = 5,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_DOT,
    STATE(14), 1,
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
  [436] = 5,
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
  [466] = 12,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_var,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    STATE(68), 1,
      sym_variable_access,
    STATE(174), 1,
      sym_expression,
    STATE(223), 1,
      sym_argument,
    STATE(50), 2,
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
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [510] = 5,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_variable_access_repeat1,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 14,
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
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOT,
    STATE(18), 1,
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
  [662] = 2,
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
  [848] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(72), 1,
      sym_primary_expression,
    STATE(186), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(66), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(211), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [884] = 9,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_not,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(43), 1,
      sym_primary_expression,
    STATE(168), 1,
      sym_expression,
    ACTIONS(145), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(147), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(161), 3,
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
    STATE(72), 1,
      sym_primary_expression,
    STATE(178), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(66), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(211), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [956] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(72), 1,
      sym_primary_expression,
    STATE(217), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(66), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(211), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [992] = 9,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    STATE(192), 1,
      sym_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(50), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1028] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(72), 1,
      sym_primary_expression,
    STATE(218), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(66), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(211), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1064] = 9,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_not,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(43), 1,
      sym_primary_expression,
    STATE(231), 1,
      sym_expression,
    ACTIONS(145), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(147), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(161), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1100] = 9,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_not,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(72), 1,
      sym_primary_expression,
    STATE(244), 1,
      sym_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(66), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(211), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1136] = 9,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_not,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(43), 1,
      sym_primary_expression,
    STATE(214), 1,
      sym_expression,
    ACTIONS(145), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(147), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(161), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1172] = 9,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_not,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(43), 1,
      sym_primary_expression,
    STATE(219), 1,
      sym_expression,
    ACTIONS(145), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(147), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(161), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1208] = 9,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_not,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(43), 1,
      sym_primary_expression,
    STATE(236), 1,
      sym_expression,
    ACTIONS(145), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(147), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(161), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1244] = 6,
    STATE(85), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(155), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(153), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(151), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [1274] = 9,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    STATE(172), 1,
      sym_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(50), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1310] = 9,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_not,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(43), 1,
      sym_primary_expression,
    STATE(165), 1,
      sym_expression,
    ACTIONS(145), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(147), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(161), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1346] = 9,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(38), 1,
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
    STATE(50), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1382] = 9,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    STATE(167), 1,
      sym_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(50), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(166), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1418] = 6,
    STATE(88), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(151), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [1448] = 9,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_not,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(43), 1,
      sym_primary_expression,
    STATE(169), 1,
      sym_expression,
    ACTIONS(145), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(147), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(161), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1484] = 9,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_not,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(43), 1,
      sym_primary_expression,
    STATE(221), 1,
      sym_expression,
    ACTIONS(145), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(147), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(161), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1520] = 9,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_not,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(43), 1,
      sym_primary_expression,
    STATE(242), 1,
      sym_expression,
    ACTIONS(145), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(147), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(161), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1556] = 9,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_not,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(43), 1,
      sym_primary_expression,
    STATE(220), 1,
      sym_expression,
    ACTIONS(145), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(147), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(161), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1592] = 9,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_not,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(43), 1,
      sym_primary_expression,
    STATE(215), 1,
      sym_expression,
    ACTIONS(145), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(147), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
    STATE(161), 3,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
  [1628] = 3,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(53), 11,
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
  [1651] = 2,
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
  [1672] = 9,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_repeat,
    ACTIONS(171), 1,
      anon_sym_while,
    ACTIONS(173), 1,
      anon_sym_if,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(177), 1,
      sym__dedent,
    STATE(330), 1,
      sym_variable_access,
    STATE(199), 2,
      sym_call_statement,
      sym_assignment,
    STATE(65), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [1707] = 5,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_constant_repeat1,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(179), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [1734] = 9,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_repeat,
    ACTIONS(171), 1,
      anon_sym_while,
    ACTIONS(173), 1,
      anon_sym_if,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym__dedent,
    STATE(330), 1,
      sym_variable_access,
    STATE(199), 2,
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
  [1769] = 9,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_repeat,
    ACTIONS(171), 1,
      anon_sym_while,
    ACTIONS(173), 1,
      anon_sym_if,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym__dedent,
    STATE(330), 1,
      sym_variable_access,
    STATE(199), 2,
      sym_call_statement,
      sym_assignment,
    STATE(65), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [1804] = 9,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_repeat,
    ACTIONS(171), 1,
      anon_sym_while,
    ACTIONS(173), 1,
      anon_sym_if,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym__dedent,
    STATE(330), 1,
      sym_variable_access,
    STATE(199), 2,
      sym_call_statement,
      sym_assignment,
    STATE(65), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [1839] = 9,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_repeat,
    ACTIONS(171), 1,
      anon_sym_while,
    ACTIONS(173), 1,
      anon_sym_if,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(189), 1,
      sym__dedent,
    STATE(330), 1,
      sym_variable_access,
    STATE(199), 2,
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
  [1874] = 2,
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
  [1895] = 3,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(53), 11,
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
  [1918] = 13,
    ACTIONS(195), 1,
      anon_sym_real,
    ACTIONS(197), 1,
      anon_sym_array,
    ACTIONS(199), 1,
      sym_refersTo,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      sym__dedent,
    STATE(67), 1,
      aux_sym_record_repeat1,
    STATE(142), 1,
      sym_record_item,
    STATE(222), 1,
      sym__type_name,
    STATE(325), 1,
      sym_type,
    STATE(334), 1,
      sym__custom_generic_type,
    STATE(336), 1,
      sym__custom_type,
    ACTIONS(193), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(343), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [1961] = 2,
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
  [1982] = 9,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_repeat,
    ACTIONS(171), 1,
      anon_sym_while,
    ACTIONS(173), 1,
      anon_sym_if,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(205), 1,
      sym__dedent,
    STATE(330), 1,
      sym_variable_access,
    STATE(199), 2,
      sym_call_statement,
      sym_assignment,
    STATE(54), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [2017] = 4,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(209), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(207), 9,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2042] = 4,
    ACTIONS(155), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(209), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(207), 9,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comment_token1,
  [2067] = 2,
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
  [2088] = 9,
    ACTIONS(211), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_repeat,
    ACTIONS(217), 1,
      anon_sym_while,
    ACTIONS(220), 1,
      anon_sym_if,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(226), 1,
      sym__dedent,
    STATE(330), 1,
      sym_variable_access,
    STATE(199), 2,
      sym_call_statement,
      sym_assignment,
    STATE(65), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_repeat_statement,
      sym_while_statement,
      sym_if_then_statement,
      sym_for,
      aux_sym_block_repeat1,
  [2123] = 2,
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
  [2144] = 13,
    ACTIONS(231), 1,
      anon_sym_real,
    ACTIONS(234), 1,
      anon_sym_array,
    ACTIONS(237), 1,
      sym_refersTo,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(243), 1,
      sym__dedent,
    STATE(67), 1,
      aux_sym_record_repeat1,
    STATE(142), 1,
      sym_record_item,
    STATE(222), 1,
      sym__type_name,
    STATE(325), 1,
      sym_type,
    STATE(334), 1,
      sym__custom_generic_type,
    STATE(336), 1,
      sym__custom_type,
    ACTIONS(228), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(343), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2187] = 3,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(245), 3,
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
  [2210] = 2,
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
  [2231] = 13,
    ACTIONS(195), 1,
      anon_sym_real,
    ACTIONS(197), 1,
      anon_sym_array,
    ACTIONS(199), 1,
      sym_refersTo,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(248), 1,
      sym__dedent,
    STATE(67), 1,
      aux_sym_record_repeat1,
    STATE(142), 1,
      sym_record_item,
    STATE(222), 1,
      sym__type_name,
    STATE(325), 1,
      sym_type,
    STATE(334), 1,
      sym__custom_generic_type,
    STATE(336), 1,
      sym__custom_type,
    ACTIONS(193), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(343), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2274] = 12,
    ACTIONS(195), 1,
      anon_sym_real,
    ACTIONS(197), 1,
      anon_sym_array,
    ACTIONS(199), 1,
      sym_refersTo,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(59), 1,
      aux_sym_record_repeat1,
    STATE(142), 1,
      sym_record_item,
    STATE(222), 1,
      sym__type_name,
    STATE(325), 1,
      sym_type,
    STATE(334), 1,
      sym__custom_generic_type,
    STATE(336), 1,
      sym__custom_type,
    ACTIONS(193), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(343), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2314] = 6,
    STATE(106), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(252), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(254), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(250), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2342] = 12,
    ACTIONS(195), 1,
      anon_sym_real,
    ACTIONS(197), 1,
      anon_sym_array,
    ACTIONS(199), 1,
      sym_refersTo,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(70), 1,
      aux_sym_record_repeat1,
    STATE(142), 1,
      sym_record_item,
    STATE(222), 1,
      sym__type_name,
    STATE(325), 1,
      sym_type,
    STATE(334), 1,
      sym__custom_generic_type,
    STATE(336), 1,
      sym__custom_type,
    ACTIONS(193), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(343), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2382] = 3,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 3,
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
    ACTIONS(209), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(252), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(207), 7,
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
    STATE(173), 1,
      sym__type_name,
    STATE(201), 1,
      sym_declaration_type,
    STATE(267), 1,
      sym__custom_type,
    STATE(277), 1,
      sym__custom_generic_type,
    ACTIONS(258), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(286), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2461] = 10,
    ACTIONS(260), 1,
      anon_sym_real,
    ACTIONS(264), 1,
      sym_refersTo,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_array,
    STATE(173), 1,
      sym__type_name,
    STATE(205), 1,
      sym_type,
    STATE(267), 1,
      sym__custom_type,
    STATE(277), 1,
      sym__custom_generic_type,
    ACTIONS(258), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(270), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2495] = 10,
    ACTIONS(260), 1,
      anon_sym_real,
    ACTIONS(264), 1,
      sym_refersTo,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_array,
    STATE(173), 1,
      sym__type_name,
    STATE(184), 1,
      sym_type,
    STATE(267), 1,
      sym__custom_type,
    STATE(277), 1,
      sym__custom_generic_type,
    ACTIONS(258), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(270), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2529] = 10,
    ACTIONS(260), 1,
      anon_sym_real,
    ACTIONS(264), 1,
      sym_refersTo,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_array,
    STATE(173), 1,
      sym__type_name,
    STATE(206), 1,
      sym_type,
    STATE(267), 1,
      sym__custom_type,
    STATE(277), 1,
      sym__custom_generic_type,
    ACTIONS(258), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(270), 3,
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
    STATE(173), 1,
      sym__type_name,
    STATE(193), 1,
      sym_declaration_type,
    STATE(267), 1,
      sym__custom_type,
    STATE(277), 1,
      sym__custom_generic_type,
    ACTIONS(258), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(286), 3,
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
    STATE(173), 1,
      sym__type_name,
    STATE(183), 1,
      sym_declaration_type,
    STATE(267), 1,
      sym__custom_type,
    STATE(277), 1,
      sym__custom_generic_type,
    ACTIONS(258), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(286), 3,
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
    STATE(173), 1,
      sym__type_name,
    STATE(200), 1,
      sym_declaration_type,
    STATE(267), 1,
      sym__custom_type,
    STATE(277), 1,
      sym__custom_generic_type,
    ACTIONS(258), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(286), 3,
      sym_basis_type,
      sym_delclaration_array_type,
      sym_custom_type,
  [2665] = 10,
    ACTIONS(260), 1,
      anon_sym_real,
    ACTIONS(264), 1,
      sym_refersTo,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_array,
    STATE(173), 1,
      sym__type_name,
    STATE(187), 1,
      sym_type,
    STATE(267), 1,
      sym__custom_type,
    STATE(277), 1,
      sym__custom_generic_type,
    ACTIONS(258), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(270), 3,
      sym_basis_type,
      sym_array_type,
      sym_custom_type,
  [2699] = 6,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(60), 1,
      sym_primary_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(66), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2724] = 4,
    STATE(98), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(270), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [2745] = 6,
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
    STATE(50), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2770] = 6,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(62), 1,
      sym_primary_expression,
    ACTIONS(145), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(147), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2795] = 4,
    STATE(90), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 4,
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
  [2816] = 6,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(9), 1,
      sym_primary_expression,
    ACTIONS(145), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(147), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2841] = 4,
    STATE(90), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(272), 4,
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
  [2862] = 6,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(122), 1,
      sym_primary_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(66), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2887] = 6,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(139), 1,
      sym_primary_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(66), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2912] = 6,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(7), 1,
      sym_primary_expression,
    ACTIONS(145), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(147), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2937] = 6,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(58), 1,
      sym_primary_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(66), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2962] = 6,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(52), 1,
      sym_primary_expression,
    ACTIONS(145), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(147), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [2987] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(49), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(50), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3012] = 6,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(64), 1,
      sym_primary_expression,
    ACTIONS(73), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(75), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(50), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3037] = 4,
    STATE(98), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(283), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(280), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(275), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [3058] = 6,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(74), 1,
      sym_primary_expression,
    ACTIONS(145), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(147), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3083] = 6,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(75), 1,
      sym_primary_expression,
    ACTIONS(135), 3,
      sym_integer,
      sym_true,
      sym_false,
    ACTIONS(137), 3,
      sym_float,
      sym_string,
      sym_character,
    STATE(66), 3,
      sym_binary_operator,
      sym_parenthesized_expression,
      sym_variable_access,
  [3108] = 3,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_constant_repeat1,
    ACTIONS(286), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3126] = 7,
    ACTIONS(290), 1,
      anon_sym_elsif,
    ACTIONS(292), 1,
      anon_sym_else,
    ACTIONS(294), 1,
      sym__dedent,
    STATE(104), 1,
      aux_sym_if_then_statement_repeat1,
    STATE(133), 1,
      sym_elsif,
    STATE(144), 1,
      sym_else,
    ACTIONS(288), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3152] = 3,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_constant_repeat1,
    ACTIONS(296), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3170] = 7,
    ACTIONS(290), 1,
      anon_sym_elsif,
    ACTIONS(292), 1,
      anon_sym_else,
    ACTIONS(303), 1,
      sym__dedent,
    STATE(107), 1,
      aux_sym_if_then_statement_repeat1,
    STATE(133), 1,
      sym_elsif,
    STATE(156), 1,
      sym_else,
    ACTIONS(301), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3196] = 1,
    ACTIONS(305), 11,
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
  [3210] = 4,
    STATE(108), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(254), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(270), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(250), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3229] = 5,
    ACTIONS(309), 1,
      anon_sym_elsif,
    ACTIONS(312), 1,
      sym__dedent,
    STATE(107), 1,
      aux_sym_if_then_statement_repeat1,
    STATE(133), 1,
      sym_elsif,
    ACTIONS(307), 6,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
  [3250] = 4,
    STATE(108), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(314), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3269] = 1,
    ACTIONS(320), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3281] = 1,
    ACTIONS(322), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3293] = 1,
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
  [3305] = 1,
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
  [3317] = 1,
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
  [3329] = 1,
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
  [3341] = 1,
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
  [3353] = 1,
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
  [3365] = 1,
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
  [3377] = 1,
    ACTIONS(338), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3389] = 1,
    ACTIONS(340), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3401] = 1,
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
  [3413] = 1,
    ACTIONS(344), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_test,
      anon_sym_constants,
      anon_sym_variables,
  [3425] = 5,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_constant_repeat1,
    ACTIONS(179), 2,
      sym__indent,
      anon_sym_constants,
    ACTIONS(252), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
  [3445] = 1,
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
  [3457] = 1,
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
  [3469] = 1,
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
  [3481] = 1,
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
  [3493] = 1,
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
  [3505] = 1,
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
  [3517] = 1,
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
  [3529] = 1,
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
  [3541] = 6,
    ACTIONS(364), 1,
      anon_sym_constants,
    ACTIONS(366), 1,
      anon_sym_variables,
    ACTIONS(368), 1,
      sym__indent,
    STATE(114), 1,
      sym_block,
    STATE(163), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
    STATE(164), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [3562] = 6,
    ACTIONS(364), 1,
      anon_sym_constants,
    ACTIONS(366), 1,
      anon_sym_variables,
    ACTIONS(368), 1,
      sym__indent,
    STATE(130), 1,
      sym_block,
    STATE(137), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(171), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3583] = 2,
    ACTIONS(372), 1,
      sym__dedent,
    ACTIONS(370), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [3596] = 6,
    ACTIONS(364), 1,
      anon_sym_constants,
    ACTIONS(366), 1,
      anon_sym_variables,
    ACTIONS(368), 1,
      sym__indent,
    STATE(126), 1,
      sym_block,
    STATE(131), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(160), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3617] = 2,
    ACTIONS(376), 1,
      sym__dedent,
    ACTIONS(374), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [3630] = 2,
    ACTIONS(352), 1,
      sym__dedent,
    ACTIONS(378), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [3643] = 6,
    ACTIONS(364), 1,
      anon_sym_constants,
    ACTIONS(366), 1,
      anon_sym_variables,
    ACTIONS(368), 1,
      sym__indent,
    STATE(113), 1,
      sym_block,
    STATE(162), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
    STATE(164), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [3664] = 2,
    ACTIONS(348), 1,
      sym__dedent,
    ACTIONS(380), 7,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elsif,
      anon_sym_else,
      sym_identifier,
  [3677] = 3,
    ACTIONS(252), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
    ACTIONS(256), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [3692] = 2,
    ACTIONS(384), 1,
      sym__dedent,
    ACTIONS(382), 6,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
      sym_refersTo,
      sym_identifier,
  [3704] = 2,
    ACTIONS(305), 1,
      sym__dedent,
    ACTIONS(386), 6,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
      sym_refersTo,
      sym_identifier,
  [3716] = 2,
    ACTIONS(390), 1,
      sym__dedent,
    ACTIONS(388), 6,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
      sym_refersTo,
      sym_identifier,
  [3728] = 2,
    ACTIONS(348), 1,
      sym__dedent,
    ACTIONS(380), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3739] = 2,
    ACTIONS(394), 1,
      sym__dedent,
    ACTIONS(392), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3750] = 4,
    ACTIONS(396), 1,
      anon_sym_generic,
    ACTIONS(398), 1,
      aux_sym_comment_token1,
    ACTIONS(400), 1,
      sym__newline,
    STATE(226), 3,
      sym_generics,
      sym_comment,
      sym__end_line,
  [3765] = 6,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    ACTIONS(404), 1,
      anon_sym_var,
    ACTIONS(406), 1,
      sym_identifier,
    STATE(224), 1,
      sym_parameter,
    STATE(342), 1,
      sym_var,
    STATE(352), 1,
      sym__parameters,
  [3784] = 2,
    ACTIONS(410), 1,
      sym__dedent,
    ACTIONS(408), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3795] = 2,
    ACTIONS(414), 1,
      sym__dedent,
    ACTIONS(412), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3806] = 2,
    ACTIONS(418), 1,
      sym__dedent,
    ACTIONS(416), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3817] = 2,
    ACTIONS(422), 1,
      sym__dedent,
    ACTIONS(420), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3828] = 5,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(428), 1,
      sym__newline,
    STATE(152), 1,
      aux_sym_export_repeat1,
    STATE(121), 2,
      sym_comment,
      sym__end_line,
  [3845] = 5,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(430), 1,
      sym__newline,
    STATE(182), 1,
      aux_sym_export_repeat1,
    STATE(128), 2,
      sym_comment,
      sym__end_line,
  [3862] = 2,
    ACTIONS(434), 1,
      sym__dedent,
    ACTIONS(432), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3873] = 5,
    ACTIONS(398), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      sym__newline,
    STATE(188), 1,
      aux_sym_generics_repeat1,
    STATE(254), 2,
      sym_comment,
      sym__end_line,
  [3890] = 5,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(440), 1,
      anon_sym_LBRACK,
    ACTIONS(442), 1,
      sym__newline,
    STATE(175), 1,
      sym_imports,
    STATE(118), 2,
      sym_comment,
      sym__end_line,
  [3907] = 2,
    ACTIONS(446), 1,
      sym__dedent,
    ACTIONS(444), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3918] = 2,
    ACTIONS(305), 1,
      sym__dedent,
    ACTIONS(386), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3929] = 5,
    ACTIONS(398), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(448), 1,
      sym__newline,
    STATE(154), 1,
      aux_sym_generics_repeat1,
    STATE(241), 2,
      sym_comment,
      sym__end_line,
  [3946] = 2,
    ACTIONS(352), 1,
      sym__dedent,
    ACTIONS(378), 5,
      anon_sym_for,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      sym_identifier,
  [3957] = 4,
    ACTIONS(364), 1,
      anon_sym_constants,
    ACTIONS(368), 1,
      sym__indent,
    STATE(116), 1,
      sym_block,
    STATE(191), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3971] = 1,
    ACTIONS(151), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [3979] = 4,
    ACTIONS(364), 1,
      anon_sym_constants,
    ACTIONS(368), 1,
      sym__indent,
    STATE(111), 1,
      sym_block,
    STATE(191), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [3993] = 4,
    ACTIONS(364), 1,
      anon_sym_constants,
    ACTIONS(368), 1,
      sym__indent,
    STATE(127), 1,
      sym_block,
    STATE(191), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4007] = 3,
    ACTIONS(452), 1,
      anon_sym_variables,
    ACTIONS(450), 2,
      sym__indent,
      anon_sym_constants,
    STATE(164), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [4019] = 1,
    ACTIONS(455), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [4027] = 1,
    ACTIONS(151), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4035] = 2,
    ACTIONS(457), 1,
      anon_sym_and,
    ACTIONS(455), 4,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_or,
      aux_sym_comment_token1,
  [4045] = 2,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(455), 4,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_or,
  [4055] = 1,
    ACTIONS(461), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_and,
      anon_sym_or,
  [4063] = 1,
    ACTIONS(455), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4071] = 4,
    ACTIONS(364), 1,
      anon_sym_constants,
    ACTIONS(368), 1,
      sym__indent,
    STATE(119), 1,
      sym_block,
    STATE(191), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4085] = 1,
    ACTIONS(461), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      aux_sym_comment_token1,
  [4093] = 4,
    ACTIONS(465), 1,
      sym_identifier,
    STATE(194), 1,
      sym__generic,
    STATE(269), 1,
      sym__generics,
    ACTIONS(463), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4107] = 3,
    ACTIONS(457), 1,
      anon_sym_and,
    ACTIONS(469), 1,
      anon_sym_or,
    ACTIONS(467), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4119] = 3,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(471), 1,
      sym__newline,
    STATE(124), 2,
      sym_comment,
      sym__end_line,
  [4130] = 1,
    ACTIONS(473), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4137] = 1,
    ACTIONS(475), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4144] = 4,
    ACTIONS(477), 1,
      anon_sym_and,
    ACTIONS(479), 1,
      anon_sym_or,
    ACTIONS(481), 1,
      sym__indent,
    STATE(153), 1,
      sym_block,
  [4157] = 3,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(485), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4168] = 3,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_constant_repeat1,
    ACTIONS(296), 2,
      sym__indent,
      anon_sym_constants,
  [4179] = 3,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_export_repeat1,
    ACTIONS(493), 2,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4190] = 3,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_export_repeat1,
    ACTIONS(493), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4201] = 3,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(498), 1,
      sym__newline,
    STATE(117), 2,
      sym_comment,
      sym__end_line,
  [4212] = 3,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(500), 1,
      sym__newline,
    STATE(291), 2,
      sym_comment,
      sym__end_line,
  [4223] = 4,
    ACTIONS(404), 1,
      anon_sym_var,
    ACTIONS(406), 1,
      sym_identifier,
    STATE(268), 1,
      sym_parameter,
    STATE(342), 1,
      sym_var,
  [4236] = 4,
    ACTIONS(477), 1,
      anon_sym_and,
    ACTIONS(479), 1,
      anon_sym_or,
    ACTIONS(481), 1,
      sym__indent,
    STATE(150), 1,
      sym_block,
  [4249] = 3,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(502), 1,
      sym__newline,
    STATE(261), 2,
      sym_comment,
      sym__end_line,
  [4260] = 3,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_generics_repeat1,
    ACTIONS(507), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4271] = 3,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym__generics_repeat1,
    ACTIONS(512), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4282] = 3,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(514), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4293] = 3,
    ACTIONS(516), 1,
      anon_sym_constants,
    ACTIONS(519), 1,
      sym__indent,
    STATE(191), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [4304] = 3,
    ACTIONS(457), 1,
      anon_sym_and,
    ACTIONS(469), 1,
      anon_sym_or,
    ACTIONS(521), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4315] = 3,
    ACTIONS(398), 1,
      aux_sym_comment_token1,
    ACTIONS(523), 1,
      sym__newline,
    STATE(238), 2,
      sym_comment,
      sym__end_line,
  [4326] = 3,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym__generics_repeat1,
    ACTIONS(527), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4337] = 3,
    ACTIONS(529), 1,
      aux_sym_comment_token1,
    ACTIONS(531), 1,
      sym__newline,
    STATE(140), 2,
      sym_comment,
      sym__end_line,
  [4348] = 3,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(536), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4359] = 4,
    ACTIONS(538), 1,
      sym_identifier,
    STATE(222), 1,
      sym__type_name,
    STATE(315), 1,
      sym__custom_generic_type,
    STATE(316), 1,
      sym__custom_type,
  [4372] = 3,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_constant_repeat1,
    ACTIONS(286), 2,
      sym__indent,
      anon_sym_constants,
  [4383] = 3,
    ACTIONS(540), 1,
      aux_sym_comment_token1,
    ACTIONS(542), 1,
      sym__newline,
    STATE(148), 2,
      sym_comment,
      sym__end_line,
  [4394] = 3,
    ACTIONS(398), 1,
      aux_sym_comment_token1,
    ACTIONS(544), 1,
      sym__newline,
    STATE(216), 2,
      sym_comment,
      sym__end_line,
  [4405] = 3,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(546), 1,
      sym__newline,
    STATE(129), 2,
      sym_comment,
      sym__end_line,
  [4416] = 3,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym__generics_repeat1,
    ACTIONS(548), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4427] = 1,
    ACTIONS(550), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [4434] = 4,
    ACTIONS(552), 1,
      sym_identifier,
    STATE(173), 1,
      sym__type_name,
    STATE(265), 1,
      sym__custom_type,
    STATE(266), 1,
      sym__custom_generic_type,
  [4447] = 3,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(554), 1,
      sym__newline,
    STATE(285), 2,
      sym_comment,
      sym__end_line,
  [4458] = 3,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(556), 1,
      sym__newline,
    STATE(284), 2,
      sym_comment,
      sym__end_line,
  [4469] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      aux_sym_enum_repeat1,
  [4479] = 1,
    ACTIONS(562), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4485] = 3,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_COLON,
    STATE(181), 1,
      aux_sym_export_repeat1,
  [4495] = 3,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      anon_sym_COLON,
    STATE(209), 1,
      aux_sym_export_repeat1,
  [4505] = 1,
    ACTIONS(151), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4511] = 3,
    ACTIONS(512), 1,
      sym_identifier,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym__generics_repeat1,
  [4521] = 1,
    ACTIONS(573), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4527] = 3,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(575), 1,
      anon_sym_RBRACK,
    ACTIONS(577), 1,
      anon_sym_or,
  [4537] = 3,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(577), 1,
      anon_sym_or,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
  [4547] = 1,
    ACTIONS(360), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4553] = 1,
    ACTIONS(455), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4559] = 2,
    ACTIONS(477), 1,
      anon_sym_and,
    ACTIONS(455), 2,
      sym__indent,
      anon_sym_or,
  [4567] = 3,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(577), 1,
      anon_sym_or,
    ACTIONS(581), 1,
      anon_sym_then,
  [4577] = 3,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(577), 1,
      anon_sym_or,
    ACTIONS(583), 1,
      anon_sym_RBRACK,
  [4587] = 3,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(577), 1,
      anon_sym_or,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
  [4597] = 3,
    ACTIONS(587), 1,
      sym_identifier,
    STATE(239), 1,
      sym__generic,
    STATE(312), 1,
      sym__generics,
  [4607] = 1,
    ACTIONS(536), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4613] = 3,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      aux_sym__parameters_repeat1,
  [4623] = 3,
    ACTIONS(396), 1,
      anon_sym_generic,
    ACTIONS(594), 1,
      sym__indent,
    STATE(309), 1,
      sym_generics,
  [4633] = 1,
    ACTIONS(596), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4639] = 1,
    ACTIONS(598), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4645] = 3,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      aux_sym_enum_repeat1,
  [4655] = 1,
    ACTIONS(605), 3,
      sym__newline,
      anon_sym_generic,
      aux_sym_comment_token1,
  [4661] = 3,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      aux_sym_export_repeat1,
  [4671] = 3,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(577), 1,
      anon_sym_or,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
  [4681] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      anon_sym_RBRACK,
    STATE(207), 1,
      aux_sym_enum_repeat1,
  [4691] = 3,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_COLON,
    STATE(253), 1,
      aux_sym_export_repeat1,
  [4701] = 3,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_COLON,
    STATE(259), 1,
      aux_sym_parameter_repeat1,
  [4711] = 1,
    ACTIONS(619), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4717] = 3,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(577), 1,
      anon_sym_or,
    ACTIONS(621), 1,
      anon_sym_RBRACK,
  [4727] = 3,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      anon_sym_COLON,
    STATE(245), 1,
      aux_sym_parameter_repeat1,
  [4737] = 1,
    ACTIONS(336), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4743] = 3,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym__generics_repeat1,
  [4753] = 1,
    ACTIONS(627), 3,
      sym__newline,
      anon_sym_generic,
      aux_sym_comment_token1,
  [4759] = 1,
    ACTIONS(629), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4765] = 3,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(577), 1,
      anon_sym_or,
    ACTIONS(631), 1,
      anon_sym_then,
  [4775] = 1,
    ACTIONS(633), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4781] = 1,
    ACTIONS(461), 3,
      sym__indent,
      anon_sym_and,
      anon_sym_or,
  [4787] = 3,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_COLON,
    STATE(260), 1,
      aux_sym_parameter_repeat1,
  [4797] = 3,
    ACTIONS(637), 1,
      sym_identifier,
    STATE(132), 1,
      sym_function_header,
    STATE(227), 1,
      sym__function_header,
  [4807] = 3,
    ACTIONS(548), 1,
      sym_identifier,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym__generics_repeat1,
  [4817] = 3,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      aux_sym__parameters_repeat1,
  [4827] = 3,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 1,
      anon_sym_SEMI,
    STATE(249), 1,
      aux_sym__parameters_repeat1,
  [4837] = 2,
    ACTIONS(646), 1,
      anon_sym_from,
    ACTIONS(648), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4845] = 2,
    ACTIONS(650), 1,
      anon_sym_from,
    ACTIONS(648), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4853] = 1,
    ACTIONS(652), 3,
      sym__newline,
      aux_sym_comment_token1,
      sym_identifier,
  [4859] = 3,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_COLON,
    STATE(181), 1,
      aux_sym_export_repeat1,
  [4869] = 1,
    ACTIONS(656), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4875] = 1,
    ACTIONS(658), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [4881] = 3,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(660), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      aux_sym_export_repeat1,
  [4891] = 1,
    ACTIONS(633), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4897] = 1,
    ACTIONS(305), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [4903] = 3,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_COLON,
    STATE(260), 1,
      aux_sym_parameter_repeat1,
  [4913] = 3,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_COLON,
    STATE(260), 1,
      aux_sym_parameter_repeat1,
  [4923] = 1,
    ACTIONS(669), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4928] = 1,
    ACTIONS(658), 2,
      anon_sym_COMMA,
      sym_identifier,
  [4933] = 1,
    ACTIONS(667), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [4938] = 1,
    ACTIONS(671), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4943] = 1,
    ACTIONS(673), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4948] = 1,
    ACTIONS(675), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4953] = 1,
    ACTIONS(677), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4958] = 1,
    ACTIONS(641), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4963] = 1,
    ACTIONS(679), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4968] = 1,
    ACTIONS(681), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4973] = 1,
    ACTIONS(683), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4978] = 2,
    ACTIONS(685), 1,
      sym__indent,
    STATE(135), 1,
      sym_block,
  [4985] = 1,
    ACTIONS(687), 2,
      sym__newline,
      aux_sym_comment_token1,
  [4990] = 2,
    ACTIONS(689), 1,
      sym_identifier,
    STATE(292), 1,
      sym__generic,
  [4997] = 1,
    ACTIONS(691), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5002] = 2,
    ACTIONS(481), 1,
      sym__indent,
    STATE(147), 1,
      sym_block,
  [5009] = 1,
    ACTIONS(693), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5014] = 2,
    ACTIONS(685), 1,
      sym__indent,
    STATE(102), 1,
      sym_block,
  [5021] = 2,
    ACTIONS(695), 1,
      anon_sym_from,
    ACTIONS(697), 1,
      sym_identifier,
  [5028] = 1,
    ACTIONS(699), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5033] = 2,
    ACTIONS(465), 1,
      sym_identifier,
    STATE(213), 1,
      sym__generic,
  [5040] = 2,
    ACTIONS(481), 1,
      sym__indent,
    STATE(149), 1,
      sym_block,
  [5047] = 2,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_parameters,
  [5054] = 1,
    ACTIONS(703), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5059] = 1,
    ACTIONS(705), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5064] = 1,
    ACTIONS(707), 2,
      sym__newline,
      aux_sym_comment_token1,
  [5069] = 2,
    ACTIONS(709), 1,
      sym_identifier,
    STATE(235), 1,
      sym_variable_access,
  [5076] = 2,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(711), 1,
      anon_sym_from,
  [5083] = 2,
    ACTIONS(637), 1,
      sym_identifier,
    STATE(134), 1,
      sym__function_header,
  [5090] = 1,
    ACTIONS(713), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5095] = 1,
    ACTIONS(715), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [5100] = 1,
    ACTIONS(573), 2,
      anon_sym_COMMA,
      sym_identifier,
  [5105] = 2,
    ACTIONS(717), 1,
      anon_sym_from,
    STATE(276), 1,
      sym_range,
  [5112] = 1,
    ACTIONS(719), 1,
      sym_identifier,
  [5116] = 1,
    ACTIONS(721), 1,
      sym_identifier,
  [5120] = 1,
    ACTIONS(723), 1,
      sym_identifier,
  [5124] = 1,
    ACTIONS(725), 1,
      sym_identifier,
  [5128] = 1,
    ACTIONS(727), 1,
      sym_integer,
  [5132] = 1,
    ACTIONS(729), 1,
      sym_integer,
  [5136] = 1,
    ACTIONS(731), 1,
      sym_identifier,
  [5140] = 1,
    ACTIONS(733), 1,
      anon_sym_to,
  [5144] = 1,
    ACTIONS(735), 1,
      sym_identifier,
  [5148] = 1,
    ACTIONS(737), 1,
      anon_sym_to,
  [5152] = 1,
    ACTIONS(699), 1,
      sym_identifier,
  [5156] = 1,
    ACTIONS(739), 1,
      sym_identifier,
  [5160] = 1,
    ACTIONS(741), 1,
      sym_integer,
  [5164] = 1,
    ACTIONS(743), 1,
      sym__newline,
  [5168] = 1,
    ACTIONS(745), 1,
      sym_identifier,
  [5172] = 1,
    ACTIONS(747), 1,
      sym__indent,
  [5176] = 1,
    ACTIONS(749), 1,
      sym_identifier,
  [5180] = 1,
    ACTIONS(751), 1,
      sym_identifier,
  [5184] = 1,
    ACTIONS(679), 1,
      sym_identifier,
  [5188] = 1,
    ACTIONS(753), 1,
      sym__indent,
  [5192] = 1,
    ACTIONS(755), 1,
      anon_sym_of,
  [5196] = 1,
    ACTIONS(675), 1,
      sym_identifier,
  [5200] = 1,
    ACTIONS(673), 1,
      sym_identifier,
  [5204] = 1,
    ACTIONS(757), 1,
      anon_sym_LBRACK,
  [5208] = 1,
    ACTIONS(759), 1,
      sym_identifier,
  [5212] = 1,
    ACTIONS(761), 1,
      anon_sym_EQ,
  [5216] = 1,
    ACTIONS(763), 1,
      anon_sym_for,
  [5220] = 1,
    ACTIONS(765), 1,
      sym_float,
  [5224] = 1,
    ACTIONS(767), 1,
      sym_integer,
  [5228] = 1,
    ACTIONS(769), 1,
      anon_sym_of,
  [5232] = 1,
    ACTIONS(771), 1,
      sym_integer,
  [5236] = 1,
    ACTIONS(773), 1,
      sym_identifier,
  [5240] = 1,
    ACTIONS(775), 1,
      anon_sym_from,
  [5244] = 1,
    ACTIONS(691), 1,
      sym_identifier,
  [5248] = 1,
    ACTIONS(777), 1,
      sym_identifier,
  [5252] = 1,
    ACTIONS(779), 1,
      sym__newline,
  [5256] = 1,
    ACTIONS(781), 1,
      anon_sym_COLON_EQ,
  [5260] = 1,
    ACTIONS(783), 1,
      anon_sym_until,
  [5264] = 1,
    ACTIONS(785), 1,
      sym_identifier,
  [5268] = 1,
    ACTIONS(787), 1,
      sym_integer,
  [5272] = 1,
    ACTIONS(693), 1,
      sym_identifier,
  [5276] = 1,
    ACTIONS(789), 1,
      anon_sym_EQ,
  [5280] = 1,
    ACTIONS(677), 1,
      sym_identifier,
  [5284] = 1,
    ACTIONS(791), 1,
      ts_builtin_sym_end,
  [5288] = 1,
    ACTIONS(793), 1,
      sym_identifier,
  [5292] = 1,
    ACTIONS(795), 1,
      anon_sym_EQ,
  [5296] = 1,
    ACTIONS(797), 1,
      sym_identifier,
  [5300] = 1,
    ACTIONS(799), 1,
      sym_identifier,
  [5304] = 1,
    ACTIONS(801), 1,
      sym_identifier,
  [5308] = 1,
    ACTIONS(681), 1,
      sym_identifier,
  [5312] = 1,
    ACTIONS(803), 1,
      anon_sym_EQ,
  [5316] = 1,
    ACTIONS(805), 1,
      sym_integer,
  [5320] = 1,
    ACTIONS(805), 1,
      sym_float,
  [5324] = 1,
    ACTIONS(807), 1,
      sym__newline,
  [5328] = 1,
    ACTIONS(809), 1,
      sym_identifier,
  [5332] = 1,
    ACTIONS(811), 1,
      anon_sym_to,
  [5336] = 1,
    ACTIONS(813), 1,
      sym_identifier,
  [5340] = 1,
    ACTIONS(652), 1,
      sym_identifier,
  [5344] = 1,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
  [5348] = 1,
    ACTIONS(817), 1,
      sym__newline,
  [5352] = 1,
    ACTIONS(819), 1,
      anon_sym_EQ,
  [5356] = 1,
    ACTIONS(821), 1,
      anon_sym_to,
  [5360] = 1,
    ACTIONS(729), 1,
      sym_float,
  [5364] = 1,
    ACTIONS(823), 1,
      anon_sym_of,
  [5368] = 1,
    ACTIONS(825), 1,
      sym_identifier,
  [5372] = 1,
    ACTIONS(827), 1,
      sym_identifier,
  [5376] = 1,
    ACTIONS(829), 1,
      sym_identifier,
  [5380] = 1,
    ACTIONS(831), 1,
      anon_sym_to,
  [5384] = 1,
    ACTIONS(833), 1,
      anon_sym_to,
  [5388] = 1,
    ACTIONS(835), 1,
      sym_identifier,
  [5392] = 1,
    ACTIONS(837), 1,
      sym_identifier,
  [5396] = 1,
    ACTIONS(839), 1,
      sym_identifier,
  [5400] = 1,
    ACTIONS(841), 1,
      sym_identifier,
  [5404] = 1,
    ACTIONS(843), 1,
      sym_integer,
  [5408] = 1,
    ACTIONS(845), 1,
      sym_float,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 221,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 316,
  [SMALL_STATE(12)] = 376,
  [SMALL_STATE(13)] = 406,
  [SMALL_STATE(14)] = 436,
  [SMALL_STATE(15)] = 466,
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
  [SMALL_STATE(28)] = 884,
  [SMALL_STATE(29)] = 920,
  [SMALL_STATE(30)] = 956,
  [SMALL_STATE(31)] = 992,
  [SMALL_STATE(32)] = 1028,
  [SMALL_STATE(33)] = 1064,
  [SMALL_STATE(34)] = 1100,
  [SMALL_STATE(35)] = 1136,
  [SMALL_STATE(36)] = 1172,
  [SMALL_STATE(37)] = 1208,
  [SMALL_STATE(38)] = 1244,
  [SMALL_STATE(39)] = 1274,
  [SMALL_STATE(40)] = 1310,
  [SMALL_STATE(41)] = 1346,
  [SMALL_STATE(42)] = 1382,
  [SMALL_STATE(43)] = 1418,
  [SMALL_STATE(44)] = 1448,
  [SMALL_STATE(45)] = 1484,
  [SMALL_STATE(46)] = 1520,
  [SMALL_STATE(47)] = 1556,
  [SMALL_STATE(48)] = 1592,
  [SMALL_STATE(49)] = 1628,
  [SMALL_STATE(50)] = 1651,
  [SMALL_STATE(51)] = 1672,
  [SMALL_STATE(52)] = 1707,
  [SMALL_STATE(53)] = 1734,
  [SMALL_STATE(54)] = 1769,
  [SMALL_STATE(55)] = 1804,
  [SMALL_STATE(56)] = 1839,
  [SMALL_STATE(57)] = 1874,
  [SMALL_STATE(58)] = 1895,
  [SMALL_STATE(59)] = 1918,
  [SMALL_STATE(60)] = 1961,
  [SMALL_STATE(61)] = 1982,
  [SMALL_STATE(62)] = 2017,
  [SMALL_STATE(63)] = 2042,
  [SMALL_STATE(64)] = 2067,
  [SMALL_STATE(65)] = 2088,
  [SMALL_STATE(66)] = 2123,
  [SMALL_STATE(67)] = 2144,
  [SMALL_STATE(68)] = 2187,
  [SMALL_STATE(69)] = 2210,
  [SMALL_STATE(70)] = 2231,
  [SMALL_STATE(71)] = 2274,
  [SMALL_STATE(72)] = 2314,
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
  [SMALL_STATE(86)] = 2745,
  [SMALL_STATE(87)] = 2770,
  [SMALL_STATE(88)] = 2795,
  [SMALL_STATE(89)] = 2816,
  [SMALL_STATE(90)] = 2841,
  [SMALL_STATE(91)] = 2862,
  [SMALL_STATE(92)] = 2887,
  [SMALL_STATE(93)] = 2912,
  [SMALL_STATE(94)] = 2937,
  [SMALL_STATE(95)] = 2962,
  [SMALL_STATE(96)] = 2987,
  [SMALL_STATE(97)] = 3012,
  [SMALL_STATE(98)] = 3037,
  [SMALL_STATE(99)] = 3058,
  [SMALL_STATE(100)] = 3083,
  [SMALL_STATE(101)] = 3108,
  [SMALL_STATE(102)] = 3126,
  [SMALL_STATE(103)] = 3152,
  [SMALL_STATE(104)] = 3170,
  [SMALL_STATE(105)] = 3196,
  [SMALL_STATE(106)] = 3210,
  [SMALL_STATE(107)] = 3229,
  [SMALL_STATE(108)] = 3250,
  [SMALL_STATE(109)] = 3269,
  [SMALL_STATE(110)] = 3281,
  [SMALL_STATE(111)] = 3293,
  [SMALL_STATE(112)] = 3305,
  [SMALL_STATE(113)] = 3317,
  [SMALL_STATE(114)] = 3329,
  [SMALL_STATE(115)] = 3341,
  [SMALL_STATE(116)] = 3353,
  [SMALL_STATE(117)] = 3365,
  [SMALL_STATE(118)] = 3377,
  [SMALL_STATE(119)] = 3389,
  [SMALL_STATE(120)] = 3401,
  [SMALL_STATE(121)] = 3413,
  [SMALL_STATE(122)] = 3425,
  [SMALL_STATE(123)] = 3445,
  [SMALL_STATE(124)] = 3457,
  [SMALL_STATE(125)] = 3469,
  [SMALL_STATE(126)] = 3481,
  [SMALL_STATE(127)] = 3493,
  [SMALL_STATE(128)] = 3505,
  [SMALL_STATE(129)] = 3517,
  [SMALL_STATE(130)] = 3529,
  [SMALL_STATE(131)] = 3541,
  [SMALL_STATE(132)] = 3562,
  [SMALL_STATE(133)] = 3583,
  [SMALL_STATE(134)] = 3596,
  [SMALL_STATE(135)] = 3617,
  [SMALL_STATE(136)] = 3630,
  [SMALL_STATE(137)] = 3643,
  [SMALL_STATE(138)] = 3664,
  [SMALL_STATE(139)] = 3677,
  [SMALL_STATE(140)] = 3692,
  [SMALL_STATE(141)] = 3704,
  [SMALL_STATE(142)] = 3716,
  [SMALL_STATE(143)] = 3728,
  [SMALL_STATE(144)] = 3739,
  [SMALL_STATE(145)] = 3750,
  [SMALL_STATE(146)] = 3765,
  [SMALL_STATE(147)] = 3784,
  [SMALL_STATE(148)] = 3795,
  [SMALL_STATE(149)] = 3806,
  [SMALL_STATE(150)] = 3817,
  [SMALL_STATE(151)] = 3828,
  [SMALL_STATE(152)] = 3845,
  [SMALL_STATE(153)] = 3862,
  [SMALL_STATE(154)] = 3873,
  [SMALL_STATE(155)] = 3890,
  [SMALL_STATE(156)] = 3907,
  [SMALL_STATE(157)] = 3918,
  [SMALL_STATE(158)] = 3929,
  [SMALL_STATE(159)] = 3946,
  [SMALL_STATE(160)] = 3957,
  [SMALL_STATE(161)] = 3971,
  [SMALL_STATE(162)] = 3979,
  [SMALL_STATE(163)] = 3993,
  [SMALL_STATE(164)] = 4007,
  [SMALL_STATE(165)] = 4019,
  [SMALL_STATE(166)] = 4027,
  [SMALL_STATE(167)] = 4035,
  [SMALL_STATE(168)] = 4045,
  [SMALL_STATE(169)] = 4055,
  [SMALL_STATE(170)] = 4063,
  [SMALL_STATE(171)] = 4071,
  [SMALL_STATE(172)] = 4085,
  [SMALL_STATE(173)] = 4093,
  [SMALL_STATE(174)] = 4107,
  [SMALL_STATE(175)] = 4119,
  [SMALL_STATE(176)] = 4130,
  [SMALL_STATE(177)] = 4137,
  [SMALL_STATE(178)] = 4144,
  [SMALL_STATE(179)] = 4157,
  [SMALL_STATE(180)] = 4168,
  [SMALL_STATE(181)] = 4179,
  [SMALL_STATE(182)] = 4190,
  [SMALL_STATE(183)] = 4201,
  [SMALL_STATE(184)] = 4212,
  [SMALL_STATE(185)] = 4223,
  [SMALL_STATE(186)] = 4236,
  [SMALL_STATE(187)] = 4249,
  [SMALL_STATE(188)] = 4260,
  [SMALL_STATE(189)] = 4271,
  [SMALL_STATE(190)] = 4282,
  [SMALL_STATE(191)] = 4293,
  [SMALL_STATE(192)] = 4304,
  [SMALL_STATE(193)] = 4315,
  [SMALL_STATE(194)] = 4326,
  [SMALL_STATE(195)] = 4337,
  [SMALL_STATE(196)] = 4348,
  [SMALL_STATE(197)] = 4359,
  [SMALL_STATE(198)] = 4372,
  [SMALL_STATE(199)] = 4383,
  [SMALL_STATE(200)] = 4394,
  [SMALL_STATE(201)] = 4405,
  [SMALL_STATE(202)] = 4416,
  [SMALL_STATE(203)] = 4427,
  [SMALL_STATE(204)] = 4434,
  [SMALL_STATE(205)] = 4447,
  [SMALL_STATE(206)] = 4458,
  [SMALL_STATE(207)] = 4469,
  [SMALL_STATE(208)] = 4479,
  [SMALL_STATE(209)] = 4485,
  [SMALL_STATE(210)] = 4495,
  [SMALL_STATE(211)] = 4505,
  [SMALL_STATE(212)] = 4511,
  [SMALL_STATE(213)] = 4521,
  [SMALL_STATE(214)] = 4527,
  [SMALL_STATE(215)] = 4537,
  [SMALL_STATE(216)] = 4547,
  [SMALL_STATE(217)] = 4553,
  [SMALL_STATE(218)] = 4559,
  [SMALL_STATE(219)] = 4567,
  [SMALL_STATE(220)] = 4577,
  [SMALL_STATE(221)] = 4587,
  [SMALL_STATE(222)] = 4597,
  [SMALL_STATE(223)] = 4607,
  [SMALL_STATE(224)] = 4613,
  [SMALL_STATE(225)] = 4623,
  [SMALL_STATE(226)] = 4633,
  [SMALL_STATE(227)] = 4639,
  [SMALL_STATE(228)] = 4645,
  [SMALL_STATE(229)] = 4655,
  [SMALL_STATE(230)] = 4661,
  [SMALL_STATE(231)] = 4671,
  [SMALL_STATE(232)] = 4681,
  [SMALL_STATE(233)] = 4691,
  [SMALL_STATE(234)] = 4701,
  [SMALL_STATE(235)] = 4711,
  [SMALL_STATE(236)] = 4717,
  [SMALL_STATE(237)] = 4727,
  [SMALL_STATE(238)] = 4737,
  [SMALL_STATE(239)] = 4743,
  [SMALL_STATE(240)] = 4753,
  [SMALL_STATE(241)] = 4759,
  [SMALL_STATE(242)] = 4765,
  [SMALL_STATE(243)] = 4775,
  [SMALL_STATE(244)] = 4781,
  [SMALL_STATE(245)] = 4787,
  [SMALL_STATE(246)] = 4797,
  [SMALL_STATE(247)] = 4807,
  [SMALL_STATE(248)] = 4817,
  [SMALL_STATE(249)] = 4827,
  [SMALL_STATE(250)] = 4837,
  [SMALL_STATE(251)] = 4845,
  [SMALL_STATE(252)] = 4853,
  [SMALL_STATE(253)] = 4859,
  [SMALL_STATE(254)] = 4869,
  [SMALL_STATE(255)] = 4875,
  [SMALL_STATE(256)] = 4881,
  [SMALL_STATE(257)] = 4891,
  [SMALL_STATE(258)] = 4897,
  [SMALL_STATE(259)] = 4903,
  [SMALL_STATE(260)] = 4913,
  [SMALL_STATE(261)] = 4923,
  [SMALL_STATE(262)] = 4928,
  [SMALL_STATE(263)] = 4933,
  [SMALL_STATE(264)] = 4938,
  [SMALL_STATE(265)] = 4943,
  [SMALL_STATE(266)] = 4948,
  [SMALL_STATE(267)] = 4953,
  [SMALL_STATE(268)] = 4958,
  [SMALL_STATE(269)] = 4963,
  [SMALL_STATE(270)] = 4968,
  [SMALL_STATE(271)] = 4973,
  [SMALL_STATE(272)] = 4978,
  [SMALL_STATE(273)] = 4985,
  [SMALL_STATE(274)] = 4990,
  [SMALL_STATE(275)] = 4997,
  [SMALL_STATE(276)] = 5002,
  [SMALL_STATE(277)] = 5009,
  [SMALL_STATE(278)] = 5014,
  [SMALL_STATE(279)] = 5021,
  [SMALL_STATE(280)] = 5028,
  [SMALL_STATE(281)] = 5033,
  [SMALL_STATE(282)] = 5040,
  [SMALL_STATE(283)] = 5047,
  [SMALL_STATE(284)] = 5054,
  [SMALL_STATE(285)] = 5059,
  [SMALL_STATE(286)] = 5064,
  [SMALL_STATE(287)] = 5069,
  [SMALL_STATE(288)] = 5076,
  [SMALL_STATE(289)] = 5083,
  [SMALL_STATE(290)] = 5090,
  [SMALL_STATE(291)] = 5095,
  [SMALL_STATE(292)] = 5100,
  [SMALL_STATE(293)] = 5105,
  [SMALL_STATE(294)] = 5112,
  [SMALL_STATE(295)] = 5116,
  [SMALL_STATE(296)] = 5120,
  [SMALL_STATE(297)] = 5124,
  [SMALL_STATE(298)] = 5128,
  [SMALL_STATE(299)] = 5132,
  [SMALL_STATE(300)] = 5136,
  [SMALL_STATE(301)] = 5140,
  [SMALL_STATE(302)] = 5144,
  [SMALL_STATE(303)] = 5148,
  [SMALL_STATE(304)] = 5152,
  [SMALL_STATE(305)] = 5156,
  [SMALL_STATE(306)] = 5160,
  [SMALL_STATE(307)] = 5164,
  [SMALL_STATE(308)] = 5168,
  [SMALL_STATE(309)] = 5172,
  [SMALL_STATE(310)] = 5176,
  [SMALL_STATE(311)] = 5180,
  [SMALL_STATE(312)] = 5184,
  [SMALL_STATE(313)] = 5188,
  [SMALL_STATE(314)] = 5192,
  [SMALL_STATE(315)] = 5196,
  [SMALL_STATE(316)] = 5200,
  [SMALL_STATE(317)] = 5204,
  [SMALL_STATE(318)] = 5208,
  [SMALL_STATE(319)] = 5212,
  [SMALL_STATE(320)] = 5216,
  [SMALL_STATE(321)] = 5220,
  [SMALL_STATE(322)] = 5224,
  [SMALL_STATE(323)] = 5228,
  [SMALL_STATE(324)] = 5232,
  [SMALL_STATE(325)] = 5236,
  [SMALL_STATE(326)] = 5240,
  [SMALL_STATE(327)] = 5244,
  [SMALL_STATE(328)] = 5248,
  [SMALL_STATE(329)] = 5252,
  [SMALL_STATE(330)] = 5256,
  [SMALL_STATE(331)] = 5260,
  [SMALL_STATE(332)] = 5264,
  [SMALL_STATE(333)] = 5268,
  [SMALL_STATE(334)] = 5272,
  [SMALL_STATE(335)] = 5276,
  [SMALL_STATE(336)] = 5280,
  [SMALL_STATE(337)] = 5284,
  [SMALL_STATE(338)] = 5288,
  [SMALL_STATE(339)] = 5292,
  [SMALL_STATE(340)] = 5296,
  [SMALL_STATE(341)] = 5300,
  [SMALL_STATE(342)] = 5304,
  [SMALL_STATE(343)] = 5308,
  [SMALL_STATE(344)] = 5312,
  [SMALL_STATE(345)] = 5316,
  [SMALL_STATE(346)] = 5320,
  [SMALL_STATE(347)] = 5324,
  [SMALL_STATE(348)] = 5328,
  [SMALL_STATE(349)] = 5332,
  [SMALL_STATE(350)] = 5336,
  [SMALL_STATE(351)] = 5340,
  [SMALL_STATE(352)] = 5344,
  [SMALL_STATE(353)] = 5348,
  [SMALL_STATE(354)] = 5352,
  [SMALL_STATE(355)] = 5356,
  [SMALL_STATE(356)] = 5360,
  [SMALL_STATE(357)] = 5364,
  [SMALL_STATE(358)] = 5368,
  [SMALL_STATE(359)] = 5372,
  [SMALL_STATE(360)] = 5376,
  [SMALL_STATE(361)] = 5380,
  [SMALL_STATE(362)] = 5384,
  [SMALL_STATE(363)] = 5388,
  [SMALL_STATE(364)] = 5392,
  [SMALL_STATE(365)] = 5396,
  [SMALL_STATE(366)] = 5400,
  [SMALL_STATE(367)] = 5404,
  [SMALL_STATE(368)] = 5408,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 2, .production_id = 26),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 2, .production_id = 26),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 42),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 42), SHIFT_REPEAT(37),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 42),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 42), SHIFT_REPEAT(297),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 59),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 3, .production_id = 59),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 40),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 40),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 46),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 46),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 1, .production_id = 12),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 42), SHIFT_REPEAT(47),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 42), SHIFT_REPEAT(338),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 42), SHIFT_REPEAT(35),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_access_repeat1, 2, .production_id = 42), SHIFT_REPEAT(350),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(318),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(364),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(363),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(359),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(289),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(348),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(341),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(340),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4, .production_id = 16),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 56),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 56),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(332),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(331),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(27),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(36),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 23), SHIFT_REPEAT(279),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 23), SHIFT_REPEAT(288),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 23), SHIFT_REPEAT(323),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 23), SHIFT_REPEAT(197),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 23), SHIFT_REPEAT(351),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 23),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_argument, 1), REDUCE(sym_primary_expression, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 4, .production_id = 16),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 2, .production_id = 38),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 57), SHIFT_REPEAT(87),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 57),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 57), SHIFT_REPEAT(87),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 57), SHIFT_REPEAT(86),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 57), SHIFT_REPEAT(86),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 5, .production_id = 29),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 4, .production_id = 58),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 4, .production_id = 58),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2, .production_id = 47),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2, .production_id = 47), SHIFT_REPEAT(295),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 5, .production_id = 64),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 5, .production_id = 64),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_then_statement_repeat1, 2, .production_id = 69),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_then_statement_repeat1, 2, .production_id = 69), SHIFT_REPEAT(46),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2, .production_id = 69),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 57), SHIFT_REPEAT(100),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 57), SHIFT_REPEAT(100),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, .production_id = 31),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2, .production_id = 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7, .production_id = 60),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6, .production_id = 35),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, .production_id = 44),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 13),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5, .production_id = 22),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 14),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 30),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, .production_id = 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, .production_id = 45),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7, .production_id = 50),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3, .production_id = 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 10),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 27),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 4, .production_id = 8),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 48),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, .production_id = 28),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_then_statement_repeat1, 1, .production_id = 62),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 1, .production_id = 62),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elsif, 4, .production_id = 58),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif, 4, .production_id = 58),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 3, .production_id = 33),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 3, .production_id = 33),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 1, .production_id = 5),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 1, .production_id = 5),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 5, .production_id = 63),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 5, .production_id = 63),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 4, .production_id = 54),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 4, .production_id = 54),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statement, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statement, 2),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else, 2, .production_id = 67),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2, .production_id = 67),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 37),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 37),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 4, .production_id = 55),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, .production_id = 55),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_statement, 6, .production_id = 68),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 6, .production_id = 68),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(366),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 46),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 36),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 6),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 25),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2, .production_id = 47), SHIFT_REPEAT(360),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2, .production_id = 9), SHIFT_REPEAT(328),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2, .production_id = 9),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2, .production_id = 9), SHIFT_REPEAT(308),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 32), SHIFT_REPEAT(310),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 32),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 32), SHIFT_REPEAT(281),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 32),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 41),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(365),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 43),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 1, .production_id = 20),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2), SHIFT_REPEAT(15),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generics, 2, .production_id = 32),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generics_repeat1, 2, .production_id = 24),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 32), SHIFT_REPEAT(274),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generics_repeat1, 2, .production_id = 52),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__custom_type, 1, .production_id = 6), SHIFT(262),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_header, 3, .production_id = 11),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 1, .production_id = 15),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 51), SHIFT_REPEAT(300),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 51),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 39),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 3, .production_id = 24),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2, .production_id = 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(185),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_name, 1, .production_id = 4),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics, 4, .production_id = 34),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic, 1, .production_id = 19),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(302),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 6, .production_id = 65),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 4, .production_id = 8),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 17),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, .production_id = 18),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 6),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_generic_type, 2, .production_id = 21),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delclaration_array_type, 7),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 3, .production_id = 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_type, 5),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, .production_id = 7),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_type, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5, .production_id = 30),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5, .production_id = 61),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 49),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 53),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4, .production_id = 66),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [791] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
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
