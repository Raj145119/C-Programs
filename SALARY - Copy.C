#include<stdio.h>
#include<conio.h>
void main()
{
	float x,s;
	clrscr();
	printf("enter the salary");
	scanf("%f",&x);
	if(x<500000)
	      { s=x+(x*10/100);
	       printf("%f",s);
	      }
	else
       {
	s=x+(x*20/100);
	printf("%f",s);
	getch();
       }
 }