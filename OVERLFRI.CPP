#include<iostream.h>
#include<conio.h>
class complex
{
	int x,y;
	public:
	void getdata();
	void display();
	friend complex operator+(complex &,complex &);
	friend complex operator-(complex &,complex &);
	friend complex operator*(complex &,int);
	friend complex operator/(complex &,int);
	friend complex operator%(complex &,int);

};
void complex::getdata()
{
	cout<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;

}

void complex::display()
{
	cout<<x<<"+i"<<y;
}
complex operator + (complex &a,complex &b)
{
	complex ptr;
	ptr.x=a.x+b.x;
	ptr.y=a.y+b.y;
	return ptr;

}
complex operator -  (complex &a,complex &b)
{
	complex ptr;
	ptr.x=a.x-b.x;
	ptr.y=a.y-b.y;
	return ptr;
}
complex operator*(complex &a,int j)
{
	complex ptr;
	ptr.x=a.x+j;
	ptr.y=a.y+j;
	return ptr;
}
complex operator/(complex &a,int j)
{
	complex ptr;
	ptr.x=a.x/j;
	ptr.y=a.y/j;
	return ptr;
}
complex operator%(complex &a,int j)
{
	complex ptr;
	ptr.x=a.x%j;
	ptr.y=a.y%j;
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
	p3=p1+p2;
	p3.display();
	p3=p1-p2;
	p3.display();
	p3=p1*m;
	p3.display();
	p3=p1/m;
	p3.display();
	p3=p1%m;
	p3.display();
	getch();
}