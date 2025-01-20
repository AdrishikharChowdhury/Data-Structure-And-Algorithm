
# Sorting and Searching in C++ (Bubble Sort and Recursive Binary Search)

This program demonstrates the use of **Bubble Sort** and **Binary Search** algorithms in C++. The program sorts an array of integers using the **iterative Bubble Sort** algorithm and searches for a specific target using the **recursive Binary Search** approach.

---

## Features

1. **Bubble Sort**:
   - Sorts the array in ascending order.
   - Implements a straightforward comparison and swapping mechanism.

2. **Binary Search**:
   - Searches for a target element in the sorted array using recursion.
   - Efficiently divides the search space into halves.

3. **Dynamic Input**:
   - Accepts user input for the array size and elements.
   - Allows the user to specify a target value for searching.

---

## How It Works

1. **Input**:
   - The user enters the size of the array and its elements.
   - The user provides a target value to search in the sorted array.

2. **Sorting**:
   - The array is sorted in ascending order using the **iterative Bubble Sort** algorithm.

3. **Searching**:
   - The program searches for the target value using the **recursive Binary Search

**approach**. It returns the position of the target if found or indicates that the element is not present.

4. **Output**:
   - Displays the sorted array.
   - Displays the position of the target element (1-based index) if found, or informs the user that the target is not in the array.

---

## Example

### **Input**:
```
Enter the size of the array: 5
Enter the elements:
34
12
56
78
23
Enter the value you want to search: 56
```

### **Output**:
```
This is your sorted elements: 
12 23 34 56 78 
Element found at pos 4
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
- **Definition**: `int binary_search(vector<int>& nums, int low, int high, int k)`
- **Parameters**:
  - `nums` - A reference to the sorted vector of integers.
  - `low` - The starting index of the search space.
  - `high` - The ending index of the search space.
  - `k` - The target value to search for.
- **Algorithm**:
  - Recursively divides the search space until the target value is found or the search space is exhausted.
- **Time Complexity**: `O(log n)`
- **Space Complexity**: `O(log n)` (due to recursion stack).

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
  - Suitable for small datasets.

- **Binary Search (Recursive)**:
  - Efficient for searching in sorted arrays.
  - Cleaner implementation using recursion.

---

## Limitations

- **Bubble Sort**:
  - Inefficient for large datasets due to `O(n^2)` complexity.
  
- **Binary Search**:
  - Requires the array to be sorted beforehand.
  - Recursive implementation may cause stack overflow for very large datasets.

---

## Author

This program demonstrates fundamental sorting and searching algorithms in C++ for educational purposes, showcasing dynamic input handling and the use of standard library features like `std::vector`.

---