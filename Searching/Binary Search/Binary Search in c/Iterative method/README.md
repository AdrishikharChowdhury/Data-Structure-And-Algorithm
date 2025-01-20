
# Bubble Sort and Binary Search (Iterative Approach)

This program demonstrates the use of **iterative Bubble Sort** and **Binary Search** algorithms in C. It allows the user to input an array, sorts the array using Bubble Sort, and then performs Binary Search to find a specified target value.

---

## Features

1. **Bubble Sort (Iterative Approach):**
   - Sorts the input array in ascending order.
   - Includes an optimization to stop sorting if the array is already sorted (no swaps in a pass).

2. **Binary Search (Iterative Approach):**
   - Searches for a user-defined target value in the sorted array.
   - Returns the 1-based position of the target if found, or a message indicating the target is not in the array.

---

## How It Works

1. **Input:**
   - The user specifies the size of the array and enters the elements.
   - The user provides a target value to search in the sorted array.

2. **Sorting:**
   - The `bubble_sort` function sorts the array iteratively, comparing adjacent elements and swapping them if needed.

3. **Searching:**
   - The `bin_search` function uses the iterative Binary Search approach to locate the target in the sorted array.

4. **Output:**
   - Displays the sorted array.
   - Indicates the position of the target value or informs the user if the value is not present.

---

## Example

**Input:**
```
Enter the size of the array: 5
Enter the elements:
7
3
5
2
9
Enter the number you want to find: 5
```

**Output:**
```
The sorted elements are:
2   3   5   7   9
value is found at position 3
```

---

## Functions

1. **`bubble_sort`**:
   - **Parameters**: `int *a` (array), `int n` (size of the array).
   - **Returns**: Pointer to the sorted array.
   - **Algorithm**: Iteratively compares adjacent elements and swaps them if necessary. Optimized to stop if no swaps occur during a pass.

2. **`bin_search`**:
   - **Parameters**: `int *a` (array), `int n` (size of the array).
   - **Returns**: Position of the target (1-based) if found, or `-1` if not found.
   - **Algorithm**: Uses an iterative Binary Search approach by repeatedly halving the search space.

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

## Limitations

- The array size is determined at runtime using dynamic memory allocation.
- Binary Search only works on sorted arrays (handled by Bubble Sort in this program).

---

## Author

This program was written to demonstrate sorting and searching techniques using iterative approaches in C.

---
```

### Key Points in the README:
1. **Introduction**: Explains the purpose of the code.
2. **Features**: Highlights Bubble Sort and Binary Search as iterative methods.
3. **Example**: Provides a sample input/output for clarity.
4. **Functions**: Briefly describes the role of `bubble_sort` and `bin_search`.
5. **Compilation**: Provides steps to compile and run the program.