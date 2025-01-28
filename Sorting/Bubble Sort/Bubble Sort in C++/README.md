# Bubble Sort in C++ (Using Vectors)

This project implements the **Bubble Sort algorithm** in C++ using the `vector` data structure. The program allows the user to input an array of integers, sorts the array using Bubble Sort, and displays the sorted array.

## 📋 Features
- Accepts user input to create a dynamic array (vector).
- Implements the Bubble Sort algorithm for sorting in ascending order.
- Displays the array before and after sorting.

## 🔧 How It Works
1. **Input the Array**:
   - The user specifies the size of the array.
   - The user enters the elements of the array.
2. **Display the Array**:
   - The `display` function outputs the array to the console.
3. **Sort the Array**:
   - The `bubbleSort` function sorts the array using the Bubble Sort algorithm.
   - Optimization is applied to terminate early if the array becomes sorted before completing all iterations.

## 🖥️ Code Explanation

### Functions
1. **`void display(vector<int> &arr)`**:
   - Prints all the elements of the array on a single line.
2. **`void bubbleSort(vector<int> &nums, int n)`**:
   - Sorts the input array in ascending order using the Bubble Sort algorithm.
   - Uses an optimization flag `isSwap` to stop sorting if no swaps occur during an iteration (indicating the array is already sorted).

### Main Function
- Initializes a vector to hold the array.
- Reads user input for the array size and elements.
- Displays the array before sorting.
- Calls `bubbleSort` to sort the array.
- Displays the array after sorting.

## 🛠️ Compilation and Execution

### Steps to Run
1. Save the code to a file named `BubbleSort.cpp`.
2. Compile the code using a C++ compiler, e.g.:
   ```bash
   g++ -o BubbleSort BubbleSort.cpp
   ```
3. Run the compiled program:
   ```bash
   ./BubbleSort
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
- **Bubble Sort Algorithm**:
  - Repeatedly swaps adjacent elements if they are in the wrong order.
  - Stops early if the array becomes sorted.
- **Optimization**:
  - The use of the `isSwap` flag reduces unnecessary iterations once the array is sorted.

## 🏷️ Dependencies
- Requires a C++ compiler supporting C++11 or later for the `vector` and `swap` functionalities.

## 📌 Use Cases
- Demonstrates the Bubble Sort algorithm for educational purposes.
- Serves as an introductory example for sorting algorithms using vectors in C++.

## 🤝 Contribution
Feel free to fork this repository, suggest improvements, or report issues. Let's make learning algorithms easier!

## 📜 License
This project is licensed under the MIT License.
```