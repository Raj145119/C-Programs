#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=0;i<12;i++)
	{
	textattr(i+((i+1)<<6)+BLINK);
	cprintf("ADITYA+PRAVEEN\n\r");
	}
	getch();

}
