#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class A
{
	public:
	ofstream out1;
	char *str;
	void filewrite();
};
void A::filewrite()
{
	out1.open("abc.txt",ios::binary);
	cout<<"Enter the line to write on file\n";
	cin>>str;
	out1<<str;
	cout<<"String writen";
}
void main()
{
	clrscr();
	A a;
	a.filewrite();
	getch();
}