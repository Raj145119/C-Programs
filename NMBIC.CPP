#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
float bis(float,float);
float f(float);
float f(float x)
{
	float fn;
	fn=pow(x,3)-4*x-9;
	return fn;
}
float cal(float a,float b)
{
	float c;
	c=(a+b)/2;
	return c;

}
void main()
{
	float m,n,c1,f2,i=0,f0,f1;
	clrscr();
	cout<<"Enter the 1st value\n";
	cin>>m;
	cout<<"Enter the 2nd value\n";
	cin>>n;
	//e=(n-m)/n;
	while(i<15)
	{
	i=i+1;
	f0=f(m);
	f1=(n);
	c1=cal(m,n);
	f2=f(c1);
	if((f2*f0)<0)
	{
		n=c1;
	}
	else if((f2*f1)<0)
		m=c1;

	cout<<"\nf"<<i<<"="<<f2<<"  c"<<i<<"="<<c1<<" x1="<<m<<"  x2="<<n;
	}
	getch();
}