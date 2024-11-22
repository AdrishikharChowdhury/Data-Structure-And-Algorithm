#include<stdio.h>
#include<stdlib.h>
int partition(int *,int,int);
int *quick_sort(int *, int,int );
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
    arr = quick_sort(arr,0,n-1);
    printf("The sorted elements are:\n");
    display(arr, n); 
    return 0;
}
int partition(int *a,int p,int r)
{
    int x=a[r],i=p-1,j,t;
    for(j=p;j<=r-1;j++)
    {
        if(a[j]<=x)
        {
            i+=1;
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    t=a[i+1];
    a[i+1]=a[r];
    a[r]=t;
    return i+1;
}
int *quick_sort(int *a, int p,int r)
{
    int q;
    if(p<r)
    {
        q=partition(a,p,r);
        a=quick_sort(a,p,q-1);
        a=quick_sort(a,q+1,r);
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
