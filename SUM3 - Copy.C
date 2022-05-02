#include<stdio.h>
#include<conio.h>
void main()
{
	int i,x;
	clrscr();
	printf("enter the value\n");
	scanf("%d",&x);
	for(i=1;i<=x;i=i+2)
	printf("\ %d",i);
	getch();
}