#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
union REGS in,out;
void call()
{
	in.x.ax=0;
	int86(0x33,&in,&out);
}
void show()
{
	in.x.ax=1;
	int86(0x33,&in,&out);
}
/*void set(int x,int y)
{
	in.x.ax=4;
	in.x.cx=x;
	in.x.dx=y;
	int86(0x33,&in,&out);
}*/
void pos(int *x,int *y,int *b)
{
	in.x.ax=3;
	int86(0x33,&in,&out);
	*b=out.x.bx;
	*x=out.x.cx;
	*y=out.x.dx;
}
void hide()
{
	in.x.ax=2;
	int86(0x33,&in,&out);
}
void main()
{
	int gd,gm,x,y,b,x1,y1,n;
	gd=gm=DETECT;
	clrscr();
	initgraph(&gm,&gd," ");
	call();
	printf("Enter 1 for Line\n");
	printf("Enter 2 for Circle\n");
	printf("Enter 3 for Rectangle\n");
	printf("Enter 4 for star\n");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
	       while(!kbhit())
	       {
		show();
		pos(&x,&y,&b);
		x1=x;
		y1=y;
		while(b==1)
		{
			hide();
			line(x,y,x1,y1);
			x=x1;
			y=y1;
			pos(&x1,&y1,&b);
		}
		}
	break;

	case 2:
	while(!kbhit())
	{
		show();
		pos(&x,&y,&b);
		x1=x;
		y1=y;
		while(b==1)
		{
			hide();
			circle(x,y,20);
			x=x1;
			y=y1;
			pos(&x1,&y1,&b);
		}
	}
	break;
	case 3:
	while(!kbhit())
	{
		show();
		pos(&x,&y,&b);
		x1=x;
		y1=y;
		while(b==1)
		{
			hide();
			rectangle(x,y,x1,y1);
			x=x1;
			y=y1;
			pos(&x1,&y1,&b);
		}
	}
	break;

	case 4:
		while(!kbhit())
		{
		show();
		pos(&x,&y,&b);
		x1=x;
		y1=y;
		while(b==1)
		{
			hide();
			line(x,y,x1,y1);
			x=x1;
			y=y1;
			pos(&x,&y,&b);
		}
		}
	break;
	}
	//set(1,1);
	getch();
       /*	in.x.ax=0;
	int86(51,&in,&out);
	if(out.x.ax==0)
	printf("not avilable");
	else
	printf("avilable");
	getch();*/
}