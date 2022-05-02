#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
class fileread
{
	public:
	char *ch;
	ifstream ptr;
	ofstream str;
	void file();
	void file1();
};
void fileread::file()
{
	ptr.open("aditya.txt",ios::in);
	while(!(ptr.eof()))
	{
		ptr>>ch;
		cout<<ch;
	}
}
void fileread::file1()
{
	int i=0;
	str.open("abcnew.txt",ios::in);
	while(ch!='\0')
	{
		str<<ch[i];
		cin>>ch[i];
		i++;
	}
}
void main()
{
	clrscr();
	fileread f;
	f.file();
	//f.file1();
	getch();
}
