#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z,gr,a;
	clrscr();
	printf("enter the 3 value\n");
	scanf("%d%d%d",&x,&y,&z);
	a=(x>y)?x:y;
	gr=(a>z)?a:z;
	printf("greater value  is=%d",gr);
	getch();
}