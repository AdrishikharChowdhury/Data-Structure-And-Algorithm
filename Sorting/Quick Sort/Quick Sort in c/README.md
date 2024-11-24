# Quick Sort in C

This repository contains a **C implementation of the Quick Sort algorithm**. Quick Sort is a widely used sorting algorithm that follows the **Divide and Conquer** paradigm. It partitions the array into subarrays based on a pivot element and recursively sorts them.

---

## Features

- Implements the Quick Sort algorithm to sort an array of integers.
- Dynamically allocates memory for the array.
- Includes user-friendly functions for:
  - Inputting elements into the array.
  - Displaying the array before and after sorting.

---

## How It Works

### Main Functions:

1. **Partition Function:**
   - Rearranges elements around a pivot so that:
     - Elements less than or equal to the pivot are on the left.
     - Elements greater than the pivot are on the right.
   - Returns the index of the pivot.

2. **Quick Sort Function:**
   - Recursively sorts the left and right subarrays around the pivot index.

3. **Create Array Function:**
   - Allows the user to input elements into a dynamically allocated array.

4. **Display Function:**
   - Prints the elements of the array.

---

## Usage

### Input:
1. Enter the size of the array.
2. Provide the elements of the array.

### Output:
- Displays the unsorted array.
- Displays the sorted array after applying Quick Sort.

---

## Code Breakdown

### Function Details:

#### 1. **Partition Function**
```c
int partition(int *a, int p, int r)
```
- **Parameters:** 
  - `a`: Array to be partitioned.
  - `p`: Starting index.
  - `r`: Ending index.
- **Operation:** Places the pivot element in its correct position and rearranges elements.
- **Returns:** Index of the pivot.

#### 2. **Quick Sort Function**
```c
int *quick_sort(int *a, int p, int r)
```
- **Parameters:** 
  - `a`: Array to be sorted.
  - `p`: Starting index.
  - `r`: Ending index.
- **Operation:** Recursively sorts subarrays using the `partition` function.
- **Returns:** Pointer to the sorted array.

#### 3. **Create Array Function**
```c
int *createarray(int *a, int n)
```
- **Parameters:**
  - `a`: Array to populate.
  - `n`: Size of the array.
- **Operation:** Populates the array with user input.

#### 4. **Display Function**
```c
void display(int *a, int n)
```
- **Parameters:**
  - `a`: Array to display.
  - `n`: Size of the array.
- **Operation:** Prints all elements of the array.

---

## Example

### Input:
```
Enter the size of the array: 5
Enter the elements:
10
7
8
9
1
```

### Output:
```
The unsorted elements are:
10      7       8       9       1       

The sorted elements are:
1       7       8       9       10
```

---

## Advantages of Quick Sort

1. **Time Complexity:**
   - Best Case: `O(n log n)`
   - Worst Case: `O(n^2)` (occurs when the pivot is always the smallest or largest element).
2. **Space Complexity:** `O(log n)` due to recursive stack space.
3. In-place sorting algorithm.

---

## How to Run

1. Compile the code using `gcc`:
   ```bash
   gcc quicksort.c -o quicksort
   ```
2. Run the executable:
   ```bash
   ./quicksort
   ```

---

## License

This project is open-source and available under the [MIT License](LICENSE).