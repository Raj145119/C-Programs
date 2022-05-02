#include<iostream.h>
#include<conio.h>
class A
{
	public:
	int x;

};
void main()
{
	A obj[10];
	clrscr();
	cout<<"Enter the 10 values in array\n";
	for(int i=0;i<=9;i++)
	{
		cout<<"Enter no"<<i+1<<endl;
		cin>>obj[i].x;
	}
	for( i=0;i<=8;i++)
	{
		for(int j=i+1;j<=9;j++)
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
	for(i=0;i<=9;i++)
	{
		cout<<obj[i].x<<"\t" ;
	}
	getch();
}
