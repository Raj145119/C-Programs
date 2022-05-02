#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int x=3,y=2,i=2,m=0;
	clrscr();
	d:
	gotoxy(x,y);
	if(i%2==0)
	textcolor(BLACK);
	else
	{
	textcolor(i);
	y=y+34;
	m++;
	if(m>=2)
	{y=2,x=x+20;}
	}
	cprintf("WELCOME");
	cprintf("praveen");
	textcolor(i+1);
	cprintf("UNMESH");
	delay(200);
	i++;
	if(kbhit()==0)
	goto d;
	getch();
	}

