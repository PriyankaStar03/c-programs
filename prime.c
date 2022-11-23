#include <stdio.h>
void main()
{
    int i, n;
    printf("enter any no\n");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            {
                printf("the no %d is prime no\n ", n);
            }
        }
        else
        {
            printf("the no is a composite no\n");
        }
    }
}