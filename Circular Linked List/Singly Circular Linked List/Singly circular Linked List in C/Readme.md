# Circular Linked List Implementation in C

This project implements a circular linked list data structure in C, providing various operations for manipulating the list.

## Features

The program offers the following operations on a circular linked list:

1. Insert a node at the beginning
2. Insert a node at the end
3. Insert a node at a given position
4. Insert a node after a given value
5. Delete the first node
6. Delete the last node
7. Delete a node at a given position
8. Delete a node with a specific value
9. Count the number of nodes
10. Display the entire list

## How to Use

1. Compile the C file using a C compiler. For example:
   ```
   gcc circular_linked_list.c -o circular_linked_list
   ```

2. Run the compiled program:
   ```
   ./circular_linked_list
   ```

3. Follow the on-screen menu to perform various operations on the circular linked list.

## Function Descriptions

- `insertbeg`: Inserts a new node at the beginning of the list
- `insertend`: Inserts a new node at the end of the list
- `insertpos`: Inserts a new node at a specified position
- `insertval`: Inserts a new node after a node with a specified value
- `delbeg`: Deletes the first node of the list
- `delend`: Deletes the last node of the list
- `delpos`: Deletes a node at a specified position
- `delvalue`: Deletes a node with a specified value
- `countNodes`: Counts the total number of nodes in the list
- `ShowList`: Displays all nodes in the list

## Note

This implementation maintains a circular structure, meaning the last node always points back to the first node. The program handles edge cases such as empty lists and lists with a single node.

## Contribution

Feel free to contribute to this project by suggesting improvements or reporting issues. Your feedback is valuable!

