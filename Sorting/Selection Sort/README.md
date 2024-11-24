# Selection Sort

## Overview

Selection Sort is a fundamental comparison-based sorting algorithm. It divides the array into two parts: the sorted section and the unsorted section. The algorithm repeatedly selects the smallest (or largest) element from the unsorted section and moves it to the sorted section.

---

## How It Works

1. Start with an unsorted array.
2. Identify the smallest (or largest) element in the unsorted portion of the array.
3. Swap this element with the first element of the unsorted portion.
4. Expand the sorted section by one element and repeat steps 2–3 until the array is fully sorted.

---

## Algorithm Steps

1. **Initialize**:
   - Start with the first element and treat it as the sorted section.
   - The rest of the elements are unsorted.
2. **Find the Minimum**:
   - Traverse through the unsorted section to find the smallest element.
3. **Swap**:
   - Swap the smallest element with the first unsorted element.
4. **Repeat**:
   - Continue until the entire array is sorted.

---

## Characteristics

| **Property**            | **Details**                                      |
|--------------------------|--------------------------------------------------|
| **Best Case Complexity** | \(O(n^2)\)                                       |
| **Average Case Complexity** | \(O(n^2)\)                                   |
| **Worst Case Complexity** | \(O(n^2)\)                                     |
| **Space Complexity**     | \(O(1)\) (In-place sorting)                      |
| **Stability**            | **Not Stable** (Relative order of equal elements may change) |
| **Sorting Method**       | Comparison-based                                 |

---

## Advantages
- Simple and easy to understand.
- Requires minimal memory as it works in-place.

## Disadvantages
- Inefficient for large datasets due to \(O(n^2)\) time complexity.
- Unstable, meaning the relative order of identical elements may not be preserved.

---

## Example: Step-by-Step Process

### Input:
`[64, 25, 12, 22, 11]`

### Steps:

1. **Iteration 1**: Find the smallest element (`11`) and swap it with the first element.
   - Result: `[11, 25, 12, 22, 64]`
2. **Iteration 2**: Find the next smallest element (`12`) and swap it with the second element.
   - Result: `[11, 12, 25, 22, 64]`
3. **Iteration 3**: Find the next smallest element (`22`) and swap it with the third element.
   - Result: `[11, 12, 22, 25, 64]`
4. **Iteration 4**: Find the next smallest element (`25`) and swap it with itself (no change needed).
   - Result: `[11, 12, 22, 25, 64]`

### Output:
`[11, 12, 22, 25, 64]`

---

## Pseudocode

```plaintext
function selectionSort(array):
    for i = 0 to array.length - 1:
        minIndex = i
        for j = i + 1 to array.length:
            if array[j] < array[minIndex]:
                minIndex = j
        swap(array[i], array[minIndex])
    return array
```

---

## Example Execution

### Input:
`[29, 10, 14, 37, 13]`

### Output:
`[10, 13, 14, 29, 37]`

---

## Applications
- Suitable for small datasets where simplicity is more important than efficiency.
- Often used in teaching to illustrate the basic principles of sorting algorithms.
- Works well in situations where memory usage is constrained, as it is an in-place algorithm.

---

## Notes
Selection Sort is not suitable for large datasets due to its \(O(n^2)\) time complexity. For more efficient sorting on large datasets, consider using algorithms like **Merge Sort**, **Quick Sort**, or **Heap Sort**.