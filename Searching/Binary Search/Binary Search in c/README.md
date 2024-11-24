# Bubble Sort and Binary Search Program

## Overview

This program demonstrates the use of **Bubble Sort** for sorting an array and **Binary Search** for finding a specific target value within the sorted array. It combines the efficiency of Binary Search with the simplicity of Bubble Sort, ensuring that the array is sorted before searching.

---

## Features

1. **Bubble Sort**:
   - Sorts an array in ascending order by repeatedly swapping adjacent elements if they are in the wrong order.
   - Implements an optimization to reduce unnecessary iterations if the array is already sorted.

2. **Binary Search**:
   - Searches for a target value in the sorted array by dividing the array into halves.
   - Efficient and fast with a time complexity of \(O(\log n)\).

3. **Dynamic Memory Allocation**:
   - The array is dynamically allocated to handle input sizes specified at runtime.

---

## How It Works

1. The user enters the size and elements of the array.
2. The array is sorted using Bubble Sort.
3. The sorted array is displayed to the user.
4. The user is prompted to enter a target value.
5. Binary Search is used to find the target value in the sorted array.
6. The program outputs the position of the target value if found or indicates that the value is not in the array.

---

## Code Walkthrough

### 1. **Bubble Sort**
The `bubble_sort` function sorts the array in ascending order:
- Compares adjacent elements and swaps them if they are in the wrong order.
- Optimized with a `swapped` flag to terminate early if no swaps occur in a pass.

### 2. **Binary Search**
The `bin_search` function performs the search:
- Takes the sorted array and target value as inputs.
- Divides the array into halves and checks the middle element:
  - If the middle element matches the target, its position is returned.
  - If the target is smaller, the search continues in the left half.
  - If the target is larger, the search continues in the right half.

---

## Code

```c
#include<stdio.h>
#include<stdlib.h>
int bin_search(int *, int);
int *bubble_sort(int *, int);

int main()
{
    int pos, *arr, i, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    arr = bubble_sort(arr, n);
    printf("The sorted elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    pos = bin_search(arr, n);
    if (pos == -1)
        printf("The value is not in the array\n");
    else
        printf("Value is found at position %d", pos);
    return 0;
}

int *bubble_sort(int *a, int n)
{
    int i, j, t;
    int swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
    return a;
}

int bin_search(int *a, int n)
{
    int mid, target, left = 0, right = n - 1;
    printf("\nEnter the number you want to find: ");
    scanf("%d", &target);
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == target)
        {
            return mid + 1;
        }
        else if (target > a[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
```

---

## Input and Output

### Example Run

#### Input:
```plaintext
Enter the size of the array: 5
Enter the elements:
12 4 56 34 7
```

#### Output:
```plaintext
The sorted elements are:
4    7    12    34    56
Enter the number you want to find: 34
Value is found at position 4
```

#### Input (when the target is not in the array):
```plaintext
Enter the number you want to find: 50
```

#### Output:
```plaintext
The value is not in the array
```

---

## Complexity Analysis

### Bubble Sort
- **Best Case Time Complexity**: \(O(n)\) (if the array is already sorted).
- **Worst Case Time Complexity**: \(O(n^2)\).
- **Space Complexity**: \(O(1)\) (in-place sorting).

### Binary Search
- **Time Complexity**: \(O(\log n)\).
- **Space Complexity**: \(O(1)\) (iterative implementation).

---

## Advantages

- Combines sorting and searching into one program.
- Efficient searching with Binary Search.
- Dynamic memory allocation allows flexibility in array size.

---

## Limitations

- Bubble Sort is inefficient for large datasets.
- Binary Search requires the array to be sorted, so the sorting step adds overhead.

---

## Applications

1. **Searching in Small Datasets**: Combines a simple sorting algorithm with efficient searching.
2. **Educational Purposes**: Helps in understanding basic sorting and searching techniques.
3. **Preliminary Programs**: Can be used in scenarios where sorting and searching are not performance-critical.

---

## License

This program is open-source and can be used and modified for educational or personal purposes.