
# Recursive Bubble Sort and Binary Search in C

This program demonstrates the use of **Bubble Sort** for sorting an array and **Binary Search** for finding a target value, both implemented in **C**. The Binary Search function is implemented recursively, allowing an efficient search for the desired value in the sorted array.

---

## Features

1. **Recursive Binary Search:**
   - Efficiently finds the position of a target value in a sorted array.
   - Implements a divide-and-conquer approach using recursion.

2. **Bubble Sort (Iterative):**
   - Sorts the input array in ascending order using the classic Bubble Sort algorithm.
   - Optimized with an early exit mechanism when the array becomes sorted.

---

## How It Works

1. **Input:**
   - The user specifies the size of the array and enters the elements.
   - The user provides a target value to search in the sorted array.

2. **Sorting:**
   - The `bubble_sort` function sorts the array iteratively, ensuring the elements are in ascending order.

3. **Searching:**
   - The `bin_search` function recursively divides the search space into smaller sections, locating the target value.

4. **Output:**
   - Displays the sorted array.
   - Indicates the position of the target value or informs the user if the value is not present.

---

## Example

**Input:**
```
Enter the size of the array: 5
Enter the elements:
4
2
9
1
5
Enter the number you want to find: 9
```

**Output:**
```
The sorted elements are:
1    2    4    5    9    
value is found at position 5
```

---

## Functions

### **1. `bubble_sort`**
- **Parameters**: `int *a` (array), `int n` (size of the array).
- **Returns**: Pointer to the sorted array.
- **Algorithm**: Iteratively compares adjacent elements and swaps them if necessary, with an early exit condition if no swaps occur during a pass.

### **2. `bin_search`**
- **Parameters**: 
  - `int *a` (array): The sorted array.
  - `int low` (start index): Beginning of the search space.
  - `int high` (end index): End of the search space.
  - `int target` (value to find): The target value to locate.
- **Returns**: Position of the target (1-based index) if found, or `-1` if not found.
- **Algorithm**:
  - Recursively divides the array into smaller parts until the target is found or the search space is empty.

---

## How to Compile and Run

1. Save the code to a file, e.g., `main.c`.
2. Compile the code using:
   ```bash
   gcc main.c -o main
   ```
3. Run the program:
   ```bash
   ./main
   ```

---

## Advantages of Recursive Approach

- **Simplified Logic**: Recursion reduces the need for explicit loop constructs in the Binary Search logic.
- **Efficiency**: Binary Search reduces the search space logarithmically (`O(log n)` complexity).
- **Readability**: Recursive functions can be easier to understand for problems involving divide-and-conquer.

---

## Limitations

- **Stack Overflow**: Recursive functions may cause a stack overflow for very large input sizes due to limited recursion depth.
- **Sorting Complexity**: Bubble Sort has a time complexity of `O(n^2)`, which is not optimal for large datasets.

---

## Author

This program is written to demonstrate the implementation of recursive algorithms in C for educational purposes.

---
```

### Key Features of the README:

1. **Overview**: Explains the purpose of the program and the recursive approach used for Binary Search.
2. **Features**: Highlights recursive Binary Search and iterative Bubble Sort.
3. **Example**: Provides a sample input and output for clarity.
4. **Functions**: Describes the role of `bubble_sort` and `bin_search` in detail.
5. **Compilation Instructions**: Offers clear steps to compile and run the code.
6. **Advantages and Limitations**: Includes a balanced discussion about recursion.