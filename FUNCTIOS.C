#include<stdio.h>
#include<conio.h>

extern int x=5;

void main()
{
	clrscr();
	printf("%d\n",x);
	x++;
	getch();
}
