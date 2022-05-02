#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,b=2,c=1,res;
	clrscr();
	res={pow(((a+b)*(a-b)*(b-c)*(a-c)),2)}/a+b-c;
	printf("pow([(a+b)*(a-b)*(b-c)*(a-c)],2)/a+b-c=%d",res);
	getch();
}