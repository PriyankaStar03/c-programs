#include <stdio.h>

int main()
{
    // your code goes here
    int petty, bun;
    int test;
    scanf("%d", &test);
    while (test--)
    {
        scanf("%d %d", &petty, &bun);
        if (petty <= bun)
            printf("%d\n", petty);
        else
            printf("%d\n", bun);
    }
    return 0;
}