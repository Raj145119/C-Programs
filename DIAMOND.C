#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,l,k;
	clrscr();
	for(i=1;i<5;i++)
	{
		for(j=i;j<=3;j++)
		printf("  ");
		for(k=1;k<=i;k++)
		printf(" %d",k);
		for(l=i-1;l>=1;l--)
		printf(" %d",l);
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(j=4;j>i;j--)
		printf("  ");
		for(k=1;k<=i;k++)
		printf(" %d",k);
		for(l=i-1;l>=1;l--)
		printf(" %d",l);
		printf("\n");
	}
	getch();

}