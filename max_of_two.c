#include<stdio.h>
void main()
{
    int a,b;
    printf("find the large no between these two no");
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        printf("%d is gretter than %d",b,a);
    }
    else
    {
        printf("%d is less than %d",a,b);
    }
}