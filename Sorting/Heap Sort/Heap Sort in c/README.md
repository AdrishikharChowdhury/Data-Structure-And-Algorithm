# Heap Sort Implementation in C

This project implements the **Heap Sort** algorithm in the C programming language. It provides an efficient way to sort an array of integers using the **max-heap** data structure.

## Overview

Heap Sort is a comparison-based sorting technique based on a binary heap data structure. It operates by:
1. Building a **max-heap** from the input array.
2. Repeatedly extracting the largest element (the root of the heap) and placing it at the end of the array.
3. Restoring the max-heap property for the reduced heap after each extraction.

---

## Features

- Input a custom array of integers from the user.
- Displays the unsorted array.
- Sorts the array in **ascending order** using heap sort.
- Displays the sorted array.

---

## Files

- `heap_sort.c`: Contains the complete implementation of the heap sort algorithm.
- `README.md`: This documentation file.

---

## Code Structure

### Functions

1. **`max_heapify`**
   - Ensures the max-heap property for a subtree rooted at a given index.
   - Parameters:
     - `a`: Pointer to the array.
     - `heapsize`: Current size of the heap.
     - `i`: Index of the root of the subtree.
   - Time Complexity: O(log n).

2. **`build_max_heap`**
   - Converts an unsorted array into a max-heap.
   - Parameters:
     - `a`: Pointer to the array.
     - `n`: Total size of the array.
   - Time Complexity: O(n).

3. **`heap_sort`**
   - Implements the heap sort algorithm.
   - Parameters:
     - `a`: Pointer to the array.
     - `n`: Total size of the array.
   - Returns the sorted array.
   - Time Complexity: O(n log n).

4. **`createarray`**
   - Reads the input elements from the user.
   - Parameters:
     - `a`: Pointer to the array.
     - `n`: Total size of the array.

5. **`display`**
   - Prints the elements of an array.
   - Parameters:
     - `a`: Pointer to the array.
     - `n`: Total size of the array.

---

## How to Compile and Run

### Requirements

- A C compiler (e.g., GCC).

### Steps

1. Save the code into a file named `heap_sort.c`.
2. Open a terminal and navigate to the directory containing the file.
3. Compile the code using:
   ```bash
   gcc -o heap_sort heap_sort.c
   ```
4. Run the executable:
   ```bash
   ./heap_sort
   ```

---

## Example

### Input:
```
Enter the size of the array: 5
Enter the elements:
4 10 3 5 1
```

### Output:
```
The unsorted elements are:
4   10   3   5   1   
The sorted elements are:
1   3   4   5   10   
```

---

## Explanation of Key Fix in the Code

In the `heap_sort` function:
- The loop runs from `i = n - 1` to `i >= 1`, which ensures proper swapping and avoids unnecessary heapify calls when the array is fully sorted.
- The `max_heapify` function is called with the correct heap size (`i`) after each swap, ensuring that the heap property is correctly restored for the reduced heap.

---

## Complexity Analysis

- **Time Complexity**:
  - Building the max-heap: O(n).
  - Heapify operation during sorting: O(log n) for each element.
  - Overall: O(n log n).
- **Space Complexity**:
  - In-place sorting: O(1) auxiliary space.

---

## Notes

- This program assumes the user enters valid integers as input.
- It works with dynamically allocated memory for the array.

---

## License

This project is released under the MIT License. You are free to use, modify, and distribute it as needed.