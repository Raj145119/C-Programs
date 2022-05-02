#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class fileread
{
	public:
	char *ch;
	ifstream ptr;
	void file();
};
void fileread::file()
{
	ptr.open("abcd.txt",ios::in);
      //	while(!(ptr.eof()))
      //	{
		ptr>>ch;
		cout<<ch;

      //	}

}
void main()
{
	clrscr();
	fileread f;
	f.file();
	getch();
}