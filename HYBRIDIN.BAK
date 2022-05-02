#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
	void getA()
	{
		cout<<"\nEnter the number";
		cin>>a;
	}
	void displayA()
	{
		cout<<a;
	}

};
class B: virtual public A
{
	int b;
	public:
	void getB()
	{
		cout<<"\nEnter the number";
		cin>>b;
	}
	void displayB()
	{
		cout<<b;
	}

};
class C:  virtual public A
{
	int c;
	public:
	void getC()
	{
		cout<<"\nEnter the number";
		cin>>c;
	}
	void displayC()
	{
		cout<<c;
	}

};
class D:public B,public C
{
	int d;
	public:
	void getD()
	{
		cout<<"\nEnter the number";
		cin>>d;
	}
	void displayD()
	{
		cout<<d;
	}

};
void main()
{
	clrscr();
	D d1;
	d1.getD();
	d1.displayD();
	d1.getB();
	d1.displayB();
	d1.getC();
	d1.displayC();
	d1.getA();
	d1.displayA();
	getch();
}
