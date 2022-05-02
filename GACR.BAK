#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void draw()
{
	int gm,gd,x1=100,y1=100;
	clrscr();
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");

	arc(x1,y1,-90,90,50);
	line(x1,y1/2,x1,y1+50);
	line(x1,y1,x1+100,y1);
	line(x1+100,y1,x1+80,y1-10);
	line(x1+100,y1,x1+80,y1+10);
	getch();
	closegraph();
}
void draw1()
{
	int gm,gd,x1=100,y1=100;
	clrscr();
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	circle(x1,y1,50);
	setcolor(RED);
	ellipse(x1,y1,90,270,40,50);
	setcolor(GREEN);
	ellipse(x1,y1,-90,90,40,50);
	setcolor(GREEN);
	ellipse(x1,y1,90,270,20,50);
	setcolor(RED);
	ellipse(x1,y1,-90,90,20,50);
	setcolor(YELLOW);
	line(x1-10,145,x1-10,300);
	line(x1+10,145,x1+10,300);
	setcolor(RED);
	circle(x1,300,10);
	setcolor(GREEN);
	line(x1,40,x1-5,52);
	line(x1,40,x1+5,52);
	getch();
	closegraph();

}

void main()
{
	int x;
	printf("ENTER 1 FOR ARC\n");
	printf("ENTER 2 FOR GADA\n");
	scanf("%d",&x);
	if(x==1)
	draw();
	else
	draw1();

}
