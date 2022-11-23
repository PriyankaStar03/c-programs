#include<stdio.h>
void main()
{
    int a;
    printf("take a no\n");
    scanf("%d",&a);
    printf("this is a no %d, check the no is positive or negative\n",a);
    if(a>=0)
    printf("the no %d is positive\n",a);
    else
    printf("the no %d is negative\n",a);
}