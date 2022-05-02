#include<iostream.h>
#include<conio.h>
class point
{
	int x,y;
	public:
	void getdata();
	void display();
	void operator ++ ();
	void operator ++(int);
};
void point::getdata()
{
	cout<<"Enter the value of x\n";
	cin>>x;
	cout<<"Enter the value of y\n";
	cin>>y;
}
void point::display()
{
	cout<<"x="<<x;
	cout<<"y="<<y;

}
void point::operator ++()
{
       ++x;
       ++y;
}
void point::operator ++(int)
{
	x++;
	y++;
}
void main()
{
	clrscr();
	point p1,p2;
	p1.getdata();
	p2.getdata();
	++p1;
	p2++;
	p1.display();
	p2.display();
	getch();
}
