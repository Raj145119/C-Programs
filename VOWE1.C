#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("Entert the values in decimal(ascii value of chatacter\n");
	scanf("%d",&x);
	//printf("%c",x);
	if((x!='a'||x!='A')&&(x!='e'||x!='E')&&(x!='i'||x!='I')&&(x!='o'||x!='O')&&(x!='u'||x!='U'))
		printf("consonent");
	else
		printf("vowel");
	getch();

}