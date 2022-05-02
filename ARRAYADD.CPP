#include<iostream.h>
#include<conio.h>
void main()
{
	int arr1[10],sum=0;
	clrscr();
	cout<<"Enter the no.in array\n";
	for(int i=0;i<10;i++)
	{
		cin>>arr1[i];
	}
	for(i=0;i<10;i++)
		sum=sum+arr1[i];
	cout<<sum;
	getch();
}