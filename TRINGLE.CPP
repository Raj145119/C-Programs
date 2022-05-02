#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	int i,j,k,l;
	clrscr();
	for(i=0;i<=4;i++)
	{
		ch='A';
		for(j=4;j>=i;j--)
		{
		printf("%c ",ch);
		ch++;
		}
		for(k=1;k<=(i*2)-1;k++)
			printf("  ");
			if(i==0)
			ch=ch-2;
			else
			ch=ch-1;
			for(l=4;l>=i;l--)
			{
			       if(l==0)
			       break;
				printf("%c ",ch);
				ch--;

			}
			printf("\n");
	}
	getch();
}