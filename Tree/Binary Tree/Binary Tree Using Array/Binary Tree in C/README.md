# Binary Tree Representation Using an Array in C

## Overview
This C program implements a **binary tree representation using an array**. The program dynamically allocates memory for the tree and inserts elements using **level-order representation**. The user provides input for each node, and the tree is stored in an array where:
- The **root node** is at index `0`
- The **left child** of a node at index `i` is at `2*i + 1`
- The **right child** of a node at index `i` is at `2*i + 2`

---

## Features
- ✅ **Dynamically allocated tree storage**
- ✅ **Recursive insertion of nodes**
- ✅ **Array-based tree representation**
- ✅ **Display function to print tree structure**

---

## How It Works
1. The program **initializes** an array with `n` elements (all set to `0`).
2. The user **enters the root node**.
3. The program **recursively asks for left and right children** for each node.
4. The **binary tree is stored in the array** using a standard formula:
   - `Left child index = 2*i + 1`
   - `Right child index = 2*i + 2`
5. The program **displays the tree in array format**.

---

## Code Explanation
### **1️⃣ `main()`**
- Takes **user input for the number of nodes (`n`)**.
- Dynamically **allocates memory for the tree**.
- Calls `arr_bin_tree()` to insert nodes recursively.
- Calls `display()` to **print the array representation**.

### **2️⃣ `arr_bin_tree(int *tree, int n, int idx, int data)`**
- Inserts `data` at `idx`.
- Recursively takes **left and right child inputs**.
- **Base condition:** Stops inserting if `idx >= n`.

### **3️⃣ `display(int *tree, int size)`**
- Prints the **array representation** of the binary tree.

---

## Example Input & Output

### **📥 Input**
```
Enter the no. of nodes: 7
Enter the root's data: 10
Enter left child of 10 (or -1 for no child): 20
Enter left child of 20 (or -1 for no child): 40
Enter right child of 20 (or -1 for no child): 50
Enter right child of 10 (or -1 for no child): 30
Enter left child of 30 (or -1 for no child): 60
Enter right child of 30 (or -1 for no child): 70
```

### **📤 Output**
```
Binary Tree (Array Representation):
10 20 30 40 50 60 70
```

---

## Complexity Analysis
| Operation   | Time Complexity | Space Complexity |
|-------------|----------------|------------------|
| Insertion   | **O(n)**        | **O(n)**         |
| Display     | **O(n)**        | **O(1)**         |

---

## How to Run the Code
1. **Compile** the program:
   ```sh
   gcc binary_tree_array.c -o binary_tree_array
   ```
2. **Run** the program:
   ```sh
   ./binary_tree_array
   ```

---

## 🔥 Why Use Array Representation?
- **Efficient for complete binary trees** (saves pointer space).
- **Faster access to child nodes** (constant time lookup).
- **Memory-efficient** for balanced trees.

However, it **wastes memory** for sparse trees, where many indices remain unused.

---

## 🚀 Future Enhancements
- Implement **binary search tree (BST) operations**.
- Add **tree traversal methods** (preorder, inorder, postorder).
- Convert this **array-based tree to a linked-list representation**.

---

## 📜 License
This project is open-source and available under the **MIT License**.
