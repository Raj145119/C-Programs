#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[5];
	clrscr();
	printf("\nEnter the 5 values");
	for(i=0;i<=4;i++)
	scanf("%d",&a[i]);

	for(i=0;i<=4;i++)
	printf(" %d",a[i]);

	getch();
}
