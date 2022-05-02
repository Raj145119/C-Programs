#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
	int b;
	void geta()
	{
		cout<<"\nenter the 2 number\n";
		cin>>a>>b;
	}
	void displaya()
	{
		cout<<"\nSum of class A ="<<a+b;
		cout<<"\na="<<a;
	}
};
class B:public A
{
	int x,y;
	public:
	void displayb()
	{
		cout<<"\ninherit of class A \"sum\"="<<x+y;
	}
	void getb()
	{
		cout<<"\nEnter the 2 values\n";
		cin>>x>>y;
	}

};
class C:public B
{
	int p;
	public:
	int q,r;
	void displayC()
	{
		r=p+q;
		cout<<"\nSUM="<<r;
	}
	void getC()
	{
		cout<<"\nEnter the two number\n";
		cin>>p>>q;
	}
};
void main()
{
	clrscr();
	A a1;
	B b1;
	C c1;
	//a1.geta();
	//a1.displaya();
	//b1.getb();
	//b1.displayb();
	b1.geta();
	b1.displaya();
	//c1.getC();
	//c1.displayC();
	c1.geta();
	c1.displaya();
	b1.displaya();
	//c1.displayC();
	//c1.getb();
	//c1.displayb();
	getch();
}

