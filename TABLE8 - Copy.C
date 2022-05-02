#include<stdio.h>
#include<conio.h>
void main()
{
	int x,n=1;
	clrscr();
	printf("enter the value\n");
	scanf("%d",&x);
	p:

	printf("%d",x*n);
	n++;
	if(n<=10)
	goto p;
	x=x+1;
	n=1;
	a:
	printf("%d",x*n);
	n++;
	if(n<=10)

	goto a;
	x=x+1;
	n=1;
	s:
	printf("%d",x*n);
	n++;
	if(n<=10)
	goto s;
	x=x+1;
	n=1;
	d:

	printf("%d",x*n);
	n++;
	if(n<=10)
	goto d;
	getch();
}