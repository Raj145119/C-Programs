#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,m=0;
	clrscr();
	for(i=68;i>=65;i--)
	{
		for(j=65;j<=i;j++)
		printf("%c",j);

		for(k=0;k<m;k++)
		printf(" ");
		m=m+2;
		for(l=i;l>=65;l--)
		printf("%c",l);
		printf("\n");
	}

	getch();
}