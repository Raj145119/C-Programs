#include<iostream.h>
#include<conio.h>
class swap
{
	int y;
	public:
	void swap1(int &,int &);
};
void swap::swap1(int &x1,int &y1)
{
	y=x1;
	x1=y1;
	y1=y;
	cout<<"AFTER SAWAP VALUES\n";
	cout<<"x="<<x1<<endl;
	cout<<"y="<<y1<<endl;
	x1++;
	y1++;
}
void main()
{
	swap S;
	int a,b;
	clrscr();
	cout<<"Enter the 1st data\n";
	cin>>a;
	cout<<"Enter the 2nd data\n";
	cin>>b;
	S.swap1(a,b);
	cout<<a<<endl<<b;
	getch();

}