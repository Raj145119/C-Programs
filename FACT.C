#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	clrscr();
	printf("enter the no.");
	scanf("%d",&n);
	for( ;n>0;n--)
	{
		i*=n;
		}
		printf("%d",i);

	getch();


}