#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	int i=1;
      //	char ch=' ';
	char *ch=" ";
	clrscr();
      //	printf("Enter the number \n");
      s:
	i++;
	printf("Enter the string\n");
      //	ch=getchar();
	gets(ch);
	fp=fopen("abc.txt","a");
      //	fprintf(fp,"%c",ch);
	fprintf(fp,"%s",ch);
	if(i<5)
	goto p:
       //	printf(" char write on file\n");
	printf(" string write on file\n");
	getch();
}