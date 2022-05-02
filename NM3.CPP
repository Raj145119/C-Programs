#include<iostream.h>
#include<conio.h>
#include<math.h>
float f(float);
float c(float,float)

float f(float c)
{
		f=pow(c,3)-4*c-9;
		return f;
}
float c(float x,float x1)
{
		c=(x+x1)/2;
		return c;
}
void main()
{
	float x,x1,c=0,e=0,f=0,f1=0,f2=0;
	int i=0;
	cout<<"Enter the 1st value\n";
	cin>>x;
	cout<<"Enter the 2nd values\n";
	cin>>x1;
	e=x1-x/x1;
	//f1=pow(x,3)-4*x-9;
	//f2=pow(x1,3)-4*x-9;
	do
	{

	//i=i+1;

	//cout<<f;

	//f1=pow(x,3)-4*x-9;
	//f2=pow(x1,3)-4*x1-9;
	float c(x,x1);
	if(f1*f<0)
	{
		x=x;
		x1=c;
	}
	else
	{
		x1=x1;
		x=c;
	}
	}while(((x1-x)/x1)<e);
	cout<<"x="<<x;
	cout<<"x1="<<x1;
	cout<<"no of iretation"<<i;
	cout<<"ans="<<f;
	getch();
}