#include<stdio.h>
#include<stdlib.h>
int *push(int *,int *,int);
int *pop(int *,int *,int);
int peek(int *,int *,int);
void display(int *,int *,int);
int main()
{
	int c=-1,j,i,pk,*stack,ch,n;
	printf("Enter the size of the stack: ");
	scanf("%d",&n);
	stack=(int *)malloc(n*sizeof(int));
	do{
		j=1;
		printf("Enter the operation:\n1.Push\n2.Pop\n3.Peek\n4.Display The Stack\n5.Exit\nYour choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				stack=push(stack,&c,n);
				break;
			case 2:
				stack=pop(stack,&c,n);
				break;
			/*case 3:
				pk=peek(stack,&c,n);
				break;
			*/case 4:
				display(stack,&c,n);
				break;
			case 5:
				j=0;
				printf("Thank you for using this program :)");
				break;
			default:
				printf("Wrong Input try again\n");
		}
	}while(j);
	return 0;
}
int *push(int *stack,int *c,int n)
{
	if((*c)==n-1)
	{
		printf("The stack is full\n");
		return stack;
	}
	printf("Enter the data to push: ");
	scanf("%d",&stack[++(*c)]);
	return stack;
}
int *pop(int *stack,int *c,int n)
{
	if((*c)==-1)
	{
		printf("The stack is empty\n");
		return stack;
	}
	printf("%d has been popped\n",stack[((*c)--)]);
	return stack;
}
int peek(int *stack,int *c,int n)
{
	if((*c)==-1)
	{
		printf("The stack is empty\n");
		return 0;
	}
	printf("The top element is %d\n",stack[(*c)]);
	return stack[(*c)];
}
void display(int *stack,int *c,int n)
{
	int i;
	if((*c)==-1)
	{
		printf("The stack is empty\n");
		return;
	}
	printf("The elements of the stack is:\n");
	for(i=(*c);i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
}