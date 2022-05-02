#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void move();
void move1();
int m=0,x1=10,y1=10,c[100]={10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
int d[100]={10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70};
int p[100]={23,45,6,28,5,56,56,29,30,10,30,10,23,34,23,10,10,56,35,34,45,34,23,45,23,4,45,47,86,67,8,41,16,34};
int q[100]={5,20,5,20,5,23,6,28,40,34,19,5,15,29,15,20,5,7,23,56,23,89,6,8,56,15,8,26,41,56,56,8,34,9,51,45,45};
void main()
{
	int i,a,b;
      /*	clrscr();
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
       /*	for(i=0;i<60;i++)
	{
	putpixel(x,y,WHITE);
	x++;
	}*/
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
				if(y1>10)
					y1--;
				else
					y1=200;
				delay(120);
			      //	if((a[m]==x1)&&(b[m]==y1))
			      //	print();
				move1();
			}
			break;
			case 80:
			while(kbhit()==0)
			{
				if(y1<200)
					y1++;
				else
					y1=10;
				move1();
				delay(120);
			}
			break;
			case 75:
			while(kbhit()==0)
			{
				if(x1>10)
					x1--;
				else
					x1=180;
				move();
				delay(120);
			}
			break;
			case 77:
			while(kbhit()==0)
			{
				if(x1<180)
					x1++;
				else
					x1=10;
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


	//getch();
	//closegraph();
}

void move()
{
	int gm,gd,i;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	//textcolor(GREEN);
	//gotoxy(c[0],d[0]);
	putpixel(c[0],d[0],BLACK);
	for(i=0;i<60;i++)
	{
		c[i]=c[i+1];
		d[i]=d[i+1];
	}
	c[59]=x1;
	d[59]=y1;

	 if((p[m]==c[59])&&(q[m]==d[59]))
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
	for(i=0;i<60;i++)
	{
	   putpixel((c[i]),(d[i]),GREEN);
	   //cprintf("*");
	}

}
void move1()
{
	int gm,gd,i;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	//textcolor(GREEN);
	putpixel(c[0],d[0],BLACK);
	//printf(" ");
	for(i=0;i<60;i++)
	{
		c[i]=c[i+1];
		d[i]=d[i+1];
	}
	c[59]=x1;
	d[59]=y1;


	 if((p[m]==c[59])&&(q[m]==d[59]))
	 {
		gotoxy(p[m+1],q[m+1]);
		textcolor(YELLOW);
		cprintf("#");
	      /*	if(m>=16)
		m=1;
		else*/
		m++;
	 }
	for(i=0;i<=60;i++)
	{
	   putpixel((c[i]),(d[i]),GREEN);
	  // cprintf("*");
	}
}