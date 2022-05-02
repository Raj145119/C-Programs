#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int L[10];
int R[10];
void merge(int[],int,int,int);
void mergeshort(int[],int,int);
void main()
{
	int a[10],i,n,d,p,r;
	clrscr();
	printf("ho many number insert in array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=1;
	r=n-1;
	mergeshort(a,p,r);
	getch();
}
void mergeshort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		mergeshort(a,p,q);
		mergeshort(a,q+1,r);
		merge(a,p,q,r);
	}
} /*
void merge(int a[],int b,int c ,int d)
{
	int t[10];
	int i=a,j=c,k=0;
	while(i<=b && j<=d)
	{
		if(a[i]<a[j])
		t[k++]=a[i++];
		else
		t[k++]=a[j++];
	}
	while(i<=b)
		t[k++]=a[i++];
	while(j<=d)
		t[k++]=a[j++];
	for(i=a,j=0;i<=d;i++,j++)
	   a[i]=t[j];

} */

void merge(int a[],int p,int q,int r)
{
	int i,j,k;
	int n1=q-p+1;
	int n2=r-q;
	int L[5];
	int R[5];
	for(i=1;i<=n1;i++)
		L[i]=a[p+i-1];
	for(j=1;j<=n2;j++)
		R[j]=a[q+j];
		R[n2+1]=100;
		L[n1+1]=100;
		i=j=1;
		for(k=p;k<=r;k++)
		{
			if(L[i]<=R[j])
			{
				a[k]=L[i];
				i++;
			}
			else
			{
				a[k]=R[j];
				j++;
			}
		}
}