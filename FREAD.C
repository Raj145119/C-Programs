#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
	//int x,y;
	char ch,a[20];
	FILE *fp;
	clrscr();
	fp=fopen("nitrr.txt","r");
	if(fp==NULL)
	{
		printf("File is not create\n");
		exit(0);
	}
	//printf("PRESS e FOR exit\n");
	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}