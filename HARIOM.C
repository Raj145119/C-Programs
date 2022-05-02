#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("/enter 1st no.");
	scanf("%d",&x);
	printf("/enter 2nd no.");
	scanf("%d",&y);
	z=x*x+2*x*y+y*y;
	printf("a=%d/n",z);
	getch();

}