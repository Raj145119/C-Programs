#include<stdio.h>
#include<conio.h>
void readdata(int x[],int n)
{
	int i;
	printf("Enter Data\n");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
}
void showdata(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf(" %d",x[i]);
}
void bsearch(int x[],int n,int ptr)
{
	int mid,min=0,max=n-1;
	while(min<=max)
	{
		mid=(min+max)/2;
		if(x[mid]==ptr)
		{
			printf("DATA FOUND\n");
			break;
		}
		else if(x[mid]>ptr)
		max=mid-1;
		else
		min=mid+1;
	}

}
void main()
{
	int x[10],n,d;
	clrscr();
	printf("Enter the no of Array\n");
	scanf("%d",&n);
	readdata(x,n);
	printf("Enter the value for search\n");
	scanf("%d",&d);
	bsearch(x,n,d);
	showdata(x,n);
	getch();
}