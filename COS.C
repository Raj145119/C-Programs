#include<stdio.h>
#include<conio.h>
void main()
{
	float x,n,i,j,sum=0,f=1,b;
	clrscr();
	printf("Enter the no.\n");
	scanf("%f",&n);
	printf("Enter the no. of x\n");
	scanf("%f",&x);
	j=1;
	b=1;
	for(i=1;i<=n;i++)
	{
		f=f*(j)*(j+1);
		j++;
		b=b*x*x;
		sum=sum+b/f;
	}
	printf("%f",(1-sum));
	getch();

}