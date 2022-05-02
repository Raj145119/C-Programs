#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j;
	clrscr();
	printf("\nenter the 1st array");
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			scanf("%d",&a[j][i]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			a[i][j]=a[i][j]/a[i][j];
		}
	}
	printf("\nscalar matrix is=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	getch();

}