#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void draw()
{
	int gm,gd;
	int x1=100,x2=200,y1=100,y2=200;
	int x3=140,y3=70,x4=240,y5=170;
	clrscr();
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	line(x1,y1,x2,y1);
	line(x1,y1,x1,y2);
	line(x1,y2,x2,y2);
	line(x2,y1,x2,y2);
	line(x1,y1,x3,y3);
	line(x3,y3,x4,y3);
	line(x2,y1,x4,y3);
	line(x4,y3,x4,y5);
	line(x2,y2,x4,y5);
	getch();
	closegraph();
}
void main()
{
	draw();
}
