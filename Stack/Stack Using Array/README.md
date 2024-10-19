# Stack Implementation in C

A simple console-based implementation of a stack data structure using dynamic memory allocation in C. This program provides basic stack operations including push, pop, peek, and display functionality.

## Features

- Dynamic stack size allocation
- Push operation to add elements
- Pop operation to remove elements
- Peek operation to view the top element
- Display operation to show all stack elements
- Stack overflow and underflow handling

## Functions

1. **push()**: Adds an element to the top of the stack
   - Checks for stack overflow condition
   - Returns the updated stack

2. **pop()**: Removes the top element from the stack
   - Checks for stack underflow condition
   - Displays the popped element
   - Returns the updated stack

3. **peek()**: Views the top element without removing it
   - Checks for empty stack condition
   - Returns the top element value

4. **display()**: Shows all elements in the stack
   - Prints elements from top to bottom
   - Handles empty stack condition

## How to Use

1. Compile the program using a C compiler:
   ```bash
   gcc stack.c -o stack
   ```

2. Run the executable:
   ```bash
   ./stack
   ```

3. Follow the menu options:
   - Enter stack size when prompted
   - Choose operations from the menu (1-5)
   - Follow prompts for each operation

## Menu Options

1. Push - Add an element to stack
2. Pop - Remove top element
3. Peek - View top element
4. Display - Show all elements
5. Exit - End program

## Example Usage

```
Enter the size of the stack: 3

Enter the operation:
1. Push
2. Pop
3. Peek
4. Display The Stack
5. Exit
Your choice: 1
Enter the data to push: 10

Your choice: 1
Enter the data to push: 20

Your choice: 4
The elements of the stack is:
20
10
```

## Technical Details

- Language: C
- Memory: Dynamic allocation using malloc()
- Data Structure: Array-based stack implementation
- Error Handling: Stack overflow and underflow conditions

## Notes

- Stack size is fixed after initialization
- Elements are stored in LIFO (Last In First Out) order
- Program includes input validation
- Memory is dynamically allocated based on user input

## Author

[Your Name]

## License

This project is open source and available under the [MIT License](LICENSE).
