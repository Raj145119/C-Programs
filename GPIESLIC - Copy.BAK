#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void draw()
{
	int gm,gd;
	int x=200,y=200;
	clrscr();
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	setcolor(GREEN);
       pieslice(x,y,60,120,100);
	line(x-50,115,x+50,115);
	ellipse(x,115,0,180,40,10);
	ellipse(x,130,180,0,40,10);
	ellipse(x,150,180,0,30,10);
       /*	ellipse(x,y,180,0,65,70);
	setcolor(WHITE);
	ellipse(x,195,0,360,65,20);
	ellipse(x,195,0,360,55,12);
	setcolor(BLUE);
	ellipse(x,195,0,360,40,5);
	setcolor(RED);
	ellipse(x+70,180,0,360,5,20);
	setcolor(RED);
	line(x+50,160 ,x+60,175);
	line(x+60,150,x+65,160);
	line(x+85,160,x+80,175);
	line(x+90,170,x+80,190);
	line(x+80,150,x+78,165); */
	getch();
	closegraph();
}
void main()
{
	draw();
}
