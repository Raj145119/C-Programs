#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("enter 4 value/n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(70<a<=100)
	{

	printf("distriction");
	}
	else if(60<b<=70)
	{

	printf("1st");
	}
	else if(40<c<=60)
	{

	printf("pass");
	}
	else if(d<=40)
	{

	printf("fail");
	}
	getch();

}