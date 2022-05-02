#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,arr[3][3],arr1[3][3],arr2[3][3];
	clrscr();
	printf("enter the nine value");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		scanf("\ %d",&arr[i][j]);
	}
	printf("enter the nine value\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		scanf("\ %d",&arr1[i][j]);
	}
	printf("1st array\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		printf("%d",arr[i][j]);
		printf("\n");
	}
	printf("2nd array\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		printf("%d",arr1[i][j]);
		printf("\n");
	}
	printf("addition of 1st and 2nd array\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		arr2[i][j]=arr[i][j]+arr1[i][j];
		}
	}

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		printf("\  %d",arr2[i][j]);
		printf("\n");
	}


	getch();


}