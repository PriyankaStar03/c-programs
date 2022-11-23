#include<stdio.h>
void main()
{
    int a=0;
    while (a<20)
    {
        ++a;
        if(a%5==0)
        continue;
        else
        printf("%d\n",a);
    }
    
}
