#include <stdio.h>
void main()
{
    int i, j, sum = 0;
    printf("enter no\n");
    scanf("%d", &j);
    for (i = 1; i <= j; i++)
    {
        sum = sum + i;
    }
    printf("the sum is %d", sum);
}