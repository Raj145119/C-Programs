#include<stdio.h>
#include<conio.h>
void readdata(int x[],int n)
{
	int i;
	printf("Enter Data\n");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
}
void showdata(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf(" %d",x[i]);
}
void main()
{
	int x[10],n;
	clrscr();
	printf("Enter the no of Array\n");
	scanf("%d",&n);
	readdata(x,n);
	showdata(x,n);
	getch();
}