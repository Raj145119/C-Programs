#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[5],res;
	clrscr();
	printf("\n enter the number in an array:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("1st array is\n");
	for(i=0;i<=4;i++)
	{
		printf("\ %d",a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(a[i]>a[j])
			{
			res=a[i];
			a[i]=a[j];
			a[j]=res;
			}
		}
	}
	printf("\n accending array \n");
	for(i=0;i<=4;i++)
	printf("\ %d",a[i]);
	getch();

}
