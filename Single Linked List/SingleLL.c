#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int data;
	struct Node *link;
}nd;
nd* insertbeg(nd *);
void swapData(nd *,nd *);
void sortList(nd *);
nd* createlist(nd *,int);
void ShowList(nd *);
nd* insertend(nd *);
nd* insertpos(nd *,int);
nd* insertval(nd *);
nd *delbeg(nd *);
nd *reverse(nd *);
nd *delend(nd *);
nd *delpos(nd *,int);
nd *delvalue(nd *);
void menu(nd *,int );
int countNodes(nd *);
int main()
{
	int i,c,ch,n;
	nd *head;
	head=(nd *)malloc(sizeof(nd));
	printf("Linked List Creation\n====================\n");
	printf("Enter the no. of nodes for linked list: ");
	scanf("%d",&n);
	printf("Enter the first data: ");
	scanf("%d",&head->data);
	head->link=NULL;
	createlist(head,n);
	menu(head,n);
	printf("Thank you for using this program :)");
	return 0;
}
nd* insertbeg(nd *h) 
{
    nd *node = (nd *)malloc(sizeof(nd));
    node->link=NULL;
    if (node == NULL) {
        printf("Memory allocation failed\n");
        return h;
    }
    printf("Enter the data to be inserted: ");
    scanf("%d", &node->data);
    node->link = h;
    return node;
}
void swapData(nd *a,nd *b) 
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}
void sortList(nd* head) {
    if (head == NULL || head->link == NULL)
        return;
    int swapped;
    nd *ptr1,*ptr2 = NULL;
    do {
        swapped = 0;
        ptr1 = head;

        while (ptr1->link != ptr2) 
		{
            if (ptr1->data > ptr1->link->data) 
			{
                swapData(ptr1, ptr1->link);
                swapped = 1;
            }
            ptr1 = ptr1->link;
        }
        ptr2 = ptr1;
    } while (swapped);
}
nd* createlist(nd *head,int c)
{
	nd *node;
	int ch=1;
	while(ch<c)
	{
		node=(nd *)malloc(sizeof(nd));
		printf("Enter the next data: ");
		scanf("%d",&node->data);
		node->link=NULL;
		head->link=node;
		head=head->link;
		ch++;
	}
}
void ShowList(nd *head1)
{
	if(head1==NULL)
	{
		printf("The Linked List is Empty\n");
		return ;
	}
	while(head1!=NULL)
	{
		printf("%d -> ",head1->data);
		head1=head1->link;
	}
	printf("NULL\n");
}
nd* insertend(nd* head)
{
	nd *head1,*node;
	head1=head;
	node=(nd *)malloc(sizeof(nd));
	node->link=NULL;
	printf("Enter the data you want to insert it to the end: ");
	scanf("%d",&node->data);
	while(head1->link!=NULL)
    {
    	head1=head1->link;
	}
	head1->link=node;
	return head;
}
nd* insertpos(nd *head,int n)
{
	nd *node,*current;
	int k,i;
	current=head;
	node=(nd *)malloc(sizeof(nd));
	node->link=NULL;
	printf("Enter the data you want to insert: ");
	scanf("%d",&node->data);
	printf("Enter the position you want to insert: ");
	scanf("%d",&k);
	if (k<1||k>n+1) 
	{
		printf("Invalid position\n");
        free(node);
        return insertpos(head,n);
	}
	if (k == 1) 
	{
        node->link = head;
        head = node;
    }
	else 
	{
        for (i = 1; i < k - 1 && current != NULL; i++) {
            current = current->link;
        }
        if (current == NULL) {
            printf("Position out of bounds\n");
            free(node);
            return 0;
        }
        node->link = current->link;
        current->link = node;
    }
    return head;
}
nd* insertval(nd *head)
{
	int val,i=0;
	nd *head1,*node;
	head1=head;
	node=(nd *)malloc(sizeof(nd));
	node->link=NULL;
	printf("Enter the inserted data: ");
	scanf("%d",&node->data);
	printf("Enter the value you want to insert after: ");
	scanf("%d",&val);
	while(head1!=NULL)
	{
		if(head1->data==val)
		{
			node->link=head->link;
			head1->link=node;
			i=1;
			break;
		}
		head1=head1->link;
	}
	if(i==0)
		printf("There is no value in this Linked List");
	return head;
}
nd* delbeg(nd *head)
{
	nd* head1;
	if(head==NULL)
	{
		printf("The Linked List is Empty\n");
		return head;
	}
	head1=head->link;
	head->link=NULL;
	head=head1;
	return head;
}
nd *reverse(nd *head)
{
	nd *prev=NULL,*current=head,*next=NULL;
	if(head==NULL || head->link==NULL)
		return head;
	else
	{
    	while (current != NULL) 
		{
	        next = current->link;  
	        current->link = prev;  
	        prev = current;        
	        current = next;        
    	}
    	head = prev;  
    	return head;
	}
}
nd *delend(nd *head)
{
	nd *last=head;
	if(head==NULL)
	{
		printf("The List is Empty\n");
		return head;
	}
	while(last->link->link!=NULL)
	{
		last=last->link;
	}
	last->link=NULL;
	return head;
}
void menu(nd *head,int n)
{
	int ch,c;
	printf("\nEnter your operation:\n1.Insert At Benginning\n2.Insert At End\n3.Insert At Given Position\n4.Insert After Given Value\n5.Delete the First Node\n6.Delete the Last Node\n7.Delete Any Position\n8.Delete Any Value\n9.Reverse the Linked List\n10.Count The No. Of Nodes\n11.Sort the Linked List\n12.Display The Linked List\n13.Exit\nYour Choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Insert At The Beginning\n");
			head=insertbeg(head);
			break;
		case 2:
			printf("Insert At The End\n");
			head=insertend(head);
			break;
		case 3:
			printf("Insert At Given Position\n");
			head=insertpos(head,n);
			break;
		case 4:
			printf("Insert After Given Value\n");
			head=insertval(head);
			break;
		case 5:
			printf("Deleted The First Node\n");
			head=delbeg(head);
			break;
		case 6:
			printf("Deleted The Last Node\n");
			head=delend(head);
			break;
		case 7:
			printf("Delete Any Node\n");
			head=delpos(head,n);
			break;
		case 8:
			printf("Delete Any Value\n");
			head=delvalue(head);
			break;
		case 9:
			printf("The Link List has been reversed\n");
			head=reverse(head);
			break;
		case 10:
			c=countNodes(head);
			printf("The no. of nodes in this Linked List is %d",c);
			break;
		case 11:
			printf("The Linked List has been sorted\n");
			sortList(head);
			break;		
		case 12:
			printf("The linked List is:\n");
			ShowList(head);
			break;
		case 13:
			return;
			break;
		deafult:
			printf("Invalid Input Try Again....!!\n");
			return menu(head,n);
	}
	return menu(head,n);
}
nd *delpos(nd *head,int n)
{
	nd *head1=head;
	int i,ch;
	printf("Enter the position you want to delete: ");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("%d has been deleted",head1->link->data);
		head1=head1->link;
		head=head1;
	}
	else if(ch<1 || ch>n)
	{
		printf("Position out of bonds\n");
		return head;
	}
	else
	{
		for(i=0;i<ch-2 && head1->link!=NULL;i++)
		{
			head1=head1->link;
		}
		printf("%d has been deleted",head1->link->data);
		head1->link=head1->link->link;
	}
	return head;
}
nd *delvalue(nd *head)
{
	int ch,i;
	printf("Enter the value you want to delete: ");
	scanf("%d",&ch);
	nd *head1=head;
    if (head1!= NULL && head1->data ==ch) 
        {
        	head = head1->link;
        	printf("%d has been deleted",ch);
		}
    else
	{
		while(head1->link!=NULL && head1->link->data!=ch)
	    {
	        head1=head1->link;
		}
	    if(head1->link!=NULL)
	        {
	        	head1->link=head1->link->link;
	        	printf("%d has been deleted",ch);
			}
	    else{
	        printf("The data can't be found in this Linked List\n");
	        return head;
	    }
	}
    return head;
}
int countNodes(nd *head)
{
	int c=0;
	while(head!=NULL)
	{
		head=head->link;
		c++;
	}
	return c;
}
