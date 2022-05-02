#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void move();
void move1();
int m=0,x1=3,y1=3,c[12]={3,3,3,3,3},d[12]={3,4,5,6,7};
int p[100]={23,45,6,28,5,56,56,29,30,10};
int q[100]={5,20,5,20,5,23,6,28,40,3};
int main()
{
	char a,b;
	//clrscr();
	//textcolor(RED);
	printf("      -------PRESS  Esc  FOR EXIT--------                                       ");
	printf("---------------------------------------------");
	printf("-----------------------------------");
	gotoxy((p[m]),(q[m]));
	printf("#");
	m++;
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
    return 0;
	}
}
void move()
{
	int i;
	//textcolor(GREEN);
	gotoxy(c[0],d[0]);
	printf(" ");
	for(i=0;i<4;i++)
	{
		c[i]=c[i+1];
		d[i]=d[i+1];
	}
	c[4]=x1;
	d[4]=y1;
	 //
	  if((p[m]==c[4])&&(q[m]==d[4]))
	 {
	  gotoxy(p[m],q[m]);
	  printf("#");
	  m++;
	  }
	  //
	for(i=0;i<4;i++)
	{
	   gotoxy((c[i]),(d[i]));
	   cprintf("*");
	}

}
void move1()
{
	int i;
	//textcolor(GREEN);
	gotoxy(c[0],d[0]);
	printf(" ");
	for(i=0;i<4;i++)
	{
		c[i]=c[i+1];
		d[i]=d[i+1];
	}
	c[4]=x1;
	d[4]=y1;

	//for print #
	 if((p[m]==c[4])&&(q[m]==d[4]))
	 {
		gotoxy(p[m+1],q[m+1]);
		printf("#");
		m++;
	 }
	//
	for(i=0;i<=4;i++)
	{
	   gotoxy((c[i]),(d[i]));
	   printf("*");
	}
}
