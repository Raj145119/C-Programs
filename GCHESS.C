	/*flag of india*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void draw()
{
	int x,y,gm,gd;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	//setfillstyle(SOLID_FILL,BLUE);
	rectangle(50,50,450,450);

	line(100,50,100,450);
	line(150,50,150,450);
	line(200,50,200,450);
	line(250,50,250,450);
	line(300,50,300,450);
	line(350,50,350,450);
	line(400,50,400,450);

	line(50,100,450,100);
	line(50,150,450,150);
	line(50,200,450,200);
	line(50,250,450,250);
	line(50,300,450,300);
	line(50,350,450,350);
	line(50,400,450,400);

	setfillstyle(SOLID_FILL,BLUE);
	floodfill(51,51,15);
	floodfill(101,101,15);
	floodfill(151,151,15);
	floodfill(201,201,15);
	floodfill(251,252,15);
	floodfill(302,302,15);
	floodfill(351,351,15);
	floodfill(402,402,15);

	floodfill(51,151,15);
	floodfill(101,201,15);
	floodfill(151,251,15);
	floodfill(201,302,15);
	floodfill(252,352,15);
	floodfill(301,401,15);

	floodfill(151,51,15);
	floodfill(201,101,15);
	floodfill(251,151,15);
	floodfill(301,202,15);
	floodfill(352,252,15);
	floodfill(401,301,15);

	floodfill(251,51,15);
	floodfill(301,101,15);
	floodfill(351,151,15);
	floodfill(401,202,15);

	floodfill(352,51,15);
	floodfill(401,101,15);

	floodfill(51,351,15);
	floodfill(101,402,15);

	floodfill(52,252,15);
	floodfill(101,301,15);
	floodfill(151,351,15);
	floodfill(201,402,15);


       setfillstyle(SOLID_FILL,WHITE);
	floodfill(51,101,15);
	floodfill(101,151,15);
	floodfill(151,201,15);
	floodfill(201,252,15);
	floodfill(252,302,15);
	floodfill(301,351,15);
	floodfill(352,402,15);

	setfillstyle(SOLID_FILL,WHITE);
	//floodfill(250,420,15);
	floodfill(401,51,15);
	floodfill(351,101,15);
	floodfill(301,151,15);
	floodfill(251,201,15);
	floodfill(201,252,15);
	floodfill(151,302,15);
	floodfill(101,351,15);
	floodfill(51,402,15);

	floodfill(101,51,15);
	floodfill(151,101,15);
	floodfill(201,151,15);
	floodfill(251,202,15);
	floodfill(302,252,15);
	floodfill(351,301,15);
	floodfill(402,352,15);

	floodfill(301,51,15);
	floodfill(201,51,15);
	floodfill(251,102,15);
	floodfill(151,401,15);
	floodfill(251,401,15);
       setfillstyle(SOLID_FILL,WHITE);
	floodfill(55,202,15);
	floodfill(52,302,15);
	floodfill(101,251,15);
	floodfill(201,351,15);
	floodfill(401,152,15);
	floodfill(401,251,15);
	floodfill(351,201,15);


	getch();
	closegraph();

}
void main()
{
	clrscr();
	draw();
}
