#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void draw()
{
	int gd,gm,x=200,y=200,r=10,i;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	for(i=1;i<=20;i++)
	{
		setcolor(i);
		circle(x,y,r);
		delay(500);
		r+=5;
	}
	for(i=1;i<=21;i++)
	{
		//r-=5;
		setcolor(0);
		circle(x,y,r);
		r-=5;
		 delay(500);
	}
	getch();
	closegraph();
}
void main()
{
	clrscr();
	draw();
}