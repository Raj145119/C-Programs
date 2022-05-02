#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=9;i+=2)
	{
		for(k=9;k>=i;k-=2)
		printf(" ");
		for(j=1;j<=i;j++)
		{
		     printf("* ");

		}
		 printf("\n");
	}
	getch();
}