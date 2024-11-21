#include<stdio.h>
#include<stdlib.h>
int *c_enq(int *,int *,int *,int,int);
int c_deq(int *,int *,int *,int);
void c_displayq(int *,int,int,int);
int main()
{
    int ch,*q,front=-1,rear=-1,n,a;
    printf("Enter the size of the Circular Queue: ");
    scanf("%d",&n);
    q=(int *)malloc(n*sizeof(int));
    while(1)
    {
        printf("Enter your operation:\n");
        printf("1.Enqueue\n2.Dequeue\n3.Show The Circular Queue\n4.Exit\n");
        printf("Your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                if((front==0 && rear==n-1) || front==rear+1)
                {
                    printf("The queue is full\n");
                    break;
                }
                printf("Enter the data to enqueue: ");
                scanf("%d",&a);
                q=c_enq(q,&front,&rear,n,a);
                printf("%d has been enqueued\n",a);
                break;
            case 2:
                if(front==-1 && rear==-1)
                {
                    printf("The queue is empty\n");
                    break;
                }
                a=c_deq(q,&front,&rear,n);
                printf("%d has been dequeued",a);
                break;
            case 3:
                if(front==-1 && rear==-1)
                {
                    printf("The queue is empty\n");
                    break;
                }
                c_displayq(q,front,rear,n);
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
int *c_enq(int *q,int *f,int *r,int n,int data)
{
    if((*f)==-1 && (*r)==-1)
    {
        (*f)=0;
        (*r)=0;
    }
    else
        (*r)=((*r)+1)%n;
    q[(*r)]=data;
    return q;
}
int c_deq(int *q,int *f,int *r,int n)
{
    int data=q[(*f)];
    if((*f)==(*r))
    {
        (*f)=-1;
        (*r)=-1;
    }
    else
        (*f)=((*f)+1)%n;
    return data;
}
void c_displayq(int *q, int f, int r,int n) 
{
    int i;
    printf("The Circular Queue is:\n");
    if (f <= r) {
        for (i = f; i <= r; i++) {
            printf("%d\t", q[i]);
        }
    } else {
        for (i = f; i < n; i++) {
            printf("%d\t", q[i]);
        }
        for (i = 0; i <= r; i++) {
            printf("%d\t", q[i]);
        }
    }
    printf("\n");
}
