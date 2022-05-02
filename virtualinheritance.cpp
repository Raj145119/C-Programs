#include<iostream>
using namespace std;
class s{
	public:
	s(){
		cout<<"S";
	}
};
class A:public s{
	
	 public: int a;
};
class B: public s{
	public:
	double b;
	
};
class C: virtual public A,virtual public B{
	public:
	C(){
	cout<<"c";
	}
};
int  main(){
	C c;
	c.a=10;
	c.b=12.0;
	c.a=c.b;
	cout<<c.a<<" "<<c.b;
	return 0;
}
