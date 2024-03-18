#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 161
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_module = 1,
  anon_sym_define = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_COLON_EQ = 5,
  anon_sym_repeat = 6,
  anon_sym_until = 7,
  anon_sym_while = 8,
  anon_sym_COMMA = 9,
  anon_sym_var = 10,
  anon_sym_if = 11,
  anon_sym_elsif = 12,
  anon_sym_else = 13,
  anon_sym_for = 14,
  anon_sym_from = 15,
  anon_sym_to = 16,
  anon_sym_constants = 17,
  anon_sym_EQ = 18,
  anon_sym_COLON = 19,
  anon_sym_variables = 20,
  sym_integer = 21,
  sym_float = 22,
  anon_sym_integer = 23,
  anon_sym_real = 24,
  anon_sym_string = 25,
  anon_sym_array = 26,
  anon_sym_of = 27,
  anon_sym_boolean = 28,
  aux_sym_comment_token1 = 29,
  sym_identifier = 30,
  sym_true = 31,
  sym_false = 32,
  sym__newline = 33,
  sym__indent = 34,
  sym__dedent = 35,
  sym_program = 36,
  sym_module = 37,
  sym_function_definition = 38,
  sym_parameters = 39,
  sym_assignment = 40,
  sym_expression = 41,
  sym_statement = 42,
  sym_repeat_statement = 43,
  sym_while_statement = 44,
  sym_call_statement = 45,
  sym_argument = 46,
  sym_if_then_statement = 47,
  sym_if = 48,
  sym_elsif = 49,
  sym_else = 50,
  sym_for = 51,
  sym_constant = 52,
  sym_block = 53,
  sym__parameters = 54,
  sym_var = 55,
  sym_parameter = 56,
  sym_variable = 57,
  sym_primary_expression = 58,
  sym_basic_type = 59,
  sym_array_type = 60,
  sym_delclaration_array_type = 61,
  sym_declaration_type = 62,
  sym_type = 63,
  sym_comment = 64,
  aux_sym_program_repeat1 = 65,
  aux_sym_function_definition_repeat1 = 66,
  aux_sym_function_definition_repeat2 = 67,
  aux_sym_call_statement_repeat1 = 68,
  aux_sym_if_then_statement_repeat1 = 69,
  aux_sym_constant_repeat1 = 70,
  aux_sym_block_repeat1 = 71,
  aux_sym__parameters_repeat1 = 72,
  aux_sym_parameter_repeat1 = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_define] = "define",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_repeat] = "repeat",
  [anon_sym_until] = "until",
  [anon_sym_while] = "while",
  [anon_sym_COMMA] = ",",
  [anon_sym_var] = "var",
  [anon_sym_if] = "if",
  [anon_sym_elsif] = "elsif",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_from] = "from",
  [anon_sym_to] = "to",
  [anon_sym_constants] = "constants",
  [anon_sym_EQ] = "=",
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
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_function_definition_repeat2] = "function_definition_repeat2",
  [aux_sym_call_statement_repeat1] = "call_statement_repeat1",
  [aux_sym_if_then_statement_repeat1] = "if_then_statement_repeat1",
  [aux_sym_constant_repeat1] = "constant_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__parameters_repeat1] = "_parameters_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_until] = anon_sym_until,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elsif] = anon_sym_elsif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_constants] = anon_sym_constants,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_function_definition_repeat2] = aux_sym_function_definition_repeat2,
  [aux_sym_call_statement_repeat1] = aux_sym_call_statement_repeat1,
  [aux_sym_if_then_statement_repeat1] = aux_sym_if_then_statement_repeat1,
  [aux_sym_constant_repeat1] = aux_sym_constant_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__parameters_repeat1] = aux_sym__parameters_repeat1,
  [aux_sym_parameter_repeat1] = aux_sym_parameter_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_COMMA] = {
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
  [anon_sym_EQ] = {
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
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 12,
  [16] = 13,
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
  [41] = 38,
  [42] = 27,
  [43] = 36,
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 60,
  [66] = 66,
  [67] = 51,
  [68] = 68,
  [69] = 69,
  [70] = 62,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 61,
  [76] = 76,
  [77] = 77,
  [78] = 76,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 38,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 69,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 27,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 77,
  [97] = 97,
  [98] = 54,
  [99] = 99,
  [100] = 100,
  [101] = 101,
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
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 36,
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
  [150] = 131,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 131,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 156,
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
      if (eof) ADVANCE(88);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'v') ADVANCE(7);
      if (lookahead == 'w') ADVANCE(36);
      if (lookahead == '{') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == 'v') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'v') ADVANCE(128);
      if (lookahead == '{') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(123);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(104);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == 'w') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 't') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 83:
      if (lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 84:
      if (lookahead == '}') ADVANCE(125);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 85:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(85)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 87:
      if (eof) ADVANCE(88);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'v') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(87)
      END_STATE();
    case 88:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_constants);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '_') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(145);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(137);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(143);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(126);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(149);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(103);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(136);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(138);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(144);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(131);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(141);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(130);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(107);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(146);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(133);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(95);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(132);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 31, .external_lex_state = 2},
  [3] = {.lex_state = 31, .external_lex_state = 2},
  [4] = {.lex_state = 31, .external_lex_state = 2},
  [5] = {.lex_state = 31, .external_lex_state = 2},
  [6] = {.lex_state = 31, .external_lex_state = 2},
  [7] = {.lex_state = 2, .external_lex_state = 3},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 87, .external_lex_state = 4},
  [10] = {.lex_state = 87, .external_lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 0, .external_lex_state = 3},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 31, .external_lex_state = 2},
  [27] = {.lex_state = 31, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 3},
  [29] = {.lex_state = 87},
  [30] = {.lex_state = 87},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 87},
  [35] = {.lex_state = 87},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 0, .external_lex_state = 4},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 0, .external_lex_state = 4},
  [40] = {.lex_state = 87, .external_lex_state = 4},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 87},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 0, .external_lex_state = 4},
  [48] = {.lex_state = 0, .external_lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 4},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 0, .external_lex_state = 4},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 0, .external_lex_state = 3},
  [61] = {.lex_state = 87},
  [62] = {.lex_state = 87},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 87},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 87},
  [68] = {.lex_state = 87},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 87},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 87},
  [74] = {.lex_state = 87},
  [75] = {.lex_state = 87},
  [76] = {.lex_state = 87, .external_lex_state = 4},
  [77] = {.lex_state = 87, .external_lex_state = 4},
  [78] = {.lex_state = 87},
  [79] = {.lex_state = 87},
  [80] = {.lex_state = 0, .external_lex_state = 3},
  [81] = {.lex_state = 0, .external_lex_state = 4},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0, .external_lex_state = 4},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 0, .external_lex_state = 3},
  [89] = {.lex_state = 87},
  [90] = {.lex_state = 0, .external_lex_state = 3},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 87, .external_lex_state = 4},
  [93] = {.lex_state = 87},
  [94] = {.lex_state = 87},
  [95] = {.lex_state = 87},
  [96] = {.lex_state = 87},
  [97] = {.lex_state = 87},
  [98] = {.lex_state = 87},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 4},
  [101] = {.lex_state = 0, .external_lex_state = 4},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 0, .external_lex_state = 3},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 0, .external_lex_state = 4},
  [117] = {.lex_state = 0, .external_lex_state = 3},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 4},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 3},
  [122] = {.lex_state = 87},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0, .external_lex_state = 3},
  [125] = {.lex_state = 85},
  [126] = {.lex_state = 85},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0, .external_lex_state = 4},
  [130] = {.lex_state = 85},
  [131] = {.lex_state = 0, .external_lex_state = 3},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 85},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 85},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 85},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 85},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0, .external_lex_state = 3},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 85},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0, .external_lex_state = 3},
  [156] = {.lex_state = 85},
  [157] = {.lex_state = 85},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 85},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_until] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elsif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_constants] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [sym_program] = STATE(154),
    [sym_module] = STATE(30),
    [sym_function_definition] = STATE(29),
    [sym_variable] = STATE(29),
    [aux_sym_program_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_define] = ACTIONS(7),
    [anon_sym_variables] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(11), 1,
      anon_sym_repeat,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym__dedent,
    STATE(3), 1,
      aux_sym_block_repeat1,
    STATE(24), 1,
      sym_if,
    STATE(71), 1,
      sym_statement,
    STATE(106), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [36] = 10,
    ACTIONS(23), 1,
      anon_sym_repeat,
    ACTIONS(26), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(32), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(38), 1,
      sym__dedent,
    STATE(3), 1,
      aux_sym_block_repeat1,
    STATE(24), 1,
      sym_if,
    STATE(71), 1,
      sym_statement,
    STATE(106), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [72] = 10,
    ACTIONS(11), 1,
      anon_sym_repeat,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(40), 1,
      sym__dedent,
    STATE(3), 1,
      aux_sym_block_repeat1,
    STATE(24), 1,
      sym_if,
    STATE(71), 1,
      sym_statement,
    STATE(106), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [108] = 10,
    ACTIONS(11), 1,
      anon_sym_repeat,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(42), 1,
      sym__dedent,
    STATE(4), 1,
      aux_sym_block_repeat1,
    STATE(24), 1,
      sym_if,
    STATE(71), 1,
      sym_statement,
    STATE(106), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [144] = 10,
    ACTIONS(11), 1,
      anon_sym_repeat,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(44), 1,
      sym__dedent,
    STATE(2), 1,
      aux_sym_block_repeat1,
    STATE(24), 1,
      sym_if,
    STATE(71), 1,
      sym_statement,
    STATE(106), 6,
      sym_assignment,
      sym_repeat_statement,
      sym_while_statement,
      sym_call_statement,
      sym_if_then_statement,
      sym_for,
  [180] = 9,
    ACTIONS(46), 1,
      anon_sym_COLON_EQ,
    ACTIONS(48), 1,
      anon_sym_var,
    ACTIONS(52), 1,
      sym_float,
    ACTIONS(56), 1,
      sym_identifier,
    STATE(43), 1,
      sym_primary_expression,
    STATE(53), 1,
      sym_argument,
    STATE(91), 1,
      sym_expression,
    ACTIONS(54), 2,
      sym__newline,
      aux_sym_comment_token1,
    ACTIONS(50), 3,
      sym_integer,
      sym_true,
      sym_false,
  [211] = 7,
    ACTIONS(48), 1,
      anon_sym_var,
    ACTIONS(52), 1,
      sym_float,
    ACTIONS(56), 1,
      sym_identifier,
    STATE(43), 1,
      sym_primary_expression,
    STATE(85), 1,
      sym_argument,
    STATE(91), 1,
      sym_expression,
    ACTIONS(50), 3,
      sym_integer,
      sym_true,
      sym_false,
  [235] = 6,
    ACTIONS(58), 1,
      anon_sym_constants,
    ACTIONS(60), 1,
      anon_sym_variables,
    ACTIONS(62), 1,
      sym__indent,
    STATE(73), 1,
      sym_block,
    STATE(39), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
    STATE(40), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [256] = 6,
    ACTIONS(58), 1,
      anon_sym_constants,
    ACTIONS(60), 1,
      anon_sym_variables,
    ACTIONS(62), 1,
      sym__indent,
    STATE(93), 1,
      sym_block,
    STATE(9), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
    STATE(37), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [277] = 5,
    ACTIONS(66), 1,
      anon_sym_real,
    ACTIONS(68), 1,
      anon_sym_array,
    STATE(80), 1,
      sym_type,
    ACTIONS(64), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(104), 2,
      sym_basic_type,
      sym_array_type,
  [295] = 5,
    ACTIONS(66), 1,
      anon_sym_real,
    ACTIONS(70), 1,
      anon_sym_array,
    STATE(65), 1,
      sym_declaration_type,
    ACTIONS(64), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(115), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [313] = 5,
    ACTIONS(66), 1,
      anon_sym_real,
    ACTIONS(70), 1,
      anon_sym_array,
    STATE(69), 1,
      sym_declaration_type,
    ACTIONS(64), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(115), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [331] = 5,
    ACTIONS(66), 1,
      anon_sym_real,
    ACTIONS(68), 1,
      anon_sym_array,
    STATE(63), 1,
      sym_type,
    ACTIONS(64), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(104), 2,
      sym_basic_type,
      sym_array_type,
  [349] = 5,
    ACTIONS(66), 1,
      anon_sym_real,
    ACTIONS(70), 1,
      anon_sym_array,
    STATE(60), 1,
      sym_declaration_type,
    ACTIONS(64), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(115), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [367] = 5,
    ACTIONS(66), 1,
      anon_sym_real,
    ACTIONS(70), 1,
      anon_sym_array,
    STATE(87), 1,
      sym_declaration_type,
    ACTIONS(64), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(115), 2,
      sym_basic_type,
      sym_delclaration_array_type,
  [385] = 4,
    ACTIONS(74), 1,
      sym_float,
    STATE(22), 1,
      sym_expression,
    STATE(36), 1,
      sym_primary_expression,
    ACTIONS(72), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [401] = 4,
    ACTIONS(78), 1,
      sym_float,
    STATE(100), 1,
      sym_expression,
    STATE(129), 1,
      sym_primary_expression,
    ACTIONS(76), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [417] = 5,
    ACTIONS(66), 1,
      anon_sym_real,
    ACTIONS(68), 1,
      anon_sym_array,
    STATE(59), 1,
      sym_type,
    ACTIONS(64), 2,
      anon_sym_integer,
      anon_sym_string,
    STATE(104), 2,
      sym_basic_type,
      sym_array_type,
  [435] = 4,
    ACTIONS(78), 1,
      sym_float,
    STATE(116), 1,
      sym_expression,
    STATE(129), 1,
      sym_primary_expression,
    ACTIONS(76), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [451] = 4,
    ACTIONS(78), 1,
      sym_float,
    STATE(99), 1,
      sym_expression,
    STATE(129), 1,
      sym_primary_expression,
    ACTIONS(76), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [467] = 4,
    ACTIONS(52), 1,
      sym_float,
    STATE(43), 1,
      sym_primary_expression,
    STATE(57), 1,
      sym_expression,
    ACTIONS(50), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [483] = 4,
    ACTIONS(52), 1,
      sym_float,
    STATE(43), 1,
      sym_primary_expression,
    STATE(112), 1,
      sym_expression,
    ACTIONS(50), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [499] = 5,
    ACTIONS(80), 1,
      anon_sym_elsif,
    ACTIONS(82), 1,
      anon_sym_else,
    STATE(102), 1,
      sym_else,
    ACTIONS(84), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(25), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [517] = 5,
    ACTIONS(80), 1,
      anon_sym_elsif,
    ACTIONS(82), 1,
      anon_sym_else,
    STATE(118), 1,
      sym_else,
    ACTIONS(86), 2,
      sym__newline,
      aux_sym_comment_token1,
    STATE(28), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
  [535] = 2,
    ACTIONS(38), 1,
      sym__dedent,
    ACTIONS(88), 5,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [546] = 2,
    ACTIONS(92), 1,
      sym__dedent,
    ACTIONS(90), 5,
      anon_sym_repeat,
      anon_sym_while,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [557] = 3,
    ACTIONS(94), 1,
      anon_sym_elsif,
    STATE(28), 2,
      sym_elsif,
      aux_sym_if_then_statement_repeat1,
    ACTIONS(97), 3,
      sym__newline,
      anon_sym_else,
      aux_sym_comment_token1,
  [570] = 4,
    ACTIONS(7), 1,
      anon_sym_define,
    ACTIONS(9), 1,
      anon_sym_variables,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(34), 3,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [585] = 4,
    ACTIONS(7), 1,
      anon_sym_define,
    ACTIONS(9), 1,
      anon_sym_variables,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(35), 3,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [600] = 3,
    ACTIONS(78), 1,
      sym_float,
    STATE(81), 1,
      sym_primary_expression,
    ACTIONS(76), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [613] = 6,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_var,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(82), 1,
      sym_parameter,
    STATE(134), 1,
      sym_var,
    STATE(137), 1,
      sym__parameters,
  [632] = 3,
    ACTIONS(78), 1,
      sym_float,
    STATE(55), 1,
      sym_primary_expression,
    ACTIONS(76), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [645] = 4,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_define,
    ACTIONS(112), 1,
      anon_sym_variables,
    STATE(34), 3,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [660] = 4,
    ACTIONS(7), 1,
      anon_sym_define,
    ACTIONS(9), 1,
      anon_sym_variables,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(34), 3,
      sym_function_definition,
      sym_variable,
      aux_sym_program_repeat1,
  [675] = 2,
    ACTIONS(119), 1,
      sym_float,
    ACTIONS(117), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [685] = 4,
    ACTIONS(58), 1,
      anon_sym_constants,
    ACTIONS(62), 1,
      sym__indent,
    STATE(74), 1,
      sym_block,
    STATE(52), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [699] = 1,
    ACTIONS(121), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [707] = 4,
    ACTIONS(58), 1,
      anon_sym_constants,
    ACTIONS(62), 1,
      sym__indent,
    STATE(95), 1,
      sym_block,
    STATE(52), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [721] = 3,
    ACTIONS(125), 1,
      anon_sym_variables,
    ACTIONS(123), 2,
      sym__indent,
      anon_sym_constants,
    STATE(40), 2,
      sym_variable,
      aux_sym_function_definition_repeat1,
  [733] = 2,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(128), 4,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
  [743] = 1,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_variables,
  [751] = 1,
    ACTIONS(119), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [759] = 1,
    ACTIONS(130), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [766] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(135), 2,
      sym__newline,
      aux_sym_comment_token1,
  [777] = 1,
    ACTIONS(137), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [784] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_constant_repeat1,
    ACTIONS(141), 2,
      sym__indent,
      anon_sym_constants,
  [795] = 3,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_constant_repeat1,
    ACTIONS(146), 2,
      sym__indent,
      anon_sym_constants,
  [806] = 1,
    ACTIONS(148), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [813] = 4,
    ACTIONS(103), 1,
      anon_sym_var,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(105), 1,
      sym_parameter,
    STATE(134), 1,
      sym_var,
  [826] = 1,
    ACTIONS(150), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [833] = 3,
    ACTIONS(152), 1,
      anon_sym_constants,
    ACTIONS(155), 1,
      sym__indent,
    STATE(52), 2,
      sym_constant,
      aux_sym_function_definition_repeat2,
  [844] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(159), 2,
      sym__newline,
      aux_sym_comment_token1,
  [855] = 1,
    ACTIONS(161), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [862] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_constant_repeat1,
    ACTIONS(163), 2,
      sym__indent,
      anon_sym_constants,
  [873] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_call_statement_repeat1,
    ACTIONS(165), 2,
      sym__newline,
      aux_sym_comment_token1,
  [884] = 1,
    ACTIONS(167), 4,
      sym__newline,
      anon_sym_elsif,
      anon_sym_else,
      aux_sym_comment_token1,
  [891] = 3,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym__parameters_repeat1,
  [901] = 3,
    ACTIONS(173), 1,
      aux_sym_comment_token1,
    ACTIONS(175), 1,
      sym__newline,
    STATE(123), 1,
      sym_comment,
  [911] = 3,
    ACTIONS(173), 1,
      aux_sym_comment_token1,
    ACTIONS(177), 1,
      sym__newline,
    STATE(78), 1,
      sym_comment,
  [921] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_COLON,
    STATE(89), 1,
      aux_sym_parameter_repeat1,
  [931] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_COLON,
    STATE(61), 1,
      aux_sym_parameter_repeat1,
  [941] = 3,
    ACTIONS(173), 1,
      aux_sym_comment_token1,
    ACTIONS(185), 1,
      sym__newline,
    STATE(113), 1,
      sym_comment,
  [951] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_COLON,
    STATE(89), 1,
      aux_sym_parameter_repeat1,
  [961] = 3,
    ACTIONS(189), 1,
      aux_sym_comment_token1,
    ACTIONS(191), 1,
      sym__newline,
    STATE(76), 1,
      sym_comment,
  [971] = 3,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym__parameters_repeat1,
  [981] = 1,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      anon_sym_define,
      anon_sym_variables,
  [987] = 1,
    ACTIONS(198), 3,
      ts_builtin_sym_end,
      anon_sym_define,
      anon_sym_variables,
  [993] = 3,
    ACTIONS(189), 1,
      aux_sym_comment_token1,
    ACTIONS(200), 1,
      sym__newline,
    STATE(77), 1,
      sym_comment,
  [1003] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_COLON,
    STATE(75), 1,
      aux_sym_parameter_repeat1,
  [1013] = 3,
    ACTIONS(204), 1,
      aux_sym_comment_token1,
    ACTIONS(206), 1,
      sym__newline,
    STATE(26), 1,
      sym_comment,
  [1023] = 3,
    ACTIONS(189), 1,
      aux_sym_comment_token1,
    ACTIONS(208), 1,
      sym__newline,
    STATE(10), 1,
      sym_comment,
  [1033] = 1,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      anon_sym_define,
      anon_sym_variables,
  [1039] = 1,
    ACTIONS(212), 3,
      ts_builtin_sym_end,
      anon_sym_define,
      anon_sym_variables,
  [1045] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_COLON,
    STATE(89), 1,
      aux_sym_parameter_repeat1,
  [1055] = 1,
    ACTIONS(216), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [1061] = 1,
    ACTIONS(218), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [1067] = 1,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      anon_sym_define,
      anon_sym_variables,
  [1073] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_COLON,
    STATE(94), 1,
      aux_sym_parameter_repeat1,
  [1083] = 3,
    ACTIONS(173), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      sym__newline,
    STATE(108), 1,
      sym_comment,
  [1093] = 1,
    ACTIONS(224), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [1099] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym__parameters_repeat1,
  [1109] = 1,
    ACTIONS(121), 3,
      sym__indent,
      anon_sym_COMMA,
      anon_sym_constants,
  [1115] = 2,
    ACTIONS(228), 1,
      anon_sym_from,
    ACTIONS(230), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1123] = 1,
    ACTIONS(135), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [1129] = 2,
    ACTIONS(232), 1,
      anon_sym_from,
    ACTIONS(230), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1137] = 3,
    ACTIONS(173), 1,
      aux_sym_comment_token1,
    ACTIONS(234), 1,
      sym__newline,
    STATE(96), 1,
      sym_comment,
  [1147] = 1,
    ACTIONS(236), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [1153] = 3,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_COLON,
    STATE(89), 1,
      aux_sym_parameter_repeat1,
  [1163] = 1,
    ACTIONS(243), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [1169] = 1,
    ACTIONS(246), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_comment_token1,
  [1175] = 1,
    ACTIONS(92), 3,
      sym__indent,
      anon_sym_constants,
      anon_sym_variables,
  [1181] = 1,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      anon_sym_define,
      anon_sym_variables,
  [1187] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_COLON,
    STATE(89), 1,
      aux_sym_parameter_repeat1,
  [1197] = 1,
    ACTIONS(252), 3,
      ts_builtin_sym_end,
      anon_sym_define,
      anon_sym_variables,
  [1203] = 1,
    ACTIONS(218), 3,
      ts_builtin_sym_end,
      anon_sym_define,
      anon_sym_variables,
  [1209] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_COLON,
    STATE(64), 1,
      aux_sym_parameter_repeat1,
  [1219] = 1,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      anon_sym_define,
      anon_sym_variables,
  [1225] = 2,
    ACTIONS(254), 1,
      sym__indent,
    STATE(124), 1,
      sym_block,
  [1232] = 2,
    ACTIONS(254), 1,
      sym__indent,
    STATE(109), 1,
      sym_block,
  [1239] = 2,
    ACTIONS(254), 1,
      sym__indent,
    STATE(117), 1,
      sym_block,
  [1246] = 1,
    ACTIONS(86), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1251] = 1,
    ACTIONS(256), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1256] = 1,
    ACTIONS(258), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1261] = 1,
    ACTIONS(193), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1266] = 1,
    ACTIONS(260), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1271] = 1,
    ACTIONS(262), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1276] = 1,
    ACTIONS(264), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1281] = 1,
    ACTIONS(266), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1286] = 2,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym_parameters,
  [1293] = 1,
    ACTIONS(270), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1298] = 1,
    ACTIONS(272), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1303] = 1,
    ACTIONS(274), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1308] = 1,
    ACTIONS(276), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1313] = 1,
    ACTIONS(278), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1318] = 2,
    ACTIONS(254), 1,
      sym__indent,
    STATE(46), 1,
      sym_block,
  [1325] = 1,
    ACTIONS(280), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1330] = 1,
    ACTIONS(282), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1335] = 2,
    ACTIONS(254), 1,
      sym__indent,
    STATE(114), 1,
      sym_block,
  [1342] = 1,
    ACTIONS(284), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1347] = 1,
    ACTIONS(286), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1352] = 1,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1357] = 1,
    ACTIONS(288), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1362] = 1,
    ACTIONS(290), 2,
      sym__newline,
      aux_sym_comment_token1,
  [1367] = 1,
    ACTIONS(292), 1,
      sym_identifier,
  [1371] = 1,
    ACTIONS(294), 1,
      sym_identifier,
  [1375] = 1,
    ACTIONS(296), 1,
      anon_sym_to,
  [1379] = 1,
    ACTIONS(298), 1,
      sym_float,
  [1383] = 1,
    ACTIONS(119), 1,
      sym__indent,
  [1387] = 1,
    ACTIONS(300), 1,
      sym_identifier,
  [1391] = 1,
    ACTIONS(302), 1,
      sym__newline,
  [1395] = 1,
    ACTIONS(304), 1,
      sym_integer,
  [1399] = 1,
    ACTIONS(306), 1,
      anon_sym_EQ,
  [1403] = 1,
    ACTIONS(308), 1,
      sym_identifier,
  [1407] = 1,
    ACTIONS(310), 1,
      sym_integer,
  [1411] = 1,
    ACTIONS(312), 1,
      anon_sym_from,
  [1415] = 1,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
  [1419] = 1,
    ACTIONS(316), 1,
      anon_sym_from,
  [1423] = 1,
    ACTIONS(318), 1,
      sym_integer,
  [1427] = 1,
    ACTIONS(320), 1,
      sym_identifier,
  [1431] = 1,
    ACTIONS(322), 1,
      sym_integer,
  [1435] = 1,
    ACTIONS(324), 1,
      anon_sym_of,
  [1439] = 1,
    ACTIONS(326), 1,
      anon_sym_to,
  [1443] = 1,
    ACTIONS(328), 1,
      sym_identifier,
  [1447] = 1,
    ACTIONS(330), 1,
      anon_sym_to,
  [1451] = 1,
    ACTIONS(332), 1,
      sym_identifier,
  [1455] = 1,
    ACTIONS(334), 1,
      anon_sym_to,
  [1459] = 1,
    ACTIONS(336), 1,
      anon_sym_EQ,
  [1463] = 1,
    ACTIONS(338), 1,
      sym_integer,
  [1467] = 1,
    ACTIONS(340), 1,
      sym__newline,
  [1471] = 1,
    ACTIONS(342), 1,
      anon_sym_of,
  [1475] = 1,
    ACTIONS(344), 1,
      sym_identifier,
  [1479] = 1,
    ACTIONS(346), 1,
      anon_sym_until,
  [1483] = 1,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
  [1487] = 1,
    ACTIONS(350), 1,
      sym__newline,
  [1491] = 1,
    ACTIONS(352), 1,
      sym_identifier,
  [1495] = 1,
    ACTIONS(354), 1,
      sym_identifier,
  [1499] = 1,
    ACTIONS(356), 1,
      sym_integer,
  [1503] = 1,
    ACTIONS(310), 1,
      sym_float,
  [1507] = 1,
    ACTIONS(358), 1,
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
  [SMALL_STATE(9)] = 235,
  [SMALL_STATE(10)] = 256,
  [SMALL_STATE(11)] = 277,
  [SMALL_STATE(12)] = 295,
  [SMALL_STATE(13)] = 313,
  [SMALL_STATE(14)] = 331,
  [SMALL_STATE(15)] = 349,
  [SMALL_STATE(16)] = 367,
  [SMALL_STATE(17)] = 385,
  [SMALL_STATE(18)] = 401,
  [SMALL_STATE(19)] = 417,
  [SMALL_STATE(20)] = 435,
  [SMALL_STATE(21)] = 451,
  [SMALL_STATE(22)] = 467,
  [SMALL_STATE(23)] = 483,
  [SMALL_STATE(24)] = 499,
  [SMALL_STATE(25)] = 517,
  [SMALL_STATE(26)] = 535,
  [SMALL_STATE(27)] = 546,
  [SMALL_STATE(28)] = 557,
  [SMALL_STATE(29)] = 570,
  [SMALL_STATE(30)] = 585,
  [SMALL_STATE(31)] = 600,
  [SMALL_STATE(32)] = 613,
  [SMALL_STATE(33)] = 632,
  [SMALL_STATE(34)] = 645,
  [SMALL_STATE(35)] = 660,
  [SMALL_STATE(36)] = 675,
  [SMALL_STATE(37)] = 685,
  [SMALL_STATE(38)] = 699,
  [SMALL_STATE(39)] = 707,
  [SMALL_STATE(40)] = 721,
  [SMALL_STATE(41)] = 733,
  [SMALL_STATE(42)] = 743,
  [SMALL_STATE(43)] = 751,
  [SMALL_STATE(44)] = 759,
  [SMALL_STATE(45)] = 766,
  [SMALL_STATE(46)] = 777,
  [SMALL_STATE(47)] = 784,
  [SMALL_STATE(48)] = 795,
  [SMALL_STATE(49)] = 806,
  [SMALL_STATE(50)] = 813,
  [SMALL_STATE(51)] = 826,
  [SMALL_STATE(52)] = 833,
  [SMALL_STATE(53)] = 844,
  [SMALL_STATE(54)] = 855,
  [SMALL_STATE(55)] = 862,
  [SMALL_STATE(56)] = 873,
  [SMALL_STATE(57)] = 884,
  [SMALL_STATE(58)] = 891,
  [SMALL_STATE(59)] = 901,
  [SMALL_STATE(60)] = 911,
  [SMALL_STATE(61)] = 921,
  [SMALL_STATE(62)] = 931,
  [SMALL_STATE(63)] = 941,
  [SMALL_STATE(64)] = 951,
  [SMALL_STATE(65)] = 961,
  [SMALL_STATE(66)] = 971,
  [SMALL_STATE(67)] = 981,
  [SMALL_STATE(68)] = 987,
  [SMALL_STATE(69)] = 993,
  [SMALL_STATE(70)] = 1003,
  [SMALL_STATE(71)] = 1013,
  [SMALL_STATE(72)] = 1023,
  [SMALL_STATE(73)] = 1033,
  [SMALL_STATE(74)] = 1039,
  [SMALL_STATE(75)] = 1045,
  [SMALL_STATE(76)] = 1055,
  [SMALL_STATE(77)] = 1061,
  [SMALL_STATE(78)] = 1067,
  [SMALL_STATE(79)] = 1073,
  [SMALL_STATE(80)] = 1083,
  [SMALL_STATE(81)] = 1093,
  [SMALL_STATE(82)] = 1099,
  [SMALL_STATE(83)] = 1109,
  [SMALL_STATE(84)] = 1115,
  [SMALL_STATE(85)] = 1123,
  [SMALL_STATE(86)] = 1129,
  [SMALL_STATE(87)] = 1137,
  [SMALL_STATE(88)] = 1147,
  [SMALL_STATE(89)] = 1153,
  [SMALL_STATE(90)] = 1163,
  [SMALL_STATE(91)] = 1169,
  [SMALL_STATE(92)] = 1175,
  [SMALL_STATE(93)] = 1181,
  [SMALL_STATE(94)] = 1187,
  [SMALL_STATE(95)] = 1197,
  [SMALL_STATE(96)] = 1203,
  [SMALL_STATE(97)] = 1209,
  [SMALL_STATE(98)] = 1219,
  [SMALL_STATE(99)] = 1225,
  [SMALL_STATE(100)] = 1232,
  [SMALL_STATE(101)] = 1239,
  [SMALL_STATE(102)] = 1246,
  [SMALL_STATE(103)] = 1251,
  [SMALL_STATE(104)] = 1256,
  [SMALL_STATE(105)] = 1261,
  [SMALL_STATE(106)] = 1266,
  [SMALL_STATE(107)] = 1271,
  [SMALL_STATE(108)] = 1276,
  [SMALL_STATE(109)] = 1281,
  [SMALL_STATE(110)] = 1286,
  [SMALL_STATE(111)] = 1293,
  [SMALL_STATE(112)] = 1298,
  [SMALL_STATE(113)] = 1303,
  [SMALL_STATE(114)] = 1308,
  [SMALL_STATE(115)] = 1313,
  [SMALL_STATE(116)] = 1318,
  [SMALL_STATE(117)] = 1325,
  [SMALL_STATE(118)] = 1330,
  [SMALL_STATE(119)] = 1335,
  [SMALL_STATE(120)] = 1342,
  [SMALL_STATE(121)] = 1347,
  [SMALL_STATE(122)] = 1352,
  [SMALL_STATE(123)] = 1357,
  [SMALL_STATE(124)] = 1362,
  [SMALL_STATE(125)] = 1367,
  [SMALL_STATE(126)] = 1371,
  [SMALL_STATE(127)] = 1375,
  [SMALL_STATE(128)] = 1379,
  [SMALL_STATE(129)] = 1383,
  [SMALL_STATE(130)] = 1387,
  [SMALL_STATE(131)] = 1391,
  [SMALL_STATE(132)] = 1395,
  [SMALL_STATE(133)] = 1399,
  [SMALL_STATE(134)] = 1403,
  [SMALL_STATE(135)] = 1407,
  [SMALL_STATE(136)] = 1411,
  [SMALL_STATE(137)] = 1415,
  [SMALL_STATE(138)] = 1419,
  [SMALL_STATE(139)] = 1423,
  [SMALL_STATE(140)] = 1427,
  [SMALL_STATE(141)] = 1431,
  [SMALL_STATE(142)] = 1435,
  [SMALL_STATE(143)] = 1439,
  [SMALL_STATE(144)] = 1443,
  [SMALL_STATE(145)] = 1447,
  [SMALL_STATE(146)] = 1451,
  [SMALL_STATE(147)] = 1455,
  [SMALL_STATE(148)] = 1459,
  [SMALL_STATE(149)] = 1463,
  [SMALL_STATE(150)] = 1467,
  [SMALL_STATE(151)] = 1471,
  [SMALL_STATE(152)] = 1475,
  [SMALL_STATE(153)] = 1479,
  [SMALL_STATE(154)] = 1483,
  [SMALL_STATE(155)] = 1487,
  [SMALL_STATE(156)] = 1491,
  [SMALL_STATE(157)] = 1495,
  [SMALL_STATE(158)] = 1499,
  [SMALL_STATE(159)] = 1503,
  [SMALL_STATE(160)] = 1507,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(153),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(152),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 1, .production_id = 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2), SHIFT_REPEAT(20),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_then_statement_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(157),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(156),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(160),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2), SHIFT_REPEAT(8),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 5),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2), SHIFT_REPEAT(125),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(130),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(50),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 6),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(146),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_argument, 1), REDUCE(sym_primary_expression, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_statement, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delclaration_array_type, 7),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 6),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [348] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
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
