# Circular Linked List Implementation in C

A variation of linked list where the last node points back to the first node, creating a circle. This creates a list that can be traversed endlessly in a circular manner.

## Structure Definition
```c
struct Node {
    int data;           // Data stored in the node
    struct Node* next;  // Pointer to the next node
};
```

## Features

### Basic Operations
- Insert at beginning
- Insert at end
- Insert after given node
- Delete first node
- Delete last node
- Delete specific node
- Display list
- Search element

### Advanced Operations
- Split list
- Sort list
- Check if list is circular
- Convert to single linked list
- Josephus Problem solution

## Function Descriptions

### Insertion Operations
```c
Node* insertAtBeginning(Node* last, int data);
Node* insertAtEnd(Node* last, int data);
Node* insertAfter(Node* last, int data, int after);
```

### Deletion Operations
```c
Node* deleteFirst(Node* last);
Node* deleteLast(Node* last);
Node* deleteNode(Node* last, int key);
```

### Utility Functions
```c
void display(Node* last);
int search(Node* last, int key);
void josephus(int m, int n);
```

## Time Complexity

| Operation | Time Complexity |
|-----------|----------------|
| Insert at beginning | O(1) |
| Insert at end | O(1) |
| Insert after node | O(1) |
| Delete first | O(1) |
| Delete last | O(n) |
| Search | O(n) |

## Usage Example
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    struct Node* last = NULL;
    
    // Insert elements
    last = insertAtEnd(last, 10);
    last = insertAtEnd(last, 20);
    last = insertAtEnd(last, 30);
    
    // Display list
    display(last);  // Output: 10 -> 20 -> 30 -> 10
    
    return 0;
}
```

## Advantages
1. No null termination needed
2. Can traverse entire list from any node
3. Useful for round-robin applications
4. Better memory utilization
5. Constant time insertion at beginning and end

## Disadvantages
1. Complex implementation
2. Care needed to avoid infinite loops
3. Extra caution in traversal
4. More complex deletion
5. Memory overhead

## Applications
1. Round Robin scheduling
2. Multiplayer games
3. Audio/Video playlist
4. CPU task scheduling
5. Memory management

## Common Problems and Solutions
1. Splitting circular list
2. Converting to linear list
3. Josephus circle
4. Finding loop starting point
5. Checking if list is circular

## How to Run
1. Compile the program:
```bash
gcc circular_linked_list.c -o cll
```

2. Run the executable:
```bash
./cll
```

## Error Handling
- Empty list validation
- Memory allocation checks
- Node existence verification
- Loop prevention
- Single node case handling

## Contributing
Pull requests are welcome. For major changes, please open an issue first.

## License
[MIT](https://choosealicense.com/licenses/mit/)

## Author
[Your Name]

---

## Future Enhancements
1. Doubly circular linked list
2. Generic data type support
3. Thread safety
4. Memory optimization
5. Advanced algorithms

## Notes
- Proper cycle handling
- Memory leak prevention
- Well-documented code
- Test cases included
- Performance optimized

For detailed implementation, please refer to the source code.
