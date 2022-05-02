#include<stdio.h>
#include<conio.h>
void quicksort(int [],int,int);
int partition(int [],int,int);
void main()
{
	int a[50],i,n,d,p,r;
	clrscr();
	printf("Enter the size of array \n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	p=1;
	r=n;
	quicksort(a,p,r);

	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	getch();
}
void quicksort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=partition(a,p,r);

		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}
int partition(int a[],int p,int r)
{
	int i,j,x,m;
	x=a[r];
	i=p-1;
	for(j=p;j<=r-1;j++)
	{
		if(a[j]<=x)
		{
			i=i+1;
			m=a[i];
			a[i]=a[j];
			a[j]=m;
		}
	}
	m=a[i+1];
	a[i+1]=a[r];
	a[r]=m;
	return i+1;
}