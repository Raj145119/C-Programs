#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
	//int x,y;
	char ch,a[20];
	FILE *fp;
	clrscr();
	fp=fopen("nitrr.txt","w");
	if(fp==NULL)
	{
		printf("File is not create\n");
		exit(0);
	}
	printf("PRESS e FOR exit\n");
	while(ch!='e')
	{
	//printf("Enter the character\n");
	scanf("%c",&ch);
       //	fputs(ch,fp);
	fprintf(fp,"%c",ch);
	}
	fclose(fp);
}