#include<iostream.h>
#include<conio.h>
void main()
{
	int x=10;
	int &y=x;
	clrscr();
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	y=x+5;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	getch();
}