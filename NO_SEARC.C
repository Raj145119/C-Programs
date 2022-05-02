#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,j,x,k=0;
	clrscr();
	printf("Enter the no.\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the  any no.");
	scanf("%d",&x);
	for(j=0;j<10;j++)
	{
		if(arr[j]==x)
		{
		      //	printf("Searching found\n");
			k++;
		      //	break;
		}
	}
	printf("%d",k);
	getch();
}