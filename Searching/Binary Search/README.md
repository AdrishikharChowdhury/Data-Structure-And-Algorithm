# Binary Search

## Overview

Binary Search is a highly efficient algorithm used to find the position of a target element within a sorted dataset. The algorithm works by repeatedly dividing the search interval in half and discarding the half where the target cannot exist. Due to its logarithmic time complexity, Binary Search is one of the fastest searching algorithms for sorted data.

---

## How Binary Search Works

1. **Start with a sorted array.**
2. **Define two pointers**: `left` pointing to the start and `right` pointing to the end of the array.
3. Calculate the **middle index**:  
   \[
   \text{mid} = \lfloor \frac{\text{left} + \text{right}}{2} \rfloor
   \]
4. Compare the middle element with the target:
   - If the middle element equals the target, return its index.
   - If the middle element is smaller than the target, adjust the `left` pointer to `mid + 1`.
   - If the middle element is larger than the target, adjust the `right` pointer to `mid - 1`.
5. Repeat steps 3-4 until the target is found or the pointers overlap (`left > right`).

---

## Properties

- **Dataset Requirement**: The array must be sorted before performing Binary Search.
- **Best Case Time Complexity**: \(O(1)\) (when the target is found at the middle index).
- **Average Case Time Complexity**: \(O(\log n)\).
- **Worst Case Time Complexity**: \(O(\log n)\).
- **Space Complexity**: \(O(1)\) (iterative implementation) or \(O(\log n)\) (recursive implementation due to stack space).

---

## Advantages of Binary Search

- **Fast**: Performs efficiently on large datasets with \(O(\log n)\) time complexity.
- **Deterministic**: Guarantees a result (success or failure) for every search attempt.
- **Memory Efficient**: Does not require additional memory in its iterative implementation.

---

## Disadvantages of Binary Search

- **Sorting Requirement**: Works only on sorted datasets, requiring preprocessing.
- **Static Dataset**: Inefficient for dynamic datasets where frequent insertions or deletions occur.
- **Non-Applicability**: Not suitable for unsorted or data structures other than arrays.

---

## Example Code

### Iterative Implementation
```c
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;  // Avoid overflow
        if (arr[mid] == target) {
            return mid;  // Target found
        } else if (arr[mid] < target) {
            left = mid + 1;  // Search the right half
        } else {
            right = mid - 1;  // Search the left half
        }
    }
    return -1;  // Target not found
}
```

### Recursive Implementation
```c
int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;  // Target not found
    }
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) {
        return mid;  // Target found
    } else if (arr[mid] < target) {
        return binarySearchRecursive(arr, mid + 1, right, target);  // Right half
    } else {
        return binarySearchRecursive(arr, left, mid - 1, target);  // Left half
    }
}
```

---

## Example Input and Output

### Example 1
#### Input:
```plaintext
Array: [1, 3, 5, 7, 9, 11, 13]
Target: 7
```
#### Output:
```plaintext
Index: 3
```

### Example 2
#### Input:
```plaintext
Array: [2, 4, 6, 8, 10, 12]
Target: 5
```
#### Output:
```plaintext
Index: -1 (Target not found)
```

---

## Applications

1. **Search Engines**: Efficient data retrieval from sorted datasets.
2. **Databases**: Quick lookup of records in sorted tables.
3. **Competitive Programming**: Solving search-related problems with large constraints.
4. **Game Development**: Finding player ranks or leaderboard positions.
5. **Libraries and APIs**: Used in standard functions like `std::binary_search` in C++.

---

## Complexity Comparison

| Search Type      | Time Complexity | Space Complexity | Dataset Requirement |
|-------------------|-----------------|-------------------|----------------------|
| **Linear Search** | \(O(n)\)        | \(O(1)\)          | None                 |
| **Binary Search** | \(O(\log n)\)   | \(O(1)\) or \(O(\log n)\) (recursive) | Sorted Array        |

---

## Steps to Use Binary Search

1. Ensure the dataset is sorted.
2. Choose between **iterative** or **recursive** implementation based on the application's constraints.
3. Implement the algorithm and handle edge cases, such as:
   - Empty arrays.
   - Targets not present in the array.
   - Duplicate elements (if applicable).

---

## Limitations

- Binary Search works only on sorted datasets.
- Requires a predefined structure, like arrays.
- Recursive implementation can lead to stack overflow for large datasets.

---

## License

This documentation is open-source and can be modified or distributed for educational purposes.