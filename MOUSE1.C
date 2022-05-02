#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
union REGS in,out;
void main()
{
	clrscr();
	in.x.ax=0;
	int86(51,&in,&out);
	if(out.x.ax==0)
	printf("not avilable");
	else
	printf("avilable");
	getch();
}