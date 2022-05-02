#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int   x,n,j=0;
	int i,fact=1,y=1,r;
	float sum=0.0,sum1=0.0,sum2=0.0;
	clrscr();
	printf("Enter the no.\n");
	scanf("%d",&n);
	printf("Enter the value of x\n");
	scanf("%d",&x);

	while(y<=n)
	{
		if(y%2!=0)
		{
			for(i=1;i<=y;i++)
			  fact=fact*i;
			j++;
			if(j%2==0)
			{
				r=pow(x,y);
				sum=sum+(r/fact);
				printf("aas=%d\n",sum);
			}
			else
			{
				r=pow(x,y);
				sum1=sum1+(r/fact);
				printf("asdsfsd=%d\n",sum1);
			}
		       //	sum2=sum1-sum;
		}

		//i++;
		y++;
		fact=1;
	}
		sum2=x-(sum1-sum)-1;
	printf("sine function=%d",sum2);
	getch();
}