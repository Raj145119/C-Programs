#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void draw()
{
	int gd,gm,x=20,y=20,i;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	do
	{
	for(i=1;i<=40;i++)
	{
		clrscr();
		setcolor(1);
		outtextxy(x,y,"P R A V E E N");
		delay(500);
		x+=10;
	}
	for(i=1;i<=20;i++)
	{
		clrscr();
		setcolor(1);
		outtextxy(x,y,"P R A V E E N");
		delay(500);
		x-=10;
	}
	}while(!kbhit());
       /*	for(i=1;i<=21;i++)
	{
		//r-=5;
		setcolor(0);
		circle(x,y,r);
		r-=5;
		 delay(500);
	} */
	getch();
	closegraph();
}
void main()
{
	clrscr();
	draw();
}