# **Circular Linked List Implementation in C**

## **Overview**
A **Circular Linked List (CLL)** is a type of **linked list** where the last node is connected back to the first node, forming a circular structure. Unlike a **Singly Linked List**, which terminates at `NULL`, a Circular Linked List allows continuous traversal through all nodes.

This implementation in **C** provides operations for **insertion, deletion, traversal, and searching**.

---

## **Features**
- **Insert Node**
  - At the **beginning**
  - At the **end**
  - At a **specific position**
- **Delete Node**
  - From the **beginning**
  - From the **end**
  - From a **specific position**
- **Traversal**
  - Display all elements in the circular list.
- **Search**
  - Find a specific node.

---

## **How It Works**
1. **Insertion (O(1) for beginning, O(n) for specific position)**
   - **Beginning**: The new node's `next` points to the current head, and the last node points to the new node.
   - **End**: The last node’s `next` is updated to the new node, which now points to the head.
   - **Position**: Traverse to the position and insert accordingly.

2. **Deletion (O(1) for beginning, O(n) for specific position)**
   - **Beginning**: Update the head and adjust the last node's `next`.
   - **End**: Traverse to the second last node and update its `next`.
   - **Position**: Traverse to the position and remove the node.

3. **Traversal (O(n))**
   - Start from the head and follow `next` pointers until the head is reached again.

4. **Searching (O(n))**
   - Traverse the list to check for the presence of an element.

---

## **Code Structure**
```c
#include <stdio.h>
#include <stdlib.h>

// Define Node Structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function Prototypes
Node* insertAtEnd(Node* head, int data);
Node* insertAtBeginning(Node* head, int data);
Node* deleteNode(Node* head, int key);
void display(Node* head);
int search(Node* head, int key);
```

---

## **Time Complexity Analysis**
| Operation  | Time Complexity |
|------------|----------------|
| Insert (Beginning) | **O(1)** |
| Insert (End) | **O(n)** |
| Insert (Specific Position) | **O(n)** |
| Delete (Beginning) | **O(1)** |
| Delete (End) | **O(n)** |
| Delete (Specific Position) | **O(n)** |
| Search | **O(n)** |
| Traversal | **O(n)** |

---

## **Example Operations**
| Operation  | Input  | Output |
|------------|--------|--------|
| **Insert at Beginning** | `10` | `10 -> HEAD` |
| **Insert at End** | `20` | `10 -> 20 -> HEAD` |
| **Insert at End** | `30` | `10 -> 20 -> 30 -> HEAD` |
| **Delete Node** | `20` | `10 -> 30 -> HEAD` |
| **Search for 30** | ✅ Found | ✅ Exists in List |

---

## **How to Run**
1. **Compile the code** using GCC:
   ```sh
   gcc circular_linked_list.c -o cll
   ```
2. **Run the program**:
   ```sh
   ./cll
   ```
3. **Follow on-screen instructions** to perform operations.

---

## **Possible Enhancements**
- Implement **Doubly Circular Linked List** for efficient bidirectional traversal.
- Add **reverse traversal** to print elements in reverse order.
- Optimize **searching using hashing techniques**.

---

## **License**
This project is open-source and can be used for **educational purposes**.
