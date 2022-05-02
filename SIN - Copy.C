#include <stdio.h>
#include <math.h>
#include<conio.h>

int main()
{
   double result, x ;
   clrscr();
   scanf("%lf",&x);
   result = sin(3.14/180*x);
   printf("The sin() of %lf is %lf\n", x, result);
   return 0;
}
