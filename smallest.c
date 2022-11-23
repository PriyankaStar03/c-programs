#include<stdio.h>
void main()
{
    int num[12],rem, i,no;
    printf("Enter a number of nine digit: ");
    scanf("%d",&no);
    for(i=0; i<9; i++)
    {
        num[i]=no%10;
        no=no/10;
    }
    rem=num[0];
    for(i=0; i<9; i++)
    {
        if(rem>num[i])
        {
            rem=num[i];
        }
    }
    printf("the smallest digit is %d",rem);
}