#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int a,b,c,item;
    struct node *start;
    struct node *current;
    start=(struct node *)malloc(sizeof(struct node));
    current=(struct node *)malloc(sizeof(struct node));
    printf("enter the value of the start node :-\n");
    scanf("%d",&a);
    start->data=a;
    start->next=current;
    scanf("%d",&b);
    current->data=b;
    current->next=NULL;
    printf(" \nEnter the no according to your purpose.\nFor counting the no of nodes in a list 1, for display 2, for insertion at begenning 3, for insertion at given position 4, for insertion at the end 5, for deletion at begging 6, for deletion at the a given position 7, for deletion at at the end 8 and press 9 for exit from the program \nThe no is:- ");
    int choice;
    while(1)
    {
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            count_the_node(start);
            break;
            case 2:
            display(start);
            break;
            case 3:
            insert_begin(start);
            break;
            case 4:
            insert_position(start);
            break;
            case 5:
            insert_end(start);
            break;
            case 6:
            delete_begin(start);
            break;
            case 7:
            delete_position(start);
            break;
            case 8:
            delete_end(start);
            break;
            case 9:
            exit(0);
            break;

            default:
            printf(" you choice is other than our limit");
            break;
        }
    }
    return 0;
}
void count_the_node(struct node *start)
{
    int i=0;
    struct node *p=NULL;
    p=(struct node*)malloc(sizeof(struct node));
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
        printf("you have no linked list in your program");
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
    struct node *n=NULL;
    p=start;
    n=(struct node *)malloc(sizeof(struct node));
    if(n==NULL)
    {
        printf("Your device is out of space, please remove some data from your device to run this function");
        return;
    }
    else
    {
        printf("Enter the value for new node:-");
        scanf("%d",&item);
        {
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
        }
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
        printf("Your device is out of space, please remove some data from your device to run this function");
        return;
    }
    else
    {
        printf("Enter the value for new node and the position for the insertion:-");
        scanf("%d,%d",&item,&pos);
        n->data=item;
        n->next=NULL;
        pos--;
        while(pos!=1)
        {
            p=p->next;
            pos--;
        }
        n->next=p->next;
        p->next=n;
        printf("your program is complete");
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
        printf("Enter the value for the data of new node at the end:-");
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
    }
}
void delete_begin(struct node *start)
{
    if(start==NULL)
    {
        printf("you have no linked list, first create a linked list to run this program");
    }
    else
    {
        struct node *p=NULL;
        p=start;
        p=(struct node *)malloc(sizeof(struct node));
        start=start->next;
        printf("The deleted data of deleted node is:- %d",p->data);
        free(p);
        p=NULL;
    }
}
void delete_position(struct node *start)
{
    if(start==NULL)
    {
        printf("You have no linked list to perform this program, firstly you have to create a linked list");
    }
    else
    {
        int pos;
        struct node *p=NULL;
        p=(struct node *)malloc(sizeof(struct node));
        p=start;
        printf("Enter the position at which you want to delete the node:-");
        scanf("%d",&pos);
        while(pos!=1)
        {
            p=p->next;
            pos--;
        }
    }
}
void delete_end(struct node *start)
{
    if(start==NULL)
    {
        printf("You have no linked list to perform this program, firstly you have to create a linked list");
    }
    else if(start->next==NULL)
    {
        free(start);
        start=NULL;
    }
    else
    {
        struct node *p=start;
        p=(struct node *)malloc(sizeof(struct node));
        struct node *n=start;
        n=(struct node *)malloc(sizeof(struct node));
        while(p->next==NULL)
        {
            n=p;
            p=p->next;
        }
        n->next=NULL;
        free(p);
        p=NULL;
    }
}