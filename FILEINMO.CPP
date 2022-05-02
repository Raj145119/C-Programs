#include<iostream.hcc>
#include<conio.h>
#include<fstream.h>
#include<string.h>
class file
{
	public:
	char *ch;
	ifstream ptr;
	void file1();
};
void file::file1()
{
	ptr.open("abcd.txt",ios::in);
	ptr>>ch;
	cout<<"the value from file\n";
	cout<<ch<<"\n";

}
void main()
{
	clrscr();
	file f;
	f.file1();
	getch();
}