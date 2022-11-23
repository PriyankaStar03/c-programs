#include<stdio.h>
void main()
{
    int a;
    printf("enter a year\n");
    scanf("%d",&a);
    if (a%4==0)
    {
        printf("\nthe year is a leap year");
    }
    else
    printf("\nthe year is not a leap year");
    
}