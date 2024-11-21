
---

# Linear Queue Using Array

A **Linear Queue** is a basic data structure where elements are added at one end (rear) and removed from the other end (front). It follows the **First-In-First-Out (FIFO)** principle, where the element inserted first is the first to be removed.

This implementation of a Linear Queue uses a static array.

---

## Features

- **Enqueue Operation**: Adds an element to the rear of the queue.
- **Dequeue Operation**: Removes an element from the front of the queue.
- **Peek Operation**: Retrieves the front element without removing it.
- **Is Empty Check**: Determines if the queue is empty.
- **Is Full Check**: Determines if the queue is full.

---

## Characteristics of a Linear Queue

1. **Fixed Size**: The size of the queue is predefined and cannot grow dynamically.
2. **Sequential Memory Allocation**: Implemented using arrays for contiguous memory usage.
3. **Overflow and Underflow Conditions**:
   - **Overflow**: Occurs when the queue is full, and an element cannot be added.
   - **Underflow**: Occurs when the queue is empty, and an element cannot be removed.

---

## Applications of Linear Queue

- **Order Management**: Processing tasks in a sequential order.
- **Data Buffering**: Managing streaming data.
- **Printers**: Print jobs are queued before execution.

---

## Operations and Functions

### 1. **Initialization**

Define a `Queue` structure with an array, and initialize its front and rear indices.

```c
#define MAX 100  // Maximum size of the queue
typedef struct {
    int items[MAX];
    int front;
    int rear;
} Queue;

void initializeQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}
```

### 2. **Enqueue**

Add an element to the rear of the queue if it is not full.

```c
void enqueue(Queue *q, int value) {
    if (q->rear == MAX - 1) {
        printf("Queue Overflow! Cannot enqueue.\n");
        return;
    }
    if (q->front == -1) q->front = 0;  // Initialize front for the first element
    q->items[++q->rear] = value;
}
```

### 3. **Dequeue**

Remove an element from the front of the queue if it is not empty.

```c
int dequeue(Queue *q) {
    if (q->front == -1 || q->front > q->rear) {
        printf("Queue Underflow! Cannot dequeue.\n");
        return -1;
    }
    return q->items[q->front++];
}
```

### 4. **Peek**

Retrieve the front element without removing it.

```c
int peek(Queue *q) {
    if (q->front == -1 || q->front > q->rear) {
        printf("Queue is empty.\n");
        return -1;
    }
    return q->items[q->front];
}
```

### 5. **Is Empty Check**

```c
int isEmpty(Queue *q) {
    return (q->front == -1 || q->front > q->rear);
}
```

### 6. **Display**

Print all elements in the queue.

```c
void display(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}
```

---

## Example Program

```c
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
    int items[MAX];
    int front;
    int rear;
} Queue;

void initializeQueue(Queue *q);
void enqueue(Queue *q, int value);
int dequeue(Queue *q);
int peek(Queue *q);
void display(Queue *q);
int isEmpty(Queue *q);

int main() {
    Queue q;
    initializeQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(&q);

    printf("Dequeued: %d\n", dequeue(&q));
    display(&q);

    printf("Front element: %d\n", peek(&q));

    return 0;
}
```

### Sample Output

```
10 20 30 
Dequeued: 10
20 30 
Front element: 20
```

---

## Time Complexity

| Operation    | Time Complexity |
|--------------|-----------------|
| Enqueue      | O(1)            |
| Dequeue      | O(1)            |
| Peek         | O(1)            |
| Display      | O(n)            |

---

## Limitations

1. **Fixed Size**: The maximum size of the queue is predefined, which can result in memory wastage or overflow if the size is insufficient.
2. **Inefficient Memory Usage**: Once dequeued, the memory at the front is not reused in this implementation.

---

## Improvements

For better memory utilization, consider implementing a **Circular Queue**.

---

## Contributors

- [Your Name] - Initial Implementation
- [Contributor Name] - Enhancements and Documentation

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

--- 
