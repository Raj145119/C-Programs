#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,*p;
	clrscr();
	p=&a[0];
	printf("Enter 5 value");
	for(i=0;i<=4;i++)
	scanf("%d",p+i);
	printf("the values are\n");
	for(i=0;i<=4;i++)
	printf("%d ",*(p+i));
	getch();
}
