#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int i=2,x=2,y=2,m=0;
	clrscr();
	p:
	gotoxy(x,y);
	if(i%2==0)
	textcolor(BLACK);
	else
	{
	  textcolor(BLUE);
	  y=y+20;
	  m++;
	  //if(m>=5)(y=2,x=x+30);

	}

	cprintf("PRAVEEN");
	delay(300);

	i++;
	if(i<=11)
	if(kbhit()==0)
	goto p;
	getch();


}