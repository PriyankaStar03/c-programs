#include<stdio.h>
void main()
{
    int no, r,i ,sum=0, t;
    printf("Enter the input: ");
    scanf("%d",&no);
    for(t=no; no!=0; no=no/10)
    {
        r=no%10;
        sum=sum*10+r;
    }
    if(t==sum)
    printf("%d is a palinedrome no",t);
}