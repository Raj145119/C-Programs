#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void move();
void move1();
int m=0,x1=3,y1=3,c[12]={3,3,3,3,3},d[12]={3,4,5,6,7};
int p[100]={23,45,6,28,5,56,56,29,30,10,30,10,23,34,23,10,10,56,35,34,45,34,23,45,23,4,45,47,86,67,8,41,16,34};
int q[100]={5,20,5,20,5,23,6,28,40,34,19,5,15,29,15,20,5,7,23,56,23,89,6,8,56,15,8,26,41,56,56,8,34,9,51,45,45};
void main()
{

     /*	int gm,gd,x=10,y=20;
	clrscr();
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	putpixel(x,y,WHITE);*/

	char a,b;
	clrscr();
	textcolor(RED);
	cprintf("      -------PRESS  Esc  FOR EXIT--------                                       ");
	cprintf("---------------------------------------------");
	cprintf("-----------------------------------");
	textcolor(YELLOW);
	gotoxy((p[m]),(q[m]));
	cprintf("#");
	//m++;
	while(1)
	{
	a=getch();
	switch(a)
	{
		case 0:{
		b=getch();
		switch(b)
		{
			case 72:

			while(kbhit()==0)
			{
				if(y1>3)
					y1--;
				else
					y1=25;
				delay(120);
			      //	if((a[m]==x1)&&(b[m]==y1))
			      //	print();
				move1();
			}
			break;
			case 80:
			while(kbhit()==0)
			{
				if(y1<25)
					y1++;
				else
					y1=3;
				move1();
				delay(120);
			}
			break;
			case 75:
			while(kbhit()==0)
			{
				if(x1>2)
					x1--;
				else
					x1=79;
				move();
				delay(120);
			}
			break;
			case 77:
			while(kbhit()==0)
			{
				if(x1<79)
					x1++;
				else
					x1=2;
				move();
				delay(120);
			}
			break;
	       }
	       break;
	       }
	       case 27:
		exit(0);
	}

	}
}
void move()
{
	int i;
	int gm,gd;
	clrscr();
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	//putpixel(x,y,WHITE);

	textcolor(GREEN);
	gotoxy(c[0],d[0]);
	printf(" ");
	for(i=0;i<4;i++)
	{
		c[i]=c[i+1];
		d[i]=d[i+1];
	}
	c[4]=x1;
	d[4]=y1;

	 if((p[m]==c[4])&&(q[m]==d[4]))
	 {
	  gotoxy(p[m+1],q[m+1]);
	  textcolor(YELLOW);
	  cprintf("#");
	/*  if(m>=16)
	{
		m=0;
	}
	else*/
	  m++;
	  }
	for(i=0;i<4;i++)
	{
	   //gotoxy((c[i]),(d[i]));
	   putpixel(c[i],d[i],WHITE);
	   //cprintf("*");
	}
	closegraph();

}
void move1()
{
	int i;
	int gm,gd;
	clrscr();
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	textcolor(GREEN);
	gotoxy(c[0],d[0]);
	printf(" ");
	for(i=0;i<4;i++)
	{
		c[i]=c[i+1];
		d[i]=d[i+1];
	}
	c[4]=x1;
	d[4]=y1;


	 if((p[m]==c[4])&&(q[m]==d[4]))
	 {
		gotoxy(p[m+1],q[m+1]);
		textcolor(YELLOW);
		cprintf("#");
	      /*	if(m>=16)
		m=1;
		else*/
		m++;
	 }
	for(i=0;i<=4;i++)
	{
	  /* gotoxy((c[i]),(d[i]));
	   cprintf("*"); */
	   putpixel(c[i],d[i],WHITE);
	}
	closegraph();
}