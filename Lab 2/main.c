#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double x;
    double y;

    printf("Enter x:");
    scanf("%lf", &x);
    if (0.5<=x && x<1.5)
    {
        y=2/x-1;
    }
    else if ( 1.5 <= x && x < 5.125 )
    {
        y=x-2;
    }
    else if ( 5.125 <= x && x < 9.5 )
    {
        y=sqrt(x+1)/sqrt(x*x-10)- pow(x, 3);
    }
    else
    {
        y=1;
    }
 system("cls");
    printf("x = %lf", x);
    printf(" \ny = %lf", y);
 return 0;
}
