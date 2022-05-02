#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
	void geta()
	{
		cout<<"enter the 2 number\n";
		cin>>a>>b;
	}
	void displaya()
	{
		cout<<a+b;
	}
};
class B:public A
{
	int x,y;
	public:
	void dispayb()
	{
		cout<<x+y;
	}
	void getb()
	{
		cout<<"Enter the 2 values\n";
		cin>>x>>y;
	}
};
void main()
{
	clrscr();
	A a1;
	B b1;
	a1.geta();
	a1.displaya();
	b1.getb();
	b1.dispayb();
	b1.geta();
	b1.geta();
	getch();
}

