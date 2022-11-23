#include <stdio.h>
void main()
{
    int a, b, c, d;
    for (b = 0; b <= 5; b++)
    {
        printf("\n");

        for (a = 65; a <= 71 - b-1; a++)
        {
            printf("%c ", a);
        }
        for ( c = 0; c <= 11-b; c++)
        {
            printf(" ");
        }
        
        for (a = 70 - b; a >= 65; a--)
        {
            printf("%c ", a);
        }
        printf("\n");
    }
}