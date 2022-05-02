#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=69;i>=65;i--)
	{
	       //	printf("askii of char");
	       for(j=65;j<=i;j++)
		printf("%c ",j);
		printf("\n");
	}
	getch();
}