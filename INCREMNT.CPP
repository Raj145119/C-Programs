#include<iostream.h>
#include<conio.h>
void main()
{
	int x=5,y;
	clrscr();
	x++;
	cout<<++x<<endl;
	++x;
	cout<<x<<endl;
	y=x++;
	cout<<y<<endl;
	cout<<x<<endl;
	y=++x;
	cout<<y<<endl;
	cout<<x;
	getch();

}