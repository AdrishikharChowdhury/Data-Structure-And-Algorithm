# Insertion Sort

## Overview

This repository demonstrates the **Insertion Sort** algorithm, a simple and intuitive sorting technique. It organizes an array by iteratively building a sorted section and inserting each new element into its correct position. 

Insertion Sort is particularly useful for small datasets or when the input data is nearly sorted.

---

## Features

- **Dynamic Array Support**: Handles arrays of any size specified at runtime.
- **Efficient for Nearly Sorted Arrays**: Performs well when the array is already partially sorted.
- **Interactive Input/Output**: Accepts array input from the user and displays both unsorted and sorted arrays.

---

## How Insertion Sort Works

1. Start with the second element (index 1) as the current element.
2. Compare the current element with all elements in the sorted section (to its left).
3. Shift elements in the sorted section to make room for the current element.
4. Insert the current element into its correct position.
5. Repeat for all elements in the array.

---

## Algorithm Complexity

- **Time Complexity**:
  - Best Case: \(O(n)\) (when the array is already sorted).
  - Average Case: \(O(n^2)\).
  - Worst Case: \(O(n^2)\) (when the array is sorted in reverse order).
- **Space Complexity**: \(O(1)\) (in-place sorting).

---

## Example

### Input:
```plaintext
Enter the size of the array: 6
Enter the elements:
9 5 1 4 3 7
```

### Output:
```plaintext
The unsorted array is:
9    5    1    4    3    7
The sorted array is:
1    3    4    5    7    9
```

---

## Pseudocode

```plaintext
function insertion_sort(array, size):
    for i = 1 to size - 1:
        key = array[i]
        j = i - 1
        while j >= 0 and array[j] > key:
            array[j + 1] = array[j]
            j = j - 1
        array[j + 1] = key
    return array
```

---

## Usage Instructions

1. Compile and run the program.
2. Input the size of the array.
3. Enter the elements of the array.
4. View the sorted array as output.

---

## Advantages of Insertion Sort

- Simple and easy to implement.
- Performs well for small or nearly sorted datasets.
- In-place sorting (no additional memory required).

---

## Limitations

- Not efficient for large datasets due to \(O(n^2)\) time complexity.
- Slow compared to advanced algorithms like Quick Sort or Merge Sort for random datasets.

---

## License

This implementation of the Insertion Sort algorithm is open-source and available for educational or personal use. Feel free to modify and distribute.