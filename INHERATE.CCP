#include<iostream.h>
#include<conio.h>
class A
{
	public:
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
	C()
	{
		cout<<"Hi,I am C class constructor\n";
	}
	~C()
	{
		cout<<"Hi,I am C class distructor\n";
	}
};
void main()
{
	clrscr();
	C c1;
	B b1;
	getch();
}