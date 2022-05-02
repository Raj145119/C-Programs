#include<stdio.h>
#include<conio.h>
void main()
{

	int n=1,no,table;
	clrscr();
	printf("enter the value");
	scanf("%d",&no);
	p:
	table=no*n;
	printf("\n%d*%d=%d",no,n,table);
	n++;
	if(n<=10)
	goto p;
	getch();
}