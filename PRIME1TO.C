#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j=1,k;
	clrscr();
	for(i=1;i<=100;i++)
	{
		k=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			k++;

		}
	  if(k==2)
	  printf("%d ",i);
	}
	getch();
}