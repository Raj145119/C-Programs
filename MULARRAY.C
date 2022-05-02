#include <stdio.h>
#include <conio.h>

void main()
{	int a[3][3],b[3][3],c[3][3],i,k,j,m,m1=0;
	clrscr();
	printf("Enter the values in 1st array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Enter the values in 2nd array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	}
	for(j=0;j<3;j++)
	{
	for(i=0;i<3;i++)
	{
	       //	m1=0;
	       ///	m=0;
	       /*	for(j=0;j<3;j++)
		{   */
			m1=0;
			m=0;
			for(k=0;k<3;k++)
			{
				m=a[i][k]*b[k][i];
				m1=m1+m;
			}
		       for(j=0;j<3;j++)
			c[i][k]=m1;
	       //	}

	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");

	  }

	getch();
}