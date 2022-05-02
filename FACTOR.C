#include<stdio.h>
#include<conio.h>
void main()
{
	int x,i=2,n,j=2,k=0;
	clrscr();
	printf("Enter the no.\n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			while(i>=j)
			{
				if(i%j==0)
				{
				j++;
				k++;
				}
				else
				j++;
			}
			if(k==1)
			printf("%d, ",i);
		}
		i++;
		j=2;
		k=0;
	}

	getch();


}