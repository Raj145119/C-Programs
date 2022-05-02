#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void drow()
{
	int gm,gd,x1=200,y1=100,x2=100,y2=300,x4=150,y4=200,x5=250,x3=300;
	clrscr();
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	line(x1,y1,x2,y2);
	line(x1,y1,x3,y2);
	line(x2,y2,x3,y2);
	line(x4,y4,x5,y4);
	line(x4,y4,x1,y2);
	line(x5,y4,x1,y2);
	getch();
	closegraph();
}
void main()
{
	drow();
}
