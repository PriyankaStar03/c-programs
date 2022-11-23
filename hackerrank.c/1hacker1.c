#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[] = "Hello, World.";
    char k[50];
    scanf("%[^\n]%*c", &k);
    printf("%s", s);
    printf("\n%s", k);
    return 0;
}