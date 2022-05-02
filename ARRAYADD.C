#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int arr[3][3],arr1[3][3],add[3][3],i,j,k;
	clrscr();
	printf("Enter the 9 values in matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&arr[i][j]);
	}
	printf("\nEnter the 9 values in another matrix");
	for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		scanf("%d",&arr1[i][k]);
	}
		for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		add[i][k]=arr[i][k]+arr1[i][k];
	}
	printf("Addition of array\n");
		for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		printf("%d  ",add[i][k]);
		printf("\n");
	}
	getch();
}
