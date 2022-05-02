#include<stdio.h>
#include<conio.h>
void fun(int n)
{
	if(n>4000)
	return;
	printf("%d",n);
	fun(2*n);
	printf("%d\n",n);
}
void main()
{
	int n=1000;
	clrscr();
	fun(n);
	getch();
}