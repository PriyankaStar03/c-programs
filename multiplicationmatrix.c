#include <stdio.h>
void main()
{
    int i, j, k;
    int u[3][3];
    int v[3][3];
    int n[3][3];
    int l[3][3];
    printf("these are two matrix and we add these two matrices:-\n");
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
    printf("this is the multiplication of these two matrices:-\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            l[i][j] = 0;
            for (k = 0; k <= 2; k++)
            {
                l[i][j] += u[i][k] * v[k][j];
            }
            printf("%d\t", l[i][j]);
        }
        printf("\n");
    }
}