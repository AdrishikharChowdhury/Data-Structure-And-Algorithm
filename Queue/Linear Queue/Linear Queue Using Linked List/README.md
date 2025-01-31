# Linear Queue using Linked List

## Overview
A **Linear Queue** is a **FIFO (First In, First Out)** data structure where:
- **Insertion (enqueue)** happens at the **rear**.
- **Deletion (dequeue)** happens at the **front**.

Using a **Linked List** for queue implementation ensures **dynamic memory allocation** and avoids the fixed size limitation of arrays.

## Features
- **Efficient operations:** `O(1)` complexity for enqueue & dequeue
- **No fixed size:** Can dynamically grow and shrink
- **Memory-efficient:** Uses only the required memory
- **Supports multiple languages:** Can be implemented in **C, C++, Java, Python, etc.**

## Operations
| Operation | Description |
|-----------|------------|
| `enqueue(value)` | Adds an element to the rear of the queue |
| `dequeue()` | Removes and returns the front element |
| `peek()` | Returns the front element without removing it |
| `isEmpty()` | Checks if the queue is empty |
| `display()` | Prints all elements in the queue |

## Implementation in Different Languages

### **C++**
```cpp
class Queue {
    struct Node {
        int data;
        Node* next;
    };
    Node *front, *rear;

public:
    Queue() { front = rear = NULL; }

    void enqueue(int value) {
        Node* temp = new Node{value, NULL};
        if (!rear) front = rear = temp;
        else { rear->next = temp; rear = temp; }
    }

    int dequeue() {
        if (!front) return -1;
        int data = front->data;
        Node* temp = front;
        front = front->next;
        delete temp;
        return data;
    }
};
```

### **Python**
```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Queue:
    def __init__(self):
        self.front = self.rear = None

    def enqueue(self, value):
        new_node = Node(value)
        if not self.rear:
            self.front = self.rear = new_node
        else:
            self.rear.next = new_node
            self.rear = new_node

    def dequeue(self):
        if not self.front:
            return None
        data = self.front.data
        self.front = self.front.next
        return data
```

### **Java**
```java
class Node {
    int data;
    Node next;
    Node(int value) { this.data = value; this.next = null; }
}

class Queue {
    Node front, rear;

    void enqueue(int value) {
        Node temp = new Node(value);
        if (rear == null) front = rear = temp;
        else { rear.next = temp; rear = temp; }
    }

    int dequeue() {
        if (front == null) return -1;
        int data = front.data;
        front = front.next;
        return data;
    }
}
```

## Complexity Analysis
| Operation | Time Complexity |
|-----------|----------------|
| Enqueue   | **O(1)** |
| Dequeue   | **O(1)** |
| Peek      | **O(1)** |
| Display   | **O(n)** |

## Use Cases
- **Task Scheduling**: Job queues in operating systems
- **Print Queue**: Managing print jobs
- **Call Center Systems**: Handling customer requests in order

## How to Run
1. **Compile (for C++/Java)** or Run the Python script
2. **Perform operations** like enqueue, dequeue, peek
3. **Observe output & memory behavior**

## Example Output
```
Enqueued: 10
Enqueued: 20
Dequeued: 10
Front Element: 20
Queue Elements: 20 -> 30
```

## Author
**Adrishikhar Chowdhury**  
🚀 Happy Coding! 🚀
```

---

### **Why this README?**
✅ Covers **multiple languages**  
✅ Explains **queue operations**  
✅ Includes **code snippets**  
✅ Highlights **real-world applications**  

This **generic README** can be used for **any language** supporting **linked list-based queues**! 🚀