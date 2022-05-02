#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=1;
	clrscr();
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=k;j++)

			if(k<=5)
			{
			  printf("%d",j);

			}
		       //	k++;
		       else
			k-=3;
		     //  printf("%d",j);}
			printf("\n");
		      k++;

	}
	getch();
}