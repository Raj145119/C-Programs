#include<iostream.h>
#include<conio.h>
class record
{
	public:
	friend void get();
	private:
	int ID,age;
	char *name;
};
void get()
{
	record a[5];
	int z[5];
	cout<<"******** ENTER THE FIVE RECORD**********\n";
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the ID" << i+1<<"\n";
		cin>>a[i].ID;
		z[i]=a[i].ID;
		cout<<"Enter the name\n";
		cin>>a[i].name;
		cout<<"Enter the age\n";
		cin>>a[i].age;
	}
	getch();
	clrscr();
	int x;
	cout<<"Enter the ID For display";
	cin>>x;
	for(i=0;i<5;i++)
	{
		if(x==z[i])
		{
			cout<<"ID="<<a[i].ID<<"\n";
			cout<<"Name="<<a[i].name<<"\n";
			cout<<"Age="<<a[i].age<<"\n";
		}
	}

}
void main()
{
	clrscr();
	get();
	getch();
}