#include<stdio.h>
#include<conio.h>
void main()
{
	int x=2,n;
	clrscr();
	printf("enter thhe number");
	scanf("%d",&n);
	while(x<=n)
	{
		printf("\ %d",x);
		x+=2;
	}
	getch();


}
