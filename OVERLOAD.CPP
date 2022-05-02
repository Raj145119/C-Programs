#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
	char ch[30];
	public:
	void getdata()
	{
		cout<<"Enter the string";
		cin>>ch;
	}
	void display()
	{
		cout<<ch;
	}
      operator char* ();
};

string::operator char* ()
{
	char st[30];
	strupr(ch);
	//strcpy(st,ch);
	//cout<<ch;
	return ch;
}
void main()
{
	char *str;

	clrscr();
	//cout<<"Enter the string\n";
	//cin>>str;

	string s1;
	s1.getdata();
	str=s1;
	cout<<str;
	getch();
}
