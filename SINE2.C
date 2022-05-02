#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float i=1,j,n,x,k=2,sum=0.0;
	clrscr();
	printf("Enter the no.");
	scanf("%f",&n);
	printf("\nEnter the value of x in degree");
	scanf("%f",&x);
	x=((3.143)*x)/180;
	j=x;
	while(i<=n)
	{
	 sum=sum+j;
	  j=(-1)*(j*(x*x))/((k)*(k+1));
	  k=k+2;
	  i++;
	}
	printf("%f",sum);
	getch();
}

