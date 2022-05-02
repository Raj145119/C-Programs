#include<stdio.h>
#include<conio.h>
void main()
{
	int age=0,a1,r=2017;
	clrscr();
	printf("Enter the your Year of birth\n");
	scanf("%d",&a1);
	age=r-a1;
	printf("Your are   %d Your old",age);
	getch();
}