#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("enter the 3 number\n");
	scanf("%d%d%d",&x,&y,&z);
	if((x<y)&&(x<z))
	printf("x is smallest=%dthan y&z",x);
	else if((y<x)&&(y<z))
	printf("y is smallest=%d than x*z",y);
	else
	printf("z is smallest=%d than x&y",z);
	getch();
}