#include<stdio.h>
#include<conio.h>
void armstrong(int);
void main()
{
	int x,res;
	clrscr();
	printf("Enter   the no.");
	scanf("%d",&x);
	armstrong(x);
	getch();

}
void armstrong(int x)
{
	int res,y=0,z=x;
	while(x!=0)
	{
		res=x%10;
		x=x/10;
		y=y+res*res*res;
	}
	if(z==y)
	printf("%d is armstrong no.\n",z);
	else
	printf("%d is not armstrong no.\n",z);
}
