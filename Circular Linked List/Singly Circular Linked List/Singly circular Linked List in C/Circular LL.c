#include<stdio.h>
#include<stdlib.h>
typedef struct CNode{
    int data;
    struct CNode *next;
}cnd;
cnd* insertbeg(cnd *, int *);
cnd* createlist(cnd *, int *);
void ShowList(cnd *);
cnd* insertend(cnd *, int *);
cnd* insertpos(cnd *, int *);
cnd* insertval(cnd *, int *);
cnd* delbeg(cnd *, int *);
cnd* delend(cnd *, int *);
cnd* delpos(cnd *, int *);
cnd* delvalue(cnd *, int *);
void menu(cnd *, int *);
int countNodes(cnd *);
int main()
{
    cnd *head = NULL;
    int n;
    head = (cnd *)malloc(sizeof(cnd));
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Linked List Creation\n====================\n");
    printf("Enter the number of nodes for the linked list: ");
    scanf("%d", &n);
    printf("Enter the first data: ");
    scanf("%d", &head->data);
    head->next = head;  // Fix: Make it circular
    head = createlist(head, &n);
    menu(head, &n);
    printf("Thank you for using this program :)\n");
    return 0;
}
cnd* createlist(cnd *head, int *n)
{
    cnd *head1,*node;
    int c=1;
    head1=head;
    while(c<(*n))
    {
        node=(cnd *)malloc(sizeof(cnd));
        printf("Enter the next data: ");
        scanf("%d",&node->data);
        node->next = head;
        head1->next = node;
        head1 = node;
        c++;
    }
    return head;
}
void ShowList(cnd *head)
{
    if(head==NULL)
    {
        printf("The Circular Linked is empty\n");
        return;
    }
    cnd *head1=head;
    printf("The Circular Linked List is:\n");
    printf("->");
    do
    {
        printf(" %d ->",head1->data);
        head1=head1->next;
    }while(head1!=head);
    printf("(back to start)\n");
}
cnd* insertbeg(cnd *head, int *n)
{
    cnd *head1,*node;
    node=(cnd *)malloc(sizeof(cnd));
    printf("Enter the data to be inserted: ");
    scanf("%d",&node->data);
    int v=node->data;
    if(head==NULL)
    {
        node->next=node;  // Make it circular
        (*n)++;
        printf("%d is inserted\n",v);
        return node;
    }
    head1=head;
    while(head1->next!=head)
    {
        head1=head1->next;
    }
    node->next=head;
    head1->next=node;
    head=node;
    (*n)++;
    printf("%d is inserted\n",v);
    return head;
}

cnd* insertend(cnd *head, int *n)
{
    cnd *head1=head,*node;
    node=(cnd *)malloc(sizeof(cnd));
    printf("Enter the data to be inserted: ");
    scanf("%d",&node->data);
    int v=node->data;
    if(head==NULL)
    {
        node->next=node;  // Make it circular
        (*n)++;
        printf("%d is inserted\n",v);
        return node;
    }
    while(head1->next!=head)
    {
        head1=head1->next;
    }
    node->next=head;
    head1->next=node;
    (*n)++;
    printf("%d is inserted\n",v);
    return head;
}

cnd* insertpos(cnd *head, int *n)
{
    cnd *head1=head,*node;
    int k,v,i;
    node=(cnd *)malloc(sizeof(cnd));
    printf("Enter the data to be inserted: ");
    scanf("%d",&node->data);
    v=node->data;
    if(head==NULL)
    {
        printf("The Linked List is empty so the node is inserted at beginning\n");
        node->next=node;  // Make it circular
        (*n)++;
        printf("%d is inserted\n",v);
        return node;
    }
    printf("Enter the position to insert %d (Choose from 1 to %d): ",v,(*n)+1);
    scanf("%d",&k);
    if(k==1 || k==(*n)+1)
    {
        head1=head;
        while(head1->next!=head)
        {
            head1=head1->next;
        }
        node->next=head;
        head1->next=node;
        if(k==1)
            head=node;
    }
    else if(k<1 || k>(*n)+1)
    {
        printf("%d is out of bounds\n",k);
        free(node);  // Free the allocated memory if not used
        return head;
    }
    else
    {
        head1=head;
       for(i=1;i<k-1;i++)
        {
            head1=head1->next;
        }
        node->next=head1->next;
        head1->next=node;
    }
    printf("%d is inserted\n",v);
    (*n)++;
    return head;
}

