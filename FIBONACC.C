#include<stdio.h>
#include<conio.h>
int f(int);
void main()
{
       int n,i;
	int p=1;
	clrscr();
	for(i=0;i<=5;i++)
	{
		if(i<2)
		{
		printf("%d",i);
		f(p)=i;
		p++;
		}
		else
		{
		n=f(p)+f(P-1);
		printf("%d",n);
		p++;
		}
	}
	getch();
}