#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the no whose addition, subtraction, multiplication or division you want\n");
    {
        switch (a,b)
         {
         case '1':
            scanf("%d %d", &a,&b);
             printf("\n the addition of no is %d",a+b);

         case '2':
            scanf("%d %d", &a,&b);
            printf("\n the subtraction is %d", a-b);

         case '3':
            scanf("%d %d", &a,&b);
            printf("\n the multiplication is %d", a*b);
 
         case '4':
            scanf("%d %d", &a,&b);
            printf("\n the division is %d", a/b);

          default:
          printf("\nthis is the result which you want %d",a+b||a-b||a*b||a/b);
          printf("\nthank you");
              break;
         }
    }       
}