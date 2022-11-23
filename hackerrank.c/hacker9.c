#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int sum = 0, m;
    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    printf("%d", sum);

    return 0;
}