#include<stdio.h>
void main()
{
    int a,b,c,d,e,f;
    printf("enter a digit\n");
    scanf("%d%d%d%d%d\n",&a,&b,&c,&d,&e);
    printf("the no is :-%d%d%d%d%d",a,b,c,d,e);
    f=a+b+c+d+e;
    printf("the sum of its digits is = %d",f);
}