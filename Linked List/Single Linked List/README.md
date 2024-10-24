# Single Linked List Implementation in C

A linear data structure where each element points to the next element in the sequence. Each element (node) contains two items: the data and a reference to the next node.

## Structure Definition
```c
struct Node {
    int data;           // Data stored in the node
    struct Node* next;  // Pointer to the next node
};
```

## Features

### Basic Operations
- Insert node at beginning
- Insert node at end
- Insert node at specific position
- Delete first node
- Delete last node
- Delete node from specific position
- Search for an element
- Display the list
- Count nodes

### Advanced Operations
- Reverse the list
- Sort the list
- Find middle element
- Remove duplicates
- Check if list is empty

## Function Descriptions

### Insertion Operations
```c
Node* insertAtBeginning(Node* head, int data);
Node* insertAtEnd(Node* head, int data);
Node* insertAtPosition(Node* head, int data, int position);
```

### Deletion Operations
```c
Node* deleteFromBeginning(Node* head);
Node* deleteFromEnd(Node* head);
Node* deleteFromPosition(Node* head, int position);
```

### Utility Functions
```c
void display(Node* head);
int search(Node* head, int key);
Node* reverse(Node* head);
int countNodes(Node* head);
```

## Time Complexity

| Operation | Time Complexity |
|-----------|----------------|
| Insert at beginning | O(1) |
| Insert at end | O(n) |
| Insert at position | O(n) |
| Delete from beginning | O(1) |
| Delete from end | O(n) |
| Search | O(n) |
| Display | O(n) |

## Usage Example
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    struct Node* head = NULL;
    
    // Insert elements
    head = insertAtBeginning(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtPosition(head, 15, 2);
    
    // Display list
    printf("Linked List: ");
    display(head);  // Output: 10 -> 15 -> 20
    
    return 0;
}
```

## Advantages
1. Dynamic size allocation
2. Easy insertion and deletion
3. Simple implementation
4. Can grow and shrink during runtime
5. No memory wastage

## Disadvantages
1. Extra memory for pointer
2. No backward traversing
3. Sequential access only
4. Not cache friendly
5. No direct access to elements

## Applications
1. Implementation of stacks and queues
2. Symbol table management in compilers
3. Memory allocation and deallocation
4. Polynomial manipulation
5. Hash chaining

## Common Problems and Solutions
1. Loop detection
2. Finding middle element
3. Reversing the list
4. Detecting intersection
5. Finding nth node from end

## How to Run
1. Compile the program:
```bash
gcc single_linked_list.c -o sll
```

2. Run the executable:
```bash
./sll
```

## Error Handling
- Null pointer checks
- Memory allocation validation
- Position bounds checking
- Empty list validation

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

## License
[MIT](https://choosealicense.com/licenses/mit/)

## Author
[Your Name]

---

## Future Enhancements
1. Generic data type implementation
2. Sorting algorithms
3. Cycle detection
4. Memory optimization
5. Thread safety

## Notes
- Implemented with proper memory management
- Each function includes error handling
- Code is well documented
- Test cases included
- Performance optimized

For detailed implementation, please refer to the source code.
