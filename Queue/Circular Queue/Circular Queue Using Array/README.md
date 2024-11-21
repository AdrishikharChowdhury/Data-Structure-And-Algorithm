# Circular Queue Implementation Using Array

This repository provides a general implementation of a **Circular Queue** using an array. A **Circular Queue** overcomes the limitations of a Linear Queue by treating the array as circular, allowing better utilization of space and avoiding the problem of unused slots in the queue.

---

## What is a Circular Queue?

A **Circular Queue** is a data structure that follows the **First-In-First-Out (FIFO)** principle while utilizing the array in a circular manner. In a circular queue:
- The rear of the queue wraps around to the front when it reaches the end of the array, forming a circle.
- This ensures efficient use of space by reusing slots that become free after dequeue operations.

---

## Features

1. **Efficient Space Utilization**: Reuses space in the queue that would otherwise be wasted.
2. **Enqueue Operation**: Adds an element to the rear of the queue.
3. **Dequeue Operation**: Removes an element from the front of the queue.
4. **Full Queue Handling**: Differentiates between a full and empty queue using a specific condition.
5. **Display Operation**: Displays all elements in the queue.

---

## How It Works

1. **Initialization**:
   - The `front` and `rear` pointers are initialized to `-1`, indicating an empty queue.
   - The size of the queue is predefined.

2. **Enqueue**:
   - Adds an element at the position pointed to by the `rear` pointer.
   - If the `rear` pointer reaches the end of the array, it wraps around to the beginning (circular behavior).
   - Ensures that the queue is not full before adding an element.

3. **Dequeue**:
   - Removes an element from the position pointed to by the `front` pointer.
   - If the `front` pointer reaches the end of the array, it wraps around to the beginning.

4. **Full and Empty Conditions**:
   - **Queue Full**: When `(rear + 1) % size == front`.
   - **Queue Empty**: When `front == -1`.

5. **Display**:
   - Traverses from `front` to `rear` to display all elements, accounting for the circular nature of the queue.

---

## Example Operations

### Enqueue Operation
- Check if the queue is full:
  ```
  (rear + 1) % size == front
  ```
- If not full:
  - Increment `rear`:
    ```
    rear = (rear + 1) % size
    ```
  - Insert the new element at `queue[rear]`.

### Dequeue Operation
- Check if the queue is empty:
  ```
  front == -1
  ```
- If not empty:
  - Retrieve the element at `queue[front]`.
  - Increment `front`:
    ```
    front = (front + 1) % size
    ```
  - Reset `front` and `rear` to `-1` if the queue becomes empty after the operation.

### Display Operation
Traverse the queue starting from `front` to `rear`, handling the wrap-around.

---

## Benefits of Circular Queue

1. **Efficient Use of Memory**: Overcomes the limitation of wasted space in a linear queue.
2. **Fixed Size**: Ideal for situations where a fixed buffer is needed, such as I/O buffers, task scheduling, or traffic simulations.
3. **FIFO Order**: Maintains the order of elements as they are inserted and removed.

---

## Applications

1. **Task Scheduling**: Circular queues are used in time-sharing systems to schedule processes.
2. **Data Buffering**: Used in circular buffers for data streaming (e.g., multimedia applications).
3. **Traffic Management**: Simulates queues in networking and transportation systems.

---

## Limitations

1. **Fixed Size**: The size of the queue must be predefined and cannot be changed dynamically.
2. **Wrap-Around Complexity**: Implementation requires careful handling of pointers to avoid errors.

---

## Example of a Circular Queue

### Pseudocode
1. **Enqueue**:
   ```plaintext
   if ( (rear + 1) % size == front ):
       print("Queue is Full")
   else:
       if (front == -1):
           front = 0
       rear = (rear + 1) % size
       queue[rear] = element
   ```

2. **Dequeue**:
   ```plaintext
   if (front == -1):
       print("Queue is Empty")
   else:
       element = queue[front]
       if (front == rear):
           front = -1
           rear = -1
       else:
           front = (front + 1) % size
   ```

3. **Display**:
   ```plaintext
   if (front == -1):
       print("Queue is Empty")
   else:
       i = front
       while True:
           print(queue[i])
           if (i == rear):
               break
           i = (i + 1) % size
   ```

---

## Complexity

| **Operation** | **Time Complexity** |
|---------------|----------------------|
| Enqueue       | O(1)                |
| Dequeue       | O(1)                |
| Display       | O(n)                |

---

## License

This project is licensed under the MIT License.

---

## Author

- **Adrishikhar Chowdhury** - Developer and Maintainer

---
