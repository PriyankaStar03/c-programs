#include <stdio.h>

void update(int *a, int *b)
{
    int c, d;
    d = *a + *b;
    c = abs(*a - *b);
    *b = c;
    *a = d;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}