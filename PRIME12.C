#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,n,j=0;
	clrscr();
	printf("Enter the no.\n");
	scanf("%d",&n);
       /*	if(n==1)
	{
		printf("Not prime no.\n");
		break;
	}*/
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			j++;
			break;
		}
	}
	if(j==0 && n!=1)
	printf("prime no.\n");
	else
	printf("Not prime no.\n");
	getch();
}