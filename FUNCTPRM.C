#include<stdio.h>
#include<conio.h>
void prime(int i)
{

	int x=1,y=0;
	if(x<=i)

	{
	if(i%x==0)
	 {
		x++;
		y++;

	 }
	else
	  y++;
	}
	if(y==2)
	{
		printf("prime number\n");

	}
	else
	printf("not prime no.\n");
}
void main()
{
	int i;
	clrscr();
	printf("Enter the no.\n");
	scanf("%d",&i);
	prime(i);
	getch();
}