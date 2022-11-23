#include<stdio.h>
void main()
{
    int a=1, n, sum=0;
    printf("take any no\n");
    scanf("%d",&n);
    while (a<=n)
    {
        sum += a;
        a++;
    }
    printf("the sum of no is %d",sum);
}