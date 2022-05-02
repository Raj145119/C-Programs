#include<stdio.h>
#include<conio.h>
int factorial(int x)
{
	int fact=1,i;
	for(i=x;i>=1;i--)


		fact=fact*i;

	return fact;
}
void main()
{
	int x,fact1;
	clrscr();
	printf("\n Enter the no.");
	scanf("%d",&x);
	fact1=factorial(x);
	printf("factorial=%d",fact1);
	getch();

}