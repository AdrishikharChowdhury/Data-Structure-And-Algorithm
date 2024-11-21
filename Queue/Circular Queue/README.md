

---

# Circular Queue Data Structure

A **Circular Queue** is an advanced version of a **Linear Queue** where the last position is connected back to the first position, forming a circle. This data structure overcomes the limitation of wasted space in a Linear Queue by efficiently utilizing the available memory.

## Features

- **Enqueue Operation**: Add an element to the rear of the queue.
- **Dequeue Operation**: Remove an element from the front of the queue.
- **Peek/Front Operation**: View the element at the front without removing it.
- **Is Empty Check**: Verify if the queue is empty.
- **Is Full Check**: Verify if the queue is full.
- **Efficient Space Utilization**: Reuses previously freed spaces in the queue.

---

## Characteristics of a Circular Queue

1. **Circular Connection**: The rear of the queue wraps around to the front when it reaches the maximum size.
2. **Efficient Memory Usage**: Circular queues eliminate the issue of wasted space that occurs in a linear queue after multiple dequeues.
3. **Static or Dynamic Size**: Can be implemented using arrays (fixed size) or linked lists (dynamic size).

---

## Applications of Circular Queue

- **CPU Scheduling**: Managing time slices in round-robin scheduling.
- **Buffer Management**: Circular buffers in data streaming.
- **Network Management**: Handling packets in a circular order.

---

## Operations and Functions

### 1. **Initialization**

Initialize the queue with a fixed size, and set `front` and `rear` to `-1` to represent an empty queue.

```c
typedef struct {
    int items[MAX];
    int front;
    int rear;
} CircularQueue;

void initializeQueue(CircularQueue *q) {
    q->front = q->rear = -1;
}
```

### 2. **Enqueue**

Add an element to the rear of the queue if it is not full.

```c
void enqueue(CircularQueue *q, int value) {
    if (isFull(q)) {
        printf("Queue Overflow! Cannot enqueue.\n");
        return;
    }
    if (q->front == -1) q->front = 0;  // First element being added
    q->rear = (q->rear + 1) % MAX;
    q->items[q->rear] = value;
}
```

### 3. **Dequeue**

Remove an element from the front of the queue if it is not empty.

```c
int dequeue(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow! Cannot dequeue.\n");
        return -1;
    }
    int value = q->items[q->front];
    if (q->front == q->rear) {  // Reset queue to empty
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX;
    }
    return value;
}
```

### 4. **Peek**

View the front element without removing it.

```c
int peek(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return -1;
    }
    return q->items[q->front];
}
```

### 5. **Display**

Print all elements in the queue.

```c
void display(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    int i = q->front;
    do {
        printf("%d ", q->items[i]);
        i = (i + 1) % MAX;
    } while (i != (q->rear + 1) % MAX);
    printf("\n");
}
```

### 6. **Utility Functions**

- **Check if Queue is Empty**

```c
int isEmpty(CircularQueue *q) {
    return (q->front == -1);
}
```

- **Check if Queue is Full**

```c
int isFull(CircularQueue *q) {
    return ((q->rear + 1) % MAX == q->front);
}
```

---

## Example Program

```c
#include <stdio.h>
#include <stdlib.h>
#define MAX 5  // Maximum size of the queue

typedef struct {
    int items[MAX];
    int front;
    int rear;
} CircularQueue;

void initializeQueue(CircularQueue *q);
int isEmpty(CircularQueue *q);
int isFull(CircularQueue *q);
void enqueue(CircularQueue *q, int value);
int dequeue(CircularQueue *q);
int peek(CircularQueue *q);
void display(CircularQueue *q);

int main() {
    CircularQueue q;
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

## Advantages of Circular Queue

1. **Efficient Space Utilization**: Avoids unused spaces in the queue.
2. **Constant Time Operations**: Enqueue and Dequeue operations have constant time complexity.
3. **Memory Management**: Better for scenarios with cyclic data needs.

---

## Limitations

- **Static Size**: In array-based implementations, the queue size must be predefined and cannot be changed dynamically.
- **Overflow/Underflow Management**: Proper checks are needed to avoid data overwriting or accessing invalid elements.

---

## Contributors

- Adrishikhar Chowdhury - Initial Implementation
- [Contributor Name] - Enhancements and Testing

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

--- 
