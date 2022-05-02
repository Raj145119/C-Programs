#include<conio.h>
#include<iostream.h>
#include<string.h>
class over
{
	char *name,*add,roll[5],a,z[5];
	public:
	over(int []);
	over(char *,char *);
	over();
};
class over1
{
	void search(over);

};

void over1::search(over obj)
{
	int x;
	cout<<"Enter the Roll No For display";
	cin>>x;
	for(int i=0;i<5;i++)
	{
		if(x==obj.z[i])
		{
			cout<<"Roll no="<<obj.roll[i];
			cout<<"Name="<<obj.name[i];
			cout<<"Age="<<obj.add[i];
		}
	}

}
over::over(int arr[])
{
	for(int i=0;i<5;i++)
	roll[i]=arr[i];
	z[i]=roll[i];
}
over::over(char *b,char *c)
{
for(int i=0;i<5;i++)
{
	strcpy(name,b);
	strcpy(add,c);
}
}
over::over()
{
	a=5;

}
void main()
{
	over1 p1;
	int a[5];
	char n[10],ad[10];
	cout<<"******** ENTER THE FIVE RECORD**********\n";
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the Roll NO" << i+1<<"\n";
		cin>>a[i];
		cout<<"Enter the name\n";
		cin>>n[i];
		cout<<"Enter the address\n";
		cin>>ad[i];
	}
	over p(a);
	over p2(n,ad);
	over p3;
	p1.search();
	getch();


}