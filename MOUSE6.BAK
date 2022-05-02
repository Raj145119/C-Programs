#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
union REGS in,out;
void show()
{
	in.x.ax=1;
	int86(0x33,&in,&out);
}
void restrict()
{
	in.x.ax=7;
	in.x.cx=100;
	in.x.dx=200;
	int86(0x33,&in,&out);
}
void main()
{
	int gm,gd,x,y,x1,y1;
	gm=gd=DETECT;
	clrscr();
	initgraph(&gm,&gd," ");
	show();
	restrict();
	getch();
	closegraph();

}