#include <stdio.h>
void main()
{
    int matrix[4][3];
    int a, b;
    printf("enter no for making a matrix\n");
    for (a = 0; a <= 3; a++)
    {
        for (b = 0; b <= 2; b++)
        {
            scanf("%d\t", &matrix[a][b]);
        }
    }
    for (a = 0; a <= 3; a++)
    {
        for (b = 0; b <= 2; b++)
        {
            printf("%d\t", matrix[a][b]);
        }
        printf("\n");
    }
}