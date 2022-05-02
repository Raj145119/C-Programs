#include<iostream.h>
#include<conio.h>
#include<fstream.h>

class string
{
	public:
	char ch,st;
	ifstream str1;
	void getdata()
	{
		cout<<"Enter the id\n";
		cin>>ch;
		display();
	}
	void display();

};

void string::display()
{

		str1.open("aditya10.xls",ios::in);
		while(!(str1.eof()))
		{
		str1>>st;
		if(st==ch)
		cout<<st;

		}
}
void main()
{
	clrscr();
	string s;
	s.getdata();
	getch();
}