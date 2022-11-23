#include<stdio.h>
void main()
{
    int i;
    for (i = 1; i < 20; i++)
    {
        if (i%5==0)
        {
            continue;
        }
        else
        printf("%d\n",i);
    }
    
}