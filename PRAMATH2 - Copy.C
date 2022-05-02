#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a=2,b=4,x,y;
	x=a*a+2*a*b+b*b;
	y=pow(a,2)+2*a*b+pow(b,2);
	printf("\n a^2+2*a*b+b^2=%d",x,y);
	getch();

}