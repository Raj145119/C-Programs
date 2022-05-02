#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
//#include"DIL.c"
void dil();
void draw()
{
	int gm,gd,x1=100,y1=100,i;
	clrscr();
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");

	arc(x1,y1,-90,90,50);
	line(x1,y1/2,x1,y1+50);
	line(x1,y1,x1+100,y1);
	line(x1+100,y1,x1+80,y1-10);
	line(x1+100,y1,x1+80,y1+10);
		line(600,30,600,150);
		line(500,30,500,150);
		line(500,30,600,30);
		line(500,150,600,150);
		line(530,30,530,150);
		line(560,30,560,150);
		line(500,80,600,80);
		line(500,120,600,120);
	delay(500);
	getch();
	for(i=1;i<300;i+=9)
	{
		clrscr();
		setcolor(1);
		arc(x1,y1,-90,90,50);
		line(x1,y1/2,x1,y1+50);
		setcolor(i);
		line(x1+i,y1,x1+100+i,y1);
		line(x1+100+i,y1,x1+80+i,y1-10);
		line(x1+100+i,y1,x1+80+i,y1+10);

		setcolor(0);
		line(600,30,600,150);
		line(500,30,500,150);
		line(500,30,600,30);
		line(500,150,600,150);
		line(530,30,530,150);
		line(560,30,560,150);
		line(500,80,600,80);
		line(500,120,600,120);
		delay(100);
	}
	//getch();
	closegraph();
}
void main()
{
	clrscr();
	draw();
	dil();
	//getch();
}
void dil()
{
	int i,j;
	clrscr();
	textcolor(BLINK+4);
	gotoxy(36, 11);
	cprintf("%c",3);
	gotoxy(37, 10);
	cprintf("%c",3);
	gotoxy(39, 9);
	cprintf("%c",3);
	gotoxy(39, 9);
	cprintf("%c",3);
	gotoxy(41, 9);
	cprintf("%c",3);
	gotoxy(42, 10);
	cprintf("%c",3);
	gotoxy(42, 11);
	cprintf("%c",3);
	textcolor(BLINK+7);
	gotoxy(42, 12);
	cprintf("%c",3);

	gotoxy(41, 13);
	cprintf("%c",3);
	gotoxy(40, 14);
	cprintf("%c",3);
	gotoxy(39, 15);
	textcolor(BLINK+2);
	cprintf("%c",3);
	gotoxy(38, 16);
	cprintf("%c",3);
	textcolor(BLINK+4);
	gotoxy(34, 10);
	cprintf("%c",3);
       //	textcolor(BLINK+4);
	gotoxy(32, 9);
	cprintf("%c",3);
	gotoxy(30, 9);
	cprintf("%c",3);
	gotoxy(29, 10);
	cprintf("%c",3);

	gotoxy(29, 11);
	cprintf("%c",3);
	textcolor(BLINK+7);
	gotoxy(29, 12);
	cprintf("%c",3);
	gotoxy(30, 13);
	cprintf("%c",3);
	gotoxy(31, 14);
	cprintf("%c",3);
	textcolor(BLINK+2);
	gotoxy(32, 15);
	cprintf("%c",3);
	gotoxy(33, 16);
	cprintf("%c",3);
	gotoxy(36, 17);
	cprintf("%c",3);
	gotoxy(30,15);
	cprintf("%c",47);
	textcolor(BLINK+14);
	gotoxy(31, 12);
	cprintf("I LOVE YOU");
	//cprintf("I LOVE MY");
	gotoxy(33,14);
	cprintf(" RESU");
	//cprintf("------");
	 //cprintf("INDIA");
	textcolor(BLINK+RED);
	gotoxy(44,10);
	cprintf("%c",47);
	gotoxy(44,9);
	cprintf("%c",95);
	gotoxy(45,10);
	cprintf("|");
	gotoxy(60,15);
	getch();
}