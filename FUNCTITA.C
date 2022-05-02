#include<stdio.h>
#include<conio.h>
void table(int x)
{
	int  i=1,tab;
	for(i=1;i<=10;i++)
	{
		tab=x*i;
		printf("\n");

		printf("%d",tab);
	}
}
void main()
{
	int x;
	clrscr();
	printf("Enter the no.");
	scanf("%d",&x);
	table(x);
	getch();
}