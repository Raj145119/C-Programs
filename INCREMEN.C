#include<stdio.h>
#include<conio.h>
void main()
{
	int j,i=5;
	clrscr();
	j=i++ + ++i;

	printf("i= %d\n",i);
	printf("j= %d",j);

	getch();

}