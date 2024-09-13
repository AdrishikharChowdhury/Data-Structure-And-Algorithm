#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
	int data;
	struct stack *next;
}stk;
stk* push(stk *,int );
stk* pop(stk *);
int peek(stk *);
void display(stk *);
int main()
{
	stk *top=NULL;
	int j,ch,data;
	do{
		j=1;
		printf("\nEnter your operation:\n1.Push\n2.Pop\n3.Peek\n4.Display the stack\n5.Exit\nYour choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the to push: ");
				scanf("%d",&data);
				top=push(top,data);
				break;
			case 2:
				top=pop(top);
				break;
			case 3:
				data=peek(top);
				if(data!=0)
					printf("The top element is %d",data);
				break;
			case 4:
				display(top);
				break;
			case 5:
				j=0;
				printf("Thank you for using this program :)");
				break;
			default:
				printf("Wrong input try again!!\n");
		}
	}while(j);
	return 0;
}
stk* push(stk *top,int x)
{
	stk *node;
	node=(stk *)malloc(sizeof(stk));
	node->data=x;
	node->next=top;
	top=node;
	printf("%d has been pushed into the stack\n",top->data);
	return top;
}
stk* pop(stk *top)
{
	if(top==NULL)
	{
		printf("The stack is empty\n");
		return top;
	}
	int v=top->data;
	stk *top1=top->next;
	top->next=NULL;
	printf("%d has been popped\n",v);
	return top1;
}
int peek(stk *top)
{
	if(top==NULL)
	{
		printf("The stack is empty\n");
		return 0;
	}
	return top->data;
}
void display(stk *top)
{
	stk *top1=top;
	if(top==NULL)
	{
		printf("The stack is empty\n");
		return;
	}
	printf("The stack is:\n");
	while(top1!=NULL)
	{
		printf("%d\n",top1->data);
		top1=top1->next;
	}
}