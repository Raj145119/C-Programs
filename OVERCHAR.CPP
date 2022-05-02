#include<iostream.h>
#include<conio.h>
#include<string.h>
class over
{
	char x;
	public:
	void getdata();
	void display();
	int operator > (over);
};
void over::getdata()
{
	cout<<"\nEnter the character";
	cin>>x;

}
void over::display()
{
	cout<<"\n"<<x;
}
int over::operator > (over obj)
{

	if(x>obj.x);
	return 1;
	return 0;
}
void main()
{
	clrscr();
	over p1,p2;
	p1.getdata();
	p2.getdata();
	if(p1>p2)
		cout<<"p1 obj is greater than p2 obj\n";
	else
		cout<<"p2 obj is greater than p1 obj\n";
	p1.display();
	p2.display();
	getch();

}