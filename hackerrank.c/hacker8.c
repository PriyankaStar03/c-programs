#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char one[10] = "one";
    char two[10] = "two";
    char three[10] = "three";
    char four[10] = "four";
    char five[10] = "five";
    char six[10] = "six";
    char seven[10] = "seven";
    char eight[10] = "eight";
    char nine[10] = "nine";
    char even[10] = "even";
    char odd[10] = "odd";

    for (int n = a; n <= b; n++)
    {
        if (n == 1)
        {
            printf("%s\n", one);
        }
        else if (n == 2)
        {
            printf("%s\n", two);
        }
        else if (n == 3)
        {
            printf("%s\n", three);
        }
        else if (n == 4)
        {
            printf("%s\n", four);
        }
        else if (n == 5)
        {
            printf("%s\n", five);
        }
        else if (n == 6)
        {
            printf("%s\n", six);
        }
        else if (n == 7)
        {
            printf("%s\n", seven);
        }
        else if (n == 8)
        {
            printf("%s\n", eight);
        }
        else if (n == 9)
        {
            printf("%s\n", nine);
        }
        if (n > 9 && n % 2 == 0)
        {
            printf("%s\n", even);
        }
        else if (n > 9 && n % 2 != 0)
        {
            printf("%s\n", odd);
        }
    }
    return 0;
}