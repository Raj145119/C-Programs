#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("Enter the number");
	scanf("%d",&n);
	for(i=0;i<=1;i++)
	printf("%d ",i);
	j=0,i=1;
	while(n>i)
	{
		i=i+j;
		j=i-j;
		printf("%d ",i);
	}
	getch();
}