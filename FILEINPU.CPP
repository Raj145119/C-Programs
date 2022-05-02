#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
class file
{
	public:
	char *ch;
	int i;
	ifstream ptr;
	void file1();
};
void file::file1()
{
	ptr.open("aditya12.xls",ios::in);
	i=1;
	ch="HELLO";
	while((i!=6))
	{
	ptr>>ch;
	//cout<<"the value from file\n";
	cout<<ch<<endl;
	i++;
	}

}
void main()
{
	clrscr();
	file f;
	f.file1();
	getch();
}