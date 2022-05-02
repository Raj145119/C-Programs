#include<iostream.h>
#include<conio.h>
#include<process.h>

class operator1
{
	int x,y,z;
	public:
	void getdata();
	void display();
	operator1 operator + (operator1);
	operator1 operator - (operator1);
	operator1 operator * (operator1);
	operator1 operator / (operator1);
	operator1 operator % (operator1);
	int operator > (operator1);
	int operator < (operator1);
	int operator >= (operator1);
	int operator <= (operator1);
	int operator != (operator1);
	int operator == (operator1);
	int operator &&(operator1);
	int operator || (operator1);
	void operator ! ();
	void operator = (operator1);
	void operator += (operator1);
	void operator -= (operator1);
	void operator *= (operator1);
	void operator /= (operator1);
	void operator %= (operator1);
	void operator++();
	void operator++(int);
	void operator --();
	void operator --(int);
};
void operator1::getdata()
{
	cout<<"Enter the value of x\n";
	cin>>x;
	cout<<"Enter the value of y\n";
	cin>>y;
}
void operator1::display()
{
	cout<<"x="<<x;
	cout<<"y="<<y;
}
operator1 operator1::operator + (operator1 obj)
{
	operator1 ptr;
	ptr.x=x+obj.x;
	ptr.y=y+obj.y;
	return ptr;
}
operator1 operator1::operator-(operator1 obj)
{
	operator1 ptr;
	ptr.x=x-obj.x;
	ptr.y=y-obj.y;
	return ptr;
}
operator1 operator1::operator*(operator1 obj)
{
	operator1 ptr;
	ptr.x=x*obj.x;
	ptr.y=y*obj.y;
	return ptr;
}
operator1 operator1::operator/(operator1 obj)
{
	operator1 ptr;
	ptr.x=x/obj.x;
	ptr.y=y/obj.y;
	return ptr;
}
operator1 operator1::operator%(operator1 obj)
{
	operator1 ptr;
	ptr.x=x%obj.x;
	ptr.y=y%obj.y;
	return ptr;
}
int operator1::operator > (operator1 obj)
{
	if(x>obj.x &&y>obj.y)
	return 1;
	return 0;
}
int operator1::operator < (operator1 obj)
{
	if(x<obj.x &&y<obj.y)
	return 1;
	return 0;
}
int operator1::operator >= (operator1 obj)
{
	if(x>=obj.x &&y>=obj.y)
	return 1;
	return 0;
}
int operator1::operator <= (operator1 obj)
{
	if(x<=obj.x && y<=obj.y)
	return 1;
	return 0;
}
int operator1::operator != (operator1 obj)
{
	if(x!=obj.x && y!=obj.y)
	return 1;
	return 0;
}
int operator1::operator == (operator1 obj)
{
	if(x==obj.x && y==obj.y)
	return 1;
	return 0;
}
int operator1::operator &&(operator1 obj)
{
	if(x&&obj.x && y&&obj.y)
	return 1;
	return 0;
}
int operator1::operator || (operator1 obj)
{
	if(x||obj.x ||y||obj.y)
	return 1;
	return 0;
}
void operator1::operator !()
{
	!x;
	!y;
}
void operator1::operator = (operator1 obj)
{
	x=obj.x;
	y=obj.y;
}
void operator1::operator += (operator1 obj)
{
	x+=obj.x;
	y+=obj.y;
}
void operator1::operator -= (operator1 obj)
{
	x-=obj.x;
	y-=obj.y;
}
void operator1::operator *= (operator1 obj)
{
	x*=obj.x;
	y*=obj.y;
}
void operator1::operator /= (operator1 obj)
{
	x/=obj.x;
	y/=obj.y;
}
void operator1::operator %= (operator1 obj)
{
	x%=obj.x;
	y%=obj.y;
}
void operator1::operator ++ ()
{
	++x;
	++y;
}
void operator1::operator ++ (int)
{
	x++;
	y++;
}
void operator1::operator -- ()
{
	--x;
	--y;
}
void operator1::operator -- (int)
{
	x--;
	y--;
}

