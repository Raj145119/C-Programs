#include<stdio.h>
#include<conio.h>
void main()
{
      int x,i=1,j=0;
      clrscr();
      printf("Enter the no\n");
      scanf("%d",&x);
      while(x>=i)
      {
	  if(x%i==0)
	  {
		i++;
		j++;
	  }
	  else
	  i++;
      }
      if(j==2)
      printf("prime no.");
      else
      printf("No. prime no.");
      getch();
}