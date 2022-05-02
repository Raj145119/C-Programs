#include<iostream.h>
#include<conio.h>
void main()
{
	int arr[10],x;
	clrscr();
	cout<<"Enter the value in array\n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"acending order\n";
	for(i=0;i<=3;i++)
	{
		for(int j=i+1;j<=5;j++)
		{
			if(arr[i]>arr[j])
			{
				x=arr[i];
				arr[i]=arr[j];
				arr[j]=x;
			}
		}
	}
	for(i=0;i<5;i++)
	cout<<arr[i]<<endl;
	getch();

}

