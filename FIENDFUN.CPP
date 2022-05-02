#include<iostream.h>
#include<conio.h>
//void aditya();
class A
{
	public:
	int x;
	//public:
	void show();
};
class B
{
	public:
	int y;
	//public:
	void show1();
	void aditya();
};
void A::show()
{
	cout<<"Enter the value\n";
	cin>>x;
	//cout<<x;
}
void B::show1()
{
	cout<<"Enter the second value\n";
	cin>>y;
	//cout<<y;
}
void B:: aditya()
{
	A a;
	cout<<a.x+y;
}

void main()
{
	A a;
	B b;
	clrscr();
	a.show();
	b.show1();
	b.aditya();
	getch();
}