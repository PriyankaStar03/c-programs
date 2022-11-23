#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("\nenter a number :- ");
    scanf("%d",&a);
    printf("\nthis is the reverse of this number");
    b=a%10;
    printf("\nthis is the first reverse no of the main no = %d",b);
    a=a/10;
    c=a%10;
    printf("\n this is the second reverse no = %d",c);
    a=a/10;
    d=a%10;
    printf("\nthis is this the third reverse no = %d",d);
    a=a/10;
    e=a%10;
    printf("\nthis is the last reverse no of main no = %d",e);
    printf("\nthis is a full combine form of reverse of the no= %d%d%d%d",b,c,d,e);
}