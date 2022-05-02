#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void draw()
{
	int gm,gd;
	int x=200;
	clrscr();
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	setcolor(14);
	outtextxy(30,80,"TAJ");
	outtextxy(340,80,"MAHAL");
	outtextxy(350,330,"By:-Praveen");
	setcolor(GREEN);
	setcolor(WHITE);
	ellipse(x,150,0,180,60,85);
	ellipse(x,75,10,170,20,45);
	ellipse(100,145,358,180,30,45);
	ellipse(300,145,0,185,30,45);
	setcolor(7);
	//line(100,147,300,147);
	ellipse(x,147,180,0,100,5);
	ellipse(x,152,180,0,100,5);
	setcolor(GREEN);
	line(100,147,100,300);
	line(300,147,300,300);
	line(100,300,300,300);
	line(140,147,140,300);
	line(260,147,260,300);
	setcolor(BLUE);
	line(110,190,110,220);
	line(130,190,130,220);
	line(110,220,130,220);
	ellipse(120,190,0,180,10,15);

	line(270,190,270,220);
	line(290,190,290,220);
	line(270,220,290,220);
	ellipse(280,190,0,180,10,15);

	line(90,170,90,195);
	line(70,170,70,195);
	line(90,195,70,195);
	line(90,250,90,280);
	line(70,250,70,280);
	line(70,280,90,280);
	ellipse(80,170,0,180,10,15);
	ellipse(80,250,0,180,10,15);

	line(310,170,310,195);
	line(330,170,330,195);
	line(310,195,330,195);
	line(310,250,310,275);
	line(330,250,330,275);
	line(310,275,330,275);
	ellipse(320,170,0,180,10,15);
	ellipse(320,250,0,180,10,15);

	setcolor(RED);

	line(30,147,30,300);
	line(5,147,5,300);
	setcolor(7);
	ellipse(16,190,180,0,12,3);
	ellipse(16,195,180,0,12,3);
	ellipse(16,240,180,0,12,3);
	ellipse(16,245,180,0,12,3);
	setcolor(WHITE);
	ellipse(16,147,0,180,12,35);
	line(30,147,5,147);
	setcolor(RED);
	line(5,300,30,300);

	line(160,220,160,300);
	line(235,220,235,300);
	ellipse(175,220,90,180,16,30);
	ellipse(220,220,0,90,16,30);
	ellipse(170,160,280,340,30,30);
	ellipse(215,160,195,280,18,30);
	setcolor(WHITE);
	line(175,240,175,300);
	line(220,240,220,300);
	ellipse(197,240,0,180,21,30);
	line(210,260,210,300);
	line(185,260,185,300);
	ellipse(197,260,0,180,13,25);
	setcolor(RED);

	line(370,150,370,300);
	line(400,150,400,300);

	line(370,300,400,300);
	setcolor(7);
	ellipse(385,190,180,0,16,3);
	ellipse(385,195,180,0,16,3);
	ellipse(385,240,180,0,16,3);
	ellipse(385,245,180,0,16,3);
	setcolor(WHITE);
	ellipse(385,150,0,180,16,40);
	line(370,150,400,150);
	setcolor(GREEN);
	line(60,145,60,300);
	line(60,300,100,300);
	line(60,145,100,147);

	line(340,145,340,300);
	line(340,145,300,147);
	line(340,300,300,300);

	//ellipse(
	getch();
	closegraph();
}
void main()
{
	draw();
}
