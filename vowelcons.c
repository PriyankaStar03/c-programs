#include<stdio.h>
void main()
{
    char a, vowel;
    printf("check the character is vowel or constant\n");
    scanf("%c",&a);
    vowel=('A'||'E'||'I'||'o'||'U'||'a'||'e'||'i'||'o'||'u');
    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("\nthis character is a vowel");
    }
    else
    {
        printf("\nthis character is a constant");
    }
}