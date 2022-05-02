#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class student
{
	public:
	char name[15];
	int age;
	void write();
};
void student::write()
{
	student s1,s2;
	fstream obj;
	//clrscr();
	obj.open("mybinary.txt",ios::app|ios::binary);
	cout<<"Enter the name\n";
	cin>>s1.name;
	cout<<"Enter the age\n";
	cin>>s1.age;
	obj.write((char*)&s1,sizeof(s1));
	obj.close();
	obj.open("mybinary.txt",ios::in|ios::binary);
	obj.read((char*)&s2,sizeof(s2));
	cout<<"Your name="<<s2.name;
	cout<<"Your age="<<s2.age;
	obj.close();
}
void main()
{
	clrscr();
	student s;
	s.write();
	getch();
}

