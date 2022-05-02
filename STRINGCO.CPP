#include<iostream.h>
#include<conio.h>
#include<string.h>
class A
{
	public:
	char *x,*y;
};
void  main()
{
	int s;
	A obj;
	clrscr();
	cout <<"Enter  the 1st string\n";
	cin>>obj.x;
	cout <<"Enter the 2nd string\n";
	cin>>obj.y;
	s=strcmp(obj.x,obj.y);
	if(s>=0)
	cout<<"both string are same";
	else
	cout<<"Both are not same";
	getch();
}