#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void draw()
{
	int gd,gm,x=100,y=100,x1=200,y1=200,i;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	//rectangle(x,y,x1,y1);
	for(i=1;i<=10;i++)
	{
		setcolor(i);
		clrscr();
		rectangle(x,y,x1,y1);
		delay(500);
		x-=5;
		y-=5;
		y1+=5;
		x1+=5;
		//r+=5;
	}
	getch();
	closegraph();
}
void main()
{
	clrscr();
	draw();
}

