#include<stdio.h>
#include<stdlib.h>
typedef struct Doublycirc{
    int data;
    struct Doublycirc *prev;
    struct Doublycirc *next;
}dcd;
dcd* createlist(dcd *,int);
void display(dcd *);
dcd* insertbeg(dcd *, int *);
dcd* insertend(dcd *, int *);
dcd* insertany(dcd *,int *);
dcd* insertval(dcd *, int *);
dcd* delbeg(dcd *, int *);
dcd* delend(dcd *, int *);
dcd* deleteany(dcd *,int *);
dcd* delvalue(dcd *, int *);
void menu(dcd *, int *);
int main()
{
    dcd *head = NULL;
    int n;
    head = (dcd *)malloc(sizeof(dcd));
    printf("Linked List Creation\n====================\n");
    printf("Enter the number of nodes for the linked list: ");
    scanf("%d", &n);
    printf("Enter the first data: ");
    scanf("%d", &head->data);
    head->next = head;
    head->prev=head;
    head = createlist(head,n);
    display(head);
    menu(head, &n);
    printf("Thank you for using this program :)\n");
    return 0;
}
dcd* createlist(dcd *head,int n)
{
    dcd *head1=head,*node;
    int c=1;
    while(c<n)
    {
        node=(dcd *)malloc(sizeof(dcd));
        node->next=NULL;
        node->prev=NULL;
        printf("Enter the next data: ");
        scanf("%d",&node->data);
        node->next=head;
        node->prev=head1;
        head1->next=node;
        head->prev=node;
        head1=node;
        c++;
    }
    return head;
}
void display(dcd *head)
{
    if(head==NULL)
    {
        printf("The Circular Linked is empty\n");
        return;
    }
    dcd *head1=head;
    printf("The Circular Linked List is:\n");
    printf("->");
    do
    {
        printf(" %d ->",head1->data);
        head1=head1->next;
    }while(head1!=head);
    printf("(back to start)\n");
}
void menu(dcd *head, int *n)
{
    int ch, c;
    while (1) 
	{
		printf("\n==========================================\n");
        printf("Enter your operation:\n");
        printf("1. Insert At Beginning\n2. Insert At End\n3. Insert At Given Position\n4. Insert After Given Value\n5. Delete the First Node\n6. Delete the Last Node\n7. Delete Any Position\n8. Delete Any Value\n9. Count The No. Of Nodes\n10. Display The Linked List\n11. Exit\n");
		printf("==========================================\n");
		printf("Your Choice: ");
		scanf("%d", &ch);
		switch (ch) {
            case 1:
            	printf("====================================\n");
            	printf("\tInsert At Beginning \t\n");
            	printf("====================================\n");
                head = insertbeg(head, n);
                break;
            case 2:
            	printf("===============================\n");
            	printf("\tInsert At End \t\n");
            	printf("===============================\n");
                head = insertend(head, n);
                break;
            case 3:
            	printf("======================================\n");
            	printf("\tInsert At Any Position \t\n");
            	printf("======================================\n");
                head = insertany(head, n);
                break;
            case 4:
            	printf("====================================\n");
            	printf("\tInsert At Any Value \t\n");
            	printf("====================================\n");
                head = insertval(head, n);
                break;
            case 5:
            	printf("====================================\n");
            	printf("\tDelete At Beginning \t\n");
            	printf("====================================\n");
                head = delbeg(head, n);
                break;
            case 6:
            	printf("===============================\n");
            	printf("\tDelete At End \t\n");
            	printf("===============================\n");
                head = delend(head, n);
                break;
            case 7:
            	printf("======================================\n");
            	printf("\tDelete At Any Position \t\n");
            	printf("======================================\n");
                head = deleteany(head, n);
                break;
            case 8:
            	printf("====================================\n");
            	printf("\tDelete Any Value \t\n");
            	printf("====================================\n");
                head = delvalue(head, n);
                break;
            case 9:
                printf("The number of nodes in this Linked List is %d\n", (*n));
                break;
            case 10:
            	printf("====================================\n");
            	printf("\tThe Linked List\t\n");
            	printf("====================================\n");
                display(head);
                break;
            case 11:
                return;
            default:
                printf("Invalid Input! Try Again.\n");
                break;
        }
    }
}
dcd* insertbeg(dcd *head, int *n)
{
    dcd *node,*head1=head;
    int v;
    node=(dcd *)malloc(sizeof(dcd));
    printf("Enter the data you want to insert: ");
    scanf("%d",&node->data);
    node->next=NULL;
    node->prev=NULL;
    v=node->data;
    if(head==NULL)
    {
        head=node;
        head->next=head;
        head->prev=head;
        printf("%d has been inserted\n",v);
        (*n)++;
        return head;
    }
    while(head1->next!=head)
    {
        head1=head1->next;
    }
    head1->next=node;
    node->next=head;
    node->prev=head1;
    head->prev=node;
    printf("%d has been inserted\n",v);
    (*n)++;
    return node;
}
dcd* insertend(dcd *head, int *n)
{
    dcd *node,*head1=head;
    int v;
    node=(dcd *)malloc(sizeof(dcd));
    printf("Enter the data you want to insert: ");
    scanf("%d",&node->data);
    node->next=NULL;
    node->prev=NULL;
    v=node->data;
    if(head==NULL)
    {
        head=node;
        head->next=head;
        head->prev=head;
        printf("%d has been inserted\n",v);
        (*n)++;
        return head;
    }
    while(head1->next!=head)
    {
        head1=head1->next;
    }
    head1->next=node;
    node->next=head;
    node->prev=head1;
    head->prev=node;
    printf("%d has been inserted\n",v);
    (*n)++;
    return head;
}
dcd* insertany(dcd *head,int *n)
{
    int i,pos,v;
    dcd *node,*head1=head;
    printf("Enter the position you want to insert your data (Choose from 1 to %d): ",(*n+1));
    scanf("%d",&pos);
    if(pos<1 || pos>(*n)+1)
    {
        printf("Position does not exist\n");
        return head;
    }
    else if(pos==1)
    {
        head=insertbeg(head,n);
        return head;
    }
    else if(pos==(*n)+1)
    {
        head=insertend(head,n);
        return head;
    }
    node=(dcd *)malloc(sizeof(dcd));
    printf("Enter the data you want to insert: ");
    scanf("%d",&node->data);
    v=node->data;
    for(i=1;i<pos-1;i++)
    {
        head1=head1->next;
    }
    node->next=head1->next;
    node->prev=head1;
    head1->next->prev=node;
    head1->next=node;
    (*n)++;
    printf("%d has been inserted\n",v);
    return head;
}
dcd* insertval(dcd *head, int *n)
{
    int v,v1;
    dcd *head1=head,*node;
    node=(dcd *)malloc(sizeof(dcd));
    if(head==NULL)
    {
        printf("The Linked List is empty so the node is inserted in the beginning\n");
        node->next=node;
        (*n)++;
        printf("%d is inserted\n",v);
        return node;
    }
    printf("Enter the value you want to insert the node after: ");
    scanf("%d",&v);
    printf("Enter the data you want to insert: ");
    scanf("%d",&node->data);
    v1=node->data;
    node->next=NULL;
    node->prev=NULL;
    do 
    {
        if (head1->data == v) {
            head1->next->prev=node;
            node->next=head1->next;
            node->prev=head1;
            head1->next=node;
            (*n)++;
            printf("%d has been inserted\n", v1);
            return head;
        }
        head1 = head1->next;
    } while (head1!= head);
    printf("%d is not in the list...Try again!!\n",v);
    return head;
}
dcd* delbeg(dcd *head, int *n) 
{
    if (head == NULL) 
    {
        printf("The Circular Linked List is empty\n");
        (*n) = 0;
        return NULL;
    }
    dcd *head1 = head->prev;
    if (head->next == head) 
    {
        printf("Deleting the only node with value: %d\n", head->data);
        free(head);
        *n = 0;
        return NULL;
    }
    printf("%d is deleted\n",head->data);
    head=head->next;
    head1->next = head;
    head->prev = head1;
    (*n)--;
    return head;
}
dcd* delend(dcd *head, int *n)
{
    if (head == NULL) 
    {
        printf("The Circular Linked List is empty\n");
        (*n) = 0;
        return NULL;
    }
    dcd *head1=head->prev->prev;
    if(head1->next==head)
    {
        (*n)--;
        printf("Only data %d has been deleted\n",head->data);
        return NULL;
    }
    printf("%d is deleted",head1->next->data);
    head1->next=head;
    head->prev=head1;
    (*n)--;
    return head;
}
dcd* deleteany(dcd *head,int *n)
{
    if(head==NULL)
    {
        printf("Circular Linked Lst is empty\n");
        (*n)=0;
        return head;
    }
    else if(head->next==head)
    {
        printf("Only data %d has been deleted\n",head->data);
        (*n)--;
        return NULL;
    }
    int pos,v,i;
    printf("Enter the position you want to delete (Choose from 1 to %d): ",(*n));
    scanf("%d",&pos);
    if(pos<1 || pos>(*n))
    {
        printf("Position does not exist\n");
        return head;
    }
    else if(pos==1)
    {
        head=delbeg(head,n);
        return head;
    }
    else if(pos==(*n))
    {
        head=delend(head,n);
        return head;
    }
    dcd *head1=head;
    for(i=1;i<pos-1;i++)
    {
        head1=head1->next;
    }
    v=head1->next->data;
    head1->next=head1->next->next;
    head1->next->next->prev=head1;
	printf("%d is deleted\n",v);
    (*n)--;
    return head;
}
dcd* delvalue(dcd *head, int *n)
{
    if(head==NULL)
    {
        printf("Circular Linked Lst is empty\n");
        (*n)=0;
        return head;
    }
    else if(head->next==head)
    {
        printf("Only data %d has been deleted\n",head->data);
        (*n)--;
        return NULL;
    }
    int v;
    dcd *head1=head,*head2;
    printf("Enter the data to be deleted: ");
    scanf("%d",&v);
    if(head1->data==v)
    {
        head=delbeg(head,n);
        return head;
    }
    else if(head1->prev->data==v)
    {
        head=delend(head,n);
        return head;
    }
    do 
    {
        if (head1->next->data == v) 
        {
            head1->next->next->prev=head1;
            head1->next=head1->next->next;
            (*n)++;
            printf("%d has been deleted\n", v);
            return head;
        }
        head1 = head1->next;
    } while (head1!= head);
    return head;
}