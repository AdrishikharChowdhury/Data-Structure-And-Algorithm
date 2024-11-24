#include<stdio.h>
#include<stdlib.h>
int *insertion_sort(int *, int);
int *createarray(int *, int);
void display(int *, int);
int main()
{
    int *arr, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int)); 
    arr = createarray(arr, n); 
    printf("The unsorted elements are:\n");
    display(arr, n); 
    arr = insertion_sort(arr, n);
    printf("The sorted elements are:\n");
    display(arr, n); 
    return 0;
}
int *insertion_sort(int *a, int n)
{
    int key,i, j, t;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j-=1;
        }
        a[j+1]=key;
    }
    return a;
}
int *createarray(int *a, int n)
{
    int i;
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    return a; 
}

void display(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++) 
    {
        printf("%d\t", a[i]); 
    }
    printf("\n");
}
