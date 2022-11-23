#include <stdio.h>

int main(void)
{
    // your code goes here
    int test;
    int chair, students, chair_required;
    scanf("%d", &test);
    while (test--)
    {
        scanf("%d %d", &students, &chair);
        if (chair >= students)
            printf("%d\n", 0);
        else
        {
            chair_required = students - chair;
            printf("%d\n", chair_required);
        }
    }
    return 0;
}
