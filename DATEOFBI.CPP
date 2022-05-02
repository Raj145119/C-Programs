#include<iostream.h>
#include<conio.h>
#include<dos.h>
class A
{
	long y,m,d,y2,m2,d2;
	char ch;
	public:
	void getdob();
	void get();
};

void A::getdob()
{
       //	cout<<"Enter Your Name\n";
       //	cin>>ch;
	cout<<"**** Enter your DATE OF BIRTH  ****\n";
	//getch();
	cout<<"****##### FORMATE   YY MM DD ####****\n";
	cout<<"Year=";
	cin>>y;
	cout<<"Month=";
	cin>>m;
	cout<<"Date=";
	cin>>d;
	struct date d;

	getdate(&d);

	//cout<<"****Enter Second DATE MONTH YEAR ****\n";

	y2=d.da_year;

	m2=d.da_mon;

	d2=d.da_day;

	cout<<"Year="<<y2;
	cout<<"Month="<<m2;
	cout<<"Date="<<d2;
}
void get()
{
   //printf("The current year is: %d\n", d.da_year);
   //printf("The current day is: %d\n", d.da_day);
   //printf("The current month is: %d\n", d.da_mon);
}
void main()
{
	A a;
	clrscr();
	a.getdob();
	getch();
}