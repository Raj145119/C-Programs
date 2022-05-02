#include<stdio.h>
#include<conio.h>
void main()
{
	int x=1,y=1,i;
	clrscr();
	textcolor(BLUE);
	p:
	gotoxy(x,y);
	cprintf("*");
	y++;
	if(y<=25)
	{
		goto p;
	}
	r:
	cprintf("* ");
	gotoxy(x,y);
	x++;
	if(x<=40)
	{
		goto r;
	}
	s:
	x=79;
	gotoxy(x,y);
	cprintf("* ");
	y--;
	if(y>=1)
	{
		goto s;
	}
	t:
	gotoxy(x,y);
	cprintf("* ");
	x--;
	if(x>=40)
	{
		goto t;
	}
	gotoxy(35,12);
	textcolor(RED);
	cprintf("WEL COME");
	gotoxy(36,14);

	printf("PRAVEEN");
	getch();
}