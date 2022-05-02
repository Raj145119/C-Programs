#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char *a[10],i,*p;
	clrscr();
	printf("Enter the string\n");
	gets(*a);
	printf("Reverse the string\n");
	strrev(*a);
	puts(*a);
	getch();
}