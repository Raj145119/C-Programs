#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void draw()
{
	int gm,gd,x1=2,x2=638,y1=10,y2=10;
	int x3=2,y3=10,x4=2,y4=450;
	int x5=2,y5=450,x6=638,y6=450;
	int x7=638,y7=10,x8=638,y8=450;
	int m=30,n=30,m1=100,n1=30,i=1;
	clrscr();
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	line(x1,y1,x2,y2);
	line(x3,y3,x4,y4);
	line(x5,y5,x6,y6);
	line(x7,y7,x8,y8);
      //	for(i=1;i<300;i++)
       //	{
		while(i<=100)
		{
			clrscr();
			i++;
			m++;
			m1++;
			line(m,n,m1,n1);
			delay(100);
		}
		while(i>100&&i<200)
		{
			clrscr();
			i++;
			m++;
			n1++;
			line(m,n,m1,n1);
			delay(100);
		}
		while(i>=200&&i<300)
		{
			clrscr();
			i++;
			m1++;
			n++;
			line(m,n,m1,n1);
			delay(100);
		}
	      /*	else
		{
		}*/



       //	 }
	getch();
	closegraph();
}
void main()
{
	draw();
}
