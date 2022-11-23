#include<stdio.h>
void main()
{
    int i=0,a;
    printf("enter the no till u find even no\n");
    scanf("%d",&a);
    while(i<=a)
    {
        printf("%d\n",i);
        i=i+2;
    }
}