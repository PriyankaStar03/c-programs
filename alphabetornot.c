#include <stdio.h>
void main()
{
    char c;
    printf("take any character to check that the character is a alphabet or not\n");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
    {
        printf("this is a urrer case alphabet\n");
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("this is a lower case alphabet\n");
    }
    else
        printf("this is not a alphabet");
}