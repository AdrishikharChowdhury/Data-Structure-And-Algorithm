# Infix to Postfix Expression Converter

This program converts an infix expression (standard arithmetic notation) into its equivalent postfix expression (Reverse Polish notation) using a stack-based algorithm.

## Features

- **Input**: Accepts a mathematical expression in infix notation containing operands, operators, and parentheses.
- **Output**: Converts the infix expression to a postfix expression.
- **Operators Supported**: 
  - Addition (`+`)
  - Subtraction (`-`)
  - Multiplication (`*`)
  - Division (`/`)
  - Exponentiation (`^`)
- **Parentheses Handling**: The program properly handles parentheses to ensure correct operator precedence.

## How It Works

1. The program first appends a closing parenthesis `)` to the infix expression to mark its end and pushes an opening parenthesis `(` onto the stack to assist in operator precedence handling.
2. It then scans the infix expression:
   - **Operands** (letters or digits) are directly added to the postfix output.
   - **Operators** are pushed onto the stack. When an operator is encountered, operators with higher or equal precedence already on the stack are popped to the postfix output.
   - **Parentheses**: When a closing parenthesis `)` is encountered, operators are popped from the stack to the postfix expression until the corresponding opening parenthesis `(` is found.
3. After reading the entire expression, any remaining operators are popped from the stack and added to the postfix expression.

## Prerequisites

To compile and run the code, you need:
- A C compiler (e.g., GCC)

## Compilation

To compile the program, use the following command:
```bash
gcc -o intopostfix infixtopostfix.c
```

## Usage

1. Run the compiled program:
   ```bash
   ./intopostfix
   ```
2. Enter the number of characters in the infix expression:
   ```
   Enter the no. of terms: 7
   ```
3. Enter the infix expression:
   ```
   Enter the infix expression: a+b*c
   ```
4. The program will display the postfix equivalent:
   ```
   The postfix expression is: abc*+
   ```

### Example

**Input:**
```
a+b*(c^d-e)^(f+g*h)-i
```

**Output:**
```
abcd^e-fgh*+^*+i-
```

## Functions

### `char *intopost(char *s, int n)`
Converts an infix expression `s` of length `n` to postfix. Returns a pointer to the postfix expression.

### `char *push(char *stack, char a, int *top, int n)`
Pushes an operator or parenthesis onto the stack.

### `char pop(char *stack, int *top)`
Pops an operator or parenthesis from the stack.

### `int precedence(char op)`
Returns the precedence of the operator. Higher value means higher precedence.

### `int isOperator(char c)`
Returns whether a character is an operator (`+`, `-`, `*`, `/`, `^`).

## Stack Handling

The program uses a dynamic array to simulate a stack for operators and parentheses. Functions such as `push` and `pop` handle stack overflow and underflow scenarios.

## Limitations

- The program does not handle spaces in the input expression.
- Only single-letter or single-digit operands are supported.
- The input expression should be valid; no syntax checking is performed.

## License

This code is open-source and licensed under the MIT License.
```

This `README.md` covers an overview of the program, how it works, and how to use and compile it, along with a basic description of the key functions involved.