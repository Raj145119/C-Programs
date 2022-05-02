#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,gr1,gr2;
	clrscr();
	printf("Enter the five value");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	gr1=(a>b)? (a>c) ? a: (b>c) ? b:c :(a>c)? a :c;
	gr2=(gr1>d)?(gr1>e)? gr1 : (d>e) ?d : e: (gr1>e)? gr1 :e ;
	printf("%d",gr2);
	getch();
}