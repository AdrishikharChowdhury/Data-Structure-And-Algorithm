
# Binary Search Tree (BST) Implementation in C

This project implements a Binary Search Tree (BST) in C. A Binary Search Tree is a data structure where each node has at most two children (left and right), and for each node:
- All nodes in the left subtree have smaller values.
- All nodes in the right subtree have larger values.

This program supports multiple operations like inserting nodes, searching for a value, deleting a node, and displaying the tree using different traversal methods (In-order, Pre-order, and Post-order).

## Features

- **Insertion of nodes** in the BST
- **Deletion of nodes** from the BST
- **Search for a node** in the BST
- **Display the tree** using various traversal methods:
  - In-order Traversal
  - Pre-order Traversal
  - Post-order Traversal
- **Handle edge cases** like deleting the root or nodes with one or two children

## Operations

### 1. Insert a Node
- Inserts a new node into the BST while maintaining the BST properties.

### 2. Delete a Node
- Deletes a specified node from the BST and reorganizes the tree to maintain the BST properties. Handles:
  - No children (leaf node)
  - One child
  - Two children (using the in-order successor)

### 3. Search for a Node
- Searches for a node with a specified value. Returns a message indicating whether the node is found.

### 4. Display the Tree
- Displays the tree using different traversal methods:
  - **In-order Traversal**: Left -> Root -> Right
  - **Pre-order Traversal**: Root -> Left -> Right
  - **Post-order Traversal**: Left -> Right -> Root

## Code Walkthrough

```c
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Define the structure for a BST node
typedef struct Tree {
    int data;
    struct Tree *lc;  // Left child
    struct Tree *rc;  // Right child
} bst;

// Function declarations
bst *createbst(bst *root);
bst *insertbst(bst *root);
void inorder(bst *root);
void preorder(bst *root);
void postorder(bst *root);
bst *bin_search(bst *root, int x);
bst *deletebst(bst *root);

int main() {
    bst *root, *searchnode;
    int ch, cd, j = 1, a;
    
    // Root node initialization
    printf("Creation of Binary Search Tree\n");
    root = (bst *)malloc(sizeof(bst));
    printf("Enter the root data: ");
    scanf("%d", &root->data);
    root->lc = NULL;
    root->rc = NULL;
    root = createbst(root);  // Create BST

    do {
        j = 1;
        // Menu-driven interface
        printf("\nWhat operation do you want to perform:\n");
        printf("1.Insert a node\n2.Delete a node\n3.Search for a node\n4.Display the Tree\n5.Exit\n");
        printf("Your choice: ");
        scanf("%d", &ch);
        
        switch(ch) {
            case 1:
                root = insertbst(root);
                break;
            case 2:
                root = deletebst(root);
                break;
            case 3:
                printf("Enter the value you want to search: ");
                scanf("%d", &a);
                searchnode = bin_search(root, a);
                if(searchnode == NULL)
                    printf("Value Not Found\n");
                else
                    printf("Value found in the tree\n");
                break;
            case 4:
                // Choose traversal type
                printf("What type of traversal you want to display:\n");
                printf("1.Inorder\n2.Preorder\n3.Postorder\n");
                do {
                    printf("Your choice: ");
                    scanf("%d", &cd);
                    switch(cd) {
                        case 1:
                            inorder(root);
                            break;
                        case 2:
                            preorder(root);
                            break;
                        case 3:
                            postorder(root);
                            break;
                        default:
                            printf("Wrong Input Try Again....");
                    }
                } while(cd < 1 || cd > 3);
                break;
            case 5:
                j = 0;
                printf("\nThank you for using this program :)\n");
                break;
            default:
                printf("Wrong Input Try Again!!!\n");
        }
    } while(j);
    
    return 0;
}
```

### Key Functions

- **createbst**: Initializes and creates the Binary Search Tree by inserting child nodes.
- **insertbst**: Inserts a new node into the BST while ensuring the tree maintains its property.
- **inorder, preorder, postorder**: Traverse the tree in different orders and display the nodes.
- **bin_search**: Searches for a node with the specified data and returns the node if found.
- **deletebst**: Deletes a node from the BST and reorganizes the tree.

## How to Run the Program

1. **Clone the repository** or download the source code.
2. **Compile the code** using `gcc`:
   ```bash
   gcc bst.c -o bst
   ```
3. **Run the program**:
   ```bash
   ./bst
   ```

### Sample Output

```
Creation of Binary Search Tree
Enter the root data: 50
Enter the no. of child nodes you want to insert: 3
Enter the child data: 30
Enter the child data: 70
Enter the child data: 20

What operation do you want to perform:
1.Insert a node
2.Delete a node
3.Search for a node
4.Display the Tree
5.Exit
Your choice: 4
What type of traversal you want to display:
1.Inorder
2.Preorder
3.Postorder
Your choice: 1
In-order Traversal: 20 30 50 70
```

## Time Complexity

- **Search**: O(log n) on average, O(n) in the worst case (unbalanced tree).
- **Insertion**: O(log n) on average, O(n) in the worst case (unbalanced tree).
- **Deletion**: O(log n) on average, O(n) in the worst case (unbalanced tree).
- **Traversal**: O(n) for all types of traversal.

## Contributors

- Adrishikhar Chowdhury - Initial Implementation

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---