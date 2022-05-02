#include<conio.h>
#include<iostream.h>
#include<string.h>
class S
{
	public:
		friend void string();
	private:
		char *ch;
};
class T
{
	public:
		friend void string();
	private:
		char *ch1;
};
class R
{
	public:
		friend void string();
	private:
		int arr[5];
};
void string()
{
	S a;
	T b;
	R c;
	cout<<"Enter the first string\n";
	cin>>a.ch;
	cout<<"Enter the second string\n";
	cin>>b.ch1;
	int f=strcmp(a.ch,b.ch1);
	if(f>=0)
		cout<<"BOTH ARE SAME STRING";
	else
		cout<<"NOT SAME STRING";
		getch();
	cout<<"\nEnter the 5 value in array\n";
	for(int i=0;i<5;i++)
	{
		cin>>c.arr[i];
	}
	int sum=0;
	for(i=0;i<5;i++)
	{
	       sum=sum+c.arr[i];

	}
	cout<<"Sum="<<sum;
}
void main()
{
	clrscr();
	string();
	getch();
}