#include <stdio.h>
void main()
{
    float e;
    int f;
    short a;
    long b;
    long long c;
    long double d;
    printf("size of short= %d bytes\n", sizeof(a));
    printf("size of long=%d bytes\n", sizeof(b));
    printf("size of long long=%d bytes\n", sizeof(c));
    printf("size of double long=%d bytes\n", sizeof(d));
    printf("size of int=%d bytes\n", sizeof(f));
    printf("size of float=%d bytes\n", sizeof(e));
}