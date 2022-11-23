#include<stdio.h>
int func1(int x,int y,int z)
{
    y=y+4;
    z=x+y+z;
    return y;
}
void main()
{
    int x=10;
    int y=3;
    printf("%d",func1(y,x,x));
    printf("%d\n",x);
    printf("%d",y);
}