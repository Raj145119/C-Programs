#include<conio.h>
#include<iostream.h>
class person
{
	char name[10];
	int age;
	public:
	void getdata()
	{
		cout<<"Enter the name"<<endl;
		cin>>name;
		cout<<"Enter the age\n";
		cin>>age;
	}

	void display()
	{
		cout<<"NAME="<<name<<endl;
		cout<<"AGE="<<age<<endl;
	}
};
class employ:public person
{
	char post[5];
	float salary;
	void getemp()
	{
		cout<<"Enter the post\n";
		cin>>post;
		cout<<"Enter the salary\n";
		cin>>salary;
	}
       /*	void display()
	{
		cout<<"post="<<post<<endl;
		cout<<"salary="<<salary;
	} */
};
void main()
{
	clrscr();
	person *ptr,p1;
	employ *eptr,e1;

	//e1.getdata();
	//p1.display();
	ptr=&p1;
	eptr=&e1;
	ptr->getdata();
	ptr->display();
	eptr->getemp();
	eptr->display();
	//eptr=&p1;
	//eptr->display();
	ptr=&e1;
       //	ptr->getemp();
	ptr->display();
	getch();
}