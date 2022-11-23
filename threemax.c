#include<stdio.h>
void main()
{
    int a,b,c;
    printf("these are three no\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("find the largest no among three\n");
    if(a>b && a>c)
    printf("the largest no is %d\n",a);
    else if(b>a && b>c)
    printf("the largest no is %d",b);
    else
    printf("the largest no is %d",c);
}     