#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,j=0;
	char st1[5],s2[5];
	clrscr();
	printf("\n enter the char");
	gets(st1);
     while(st1[j] != '\0')
     {
	s2[i]=st1[j];
	j++;
	i++;
     }
     puts(s2);
     getch();
}