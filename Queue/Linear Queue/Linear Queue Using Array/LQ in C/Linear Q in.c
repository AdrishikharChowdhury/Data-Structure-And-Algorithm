#include<stdio.h>
#include<stdlib.h>
int *enq(int *,int *,int *,int,int);
int deq(int *,int *,int *);
void displayq(int *,int,int);
int main()
{
    int front=-1,rear=-1,ch,*q,a,n;
    printf("Enter the size of the queue: ");
    scanf("%d",&n);
    q=(int *)malloc(n*sizeof(int));
    while(1)
    {
        printf("What operation you want to perform:\n");
        printf("1.Enqueue\n2.Dequeue\n3.Show the Queue\n4.Exit\n");
        printf("Your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                if(rear==n-1)
                {
                    printf("The queue is full\n");
                    break;
                }
                printf("Enter the data to enqueue: ");
                scanf("%d",&a);
                q=enq(q,&front,&rear,n,a);
                printf("%d has been enqueued\n",a);
                break;
            case 2:
                if(front==-1 && rear==-1)
                {
                    printf("The queue is empty\n");
                    break;
                }
                a=deq(q,&front,&rear);
                printf("%d has been dequeued",a);
                break;
            case 3:
                if(front==-1 && rear==-1)
                {
                    printf("The queue is empty\n");
                    break;
                }
                displayq(q,front,rear);
                break;
            case 4:
                printf("Thank you for using this program :)");
                exit(0);
                break;
            default:
                printf("Wrong choice try again......");
        }
    }
    return 0;
}
int *enq(int *q,int *f,int *r,int n,int data)
{
    if((*f)==-1 && (*r)==-1)
    {
        (*f)=0;
        (*r)=0;
    }
    else
        (*r)+=1;
    q[(*r)]=data;
    return q;
}
int deq(int *q,int *f,int *r)
{
    int data=q[(*f)];
    if((*f)==(*r))
    {
        (*f)=-1;
        (*r)=-1;
    }
    else
        (*f)+=1;
    return data;
}
void displayq(int *q,int f,int r)
{
    int i;
    printf("The Queue is:\n");
    for(i=f;i<=r;i++)
    {
        printf("%d\t",q[i]);
    }
    printf("\n");
}