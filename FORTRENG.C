#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l=5;
	clrscr();
	for(i=0;i<=4;i++)
	{

		for(j=2;j<=l;j++)
		//for(j=4;j>=i;j--)
		printf("  ");
		for(k=1;k<=(i*2+1);k++)
		printf("%d ",l);
		printf("\n");
		l--;
	}
	getch();
}
