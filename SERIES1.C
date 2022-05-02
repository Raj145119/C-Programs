#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int   x=1,n,sum=0,sum1=0,sum2=0,j=0;
	clrscr();
	printf("Enter the no.\n");
	scanf("%d",&n);
	while(x<=n)
	{
		if(x%2!=0)
		{
			j++;
			if(j%2==0)
			{
				sum=sum+x;
			}
			else
				sum1=sum1+x;
			sum2=sum1-sum;
		}
		//i++;
		x++;

	}
	printf("1-3+5-7+9....=%d",sum2);
	getch();
}