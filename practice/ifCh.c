#include<stdio.h>
void main()
{
    int a,b;
    printf("enter any positive or negative no\n");
    scanf("%d",&a);
    if (a<0)
    {
        b=a;
        a=0-b;
        printf("the absolute value is %d",a);
    }
    else
    {
        printf("this is already a postive no");
    }
    
    
}