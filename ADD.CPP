#include<iostream.h>
#include<conio.h>
class a
{
	public:
	int x,y;
	void add();
};
void a::add()
{
	cout<<"Enter the two values\n";
	cin>>x>>y;
	cout<<"X+Y="c<<x+y;

}

void main()
{
	   clrscr();
	   a b;
	   b.add();
	   getch();
}