#include<iostream.h>
#include<conio.h>
class A
{
	int x,y;
	public:
	void getdata();
	void display();
	A operator=(int);

};
void A::getdata()
{
	cout<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;

}

void A::display()
{
	cout<<x;
	cout<<y;
}
A A::operator=(int)
{
	A p;
	p.x=x;
	p.y=y;
	return p;

}
void main()
{
	clrscr();
	A p1,p2;
	p2=p1;
	p1.getdata();
	p2.display();
	getch();
}