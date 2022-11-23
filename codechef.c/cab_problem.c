#include <stdio.h>

int main(void)
{
    // your code goes here
    int testcase;
    scanf("%d", &testcase);
    int a, b;
    while (testcase--)
    {
        scanf("%d %d", &a, &b);
        if (a < b)
            printf("FIRST\n");
        else if (a > b)
            printf("SECOND\n");
        else
            printf("ANY\n");
    }
    return 0;
}
