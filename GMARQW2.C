#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void draw()
{
	int gd,gm,x=5,y=20,x1=25,x2=60,x3=120,i;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	do
	{
		clrscr();
		setcolor(1);
		outtextxy(x,y,"P");
		setcolor(2);
		outtextxy(x1,y,"RAJ");
		setcolor(3);
		outtextxy(x2,y,"ADITYA");
		setcolor(4);
		outtextxy(x3,y,"SHRIVASTAV");
		delay(500);
		x+=10;
		x1+=10;
		x2+=10;x3+=10;
		if(x>=500)
		{
			x=6;
		}
		if(x1>=500)
		{
			x1=5,y=20;
		}
		if(x2>=500)
		{
			x2=10;
		}
		if(x3>=500)
		{
			x3=12;
		}

	}while(!kbhit());
	getch();
	closegraph();
}
void main()
{
	clrscr();
	draw();
}