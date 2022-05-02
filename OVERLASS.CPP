#include<iostream.h>
#include<conio.h>
#include<process.h>
class over
{
	int x,y;
	public:
	void getdata();
	void display();
	over operator + (over);
	over operator - (over);
	over operator * (over);
	over operator / (over);
	over operator % (over);
};
void over::getdata()
{
	cout<<"\nEnter the value of x=";
	cin>>x;
	cout<<"\nEnter the value of y=";
	cin>>y;

}
void over::display()
{
	cout<<"\nx="<<x;
	cout<<"\ny="<<y;
}
over over::operator + (over obj)
{
	over ptr;
	ptr.x=x+obj.x;
	ptr.y=y+obj.y;
	return ptr;
}
over over::operator-(over obj)
{
	over ptr;
	ptr.x=x-obj.x;
	ptr.y=y-obj.y;
	return ptr;
}
over over::operator*(over obj)
{
	over ptr;
	ptr.x=x*obj.x;
	ptr.y=y*obj.y;
	return ptr;
}
over over::operator/(over obj)
{
	over ptr;
	ptr.x=x/obj.x;
	ptr.y=y/obj.y;
	return ptr;
}
 over over::operator%(over obj)
{
	over ptr;
	ptr.x=x%obj.x;
	ptr.y=y%obj.y;
	return ptr;
}
void main()
{
	clrscr();
	int ch;
	over p1,p2,p3;
	while(1)
	{
		clrscr();
		cout<<"\npress 1 for:Additon operator";
		cout<<"\npress 2 for:Substractin operator";
		cout<<"\npress 3 for:multiplaction operator";
		cout<<"\npress 4 for:division operator";
		cout<<"\npress 5 for:modules operator";
		cout<<"\npress 6 for:exit";
		cin>>ch;
		switch(ch)
		{
			case 1:
				p1.getdata();
				p2.getdata();
				p3=p1+p2;
				p3.display();
			break;
			case 2:
				p1.getdata();
				p2.getdata();
				p3=p1-p2;
				p3.display();
			break;
			case 3:
				p1.getdata();
				p2.getdata();
				p3=p1*p2;
				p3.display();
			break;
			case 4:
				p1.getdata();
				p2.getdata();
				p3=p1/p2;
				p3.display();
			break;
			case 5:
				p1.getdata();
				p2.getdata();
				p3=p1%p2;
				p3.display();
			break;
			case 6:
			exit(1);
		}
		getch();
	}

}
