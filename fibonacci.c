#include<stdio.h>
void main()
{
    int i,a=0,b=1,x;
    printf("enter the no till u want the fibonacci series\n");
    scanf("%d",&x);
    printf("the fibonacci series is :- o");
    for (i=0 ; i <=x-1; i++)
    {
        b=a+b;
        a=b-a;
        printf("  %d",a);
    }
     
}