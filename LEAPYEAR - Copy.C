#include<stdio.h>
#include<conio.h>
void main()
{
	int year,x,y,z;
	clrscr();
	printf("enter the year");
	scanf("%d",&year);
	x=year%4;
	y=year%100;
	z=year%400;

	if((x==0 && y!=0)||z==0)

	printf("it is a leap year");
	else
	printf("it is not leap year");
	getch();
}