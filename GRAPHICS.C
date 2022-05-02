#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void draw()
{
	int gm,gd,x1=100,y1=100,x2=200,y2=200;
	clrscr();
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	line(x1,y1,x2,y2);
	ellipse(100,240,10,180,21,90);
       //	line(210,260,210,300);
	//line(185,260,185,300);
	ellipse(197,260,0,180,13,25);
	arc(100,100,10,190,150);
	getch();
	closegraph();
}
void main()
{
	draw();
}
