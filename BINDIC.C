#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

	int a,b,c=0,i=0;
	clrscr();
	printf("Enter the binary no");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		c=c+b*pow(2,i);
	       //	printf("%d \n",c);
		i++;
		a=a/10;
	}
	printf("%d",c);
	getch();
}