# Merge Sort Implementation in C

This repository contains an implementation of the **Merge Sort** algorithm in C. Merge Sort is a divide-and-conquer algorithm that splits an array into smaller subarrays, sorts them, and merges them back into a single sorted array. This implementation includes helper functions for creating and displaying arrays.

---

## Features

- **Divide and Conquer Approach**: Efficiently sorts arrays by dividing the input array into halves, sorting each half recursively, and merging the sorted halves.
- **Modular Code Structure**: 
  - `merge_sort`: Recursively divides the array and sorts it.
  - `merge`: Merges two sorted subarrays.
  - `createarray`: Initializes the array with user input.
  - `display`: Displays the elements of the array.

---

## How to Use

1. **Compile the Code**:
   Use a C compiler like `gcc` to compile the program:
   ```bash
   gcc merge_sort.c -o merge_sort
   ```

2. **Run the Program**:
   Execute the compiled program:
   ```bash
   ./merge_sort
   ```

3. **Input Data**:
   - Enter the size of the array.
   - Enter the elements of the array.

4. **View Output**:
   - The program will display the unsorted and sorted arrays.

---

## Code Overview

### Main Functions

1. **`merge_sort(int *a, int p, int r)`**:
   - Recursively divides the array into two halves.
   - Calls the `merge` function to merge sorted halves.
   - Parameters:
     - `a`: Array to be sorted.
     - `p`: Starting index.
     - `r`: Ending index.

2. **`merge(int *a, int p, int q, int r)`**:
   - Merges two sorted subarrays (`a[p..q]` and `a[q+1..r]`).
   - Uses sentinel values (`infi`) to simplify merging logic.

3. **`createarray(int *a, int n)`**:
   - Takes user input to populate an array.
   - Parameters:
     - `a`: Pointer to the array.
     - `n`: Size of the array.

4. **`display(int *a, int n)`**:
   - Prints the array elements.
   - Parameters:
     - `a`: Array to display.
     - `n`: Size of the array.

---

## Sample Input/Output

### Example

#### Input:
```
Enter the size of the array: 5
Enter the elements:
12
4
15
8
3
```

#### Output:
```
The unsorted elements are:
12      4       15      8       3

The sorted elements are:
3       4       8       12      15
```

---

## Complexity

1. **Time Complexity**:
   - Best Case: `O(n log n)`
   - Worst Case: `O(n log n)`
   - Average Case: `O(n log n)`

2. **Space Complexity**:
   - Requires additional space proportional to the size of the array: `O(n)`.

---

## Notes

- **Sentinel Values**: The sentinel value `infi` (defined as `9999`) ensures that the merging process is streamlined without additional boundary checks.
- **Customizable**: You can change the `infi` value in the `merge` function to accommodate larger data.

---

## Contributing

Feel free to contribute to this implementation by:
- Optimizing the code.
- Adding new features or test cases.
- Improving documentation.

---

## License

This project is licensed under the MIT License. Feel free to use and modify the code as needed.