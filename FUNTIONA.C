#include<stdio.h>
#include<conio.h>
void praveen();
void main()
{
	clrscr();
	praveen();
	getch();
}
void praveen()
{
	int x,y,result;
	printf("enter the  2 value\n");
	scanf("%d%d",&x,&y);
	result=x+y;
	printf("\nsum=%d",result);
}