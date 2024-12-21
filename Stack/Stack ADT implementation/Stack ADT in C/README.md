Here’s a **README.md** file for the **Stack ADT** implementation provided in the C code:

---

# Stack ADT Implementation in C

## Introduction

This C program implements a **Stack ADT (Abstract Data Type)** using dynamic memory allocation. A stack follows the **Last In, First Out (LIFO)** principle, where elements are added to and removed from the **top** of the stack. The program allows the user to perform common stack operations such as **Push**, **Pop**, **Peek**, and **Display**.

## Features

The program allows the following operations on the stack:
1. **Push**: Adds an element to the top of the stack.
2. **Pop**: Removes the element from the top of the stack.
3. **Peek**: Displays the element at the top of the stack without removing it.
4. **Display**: Shows all the elements currently in the stack.
5. **Exit**: Exits the program.

## Program Description

1. **Dynamic Memory Allocation**: The stack's size is dynamically allocated based on the user's input. This allows flexibility in choosing the size of the stack during runtime.
2. **Operations**:
   - **Push**: The program adds elements to the stack, checking whether the stack is full before doing so.
   - **Pop**: It removes elements from the top, ensuring the stack isn't empty.
   - **Peek**: Displays the top element without modifying the stack.
   - **Display**: Shows all elements in the stack from top to bottom.
3. **User Interface**: The program uses a **menu-driven interface** where the user can select an operation to perform.

## How to Use

### Steps to run the program:
1. **Compile** the program using a C compiler.
   ```bash
   gcc stack.c -o stack
   ```
2. **Run** the program:
   ```bash
   ./stack
   ```
3. The program will prompt you to enter the **size** of the stack.
4. Then, it will show the menu with the following options:
   - **1. Push**: Add an element to the stack.
   - **2. Pop**: Remove the top element from the stack.
   - **3. Peek**: View the top element.
   - **4. Display**: View all elements in the stack.
   - **5. Exit**: Exit the program.

## Example of Output

```
Enter the size of the stack: 5

What operation would you like to perform:
1.Push
2.Pop
3.Peek
4.Display the stack
5.Exit
Your choice: 1
Enter the data to be pushed: 10
10 has been pushed

What operation would you like to perform:
1.Push
2.Pop
3.Peek
4.Display the stack
5.Exit
Your choice: 4
The elements of the stack is
10
```

## Code Explanation

### Stack Structure:
```c
typedef struct Stack {
    int *arr;  // Array to store stack elements
    int top;   // Index of the top element in the stack
    int size;  // Maximum capacity of the stack
} stk;
```
- **arr**: Array to hold the stack elements.
- **top**: Index of the current top of the stack.
- **size**: Maximum size of the stack.

### Function Descriptions:

1. **`push(stk *stack, int data)`**:
   - Adds a value to the top of the stack.
   - If the stack is full, it displays a message indicating overflow.

2. **`pop(stk *stack)`**:
   - Removes and returns the top element of the stack.
   - If the stack is empty, it displays an underflow message.

3. **`display(stk *stack)`**:
   - Displays all elements from the top to the bottom of the stack.

4. **`peek(stk *stack)`**:
   - Displays the element at the top of the stack without removing it.

### Dynamic Memory Allocation:
The stack structure and its array are dynamically allocated using `malloc()`:
```c
stack = (stk *)malloc(sizeof(stk));  // Allocate memory for the stack
stack->arr = (int *)malloc(stack->size * sizeof(int));  // Allocate memory for the stack elements
```

## Edge Cases Handled:
- **Stack Overflow**: Occurs when trying to push an element into a full stack.
- **Stack Underflow**: Occurs when trying to pop an element from an empty stack.
- **Empty Stack**: When the stack is empty, trying to peek or pop will show an appropriate message.

## Conclusion

This implementation of a **Stack ADT** in C provides basic operations like push, pop, peek, and display, with dynamic memory allocation. It demonstrates how to manage a stack efficiently using a linked structure in C.

