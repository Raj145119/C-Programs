#include<stdio.h>
#include<conio.h>
#include<string.h>
int length(char*);
void main()
{
	char *i;
	int res;
	clrscr();
	printf("Enter the string\n");
	gets(i);
	res=length(i);
	printf("%d",res);
	getch();
}
int length(char *i)
{
	return strlen(i);
}