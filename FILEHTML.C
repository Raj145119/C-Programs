#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
	int i;
	char ch='a';
	FILE *fp,*fp1;
	fp=fopen("html.txt","r");
	fp1=fopen("html1.txt","a");
	if(fp==NULL)
	{
		printf("File is not created\n");
		exit(0);
	}
	//printf("Press A for Exit");
	/*while(ch!='A')
	{
		scanf("%c",&ch);
		fprintf(fp,"%c",ch);
	} */
	while(!feof(fp))
	{       fseek(fp,-1,SEEK_END);
		ch=fgetc(fp);
		if(ch=='<'||ch=='>')
		continue;
		fprintf(fp1,"%c",ch);
	}
	fclose(fp);
	fclose(fp1);
	getch();
}