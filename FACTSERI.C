#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,j,k,sum=0,n,fact=1;
	clrscr();
	printf(".........SUM=1!/1 + 2!/2 + 3!/3+......+n!/n\n");
	printf("Enter the number \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{

			fact=fact*j;
		}
		k=fact/i;
		sum=sum+k;

	}
	printf("sum=%d",sum);
	getch();
}