#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<dos.h>
class A
{
	int d,m,y;
	int d2,m2,y2;
	int dd,mm,yy;
	public:
	void getdob();
	void display();
	void dob();
	void dob2();

};
void A::getdob()
{
	cout<<"**** Enter your DATE OF BIRTH  ****\n";
	cout<<"****##### FORMATE   YY MM DD ####****\n";
	cout<<"Year=";
	cin>>y;
	cout<<"Month=";
	cin>>m;
	cout<<"Date=";
	cin>>d;
	struct date d;
	getdate(&d);
	y2=d.da_year;
	m2=d.da_mon;
	d2=d.da_day;
	dob();
}
void A::dob()
{
	switch(m2)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(d2<d)
			{
				m2=m2-1;
				d2=d2+31;
			}
			else if(m2<m)
			{
				y2=y2-1;
				m2=m2+12;
			}
			dob2();
		break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(d2<d)
			{
				m2=m2-1;
				d2=d2+30;
			}
			else if(m2<m)
			{
				y2=y2-1;
				m2=m2+12;
			}
			dob2();
		break;
		case 2:
			if(d2<d)
			{
				if(y2%4==0)
				{
					m2=m2-1;
					d2=d2+29;
				}
				else
				{
					m2=m2-1;
					d2=d2+28;
				}
			}
			else if(m2<m)
			{
				y2=y2-1;
				m2=m2+12;
			}
			dob2();
			break;
	}
}
void A::display()
{
	cout<<"  year= " << yy <<"  month= " << mm <<"  day= " <<dd;
}
void A::dob2()
{
	yy=y2-y;
	mm=m2-m;
	dd=d2-d;
	display();
}
void main()
{
	A a;
	clrscr();
	a.getdob();
	getch();
}