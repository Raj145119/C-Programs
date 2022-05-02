#include<stdio.h>
#include<conio.h>
void fun(int n)
{
	if(n<1)
	return;
	fun(n-1);
	printf("%d",n);
	fun(n-1);
}
void main()
{
	int n=3;
	clrscr();
	fun(n);
	getch();
}