void main()
{
	operator1 p1,p2,p3;
	int x,y,z,n,m;
	clrscr();
	while(1)
	{
		clrscr();
		cout<<"Enter 1 for Airthmatic operator\n";
		cout<<"Enter 2 for Relational operator\n";
		cout<<"Enter 3 for Assignment operator\n";
		cout<<"Enter 4 for logical operator\n";
		cout<<"Enter 5 for increment/decrement operator\n";
		cout<<"Enter 6 for bitwise operator\n";
		cout<<"Enter 7 for comma operator\n";
		cout<<"Enter 8 for Exit\n";
		cin>>n;
		switch(n)
		{
			case  1:
				cout<<"Enter 1 for Addition \n";
				cout<<"Enter 2 for Substraction \n";
				cout<<"Enter 3 for Multiplication\n";
				cout<<"Enter 4 for division \n";
				cout<<"Enter 5 for modulus\n";
				cin>>m;
				switch(m)
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

				}
			break;
			case 2:
				cout<<"Enter 1 for greaterthan \n";
				cout<<"Enter 2 for lessthan \n";
				cout<<"Enter 3 for greaterthan equall \n";
				cout<<"Enter 4 for greaterthan equall \n";
				cout<<"Enter 5 for Not equall \n";
				cout<<"Enter 6 for Equall \n";
				cin>>m;
				switch(m)
				{
					case 1:
					p1.getdata();
					p2.getdata();
					if(p1>p2)
						cout<<"object p1 is greater than p2\n";
					else
					       cout<<"object p2 is greater than p1\n";
					break;
					case 2:
					p1.getdata();
					p2.getdata();
					if(p1<p2)
						cout<<"object p1 is lessthan p2\n";
					else
					       cout<<"object p2 is lessthan p1\n";
					break;
					case 3:
					p1.getdata();
					p2.getdata();
					if(p1>=p2)
						cout<<"object p1 is greaterthan equllto p2\n";
					else
					       cout<<"object p2 is greaterthan equall p1\n";
					break;
					case 4:
					p1.getdata();
					p2.getdata();
					if(p1<=p2)
						cout<<"object p1 is lessthan equllto p2\n";
					else
					       cout<<"object p2 is lessthan equall p1\n";
					break;
					case 5:
					p1.getdata();
					p2.getdata();
					if(p1!=p2)
						cout<<"object p1 is not equllto p2\n";
					else
					       cout<<"object p2 is not equall p1\n";
					break;
					case 6:
					p1.getdata();
					p2.getdata();
					if(p1==p2)
						cout<<"object p1 is equllto p2\n";
					else
					       cout<<"object p2 is equall p1\n";
					break;

				}
				break;
				case 3:
				cout<<"Enter 1 for assign\n";
				cout<<"Enter 2 for Addition than assign\n";
				cout<<"Enter 3 for Substraction than assign\n";
				cout<<"Enter 4 for Multiplaction than assign\n";
				cout<<"Enter 5 for division than assign\n";
				cout<<"Enter 6 for Modules than assign\n";
				cin>>m;
				switch(m)
				{
					case 1:
					p1.getdata();
					p2.getdata();
					p1=p2;
					p1.display();
					break;
					case 2:
					p1.getdata();
					p2.getdata();
					p1+=p2;
					p1.display();
					break;
					case 3:
					p1.getdata();
					p2.getdata();
					p1-=p2;
					p1.display();
					break;
					case 4:
					p1.getdata();
					p2.getdata();
					p1*=p2;
					p1.display();
					break;
					case 5:
					p1.getdata();
					p2.getdata();
					p1/=p2;
					p1.display();
					break;
					case 6:
					p1.getdata();
					p2.getdata();
					p1%=p2;
					p1.display();
					break;
				}
				break;
				case 4:
				cout<<"Enter 1 for logical AND\n";
				cout<<"Enter 2 for logical OR\n";
				cout<<"Enter 3 for logical NOT\n";
				cin>>m;
				switch(m)
				{
					case 1:
					p1.getdata();
					p2.getdata();
					int con=p1&&p2;
					cout<<"condition="<<con;
					if(p1&&p2)
						cout<<"logical && of p1 && p2 "<<con;
					break;
					case 2:
					p1.getdata();
					p2.getdata();
					con=p1||p2;
					cout<<"condition="<<con;
					if(p1||p2)
						cout<<"logical || of p1 || p2 "<<con;
					break;
					case 3:
					p1.getdata();
					p2.getdata();
					!p1;
					p1.display();
					!p2;
					p2.display();
					break;
				}
				break;
			case 5:
				cout<<"Enter 1 for increment operator \n";
				cout<<"Enter 2 for decrement operator\n";
				cin>>m;
				switch(m)
				{
					case 1:
					cout<<"Enter 1 for pre increment\n";
					cout<<"Enter 2 for post increment \n";
					cout<<m;
					switch(m)
					{
						case 1:
						p1.getdata();
						++p1;
						p1.display();
						break;
						case 2:
						p1.getdata();
						p1++;
						p1.display();
						break;
					}
					break;
					case 2:
					cout<<"Enter 1 for pre decrement \n";
					cout<<"Enter 2 for post decrement \n";
					cout<<m;
					switch(m)
					{
						case 1:
						p1.getdata();
						--p1;
						p1.display();
						break;
						case 2:
						p1.getdata();
						p1--;
						p1.display();
						break;
					}
					break;

				}
				break;

			case 8:
			exit(1);
		}
		getch();
	}


}