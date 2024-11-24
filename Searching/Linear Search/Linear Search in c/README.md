# Linear Search in C

## Overview

This program demonstrates the **Linear Search** algorithm in C. Linear Search is a simple searching technique where each element of an array is sequentially checked until the target element is found or the end of the array is reached.

---

## How It Works

1. **Input**:  
   - The user provides the size of the array and the array elements.  
   - The user specifies the value to search for in the array.

2. **Linear Search Algorithm**:  
   - The program iterates through each element of the array.  
   - If the target value is found, the program outputs the position(s) of the target.  
   - If the target value is not found after scanning all elements, a message is displayed indicating that the value is not in the array.

3. **Output**:  
   - The position(s) of the target value in the array or a message indicating that the value is not found.

---

## Features

- **Dynamic Memory Allocation**:  
  The array is dynamically allocated based on user input, allowing flexibility in array size.

- **Search Multiple Occurrences**:  
  If the target value appears multiple times in the array, all positions are displayed.

- **Easy-to-Understand Implementation**:  
  Uses a simple iterative approach to search for the target value.

---

## Code

```c
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int flag = 0, i, k, *arr, n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));

    // Input the array elements
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input the value to search
    printf("Enter the value to search: ");
    scanf("%d", &k);

    // Perform Linear Search
    for (i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            printf("%d is found at position: %d\n", k, i + 1);
            flag = 1;  // Mark that the value has been found
        }
    }

    // If the value is not found
    if (flag == 0)
        printf("%d is not in this array", k);

    return 0;
}
```

---

## Example Run

### Input
```plaintext
Enter the size of the array: 5
Enter the elements:
10 20 30 40 50
Enter the value to search: 30
```

### Output
```plaintext
30 is found at position: 3
```

---

### Input (When Value is Not Found)
```plaintext
Enter the size of the array: 5
Enter the elements:
10 20 30 40 50
Enter the value to search: 60
```

### Output
```plaintext
60 is not in this array
```

---

## Complexity Analysis

### Time Complexity:
- **Best Case**: \(O(1)\) (if the target value is at the beginning of the array).  
- **Worst Case**: \(O(n)\) (if the target value is at the end of the array or not present at all).  

### Space Complexity:
- \(O(1)\) (no additional space is used beyond the array).

---

## Advantages

1. **Simple Implementation**:  
   Easy to implement and understand, making it suitable for beginners.

2. **No Sorting Required**:  
   Works on unsorted arrays, unlike binary search.

3. **Search for Multiple Occurrences**:  
   Finds all occurrences of the target value in the array.

---

## Limitations

1. **Inefficiency for Large Datasets**:  
   Linear search is not suitable for large arrays as it has a time complexity of \(O(n)\).

2. **Not Optimal for Sorted Data**:  
   For sorted data, more efficient algorithms like **Binary Search** are recommended.

---

## Applications

1. **Small Data Sets**:  
   Useful for quick searches in small arrays.

2. **Unsorted Data**:  
   Can be applied when the data is not sorted and preprocessing (like sorting) is not possible.

---

## License

This program is open-source and can be freely used, modified, and distributed for educational or personal purposes.