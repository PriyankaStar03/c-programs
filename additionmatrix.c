#include <stdio.h>
void main()
{
    int i, j;
    int u[3][3];
    int v[3][3];
    int n[3][3];
    printf("these are two matrix and we add these two matrix\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &u[i][j]);
        }
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &v[i][j]);
        }
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t", u[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t", v[i][j]);
        }
        printf("\n");
    }
    printf("the sum of these two mmatrix is :-\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            n[i][j] = u[i][j] + v[i][j];
            printf("%d\t", n[i][j]);
        }
        printf("\n");
    }
}