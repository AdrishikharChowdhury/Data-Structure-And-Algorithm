# Double-Ended Queue (DEQueue) Implementation in C

This program demonstrates the implementation of a **Double-Ended Queue (DEQueue)** using an array in C. A DEQueue allows insertion and deletion of elements from both ends (front and rear).

---

## Features
1. **Insert at the beginning**: Add an element to the front of the queue.
2. **Insert at the end**: Add an element to the rear of the queue.
3. **Delete from the beginning**: Remove an element from the front of the queue.
4. **Delete from the end**: Remove an element from the rear of the queue.
5. **Display the queue**: View all elements in the queue.

---

## How to Compile and Run
1. Save the code to a file, e.g., `dequeue.c`.
2. Open a terminal and navigate to the directory containing the file.
3. Compile the program using the following command:
   ```bash
   gcc dequeue.c -o dequeue
   ```
4. Run the program:
   ```bash
   ./dequeue
   ```

---

## Usage
- When you run the program, you will be prompted to enter the size of the queue.
- Then, you can choose from the menu to perform various operations on the DEQueue.

### Menu Options:
1. **Insert from beginning**: Add an element to the front.
2. **Delete from beginning**: Remove an element from the front.
3. **Insert from end**: Add an element to the rear.
4. **Delete from end**: Remove an element from the rear.
5. **Display the DEQueue**: View all elements in the DEQueue.
6. **Exit**: Terminate the program.

---

## Code Explanation

### Functions:
1. **`insertbeginning`**:
   - Adds an element to the front of the queue.
   - Handles cases where the queue is full or empty.

2. **`insertend`**:
   - Adds an element to the rear of the queue.
   - Handles cases where the queue is full or empty.

3. **`deletebeg`**:
   - Removes and returns an element from the front.
   - Handles cases where the queue is empty.

4. **`deleteend`**:
   - Removes and returns an element from the rear.
   - Handles cases where the queue is empty.

5. **`display`**:
   - Prints all the elements in the queue from front to rear.
   - Uses modulo arithmetic to handle the circular nature of the array.

---

## Example Output
```text
Enter the size of the array: 5

Enter your choice:
1.Insert from beginning
2.Delete from Beginning
3.Insert from end
4.Delete from end
5.Display The Double Ended queue
6.Exit
Your choice: 1
Enter the data to insert at the beginning: 10
10 has been inserted

Enter your choice:
1.Insert from beginning
2.Delete from Beginning
3.Insert from end
4.Delete from end
5.Display The Double Ended queue
6.Exit
Your choice: 3
Enter the data to insert at the end: 20
20 has been inserted

Enter your choice:
1.Insert from beginning
2.Delete from Beginning
3.Insert from end
4.Delete from end
5.Display The Double Ended queue
6.Exit
Your choice: 5
DEQueue elements are: 10 20

Enter your choice:
1.Insert from beginning
2.Delete from Beginning
3.Insert from end
4.Delete from end
5.Display The Double Ended queue
6.Exit
Your choice: 6
Thank you for using this program :)
```

---

## Error Codes
- **`404`**: Returned when attempting to delete from an empty queue.

---

## Limitations
1. The maximum size of the queue is fixed and determined at runtime.
2. It uses a circular array implementation; hence, care must be taken to handle wraparounds correctly.

---

## Author
This program was written to demonstrate the basic functionality of a Double-Ended Queue (DEQueue) in C.

Feel free to improve or expand upon it!