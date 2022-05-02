#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
      clrscr();
      float area=0.0,rad;
      printf("Enter the Radious=");
      scanf("%f",&rad);
      area=3.14*(rad*rad);
      printf("Area of Circle=%f",area);
      getch();
}