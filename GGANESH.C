#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void draw()
{
	int gd,gm,x=200,y=100,i;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	setcolor(RED);
	//outtextxy(x,y,"P");
	circle(x,y,50);
	circle(x,230,80);

	ellipse(180,90,0,180,10,5);
	ellipse(180,90,180,0,10,5);

	ellipse(220,90,0,180,10,5);
	ellipse(220,90,180,0,10,5);

	ellipse(260,90,0,160,15,23);
	ellipse(260,100,220,25,15,23);

	ellipse(140,90,13,180,15,25);
	ellipse(140,100,155,335,16,25);

	ellipse(130,280,0,360,50,20);
	ellipse(280,280,0,360,50,20);
	ellipse(100,100,290,0,90,50);
	ellipse(110,110,285,10,100,50);
	line(130,146,145,150);
	line(145,150,135,160);
	setcolor(7);
	ellipse(240,105,170,290,30,15);
	ellipse(230,115,200,330,30,10);
	getch();
	closegraph();
}
void main()
{
	clrscr();
	draw();
}


