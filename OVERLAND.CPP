#include<conio.h>
#include<iostream.h>
#include<string.h>

class point
{
	char *a,*b;
	int x,y;
	public:
	void getdata()
	{
		cout<<"Enter the 1 value \n";
		cin>>y;
		cout<<"Enter the  2nd value\n";
		cin>>x;
	}
	void display()
	{
		cout<<a;
	}
	int operator &&(point p)
	{
		cout<<"Enter the 1 string \n";
		cin>>a;
		cout<<"Enter the  2nd string\n";
		cin>>b;
		strcat(a,b);
		cout<<a;
		//if(a&&p.a &&b&&p.b)
		return 1;
		//return 0;
	}
};
void main()
{
	char *p;
	point p1,p2;
	p1.getdata();
	p2.getdata();
	if(p1&&p2)
	{
		cout<<"success \n";
	}
	p1.display();
	p2.display();
	getch();

}