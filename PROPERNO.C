	/*proper no. 81=(8+1)^2*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int a,b,sum=0,n,c;
	clrscr();
	printf("Enter the no.");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		a=n%10;
		sum=sum+a;
		n=n/10;
	       //	printf("%d",a);
	}
      //	b=pow(sum,2);
	b=sum*sum;
	if(c==b)
	printf("proper no.");
	else
	printf("No proper no.");
	getch();
}