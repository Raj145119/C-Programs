#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gm,gd;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	clrscr();
	line(100,100,150,150);
	circle(10,10,10);
	rectangle(50,50,80,80);
	ellipse(90,90,0,180,50,20);
	getch();
	closegraph();
}