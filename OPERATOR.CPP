	/* airthamatic operator over loading*/
#include<conio.h>
#include<iostream.h>
#include<math.h>
class point
{
	int x,y;
	public:
	void getdata()
	{
		cout<<"\nEnter the value in x:";
		cin>>x;
		cout<<"\n Enter the value in y:";
		cin>>y;
	}
	void display()
	{
		cout<<"\nx="<<x;
		cout<<"\ny="<<y;

	}
	point operator+(point obj)
	{
		point temp;
		temp.x=x+obj.x;
		temp.y=y+obj.y;
		return temp;
	}
	point operator-(point obj)
	{
		point s;
		s.x=x-obj.x;
		s.y=y-obj.y;
		return s;
	}

};
void main()
{
	point p1,p2,p3;
	clrscr();
	p1.getdata();
	p2.getdata();
	p3=p1+p2;
	p3.display();
	p3=p1-p2;
	p3.display();
	getch();
}
