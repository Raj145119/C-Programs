#include<iostream.h>
#include<conio.h>
#include<string.h>
class A
{
	public:
	int x,y;
	char z;

};
void main()
{
	int a;
	clrscr();
	A obj;
	cout<<"Enter the two values\n";
	cin>>obj.x>>obj.y;
	a=obj.x+obj.y;
	cout<<a<<endl;
	cout<<"Enter your name\n";
	cin>>obj.z;
	cout<<obj.z;
	getch();
}
