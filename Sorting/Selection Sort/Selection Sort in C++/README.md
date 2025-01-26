
# Selection Sort in C++ (Using Vectors)

This project implements the **Selection Sort algorithm** in C++ using the `vector` data structure. The program allows the user to input an array of integers, sorts the array using Selection Sort, and displays the sorted array.

## 📋 Features
- Accepts user input to create a dynamic array (vector).
- Implements the Selection Sort algorithm for sorting in ascending order.
- Displays the array before and after sorting.

## 🔧 How It Works

1. **Input the Array**:
   - The user specifies the size of the array.
   - The user enters the elements of the array.
2. **Display the Array**:
   - The `display` function outputs the array to the console.
3. **Sort the Array**:
   - The `selectionSort` function sorts the array using the Selection Sort algorithm.

## 🖥️ Code Explanation

### Functions
1. **`void display(vector<int> &arr)`**:
   - Prints all the elements of the array on a single line.
2. **`void selectionSort(vector<int> &nums, int n)`**:
   - Sorts the input array in ascending order using the Selection Sort algorithm.
   - Finds the smallest element in the unsorted part of the array and swaps it with the first element of the unsorted part.

### Main Function
- Initializes a vector to hold the array.
- Reads user input for the array size and elements.
- Displays the array before sorting.
- Calls `selectionSort` to sort the array.
- Displays the array after sorting.

## 🛠️ Compilation and Execution

### Steps to Run
1. Save the code to a file named `SelectionSort.cpp`.
2. Compile the code using a C++ compiler, e.g.:
   ```bash
   g++ -o SelectionSort SelectionSort.cpp
   ```
3. Run the compiled program:
   ```bash
   ./SelectionSort
   ```

### Example Input/Output
#### Input:
```
Enter the size of the array: 6
Enter the elements:
45
23
11
89
77
98
```

#### Output:
```
Before sorting the elements:
45 23 11 89 77 98 
After sorting the elements:
11 23 45 77 89 98
```

## ⚙️ Key Concepts
- **Selection Sort Algorithm**:
  - Iteratively selects the smallest element from the unsorted part of the array and places it in its correct position.
  - Efficient for small datasets but has a time complexity of O(n²) for larger datasets.

## 📌 Use Cases
- Demonstrates the Selection Sort algorithm for educational purposes.
- Serves as an introductory example for sorting algorithms using vectors in C++.

## 🏷️ Dependencies
- Requires a C++ compiler supporting C++11 or later for the `vector` and `for-each` functionalities.

## 🤝 Contribution
Feel free to fork this repository, suggest improvements, or report issues. Let’s make learning sorting algorithms easier!

## 📜 License
This project is licensed under the MIT License.
```