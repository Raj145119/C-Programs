#include<stdio.h>
#include<conio.h>
void main()
{
	int x=1;
	clrscr();
	while(x<=100)
	{
		if(x%1==0 && x%3==0 && x%5==0)
		printf("%d",x);
		x++;
	}
	getch();
}