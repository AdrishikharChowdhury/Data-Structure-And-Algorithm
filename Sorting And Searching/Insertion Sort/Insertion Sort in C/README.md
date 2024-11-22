# Insertion Sort Program

## Overview

This program implements the **Insertion Sort** algorithm in C. Insertion Sort is a simple and efficient algorithm for sorting small datasets or datasets that are already partially sorted. This program allows users to input an array of integers, sorts it using Insertion Sort, and displays the sorted array.

---

## Features

- **Dynamic Memory Allocation**: The array size is specified by the user and dynamically allocated during runtime.
- **Interactive Input and Output**: Users can input array elements and view both unsorted and sorted arrays.
- **Efficient for Specific Cases**: Performs well for small datasets or nearly sorted arrays.

---

## How the Program Works

1. **Input**: The user provides the size of the array and its elements.
2. **Sorting**: The program applies the Insertion Sort algorithm to arrange the elements in ascending order.
3. **Output**: The program displays the unsorted array first and then the sorted array.

---

## Algorithm Details

**Insertion Sort Process**:
1. Start from the second element (index 1) of the array.
2. Treat the first part of the array as sorted and insert the current element into its correct position in this sorted section.
3. Shift larger elements in the sorted section to make room for the new element.
4. Repeat for all elements in the array.

---

## Example Usage

### Input
```plaintext
Enter the size of the array: 5
Enter the elements:
7 3 9 2 6
```

### Output
```plaintext
The unsorted elements are:
7    3    9    2    6    
The sorted elements are:
2    3    6    7    9    
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

## Complexity

- **Time Complexity**:
  - Best Case: \(O(n)\) (already sorted).
  - Average Case: \(O(n^2)\).
  - Worst Case: \(O(n^2)\) (reverse sorted).
- **Space Complexity**: \(O(1)\) (in-place sorting).

---

## Code Explanation

1. **`createarray` Function**:
   - Dynamically creates and initializes the array with user-provided elements.

2. **`insertion_sort` Function**:
   - Implements the Insertion Sort algorithm to sort the array in ascending order.

3. **`display` Function**:
   - Displays the elements of the array.

4. **`main` Function**:
   - Coordinates the program flow: input, sorting, and output.

---

## How to Use

1. Compile the program using a C compiler (e.g., `gcc`).
2. Run the executable and follow the prompts to input the size and elements of the array.
3. View the unsorted and sorted arrays.

---

## Advantages of Insertion Sort

- Simple and easy to implement.
- Suitable for small or nearly sorted datasets.
- Requires no additional memory.

---

## Limitations

- Inefficient for large datasets due to its \(O(n^2)\) time complexity.
- Slower than advanced sorting algorithms like Merge Sort or Quick Sort for random datasets.

---

## License

This program is open-source and free to use for learning and educational purposes. Feel free to modify and share.