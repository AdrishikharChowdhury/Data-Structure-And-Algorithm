
---

# Queue Data Structure

This project implements a **Queue** data structure, which is a linear data structure that follows the **First In, First Out (FIFO)** principle. In a queue, elements are inserted from the back (enqueued) and removed from the front (dequeued). This is commonly used in scenarios like task scheduling, resource management, and in scenarios where order matters.

## Features

- **Enqueue Operation**: Insert an element at the back of the queue.
- **Dequeue Operation**: Remove an element from the front of the queue.
- **Peek/Front Operation**: View the element at the front of the queue without removing it.
- **Is Empty Check**: Check if the queue is empty.
- **Size Check**: Get the current number of elements in the queue.

## Types of Queues

- **Simple Queue**: Basic FIFO structure with enqueue and dequeue operations.
- **Circular Queue**: A type of queue where the last position is connected to the first position, preventing overflow when there’s space available at the beginning.
- **Priority Queue**: A queue where elements are dequeued based on priority, not on their arrival order.

## Code Walkthrough

### Structure of a Queue

```c
#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Max size of the queue

// Define the structure of a Queue
typedef struct {
    int items[MAX];
    int front;
    int rear;
} Queue;
```

### Function Declarations

```c
void initializeQueue(Queue *q);
int isEmpty(Queue *q);
int isFull(Queue *q);
void enqueue(Queue *q, int value);
int dequeue(Queue *q);
int peek(Queue *q);
void display(Queue *q);
```

### Basic Operations

1. **Initialize the Queue**

   Initialize the queue by setting the front and rear pointers to `-1` to represent an empty queue.

   ```c
   void initializeQueue(Queue *q) {
       q->front = q->rear = -1;
   }
   ```

2. **Enqueue Operation**

   Insert an element at the back (rear) of the queue if the queue is not full.

   ```c
   void enqueue(Queue *q, int value) {
       if (isFull(q)) {
           printf("Queue is full! Cannot enqueue.\n");
           return;
       }
       if (q->front == -1) {
           q->front = 0;  // First element being inserted
       }
       q->rear++;
       q->items[q->rear] = value;
   }
   ```

3. **Dequeue Operation**

   Remove an element from the front (front) of the queue if the queue is not empty.

   ```c
   int dequeue(Queue *q) {
       if (isEmpty(q)) {
           printf("Queue is empty! Cannot dequeue.\n");
           return -1;  // Return -1 if queue is empty
       }
       int dequeuedValue = q->items[q->front];
       if (q->front == q->rear) {
           q->front = q->rear = -1;  // Queue is empty
       } else {
           q->front++;
       }
       return dequeuedValue;
   }
   ```

4. **Peek Operation**

   View the front element of the queue without removing it.

   ```c
   int peek(Queue *q) {
       if (isEmpty(q)) {
           printf("Queue is empty! No front element.\n");
           return -1;  // Return -1 if queue is empty
       }
       return q->items[q->front];
   }
   ```

5. **Display Queue**

   Print all elements of the queue.

   ```c
   void display(Queue *q) {
       if (isEmpty(q)) {
           printf("Queue is empty!\n");
           return;
       }
       for (int i = q->front; i <= q->rear; i++) {
           printf("%d ", q->items[i]);
       }
       printf("\n");
   }
   ```

### Utility Functions

- **isEmpty**: Checks if the queue is empty (i.e., the front pointer is `-1`).
- **isFull**: Checks if the queue is full (i.e., the rear pointer is at the maximum size).

```c
int isEmpty(Queue *q) {
    return (q->front == -1);
}

int isFull(Queue *q) {
    return (q->rear == MAX - 1);
}
```

## Example Usage

```c
int main() {
    Queue q;
    initializeQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);

    printf("Queue elements: ");
    display(&q);

    printf("Dequeued element: %d\n", dequeue(&q));

    printf("Queue after dequeue: ");
    display(&q);

    printf("Front element: %d\n", peek(&q));

    return 0;
}
```

### Sample Output

```
Queue elements: 10 20 30 40 
Dequeued element: 10
Queue after dequeue: 20 30 40 
Front element: 20
```

## Time Complexity

- **Enqueue Operation**: O(1) - Inserting an element at the rear.
- **Dequeue Operation**: O(1) - Removing an element from the front.
- **Peek Operation**: O(1) - Accessing the front element.
- **Display Operation**: O(n) - Printing all elements in the queue.

## Contributors

- Adrishikhar Chowdhury - Initial Implementation

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---