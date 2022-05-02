#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
void main()
{
	char ch;
	FILE *fp,*fp1;
	clrscr();
	fp=fopen("nitrr.txt","r");
	fp1=fopen("nitrr1.txt","a");
	if(fp==NULL)
	{
		printf("File is not create\n");
		exit(0);
	}
	while(!feof(fp))
	{
		ch=fgetc(fp);
		fprintf(fp1,"%c",ch);
	}
	fclose(fp);
	getch();
}