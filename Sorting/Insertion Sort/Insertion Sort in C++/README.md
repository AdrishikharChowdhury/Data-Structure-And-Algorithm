# Insertion Sort in C++ (Using Vectors)

This project implements the **Insertion Sort algorithm** in C++ using the `vector` data structure. The program allows the user to input an array of integers, sorts the array using Insertion Sort, and displays the sorted array.

## 📋 Features
- Accepts user input to create a dynamic array (vector).
- Implements the Insertion Sort algorithm for sorting in ascending order.
- Displays the array before and after sorting.

## 🔧 How It Works
1. **Input the Array**:
   - The user specifies the size of the array.
   - The user enters the elements of the array.
2. **Display the Array**:
   - The `display` function outputs the array to the console.
3. **Sort the Array**:
   - The `insertionSort` function sorts the array using the Insertion Sort algorithm.

## 🖥️ Code Explanation

### Functions
1. **`void display(vector<int> &arr)`**:
   - Prints all the elements of the array on a single line.
2. **`void insertionSort(vector<int> &nums, int n)`**:
   - Sorts the input array in ascending order using the Insertion Sort algorithm.
   - Places each element in its correct position by shifting larger elements to the right.

### Main Function
- Initializes a vector to hold the array.
- Reads user input for the array size and elements.
- Displays the array before sorting.
- Calls `insertionSort` to sort the array.
- Displays the array after sorting.

## 🛠️ Compilation and Execution

### Steps to Run
1. Save the code to a file named `InsertionSort.cpp`.
2. Compile the code using a C++ compiler, e.g.:
   ```bash
   g++ -o InsertionSort InsertionSort.cpp
   ```
3. Run the compiled program:
   ```bash
   ./InsertionSort
   ```

### Example Input/Output
#### Input:
```
Enter the size of the array: 5
Enter the elements:
34
12
5
67
2
```

#### Output:
```
Before sorting the elements:
34 12 5 67 2 
After sorting the elements:
2 5 12 34 67 
```

## ⚙️ Key Concepts
- **Insertion Sort Algorithm**:
  - Iteratively takes one element and places it in its correct position in the sorted part of the array.
  - Efficient for small or nearly sorted datasets.

## 🏷️ Dependencies
- Requires a C++ compiler supporting C++11 or later for the `vector` and `for-each` functionalities.

## 📌 Use Cases
- Demonstrates the Insertion Sort algorithm for educational purposes.
- Serves as an introductory example for sorting algorithms using vectors in C++.

## 🤝 Contribution
Feel free to fork this repository, suggest improvements, or report issues. Let’s make learning algorithms easier!

## 📜 License
This project is licensed under the MIT License.
```