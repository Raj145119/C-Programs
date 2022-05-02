#include<stdio.h>
#include<conio.h>
int hcf(int,int);
void main()
{
	int i,j,res;
	clrscr();
	printf("\nEnter the geratest no.\n");
	scanf("%d",&i);
	printf("Enter the smalest no.\n");
	scanf("%d",&j);
	if(i>j)

	{
		res=hcf(i,j);
		printf("hcf=%d",res);
	}
	else
	printf("%d is not divisor by %d",i,j);
	getch();
}
int hcf(int i,int j)
{
	int k;
	if(j!=0)
	{
		k=i%j;
		i=j;
		j=k;
		hcf(i,j);
	}
	else
	return i;
}






