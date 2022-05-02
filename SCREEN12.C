#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void draw()
{
	int x,y,gm,gd;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	line(5,20,350,20);
	getch();
	closegraph();

}
void main()
{
	draw();
	getch();
}
