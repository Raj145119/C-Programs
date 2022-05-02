#include<stdio.h>
#include<conio.h>
void main()
{
	int n,y,sum=0;
	clrscr();
	printf("\n enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		y=n%10;
		sum=sum+y;
		n=n/10;
		printf("%d",y);



	}
	  printf("\n%d",sum);

	getch();
}
