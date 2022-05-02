#include<stdio.h>
#include<conio.h>
void main()
{
	int x,i,n;
	clrscr();
	printf("\nEnter the number:");
	scanf("%d",&x);
	for(n=1;n<=10;n++)
	printf("\n%d",x*n);
	getch();
}