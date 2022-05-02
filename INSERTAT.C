#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,k;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=5;i++)
	{
		k=a[i];
		j=i-1;
		while((k<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
	for(i=0;i<5;i++)
	printf("%d  ",a[i]);
	getch();
}