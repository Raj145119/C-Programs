#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,m;
	clrscr();
	for(i=0;i<=5;i++)
	{

	      for(j=1;j<=5-i;j++)

		  printf("%d ",j);
		  if(j<5)
		  l=j;
	   //   for(k=2;k<=i;k++)
	      //	  printf(" ");
	      //for(m=3;m<=i;m++)
	      //	  printf(" ");
	      for(j=1;j<=(4*i)-2;j++)
	      printf(" ");

	      for(k=4;k>=i;k--)
	     {
	     if(k==0)
	     break;
		  printf("%d ",l);

	      l--;
	      }
		  printf("\n");

	}

	getch();
}