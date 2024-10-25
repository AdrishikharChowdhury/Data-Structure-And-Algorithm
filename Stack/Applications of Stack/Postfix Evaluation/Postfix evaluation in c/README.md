# Postfix Expression Evaluator in C

## Overview
This C program implements a postfix expression evaluator that can handle multi-digit numbers and basic arithmetic operations. It uses a stack-based approach to evaluate postfix expressions where operators follow their operands.

## Features
- Multi-digit number support
- Basic arithmetic operations (+, -, *, /, ^)
- Dynamic memory allocation for stack
- Input validation and error handling
- Stack overflow and underflow protection

## Functions

### `main()`
- Entry point of the program
- Takes number of terms as input
- Calls postfixeval() and displays result

### `postfixeval(int n)`
- Main evaluation function
- Parameters:
  - `n`: Number of terms in the expression
- Returns:
  - Result of evaluation
  - 0 if expression is invalid
- Handles:
  - Stack operations
  - Operator evaluation
  - Input processing

### `push(int *stack, int a, int *top, int n)`
- Pushes elements onto the stack
- Parameters:
  - `stack`: Pointer to stack array
  - `a`: Value to push
  - `top`: Pointer to stack top
  - `n`: Stack size
- Returns:
  - Updated stack pointer

### `pop(int *stack, int *top)`
- Removes and returns top element from stack
- Parameters:
  - `stack`: Pointer to stack array
  - `top`: Pointer to stack top
- Returns:
  - Popped value
  - 0 if stack is empty

### `digicon(char *ip)`
- Converts string of digits to integer
- Parameters:
  - `ip`: String containing digits
- Returns:
  - Integer value of the string

## Usage

1. Compile the program:
```bash
gcc postfix_eval.c -o postfix_eval -lm
```

2. Run the program:
```bash
./postfix_eval
```

3. Enter the number of terms and follow prompts:
```
Enter the no. of terms for the postfix evaluation: 5
Enter term 1: 12
Enter term 2: 3
Enter term 3: 4
Enter term 4: *
Enter term 5: +
```

## Input Format
- Numbers: Enter digits directly (e.g., "123")
- Operators: Enter single character (+, -, *, /, ^)

## Example Evaluations

### Simple Expression
```
Input: 12 3 +
Terms: 3
Result: 15
```

### Complex Expression
```
Input: 15 2 3 * +
Terms: 4
Result: 21 (15 + (2 * 3))
```

## Error Handling
The program handles various errors:
1. Stack overflow
2. Stack underflow
3. Unknown operators
4. Invalid expressions
5. Memory allocation failures

## Limitations
1. Integer arithmetic only
2. No decimal number support
3. Fixed max length for input terms (9 digits)
4. Basic operator set
5. No parentheses handling (not needed for postfix)

## Technical Details
- Memory: Dynamic allocation using malloc()
- Stack size: n+1 (where n is number of terms)
- Number conversion: ASCII to integer
- Math operations: Basic arithmetic + power function

## Memory Management
- Stack is dynamically allocated
- Size determined by number of terms
- Memory allocated: (n+1) * sizeof(int)
- Note: Current implementation has a memory leak (stack is not freed)

## Improvements Needed
1. Free allocated memory
2. Add decimal number support
3. Extend operator set
4. Add input validation for numbers
5. Implement error reporting
6. Add support for larger numbers

## Prerequisites
- C compiler (GCC recommended)
- Math library (-lm flag required for compilation)
- Standard C libraries:
  - stdio.h
  - stdlib.h
  - math.h
  - ctype.h
  - string.h

## Building
```bash
gcc -Wall -Wextra postfix_eval.c -o postfix_eval -lm
```

## Testing Recommendations
1. Test with single-digit numbers
2. Test with multi-digit numbers
3. Test all operators
4. Test error conditions:
   - Stack overflow
   - Stack underflow
   - Invalid operators
   - Insufficient operands
5. Test boundary conditions:
   - Maximum number of terms
   - Maximum number size
   - Empty input
