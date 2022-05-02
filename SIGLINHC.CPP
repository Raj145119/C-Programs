#include<iostream.h>
#include<conio.h>
class A
{
	public:
		int x;
		A(int);
		A(){}
		~A();
		void display();
		protected:
		int y;
};
class B:public A
{
	public:
	B();
	~B();
      /*	void getdata()
	{
		cout<<"Enter the value";
		cin>>x;
		cout<<"Enter the value of y\n";
		cin>>y;
		cout<<"x="<<x;
		cout<<"\ny="<<y;
	}*/
};
A::A(int z)
{
	cout<<"\nconstructor of class A\n";
	cout<<z;
}
B::B()
{
	A a(5);
	cout<<"constructor of class B\n";
}
/*void A::display()
{
	cout<<"\nDisplay of class A";

} */
A::~A()
{
	cout<<"\nDistructor of class A";
}
B::~B()
{
	cout<<"\nDistructor of class B";
}
void main()
{

	clrscr();
	B b;
	//b.getdata();
	//b.display();
	getch();
}