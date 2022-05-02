#include<conio.h>
#include<iostream.h>
class roman
{
	int num,th,h,tens,ones;
	public:
	void getdata();
	void display();
	void calculate();
};
void roman::getdata()
{
	cout<<"Enter the number=";
	cin>>num;
	if(num==0||num>3000)
	{
		cout<<"Invalid number \n";
		return;
	}
	calculate();
}

void roman::calculate()
{
	th=num/1000;
	num=num%1000;
	h=num/100;
	num=num%100;
	tens=num/10;
	ones=num%10;
	if(th==1)
		cout<<" M";
	else if(th==2)
		cout<<" M M";
	else if(th==3)
		cout<<" M M M";

	if(h==1)
		cout<<" C";
	else if(h==2)
		cout<<" CC";
	else if(h==3)
		cout<<" CCC";
	else if(h==4)
		cout<<" CD";
	else if(h==5)
		cout<<" D";
	else if(h==6)
		cout<<" DC";
	else if(h==7)
		cout<<" DCC";
	else if(h==8)
		cout<<" DCCC";
	else if(h==9)
		cout<<" CM";

	if(tens==1)
		cout<<" X";
	else if(tens==2)
		cout<<"  XX";
	else if(tens==3)
		cout<<" XXX";
	else if(tens==4)
		cout<<" XL";
	else if(tens==5)
		cout<<" L";
	else if(tens==6)
		cout<<" LX";
	else if(tens==7)
		cout<<" LXX";
	else if(tens==8)
		cout<<" LXXX";
	else if(tens==9)
		cout<<" XC";

	if(ones==1)
		cout<<" I";
	 else if (ones==2)
		cout<<" II";
	 else if(ones==3)
		cout<<" III";
	 else if(ones==4)
		cout<<" IV";
	 else if(ones==5)
		cout<<"  V";
	 else if(ones==6)
		cout<<" VI";
	 else if(ones==7)
		cout<<" VII";
	 else if(ones==8)
		cout<<" VIII";
	 else if(ones==9)
		cout<<" IX";
}
void main()
{
	clrscr();
	roman r;
	r.getdata();
	getch();
}