#include<stdio.h>
#include<stdlib.h>
#define infi 9999
int *merge(int *,int,int,int);
int *merge_sort(int *, int,int );
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
    arr = merge_sort(arr,0,n-1);
    printf("The sorted elements are:\n");
    display(arr, n); 
    return 0;
}
int *merge(int *a,int p,int q,int r)
{
    int n1=q-p+1,n2=r-q,i,j;
    int L[n1+1],R[n2+1];
    for(i=0;i<n1;i++)
    {
        L[i]=a[p+i];
    }
    for(i=0;i<n2;i++)
    {
        R[i]=a[q+i+1];
    }
    i=0,j=0;
    int k=p;
    L[n1]=infi;
    R[n2]=infi;
    for(k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i+=1;
        }
        else{
            a[k]=R[j];
            j+=1;
        }
    }
    return a;
}
int *merge_sort(int *a, int p,int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        a=merge_sort(a,p,q);
        a=merge_sort(a,q+1,r);
        a=merge(a,p,q,r);
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
