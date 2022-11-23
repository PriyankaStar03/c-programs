#include<stdio.h>
int main()
{
    int subject;
    printf("the no assign for pass in maths=1,science=2,both=3");
    scanf("%d",subject);
    if(subject==1)
    {
        printf("you get a gift of 45\n");
    }
    else if(subject==2)
    {
        printf("you get a gift of 15\n");
    }
    else
    {
        printf("you got a gift of 15\n");
    }
}