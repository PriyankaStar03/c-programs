#include <stdio.h>
#include <math.h>
void main()
{
    float x1, x2, x3, y1, y2, y3, a, b, c, d, e, f;
    printf("enter the coordinate of the plane\n");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("\n the coordinates are (%f,%f),(%f,%f),(%f,%f)", x1, y1, x2, y2, x3, y3);
    a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    b = sqrt(a);
    c = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
    d = sqrt(c);
    e = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
    f = sqrt(e);
    if (b + d == f)
    {
        printf("the points are linear");
    }
    else if (b + f == d)
    {
        printf("the points are linear");
    }
    else if (d + f == b)
    {
        printf("the points are linear");
    }
    else
    {
        printf("these points are not linear");
    }
}