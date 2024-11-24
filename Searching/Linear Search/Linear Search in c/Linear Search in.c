#include<stdio.h>
#include<stdlib.h>
int main()
{
    int flag=0,i,k,*arr,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to search: ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {    
            printf("%d is found at position: %d\n",k,i+1);
            flag=1;
        }
    }
    if(flag==0)
        printf("%d is not in this array",k);
    return 0;
}