#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int a,b,c,n;
    struct node *start;
    struct node *current;
    start=(struct node *)malloc(sizeof(struct node));
    current=(struct node *)malloc(sizeof(struct node));
    printf("enter the first value of the start node :-\n");
    scanf("%d",&a);
    start->data=a;
    start->next=current;
    scanf("%d",&b);
    current->data=b;
    current->next=NULL;
    count_the_node(start);
    display(start);
    insert_begin(start);
    insert_position(start);
    insert_end(start);
    delete_begin(start);
    delete_end(start);
    return 0;
}
void count_the_node(struct node *start)
{
    int i=0;
    struct node *p=NULL;
    p=(struct node *)malloc(sizeof(struct node));
    p=start;
    while(p!=NULL)
    {
        i++;
        p=p->next;
    }
    printf("The no of nodes in this linked list is:- %d",i);
}
void display(struct node *start)
{
    struct node *p=NULL;
    p=(struct node*)malloc(sizeof(struct node));
    if(start==NULL)
    {
        printf("\nyou have no linked list in your program");
        exit;
    }
    else
    {
        p=start;
        while(p!=NULL)
        {
            printf("\n%d",p->data);
            p=p->next;
        }
    }
}
void insert_begin(struct node *start)
{
    int item;
    struct node *p=NULL;
    p=(struct node *)malloc(sizeof(struct node));
    p=start;
    struct node *n=NULL;
    n=(struct node *)malloc(sizeof(struct node));
    if(n==NULL)
    {
        printf("\nYour device is out of space, please remove some data from your device to run this function");
        return;
    }
    else
    {
        printf("\nEnter the value for new node:-\n");
        scanf("%d",&item);
        if(start==NULL)
        {
            n->data=item;
            n->next=NULL;
            p=n;
        }
        else
        {
            n->data=item;
            n->next=start;
            p=n;
        }
        printf("\nThe new linked list is:-\n");
        display(n);
    }
}
void insert_position(struct node *start)
{
    int pos;
    int item;
    struct node *p=NULL;
    p=(struct node *)malloc(sizeof(struct node));
    struct node *n=NULL;
    p=start;
    n=(struct node *)malloc(sizeof(struct node));
    if(n==NULL)
    {
        printf("\nYour device is out of space, please remove some data from your device to run this function");
        return;
    }
    else
    {
        printf("\nEnter the position for the insertion:-\n");
        scanf("%d",&pos);
        printf("\nEnter the value for insertion at your given position for new node:-\n");
        scanf("%d",&item);
        n->data=item;
        n->next=NULL;
        if(pos==1)
        {
            n->data=item;
            n->next=start;
            p=n;
            display(n);
        }
        else
        {
            pos--;
            while(pos!=1)
            {
                p=p->next;
                pos--;
            }
            n->next=p->next;
            p->next=n;
            printf("The new linked list is:-\n");
            display(start);
        }    
    }
}
void insert_end(struct node *start)
{
    int item;
    struct node *p=NULL;
    p=(struct node *)malloc(sizeof(struct node));
    struct node *n=NULL;
    p=start;
    n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
        printf("Your device is out of space, please remove some data from your device to run this function");
        return;
    }
    else
    {
        printf("\nEnter the value for the data of new node at the end:-");
        scanf("%d",&item);
        n->data=item;
        n->next=NULL;
        if(start==NULL)
        {
            start=n;
        }
        else
        {
            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next=n;
        }
        display(start);
    }
}
void delete_begin(struct node *start)
{
    if (start == NULL)
    {
        printf("you have no linked list, first create a linked list to run this program");
    }
    else
    {
        struct node *p = NULL;
        p = (struct node *)malloc(sizeof(struct node));
        p = start;
        printf("\nThe deleted data of deleted node is:- %d", p->data);
        start = start->next;
        free(p);
        p = NULL;
        display(start);
    }
}
void delete_end(struct node *start)
{
    if (start == NULL)
    {
        printf("You have no linked list to perform this program, firstly you have to create a linked list");
    }
    else if (start->next == NULL)
    {
        free(start);
        start = NULL;
    }
    else
    {
        struct node *p = start;
        p = (struct node *)malloc(sizeof(struct node));
        struct node *n = start;
        n = (struct node *)malloc(sizeof(struct node));
        while (p->next == NULL)
        {
            n = p;
            p = p->next;
        }
        printf("\nThe deleted node is%d",p->data);
        n->next = NULL;
        free(p);
        p = NULL;
        printf("\nYour last node is deleted");
        display(start);
    }
}