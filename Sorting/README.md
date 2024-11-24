# Sorting

## Overview

Sorting refers to rearranging elements in a specific order, typically ascending or descending. It is a fundamental operation in computer science, used to optimize processes such as searching, data analysis, and visualization.

---

## Sorting Algorithms

### Common Sorting Algorithms

1. **Bubble Sort**:
   - Repeatedly swaps adjacent elements if they are in the wrong order.
   - **Time Complexity**: \(O(n^2)\)
   - **Space Complexity**: \(O(1)\)

2. **Selection Sort**:
   - Repeatedly selects the smallest element and places it in its correct position.
   - **Time Complexity**: \(O(n^2)\)
   - **Space Complexity**: \(O(1)\)

3. **Insertion Sort**:
   - Builds the sorted array one element at a time by inserting elements into their correct position.
   - **Time Complexity**: \(O(n^2)\)
   - **Space Complexity**: \(O(1)\)

4. **Merge Sort**:
   - Divides the array into halves, sorts each half, and merges them.
   - **Time Complexity**: \(O(n \log n)\)
   - **Space Complexity**: \(O(n)\)

5. **Quick Sort**:
   - Divides the array using a pivot and sorts the partitions recursively.
   - **Time Complexity**: 
     - Best Case: \(O(n \log n)\)
     - Worst Case: \(O(n^2)\)
   - **Space Complexity**: \(O(\log n)\)

6. **Heap Sort**:
   - Converts the array into a heap and repeatedly extracts the maximum/minimum.
   - **Time Complexity**: \(O(n \log n)\)
   - **Space Complexity**: \(O(1)\)

7. **Radix Sort**:
   - Sorts elements digit by digit, starting from the least significant digit.
   - **Time Complexity**: \(O(nk)\), where \(k\) is the number of digits.
   - **Space Complexity**: \(O(n + k)\)

---

## Use Cases

### Sorting Applications
- **Data Analysis**: Arranging data for easier visualization and insights.
- **Searching Optimization**: Many searching algorithms (e.g., Binary Search) require sorted data.
- **Scheduling**: Organizing tasks or jobs by priority or deadline.
- **Database Management**: Sorting records for faster query execution.

---

## Comparisons

| Algorithm         | Best Case    | Average Case | Worst Case   | Space Complexity |
|--------------------|--------------|--------------|--------------|-------------------|
| **Bubble Sort**    | \(O(n)\)     | \(O(n^2)\)   | \(O(n^2)\)   | \(O(1)\)          |
| **Selection Sort** | \(O(n^2)\)   | \(O(n^2)\)   | \(O(n^2)\)   | \(O(1)\)          |
| **Insertion Sort** | \(O(n)\)     | \(O(n^2)\)   | \(O(n^2)\)   | \(O(1)\)          |
| **Merge Sort**     | \(O(n \log n)\)| \(O(n \log n)\)| \(O(n \log n)\)| \(O(n)\)        |
| **Quick Sort**     | \(O(n \log n)\)| \(O(n \log n)\)| \(O(n^2)\)   | \(O(\log n)\)     |
| **Heap Sort**      | \(O(n \log n)\)| \(O(n \log n)\)| \(O(n \log n)\)| \(O(1)\)        |
| **Radix Sort**     | \(O(nk)\)    | \(O(nk)\)    | \(O(nk)\)    | \(O(n + k)\)      |

---

## Example Code (General Pseudo-code)

### Bubble Sort
```plaintext
function bubbleSort(array):
    for i from 0 to length(array) - 1:
        for j from 0 to length(array) - i - 1:
            if array[j] > array[j + 1]:
                swap(array[j], array[j + 1])
```

### Merge Sort
```plaintext
function mergeSort(array):
    if length(array) > 1:
        mid = length(array) // 2
        left = mergeSort(array[0:mid])
        right = mergeSort(array[mid:])
        return merge(left, right)
```

---

## Complexity Analysis

### Sorting Algorithms by Efficiency
| Algorithm         | Efficiency           |
|--------------------|----------------------|
| Bubble Sort        | Inefficient for large datasets due to \(O(n^2)\) complexity. |
| Selection Sort     | Simple but not suitable for large datasets. |
| Insertion Sort     | Efficient for small or nearly sorted datasets. |
| Merge Sort         | Suitable for large datasets due to \(O(n \log n)\) complexity. |
| Quick Sort         | Fast for most datasets but can degrade to \(O(n^2)\) in the worst case. |
| Heap Sort          | Consistently efficient with \(O(n \log n)\) complexity. |
| Radix Sort         | Best for datasets with small ranges or numeric data. |

---

## Advantages of Sorting

- **Efficiency**: Enables faster searching and other operations.
- **Data Organization**: Makes data easier to interpret and use.
- **Optimization**: Many algorithms and processes require sorted data.

---

## Disadvantages of Sorting

- **Time-Consuming**: For large datasets, sorting can take significant time.
- **Memory Usage**: Some algorithms (e.g., Merge Sort) require additional memory.

---

## License

This documentation is open-source and can be modified or distributed for educational purposes.