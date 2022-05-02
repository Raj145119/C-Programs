#include<stdio.h>
#include<conio.h>
#include<string.h>
char *strcatp(char*,char*);
void main()
{
	char *i,*j,*res;
	clrscr();
	printf("Enter the 1st string\n");
	gets(i);
	printf("Enter the 2nd string\n");
	gets(j);
	res=strcatp(i,j);
	puts(res);
	getch();
}
char *strcatp(char *i,char *j)
{

	return strcat(i,j);
}