#include<stdio.h>
#include<stdlib.h>
int *max_heapify(int *,int,int);
int *build_max_heap(int *, int);
int *heap_sort(int *,int);
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
    arr = heap_sort(arr,n);
    printf("The sorted elements are:\n");
    display(arr, n); 
    return 0;
}
int *max_heapify(int *a,int heapsize,int i)
{
    int t,l=2*i+1,r=2*i+2,largest=i;
    if(l<heapsize && a[l]>a[i])
        largest=l;
    if(r<heapsize && a[r]>a[largest])
        largest=r;
    if(largest!=i)
    {
        t=a[i];
        a[i]=a[largest];
        a[largest]=t;
        a=max_heapify(a,heapsize,largest);
    }
    return a;
}
int *build_max_heap(int *a,int n)
{
    int i,heap_size=n;
    for(i=n/2-1;i>=0;i--)
    {
        a=max_heapify(a,heap_size,i);
    }
    return a;
}
int *heap_sort(int *a, int n)
{
    int t,i;
    a=build_max_heap(a,n);
    for(i=n-1;i>=1;i--)
    {
        t=a[0];
        a[0]=a[i];
        a[i]=t;
        a=max_heapify(a,i,0);
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
