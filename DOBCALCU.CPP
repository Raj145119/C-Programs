#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<dos.h>
class A
{
	long int a,b;
	int d,a1,m,y;
	int b2,d2,m2,y2;
	int dd,mm,yy;
	char ch;
	public:
	void getdob();
	void display();
       //	void dob();
       //	void dob1();
	void calculate();
	void dob2();

};
void A::getdob()
{
       /*	//cout<<"Enter Your Name\n";
       //	cin>>ch;
	cout<<"**** Enter your DATE OF BIRTH  ****\n";
	//getch();
	cout<<"****##### FORMATE   YYMMDD ####****\n";
	cin>>a;
	cout<<"****Enter Second DATE MONTH YEAR ****\n";
	cin>>b;
	cin>>ch; */
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

	//cout<<"****Enter Second DATE MONTH YEAR ****\n";

	y2=d.da_year;

	m2=d.da_mon;

	d2=d.da_day;
       /*	cout<<"****Enter Second DATE MONTH YEAR ****\n";
	cout<<"Year=";
	cin>>y2;
	cout<<"Month=";
	cin>>m2;
	cout<<"Date=";
	cin>>d2; */
}
/*void A::dob()
{
	d=a%100;
	a1=a/100;
	m=a1%100;
	y=a1/100;

}
void A::dob1()
{

	d2=b%100;
	b2=b/100;
	m2=b2%100;
	y2=b2/100;

} */
void A::dob2()
{
	dd=d2-d;
	mm=m2-m;
	yy=y2-y;
}
void A::display()
{
	//cout<<ch<<endl;
	cout<<"year=" << yy <<"month=" << mm <<"day=" <<dd;


}
void A::calculate()
{
	if(m2<=7 && m2%2==1)
	{
		if(d2<d)
		{
			m2=m2-1;
			d2=d2+31;
		}
		if(m2<m)
		{
			y2=y2-1;
			m2=m2+12;
		}
	}
	else if(m2>=8 && m2%2==0)
	{
		if(d2<d)
		{
			m2=m2-1;
			d2=d2+31;

		}
		if(m2<m)
		{
			  y2=y2-1;
			  m2=m2=12;
		}
	}
	else if(m2<=6 && m2%2==0)
	{
		if(d2<d && m2==2)
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
		else
		{
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

		}
	}
	if(m2==9 || m2==11)
	{
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
	}
}
void main()
{
	A x;
	clrscr();
	x.getdob();
      //	x.dob();
      //	x.dob1();
	x.calculate();
	x.dob2();
	x.display();
	getch();

}






