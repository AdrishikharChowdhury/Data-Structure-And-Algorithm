# Stack Applications

This repository demonstrates various applications of the stack data structure, including:

1. Infix to Postfix Conversion
2. Postfix to Infix Conversion
3. Tower of Hanoi

## Table of Contents

- [Introduction](#introduction)
- [Applications](#applications)
  - [Infix to Postfix Conversion](#infix-to-postfix-conversion)
  - [Postfix to Infix Conversion](#postfix-to-infix-conversion)
  - [Tower of Hanoi](#tower-of-hanoi)
- [Implementation](#implementation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

A stack is a fundamental data structure that follows the Last-In-First-Out (LIFO) principle. It has various applications in computer science and programming, including expression evaluation, backtracking algorithms, and solving recursive problems.

## Applications

### Infix to Postfix Conversion

Infix notation is the common method of writing arithmetic expressions (e.g., `a + b * c`). Postfix notation (also known as Reverse Polish Notation) is an alternative way of writing expressions where the operators follow their operands (e.g., `a b c * +`).

Converting infix to postfix is useful because:
- It eliminates the need for parentheses
- It simplifies expression evaluation
- It's easier for computers to parse and evaluate

#### Algorithm Overview:
1. Initialize an empty stack and an empty output string
2. Scan the infix expression from left to right
3. If the scanned character is an operand, add it to the output
4. If it's an operator, pop operators from the stack and add to output based on precedence
5. If it's an opening parenthesis, push it to the stack
6. If it's a closing parenthesis, pop operators from the stack and add to output until an opening parenthesis is encountered

### Postfix to Infix Conversion

Converting postfix expressions back to infix can be useful for human readability or when interfacing with systems that require infix notation.

#### Algorithm Overview:
1. Initialize an empty stack
2. Scan the postfix expression from left to right
3. If the scanned character is an operand, push it to the stack
4. If it's an operator, pop two operands from the stack, create an infix expression, and push it back to the stack
5. The final item in the stack will be the complete infix expression

### Tower of Hanoi

The Tower of Hanoi is a classic problem in computer science and mathematics. It consists of three rods and a number of disks of different sizes which can slide onto any rod. The puzzle starts with the disks in a neat stack in ascending order of size on one rod, the smallest at the top. The objective is to move the entire stack to another rod, obeying the following rules:

1. Only one disk can be moved at a time
2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack or on an empty rod
3. No larger disk may be placed on top of a smaller disk

A stack can be used to implement a recursive solution to this problem.

#### Algorithm Overview:
1. Create a stack to keep track of moves
2. Push the initial state (number of disks, source rod, auxiliary rod, destination rod) onto the stack
3. While the stack is not empty:
   - Pop a state from the stack
   - If the number of disks is 1, make the move and continue
   - Otherwise, push three new states onto the stack:
     a. Move n-1 disks from source to auxiliary
     b. Move 1 disk from source to destination
     c. Move n-1 disks from auxiliary to destination

## Implementation

This repository contains implementations of these stack applications in various programming languages. Each application is organized in its own directory with language-specific implementations.

## Usage

To use these implementations:

1. Clone the repository
2. Navigate to the specific application and language directory
3. Follow the instructions in the individual README files for compilation and execution

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.
