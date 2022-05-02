#include<iostream.h>
#include<conio.h>
#define n 10
class A
{
	public:
	int x;

};

void main()
{
	//int n;
	cout <<"Enter the no";
	//cin>>n;
	A obj[n];
	clrscr();

	cout<<"Enter the  values in array\n";
	for(int i=0;i<n;i++)
	{
		cout<<"Enter no"<<i+1<<endl;
		cin>>obj[i].x;
	}
	for( i=0;i<=n-2;i++)
	{
		for(int j=i+1;j<=n-1;j++)
		{
			if(obj[i].x>obj[j].x)
			{
				int s=obj[i].x;
				obj[i].x=obj[j].x;
				obj[j].x=s;
			}
		}
	}
	cout<<"Sorting Array are\n";
	for(i=0;i<n;i++)
	{
		cout<<obj[i].x<<"\t" ;
	}
	if(n%2==0)
	{
		int m=n/2;
		cout<<"MIDDLE NO IS ="<<obj[m-1].x<<endl;
	}
	else
	{
		int m=n+1/2;
		cout<<"MIDDLE NO IS ="<<obj[m-1].x<<endl;
	}
	getch();
}
