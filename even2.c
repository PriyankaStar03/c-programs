#include<stdio.h>
void main()
{
    int a,i;
    printf("enter the no\n");
    scanf("%d",&a);
    for ( i = 0; i < a; i++)
    {
        if (i%2==0)
        {
            printf("\n%d",i);
        }
        
    }
    
}