	/*flag of india*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void flag()
{
	int i,gm,gd;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(30,40,40,400);
	floodfill(35,45,15);

	ellipse(80,45,0,170,40,6);
	ellipse(160,45,180,0,40,6);

	ellipse(80,90,0,170,40,6);
	ellipse(160,90,180,0,40,6);


	ellipse(80,135,0,170,40,6);
	ellipse(160,135,180,0,40,6);

	ellipse(80,180,0,170,40,6);
	ellipse(160,180,180,0,40,6);

	ellipse(200,160,270,90,10,22);
	ellipse(200,115,265,95,10,22);
	ellipse(200,70,270,95,10,23);
	for(i=0;i<=360;i+=15)
	{
		pieslice(135,116,0,i,21);
	}
	rectangle(10,400,60,410);
	rectangle(0,410,70,420);
	setfillstyle(SOLID_FILL,RED);
	floodfill(85,50,15);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(85,120,15);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(85,140,15);
	setcolor(RED);
	ellipse(30,130,90,270,15,90);
	setcolor(GREEN);
	ellipse(40,310,270,90,15,90);
	circle(23,40,7);
	getch();
	closegraph();

}
void main()
{
	clrscr();
	flag();
}
