#include<stdio.h>
#include<conio.h>
#include <math.h>
#include<iostream.h>
void main()
{
	float x,x1,y,a,b,f,f1,e;
	cout<<" enter the 1st value\n";
	cin>>x;
	cout<<"Enter the value 2nd value";
	cin>>x1;
	e=(x1-x)/x1;
	//while(e>(0.001))
	while(f1==x||f1==x1)
	{
	//e=(x1-x)/x1;
	a=pow(x,3)+3*x-5;
	b=pow(x1,3)+3*x1-5;
	f=x-((x1-x)*a)/(b-a);
	f1=pow(f,3)+3*f-5;
	if((a*f1)<0)
	{
		x1=f1;
		x=x;
	}
	else if ((b*f1)<0)
	{
		x=f1;
		x1=x1;
	}
	}
	cout<<f1;
}