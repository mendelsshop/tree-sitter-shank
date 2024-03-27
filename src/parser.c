#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 231
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_variables = 13,
  anon_sym_COLON = 14,
  anon_sym_COLON_EQ = 15,
  anon_sym_repeat = 16,
  anon_sym_until = 17,
  anon_sym_while = 18,
  anon_sym_var = 19,
  anon_sym_if = 20,
  anon_sym_elsif = 21,
  anon_sym_else = 22,
  anon_sym_for = 23,
  anon_sym_from = 24,
  anon_sym_to = 25,
  anon_sym_constants = 26,
  sym_integer = 27,
  sym_float = 28,
  anon_sym_integer = 29,
  anon_sym_real = 30,
  anon_sym_string = 31,
  anon_sym_array = 32,
  anon_sym_of = 33,
  anon_sym_boolean = 34,
  aux_sym_comment_token1 = 35,
  sym_identifier = 36,
  anon_sym_DOT = 37,
  sym_true = 38,
  sym_false = 39,
  sym__newline = 40,
  sym__indent = 41,
  sym__dedent = 42,
  sym_program = 43,
  sym_enum = 44,
  sym_record = 45,
  sym_export = 46,
  sym__multiple_import = 47,
  sym_import = 48,
  sym_module = 49,
  sym_function_definition = 50,
  sym_parameters = 51,
  sym_variable = 52,
  sym_assignment = 53,
  sym_expression = 54,
  sym_statement = 55,
  sym_repeat_statement = 56,
  sym_while_statement = 57,
  sym_call_statement = 58,
  sym_argument = 59,
  sym_if_then_statement = 60,
  sym_if = 61,
  sym_elsif = 62,
  sym_else = 63,
  sym_for = 64,
  sym_constant = 65,
  sym_block = 66,
  sym__parameters = 67,
  sym_var = 68,
  sym_parameter = 69,
  sym_primary_expression = 70,
  sym_basic_type = 71,
  sym_array_type = 72,
  sym_delclaration_array_type = 73,
  sym_declaration_type = 74,
  sym_type = 75,
  sym_comment = 76,
  sym_array_access = 77,
  sym_record_access = 78,
  sym_variable_access = 79,
  aux_sym_program_repeat1 = 80,
  aux_sym_enum_repeat1 = 81,
  aux_sym_record_repeat1 = 82,
  aux_sym_function_definition_repeat1 = 83,
  aux_sym_function_definition_repeat2 = 84,
  aux_sym_call_statement_repeat1 = 85,
  aux_sym_if_then_statement_repeat1 = 86,
  aux_sym_constant_repeat1 = 87,
  aux_sym_block_repeat1 = 88,
  aux_sym__parameters_repeat1 = 89,
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
  [anon_sym_variables] = "variables",
  [anon_sym_COLON] = ":",
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
  [sym_record] = "record",
  [sym_export] = "export",
  [sym__multiple_import] = "_multiple_import",
  [sym_import] = "import",
  [sym_module] = "module",
  [sym_function_definition] = "function_definition",
  [sym_parameters] = "parameters",
  [sym_variable] = "variable",
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
  [sym_primary_expression] = "primary_expression",
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
  [anon_sym_variables] = anon_sym_variables,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_record] = sym_record,
  [sym_export] = sym_export,
  [sym__multiple_import] = sym__multiple_import,
  [sym_import] = sym_import,
  [sym_module] = sym_module,
  [sym_function_definition] = sym_function_definition,
  [sym_parameters] = sym_parameters,
  [sym_variable] = sym_variable,
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
  [sym_primary_expression] = sym_primary_expression,
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
  [anon_sym_variables] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_variable] = {
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
  [sym_primary_expression] = {
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
};

enum ts_field_identifiers {
  field_constants = 1,
  field_function = 2,
  field_name = 3,
  field_parameters = 4,
  field_var = 5,
  field_variables = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_constants] = "constants",
  [field_function] = "function",
  [field_name] = "name",
  [field_parameters] = "parameters",
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
    {field_var, 0},
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
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
  [50] = 28,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 51,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 23,
  [63] = 63,
  [64] = 60,
  [65] = 29,
  [66] = 66,
  [67] = 67,
  [68] = 58,
  [69] = 69,
  [70] = 41,
  [71] = 37,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 53,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 75,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 57,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 23,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 97,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 96,
  [106] = 106,
  [107] = 107,
  [108] = 31,
  [109] = 109,
  [110] = 110,
  [111] = 43,
  [112] = 94,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 58,
  [121] = 28,
  [122] = 91,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 100,
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
  [147] = 115,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 114,
  [154] = 113,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 29,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 60,
  [168] = 168,
  [169] = 169,
  [170] = 142,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 137,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 37,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 41,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 194,
  [206] = 181,
  [207] = 139,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 183,
  [213] = 161,
  [214] = 201,
  [215] = 175,
  [216] = 181,
  [217] = 201,
  [218] = 175,
  [219] = 219,
  [220] = 171,
  [221] = 221,
  [222] = 222,
  [223] = 210,
  [224] = 224,
  [225] = 225,
  [226] = 222,
  [227] = 227,
  [228] = 187,
  [229] = 190,
  [230] = 209,
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
      if (eof) ADVANCE(106);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(61);
      if (lookahead == 'v') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(40);
      if (lookahead == '{') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == 'v') ADVANCE(153);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(175);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 't') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(175);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == 'v') ADVANCE(153);
      if (lookahead == '{') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(175);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == 'w') ADVANCE(160);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(175);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(132);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(171);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(175);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(146);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 101:
      if (lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 102:
      if (lookahead == '}') ADVANCE(150);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 103:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(103)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(175);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 105:
      if (eof) ADVANCE(106);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == ':') ADVANCE(120);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(105)
      END_STATE();
    case 106:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_from);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_constants);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(173);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(175);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(162);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(175);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(170);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(175);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(178);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(180);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(131);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(161);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(163);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(172);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(156);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(137);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(168);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(164);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(155);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(135);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(174);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(166);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(158);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(124);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(157);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 105},
  [2] = {.lex_state = 4, .external_lex_state = 2},
  [3] = {.lex_state = 4, .external_lex_state = 2},
  [4] = {.lex_state = 4, .external_lex_state = 2},
  [5] = {.lex_state = 4, .external_lex_state = 2},
  [6] = {.lex_state = 4, .external_lex_state = 2},
  [7] = {.lex_state = 3, .external_lex_state = 3},
  [8] = {.lex_state = 105},
  [9] = {.lex_state = 105},
  [10] = {.lex_state = 105},
  [11] = {.lex_state = 105},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 105},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 105, .external_lex_state = 4},
  [26] = {.lex_state = 105, .external_lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 105},
  [31] = {.lex_state = 105},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 105},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 105},
  [40] = {.lex_state = 105},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 105},
  [43] = {.lex_state = 105},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 105},
  [46] = {.lex_state = 105},
  [47] = {.lex_state = 105},
  [48] = {.lex_state = 105},
  [49] = {.lex_state = 105},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 105},
  [53] = {.lex_state = 105},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 105},
  [57] = {.lex_state = 105},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 4, .external_lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 4, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 0, .external_lex_state = 4},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 4},
  [73] = {.lex_state = 105, .external_lex_state = 4},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0, .external_lex_state = 3},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 0, .external_lex_state = 3},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0, .external_lex_state = 4},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 0, .external_lex_state = 4},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0, .external_lex_state = 4},
  [90] = {.lex_state = 103},
  [91] = {.lex_state = 105},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 105},
  [95] = {.lex_state = 105, .external_lex_state = 4},
  [96] = {.lex_state = 105},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 0, .external_lex_state = 3},
  [104] = {.lex_state = 105},
  [105] = {.lex_state = 105},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 105, .external_lex_state = 4},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 0, .external_lex_state = 3},
  [111] = {.lex_state = 105, .external_lex_state = 4},
  [112] = {.lex_state = 105},
  [113] = {.lex_state = 105},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 0, .external_lex_state = 4},
  [117] = {.lex_state = 0, .external_lex_state = 3},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 105},
  [120] = {.lex_state = 0, .external_lex_state = 4},
  [121] = {.lex_state = 0, .external_lex_state = 4},
  [122] = {.lex_state = 0, .external_lex_state = 3},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0, .external_lex_state = 3},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 105},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0, .external_lex_state = 3},
  [130] = {.lex_state = 0, .external_lex_state = 3},
  [131] = {.lex_state = 0, .external_lex_state = 3},
  [132] = {.lex_state = 105},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0, .external_lex_state = 3},
  [138] = {.lex_state = 0, .external_lex_state = 3},
  [139] = {.lex_state = 0, .external_lex_state = 3},
  [140] = {.lex_state = 0, .external_lex_state = 4},
  [141] = {.lex_state = 0, .external_lex_state = 3},
  [142] = {.lex_state = 0, .external_lex_state = 3},
  [143] = {.lex_state = 0, .external_lex_state = 3},
  [144] = {.lex_state = 0, .external_lex_state = 3},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0, .external_lex_state = 3},
  [147] = {.lex_state = 37},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 0, .external_lex_state = 3},
  [151] = {.lex_state = 0, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 3},
  [153] = {.lex_state = 37},
  [154] = {.lex_state = 0, .external_lex_state = 3},
  [155] = {.lex_state = 0, .external_lex_state = 3},
  [156] = {.lex_state = 0, .external_lex_state = 4},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 0, .external_lex_state = 3},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 0, .external_lex_state = 3},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0, .external_lex_state = 4},
  [163] = {.lex_state = 103},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 103},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0, .external_lex_state = 4},
  [168] = {.lex_state = 103},
  [169] = {.lex_state = 103},
  [170] = {.lex_state = 103},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 103},
  [178] = {.lex_state = 103},
  [179] = {.lex_state = 103},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0, .external_lex_state = 3},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 103},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 0, .external_lex_state = 4},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0, .external_lex_state = 3},
  [192] = {.lex_state = 103},
  [193] = {.lex_state = 103},
  [194] = {.lex_state = 103},
  [195] = {.lex_state = 0, .external_lex_state = 3},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0, .external_lex_state = 4},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0, .external_lex_state = 3},
  [201] = {.lex_state = 103},
  [202] = {.lex_state = 0, .external_lex_state = 3},
  [203] = {.lex_state = 0, .external_lex_state = 4},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 103},
  [206] = {.lex_state = 0, .external_lex_state = 3},
  [207] = {.lex_state = 103},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 103},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 103},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 103},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0, .external_lex_state = 3},
  [217] = {.lex_state = 103},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 103},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 103},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 103},
  [225] = {.lex_state = 103},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 103},
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
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_program] = STATE(208),
    [sym_enum] = STATE(10),
    [sym_record] = STATE(10),
    [sym_export] = STATE(10),
    [sym_import] = STATE(10),
    [sym_module] = STATE(9),
    [sym_function_definition] = STATE(10),
    [sym_variable] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
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
  [0] = 12,
    ACTIONS(19), 1,
      anon_sym_repeat,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym__dedent,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(38), 1,
      sym_if,
    STATE(110), 1,
      sym_statement,
    STATE(188), 1,
      sym_variable_access,
    STATE(37), 2,
      sym_array_access,
      sym_record_access,
    STATE(138), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [43] = 12,
    ACTIONS(19), 1,
      anon_sym_repeat,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym__dedent,
    STATE(4), 1,
      aux_sym_block_repeat1,
    STATE(38), 1,
      sym_if,
    STATE(110), 1,
      sym_statement,
    STATE(188), 1,
      sym_variable_access,
    STATE(37), 2,
      sym_array_access,
      sym_record_access,
    STATE(138), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [86] = 12,
    ACTIONS(19), 1,
      anon_sym_repeat,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym__dedent,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(38), 1,
      sym_if,
    STATE(110), 1,
      sym_statement,
    STATE(188), 1,
      sym_variable_access,
    STATE(37), 2,
      sym_array_access,
      sym_record_access,
    STATE(138), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [129] = 12,
    ACTIONS(19), 1,
      anon_sym_repeat,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__dedent,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(38), 1,
      sym_if,
    STATE(110), 1,
      sym_statement,
    STATE(188), 1,
      sym_variable_access,
    STATE(37), 2,
      sym_array_access,
      sym_record_access,
    STATE(138), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [172] = 12,
    ACTIONS(37), 1,
      anon_sym_repeat,
    ACTIONS(40), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(46), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(52), 1,
      sym__dedent,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(38), 1,
      sym_if,
    STATE(110), 1,
      sym_statement,
    STATE(188), 1,
      sym_variable_access,
    STATE(37), 2,
      sym_array_access,
      sym_record_access,
    STATE(138), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [215] = 13,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_COLON_EQ,
    ACTIONS(58), 1,
      anon_sym_var,
    ACTIONS(62), 1,
      sym_float,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_DOT,
    STATE(64), 1,
      sym_primary_expression,
    STATE(78), 1,
      sym_argument,
    STATE(129), 1,
      sym_expression,
    STATE(131), 1,
      sym_variable_access,
    ACTIONS(64), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(71), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(60), 3,
      sym_integer,
      sym_true,
      sym_false,
  [259] = 8,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      anon_sym_enum,
    ACTIONS(75), 1,
      anon_sym_record,
    ACTIONS(78), 1,
      anon_sym_export,
    ACTIONS(81), 1,
      anon_sym_import,
    ACTIONS(84), 1,
      anon_sym_define,
    ACTIONS(87), 1,
      anon_sym_variables,
    STATE(8), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [290] = 8,
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
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(11), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [321] = 8,
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
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(8), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [352] = 8,
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
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(8), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [383] = 9,
    ACTIONS(58), 1,
      anon_sym_var,
    ACTIONS(62), 1,
      sym_float,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(64), 1,
      sym_primary_expression,
    STATE(118), 1,
      sym_argument,
    STATE(129), 1,
      sym_expression,
    STATE(131), 1,
      sym_variable_access,
    STATE(71), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(60), 3,
      sym_integer,
      sym_true,
      sym_false,
  [414] = 6,
    ACTIONS(96), 1,
      sym_float,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(218), 1,
      sym_expression,
    STATE(37), 2,
      sym_array_access,
      sym_record_access,
    STATE(60), 2,
      sym_primary_expression,
      sym_variable_access,
    ACTIONS(94), 3,
      sym_integer,
      sym_true,
      sym_false,
  [437] = 6,
    ACTIONS(96), 1,
      sym_float,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(215), 1,
      sym_expression,
    STATE(37), 2,
      sym_array_access,
      sym_record_access,
    STATE(60), 2,
      sym_primary_expression,
      sym_variable_access,
    ACTIONS(94), 3,
      sym_integer,
      sym_true,
      sym_false,
  [460] = 6,
    ACTIONS(96), 1,
      sym_float,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(21), 1,
      sym_expression,
    STATE(37), 2,
      sym_array_access,
      sym_record_access,
    STATE(60), 2,
      sym_primary_expression,
      sym_variable_access,
    ACTIONS(94), 3,
      sym_integer,
      sym_true,
      sym_false,
  [483] = 6,
    ACTIONS(102), 1,
      sym_float,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(156), 1,
      sym_expression,
    STATE(167), 2,
      sym_primary_expression,
      sym_variable_access,
    STATE(189), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(100), 3,
      sym_integer,
      sym_true,
      sym_false,
  [506] = 6,
    ACTIONS(96), 1,
      sym_float,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(175), 1,
      sym_expression,
    STATE(37), 2,
      sym_array_access,
      sym_record_access,
    STATE(60), 2,
      sym_primary_expression,
      sym_variable_access,
    ACTIONS(94), 3,
      sym_integer,
      sym_true,
      sym_false,
  [529] = 6,
    ACTIONS(102), 1,
      sym_float,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(149), 1,
      sym_expression,
    STATE(167), 2,
      sym_primary_expression,
      sym_variable_access,
    STATE(189), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(100), 3,
      sym_integer,
      sym_true,
      sym_false,
  [552] = 6,
    ACTIONS(62), 1,
      sym_float,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(160), 1,
      sym_expression,
    STATE(64), 2,
      sym_primary_expression,
      sym_variable_access,
    STATE(71), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(60), 3,
      sym_integer,
      sym_true,
      sym_false,
  [575] = 6,
    ACTIONS(102), 1,
      sym_float,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(134), 1,
      sym_expression,
    STATE(167), 2,
      sym_primary_expression,
      sym_variable_access,
    STATE(189), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(100), 3,
      sym_integer,
      sym_true,
      sym_false,
  [598] = 6,
    ACTIONS(62), 1,
      sym_float,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(77), 1,
      sym_expression,
    STATE(64), 2,
      sym_primary_expression,
      sym_variable_access,
    STATE(71), 2,
      sym_array_access,
      sym_record_access,
    ACTIONS(60), 3,
      sym_integer,
      sym_true,
      sym_false,
  [621] = 7,
    ACTIONS(109), 1,
      anon_sym_real,
    ACTIONS(112), 1,
      anon_sym_array,
    ACTIONS(115), 1,
      sym__dedent,
    STATE(22), 1,
      aux_sym_record_repeat1,
    STATE(168), 1,
      sym_type,
    ACTIONS(106), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(170), 2,
      sym_basic_type,
      sym_array_type,
  [645] = 1,
    ACTIONS(117), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_variables,
  [657] = 7,
    ACTIONS(121), 1,
      anon_sym_real,
    ACTIONS(123), 1,
      anon_sym_array,
    ACTIONS(125), 1,
      sym__dedent,
    STATE(22), 1,
      aux_sym_record_repeat1,
    STATE(168), 1,
      sym_type,
    ACTIONS(119), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(170), 2,
      sym_basic_type,
      sym_array_type,
  [681] = 6,
    ACTIONS(127), 1,
      anon_sym_variables,
    ACTIONS(129), 1,
      anon_sym_constants,
    ACTIONS(131), 1,
      sym__indent,
    STATE(48), 1,
      sym_block,
    STATE(26), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(72), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [702] = 6,
    ACTIONS(127), 1,
      anon_sym_variables,
    ACTIONS(129), 1,
      anon_sym_constants,
    ACTIONS(131), 1,
      sym__indent,
    STATE(47), 1,
      sym_block,
    STATE(69), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
    STATE(73), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [723] = 6,
    ACTIONS(121), 1,
      anon_sym_real,
    ACTIONS(123), 1,
      anon_sym_array,
    STATE(24), 1,
      aux_sym_record_repeat1,
    STATE(168), 1,
      sym_type,
    ACTIONS(119), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(170), 2,
      sym_basic_type,
      sym_array_type,
  [744] = 4,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(56), 2,
      anon_sym_RBRACK,
      sym_float,
    ACTIONS(133), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [761] = 2,
    ACTIONS(135), 3,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      sym_float,
    ACTIONS(137), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [773] = 1,
    ACTIONS(139), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [783] = 1,
    ACTIONS(141), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [793] = 5,
    ACTIONS(145), 1,
      anon_sym_real,
    ACTIONS(147), 1,
      anon_sym_array,
    STATE(103), 1,
      sym_type,
    ACTIONS(143), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(142), 2,
      sym_basic_type,
      sym_array_type,
  [811] = 5,
    ACTIONS(145), 1,
      anon_sym_real,
    ACTIONS(149), 1,
      anon_sym_array,
    STATE(130), 1,
      sym_declaration_type,
    ACTIONS(143), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(143), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [829] = 5,
    ACTIONS(145), 1,
      anon_sym_real,
    ACTIONS(149), 1,
      anon_sym_array,
    STATE(100), 1,
      sym_declaration_type,
    ACTIONS(143), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(143), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [847] = 5,
    ACTIONS(145), 1,
      anon_sym_real,
    ACTIONS(147), 1,
      anon_sym_array,
    STATE(117), 1,
      sym_type,
    ACTIONS(143), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(142), 2,
      sym_basic_type,
      sym_array_type,
  [865] = 1,
    ACTIONS(151), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [875] = 2,
    ACTIONS(56), 3,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      sym_float,
    ACTIONS(133), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [887] = 5,
    ACTIONS(153), 1,
      anon_sym_elsif,
    ACTIONS(155), 1,
      anon_sym_else,
    STATE(141), 1,
      sym_else,
    ACTIONS(157), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(54), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [905] = 1,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [915] = 1,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [925] = 2,
    ACTIONS(163), 3,
      anon_sym_RBRACK,
      anon_sym_COLON_EQ,
      sym_float,
    ACTIONS(165), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [937] = 1,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [947] = 1,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [957] = 5,
    ACTIONS(145), 1,
      anon_sym_real,
    ACTIONS(147), 1,
      anon_sym_array,
    STATE(124), 1,
      sym_type,
    ACTIONS(143), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(142), 2,
      sym_basic_type,
      sym_array_type,
  [975] = 1,
    ACTIONS(171), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [985] = 1,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [995] = 1,
    ACTIONS(175), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [1005] = 1,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [1015] = 1,
    ACTIONS(179), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [1025] = 3,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_DOT,
    ACTIONS(56), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [1039] = 5,
    ACTIONS(145), 1,
      anon_sym_real,
    ACTIONS(149), 1,
      anon_sym_array,
    STATE(99), 1,
      sym_declaration_type,
    ACTIONS(143), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(143), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [1057] = 1,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [1067] = 1,
    ACTIONS(187), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [1077] = 5,
    ACTIONS(153), 1,
      anon_sym_elsif,
    ACTIONS(155), 1,
      anon_sym_else,
    STATE(158), 1,
      sym_else,
    ACTIONS(189), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(63), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [1095] = 5,
    ACTIONS(145), 1,
      anon_sym_real,
    ACTIONS(149), 1,
      anon_sym_array,
    STATE(97), 1,
      sym_declaration_type,
    ACTIONS(143), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(143), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [1113] = 1,
    ACTIONS(191), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [1123] = 1,
    ACTIONS(193), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [1133] = 2,
    ACTIONS(195), 2,
      anon_sym_RBRACK,
      sym_float,
    ACTIONS(197), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [1144] = 2,
    ACTIONS(52), 1,
      sym__dedent,
    ACTIONS(199), 5,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [1155] = 2,
    ACTIONS(201), 2,
      anon_sym_RBRACK,
      sym_float,
    ACTIONS(203), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [1166] = 6,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(207), 1,
      anon_sym_var,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(125), 1,
      sym_parameter,
    STATE(177), 1,
      sym_var,
    STATE(196), 1,
      sym__parameters,
  [1185] = 2,
    ACTIONS(117), 1,
      sym__dedent,
    ACTIONS(211), 5,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [1196] = 3,
    ACTIONS(213), 1,
      anon_sym_elsif,
    STATE(63), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
    ACTIONS(216), 3,
      sym__newline,
      anon_sym_else,
      aux_sym_comment_token1,
  [1209] = 1,
    ACTIONS(201), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [1217] = 1,
    ACTIONS(135), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [1225] = 3,
    ACTIONS(100), 1,
      sym_integer,
    STATE(116), 1,
      sym_primary_expression,
    ACTIONS(102), 3,
      sym_float,
      sym_true,
      sym_false,
  [1237] = 1,
    ACTIONS(218), 5,
      sym__dedent,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
  [1245] = 1,
    ACTIONS(195), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [1253] = 4,
    ACTIONS(129), 1,
      anon_sym_constants,
    ACTIONS(131), 1,
      sym__indent,
    STATE(49), 1,
      sym_block,
    STATE(84), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [1267] = 1,
    ACTIONS(163), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [1275] = 1,
    ACTIONS(56), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [1283] = 4,
    ACTIONS(129), 1,
      anon_sym_constants,
    ACTIONS(131), 1,
      sym__indent,
    STATE(39), 1,
      sym_block,
    STATE(84), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [1297] = 3,
    ACTIONS(220), 1,
      anon_sym_variables,
    ACTIONS(223), 2,
      sym__indent,
      anon_sym_constants,
    STATE(73), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [1309] = 3,
    ACTIONS(100), 1,
      sym_integer,
    STATE(81), 1,
      sym_primary_expression,
    ACTIONS(102), 3,
      sym_float,
      sym_true,
      sym_false,
  [1321] = 1,
    ACTIONS(225), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [1328] = 1,
    ACTIONS(187), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [1335] = 1,
    ACTIONS(227), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [1342] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(231), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1353] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(233), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1364] = 4,
    ACTIONS(207), 1,
      anon_sym_var,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(135), 1,
      sym_parameter,
    STATE(177), 1,
      sym_var,
  [1377] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_constant_repeat1,
    ACTIONS(237), 2,
      sym__indent,
      anon_sym_constants,
  [1388] = 1,
    ACTIONS(239), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [1395] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(244), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1406] = 3,
    ACTIONS(246), 1,
      anon_sym_constants,
    ACTIONS(249), 1,
      sym__indent,
    STATE(84), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [1417] = 1,
    ACTIONS(251), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [1424] = 1,
    ACTIONS(193), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [1431] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_constant_repeat1,
    ACTIONS(253), 2,
      sym__indent,
      anon_sym_constants,
  [1442] = 1,
    ACTIONS(255), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [1449] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_constant_repeat1,
    ACTIONS(260), 2,
      sym__indent,
      anon_sym_constants,
  [1460] = 3,
    ACTIONS(262), 1,
      sym_identifier,
    STATE(93), 1,
      sym_variable_access,
    STATE(71), 2,
      sym_array_access,
      sym_record_access,
  [1471] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_enum_repeat1,
    ACTIONS(267), 2,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1482] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_enum_repeat1,
  [1492] = 1,
    ACTIONS(273), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [1498] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_COLON,
    STATE(91), 1,
      aux_sym_enum_repeat1,
  [1508] = 1,
    ACTIONS(117), 3,
      sym__indent,
      anon_sym_variables,
      anon_sym_constants,
  [1514] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_COLON,
    STATE(94), 1,
      aux_sym_enum_repeat1,
  [1524] = 3,
    ACTIONS(279), 1,
      aux_sym_comment_token1,
    ACTIONS(281), 1,
      sym__newline,
    STATE(31), 1,
      sym_comment,
  [1534] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      aux_sym_enum_repeat1,
  [1544] = 3,
    ACTIONS(285), 1,
      aux_sym_comment_token1,
    ACTIONS(287), 1,
      sym__newline,
    STATE(108), 1,
      sym_comment,
  [1554] = 3,
    ACTIONS(285), 1,
      aux_sym_comment_token1,
    ACTIONS(289), 1,
      sym__newline,
    STATE(111), 1,
      sym_comment,
  [1564] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      sym__newline,
    STATE(107), 1,
      aux_sym_enum_repeat1,
  [1574] = 3,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym__newline,
    STATE(191), 1,
      sym__multiple_import,
  [1584] = 3,
    ACTIONS(279), 1,
      aux_sym_comment_token1,
    ACTIONS(299), 1,
      sym__newline,
    STATE(145), 1,
      sym_comment,
  [1594] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_COLON,
    STATE(91), 1,
      aux_sym_enum_repeat1,
  [1604] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_COLON,
    STATE(112), 1,
      aux_sym_enum_repeat1,
  [1614] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym__parameters_repeat1,
  [1624] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      sym__newline,
    STATE(122), 1,
      aux_sym_enum_repeat1,
  [1634] = 1,
    ACTIONS(141), 3,
      sym__indent,
      anon_sym_variables,
      anon_sym_constants,
  [1640] = 3,
    ACTIONS(285), 1,
      aux_sym_comment_token1,
    ACTIONS(312), 1,
      sym__newline,
    STATE(25), 1,
      sym_comment,
  [1650] = 3,
    ACTIONS(314), 1,
      aux_sym_comment_token1,
    ACTIONS(316), 1,
      sym__newline,
    STATE(59), 1,
      sym_comment,
  [1660] = 1,
    ACTIONS(169), 3,
      sym__indent,
      anon_sym_variables,
      anon_sym_constants,
  [1666] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_COLON,
    STATE(91), 1,
      aux_sym_enum_repeat1,
  [1676] = 1,
    ACTIONS(267), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1682] = 2,
    ACTIONS(320), 1,
      anon_sym_from,
    ACTIONS(322), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1690] = 2,
    ACTIONS(324), 1,
      anon_sym_from,
    ACTIONS(322), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1698] = 1,
    ACTIONS(326), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [1704] = 3,
    ACTIONS(279), 1,
      aux_sym_comment_token1,
    ACTIONS(328), 1,
      sym__newline,
    STATE(148), 1,
      sym_comment,
  [1714] = 1,
    ACTIONS(244), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [1720] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_COLON,
    STATE(104), 1,
      aux_sym_enum_repeat1,
  [1730] = 1,
    ACTIONS(195), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [1736] = 3,
    ACTIONS(56), 1,
      sym__indent,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DOT,
  [1746] = 3,
    ACTIONS(267), 1,
      sym__newline,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_enum_repeat1,
  [1756] = 3,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym__parameters_repeat1,
  [1766] = 3,
    ACTIONS(279), 1,
      aux_sym_comment_token1,
    ACTIONS(343), 1,
      sym__newline,
    STATE(133), 1,
      sym_comment,
  [1776] = 3,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym__parameters_repeat1,
  [1786] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_COLON,
    STATE(91), 1,
      aux_sym_enum_repeat1,
  [1796] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      aux_sym_enum_repeat1,
  [1806] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(127), 1,
      aux_sym_enum_repeat1,
  [1816] = 1,
    ACTIONS(351), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [1822] = 3,
    ACTIONS(279), 1,
      aux_sym_comment_token1,
    ACTIONS(353), 1,
      sym__newline,
    STATE(43), 1,
      sym_comment,
  [1832] = 1,
    ACTIONS(355), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [1838] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_COLON,
    STATE(126), 1,
      aux_sym_enum_repeat1,
  [1848] = 1,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1853] = 2,
    ACTIONS(362), 1,
      sym__indent,
    STATE(150), 1,
      sym_block,
  [1860] = 1,
    ACTIONS(308), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1865] = 2,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_parameters,
  [1872] = 1,
    ACTIONS(366), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1877] = 1,
    ACTIONS(368), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1882] = 1,
    ACTIONS(370), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1887] = 2,
    ACTIONS(362), 1,
      sym__indent,
    STATE(157), 1,
      sym_block,
  [1894] = 1,
    ACTIONS(189), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1899] = 1,
    ACTIONS(372), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1904] = 1,
    ACTIONS(374), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1909] = 1,
    ACTIONS(376), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1914] = 1,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1919] = 1,
    ACTIONS(380), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1924] = 2,
    ACTIONS(382), 1,
      anon_sym_from,
    ACTIONS(384), 1,
      sym_identifier,
  [1931] = 1,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1936] = 2,
    ACTIONS(362), 1,
      sym__indent,
    STATE(155), 1,
      sym_block,
  [1943] = 1,
    ACTIONS(388), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1948] = 2,
    ACTIONS(362), 1,
      sym__indent,
    STATE(146), 1,
      sym_block,
  [1955] = 1,
    ACTIONS(390), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1960] = 2,
    ACTIONS(384), 1,
      sym_identifier,
    ACTIONS(392), 1,
      anon_sym_from,
  [1967] = 1,
    ACTIONS(267), 2,
      sym__newline,
      anon_sym_COMMA,
  [1972] = 1,
    ACTIONS(394), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1977] = 2,
    ACTIONS(362), 1,
      sym__indent,
    STATE(85), 1,
      sym_block,
  [1984] = 1,
    ACTIONS(396), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1989] = 1,
    ACTIONS(398), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1994] = 1,
    ACTIONS(400), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1999] = 1,
    ACTIONS(402), 2,
      sym__newline,
      aux_sym_comment_token1,
  [2004] = 1,
    ACTIONS(404), 1,
      sym_float,
  [2008] = 1,
    ACTIONS(135), 1,
      sym__indent,
  [2012] = 1,
    ACTIONS(406), 1,
      sym_identifier,
  [2016] = 1,
    ACTIONS(408), 1,
      anon_sym_of,
  [2020] = 1,
    ACTIONS(410), 1,
      sym_identifier,
  [2024] = 1,
    ACTIONS(412), 1,
      anon_sym_to,
  [2028] = 1,
    ACTIONS(201), 1,
      sym__indent,
  [2032] = 1,
    ACTIONS(414), 1,
      sym_identifier,
  [2036] = 1,
    ACTIONS(416), 1,
      sym_identifier,
  [2040] = 1,
    ACTIONS(372), 1,
      sym_identifier,
  [2044] = 1,
    ACTIONS(418), 1,
      anon_sym_of,
  [2048] = 1,
    ACTIONS(420), 1,
      sym_integer,
  [2052] = 1,
    ACTIONS(422), 1,
      anon_sym_EQ,
  [2056] = 1,
    ACTIONS(424), 1,
      anon_sym_from,
  [2060] = 1,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
  [2064] = 1,
    ACTIONS(428), 1,
      sym_integer,
  [2068] = 1,
    ACTIONS(430), 1,
      sym_identifier,
  [2072] = 1,
    ACTIONS(366), 1,
      sym_identifier,
  [2076] = 1,
    ACTIONS(432), 1,
      sym_identifier,
  [2080] = 1,
    ACTIONS(434), 1,
      sym_integer,
  [2084] = 1,
    ACTIONS(436), 1,
      sym__newline,
  [2088] = 1,
    ACTIONS(438), 1,
      anon_sym_from,
  [2092] = 1,
    ACTIONS(404), 1,
      sym_integer,
  [2096] = 1,
    ACTIONS(440), 1,
      sym_identifier,
  [2100] = 1,
    ACTIONS(442), 1,
      anon_sym_to,
  [2104] = 1,
    ACTIONS(444), 1,
      anon_sym_EQ,
  [2108] = 1,
    ACTIONS(446), 1,
      sym_integer,
  [2112] = 1,
    ACTIONS(448), 1,
      anon_sym_COLON_EQ,
  [2116] = 1,
    ACTIONS(56), 1,
      sym__indent,
  [2120] = 1,
    ACTIONS(450), 1,
      sym_float,
  [2124] = 1,
    ACTIONS(452), 1,
      sym__newline,
  [2128] = 1,
    ACTIONS(454), 1,
      sym_identifier,
  [2132] = 1,
    ACTIONS(456), 1,
      sym_identifier,
  [2136] = 1,
    ACTIONS(458), 1,
      sym_identifier,
  [2140] = 1,
    ACTIONS(460), 1,
      sym__newline,
  [2144] = 1,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
  [2148] = 1,
    ACTIONS(163), 1,
      sym__indent,
  [2152] = 1,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
  [2156] = 1,
    ACTIONS(466), 1,
      anon_sym_until,
  [2160] = 1,
    ACTIONS(468), 1,
      sym__newline,
  [2164] = 1,
    ACTIONS(470), 1,
      sym_identifier,
  [2168] = 1,
    ACTIONS(472), 1,
      sym__newline,
  [2172] = 1,
    ACTIONS(474), 1,
      sym__indent,
  [2176] = 1,
    ACTIONS(476), 1,
      anon_sym_EQ,
  [2180] = 1,
    ACTIONS(478), 1,
      sym_identifier,
  [2184] = 1,
    ACTIONS(480), 1,
      sym__newline,
  [2188] = 1,
    ACTIONS(370), 1,
      sym_identifier,
  [2192] = 1,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
  [2196] = 1,
    ACTIONS(484), 1,
      sym_identifier,
  [2200] = 1,
    ACTIONS(486), 1,
      anon_sym_to,
  [2204] = 1,
    ACTIONS(488), 1,
      sym_identifier,
  [2208] = 1,
    ACTIONS(490), 1,
      sym_integer,
  [2212] = 1,
    ACTIONS(490), 1,
      sym_float,
  [2216] = 1,
    ACTIONS(492), 1,
      sym_identifier,
  [2220] = 1,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
  [2224] = 1,
    ACTIONS(496), 1,
      sym__newline,
  [2228] = 1,
    ACTIONS(498), 1,
      sym_identifier,
  [2232] = 1,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
  [2236] = 1,
    ACTIONS(502), 1,
      sym_identifier,
  [2240] = 1,
    ACTIONS(504), 1,
      anon_sym_of,
  [2244] = 1,
    ACTIONS(506), 1,
      sym_identifier,
  [2248] = 1,
    ACTIONS(508), 1,
      anon_sym_to,
  [2252] = 1,
    ACTIONS(510), 1,
      anon_sym_to,
  [2256] = 1,
    ACTIONS(512), 1,
      sym_identifier,
  [2260] = 1,
    ACTIONS(514), 1,
      sym_identifier,
  [2264] = 1,
    ACTIONS(516), 1,
      anon_sym_to,
  [2268] = 1,
    ACTIONS(518), 1,
      sym_integer,
  [2272] = 1,
    ACTIONS(520), 1,
      sym_integer,
  [2276] = 1,
    ACTIONS(522), 1,
      sym_float,
  [2280] = 1,
    ACTIONS(524), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 215,
  [SMALL_STATE(8)] = 259,
  [SMALL_STATE(9)] = 290,
  [SMALL_STATE(10)] = 321,
  [SMALL_STATE(11)] = 352,
  [SMALL_STATE(12)] = 383,
  [SMALL_STATE(13)] = 414,
  [SMALL_STATE(14)] = 437,
  [SMALL_STATE(15)] = 460,
  [SMALL_STATE(16)] = 483,
  [SMALL_STATE(17)] = 506,
  [SMALL_STATE(18)] = 529,
  [SMALL_STATE(19)] = 552,
  [SMALL_STATE(20)] = 575,
  [SMALL_STATE(21)] = 598,
  [SMALL_STATE(22)] = 621,
  [SMALL_STATE(23)] = 645,
  [SMALL_STATE(24)] = 657,
  [SMALL_STATE(25)] = 681,
  [SMALL_STATE(26)] = 702,
  [SMALL_STATE(27)] = 723,
  [SMALL_STATE(28)] = 744,
  [SMALL_STATE(29)] = 761,
  [SMALL_STATE(30)] = 773,
  [SMALL_STATE(31)] = 783,
  [SMALL_STATE(32)] = 793,
  [SMALL_STATE(33)] = 811,
  [SMALL_STATE(34)] = 829,
  [SMALL_STATE(35)] = 847,
  [SMALL_STATE(36)] = 865,
  [SMALL_STATE(37)] = 875,
  [SMALL_STATE(38)] = 887,
  [SMALL_STATE(39)] = 905,
  [SMALL_STATE(40)] = 915,
  [SMALL_STATE(41)] = 925,
  [SMALL_STATE(42)] = 937,
  [SMALL_STATE(43)] = 947,
  [SMALL_STATE(44)] = 957,
  [SMALL_STATE(45)] = 975,
  [SMALL_STATE(46)] = 985,
  [SMALL_STATE(47)] = 995,
  [SMALL_STATE(48)] = 1005,
  [SMALL_STATE(49)] = 1015,
  [SMALL_STATE(50)] = 1025,
  [SMALL_STATE(51)] = 1039,
  [SMALL_STATE(52)] = 1057,
  [SMALL_STATE(53)] = 1067,
  [SMALL_STATE(54)] = 1077,
  [SMALL_STATE(55)] = 1095,
  [SMALL_STATE(56)] = 1113,
  [SMALL_STATE(57)] = 1123,
  [SMALL_STATE(58)] = 1133,
  [SMALL_STATE(59)] = 1144,
  [SMALL_STATE(60)] = 1155,
  [SMALL_STATE(61)] = 1166,
  [SMALL_STATE(62)] = 1185,
  [SMALL_STATE(63)] = 1196,
  [SMALL_STATE(64)] = 1209,
  [SMALL_STATE(65)] = 1217,
  [SMALL_STATE(66)] = 1225,
  [SMALL_STATE(67)] = 1237,
  [SMALL_STATE(68)] = 1245,
  [SMALL_STATE(69)] = 1253,
  [SMALL_STATE(70)] = 1267,
  [SMALL_STATE(71)] = 1275,
  [SMALL_STATE(72)] = 1283,
  [SMALL_STATE(73)] = 1297,
  [SMALL_STATE(74)] = 1309,
  [SMALL_STATE(75)] = 1321,
  [SMALL_STATE(76)] = 1328,
  [SMALL_STATE(77)] = 1335,
  [SMALL_STATE(78)] = 1342,
  [SMALL_STATE(79)] = 1353,
  [SMALL_STATE(80)] = 1364,
  [SMALL_STATE(81)] = 1377,
  [SMALL_STATE(82)] = 1388,
  [SMALL_STATE(83)] = 1395,
  [SMALL_STATE(84)] = 1406,
  [SMALL_STATE(85)] = 1417,
  [SMALL_STATE(86)] = 1424,
  [SMALL_STATE(87)] = 1431,
  [SMALL_STATE(88)] = 1442,
  [SMALL_STATE(89)] = 1449,
  [SMALL_STATE(90)] = 1460,
  [SMALL_STATE(91)] = 1471,
  [SMALL_STATE(92)] = 1482,
  [SMALL_STATE(93)] = 1492,
  [SMALL_STATE(94)] = 1498,
  [SMALL_STATE(95)] = 1508,
  [SMALL_STATE(96)] = 1514,
  [SMALL_STATE(97)] = 1524,
  [SMALL_STATE(98)] = 1534,
  [SMALL_STATE(99)] = 1544,
  [SMALL_STATE(100)] = 1554,
  [SMALL_STATE(101)] = 1564,
  [SMALL_STATE(102)] = 1574,
  [SMALL_STATE(103)] = 1584,
  [SMALL_STATE(104)] = 1594,
  [SMALL_STATE(105)] = 1604,
  [SMALL_STATE(106)] = 1614,
  [SMALL_STATE(107)] = 1624,
  [SMALL_STATE(108)] = 1634,
  [SMALL_STATE(109)] = 1640,
  [SMALL_STATE(110)] = 1650,
  [SMALL_STATE(111)] = 1660,
  [SMALL_STATE(112)] = 1666,
  [SMALL_STATE(113)] = 1676,
  [SMALL_STATE(114)] = 1682,
  [SMALL_STATE(115)] = 1690,
  [SMALL_STATE(116)] = 1698,
  [SMALL_STATE(117)] = 1704,
  [SMALL_STATE(118)] = 1714,
  [SMALL_STATE(119)] = 1720,
  [SMALL_STATE(120)] = 1730,
  [SMALL_STATE(121)] = 1736,
  [SMALL_STATE(122)] = 1746,
  [SMALL_STATE(123)] = 1756,
  [SMALL_STATE(124)] = 1766,
  [SMALL_STATE(125)] = 1776,
  [SMALL_STATE(126)] = 1786,
  [SMALL_STATE(127)] = 1796,
  [SMALL_STATE(128)] = 1806,
  [SMALL_STATE(129)] = 1816,
  [SMALL_STATE(130)] = 1822,
  [SMALL_STATE(131)] = 1832,
  [SMALL_STATE(132)] = 1838,
  [SMALL_STATE(133)] = 1848,
  [SMALL_STATE(134)] = 1853,
  [SMALL_STATE(135)] = 1860,
  [SMALL_STATE(136)] = 1865,
  [SMALL_STATE(137)] = 1872,
  [SMALL_STATE(138)] = 1877,
  [SMALL_STATE(139)] = 1882,
  [SMALL_STATE(140)] = 1887,
  [SMALL_STATE(141)] = 1894,
  [SMALL_STATE(142)] = 1899,
  [SMALL_STATE(143)] = 1904,
  [SMALL_STATE(144)] = 1909,
  [SMALL_STATE(145)] = 1914,
  [SMALL_STATE(146)] = 1919,
  [SMALL_STATE(147)] = 1924,
  [SMALL_STATE(148)] = 1931,
  [SMALL_STATE(149)] = 1936,
  [SMALL_STATE(150)] = 1943,
  [SMALL_STATE(151)] = 1948,
  [SMALL_STATE(152)] = 1955,
  [SMALL_STATE(153)] = 1960,
  [SMALL_STATE(154)] = 1967,
  [SMALL_STATE(155)] = 1972,
  [SMALL_STATE(156)] = 1977,
  [SMALL_STATE(157)] = 1984,
  [SMALL_STATE(158)] = 1989,
  [SMALL_STATE(159)] = 1994,
  [SMALL_STATE(160)] = 1999,
  [SMALL_STATE(161)] = 2004,
  [SMALL_STATE(162)] = 2008,
  [SMALL_STATE(163)] = 2012,
  [SMALL_STATE(164)] = 2016,
  [SMALL_STATE(165)] = 2020,
  [SMALL_STATE(166)] = 2024,
  [SMALL_STATE(167)] = 2028,
  [SMALL_STATE(168)] = 2032,
  [SMALL_STATE(169)] = 2036,
  [SMALL_STATE(170)] = 2040,
  [SMALL_STATE(171)] = 2044,
  [SMALL_STATE(172)] = 2048,
  [SMALL_STATE(173)] = 2052,
  [SMALL_STATE(174)] = 2056,
  [SMALL_STATE(175)] = 2060,
  [SMALL_STATE(176)] = 2064,
  [SMALL_STATE(177)] = 2068,
  [SMALL_STATE(178)] = 2072,
  [SMALL_STATE(179)] = 2076,
  [SMALL_STATE(180)] = 2080,
  [SMALL_STATE(181)] = 2084,
  [SMALL_STATE(182)] = 2088,
  [SMALL_STATE(183)] = 2092,
  [SMALL_STATE(184)] = 2096,
  [SMALL_STATE(185)] = 2100,
  [SMALL_STATE(186)] = 2104,
  [SMALL_STATE(187)] = 2108,
  [SMALL_STATE(188)] = 2112,
  [SMALL_STATE(189)] = 2116,
  [SMALL_STATE(190)] = 2120,
  [SMALL_STATE(191)] = 2124,
  [SMALL_STATE(192)] = 2128,
  [SMALL_STATE(193)] = 2132,
  [SMALL_STATE(194)] = 2136,
  [SMALL_STATE(195)] = 2140,
  [SMALL_STATE(196)] = 2144,
  [SMALL_STATE(197)] = 2148,
  [SMALL_STATE(198)] = 2152,
  [SMALL_STATE(199)] = 2156,
  [SMALL_STATE(200)] = 2160,
  [SMALL_STATE(201)] = 2164,
  [SMALL_STATE(202)] = 2168,
  [SMALL_STATE(203)] = 2172,
  [SMALL_STATE(204)] = 2176,
  [SMALL_STATE(205)] = 2180,
  [SMALL_STATE(206)] = 2184,
  [SMALL_STATE(207)] = 2188,
  [SMALL_STATE(208)] = 2192,
  [SMALL_STATE(209)] = 2196,
  [SMALL_STATE(210)] = 2200,
  [SMALL_STATE(211)] = 2204,
  [SMALL_STATE(212)] = 2208,
  [SMALL_STATE(213)] = 2212,
  [SMALL_STATE(214)] = 2216,
  [SMALL_STATE(215)] = 2220,
  [SMALL_STATE(216)] = 2224,
  [SMALL_STATE(217)] = 2228,
  [SMALL_STATE(218)] = 2232,
  [SMALL_STATE(219)] = 2236,
  [SMALL_STATE(220)] = 2240,
  [SMALL_STATE(221)] = 2244,
  [SMALL_STATE(222)] = 2248,
  [SMALL_STATE(223)] = 2252,
  [SMALL_STATE(224)] = 2256,
  [SMALL_STATE(225)] = 2260,
  [SMALL_STATE(226)] = 2264,
  [SMALL_STATE(227)] = 2268,
  [SMALL_STATE(228)] = 2272,
  [SMALL_STATE(229)] = 2276,
  [SMALL_STATE(230)] = 2280,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(199),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(193),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 1, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(179),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(225),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(224),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(221),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(211),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(209),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(147),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(153),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(171),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_access, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_access, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2), SHIFT_REPEAT(16),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 3),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(230),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2), SHIFT_REPEAT(12),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(165),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2), SHIFT_REPEAT(169),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(205),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 6),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(80),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(194),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1), REDUCE(sym_argument, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 6),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delclaration_array_type, 7),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [482] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
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
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
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
