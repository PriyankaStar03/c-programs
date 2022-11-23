#include<stdio.h>
void main()
{
    int a,b,c;
    b=0;
    printf("\nenter the no whose tble u want");
    scanf("%d",&a);
    c=a*b;
    while(b++<10)
    {
    printf("%d*%d=%d\n",a,b,a*b);
    }
}