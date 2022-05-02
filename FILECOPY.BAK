#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i;
	char ch='a';
	FILE *fp,*fp1;
	clrscr();
	fp=fopen("html12.txt","r");
	if(fp==NULL)
	{
		printf("NOT FILE CREATE\n");
		exit(0);
	}
	fp1=fopen("html21.txt","w");
	if(fp1==NULL)
	{
		printf("NOT FILE CREATE\n");
		exit(0);
	}
	printf("PRESS 0 FOR STOP WRITE\n");
	/*while(ch!='0')
	{
		ch=getchar();
		fprintf(fp,"%c",ch);
	} */
	while(!feof(fp))
	{
		fscanf(fp,"%c",&ch);
		if(ch=='<')
		{
			while(ch!='>')
			fscanf(fp,"%c",&ch);
			fscanf(fp,"%c",&ch);
		}
		//fscanf(fp,
		//fscanf(fp,"%c",&ch);
		fprintf(fp1,"%c",ch);

	}
	fclose(fp);
	fclose(fp1);
	getch();
}