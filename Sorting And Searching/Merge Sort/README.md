# Merge Sort

## Overview

Merge Sort is a divide-and-conquer algorithm that splits an array into smaller subarrays, sorts those subarrays, and merges them back together to form the sorted array. It is an efficient and stable sorting algorithm with a time complexity of \(O(n \log n)\) in all cases.

---

## How Merge Sort Works

1. **Divide**: The array is recursively divided into two halves until each subarray contains a single element.
2. **Conquer**: Each pair of subarrays is merged into a sorted array.
3. **Combine**: This process continues until all subarrays are merged into a single sorted array.

---

## Key Characteristics

- **Stable Sort**: Maintains the relative order of equal elements.
- **Divide-and-Conquer**: Breaks down the problem into smaller problems and combines solutions.
- **Time Complexity**: \(O(n \log n)\) for all cases (best, average, and worst).
- **Space Complexity**: Requires \(O(n)\) additional space for temporary arrays.

---

## Algorithm Steps

1. **Base Case**: If the array has one or zero elements, it is already sorted.
2. **Recursive Division**:
   - Find the midpoint of the array.
   - Recursively apply Merge Sort to the left and right halves.
3. **Merge**:
   - Combine two sorted halves into a single sorted array.

---

## Pseudo-code

```plaintext
function mergeSort(array):
    if length(array) <= 1:
        return array

    mid = length(array) // 2
    left = mergeSort(array[0:mid])
    right = mergeSort(array[mid:])

    return merge(left, right)

function merge(left, right):
    result = []
    while left is not empty and right is not empty:
        if left[0] <= right[0]:
            result.append(left.pop(0))
        else:
            result.append(right.pop(0))

    result += left
    result += right
    return result
```

---

## Time and Space Complexity

| Complexity | Best Case       | Average Case    | Worst Case       | Space Complexity |
|------------|-----------------|-----------------|------------------|-------------------|
| **Time**   | \(O(n \log n)\) | \(O(n \log n)\) | \(O(n \log n)\)  | \(O(n)\)          |

---

## Advantages

- **Efficient for Large Data**: Performs well even for large datasets.
- **Stable Sort**: Preserves the order of duplicate values.
- **Predictable Performance**: Consistent time complexity of \(O(n \log n)\).

---

## Disadvantages

- **Space Complexity**: Requires additional memory proportional to the array size.
- **Not In-Place**: Uses extra space to store intermediate results.

---

## Applications

- **Sorting Large Data**: Useful for sorting linked lists or large datasets.
- **External Sorting**: Suitable for scenarios where data doesn't fit into memory, as it can sort data from disk efficiently.

---

## Example

### Input
```
Array: [38, 27, 43, 3, 9, 82, 10]
```

### Process
1. Split: `[38, 27, 43, 3, 9, 82, 10]` → `[38, 27, 43]` and `[3, 9, 82, 10]`
2. Further Split: `[38, 27, 43]` → `[38]` and `[27, 43]`
3. Sort and Merge: `[27, 38, 43]`
4. Continue until the entire array is sorted.

### Output
```
Sorted Array: [3, 9, 10, 27, 38, 43, 82]
```

---

## License

This project is open-source and available for educational and practical use. Modify or redistribute as needed.