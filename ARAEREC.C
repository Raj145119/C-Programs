#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

      float area=0.0,wid,hig;
      clrscr();
      printf("Enter the Height=");
      scanf("%f",&hig);
      printf("Enter the Width=");
      scanf("%f",&wid);
      area=hig*wid;
      printf("Area of Circle=%f",area);
      getch();
}