#include<iostream.h>
#include<conio.h>
class A
{
	public:
	int x;
	A()
	{
		cout<<"Hi,I am A class constructor\n";
	}
	~A()
	{
		cout<<"Hi,I am A class distructor\n";
	}
};
class B:public A
{
	public:
	B()
	{
		cout<<"Hi,I am B class constructor\n";
	}
	~B()
	{
		cout<<"Hi,I am B class distructor\n";
	}
};
class C:public A
{
	public:
	int y;
	C()
	{
		cout<<"Hi,I am C class constructor\n";
		y=10;
		x=5;
	}
	~C()
	{
		cout<<"Hi,I am C class distructor\n";
	}
	void display()
	{
		cout<<"PRAVIN";
		//x=4;
		//y=5;
		cout<<"x+y="<<x+y;
	}
};
void main()
{
	clrscr();
	C c1;
	c1.display();
	B b1;
	getch();
}