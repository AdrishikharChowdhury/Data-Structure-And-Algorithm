#include<stdio.h>
#include<stdlib.h>
int bin_search(int *,int,int,int);
int *bubble_sort(int *,int);
int main()
{
    int k,pos,*arr,i,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr=bubble_sort(arr,n);
    printf("The sorted elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the number you want to find: ");
    scanf("%d",&k);
    pos=bin_search(arr,0,n-1,k);
    if(pos==-1)
        printf("The value is not in the array\n");
    else
        printf("value is found at position %d",pos);
    return 0;
}
int *bubble_sort(int *a, int n)
{
    int i, j, t;
    int swapped;
    
    for (i = 0; i < n - 1; i++) 
    {
        swapped = 0; 
        for (j = 0; j < n - i - 1; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                swapped = 1; 
            }
        }
        if (swapped == 0)
            break;
    }
    return a;
}
int bin_search(int *a,int low,int high,int target)
{
    int mid;
    if(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==target)
        {
            return mid+1;
        }
        else if(target>a[mid])
        {
            return bin_search(a,mid+1,high,target);
        }
        else
        {
            return bin_search(a,low,mid-1,target);
        }
    }
    return -1;
}