# Linear Search

## Overview

Linear Search is a simple and straightforward searching algorithm used to find the position of a target element in an array or list. The algorithm sequentially checks each element of the dataset until the desired element is found or the end of the dataset is reached.

---

## How Linear Search Works

1. Start from the first element of the dataset.
2. Compare each element with the target:
   - If the current element matches the target, return its position.
   - If not, move to the next element.
3. Continue until:
   - The target is found (success).
   - The end of the dataset is reached without finding the target (failure).

---

## Properties

- **Dataset Requirement**: Works on unsorted or sorted datasets.
- **Best Case Time Complexity**: \(O(1)\) (when the target is the first element).
- **Average Case Time Complexity**: \(O(n)\).
- **Worst Case Time Complexity**: \(O(n)\) (when the target is at the end or not present).
- **Space Complexity**: \(O(1)\) (no additional space is required).

---

## Advantages of Linear Search

- **Simplicity**: Easy to implement and understand.
- **No Preprocessing**: Does not require the dataset to be sorted.
- **Versatility**: Can work on any dataset, including unsorted or dynamic arrays.

---

## Disadvantages of Linear Search

- **Inefficiency**: Slower compared to more advanced algorithms like Binary Search for large datasets.
- **Ineffective for Large Data**: Linear Search is not suitable for scenarios requiring frequent searches on large datasets.

---

## Example Code

### C Implementation
```c
#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index of the target
        }
    }
    return -1;  // Target not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int result = linearSearch(arr, size, target);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
```

---

## Example Input and Output

### Example 1
#### Input:
```plaintext
Array: [1, 3, 5, 7, 9]
Target: 5
```
#### Output:
```plaintext
Index: 2
```

### Example 2
#### Input:
```plaintext
Array: [4, 6, 8, 10, 12]
Target: 15
```
#### Output:
```plaintext
Index: -1 (Target not found)
```

---

## Applications

1. **Small Datasets**: Simple and effective for small datasets where the overhead of advanced algorithms is unnecessary.
2. **Dynamic Data**: Useful for searching in datasets that are frequently updated and not sorted.
3. **Unstructured Data**: Works for lists or arrays where sorting is impractical.

---

## Complexity Comparison

| Search Type      | Time Complexity | Space Complexity | Dataset Requirement |
|-------------------|-----------------|-------------------|----------------------|
| **Linear Search** | \(O(n)\)        | \(O(1)\)          | None                 |
| **Binary Search** | \(O(\log n)\)   | \(O(1)\) or \(O(\log n)\) (recursive) | Sorted Array        |

---

## Advantages Over Binary Search

- **No Sorting Needed**: Linear Search can handle unsorted data.
- **Dynamic Datasets**: Works seamlessly with datasets that are updated frequently.
- **No Memory Overhead**: Requires no extra memory or preprocessing.

---

## Limitations

- Linear Search is inefficient for large datasets due to its \(O(n)\) time complexity.
- It does not leverage any data organization for performance improvement, making it slower compared to algorithms like Binary Search.

---

## Steps to Implement Linear Search

1. Traverse the dataset sequentially.
2. Compare each element with the target.
3. If a match is found, return the position; otherwise, return `-1` if the target is not found.

---

## License

This documentation is open-source and can be modified or distributed for educational purposes.