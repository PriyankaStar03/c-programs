#include<stdio.h>
int dec_bin(int n)
{
    if(n==0)
    return 0;
    else
    return ((n%2)+10*dec_bin(n/2));
}
void main()
{
    int no;
    printf("Enter a decimal number\n");
    scanf("%d",&no);
    printf(" Decimal (%d)= Binary(%d)",no,dec_bin(no));
}