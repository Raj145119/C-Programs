#include<stdio.h>
#include<conio.h>
int array(int[]);
int array(int arr[])
{
	int sum=0,i;
	for(i=0;i<=10;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
void main()
{
	int arr[10],j,res;
	clrscr();
	printf("Enter value in an array\n");
	for(j=0;j<=10;j++)
	{
		scanf("%d",&arr[j]);
	}
	res=array(arr);
	printf("%d",res);
	getch();
}
