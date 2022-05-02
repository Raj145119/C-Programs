#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,m=8;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		  printf(" *");
		for(k=1;k<m;k++)
		  printf("  ");
		for(l=1;l<=i;l++)
		{
		  if(i==5&&l==5)
		  break;
		  printf(" *");
		}
		  m=m-2;

		printf("\n");
	}
	getch();
}