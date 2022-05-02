#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int fact=1,i,j;
	clrscr();
	printf("Enter the value\n");
	scanf("%d",&j);
	for(i=1;i<=
	j;i++)
	{
		fact=fact*i;
	}
	printf("Factorial=%d",fact);
	getch();
}