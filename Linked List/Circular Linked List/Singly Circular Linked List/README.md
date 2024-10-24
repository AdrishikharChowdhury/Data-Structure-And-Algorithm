# Singly Circular Linked List

This repository contains an implementation of a **Singly Circular Linked List** — a variation of a linked list where the last node points back to the first node, forming a circular structure.

## What is a Singly Circular Linked List?

A **Singly Circular Linked List** is a linked list where:
- Each node contains **data** and a **next pointer** to the following node.
- The **last node** points back to the **first node**, making the list circular.
- Traversal can continue indefinitely since there is no `NULL` reference at the end.

### Key Operations

1. **Insertion**
   - At the beginning.
   - At the end.
   - After a specific node.

2. **Deletion**
   - From the beginning.
   - From the end.
   - A specific node.

3. **Traversal**
   - Visits every node in the circular linked list.

## Applications

- **Round-robin scheduling** in operating systems.
- **Token ring networks**, where each node gets a turn.
- **Circular queues** where a fixed set of resources is shared.

## Code Structure

The key operations are implemented as separate functions, and the list is managed dynamically using pointers.

### Example Functions

- `insert_at_beginning()`
- `insert_at_end()`
- `delete_node()`
- `traverse_list()`

## Compilation and Execution

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/singly-circular-linked-list.git
   ```

2. Compile the program:
   ```bash
   gcc circular_linked_list.c -o circular_list
   ```

3. Run the executable:
   ```bash
   ./circular_list
   ```

## Usage

Once the program runs, you can perform linked list operations such as inserting, deleting, or traversing nodes.

### Example Run

- **Inserting at the end**:
  ```bash
  Inserted 10 at the end
  ```

- **Traversing the list**:
  ```bash
  10 -> 20 -> 30 -> (back to head)
  ```

## License

This project is licensed under the MIT License.
```

This `README.md` outlines the purpose, structure, key operations, and usage of a **Singly Circular Linked List** implementation.