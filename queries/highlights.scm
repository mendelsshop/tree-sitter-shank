
(identifier) @variable
((identifier) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]*$"))
(type) @type
(basis_type) @type.builtin
(comment) @comment

(call_statement function: (identifier) @function)

(function_definition name: (identifier) @function)

(record_item name: (identifier)) @property
(variable_access field: (identifier) @property)

(parameter name: (identifier) @variable.parameter)



(integer) @constant.builtin
(true) @constant.builtin
(false) @constant.builtin
(true) @constant.builtin
(real) @constant.builtin

(character) @string
(string) @string


"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket

"." @punctuation.delimiter
"," @punctuation.delimiter
":" @punctuation.delimiter
";" @punctuation.delimiter

"define" @keyword
"enum" @keyword
"record" @keyword
"module" @keyword
"var" @keyword
"variables" @keyword

"constants" @keyword
"for" @keyword
"if" @keyword
"then" @keyword
"else" @keyword
"elsif" @keyword
"to" @keyword
"from" @keyword
"while" @keyword
"repeat" @keyword
"until" @keyword
"export" @keyword
"import" @keyword
"test" @keyword
"generic" @keyword
(refersTo) @keyword

":=" @operator
"+" @operator
"-" @operator
"*" @operator
"/" @operator
"mod" @operator ; TODO: is mod and other infix operators, operators or keywords

"and" @operator
"or" @operator
"not" @operator
"<=" @operator
">=" @operator
"=" @operator
"<>" @operator
