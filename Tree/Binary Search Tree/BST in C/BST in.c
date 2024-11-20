#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Tree{
    int data;
    struct Tree *lc;
    struct Tree *rc;
}bst;
bst *createbst(bst *);
bst *insertbst(bst *);
void inorder(bst *);
void preorder(bst *);
void postorder(bst *);
bst *bin_search(bst *,int);
bst *deletebst(bst *);
int main()
{
    bst *root,*searchnode;
    int ch,cd,j=1,i,a;
    printf("Creation of Binary Search Tree\n");
    root=(bst *)malloc(sizeof(bst));
    printf("Enter the root data: ");
    scanf("%d",&root->data);
    root->lc=NULL;
    root->rc=NULL;
    root=createbst(root);
    do
    {
        j=1;
        printf("\nWhat opeartion do you want to perform:\n");
        printf("1.Insert a node\n2.Delete a node\n3.Search for a node\n4.Display the Tree\n5.Exit\n");
        printf("Your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                root=insertbst(root);
                break;
            case 2:
            root=deletebst(root);
                break;
            case 3:
                printf("Enter the value you want to search: ");
                scanf("%d",&a);
                searchnode=bin_search(root,a);
                if(searchnode==NULL)
                    printf("Value Not Found\n");
                else
                    printf("Value found in the tree\n");
                break;
            case 4:
                printf("What type of traversal you want to display:\n");
                printf("1.Inorder\n2.Preorder\n3.Postorder\n");
                do{
                    printf("Your choice: ");
                    scanf("%d",&cd);
                    switch(cd)
                    {
                        case 1:
                            inorder(root);
                            i=0;
                            break;
                        case 2:
                            preorder(root);
                            i=0;
                            break;
                        case 3:
                            postorder(root);
                            i=0;
                            break;
                        default:
                            i=1;
                            printf("Wrong Input Try Again....");
                    }
                }while(i);
                break;
            case 5:
                j=0;
                printf("\nThank you for using this program :)\n");
                break;
            default:
                printf("Wrong Input Try Again!!!\n");
        }
    } while (j);
    return 0;
}
bst *createbst(bst *root)
{
    int c=0,n;
    printf("Enter the no. of child nodes you want to insert: ");
    scanf("%d",&n);
    while(c<n)
    {
        root=insertbst(root);
        c++;
    }
    return root;
}
bst *insertbst(bst *root)
{
    bst *child,*root1=root;
    child=(bst *)malloc(sizeof(bst));
    printf("Enter the child data: ");
    scanf("%d",&child->data);
    child->lc=NULL;
    child->rc=NULL;
    while(1)
    {
        if(child->data<root1->data)
        {
            if(root1->lc==NULL)
                {
                    root1->lc=child;
                    return root;    
                }
            root1=root1->lc;
        }
        else if(child->data>root1->data)
        {
            if(root1->rc==NULL)
                {
                    root1->rc=child;
                    return root;
                }
            root1=root1->rc;
        }
    }
    return root;
}
void inorder(bst *root)
{
    bst *node=root;
    if(node==NULL)
    {
        printf("The BST is empty");
        return;
    }
    else if(node!=NULL)
    {
        if(node->lc!=NULL)
            inorder(node->lc);
        printf("%d\t",node->data);
        if(node->rc!=NULL)
            inorder(node->rc);
    }
    return;
}
void preorder(bst *root)
{
    bst *node=root;
    if(node==NULL)
    {
        printf("The BST is empty");
        return ;
    }
    else if(node!=NULL)
    {
        printf("%d\t",node->data);
        if(node->lc!=NULL)
            preorder(node->lc);
        if(node->rc!=NULL)
            preorder(node->rc);
    }
    return;
}
void postorder(bst *root)
{
    bst *node=root;
    if(node==NULL)
    {
        printf("The BST is empty");
        return;
    }
    else if(node!=NULL)
    {
        if(node->lc!=NULL)
            postorder(node->lc);
        if(node->rc!=NULL)
            postorder(node->rc);
        printf("%d\t",node->data);
    }
    return;
}
bst *deletebst(bst *root)
{
    if(root == NULL)
    {
        printf("The tree is empty\n");
        return root;
    }
    
    int a;
    printf("Enter the data to be deleted: ");
    scanf("%d", &a);
    
    // Special case: deleting root with no parent
    if(root->data == a)
    {
        if(root->lc == NULL && root->rc == NULL) {
            return NULL;
        }
        else if(root->lc == NULL) {
            return root->rc;
        }
        else if(root->rc == NULL) {
            return root->lc;
        }
    }
    
    bst *root1 = root, *parent = NULL;
    bool flag = false;
    while(root1 != NULL)
    {
        if(a == root1->data)
        {
            flag = true;
            break;
        }
        parent = root1;
        if(a < root1->data)
            root1 = root1->lc;
        else
            root1 = root1->rc;
    }
    
    if(!flag)
    {
        printf("The data is not present in the tree\n");
        return root;
    }
    if(root1->lc == NULL && root1->rc == NULL)
    {
        if(parent != NULL)
        {
            if(parent->lc == root1)
                parent->lc = NULL;
            else
                parent->rc = NULL;
        }
    }
    else if(root1->lc != NULL && root1->rc != NULL)
    {
        // Find inorder successor (smallest value in right subtree)
        bst *node2 = root1;
        bst *node1 = root1->rc;
        while(node1->lc != NULL)
        {
            node2 = node1;
            node1 = node1->lc;
        }
        root1->data = node1->data;
        if(node2 == root1)
            node2->rc = node1->rc;
        else
            node2->lc = node1->rc;
    }
    else 
    {
        bst *child = (root1->lc != NULL) ? root1->lc : root1->rc;
        if(parent == NULL)  // If deleting the root
            root = child;
        else if(parent->lc == root1)
            parent->lc = child;
        else
            parent->rc = child;
    }
    
    return root;
}
bst *bin_search(bst *root,int x)
{
    bst *snode=root;
    do
    {
        if(snode->data==x)
            return snode;
        else{
            if(x<snode->data)
            {
                if(snode->lc!=NULL)
                    snode=snode->lc;
                else
                    return NULL;
            }
            else if(x>snode->data)
            {
                if(snode->rc!=NULL)
                    snode=snode->rc;
                else
                    return NULL;
            }
        }
    } while(1);
    return snode;
}