
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void watch();
void main()
{
	clrscr();
	watch();

}
void watch()
{
	int gm,gd,i;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	circle(200,200,100);
	//gotoxy(200,100);
	outtextxy(200,90,"12");
	outtextxy(200,305,"6");
	outtextxy(260,100,"1");
	//outtextxy(200,90,"2");
	outtextxy(305,200,"3");
	//outtextxy(200,90,"4");
	//outtextxy(200,90,"5");
	//outtextxy(200,90,"7");
	//outtextxy(200,90,"8");
	outtextxy(90,200,"9");
	//moveto(x,y);
       //	delay(1000);

	//outtextxy(200,90,"10");
	//outtextxy(200,90,"11");
      /*	for(i=0;i<30;i++)
	{
		line(200,200,x,y);

		if(i>=20)
		{
			x-=5;
			y=+5;
		}
		else
		{
			x+=5;
			y+=5;
		}
		delay(1000);
	}*/
	getch();
	closegraph();
}