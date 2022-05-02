#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l=1;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=i+1;j<=9;j++)
		printf("  ");
		for(k=l;k>=1;k--)
		printf("%d ",k);
		printf("\n");
		l++;;
	       //	if(i==5&k==5)
	       //	break;

	}
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		printf("%d ",j);
		printf("\n");
	}
	getch();
}