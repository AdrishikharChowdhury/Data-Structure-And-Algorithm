#include<stdio.h>
#include<stdlib.h>
int *selection_sort(int *, int);
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
    arr = selection_sort(arr, n);
    printf("The sorted elements are:\n");
    display(arr, n); 
    return 0;
}
int *selection_sort(int *a, int n)
{
    int min,i, j, t;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        t=a[i];
        a[i]=a[min];
        a[min]=t;
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
