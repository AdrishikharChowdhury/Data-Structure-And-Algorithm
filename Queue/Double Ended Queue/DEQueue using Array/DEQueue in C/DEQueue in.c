#include<stdio.h>
#include<stdlib.h>
#define error 404
int *insertbeginning(int *,int *,int *,int,int);
int *insertend(int *,int *,int *,int,int);
int deletebeg(int *,int *,int *,int);
int deleteend(int *,int *,int *,int);
void display(int *,int ,int ,int );
int main()
{
    int *DEQ,front=-1,rear=-1,n,ch,a=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    DEQ=(int *)malloc(n*sizeof(int));
    while(1)
    {
        printf("\nEnter your choice:\n");
        printf("1.Insert from beginning\n2.Delete from Beginning\n");
        printf("3.Insert from end\n4.Delete from end\n");
        printf("5.Display The Double Ended queue\n6.Exit\n");
        printf("Your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter the data to insert at the beginning: ");
                scanf("%d",&a);
                DEQ=insertbeginning(DEQ,&front,&rear,n,a);
                break;
            case 2:
                a=deletebeg(DEQ,&front,&rear,n);
                if(a==error)
                    break;
                else
                    printf("%d has been deleted\n",a);
                break;    
            case 3:
                printf("Enter the data to insert at the end: ");
                scanf("%d",&a);
                DEQ=insertend(DEQ,&front,&rear,n,a);
                break;
            case 4:
                a=deleteend(DEQ,&front,&rear,n);
                if(a==error)
                    break;
                else
                    printf("%d has been deleted\n",a);
                break;
            case 5:
                display(DEQ,front,rear,n);
                break;
            case 6:
                printf("Thank you for using this program :)\n");
                exit(0);
                break;
            default:
                printf("Wrong Input Try Again..........");
        }
    }
    return 0;
}
int *insertbeginning(int *queue,int *front,int *rear,int size,int data)
{
    if((*front==0 && *rear==size-1) || (*front==-1 && *rear==0) || *front==*rear+1)
    {
        printf("The queue is full");
        return queue;
    }
    if(*front==0)
    {
        *front=size-1;
    }
    else if(*front==-1 && *rear==-1)
    {
        *front=0;
        *rear=0;
    }
    else{
        *front-=1;
    }
    queue[*front]=data;
    printf("%d has been inserted\n",data);
    return queue;
}
int *insertend(int *queue,int *front,int *rear,int size,int data)
{
    if((*front==0 && *rear==size-1) || (*front==-1 && *rear==0) || *front==*rear+1)
    {
        printf("The queue is full");
        return queue;
    }
    if(*rear==size-1)
    {
        *rear=0;
    }
    else if(*front==-1 && *rear==-1)
    {
        *front=0;
        *rear=0;
    }
    else{
        *rear+=1;
    }
    queue[*rear]=data;
    printf("%d has been inserted\n",data);
    return queue;
}
int deletebeg(int *queue,int *front,int *rear,int size)
{
    if(*front==-1 && *rear==-1)
    {
        printf("The queue is empty\n");
        return error;
    }
    int data=queue[*front];
    if(*front==*rear)
    {
        *front=-1;
        *rear=-1;
    }
    else if(*front==size-1)
    {
        *front=0;
    }
    else{
        *front+=1;
    }
    return data;
}
int deleteend(int *queue,int *front,int *rear,int size)
{
    if(*front==-1 && *rear==-1)
    {
        printf("The queue is empty\n");
        return error;
    }
    int data=queue[*rear];
    if(*front==*rear)
    {
        *front=-1;
        *rear=-1;
    }
    else if(*rear==0)
    {
        *rear=size-1;
    }
    else{
        *rear-=1;
    }
    return data;
}

void display(int *queue, int front, int rear, int size) 
{
    if (front == -1) {
        printf("The queue is empty\n");
        return;
    }
    printf("DEQueue elements are: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) 
            break;
        i = (i + 1) % size; 
    }
    printf("\n");
}