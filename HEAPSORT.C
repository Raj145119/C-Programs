#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int a[15];
int heapsize;
void heapsort(int[],int);
void build_max_heap(int [],int);
void heapify(int [],int);
void main()
{
	int i,n;
	clrscr();
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the %d element in array\n",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}

	 heapsort(a,n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	 getch();
}
void heapsort(int a[],int n)
{
    int i,temp;
    build_max_heap(a,n);
    for(i=n;i>=2;i--)
    {
		temp=a[heapsize];
		a[heapsize]=a[1];
		a[1]=temp;
		heapsize--;
		heapify(a,1);

    }
}
void build_max_heap( int a[],int n)
{
	 int i,temp;
	 heapsize=n;
	 for(i=(n/2);i>=1;i--)
	  heapify(a,i);

}
void heapify(int a[],int i)
{

	int left;
	int right;
	int largest;
	int temp;
	left=2*i;
	right=2*i+1;
	if(left<=heapsize && a[left]>a[i])
		largest=left;
	else
		largest=i;
	if(right<=heapsize && a[right]>a[largest])
		largest=right;
	if(largest!=i)
	{
		 temp=a[i];
		 a[i]=a[largest];
		 a[largest]=temp;

		heapify(a,largest);
	}
}