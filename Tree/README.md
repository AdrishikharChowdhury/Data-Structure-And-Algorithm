# Tree Data Structure

## Overview

A **Tree** is a hierarchical data structure widely used in computer science and software engineering. It consists of nodes connected by edges and is commonly used to represent relationships, organize data, and solve problems such as searching and sorting.

---

## Key Concepts of Trees

1. **Node**: A basic unit of a tree containing data.
   - **Root**: The topmost node in a tree.
   - **Leaf**: A node with no children.
   - **Parent and Child**: A node directly connected above is a parent, and nodes connected below are children.
   
2. **Edge**: A connection between two nodes.

3. **Depth**: The level of a node relative to the root (root has depth 0).

4. **Height**: The longest path from a node to a leaf.

5. **Degree**: The number of children a node has.

6. **Subtree**: A tree formed by a node and its descendants.

---

## Types of Trees

1. **Binary Tree**: Each node has at most two children.
   - **Full Binary Tree**: Every node has 0 or 2 children.
   - **Complete Binary Tree**: All levels are filled except possibly the last, which is filled left to right.
   - **Balanced Binary Tree**: The difference in height between left and right subtrees is minimal.

2. **Binary Search Tree (BST)**:
   - Left child nodes contain values less than the parent node.
   - Right child nodes contain values greater than the parent node.

3. **AVL Tree**: A self-balancing BST.

4. **Heap**: A specialized tree-based structure for priority queues.

5. **N-ary Tree**: Each node can have at most *N* children.

6. **Trie**: A tree for storing strings, useful in searching and prefix operations.

---

## Basic Operations on Trees

1. **Traversal**:
   - **Preorder (Root-Left-Right)**: Process the root, traverse the left subtree, then the right subtree.
   - **Inorder (Left-Root-Right)**: Traverse the left subtree, process the root, then the right subtree.
   - **Postorder (Left-Right-Root)**: Traverse left and right subtrees, then process the root.
   - **Level Order (Breadth-First)**: Visit nodes level by level.

2. **Search**: Find a node with a given value (e.g., in a BST).

3. **Insertion**: Add a node at the appropriate position.

4. **Deletion**: Remove a node and reorganize the tree.

---

## Tree Applications

- **Hierarchical Data Representation**: File systems, organizational charts.
- **Searching**: Binary Search Trees, Tries.
- **Sorting**: Binary Heap (used in Heap Sort).
- **Expression Parsing**: Abstract Syntax Trees in compilers.
- **Routing and Networking**: Spanning trees in networks.

---

## Complexity

### Traversal
- **Time Complexity**: \(O(n)\), where \(n\) is the number of nodes.
- **Space Complexity**: \(O(h)\), where \(h\) is the height of the tree (for recursive traversals).

### Search, Insert, and Delete in BST
- **Best Case**: \(O(\log n)\) (balanced tree).
- **Worst Case**: \(O(n)\) (unbalanced tree).

---

## Example Code (Pseudo-code for Traversal)

### Preorder Traversal
```plaintext
function preorder(node):
    if node is not NULL:
        print(node.value)
        preorder(node.left)
        preorder(node.right)
```

### Inorder Traversal
```plaintext
function inorder(node):
    if node is not NULL:
        inorder(node.left)
        print(node.value)
        inorder(node.right)
```

### Postorder Traversal
```plaintext
function postorder(node):
    if node is not NULL:
        postorder(node.left)
        postorder(node.right)
        print(node.value)
```

---

## Advantages of Trees

- **Dynamic Representation**: Trees grow dynamically as elements are added.
- **Efficient Searching**: In BST, searching is faster compared to linear data structures.
- **Clear Hierarchical Structure**: Intuitive representation of relationships.

---

## Disadvantages of Trees

- **Space Overhead**: Each node requires additional memory for pointers (e.g., left and right children).
- **Complex Implementation**: Managing balancing and operations can be complex in trees like AVL or Red-Black Trees.

---

## License

This documentation is open-source and free to use for educational and learning purposes. Feel free to modify and share it as needed.