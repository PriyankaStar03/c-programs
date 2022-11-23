#include <stdio.h>
void main()
{
    int i, a, n, j;
    printf("enter the no till u want prime no\n");
    scanf(" %d", &a);
    for (i = 2; i <= a; i++)
    {
        for (n = 2; n <= i; n++)
        {
            if (i % n == 0)
            {
                printf("\n%d", i);
            }
            continue;
        }
    }
}