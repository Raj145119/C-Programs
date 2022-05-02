#include<stdio.h>
#include<conio.h>
void readdata(int a[],int n)
{
	int i;
	printf("Enter the values in array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void binarysec(int a[],int n,int x)
{
	int m,l=0,u=n-1;
	while(l<=u)
	{
		m=l+u/2;
		if(x==a[m]){
		printf("Value Found\n");
		break;}
		if(x>a[m])
		l=m+1;
		else
		u=m-1;
	}

}
void sorting(int a[],int n)
{
	int i,j,ptr;
	for(i=0;i<=n-2;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[j]<a[i])
			{
				ptr=a[i];
				a[i]=a[j];
				a[j]=ptr;
			}
		}

	}
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
}
void main()
{
	int a[10],n,x;
	clrscr();
	printf("Enter the no. in array\n");
	scanf("%d",&n);
	readdata(a,n);
	printf("Enter the values for search\n");
	scanf("%d",&x);
	sorting(a,n);
	binarysec(a,n,x);
	getch();

}