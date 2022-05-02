#include<stdio.h>
#include<conio.h>
void main()
{
	/*REVERSRE ARRAY*/
	int a[5],i;
	clrscr();
	printf("Enter the 5 values\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);

	}
	printf("Reverse array are\n");
	for(i=4;i>=0;i--)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	getch();
}