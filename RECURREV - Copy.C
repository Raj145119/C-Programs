#include<stdio.h>
#include<conio.h>
#include<string.h>
char reverse(char*);
void main()
{
	char *res,*str;
	clrscr();
	printf("\n Enter the string");
	gets(str);
	*res=reverse(str);
	puts(res);
	getch();
}
char reverse(char *str)
{
	char *rev;
	*rev=*strrev(str);
	return *rev;
}