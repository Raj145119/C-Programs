#include<stdio.h>
#include<conio.h>
void delete_e(int,int);
void readdata(int,int);
void main()
{
	int a[20],n;
	clrscr();
	printf("How many no. in array\n");
	scanf("%d",&n);
	readdata(a,n);
	printf("Enter the value for delete\n");
	delete_e(a,n,);
	getch();
}
void readdata(int a[],int n)
{
	int i;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void delete_e(int