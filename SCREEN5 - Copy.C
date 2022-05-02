#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int i=0,x=2,y=2;
	clrscr();
	p:
	gotoxy(x,y);

	if(i%2==0)
	textcolor(BLACK);
	else
	textcolor(i);
	i++;
	cprintf("PRAVEEN");

	delay(300);
	if(kbhit()==0)
	goto p;
	getch();
}