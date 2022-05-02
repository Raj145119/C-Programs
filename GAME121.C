#include<stdio.h>
#include<conio.h>
#include<graphics.h>
//#include<stdlib.h>
//#include<dos.h>
//void screen();
//void line();
void main()
{
	int gd,gm,x1=30,y1=15,x2=80,y2=15;
	char a,b;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	clrscr();
	setcolor(RED);
	rectangle(20,10,620,380);
	setcolor(BLUE);
	line(x1,y1,x2,y2);
	while(1)
	{
		a=getch();
		switch(a)
		{
			case 0:
				b=getch();
				switch(b)
				{
					case 77:
					if
					x1++;
					x2++;
					gotoxy(x1,x2);

					break;
					case 72:


				}
		}


	//line();
	getch();
}
/*void line()
{
    int x,y;
	int gd,gm,x=20,y=20,i;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");

} */