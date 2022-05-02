#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	float i,a,sum=0.0;
	clrscr();
	printf("\n enter the number");
	scanf("%d",&n);
	for(i=1.0;i<=n;i++)
	{
	a=1/i;
	sum=sum+a;
	printf("%f",sum);
	}
	getch();

}