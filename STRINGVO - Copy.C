#include<stdio.h>
#include<conio.h>
void main()
{
	char name[300],ch;
	int i=0,j=0;
	clrscr();
	printf("\nenter the name");
	ch=getchar();
	while(ch!='#')
	{
		name[i]=ch;
		i++;
		ch=getchar();
	}
	name[i]=ch;
	i=0;
	printf("\n your name is=\n");
	while(name[i]!='#')
	{
	      //	putchar(name[i]);
	      if(name[i]=='a'|name[i]=='A')
	      name[j]=name[i];
		i++;
		j++;
	}
	j=0;
	while(ch!='#')
	{
		putchar(name[j]);
		j++;
	}
	getch();

}