/**
 * @file Shank grammar for tree-sitter
 * @author  mendelsshop <mendelsshop@gmail.com>
 * @license MIT
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
// @ts-check



const PREC = {
  typed_parameter: -1,
  conditional: -1,

  parenthesized_expression: 1,
  or: 10,
  and: 11,
  not: 12,
  compare: 13,
  plus: 18,
  times: 19,
  unary: 20,
  power: 21,
  call: 22,
};


module.exports = grammar({
  name: 'shank',

  // extras: $ => [
  //   $.comment,
  //   /[\s\f\uFEFF\u2060\u200B]|\r?\n/,
  //   $.line_continuation,
  // ],

  conflicts: $ => [
    [$.argument, $.primary_expression],
    [$._custom_generic_type, $._custom_type],
    // [$.record_item, $.advanced_type]
    // [$.record_item, $.advanced_type]
    // [$.advanced_type, $.record_item,]
    //   [$.primary_expression, $.pattern],
    //   [$.primary_expression, $.list_splat_pattern],
    //   [$.tuple, $.tuple_pattern],
    //   [$.list, $.list_pattern],
    //   [$.with_item, $._collection_elements],
    //   [$.named_expression, $.as_pattern],
    //   [$.print_statement, $.primary_expression],
    //   [$.type_alias_statement, $.primary_expression],
  ],

  // supertypes: $ => [
  //   $._simple_statement,
  //   $._compound_statement,
  //   $.expression,
  //   $.primary_expression,
  //   $.pattern,
  //   $.parameter,
  // ],

  externals: $ => [
    $._newline,
    $._indent,
    $._dedent,
    // $.string_start,
    // $._string_content,
    // $.escape_interpolation,
    // $.string_end,

    // Mark comments as external tokens so that the external scanner is always
    // invoked, even if no external token is expected. This allows for better
    // error recovery, because the external scanner can maintain the overall
    // structure by returning dedent tokens whenever a dedent occurs, even
    // if no dedent is expected.
    // $.comment,

    // Allow the external scanner to check for the validity of closing brackets
    // so that it can avoid returning dedent tokens between brackets.
    // ']',
    // ')',
    // '}',
    // 'except',
  ],

  inline: $ => [
    // $.comparison_operator
    //   $._simple_statement,
    //   $._compound_statement,
    //   $._suite,
    //   $._expressions,
    //   $._left_hand_side,
    //   $.keyword_identifier,
  ],



  // word: $ => $.identifier,

  rules: {
    // module: $ => repeat($._statement),

    // _statement: $ => choice(
    //   $._simple_statements,
    //   $._compound_statement,
    // ),

    // // Simple statements

    // _simple_statements: $ => seq(
    //   sep1($._simple_statement, SEMICOLON),
    //   optional(SEMICOLON),
    //   $._newline,
    // ),

    // _suite: $ => choice(
    //   alias($._simple_statements, $.block),
    //   seq($._indent, $.block),
    //   alias($._newline, $.block),
    // ),


    program: $ => seq(
      optional($.module),
      // a module is a list of vairables and functions intermixed
      repeat(choice(
        $.variable,
        $.constant,
        $.export,
        $.import,
        $.function_definition,
        $.enum,
        $.record,
        $.test,
      )
      )
    ),
    generics: $ => seq("generic", commaSep1(field("generic", $.identifier)), $._end_line),
    enum: $ => seq("enum", field("name", $.identifier), "=", "[", commaSep1(field("variant", $.identifier)), "]"),
    record_item: $ => seq(field("type", $.type), field("name", $.identifier), $._end_line),
    record: $ => seq("record", field("name", $.identifier), optional($.generics), $._indent, repeat1(field("field", $.record_item)), $._dedent),
    export: $ => seq("export", commaSep1(field("name", $.identifier)), $._end_line),
    imports: $ => seq("[", commaSep1(field("name", $.identifier)), "]"),
    import: $ => seq("import", seq(field("module", $.identifier), optional(field("imports", $.imports))), $._end_line),
    module: $ => seq("module", field("name", $.identifier)),
    function_definition: $ => seq(
      'define',
      $._function_header,
      field("variables", repeat($.variable)),
      field("constants", repeat($.constant)),
      $.block
    ),

    _function_header: $ => seq(
      field('name', $.identifier),
      field('parameters', $.parameters),
      choice($.generics, $._end_line),
    ),

    function_header: $ => $._function_header,
    test: $ => seq("test", field("name", $.identifier), "for",
      field("function", $.function_header),
      field("variables", repeat($.variable)),
      field("constants", repeat($.constant)),
      $.block
    ),
    parameters: $ => seq(
      '(',
      optional($._parameters),
      ')',
    ),

    call_statement: $ => seq(field("function", $.identifier), field("arguements", optional(commaSep1($.argument)))),
    assignment: $ => seq(field("left", $.variable_access), ":=", field("right", $.expression)),
    expression: $ => choice($.primary_expression,
      $.comparison_operator,
      $.not_operator,
      $.boolean_operator,
    ),
    _simple_statement: $ => seq(choice($.assignment, $.call_statement,), $._end_line),
    _compound_statement: $ => choice($.while_statement, $.for, $.if_then_statement, $.repeat_statement),
    repeat_statement: $ => seq("repeat", "until", field("condition", $.expression), field("body", $.block)),
    while_statement: $ => seq("while", field("condition", $.expression), field("body", $.block)),
    argument: $ => choice(seq(field("var", optional("var")), $.variable_access), $.expression),
    if_then_statement: $ => seq("if", field("condition", $.expression), "then", field("consequent", $.block), repeat(field("alternative", $.elsif)), optional(field("alternative", $.else))),
    elsif: $ => seq('elsif', field("condition", $.expression), 'then', field("consequent", $.block)),
    else: $ => seq('else', field("body", $.block)),

    range: $ => seq("from", field("start", $.integer), "to", field("end", $.integer)),
    for: $ => seq("for", field("control", $.identifier), field("range", $.range), $.block),

    constant: $ => seq("constants", commaSep1(seq(field("name", $.identifier), "=", field("value", $.primary_expression)))),
    block: $ => seq(
      $._indent,
      repeat(choice($._simple_statement, $._compound_statement)),
      $._dedent,
    ),


    _parameters: $ => seq(
      semicolonSep1($.parameter),
    ),

    var: _ => "var",
    parameter: $ => seq(
      optional($.var),
      field("name", commaSep1($.identifier)),
      ":",
      field("type", $.type),
      optional(field("default_value", seq("=", $.primary_expression))),
      // TODO: should this be optional
      $._end_line
    ),

    variable: $ => seq(
      "variables",
      commaSep1(field("name", $.identifier)),
      ":",
      field("type", $.declaration_type),
      $._end_line
    ),

    primary_expression: $ => choice(
      $.binary_operator,
      $.variable_access,
      //     $.keyword_identifier,
      $.string,
      $.character,
      $.integer,
      $.float,
      $.true,
      $.false,
      //     $.none,
      //     $.unary_operator,
      $.parenthesized_expression,
    ),

    not_operator: $ => prec(PREC.not, seq(
      'not',
      field('argument', $.expression),
    )),

    boolean_operator: $ => choice(
      prec.left(PREC.and, seq(
        field('left', $.expression),
        field('operator', 'and'),
        field('right', $.expression),
      )),
      prec.left(PREC.or, seq(
        field('left', $.expression),
        field('operator', 'or'),
        field('right', $.expression),
      )),
    ),

    binary_operator: $ => {
      const table = [
        [prec.left, '+', PREC.plus],
        [prec.left, '-', PREC.plus],
        [prec.left, '*', PREC.times],
        [prec.left, '/', PREC.times],
        [prec.left, 'mod', PREC.times],
      ];

      // @ts-ignore
      return choice(...table.map(([fn, operator, precedence]) => fn(precedence, seq(
        field('left', $.primary_expression),
        // @ts-ignore
        field('operator', operator),
        field('right', $.primary_expression),
      ))));
    },

    //   unary_operator: $ => prec(PREC.unary, seq(
    //     field('operator', choice('+', '-', '~')),
    //     field('argument', $.primary_expression),
    //   )),

    comparison_operator: $ => prec.left(PREC.compare, seq(
      $.primary_expression,
      repeat1(seq(
        field('operators',
          choice(
            '<',
            '<=',
            '=',
            '>=',
            '>',
            '<>',
          )),
        $.primary_expression,
      )),
    )),

    parenthesized_expression: $ => prec(PREC.parenthesized_expression, seq(
      '(',
      $.expression,
      ')',
    )),

    integer: _ => token(
      repeat1(/[0-9]+_?/),

    ),

    float: _ => {
      const digits = repeat1(/[0-9]+_?/);

      return token(
        seq(digits, '.', digits,),
      );
    },
    // TODO: escape sequences
    string: _ => token(seq('\"', repeat(/[^\\"]/), '\"')),
    character: _ => token(seq('\'', /[^\\']/, '\'')),

    basis_type: $ => choice(seq("integer", optional(type_constraint($.integer))), seq("real", optional(type_constraint($.float))), seq("string", optional(type_constraint($.integer)))),
    // basis_type: $ => choice("integer","real", "string"),
    array_type: $ => seq("array", "of", choice("string", "integer", "real", "boolean")),
    delclaration_array_type: $ => seq("array", type_constraint($.integer), "of", choice("string", "integer", "real", "boolean")),
    // TODO: dont have declaration and non declaration tpyes
    declaration_type: $ => choice($.basis_type, $.delclaration_array_type, $.custom_type),
    _generic: $ => field("generic", $.identifier),
    _generics: $ => commaSep1($._generic),
    _type_name: $ => field("type_name", $.identifier),
    _custom_type: $ => $._type_name,
    // TODO: should generics be able to be instiated with fancy custom types
    _custom_generic_type: $ => seq($._type_name, $._generics),
    refersTo: _ => 'refersTo',
    custom_type: $ => seq(optional(field("reference", $.refersTo)), choice($._custom_generic_type, $._custom_type)),
    type: $ => choice($.basis_type, $.array_type, $.custom_type),
    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => seq(token(
      /{[^}]*(?:[^}][^}]*)*}[^\S\n]*/), $._newline
    ),
    _end_line: $ => choice($.comment, $._newline),
    identifier: _ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
    array_access: $ => seq($.identifier, "[", $.expression, "]"),
    record_access: $ => seq($.identifier, ".", $.identifier),
    variable_access: $ => seq($.identifier, repeat(choice(field("field_acces", seq(".", field("field", $.identifier))), field("array_access", seq("[", field("index", $.expression), "]"))))),
    // variable_access: $ => choice($.array_access, $.record_access, $.identifier),

    true: _ => 'true',
    false: _ => 'false',
    // TODO: null
    // none: _ => 'None',

  },
});

module.exports.PREC = PREC;

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return sep1(rule, ',');
}

function semicolonSep1(rule) {
  return sep1(rule, ';');
}
/**
 * Creates a rule to match one or more occurrences of `rule` separated by `sep`
 *
 * @param {RuleOrLiteral} rule
 *
 * @param {RuleOrLiteral} separator
 *
 * @return {SeqRule}
 *
 */
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function type_constraint(constraint_type) {
  return seq("from", constraint_type, "to", constraint_type);
}
