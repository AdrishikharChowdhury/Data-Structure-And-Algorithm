# Stack Implementations in C

This project contains two different implementations of a stack data structure in C:
1. Stack using a Linked List
2. Stack using an Array

Both implementations provide the basic stack operations: push, pop, peek, and display.

## Files

1. `stack_linked_list.c`: Contains the implementation of a stack using a linked list.
2. `stack_array.c`: Contains the implementation of a stack using an array.

## Stack using Linked List

### Features

- Dynamic size (limited only by available memory)
- Each node contains an integer data and a pointer to the next node
- Operations: Push, Pop, Peek, Display

### Functions

- `push`: Adds an element to the top of the stack
- `pop`: Removes the top element from the stack
- `peek`: Returns the top element without removing it
- `display`: Shows all elements in the stack

## Stack using Array

### Features

- Fixed size (specified at runtime)
- Uses an integer array to store elements
- Operations: Push, Pop, Peek, Display

### Functions

- `push`: Adds an element to the top of the stack
- `pop`: Removes the top element from the stack
- `peek`: Returns the top element without removing it
- `display`: Shows all elements in the stack

## How to Use

1. Compile the desired implementation:
   ```
   gcc stack_linked_list.c -o stack_linked_list
   ```
   or
   ```
   gcc stack_array.c -o stack_array
   ```

2. Run the compiled program:
   ```
   ./stack_linked_list
   ```
   or
   ```
   ./stack_array
   ```

3. Follow the on-screen prompts to perform stack operations.

## Menu Options

Both implementations provide the following menu options:

1. Push: Add an element to the stack
2. Pop: Remove the top element from the stack
3. Peek: View the top element of the stack
4. Display: Show all elements in the stack
5. Exit: Terminate the program

## Notes

- The linked list implementation allows for a dynamic stack size, while the array implementation requires specifying the stack size at the start.
- Both implementations handle stack overflow and underflow conditions.
- The linked list implementation frees memory when popping elements, while the array implementation simply adjusts the top index.

## Future Improvements

- Implement error handling using return codes instead of printing messages directly
- Add support for different data types (currently only integers are supported)
- Implement a resizable array version of the stack
