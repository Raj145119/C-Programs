#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
	int i,r;
	clrscr();
	printf("\nenter the no.");
	scanf("%d",&i);

	r=fact(i);
	printf("%d",r);
	getch();
}
int fact(int i)
{
	if(i==1)
	return 1;
	else
	return i*fact(--i);
}