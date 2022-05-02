#include<conio.H>
#include<math.h>
#include<iostream.h>
void main()
{
	int a,b,c,d,res1;
	clrscr();
	cout<<"(a+ib)in enter the value of a and b:";
	cin>>a>>b;
	cout<<"(c+id)in  Enter the value of c and d:" ;
	cin>>c>>d;
	//res=a+ib/c+id*c-id/c-id;
	res1=pow(c,2)+pow(d,2);
	cout<<"("<<a<<"+i"<<b<<")("<<c<<"+i"<<d<<")"<<"/"<<res1;
	getch();
}