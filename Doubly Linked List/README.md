# Doubly Linked List Implementation

A comprehensive implementation of a Doubly Linked List data structure in C. This implementation provides basic and advanced operations for manipulating a doubly linked list, where each node contains a link to both its previous and next nodes.

## Features

### Basic Operations
- Insert node at the beginning
- Insert node at the end
- Insert node at a specific position
- Delete node from beginning
- Delete node from end
- Delete node from specific position
- Traverse forward
- Traverse backward
- Search for an element

### Advanced Operations
- Reverse the list
- Sort the list
- Count total nodes
- Check if list is empty
- Get middle element
- Remove duplicates

## Structure Definition

```c
struct Node {
    int data;           // Data element
    struct Node* next;  // Pointer to next node
    struct Node* prev;  // Pointer to previous node
};
```

## Function Descriptions

### Creation and Insertion
- `createNode(int data)` - Creates a new node with given data
- `insertAtBeginning(int data)` - Inserts node at start
- `insertAtEnd(int data)` - Inserts node at end
- `insertAtPosition(int data, int position)` - Inserts at specific position

### Deletion
- `deleteFromBeginning()` - Removes first node
- `deleteFromEnd()` - Removes last node
- `deleteFromPosition(int position)` - Removes node from specific position

### Traversal
- `displayForward()` - Displays list from start to end
- `displayBackward()` - Displays list from end to start

### Utility Functions
- `countNodes()` - Returns total number of nodes
- `searchElement(int key)` - Searches for given element
- `reverse()` - Reverses the entire list
- `sort()` - Sorts the list in ascending order

## Usage Example

```c
// Include necessary headers
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Insert at beginning
    insertAtBeginning(10);
    insertAtBeginning(20);
    
    // Insert at end
    insertAtEnd(30);
    
    // Display list
    printf("Forward Display: ");
    displayForward();
    
    // Delete from position
    deleteFromPosition(2);
    
    // Display backward
    printf("Backward Display: ");
    displayBackward();
    
    return 0;
}
```

## Time Complexity

| Operation | Time Complexity |
|-----------|----------------|
| Insert at beginning | O(1) |
| Insert at end | O(1) |
| Insert at position | O(n) |
| Delete from beginning | O(1) |
| Delete from end | O(1) |
| Delete from position | O(n) |
| Search | O(n) |
| Traverse | O(n) |

## Space Complexity
- O(n) where n is the number of nodes

## Advantages of Doubly Linked List
1. Can be traversed in both directions
2. Deletion of nodes is more efficient
3. Can quickly insert nodes before a given node
4. Can quickly delete nodes when given node pointer

## Disadvantages
1. Requires extra memory for previous pointer
2. All operations require extra pointer handling

## Applications
1. Music Player playlists (forward/backward navigation)
2. Browser's forward/backward navigation
3. Undo/Redo operations in software
4. Memory allocation and management
5. Hash tables with chaining

## How to Run
1. Compile the program:
   ```bash
   gcc doubly_linked_list.c -o doubly_linked_list
   ```
2. Run the executable:
   ```bash
   ./doubly_linked_list
   ```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

## License
[MIT](LICENSE)

## Author
Adrishikhar Chowdhury

---

## Future Enhancements
1. Implementation of merge sort
2. Circular doubly linked list implementation
3. Generic data type support using void pointers
4. Thread-safe implementation
5. Iterator implementation

## Notes
- Error handling has been implemented for all edge cases
- Memory management is handled carefully to prevent memory leaks
- Each function includes input validation
- The implementation is optimized for performance

For detailed implementation of each function, please refer to the source code documentation.
