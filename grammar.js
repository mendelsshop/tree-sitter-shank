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

  extras: $ => [
    $.comment,
    /[\s\f\uFEFF\u2060\u200B]|\r?\n/,
  ],

  conflicts: $ => [
    [$.argument, $.primary_expression],

  ],


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
    '}',
    // 'except',
  ],



  rules: {
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
    record_item: $ => seq(field("name", $.identifier), ":", field("type", $.type), $._end_line),
    record: $ => seq("record", field("name", $.identifier), optional($.generics), $._indent, repeat1(field("field", $.record_item)), $._dedent),
    export: $ => seq("export", commaSep1(field("name", $.identifier)), $._end_line),
    imports: $ => seq("[", commaSep1(field("name", $.identifier)), "]"),
    import: $ => seq("import", seq(field("module", $.identifier), optional(field("imports", $.imports))), $._end_line),
    module: $ => seq("module", field("name", $.identifier)),
    function_definition: $ => seq(
      'define',
      $._function_header,
      repeat(choice($.constant, $.variable)),
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
      repeat(choice($.constant, $.variable)),
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
    ),

    variable: $ => seq(
      "variables",
      commaSep1(field("name", $.identifier)),
      ":",
      field("type", $.type),
      $._end_line
    ),

    primary_expression: $ => choice(
      $.binary_operator,
      $.variable_access,
      $.string,
      $.character,
      $.integer,
      $.real,
      $.true,
      $.false,
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
      /-?[0-9]+_?/,

    ),

    real: _ => {
      const digits = /[0-9]+_?/;

      // TODO: allow reals that have number on one side of decimal
      return token(seq(/-?/,
        seq(/-?/, digits, '.', digits,),)
      );
    },
    // TODO: escape sequences
    string: _ => token(seq('\"', repeat(/[^\\"]/), '\"')),
    character: _ => token(seq('\'', /[^\\']/, '\'')),

    basis_type: $ => choice(seq("integer", optional(type_constraint($.integer))), seq("real", optional(type_constraint($.real))), seq("string", optional(type_constraint($.integer))), seq("character", optional(type_constraint($.integer))), "boolean"),
    array_type: $ => seq("array", type_constraint($.integer), "of", $.type),
    // TODO: do we want simple array types allowed to be used as part of generics without parenthesis
    _generic: $ => field("generic", choice($.basis_type, alias($.simple_reference_type, $.reference_type), alias($.simple_custom_type, $.custom_type), paren($.type))),
    simple_custom_type: $ => $._custom_type,
    simple_reference_type: $ => seq(field("reference", $.refersTo), alias($.simple_custom_type, $.custom_type)),
    _generics: $ => commaSep1($._generic),
    _type_name: $ => field("type_name", $.identifier),
    _custom_type: $ => $._type_name,
    _custom_generic_type: $ => seq($._type_name, $._generics),
    refersTo: _ => 'refersTo',
    custom_type: $ => choice($._custom_generic_type, $._custom_type),
    reference_type: $ => seq(field("reference", $.refersTo), choice($.custom_type, $.array_type)),
    type: $ => choice($.basis_type, $.array_type, $.custom_type, $.reference_type),
    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => seq(token(
      /\{[^}]*(?:[^}][^}]*)*\}[^\S\n]*/), $._newline
    ),
    _end_line: $ => $._newline,
    identifier: _ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
    array_access: $ => seq($.identifier, "[", $.expression, "]"),
    record_access: $ => seq($.identifier, ".", $.identifier),
    variable_access: $ => seq($.identifier, repeat(choice(field("field_acces", seq(".", field("field", $.identifier))), field("array_access", seq("[", field("index", $.expression), "]"))))),

    true: _ => 'true',
    false: _ => 'false',
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
  return seq("from", field("from", constraint_type), "to", field("to", constraint_type));
}

function paren(item) {
  return seq("(", item, ")")
}
