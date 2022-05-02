#include<stdio.h>
#include<conio.h>
void main()
{
	char *p="praveen",*k;
	int ptr;
	int x=4,y=2;
	clrscr();
	a:
	printf("Enter the password\n");
	gets(k);
	ptr=stricmp(p,k);
	if(ptr<=0)
	{
	printf("c=%d",x|y);
	printf("\na=%d",x^y);
	getch();
	}
	else
	{
		printf("WRONG PASSWORD\n");
		goto a;

	}
}
