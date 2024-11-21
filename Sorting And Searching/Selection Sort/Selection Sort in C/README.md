# Selection Sort Program

## Overview

This program implements the **Selection Sort** algorithm in C to sort an array of integers. The program allows the user to input an array, sorts it using Selection Sort, and displays the sorted result.

---

## Features

- **Dynamic Memory Allocation**: The array is dynamically allocated using `malloc`, allowing the user to specify the array size at runtime.
- **Selection Sort**: An efficient, comparison-based algorithm for small datasets.
- **Interactive Input and Output**: The program accepts user input for the array elements and displays both unsorted and sorted arrays.

---

## How the Program Works

1. The program prompts the user to input the size of the array.
2. It dynamically allocates memory for the array.
3. The user enters the elements of the array.
4. The program displays the unsorted array.
5. The `selection_sort` function sorts the array in ascending order.
6. Finally, the sorted array is displayed.

---

## Algorithm: Selection Sort

1. For each position in the array, assume it contains the smallest element in the unsorted section.
2. Compare this element with the remaining unsorted elements.
3. If a smaller element is found, update the index of the smallest element.
4. Swap the smallest element with the first unsorted element.
5. Repeat for all positions in the array.

---

## Code Explanation

### Main Function
- **Input Size**: Reads the size of the array from the user.
- **Create Array**: Calls the `createarray` function to populate the array.
- **Display Unsorted Array**: Displays the array before sorting using `display`.
- **Sort Array**: Calls the `selection_sort` function to sort the array.
- **Display Sorted Array**: Displays the sorted array using `display`.

### `selection_sort` Function
- Takes an array and its size as input.
- Finds the smallest element in the unsorted part of the array.
- Swaps it with the first element of the unsorted part.
- Returns the sorted array.

### `createarray` Function
- Takes the array and its size as input.
- Allows the user to input elements into the array.

### `display` Function
- Takes the array and its size as input.
- Prints the array elements, separated by tabs.

---

## Example Execution

### Input:
```plaintext
Enter the size of the array: 5
Enter the elements:
64 25 12 22 11
```

### Output:
```plaintext
The unsorted elements are:
64    25    12    22    11
The sorted elements are:
11    12    22    25    64
```

---

## Pseudocode

```plaintext
function selection_sort(array, size):
    for i = 0 to size - 1:
        min = i
        for j = i + 1 to size:
            if array[j] < array[min]:
                min = j
        swap(array[i], array[min])
    return array
```

---

## Compilation and Execution

1. Save the program as `selection_sort.c`.
2. Compile using:
   ```bash
   gcc selection_sort.c -o selection_sort
   ```
3. Run the program:
   ```bash
   ./selection_sort
   ```

---

## Notes
- **Time Complexity**: \(O(n^2)\) for all cases (best, average, worst).
- **Space Complexity**: \(O(1)\), as it is an in-place sorting algorithm.
- Suitable for small datasets but inefficient for larger ones.
- Swap operations may affect the stability of sorting.

---

## License

This code is open-source and available for educational purposes. Use it, modify it, and share it as needed.