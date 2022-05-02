#include<iostream.h>
#include<conio.h>
class A
{
	public:
		int x;
};
class B:public A
{
	public:

	void getdata()
	{
		cout<<"Enter the value";
		cin>>x;
		cout<<"x="<<x;
	}
};
void main()
{
	B b;
	clrscr();
	b.getdata();
	getch();
}                c