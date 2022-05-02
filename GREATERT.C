#include<stdio.h>
#include<conio.h>
void main()
{
	int a=5,b=7,c=9,x;
	clrscr();
	x=(a>b)?(a>c)?a:c:(b>c)?b:c;
	printf("%d",x);
	getch();
}
