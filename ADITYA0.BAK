#include<iostream.h>
#include<conio.h>
class person
{
	char name[15];
	int age;
	public:
	void getdata()
	{
		cout<<"Enter the Name:";
		cin>>name;
		cout<<"\nEnter the age:";
		cin>>age;
	}
	void display()
	{
		cout<<"Name="<<name;
		cout<<"\nAge="<<age;
	}
};
void main()
{
	person p1,*ptr;
	ptr=&p1;
	//ptr->getdata();
	//ptr->display();
	ptr=new person();
	//cout<<ptr;
	//ptr=new person;
	ptr->getdata();
	ptr->display();
	delete ptr;
	ptr->display();
	//cout<<ptr;
	//ptr=&p1;
	//ptr->display();
	cout<<sizeof(p1);
	getch();
}