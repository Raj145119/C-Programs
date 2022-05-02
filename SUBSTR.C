#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i,c=0;
	clrscr();
	printf("Enter the no.");
	scanf("%d%d",&a,&b);
	for(i=b;i<a;i++)
	{
		c=c+1;
	}
	printf("%d",c);
	getch();

}