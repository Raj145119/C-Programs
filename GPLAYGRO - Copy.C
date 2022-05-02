	/*play ground*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void bicket1();
void bicket2();
void ball();
void ball1();
void draw()
{
	int x,y,gm,gd;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	rectangle(250,80,350,300);
	line(250,120,350,120);
	line(250,260,350,260);

	line(300,300,300,270);
	line(290,300,290,270);
	line(310,300,310,270);
	line(290,270,310,270);
	setfillstyle(SOLID_FILL,GREEN);
	circle(300,200,180);
	floodfill(125,200,15);

	setfillstyle(SOLID_FILL,WHITE);
	circle(300,200,195);
	floodfill(300,6,15);
	bicket1();
	delay(1000);
	ball();
	getch();
	closegraph();

}
void ball()
	{
		setcolor(RED);
		circle(390,300,5);
		delay(1000);
		circle(330,310,5);
			setcolor(GREEN);
			circle(390,300,5);
		delay(1000);
			 setcolor(GREEN);
			 circle(330,310,5);
		setcolor(RED);
		circle(300,180,5);
		delay(1000);
			setcolor(BLACK);
			circle(300,180,5);
		ball1();

	}
void ball1()
{
	setcolor(RED);
	circle(300,100,5);
	bicket2();
	nosound();
}
void bicket1()
{
		line(300,80,300,110);
		line(290,80,290,110);
		line(310,80,310,110);
		line(290,110,310,110);
}

void bicket2()
{               setcolor(WHITE);
		line(290,80,280,55);
		line(310,80,320,55);
		line(300,80,300,55);
		line(280,40,290,40);
		line(320,40,330,40);
		setcolor(BLACK);
		line(300,80,300,110);
		line(290,80,290,110);
		line(310,80,310,110);
		line(290,110,310,110);
		setcolor(RED);
		outtextxy(380,100,"OUT");
		sound(50);

}

void main()
{
	clrscr();
	draw();
}
