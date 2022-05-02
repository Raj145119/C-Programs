#include<stdio.h>
#include<conio.h>
void main()
{
	int sum=0,i,n;
	clrscr();
	printf("enter the value\n");
	scanf("%d",&n);
       //	sum=1+2+3+n;
	for(i=1;i<=n;i++)
	sum=sum+i;
	printf("the sum of %d=%d",n,sum);
	getch();
}