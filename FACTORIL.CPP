#include<iostream.h>
#include<conio.h>
void factorial(int);
class A
{
	public :
	int x,b;
};
void main()
{
	A obj;
	clrscr();
	cout<<"Enter the number\n";
	cin>>obj.x;
	factorial(obj.x);
	getch();
}
void factorial(int s)
{
	int fact=1;
	for(int i=1;i<=s;i++)
	{
		fact=fact*i;
	}
	cout<<fact;

}