# Infix to Postfix Expression Converter in C

This repository contains a C program that converts an infix mathematical expression (e.g., `a+b*c`) to a postfix expression (also known as Reverse Polish Notation, e.g., `abc*+`). The conversion is done using a **stack-based approach**, ensuring that the operators follow the correct precedence and associativity rules.

## Features

- Converts infix expressions (standard arithmetic notation) to postfix expressions.
- Handles the following operators:
  - Addition (`+`)
  - Subtraction (`-`)
  - Multiplication (`*`)
  - Division (`/`)
  - Exponentiation (`^`)
- Supports parentheses `(` and `)` to control operator precedence.
- Implements a simple **stack** to manage operators and ensure proper precedence.

## How It Works

1. **Operands** (variables, numbers) are added directly to the output (postfix expression).
2. **Operators** are pushed onto a stack, ensuring higher-precedence operators are applied first.
3. **Parentheses** are used to override operator precedence:
   - When a `)` is encountered, the stack is popped until the corresponding `(` is found.
4. At the end, any remaining operators are popped from the stack to form the final postfix expression.

## Prerequisites

You need to have a C compiler (e.g., GCC) to compile and run the program.

## Compilation

To compile the program, run the following command:
```bash
gcc -o infix_to_postfix infix_to_postfix.c
```

## Usage

1. Run the compiled program:
   ```bash
   ./infix_to_postfix
   ```
2. Enter the number of characters in your infix expression (including operators and parentheses):
   ```
   Enter the no. of terms: 7
   ```
3. Enter your infix expression:
   ```
   Enter the infix expression: a+b*c
   ```
4. The program will display the corresponding postfix expression:
   ```
   The postfix expression is: abc*+
   ```

### Example

**Input (Infix):**
```
a+b*(c^d-e)^(f+g*h)-i
```

**Output (Postfix):**
```
abcd^e-fgh*+^*+i-
```

## Code Structure

- **`intopost()`**: Main function that converts an infix expression to postfix using a stack for operator precedence management.
- **`push()`**: Adds an operator or parenthesis to the stack.
- **`pop()`**: Removes and returns the top element from the stack.
- **`precedence()`**: Returns the precedence level of an operator. Higher value indicates higher precedence.
- **`isOperator()`**: Checks if a character is a valid operator (`+`, `-`, `*`, `/`, `^`).

## Applications

- **Expression Evaluation**: Postfix expressions are easier for computers to evaluate, making this conversion useful for expression parsers.
- **Compilers**: Infix to postfix conversion is often used in the lexical analysis phase of compilers for evaluating arithmetic expressions.
- **Stack-based Algorithms**: Postfix notation is widely used in stack-based calculation algorithms.

## Example Walkthrough

Consider converting the following infix expression to postfix:

**Infix Expression:**
```
a+b*c
```

1. **Step 1**: Push `a` to the postfix result (since it's an operand).
2. **Step 2**: Push `+` to the stack (operator).
3. **Step 3**: Push `b` to the postfix result (operand).
4. **Step 4**: Push `*` to the stack (operator with higher precedence than `+`).
5. **Step 5**: Push `c` to the postfix result (operand).
6. **Step 6**: Pop `*` and `+` from the stack in the correct order to the postfix result.

**Postfix Expression:**
```
abc*+
```

## Limitations

- **No Error Handling**: This implementation assumes the input expression is valid. It does not check for mismatched parentheses or invalid input.
- **Single Character Operands**: Operands are assumed to be single characters (e.g., `a`, `b`, `c`). If you need to support multi-digit numbers or multi-character variables, you'll need to extend the code.
- **No Floating Point Numbers**: The current implementation works for characters and basic operators. Supporting numbers would require additional logic.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
```

This `README.md` includes an overview, installation steps, usage instructions, example inputs and outputs, code structure, and application context. It also highlights the program's limitations and the features it supports.