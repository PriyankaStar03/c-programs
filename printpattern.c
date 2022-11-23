#include <stdio.h>
void main()
{
    char ch = 'A';
    int i, row, j;
    printf("enter the no of rows");
    scanf("%d",&row);
    for (i = 0; i <= row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}