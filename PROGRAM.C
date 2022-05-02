#include<stdio.h>
#include<conio.h>
void main()
{
	char x[7]={'P','R','O','G','R','A','M'};
	int i,j;
	clrscr();
	for(i=0;i<7;i++)
	{	for(j=0;j<=i;j++)
		printf(" %c",x[j]);
		printf("\n");
	}
	getch();

}