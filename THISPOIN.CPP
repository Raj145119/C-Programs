#include<conio.h>
#include<iostream.h>
class person
{
	char name[10];
	public:
	person()
	{
		cout<<"MY ADDRESS IS THIS\n"<<(int)this<<endl;
	}
};
void main()
{
	clrscr();
	person p1,p2;
	getch();
}