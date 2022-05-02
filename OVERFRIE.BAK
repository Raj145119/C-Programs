#include<iostream.h>
#include<conio.h>
class complex
{
	int x,y;
	public:
	void getdata();
	void display();
	friend complex operator+(complex &,complex &);
	friend complex operator+(complex &,int);
	friend complex operator+(int,complex &);
       //	friend operator/(complex &,int);
	//friend operator%(complex &,int);

};
void complex::getdata()
{
	cout<<"Enter two value\n";
	cout<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;

}

void complex::display()
{
	cout<<x<<"+"<<y<<"i"<<endl;
}
complex operator + (complex &a,complex &b)
{
	complex ptr;
	ptr.x=a.x+b.x;
	ptr.y=a.y+b.y;
	return ptr;

}
complex operator + (int n,complex &b)
{
	complex ptr;
	ptr.x=n+b.x;
	ptr.y=n+b.y;
	return ptr;

}

complex operator + (complex &a,int n)
{
	complex ptr;
	ptr.x=a.x+n;
	ptr.y=a.y+n;
	return ptr;

}
void main()
{
	clrscr();
	complex p1,p2,p3;
	int m;
	cout<<"Enter the one value\n";
	cin>>m;
	p1.getdata();
	p2.getdata();
	cout<<"Object p1+p2=";
	p3=p1+p2;
	p3.display();
	cout<<"(Object p1+ int number="<<m<<")  =" ;
	p3=p1+m;
	p3.display();
	cout<<"Object int number=10+ object p2=";
	p3=10+p2;
	p3.display();
	getch();
}