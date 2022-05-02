#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,p=1;
	clrscr();
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=i;j++)
		  printf("%c",j);
		for(k=4;k>=p;k--)
		  printf(" ");
		for(l=3;l>=p;l--)
		  printf(" ");
		for(j=i;j>=65;j--)
		{
		  if(i==69&&j==69);
		  else
		  printf("%c",j);
		}
		  printf("\n");
		  p++;
	}
	getch();
}