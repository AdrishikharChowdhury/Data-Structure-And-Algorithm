# **Circular Linked List (CLL) Implementation**

## **Overview**
A **Circular Linked List (CLL)** is a variation of a linked list where the **last node points back to the first node**, forming a **circular structure**. Unlike **Singly Linked Lists**, which terminate at `NULL`, a circular linked list allows continuous traversal through all nodes.

This README provides details about Circular Linked Lists and how they function in different programming languages.

---

## **Types of Circular Linked Lists**
1. **Singly Circular Linked List**  
   - Each node has a `data` field and a `next` pointer.  
   - The `next` of the last node points to the **head (first node)** instead of `NULL`.

2. **Doubly Circular Linked List**  
   - Each node contains `data`, `next`, and `prev` pointers.  
   - The **next of the last node points to the first node** and **the prev of the first node points to the last node**.

---

## **Features & Operations**
### **1. Insertion**
- **At the beginning**: Insert a node at the front.
- **At the end**: Append a node to the last position.
- **At a specific position**: Insert a node at a given index.

### **2. Deletion**
- **From the beginning**: Remove the first node.
- **From the end**: Remove the last node.
- **From a specific position**: Delete a node at a given index.

### **3. Traversal**
- Since it's a circular structure, traversal can start at any node and loop back to the beginning.

### **4. Searching**
- Traverse the list to find a specific element.

---

## **Advantages**
✅ **Efficient Memory Usage** – No need for `NULL` pointers.  
✅ **Continuous Traversal** – Ideal for applications needing round-robin processing.  
✅ **Dynamic Size** – Can grow and shrink as needed.  
✅ **Fast Insertions & Deletions** – O(1) at the beginning or end.  

---

## **Disadvantages**
❌ **Complex Implementation** – Requires handling circular connections.  
❌ **Difficult to Reverse** – More complex than singly linked lists.  
❌ **More Pointer Operations** – Extra logic required to maintain circular connections.  

---

## **Time Complexity Analysis**
| Operation      | Time Complexity |
|---------------|----------------|
| Insert (Beginning) | **O(1)** |
| Insert (End) | **O(1)** |
| Insert (Specific Position) | **O(n)** |
| Delete (Beginning) | **O(1)** |
| Delete (End) | **O(n)** |
| Delete (Specific Position) | **O(n)** |
| Search | **O(n)** |
| Traversal | **O(n)** |

---

## **Applications**
- **Scheduling Algorithms** – Round-robin process scheduling.  
- **Multiplayer Games** – Circular player turn management.  
- **Memory Management** – Circular buffer implementation.  
- **Network Traffic Management** – Token ring topology.  

---

## **Example Usage in Different Languages**
### **C**
```c
struct Node {
    int data;
    struct Node* next;
};
```

### **C++**
```cpp
class Node {
public:
    int data;
    Node* next;
};
```

### **Python**
```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
```

---

## **How to Run**
1. **Compile (for C/C++ implementations)**  
   ```sh
   gcc circular_linked_list.c -o cll
   ./cll
   ```

2. **Run Python Implementation**  
   ```sh
   python circular_linked_list.py
   ```

---

## **Enhancements & Future Improvements**
- Convert it into a **Doubly Circular Linked List**.
- Implement **reverse traversal**.
- Optimize **searching using hashing techniques**.

---

## **License**
This project is open-source and can be used for **educational purposes**.