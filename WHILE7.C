#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x=1,sum=0,i,j=1,n;
	clrscr();
	printf("\nenter number:");
	scanf("%d",&n);
	while(x<=n)
	{
		i=pow(x,j);
		sum=sum+i;
		x++;
		j++;
	}
	printf("1^1+2^2+3^3+4^4+...+n^n=%d",sum);
	getch();
}