
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,z,x=100,y=70,j=50,k=30;
	clrscr();
	printf("enter 5 value/n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	z=(a+b+c+d+e)*1/5;

	textbackground(BLUE);

	if((x>z)&&(z>y))
	{
		textcolor(GREEN);
		cprintf("*=%d",z);
	  }
	  else if((y>z)&&(z>j))
	  {
		textcolor(BLUE);
		cprintf("1st=%d",z);
	 }
	 if((j>z)&&(z>=k))
	 {
		textcolor(YELLOW);
		cprintf("pass");
	  }
	  if(z<k)
	  {
	  textcolor(RED);
	  cprintf("fail");
	  }

	getch();

}