#include <stdio.h>

int main()
{
    int a, b, add1, sub1;
    float c, d, add2, sub2;
    scanf("%d %d", &a, &b);
    scanf("\n%f %f", &c, &d);
    add1 = a + b;
    sub1 = a - b;
    add2 = c + d;
    sub2 = c - d;
    printf("%d %d", add1, sub1);
    printf("\n%2.1f %2.1f", add2, sub2);
    return 0;
}