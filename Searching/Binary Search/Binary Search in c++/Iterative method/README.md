
# Sorting and Searching in C++ (Bubble Sort and Iterative Binary Search)

This program demonstrates the implementation of **Bubble Sort** and **Binary Search** algorithms in C++. The Bubble Sort algorithm is used to sort an array of integers in ascending order, and Binary Search (iterative approach) is employed to efficiently find a target value in the sorted array.

---

## Features

1. **Bubble Sort**:
   - Sorts the array in ascending order.
   - Implements a straightforward comparison and swapping mechanism.

2. **Binary Search**:
   - Uses an iterative approach to search for a target value in the sorted array.
   - Efficiently reduces the search space with each iteration.

3. **Dynamic Input**:
   - Allows the user to input an array size and elements.
   - Enables the user to specify a target value for searching.

---

## How It Works

1. **Input**:
   - The user specifies the size of the array and provides its elements.
   - The user inputs a target value to search in the sorted array.

2. **Sorting**:
   - The `bubblesort` function sorts the array in ascending order using the Bubble Sort algorithm.

3. **Searching**:
   - The `binary_search` function searches for the target value in the sorted array using an iterative approach.

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
Enter the value you want to search: 56
```

### **Output**:
```
This is your sorted elements: 
5 12 23 34 56 78 
Element found at pos 5
```

---

## Functions

### **1. Bubble Sort**
- **Definition**: `void bubblesort(vector<int>& nums)`
- **Parameters**: `nums` - A reference to the vector of integers.
- **Algorithm**:
  - Iteratively compares and swaps adjacent elements to sort the array in ascending order.
- **Time Complexity**: `O(n^2)`
- **Space Complexity**: `O(1)`

### **2. Binary Search**
- **Definition**: `int binary_search(vector<int>& nums, int k)`
- **Parameters**:
  - `nums` - A reference to the sorted vector of integers.
  - `k` - The target value to find.
- **Algorithm**:
  - Iteratively divides the search space until the target is found or the search space is exhausted.
- **Returns**: Position of the target (0-based index) if found, or `-1` if not found.
- **Time Complexity**: `O(log n)`
- **Space Complexity**: `O(1)`

---

## How to Compile and Run

1. Save the code to a file, e.g., `main.cpp`.
2. Compile the code using:
   ```bash
   g++ main.cpp -o main
   ```
3. Run the program:
   ```bash
   ./main
   ```

---

## Advantages

- **Bubble Sort**:
  - Simple to implement and understand.
  - Works well for small datasets.

- **Binary Search**:
  - Highly efficient for searching in sorted arrays due to logarithmic complexity.

---

## Limitations

- **Bubble Sort**:
  - Inefficient for large datasets due to `O(n^2)` complexity.

- **Binary Search**:
  - Requires the array to be sorted beforehand.

---

## Author

This program is a basic demonstration of sorting and searching algorithms in C++ for educational purposes, showcasing dynamic input handling and the use of `std::vector` for array manipulation.

---
```

---

### Key Highlights:

1. **General Overview**:
   - Explains the purpose of the program and its key features.

2. **Functions**:
   - Describes `bubblesort` and `binary_search` with parameters, logic, and complexity.

3. **Example**:
   - Provides a clear input/output example to guide users.

4. **Compilation and Execution**:
   - Offers straightforward steps to compile and run the program.
