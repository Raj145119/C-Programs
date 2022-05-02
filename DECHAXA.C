#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x,y,i=0,s=0;
	clrscr();
	printf("Enter the Decimal values\n");
	scanf("%d",&x);
	while(x!=0)
	{
		y=x%16;
	       s=s+y*pow(10,i);
		x=x/16;
		i++;

	}
	printf("%d",s);
	getch();
}