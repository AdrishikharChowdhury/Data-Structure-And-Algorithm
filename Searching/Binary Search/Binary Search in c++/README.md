
# Sorting and Searching in C++ (Iterative and Recursive Approaches)

This program demonstrates the implementation of **sorting** and **searching** algorithms in C++ using both **iterative** and **recursive** techniques. The program includes **Bubble Sort** for sorting an array and **Binary Search** for locating a target value.

---

## Features

1. **Sorting**:
   - **Bubble Sort (Iterative)**: Sorts the array in ascending order using a simple comparison and swapping mechanism.

2. **Searching**:
   - **Binary Search (Iterative)**: Uses an iterative approach to find a target value in a sorted array.
   - **Binary Search (Recursive)**: Employs recursion to divide the search space and locate the target value efficiently.

3. **User Interaction**:
   - Allows the user to input an array, sorts the array, and performs both iterative and recursive Binary Search.

---

## How It Works

1. **Input**:
   - The user specifies the size of the array and provides the elements.
   - The user enters a target value to search for in the sorted array.

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
- **Parameters**: `vector<int>& arr`, `int n`
- **Algorithm**:
  - Iteratively compares and swaps adjacent elements to sort the array.
  - Stops early if no swaps occur during a pass.
- **Time Complexity**: `O(n^2)`
- **Space Complexity**: `O(1)`

### **2. Binary Search (Iterative)**
- **Parameters**: `const vector<int>& arr`, `int target`
- **Returns**: Position of the target (1-based index) if found, or `-1` if not found.
- **Algorithm**:
  - Iteratively halves the search space until the target is found or the search space is exhausted.
- **Time Complexity**: `O(log n)`
- **Space Complexity**: `O(1)`

### **3. Binary Search (Recursive)**
- **Parameters**: `const vector<int>& arr`, `int low`, `int high`, `int target`
- **Returns**: Position of the target (1-based index) if found, or `-1` if not found.
- **Algorithm**:
  - Recursively divides the search space until the target is found or the base condition is met.
- **Time Complexity**: `O(log n)`
- **Space Complexity**: `O(log n)` (due to recursion stack)

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

- **Iterative Binary Search**:
  - Efficient memory usage with constant space.
  - Avoids potential stack overflow issues.

- **Recursive Binary Search**:
  - Cleaner and more intuitive implementation for divide-and-conquer problems.

---

## Limitations

- Bubble Sort is not efficient for large datasets due to its `O(n^2)` complexity.
- Recursive Binary Search can cause stack overflow for very large arrays.

---

## Author

This program demonstrates foundational sorting and searching algorithms in C++ for educational purposes, showcasing both iterative and recursive techniques.

---
```

---

### Key Highlights:

1. **C++ Specifics**:
   - Uses **C++ standard library** concepts like `std::vector` for arrays.
   - Includes compilation instructions for a C++ file.

2. **Generalized Description**:
   - Focuses on both iterative and recursive techniques, making it applicable for a variety of use cases.

3. **Function Details**:
   - Clearly describes the role of each function with its parameters, logic, and complexity.

4. **Example**:
   - Provides a sample input and output for clarity.
