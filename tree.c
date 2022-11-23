#include<stdio.h>
#include<stdlib.h>
struct BTnode
{
    int data;
    struct BTnode *left_child;
    struct BTnode *right_child;
};
void main()
{   
    int a,b,c;
    struct BTnode *root = NULL;
    struct BTnode *t = NULL;
    struct BTnode *p = NULL;
    root=(struct BTnode *)malloc(sizeof(struct BTnode));
    t=(struct BTnode *)malloc(sizeof(struct BTnode));
    p=(struct BTnode *)malloc(sizeof(struct BTnode));
    printf("Enter the data of root node:-\n");
    scanf("%d %d %d",&a,&b,&c);
    root->data=a;
    root->left_child=t;
    root->right_child=p;
    t->data=b;
    t->left_child=NULL;
    t->right_child=NULL;
    p->data=c;
    p->left_child=NULL;
    p->right_child=NULL;
}