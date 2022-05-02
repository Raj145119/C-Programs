#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int i,gm,gd,x[50]={5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,53,44,45,46,47,48};
	int y[50]={9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9},ch;
	clrscr();

	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	for(i=0;i<38;i++)
	{
		putpixel(x[i],y[i],WHITE);
	}
      /*	ch=getch();
	switch(ch)
	{
		case 72:
		x++;

	}*/
       //	closegraph();
	getch();
	closegraph();
}

 /*	while(1)
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
}       */