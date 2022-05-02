/*Priority queue using tree(heapify)*/
#include<stdio.h>
#include<conio.h>

int a[10],heapsize=0;


void build_max_heap(int [],int);
void heapify(int [],int);

void insert(int [],int);
void increase_key(int [],int,int);

void extract_max(int []);

int maximum(int);

void main()
{
	int i,n;
	clrscr();
	printf("Enter the size of array\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	build_max_heap(a,n);

	for( i=1;i<=heapsize;i++)
		printf("%d ",a[i]);

	insert(a,10);
	printf("\n*******\n");
	for( i=1;i<=heapsize;i++)
		printf("%d ",a[i]);

	extract_max(a);
	printf("**************\n");
	for( i=1;i<=heapsize;i++)
		printf("%d ",a[i]);

	getch();

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

void build_max_heap( int a[],int n)
{
	 int i,temp;
	 heapsize=n;
	 for(i=(n/2);i>=1;i--)
	  heapify(a,i);

}

void increase_key(int a[],int i,int key)
{
	int temp;
	if(key<a[i])
	{
		printf("new key is smaller than current key");

	}
	else
	{
		a[i]=key;
	}
	while(i>1 && a[i/2] < a[i])
	{
		temp=a[i/2];
		a[i/2]=a[i];
		a[i]=temp;
		i=i/2;
	}
}

void insert(int a[],int key)
{
	heapsize=heapsize+1;
	a[heapsize]=-1000;
	increase_key(a,heapsize,key);
}

void extract_max(int a[])
{
	int max;
	if(a[heapsize]<1)
	printf("under flow");

	max=a[1];
	a[1]=a[heapsize];
	printf("\n max value=%d\n ",max);
	heapsize=heapsize-1;
	heapify(a,1);
}