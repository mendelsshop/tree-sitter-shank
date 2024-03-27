#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 209
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
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
  sym_true = 37,
  sym_false = 38,
  sym__newline = 39,
  sym__indent = 40,
  sym__dedent = 41,
  sym_program = 42,
  sym_enum = 43,
  sym_record = 44,
  sym_export = 45,
  sym__multiple_import = 46,
  sym_import = 47,
  sym_module = 48,
  sym_function_definition = 49,
  sym_parameters = 50,
  sym_assignment = 51,
  sym_expression = 52,
  sym_statement = 53,
  sym_repeat_statement = 54,
  sym_while_statement = 55,
  sym_call_statement = 56,
  sym_argument = 57,
  sym_if_then_statement = 58,
  sym_if = 59,
  sym_elsif = 60,
  sym_else = 61,
  sym_for = 62,
  sym_constant = 63,
  sym_block = 64,
  sym__parameters = 65,
  sym_var = 66,
  sym_parameter = 67,
  sym_variable = 68,
  sym_primary_expression = 69,
  sym_basic_type = 70,
  sym_array_type = 71,
  sym_delclaration_array_type = 72,
  sym_declaration_type = 73,
  sym_type = 74,
  sym_comment = 75,
  aux_sym_program_repeat1 = 76,
  aux_sym_enum_repeat1 = 77,
  aux_sym_record_repeat1 = 78,
  aux_sym_function_definition_repeat1 = 79,
  aux_sym_function_definition_repeat2 = 80,
  aux_sym_call_statement_repeat1 = 81,
  aux_sym_if_then_statement_repeat1 = 82,
  aux_sym_constant_repeat1 = 83,
  aux_sym_block_repeat1 = 84,
  aux_sym__parameters_repeat1 = 85,
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
  [sym_basic_type] = "basic_type",
  [sym_array_type] = "array_type",
  [sym_delclaration_array_type] = "delclaration_array_type",
  [sym_declaration_type] = "declaration_type",
  [sym_type] = "type",
  [sym_comment] = "comment",
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
  [sym_basic_type] = sym_basic_type,
  [sym_array_type] = sym_array_type,
  [sym_delclaration_array_type] = sym_delclaration_array_type,
  [sym_declaration_type] = sym_declaration_type,
  [sym_type] = sym_type,
  [sym_comment] = sym_comment,
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
  [3] = 3,
  [4] = 2,
  [5] = 5,
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
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
  [34] = 34,
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
  [46] = 31,
  [47] = 47,
  [48] = 24,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 15,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 56,
  [61] = 59,
  [62] = 62,
  [63] = 63,
  [64] = 27,
  [65] = 32,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 68,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 37,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 38,
  [94] = 80,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 15,
  [99] = 99,
  [100] = 100,
  [101] = 78,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 104,
  [113] = 113,
  [114] = 59,
  [115] = 83,
  [116] = 103,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 106,
  [125] = 99,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 82,
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
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 128,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 123,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 132,
  [178] = 178,
  [179] = 179,
  [180] = 56,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 186,
  [190] = 166,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 188,
  [197] = 181,
  [198] = 166,
  [199] = 199,
  [200] = 178,
  [201] = 201,
  [202] = 151,
  [203] = 150,
  [204] = 204,
  [205] = 205,
  [206] = 160,
  [207] = 159,
  [208] = 194,
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
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(61);
      if (lookahead == 'v') ADVANCE(8);
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
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == 'v') ADVANCE(153);
      if (lookahead == '{') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(175);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(119);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == 'w') ADVANCE(160);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(175);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 't') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(175);
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
      if (lookahead == 'g') ADVANCE(30);
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
      if (lookahead == 'i') ADVANCE(6);
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
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(133);
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
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(135);
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
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(15);
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
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(20);
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
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 'v') ADVANCE(11);
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
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_from);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_constants);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(119);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_variables);
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
      if (lookahead == 'e') ADVANCE(124);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(177);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(179);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(128);
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
      if (lookahead == 'm') ADVANCE(134);
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
      if (lookahead == 'r') ADVANCE(132);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(174);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(126);
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
      if (lookahead == 't') ADVANCE(121);
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
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(175);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 179:
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
  [2] = {.lex_state = 34, .external_lex_state = 2},
  [3] = {.lex_state = 34, .external_lex_state = 2},
  [4] = {.lex_state = 34, .external_lex_state = 2},
  [5] = {.lex_state = 34, .external_lex_state = 2},
  [6] = {.lex_state = 34, .external_lex_state = 2},
  [7] = {.lex_state = 105},
  [8] = {.lex_state = 105},
  [9] = {.lex_state = 105},
  [10] = {.lex_state = 105},
  [11] = {.lex_state = 2, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 105},
  [16] = {.lex_state = 105, .external_lex_state = 4},
  [17] = {.lex_state = 105, .external_lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 105},
  [20] = {.lex_state = 105},
  [21] = {.lex_state = 105},
  [22] = {.lex_state = 36},
  [23] = {.lex_state = 0, .external_lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 105},
  [27] = {.lex_state = 105},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 105},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 105},
  [35] = {.lex_state = 105},
  [36] = {.lex_state = 105},
  [37] = {.lex_state = 105},
  [38] = {.lex_state = 105},
  [39] = {.lex_state = 105},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 105},
  [42] = {.lex_state = 105},
  [43] = {.lex_state = 36},
  [44] = {.lex_state = 105},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 105},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 36},
  [50] = {.lex_state = 36},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 34, .external_lex_state = 2},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 34, .external_lex_state = 2},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 4},
  [58] = {.lex_state = 105, .external_lex_state = 4},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 36},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 4},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 0, .external_lex_state = 4},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0, .external_lex_state = 4},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0, .external_lex_state = 4},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 0, .external_lex_state = 4},
  [76] = {.lex_state = 0, .external_lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 105},
  [79] = {.lex_state = 0, .external_lex_state = 3},
  [80] = {.lex_state = 105},
  [81] = {.lex_state = 0, .external_lex_state = 3},
  [82] = {.lex_state = 105},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 105, .external_lex_state = 4},
  [89] = {.lex_state = 0, .external_lex_state = 3},
  [90] = {.lex_state = 105},
  [91] = {.lex_state = 105},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 105, .external_lex_state = 4},
  [94] = {.lex_state = 105},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 105, .external_lex_state = 4},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 105},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 105},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 105},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 105},
  [117] = {.lex_state = 0, .external_lex_state = 3},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 4},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 3},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0, .external_lex_state = 3},
  [124] = {.lex_state = 37},
  [125] = {.lex_state = 37},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0, .external_lex_state = 4},
  [128] = {.lex_state = 0, .external_lex_state = 3},
  [129] = {.lex_state = 0, .external_lex_state = 3},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 0, .external_lex_state = 3},
  [132] = {.lex_state = 0, .external_lex_state = 3},
  [133] = {.lex_state = 0, .external_lex_state = 3},
  [134] = {.lex_state = 0, .external_lex_state = 3},
  [135] = {.lex_state = 0, .external_lex_state = 3},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 0, .external_lex_state = 3},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0, .external_lex_state = 3},
  [141] = {.lex_state = 0, .external_lex_state = 4},
  [142] = {.lex_state = 0, .external_lex_state = 3},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 3},
  [146] = {.lex_state = 0, .external_lex_state = 3},
  [147] = {.lex_state = 0, .external_lex_state = 3},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 103},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 103},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0, .external_lex_state = 3},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0, .external_lex_state = 3},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 103},
  [162] = {.lex_state = 103},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0, .external_lex_state = 3},
  [167] = {.lex_state = 0, .external_lex_state = 3},
  [168] = {.lex_state = 103},
  [169] = {.lex_state = 103},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 103},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 103},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 103},
  [177] = {.lex_state = 103},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0, .external_lex_state = 4},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 103},
  [183] = {.lex_state = 0, .external_lex_state = 3},
  [184] = {.lex_state = 103},
  [185] = {.lex_state = 103},
  [186] = {.lex_state = 103},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 103},
  [190] = {.lex_state = 0, .external_lex_state = 3},
  [191] = {.lex_state = 0, .external_lex_state = 4},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 103},
  [195] = {.lex_state = 103},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0, .external_lex_state = 3},
  [199] = {.lex_state = 103},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 103},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 103},
  [205] = {.lex_state = 103},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 103},
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
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_real] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(193),
    [sym_enum] = STATE(9),
    [sym_record] = STATE(9),
    [sym_export] = STATE(9),
    [sym_import] = STATE(9),
    [sym_module] = STATE(8),
    [sym_function_definition] = STATE(9),
    [sym_variable] = STATE(9),
    [aux_sym_program_repeat1] = STATE(9),
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
  [0] = 10,
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
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(23), 1,
      sym_if,
    STATE(100), 1,
      sym_statement,
    STATE(133), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [36] = 10,
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
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(23), 1,
      sym_if,
    STATE(100), 1,
      sym_statement,
    STATE(133), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [72] = 10,
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
    STATE(3), 1,
      aux_sym_block_repeat1,
    STATE(23), 1,
      sym_if,
    STATE(100), 1,
      sym_statement,
    STATE(133), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [108] = 10,
    ACTIONS(35), 1,
      anon_sym_repeat,
    ACTIONS(38), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(44), 1,
      anon_sym_for,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(50), 1,
      sym__dedent,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(23), 1,
      sym_if,
    STATE(100), 1,
      sym_statement,
    STATE(133), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [144] = 10,
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
    ACTIONS(52), 1,
      sym__dedent,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(23), 1,
      sym_if,
    STATE(100), 1,
      sym_statement,
    STATE(133), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [180] = 8,
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
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(10), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [211] = 8,
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
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(7), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [242] = 8,
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
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(10), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [273] = 8,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      anon_sym_enum,
    ACTIONS(63), 1,
      anon_sym_record,
    ACTIONS(66), 1,
      anon_sym_export,
    ACTIONS(69), 1,
      anon_sym_import,
    ACTIONS(72), 1,
      anon_sym_define,
    ACTIONS(75), 1,
      anon_sym_variables,
    STATE(10), 7,
      sym_enum,
      sym_record,
      sym_export,
      sym_import,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [304] = 9,
    ACTIONS(78), 1,
      anon_sym_COLON_EQ,
    ACTIONS(80), 1,
      anon_sym_var,
    ACTIONS(84), 1,
      sym_float,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(56), 1,
      sym_primary_expression,
    STATE(67), 1,
      sym_argument,
    STATE(118), 1,
      sym_expression,
    ACTIONS(86), 2,
      sym__newline,
      aux_sym_comment_token1,
    ACTIONS(82), 3,
      sym_integer,
      sym_true,
      sym_false,
  [335] = 7,
    ACTIONS(93), 1,
      anon_sym_real,
    ACTIONS(96), 1,
      anon_sym_array,
    ACTIONS(99), 1,
      sym__dedent,
    STATE(12), 1,
      aux_sym_record_repeat1,
    STATE(176), 1,
      sym_type,
    ACTIONS(90), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(177), 2,
      sym_basic_type,
      sym_array_type,
  [359] = 7,
    ACTIONS(103), 1,
      anon_sym_real,
    ACTIONS(105), 1,
      anon_sym_array,
    ACTIONS(107), 1,
      sym__dedent,
    STATE(12), 1,
      aux_sym_record_repeat1,
    STATE(176), 1,
      sym_type,
    ACTIONS(101), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(177), 2,
      sym_basic_type,
      sym_array_type,
  [383] = 7,
    ACTIONS(80), 1,
      anon_sym_var,
    ACTIONS(84), 1,
      sym_float,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(56), 1,
      sym_primary_expression,
    STATE(97), 1,
      sym_argument,
    STATE(118), 1,
      sym_expression,
    ACTIONS(82), 3,
      sym_integer,
      sym_true,
      sym_false,
  [407] = 1,
    ACTIONS(109), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_variables,
  [419] = 6,
    ACTIONS(111), 1,
      anon_sym_constants,
    ACTIONS(113), 1,
      anon_sym_variables,
    ACTIONS(115), 1,
      sym__indent,
    STATE(42), 1,
      sym_block,
    STATE(17), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(63), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [440] = 6,
    ACTIONS(111), 1,
      anon_sym_constants,
    ACTIONS(113), 1,
      anon_sym_variables,
    ACTIONS(115), 1,
      sym__indent,
    STATE(34), 1,
      sym_block,
    STATE(57), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
    STATE(58), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [461] = 6,
    ACTIONS(103), 1,
      anon_sym_real,
    ACTIONS(105), 1,
      anon_sym_array,
    STATE(13), 1,
      aux_sym_record_repeat1,
    STATE(176), 1,
      sym_type,
    ACTIONS(101), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(177), 2,
      sym_basic_type,
      sym_array_type,
  [482] = 1,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [492] = 1,
    ACTIONS(119), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [502] = 1,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [512] = 4,
    ACTIONS(125), 1,
      sym_float,
    STATE(144), 1,
      sym_expression,
    STATE(180), 1,
      sym_primary_expression,
    ACTIONS(123), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [528] = 5,
    ACTIONS(127), 1,
      anon_sym_elsif,
    ACTIONS(129), 1,
      anon_sym_else,
    STATE(131), 1,
      sym_else,
    ACTIONS(131), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(25), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [546] = 5,
    ACTIONS(135), 1,
      anon_sym_real,
    ACTIONS(137), 1,
      anon_sym_array,
    STATE(83), 1,
      sym_declaration_type,
    ACTIONS(133), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(140), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [564] = 5,
    ACTIONS(127), 1,
      anon_sym_elsif,
    ACTIONS(129), 1,
      anon_sym_else,
    STATE(147), 1,
      sym_else,
    ACTIONS(139), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(51), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [582] = 1,
    ACTIONS(141), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [592] = 1,
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [602] = 4,
    ACTIONS(147), 1,
      sym_float,
    STATE(49), 1,
      sym_expression,
    STATE(60), 1,
      sym_primary_expression,
    ACTIONS(145), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [618] = 4,
    ACTIONS(125), 1,
      sym_float,
    STATE(127), 1,
      sym_expression,
    STATE(180), 1,
      sym_primary_expression,
    ACTIONS(123), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [634] = 4,
    ACTIONS(84), 1,
      sym_float,
    STATE(56), 1,
      sym_primary_expression,
    STATE(145), 1,
      sym_expression,
    ACTIONS(82), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [650] = 5,
    ACTIONS(135), 1,
      anon_sym_real,
    ACTIONS(137), 1,
      anon_sym_array,
    STATE(104), 1,
      sym_declaration_type,
    ACTIONS(133), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(140), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [668] = 1,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [678] = 5,
    ACTIONS(135), 1,
      anon_sym_real,
    ACTIONS(151), 1,
      anon_sym_array,
    STATE(111), 1,
      sym_type,
    ACTIONS(133), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(132), 2,
      sym_basic_type,
      sym_array_type,
  [696] = 1,
    ACTIONS(153), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [706] = 1,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [716] = 1,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [726] = 1,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [736] = 1,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [746] = 1,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [756] = 5,
    ACTIONS(135), 1,
      anon_sym_real,
    ACTIONS(151), 1,
      anon_sym_array,
    STATE(86), 1,
      sym_type,
    ACTIONS(133), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(132), 2,
      sym_basic_type,
      sym_array_type,
  [774] = 1,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [784] = 1,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [794] = 4,
    ACTIONS(125), 1,
      sym_float,
    STATE(141), 1,
      sym_expression,
    STATE(180), 1,
      sym_primary_expression,
    ACTIONS(123), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [810] = 1,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [820] = 5,
    ACTIONS(135), 1,
      anon_sym_real,
    ACTIONS(151), 1,
      anon_sym_array,
    STATE(89), 1,
      sym_type,
    ACTIONS(133), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(132), 2,
      sym_basic_type,
      sym_array_type,
  [838] = 5,
    ACTIONS(135), 1,
      anon_sym_real,
    ACTIONS(137), 1,
      anon_sym_array,
    STATE(112), 1,
      sym_declaration_type,
    ACTIONS(133), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(140), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [856] = 1,
    ACTIONS(171), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_record,
      anon_sym_export,
      anon_sym_import,
      anon_sym_define,
      anon_sym_variables,
  [866] = 5,
    ACTIONS(135), 1,
      anon_sym_real,
    ACTIONS(137), 1,
      anon_sym_array,
    STATE(115), 1,
      sym_declaration_type,
    ACTIONS(133), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(140), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [884] = 4,
    ACTIONS(84), 1,
      sym_float,
    STATE(56), 1,
      sym_primary_expression,
    STATE(79), 1,
      sym_expression,
    ACTIONS(82), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [900] = 3,
    ACTIONS(125), 1,
      sym_float,
    STATE(66), 1,
      sym_primary_expression,
    ACTIONS(123), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [913] = 3,
    ACTIONS(173), 1,
      anon_sym_elsif,
    STATE(51), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
    ACTIONS(176), 3,
      sym__newline,
      anon_sym_else,
      aux_sym_comment_token1,
  [926] = 2,
    ACTIONS(109), 1,
      sym__dedent,
    ACTIONS(178), 5,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [937] = 6,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(182), 1,
      anon_sym_var,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(87), 1,
      sym_parameter,
    STATE(169), 1,
      sym_var,
    STATE(171), 1,
      sym__parameters,
  [956] = 2,
    ACTIONS(50), 1,
      sym__dedent,
    ACTIONS(186), 5,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [967] = 3,
    ACTIONS(125), 1,
      sym_float,
    STATE(119), 1,
      sym_primary_expression,
    ACTIONS(123), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [980] = 1,
    ACTIONS(188), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [988] = 4,
    ACTIONS(111), 1,
      anon_sym_constants,
    ACTIONS(115), 1,
      sym__indent,
    STATE(20), 1,
      sym_block,
    STATE(70), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [1002] = 3,
    ACTIONS(192), 1,
      anon_sym_variables,
    ACTIONS(190), 2,
      sym__indent,
      anon_sym_constants,
    STATE(58), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [1014] = 1,
    ACTIONS(195), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [1022] = 2,
    ACTIONS(188), 1,
      sym_float,
    ACTIONS(197), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [1032] = 2,
    ACTIONS(195), 1,
      sym_float,
    ACTIONS(199), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [1042] = 1,
    ACTIONS(201), 5,
      sym__dedent,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_array,
  [1050] = 4,
    ACTIONS(111), 1,
      anon_sym_constants,
    ACTIONS(115), 1,
      sym__indent,
    STATE(36), 1,
      sym_block,
    STATE(70), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [1064] = 1,
    ACTIONS(143), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [1071] = 1,
    ACTIONS(149), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [1078] = 3,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_constant_repeat1,
    ACTIONS(205), 2,
      sym__indent,
      anon_sym_constants,
  [1089] = 3,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(209), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1100] = 1,
    ACTIONS(211), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [1107] = 1,
    ACTIONS(213), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [1114] = 3,
    ACTIONS(215), 1,
      anon_sym_constants,
    ACTIONS(218), 1,
      sym__indent,
    STATE(70), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [1125] = 4,
    ACTIONS(182), 1,
      anon_sym_var,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(136), 1,
      sym_parameter,
    STATE(169), 1,
      sym_var,
  [1138] = 3,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_constant_repeat1,
    ACTIONS(220), 2,
      sym__indent,
      anon_sym_constants,
  [1149] = 1,
    ACTIONS(222), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [1156] = 3,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(224), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1167] = 3,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_constant_repeat1,
    ACTIONS(229), 2,
      sym__indent,
      anon_sym_constants,
  [1178] = 3,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(234), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1189] = 1,
    ACTIONS(236), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [1196] = 3,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_enum_repeat1,
    ACTIONS(241), 2,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1207] = 1,
    ACTIONS(243), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [1214] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_COLON,
    STATE(78), 1,
      aux_sym_enum_repeat1,
  [1224] = 3,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      sym__newline,
    STATE(101), 1,
      aux_sym_enum_repeat1,
  [1234] = 1,
    ACTIONS(241), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1240] = 3,
    ACTIONS(253), 1,
      aux_sym_comment_token1,
    ACTIONS(255), 1,
      sym__newline,
    STATE(38), 1,
      sym_comment,
  [1250] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      aux_sym_enum_repeat1,
  [1260] = 1,
    ACTIONS(259), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [1266] = 3,
    ACTIONS(253), 1,
      aux_sym_comment_token1,
    ACTIONS(261), 1,
      sym__newline,
    STATE(143), 1,
      sym_comment,
  [1276] = 3,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym__parameters_repeat1,
  [1286] = 1,
    ACTIONS(159), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [1292] = 3,
    ACTIONS(253), 1,
      aux_sym_comment_token1,
    ACTIONS(267), 1,
      sym__newline,
    STATE(126), 1,
      sym_comment,
  [1302] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_COLON,
    STATE(78), 1,
      aux_sym_enum_repeat1,
  [1312] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_COLON,
    STATE(113), 1,
      aux_sym_enum_repeat1,
  [1322] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym__parameters_repeat1,
  [1332] = 1,
    ACTIONS(161), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [1338] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_COLON,
    STATE(78), 1,
      aux_sym_enum_repeat1,
  [1348] = 3,
    ACTIONS(280), 1,
      aux_sym_comment_token1,
    ACTIONS(282), 1,
      sym__newline,
    STATE(16), 1,
      sym_comment,
  [1358] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      aux_sym_enum_repeat1,
  [1368] = 1,
    ACTIONS(234), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [1374] = 1,
    ACTIONS(109), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [1380] = 2,
    ACTIONS(286), 1,
      anon_sym_from,
    ACTIONS(288), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1388] = 3,
    ACTIONS(290), 1,
      aux_sym_comment_token1,
    ACTIONS(292), 1,
      sym__newline,
    STATE(54), 1,
      sym_comment,
  [1398] = 3,
    ACTIONS(241), 1,
      sym__newline,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_enum_repeat1,
  [1408] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_enum_repeat1,
  [1418] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_COLON,
    STATE(94), 1,
      aux_sym_enum_repeat1,
  [1428] = 3,
    ACTIONS(253), 1,
      aux_sym_comment_token1,
    ACTIONS(301), 1,
      sym__newline,
    STATE(37), 1,
      sym_comment,
  [1438] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      aux_sym_enum_repeat1,
  [1448] = 2,
    ACTIONS(305), 1,
      anon_sym_from,
    ACTIONS(288), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1456] = 3,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym__newline,
    STATE(183), 1,
      sym__multiple_import,
  [1466] = 3,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym__parameters_repeat1,
  [1476] = 3,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      sym__newline,
    STATE(81), 1,
      aux_sym_enum_repeat1,
  [1486] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_COLON,
    STATE(90), 1,
      aux_sym_enum_repeat1,
  [1496] = 3,
    ACTIONS(253), 1,
      aux_sym_comment_token1,
    ACTIONS(317), 1,
      sym__newline,
    STATE(139), 1,
      sym_comment,
  [1506] = 3,
    ACTIONS(280), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      sym__newline,
    STATE(88), 1,
      sym_comment,
  [1516] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_COLON,
    STATE(78), 1,
      aux_sym_enum_repeat1,
  [1526] = 1,
    ACTIONS(195), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [1532] = 3,
    ACTIONS(280), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      sym__newline,
    STATE(93), 1,
      sym_comment,
  [1542] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_COLON,
    STATE(80), 1,
      aux_sym_enum_repeat1,
  [1552] = 1,
    ACTIONS(325), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [1558] = 1,
    ACTIONS(328), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [1564] = 1,
    ACTIONS(330), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [1570] = 1,
    ACTIONS(332), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1575] = 1,
    ACTIONS(334), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1580] = 2,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_parameters,
  [1587] = 1,
    ACTIONS(338), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1592] = 2,
    ACTIONS(340), 1,
      anon_sym_from,
    ACTIONS(342), 1,
      sym_identifier,
  [1599] = 2,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_from,
  [1606] = 1,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1611] = 2,
    ACTIONS(348), 1,
      sym__indent,
    STATE(142), 1,
      sym_block,
  [1618] = 1,
    ACTIONS(350), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1623] = 1,
    ACTIONS(241), 2,
      sym__newline,
      anon_sym_COMMA,
  [1628] = 2,
    ACTIONS(348), 1,
      sym__indent,
    STATE(146), 1,
      sym_block,
  [1635] = 1,
    ACTIONS(139), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1640] = 1,
    ACTIONS(352), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1645] = 1,
    ACTIONS(354), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1650] = 1,
    ACTIONS(356), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1655] = 1,
    ACTIONS(358), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1660] = 1,
    ACTIONS(276), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1665] = 2,
    ACTIONS(348), 1,
      sym__indent,
    STATE(135), 1,
      sym_block,
  [1672] = 1,
    ACTIONS(360), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1677] = 1,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1682] = 1,
    ACTIONS(364), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1687] = 2,
    ACTIONS(348), 1,
      sym__indent,
    STATE(120), 1,
      sym_block,
  [1694] = 1,
    ACTIONS(366), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1699] = 1,
    ACTIONS(368), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1704] = 2,
    ACTIONS(348), 1,
      sym__indent,
    STATE(73), 1,
      sym_block,
  [1711] = 1,
    ACTIONS(370), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1716] = 1,
    ACTIONS(372), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1721] = 1,
    ACTIONS(374), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1726] = 1,
    ACTIONS(376), 1,
      anon_sym_EQ,
  [1730] = 1,
    ACTIONS(378), 1,
      sym_identifier,
  [1734] = 1,
    ACTIONS(380), 1,
      anon_sym_to,
  [1738] = 1,
    ACTIONS(382), 1,
      anon_sym_to,
  [1742] = 1,
    ACTIONS(384), 1,
      sym_integer,
  [1746] = 1,
    ACTIONS(386), 1,
      sym_identifier,
  [1750] = 1,
    ACTIONS(388), 1,
      anon_sym_of,
  [1754] = 1,
    ACTIONS(390), 1,
      anon_sym_from,
  [1758] = 1,
    ACTIONS(392), 1,
      sym__newline,
  [1762] = 1,
    ACTIONS(394), 1,
      anon_sym_to,
  [1766] = 1,
    ACTIONS(396), 1,
      sym__newline,
  [1770] = 1,
    ACTIONS(398), 1,
      sym_float,
  [1774] = 1,
    ACTIONS(400), 1,
      sym_integer,
  [1778] = 1,
    ACTIONS(402), 1,
      sym_identifier,
  [1782] = 1,
    ACTIONS(350), 1,
      sym_identifier,
  [1786] = 1,
    ACTIONS(404), 1,
      anon_sym_from,
  [1790] = 1,
    ACTIONS(406), 1,
      sym_integer,
  [1794] = 1,
    ACTIONS(408), 1,
      anon_sym_to,
  [1798] = 1,
    ACTIONS(410), 1,
      sym__newline,
  [1802] = 1,
    ACTIONS(412), 1,
      sym__newline,
  [1806] = 1,
    ACTIONS(338), 1,
      sym_identifier,
  [1810] = 1,
    ACTIONS(414), 1,
      sym_identifier,
  [1814] = 1,
    ACTIONS(416), 1,
      sym_integer,
  [1818] = 1,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
  [1822] = 1,
    ACTIONS(420), 1,
      sym_identifier,
  [1826] = 1,
    ACTIONS(422), 1,
      anon_sym_until,
  [1830] = 1,
    ACTIONS(424), 1,
      sym_identifier,
  [1834] = 1,
    ACTIONS(426), 1,
      anon_sym_EQ,
  [1838] = 1,
    ACTIONS(428), 1,
      sym_identifier,
  [1842] = 1,
    ACTIONS(352), 1,
      sym_identifier,
  [1846] = 1,
    ACTIONS(430), 1,
      anon_sym_of,
  [1850] = 1,
    ACTIONS(432), 1,
      sym_integer,
  [1854] = 1,
    ACTIONS(188), 1,
      sym__indent,
  [1858] = 1,
    ACTIONS(434), 1,
      sym_float,
  [1862] = 1,
    ACTIONS(436), 1,
      sym_identifier,
  [1866] = 1,
    ACTIONS(438), 1,
      sym__newline,
  [1870] = 1,
    ACTIONS(440), 1,
      sym_identifier,
  [1874] = 1,
    ACTIONS(442), 1,
      sym_identifier,
  [1878] = 1,
    ACTIONS(444), 1,
      sym_identifier,
  [1882] = 1,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
  [1886] = 1,
    ACTIONS(434), 1,
      sym_integer,
  [1890] = 1,
    ACTIONS(448), 1,
      sym_identifier,
  [1894] = 1,
    ACTIONS(450), 1,
      sym__newline,
  [1898] = 1,
    ACTIONS(452), 1,
      sym__indent,
  [1902] = 1,
    ACTIONS(454), 1,
      anon_sym_EQ,
  [1906] = 1,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
  [1910] = 1,
    ACTIONS(458), 1,
      sym_identifier,
  [1914] = 1,
    ACTIONS(460), 1,
      sym_identifier,
  [1918] = 1,
    ACTIONS(462), 1,
      sym_integer,
  [1922] = 1,
    ACTIONS(462), 1,
      sym_float,
  [1926] = 1,
    ACTIONS(464), 1,
      sym__newline,
  [1930] = 1,
    ACTIONS(466), 1,
      sym_identifier,
  [1934] = 1,
    ACTIONS(468), 1,
      anon_sym_of,
  [1938] = 1,
    ACTIONS(470), 1,
      sym_identifier,
  [1942] = 1,
    ACTIONS(472), 1,
      anon_sym_to,
  [1946] = 1,
    ACTIONS(474), 1,
      anon_sym_to,
  [1950] = 1,
    ACTIONS(476), 1,
      sym_identifier,
  [1954] = 1,
    ACTIONS(478), 1,
      sym_identifier,
  [1958] = 1,
    ACTIONS(480), 1,
      sym_integer,
  [1962] = 1,
    ACTIONS(482), 1,
      sym_float,
  [1966] = 1,
    ACTIONS(484), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 211,
  [SMALL_STATE(9)] = 242,
  [SMALL_STATE(10)] = 273,
  [SMALL_STATE(11)] = 304,
  [SMALL_STATE(12)] = 335,
  [SMALL_STATE(13)] = 359,
  [SMALL_STATE(14)] = 383,
  [SMALL_STATE(15)] = 407,
  [SMALL_STATE(16)] = 419,
  [SMALL_STATE(17)] = 440,
  [SMALL_STATE(18)] = 461,
  [SMALL_STATE(19)] = 482,
  [SMALL_STATE(20)] = 492,
  [SMALL_STATE(21)] = 502,
  [SMALL_STATE(22)] = 512,
  [SMALL_STATE(23)] = 528,
  [SMALL_STATE(24)] = 546,
  [SMALL_STATE(25)] = 564,
  [SMALL_STATE(26)] = 582,
  [SMALL_STATE(27)] = 592,
  [SMALL_STATE(28)] = 602,
  [SMALL_STATE(29)] = 618,
  [SMALL_STATE(30)] = 634,
  [SMALL_STATE(31)] = 650,
  [SMALL_STATE(32)] = 668,
  [SMALL_STATE(33)] = 678,
  [SMALL_STATE(34)] = 696,
  [SMALL_STATE(35)] = 706,
  [SMALL_STATE(36)] = 716,
  [SMALL_STATE(37)] = 726,
  [SMALL_STATE(38)] = 736,
  [SMALL_STATE(39)] = 746,
  [SMALL_STATE(40)] = 756,
  [SMALL_STATE(41)] = 774,
  [SMALL_STATE(42)] = 784,
  [SMALL_STATE(43)] = 794,
  [SMALL_STATE(44)] = 810,
  [SMALL_STATE(45)] = 820,
  [SMALL_STATE(46)] = 838,
  [SMALL_STATE(47)] = 856,
  [SMALL_STATE(48)] = 866,
  [SMALL_STATE(49)] = 884,
  [SMALL_STATE(50)] = 900,
  [SMALL_STATE(51)] = 913,
  [SMALL_STATE(52)] = 926,
  [SMALL_STATE(53)] = 937,
  [SMALL_STATE(54)] = 956,
  [SMALL_STATE(55)] = 967,
  [SMALL_STATE(56)] = 980,
  [SMALL_STATE(57)] = 988,
  [SMALL_STATE(58)] = 1002,
  [SMALL_STATE(59)] = 1014,
  [SMALL_STATE(60)] = 1022,
  [SMALL_STATE(61)] = 1032,
  [SMALL_STATE(62)] = 1042,
  [SMALL_STATE(63)] = 1050,
  [SMALL_STATE(64)] = 1064,
  [SMALL_STATE(65)] = 1071,
  [SMALL_STATE(66)] = 1078,
  [SMALL_STATE(67)] = 1089,
  [SMALL_STATE(68)] = 1100,
  [SMALL_STATE(69)] = 1107,
  [SMALL_STATE(70)] = 1114,
  [SMALL_STATE(71)] = 1125,
  [SMALL_STATE(72)] = 1138,
  [SMALL_STATE(73)] = 1149,
  [SMALL_STATE(74)] = 1156,
  [SMALL_STATE(75)] = 1167,
  [SMALL_STATE(76)] = 1178,
  [SMALL_STATE(77)] = 1189,
  [SMALL_STATE(78)] = 1196,
  [SMALL_STATE(79)] = 1207,
  [SMALL_STATE(80)] = 1214,
  [SMALL_STATE(81)] = 1224,
  [SMALL_STATE(82)] = 1234,
  [SMALL_STATE(83)] = 1240,
  [SMALL_STATE(84)] = 1250,
  [SMALL_STATE(85)] = 1260,
  [SMALL_STATE(86)] = 1266,
  [SMALL_STATE(87)] = 1276,
  [SMALL_STATE(88)] = 1286,
  [SMALL_STATE(89)] = 1292,
  [SMALL_STATE(90)] = 1302,
  [SMALL_STATE(91)] = 1312,
  [SMALL_STATE(92)] = 1322,
  [SMALL_STATE(93)] = 1332,
  [SMALL_STATE(94)] = 1338,
  [SMALL_STATE(95)] = 1348,
  [SMALL_STATE(96)] = 1358,
  [SMALL_STATE(97)] = 1368,
  [SMALL_STATE(98)] = 1374,
  [SMALL_STATE(99)] = 1380,
  [SMALL_STATE(100)] = 1388,
  [SMALL_STATE(101)] = 1398,
  [SMALL_STATE(102)] = 1408,
  [SMALL_STATE(103)] = 1418,
  [SMALL_STATE(104)] = 1428,
  [SMALL_STATE(105)] = 1438,
  [SMALL_STATE(106)] = 1448,
  [SMALL_STATE(107)] = 1456,
  [SMALL_STATE(108)] = 1466,
  [SMALL_STATE(109)] = 1476,
  [SMALL_STATE(110)] = 1486,
  [SMALL_STATE(111)] = 1496,
  [SMALL_STATE(112)] = 1506,
  [SMALL_STATE(113)] = 1516,
  [SMALL_STATE(114)] = 1526,
  [SMALL_STATE(115)] = 1532,
  [SMALL_STATE(116)] = 1542,
  [SMALL_STATE(117)] = 1552,
  [SMALL_STATE(118)] = 1558,
  [SMALL_STATE(119)] = 1564,
  [SMALL_STATE(120)] = 1570,
  [SMALL_STATE(121)] = 1575,
  [SMALL_STATE(122)] = 1580,
  [SMALL_STATE(123)] = 1587,
  [SMALL_STATE(124)] = 1592,
  [SMALL_STATE(125)] = 1599,
  [SMALL_STATE(126)] = 1606,
  [SMALL_STATE(127)] = 1611,
  [SMALL_STATE(128)] = 1618,
  [SMALL_STATE(129)] = 1623,
  [SMALL_STATE(130)] = 1628,
  [SMALL_STATE(131)] = 1635,
  [SMALL_STATE(132)] = 1640,
  [SMALL_STATE(133)] = 1645,
  [SMALL_STATE(134)] = 1650,
  [SMALL_STATE(135)] = 1655,
  [SMALL_STATE(136)] = 1660,
  [SMALL_STATE(137)] = 1665,
  [SMALL_STATE(138)] = 1672,
  [SMALL_STATE(139)] = 1677,
  [SMALL_STATE(140)] = 1682,
  [SMALL_STATE(141)] = 1687,
  [SMALL_STATE(142)] = 1694,
  [SMALL_STATE(143)] = 1699,
  [SMALL_STATE(144)] = 1704,
  [SMALL_STATE(145)] = 1711,
  [SMALL_STATE(146)] = 1716,
  [SMALL_STATE(147)] = 1721,
  [SMALL_STATE(148)] = 1726,
  [SMALL_STATE(149)] = 1730,
  [SMALL_STATE(150)] = 1734,
  [SMALL_STATE(151)] = 1738,
  [SMALL_STATE(152)] = 1742,
  [SMALL_STATE(153)] = 1746,
  [SMALL_STATE(154)] = 1750,
  [SMALL_STATE(155)] = 1754,
  [SMALL_STATE(156)] = 1758,
  [SMALL_STATE(157)] = 1762,
  [SMALL_STATE(158)] = 1766,
  [SMALL_STATE(159)] = 1770,
  [SMALL_STATE(160)] = 1774,
  [SMALL_STATE(161)] = 1778,
  [SMALL_STATE(162)] = 1782,
  [SMALL_STATE(163)] = 1786,
  [SMALL_STATE(164)] = 1790,
  [SMALL_STATE(165)] = 1794,
  [SMALL_STATE(166)] = 1798,
  [SMALL_STATE(167)] = 1802,
  [SMALL_STATE(168)] = 1806,
  [SMALL_STATE(169)] = 1810,
  [SMALL_STATE(170)] = 1814,
  [SMALL_STATE(171)] = 1818,
  [SMALL_STATE(172)] = 1822,
  [SMALL_STATE(173)] = 1826,
  [SMALL_STATE(174)] = 1830,
  [SMALL_STATE(175)] = 1834,
  [SMALL_STATE(176)] = 1838,
  [SMALL_STATE(177)] = 1842,
  [SMALL_STATE(178)] = 1846,
  [SMALL_STATE(179)] = 1850,
  [SMALL_STATE(180)] = 1854,
  [SMALL_STATE(181)] = 1858,
  [SMALL_STATE(182)] = 1862,
  [SMALL_STATE(183)] = 1866,
  [SMALL_STATE(184)] = 1870,
  [SMALL_STATE(185)] = 1874,
  [SMALL_STATE(186)] = 1878,
  [SMALL_STATE(187)] = 1882,
  [SMALL_STATE(188)] = 1886,
  [SMALL_STATE(189)] = 1890,
  [SMALL_STATE(190)] = 1894,
  [SMALL_STATE(191)] = 1898,
  [SMALL_STATE(192)] = 1902,
  [SMALL_STATE(193)] = 1906,
  [SMALL_STATE(194)] = 1910,
  [SMALL_STATE(195)] = 1914,
  [SMALL_STATE(196)] = 1918,
  [SMALL_STATE(197)] = 1922,
  [SMALL_STATE(198)] = 1926,
  [SMALL_STATE(199)] = 1930,
  [SMALL_STATE(200)] = 1934,
  [SMALL_STATE(201)] = 1938,
  [SMALL_STATE(202)] = 1942,
  [SMALL_STATE(203)] = 1946,
  [SMALL_STATE(204)] = 1950,
  [SMALL_STATE(205)] = 1954,
  [SMALL_STATE(206)] = 1958,
  [SMALL_STATE(207)] = 1962,
  [SMALL_STATE(208)] = 1966,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(173),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(174),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(149),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(205),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(204),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(201),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(195),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(194),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 1, .production_id = 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(124),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(125),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(178),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2), SHIFT_REPEAT(22),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(208),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(153),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2), SHIFT_REPEAT(161),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2), SHIFT_REPEAT(14),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(189),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 6),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(71),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(186),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_argument, 1), REDUCE(sym_primary_expression, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 5),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delclaration_array_type, 7),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 6),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiple_import, 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [456] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
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
