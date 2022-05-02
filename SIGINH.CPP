#include<iostream.h>
#include<conio.h>
class A
{
	public:
		int x;
		void display();
		protected:
		int y;
};
class B:public A
{
	public:

	void getdata()
	{
		cout<<"Enter the value";
		cin>>x;
		cout<<"Enter the value of y\n";
		cin>>y;
		cout<<"x="<<x;
		cout<<"\ny="<<y;
	}
};
void A::display()
{
	cout<<"\nDisplay of class A";

}
void main()
{
	B b;
	clrscr();
	b.getdata();
	b.display();
	getch();
}