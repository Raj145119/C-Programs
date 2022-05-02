#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void draw()
{
	int gm,gd;
	int x1=100,x2=200,y1=100,y2=200;
	int x3=150,y3=50,x4=250,y4=150;
	clrscr();
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	line(x1,y1,x2,y1);
	line(x1,y1,x1,y2);
	line(x1,y2,x2,y2);
	line(x2,y1,x2,y2);
	line(x3,y3,x3,y4);
	line(x3,y4,x4,y4);
	line(x3,y3,x4,y3);
	line(x4,y3,x4,y4);
	line(x3,y3,x1,y1);
	line(x2,y1,x4,y3);
	line(x4,y4,x2,y2);
	line(x1,y2,x3,y4);
	//rectangle(5,100,90,40);
	circle(175,127,110);
	getch();
	closegraph();
}
void main()
{
	draw();
}
