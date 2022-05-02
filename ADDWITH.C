#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum;
	scanf("%d %d",&a,&b);
	sum=a+~b+1;
	//sum=a-(-b);
	printf("%d",sum);
	getch();
}