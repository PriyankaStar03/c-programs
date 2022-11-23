#include<stdio.h>
void fun(int x)
{
    if(x>0)
    {
        fun(x-1);
        printf("%d",x);
        fun(x-1);
        printf("%d",x);
    }
}
int main()
{
    fun(3);
}