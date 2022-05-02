#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][4],b[4][3],c[3][3],i,j,k;
	clrscr();
	printf("Enter the vales in 1st array\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
		  scanf("%d",&a[i][j]);
	printf("Enter the values in 2nd array\n");
	for(i=0;i<4;i++)
		for(j=0;j<3;j++)
		  scanf("%d",&b[i][j]);
	printf("Multiplication of 2 matrix\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<4;k++)
			c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
		printf("Multiplication of two matrix\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			printf("%d ",c[i][j]);
			printf("\n");
		}
		getch();
}