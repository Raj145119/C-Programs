#include<iostream>
#include<dos.h>
#define MAX 10
using namespace std;


class Stack{
	int top;
	int arr[MAX];
	public:
		void init(){
			top=-1;
		}
		void push(int val){
			if(top==MAX-1){
				cout<<"Stack overflow";
				exit(0);
			}
			else
			arr[++top] = val;
		}
		int pop(){
			if(top==-1){
				cout<<"Stack Underflow";
				exit(0);
			}
			return arr[top--];
		}
		void print(){
			if(top>=-1 && top<MAX)
			cout<<arr[top];
			else
			cout<<"Invalid call";
		}
};


int main(){
	Stack s;
	s.init();
	for(int i=0;i<MAX;i++)
	{
		s.push(i);
		s.print();
	}
	
	s.pop();
	s.print();
	
}
