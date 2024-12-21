#include<stdio.h>
#include<stdlib.h>
typedef struct Stack{
    int *arr;
    int top;
    int size;
}stk;
stk *push(stk *,int );
void pop(stk *);
void display(stk *);
void peek(stk *);
int main()
{
    stk *stack;
    int ch,a;
    stack=(stk *)malloc(sizeof(stk));
    printf("Enter the size of the stack: ");
    scanf("%d",&stack->size);
    stack->arr=(int *)malloc(stack->size*sizeof(int));
    stack->top=-1;
    while (1)
    {
        printf("\nWhat operation would you like to perform:\n");
        printf("1.Push\n2.Pop\n");
        printf("3.Peek\n4.Display the stack\n5.Exit\n");
        printf("Your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter the data to be pushed: ");
                scanf("%d",&a);
                stack=push(stack,a);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                peek(stack);
                break;
            case 4:
                display(stack);
                break;
            case 5:
                printf("Thank you for using this program :)\n");
                exit(0);
                break;
            default:
                printf("Wrong input try again!!!!!!");
        }
    }
    return 0;
}
stk *push(stk *stack,int data)
{
    if(stack->top==stack->size-1)
    {
        printf("Stack is full\n");
        return stack;
    }
    stack->arr[++stack->top]=data;
    printf("%d has been pushed\n",data);
    return stack;
}
void pop(stk *stack)
{
    if(stack->top==-1)
    {
        printf("The stack is empty\n");
        return;
    }
    int data=stack->arr[(stack->top)--];
    printf("%d has been popped\n",data);
}
void display(stk *stack)
{
    if(stack->top==-1)
    {
        printf("The stack is empty\n");
        return;
    }
    int i;
    printf("The elements of the stack is\n");
    for(i=stack->top;i>=0;i--)
    {
        printf("%d   ",stack->arr[i]);
    }
}
void peek(stk *stack)
{
    if(stack->top==-1)
    {
        printf("The stack is empty\n");
        return;
    }
    printf("The top element is %d",stack->arr[stack->top]);
}