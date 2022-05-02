#include<stdio.h>
#include<conio.h>
int f(int n)
{
	if(n<=1)
	return 1;
	if(n%2==0)
	return f(n/2);
	return f(n/2)+f(n/2+1);
       /*	else
	return 2*fun(n+1);*/
}
void main()
{
	//int x=100;
	printf("%d",f(11));
		//printf("%d",10+ ++x);
		getch();

 }