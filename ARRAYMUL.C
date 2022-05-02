#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,a[3][3],b[3][3],mul[3][3];
	clrscr();
	printf("\n enter the 1st in array");
	for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			scanf("%d",&a[i][k]);
		}

	}
	printf("\nenter the 2nd in array");
	for(k=0;k<3;k++)
	{
		for(j=0;j<3;j++)
		{
			scanf("\n%d",&b[k][j]);
		       //	printf("\n");
		}

	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=0;
			for(k=0;k<3;k++)
			mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
		}
	}
	printf("\nmultiply of 1st and 2nd array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",mul[i][j]);

		}
			printf("\n");

	 }
	getch();

}