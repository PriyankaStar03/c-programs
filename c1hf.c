#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter any two no for swap\n");
    scanf("%d %d",&a,&b);
    printf("a= %d and b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nafter swaping the value of a is %d and b is %d",a,b);
}