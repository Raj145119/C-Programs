#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void draw()
{
	int gm,gd,x1=100,y1=100,x2=200,y2=200;
	int x3=100,y3=200,x4=200,y4=100;
	clrscr();
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	line(x1,y1,x2,y2);
	line(x3,y3,x4,y4);
	getch();
	closegraph();
}
void main()
{
	draw();
}
