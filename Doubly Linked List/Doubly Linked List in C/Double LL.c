#include<stdio.h>
#include<stdlib.h>
typedef struct Dnode{
	int data;
	struct Dnode *prev;
	struct Dnode *next;
}dnd;
dnd *createlist(dnd *,int *);
void display(dnd *);
void menu(dnd *,int *);
dnd *insertbeg(dnd *,int *);
dnd *insertend(dnd *,int *);
dnd *insertpos(dnd *,int *);
dnd *insertval(dnd *,int *);
dnd *delbeg(dnd *,int *);
dnd *delend(dnd *,int *);
dnd *delpos(dnd *,int *);
dnd *delvalue(dnd *,int *);
dnd *reverse(dnd *);
int countNodes(dnd *);
dnd	*sortList(dnd *);
int main()
{
	dnd *head;
	int n;
	head=(dnd *)malloc(sizeof(dnd));
	head->next=NULL;
	head->prev=NULL;
	printf("Doubly Linked List Creation\n====================\n");
	printf("Enter the no. of nodes in the doubly linked list: ");
	scanf("%d",&n);
	head=createlist(head,&n);
	menu(head,&n);
	printf("Thank you for using this program :)");
	return 0;
}
int countNodes(dnd *head)
{
	int c=0;
	dnd *head1=head;
	while(head1!=NULL)
	{
		c++;
		head1=head1->next;
	}
	return c;
}
dnd* sortList(dnd *head) 
{
    int swapped;
    dnd *ptr1;
    dnd *lptr = NULL;
    if (head == NULL || head->next == NULL)
        return head;

    do {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != lptr) 
		{
            if (ptr1->data > ptr1->next->data)
			{
                int temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);

    return head;
}
dnd *reverse(dnd *head)
{
	dnd *temp,*head1=head;
	while(head1!=NULL)
	{
		temp=head1->prev;
		head1->prev=head1->next;
		head1->next=temp;
		head1=head1->prev;
	}
	if (temp != NULL)
	{
        head = temp->prev;
    }
    printf("The linked List has been reversed\n");
    return head;
}
dnd *delvalue(dnd *head,int *n)
{
	int val;
	dnd *head1=head;
	printf("Enter the value you want to delete: ");
	scanf("%d",&val);
	if(head==NULL)
	{
		printf("The Linked List is empty\n");
		return head;
	}
	else
	{
		while(head1->next->data!=val && head1!=NULL)
        {
            head1=head1->next;
        }
		if(head1->data==val)
	    {
	        head=head1->next;
	        head->prev=NULL;
	        head1->next=NULL;
	    }
		else
		{
	        if(head1==NULL)
	        {
	            printf("%d is not in this list",val);
	            return head;
	        }
	        dnd *temp = head1->next;
			head1->next = temp->next;
			if (temp->next != NULL)
			    temp->next->prev = head1;
		}
	}
	printf("%d has been deleted\n",val);
	(*n)--;
    return head;
}
dnd *delpos(dnd *head,int *n)
{
	int v;
	dnd *head1=head;
	printf("Enter the position you want to delete (Choose from 1 to %d): ",(*n));
	scanf("%d",&v);
	if(head==NULL)
	{
		printf("The Linked List is empty\n");
		return head;
	}
	if(v==1)
	{
		head=delbeg(head,n);
		return head;
	}
	else if(v<1 || v>(*n)+1)
	{
		printf("Position out of bounds\n");
		return head;
	}
	else if (v==(*n))
	{
		while(head1->next!=NULL)
		{
			head1=head1->next;
		}
		printf("%d has been deleted\n",head1->data);
		head1->prev->next=NULL;
		head1->prev=NULL;
	}
	else
	{
		for(int i=1;i<v-1 && head1!=NULL;i++)
		{
			head1=head1->next;
		}
		head1->next->next->prev=head1;
        head1->next=head1->next->next;
	}
	(*n)--;
	return head;
}
dnd *delend(dnd *head,int *n)
{
	dnd *head1=head;
	while(head1->next!=NULL)
	{
		head1=head1->next;
	}
	printf("%d has been deleted\n",head1->next->data);
	head1->prev->next=NULL;
	head1->prev=NULL;
	return head;
}
dnd *delbeg(dnd *head,int *n)
{
	if(head==NULL)
		printf("Linked List is Empty\n");
	dnd *head1=head;
	head1=head->next;
	printf("%d has been deleted\n",head->data);
	head=head1;
	(*n)--;
	return head;
}
dnd *insertval(dnd *head,int *n)
{
	int val;
	dnd *node,*head1;
	head1=head;
	node=(dnd *)malloc(sizeof(dnd *));
	printf("Enter the data you want to insert: ");
	scanf("%d",&node->data);
	node->next=NULL;
	node->prev=NULL;
	printf("Enter the value you want to insert after: ");
	scanf("%d",&val);
	if(head==NULL)
	{
		printf("Linked List is Empty so insertion will be at the beginning\n");
		node->next=head;
		head->prev=node;
		node->prev=NULL;
		head=node;
	}
	else
	{
		printf("%d has been inserted",node->data);
		while(head1!=NULL && head1->data!=val)
		{
			head1=head1->next;
		}
		if (head1 == NULL) 
	    {
	        printf("Value %d not found in the list.\n", val);
	        return head;
	    }
		node->prev=head1;
        node->next=head1->next;
        if (head1->next != NULL)
            head1->next->prev = node;
        head1->next=node;
	}
	(*n)++;
	return head;
}
dnd *insertpos(dnd *head,int *n)
{
	int k,i;
	dnd *head1,*node;
	head1=head;
	node=(dnd *)malloc(sizeof(dnd));
	printf("Enter the data to be inserted: ");
	scanf("%d",&node->data);
	printf("Enter the position to insert the value (Choose from 1 to %d): ",(*n)+1);
	scanf("%d",&k);
	printf("%d has been inserted",node->data);
	node->next=NULL;
	node->prev=NULL;
	if(k==1 || head==NULL)
	{
		if(head==NULL)
			printf("Linked List is Empty so insertion will be at the beginning\n");
		node->next=head;
		head->prev=node;
		node->prev=NULL;
		head=node;
	}
	else if(k<1 || k>(*n)+1)
	{
		printf("Position Out Of Bounds");
		return head;
	}
	else
	{
		if (head1 == NULL)
        {
            printf("Position Out Of Bounds\n");
            free(node);
            return head;
        }
		for(i=1;i<k-1 && head1!=NULL;i++)
		{
			head1=head1->next;
		}
		node->prev=head1;
        node->next=head1->next;
        if (head1->next != NULL)
            head1->next->prev = node;
        head1->next=node;
	}
	(*n)++;
	return head;
}
dnd *insertend(dnd *head,int *n)
{
	dnd *head1,*node;
	node=(dnd *)malloc(sizeof(dnd));
	printf("Enter the data to be inserted: ");
	scanf("%d",&node->data);
	printf("%d has been inserted",node->data);
	head1=head;
	while(head1->next!=NULL)
    {
        head1=head1->next;
    }
    head1->next=node;
    node->prev=head1;
    (*n)++;
    return head;
}
dnd *insertbeg(dnd *head,int *n)
{
	dnd *node;
	node=(dnd *)malloc(sizeof(dnd));
	printf("Enter the data to be inserted: ");
	scanf("%d",&node->data);
	printf("%d has been inserted",node->data);
	node->prev=NULL;
	node->next=head;
	head->prev=node;
	head=node;
	(*n)++;
	return head;
}
dnd* createlist(dnd *head,int *n)
{
    dnd *node,*head1;
    head1=head;
    int c=1;
    printf("Enter the first data: ");
    scanf("%d",&head->data);
    while(c<(*n))
    {
        node=(dnd *)malloc(sizeof(dnd));
        printf("Enter the next data: ");
        scanf("%d",&node->data);
        node->next=NULL;
        head1->next=node;
        node->prev=head1;
        head1=head1->next;
        c++;
    }
    return head;
}
void display(dnd *head)
{
    dnd *head1=head;
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    printf("The elements in the Doubly Linked List are:\n");
    printf("NULL <- ");
    while(head1!=NULL)
    {
        printf("%d",head1->data);
        head1=head1->next;
        if (head1 != NULL) {
            printf(" <=> ");
        }
    }
    printf(" -> NULL\n");
}
void menu(dnd *head, int *n) 
{
    int ch, c;
    while (1) 
	{
		printf("\n==========================================\n");
        printf("Enter your operation:\n");
        printf("1. Insert At Beginning\n2. Insert At End\n3. Insert At Given Position\n4. Insert After Given Value\n5. Delete the First Node\n6. Delete the Last Node\n7. Delete Any Position\n8. Delete Any Value\n9. Reverse the Linked List\n10. Count The No. Of Nodes\n11. Sort the Linked List\n12. Display The Linked List\n13. Exit\n");
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
                head = insertpos(head, n);
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
                head = delpos(head, n);
                break;
            case 8:
            	printf("====================================\n");
            	printf("\tDelete Any Value \t\n");
            	printf("====================================\n");
                head = delvalue(head, n);
                break;
            case 9:
            	printf("====================================\n");
            	printf("\tReverse The Linked List \t\n");
            	printf("====================================\n");
                head = reverse(head);
                break;
            case 10:
                c = countNodes(head);
                printf("The number of nodes in this Linked List is %d\n", c);
                break;
            case 11:
            	printf("========================================================================\n");
            	printf("\tThe Linked List has been sorted by ascending order \t\n");
            	printf("========================================================================\n");
                sortList(head);
                break;
            case 12:
            	printf("====================================\n");
            	printf("\tThe Linked List\t\n");
            	printf("====================================\n");
                display(head);
                break;
            case 13:
                return;
                break;
            default:
                printf("Invalid Input! Try Again.\n");
                break;
        }
    }
}