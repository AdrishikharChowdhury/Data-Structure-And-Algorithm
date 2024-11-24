# Bubble Sort Algorithm

## Overview
**Bubble Sort** is one of the simplest sorting algorithms in computer science. It works by repeatedly stepping through the list, comparing adjacent elements, and swapping them if they are in the wrong order. This process is repeated until the list is sorted.

---

## How It Works
1. Start from the beginning of the list.
2. Compare adjacent elements:
   - If the current element is greater than the next, swap them.
   - Otherwise, move to the next pair.
3. Repeat this process for all elements.
4. With each pass, the largest unsorted element "bubbles" to its correct position.
5. Continue until the entire list is sorted.

---

## Algorithm Steps
1. **Outer Loop**:
   - Runs `n-1` times for a list of size `n`.
2. **Inner Loop**:
   - Iterates through the unsorted portion of the list and compares adjacent elements.
3. **Optimization**:
   - If no swaps are performed in an iteration, the list is already sorted, and the algorithm terminates early.

---

## Pseudocode
```text
procedure bubbleSort(array):
    n = length(array)
    for i from 0 to n-1:
        swapped = false
        for j from 0 to n-i-2:
            if array[j] > array[j+1]:
                swap(array[j], array[j+1])
                swapped = true
        if not swapped:
            break
```

---

## Time Complexity
- **Best Case (Already Sorted)**: O(n)
- **Average Case**: O(n²)
- **Worst Case (Reverse Sorted)**: O(n²)

### Space Complexity
- O(1) (In-place sorting)

---

## Implementation in C

### Example Code
```c
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp, swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0;

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap adjacent elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        // If no swaps were made, the array is sorted
        if (!swapped)
            break;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
```

---

## Input/Output Example

### Input
Unsorted Array:  
`64 34 25 12 22 11 90`

### Output
Sorted Array:  
`11 12 22 25 34 64 90`

---

## Advantages
1. **Simple to Implement**: Easy to code and understand.
2. **Adaptive**: Stops early if the list becomes sorted before completing all iterations.

---

## Disadvantages
1. **Inefficient for Large Datasets**: Its O(n²) complexity makes it unsuitable for large input sizes.
2. **Not the Best Choice**: Other algorithms like **Merge Sort**, **Quick Sort**, or **Heap Sort** are generally more efficient.

---

## Use Cases
1. Small datasets where simplicity is prioritized.
2. Educational purposes to demonstrate the basics of sorting.

---

## Summary
Bubble Sort is a foundational sorting algorithm, ideal for learning and small-scale applications. However, due to its inefficiency with large datasets, it is not commonly used in production environments.