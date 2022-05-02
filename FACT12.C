#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,fact=1,sum=0,sum1,sum2=0;
	clrscr();
	printf("\n enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		j=fact/i;
		if(i%2==0)
		{
		  sum=sum+j;
		}
		if(i%2!=0)
		{
		  sum2=sum2+j;
		}
		sum1=sum2-sum;
	}
	printf("+1!/1-2!/2+3!/3...n!/n=%d",sum1);
	getch();
}