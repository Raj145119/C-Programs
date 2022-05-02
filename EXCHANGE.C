#include<stdio.h>
#include<conio.h>
void main()

{	int x,y,z;
	x=5;
	y=7;
	clrscr();
	printf("x=%d&y=%d",x,y);
	z=x;
	x=y;
	y=z;
	printf("\nx=%d&\ny=%d",x,y);
	getch();
}