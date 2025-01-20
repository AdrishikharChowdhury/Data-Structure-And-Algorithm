
# Sorting and Searching in C (Iterative and Recursive Approaches)

This program demonstrates the implementation of **sorting** and **searching** algorithms in C, using both **iterative** and **recursive** techniques. It includes **Bubble Sort** for sorting an array and **Binary Search** for locating a target value in the sorted array.

---

## Features

1. **Sorting**:
   - **Bubble Sort (Iterative)**: Sorts the array in ascending order using an efficient comparison and swapping mechanism.
   - Designed for simplicity and clarity.

2. **Searching**:
   - **Binary Search (Iterative)**: Iteratively searches for a target value by halving the search space at each step.
   - **Binary Search (Recursive)**: Utilizes recursion to divide and conquer the search space, reducing complexity.

3. **User-Friendly**:
   - Prompts the user for input, sorts the data, and allows the user to search for a specific target value.

---

## How It Works

1. **Input**:
   - The user specifies the size of the array and enters the elements.
   - The user provides a target value to search for in the sorted array.

2. **Sorting**:
   - The array is sorted using the **iterative Bubble Sort** algorithm.

3. **Searching**:
   - The user can choose between **iterative** or **recursive Binary Search** to find the target value in the sorted array.

4. **Output**:
   - Displays the sorted array.
   - Indicates whether the target value is found and its position (1-based index).

---

## Example

### **Input**:
```
Enter the size of the array: 6
Enter the elements:
34
12
56
78
23
5
Enter the number you want to find: 56
```

### **Output**:
```
The sorted elements are:
5    12    23    34    56    78    
Using Iterative Binary Search: Value is found at position 5
Using Recursive Binary Search: Value is found at position 5
```

---

## Functions

### **1. Bubble Sort (Iterative)**
- **Parameters**: `int *a` (array), `int n` (size of the array).
- **Returns**: Pointer to the sorted array.
- **Algorithm**:
  - Iteratively compares and swaps adjacent elements to sort the array.
  - Optimized to exit early if no swaps occur during a pass.
- **Time Complexity**: `O(n^2)`
- **Space Complexity**: `O(1)`

### **2. Binary Search (Iterative)**
- **Parameters**: 
  - `int *a` (array): The sorted array.
  - `int n` (size of the array).
  - `int target` (value to find).
- **Returns**: Position of the target (1-based index) if found, or `-1` if not found.
- **Algorithm**:
  - Halves the search space iteratively until the target is found or the search space is exhausted.
- **Time Complexity**: `O(log n)`
- **Space Complexity**: `O(1)`

### **3. Binary Search (Recursive)**
- **Parameters**: 
  - `int *a` (array): The sorted array.
  - `int low` (start index).
  - `int high` (end index).
  - `int target` (value to find).
- **Returns**: Position of the target (1-based index) if found, or `-1` if not found.
- **Algorithm**:
  - Recursively divides the search space until the target is found or the base condition is met.
- **Time Complexity**: `O(log n)`
- **Space Complexity**: `O(log n)` (due to recursion stack).

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

## Advantages

- **Iterative Binary Search**:
  - More efficient memory usage (constant space).
  - Avoids stack overflow issues.

- **Recursive Binary Search**:
  - Cleaner and more intuitive code for divide-and-conquer problems.

---

## Limitations

- Bubble Sort is not suitable for large datasets due to its `O(n^2)` complexity.
- Recursive functions may cause stack overflow for very large input sizes.

---

## Author

This program demonstrates foundational sorting and searching algorithms in C, using both iterative and recursive methods, for educational purposes.

---
```

---

### Key Highlights:

1. **Generalized Description**:
   - The README describes both iterative and recursive approaches, making it useful for general audiences.

2. **Function Details**:
   - Highlights the parameters, return values, algorithms, and complexity for each function.

3. **Advantages and Limitations**:
   - Discusses the trade-offs between iterative and recursive approaches.

4. **Example**:
   - Provides a clear input/output example to help users understand program behavior.
