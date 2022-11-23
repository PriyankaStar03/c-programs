#include<stdio.h>
void main()
{
    int a=233;
    float b=34.3;
    void *asd;
    asd = &b;
    printf("the value of a is %3.1f", (*(float*)asd));
}