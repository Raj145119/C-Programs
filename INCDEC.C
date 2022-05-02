#include<stdio.h>
#include<conio.h>
void main()
{
	int y,x=10;
	clrscr();
	y=x++ + x++;
	printf("%d",y);
	printf("\n %d",x);
	x=10;
	y=++x+x++;
	printf("\n%d",y);
	x=10;
	y=++x + ++x;
	printf("%d",y);
	getch();

}