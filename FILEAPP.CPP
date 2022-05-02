#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
void written()
{
	char *ch;
	ofstream str;
	//ch=new char[100];
	str.open ("aditya0.xls",ios::app);
	cout<<"Enter the multiple lines";
	 cout<<"the Exit type exit";
	 cin>>ch;
	 while (!(strstr(ch,"exit")))
	 {
		str<<ch<<" " <<"\n";
		cin>>ch;
	 }

}
void main()
{
	clrscr();
	written();
	getch();
}