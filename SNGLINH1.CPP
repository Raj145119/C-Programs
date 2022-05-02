#include<iostream.h>
#include<conio.h>
class A
{
	public:
		int x;
		void display();
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
void A::display()
{
	cout<<"Display of class A";

}
void main()
{
	B b;
	clrscr();
	b.getdata();
	b.display();
	getch();
}