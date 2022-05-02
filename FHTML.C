#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
void main()
{
	//int ;
	char ch='a';
	file *fp,*fp1;
	fp=fopen("abc.txt","a");
	fp1=fopen("abc1.txt","a");
	if((fp&&fp1)==NULL)
	{
		printf("Not found");
		exit(0);
	}
	printf("Press 0 for exit");
	printf("Enter the HTML Code\n");
	while(a!='0')
	{
		ch=getchar();
		fprintf(fp,"%c",ch);
	}
	clrscr();

	getch();
}
