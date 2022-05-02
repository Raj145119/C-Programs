#include<stdio.h>
#include<conio.h>
void main()
{
	int ar[10],i,j,k,flag=0,n=6;
	clrscr();
	printf("Enter the value in array\n");
	for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(ar[i]==ar[j])
		{
			n=n-1;
			for(k=j;k<6;k++)
			ar[k]=ar[k+1];
			flag=1;
			j=j-1;
		}
		}
	}
	if(flag==0)
		printf("No Duplicate\n");
	else
	{
		printf("Element is Duplicate\n");
		for(i=0;i<n;i++)
			printf("%d",ar[i]);
	}
}