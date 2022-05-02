#include<stdio.h>
#include<conio.h>
void readdata(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void main()
{
	int a[10],b[10],n,i;
	clrscr();
	printf("Enter the values of n");
	scanf("%d",&n);
	readdata(a,n);
	readdata(b,n);
	printf("DATA OF ARRAY A\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nARRAY OF B DATA\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	getch();
}