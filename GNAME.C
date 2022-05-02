#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void draw()
{
	int gd,gm;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	//setcolor(i);
	       //	circle(x,y,r);
	line(10,10,10,55);
	circle(20,20,10);
	line(35,10,35,55);
	circle(45,20,10);
	line(38,30,55,55);
	line(70,10,62,55);
	line(70,10,78,55);
	line(68,30,75,30);
	line(75,10,90,55);
	line(90,55,100,10);
	line(105,10,105,55);
	line(105,10,130,10);
	line(105,30,130,30);
	line(105,55,130,55);
	line(140,10,140,55);
	line(140,10,165,10);
	line(140,30,165,30);
	line(140,55,165,55);
	line(175,10,175,55);
	line(195,10,195,55);
	line(175,10,195,55);
	getch();
	closegraph();
}
void main()
{
	clrscr();
	draw();
}