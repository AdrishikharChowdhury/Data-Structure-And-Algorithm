# Linked List Implementation

A simple and efficient implementation of a singly linked list data structure.

## Overview

A linked list is a linear data structure where elements are stored in nodes, and each node points to the next node in the sequence. Unlike arrays, linked lists do not store elements in contiguous memory locations.

## Features

- Dynamic size
- Constant-time insertions and deletions at the beginning
- Linear-time access to elements
- Memory-efficient for large datasets with frequent insertions/deletions

## API Reference

### Node Class
```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
```

### LinkedList Class Methods

| Method | Description | Time Complexity |
|--------|-------------|-----------------|
| `append(data)` | Adds a new node at the end | O(n) |
| `prepend(data)` | Adds a new node at the beginning | O(1) |
| `delete(data)` | Removes the first occurrence of data | O(n) |
| `search(data)` | Returns true if data exists | O(n) |
| `get_size()` | Returns the number of nodes | O(1) |
| `is_empty()` | Returns true if list is empty | O(1) |

## Usage Example

```python
# Create a new linked list
my_list = LinkedList()

# Add elements
my_list.append(1)
my_list.append(2)
my_list.prepend(0)

# Search for an element
found = my_list.search(2)  # Returns True

# Delete an element
my_list.delete(1)
```

## Time Complexity

| Operation | Average Case | Worst Case |
|-----------|--------------|------------|
| Access    | O(n)         | O(n)       |
| Search    | O(n)         | O(n)       |
| Insertion | O(1)         | O(n)       |
| Deletion  | O(1)         | O(n)       |

## Space Complexity

- O(n) where n is the number of elements in the linked list
- Additional O(1) space for each operation

## Advantages

1. Dynamic size
2. Easy insertion and deletion
3. No memory wastage
4. Implementation of other data structures

## Limitations

1. Random access not allowed
2. Extra memory for pointer storage
3. Not cache-friendly
4. Reverse traversing not possible (in singly linked list)

## Contributing

Feel free to submit issues and enhancement requests!

## License

This project is licensed under the MIT License - see the LICENSE file for details.
