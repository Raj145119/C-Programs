#include<stdio.h>
#include<conio.h>
void readdata(int a[],int n)
{
	int i;
	printf("Enter the values in array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nYour values is=\n");
	for(i=0;i<n;i++)
	printf("%d ",a);
}
void output(int a[],int n)
{
	int i;
	printf("\nYour values are\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
int sum(int p[],int n)
{
	int i,res=0;
	for(i=0;i<n;i++)
	{
		res=res+p[i];
	}
	return res;

}
void main()
{
	int a[10],n1,n2,res;
	clrscr();
	printf("Enter the no. of value\n");
	scanf("%d",&n1);
	readdata(a,n1);
	output(a,n1);
	res=sum(a,n1);
	printf("\nSum of array=%d",res);
	getch();
}