#include<stdio.h>
void main()
{
    int i,n,factorial=1;
    printf("enter the number whose factorial you want:-\n");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        factorial *=i;
    }
    printf("the factorial of this no is %d",factorial);
}