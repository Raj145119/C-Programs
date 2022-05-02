#include<stdio.h>
#include<conio.h>
void main()
{
	int I=0,x=2,y=2;
	clrscr();
	p:
	I++;
	if(I%2==0)
	{
	textcolor(BLACK);
	gotoxy(x,y);
	cprintf("PRAVEEN");
	}
	else
	{
	textcolor(I);

	cprintf("praveen");
	}
	y=y+4;
	if(y<10)
	if(I>5)
	x=x+8;
	if(x<10)
	goto p;
	getch();
}