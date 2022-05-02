#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void draw()
{
	int gm,gd;
	int x1=100,x2=200,y1=100,y2=200;
	int x=150;
	clrscr();
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	line(x1,y1,x2,y1);
	line(x1,y1,x1,y2);
	line(x1,y2,x2,y2);
	line(x2,y1,x2,y2);
	line(x,y1,x1,y2);
	line(x,y1,x2,y2);
	getch();
	closegraph();
}
void main()
{
	draw();
}
