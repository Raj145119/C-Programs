#include<iostream.h>
#include<conio.h>
class A
{
	public:
	int x=5,y=12;

};
void main()
{
	clrscr();
	A c;
	c.x=19;
	c.y=12;
	cout<<"sum of x+y"<<c.x+c.y;
	getch();
}