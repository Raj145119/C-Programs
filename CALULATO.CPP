#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>
class calculator
{
	int x,y;
	double a,b,c;
	public:
	void add()
	{
		cout<<"Enter the 1st value\n";
		cin>>x;
		cout<<"Enter the 2nd value\n";
		cin>>y;
		cout <<"sum="<<x+y;
	}
	void sub()
	{
		cout<<"Enter the 1st value\n";
		cin>>x;
		cout<<"Enter the 2nd value\n";
		cin>>y;
		cout <<"substraction="<<x-y;
	}
	void mul()
	{
		cout<<"Enter the 1st value\n";
		cin>>x;
		cout<<"Enter the 2nd value\n";
		cin>>y;
		cout<<"mul="<<x*y;
	}
	void div()
	{
		cout<<"Enter the 1st value\n";
		cin>>x;
		cout<<"Enter the 2nd value\n";
		cin>>y;
		cout <<"division="<<x/y;
	}
	void sin1()
	{
		cout<<"Enter the value in Degree\n";
		cin>>a;
		b=sin(3.142/180*a);
		cout<<"sin("<<a<<")="<<b;
	}

	void cos1()
	{
		cout<<"Enter the value in Degree\n";
		cin>>a;
		b=cos(3.142/180*a);
		cout<<"cos("<<a<<")="<<b;
	}
	void tan1()
	{
		cout<<"Enter the value in Degree\n";
		cin>>a;
		b=sin(3.142/180*a);
		c=cos(3.142/180*a);
		cout<<"tan("<<a<<")="<<b/c;
	}
	void cot1()
	{
		cout<<"Enter the value in Degree\n";
		cin>>a;
		b=sin(3.142/180*a);
		c=cos(3.142/180*a);
		cout<<"cot("<<a<<")="<<c/b;
	}
	void sec1()
	{
		cout<<"Enter the value in Degree\n";
		cin>>a;
		b=cos(3.142/180*a);
		cout<<"sec("<<a<<")="<<1/b;
	}
	void cosec1()
	{
		cout<<"Enter the value in Degree\n";
		cin>>a;
		b=sin(3.142/180*a);
		cout<<"cosec("<<a<<")="<<1/b;
	}
};
void main()
{
	calculator obj;
	clrscr();
	int a,b;
	while(1)
	{
		clrscr();
		textcolor(GREEN);
		cout<<"Press 1  for Addition\n";
		cout<<"Press 2  for Substractom\n";
		cout<<"Press 3  for Multiplicaction\n";
		cout<<"Press 4  for Division\n";
		cout<<"Press 5  for sin function\n";
		cout<<"Press 6  for cos funtion\n";
		cout<<"Press 7  for tan funtion \n";
		cout<<"Press 8  for cot funtion\n";
		cout<<"Press 9  for sec funtion\n";
		cout<<"Press 10 for cosec funtion\n";
		cout<<"Press 11 Exit\n";
		cin>>a;
		switch(a)
		{
			case 1:
				obj.add();
			break;
			case 2:
				obj.sub();
			break;
			case 3:
				obj.mul();
			break;
			case 4:
				obj.div();
			break;
			case 5:
				obj.sin1();
			break;

			case 6:
				obj.cos1();
			break;
			case 7:
				obj.tan1();
			break;
			case 8:
				obj.cot1();
			break;
			case 9:
				obj.sec1();
			break;
			case 10:
				obj.cosec1();
			break;
			case 11:
				exit(2);
			default:
				cout<<"Wrong choice\n";
		}
		getch();
	}

}