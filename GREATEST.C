#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("inter the value 1st\n");
	scanf("%d",&a);
	printf("inter the valuue 2nd\n");
	scanf("%d",&b);
	c=(a>b)?a:b;
	printf("greatest is   %d",c);
	getch();
}