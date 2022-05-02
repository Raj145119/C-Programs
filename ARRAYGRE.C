#include<stdio.h>
#include<conio.h>
void main()
{

	int arr[5],i,gr,temp;
	clrscr();
	printf("Enter the 5 values\n");
	for(i=0;i<=4;i++)
	scanf("%d",&arr[i]);
	temp=arr[0];
	for(i=0;i<=4;i++)
	{
	     if(arr[i]>=temp)
	     gr=arr[i];
	}
	printf("GREATEST=%d",gr);
	getch();
}