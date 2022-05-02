#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l;
	clrscr();
	for(i=1;i<=5;i++)
	{
		if(i==1)
		{
			for(j=1;j<=5;j++)
			printf(" *");
		}
		else
		{
			for(k=i;k<5;k++)
			printf("  ");
			printf(" *");
		}
		printf("\n");
	}
	for(l=1;l<=5;l++)
	printf("* ");
	getch();
}