#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,j=0;
	char st1[10],st2[10];
	clrscr();
	printf("enter the 1st string\n");
	gets(st1);
	printf("enter the 2nd string\n");
	gets(st2);
	if(st1[i] !='\0' && st2[j] !='\0')
	{
		while(st1[i] !='\0' && st2[j] !='\0')
		{
		       if(st1[i]==st2[j]);
		       {
			i++;
			j++;}
			elsex
			{
			goto p;}
		}
		printf("EUALL STRING");
		p:
	}
      //	p:
	else
	printf("erf");
	getch();
}