
---

# Binary Search Tree (BST)

A **Binary Search Tree (BST)** is a binary tree in which each node has at most two children, referred to as the **left** and **right** children. For each node in the tree:
- The left subtree contains only nodes with values less than the node’s value.
- The right subtree contains only nodes with values greater than the node’s value.

This property makes searching, insertion, and deletion operations efficient, with average time complexity of O(log n) for balanced trees.

## Features

- **Insertion:** Adds a node to the tree while maintaining the BST property.
- **Search:** Finds whether a node with a specific value exists in the tree.
- **Deletion:** Removes a node while ensuring the tree remains a BST.
- **Traversal:** Different methods of traversing the tree: Pre-order, In-order, and Post-order.
- **Min/Max Value:** Finds the minimum or maximum value node in the tree.

## Operations

### 1. Insertion
Inserts a new node into the binary search tree while ensuring the BST properties are maintained.

### 2. Search
Searches for a node with a specific value in the BST. Returns `true` if the value is found, otherwise `false`.

### 3. Deletion
Deletes a node from the BST. There are three possible cases:
- **No children:** Simply remove the node.
- **One child:** Replace the node with its child.
- **Two children:** Replace the node with its in-order successor (or predecessor).

### 4. Traversals
- **In-order Traversal:** Traverses the tree in ascending order of values.
- **Pre-order Traversal:** Visits the root node first, followed by the left and right subtrees.
- **Post-order Traversal:** Visits the left and right subtrees first, followed by the root node.

### 5. Find Minimum and Maximum
Finds the node with the minimum or maximum value in the tree. In a BST, the minimum value node is the leftmost node, and the maximum value node is the rightmost node.

---

## Code Example

```c
#include <stdio.h>
#include <stdlib.h>

// Structure for a node in BST
struct Node {
    int data;
    struct Node *left, *right;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Insert a new node into the BST
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) return newNode(data);
    if (data < root->data) root->left = insert(root->left, data);
    else if (data > root->data) root->right = insert(root->right, data);
    return root;
}

// In-order Traversal of BST
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Search for a value in the BST
int search(struct Node* root, int key) {
    if (root == NULL || root->data == key) return (root != NULL);
    if (key < root->data) return search(root->left, key);
    return search(root->right, key);
}

int main() {
    struct Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("In-order Traversal: ");
    inorder(root);

    printf("\nSearch for 40: ");
    if (search(root, 40)) printf("Found\n");
    else printf("Not Found\n");

    return 0;
}
```

## Running the Code

1. Clone the repository or download the source code.
2. Compile the code:
   ```bash
   gcc bst.c -o bst
   ```
3. Run the program:
   ```bash
   ./bst
   ```

### Output
```
In-order Traversal: 20 30 40 50 60 70 80
Search for 40: Found
```

## Time Complexity

- **Search:** O(log n) on average, O(n) in the worst case (if the tree is unbalanced).
- **Insertion:** O(log n) on average, O(n) in the worst case.
- **Deletion:** O(log n) on average, O(n) in the worst case.
- **Traversal:** O(n) for all types of traversal (In-order, Pre-order, Post-order).

## Contributors

- [Your Name] - Initial Implementation
- [Contributor 2] - Improved Search Algorithm

---

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---