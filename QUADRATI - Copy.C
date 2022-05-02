#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float D,deno,root1,root2;
	clrscr();
	printf("enter the value\n");
	scanf("%d%d%d",&a,&b,&c);
	D=(b*b)-4*a*c;
	deno=2*a;
	if(D>0)
	{
	 printf("\n real root");
	 root1=(-b+sqrt(D))/deno;
	 root2=(-b-sqrt(D))/deno;
	 printf("\n root1=%f ,root2=%f\n",root1,root2);
	}
	else if(D==0)
	{
	 printf("\nequal roots");
	 root1=-b/deno;
	 root2=b/deno;
	 printf("\nroot1=%f,\n root2=%f",root1,root2);
	}
	else
	printf("\nimagenary number");
	getch();
}