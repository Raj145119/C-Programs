#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char ch[10];
	clrscr();
	for(i=0;i<=9;i++)
	{
		printf("\nenter the char");
		scanf("%c",&ch[i]);
	}
	for(i=0;i<=9;i++)
	{
		printf("%c",ch[i]);
	}
	getch();
}