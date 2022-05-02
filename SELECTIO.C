#include<stdio.h>
#include<conio.h>
void readdata(int a[],int n)
{
	int i;
	printf("Enter the values in array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
int binarysec(int a[],int n,int x)
{
	int i,j,ptr,min,pos;
	for(i=0;i<n-2;i++)
	{
		min=a[i];
		pos=i;
		for(j=i+1;j<n-1;j++)
		{
			if(min>a[j])
			{
				min=a[j];
			}

		}

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
	int a[10],n,x,res;
	clrscr();
	printf("Enter the no. in array\n");
	scanf("%d",&n);
	readdata(a,n);
	printf("Enter the values for search\n");
	scanf("%d",&x);
	sorting(a,n);
	res=binarysec(a,n,x);
	if(res==-1)
	printf("DATA NOT FOYUNDIN\n");
	else
	printf("DATA FOUND=%d",a[res]);
	getch();

}