cnd* insertval(cnd *head, int *n)
{
    int val,v;
    cnd *current = head;
    cnd *node = (cnd *)malloc(sizeof(cnd));
    if (node == NULL)
    {
        printf("Memory allocation failed\n");
        return head;
    }
    printf("Enter the data to be inserted: ");
    scanf("%d", &node->data);
    v=node->data;
    if(head==NULL)
    {
        printf("The Linked List is empty so the node is inserted in the beginning\n");
        node->next=node;  // Make it circular
        (*n)++;
        printf("%d is inserted\n",v);
        return node;
    }
    printf("Enter the value after which to insert: ");
    scanf("%d", &val);
    do {
        if (current->data == val) {
            node->next = current->next;
            current->next = node;
            (*n)++;
            printf("%d has been inserted\n", node->data);
            return head;
        }
        current = current->next;
    } while (current != head);
    printf("Value %d not found in the list.\n", val);
    free(node);  // Free the allocated memory if not used
    return head;
}
cnd* delbeg(cnd *head, int *n)
{
    if(head == NULL)
    {
        printf("Circular Linked List is empty\n");
        (*n)=0;
        return NULL;
    }
    int v = head->data;
    if(head->next == head)  // Only one node in the list
    {
        free(head);
        printf("%d is deleted\n", v);
        (*n)--;
        return NULL;
    }
    cnd *last = head;
    while(last->next != head)
    {
        last = last->next;
    }
    cnd *new_head = head->next;
    last->next = new_head;  // Update the last node to point to the new head
    free(head);
    printf("%d is deleted\n", v);
    (*n)--;
    return new_head;
}
cnd* delend(cnd *head, int *n)
{
    if(head == NULL)
    {
        printf("Circular Linked List is empty\n");
        (*n)=0;
        return NULL;
    }
    if(head->next == head)  // Only one node in the list
    {
        int v = head->data;
        free(head);
        printf("%d is deleted\n", v);
        (*n)--;
        return NULL;
    }
    int v;
    cnd *head1 = head;
    while(head1->next->next != head)
    {
        head1 = head1->next;
    }
    v = head1->next->data;
    cnd *temp = head1->next;
    head1->next = head;
    free(temp);
    printf("%d is deleted\n", v);
    (*n)--;
    return head;
}

cnd* delpos(cnd *head, int *n)
{
    if(head == NULL)
    {
        printf("The Linked List is Empty\n");
        (*n)=0;
        return NULL;
    }
    int k, v, i;
    cnd *head1, *temp;
    printf("Enter the position you want to delete (Choose from 1 to %d): ", (*n));
    scanf("%d", &k);
    if(k < 1 || k > (*n))
    {
        printf("%d is out of bounds\n", k);
        return head;
    }
    if(k == 1)
    {
        return delbeg(head, n);  // Reuse delbeg function
    }
    head1 = head;
    for(i = 1; i < k - 1; i++)
    {
        head1 = head1->next;
    }
    temp = head1->next;
    v = temp->data;
    head1->next = temp->next;
    if(temp == head)  // If deleting the last node which is also the head
    {
        head = head1->next;
    }
    free(temp);
    printf("%d is deleted\n", v);
    (*n)--;
    return head;
}

cnd* delvalue(cnd *head, int *n)
{
    if(head == NULL)
    {
        printf("The List is Empty\n");
        (*n)=0;
        return NULL;
    }
    int value;
    printf("Enter the value to delete: ");
    scanf("%d", &value);
    if(head->data == value)
    {
        return delbeg(head, n);  // Reuse delbeg function
    }
    cnd *temp = head;
    cnd *prev = NULL;
    do {
        if(temp->data == value)
        {
            prev->next = temp->next;
            if(temp->next == head)  // If deleting the last node
            {
                head = prev->next;
            }
            free(temp);
            printf("%d has been deleted\n", value);
            (*n)--;
            return head;
        }
        prev = temp;
        temp = temp->next;
    } while(temp != head);
    printf("Value not found\n");
    return head;
}
void menu(cnd *head, int *n)
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
                c = countNodes(head);
                printf("The number of nodes in this Linked List is %d\n", c);
                break;
            case 10:
            	printf("====================================\n");
            	printf("\tThe Linked List\t\n");
            	printf("====================================\n");
                ShowList(head);
                break;
            case 11:
                return;
            default:
                printf("Invalid Input! Try Again.\n");
                break;
        }
    }
}
int countNodes(cnd *head)
{
    if (head == NULL) return 0;  // Fix: Handle empty list
    cnd *head1=head;
    int count = 0;
    do
	{
        count++;
        head1 = head1->next;
    }while (head1!= head);
    return count;
}