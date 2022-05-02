#include<stdio.h>
#include<conio.h>
int sum(int[],int);
int s=0;
void main()
{
	int arr[5],i,res;
	clrscr();
	printf("Enter the no. in an aray\n");
	for(i=0;i<=4;i++)
	scanf("%d",&arr[i]);
	res=sum(arr,4);
	printf("%d",res);
	getch();
}
int sum(int arr[],int i)
{

	if(i>=0)
	{
		s=s+arr[i];
		sum(arr,--i);
	}
	else
	return s;

}