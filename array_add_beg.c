#include<stdio.h>
int main()
{
    int arr[10];
    int i, j=9;
    printf("Enter the value of array:-\n");
    for(i=0; i<=5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<=5; i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=5; i>=0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=j;
    printf("\n");
    for(i=0; i<=6; i++)
    {
        printf("%d\t",arr[i]);
    }
}