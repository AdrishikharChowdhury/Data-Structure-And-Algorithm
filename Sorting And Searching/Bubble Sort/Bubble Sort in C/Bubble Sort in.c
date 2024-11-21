#include<stdio.h>
#include<stdlib.h>
int *bubble_sort(int *, int);
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
    arr = bubble_sort(arr, n);
    printf("The sorted elements are:\n");
    display(arr, n); 
    return 0;
}

// remove the comments to convert it to modified bubble sort
int *bubble_sort(int *a, int n)
{
    int i, j, t;
    //int swapped;
    
    for (i = 0; i < n - 1; i++) 
    {
        //swapped = 0; 
        for (j = 0; j < n - i - 1; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                //swapped = 1; 
            }
        }
        /*if (swapped == 0)
            break;*/
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
