#include<stdio.h>
#include<conio.h>
void main()
{
	int x=6,a,s,d,f;
	clrscr();
       //	a=++x++;
	s=x+++x++;
	d=(x++)+(x++);
      //	f=(++(x++)++)+(x++);
	printf("\n%d \n%d",s,d);
	getch();
}