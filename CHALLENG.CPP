#include<conio.h>
#include<iostream.h>
class exchange
{
	public:
	long platinum,a,b,c,sum;
	void data()
	{
		cout<<"Enter the platinum\n";
		cin>>platinum;

	}
	void function()
	{
		sum=0;
		a=platinum/2;
		b=platinum/3;
		c=platinum/4;
		sum=a+b+c;

	}
	void display()
	{
		if(sum==1)
		{
			sum=sum+1;
		}
		cout<<"after exchagein currency= "<<sum<<" units of currency";
	}

};
void main()
{
	clrscr();
	exchange e1;
	e1.data();
	e1.function();
	e1.display();
	getch();
}