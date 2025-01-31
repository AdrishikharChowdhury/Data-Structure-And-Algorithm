
# Circular Queue Implementation using Linked List in C

## Overview
This project demonstrates the implementation of a **Circular Queue** using a **linked list** in C. A Circular Queue follows the **FIFO (First In, First Out) principle** but allows elements to be **wrapped around** when space is available.

## Features
- **Enqueue (Insertion)**: Adds an element to the queue.
- **Dequeue (Deletion)**: Removes an element from the front of the queue.
- **Display**: Shows the elements of the queue.
- **Circular Nature**: Ensures that when an element is removed, new elements can be added **without shifting other elements**.

## How It Works
1. **A new queue is initialized with the first element.**
2. **Enqueue (`enq`)**: Adds an element at the end while maintaining the circular link.
3. **Dequeue (`deq`)**: Removes the front element and updates the queue’s circular structure.
4. **Display (`display`)**: Prints all elements in the queue.

## Code Structure
- **`main()`**: Handles user input and function calls.
- **`enq(cq *front, int data)`**: Inserts a new element at the end of the queue.
- **`deq(cq *front)`**: Removes the front element and adjusts pointers accordingly.
- **`display(cq *front)`**: Prints all elements in the queue.

## Compilation and Execution
### **To Compile:**
```bash
gcc circular_queue.c -o circular_queue
```

### **To Run:**
```bash
./circular_queue
```

## Example Usage
```bash
Creation of Circular Queue
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
10 has been retrieved

Your choice: 3
Queue Elements: 20 30

Your choice: 4
Thank you for using this program :)
```

## Edge Cases Handled
✅ **Empty Queue Check**  
✅ **Single Element Queue Deletion**  
✅ **Maintaining Circular Links on Insertions & Deletions**  
✅ **Ensuring Proper Memory Allocation and Pointer Updates**  

## Improvements & Fixes
- **Fixed Infinite Loop in `display()`** (Now properly prints all elements)
- **Ensured Memory Safety** (Proper `malloc` handling)
- **Edge Case Handling** (Single element case fixed in `deq()`)

## License
This project is licensed under the **MIT License**.
