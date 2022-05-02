#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x,y,k,i=0,s=0;
	clrscr();
      //	printf("Enter the Decimal values\n");
      //	scanf("%d",&x);
      for(x=5;x<=5;x++)
      {
	i=0;
	s=0;
	k=x;
	while(k!=0)
	{
       // printf("%d",k);
		y=k%2;
	       s=s*10+y;
		k=k/2;
		i++;

	}
	printf("\n%d",s);
      }
	getch();
}