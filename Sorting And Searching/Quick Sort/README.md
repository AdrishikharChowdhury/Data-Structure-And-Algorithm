# Quick Sort Algorithm

This repository contains an implementation of the **Quick Sort** algorithm, a highly efficient sorting technique that follows the **divide-and-conquer** strategy. Quick Sort works by selecting a "pivot" element, partitioning the array around the pivot, and then recursively sorting the subarrays.

---

## Features

- **Divide and Conquer Approach**: Efficiently sorts arrays by partitioning them into smaller sections.
- **In-Place Sorting**: Requires minimal additional memory.
- **Recursive Implementation**: Straightforward, modular code for easy understanding.

---

## How Quick Sort Works

1. **Choose a Pivot**:
   Select an element from the array to act as the pivot.

2. **Partition the Array**:
   Rearrange elements such that:
   - Elements smaller than the pivot are on the left.
   - Elements larger than the pivot are on the right.

3. **Recursively Apply Quick Sort**:
   Recursively sort the subarrays to the left and right of the pivot.

---

## Advantages

- **Time Complexity**:
  - Best Case: `O(n log n)`
  - Average Case: `O(n log n)`
- **Space Complexity**:
  - `O(log n)` for recursive calls.

- Efficient for large datasets compared to other sorting algorithms like Bubble Sort or Selection Sort.

---

## How to Use

1. **Compile the Code**:
   ```bash
   gcc quick_sort.c -o quick_sort
   ```

2. **Run the Program**:
   ```bash
   ./quick_sort
   ```

3. **Input Data**:
   - Enter the size of the array.
   - Enter the elements to sort.

4. **View Output**:
   - The program will display the unsorted and sorted arrays.

---

## Code Structure

### Main Functions

1. **`quick_sort(int *a, int low, int high)`**:
   - Recursively sorts the array.
   - Parameters:
     - `a`: Array to sort.
     - `low`: Starting index.
     - `high`: Ending index.

2. **`partition(int *a, int low, int high)`**:
   - Partitions the array around the pivot.
   - Returns the pivot index.

3. **Helper Functions**:
   - **`createarray`**: To populate the array with user inputs.
   - **`display`**: To print the array elements.

---

## Sample Input/Output

### Example

#### Input:
```
Enter the size of the array: 6
Enter the elements:
34
7
23
32
5
62
```

#### Output:
```
The unsorted elements are:
34      7       23      32      5       62

The sorted elements are:
5       7       23      32      34      62
```

---

## Limitations

- **Worst Case**: Occurs when the pivot divides the array poorly (e.g., sorted arrays with the first/last element as pivot), resulting in `O(n^2)` time complexity. This can be mitigated by:
  - Using random pivots.
  - Selecting the middle element as the pivot.

---

## Contributing

You can contribute by:
- Optimizing the pivot selection process.
- Adding iterative implementations.
- Including performance benchmarks.

---

## License

This project is licensed under the MIT License. Feel free to use, modify, and share the code as needed.