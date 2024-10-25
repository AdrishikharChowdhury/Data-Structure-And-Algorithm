# Postfix Expression Evaluation

## Overview
Postfix notation (also known as Reverse Polish Notation - RPN) is a mathematical notation where operators follow their operands. This notation eliminates the need for parentheses and simplifies expression evaluation using a stack-based approach.

## How Postfix Notation Works

### Basic Concept
In postfix notation, operators are written after their operands. For example:
- Infix: `3 + 4` → Postfix: `3 4 +`
- Infix: `(5 + 6) * 2` → Postfix: `5 6 + 2 *`

### Evaluation Rules
1. Read the expression from left to right
2. When encountering an operand, push it onto the stack
3. When encountering an operator:
   - Pop the required number of operands from the stack
   - Apply the operator to these operands
   - Push the result back onto the stack
4. The final result is the value remaining on the stack

### Examples

#### Simple Expression
```
Expression: 5 3 +
Stack operations:
1. Push 5: [5]
2. Push 3: [5, 3]
3. '+': Pop 3, Pop 5, Push (5 + 3) = [8]
Result: 8
```

#### Complex Expression
```
Expression: 4 5 2 * +
Stack operations:
1. Push 4: [4]
2. Push 5: [4, 5]
3. Push 2: [4, 5, 2]
4. '*': Pop 2, Pop 5, Push (5 * 2) = [4, 10]
5. '+': Pop 10, Pop 4, Push (4 + 10) = [14]
Result: 14
```

## Advantages
- No need for parentheses
- No operator precedence rules needed
- Easier to evaluate programmatically
- Fewer traversals required compared to infix evaluation
- More efficient for computer processing

## Common Operators
- Arithmetic: `+`, `-`, `*`, `/`
- Exponentiation: `^`
- Additional operators can include:
  - Modulus: `%`
  - Logical operators: `AND`, `OR`, `NOT`
  - Comparison operators: `>`, `<`, `=`

## Error Handling
Common errors to check for:
1. Insufficient operands for an operator
2. Too many operands
3. Division by zero
4. Invalid operators
5. Stack overflow/underflow

## Implementation Tips
1. Use a stack data structure
2. Validate input expressions
3. Handle edge cases:
   - Empty expressions
   - Single number expressions
   - Invalid character handling
4. Consider type conversion for different numeric types

## Applications
1. Scientific calculators
2. Expression evaluation in compilers
3. Stack-based programming languages
4. Mathematical software
5. Spreadsheet formula evaluation

## Performance
- Time Complexity: O(n) where n is the number of tokens
- Space Complexity: O(m) where m is the maximum stack size needed

## Common Conversions
### Infix to Postfix Examples
- `a + b` → `a b +`
- `a + b * c` → `a b c * +`
- `(a + b) * c` → `a b + c *`
- `a + (b * c)` → `a b c * +`
- `(a + b) * (c + d)` → `a b + c d + *`

## Testing
Test cases should include:
1. Basic arithmetic operations
2. Complex expressions with multiple operators
3. Edge cases:
   - Single numbers
   - Empty expressions
   - Maximum/minimum values
4. Error conditions:
   - Division by zero
   - Invalid operators
   - Insufficient operands

## Resources
- [Wikipedia - Reverse Polish Notation](https://en.wikipedia.org/wiki/Reverse_Polish_notation)
- [Introduction to Algorithms](https://en.wikipedia.org/wiki/Introduction_to_Algorithms) (CLRS) - Stack-based algorithms
- Historical reference: [Jan Łukasiewicz](https://en.wikipedia.org/wiki/Jan_%C5%81ukasiewicz) - Creator of Polish notation
