#include<stdio.h>
#include<conio.h>
void factorial(int *);
void factorial(int *p)
{
	int s=1,x,i;
	p=&x;
	printf("enter the no.\n");
	scanf("%d",p);
	printf("%d\n",*p);
	for(i=x;i>0;i--)
	{
	       s=s*i;

	}
	printf("%d",*p);


}
void main()
{
	int x;
	clrscr();
	scanf("%d",&x);
	factorial(&x);
	getch();
}