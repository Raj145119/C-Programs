#include<stdio.h>
#include<conio.h>
void main()
{
	int i=2,j=1,x=2,y=2;
	clrscr();
	p:
	gotoxy(x,y);
	printf("%d",i*j);
	j++;
	y=y+2;
	if(j>10)
	{
	y=2;
	x=x+4;
	i++;
	j=1;
	}
	if(i<=10)
	goto p;
	getch();


}