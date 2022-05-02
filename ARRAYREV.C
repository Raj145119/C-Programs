#include<stdio.h>
#include<conio.h>
void main()
{
	/*array reverse*/
	int i,a[5],j=0,k;
	clrscr();
	printf("\nEnter the 5 values");
	for(i=0;i<=4;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=4;i++)
	{
       //	printf("%d",a[i]);
	j=j*10+a[i];
	}
	printf("\n");
	printf("REVERSRE NO.\n");
	while(j>0)
	{
		k=j%10;
		printf("%d",k);
		printf("\n");
		j=j/10;
	}
	getch();
}