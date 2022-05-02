#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n=3,x;
	float sum=1,t=1;
	clrscr();
	printf("Enter the value of x");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		t=t*x/i;
		sum=sum+t;
	}
	printf("%f",sum);
	getch();

}