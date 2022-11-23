#include <stdio.h>
void main()
{
    int i, j, k, l;
    printf("enter the no for check prime or not");
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                printf("%d\n", i);
            }
        }
    }
}