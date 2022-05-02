#include<iostream.h>
#include<conio.h>
#include<string.h>
class A
{
	public:
	char *x;
};
void main()
{
	A obj[2];
	clrscr();
	cout<<"Enter the 2 string\n";
	for(int i=0;i<2;i++)
	{
		cout<<"Enter "<<i+1;
		cin>>obj[i].x;
	}
	int s =strcmp(obj[0].x,obj[1].x);
	if(s>=0)
	cout<<"BOTH STRING IS SAME\n";
	else
	cout<<"BOTH STRING NOT SAME";
	getch();
}