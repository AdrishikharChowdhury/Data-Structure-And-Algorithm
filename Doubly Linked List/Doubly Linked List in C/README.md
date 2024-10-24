# Doubly Linked List Implementation in C

This project implements a doubly linked list data structure in C, providing various operations for manipulation and analysis of the list.

## Features

- Create a doubly linked list
- Insert nodes at the beginning, end, at a specific position, or after a given value
- Delete nodes from the beginning, end, at a specific position, or by value
- Reverse the linked list
- Count the number of nodes
- Sort the linked list in ascending order
- Display the linked list

## Functions

- `createlist`: Initialize the doubly linked list
- `insertbeg`: Insert a node at the beginning
- `insertend`: Insert a node at the end
- `insertpos`: Insert a node at a specific position
- `insertval`: Insert a node after a given value
- `delbeg`: Delete the first node
- `delend`: Delete the last node
- `delpos`: Delete a node at a specific position
- `delvalue`: Delete a node with a specific value
- `reverse`: Reverse the order of the linked list
- `countNodes`: Count the number of nodes in the list
- `sortList`: Sort the list in ascending order
- `display`: Print the contents of the list

## Usage

Compile the program using a C compiler, then run the executable. The program will present a menu-driven interface allowing you to perform various operations on the doubly linked list.

## Menu Options

1. Insert At Beginning
2. Insert At End
3. Insert At Given Position
4. Insert After Given Value
5. Delete the First Node
6. Delete the Last Node
7. Delete Any Position
8. Delete Any Value
9. Reverse the Linked List
10. Count The No. Of Nodes
11. Sort the Linked List
12. Display The Linked List
13. Exit

## Note

This implementation uses dynamic memory allocation. Make sure to free the allocated memory when you're done using the list to prevent memory leaks.