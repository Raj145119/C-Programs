#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("enter 3 value/n");
	scanf("%d%d%d",&x,&y,&z);
	if((x>y)&&(x>z))
	{
	printf("xisgreatest");
	}
	else if((y>x)&&(y>z))
	{
	printf("y is geatest");
	}
	else
	{
	printf("z is gratest");
	}

}