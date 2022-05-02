#include<stdio.h>
#include<conio.h>
void pointer();
void main()
{
	clrscr();
	pointer();
	getch();
}
void pointer()
{
	int *p,x;
	p=&x;
	printf("Enter the value\n");
	scanf("%d",p);
	printf("\nvalue of x%d",*p);
	printf("\naddress of x %u",p);


}