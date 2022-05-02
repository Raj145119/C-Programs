#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=0;i<=3;i++)
	{
		k=1;
		for(j=0;j<=3;j++)
		{
			if((i+j)>=3)
			{
				printf(" %d",k);
				k++;
			}
			else
			printf("  ");
		}
		printf("\n");
	}
	getch();
}