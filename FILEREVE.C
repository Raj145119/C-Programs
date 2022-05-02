#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//int count_character(FILE *);
void main()
{
	int i=0;
	char ch;
	FILE *fp;
	clrscr();
	fp=fopen("html12.txt","r");
	if(fp==NULL)
	{
		printf("NOT FILE CREATE\n");
		exit(0);
	}
       //	printf("PRESS 0 FOR STOP WRITE\n");
	/*while(ch!='0')
	{
		ch=getchar();
		fprintf(fp,"%c",ch);
	}*/
	//i=count_characters(fp);

	printf("%d",i);
	fseek(fp,-1L,2);
	i=ftell(fp);
	i++;
	printf("%d",i);
	while()
	{

		fscanf(fp,"%c",&ch);
		printf("%c",ch);
			fseek(fp,-2L,1);
		i--;
	}
	fclose(fp);
	getch();
}
/*int count_characters(FILE *f)
{
	int last_pos;
	fseek(f,-1L,2);
	last_pos=ftell(f);
	last_pos++;
	return last_pos;
}*/