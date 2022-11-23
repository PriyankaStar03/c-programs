#include <stdio.h>
void main()
{
    int i, j;
    int name[6];
    printf(" the marks of the students are :- \n");

    for (i = 0; i <= 5; i++)
    {
        scanf("%d", &name[i]);
    }
    printf("the marks are:-");
    for (i = 0; i <= 5; i++)
    {
        printf("\n %d", name[i]);
    }
}