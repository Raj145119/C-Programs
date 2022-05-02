#include<iostream.h>
#include<conio.h>
class A
{
	int arr[5],i;
	public:
	A()
	{
		cout<<"Enter the 5 values\n";
		for(i=0;i<5;i++)
		cin>>arr[i];
	}
	friend void display();
};
class B
{
	int arr1[5],j;
	public:
	B()
	{
		cout<<"Enter the 5 values\n";
		for(j=0;j<5;j++)
		cin>>arr1[j];
	}
	friend void display();
};

void display()
{
	A a;
	B b;
	int s=0,arr2[10];
	for(a.i=0;a.i<5;a.i++)
	{
		arr2[s]=a.arr[a.i];
		s++;
	}
	for(b.j=0;b.j<5;b.j++)
	{
		arr2[s]=b.arr1[b.j];
		s++;
	}
	for(a.i=0;a.i<8;a.i++)
	{
		for(b.j=a.i+1;b.j<10;b.j++)
		{
			if(arr2[a.i]>arr2[b.j])
			{
				int x=arr2[a.i];
				arr2[a.i]=arr2[b.j];
				arr2[b.j]=x;
			}
		}
	}
	cout<<"Accending order of array\n";
	for(a.i=0;a.i<10;a.i++)
	{
		cout<< arr2[a.i]<<" ";
	}

}
void main()
{
	clrscr();
	display();
	getch();
}