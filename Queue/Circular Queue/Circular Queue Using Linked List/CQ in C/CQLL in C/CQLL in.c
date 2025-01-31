#include <stdio.h>
#include <stdlib.h>
typedef struct circularq {
    int data;
    struct circularq *next;
}cq;
cq *enq(cq *,int);
cq *deq(cq *);
void display(cq *);
int main() {
    cq *front;
    int ch,data;
    printf("Creation of Circular Queue\n");
    front=(cq *)malloc(sizeof(cq));
    printf("Enter the 1st data: ");
    scanf("%d",&front->data);
    front->next=front;
    while(1)
    {
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
cq *enq(cq *front,int data){
    cq *node,*rear=front;
    node=(cq *)malloc(sizeof(cq));
    node->data=data;
    if(front==NULL)
    {
        node->next=node;
        return node;
    }
    else if(front->next==front)
    {
        front->next=node;
        node->next=front;
    }
    else{
        while(rear->next!=front)
        {
            rear=rear->next;
        }
        rear->next=node;
        node->next=front;
    }
    return front;
}
cq *deq(cq *front){
    if(front==NULL)
    {
        printf("The Queue is empty\n");
        return front;
    }
    cq *rear=front;
    int data=front->data;
    if(front->next==front)
    {
        front=NULL;
    }
    else{
        while(rear->next!=front)
        {
            rear=rear->next;
        }
        rear->next=front->next;
        front=front->next;
    }
    printf("%d has been retrieved\n",data);
    return front;
}

void display(cq *front)
{
    if(front==NULL)
    {
        printf("The Queue is empty\n");
        return;
    }
    cq *rear=front;
    do{
        printf("%d ",rear->data);
        rear=rear->next;
    }while(front!=rear);
}