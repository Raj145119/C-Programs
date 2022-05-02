#include<iostream.h>
#include<conio.h>
class a
{
	public:
	int x,y;
};
void main()
{
	a obj;
	int i;
	clrscr();
	cout <<"Enter the no";
	cin>>obj.x>>obj.y;
	cout<<obj.x+obj.y;
	getch();
}