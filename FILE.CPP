#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
void main()
{
	int a,b,c;
	char ch[10],s='y';
	ofstream st;
	clrscr();
	st.open("aditya.cpu");
	while(s=='y')
	{
		cout<<"Enter the name\n";
		cin>>ch;
		st<<ch;
		cout<<"Enter the roll no\n";
		cin>>a;
		st<<a;
		cout<<"if you want to create record press y\n";
		cin>>s;
	}
	getch();
}