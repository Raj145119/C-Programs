#include<stdio.h>
#include<conio.h>
void main()
{
	int x=5,y=3,z;
	clrscr();
	z=(x++,y+=x);
	printf("z=%d",z);
	getch();
}