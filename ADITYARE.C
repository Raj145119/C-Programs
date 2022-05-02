#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],i,j=0,n,n1,b[20],x=0,n2;
	clrscr();
	printf("Enter the no. in array\n");
	scanf("%d",&n);
	n1=n;
	n2=n;
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	while(n!=1)
	{
		n=n/2;
		x++;
	}
	while(x>=1)
	{
		for(i=1;i<n1;i++)
		{
			if(i%2!=0)
			{
				b[j]=a[i];
				j++;
			}
		}
		n1=j;
		x--;
	}
	//if(n2/2==0)
	//printf("%d",b[2]);
	//else
	printf("%d",b[1]);
	getch();
}