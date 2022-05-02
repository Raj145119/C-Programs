#include<iostream>

using namespace std;

int Add(int a, int b=50){
	int sum;
	sum=a+b;
	return sum;//running without return too...
}

double Add(double a, double b){
	double sum = a+b;
	return sum;//running without return too...
}


int main(){
	int a=10,b=10;
	double c=100.5,d=200.5;
	cout<<Add(a)<<endl;
	cout<<Add(a,b)<<endl;
	cout<<Add(c,d)<<endl;
	cout<<Add(c);
	
}
