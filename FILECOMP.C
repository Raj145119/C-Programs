#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch,ch1[10],ch2[10],ch3;
	int l1,l2;
	FILE *fp,*fp1;
	clrscr();
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("FILE NOT CREATEED\n");
		exit(0);
	}
	fp1=fopen("abc1.txt","r");
	if(fp1==NULL)
	{
		printf("FILE NOT CREATEED\n");
		exit(0);
	}
	fscanf(fp,"%s",&ch1);
	fscanf(fp1,"%s",&ch2);
	l1=strlen(ch1);
	l2=strlen(ch2);

	//printf("%d  %d",l1,l2);
	if(l1==l2)
	{
	fp1=fopen("abc1.txt","r");
	fp=fopen("abc.txt","r");
	while(!feof(fp))
	{
		ch=fgetc(fp);
		ch3=fgetc(fp1);
	       //	printf("%c",ch);
	       //	printf("%c",ch3);
		if(ch==ch3)
		  printf("");
		else
		{
		printf("FILE NOT MATCH");
		 break;
		}
	}
	printf("\nFILE MATCH");
     }
	else
	printf("FILE NOT MATCH\n");
       //	printf("%s",ch1);
	close(fp);
	close(fp1);
	getch();
}