#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,j,sum=0,sum1=0,z,avgx,avgy,x[6],y[6];
	clrscr();
	printf("\nenter the value in 1st array");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\n enter the value 2nd array");
	for(j=0;j<=5;j++)
	{
		scanf("%d",&y[j]);
	}
	for(i=0;i<=5;i++)
		sum=sum+x[i];
	for(j=0;j<=5;j++)
		sum1=sum1+y[j];
	avgx=sum/i;
	avgy=sum1/j;
	z=(avgx+avgy)/2;
	printf("\nz=%d",z);
	getch();
}