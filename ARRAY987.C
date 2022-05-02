#include<stdio.h>
#include<conio.h>
void main()
{
	int i,num[10];
	clrscr();
	for(i=0;i<=9;i++)
	{
		printf("enter the num[%d]=",i);
		scanf("%d",&num[i]);

	}
	for(i=0;i<=9;i++)
	printf("\ %d",num[i]);
	getch();


}