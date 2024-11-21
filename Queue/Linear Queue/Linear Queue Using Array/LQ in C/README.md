# Linear Queue Implementation Using Array in C

This repository contains an implementation of a **Linear Queue** using an array in C. A **Linear Queue** is a data structure that follows the **First-In-First-Out (FIFO)** principle, where elements are inserted at one end (rear) and removed from the other end (front).

---

## Features

1. **Enqueue Operation**: Adds an element to the rear of the queue.
2. **Dequeue Operation**: Removes an element from the front of the queue.
3. **Display Operation**: Displays the current elements in the queue.
4. Handles queue overflow and underflow conditions.

---

## How It Works

1. **Initialization**:
   - The `front` and `rear` pointers are initialized to `-1` to indicate an empty queue.
   - The queue size is dynamically allocated based on user input.

2. **Enqueue**:
   - Adds an element to the `rear` of the queue.
   - If the queue is full (`rear == size - 1`), an overflow message is displayed.

3. **Dequeue**:
   - Removes an element from the `front` of the queue.
   - If the queue is empty (`front == -1` and `rear == -1`), an underflow message is displayed.

4. **Display**:
   - Prints all the elements from the `front` to the `rear` of the queue.

---

## Operations and Code Explanation

### 1. Enqueue Function (`enq`)

The `enq` function inserts an element into the queue:
```c
int *enq(int *q, int *f, int *r, int n, int data) {
    if ((*f) == -1 && (*r) == -1) {
        (*f) = 0;
        (*r) = 0;
    } else {
        (*r) += 1;
    }
    q[(*r)] = data;
    return q;
}
```

### 2. Dequeue Function (`deq`)

The `deq` function removes an element from the queue:
```c
int deq(int *q, int *f, int *r) {
    int data = q[(*f)];
    if ((*f) == (*r)) {
        (*f) = -1;
        (*r) = -1;
    } else {
        (*f) += 1;
    }
    return data;
}
```

### 3. Display Function (`displayq`)

The `displayq` function prints the current queue:
```c
void displayq(int *q, int f, int r) {
    printf("The Queue is:\n");
    for (int i = f; i <= r; i++) {
        printf("%d\t", q[i]);
    }
    printf("\n");
}
```

---

## Example Program

### Code Structure
The program includes:
- Dynamic memory allocation for the queue.
- A menu-driven interface to perform enqueue, dequeue, and display operations.

### Sample Input and Output

```
Enter the size of the queue: 5
What operation you want to perform:
1.Enqueue
2.Dequeue
3.Show the Queue
4.Exit
Your choice: 1
Enter the data to enqueue: 10
10 has been enqueued
Your choice: 1
Enter the data to enqueue: 20
20 has been enqueued
Your choice: 3
The Queue is:
10      20
Your choice: 2
10 has been dequeued
Your choice: 3
The Queue is:
20
Your choice: 4
Thank you for using this program :)
```

---

## Functions and Logic

| **Function** | **Description** |
|--------------|-----------------|
| `enq()`      | Adds an element to the rear of the queue. Handles overflow. |
| `deq()`      | Removes an element from the front of the queue. Handles underflow. |
| `displayq()` | Displays all elements currently in the queue. |
| `main()`     | Handles user input, allocates memory, and provides a menu-driven interface. |

---

## Limitations

1. **Fixed Size**: The queue size is defined at runtime but cannot dynamically grow after initialization.
2. **Memory Inefficiency**: Elements dequeued are not reused, leading to unused spaces in the array.

---

## Possible Improvements

1. **Circular Queue**: Implement a circular queue to reuse memory and improve efficiency.
2. **Dynamic Resize**: Implement a dynamic resizing queue to handle overflow situations.

---

## Time Complexity

| **Operation** | **Time Complexity** |
|---------------|----------------------|
| Enqueue       | O(1)                |
| Dequeue       | O(1)                |
| Display       | O(n)                |

---

## License

This project is open-source and licensed under the MIT License.

---

## Author

- **[Your Name]** - Developer and Maintainer

--- 
