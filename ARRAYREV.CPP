#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,arr[10];
	clrscr();
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(i=0,j=9;i<10,j>=0;j--)
	{

	       //	if(i<=5)
	       //	arr[i]=arr[j];
		//if(j<5)
		arr[i]=arr[j];

	}
	for(i=0;i<10;i++)
		cout<<arr[i];
	getch();
}