#include<stdio.h>
#include<conio.h>
int fun(int n)
{
	if(n==4)
	return n;
	else
	return  2*fun(n+1);
}
void main()
{
	int n=2,r;
	clrscr();
	r=fun(n);
	printf("%d",r);
	getch();
}