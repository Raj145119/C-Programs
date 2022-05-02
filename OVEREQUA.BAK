#include<iostream.h>
#include<conio.h>
#include<string.h>
class over
{
	char *x;
	public:
	void getdata();
	void display();
	int operator == (over);
};
void over::getdata()
{
	cout<<"\nEnter the String";
	cin>>x;

}
void over::display()
{
	cout<<"\n"<<x;
}
int over::operator == (over obj)
{
	int i=0,j=0;
	while(x[i]!='\0')
	{
		i++;
	}
	while(obj.x[j]!='\0')
		j++;
	if(i==j)
		cout<<"both are not same string\n";
	else
	{
		i=0,j=0;
		while(x[i]!='\0')
		{
			if(x[i]==obj.x[j])
			j++;
			i++;
		}
		return 1;
		return 0;
	}

}
void main()
{
	clrscr();
	over p1,p2;
	p1.getdata();
	p2.getdata();
	if(p1==p2)
		cout<<"Both String are same\n";
	else
		cout<<"Both string are not same\n";
	p1.display();
	getch();

}