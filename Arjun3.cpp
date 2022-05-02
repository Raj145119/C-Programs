#include<iostream>

using namespace std;

int Add(){
	return 5+6;
}

int Add(int a){
	return a+6;
}

int Add(int a,int b){
	return a+b;
}


int main(){
	cout<<Add()<<endl;
	cout<<Add(5)<<endl;
	cout<<Add(5,6)<<endl;
}
