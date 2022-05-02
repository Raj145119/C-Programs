#include<stdio.h>
#include<conio.h>
void main()
{
	int x=4,y=6,a;
	clrscr();
	a=(x>y)?x:y;
	printf("%d",a);
	a=(x<y)?x:y;
	printf("/nx=%d",a);
	getch();
}