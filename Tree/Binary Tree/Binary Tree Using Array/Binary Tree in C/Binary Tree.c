#include <stdio.h>
#include <stdlib.h>
void arr_bin_tree(int *,int,int,int);
void display(int *,int);
int main() {
    int i,n,*tree,rootData;
    printf("Enter the no. of nodes: ");
    scanf("%d",&n);
    tree=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        tree[i]=0;
    }
    printf("Enter the root's data: ");
    scanf("%d",&rootData);
    arr_bin_tree(tree,n,0,rootData);
    display(tree,n);
    return 0;
}
void arr_bin_tree(int *tree,int n,int idx,int data)
{
    int newData;
    if(idx<n)
    {
        tree[idx]=data;
        printf("Enter left child of %d (or -1 for no child): ",data);
        scanf("%d",&newData);
        if(newData!=-1)
        {
            arr_bin_tree(tree,n,2*idx+1,newData);
        }
        printf("Enter right child of %d (or -1 for no child): ",data);
        scanf("%d",&newData);
        if(newData!=-1)
        {
            arr_bin_tree(tree,n,2*idx+2,newData);
        }
    }
}
void display(int *tree,int size) {
    printf("\nBinary Tree (Array Representation):\n");
    for (int i = 0; i < size; i++) {
            printf("%d ",tree[i]);
    }
}