#include<stdio.h>
#include<conio.h>
void readdata(int[],int);
int search(int[],int,int);
void shorting(int [],int);
void main()
{
	int arr[20],res,n,s;
	clrscr();
	printf("Enter the size of array\n");
	scanf("%d",&n);
	readdata(arr,n);
	shorting(arr,n);
	printf("Enter the value for search\n");
	scanf("%d",&s);
	res=search(arr,n,s);
	if(res>-1)
	printf("%d datafount",res);
	else
	printf("Not found");
	getch();
}
void readdata(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",&arr[i]);
	}
}
void shorting(int arr[],int n)
{
	int i,j,res,temp;
	for(i=0;i<n-1;i++)
	{
		//res=arr[i];
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int search(int arr[],int n,int s)
{
	int i,j,res;
	for(i=0;i<n;i++)
	{
		if(s==arr[i])
		return s;
	}
	return -1;
}