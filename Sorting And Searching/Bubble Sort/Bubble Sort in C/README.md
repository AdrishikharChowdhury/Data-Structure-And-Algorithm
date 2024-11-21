# Bubble Sort Program

This program demonstrates the **Bubble Sort** algorithm for sorting an array of integers. The program allows the user to create an array of integers, display the unsorted array, sort the array using the Bubble Sort method, and then display the sorted array.

---

## Features

1. **Create an Array**: Allows the user to input an array of integers.
2. **Display Array**: Displays the array elements.
3. **Bubble Sort Algorithm**: Implements the Bubble Sort algorithm to sort the array in ascending order.

---

## How It Works

1. **Input**:
   - The user specifies the size of the array.
   - The user enters the elements of the array.

2. **Process**:
   - The unsorted array is displayed.
   - The array is sorted using the Bubble Sort algorithm.
   - The sorted array is displayed.

3. **Output**:
   - Displays the array before and after sorting.

---

## Code Functions

### 1. `main()`
- Controls the flow of the program.
- Prompts the user for the size of the array and its elements.
- Calls other functions to sort and display the array.

### 2. `createarray(int *a, int n)`
- Inputs the elements of the array from the user.
- Parameters:
  - `a`: Pointer to the array.
  - `n`: Size of the array.
- Returns the pointer to the array with user-entered values.

### 3. `bubble_sort(int *a, int n)`
- Implements the Bubble Sort algorithm to sort the array.
- Parameters:
  - `a`: Pointer to the array.
  - `n`: Size of the array.
- Returns the pointer to the sorted array.

#### Bubble Sort Algorithm:
- Compares adjacent elements in the array.
- Swaps them if they are in the wrong order (i.e., the first is greater than the second).
- Repeats until the array is sorted.

### 4. `display(int *a, int n)`
- Displays the elements of the array.
- Parameters:
  - `a`: Pointer to the array.
  - `n`: Size of the array.

---

## Example Execution

### Input:
```
Enter the size of the array: 5
Enter the elements:
34 12 5 78 1
```

### Output:
```
The unsorted elements are:
34	12	5	78	1
The sorted elements are:
1	5	12	34	78
```

---

## Notes

- Ensure that the size of the array is positive.
- The Bubble Sort algorithm is simple to implement but not efficient for large datasets (Time Complexity: \(O(n^2)\)).

---

## Usage

This program can be used to:
1. Understand the implementation of Bubble Sort.
2. Practice pointer-based array manipulations in C.

---

## Compilation and Execution

1. Save the code in a file, e.g., `bubble_sort.c`.
2. Compile the program using a C compiler:
   ```
   gcc bubble_sort.c -o bubble_sort
   ```
3. Run the executable:
   ```
   ./bubble_sort
   ```