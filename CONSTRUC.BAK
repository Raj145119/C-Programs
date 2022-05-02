#include<iostream.h>
#include<conio.h>
class A
{
	int arr[5],i;
	public:
	void display();
	A()
	{
		cout<<"Enter the 5 values\n";
		for(i=0;i<5;i++)
		cin>>arr[i];
	}
};

void A::display()
{
	int s=0;
	for(i=0;i<5;i++)
	{
		if(arr[i]>s)
		{
			  s=arr[i];
		}
	}
	cout<<"Greater values ofarray is="<<s;
}
void main()
{
	clrscr();
	A a;
	a.display();
	getch();
}