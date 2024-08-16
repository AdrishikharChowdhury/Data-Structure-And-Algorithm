//Selection Sort Method
#include<stdio.h>
int ascend(int);
int getvalue(int);
int descend(int);
int a[100];
int main()
{
	int n,i,temp,tempt,check,j;
	printf("Enter your array's limit\n");
	scanf("%d",&n);
	if(n<100)
	{
		getvalue(n);
		printf("Enter your choice to show\n1. Ascending\n2. Descending\n3. Exit\n");
		scanf("%d",&check);
		switch(check)
		{
			case 1:
				printf("Your Ascending ordered elements are\n");
				ascend(n);
				for(i=0;i<n;i++)
				{
					printf("%d\n",a[i]);
				}
				break;
			case 2:
				printf("Your descending ordered elements are\n");
				descend(n);
				for(i=0;i<n;i++)
				{
					printf("%d\n",a[i]);
				}				
				break;
			case 3:
				break;
			default:
				printf("You haven't entered a valid choice\n");	
		}
	}
	else
	{
		printf("Sorry!! array exceeds limit\n");
		printf("Do you want to try again?\n1.Yes\n2.No\n");
		scanf("%d",&temp);
		if(temp==1)
		{
			main();
		}
	}	
}
int getvalue(int n)
{
	int i;
	printf("Enter your %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	return 0;
}
int ascend(int n)
{
	int i,j,tempt;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				tempt=a[i];
				a[i]=a[j];
				a[j]=tempt;
			}
		}
	}
	return 0;
}
int descend(int n)
{
	int i,j,tempt;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				tempt=a[i];
				a[i]=a[j];
				a[j]=tempt;
			}
		}
	}
	return 0;	
}