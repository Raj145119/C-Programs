#include<stdio.h>
#include<conio.h>
long prime(int n)
{
	if(n==0||n==1)
	return 1;
       //	else
	return (n*prime(n-1));
}
void main()
{
	int n;
	long res;
	clrscr();
	printf("Enter the no.");
	scanf("%d",&n);
	res=prime(n);
	printf("%lf",res);
	getch();
}