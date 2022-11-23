#include <stdio.h>
void main()
{
    int quantity, amount, dis = 10;
    float tot;
    printf("enter the amount and quantity of items");
    scanf("%d %d", &amount, &quantity);
    if (amount > 1000)
    {
        dis = 10;
        tot = quantity * amount - ((quantity * amount * 10) / 100);
        printf("the total cost is %5f", tot);
    }
    else
    {
        tot = quantity * amount;
        printf("the total cost is %f", tot);
    }
}