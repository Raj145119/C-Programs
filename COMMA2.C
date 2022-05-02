#include<stdio.h>
#include<conio.h>
void main()
{
	int x=5,y=3,z,z1;
	z=(x++),(++x);
	z1=x++,++x;
	printf("z=%d",x);
	printf("z1=%d",z1);
	getch();
}