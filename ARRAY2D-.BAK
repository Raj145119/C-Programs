#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,a[2][2],b[2][2],s[2][2];
	clrscr();
	printf("enter the value in 1st array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&a[i][j]);
	}
	printf("enter the value in 2nd array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&b[i][j]);
	}
	printf("1st array\n");
	for(j=0;j<2;j++)
	{
		for(k=0;k<2;k++)
		printf("%d",a[j][k]);
		printf("\n");
	}
	printf("2nd array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%d",b[i][j]);
		printf("\n");
	}
	printf("1st arr.*2nd arr.\n");
	for(i=0;i<2;i++)
	{
		for(k=0;k<2;k++)
		{
			s[i][k]=0;
			for(j=0;j<2;j++)
			s[i][k]=s[i][k]+a[i][j]*b[k][j];
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%d",s[i][j]);
		printf("\n");
	}
	getch();
}