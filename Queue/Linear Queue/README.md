
---

# Linear Queue Data Structure

This project demonstrates the implementation of a **Linear Queue** data structure. A Linear Queue is a sequential data structure that follows the **First In, First Out (FIFO)** principle, where elements are inserted at one end (rear) and removed from the other end (front).

## Features

- **Enqueue Operation**: Add an element to the rear of the queue.
- **Dequeue Operation**: Remove an element from the front of the queue.
- **Peek/Front Operation**: View the element at the front of the queue without removing it.
- **Is Empty Check**: Verify if the queue is empty.
- **Is Full Check**: Verify if the queue is full.
- **Display Operation**: Print all elements of the queue.

## Characteristics of a Linear Queue

1. **Linear Structure**: The queue is implemented in a linear sequence, usually using arrays or linked lists.
2. **Static Size**: In an array-based implementation, the size of the queue is fixed and predefined.
3. **Limited Space**: Once the rear reaches the maximum size, new elements cannot be added even if there is space at the beginning of the queue (unutilized space is a limitation of linear queues).

## Applications of Linear Queue

- **Task Scheduling**: Managing tasks in a sequential order.
- **Resource Management**: Handling shared resources like CPU scheduling.
- **Data Buffers**: Storing data temporarily while being processed sequentially.

---

## Operations and Functions

### 1. **Initialization**

The queue is initialized with a fixed size, setting `front` and `rear` to `-1` to indicate that the queue is empty.

```c
typedef struct {
    int items[MAX];
    int front;
    int rear;
} LinearQueue;

void initializeQueue(LinearQueue *q) {
    q->front = q->rear = -1;
}
```

### 2. **Enqueue**

Adds an element to the rear of the queue if it is not full.

```c
void enqueue(LinearQueue *q, int value) {
    if (isFull(q)) {
        printf("Queue Overflow! Cannot enqueue.\n");
        return;
    }
    if (q->front == -1) q->front = 0;  // First element being added
    q->rear++;
    q->items[q->rear] = value;
}
```

### 3. **Dequeue**

Removes an element from the front of the queue if it is not empty.

```c
int dequeue(LinearQueue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow! Cannot dequeue.\n");
        return -1;
    }
    int value = q->items[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;  // Reset the queue to empty
    } else {
        q->front++;
    }
    return value;
}
```

### 4. **Peek**

View the front element of the queue without removing it.

```c
int peek(LinearQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return -1;
    }
    return q->items[q->front];
}
```

### 5. **Display**

Print all elements currently in the queue.

```c
void display(LinearQueue *q) {
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

### 6. **Utility Functions**

- **Check if Queue is Empty**

```c
int isEmpty(LinearQueue *q) {
    return (q->front == -1);
}
```

- **Check if Queue is Full**

```c
int isFull(LinearQueue *q) {
    return (q->rear == MAX - 1);
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
} LinearQueue;

void initializeQueue(LinearQueue *q);
int isEmpty(LinearQueue *q);
int isFull(LinearQueue *q);
void enqueue(LinearQueue *q, int value);
int dequeue(LinearQueue *q);
int peek(LinearQueue *q);
void display(LinearQueue *q);

int main() {
    LinearQueue q;
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

## Limitations

- **Wasted Space**: Once elements are dequeued, their positions in the array are not reused.
- **Fixed Size**: The size of the queue cannot be dynamically adjusted in array-based implementations.

---

## Contributors

- Adrishikhar Chowdhury - Initial Implementation
- [Contributor Name] - Enhancements and Testing

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

--- 
