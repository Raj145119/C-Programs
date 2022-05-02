#include<stdio.h>
#include<conio.h>
void main()
{
	int x=12,y=10;
	clrscr();
	gotoxy(x,y);
	printf("o");
	x=30;

	gotoxy(x,y);
	printf("a");
	y=30;
	x=12;
	gotoxy(x,y);
	printf("b");
	x=300;
	y=100;
	gotoxy(x,y);
	printf("c");
	getch();
}
