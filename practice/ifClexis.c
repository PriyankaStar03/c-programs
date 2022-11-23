#include <stdio.h>
void main()
{
    int x1, y1;
    printf("enter the coordinate to check that it lies on the x-axis, y-axis or at origin\n");
    scanf("%d%d", &x1, &y1);
    if ((x1 == 0) && (y1 == 0))
    {
        printf("the coordinates are at origin");
    }
    else
    {
        if (x1 == 0)
        {
            printf("the coordinates are on y-axis");
        }
        else if (y1 == 0)
        {
            printf("the coordinates are on x-axis");
        }
        else
        {
            printf("the coordinates is on plane");
        }
    }
}