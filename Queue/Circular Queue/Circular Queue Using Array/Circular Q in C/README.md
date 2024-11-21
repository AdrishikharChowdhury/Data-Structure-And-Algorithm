# Circular Queue Implementation using Array

## Overview
This program implements a **Circular Queue** using an array in C. Circular queues overcome the limitation of linear queues by efficiently utilizing the array space. The front and rear pointers wrap around when they reach the end of the array, enabling a "circular" usage of space.

---

## Features
1. **Enqueue**: Add an element to the queue.
2. **Dequeue**: Remove an element from the queue.
3. **Display**: Show all elements currently in the queue.
4. Prevents overflow and underflow conditions with proper checks.

---

## How it Works
1. **Enqueue Operation**:
   - If the queue is full (`front == 0 && rear == n-1` or `front == rear + 1`), insertion is not allowed.
   - If the queue is empty (`front == -1` and `rear == -1`), both `front` and `rear` are set to 0.
   - Otherwise, the `rear` pointer is moved forward using `(rear + 1) % n`.

2. **Dequeue Operation**:
   - If the queue is empty (`front == -1` and `rear == -1`), removal is not allowed.
   - If there is only one element (`front == rear`), both `front` and `rear` are reset to -1.
   - Otherwise, the `front` pointer is moved forward using `(front + 1) % n`.

3. **Display Operation**:
   - If `front <= rear`, the elements from `front` to `rear` are displayed sequentially.
   - If `front > rear` (wrap-around), the elements are displayed from `front` to the end of the array and from the start of the array to `rear`.

---

## Code Explanation

### Functions
1. **`c_enq`**:
   - Adds a new element to the Circular Queue.
   - Adjusts the `rear` pointer correctly with wrap-around.

2. **`c_deq`**:
   - Removes an element from the Circular Queue.
   - Adjusts the `front` pointer correctly with wrap-around.

3. **`c_displayq`**:
   - Displays the elements of the Circular Queue based on the positions of `front` and `rear`.

4. **Main Function**:
   - Handles user input and provides options to enqueue, dequeue, display, or exit.

---

## Input/Output

### Example Usage
1. Enter the size of the Circular Queue: `5`

#### Menu Options:
```
1. Enqueue
2. Dequeue
3. Show The Circular Queue
4. Exit
```

### Sample Execution
1. Enqueue values:
   ```
   Enter your operation:
   1. Enqueue
   Enter the data to enqueue: 10
   10 has been enqueued
   ```
2. Display queue:
   ```
   Enter your operation:
   3. Show The Circular Queue
   The Circular Queue is:
   10
   ```
3. Enqueue more values, including wrap-around:
   ```
   Enqueue: 20, 30, 40, 50
   Display:
   The Circular Queue is:
   10 20 30 40 50
   ```
4. Dequeue values:
   ```
   Dequeue:
   10 has been dequeued
   Display:
   The Circular Queue is:
   20 30 40 50
   ```

---

## Constraints
1. The maximum size of the queue is defined during runtime by the user.
2. Enqueue and Dequeue operations follow FIFO (First-In-First-Out) principle.

---

## Advantages of Circular Queue
1. **Efficient Space Utilization**: Prevents wastage of space in cases where elements are dequeued from the front in a linear queue.
2. **Wrap-around Behavior**: Supports continuous addition and removal of elements without resetting pointers manually.

---

## Notes
- Ensure proper memory allocation for the queue.
- Handle boundary conditions (e.g., full queue, empty queue) to avoid runtime errors.

Happy Coding! 😊