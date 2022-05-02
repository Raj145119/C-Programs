	/*LUDO*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void draw()
{
	int x,y,gm,gd;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	//setfillstyle(SOLID_FILL,BLUE);
	rectangle(50,50,450,450);

	setfillstyle(SOLID_FILL,WHITE);
	rectangle(40,40,460,460);
	floodfill(42,42,15);

	setfillstyle(SOLID_FILL,RED);
	circle(248,250,60);
	floodfill(250,251,15);
	setcolor(WHITE);
	outtextxy(220,242,"H O M E");

	rectangle(60,60,160,160);
	rectangle(340,60,440,160);
	rectangle(60,340,160,435);
	rectangle(340,340,440,440);
	line(325,50,325,450);
	line(170,50,170,450);

	line(50,170,450,170);
	line(50,330,450,330);

	//line(50,220,450,220);
	line(50,220,170,220);
	line(325,220,450,220);
       //	line(50,280,450,280);
       line(50,280,170,280);
       line(325,280,450,280);

	//line(275,50,275,450);
       //	line(220,50,220,450);
       line(275,50,275,170);
       line(275,330,275,450);
       line(220,50,220,170);
       line(220,330,220,450);

	line(70,170,70,330);
	line(90,170,90,330);
	line(110,170,110,330);
	line(130,170,130,330);
	line(150,170,150,330);

	line(345,170,345,330);
	line(365,170,365,330);
	line(385,170,385,330);
	line(405,170,405,330);
	line(430,170,430,330);

	line(170,65,325,65);
	line(170,85,325,85);
	line(170,105,325,105);
	line(170,125,325,125);
	line(170,145,325,145);

	line(170,350,325,350);
	line(170,370,325,370);
	line(170,390,325,390);
	line(170,410,325,410);
	line(170,430,325,430);


	//floodfill(55,55,15);
	setfillstyle(SOLID_FILL,RED);
	circle(75,75,7);
	floodfill(77,77,15);
	setfillstyle(SOLID_FILL,RED);
	circle(145,75,7);
	floodfill(147,77,15);
	setfillstyle(SOLID_FILL,RED);
	circle(75,145,7);
	floodfill(77,147,15);
	setfillstyle(SOLID_FILL,RED);
	circle(145,145,7);
	floodfill(145,145,15);

	setfillstyle(SOLID_FILL,RED);
	circle(80,190,7);
	floodfill(82,192,15);
	setfillstyle(SOLID_FILL,RED);
	circle(190,95,7);
	floodfill(192,92,15);

	setfillstyle(SOLID_FILL,GREEN);
	circle(355,75,7);
	floodfill(357,77,15);
	setfillstyle(SOLID_FILL,GREEN);
	circle(425,75,7);
	floodfill(427,77,15);
	setfillstyle(SOLID_FILL,GREEN);
	circle(355,145,7);
	floodfill(357,147,15);
	setfillstyle(SOLID_FILL,GREEN);
	circle(425,145,7);
	floodfill(427,145,15);

	setfillstyle(SOLID_FILL,GREEN);
	circle(395,195,7);
	floodfill(400,195,15);
	setfillstyle(SOLID_FILL,GREEN);
	circle(300,75,7);
	floodfill(303,77,15);

	setfillstyle(SOLID_FILL,YELLOW);
	circle(355,350,7);
	floodfill(357,348,15);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(425,425,7);
	floodfill(427,423,15);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(355,425,7);
	floodfill(357,427,15);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(425,350,7);
	floodfill(427,352,15);

	setfillstyle(SOLID_FILL,YELLOW);
	circle(420,305,7);
	floodfill(421,306,15);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(300,400,7);
	floodfill(302,402,15);

	setfillstyle(SOLID_FILL,BLUE);
	circle(75,350,7);
	floodfill(76,348,15);
	setfillstyle(SOLID_FILL,BLUE);
	circle(145,425,7);
	floodfill(147,423,15);
	setfillstyle(SOLID_FILL,BLUE);
	circle(75,425,7);
	floodfill(77,427,15);
	setfillstyle(SOLID_FILL,BLUE);
	circle(145,350,7);
	floodfill(147,352,15);

	setfillstyle(SOLID_FILL,BLUE);
	circle(100,305,7);
	floodfill(101,306,15);
	setfillstyle(SOLID_FILL,BLUE);
	circle(190,420,7);
	floodfill(192,422,15);

	setfillstyle(SOLID_FILL,YELLOW);
	//circle(420,305,7);
	floodfill(421,275,15);
	floodfill(411,285,15);
	floodfill(390,275,15);
	floodfill(360,275,15);
	floodfill(370,275,15);
	floodfill(340,275,15);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(175,175,15);
	//setfillstyle(SOLID_FILL,YELLOW);
	//circle(300,400,7);
	//floodfill(302,402,15);

	setfillstyle(SOLID_FILL,RED);
	//circle(420,305,7);
	floodfill(75,275,15);
	floodfill(155,275,15);
	floodfill(85,275,15);
	floodfill(95,275,15);
	floodfill(135,275,15);
	floodfill(125,275,15);
	floodfill(75,210,15);

	setfillstyle(SOLID_FILL,GREEN);
	floodfill(280,75,15);
	floodfill(260,90,15);
	floodfill(260,75,15);
	floodfill(260,105,15);
	floodfill(260,115,15);
	floodfill(260,135,15);
	floodfill(260,150,15);

	setfillstyle(SOLID_FILL,BLUE);
	//floodfill(250,420,15);
	floodfill(260,420,15);
	floodfill(260,400,15);
	floodfill(260,380,15);
	floodfill(260,360,15);
	floodfill(260,340,15);
	floodfill(180,420,15);
	arc(218,77,0,180,25);
	arc(77,280,90,275,25);
	arc(270,420,180,0,25);
	arc(420,225,270,90,25);
	line(115,190,145,190);
	//pieslice(243,77,0,30,10);
	getch();
	closegraph();

}
void main()
{
	clrscr();
	draw();
}
