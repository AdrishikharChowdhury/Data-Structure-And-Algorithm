# Doubly Circular Linked List Implementation in C

A complete implementation of a Doubly Circular Linked List with comprehensive operations including insertion, deletion, display, and menu-driven interface.

## Table of Contents
- [Features](#features)
- [Structure](#structure)
- [Functions](#functions)
- [How to Run](#how-to-run)
- [Menu Options](#menu-options)
- [Implementation Details](#implementation-details)

## Features
- Menu-driven interface
- Dynamic memory allocation
- Multiple insertion methods
- Multiple deletion methods
- Circular navigation
- Node counting
- Interactive display

## Structure
```c
typedef struct Doublycirc {
    int data;                   // Data storage
    struct Doublycirc *prev;    // Pointer to previous node
    struct Doublycirc *next;    // Pointer to next node
} dcd;
```

## Functions

### Core Functions
1. `createlist(dcd *head, int n)`
   - Creates initial linked list with n nodes
   - Returns pointer to head node

2. `display(dcd *head)`
   - Displays all nodes in the list
   - Shows circular nature with "back to start" indication

### Insertion Functions
1. `insertbeg(dcd *head, int *n)`
   - Inserts node at the beginning
   - Updates node count

2. `insertend(dcd *head, int *n)`
   - Inserts node at the end
   - Maintains circular nature

3. `insertany(dcd *head, int *n)`
   - Inserts at specified position
   - Validates position range

4. `insertval(dcd *head, int *n)`
   - Inserts after a specified value
   - Searches for value before insertion

### Deletion Functions
1. `delbeg(dcd *head, int *n)`
   - Deletes first node
   - Handles single node case

2. `delend(dcd *head, int *n)`
   - Deletes last node
   - Updates circular links

3. `deleteany(dcd *head, int *n)`
   - Deletes from specified position
   - Validates position before deletion

4. `delvalue(dcd *head, int *n)`
   - Deletes node with specified value
   - Searches for value before deletion

## How to Run

1. **Compilation**
   ```bash
   gcc doublycirc.c -o doublycirc
   ```

2. **Execution**
   ```bash
   ./doublycirc
   ```

3. **Initial Input**
   - Enter number of nodes
   - Input data for each node

## Menu Options
```
1. Insert At Beginning
2. Insert At End
3. Insert At Given Position
4. Insert After Given Value
5. Delete the First Node
6. Delete the Last Node
7. Delete Any Position
8. Delete Any Value
9. Count The No. Of Nodes
10. Display The Linked List
11. Exit
```

## Implementation Details

### Initialization
- Program starts by creating first node
- User specifies initial list size
- Circular links established during creation

### Memory Management
- Dynamic allocation using `malloc()`
- Proper linking of prev and next pointers
- Handles memory for new nodes and deletions

### Error Handling
- Empty list checks
- Position validation
- Single node special cases
- Value existence verification

### Display Format
```
-> 1 -> 2 -> 3 -> (back to start)
```

### Special Cases Handled
1. Empty list operations
2. Single node operations
3. Invalid positions
4. Non-existent values
5. First/last node operations

## Program Flow
1. Initialize empty list
2. Create initial nodes
3. Enter menu loop
4. Perform selected operations
5. Continue until exit

## Notes
- All operations maintain doubly circular nature
- Node count is automatically updated
- User-friendly messages for all operations
- Clean menu interface
- Proper validation at each step

## Exit
Program terminates with a farewell message when user selects exit option (11).

---

This implementation provides a robust foundation for working with doubly circular linked lists and can be used as an educational tool or base for more complex applications.
