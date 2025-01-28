
# Linear Queue using Linked List (C)

## Overview
A **Linear Queue** is a **FIFO (First In, First Out)** data structure where:
- **Insertion (enqueue)** happens at the **rear**.
- **Deletion (dequeue)** happens at the **front**.

This implementation uses a **Linked List**, making it dynamic in nature, meaning it can expand as needed without worrying about a fixed size.

## Features
- **Efficient operations:** `O(1)` complexity for enqueue & dequeue.
- **Dynamic Size:** No fixed limit, unlike arrays.
- **Simple Linked List Operations:** Uses pointers to maintain the queue structure.

## Operations
| Operation | Description |
|-----------|------------|
| `enq(front, value)` | Adds an element to the rear of the queue |
| `deq(front)` | Removes and returns the front element |
| `display(front)` | Prints all elements in the queue |

---

## Code Explanation

### **Struct Definition**
```c
typedef struct linearq {
    int data;
    struct linearq *next;
} lq;
```
- `data`: Stores the integer value.
- `next`: Pointer to the next node.

### **Enqueue (Insertion)**
```c
lq *enq(lq *front, int data)
```
- Creates a new node.
- Inserts the new node at the end (rear) of the queue.

### **Dequeue (Deletion)**
```c
lq *deq(lq *front)
```
- Removes the node from the front of the queue.
- Returns the new front pointer.

### **Display**
```c
void display(lq *front)
```
- Prints all elements from front to rear.

---

## Example Usage
### **Input/Output Example**
```
Creating a linear queue:
Enter the 1st data: 10

Enter the operation you want to perform
1. Enqueue
2. Dequeue
3. Display the Queue
4. Exit
Your choice: 1
Enter the data you want to store: 20
20 has been stored

Your choice: 1
Enter the data you want to store: 30
30 has been stored

Your choice: 3
Queue Elements: 10 20 30

Your choice: 2
10 has been deleted

Your choice: 3
Queue Elements: 20 30

Your choice: 4
Thank you for using this program :)
```

---

## Complexity Analysis
| Operation | Time Complexity |
|-----------|----------------|
| Enqueue   | **O(n)** (Since traversal to last node is needed) |
| Dequeue   | **O(1)** |
| Display   | **O(n)** |

---

## Use Cases
- **Task Scheduling** (e.g., printer job queue)
- **Handling Customer Requests**
- **CPU Scheduling in OS**
- **Breadth-First Search (BFS) in Graph Algorithms**

---

## How to Compile & Run
### **Compilation**
```sh
gcc linear_queue.c -o queue
```

### **Execution**
```sh
./queue
```

---

## Author
**Adrishikhar Chowdhury**  
🚀 **Happy Coding!** 🚀
```

This README is **structured, concise, and useful**, making it **easy to understand** for anyone who wants to use or modify the code! 🚀