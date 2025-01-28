#include<stdio.h>
#include<stdlib.h>
typedef struct linearq{
    int data;
    struct linearq *next;
}lq;
lq *enq(lq *,int);
lq *deq(lq *);
void display(lq *);
int main()
{
    lq *front;
    int ch=0,data;
    front=(lq *)malloc(sizeof(lq));
    printf("Creating a linear queue:\n");
    printf("Enter the 1st data: ");
    scanf("%d",&front->data);
    front->next=NULL;
    while(1){
        printf("\nEnter the operation you want to perform\n");
        printf("1. Enqueue\n2. Dequeue\n");
        printf("3. Display the Queue\n4. Exit\n");
        printf("Your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter the data you want to store: ");
                scanf("%d",&data);
                front=enq(front,data);
                printf("%d has been stored",data);
                break;
            case 2:
                front=deq(front);
                break;
            case 3:
                display(front);
                break;
            case 4:
                printf("Thank you for using this program :)");
                exit(0);
                break;
        }
    }
    return 0;
}
void display(lq *front)
{
    if(front==NULL)
    {
        printf("The Queue is Empty\n");
        return;
    }
    lq *front1=front;
    while(front1!=NULL)
    {
        printf("%d ",front1->data);
        front1=front1->next;
    }
    printf("\n");
}
lq *deq(lq *front)
{
    if(front==NULL)
    {
        printf("The Queue is empty");
        return NULL;
    }
    int data=front->data;
    if(front->next==NULL)
    {
        printf("%d has been deleted",data);
        return NULL;
    }
    front=front->next;
    printf("%d has been deleted",data);
    return front;
}
lq *enq(lq *front,int data)
{
    lq *node;
    node=(lq *)malloc(sizeof(lq));
    node->next=NULL;
    node->data=data;
    if(front==NULL)
    {
        return node;
    }
    if(front->next==NULL)
    {
        front->next=node;
        return front;
    }
    lq *rear=front;
    while(rear->next!=NULL)
    {
        rear=rear->next;
    }
    rear->next=node;
    return front;
}