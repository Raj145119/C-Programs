#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{

	int i,j,n,sum=0,fact=1,k=0,a,m;
	clrscr();
	printf("\n enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		j=fact+k;
		k++;
		m=j-fact;
		a=m/i;
		sum=sum+a;
	}
	printf("%d",sum);
	getch();
}