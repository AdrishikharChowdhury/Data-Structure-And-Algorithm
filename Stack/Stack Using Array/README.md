# Stack Implementation using Arrays

A concise guide to implementing a Stack data structure using a simple array. This implementation follows the Last-In-First-Out (LIFO) principle.

## Table of Contents
1. [Basic Structure](#basic-structure)
2. [Operations](#operations)
3. [Implementation](#implementation)
4. [Usage Examples](#usage-examples)
5. [Applications](#applications)

## Basic Structure
```c
#define MAX_SIZE 100   // Define maximum size of stack

struct Stack {
    int array[MAX_SIZE];   // Array to store elements
    int top;              // Top index of stack
};
```

## Operations

### Initialize Stack
```c
void initStack(struct Stack *stack) {
    stack->top = -1;   // Initialize top as -1 to indicate empty stack
}
```

### Check if Stack is Empty
```c
int isEmpty(struct Stack *stack) {
    return (stack->top == -1);
}
```

### Check if Stack is Full
```c
int isFull(struct Stack *stack) {
    return (stack->top == MAX_SIZE - 1);
}
```

### Push (Insert) Element
```c
void push(struct Stack *stack, int element) {
    if (isFull(stack)) {
        printf("Stack Overflow! Cannot push %d\n", element);
        return;
    }
    stack->array[++stack->top] = element;
    printf("%d pushed to stack\n", element);
}
```

### Pop (Remove) Element
```c
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Cannot pop from empty stack\n");
        return -1;
    }
    return stack->array[stack->top--];
}
```

### Peek (View Top Element)
```c
int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->array[stack->top];
}
```

### Get Stack Size
```c
int size(struct Stack *stack) {
    return stack->top + 1;
}
```

## Complete Implementation Example
```c
#include <stdio.h>

#define MAX_SIZE 100

struct Stack {
    int array[MAX_SIZE];
    int top;
};

void initStack(struct Stack *stack) {
    stack->top = -1;
}

int isEmpty(struct Stack *stack) {
    return (stack->top == -1);
}

int isFull(struct Stack *stack) {
    return (stack->top == MAX_SIZE - 1);
}

void push(struct Stack *stack, int element) {
    if (isFull(stack)) {
        printf("Stack Overflow! Cannot push %d\n", element);
        return;
    }
    stack->array[++stack->top] = element;
}

int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Cannot pop from empty stack\n");
        return -1;
    }
    return stack->array[stack->top--];
}

int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->array[stack->top];
}

int size(struct Stack *stack) {
    return stack->top + 1;
}
```

## Usage Example
```c
int main() {
    struct Stack stack;
    initStack(&stack);

    // Pushing elements
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    // Checking top element
    printf("Top element: %d\n", peek(&stack));  // Output: 30

    // Popping elements
    printf("Popped: %d\n", pop(&stack));  // Output: 30
    printf("Popped: %d\n", pop(&stack));  // Output: 20

    // Checking size
    printf("Current size: %d\n", size(&stack));  // Output: 1

    return 0;
}
```

## Time Complexity
| Operation | Time Complexity |
|-----------|----------------|
| Push | O(1) |
| Pop | O(1) |
| Peek | O(1) |
| isEmpty | O(1) |
| isFull | O(1) |

## Space Complexity
- O(n) where n is the size of the array
- Fixed space allocation regardless of usage

## Advantages
1. Simple implementation
2. Memory is saved as pointers are not involved
3. Cache friendly as elements are stored in contiguous memory
4. Constant time operations
5. Easy to implement and maintain

## Limitations
1. Fixed size array - cannot grow or shrink
2. May waste memory if not fully utilized
3. Stack overflow can occur if array is full
4. Cannot be used for dynamic sizing requirements

## Common Applications
1. Function call stack
2. Expression evaluation
3. String reversal
4. Undo/Redo operations
5. Backtracking algorithms
6. Browser history

## Best Practices
1. Always initialize stack before use
2. Check for overflow before push operations
3. Check for underflow before pop operations
4. Use meaningful variable names
5. Include proper error handling
6. Consider implementation requirements (fixed vs dynamic size)

## Error Handling
1. Stack Overflow
   - Check before pushing elements
   - Handle gracefully with appropriate error messages

2. Stack Underflow
   - Check before popping elements
   - Return appropriate error values/messages

3. Empty Stack Operations
   - Check before peek operations
   - Handle empty stack conditions appropriately

