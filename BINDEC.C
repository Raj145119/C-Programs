#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x,y,i=0,s=0;
	clrscr();
	printf("Enter the Binary values\n");
	scanf("%d",&x);
	while(x!=0)
	{
		y=x%10;
	       s=s+y*pow(2,i);
		x=x/10;
		i++;
	}
	printf("%d",s);
	getch();
}