#include<stdio.h>
#include<conio.h>
void main()
{
	int x,i=1,n,j=0,k=1;
	clrscr();
	printf("Enter the no.\n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			while(k<=i)
			{
			if(i%k==0)
			{
			j++;
			k++;
			}
			else
			k++;

			}
			if(j==2)
			printf("%d",i);

		       //	printf("%d, ",i);
		}
		i++;
	}
	getch();

}