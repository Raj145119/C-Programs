#include<stdio.h>
#include<conio.h>
int factorial(int);
void main()
{
	int x,res,y;
	clrscr();
	printf("Enter the value for its factorial\n");
	scanf("%d",&x);
	res=factorial(x);
	printf("factorial is %d",res);
	getch();
}
int factorial(int f)
{
	int fact=1,i;
	for(i=1;i<=f;i++)
	fact=fact*i;
	return fact;
}