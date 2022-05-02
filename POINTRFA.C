#include<stdio.h>
#include<conio.h>
void factorial();

void main()
{
	clrscr();
	factorial();
	getch();
}
void factorial()
{
	int i,*p,*pt;
       *pt=1;
	printf("enter the value ");
	scanf("%d",p);
	for(i=*p;i>0;i--)
	{
		*pt=*pt * i;

	}
	printf("%d",*pt);
}
