# Stack Implementation Using Linked List

## Overview
A comprehensive implementation of a Stack data structure using a Linked List. This implementation follows the Last-In-First-Out (LIFO) principle where elements are added and removed from the same end, called the top of the stack.

## Table of Contents
- [Introduction](#introduction)
- [Stack Operations](#stack-operations)
- [Structure](#structure)
- [Implementation Details](#implementation-details)
- [Time Complexity](#time-complexity)
- [Advantages & Disadvantages](#advantages--disadvantages)
- [Applications](#applications)
- [Best Practices](#best-practices)

## Introduction
A stack is an abstract data type that serves as a collection of elements with two main operations:
- **Push**: Adds an element to the top
- **Pop**: Removes the element from the top

When implemented using a linked list, each element (node) contains:
- Data
- Reference to the next node

## Stack Operations

### Basic Operations
1. **Push(data)**
   - Adds new element at top
   - Creates new node
   - Links it to current top
   - Updates top pointer

2. **Pop()**
   - Removes top element
   - Updates top pointer
   - Returns removed element
   - Handles empty stack case

3. **Peek/Top()**
   - Returns top element without removal
   - Does not modify stack

4. **isEmpty()**
   - Checks if stack is empty
   - Returns boolean value

### Additional Operations
1. **Size()**
   - Returns number of elements

2. **Clear()**
   - Removes all elements
   - Resets stack

3. **Display()**
   - Shows all elements
   - Top to bottom order

## Structure

```
Node Structure:
┌───────────┐
│  Data     │
│  Next     │
└───────────┘

Stack Structure:
Top
 ↓
┌───────┐
│ Data1 │
│ Next  │→ ┌───────┐
└───────┘  │ Data2 │
           │ Next  │→ ┌───────┐
           └───────┘  │ Data3 │
                     │ Next  │→ NULL
                     └───────┘
```

## Implementation Details

### Stack Properties
1. **Top Pointer**
   - Points to last inserted element
   - NULL when stack empty

2. **Node Links**
   - Each node points to previous element
   - Last node points to NULL

### Memory Management
1. **Node Creation**
   - Dynamic memory allocation
   - Initialization of data and link

2. **Node Deletion**
   - Proper memory deallocation
   - Link maintenance

### Error Handling
1. **Stack Underflow**
   - When pop on empty stack
   - When peek on empty stack

2. **Memory Errors**
   - Failed memory allocation
   - Memory leaks prevention

## Time Complexity

| Operation | Time Complexity | Description |
|-----------|----------------|-------------|
| Push      | O(1)           | Constant time insertion at top |
| Pop       | O(1)           | Constant time removal from top |
| Peek      | O(1)           | Constant time access of top element |
| isEmpty   | O(1)           | Constant time check |
| Size      | O(1)           | Constant time if size maintained |
| Display   | O(n)           | Linear time to traverse all elements |

## Advantages & Disadvantages

### Advantages
1. Dynamic size
2. No memory wastage
3. Easy implementation
4. Efficient memory utilization
5. No size limitation

### Disadvantages
1. Extra memory for links
2. No random access
3. Memory overhead for pointers
4. No direct access to elements

## Applications
1. Function call management
2. Expression evaluation
3. Undo mechanism
4. Browser history
5. Recursive algorithms
6. Syntax parsing
7. Memory management

## Best Practices

### Implementation Guidelines
1. Always maintain top pointer
2. Check for empty stack
3. Proper error handling
4. Memory leak prevention
5. Clear documentation

### Error Prevention
1. Null pointer checks
2. Empty stack validation
3. Memory allocation checks
4. Proper cleanup routines

### Performance Optimization
1. Maintain size counter
2. Efficient memory management
3. Proper pointer handling
4. Clear memory deallocation

## Usage Examples
```
// Create Stack
stack = createStack()

// Push Elements
push(5)
push(10)
push(15)

// Stack State
15 <- Top
10
5

// Pop Element
pop() returns 15

// New Stack State
10 <- Top
5
```

## Common Pitfalls
1. Forgetting to update top pointer
2. Memory leaks in pop operations
3. Not handling empty stack cases
4. Improper null pointer handling
5. Missing edge cases

